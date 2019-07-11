/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup VOP
 *  @{
 */

/** @defgroup VOP_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The VOP driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"
#include "hal_math.h"

#ifdef HAL_VOP_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define VOP_WIN_YUV4_FORMAT BIT(4)
#define VOP_WIN_BPPX_FORMAT BIT(5)

#define IS_YUV_FORMAT(x) ((x >= VOP_FMT_YUV420SP) && (x <= VOP_FMT_VYUY422_4)) ? 1 : 0
#define IS_BPP_FORMAT(x) ((x >= VOP_FMT_1BPP) && (x <= VOP_FMT_8BPP)) ? 1 : 0

#define MCU_CS_STR 2
#define MCU_CS_END 12
#define MCU_WR_STR 4
#define MCU_WR_END 8
#define MCU_TOTAL  15

#define MIPI_SWITCH_TIME_OUT 100

/********************* Private Structure Definition **************************/
typedef enum {
    VOP_WIN0,
    VOP_WIN1,
    VOP_WIN2,
} eVOP_WinId;

typedef enum {
    DCLK_DISABLE,
    DCLK_ENABLE,
} eVOP_DclkSwitch;

typedef enum {
    RGB888TORGB565,
    RGB888TORGB666,
} eVOP_DitherDownMode;

typedef enum {
    DITHER_DOWN_ALLEGRO,
    DITHER_DOWN_FRC,
} eVOP_DitherDownSel;

typedef enum {
    OUTPUT_MODE_888,
    OUTPUT_MODE_666,
    OUTPUT_MODE_565,
    OUT_MODE_S888       = 8,
    OUT_MODE_S888_DUMMY = 12,
} eVOP_OutputMode;

typedef enum {
    BCSH_BLACK_MODE,
    BCSH_BLUE_MODE,
    BCSH_COLOR_BAR_MODE,
    BCSH_NORMAL_MODE
} eVOP_BcshVideoMode;

struct DSC_PPS_RC_RANGE_PARAMETER {
    char rangeMinQp;
    char rangeMaxQp;
    char rangeBpgOffset;
};

struct DSC_PPS_RC_PARAMETER_SET {
    uint16_t rcModelSize;
    uint8_t rcEdgeFactor;
    uint8_t rcQuantIncrLimit0;
    uint8_t rcQuantIncrLimit1;
    uint8_t rcTgtOffsetHi;
    uint8_t rcTgtOffsetLo;

    uint16_t rcBufThresh[14];
    struct DSC_PPS_RC_RANGE_PARAMETER rcRangeParameter[15];
};

struct DSC_PPS {
    uint8_t dscVersionMinor;
    uint8_t bitsPerConponent;
    uint8_t lineBufDepth;
    bool blockPredEnable;
    bool convertRgb;
    bool enable422;
    uint16_t bitsPerPixel;
    uint16_t pictureHeight;
    uint16_t pictureWidth;
    uint16_t sliceHeight;
    uint16_t sliceWidth;
    uint16_t chunkSize;
    uint16_t initialXmitDelay;
    uint16_t initialDecDelay;
    uint8_t initialScaleValue;
    uint16_t scaleIncrementInterval;
    uint16_t scaleDecrementInterval;
    uint16_t firstLineBpgOffset;
    uint16_t nflBpgOffset;
    uint16_t sliceBpgOffset;
    uint16_t initialOffset;
    uint16_t finalOffset;
    uint8_t flatnessMinQp;
    uint8_t flatnessMaxQp;
    struct DSC_PPS_RC_PARAMETER_SET rcParameterSet;
};

/********************* Private Variable Definition ***************************/
static struct GRF_REG * const gGrfReg = GRF;
static struct VOP_REG g_VOP_RegMir;
static const char * const VOP_IRQs[] = {
    "frame start interrupt status!",
    "new frame start interrupt status!",
    "same address interrupt status!",
    "line flag0 interrupt status!",
    "line flag1 interrupt status!",
    "bus error interrupt status!",
    "reserved interrupt status!",
    "win0 empty interrupt status!",
    "win1 empty interrupt status!",
    "win2 empty interrupt status!",
    "display hold interrupt status!"
    "dma finish interrupt status!"
    "post lb empty interrupt status!"
};

/********************* Private Function Definition ***************************/

static void VOP_INIT_DSC_PPS(struct DSC_PPS *dscDefaultPps, int16_t w, int16_t h)
{
    uint16_t rcBufThresh[14] = { 14, 28, 42, 56, 70, 84, 98, 105, 112, 119, 121, 123, 125, 126 };
    struct DSC_PPS_RC_RANGE_PARAMETER rcRangeParameter[15] = { { 0, 4, 2 },
                                                               { 0, 4, 0 },
                                                               { 1, 5, 0 },
                                                               { 1, 6, -2 },
                                                               { 3, 7, -4 },
                                                               { 3, 7, -6 },
                                                               { 3, 7, -8 },
                                                               { 3, 8, -8 },
                                                               { 3, 9, -8 },
                                                               { 3, 10, -10 },
                                                               { 5, 11, -10 },
                                                               { 5, 12, -12 },
                                                               { 5, 13, -12 },
                                                               { 7, 13, -12 },
                                                               { 13, 15, -12 } };

    dscDefaultPps->dscVersionMinor = 1;
    dscDefaultPps->bitsPerConponent = 8;
    dscDefaultPps->lineBufDepth = 9;
    dscDefaultPps->blockPredEnable = 1;
    dscDefaultPps->convertRgb = 1;
    dscDefaultPps->enable422 = 0;
    dscDefaultPps->bitsPerPixel = 128;

    if (w == 1440) {
        dscDefaultPps->pictureHeight = h;
        dscDefaultPps->pictureWidth = w;
        dscDefaultPps->sliceHeight = 65;
        dscDefaultPps->sliceWidth = 720;
        dscDefaultPps->chunkSize = dscDefaultPps->sliceWidth;
        dscDefaultPps->initialXmitDelay = 512;
        dscDefaultPps->initialDecDelay = 706;
        dscDefaultPps->initialScaleValue = 32;
        dscDefaultPps->scaleIncrementInterval = 1624;
        dscDefaultPps->scaleDecrementInterval = 10;
        dscDefaultPps->firstLineBpgOffset = 15;
        dscDefaultPps->nflBpgOffset = 480;
        dscDefaultPps->sliceBpgOffset = 301;
    } else if (w == 720) {
        dscDefaultPps->pictureHeight = h;
        dscDefaultPps->pictureWidth = w;
        dscDefaultPps->sliceHeight = 52;
        dscDefaultPps->sliceWidth = 360;
        dscDefaultPps->chunkSize = dscDefaultPps->sliceWidth;
        dscDefaultPps->initialXmitDelay = 512;
        dscDefaultPps->initialDecDelay = 706;
        dscDefaultPps->initialScaleValue = 32;
        dscDefaultPps->scaleIncrementInterval = 1028;
        dscDefaultPps->scaleDecrementInterval = 5;
        dscDefaultPps->firstLineBpgOffset = 12;
        dscDefaultPps->nflBpgOffset = 482;
        dscDefaultPps->sliceBpgOffset = 751;
    }

    dscDefaultPps->initialOffset = 6144;
    dscDefaultPps->finalOffset = 4336;
    dscDefaultPps->flatnessMinQp = 3;
    dscDefaultPps->flatnessMaxQp = 12;

    dscDefaultPps->rcParameterSet.rcModelSize = 8192;
    dscDefaultPps->rcParameterSet.rcEdgeFactor = 6;
    dscDefaultPps->rcParameterSet.rcQuantIncrLimit0 = 11;
    dscDefaultPps->rcParameterSet.rcQuantIncrLimit1 = 11;
    dscDefaultPps->rcParameterSet.rcTgtOffsetHi = 3;
    dscDefaultPps->rcParameterSet.rcTgtOffsetLo = 3;

    memcpy(dscDefaultPps->rcParameterSet.rcBufThresh,
           rcBufThresh, sizeof(rcBufThresh));

    memcpy(dscDefaultPps->rcParameterSet.rcRangeParameter,
           rcRangeParameter, sizeof(rcRangeParameter));
}

__STATIC_INLINE int16_t VOP_Interpolate(int16_t x1, int16_t y1, int16_t x2,
                                        int16_t y2, uint16_t x)
{
    return y1 + (y2 - y1) * (x - x1) / (x2 - x1);
}

static uint32_t VOP_MaskRead(__IO uint32_t hwReg,
                             uint32_t shift, uint32_t mask)
{
    return (READ_REG(hwReg) & mask) >> shift;
}

static void VOP_MaskWriteNoBackup(__IO uint32_t *mirReg, __IO uint32_t *hwReg,
                                  uint32_t shift, uint32_t mask,
                                  uint32_t v)
{
    uint32_t mirVal = *mirReg;

    v = (mirVal & ~mask) | ((v << shift) & mask);

    WRITE_REG(*hwReg, v);
}

static void VOP_MaskWrite(__IO uint32_t *mirReg, __IO uint32_t *hwReg,
                          uint32_t shift, uint32_t mask,
                          uint32_t v)
{
    if (mirReg) {
        uint32_t mirVal = *mirReg;

        v = (mirVal & ~mask) | ((v << shift) & mask);
        *mirReg = v;
    } else {
        v = ((v << shift) & mask) | (mask << 16);
    }

    WRITE_REG(*hwReg, v);
}

static void VOP_Write(__IO uint32_t *mirReg, __IO uint32_t *hwReg,
                      uint32_t v)
{
    if (mirReg)
        *mirReg = v;
    WRITE_REG(*hwReg, v);
}

static uint8_t VOP_RbSwap(uint8_t format)
{
    switch (format) {
    case VOP_FMT_ARGB8888:
    case VOP_FMT_RGB888:

        return 1;
    default:

        return 0;
    }
}
static uint8_t VOP_GetHorSubSampling(uint8_t format)
{
    switch (format) {
    case VOP_FMT_YUV420SP:
    case VOP_FMT_YUV420SP_4:

        return 4;
        break;
    case VOP_FMT_YVYU422:
    case VOP_FMT_VYUY422:
    case VOP_FMT_YUV422SP:
    case VOP_FMT_YVYU422_4:
    case VOP_FMT_VYUY422_4:
    case VOP_FMT_YUV422SP_4:

        return 2;
        break;
    default:

        return 1;
    }
}

static uint8_t VOP_GetVerSubSampling(uint8_t format)
{
    switch (format) {
    case VOP_FMT_YUV420SP:
    case VOP_FMT_YUV420SP_4:

        return 4;
        break;
    case VOP_FMT_YUV422SP:
    case VOP_FMT_YUV422SP_4:

        return 2;
        break;
    default:

        return 1;
    }
}

static uint8_t VOP_GetFormatLength(uint8_t format, uint8_t plane)
{
    uint8_t val;

    switch (format) {
    case VOP_FMT_ARGB8888:
        val = 32;
        break;
    case VOP_FMT_RGB888:
        val = 24;
        break;
    case VOP_FMT_RGB565:
        val = 16;
        break;
    case VOP_FMT_RGB444:
        val = 12;
        break;
    case VOP_FMT_YUV420SP:
        val = plane ? 16 : 8;
        break;
    case VOP_FMT_YVYU422:
    case VOP_FMT_VYUY422:
        val = 16;
        break;
    case VOP_FMT_YUV422SP:
    case VOP_FMT_YUV444SP:
        val = 8;
        break;
    case VOP_FMT_YUV420SP_4:
        val = plane ? 8 : 4;
        break;
    case VOP_FMT_YVYU422_4:
    case VOP_FMT_VYUY422_4:
        val = 8;
        break;
    case VOP_FMT_YUV422SP_4:
    case VOP_FMT_YUV444SP_4:
        val = 4;
        break;
    case VOP_FMT_1BPP:
        val = 1;
        break;
    case VOP_FMT_2BPP:
        val = 2;
        break;
    case VOP_FMT_4BPP:
        val = 4;
        break;
    case VOP_FMT_8BPP:
        val = 8;
        break;
    default:
        val = 8;
        HAL_DBG_ERR("Unsupport format: %d!\n", format);
        break;
    }

    return val;
}

static void VOP_SetWinLoop(struct VOP_REG *pReg,
                           struct CRTC_WIN_STATE *pWinState)
{
    bool xLoopEn, yLoopEn;
    uint32_t val, offset, regOffset = pWinState->winId * 0x40 / 4;

    xLoopEn = !!pWinState->xLoopOffset;
    yLoopEn = !!pWinState->yLoopOffset;
    if (xLoopEn || yLoopEn) {
        offset = pWinState->yLoopOffset * pWinState->xVir +
                 pWinState->xLoopOffset *
                 VOP_GetFormatLength(pWinState->hwFormat, 0) / 8;
        VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST + regOffset,
                  &pReg->WIN0_YRGB_MST + regOffset,
                  pWinState->yrgbAddr + offset);
        VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST_RAW + regOffset,
                  &pReg->WIN0_YRGB_MST_RAW + regOffset,
                  pWinState->yrgbAddr);

        if (IS_YUV_FORMAT(pWinState->hwFormat)) {
            uint8_t hsub = VOP_GetHorSubSampling(pWinState->hwFormat);
            uint8_t vsub = VOP_GetVerSubSampling(pWinState->hwFormat);
            uint8_t bpp = VOP_GetFormatLength(pWinState->hwFormat, 1);

            offset = pWinState->yLoopOffset * 2 * pWinState->xVir / vsub;
            offset += pWinState->xLoopOffset * 2 * bpp / hsub / 8;

            VOP_Write(&g_VOP_RegMir.WIN0_CBCR_MST + regOffset,
                      &pReg->WIN0_CBCR_MST + regOffset,
                      pWinState->cbcrAddr + offset);
            VOP_Write(&g_VOP_RegMir.WIN0_CBCR_MST_RAW + regOffset,
                      &pReg->WIN0_CBCR_MST_RAW + regOffset,
                      pWinState->cbcrAddr);
        }

        val = xLoopEn << VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_EN_SHIFT |
              pWinState->xLoopOffset << VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_OFFSET_SHIFT |
              yLoopEn << VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_EN_SHIFT |
              pWinState->yLoopOffset << VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_OFFSET_SHIFT;
        VOP_Write(&g_VOP_RegMir.WIN0_LOOP_OFFSET + regOffset,
                  &pReg->WIN0_LOOP_OFFSET + regOffset, val);
    } else {
        VOP_Write(&g_VOP_RegMir.WIN0_LOOP_OFFSET + regOffset,
                  &pReg->WIN0_LOOP_OFFSET + regOffset, 0);
    }
}

