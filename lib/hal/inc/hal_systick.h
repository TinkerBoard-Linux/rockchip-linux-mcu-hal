/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SYSTICK
 *  @{
 */

#ifndef _HAL_SYSTICK_H_
#define _HAL_SYSTICK_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SYSTICK_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

typedef enum {
    HAL_TICK_CLKSRC_CORE,
    HAL_TICK_CLKSRC_EXT
} eHAL_tickClkSource;

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_SYSTICK_Init(void);
HAL_Status HAL_SYSTICK_Config(uint32_t ticksNumb);
HAL_Status HAL_SYSTICK_CLKSourceConfig(eHAL_tickClkSource clkSource);
HAL_Check HAL_SYSTICK_IsExtRefClockEnabled(void);

#endif

/** @} */

/** @} */
