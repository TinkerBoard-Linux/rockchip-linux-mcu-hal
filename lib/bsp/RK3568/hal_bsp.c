/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev0 =
{
    .pReg = DMA0,
    .peripReqType = BURST,
    .irq[0] = DMAC0_IRQn,
    .irq[1] = DMAC0_ABORT_IRQn,
    .pd = 0,
};

struct HAL_PL330_DEV g_pl330Dev1 =
{
    .pReg = DMA1,
    .peripReqType = BURST,
    .irq[0] = DMAC1_IRQn,
    .irq[1] = DMAC1_ABORT_IRQn,
    .pd = 0,
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
const struct HAL_SPI_DEV g_spiDev0 = {
    .base = SPI0_BASE,
    .clkId = CLK_SPI0,
    .clkGateID = CLK_SPI0_GATE,
    .pclkGateID = PCLK_SPI0_GATE,
    .irqNum = SPI0_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI0_TX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI0_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI0_RX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI0_BASE + 0x800,
    },
};

const struct HAL_SPI_DEV g_spiDev1 = {
    .base = SPI1_BASE,
    .clkId = CLK_SPI1,
    .clkGateID = CLK_SPI1_GATE,
    .pclkGateID = PCLK_SPI1_GATE,
    .irqNum = SPI1_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI1_TX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI1_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI1_RX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI1_BASE + 0x800,
    },
};

const struct HAL_SPI_DEV g_spiDev2 = {
    .base = SPI2_BASE,
    .clkId = CLK_SPI2,
    .clkGateID = CLK_SPI2_GATE,
    .pclkGateID = PCLK_SPI2_GATE,
    .irqNum = SPI2_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI2_TX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI2_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI2_RX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI2_BASE + 0x800,
    },
};

const struct HAL_SPI_DEV g_spiDev3 = {
    .base = SPI3_BASE,
    .clkId = CLK_SPI3,
    .clkGateID = CLK_SPI3_GATE,
    .pclkGateID = PCLK_SPI3_GATE,
    .irqNum = SPI3_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI3_TX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI3_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI3_RX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI3_BASE + 0x800,
    },
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
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

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .pReg = I2C0,
    .irqNum = I2C0_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C0_GATE,
    .pclkGateID = PCLK_I2C0_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C0,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .pReg = I2C1,
    .irqNum = I2C1_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C1_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C1,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .pReg = I2C2,
    .irqNum = I2C2_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C2_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C2,
};

const struct HAL_I2C_DEV g_i2c3Dev =
{
    .pReg = I2C3,
    .irqNum = I2C3_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C3_GATE,
    .pclkGateID = PCLK_I2C3_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C3,
};

const struct HAL_I2C_DEV g_i2c4Dev =
{
    .pReg = I2C4,
    .irqNum = I2C4_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C4_GATE,
    .pclkGateID = PCLK_I2C4_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C4,
};

const struct HAL_I2C_DEV g_i2c5Dev =
{
    .pReg = I2C5,
    .irqNum = I2C5_IRQn,
    .clkID = CLK_I2C,
    .clkGateID = CLK_I2C5_GATE,
    .pclkGateID = PCLK_I2C5_GATE,
    .runtimeID = PM_RUNTIME_ID_I2C5,
};
#endif

#ifdef HAL_FSPI_MODULE_ENABLED
struct HAL_FSPI_HOST g_fspi0Dev =
{
    .instance = FSPI,
    .sclkGate = SCLK_SFC_GATE,
    .hclkGate = HCLK_SFC_GATE,
    .xipClkGate = 0,
    .sclkID = 0,
    .irqNum = FSPI0_IRQn,
    .xipMemCode = 0,
    .xipMemData = 0,
    .xmmcDev[0] =
    {
        .type = 0,
    },
};
#endif

void BSP_Init(void)
{
}
