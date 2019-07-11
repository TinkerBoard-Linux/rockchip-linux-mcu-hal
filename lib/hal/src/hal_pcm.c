/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PCM
 *  @{
 */

/** @defgroup PCM_How_To_Use How To Use
 *  @{

 The PCM driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_PCM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

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

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

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

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup PCM_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup PCM_Exported_Functions_Group4 Init and Deinit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

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

    return HAL_OK;
}

/**
 * @brief  Deinit pcm.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Deinit(struct AUDIO_PCM *pcm)
{
    pcm->ops = NULL;

    return HAL_OK;
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
    return HAL_OK;
}

/**
 * @brief  Disable pcm.
 * @param  pcm: the handle of pcm.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Disable(struct AUDIO_PCM *pcm, uint8_t stream)
{
    return HAL_OK;
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
    return HAL_OK;
}

/**
 * @brief  Release pcm.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_PCM_Release(struct AUDIO_PCM *pcm)
{
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
    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
