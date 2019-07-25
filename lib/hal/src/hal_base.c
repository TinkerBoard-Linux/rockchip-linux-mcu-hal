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

  - Resgister HAL_SYSTICK_IRQHandler();
  - Initialize the HAL_BASE by calling HAL_Init():
  - Get system time by calling HAL_GetTick();
  - Delay for a certain length of time, HAL_DelayMs(), HAL_DelayUs(), and HAL_CPUDelayUs();

 Reset SysTick in default setting:

  - Reset tick frequency value by calling HAL_SetTickFreq() if needed;
  - Reset SysTick by calling HAL_InitTick().

 Reset SysTick by user:

  - Choose SysTick clock source by calling HAL_SYSTICK_CLKSourceConfig();
  - Config SysTick reload value by calling HAL_SYSTICK_Config();
  - Configure the SysTick frequency by calling by calling HAL_SetTickFreq().


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
#ifdef __GNUC__
static void CPUCycleLoop(uint32_t cycles)
{
    __ASM volatile (
        "mov  r0, %0\n\t"
        "adds r0, r0, #2\n\t"   //    1    2    Round to the nearest multiple of 4.
        "lsrs r0, r0, #2\n\t"   //    1    2    Divide by 4 and set flags.
        "beq  2f\n\t"           //    2    2    Skip if 0.
        ".align 4\n\t"
        "1:\n\t"
        "adds r0, r0, #1\n\t"   //    1    2    Increment the counter.
        "subs r0, r0, #2\n\t"   //    1    2    Decrement the counter by 2.
        "bne  1b\n\t"           //   (1)2  2    2 CPU cycles (if branch is taken).
        "nop\n\t"               //    1    2    Loop alignment padding.
        "2:"
        : : "r" (cycles)
        );
}
#endif

/********************* Public Function Definition ***************************/
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

/**
 * @brief  CPU loop udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 * @attention this API allow direct use in the HAL layer. The longer the delay,
 *  the more accurate. Actual delay is greater than the parameter.
 */
HAL_Status HAL_CPUDelayUs(uint32_t us)
{
    volatile uint32_t cycles;

    cycles = SystemCoreClock / 1000000 * us; /* Add few cycles penalty */

    CPUCycleLoop(cycles);

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
    if ((ticksNumb - 1UL) > SysTick_LOAD_RELOAD_Msk) {
        return HAL_INVAL;                                             /* Reload value impossible */
    }

    SysTick->LOAD = (uint32_t)(ticksNumb - 1UL);                      /* set reload register */
    NVIC_SetPriority(SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL);  /* set Priority for Systick Interrupt */
    SysTick->VAL = 0UL;                                               /* Load the SysTick Counter Value */
    SysTick->CTRL |= (SysTick_CTRL_TICKINT_Msk |
                      SysTick_CTRL_ENABLE_Msk);                       /* Enable SysTick IRQ and SysTick Timer */

    return HAL_OK;
}

/**
 * @brief  Config clock source type for Systick.
 * @param  clkSource: HAL_TICK_CLKSRC_CORE clock source is from core clk,
 *                    HAL_TICK_CLKSRC_EXT clock source is from external reference
 * @return HAL_OK if successful, HAL_INVAL if soc not support.
 */
HAL_Status HAL_SYSTICK_CLKSourceConfig(eHAL_tickClkSource clkSource)
{
    if (clkSource == HAL_TICK_CLKSRC_CORE) {
        SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk;
    } else {
        if (SysTick->CALIB & SysTick_CALIB_NOREF_Msk)
            return HAL_INVAL;
        else
            SysTick->CTRL &= ~SysTick_CTRL_CLKSOURCE_Msk;
    }

    return HAL_OK;
}

/**
 * @brief  System Tick, Is the externalreferance clock enabled as a source clock.
 * @return HAL_TRUE if external referance clock is enabled
 */
HAL_Check HAL_SYSTICK_IsExtRefClockEnabled(void)
{
    if (SysTick->CTRL & SysTick_CTRL_CLKSOURCE_Msk) {
        return HAL_FALSE;
    } else {
        HAL_ASSERT(!(SysTick->CALIB & SysTick_CALIB_NOREF_Msk));

        return HAL_TRUE;
    }
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
 * Reset SysTick to default setting.
 */
HAL_Status HAL_InitTick(uint32_t tickPriority)
{
    uint32_t ret, rate = SystemCoreClock;

    ret = HAL_SYSTICK_CLKSourceConfig(HAL_TICK_CLKSRC_EXT);       /* Choose external clock source */
    if (ret == HAL_OK)
        rate = PLL_INPUT_OSC_RATE;

    HAL_SYSTICK_Config(rate / (1000 / uwTickFreq));               /* Configure the SysTick to have interrupt in 1ms time basis */
    HAL_SetTickFreq(uwTickFreq);                                  /* Configure the SysTick frequency */

    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, tickPriority);

    /* Return function status */
    return HAL_OK;
}
#endif

/** @} */

/** @} */

/** @} */
