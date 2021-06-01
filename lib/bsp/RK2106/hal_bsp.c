/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .irqNum = UART0_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .pReg = UART1,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .irqNum = UART2_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart3Dev =
{
    .pReg = UART3,
    .irqNum = UART3_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart4Dev =
{
    .pReg = UART4,
    .irqNum = UART4_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart5Dev =
{
    .pReg = UART5,
    .irqNum = UART5_IRQn,
    .isAutoFlow = true,
};
#endif

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

void BSP_Init(void)
{
}
