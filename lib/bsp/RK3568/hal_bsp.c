/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .sclkID = 0,//CLK_UART2,
    .sclkGateID = 0,//CLK_UART2_PMU_GATE,
    .pclkGateID = 0,//PCLK_PMU_UART2_GATE,
    .irqNum = UART2_IRQn,
    .isAutoFlow = false,
};
#endif

void BSP_Init(void)
{
}
