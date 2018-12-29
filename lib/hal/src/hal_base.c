/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_base.c
 * @brief Common function for the whole HAL layer.
 *
 * @defgroup HAL_BASE HAL_BASE
 *  @{
 @verbatim

 #### How to use ####

 The HAL_BASE driver can be used as follows:

 (#) Resgister HAL_SysTick_Handler.
 (#) Initialize the HAL_BASE(HAL_Init):
    (##) Enable default intterrupt.
    (##) Define intterrupt priority group:
    (##) Initial systick
 (#) call M delay(HAL_Delay)

 @endverbatim
 ** @} */

#include "hal_base.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/********************* Private MACRO Definition ******************************/

#define TICK_INT_PRIORITY 0x0FU

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static __IO uint32_t uwTick;

/********************* Private Function Definition ***************************/

/** @defgroup HAL_BASE HAL_BASE
 *  Base apis for HAL driver
 *  @{
 */

/**
 * @brief  Count plus 1 when interrupt occurs.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_IncTick(void)
{
    uwTick++;

    return HAL_OK;
}

/**
 * @brief  Core internal SysTick handler
 * @return HAL_Status: HAL_OK.
 * Count plus 1.
 */
__weak __irq HAL_Status HAL_SysTick_Handler(void)
{
    HAL_IncTick();

    return HAL_OK;
}

/**
 * @brief  Get SysTick count.
 * @return uint32_t: sys tick count.
 */
uint32_t HAL_GetTick(void)
{
    return uwTick;
}

/**
 * @brief  SysTick delay.
 * @param  delay: mdelay count.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_Delay(__IO uint32_t delay)
{
    uint32_t tickStart = HAL_GetTick();
    uint32_t wait = delay;

    /* Add a period to guarantee minimum wait */
    if (wait < HAL_MAX_DELAY) {
        wait++;
    }

    while ((HAL_GetTick() - tickStart) < wait) {
    }

    return HAL_OK;
}

/**
 * @brief  Init SysTick
 * @param  tickPriority: Interrupt priority.
 * @return HAL_Status: HAL_OK.
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
 * @brief  Init HAL driver basic code.
 * @return HAL_OK.
 * Init NVIC, set priority group, and init SysTick.
 */
HAL_Status HAL_Init(void)
{
    /* Set Interrupt Group Priority */
    HAL_NVIC_Init();

    /* Set Interrupt Group Priority */
    HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_DEFAULT);

    HAL_InitTick(TICK_INT_PRIORITY);

    return HAL_OK;
}

/**
 * @brief  HAL deinit.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_DeInit(void)
{
    /* TO-DO */

    return HAL_OK;
}

/** @} */

/** @} */
