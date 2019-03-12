/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup VOP
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The VOP driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_VOP_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define VOP_WIN_YUV4_FORMAT BIT(4)
#define VOP_WIN_BPPX_FORMAT BIT(5)
#define IS_YUV_FORMAT(x) ((x >= VOP_FMT_YUV420SP) &&    \
                 (x <= VOP_FMT_VYUY422_4)) ? 1 : 0
#define IS_BPP_FORMAT(x) ((x >= VOP_FMT_1BPP) &&    \
                 (x <= VOP_FMT_8BPP)) ? 1 : 0

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
} eVOP_OutputMode;

/********************* Private Variable Definition ***************************/
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
static uint32_t VOP_MaskRead(__IO uint32_t hwReg,
                             uint32_t shift, uint32_t mask)
{
    return (READ_REG(hwReg) & mask) >> shift;
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
    case VOP_FMT_YUV422SP:
    case VOP_FMT_YUV444SP:
        val = 8;
        break;
    case VOP_FMT_YUV420SP_4:
        val = plane ? 8 : 4;
        break;
    case VOP_FMT_YVYU422_4:
    case VOP_FMT_VYUY422_4:
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

static void VOP_LoadLut(struct VOP_REG *pReg,
                        struct CRTC_WIN_STATE *pWinState)
{
    uint16_t lutLen, i;
    uint32_t regOffset = pWinState->winId * 0x40 / 4;

    switch (pWinState->format) {
    case VOP_FMT_1BPP:
        lutLen = 2;
        break;
    case VOP_FMT_2BPP:
        lutLen = 4;
        break;
    case VOP_FMT_4BPP:
        lutLen = 16;
        break;
    case VOP_FMT_8BPP:
        lutLen = 256;
        break;
    }

    for (i = 0; i < lutLen; i++) {
        VOP_Write(&g_VOP_RegMir.WIN0_BPP_LUT[0] + regOffset,
                  &pReg->WIN0_BPP_LUT[0] + regOffset,
                  pWinState->lut[i]);
    }
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
                 VOP_GetFormatLength(pWinState->format, 0) / 8;
        VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST + regOffset,
                  &pReg->WIN0_YRGB_MST + regOffset,
                  pWinState->yrgbAddr + offset);
        VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST_RAW + regOffset,
                  &pReg->WIN0_YRGB_MST_RAW + regOffset,
                  pWinState->yrgbAddr);

        if (IS_YUV_FORMAT(pWinState->format)) {
            offset = pWinState->yLoopOffset * pWinState->xVir +
                     pWinState->xLoopOffset *
                     VOP_GetFormatLength(pWinState->format, 1) / 8;
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
    bool bppFormat, yuv4Format;
    uint32_t regOffset = pWinState->winId * 0x40 / 4;

    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_EN_MASK, pWinState->winEn);
    if (pWinState->winEn == false)
        return;
    yuv4Format = !!(pWinState->format & VOP_WIN_YUV4_FORMAT);
    bppFormat = !!(pWinState->format & VOP_WIN_BPPX_FORMAT);
    cfgFormat = pWinState->format &
                ~(VOP_WIN_YUV4_FORMAT | VOP_WIN_BPPX_FORMAT);

    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_DATA_FMT_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_DATA_FMT_MASK, cfgFormat);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_BPP_SWAP_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_BPP_SWAP_MASK, bppFormat);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_MASK, yuv4Format);
    VOP_MaskWrite(&g_VOP_RegMir.WIN0_CTRL[0] + regOffset,
                  &pReg->WIN0_CTRL[0] + regOffset,
                  VOP_WIN0_CTRL0_WIN0_RB_SWAP_SHIFT,
                  VOP_WIN0_CTRL0_WIN0_RB_SWAP_MASK, pWinState->rbSwap);
    VOP_Write(&g_VOP_RegMir.WIN0_VIR + regOffset,
              &pReg->WIN0_VIR + regOffset, pWinState->xVir >> 2);
    VOP_Write(&g_VOP_RegMir.WIN0_YRGB_MST + regOffset,
              &pReg->WIN0_YRGB_MST + regOffset, pWinState->yrgbAddr);
    VOP_Write(&g_VOP_RegMir.WIN0_CBCR_MST + regOffset,
              &pReg->WIN0_CBCR_MST + regOffset, pWinState->cbcrAddr);

    dspInfo = (pWinState->crtcH - 1) << 16 | (pWinState->crtcW - 1);
    dspStx = pWinState->crtcX + pModeInfo->crtcHtotal -
             pModeInfo->crtcHsyncStart;
    dspSty = pWinState->crtcY + pModeInfo->crtcVtotal -
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
    return VOP_MaskRead(pReg->REG_CFG_DONE,
                        VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT,
                        VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_MASK);
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

    if (IS_BPP_FORMAT(pWinState->format)) {
        if (pWinState->winId == VOP_WIN2) {
            HAL_DBG_ERR("win2 unsupport bpp format!\n");

            return HAL_INVAL;
        }
        VOP_LoadLut(pReg, pWinState);
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
    VOP_MaskWrite(NULL, &pReg->REG_CFG_DONE,
                  VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT,
                  VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_MASK, 1);

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
                  0xff);

    VOP_MaskWrite(&g_VOP_RegMir.SYS_CTRL[2], &pReg->SYS_CTRL[2],
                  VOP_SYS_CTRL2_DSC_BYPASS_EN_SHIFT,
                  VOP_SYS_CTRL2_DSC_BYPASS_EN_MASK,
                  0x1);

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
    preHactSt = preHsync + hbp + pPostScaleInfo->srcX;
    preHactEnd = preHactSt + preHdisplay;
    preHtotal = preHactEnd + hfp;

    preVsync = vsyncLen;
    preVactSt = preVsync + vbp + pPostScaleInfo->srcY;
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
    dspHactSt = dspHsync + hbp + pPostScaleInfo->dstX;
    dspHactEnd = dspHactSt + dsp_hdisplay;
    dspHtotal = dspHactEnd + hfp;

    dspVsync = vsyncLen;
    dspVactSt = dspVsync + vbp + pPostScaleInfo->dstY;
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

    val = pBCSHInfo->brightness << VOP_BCSH_BCS_BRIGHTNESS_SHIFT |
          pBCSHInfo->contrast << VOP_BCSH_BCS_CONTRAST_SHIFT |
          pBCSHInfo->satCon << VOP_BCSH_BCS_SAT_CON_SHIFT;
    VOP_Write(&g_VOP_RegMir.BCSH_BCS, &pReg->BCSH_BCS, val);

    val = pBCSHInfo->hueSin << VOP_BCSH_H_SIN_HUE_SHIFT |
          pBCSHInfo->hueCos << VOP_BCSH_H_COS_HUE_SHIFT;
    VOP_Write(&g_VOP_RegMir.BCSH_H, &pReg->BCSH_H, val);

    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_SW_BCSH_Y2R_EN_SHIFT,
                  VOP_BCSH_CTRL_SW_BCSH_Y2R_EN_MASK,
                  1);

    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT,
                  VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_MASK,
                  1);
    VOP_MaskWrite(&g_VOP_RegMir.BCSH_CTRL, &pReg->BCSH_CTRL,
                  VOP_BCSH_CTRL_BCSH_EN_SHIFT,
                  VOP_BCSH_CTRL_BCSH_EN_MASK,
                  1);

    return HAL_OK;
}

