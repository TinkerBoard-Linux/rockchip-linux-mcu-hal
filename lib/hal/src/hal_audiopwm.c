/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup AUDIOPWM
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The AUDIOPWM driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_AUDIOPWM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define AUDIOPWM_DMA_BURST_SIZE (8) /* size * width: 8*4 = 32 bytes */

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static int AUDIOPWM_Ioctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_DAI *dai = (struct AUDIO_DAI *)priv;
    int ret = HAL_OK;

    switch (cmd) {
    case AUDIO_IOCTL_HW_PARAMS:
    {
        struct AUDIO_PARAMS *params = (struct AUDIO_PARAMS *)arg;

        ret = HAL_AUDIOPWM_Config(dai, params->stream, params);
    }
    break;
    case AUDIO_IOCTL_START:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_AUDIOPWM_Enable(dai, stream);
    }
    break;
    case AUDIO_IOCTL_DROP:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_AUDIOPWM_Disable(dai, stream);
    }
    break;
    default:

        return HAL_INVAL;
    }

    return ret;
}

static const struct AUDIO_OPS audioPwmOps = {
    .ioctl = AUDIOPWM_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup AUDIOPWM_Exported_Functions_Group1 Suspend and Resume Functions
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
 * @brief  audioPwm suspend.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Supsend(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/**
 * @brief  audioPwm resume.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Resume(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group4 Init and Deinit Functions
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
 * @brief  Init audioPwm controller.
 * @param  dai: the handle of dai.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Init(struct AUDIO_DAI *dai, struct HAL_AUDIOPWM_DEV *audioPwm)
{
    HAL_CRU_ClkEnable(audioPwm->hclk);

    dai->id = audioPwm->base;
    dai->dmaData[AUDIO_STREAM_PLAYBACK] = &audioPwm->txDmaData;
    dai->privData = audioPwm;
    dai->ops = &audioPwmOps;

    return HAL_AUDIO_RegisterDai(dai);
}

/**
 * @brief  Deinit audioPwm controller.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Deinit(struct AUDIO_DAI *dai)
{
    struct HAL_AUDIOPWM_DEV *audioPwm = (struct HAL_AUDIOPWM_DEV *)dai->privData;

    HAL_CRU_ClkDisable(audioPwm->hclk);

    dai->ops = NULL;

    return HAL_AUDIO_UnregisterDai(dai);
}

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable audioPwm controller.
 * @param  dai: the handle of dai.
 * @param  stream: should be AUDIO_STREAM_PLAYBACK.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Enable(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_AUDIOPWM_DEV *audioPwm = (struct HAL_AUDIOPWM_DEV *)dai->privData;
    struct AUDIOPWM_REG *reg = (struct AUDIOPWM_REG *)audioPwm->base;

    HAL_ASSERT(stream == AUDIO_STREAM_PLAYBACK);

    WRITE_REG(reg->FIFO_CFG,
              AUDPWM_DMA_EN << 16 | AUDPWM_DMA_EN);
    WRITE_REG(reg->XFER,
              AUDPWM_START << 16 | AUDPWM_START);

    return HAL_OK;
}

/**
 * @brief  Disable audioPwm controller.
 * @param  dai: the handle of dai.
 * @param  stream: should be AUDIO_STREAM_PLAYBACK.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Disable(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_AUDIOPWM_DEV *audioPwm = (struct HAL_AUDIOPWM_DEV *)dai->privData;
    struct AUDIOPWM_REG *reg = (struct AUDIOPWM_REG *)audioPwm->base;

    HAL_ASSERT(stream == AUDIO_STREAM_PLAYBACK);

    WRITE_REG(reg->FIFO_CFG,
              AUDPWM_DMA_EN << 16 | AUDPWM_DMA_DIS);
    WRITE_REG(reg->XFER,
              AUDPWM_START << 16 | AUDPWM_STOP);

    return HAL_OK;
}

/**
 * @brief  Config audioPwm controller.
 * @param  dai: the handle of dai.
 * @param  stream: should be AUDIO_STREAM_PLAYBACK.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Config(struct AUDIO_DAI *dai, uint8_t stream,
                               struct AUDIO_PARAMS *params)
{
    struct HAL_AUDIOPWM_DEV *audioPwm = (struct HAL_AUDIOPWM_DEV *)dai->privData;
    struct AUDIOPWM_REG *reg = (struct AUDIOPWM_REG *)audioPwm->base;
    HAL_Status ret = HAL_OK;

    /* audioPwm only support playback */
    HAL_ASSERT(stream == AUDIO_STREAM_PLAYBACK);

    WRITE_REG(reg->SRC_CFG,
              AUDPWM_WIDTH_MASK << 16 | AUDPWM_WIDTH(params->sampleBits));
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_SAMPLEBIT_MASK << 16 | AUDPWM_SAMPLEBIT(8));
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_LINEAR_INTERPOLATE_EN << 16 | AUDPWM_LINEAR_INTERPOLATE_EN);
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_INTERPOLATE_RATE_MASK << 16 | AUDPWM_INTERPOLATE_RATE(1));
    WRITE_REG(reg->FIFO_CFG,
              AUDPWM_DMA_TDL_MASK << 16 | AUDPWM_DMA_TDL(16));

    return ret;
}

/** @} */

#endif

/** @} */

/** @} */
