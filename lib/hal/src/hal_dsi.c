/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DSI
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DSI driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_DSI_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define DSI_UPDATE_BIT(REG, SHIFT, VAL) \
                 VAL ? SET_BIT(REG, SHIFT) : CLEAR_BIT(REG, SHIFT)
#define DIV_ROUND_UP(x, y) (((x) + (y) - 1) / (y))
#define CMD_PKT_STATUS_TIMEOUT_RETRIES 100

/********************* Private Structure Definition **************************/
typedef enum {
    DPI_COLOR_CODING_16BIT_1,
    DPI_COLOR_CODING_16BIT_2,
    DPI_COLOR_CODING_16BIT_3,
    DPI_COLOR_CODING_18BIT_1,
    DPI_COLOR_CODING_18BIT_2,
    DPI_COLOR_CODING_24BIT,
} eDSI_DpiColorCoding;

/********************* Private Variable Definition ***************************/
static struct GRF_REG *const gGrfReg = GRF;

/********************* Private Function Definition ***************************/
static uint32_t DSI_CheckFifoStatus(struct DSI_REG *pReg, uint32_t flag)
{
    return READ_BIT(pReg->CMD_PKT_STATUS, flag);
}

static HAL_Status DSI_WaitFifoNotFull(struct DSI_REG *pReg, uint32_t flag)
{
    uint32_t retries = 0;

    while (DSI_CheckFifoStatus(pReg, flag)) {
        if (++retries > CMD_PKT_STATUS_TIMEOUT_RETRIES) {
            HAL_DBG_ERR("%s: flag:%lx timeout for wait not full\n", __func__, flag);

            return HAL_TIMEOUT;
        }
        HAL_DelayUs(1);
    }

    return HAL_OK;
}

static HAL_Status DSI_WaitFifoEmpty(struct DSI_REG *pReg)
{
    uint32_t retries = 0;

    while (!DSI_CheckFifoStatus(pReg, GEN_CMD_EMPTY_MASK)) {
        if (++retries > CMD_PKT_STATUS_TIMEOUT_RETRIES) {
            HAL_DBG_ERR("%s: timeout for wait empty\n", __func__);

            return HAL_TIMEOUT;
        }
        HAL_DelayUs(1);
    }

    return HAL_OK;
}

static uint32_t DSI_GetHcomponentLbcc(uint32_t hcomponent, uint16_t lane_mbps, uint16_t clk)
{
    uint32_t lbcc;
    uint64_t lbcc_tmp;

    lbcc_tmp = hcomponent * lane_mbps * 1000 / 8;
    lbcc = DIV_ROUND_UP(lbcc_tmp, clk);

    return lbcc;
}

/********************* Public Function Definition ****************************/

/** @defgroup DSI_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  suspend DSI.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 * TODO:
 */
HAL_Status HAL_DSI_Suspend(struct DSI_REG *pReg)
{
    return HAL_OK;
}

/**
 * @brief  resume DSI.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 * TODO:
 */
HAL_Status HAL_DSI_Resume(struct DSI_REG *pReg)
{
    return HAL_OK;
}

/** @} */

/** @defgroup DSI_Exported_Functions_Group2 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */
/**
 * @brief  Send DSI Command Packet.
 * @param  pReg: DSI reg base.
 * @param  DataType: DSI Command Data Type.
 * @param  PayloadLen: DSI Command Data Len.
 * @param  Payload: DSI Command Data.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_SendPacket(struct DSI_REG *pReg, uint8_t DataType,
                              uint8_t PayloadLen, uint8_t *Payload)
{
    uint32_t temp, val;
    HAL_Status ret;

    ret = DSI_WaitFifoNotFull(pReg, GEN_CMD_FULL_MASK);
    if (ret != HAL_OK)
        return ret;
    val = (0x0 << 6) | DataType;
    switch (DataType) {
    case MIPI_DSI_DCS_COMPRESSION_MODE:
    case MIPI_DSI_DCS_SHORT_WRITE:
    case MIPI_DSI_DCS_SHORT_WRITE_PARAM:
    case MIPI_DSI_GENERIC_SHORT_WRITE_0_PARAM:
    case MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM:
    case MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM:
    {
        val |= (PayloadLen > 0) ? (Payload[0] << 8) : 0;
        val |= (PayloadLen > 1) ? (Payload[1] << 16) : 0;
        break;
    }
    case MIPI_DSI_DCS_LONG_WRITE:
    case MIPI_DSI_GENERIC_LONG_WRITE:
    case MIPI_DSI_PPS_LONG_WRITE:
    {
        /* Send payload */
        ret = DSI_WaitFifoNotFull(pReg, GEN_PLD_W_FULL_MASK);
        if (ret != HAL_OK)
            return ret;

        val |= (PayloadLen << 8);
        while (PayloadLen) {
            if (PayloadLen < 4) {
                temp = 0;
                memcpy(&temp, Payload, PayloadLen);
                WRITE_REG(pReg->GEN_PLD_DATA, temp);
                PayloadLen = 0;
            } else {
                temp = *(uint32_t *)Payload;
                WRITE_REG(pReg->GEN_PLD_DATA, temp);
                Payload += 4;
                PayloadLen -= 4;
            }
        }
        break;
    }
    default:
        HAL_DBG_ERR("%s: Unsupported command\n", __func__);
    }

    /* Send packet header */
    WRITE_REG(pReg->GEN_HDR, val);

    ret = DSI_WaitFifoEmpty(pReg);

    return ret;
}

