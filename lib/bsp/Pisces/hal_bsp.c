/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_bsp.h"

#ifdef HAL_ACDCDIG_MODULE_ENABLED
struct HAL_ACDCDIG_DEV g_acdcDigDev =
{
    .pReg = ACDCDIG,
    .hclk = PCLK_ACDC_DIG_GATE,
    .pd = PD_AUDIO,
};

static HAL_Status BSP_ACDCDIG_Init(void)
{
    /* codec adc enable(analog mic) */
    GRF->SOC_CON2 = HAL_BIT(2) << 16 | HAL_BIT(2);

    return HAL_OK;
}

static HAL_Status BSP_ACDCDIG_DeInit(void)
{
    return HAL_OK;
}
#endif

#ifdef HAL_I2C_MODULE_ENABLED
const struct HAL_I2C_DEV g_i2c0Dev =
{
    .pReg = I2C0,
    .clkID = CLK_I2C0,
    .clkGateID = CLK_I2C0_GATE,
    .pclkGateID = PCLK_I2C0_GATE,
    .irqNum = I2CMST0_IRQn,
    .runtimeID = PM_RUNTIME_ID_I2C0,
};

const struct HAL_I2C_DEV g_i2c1Dev =
{
    .pReg = I2C1,
    .clkID = CLK_I2C1,
    .clkGateID = CLK_I2C1_GATE,
    .pclkGateID = PCLK_I2C1_GATE,
    .irqNum = I2CMST1_IRQn,
    .runtimeID = PM_RUNTIME_ID_I2C1,
};

const struct HAL_I2C_DEV g_i2c2Dev =
{
    .pReg = I2C2,
    .clkID = CLK_I2C2,
    .clkGateID = CLK_I2C2_GATE,
    .pclkGateID = PCLK_I2C2_GATE,
    .irqNum = I2CMST2_IRQn,
    .runtimeID = PM_RUNTIME_ID_I2C2,
};
#endif

#ifdef HAL_I2STDM_MODULE_ENABLED
struct HAL_I2STDM_DEV g_i2sTdm0Dev =
{
    .pReg = I2STDM0,
    .mclkTx = I2S_MCLKOUT,
    .mclkTxGate = CLK_I2S8CH_GATE,
    .mclkRx = I2S_MCLKOUT,
    .mclkRxGate = CLK_I2S8CH_GATE,
    .hclk = HCLK_I2S_8CH_GATE,
    .pd = PD_AUDIO,
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

static HAL_Status BSP_I2STDM_Init(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}

static HAL_Status BSP_I2STDM_DeInit(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .pReg = PDM0,
    .mclk = MCLK_PDM0,
    .mclkGate = MCLK_PDM0_GATE,
#ifdef IS_FPGA
    .mclkRate = PDM_FPGA_CLK_RATE,
#else
    .mclkRate = PDM_CLK_RATE,
#endif
    .hclk = HCLK_PDM0_GATE,
    .pd = PD_AUDIO,
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

static HAL_Status BSP_PDM_Init(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}

static HAL_Status BSP_PDM_DeInit(void)
{
    /* CLK Init */

    /* IO Init */
    return HAL_OK;
}
#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev =
{
    .pReg = DMA,
    .peripReqType = BURST,
    .irq[0] = DMAC_IRQn,
    .irq[1] = DMAC_ABORT_IRQn,
    .pd = PD_AUDIO,
};

static HAL_Status BSP_PL330_Init(void)
{
    switch (g_pl330Dev.peripReqType) {
    case SINGLE:
        /* config all dma reqs type as single req mode */
        GRF->DMAC_CON5 = 0xffff0000;
        GRF->DMAC_CON6 = 0xffff0000;
        break;
    case BURST:
        /* config all dma reqs type as burst req mode */
        GRF->DMAC_CON5 = 0xffff5555;
        GRF->DMAC_CON6 = 0xffff5555;
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

#ifdef HAL_VAD_MODULE_ENABLED
/* VAD_CONTROL[3:1]: voice source mapping */
const struct AUDIO_SRC_ADDR_MAP g_audioSrcAddrMaps[] =
{
    { 1, I2STDM0_BASE + 0x800 },
    { 2, PDM0_BASE + 0x400 },
    { /* sentinel */ }
};

struct HAL_VAD_DEV g_vadDev =
{
    .pReg = VAD,
    .hclk = HCLK_VAD_GATE,
    .pd = PD_AUDIO,
    .irq = VAD_IRQn,
};

static HAL_Status BSP_VAD_Init(void)
{
    /* CLK Init */

    return HAL_OK;
}

static HAL_Status BSP_VAD_DeInit(void)
{
    /* CLK Init */

    return HAL_OK;
}
#endif

#ifdef HAL_PINCTRL_MODULE_ENABLED
static const struct PINCTRL_BANK_INFO pinBanks[] = {
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

const struct HAL_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
};

static HAL_Status BSP_PINCTRL_Init(void)
{
    return HAL_OK;
}

static HAL_Status BSP_PINCTRL_DeInit(void)
{
    return HAL_OK;
}
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = CLK_UART0_GATE,
    .pclkGateID = PCLK_UART0_GATE,
    .irqNum = UART0_IRQn,
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART0,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .pReg = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = CLK_UART1_GATE,
    .pclkGateID = PCLK_UART1_GATE,
    .irqNum = UART1_IRQn,
    .isAutoFlow = false,
    .runtimeID = PM_RUNTIME_ID_UART1,
};
#endif

void BSP_DeInit(void)
{
#ifdef HAL_ACDCDIG_MODULE_ENABLED
    BSP_ACDCDIG_DeInit();
#endif

#ifdef HAL_I2STDM_MODULE_ENABLED
    BSP_I2STDM_DeInit();
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

#ifdef HAL_PINCTRL_MODULE_ENABLED
    BSP_PINCTRL_DeInit();
#endif
}

void BSP_Init(void)
{
    PMU->SFT_CON = 0x00010001;

#ifdef HAL_PINCTRL_MODULE_ENABLED
    BSP_PINCTRL_Init();
#endif

#ifdef HAL_ACDCDIG_MODULE_ENABLED
    BSP_ACDCDIG_Init();
#endif

#ifdef HAL_PL330_MODULE_ENABLED
    BSP_PL330_Init();
#endif

#ifdef HAL_I2STDM_MODULE_ENABLED
    BSP_I2STDM_Init();
#endif

#ifdef HAL_PDM_MODULE_ENABLED
    BSP_PDM_Init();
#endif

#ifdef HAL_VAD_MODULE_ENABLED
    BSP_VAD_Init();
#endif

#ifdef HAL_CRU_AS_FEATURE_ENABLED
    HAL_CRU_AsInit();
#endif
}
