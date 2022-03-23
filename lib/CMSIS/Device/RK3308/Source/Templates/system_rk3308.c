/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"
#include "soc.h"

#define  SYSTEM_CLOCK 1000000000U

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate(void)
{
    SystemCoreClock = SYSTEM_CLOCK;
}

/*----------------------------------------------------------------------------
  System Initialization
 *----------------------------------------------------------------------------*/
void SystemInit(void)
{
/* do not use global variables because this function is called before
   reaching pre-main. RW section may be overwritten afterwards.          */

#if ((__FPU_PRESENT == 1) && (__FPU_USED == 1))
    // Enable FPU
    __FPU_Enable();
#endif
}

void DataInit(void)
{
    typedef struct {
        unsigned long *dest;
        unsigned long wlen;
    } __zero_table_t;

    extern const __zero_table_t __zero_table_start__;
    extern const __zero_table_t __zero_table_end__;

    for (__zero_table_t const *pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
        for (unsigned long i = 0u; i < pTable->wlen; ++i) {
            pTable->dest[i] = 0u;
        }
    }
}
