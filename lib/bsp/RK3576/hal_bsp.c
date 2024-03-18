/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#if defined(HAL_CRU_MODULE_ENABLED)
static struct CRU_BANK_INFO cruBanks[] = {
    CRU_BANK_CFG_FLAGS(CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PHPTOPCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(SECURECRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PMU1CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR0CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR1CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(BIGCORECRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(LITCORECRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(CCICRU_BASE, 0x300, 0x800, 0xa00),
};

const struct HAL_CRU_DEV g_cruDev = {
    .banks = cruBanks,
    .banksNum = HAL_ARRAY_SIZE(cruBanks),
};
#endif

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
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .irqNum = UART2_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart3Dev =
{
    .pReg = UART3,
    .irqNum = UART3_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart4Dev =
{
    .pReg = UART4,
    .irqNum = UART4_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart5Dev =
{
    .pReg = UART5,
    .irqNum = UART5_IRQn,
    .sclkID = SCLK_UART5,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart6Dev =
{
    .pReg = UART6,
    .irqNum = UART6_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart7Dev =
{
    .pReg = UART7,
    .irqNum = UART7_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart8Dev =
{
    .pReg = UART8,
    .irqNum = UART8_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart9Dev =
{
    .pReg = UART9,
    .irqNum = UART9_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart10Dev =
{
    .pReg = UART10,
    .irqNum = UART10_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart11Dev =
{
    .pReg = UART11,
    .irqNum = UART11_IRQn,
    .isAutoFlow = false,
};
#endif

void BSP_Init(void)
{
}

void BSP_SetLoaderFlag(void)
{
}
