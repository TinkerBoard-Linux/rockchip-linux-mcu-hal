/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .pReg = I2C0,
    .irqNum = I2C0_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};

#ifdef RKMCU_RK3562_BUS
const struct HAL_I2C_DEV g_i2c1Dev =
{
    .pReg = I2C1,
    .irqNum = I2C1_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .pReg = I2C2,
    .irqNum = I2C2_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};

const struct HAL_I2C_DEV g_i2c3Dev =
{
    .pReg = I2C3,
    .irqNum = I2C3_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};

const struct HAL_I2C_DEV g_i2c4Dev =
{
    .pReg = I2C4,
    .irqNum = I2C4_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};

const struct HAL_I2C_DEV g_i2c5Dev =
{
    .pReg = I2C5,
    .irqNum = I2C5_IRQn,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
};
#endif /* RKMCU_RK3562_BUS */
#endif /* HAL_I2C_MODULE_ENABLED */

#ifdef HAL_SPI_MODULE_ENABLED
const struct HAL_SPI_DEV g_spi0Dev = {
    .base = SPI0_BASE,
    .clkId = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = SPI0_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI0_RX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI0_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI0_TX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI0_BASE + 0x800,
    },
};

#ifdef RKMCU_RK3562_BUS
const struct HAL_SPI_DEV g_spi1Dev = {
    .base = SPI1_BASE,
    .clkId = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = SPI1_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI1_RX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI1_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI1_TX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI1_BASE + 0x800,
    },
};

const struct HAL_SPI_DEV g_spi2Dev = {
    .base = SPI2_BASE,
    .clkId = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = SPI2_IRQn,
    .isSlave = false,
    .txDma = {
        .channel = DMA_REQ_SPI2_RX,
        .direction = DMA_MEM_TO_DEV,
        .addr = SPI2_BASE + 0x400,
    },
    .rxDma = {
        .channel = DMA_REQ_SPI2_TX,
        .direction = DMA_DEV_TO_MEM,
        .addr = SPI2_BASE + 0x800,
    },
};
#endif /* RKMCU_RK3562_BUS */
#endif /* HAL_SPI_MODULE_ENABLED */

#ifdef RKMCU_RK3562_BUS

#ifdef HAL_FSPI_MODULE_ENABLED
struct HAL_FSPI_HOST g_fspi0Dev =
{
    .instance = FSPI,
    .sclkGate = 0,
    .hclkGate = 0,
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
#endif

#endif /* RKMCU_RK3562_BUS */

#ifdef RKMCU_RK3562_PMU

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .irqNum = UART0_IRQn,
    .isAutoFlow = false,
};
#endif

#endif /* RKMCU_RK3562_PMU */

#ifdef HAL_PWM_MODULE_ENABLED
const struct HAL_PWM_DEV g_pwm0Dev =
{
    .pReg = PWM0,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = PWM0_IRQn,
};

const struct HAL_PWM_DEV g_pwm1Dev =
{
    .pReg = PWM1,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = PWM1_IRQn,
};

const struct HAL_PWM_DEV g_pwm2Dev =
{
    .pReg = PWM2,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = PWM2_IRQn,
};

const struct HAL_PWM_DEV g_pwm3Dev =
{
    .pReg = PWM3,
    .clkID = 0,
    .clkGateID = 0,
    .pclkGateID = 0,
    .irqNum = PWM3_IRQn,
};
#endif

void BSP_Init(void)
{
}

void BSP_SetLoaderFlag(void)
{
}
