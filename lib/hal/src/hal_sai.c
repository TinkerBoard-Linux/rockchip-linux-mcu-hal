/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_SAI_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SAI
 *  @{
 */

/** @defgroup SAI_How_To_Use How To Use
 *  @{

 The SAI driver can be used as follows:

 @} */

/** @defgroup SAI_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
#define SAI_VERSION1 0x20200520
#define SAI_VERSION2 0x23083576
#define SAI_VERSION3 0x23112118

#define CLK_SHIFT_RATE_HZ_MAX 5

#define SAI_DMA_BURST_SIZE (8) /* size * width: 8*4 = 32 bytes */

/* XCR Transmit / Receive Control Register */
#define SAI_XCR_CTL_MASK       HAL_BIT(23)
#define SAI_XCR_CTL_CHAINED    HAL_BIT(23)
#define SAI_XCR_CTL_STANDALONE 0
#define SAI_XCR_DSE_MASK       HAL_BIT(22)
#define SAI_XCR_DSE_FALLING    HAL_BIT(22)
#define SAI_XCR_DSE_RISING     0
#define SAI_XCR_LANE_MASK      HAL_GENMASK(21, 20)
#define SAI_XCR_LANE(x)        ((x - 1) << 20)
#define SAI_XCR_LANE_V(v)      ((((v) & SAI_XCR_LANE_MASK) >> 20) + 1)
#define SAI_XCR_SJM_MASK       HAL_BIT(19)
#define SAI_XCR_SJM_L          HAL_BIT(19)
#define SAI_XCR_SJM_R          0
#define SAI_XCR_FBM_MASK       HAL_BIT(18)
#define SAI_XCR_FBM_LSB        HAL_BIT(18)
#define SAI_XCR_FBM_MSB        0
#define SAI_XCR_SNB_MASK       HAL_GENMASK(17, 11)
#define SAI_XCR_SNB(x)         ((x - 1) << 11)
#define SAI_XCR_VDJ_MASK       HAL_BIT(10)
#define SAI_XCR_VDJ_L          HAL_BIT(10)
#define SAI_XCR_VDJ_R          0
#define SAI_XCR_SBW_MASK       HAL_GENMASK(9, 5)
#define SAI_XCR_SBW(x)         ((x - 1) << 5)
#define SAI_XCR_SBW_V(v)       ((((v) & SAI_XCR_SBW_MASK) >> 5) + 1)
#define SAI_XCR_VDW_MASK       HAL_GENMASK(4, 0)
#define SAI_XCR_VDW(x)         ((x - 1) << 0)

/* FSCR Frame Sync Control Register */
#define SAI_FSCR_EDGE_DUAL   HAL_BIT(SAI_FSCR_EDGE_SHIFT)
#define SAI_FSCR_EDGE_RISING 0
#define SAI_FSCR_FPW(x)      ((x - 1) << SAI_FSCR_FPW_SHIFT)
#define SAI_FSCR_FW(x)       ((x - 1) << SAI_FSCR_FW_SHIFT)

/* MONO_CR Mono Control Register */
#define SAI_MONOCR_RMONO_SLOT_SEL(x) ((x - 1) << SAI_MONOCR_RMONO_SLOT_SHIFT)
#define SAI_MONOCR_RMONO_EN          HAL_BIT(SAI_MONOCR_RMONO_SHIFT)
#define SAI_MONOCR_RMONO_DIS         0
#define SAI_MONOCR_TMONO_EN          HAL_BIT(SAI_MONOCR_TMONO_SHIFT)
#define SAI_MONOCR_TMONO_DIS         0

/* XFER Transfer Start Register */
#if (SAI_VERSION >= SAI_VERSION3)
#define SAI_XFER_TX_AUTO_EN  HAL_BIT(SAI_XFER_TX_AUTO_SHIFT)
#define SAI_XFER_TX_AUTO_DIS 0
#else
#define SAI_XFER_RX_IDLE HAL_BIT(SAI_XFER_RX_IDLE_SHIFT)
#define SAI_XFER_TX_IDLE HAL_BIT(SAI_XFER_TX_IDLE_SHIFT)
#define SAI_XFER_FS_IDLE HAL_BIT(SAI_XFER_FS_IDLE_SHIFT)
#endif
#define SAI_XFER_RDC_EN  HAL_BIT(SAI_XFER_RDC_SHIFT)
#define SAI_XFER_RDC_DIS 0
#define SAI_XFER_TDC_EN  HAL_BIT(SAI_XFER_TDC_SHIFT)
#define SAI_XFER_TDC_DIS 0
#define SAI_XFER_RXS_EN  HAL_BIT(SAI_XFER_RXS_SHIFT)
#define SAI_XFER_RXS_DIS 0
#define SAI_XFER_TXS_EN  HAL_BIT(SAI_XFER_TXS_SHIFT)
#define SAI_XFER_TXS_DIS 0
#define SAI_XFER_FSS_EN  HAL_BIT(SAI_XFER_FSS_SHIFT)
#define SAI_XFER_FSS_DIS 0
#define SAI_XFER_CLK_EN  HAL_BIT(SAI_XFER_CLK_EN_SHIFT)
#define SAI_XFER_CLK_DIS 0

/* CLR Clear Logic Register */
#define SAI_CLR_FCR HAL_BIT(SAI_CLR_FCR_SHIFT)
#define SAI_CLR_FSC HAL_BIT(SAI_CLR_FSC_SHIFT)
#define SAI_CLR_RXC HAL_BIT(SAI_CLR_RXC_SHIFT)
#define SAI_CLR_TXC HAL_BIT(SAI_CLR_TXC_SHIFT)

/* CKR Clock Generation Register */
#define SAI_CKR_MDIV(x)      ((x - 1) << SAI_CKR_MDIV_SHIFT)
#define SAI_CKR_MSS_SLAVE    HAL_BIT(SAI_CKR_MSS_SHIFT)
#define SAI_CKR_MSS_MASTER   0
#define SAI_CKR_CKP_INVERTED HAL_BIT(SAI_CKR_CKP_SHIFT)
#define SAI_CKR_CKP_NORMAL   0
#define SAI_CKR_FSP_INVERTED HAL_BIT(SAI_CKR_FSP_SHIFT)
#define SAI_CKR_FSP_NORMAL   0

/* DMACR DMA Control Register */
#define SAI_DMACR_RDE(x)   ((x) << SAI_DMACR_RDE_SHIFT)
#define SAI_DMACR_RDL(x)   ((x - 1) << SAI_DMACR_RDL_SHIFT)
#define SAI_DMACR_RDL_V(v) ((((v) & SAI_DMACR_RDL_MASK) >> SAI_DMACR_RDL_SHIFT) + 1)
#define SAI_DMACR_TDE(x)   ((x) << SAI_DMACR_TDE_SHIFT)
#define SAI_DMACR_TDL(x)   ((x) << SAI_DMACR_TDL_SHIFT)
#define SAI_DMACR_TDL_V(v) (((v) & SAI_DMACR_TDL_MASK) >> SAI_DMACR_TDL_SHIFT)

/* INTCR Interrupt Ctrl Register */
#define SAI_INTCR_FSLOSTC   HAL_BIT(SAI_INTCR_FSLOSTC_SHIFT)
#define SAI_INTCR_FSLOST(x) ((x) << SAI_INTCR_FSLOST_SHIFT)
#define SAI_INTCR_FSERRC    HAL_BIT(SAI_INTCR_FSERRC_SHIFT)
#define SAI_INTCR_FSERR(x)  ((x) << SAI_INTCR_FSERR_SHIFT)
#define SAI_INTCR_RXOIC     HAL_BIT(SAI_INTCR_RXOIC_SHIFT)
#define SAI_INTCR_RXOIE(x)  ((x) << SAI_INTCR_RXOIE_SHIFT)
#define SAI_INTCR_TXUIC     HAL_BIT(SAI_INTCR_TXUIC_SHIFT)
#define SAI_INTCR_TXUIE(x)  ((x) << SAI_INTCR_TXUIE_SHIFT)

/* INTSR Interrupt Status Register */
#define SAI_INTSR_FSLOSTI_ACT HAL_BIT(SAI_INTSR_FSLOSTI_SHIFT)
#define SAI_INTSR_FSLOSTI_INA 0
#define SAI_INTSR_FSERRI_ACT  HAL_BIT(SAI_INTSR_FSERRI_SHIFT)
#define SAI_INTSR_FSERRI_INA  0
#define SAI_INTSR_RXOI_ACT    HAL_BIT(SAI_INTSR_RXOI_SHIFT)
#define SAI_INTSR_RXOI_INA    0
#define SAI_INTSR_TXUI_ACT    HAL_BIT(SAI_INTSR_TXUI_SHIFT)
#define SAI_INTSR_TXUI_INA    0

/* XSHIFT: Transfer / Receive Frame Sync Shift Register */
#define SAI_XSHIFT_SHIFT_RIGHT_MASK HAL_GENMASK(23, 0)
#define SAI_XSHIFT_SHIFT_RIGHT(x)   ((x) << 0)
#define SAI_XSHIFT_SHIFT_LEFT_MASK  HAL_GENMASK(25, 24)
#define SAI_XSHIFT_SHIFT_LEFT(x)    ((x) << 24)

/* XFIFOLR: Transfer / Receive FIFO Level Register */
#define SAI_FIFOLR_XFL3_SHIFT 18
#define SAI_FIFOLR_XFL3_MASK  HAL_GENMASK(23, 18)
#define SAI_FIFOLR_XFL2_SHIFT 12
#define SAI_FIFOLR_XFL2_MASK  HAL_GENMASK(17, 12)
#define SAI_FIFOLR_XFL1_SHIFT 6
#define SAI_FIFOLR_XFL1_MASK  HAL_GENMASK(11, 6)
#define SAI_FIFOLR_XFL0_SHIFT 0
#define SAI_FIFOLR_XFL0_MASK  HAL_GENMASK(5, 0)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static HAL_Status SAI_createFmt(struct HAL_SAI_DEV *sai, eAUDIO_fmtType fmt)
{
    uint32_t xcrMask = 0, xcrVal = 0, xsftMask = 0, xsftVal = 0;
    uint32_t fscrMask = 0, fscrVal = 0;
    HAL_Status ret = HAL_OK;

    switch (fmt) {
    case AUDIO_FMT_TDM_RIGHT_J:
        sai->isTdm = true;
    /* fallthrough */
    case AUDIO_FMT_RIGHT_J:
        xcrMask = SAI_XCR_VDJ_MASK | SAI_XCR_DSE_MASK;
        xcrVal = SAI_XCR_VDJ_R | SAI_XCR_DSE_RISING;
        xsftMask = SAI_XSHIFT_SHIFT_RIGHT_MASK;
        xsftVal = SAI_XSHIFT_SHIFT_RIGHT(0);
        fscrMask = SAI_FSCR_EDGE_MASK;
        fscrVal = SAI_FSCR_EDGE_DUAL;
        sai->fpw = FPW_HALF_FRAME_WIDTH;
        break;
    case AUDIO_FMT_TDM_LEFT_J:
        sai->isTdm = true;
    /* fallthrough */
    case AUDIO_FMT_LEFT_J:
        xcrMask = SAI_XCR_VDJ_MASK | SAI_XCR_DSE_MASK;
        xcrVal = SAI_XCR_VDJ_L | SAI_XCR_DSE_RISING;
        xsftMask = SAI_XSHIFT_SHIFT_RIGHT_MASK;
        xsftVal = SAI_XSHIFT_SHIFT_RIGHT(0);
        fscrMask = SAI_FSCR_EDGE_MASK;
        fscrVal = SAI_FSCR_EDGE_DUAL;
        sai->fpw = FPW_HALF_FRAME_WIDTH;
        break;
    case AUDIO_FMT_TDM_I2S:
        sai->isTdm = true;
    /* fallthrough */
    case AUDIO_FMT_I2S:
        xcrMask = SAI_XCR_VDJ_MASK | SAI_XCR_DSE_MASK;
        xcrVal = SAI_XCR_VDJ_L | SAI_XCR_DSE_FALLING;
        xsftMask = SAI_XSHIFT_SHIFT_RIGHT_MASK;
        xsftVal = SAI_XSHIFT_SHIFT_RIGHT(2);
        fscrMask = SAI_FSCR_EDGE_MASK;
        fscrVal = SAI_FSCR_EDGE_DUAL;
        sai->fpw = FPW_HALF_FRAME_WIDTH;
        break;
    case AUDIO_FMT_TDM_DSP_A:
        sai->isTdm = true;
    /* fallthrough */
    case AUDIO_FMT_DSP_A:
        xcrMask = SAI_XCR_VDJ_MASK | SAI_XCR_DSE_MASK;
        xcrVal = SAI_XCR_VDJ_L | SAI_XCR_DSE_RISING;
        xsftMask = SAI_XSHIFT_SHIFT_RIGHT_MASK;
        xsftVal = SAI_XSHIFT_SHIFT_RIGHT(2);
        fscrMask = SAI_FSCR_EDGE_MASK;
        fscrVal = SAI_FSCR_EDGE_RISING;
        sai->fpw = FPW_ONE_BCLK_WIDTH;
        break;
    case AUDIO_FMT_TDM_DSP_B:
        sai->isTdm = true;
    /* fallthrough */
    case AUDIO_FMT_DSP_B:
        xcrMask = SAI_XCR_VDJ_MASK | SAI_XCR_DSE_MASK;
        xcrVal = SAI_XCR_VDJ_L | SAI_XCR_DSE_RISING;
        xsftMask = SAI_XSHIFT_SHIFT_RIGHT_MASK;
        xsftVal = SAI_XSHIFT_SHIFT_RIGHT(0);
        fscrMask = SAI_FSCR_EDGE_MASK;
        fscrVal = SAI_FSCR_EDGE_RISING;
        sai->fpw = FPW_ONE_BCLK_WIDTH;
        break;
    default:
        HAL_DBG_ERR("%s: Unsupported fmt %u\n", __func__, fmt);
        ret = HAL_INVAL;
        break;
    }

    MODIFY_REG(sai->pReg->TXCR, xcrMask, xcrVal);
    MODIFY_REG(sai->pReg->RXCR, xcrMask, xcrVal);
    MODIFY_REG(sai->pReg->TX_TIMING_SHIFT, xsftMask, xsftVal);
    MODIFY_REG(sai->pReg->RX_TIMING_SHIFT, xsftMask, xsftVal);
    MODIFY_REG(sai->pReg->FSCR, fscrMask, fscrVal);

    return ret;
}

static uint8_t SAI_lanesAuto(struct HAL_SAI_DEV *sai, uint16_t channels)
{
    uint8_t lanes = 1;

    if (!sai->isTdm) {
        lanes = HAL_DIV_ROUND_UP(channels, 2);
    }

    return lanes;
}

/** @} */
/********************* Public Function Definition ****************************/
/** @defgroup SAI_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 *  @{
 */

/** @} */

/** @defgroup SAI_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup SAI_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup SAI_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Init sai controller.
 * @param  sai: the handle of sai.
 * @param  config: init config for sai init.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DevInit(struct HAL_SAI_DEV *sai, struct AUDIO_INIT_CONFIG *config)
{
    uint32_t mask = 0, val = 0;
    HAL_Status ret = HAL_OK;

    HAL_ASSERT(sai != NULL);
    HAL_ASSERT(config != NULL);

    sai->fwRatio = sai->fwRatio ? sai->fwRatio : 1;

    mask = SAI_CKR_MSS_MASK;
    val = config->master ? SAI_CKR_MSS_MASTER : SAI_CKR_MSS_SLAVE;
    MODIFY_REG(sai->pReg->CKR, mask, val);

    mask = SAI_CKR_CKP_MASK;
    val = config->clkInvert ? SAI_CKR_CKP_NORMAL : SAI_CKR_CKP_INVERTED;
    MODIFY_REG(sai->pReg->CKR, mask, val);

    MODIFY_REG(sai->pReg->DMACR, SAI_DMACR_TDL_MASK, SAI_DMACR_TDL(SAI_DMA_BURST_SIZE));
    MODIFY_REG(sai->pReg->DMACR, SAI_DMACR_RDL_MASK, SAI_DMACR_RDL(SAI_DMA_BURST_SIZE));

    ret = SAI_createFmt(sai, config->format);

    return ret;
}

/**
 * @brief  DeInit sai controller.
 * @param  sai: the handle of sai.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DevDeInit(struct HAL_SAI_DEV *sai)
{
    HAL_ASSERT(sai != NULL);

    MODIFY_REG(sai->pReg->XFER, SAI_XFER_CLK_EN_MASK | SAI_XFER_FSS_MASK,
               SAI_XFER_CLK_DIS | SAI_XFER_FSS_DIS);

    return HAL_OK;
}

/** @} */

/** @defgroup SAI_Exported_Functions_Group5 Other Functions
 *  @{
 */

/** @defgroup SAI_Low_Level_Functions Low Level Functions
 *  @{
 */

/**
 * @brief  Enable sai tx.
 * @param  pReg: the handle of SAI_REG.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_EnableTX(struct SAI_REG *pReg)
{
    HAL_ASSERT(IS_SAI_INSTANCE(pReg));

    MODIFY_REG(pReg->DMACR, SAI_DMACR_TDE_MASK, SAI_DMACR_TDE(1));
    MODIFY_REG(pReg->XFER, SAI_XFER_TXS_MASK, SAI_XFER_TXS_EN);

    return HAL_OK;
}

/**
 * @brief  Enable sai rx.
 * @param  pReg: the handle of SAI_REG.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_EnableRX(struct SAI_REG *pReg)
{
    HAL_ASSERT(IS_SAI_INSTANCE(pReg));

    MODIFY_REG(pReg->DMACR, SAI_DMACR_RDE_MASK, SAI_DMACR_RDE(1));
    MODIFY_REG(pReg->XFER, SAI_XFER_RXS_MASK, SAI_XFER_RXS_EN);

    return HAL_OK;
}

/**
 * @brief  Disable sai tx.
 * @param  pReg: the handle of SAI_REG.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DisableTX(struct SAI_REG *pReg)
{
    HAL_ASSERT(IS_SAI_INSTANCE(pReg));

    MODIFY_REG(pReg->DMACR, SAI_DMACR_TDE_MASK, SAI_DMACR_TDE(0));
    MODIFY_REG(pReg->XFER, SAI_XFER_TXS_MASK, SAI_XFER_TXS_DIS);
    HAL_DelayUs(150);
    MODIFY_REG(pReg->CLR, SAI_CLR_TXC_MASK, SAI_CLR_TXC);

    return HAL_OK;
}

/**
 * @brief  Disable sai rx.
 * @param  pReg: the handle of SAI_REG.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DisableRX(struct SAI_REG *pReg)
{
    HAL_ASSERT(IS_SAI_INSTANCE(pReg));

    MODIFY_REG(pReg->DMACR, SAI_DMACR_RDE_MASK, SAI_DMACR_RDE(0));
    MODIFY_REG(pReg->XFER, SAI_XFER_RXS_MASK, SAI_XFER_RXS_DIS);
    HAL_DelayUs(150);
    MODIFY_REG(pReg->CLR, SAI_CLR_RXC_MASK, SAI_CLR_RXC);

    return HAL_OK;
}

/** @} */

/** @defgroup SAI_Dev_Level_Functions Dev Level Functions
 *  @{
 */

/**
 * @brief  Enable sai stream.
 * @param  sai: the handle of sai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DevEnable(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream)
{
    HAL_ASSERT(sai != NULL);

    if (stream == AUDIO_STREAM_PLAYBACK) {
        HAL_SAI_EnableTX(sai->pReg);
    } else {
        HAL_SAI_EnableRX(sai->pReg);
    }

    return HAL_OK;
}

/**
 * @brief  Disable sai stream.
 * @param  sai: the handle of sai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DevDisable(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream)
{
    HAL_ASSERT(sai != NULL);

    if (stream == AUDIO_STREAM_PLAYBACK) {
        HAL_SAI_DisableTX(sai->pReg);
    } else {
        HAL_SAI_DisableRX(sai->pReg);
    }

    return HAL_OK;
}

/**
 * @brief  Config sai controller.
 * @param  sai: the handle of sai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_SAI_DevConfig(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream,
                             struct AUDIO_PARAMS *params)
{
    uint32_t mclkRate, mclkReqRate, bclkRate, divBclk;
    uint32_t val, slotWidth, chPerLane, fscr;
    uint8_t lanes;
    HAL_Status ret = HAL_OK;

    HAL_ASSERT(sai != NULL);
    HAL_ASSERT(params != NULL);

    val = SAI_XCR_VDW(params->sampleBits);
    lanes = SAI_lanesAuto(sai, params->channels);

    if (stream == AUDIO_STREAM_PLAYBACK) {
        slotWidth = SAI_XCR_SBW_V(READ_REG(sai->pReg->TXCR));
        lanes = sai->txLanes ? sai->txLanes : lanes;
        chPerLane = params->channels / lanes;

        val |= SAI_XCR_LANE(lanes);
        val |= SAI_XCR_SNB(chPerLane);

        MODIFY_REG(sai->pReg->TXCR, SAI_XCR_VDW_MASK | SAI_XCR_LANE_MASK |
                   SAI_XCR_SNB_MASK, val);
    } else {
        slotWidth = SAI_XCR_SBW_V(READ_REG(sai->pReg->RXCR));
        lanes = sai->rxLanes ? sai->rxLanes : lanes;
        chPerLane = params->channels / lanes;

        val |= SAI_XCR_LANE(lanes);
        val |= SAI_XCR_SNB(chPerLane);

        MODIFY_REG(sai->pReg->RXCR, SAI_XCR_VDW_MASK | SAI_XCR_LANE_MASK |
                   SAI_XCR_SNB_MASK, val);
    }

    fscr = SAI_FSCR_FW(sai->fwRatio * slotWidth * chPerLane);

    switch (sai->fpw) {
    case FPW_ONE_BCLK_WIDTH:
        fscr |= SAI_FSCR_FPW(1);
        break;
    case FPW_ONE_SLOT_WIDTH:
        fscr |= SAI_FSCR_FPW(slotWidth);
        break;
    case FPW_HALF_FRAME_WIDTH:
        fscr |= SAI_FSCR_FPW(sai->fwRatio * slotWidth * chPerLane / 2);
        break;
    default:
        HAL_DBG_ERR("%s: Invalid Frame Pulse Width %d\n", __func__, sai->fpw);

        return HAL_INVAL;
    }

    MODIFY_REG(sai->pReg->FSCR, SAI_FSCR_FW_MASK | SAI_FSCR_FPW_MASK, fscr);

    bclkRate = sai->fwRatio * slotWidth * chPerLane * params->sampleRate;
#if defined(HAL_CRU_MODULE_ENABLED)
    if (sai->isClkAuto) {
        HAL_CRU_ClkSetFreq(sai->mclk, bclkRate);
    }

    mclkRate = HAL_CRU_ClkGetFreq(sai->mclk);
#else
    mclkRate = bclkRate;
#endif
    divBclk = HAL_DivRoundClosest(mclkRate, bclkRate);
    mclkReqRate = bclkRate * divBclk;

    if (mclkRate < mclkReqRate - CLK_SHIFT_RATE_HZ_MAX ||
        mclkRate > mclkReqRate + CLK_SHIFT_RATE_HZ_MAX) {
        HAL_DBG_ERR("%s: Mismatch mclk: %lu, expected %lu (+/- %dHz)\n",
                    __func__, mclkRate, mclkReqRate, CLK_SHIFT_RATE_HZ_MAX);

        return HAL_INVAL;
    }

    MODIFY_REG(sai->pReg->CKR, SAI_CKR_MDIV_MASK, SAI_CKR_MDIV(divBclk));
    /*
     * Should wait for one BCLK ready after DIV and then ungate
     * output clk to achieve the clean clk.
     *
     * The best way is to use delay per samplerate, but, the max time
     * is quite a tiny value, so, let's make it simple to use the max
     * time.
     *
     * The max BCLK cycle time is: 15.6us @ 8K-8Bit (64K BCLK)
     */
    HAL_DelayUs(20);
    MODIFY_REG(sai->pReg->XFER, SAI_XFER_CLK_EN_MASK | SAI_XFER_FSS_MASK,
               SAI_XFER_CLK_EN | SAI_XFER_FSS_EN);

    return ret;
}

/** @} */

/** @} */

/** @} */

/** @} */

#endif /* HAL_SAI_MODULE_ENABLED */
