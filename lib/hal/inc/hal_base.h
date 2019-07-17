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

/** @defgroup HAL_BASE_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define IS_TICKFREQ(f) (((f) == HAL_TICK_FREQ_1KHZ)  || ((f) == HAL_TICK_FREQ_100HZ) || ((f) == HAL_TICK_FREQ_10HZ))

/***************************** Structure Definition **************************/
typedef enum {
    HAL_TICK_FREQ_10HZ    = 100U,    /* 10 ticks per second, so it's 100ms/tick */
    HAL_TICK_FREQ_100HZ   = 10U,     /* 100 ticks per second, so it's 10ms/tick */
    HAL_TICK_FREQ_1KHZ    = 1U,      /* 1000 ticks per second, so it's 1ms/tick */
    HAL_TICK_FREQ_DEFAULT = HAL_TICK_FREQ_1KHZ
} eHAL_tickFreq;

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_Init(void);
HAL_Status HAL_InitTick(uint32_t tickPriority);
HAL_Status HAL_IncTick(void);
uint32_t HAL_GetTick(void);
HAL_Status HAL_DelayUs(uint32_t delay);
HAL_Status HAL_DelayMs(uint32_t delay);
HAL_Status HAL_SysTick_Handler(void);
HAL_Status HAL_SystickConfig(uint32_t ticksNumb);
HAL_Status HAL_SetTickFreq(eHAL_tickFreq freq);
eHAL_tickFreq HAL_GetTickFreq(void);

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

#ifdef SystemCoreClock
    uint32_t loopPerUs = SystemCoreClock / 1000000;
#else
    uint32_t loopPerUs = 20;
#endif
    for (; us > 0; us--)
        for (len = 0; len < loopPerUs; len++)
            ;

    return HAL_OK;
}
/** @} */

#endif

/** @} */

/** @} */