/**
 * @brief  Config DSI Send Message In Lp or Hs Mode.
 * @param  pReg: DSI reg base.
 * @param  Enable: LowPower Mode Flag.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_MsgLpModeConfig(struct DSI_REG *pReg, bool Enable)
{
    uint32_t lp_mask = GEN_SW_0P_TX_MASK | GEN_SW_1P_TX_MASK |
                       GEN_SW_2P_TX_MASK | GEN_SR_0P_TX_MASK |
                       GEN_SR_1P_TX_MASK | GEN_SR_2P_TX_MASK |
                       GEN_LW_TX_MASK | DCS_SW_0P_TX_MASK |
                       DCS_SW_1P_TX_MASK | DCS_SR_0P_TXL_MASK |
                       DCS_LW_TX_MASK | MAX_RD_PKT_SIZE_MASK;

    if (Enable) {
        DSI_UPDATE_BIT(pReg->VID_MODE_CFG, LP_CMD_EN_MASK, 1);
        DSI_UPDATE_BIT(pReg->LPCLK_CTRL, PHY_TXREQUESTCLKHS_MASK, 0);
        DSI_UPDATE_BIT(pReg->CMD_MODE_CFG, lp_mask, 1);
    } else {
        DSI_UPDATE_BIT(pReg->VID_MODE_CFG, LP_CMD_EN_MASK, 0);
        DSI_UPDATE_BIT(pReg->LPCLK_CTRL, PHY_TXREQUESTCLKHS_MASK, 1);
        DSI_UPDATE_BIT(pReg->CMD_MODE_CFG, lp_mask, 0);
    }

    return HAL_OK;
}

/** @} */

/** @defgroup DSI_Exported_Functions_Group3 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  DSI m31 Dphy Set Pll.
 * @param  rate: DSI per lane mbps.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_M31DphySetPll(uint32_t rate)
{
    /**
     * TODO:
     */
    return HAL_OK;
}