static void VOP_SetWin(struct VOP_REG *pReg,
                       struct CRTC_WIN_STATE *pWinState,
                       struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint32_t val, dspInfo, dspSt, dspStx, dspSty, cfgFormat;
    bool bppFormat, yuv4Format, y2r_en = false, lut_en = false;
    uint32_t regOffset = pWinState->winId * 0x40 / 4;
    uint32_t yStride, cbcrStride = 0;

    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_EN_MASK, pWinState->winEn);
    if (pWinState->winEn == false)
        return;
    yuv4Format = !!(pWinState->hwFormat & VOP_WIN_YUV4_FORMAT);
    bppFormat = !!(pWinState->hwFormat & VOP_WIN_BPPX_FORMAT);
    cfgFormat = pWinState->hwFormat &
                ~(VOP_WIN_YUV4_FORMAT | VOP_WIN_BPPX_FORMAT);

    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_DATA_FMT_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_DATA_FMT_MASK, cfgFormat);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_BPP_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_BPP_EN_MASK, bppFormat);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_MASK, yuv4Format);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_RB_SWAP_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_RB_SWAP_MASK,
                  VOP_RbSwap(pWinState->hwFormat));
    yStride = pWinState->xVir / 4;

    if ((pWinState->hwFormat == VOP_FMT_YUV444SP) ||
        (pWinState->hwFormat == VOP_FMT_YUV444SP_4))
        cbcrStride = 2 * yStride;
    else
        cbcrStride = yStride;
    VOP_Write(&g_VOP_RegMir.WIN0_VIR + regOffset,
              &pReg->WIN0_VIR + regOffset, cbcrStride << 16 | yStride);
    VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST + regOffset,
              &pReg->WIN0_YRGB_MST + regOffset, pWinState->yrgbAddr);
    VOP_Write(&g_VOP_RegMir.WIN0_CBCR_MST + regOffset,
              &pReg->WIN0_CBCR_MST + regOffset, pWinState->cbcrAddr);

    dspInfo = (pWinState->srcH - 1) << 16 | (pWinState->srcW - 1);
    dspStx = pWinState->hwCrtcX + pModeInfo->crtcHtotal -
             pModeInfo->crtcHsyncStart;
    dspSty = pWinState->hwCrtcY + pModeInfo->crtcVtotal -
             pModeInfo->crtcVsyncStart;
    dspSt = dspSty << 16 | dspStx;
    VOP_Write(&g_VOP_RegMir.WIN0_DSP_INFO + regOffset,
              &pReg->WIN0_DSP_INFO + regOffset, dspInfo);
    VOP_Write(&g_VOP_RegMir.WIN0_DSP_ST + regOffset,
              &pReg->WIN0_DSP_ST + regOffset, dspSt);

    val = pWinState->alphaEn << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_EN_SHIFT |
          pWinState->alphaMode << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_MODE_SHIFT |
          pWinState->alphaPreMul << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_PRE_MUL_SHIFT |
          pWinState->alphaSatMode << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_SAT_MODE_SHIFT |
          pWinState->globalAlphaValue << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_VALUE_SHIFT;
    VOP_Write(&g_VOP_RegMir.WIN0_ALPHA_CTRL + regOffset,
              &pReg->WIN0_ALPHA_CTRL + regOffset, val);

    if (IS_YUV_FORMAT(pWinState->hwFormat))
        y2r_en = true;
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_Y2R_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_Y2R_EN_MASK,
                  y2r_en);

    if (IS_BPP_FORMAT(pWinState->hwFormat))
        lut_en = true;
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_LUT_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_LUT_EN_MASK,
                  lut_en);
}

