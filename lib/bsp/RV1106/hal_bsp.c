/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#if defined(HAL_CRU_MODULE_ENABLED)
static struct CRU_BANK_INFO cruBanks[] = {
    CRU_BANK_CFG_FLAGS(CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PMUCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PERICRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(VICRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(NPUCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(CORECRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(VEPUCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(VOCRU_BASE, 0x300, 0x800, 0xa00),
};

const struct HAL_CRU_DEV g_cruDev = {
    .banks = cruBanks,
    .banksNum = HAL_ARRAY_SIZE(cruBanks),
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c4Dev =
{
    .pReg = I2C4,
    .irqNum = I2C4_IRQn,
    .clkID = CLK_I2C4,
    .clkGateID = CLK_I2C4_GATE,
    .pclkGateID = PCLK_I2C4_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C4,
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = SCLK_UART0_GATE,
    .pclkGateID = PCLK_UART0_GATE,
    .irqNum = UART0_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .sclkID = CLK_UART2,
    .sclkGateID = SCLK_UART2_GATE,
    .pclkGateID = PCLK_UART2_GATE,
    .irqNum = UART2_IRQn,
    .isAutoFlow = false,
};
#endif

void BSP_Init(void)
{
}
