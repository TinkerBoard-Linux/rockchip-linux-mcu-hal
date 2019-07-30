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

/** @defgroup SYSTICK_How_To_Use How To Use
 *  @{

 The SYSTICK driver can be used as follows:

 Reset SysTick in default setting:

  - Reset HAL_BASE tick frequency value by calling HAL_SetTickFreq() if needed;
  - Reset SysTick by calling HAL_SYSTICK_Init().

 Reset SysTick by user:

 - Choose SysTick clock source by calling HAL_SYSTICK_CLKSourceConfig();
 - Config SysTick reload value by calling HAL_SYSTICK_Config();
 - Configure the SysTick frequency by calling by calling HAL_SetTickFreq().

 Resgister HAL_SYSTICK_IRQHandler();

 @} */

#include "hal_base.h"

#ifdef HAL_SYSTICK_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define SYSTICK_INT_PRIORITY 0x0FU

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup SYSTICK_Exported_Functions_Group4 Init and DeInit Functions
 *  @{
 */

/**
 * @brief  Init SysTick
 * @return HAL_Status: HAL_OK.
 * Reset SysTick to default setting.
 */
HAL_Status HAL_SYSTICK_Init(void)
{
    uint32_t ret, rate = SystemCoreClock;

    ret = HAL_SYSTICK_CLKSourceConfig(HAL_TICK_CLKSRC_EXT);       /* Choose external clock source */
    if (ret == HAL_OK)
        rate = PLL_INPUT_OSC_RATE;

    HAL_SYSTICK_Config(rate / (1000 / HAL_GetTickFreq()));        /* Configure the SysTick to have interrupt in 1ms time basis */

    /*Configure the SysTick IRQ priority */
    HAL_NVIC_SetPriority(SysTick_IRQn, SYSTICK_INT_PRIORITY);

    return HAL_OK;
}

/** @} */

/** @defgroup SYSTICK_Exported_Functions_Group5 Other Functions
 *  @{
 */

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
 * @brief  Core internal SysTick IRQ handler
 * @return None
 * Count plus 1.
 */
__WEAK void HAL_SYSTICK_IRQHandler(void)
{
    HAL_IncTick();
}

/** @} */

#endif

/** @} */

/** @} */