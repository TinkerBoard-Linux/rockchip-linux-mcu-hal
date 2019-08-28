/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"

#if defined(HAL_PINCTRL_MODULE_ENABLED)
static struct PINCTRL_BANK_INFO pinBanks[] = {
    PIN_BANK_CFG_FLAGS(GPIO_BANK0, 32, GRF_BASE,
                       0x0040, 2, 8,
                       0x0070, 2, 8,
                       0x00a0, 2, 8,
                       0x0000, 0, 0,
                       0x00d0, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK1, 32, GRF_BASE,
                       0x0050, 2, 8,
                       0x0080, 2, 8,
                       0x00b0, 2, 8,
                       0x0000, 0, 0,
                       0x00e0, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK2, 32, GRF_BASE,
                       0x0060, 2, 8,
                       0x0090, 2, 8,
                       0x00c0, 2, 8,
                       0x0000, 0, 0,
                       0x00f0, 1, 8),
};

const struct HAL_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
};
#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev =
{
    .pReg = DMA,
    .peripReqType = BURST,
    .irq[0] = DMAC_IRQn,
    .irq[1] = DMAC_ABORT_IRQn,
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = CLK_UART0_SRC_GATE,
    .pclkGateID = PCLK_UART0_GATE,
    .irqNum = UART0_IRQn,
    .isAutoFlow = true,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .pReg = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = CLK_UART1_SRC_GATE,
    .pclkGateID = PCLK_UART1_GATE,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .pReg = I2C0,
    .clkID = CLK_I2C0,
    .clkGateID = CLK_I2C0_SRC_GATE,
    .pclkGateID = PCLK_I2C0_GATE,
    .irqNum = I2CMST0_IRQn,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .pReg = I2C1,
    .clkID = CLK_I2C1,
    .clkGateID = CLK_I2C1_SRC_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .irqNum = I2CMST1_IRQn,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .pReg = I2C2,
    .clkID = CLK_I2C2,
    .clkGateID = CLK_I2C2_SRC_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .irqNum = I2CMST2_IRQn,
};
#endif

#if defined(HAL_PWM_MODULE_ENABLED)
const struct HAL_PWM_DEV g_pwm0Dev =
{
    .pReg = PWM,
    .clkID = CLK_PWM,
    .clkGateID = CLK_PWM_SRC_GATE,
    .pclkGateID = PCLK_PWM_GATE,
    .irqNum = PWM_IRQn,
};
#endif

#ifdef HAL_FSPI_MODULE_ENABLED
struct HAL_FSPI_HOST g_fspi0Dev =
{
    .instance = FSPI0,
    .sclkID = CLK_SFC,
    .irqNum = FSPI0_IRQn,
};
#endif

#ifdef HAL_PVTM_MODULE_ENABLED
static struct HAL_PVTM_INFO pvtmInfo[] =
{
    /* core pvtm */
    {
        .pvtmId = PVTM_ID_CORE,
        .clkGateID = CLK_PVTM_GATE,
        .con0 = &(GRF->DLL_CON[0]),
        .con1 = &(GRF->DLL_CON[1]),
        .sta0 = &(GRF->DLL_STATUS[0]),
        .sta1 = &(GRF->DLL_STATUS[1]),
        .startMask = GRF_DLL_CON0_PVTM_START_MASK,
        .startShift = GRF_DLL_CON0_PVTM_START_SHIFT,
        .enMask = GRF_DLL_CON0_PVTM_OSC_EN_MASK,
        .enShift = GRF_DLL_CON0_PVTM_OSC_EN_SHIFT,
        .selMask = GRF_DLL_CON0_PVTM_RING_SEL_MASK,
        .selShift = GRF_DLL_CON0_PVTM_RING_SEL_SHIFT,
        .doneMask = GRF_DLL_STATUS0_PVTM_FREQ_DONE_MASK,
        .doneShift = GRF_DLL_STATUS0_PVTM_FREQ_DONE_SHIFT,
    },
};

const struct HAL_PVTM_DEV g_pvtmDev =
{
    .info = pvtmInfo,
    .num = HAL_ARRAY_SIZE(pvtmInfo),
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