/********************* Public Function Definition ****************************/

/** @defgroup VOP_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  suspend VOP.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 * TODO:
 */
HAL_Status HAL_VOP_Suspend(struct VOP_REG *pReg)
{
    return HAL_OK;
}

/**
 * @brief  resume VOP.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 * TODO:
 */
HAL_Status HAL_VOP_Resume(struct VOP_REG *pReg)
{
    return HAL_OK;
}

/** @} */

/** @defgroup VOP_Exported_Functions_Group2 get VOP Status and Errors Functions
 @verbatim

 ===============================================================================
             #### get uart status functions ####
 ===============================================================================
 This section provides functions allowing to get VOP status:

 @endverbatim
 *  @{
 */
/**
 * @brief  Get VOP scane line number.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
uint32_t HAL_VOP_GetScanLine(struct VOP_REG *pReg)
{
    return VOP_MaskRead(pReg->DBG_REG_SCAN_LINE,
                        VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_SHIFT,
                        VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_MASK);
}

/**
 * @brief  Get the config done state before commit.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
uint8_t HAL_VOP_CommitPrepare(struct VOP_REG *pReg)
{
    return VOP_MaskRead(pReg->INTR_STATUS,
                        VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_SHIFT,
                        VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_MASK);
}
/** @} */

/** @defgroup VOP_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */
/**
 * @brief  Load VOP bpp format lut.
 * @param  pReg: VOP reg base.
 * @param  winId: VOP win id.
 * @param  lut: look up table.
 * @param  lut_size: lut size.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_LoadLut(struct VOP_REG *pReg, uint8_t winId,
                           uint32_t *lut, uint16_t lut_size)
{
    uint16_t i;
    uint32_t regOffset = winId * 0x400 / 4;

    for (i = 0; i < lut_size; i++) {
        VOP_Write(&g_VOP_RegMir.WIN0_BPP_LUT[i] + regOffset,
                  &pReg->WIN0_BPP_LUT[i] + regOffset,
                  lut[i]);
    }

    return HAL_OK;
}

/**
 * @brief  VOP MIPI switch.
 * @param  pReg: VOP reg base.
 * @param  path: mipi switch direction.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_MipiSwitch(struct VOP_REG *pReg, eVOP_MipiSwitchPath path)
{
    int i = 0;

    switch (path) {
    case SWITCH_TO_INTERNAL_DPHY:
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_MASK, 0);
        HAL_DelayMs(1);
#ifdef IS_FPGA
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK,
                          GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK);
#else
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK,
                          0);
#endif
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[0], GRF_SOC_CON0_VOP_TE_SEL_MASK,
                          1 << GRF_SOC_CON0_VOP_TE_SEL_SHIFT);

        break;
    case SWITCH_TO_AP_BYPASS:
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[0], GRF_SOC_CON0_VOP_TE_SEL_MASK,
                          0 << GRF_SOC_CON0_VOP_TE_SEL_SHIFT);

#ifdef IS_FPGA
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK, 0);
#else
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK,
                          GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK);
#endif
        HAL_DelayMs(1);
        WRITE_REG_MASK_WE(gGrfReg->SOC_CON[4], GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_MASK,
                          GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_MASK);
        break;
    default:
        break;
    }
    while (VOP_MaskRead(pReg->VOP_STATUS, VOP_VOP_STATUS_DPHY_SWITCH_STATUS_SHIFT,
                        VOP_VOP_STATUS_DPHY_SWITCH_STATUS_MASK) == path) {
        if (i++ > MIPI_SWITCH_TIME_OUT) {
            HAL_DBG_ERR("wait mipi switch time out\n");
            break;
        }
        HAL_DelayMs(1);
    }

    return HAL_OK;
}

/**
 * @brief  Set display area.
 * @param  pReg: VOP reg base.
 * @param  display_rect: display rect.
 * @return HAL_Status.
 * TODO: dsc_imd_config_en
 */
HAL_Status HAL_VOP_SetArea(struct VOP_REG *pReg,
                           struct DISPLAY_RECT *display_rect)
{
    VOP_MaskWrite(&g_VOP_RegMir.DSC_CFG[18],
                  &pReg->DSC_CFG[18],
                  VOP_DSC_CFG18_PICTURE_HEIGHT_SHIFT,
                  VOP_DSC_CFG18_PICTURE_HEIGHT_MASK, display_rect->h);

    VOP_MaskWrite(&g_VOP_RegMir.DSC_CFG[18],
                  &pReg->DSC_CFG[18],
                  VOP_DSC_CFG18_PICTURE_WIDTH_LO_SHIFT,
                  VOP_DSC_CFG18_PICTURE_WIDTH_LO_MASK, display_rect->w & 0x7f);

