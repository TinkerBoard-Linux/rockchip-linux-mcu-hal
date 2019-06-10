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
        .dmac = DMA_BASE,
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
        .dmac = DMA_BASE,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(I2S0->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_I2S0_TX,
        .dmac = DMA_BASE,
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
    .base = PDM0_BASE,
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
        .dmac = DMA_BASE,
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

#ifdef HAL_GPIO_MODULE_ENABLED
const struct HAL_GPIO_DEV g_GPIOxDev =
{
    .cnt = GPIO_BANK_NUM,
    .desc[0] = {
        .base = GPIO0_BASE,
        .irqn = GPIO0_IRQn,
        .name = "gpio0",
        .handler = (void *)&HAL_GPIO0_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0000,
            .slr = GRF_BASE + 0x0040,
            .smt = GRF_BASE + 0x0060,
            .pul = GRF_BASE + 0x0080,
            .drv = GRF_BASE + 0x00c0,
        },
    },
    .desc[1] = {
        .base = GPIO1_BASE,
        .irqn = GPIO1_IRQn,
        .name = "gpio1",
        .handler = (void *)&HAL_GPIO1_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0010,
            .slr = GRF_BASE + 0x0048,
            .smt = GRF_BASE + 0x0068,
            .pul = GRF_BASE + 0x0090,
            .drv = GRF_BASE + 0x00d0,
        },
    },
    .muxInfo = {
        .bitsPerPin = 4,
        .pinsPerReg = 4,
    },
    .slrInfo = {
        .bitsPerPin = 1,
        .pinsPerReg = 16,
    },
    .smtInfo = {
        .bitsPerPin = 0,
        .pinsPerReg = 0,
    },
    .pulInfo = {
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    },
    .drvInfo = {
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    }
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
}

void BSP_Init(void)
{
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
