/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

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

#ifdef HAL_PWR_MODULE_ENABLED
static struct PWR_DESC g_pmuPwrDev[] =
{
    {
        .flag = DESC_FLAG_LINEAR(PWR_CTRL_VOLT_SSPD | PWR_CTRL_VOLT_ST),
        .info = {
            .pwrId = PWR_ID_CORE,
        },
        PWR_DESC_REG_SHIFT_RUN(&PMU->LDO_CON[1], PMU_LDO_CON1_MCU_LDOCORE_SFT_SHIFT),
        PWR_DESC_REG_SHIFT_SSPD(&PMU->LDO_CON[1], PMU_LDO_CON1_PWRMODE_LDOCORE_ADJ_SHIFT),
        PWR_DESC_REG_SHIFT_ST(&PMU->LDO_STAT, PMU_LDO_STAT_LDO_CORE_ADJ_SHIFT),
        .voltMask = PMU_LDO_CON1_MCU_LDOCORE_SFT_MASK >> PMU_LDO_CON1_MCU_LDOCORE_SFT_SHIFT,
        PWR_DESC_LINEAR_VOLT(750000, 1100000, 50000),
    },
    {
        .flag = DESC_FLAG_LINEAR(PWR_CTRL_VOLT_SSPD | PWR_CTRL_VOLT_ST | PWR_CTRL_PWR_EN),
        .info = {
            .pwrId = PWR_ID_VCC_MIPI,
        },
        PWR_DESC_REG_SHIFT_RUN(&PMU->LDO_CON[1], PMU_LDO_CON1_MCU_LDOMIPI_SFT_SHIFT),
        PWR_DESC_REG_SHIFT_SSPD(&PMU->LDO_CON[1], PMU_LDO_CON1_PWRMODE_LDOMIPI_ADJ_SHIFT),
        PWR_DESC_REG_SHIFT_EN(&PMU->LDO_CON[0], PMU_LDO_CON0_LDO_AUDIO_EN_SHIFT),
        PWR_DESC_REG_SHIFT_ST(&PMU->LDO_STAT, PMU_LDO_STAT_LDO_MIPI_ADJ_SHIFT),
        .voltMask = PMU_LDO_CON1_MCU_LDOMIPI_SFT_MASK >> PMU_LDO_CON1_MCU_LDOMIPI_SFT_SHIFT,
        PWR_DESC_LINEAR_VOLT(750000, 1100000, 50000),
    },
    {
        .flag = DESC_FLAG_LINEAR(PWR_CTRL_PWR_EN),
        .info = {
            .pwrId = PWR_ID_VCC_AUDIO,
        },
        PWR_DESC_REG_SHIFT_RUN(&PMU->LDO_CON[0], PMU_LDO_CON0_LDO_AUDIO_SFT_SHIFT),
        PWR_DESC_REG_SHIFT_EN(&PMU->LDO_CON[0], PMU_LDO_CON0_LDO_AUDIO_EN_SHIFT),
        .voltMask = PMU_LDO_CON0_LDO_AUDIO_SFT_MASK >> PMU_LDO_CON0_LDO_AUDIO_SFT_SHIFT,
        PWR_DESC_LINEAR_VOLT(1500000, 1650000, 50000),
    },
    {
        .flag = DESC_FLAG_LINEAR(PWR_CTRL_VOLT_SSPD),
        .info = {
            .pwrId = PWR_ID_DSP_CORE,
        },
        PWR_DESC_REG_SHIFT_RUN(&PMU->LDO_CON[2], PMU_LDO_CON2_DSP_LDOCORE_SFT_SHIFT),
        PWR_DESC_REG_SHIFT_SSPD(&PMU->LDO_CON[2], PMU_LDO_CON2_DSPAPM_LDOCORE_ADJ_SHIFT),
        .voltMask = PMU_LDO_CON2_DSP_LDOCORE_SFT_MASK >> PMU_LDO_CON2_DSP_LDOCORE_SFT_SHIFT,
        PWR_DESC_LINEAR_VOLT(750000, 1100000, 50000),
    },
    {
        .flag = DESC_FLAG_LINEAR(PWR_CTRL_VOLT_SSPD),
        .info = {
            .pwrId = PWR_ID_DSP_VCC_MIPI,
        },
        PWR_DESC_REG_SHIFT_RUN(&PMU->LDO_CON[2], PMU_LDO_CON2_DSP_LDOMIPI_SFT_SHIFT),
        PWR_DESC_REG_SHIFT_SSPD(&PMU->LDO_CON[2], PMU_LDO_CON2_DSPAPM_LDOMIPI_ADJ_SHIFT),
        .voltMask = PMU_LDO_CON2_DSP_LDOMIPI_SFT_MASK >> PMU_LDO_CON2_DSP_LDOMIPI_SFT_SHIFT,
        PWR_DESC_LINEAR_VOLT(750000, 1100000, 50000),
    },
};
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
const struct HAL_GPIO_DEV g_GPIOxDev =
{
    .cnt = 2,
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
#ifdef HAL_I2S_MODULE_ENABLED
    BSP_I2S_DeInit();
#endif

#ifdef HAL_PDM_MODULE_ENABLED
    BSP_PDM_DeInit();
#endif

#ifdef HAL_VAD_MODULE_ENABLED
    BSP_VAD_DeInit();
#endif

#ifdef HAL_PWR_MODULE_ENABLED
    HAL_PWR_DeInit();
#endif
}

void BSP_Init(void)
{
#ifdef HAL_PWR_MODULE_ENABLED
    HAL_PWR_Init(&g_pmuPwrDev[0], HAL_ARRAY_SIZE(g_pmuPwrDev));
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
