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

#ifndef _HAL_PCM_H_
#define _HAL_PCM_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup PCM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_PCM_Supsend(struct AUDIO_PCM *pcm);
HAL_Status HAL_PCM_Resume(struct AUDIO_PCM *pcm);
HAL_Status HAL_PCM_Init(struct AUDIO_PCM *pcm);
HAL_Status HAL_PCM_Deinit(struct AUDIO_PCM *pcm);
HAL_Status HAL_PCM_Enable(struct AUDIO_PCM *pcm, uint8_t stream);
HAL_Status HAL_PCM_Disable(struct AUDIO_PCM *pcm, uint8_t stream);
HAL_Status HAL_PCM_Prepare(struct AUDIO_PCM *pcm, uint8_t stream,
                           struct AUDIO_BUF *abuf);
HAL_Status HAL_PCM_Release(struct AUDIO_PCM *pcm);
HAL_Status HAL_PCM_Config(struct AUDIO_PCM *pcm, uint8_t stream,
                          struct AUDIO_PARAMS *params);

#endif

/** @} */

/** @} */