    VOP_MaskWrite(&g_VOP_RegMir.DSC_CFG[19],
                  &pReg->DSC_CFG[19],
                  VOP_DSC_CFG19_PICTURE_WIDTH_HI_SHIFT,
                  VOP_DSC_CFG19_PICTURE_WIDTH_HI_MASK, display_rect->w >> 7 & 0x1ff);

    return HAL_OK;
}

/**
 * @brief  Set plane state.
 * @param  pReg: VOP reg base.
 * @param  pWinState: win state.
 * @param  pModeInfo: VOP output modeinfo.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_SetPlane(struct VOP_REG *pReg,
                            struct CRTC_WIN_STATE *pWinState,
                            struct DISPLAY_MODE_INFO *pModeInfo)
{
    if (IS_BPP_FORMAT(pWinState->hwFormat)) {
        if (pWinState->winId == VOP_WIN2) {
            HAL_DBG_ERR("win2 unsupport bpp format!\n");

            return HAL_INVAL;
        }
    }
    pWinState->xVir = pWinState->xVir *
                      VOP_GetFormatLength(pWinState->hwFormat, 0) / 8;
    if (pWinState->xVir % 4) {
        HAL_DBG_ERR("VOP setplane xvir should be 4 byte align: %d\n", pWinState->xVir);

        return HAL_INVAL;
    }
    VOP_SetWin(pReg, pWinState, pModeInfo);
    VOP_SetWinLoop(pReg, pWinState);

    return HAL_OK;
}

/**
 * @brief  Set config done to commit frame.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_Commit(struct VOP_REG *pReg)
{
    VOP_MaskWriteNoBackup(&g_VOP_RegMir.REG_CFG_DONE, &pReg->REG_CFG_DONE,
                          VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT,
                          VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_MASK, 1);

    VOP_MaskWriteNoBackup(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_FRAME_ST_SHIFT,
                          VOP_MCU_MCU_FRAME_ST_MASK, 1);
    VOP_MaskWriteNoBackup(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_FRAME_ST_SHIFT,
                          VOP_MCU_MCU_FRAME_ST_MASK, 0);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_HOLD_MODE_SHIFT,
                  VOP_MCU_MCU_HOLD_MODE_MASK, 0);

    VOP_MaskWrite(NULL, &pReg->INTR_CLEAR,
                  VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_SHIFT,
                  VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_MASK, 1);

    return HAL_OK;
}

/**
 * @brief  Set WMS frame start.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_EdpiFrmSt(struct VOP_REG *pReg)
{
    VOP_MaskWriteNoBackup(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                          VOP_SYS_CTRL2_IMD_EDPI_WMS_FS_SHIFT,
                          VOP_SYS_CTRL2_IMD_EDPI_WMS_FS_MASK, 1);

    return HAL_OK;
}

/** @} */

