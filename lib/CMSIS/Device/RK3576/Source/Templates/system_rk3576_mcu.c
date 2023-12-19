/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_MCU_CORE

#ifdef RKMCU_RK3576_BUS
uint32_t SystemCoreClock = 400000000; /* 400MHz */
#else /* RKMCU_RK3576_PMU */
uint32_t SystemCoreClock = 200000000; /* 200MHz */
#endif

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate(void)
{
}

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
void SystemInit(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) || defined(HAL_DCACHE_MODULE_ENABLED)
    uint32_t status;

    /* cache enable */
    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_EN_MASK;
    DCACHE->STB_TIMEOUT_CTRL = 1;

    do {
        status = DCACHE->CACHE_STATUS & DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK;
    } while (status == 0);

    DCACHE->CACHE_CTRL &= ~DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK;
#endif

#ifdef HAL_INTMUX_MODULE_ENABLED
    HAL_INTMUX_Init();
#endif
}
#endif