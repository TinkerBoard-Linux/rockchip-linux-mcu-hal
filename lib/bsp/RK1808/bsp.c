/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

#ifdef HAL_I2S_MODULE_ENABLED
struct HAL_I2S_DEV g_i2s0Dev =
{
    .base = I2S0_BASE,
    .mclk = CLK_I2S0_TX,
    .hclk = HCLK_I2S0_GATE,
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
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .reg = PDM0,
    .mclk = CLK_PDM,
    .mclkRate = CLK_PDM_CLK_GATE,
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
    .base = VAD_BASE,
    .hclk = HCLK_VAD_GATE,
    .irq = VAD_IRQn,
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
