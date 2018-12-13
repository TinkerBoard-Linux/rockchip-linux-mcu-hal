/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_base.c
 */

#include "hal_base.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/********************* Private MACRO Definition ******************************/

#define TICK_INT_PRIORITY 0x0FU

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

__IO uint32_t uwTick;

/********************* Private Function Definition ***************************/

/** @defgroup HAL_BASE HAL_BASE
 *  Base apis for HAL driver
 *  @{
 */

/**
 * @brief  Init SysTick
 * @param  TickPriority: Interrupt priority.
 * @return HAL_Status.
 * Set systick to Millisecond count, and it's priority.
 */
HAL_Status HAL_InitTick(uint32_t tickPriority)
{
    /*Configure the SysTick to have interrupt in 1ms time basis*/
    SysTick_Config(SystemCoreClock / 1000U);

    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, tickPriority);

    /* Return function status */
    return HAL_OK;
}

/**
 * @brief  Get systick count.
 * @param  None.
 * @return None.
 * Enable the specified interrupt in the NVIC Interrupt Controller.
 * Other settings of the interrupt such as priority are not affected.
 */
uint32_t HAL_GetTick(void)
{
    return uwTick;
}

/**
 * @brief  Init HAL Delay.
 * @param  Delay: mdelay count.
 * @return None.
 */
void HAL_Delay(__IO uint32_t delay)
{
    uint32_t tickStart = HAL_GetTick();
    uint32_t wait = delay;

    /* Add a period to guarantee minimum wait */
    if (wait < HAL_MAX_DELAY) {
        wait++;
    }

    while ((HAL_GetTick() - tickStart) < wait) {
    }
}

/**
 * @brief  Init HAL driver basic code.
 * @param  None.
 * @return HAL_SUCCESS.
 * Init NVIC and systick.
 */
HAL_Status HAL_Init(void)
{
    /* Set Interrupt Group Priority */
    //HAL_NVIC_Init();

    /* Use systick as time base source and configure 1ms tick (default clock after Reset is MSI) */
    //HAL_InitTick(TICK_INT_PRIORITY);

    return HAL_OK;
}

/** @} */

/** @} */
