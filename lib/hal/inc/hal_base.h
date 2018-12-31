/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_base.h
 */

#ifndef _HAL_BASE_H_
#define _HAL_BASE_H_

#include "hal_conf.h"
#include "hal_debug.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup HAL_BASE HAL_BASE
 *  Base apis for HAL driver
 *  @{
 */

/***************************** Structure Definition **************************/

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_Init(void);
HAL_Status HAL_InitTick(uint32_t tickPriority);
HAL_Status HAL_IncTick(void);
uint32_t HAL_GetTick(void);
HAL_Status HAL_Delay(__IO uint32_t delay);
__weak __irq HAL_Status HAL_SysTick_Handler(void);

#endif

/** @} */
