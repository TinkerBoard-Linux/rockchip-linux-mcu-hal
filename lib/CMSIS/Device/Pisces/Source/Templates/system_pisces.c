/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "pisces.h"

uint32_t SystemCoreClock = 30000000;

/*----------------------------------------------------------------------------
  Externals
 *----------------------------------------------------------------------------*/
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    extern uint32_t __Vectors;
#endif

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate (void)
{
}

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
void SystemInit (void)
{
    uint32_t status;

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &__Vectors;
#endif

    /* config icache: mpu disable, stb disable, write through, hot buffer enable */
    ICACHE_CTRL->CTRL |= (CACHE_EN | CACHE_WT_EN) & (~CACHE_STB_EN);

    do {
        status = ICACHE_CTRL->STATUS & CACHE_STATUS_INIT_FINISH_MASK;
    } while (status == 0);

    ICACHE_CTRL->CTRL &= ~CACHE_BYPASS;

    /* stb enable, stb_entry=7, stb_timeout enable, write back */
    DCACHE_CTRL->CTRL |=
        CACHE_EN | (7U << CACHE_ENTRY_THRESH_SHIFT) | CACHE_STB_TIMEOUT_EN;
    DCACHE_CTRL->STB_TIMEOUT_CTRL = 1;

    do {
        status = DCACHE_CTRL->STATUS & CACHE_STATUS_INIT_FINISH_MASK;
    } while (status == 0);

    DCACHE_CTRL->CTRL &= ~CACHE_BYPASS;
}
