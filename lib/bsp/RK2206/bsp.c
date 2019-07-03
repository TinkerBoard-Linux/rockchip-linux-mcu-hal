/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"

#ifdef HAL_DWDMA_MODULE_ENABLED
struct HAL_DWDMA_DEV g_dwDmaDev =
{
    .reg = DMA,
    .irq[0] = DMAC_CH0_IRQn,
    .irq[1] = DMAC_CH1_IRQn,
    .irq[2] = DMAC_CH2_IRQn,
    .irq[3] = DMAC_CH3_IRQn,
    .irq[4] = DMAC_CH4_IRQn,
    .irq[5] = DMAC_CH5_IRQn,
    .dataWidth = 2, /**< 32 bits */
    .blockSize = 0xfff, /** ref to trm */
};
#endif

#if defined(HAL_PINCTRL_MODULE_ENABLED)
static struct PINCTRL_BANK_INFO pinBanks[] = {
    PIN_BANK_CFG_FLAGS(GPIO_BANK0, 32, GRF_BASE,
                       0x0000, 4, 4,
                       0x0100, 2, 8,
                       0x0000, 0, 0,
                       0x0000, 0, 0,
                       0x0000, 0, 0),
    PIN_BANK_CFG_FLAGS(GPIO_BANK1, 32, GRF_BASE,
                       0x0020, 4, 4,
                       0x0110, 2, 8,
                       0x0000, 0, 0,
                       0x0000, 0, 0,
                       0x0000, 0, 0),
};

const struct RK_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .base = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = SCLK_UART0_GATE,
    .pclkGateID = PCLK_UART0_GATE,
    .irqNum = UART0_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .base = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = SCLK_UART1_GATE,
    .pclkGateID = PCLK_UART1_GATE,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .base = UART2,
    .sclkID = CLK_UART2,
    .sclkGateID = SCLK_UART2_GATE,
    .pclkGateID = PCLK_UART2_GATE,
    .irqNum = UART2_IRQn,
    .isAutoFlow = false,
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
