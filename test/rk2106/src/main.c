/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2019 Rockchip Electronic Co.,Ltd
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
    if (ch == '\n') {
        HAL_UART_WriteByte(UART_CHB, "\r", 1);
    }
    HAL_UART_WriteByte(UART_CHB, (uint8_t *)&ch, 1);
}

int main(void)
{
    int32_t i;

    /* HAL BASE Init */
    HAL_NVIC_SetIRQHandler(SysTick_IRQn, (NVIC_IRQHandler)&HAL_SysTick_Handler);
    HAL_Init();

    /* BSP Init */
    BSP_Init();

    /* HAL UART Init */
    HAL_UART_Init(UART_CHB, UART_BR_115200, UART_DATA_8B, UART_ONE_STOPBIT,
                  UART_PARITY_DISABLE);
    printf("printf test\n");

    /* HAL TIMER test */
    if (0) {
        HAL_NVIC_ConfigExtIRQ(INT_ID_TIMER0,
                              (NVIC_IRQHandler)&HAL_TIMER0_Handler,
                              NVIC_PERIPH_PRIO_DEFAULT);
        HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
        HAL_TIMER_SetCount(TIMER0, SystemCoreClock * 5);
        HAL_TIMER_Start(TIMER0);
        for (i = 0; i < 10000000; i++) {
            HAL_Delay(1000);
            printf("%llu\n", HAL_TIMER_GetCount(TIMER0));
        }
    };

    while (1)
        ;

    return 0;
}
