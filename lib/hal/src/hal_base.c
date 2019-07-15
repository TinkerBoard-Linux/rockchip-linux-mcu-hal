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

/** @defgroup HAL_BASE_How_To_Use How To Use
 *  @{

 The HAL_BASE driver can be used as follows:

 - Resgister HAL_SysTick_Handler().
 - Initialize the HAL_BASE (HAL_Init()):
    - Enable default interrupt.
    - Define interrupt priority group:
    - Initial systick

 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

#define TICK_INT_PRIORITY           0x0FU
#define HAL_TICK_PER_SECOND_DEFAULT 1000

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static __IO uint32_t uwTick;

/********************* Private Function Definition ***************************/
/** @defgroup HAL_BASE_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

/**
 * @brief  Init HAL driver basic code.
 * @return HAL_OK.
 * Init NVIC, set priority group, and init SysTick.
 */
HAL_Status HAL_Init(void)
{
#ifdef __CORTEX_A
    /* TBD */
#else
    /* Set Interrupt Group Priority */
    HAL_NVIC_Init();

    /* Set Interrupt Group Priority */
    HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_DEFAULT);

    HAL_InitTick(TICK_INT_PRIORITY);
#endif

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
__WEAK HAL_Status HAL_SysTick_Handler(void)
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

#ifdef __CORTEX_A
/**
 * @brief  SysTick mdelay.
 * @param  ms: mdelay count.
 * @return HAL_Status: HAL_OK.
 */
__WEAK HAL_Status HAL_DelayMs(__IO uint32_t ms)
{
    return HAL_DelayUs(1000 * ms);
}

/**
 * @brief  SysTick udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_DelayUs(uint32_t us)
{
    HAL_CPUDelayUs(us);
}
#else
/**
 * @brief  Config systick reload value.
 * @param  ticksNumb: systick reload value.
 * @return HAL_Status
 *
 */
HAL_Status HAL_SystickConfig(uint32_t ticksNumb)
{
    if (SysTick_Config(ticksNumb))
        return HAL_INVAL;
    else
        return HAL_OK;
}

/**
 * @brief  SysTick mdelay.
 * @param  ms: mdelay count.
 * @return HAL_Status: HAL_OK.
 * When the tickPerSec is 1000, the delicate delay is accurate.
 */
__WEAK HAL_Status HAL_DelayMs(__IO uint32_t ms)
{
    uint32_t tickstart = HAL_GetTick();
    uint32_t delta = HAL_MAX_DELAY - tickstart;
    uint32_t wait = ms / HAL_GetTickWeight();

    if (wait == 0)
        return (HAL_DelayUs(ms * 1000));

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
 * When the tickPerSec is within a certain range, the delicate delay is more
 * accurate. about (10 10000);
 */
HAL_Status HAL_DelayUs(uint32_t us)
{
    uint32_t delta = SysTick->VAL;
    uint32_t tickstart = HAL_GetTick();

    us = us * (SystemCoreClock / 1000000); /* Systick->Load 1ms */

    if (us > SysTick->LOAD)
        us = SysTick->LOAD;

    if (delta < us) {
        while (tickstart == HAL_GetTick())
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
#ifdef HAL_TICK_PER_SECOND
    HAL_SystickConfig(SystemCoreClock / HAL_TICK_PER_SECOND);
#else
    HAL_SystickConfig(SystemCoreClock / HAL_TICK_PER_SECOND_DEFAULT);
#endif
    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, tickPriority);

    /* Return function status */
    return HAL_OK;
}
#endif

/**
 * @brief  Get tick weight
 * @return uitn32_t ms_per_tick.
 */
uint32_t HAL_GetTickWeight(void)
{
#ifdef HAL_TICK_PER_SECOND

    return (uint32_t)(1000 / HAL_TICK_PER_SECOND);
#else

    return (uint32_t)(1000 / HAL_TICK_PER_SECOND_DEFAULT);
#endif
}

/** @} */

/** @} */

/** @} */
