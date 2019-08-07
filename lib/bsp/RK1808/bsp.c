/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .base = I2C0,
    .clkID = CLK_I2C0,
    .clkGateID = CLK_I2C0_PMU_PLL_GATE,
    .pclkGateID = PCLK_PMU_I2C0_GATE,
    .irqNum = I2C0_IRQn,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .base = I2C1,
    .clkID = CLK_I2C1,
    .clkGateID = CLK_I2C1_PLL_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .irqNum = I2C1_IRQn,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .base = I2C2,
    .clkID = CLK_I2C2,
    .clkGateID = CLK_I2C2_PLL_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .irqNum = I2C2_IRQn,
};

const struct HAL_I2C_DEV g_i2c3Dev =
{
    .base = I2C3,
    .clkID = CLK_I2C3,
    .clkGateID = CLK_I2C3_PLL_GATE,
    .pclkGateID = PCLK_I2C3_GATE,
    .irqNum = I2C3_IRQn,
};

const struct HAL_I2C_DEV g_i2c4Dev =
{
    .base = I2C4,
    .clkID = CLK_I2C4,
    .clkGateID = CLK_I2C4_PLL_GATE,
    .pclkGateID = PCLK_I2C4_GATE,
    .irqNum = I2C4_IRQn,
};

const struct HAL_I2C_DEV g_i2c5Dev =
{
    .base = I2C5,
    .clkID = CLK_I2C5,
    .clkGateID = CLK_I2C5_PLL_GATE,
    .pclkGateID = PCLK_I2C5_GATE,
    .irqNum = I2C5_IRQn,
};
#endif

#ifdef HAL_I2S_MODULE_ENABLED
struct HAL_I2S_DEV g_i2s1Dev =
{
    .reg = I2S1,
    .mclk = CLK_I2S1,
    .mclkGate = CLK_I2S1_GATE,
    .hclk = HCLK_I2S1_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(I2S1->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S1_RX,
        .dmac = DMA,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(I2S1->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S1_TX,
        .dmac = DMA,
    },
};
#endif

#ifdef HAL_I2STDM_MODULE_ENABLED
struct HAL_I2STDM_DEV g_i2sTdm0Dev =
{
    .reg = I2STDM0,
    .mclkTx = CLK_I2S0_TX,
    .mclkTxGate = CLK_I2S0_TX_GATE,
    .mclkRx = CLK_I2S0_RX,
    .mclkRxGate = CLK_I2S0_RX_GATE,
    .hclk = HCLK_I2S0_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(I2STDM0->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S0_RX,
        .dmac = DMA,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(I2STDM0->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S0_TX,
        .dmac = DMA,
    },
};
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .reg = PDM0,
    .mclk = CLK_PDM,
    .mclkRate = CLK_PDM_GATE,
    .hclk = HCLK_PDM_GATE,
    .reset = SRST_PDM_SRSTN,
    .rxDmaData =
    {
        .addr = (uint32_t)&(PDM0->RXFIFO_DATA_REG),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_PDM,
        .dmac = DMA,
    },
};
#endif

#if defined(HAL_PINCTRL_MODULE_ENABLED)
static struct PINCTRL_BANK_INFO pinBanks[] = {
    PIN_BANK_CFG_FLAGS(GPIO_BANK0, 32, PMU_GRF_BASE,
                       0x0000, 2, 8,
                       0x0010, 2, 8,
                       0x0020, 2, 8,
                       0x0030, 1, 8,
                       0x0040, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK1, 32, BUS_GRF_BASE,
                       0x0000, 4, 4,
                       0x0080, 2, 8,
                       0x0140, 2, 8,
                       0x00c0, 1, 8,
                       0x0100, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK2, 32, BUS_GRF_BASE,
                       0x0020, 4, 4,
                       0x0090, 2, 8,
                       0x0150, 2, 8,
                       0x00d0, 1, 8,
                       0x0110, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK3, 32, BUS_GRF_BASE,
                       0x0040, 4, 4,
                       0x00a0, 2, 8,
                       0x0160, 2, 8,
                       0x00e0, 1, 8,
                       0x0120, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK4, 32, BUS_GRF_BASE,
                       0x0060, 4, 4,
                       0x00b0, 2, 8,
                       0x0170, 2, 8,
                       0x00f0, 1, 8,
                       0x0130, 1, 8),
};

const struct RK_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
};

#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev =
{
    .reg = DMA,
    .peripReqType = BURST,
    .irq[0] = DMAC_IRQn,
    .irq[1] = DMAC_ABORT_IRQn,
};
#endif

#ifdef HAL_VAD_MODULE_ENABLED
struct HAL_VAD_DEV g_vadDev =
{
    .reg = VAD,
    .hclk = HCLK_VAD_GATE,
    .irq = VAD_IRQn,
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .base = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = CLK_UART0_PMU_GATE,
    .pclkGateID = PCLK_PMU_UART0_GATE,
    .irqNum = UART0_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .base = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = CLK_UART1_GATE,
    .pclkGateID = PCLK_UART1_GATE,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .base = UART2,
    .sclkID = CLK_UART2,
    .sclkGateID = CLK_UART2_GATE,
    .pclkGateID = PCLK_UART2_GATE,
    .irqNum = UART2_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart3Dev =
{
    .base = UART3,
    .sclkID = CLK_UART3,
    .sclkGateID = CLK_UART3_GATE,
    .pclkGateID = PCLK_UART3_GATE,
    .irqNum = UART3_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart4Dev =
{
    .base = UART4,
    .sclkID = CLK_UART4,
    .sclkGateID = CLK_UART4_GATE,
    .pclkGateID = PCLK_UART4_GATE,
    .irqNum = UART4_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart5Dev =
{
    .base = UART5,
    .sclkID = CLK_UART5,
    .sclkGateID = CLK_UART5_GATE,
    .pclkGateID = PCLK_UART5_GATE,
    .irqNum = UART5_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart6Dev =
{
    .base = UART6,
    .sclkID = CLK_UART6,
    .sclkGateID = CLK_UART6_GATE,
    .pclkGateID = PCLK_UART6_GATE,
    .irqNum = UART6_IRQn,
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart7Dev =
{
    .base = UART7,
    .sclkID = CLK_UART7,
    .sclkGateID = CLK_UART7_GATE,
    .pclkGateID = PCLK_UART7_GATE,
    .irqNum = UART7_IRQn,
    .isAutoFlow = false,
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
