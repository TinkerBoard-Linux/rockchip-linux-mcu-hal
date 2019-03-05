/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup HAL_BASE
 *  @{
 */

#ifndef _HAL_BASE_H_
#define _HAL_BASE_H_

#include "hal_conf.h"
#include "hal_driver.h"
#include "hal_debug.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

HAL_Status HAL_Init(void);
HAL_Status HAL_InitTick(uint32_t tickPriority);
HAL_Status HAL_IncTick(void);
uint32_t HAL_GetTick(void);
HAL_Status HAL_DelayUs(__IO uint32_t delay);
HAL_Status HAL_DelayMs(__IO uint32_t delay);
__weak __irq HAL_Status HAL_SysTick_Handler(void);
HAL_Check HAL_SystickConfig(uint32_t ticksNumb);

#endif

/** @} */

/** @} */
