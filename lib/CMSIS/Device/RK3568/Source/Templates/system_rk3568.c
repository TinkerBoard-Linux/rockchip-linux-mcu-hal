/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "soc.h"

#define  SYSTEM_CLOCK  150000000U

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate (void)
{
    SystemCoreClock = SYSTEM_CLOCK;
}

/*----------------------------------------------------------------------------
  System Initialization
 *----------------------------------------------------------------------------*/
void SystemInit (void)
{
/* do not use global variables because this function is called before
   reaching pre-main. RW section may be overwritten afterwards.          */

    /* to do */
}

void DataInit (void)
{
#ifndef ARCH_RISCV

    typedef struct {
        unsigned long* dest;
        unsigned long  wlen;
    } __zero_table_t;

    extern const __zero_table_t __zero_table_start__;
    extern const __zero_table_t __zero_table_end__;

    for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
        for (unsigned long i = 0u; i < pTable->wlen; ++i) {
            pTable->dest[i] = 0u;
        }
    }
#endif /* ARCH_RISCV */
}
