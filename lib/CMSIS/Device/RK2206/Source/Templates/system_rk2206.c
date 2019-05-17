/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "soc.h"

uint32_t SystemCoreClock = 40000000;

/*----------------------------------------------------------------------------
  Externals
 *----------------------------------------------------------------------------*/
#if defined(__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
extern uint32_t __Vectors[];
extern const uint32_t __vector_remap__[];
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
    uint32_t status;

#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
    SCB->CPACR |= ((3UL << 10 * 2) | (3UL << 11 * 2));  /* set CP10 and CP11 Full Access */
#endif

#if defined(__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
#ifdef __vector_remap__
    uint32_t *ramVector = (uint32_t *)(__vector_remap__);

    for (uint32_t i = 0; i < 16; i++)
    {
        ramVector[i] = __Vectors[i];
    }
    SCB->VTOR = (uint32_t)ramVector;
#else
    SCB->VTOR = (uint32_t)__Vectors;
#endif
#endif
}
