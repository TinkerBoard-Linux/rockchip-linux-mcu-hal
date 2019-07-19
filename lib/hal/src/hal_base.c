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

  - Resgister HAL_SYSTICK_IRQHandler().
  - Initialize the HAL_BASE by calling HAL_Init():
  - Get system time by calling HAL_GetTick();
  - Delay for a certain length of time, HAL_DelayMs(), HAL_DelayUs, and HAL_CPUDelayUs();

 Suggest:

  - Blocking for a certain period of time to continuously query HW status, use HAL_GetTick()
      to do timeout, this will be more accurate.

 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

#define TICK_INT_PRIORITY     0x0FU
#define HAL_TICK_FREQ_DEFAULT HAL_TICK_FREQ_1KHZ

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static __IO uint32_t uwTick;
static eHAL_tickFreq uwTickFreq = HAL_TICK_FREQ_DEFAULT;

/********************* Private Function Definition ***************************/
/** @defgroup HAL_BASE_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

/**
 * @brief  Init HAL driver basic code.
 * @return HAL_OK.
 */
HAL_Status HAL_Init(void)
{
#ifdef __CORTEX_M
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
 * @brief  Count plus tickFreq when interrupt occurs.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_IncTick(void)
{
    uwTick += uwTickFreq;

    return HAL_OK;
}

/**
 * @brief  Core internal SysTick IRQ handler
 * @return None
 * Count plus 1.
 */
__WEAK void HAL_SYSTICK_IRQHandler(void)
{
    HAL_IncTick();
}

/**
 * @brief  Provides tick value in millisecond.
 * @return uint32_t: tick value in millisecond.
 */
uint32_t HAL_GetTick(void)
{
    return uwTick;
}

/**
  * @brief Set new tick frequency.
  * @return HAL_Status.
  */
HAL_Status HAL_SetTickFreq(eHAL_tickFreq freq)
{
    HAL_ASSERT(IS_TICKFREQ(freq));

    uwTickFreq = freq;

    return HAL_OK;
}

/**
  * @brief Return tick frequency.
  * @return uint32_t: tick period in Hz.
  */
eHAL_tickFreq HAL_GetTickFreq(void)
{
    return uwTickFreq;
}

/**
 * @brief  SysTick mdelay.
 * @param  ms: mdelay count.
 * @return HAL_Status: HAL_OK.
 * @attention this API allow direct use in the HAL layer. Blocking for a
 *  certain period of time to continuously query HW status, use HAL_GetTick
 *  to do timeout, that will be more accurate.
 */
__WEAK HAL_Status HAL_DelayMs(uint32_t ms)
{
    uint32_t startTick = HAL_GetTick();
    uint32_t waitTick = ms;

    /* Add a freq to guarantee minimum wait */
    if (waitTick < HAL_MAX_DELAY) {
        waitTick += (uint32_t)(uwTickFreq);
    }

    while ((HAL_GetTick() - startTick) < waitTick)
        ;

    return HAL_OK;
}

#ifdef __CORTEX_A
/**
 * @brief  SysTick udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_DelayUs(uint32_t us)
{
    return HAL_CPUDelayUs(us);
}
#else
/**
 * @brief  Config systick reload value.
 * @param  ticksNumb: systick reload value.
 * @return HAL_Status.
 */
HAL_Status HAL_SYSTICK_Config(uint32_t ticksNumb)
{
    if (SysTick_Config(ticksNumb))
        return HAL_INVAL;
    else
        return HAL_OK;
}

/**
 * @brief  SysTick udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 * @attention this API allow direct use in the HAL layer.
 *  When the tickPerSec is within a certain range, the delicate delay is more
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
    /* Configure the SysTick to have interrupt in 1ms time basis */
    HAL_SYSTICK_Config(SystemCoreClock / (1000U / uwTickFreq));

    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, tickPriority);

    /* Return function status */
    return HAL_OK;
}
#endif

/** @} */

/** @} */

/** @} */