/** @defgroup VOP_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  VOP init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP putput mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_Init(struct VOP_REG *pReg,
                        struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint32_t regLen = sizeof(g_VOP_RegMir);

    memcpy(&g_VOP_RegMir, pReg, regLen);

    VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                  VOP_DSP_CTRL2_DSP_BLANK_EN_SHIFT,
                  VOP_DSP_CTRL2_DSP_BLANK_EN_MASK,
                  0);

    VOP_MaskWrite(&g_VOP_RegMir.DSP_BG, &pReg->DSP_BG,
                  VOP_DSP_BG_DSP_BG_BLUE_SHIFT,
                  VOP_DSP_BG_DSP_BG_BLUE_MASK,
                  0);

    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_SHIFT,
                  VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_MASK,
                  1);

    VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                  VOP_DSP_CTRL2_DSP_LAYER1_SEL_SHIFT,
                  VOP_DSP_CTRL2_DSP_LAYER1_SEL_MASK,
                  1);
    VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                  VOP_DSP_CTRL2_DSP_LAYER2_SEL_SHIFT,
                  VOP_DSP_CTRL2_DSP_LAYER2_SEL_MASK,
                  2);
    VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                  VOP_DSP_CTRL2_DSP_LAYER3_SEL_SHIFT,
                  VOP_DSP_CTRL2_DSP_LAYER3_SEL_MASK,
                  3);

    if (pModeInfo->flags & DSC_ENABLE)
        HAL_VOP_DscInit(pReg, pModeInfo);
    else
        VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                      VOP_SYS_CTRL2_DSC_BYPASS_EN_SHIFT,
                      VOP_SYS_CTRL2_DSC_BYPASS_EN_MASK,
                      0x1);

    return HAL_OK;
}

/**
 * @brief  VOP dsc init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP putput mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_DscInit(struct VOP_REG *pReg,
                           struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint32_t i, dsc_cfg[21];
    struct DSC_PPS dscDefaultPps;
    struct DSC_PPS_RC_PARAMETER_SET *rcParameterSet = &dscDefaultPps.rcParameterSet;
    struct DSC_PPS_RC_RANGE_PARAMETER *rcRangeParameter = rcParameterSet->rcRangeParameter;
    uint8_t flatness_det_thresh = 2;     /* rockchip DSC define */

    memset(&dscDefaultPps, 0, sizeof(dscDefaultPps));

    VOP_INIT_DSC_PPS(&dscDefaultPps, pModeInfo->crtcHdisplay, pModeInfo->crtcVdisplay);

    dsc_cfg[0] = (rcRangeParameter[0].rangeBpgOffset & 0x3f) << 0 |
                 (rcRangeParameter[1].rangeBpgOffset & 0x3f) << 6 |
                 (rcRangeParameter[2].rangeBpgOffset & 0x3f) << 12 |
                 (rcRangeParameter[3].rangeBpgOffset & 0x3f) << 18 |
                 (rcRangeParameter[4].rangeBpgOffset & 0x3f) << 24 |
                 (rcRangeParameter[5].rangeBpgOffset & 0x3) << 30;
    dsc_cfg[1] = ((rcRangeParameter[5].rangeBpgOffset >> 2) & 0xf) << 0 |
                 (rcRangeParameter[6].rangeBpgOffset & 0x3f) << 4 |
                 (rcRangeParameter[7].rangeBpgOffset & 0x3f) << 10 |
                 (rcRangeParameter[8].rangeBpgOffset & 0x3f) << 16 |
                 (rcRangeParameter[9].rangeBpgOffset & 0x3f) << 22 |
                 (rcRangeParameter[10].rangeBpgOffset & 0xf) << 28;
    dsc_cfg[2] = ((rcRangeParameter[10].rangeBpgOffset >> 4) & 0x3) << 0 |
                 (rcRangeParameter[11].rangeBpgOffset & 0x3f) << 2 |
                 (rcRangeParameter[12].rangeBpgOffset & 0x3f) << 8 |
                 (rcRangeParameter[13].rangeBpgOffset & 0x3f) << 14 |
                 (rcRangeParameter[14].rangeBpgOffset & 0x3f) << 20 |
                 (rcRangeParameter[0].rangeMaxQp & 0x1f) << 26 |
                 (rcRangeParameter[1].rangeMaxQp & 0x1) << 31;
    dsc_cfg[3] = ((rcRangeParameter[1].rangeMaxQp >> 1) & 0xf) << 0 |
                 (rcRangeParameter[2].rangeMaxQp & 0x1f) << 4 |
                 (rcRangeParameter[3].rangeMaxQp & 0x1f) << 9 |
                 (rcRangeParameter[4].rangeMaxQp & 0x1f) << 14 |
                 (rcRangeParameter[5].rangeMaxQp & 0x1f) << 19 |
                 (rcRangeParameter[6].rangeMaxQp & 0x1f) << 24 |
                 (rcRangeParameter[7].rangeMaxQp & 0x7) << 29;
    dsc_cfg[4] = ((rcRangeParameter[7].rangeMaxQp >> 3) & 0x3) << 0 |
                 (rcRangeParameter[8].rangeMaxQp & 0x1f) << 2 |
                 (rcRangeParameter[9].rangeMaxQp & 0x1f) << 7 |
                 (rcRangeParameter[10].rangeMaxQp & 0x1f) << 12 |
                 (rcRangeParameter[11].rangeMaxQp & 0x1f) << 17 |
                 (rcRangeParameter[12].rangeMaxQp & 0x1f) << 22 |
                 (rcRangeParameter[13].rangeMaxQp & 0x1f) << 27;
    dsc_cfg[5] = (rcRangeParameter[14].rangeMaxQp & 0x1f) << 0 |
                 (rcRangeParameter[0].rangeMinQp & 0x1f) << 5 |
                 (rcRangeParameter[1].rangeMinQp & 0x1f) << 10 |
                 (rcRangeParameter[2].rangeMinQp & 0x1f) << 15 |
                 (rcRangeParameter[3].rangeMinQp & 0x1f) << 20 |
                 (rcRangeParameter[4].rangeMinQp & 0x1f) << 25 |
                 (rcRangeParameter[5].rangeMinQp & 0x3) << 30;
    dsc_cfg[6] = ((rcRangeParameter[5].rangeMinQp >> 2) & 0x7) << 0 |
                 (rcRangeParameter[6].rangeMinQp & 0x1f) << 3 |
                 (rcRangeParameter[7].rangeMinQp & 0x1f) << 8 |
                 (rcRangeParameter[8].rangeMinQp & 0x1f) << 13 |
                 (rcRangeParameter[9].rangeMinQp & 0x1f) << 18 |
                 (rcRangeParameter[10].rangeMinQp & 0x1f) << 23 |
                 (rcRangeParameter[11].rangeMinQp & 0xf) << 28;
    dsc_cfg[7] = ((rcRangeParameter[11].rangeMinQp >> 4) & 0x1) << 0 |
                 (rcRangeParameter[12].rangeMinQp & 0x1f) << 1 |
                 (rcRangeParameter[13].rangeMinQp & 0x1f) << 6 |
                 (rcRangeParameter[14].rangeMinQp & 0x1f) << 11 |
                 (rcParameterSet->rcBufThresh[0] & 0xff) << 16 |
                 (rcParameterSet->rcBufThresh[1] & 0xff) << 24;
    dsc_cfg[8] = (rcParameterSet->rcBufThresh[2] & 0xff) << 0 |
                 (rcParameterSet->rcBufThresh[3] & 0xff) << 8 |
                 (rcParameterSet->rcBufThresh[4] & 0xff) << 16 |
                 (rcParameterSet->rcBufThresh[5] & 0xff) << 24;
    dsc_cfg[9] = (rcParameterSet->rcBufThresh[6] & 0xff) << 0 |
                 (rcParameterSet->rcBufThresh[7] & 0xff) << 8 |
                 (rcParameterSet->rcBufThresh[8] & 0xff) << 16 |
                 (rcParameterSet->rcBufThresh[9] & 0xff) << 24;
    dsc_cfg[10] = (rcParameterSet->rcBufThresh[10] & 0xff) << 0 |
                  (rcParameterSet->rcBufThresh[11] & 0xff) << 8 |
                  (rcParameterSet->rcBufThresh[12] & 0xff) << 16 |
                  (rcParameterSet->rcBufThresh[13] & 0xff) << 24;
    dsc_cfg[11] = (rcParameterSet->rcTgtOffsetLo & 0xf) << 0 |
                  (rcParameterSet->rcTgtOffsetHi & 0xf) << 4 |
                  (rcParameterSet->rcQuantIncrLimit1 & 0x1f) << 8 |
                  (rcParameterSet->rcQuantIncrLimit0 & 0x1f) << 13 |
                  (rcParameterSet->rcEdgeFactor & 0xf) << 18 |
                  (rcParameterSet->rcModelSize & 0x3ff) << 22;
    dsc_cfg[12] = ((rcParameterSet->rcModelSize >> 10) & 0x3f) << 0 |
                  (flatness_det_thresh & 0xff) << 6 |
                  (dscDefaultPps.flatnessMaxQp & 0x1f) << 14 |
                  (dscDefaultPps.flatnessMinQp & 0xff) << 19 |
                  (dscDefaultPps.finalOffset & 0xff) << 24;
    dsc_cfg[13] = ((dscDefaultPps.finalOffset >> 8) & 0xff) << 0 |
                  (dscDefaultPps.initialOffset & 0xffff) << 8 |
                  (dscDefaultPps.sliceBpgOffset & 0xff) << 24;
    dsc_cfg[14] = ((dscDefaultPps.sliceBpgOffset >> 8) & 0xff) << 0 |
                  (dscDefaultPps.nflBpgOffset & 0xffff) << 8 |
                  (dscDefaultPps.firstLineBpgOffset & 0x1f) << 24 |
                  (dscDefaultPps.scaleDecrementInterval & 0x7) << 29;
    dsc_cfg[15] = ((dscDefaultPps.scaleDecrementInterval >> 3) & 0x1ff) << 0 |
                  (dscDefaultPps.scaleIncrementInterval & 0xffff) << 9 |
                  (dscDefaultPps.initialScaleValue & 0x3f) << 25 |
                  (dscDefaultPps.initialDecDelay & 0x1) << 31;
    dsc_cfg[16] = ((dscDefaultPps.initialDecDelay >> 1) & 0x7fff) << 0 |
                  (dscDefaultPps.initialXmitDelay & 0x3ff) << 15 |
                  (dscDefaultPps.chunkSize & 0x7f) << 25;
    dsc_cfg[17] = ((dscDefaultPps.chunkSize >> 7) & 0x1ff) << 0 |
                  (dscDefaultPps.sliceHeight & 0xffff) << 9 |
                  (dscDefaultPps.sliceWidth & 0x7f) << 25;
    dsc_cfg[18] = ((dscDefaultPps.sliceWidth >> 7) & 0x1ff) << 0 |
                  (dscDefaultPps.pictureHeight & 0xffff) << 9 |
                  (dscDefaultPps.pictureWidth & 0x7f) << 25;
    dsc_cfg[19] = ((dscDefaultPps.pictureWidth >> 7) & 0x1ff) << 0 |
                  (dscDefaultPps.dscVersionMinor & 0xf) << 9 |
                  (dscDefaultPps.bitsPerPixel & 0x3ff) << 13 |
                  (dscDefaultPps.blockPredEnable & 0x1) << 23 |
                  (dscDefaultPps.lineBufDepth & 0xf) << 24 |
                  (dscDefaultPps.enable422 & 0x1) << 28 |
                  (dscDefaultPps.convertRgb & 0x1) << 29 |
                  (dscDefaultPps.bitsPerConponent & 0x3) << 30;
    dsc_cfg[20] = ((dscDefaultPps.bitsPerConponent >> 2) & 0x3) << 0;

    VOP_Write(&g_VOP_RegMir.DSC_SYS_CTRL[0], &pReg->DSC_SYS_CTRL[0], 0x02582039);
    VOP_Write(&g_VOP_RegMir.DSC_SYS_CTRL[1], &pReg->DSC_SYS_CTRL[1], 0x08bb0004);
    VOP_Write(&g_VOP_RegMir.DSC_SYS_CTRL[2], &pReg->DSC_SYS_CTRL[2], 0x0000035b);

    for (i = 0; i < 21; i++)
        VOP_Write(&g_VOP_RegMir.DSC_CFG[i], &pReg->DSC_CFG[i], dsc_cfg[i]);

    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_DSC_BYPASS_EN_SHIFT,
                  VOP_SYS_CTRL2_DSC_BYPASS_EN_MASK,
                  0x0);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_DSC_EN_SHIFT,
                  VOP_SYS_CTRL2_DSC_EN_MASK,
                  0x1);
    VOP_Write(&g_VOP_RegMir.DSC_SYS_CTRL0_IMD, &pReg->DSC_SYS_CTRL0_IMD, 0x11);

    return HAL_OK;
}

