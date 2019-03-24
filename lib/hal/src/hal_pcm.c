/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup PCM
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PCM driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PCM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static void PCM_Complete(void *arg)
{
    struct AUDIO_PCM *pcm = (struct AUDIO_PCM *)arg;

    pcm->status.hwPtr += pcm->abuf.periodSize;

    /* TBD: mark uncacheable? */
    HAL_DCACHE_CleanByRange((uint32_t)&pcm->status.hwPtr, sizeof(uint32_t));
    HAL_DCACHE_InvalidateByRange((uint32_t)&pcm->status.applPtr, sizeof(uint32_t));

    HAL_DBG("%s: hwPtr: 0x%lx\n", __func__, pcm->status.hwPtr);
}

static int PCM_Ioctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_PCM *pcm = (struct AUDIO_PCM *)priv;
    int ret = HAL_OK;

    switch (cmd) {
    case AUDIO_IOCTL_HW_PARAMS:
    {
        struct AUDIO_PARAMS *params = (struct AUDIO_PARAMS *)arg;

        ret = HAL_PCM_Config(pcm, params->stream, params);
    }
    break;
    case AUDIO_IOCTL_PCM_START:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_PCM_Enable(pcm, stream);
    }
    break;
    case AUDIO_IOCTL_PCM_STOP:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_PCM_Disable(pcm, stream);
    }
    break;
    case AUDIO_IOCTL_PCM_PREPARE:
    {
        struct AUDIO_BUF *abuf = (struct AUDIO_BUF *)arg;
        uint8_t stream = abuf->stream;

        HAL_PCM_Prepare(pcm, stream, abuf);
    }
    break;
    case AUDIO_IOCTL_PCM_RELEASE:
    {
        HAL_PCM_Release(pcm);
    }
    break;
    case AUDIO_IOCTL_PCM_BUFFER_STATUS:
    {
        uint32_t *retArg = (uint32_t *)arg;

        *retArg = (uint32_t)&pcm->status;
    }
    break;
    default:

        return HAL_INVAL;
    }

    return ret;
}

static const struct AUDIO_OPS pcmOps = {
    .ioctl = PCM_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup PCM_Exported_Functions_Group1 Suspend and Resume Functions
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
 * @brief  pcm suspend.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Supsend(struct AUDIO_PCM *pcm)
{
    return HAL_OK;
}

/**
 * @brief  pcm resume.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Resume(struct AUDIO_PCM *pcm)
{
    return HAL_OK;
}

/** @} */

/** @defgroup PCM_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup PCM_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup PCM_Exported_Functions_Group4 Init and Deinit Functions
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
 * @brief  Init pcm.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Init(struct AUDIO_PCM *pcm)
{
    pcm->ops = &pcmOps;

    return HAL_AUDIO_RegisterPcm(pcm);
}

/**
 * @brief  Deinit pcm.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Deinit(struct AUDIO_PCM *pcm)
{
    pcm->ops = NULL;

    return HAL_AUDIO_UnregisterPcm(pcm);
}

/** @} */

/** @defgroup PCM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable pcm.
 * @param  pcm: the handle of pcm.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Enable(struct AUDIO_PCM *pcm, uint8_t stream)
{
    PL330_CHANNEL *chan = (PL330_CHANNEL *)pcm->privData;

    HAL_ASSERT(chan != NULL);

    return HAL_PL330_Start(chan);
}

/**
 * @brief  Disable pcm.
 * @param  pcm: the handle of pcm.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Disable(struct AUDIO_PCM *pcm, uint8_t stream)
{
    PL330_CHANNEL *chan = (PL330_CHANNEL *)pcm->privData;

    HAL_ASSERT(chan != NULL);

    return HAL_PL330_Stop(chan);
}

/**
 * @brief  Prepare pcm.
 * @param  pcm: the handle of pcm.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @param  abuf: buf info.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Prepare(struct AUDIO_PCM *pcm, uint8_t stream,
                           struct AUDIO_BUF *abuf)
{
    struct AUDIO_DAI_DMA_DATA *dmaData = pcm->dai->dmaData[stream];
    DMA_SLAVE_CONFIG config;
    PL330_CHANNEL *chan;
    PL330 *pl330;
    HAL_Status ret = HAL_OK;

    pcm->abuf = *abuf;
    pl330 = HAL_PL330_Get(dmaData->dmac);
    HAL_ASSERT(pl330 != NULL);
    chan = HAL_PL330_RequestChannel(pl330, dmaData->dmaReqCh);
    HAL_ASSERT(chan != NULL);
    pcm->privData = chan;

    if (stream == AUDIO_STREAM_PLAYBACK) {
        config.direction = DMA_MEM_TO_DEV;
        config.dstAddr = dmaData->addr;
        config.dstAddrWidth = dmaData->addrWidth;
        config.dstMaxBurst = dmaData->maxBurst;
    } else {
        config.direction = DMA_DEV_TO_MEM;
        config.srcAddr = dmaData->addr;
        config.srcAddrWidth = dmaData->addrWidth;
        config.srcMaxBurst = dmaData->maxBurst;
    }

    ret = HAL_PL330_Config(chan, &config);
    HAL_ASSERT(ret == HAL_OK);
    ret = HAL_PL330_PrepDmaCyclic(chan, (uint32_t)abuf->buf, abuf->bufSize,
                                  abuf->periodSize, config.direction,
                                  (PL330_Callback) & PCM_Complete, pcm);

    return ret;
}

/**
 * @brief  Release pcm.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Release(struct AUDIO_PCM *pcm)
{
    HAL_PL330_ReleaseChannel((PL330_CHANNEL *)pcm->privData);
    pcm->privData = NULL;

    return HAL_OK;
}

/**
 * @brief  Config pcm.
 * @param  pcm: the handle of pcm.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Config(struct AUDIO_PCM *pcm, uint8_t stream,
                          struct AUDIO_PARAMS *params)
{
    pcm->params = *params;

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
