/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup I2S
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The I2S driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_I2S_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define I2S_DMA_BURST_SIZE (8) /* size * width: 8*4 = 32 bytes */

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static HAL_Status I2S_ChangeClkFreq(struct AUDIO_DAI *dai,
                                    struct AUDIO_PARAMS *params)
{
    struct HAL_I2S_DEV *i2s = (struct HAL_I2S_DEV *)dai->privData;
    struct I2S_REG *reg = (struct I2S_REG *)i2s->base;
    uint32_t mclkRate, bclkRate, divBclk, divLrck;
    HAL_Status ret = HAL_OK;

    mclkRate = HAL_CRU_ClkGetFreq(i2s->mclk);
    bclkRate = i2s->bclkFs * params->sampleRate;
    HAL_ASSERT(bclkRate != 0);
    divBclk = mclkRate / bclkRate;
    divLrck = bclkRate / params->sampleRate;
    if (params->stream == AUDIO_STREAM_PLAYBACK) {
        MODIFY_REG(reg->CLKDIV,
                   I2S_TDM_CLKDIV_TXM_MASK,
                   I2S_TDM_CLKDIV_TXM(divBclk));
        MODIFY_REG(reg->CKR,
                   I2S_TDM_CKR_TSD_MASK,
                   I2S_TDM_CKR_TSD(divLrck));
    } else {
        MODIFY_REG(reg->CLKDIV,
                   I2S_TDM_CLKDIV_RXM_MASK,
                   I2S_TDM_CLKDIV_RXM(divBclk));
        MODIFY_REG(reg->CKR,
                   I2S_TDM_CKR_RSD_MASK,
                   I2S_TDM_CKR_RSD(divLrck));
    }

    return ret;
}

static int I2S_Ioctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_DAI *dai = (struct AUDIO_DAI *)priv;
    int ret = HAL_OK;

    switch (cmd) {
    case AUDIO_IOCTL_HW_PARAMS:
    {
        struct AUDIO_PARAMS *params = (struct AUDIO_PARAMS *)arg;

        ret = HAL_I2S_Config(dai, params->stream, params);
    }
    break;
    case AUDIO_IOCTL_START:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_I2S_Enable(dai, stream);
    }
    break;
    case AUDIO_IOCTL_DROP:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_I2S_Disable(dai, stream);
    }
    break;
    default:

        return HAL_INVAL;
    }

    return ret;
}

static const struct AUDIO_OPS i2sOps = {
    .ioctl = I2S_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup I2S_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/**
 * @brief  i2s suspend.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Supsend(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/**
 * @brief  i2s resume.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Resume(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/** @} */

/** @defgroup I2S_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup I2S_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup I2S_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/**
 * @brief  Init i2s controller.
 * @param  dai: the handle of dai.
 * @param  i2s: the handle of i2s.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Init(struct AUDIO_DAI *dai, struct HAL_I2S_DEV *i2s)
{
    /* TBD: clk, pin issue */

    HAL_CRU_ClkEnable(i2s->hclk);

    dai->id = i2s->base;
    dai->dmaData[AUDIO_STREAM_PLAYBACK] = &i2s->txDmaData;
    dai->dmaData[AUDIO_STREAM_CAPTURE] = &i2s->rxDmaData;
    dai->privData = i2s;
    dai->ops = &i2sOps;

    return HAL_AUDIO_RegisterDai(dai);
}

/**
 * @brief  Deinit i2s controller.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Deinit(struct AUDIO_DAI *dai)
{
    struct HAL_I2S_DEV *i2s = (struct HAL_I2S_DEV *)dai->privData;

    /* TBD: clk, pin issue */

    HAL_CRU_ClkDisable(i2s->hclk);

    dai->ops = NULL;

    return HAL_AUDIO_UnregisterDai(dai);
}

/** @} */

