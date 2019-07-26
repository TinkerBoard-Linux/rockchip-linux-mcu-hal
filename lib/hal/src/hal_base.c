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

  - Initialize the HAL_BASE by calling HAL_Init():
  - Get system time by calling HAL_GetTick();
  - Delay for a certain length of time, HAL_DelayMs(), HAL_DelayUs(), and HAL_CPUDelayUs();

 Suggest:

  - Blocking for a certain period of time to continuously query HW status, use HAL_GetTick()
      to do timeout, this will be more accurate.

 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

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

#ifdef HAL_NVIC_MODULE_ENABLED
    /* Set Interrupt Group Priority */
    HAL_NVIC_Init();

    /* Set Interrupt Group Priority */
    HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_DEFAULT);
#endif
#ifdef HAL_SYSTICK_MODULE_ENABLED
    HAL_SYSTICK_Init();
#endif
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
 * @brief  SysTick udelay.
 * @param  us: udelay count.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_DelayUs(uint32_t us)
{
    return HAL_CPUDelayUs(us);
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

/** @} */

/** @} */

/** @} */
