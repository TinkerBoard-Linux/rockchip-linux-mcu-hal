/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

#ifdef HAL_AUDIOPWM_MODULE_ENABLED
struct HAL_AUDIOPWM_DEV g_audioPwmDev =
{
    .base = AUDIOPWM_BASE,
    .mclk = CLK_AUDPWM,
    .hclk = HCLK_AUDPWM_GATE,
    .txDmaData =
    {
        .addr = (uint32_t)&(AUDIOPWM->FIFO_ENTRY),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_AUDIOPWM,
        .dmac = DMA,
    },
};

HAL_Status BSP_AUDIOPWM_Init(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}

HAL_Status BSP_AUDIOPWM_DeInit(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}
#endif

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .base = I2C0,
    .clkID = CLK_I2C0,
    .clkGateID = CLK_I2C0_GATE,
    .pclkGateID = PCLK_I2C0_GATE,
    .irqNum = I2CMST0_IRQn,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .base = I2C1,
    .clkID = CLK_I2C1,
    .clkGateID = CLK_I2C1_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .irqNum = I2CMST1_IRQn,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .base = I2C2,
    .clkID = CLK_I2C2,
    .clkGateID = CLK_I2C2_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .irqNum = I2CMST2_IRQn,
};
#endif

#ifdef HAL_I2S_MODULE_ENABLED
struct HAL_I2S_DEV g_i2s0Dev =
{
    .base = I2S0_BASE,
    .mclk = MCLK_I2S8CH,
    .hclk = HCLK_I2S_8CH_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(I2S0->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S0_RX,
        .dmac = DMA,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(I2S0->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S0_TX,
        .dmac = DMA,
    },
};

HAL_Status BSP_I2S_Init(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}

HAL_Status BSP_I2S_DeInit(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .reg = PDM0,
    .mclk = MCLK_PDM0,
#ifdef IS_FPGA
    .mclkRate = PDM_FPGA_CLK_RATE,
#else
    .mclkRate = PDM_CLK_RATE,
#endif
    .hclk = HCLK_PDM0_GATE,
    .reset = SRST_M_PDM0,
    .rxDmaData =
    {
        .addr = (uint32_t)&(PDM0->RXFIFO_DATA_REG),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_PDM0,
        .dmac = DMA,
    },
};

HAL_Status BSP_PDM_Init(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}

HAL_Status BSP_PDM_DeInit(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}
#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev =
{
    .reg = DMA,
    .peripReqType = BURST,
    .irq[0] = DMAC_IRQn,
    .irq[1] = DMAC_ABORT_IRQn,
};

static HAL_Status BSP_PL330_Init(void)
{
    switch (g_pl330Dev.peripReqType) {
    case SINGLE:
        /* config all dma reqs type as single req mode */
        GRF->DMAC_CON[5] = 0xffff0000;
        GRF->DMAC_CON[6] = 0xffff0000;
        break;
    case BURST:
        /* config all dma reqs type as burst req mode */
        GRF->DMAC_CON[5] = 0xffff5555;
        GRF->DMAC_CON[6] = 0xffff5555;
        break;
    default:

        return HAL_ERROR;
    }

    return HAL_OK;
}

static HAL_Status BSP_PL330_DeInit(void)
{
    return HAL_OK;
}
#endif

#ifdef HAL_PWM_MODULE_ENABLED
const struct HAL_PWM_DEV g_pwm0Dev =
{
    .base = PWM0,
    .clkID = CLK_PWM,
    .clkGateID = CLK_PWM_GATE,
    .pclkGateID = PCLK_PWM_GATE,
    .irqNum = PWM_IRQn,
};
#endif

#ifdef HAL_VAD_MODULE_ENABLED
struct HAL_VAD_DEV g_vadDev =
{
    .base = VAD_BASE,
    .hclk = HCLK_VAD_GATE,
    .irq = VAD_IRQn,
};

HAL_Status BSP_VAD_Init(void)
{
    /* CLK Init */

    return HAL_OK;
}

HAL_Status BSP_VAD_DeInit(void)
{
    /* CLK Init */

    return HAL_OK;
}
#endif

#if defined(HAL_PINCTRL_MODULE_ENABLED)
static struct PINCTRL_BANK_INFO pinBanks[] = {
    PIN_BANK_CFG_FLAGS(GPIO_BANK0, 32, GRF_BASE,
                       0x0000, 4, 4,
                       0x0080, 2, 8,
                       0x00c0, 2, 8,
                       0x0040, 1, 16,
                       0x0060, 1, 16),
    PIN_BANK_CFG_FLAGS(GPIO_BANK1, 32, GRF_BASE,
                       0x0020, 4, 4,
                       0x0090, 2, 8,
                       0x00d0, 2, 8,
                       0x0048, 1, 16,
                       0x0068, 1, 16),
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
    .sclkGateID = CLK_UART0_GATE,
    .pclkGateID = PCLK_UART0_GATE,
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
    .isAutoFlow = false,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .base = UART2,
    .sclkID = CLK_UART2,
    .sclkGateID = CLK_UART2_GATE,
    .pclkGateID = PCLK_UART2_GATE,
    .irqNum = UART2_IRQn,
    .isAutoFlow = true,
};
#endif

void BSP_DeInit(void)
{
#ifdef HAL_AUDIOPWM_MODULE_ENABLED
    BSP_AUDIOPWM_DeInit();
#endif

#ifdef HAL_I2S_MODULE_ENABLED
    BSP_I2S_DeInit();
#endif

#ifdef HAL_PDM_MODULE_ENABLED
    BSP_PDM_DeInit();
#endif

#ifdef HAL_VAD_MODULE_ENABLED
    BSP_VAD_DeInit();
#endif

#ifdef HAL_PL330_MODULE_ENABLED
    BSP_PL330_DeInit();
#endif
}

void BSP_Init(void)
{
#ifdef HAL_PL330_MODULE_ENABLED
    BSP_PL330_Init();
#endif

#ifdef HAL_AUDIOPWM_MODULE_ENABLED
    BSP_AUDIOPWM_Init();
#endif

#ifdef HAL_I2S_MODULE_ENABLED
    BSP_I2S_Init();
#endif

#ifdef HAL_PDM_MODULE_ENABLED
    BSP_PDM_Init();
#endif

#ifdef HAL_VAD_MODULE_ENABLED
    BSP_VAD_Init();
#endif
}
