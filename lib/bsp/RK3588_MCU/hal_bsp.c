/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = 0,              // TODO: Need to update if you enable CRU
    .irqNum = 390,            // 363 + 27(NUM_INTERRUPTS)
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART0,
};
const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .sclkID = 0,             // TODO: Need to update if you enable CRU
    .irqNum = 392,           // 365 + 27(NUM_INTERRUPTS)
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART2,
};
#endif

void BSP_Init(void)
{
}

void BSP_SetLoaderFlag(void)
{
}
