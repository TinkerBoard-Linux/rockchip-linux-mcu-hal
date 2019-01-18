/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

int fputc(int ch, FILE *f)
{
}

int main(void)
{
    /* HAL BASE Init */
    HAL_NVIC_SetIRQHandler(SysTick_IRQn, (NVIC_IRQHandler)&HAL_SysTick_Handler);
    HAL_Init();

    /* BSP Init */
    BSP_Init();

    while (1)
        ;

    return 0;
}
