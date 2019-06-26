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

#ifndef _HAL_AUDIOPWM_H_
#define _HAL_AUDIOPWM_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup AUDIOPWM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/* AUDPWM XFER */
#define AUDPWM_LSTOP HAL_BIT(1)
#define AUDPWM_START HAL_BIT(0)
#define AUDPWM_STOP  0

/* AUDPWM SRC CFG */
#define AUDPWM_HALF_EN    HAL_BIT(6)
#define AUDPWM_ALIGN_L    HAL_BIT(5)
#define AUDPWM_ALIGN_R    0
#define AUDPWM_WIDTH_MASK 0x1f
#define AUDPWM_WIDTH(x)   (x - 1)

/* AUDPWM PWM CFG */
#define AUDPWM_SAMPLEBIT_MASK        (0x3 << 8)
#define AUDPWM_SAMPLEBIT(x)          ((x - 8) << 8)
#define AUDPWM_PWM1_DIS              HAL_BIT(7)
#define AUDPWM_PWM0_EN               0
#define AUDPWM_PWM0_DIS              HAL_BIT(6)
#define AUDPWM_PWM0_EN               0
#define AUDPWM_PWM_SWAP              HAL_BIT(5)
#define AUDPWM_LINEAR_INTERPOLATE_EN HAL_BIT(4)
#define AUDPWM_INTERPOLATE_RATE_MASK 0xf
#define AUDPWM_INTERPOLATE_RATE(x)   (x)

/* AUDPWM FIFO CFG */
#define AUDPWM_DMA_EN       HAL_BIT(7)
#define AUDPWM_DMA_DIS      0
#define AUDPWM_DMA_TDL_MASK 0x1f
#define AUDPWM_DMA_TDL(x)   (x - 1)

/***************************** Structure Definition **************************/

/** audioPwm dev struct */
struct HAL_AUDIOPWM_DEV {
    uint32_t base;
    uint32_t mclk;
    uint32_t hclk;

    struct AUDIO_DAI_DMA_DATA txDmaData;
};

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_AUDIOPWM_Supsend(struct AUDIO_DAI *dai);
HAL_Status HAL_AUDIOPWM_Resume(struct AUDIO_DAI *dai);
HAL_Status HAL_AUDIOPWM_Init(struct AUDIO_DAI *dai, struct HAL_AUDIOPWM_DEV *audioPwm);
HAL_Status HAL_AUDIOPWM_Deinit(struct AUDIO_DAI *dai);
HAL_Status HAL_AUDIOPWM_Enable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_AUDIOPWM_Disable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_AUDIOPWM_Config(struct AUDIO_DAI *dai, uint8_t stream,
                               struct AUDIO_PARAMS *params);

#endif

/** @} */

/** @} */