/**
 * @brief  VOP deinit.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_DeInit(struct VOP_REG *pReg)
{
    return HAL_OK;
}

/**
 * @brief  VOP mode init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP output mode info.
 * @param  pPostScaleInfo: VOP post scale info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_ModeInit(struct VOP_REG *pReg,
                            struct DISPLAY_MODE_INFO *pModeInfo,
                            struct VOP_POST_SCALE_INFO *pPostScaleInfo)
{
    uint16_t hfp = pModeInfo->crtcHsyncStart - pModeInfo->crtcHdisplay;
    uint16_t hsyncLen = pModeInfo->crtcHsyncEnd -
                        pModeInfo->crtcHsyncStart;
    uint16_t hbp = pModeInfo->crtcHtotal - pModeInfo->crtcHsyncEnd;
    uint16_t vfp = pModeInfo->crtcVsyncStart - pModeInfo->crtcVdisplay;
    uint16_t vsyncLen = pModeInfo->crtcVsyncEnd -
                        pModeInfo->crtcVsyncStart;
    uint16_t vbp = pModeInfo->crtcVtotal - pModeInfo->crtcVsyncEnd;

    uint16_t preHdisplay = pPostScaleInfo->srcW;
    uint16_t preVdisplay = pPostScaleInfo->srcH;
    uint16_t preHsync, preHactSt, preHactEnd, preHtotal;
    uint16_t preVsync, preVactSt, preVactEnd, preVtotal;

    uint16_t dsp_hdisplay = pPostScaleInfo->dstW;
    uint16_t dsp_vdisplay = pPostScaleInfo->dstH;
    uint16_t dspHsync, dspHactSt, dspHactEnd, dspHtotal;
    uint16_t dspVsync, dspVactSt, dspVactEnd, dspVtotal;

    preHsync = hsyncLen;
    preHactSt = preHsync + hbp;
    preHactEnd = preHactSt + preHdisplay;
    preHtotal = preHactEnd + hfp;

    preVsync = vsyncLen;
    preVactSt = preVsync + vbp;
    preVactEnd = preVactSt + preVdisplay;
    preVtotal = preVactEnd + vfp;

    VOP_Write(&g_VOP_RegMir.PRE_HTOTAL_HS_END, &pReg->PRE_HTOTAL_HS_END,
              preHtotal << 16 | preHsync);
    VOP_Write(&g_VOP_RegMir.PRE_HACT_ST_END, &pReg->PRE_HACT_ST_END,
              preHactSt << 16 | preHactEnd);
    VOP_Write(&g_VOP_RegMir.PRE_VTOTAL_VS_END, &pReg->PRE_VTOTAL_VS_END,
              preVtotal << 16 | preVsync);
    VOP_Write(&g_VOP_RegMir.PRE_VACT_ST_END, &pReg->PRE_VACT_ST_END,
              preVactSt << 16 | preVactEnd);

    dspHsync = hsyncLen;
    dspHactSt = dspHsync + hbp;
    dspHactEnd = dspHactSt + dsp_hdisplay;
    dspHtotal = dspHactEnd + hfp;

    dspVsync = vsyncLen;
    dspVactSt = dspVsync + vbp;
    dspVactEnd = dspVactSt + dsp_vdisplay;
    dspVtotal = dspVactEnd + vfp;

    VOP_Write(&g_VOP_RegMir.DSP_HTOTAL_HS_END, &pReg->DSP_HTOTAL_HS_END,
              dspHtotal << 16 | dspHsync);
    VOP_Write(&g_VOP_RegMir.DSP_HACT_ST_END, &pReg->DSP_HACT_ST_END,
              dspHactSt << 16 | dspHactEnd);
    VOP_Write(&g_VOP_RegMir.DSP_VTOTAL_VS_END, &pReg->DSP_VTOTAL_VS_END,
              dspVtotal << 16 | dspVsync);
    VOP_Write(&g_VOP_RegMir.DSP_VACT_ST_END, &pReg->DSP_VACT_ST_END,
              dspVactSt << 16 | dspVactEnd);

    return HAL_OK;
}

/**
 * @brief  VOP MCU mode init.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_McuModeInit(struct VOP_REG *pReg)
{
    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_TYPE_SHIFT,
                  VOP_MCU_MCU_TYPE_MASK, 1);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_PIX_TOTAL_SHIFT,
                  VOP_MCU_MCU_PIX_TOTAL_MASK, MCU_TOTAL);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_CS_PST_SHIFT,
                  VOP_MCU_MCU_CS_PST_MASK, MCU_CS_STR);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_CS_PEND_SHIFT,
                  VOP_MCU_MCU_CS_PEND_MASK, MCU_CS_END);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_RW_PST_SHIFT,
                  VOP_MCU_MCU_RW_PST_MASK, MCU_WR_STR);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_RW_PEND_SHIFT,
                  VOP_MCU_MCU_RW_PEND_MASK, MCU_WR_END);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_CLK_SEL_SHIFT,
                  VOP_MCU_MCU_CLK_SEL_MASK, 0);

    VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_HOLD_MODE_SHIFT,
                  VOP_MCU_MCU_HOLD_MODE_MASK, 1);

    return HAL_OK;
}

/**
 * @brief  VOP post scale init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP output mode info.
 * @param  pPostScaleInfo: VOP post scale info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostScaleInit(struct VOP_REG *pReg,
                                 struct DISPLAY_MODE_INFO *pModeInfo,
                                 struct VOP_POST_SCALE_INFO *pPostScaleInfo)
{
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_SCL_HMODE_SHIFT,
                  VOP_POST_CTRL_POST_SCL_HMODE_MASK,
                  pPostScaleInfo->postSclHmode);
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_SCL_VMODE_SHIFT,
                  VOP_POST_CTRL_POST_SCL_VMODE_MASK,
                  pPostScaleInfo->postSclVmode);
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_SCL_EN_SHIFT,
                  VOP_POST_CTRL_POST_SCL_EN_MASK,
                  pPostScaleInfo->postScaleEn);

    return HAL_OK;
}

/**
 * @brief  VOP post BCSH init.
 * @param  pReg: VOP reg base.
 * @param  pBCSHInfo: VOP BCSH info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostBCSH(struct VOP_REG *pReg,
                            struct VOP_BCSH_INFO *pBCSHInfo)
{
    uint32_t val;
    uint16_t brightness, contrast, saturation, hue, sinHue, cosHue;
    bool bcshEn = false;

    if ((pBCSHInfo->brightness != 50) || (pBCSHInfo->contrast != 50) ||
        (pBCSHInfo->satCon != 50) || (pBCSHInfo->hue != 50))
        bcshEn = true;

    brightness = VOP_Interpolate(0, -31, 100, 31, pBCSHInfo->brightness);
    contrast = VOP_Interpolate(0, 0, 100, 511, pBCSHInfo->contrast);
    saturation = VOP_Interpolate(0, 0, 100, 511, pBCSHInfo->satCon);
    hue = VOP_Interpolate(0, -30, 100, 30, pBCSHInfo->hue);

    /*
     *  a:[-30~0):
     *    sinHue = 0x100 - sin(a)*256;
     *    cosHue = cos(a)*256;
     *  a:[0~30]
     *    sinHue = sin(a)*256;
     *    cosHue = cos(a)*256;
     */
    sinHue = HAL_Sin(hue) >> 23;
    cosHue = HAL_Cos(hue) >> 23;

    val = brightness << VOP_BCSH_BCS_BRIGHTNESS_SHIFT |
          contrast << VOP_BCSH_BCS_CONTRAST_SHIFT |
          saturation << VOP_BCSH_BCS_SAT_CON_SHIFT;
    VOP_Write(&g_VOP_RegMir.BCSH_BCS, &pReg->BCSH_BCS, val);

    val = sinHue << VOP_BCSH_H_SIN_HUE_SHIFT |
          cosHue << VOP_BCSH_H_COS_HUE_SHIFT;
    VOP_Write(&g_VOP_RegMir.BCSH_H, &pReg->BCSH_H, val);

    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_MASK,
                  bcshEn);

    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_CSC_EN_SHIFT,
                  VOP_POST_CTRL_POST_CSC_EN_MASK,
                  bcshEn);
    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_VIDEO_MODE_SHIFT,
                  VOP_BCSH_CTRL_VIDEO_MODE_MASK,
                  BCSH_NORMAL_MODE);

    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_BCSH_EN_SHIFT,
                  VOP_BCSH_CTRL_BCSH_EN_MASK,
                  bcshEn);

    return HAL_OK;
}

