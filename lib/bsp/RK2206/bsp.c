/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"

#ifdef HAL_DWDMA_MODULE_ENABLED
struct HAL_DWDMA_DEV g_dwDmaDev =
{
    .pReg = DMA,
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

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .pReg = I2C0,
    .clkID = CLK_I2C0,
    .clkGateID = CLK_I2C0_PLL_GATE,
    .pclkGateID = PCLK_I2C0_GATE,
    .irqNum = I2C0_IRQn,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .pReg = I2C1,
    .clkID = CLK_I2C1,
    .clkGateID = CLK_I2C1_PLL_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .irqNum = I2C1_IRQn,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .pReg = I2C2,
    .clkID = CLK_I2C2,
    .clkGateID = CLK_I2C2_PLL_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .irqNum = I2C2_IRQn,
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

const struct HAL_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
};
#endif

#ifdef HAL_PWM_MODULE_ENABLED
const struct HAL_PWM_DEV g_pwm0Dev =
{
    .pReg = PWM0,
    .clkID = CLK_PWM0,
    .clkGateID = CLK_PWM0_PLL_GATE,
    .pclkGateID = PCLK_PWM0_GATE,
    .irqNum = PWM_4CH_0_IRQn,
};

const struct HAL_PWM_DEV g_pwm1Dev =
{
    .pReg = PWM1,
    .clkID = CLK_PWM1,
    .clkGateID = CLK_PWM1_PLL_GATE,
    .pclkGateID = PCLK_PWM1_GATE,
    .irqNum = PWM_4CH_1_IRQn,
};

const struct HAL_PWM_DEV g_pwm2Dev =
{
    .pReg = PWM2,
    .clkID = CLK_PWM2,
    .clkGateID = CLK_PWM2_PLL_GATE,
    .pclkGateID = PCLK_PWM2_GATE,
    .irqNum = PWM_4CH_2_IRQn,
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
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .pReg = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = SCLK_UART1_GATE,
    .pclkGateID = PCLK_UART1_GATE,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
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

#ifdef HAL_I2STDM_MODULE_ENABLED
struct HAL_I2STDM_DEV g_i2sTdm0Dev =
{
    .pReg = I2STDM0,
    .mclkTx = MCLK_I2S8CH_0_TX,
    .mclkTxGate = MCLK_I2S8CH_0_TX_GATE,
    .mclkRx = MCLK_I2S8CH_0_RX,
    .mclkRxGate = MCLK_I2S8CH_0_RX_GATE,
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

struct HAL_I2STDM_DEV g_i2sTdm1Dev =
{
    .pReg = I2STDM1,
    .mclkTx = MCLK_I2S8CH_1_TX,
    .mclkTxGate = MCLK_I2S8CH_1_TX_GATE,
    .mclkRx = MCLK_I2S8CH_1_RX,
    .mclkRxGate = MCLK_I2S8CH_1_RX_GATE,
    .hclk = HCLK_I2S1_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(I2STDM1->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S1_RX,
        .dmac = DMA,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(I2STDM1->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S1_TX,
        .dmac = DMA,
    },
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