/** @defgroup I2S_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable i2s controller.
 * @param  dai: the handle of dai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Enable(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_I2S_DEV *i2s = (struct HAL_I2S_DEV *)dai->privData;
    struct I2S_REG *reg = (struct I2S_REG *)i2s->base;

    if (stream == AUDIO_STREAM_PLAYBACK) {
        MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_TDE_ENABLE, I2S_TDM_DMACR_TDE_ENABLE);
        MODIFY_REG(reg->XFER, I2S_TDM_XFER_TXS_START, I2S_TDM_XFER_TXS_START);
    } else {
        MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_RDE_ENABLE, I2S_TDM_DMACR_RDE_ENABLE);
        MODIFY_REG(reg->XFER, I2S_TDM_XFER_RXS_START, I2S_TDM_XFER_RXS_START);
    }

    return HAL_OK;
}

/**
 * @brief  Disable i2s controller.
 * @param  dai: the handle of dai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Disable(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_I2S_DEV *i2s = (struct HAL_I2S_DEV *)dai->privData;
    struct I2S_REG *reg = (struct I2S_REG *)i2s->base;

    if (stream == AUDIO_STREAM_PLAYBACK) {
        MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_TDE_ENABLE, I2S_TDM_DMACR_TDE_DISABLE);
        MODIFY_REG(reg->XFER, I2S_TDM_XFER_TXS_START, I2S_TDM_XFER_TXS_STOP);
        HAL_DelayUs(150);
        MODIFY_REG(reg->CLR, I2S_TDM_CLR_TXC, I2S_TDM_CLR_TXC);
    } else {
        MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_RDE_ENABLE, I2S_TDM_DMACR_RDE_DISABLE);
        MODIFY_REG(reg->XFER, I2S_TDM_XFER_RXS_START, I2S_TDM_XFER_RXS_STOP);
        HAL_DelayUs(150);
        MODIFY_REG(reg->CLR, I2S_TDM_CLR_RXC, I2S_TDM_CLR_RXC);
    }

    return HAL_OK;
}

/**
 * @brief  Config i2s controller.
 * @param  dai: the handle of dai.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_I2S_Config(struct AUDIO_DAI *dai, uint8_t stream,
                          struct AUDIO_PARAMS *params)
{
    struct HAL_I2S_DEV *i2s = (struct HAL_I2S_DEV *)dai->privData;
    struct I2S_REG *reg = (struct I2S_REG *)i2s->base;

    uint32_t val = 0, mask = 0;
    HAL_Status ret = HAL_OK;

    i2s->isMasterMode = params->daiMaster == AUDIO_DAI_MASTER;
    mask = I2S_TDM_CKR_MSS_MASK;
    val = (i2s->isMasterMode) ? I2S_TDM_CKR_MSS_MASTER : I2S_TDM_CKR_MSS_SLAVE;
    MODIFY_REG(reg->CKR, mask, val);

    mask = I2S_TDM_CKR_CKP_MASK;
    val = (params->clkInvert == AUDIO_CLK_NORMAL) ? I2S_TDM_CKR_CKP_NEG : I2S_TDM_CKR_CKP_POS;
    MODIFY_REG(reg->CKR, mask, val);

    if (i2s->isMasterMode)
        I2S_ChangeClkFreq(dai, params);

    val = I2S_TDM_TXCR_VDW(params->sampleBits);
    switch (params->channels) {
    case 8:
        val |= I2S_TDM_CHN_8;
        break;
    case 6:
        val |= I2S_TDM_CHN_6;
        break;
    case 4:
        val |= I2S_TDM_CHN_4;
        break;
    case 2:
        val |= I2S_TDM_CHN_2;
        break;
    default:

        return HAL_INVAL;
    }

    if (stream == AUDIO_STREAM_CAPTURE)
        MODIFY_REG(reg->RXCR,
                   I2S_TDM_RXCR_VDW_MASK | I2S_TDM_RXCR_CSR_MASK,
                   val);
    else
        MODIFY_REG(reg->TXCR,
                   I2S_TDM_TXCR_VDW_MASK | I2S_TDM_TXCR_CSR_MASK,
                   val);

    MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_TDL_MASK,
               I2S_TDM_DMACR_TDL(16));
    MODIFY_REG(reg->DMACR, I2S_TDM_DMACR_RDL_MASK,
               I2S_TDM_DMACR_RDL(16));

    return ret;
}

/** @} */

#endif

/** @} */

/** @} */