/**
 * @brief  VOP post gamma init.
 * @param  pReg: VOP reg base.
 * @param  pGammaInfo: VOP gamma info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostGammaInit(struct VOP_REG *pReg,
                                 struct VOP_GAMMA_COE_INFO *pGammaInfo)
{
    uint8_t i = 0;

    for (i = 0; i < VOP_GAMMA_SIZE; i++)
        VOP_Write(&g_VOP_RegMir.GAMMA_COE_WORD[i], &pReg->GAMMA_COE_WORD[i],
                  pGammaInfo->gammaCoeWord[i]);
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_Y_GAMMA_EN_SHIFT,
                  VOP_POST_CTRL_Y_GAMMA_EN_MASK,
                  pGammaInfo->gammaCoeEnable);

    return HAL_OK;
}

/**
 * @brief  VOP post CSC init.
 * @param  pReg: VOP reg base.
 * @param  pPostCSCInfo: VOP CSC info.
 * @return HAL_Status.
 */
HAL_Status HAL_VOP_PostCSCInit(struct VOP_REG *pReg,
                               struct VOP_POST_CSC_INFO *pPostCSCInfo)
{
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_CSC_MODE_SHIFT,
                  VOP_POST_CTRL_POST_CSC_MODE_MASK,
                  pPostCSCInfo->postCscMode);
    VOP_MaskWrite(&g_VOP_RegMir.POST_CTRL, &pReg->POST_CTRL,
                  VOP_POST_CTRL_POST_CSC_EN_SHIFT,
                  VOP_POST_CTRL_POST_CSC_EN_MASK,
                  pPostCSCInfo->postCscEn);

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

    for (i = 0; i < VOP_COLOR_MATRIX_SIZE; i++)
        VOP_Write(&g_VOP_RegMir.COLOR_MATRIX_COE[i],
                  &pReg->COLOR_MATRIX_COE[i],
                  pColorMatrixInfo->colorMatrixCoe[i]);
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
        HAL_DBG_ERR("Unknow Connector Type: %d\n", ConnectorType);
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
    default:
        HAL_DBG_ERR("Unknow Bus Format: %d\n", BusFormat);
        break;
    }

    return HAL_OK;
}

/**
 * @brief  Config VOP NOC QOS value.
 * @param  pReg: VOP reg base.
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
 * @param  HurryValue: hurry value.
 * @param  HurryThreshold: hurry threshold.
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
 * @param  OutStandNum: AXI outstand number.
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
 * @param  LineFlag0: Line flag0 position.
 * @param  LineFlag1: Line flag1 position.
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
HAL_Status HAL_VOP_IrqHandler(struct VOP_REG *pReg)
{
    uint32_t i, val;

    val = pReg->INTR_STATUS;

    for (i = 0; i < HAL_ARRAY_SIZE(VOP_IRQs); i++) {
        if (val & BIT(i))
            HAL_DBG_ERR("VOP Irq: %s\n", VOP_IRQs[i]);
    }

    pReg->INTR_CLEAR = val & 0xffff;

    return HAL_OK;
}

/** @} */
#endif

/** @} */

/** @} */
