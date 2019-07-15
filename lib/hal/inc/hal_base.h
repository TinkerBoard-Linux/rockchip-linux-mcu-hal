/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
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
HAL_Status HAL_SysTick_Handler(void);
HAL_Status HAL_SystickConfig(uint32_t ticksNumb);
uint32_t HAL_GetTickWeight(void);

/** @defgroup HAL_BASE_Exported_Functions_Group4 Init and DeInit Functions
 *  @{
 */

/**
 * @brief  CPU loop udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 */
__STATIC_INLINE uint32_t HAL_CPUDelayUs(uint32_t us)
{
    volatile uint32_t len;
    uint32_t loopPerUs = SystemCoreClock / 1000000;

    for (; us > 0; us--)
        for (len = 0; len < loopPerUs; len++)
            ;

    return HAL_OK;
}
/** @} */

#endif

/** @} */

/** @} */