/**
 * @brief  DSI m31 Dphy Init.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_M31DphyInit(struct DSI_REG *pReg)
{
    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_ENABLECLK_MASK, 0);
    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_RSTZ_MASK, 1);
    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_SHUTDOWNZ_MASK, 1);

    RK_CLRSET_REG_BITS(gGrfReg->DSI_CON[0], GRF_DSI_CON0_DPHY_PHYRSTZ_MASK, 0);
    HAL_DelayUs(10);
    RK_CLRSET_REG_BITS(gGrfReg->DSI_CON[0], GRF_DSI_CON0_DPHY_PHYRSTZ_MASK, 1);

    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_SHUTDOWNZ_MASK, 0);
    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_RSTZ_MASK, 0);
    DSI_UPDATE_BIT(pReg->PHY_RSTZ, DSI_PHY_ENABLECLK_MASK, 1);
    HAL_DelayUs(10);

    return HAL_OK;
}

/**
 * @brief  DSI Init.
 * @param  pReg: DSI reg base.
 * @param  Lanembps: DSI per lane mbps.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_Init(struct DSI_REG *pReg, uint32_t Lanembps)
{
    uint32_t val;

    val = DIV_ROUND_UP(Lanembps >> 3, 20);
    WRITE_REG(pReg->PWR_UP, 0);
    WRITE_REG(pReg->CLKMGR_CFG, 10 << TO_CLK_DIVISION_SHIFT |
              val << TX_ESC_CLK_DIVISION_SHIFT);

    return HAL_OK;
}

/**
 * @brief  DSI Dpi Config.
 * @param  pReg: DSI reg base.
 * @param  pModeInfo: display mode info.
 * @param  BusFormat: display busformat.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_DpiConfig(struct DSI_REG *pReg,
                             struct DISPLAY_MODE_INFO *pModeInfo,
                             uint16_t BusFormat)
{
    uint32_t lpcmd_time;
    uint32_t color = 0, polarity = 0;

    switch (BusFormat) {
    case MEDIA_BUS_FMT_RGB888_1X24:
        color = DPI_COLOR_CODING_24BIT;
        break;
    case MEDIA_BUS_FMT_RGB666_1X24_CPADHI:
        color = DPI_COLOR_CODING_18BIT_2 | LOOSELY18_EN_MASK;
        break;
    case MEDIA_BUS_FMT_RGB666_1X18:
        color = DPI_COLOR_CODING_18BIT_1;
        break;
    case MEDIA_BUS_FMT_RGB565_1X16:
        color = DPI_COLOR_CODING_16BIT_1;
        break;
    }

    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_NHSYNC ? 1 : 0) << HSYNC_ACTIVE_LOW_SHIFT;
    polarity |= (pModeInfo->flags & VIDEO_MODE_FLAG_NVSYNC ? 1 : 0) << VSYNC_ACTIVE_LOW_SHIFT;
    lpcmd_time = 4 << OUTVACT_LPCMD_TIME_SHIFT | 4 << INVACT_LPCMD_TIME_SHIFT;

    WRITE_REG(pReg->DPI_COLOR_CODING, color);
    WRITE_REG(pReg->DPI_CFG_POL, polarity);
    WRITE_REG(pReg->DPI_LP_CMD_TIM, lpcmd_time);

    return HAL_OK;
}

/**
 * @brief  DSI Packet Handler Config.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_PacketHandlerConfig(struct DSI_REG *pReg)
{
    WRITE_REG(pReg->PCKHDL_CFG, BTA_EN_MASK | ECC_RX_MASK | CRC_RX_MASK);

    return HAL_OK;
}

/**
 * @brief  DSI Mode Config.
 * @param  pReg: DSI reg base.
 * @param  pModeInfo: display mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_ModeConfig(struct DSI_REG *pReg,
                              struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint32_t val = 0;

    if (pModeInfo->flags & DSI_MODE_VIDEO) {
        if (pModeInfo->flags & DSI_MODE_VIDEO_BURST)
            val |= 0x2 << VID_MODE_TYPE_MASK;
        else if (pModeInfo->flags & DSI_MODE_VIDEO_SYNC_PULSE)
            val |= 0 << VID_MODE_TYPE_MASK;
        else
            val |= VID_MODE_TYPE_MASK;

        WRITE_REG(pReg->VID_MODE_CFG, val);
        WRITE_REG(pReg->VID_PKT_SIZE, pModeInfo->crtcHdisplay);
    } else {
        WRITE_REG(pReg->TO_CNT_CFG, 1000 << HSTX_TO_CNT_SHIFT |
                  1000 << LPRX_TO_CNT_SHIFT);
        WRITE_REG(pReg->BTA_TO_CNT, 0xd00);
    }

    if (pModeInfo->flags & DSI_CLOCK_NON_CONTINUOUS)
        DSI_UPDATE_BIT(pReg->LPCLK_CTRL, AUTO_CLKLANE_CTRL_MASK, 1);

    HAL_DSI_MsgLpModeConfig(pReg, pModeInfo->flags & DSI_MODE_LPM);

    DSI_UPDATE_BIT(pReg->MODE_CFG, CMD_VIDEO_MODE_MASK, 1);
    WRITE_REG(pReg->PWR_UP, 0x1);

    return HAL_OK;
}

/**
 * @brief  DSI Line Timer Config.
 * @param  pReg: DSI reg base.
 * @param  Lanembps: DSI per lane mbps.
 * @param  pModeInfo: display mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_LineTimerConfig(struct DSI_REG *pReg,
                                   uint16_t Lanembps,
                                   struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint16_t hsa = pModeInfo->crtcHsyncEnd - pModeInfo->crtcHsyncStart;
    uint16_t hbp = pModeInfo->crtcHtotal - pModeInfo->crtcHsyncEnd;
    uint16_t clk = pModeInfo->crtcClock;
    uint32_t lpcc;

    lpcc = DSI_GetHcomponentLbcc(hsa, Lanembps, clk);
    WRITE_REG(pReg->VID_HSA_TIME, lpcc);
    lpcc = DSI_GetHcomponentLbcc(hbp, Lanembps, clk);
    WRITE_REG(pReg->VID_HBP_TIME, lpcc);
    lpcc = DSI_GetHcomponentLbcc(pModeInfo->crtcHtotal, Lanembps, clk);
    WRITE_REG(pReg->VID_HLINE_TIME, lpcc);

    return HAL_OK;
}

HAL_Status HAL_DSI_UpdateLineTimer(struct DSI_REG *pReg,
                                   uint16_t Lanembps,
                                   struct DISPLAY_MODE_INFO *pModeInfo,
                                   struct DISPLAY_RECT *pDisplayRect)
{
    uint16_t hsa = pModeInfo->crtcHsyncEnd - pModeInfo->crtcHsyncStart;
    uint16_t hbp = pDisplayRect->w - pModeInfo->crtcHsyncEnd;
    uint16_t clk = pModeInfo->crtcClock;
    uint32_t lpcc;

    DSI_UPDATE_BIT(pReg->CMD_MODE_CFG, TEAR_FX_EN_MASK, 0);
    WRITE_REG(pReg->EDPI_CMD_SIZE, pDisplayRect->w);
    DSI_UPDATE_BIT(pReg->CMD_MODE_CFG, DCS_LW_TX_MASK, 0);
    DSI_UPDATE_BIT(pReg->CMD_MODE_CFG, TEAR_FX_EN_MASK, 1);

    lpcc = DSI_GetHcomponentLbcc(hsa, Lanembps, clk);

    WRITE_REG(pReg->VID_HSA_TIME, lpcc);
    lpcc = DSI_GetHcomponentLbcc(hbp, Lanembps, clk);
    WRITE_REG(pReg->VID_HBP_TIME, lpcc);
    lpcc = DSI_GetHcomponentLbcc(pDisplayRect->w, Lanembps, clk);
    WRITE_REG(pReg->VID_HLINE_TIME, lpcc);

    return HAL_OK;
}

/**
 * @brief  DSI Vertical Timing Config.
 * @param  pReg: DSI reg base.
 * @param  pModeInfo: display mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_VerticalTimingConfig(struct DSI_REG *pReg,
                                        struct DISPLAY_MODE_INFO *pModeInfo)
{
    uint16_t vfp = pModeInfo->crtcVsyncStart - pModeInfo->crtcVdisplay;
    uint16_t vbp = pModeInfo->crtcVtotal - pModeInfo->crtcVsyncEnd;
    uint16_t vsa = pModeInfo->crtcVsyncEnd - pModeInfo->crtcVsyncStart;

    WRITE_REG(pReg->VID_VSA_LINES, vsa);
    WRITE_REG(pReg->VID_VBP_LINES, vbp);
    WRITE_REG(pReg->VID_VFP_LINES, vfp);
    WRITE_REG(pReg->VID_VACTIVE_LINES, pModeInfo->crtcHdisplay);

    return HAL_OK;
}

/**
 * @brief  DSI Dphy Timing Config.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_DphyTimingConfig(struct DSI_REG *pReg)
{
    WRITE_REG(pReg->PHY_TMR_LPCLK_CFG, 0x40 << PHY_LP2HS_TIME_SHIFT |
              0x40 << PHY_CLKHS2LP_TIME_SHIFT);
    WRITE_REG(pReg->PHY_TMR_CFG, 0x14 << PHY_HS2LP_TIME_SHIFT |
              0x10 << PHY_CLKHS2LP_TIME_SHIFT | 10000 << MAX_RD_TIME_SHIFT);

    return HAL_OK;
}

/**
 * @brief  DSI_Clear Error.
 * @param  pReg: DSI reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_ClearErr(struct DSI_REG *pReg)
{
    READ_REG(pReg->INT_ST0);
    READ_REG(pReg->INT_ST1);
    WRITE_REG(pReg->INT_MSK0, 0);
    WRITE_REG(pReg->INT_MSK1, 0);

    return HAL_OK;
}

/**
 * @brief  DSI Enable.
 * @param  pReg: DSI reg base.
 * @param  pModeInfo: display mode info.
 * @return HAL_Status.
 */
HAL_Status HAL_DSI_Enable(struct DSI_REG *pReg,
                          struct DISPLAY_MODE_INFO *pModeInfo)
{
    if (pModeInfo->flags & DSI_MODE_VIDEO)
        DSI_UPDATE_BIT(pReg->MODE_CFG, CMD_VIDEO_MODE_MASK, 0);
    else {
        DSI_UPDATE_BIT(pReg->LPCLK_CTRL, PHY_TXREQUESTCLKHS_MASK, 1);
        DSI_UPDATE_BIT(pReg->MODE_CFG, CMD_VIDEO_MODE_MASK, 1);
        WRITE_REG(pReg->EDPI_CMD_SIZE, pModeInfo->crtcHdisplay);
    }
    WRITE_REG(pReg->PWR_UP, 0x1);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
