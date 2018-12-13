/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
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
    BSP_Init();

    HAL_Init();

    HAL_UART_Init(UART_CHB, UART_BR_115200, UART_DATA_8B, UART_ONE_STOPBIT,
                  UART_PARITY_DISABLE);

    printf("printf test\n");
    while (1)
        ;

    return 0;
}