/**
 * @brief  VOP post gamma init, the gamma adjust should be in yuv color space,
           so we need to enable bcsh r2y and post csc en.
 * @param  pReg: VOP reg base.
 * @param  pGammaInfo: VOP gamma info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostGammaInit(struct VOP_REG *pReg,
                                 struct VOP_GAMMA_COE_INFO *pGammaInfo)
{
    uint8_t i = 0;

    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_MASK,
                  pGammaInfo->gammaCoeEnable);

    for (i = 0; i < VOP_GAMMA_SIZE; i++)
        VOP_Write(&g_VOP_RegMir.GAMMA_COE_WORD[i], &pReg->GAMMA_COE_WORD[i],
                  *((uint32_t *)pGammaInfo->gammaCoeWord + i));
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_Y_GAMMA_EN_SHIFT,
                  VOP_POST_CTRL_Y_GAMMA_EN_MASK,
                  pGammaInfo->gammaCoeEnable);

    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_CSC_EN_SHIFT,
                  VOP_POST_CTRL_POST_CSC_EN_MASK,
                  pGammaInfo->gammaCoeEnable);

    return HAL_OK;
}

/**
 * @brief  VOP post color matrix init.
 * @param  pReg: VOP reg base.
 * @param  pColorMatrixInfo: VOP color matrix info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostColorMatrixInit(struct VOP_REG *pReg,
                                       struct VOP_COLOR_MATRIX_INFO *pColorMatrixInfo)
{
    uint8_t i = 0;
    uint32_t val = 0;
    uint8_t *colorMatrixCoe = pColorMatrixInfo->colorMatrixCoe;
    uint8_t *colorMatrixOffset = pColorMatrixInfo->colorMatrixOffset;

    for (i = 0; i < VOP_COLOR_MATRIX_SIZE; i++) {
        val = colorMatrixCoe[VOP_COLOR_MATRIX_SIZE * i + 0] |
              colorMatrixCoe[VOP_COLOR_MATRIX_SIZE * i + 1] << 8 |
              colorMatrixCoe[VOP_COLOR_MATRIX_SIZE * i + 2] << 16 |
              colorMatrixOffset[i] << 24;
        VOP_Write(&g_VOP_RegMir.COLOR_MATRIX_COE[i],
                  &pReg->COLOR_MATRIX_COE[i],
                  val);
    }
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_COLOR_MATRIX_EN_SHIFT,
                  VOP_POST_CTRL_COLOR_MATRIX_EN_MASK,
                  pColorMatrixInfo->colorMatrixEn);

    return HAL_OK;
}

/**
 * @brief  VOP post clip init.
 * @param  pReg: VOP reg base.
 * @param  pClipInfo: VOP clip info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostClipInit(struct VOP_REG *pReg,
                                struct VOP_POST_CLIP_INFO *pClipInfo)
{
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_Y_THRES_SHIFT,
                  VOP_POST_CTRL_Y_THRES_MASK,
                  pClipInfo->postYThres);
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_CLIP_EN_SHIFT,
                  VOP_POST_CTRL_CLIP_EN_MASK,
                  pClipInfo->postClipEn);

    return HAL_OK;
}

/**
 * @brief  VOP polarity init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP output mode info.
 * @param  ConnectorType: output connector type.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PolarityInit(struct VOP_REG *pReg,
                                struct DISPLAY_MODE_INFO *pModeInfo,
                                uint16_t ConnectorType)
{
    uint16_t polarity;

    polarity = DCLK_ENABLE;
    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_NPIXDATA ? 1 : 0) << 1;
    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_NHSYNC ? 1 : 0) << 2;
    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_NVSYNC ? 1 : 0) << 3;
    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_DEN ? 1 : 0) << 4;
    switch (ConnectorType) {
    case RK_DISPLAY_CONNECTOR_RGB:
        VOP_Write(&g_VOP_RegMir.DSP_CTRL[0], &pReg->DSP_CTRL[0],
                  polarity);
        break;
    case RK_DISPLAY_CONNECTOR_DSI:
        VOP_Write(&g_VOP_RegMir.DSP_CTRL[0], &pReg->DSP_CTRL[0],
                  polarity << VOP_DSP_CTRL0_MIPI_DCLK_EN_SHIFT);
        break;
    default:
        HAL_DBG_ERR("Unknown Connector Type: %d\n", ConnectorType);
        break;
    }

    return HAL_OK;
}

/**
 * @brief  VOP output busformat init.
 * @param  pReg: VOP reg base.
 * @param  pModeInfo: VOP output mode info.
 * @param  BusFormat: output busformat.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_OutputInit(struct VOP_REG *pReg,
                              struct DISPLAY_MODE_INFO *pModeInfo,
                              uint16_t BusFormat)
{
    switch (BusFormat) {
    case MEDIA_BUS_FMT_RGB666_1X18:
    case MEDIA_BUS_FMT_RGB666_1X24_CPADHI:
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_MODE_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_MODE_MASK,
                      RGB888TORGB666);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_SEL_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_SEL_MASK,
                      DITHER_DOWN_ALLEGRO);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_MASK,
                      1);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT,
                      VOP_DSP_CTRL2_DSP_OUT_MODE_MASK,
                      OUTPUT_MODE_666);
        break;
    case MEDIA_BUS_FMT_RGB888_1X24:
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_MASK,
                      0);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT,
                      VOP_DSP_CTRL2_DSP_OUT_MODE_MASK,
                      OUTPUT_MODE_888);
        break;
    case MEDIA_BUS_FMT_SRGB888_3X8:
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_MASK,
                      0);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT,
                      VOP_DSP_CTRL2_DSP_OUT_MODE_MASK,
                      OUT_MODE_S888);
        break;
    case MEDIA_BUS_FMT_SRGB888_DUMMY_4X8:
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DITHER_DOWN_SHIFT,
                      VOP_DSP_CTRL2_DITHER_DOWN_MASK,
                      0);
        VOP_MaskWrite(&g_VOP_RegMir.DSP_CTRL[2], &pReg->DSP_CTRL[2],
                      VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT,
                      VOP_DSP_CTRL2_DSP_OUT_MODE_MASK,
                      OUT_MODE_S888_DUMMY);
    default:
        HAL_DBG_ERR("Unknown Bus Format: %d\n", BusFormat);
        break;
    }

    return HAL_OK;
}

/**
 * @brief  VOP edpi init.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_EdpiInit(struct VOP_REG *pReg)
{
    WRITE_REG_MASK_WE(gGrfReg->SOC_CON[0], GRF_SOC_CON0_VOP_TE_SEL_MASK,
                      1 << GRF_SOC_CON0_VOP_TE_SEL_SHIFT);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_DPHY_FRM_SWITCH_EN_SHIFT,
                  VOP_SYS_CTRL2_DPHY_FRM_SWITCH_EN_MASK,
                  0x1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_IMD_EDPI_TE_EN_SHIFT,
                  VOP_SYS_CTRL2_IMD_EDPI_TE_EN_MASK,
                  1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_SHIFT,
                  VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_MASK,
                  1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_IMD_EDPI_WMS_MODE_SHIFT,
                  VOP_SYS_CTRL2_IMD_EDPI_WMS_MODE_MASK,
                  0x1);

    return HAL_OK;
}

/**
 * @brief  Config VOP NOC QOS value.
 * @param  pReg: VOP reg base.
 * @param  nocQosValue: NOC qos value.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_NocQosInit(struct VOP_REG *pReg, uint32_t nocQosValue)
{
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_NOC_QOS_EN_SHIFT,
                  VOP_SYS_CTRL1_SW_NOC_QOS_EN_MASK, 1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_SHIFT,
                  VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_MASK, nocQosValue);

    return HAL_OK;
}

/**
 * @brief  Config VOP NOC hurry threshold value.
 * @param  pReg: VOP reg base.
 * @param  hurryValue: hurry value.
 * @param  hurryThreshold: hurry threshold.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_NocHurryInit(struct VOP_REG *pReg, uint32_t hurryValue,
                                uint32_t hurryThreshold)
{
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_NOC_HURRY_EN_SHIFT,
                  VOP_SYS_CTRL1_SW_NOC_HURRY_EN_MASK, 1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_SHIFT,
                  VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_MASK, hurryValue);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_SHIFT,
                  VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_MASK,
                  hurryThreshold);

    return HAL_OK;
}

/**
 * @brief  Config VOP AXI outstand number.
 * @param  pReg: VOP reg base.
 * @param  outStandNum: AXI outstand number.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_AxiOutstandInit(struct VOP_REG *pReg, uint32_t outStandNum)
{
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_SHIFT,
                  VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_MASK, 1);
    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[1], &pReg->SYS_CTRL[1],
                  VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_SHIFT,
                  VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_MASK, outStandNum);

    return HAL_OK;
}

/** @} */

