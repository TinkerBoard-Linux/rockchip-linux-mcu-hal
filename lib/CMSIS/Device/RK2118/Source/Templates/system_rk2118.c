/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2023 Rockchip Electronics Co., Ltd.
 */

#include "soc.h"
#include "hal_base.h"

#if defined(HAL_MCU_CORE)

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
#include "partition_rk2118.h"
#endif

/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#define  SYSTEM_CLOCK (40000000UL)

/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
extern const VECTOR_TABLE_Type __VECTOR_TABLE[496];

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;  /* System Core Clock Frequency */

static void CacheInit(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED)
    SCB_EnableICache();
#endif

#if defined(HAL_DCACHE_MODULE_ENABLED)
    SCB_EnableDCache();
#endif
}

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate(void)
{
    SystemCoreClock = SYSTEM_CLOCK;
}

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
void SystemInit(void)
{
    CacheInit();

#if defined(__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t)&(__VECTOR_TABLE[0]);
#endif

#if defined(__FPU_USED) && (__FPU_USED == 1U)
    SCB->CPACR |= ((3U << 10U * 2U) |       /* enable CP10 Full Access */
                   (3U << 11U * 2U));       /* enable CP11 Full Access */
#endif

#ifdef UNALIGNED_SUPPORT_DISABLE
    SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
#endif

#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    TZ_SAU_Setup();
#endif

    SystemCoreClock = SYSTEM_CLOCK;
}

#elif defined(HAL_DSP_CORE)
/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#if defined(RK2118_DSP_CORE0)
#define  SYSTEM_CLOCK (600000000UL)
#else
#define  SYSTEM_CLOCK (500000000UL)
#endif

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;  /* System Core Clock Frequency */

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate(void)
{
    SystemCoreClock = SYSTEM_CLOCK;
}
#endif
