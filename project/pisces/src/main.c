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

struct UART_REG *pUart = UART0;

int fputc(int ch, FILE *f)
{
    if (ch == '\n') {
        HAL_UART_SerialOut(pUart, "\r", 1);
    }
    HAL_UART_SerialOut(pUart, (uint8_t *)&ch, 1);

}

void UART0_IRQHandler(void)
{
    HAL_UART_HandleIrq(pUart);
}


int main(void)
{
    /* HAL BASE Init */
    HAL_NVIC_SetIRQHandler(SysTick_IRQn, (NVIC_IRQHandler)&HAL_SysTick_Handler);
    HAL_Init();

    /* BSP Init */
    BSP_Init();

    /* UART Init */
    HAL_NVIC_SetIRQHandler(UART0_IRQn, (NVIC_IRQHandler)&UART0_IRQHandler);
    HAL_NVIC_EnableIRQ(UART0_IRQn);
    HAL_UART_Init(pUart, UART_BR_115200, UART_DATA_8B, UART_ONE_STOPBIT,
                  UART_PARITY_DISABLE);

    printf("print test\n");

    while (1)
        ;

    return 0;
}