/** @defgroup VOP_Exported_Functions_Group5 Other Functions
 @verbatim

 ===============================================================================
             #### Other Functions ####
 ===============================================================================
 This section provides functions allowing to control uart:

 @endverbatim
 *  @{
 */
/**
 * @brief  Enable VOP frame start interrupt.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_EnableFsIrq(struct VOP_REG *pReg)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_FS0_INTR_EN_SHIFT,
                  VOP_INTR_EN_FS0_INTR_EN_MASK, 1);

    return HAL_OK;
}

/**
 * @brief  Disable VOP frame start interrupt.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_DisableFsIrq(struct VOP_REG *pReg)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_FS0_INTR_EN_SHIFT,
                  VOP_INTR_EN_FS0_INTR_EN_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  Enable VOP line flag interrupt.
 * @param  pReg: VOP reg base.
 * @param  lineFlag0: Line flag0 position.
 * @param  lineFlag1: Line flag1 position.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_EnableLineIrq(struct VOP_REG *pReg,
                                 uint32_t lineFlag0, uint32_t lineFlag1)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN,
                  VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT,
                  VOP_INTR_EN_LINE_FLAG0_INTR_EN_MASK, 1);

    VOP_MaskWrite(NULL, &pReg->INTR_EN,
                  VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT,
                  VOP_INTR_EN_LINE_FLAG1_INTR_EN_MASK, 1);

    VOP_Write(&g_VOP_RegMir.LINE_FLAG, &pReg->LINE_FLAG,
              lineFlag1 << 16 | lineFlag0);

    return HAL_OK;
}

/**
 * @brief  Disable VOP line flag interrupt.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_DisableLineIrq(struct VOP_REG *pReg)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT,
                  VOP_INTR_EN_LINE_FLAG0_INTR_EN_MASK, 0);

    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT,
                  VOP_INTR_EN_LINE_FLAG1_INTR_EN_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  Enable VOP debug interrupt.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_EnableDebugIrq(struct VOP_REG *pReg)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT,
                  VOP_INTR_EN_BUS_ERROR_INTR_EN_MASK, 1);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN1_EMPTY_INTR_EN_MASK, 1);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK, 1);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK, 1);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_POST_EMPTY_INTR_EN_MASK, 1);

    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_SHIFT,
                  VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_MASK, 1);

    return HAL_OK;
}

/**
 * @brief  Disable VOP debug interrupt.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_DisableDebugIrq(struct VOP_REG *pReg)
{
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT,
                  VOP_INTR_EN_BUS_ERROR_INTR_EN_MASK, 0);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN1_EMPTY_INTR_EN_MASK, 0);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK, 0);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK, 0);
    VOP_MaskWrite(NULL, &pReg->INTR_EN, VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT,
                  VOP_INTR_EN_POST_EMPTY_INTR_EN_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  VOP interrupt handler.
 * @param  pReg: VOP reg base.
 * @return HAL_Status.
 */
uint32_t HAL_VOP_IrqHandler(struct VOP_REG *pReg)
{
    uint32_t i, val;

    val = pReg->INTR_STATUS;

    for (i = 0; i < HAL_ARRAY_SIZE(VOP_IRQs); i++) {
        /**
         * if (val & BIT(i))
         *     HAL_DBG_ERR("VOP Irq: %s\n", VOP_IRQs[i]);
         */
    }

    pReg->INTR_CLEAR = val & 0xffff;

    return val & 0xffff;
}

/**
 * @brief  VOP interrupt handler.
 * @param  pReg: VOP reg base.
 * @param  type: send cmd or data
 * @param  val: send value
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_SendMcuCmd(struct VOP_REG *pReg, uint8_t type, uint32_t val)
{
    switch (type) {
    case MCU_WRCMD:
        VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_RS_SHIFT,
                      VOP_MCU_MCU_RS_MASK, 0);
        VOP_Write(&g_VOP_RegMir.MCU_WRITE_DATA, &pReg->MCU_WRITE_DATA,
                  val);
        VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_RS_SHIFT,
                      VOP_MCU_MCU_RS_MASK, 1);
        break;
    case MCU_WRDATA:
        VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_RS_SHIFT,
                      VOP_MCU_MCU_RS_MASK, 1);
        VOP_Write(&g_VOP_RegMir.MCU_WRITE_DATA, &pReg->MCU_WRITE_DATA,
                  val);
        break;
    case MCU_SETBYPASS:
        VOP_MaskWrite(&g_VOP_RegMir.MCU, &pReg->MCU, VOP_MCU_MCU_BYPASS_SHIFT,
                      VOP_MCU_MCU_BYPASS_MASK, val ? 1 : 0);
        break;
    default:
        break;
    }

    return HAL_OK;
}

/** @} */
#endif

/** @} */

/** @} */
