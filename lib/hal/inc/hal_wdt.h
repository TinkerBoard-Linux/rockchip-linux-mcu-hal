/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup WDT
 *  @{
 */

#ifndef _HAL_WDT_H_
#define _HAL_WDT_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/***************************** Structure Definition **************************/
/***************************** Function Declare ******************************/

HAL_Status HAL_WDT_Init(uint32_t freq);
HAL_Status HAL_WDT_SetTimeout(uint32_t top);
HAL_Status HAL_WDT_KeepAlive(void);
HAL_Status HAL_WDT_Start(void);

#endif

/** @} */

/** @} */
