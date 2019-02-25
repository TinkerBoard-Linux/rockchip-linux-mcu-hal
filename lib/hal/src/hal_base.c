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

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The HAL_BASE driver can be used as follows:

 (#) Resgister HAL_SysTick_Handler.
 (#) Initialize the HAL_BASE(HAL_Init):
    (##) Enable default intterrupt.
    (##) Define intterrupt priority group:
    (##) Initial systick

 @endverbatim
 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

#define TICK_INT_PRIORITY 0x0FU

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static __IO uint32_t uwTick;

/********************* Private Function Definition ***************************/
/** @defgroup HAL_BASE_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

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

/** @defgroup HAL_BASE_Exported_Functions_Group5 Other Functions
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
 * @brief  SysTick mdelay.
 * @param  ms: mdelay count.
 * @return HAL_Status: HAL_OK.
 */
__weak HAL_Status HAL_DelayMs(__IO uint32_t ms)
{
    uint32_t tickstart = HAL_GetTick();
    uint32_t delta = HAL_MAX_DELAY - tickstart;
    uint32_t wait = ms;

    /* Add a period to guarantee minimum wait */
    if (wait < HAL_MAX_DELAY)
        wait++;

    if (delta < wait) {
        while (HAL_GetTick() > tickstart)
            ;
        tickstart = 0;
        wait -= delta;
    }
    while ((HAL_GetTick() - tickstart) < wait)
        ;

    return HAL_OK;
}

/**
 * @brief  SysTick udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 * Only 0 to 1000us precision.
 */
HAL_Status HAL_DelayUs(__IO uint32_t us)
{
    uint32_t delta = SysTick->VAL;

    if (us > 1000)
        us = 1000;

    us = us * (SysTick->LOAD / 1000); /* Systick->Load 1ms */
    if (delta < us) {
        while (SysTick->VAL < us)
            ;
        us -= delta;
        delta = SysTick->LOAD;
    }
    while ((delta - SysTick->VAL) < us)
        ;

    return HAL_OK;
}

/**
 * @brief  Init SysTick
 * @param  tickPriority: Interrupt priority.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_InitTick(uint32_t tickPriority)
{
    SysTick_Config(SystemCoreClock / 1000);

    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, tickPriority);

    /* Return function status */
    return HAL_OK;
}

/** @} */

/** @} */

/** @} */
