/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
  * @{
  */

/** @addtogroup PWM
  * @{
  */

#ifndef __HAL_PWM_H
#define __HAL_PWM_H

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup PWM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define HAL_PWM_ONE_SHOT   (0 << PWM_PWM0_CTRL_PWM_MODE_SHIFT)
#define HAL_PWM_CONTINUOUS (1 << PWM_PWM0_CTRL_PWM_MODE_SHIFT)
#define HAL_PWM_CAPTURE    (2 << PWM_PWM0_CTRL_PWM_MODE_SHIFT)

#define HAL_PWM_NUM_CHANNELS (HAL_ARRAY_SIZE(((struct PWM_REG *)0)->CHANNELS))
/***************************** Structure Definition **************************/

/**
  * @brief  PWM HW information definition
  */
struct HAL_PWM_DEV {
    struct PWM_REG *pReg;
    uint32_t clkID;
    uint32_t clkGateID;
    uint32_t pclkGateID;
    IRQn_Type irqNum;
};

/**
  * @brief  PWM handle Structure definition
  */
struct HAL_PWM_CONFIG {
    uint8_t channel;
    uint32_t periodNS;
    uint32_t dutyNS;
    bool polarity;
};

/**
  * @brief  PWM capture data
  */
struct PWM_CAPTURE {
    uint32_t period;
    bool pol;
    bool active;
};

/**
  * @brief  PWM Handle Structure definition
  */

struct PWM_HANDLE {
    struct PWM_REG *pReg;
    uint32_t freq;
    uint8_t mode[HAL_PWM_NUM_CHANNELS];
    struct PWM_CAPTURE result[HAL_PWM_NUM_CHANNELS];
};

/**
  * @}
  */

/***************************** Function Declare ******************************/

HAL_Status HAL_PWM_IRQHandler(struct PWM_HANDLE *pPWM);
HAL_Status HAL_PWM_SetConfig(struct PWM_HANDLE *pPWM, uint8_t channel,
                             const struct HAL_PWM_CONFIG *config);
HAL_Status HAL_PWM_SetOneshot(struct PWM_HANDLE *pPWM, uint8_t channel, uint32_t count);
HAL_Status HAL_PWM_Enable(struct PWM_HANDLE *pPWM, uint8_t channel, uint8_t mode);
HAL_Status HAL_PWM_Disable(struct PWM_HANDLE *pPWM, uint8_t channel);
HAL_Status HAL_PWM_Init(struct PWM_HANDLE *pPWM, struct PWM_REG *pReg, uint32_t freq);
HAL_Status HAL_PWM_DeInit(struct PWM_HANDLE *pPWM);

#endif

/**
  * @}
  */

/**
  * @}
  */
