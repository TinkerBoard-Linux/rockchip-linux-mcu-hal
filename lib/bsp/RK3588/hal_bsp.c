/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#if defined(HAL_CRU_MODULE_ENABLED)
static struct CRU_BANK_INFO cruBanks[] = {
    CRU_BANK_CFG_FLAGS(CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PHPTOPCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(SECURECRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(SBUSCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PMU1SCRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PMU1CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR0CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR1CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR2CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DDR3CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(BIGCORE0CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(BIGCORE1CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(DSUCRU_BASE, 0x300, 0x800, 0xa00),
};

const struct HAL_CRU_DEV g_cruDev = {
    .banks = cruBanks,
    .banksNum = HAL_ARRAY_SIZE(cruBanks),
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = CLK_UART0,
    .irqNum = 390,            // 363 + 27(NUM_INTERRUPTS)
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART0,
};
const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .sclkID = CLK_UART2,
    .irqNum = 392,           // 365 + 27(NUM_INTERRUPTS)
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART2,
};
#endif

#ifdef HAL_PCIE_MODULE_ENABLED
const struct HAL_PHY_SNPS_PCIE3_DEV g_phy_pcie3Dev =
{
    .phyMode = PHY_MODE_PCIE_AGGREGATION,
};

struct HAL_PCIE_DEV g_pcieDev =
{
    .apbBase = PCIE3_4L_APB_BASE,
    .dbiBase = PCIE3_4L_DBI_BASE,
    .cfgBase = 0xF0000000,
    .lanes = 4,
    .gen = 3,
    .firstBusNo = 0,
    .phy = (void *)&g_phy_pcie3Dev,
};
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .pReg = PDM0,
    .mclk = MCLK_PDM0,
    .mclkGate = MCLK_PDM0_GATE,
    .mclkRate = PDM_CLK_RATE,
    .hclk = HCLK_PDM0_GATE,
    .reset = SRST_RESETN_PDM0,
    .rxDmaData =
    {
        .addr = (uint32_t)&(PDM0->RXFIFO_DATA_REG),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_PDM0,
        .dmac = DMA0,
    },
};
#endif

#ifdef HAL_VAD_MODULE_ENABLED
/* VAD_CONTROL[3:1]: voice source mapping */
const struct AUDIO_SRC_ADDR_MAP g_audioSrcAddrMaps[] =
{
    { 0, PDM0_BASE + 0x400 },
    { /* sentinel */ }
};

struct HAL_VAD_DEV g_vadDev =
{
    .pReg = VAD,
    .hclk = HCLK_VAD_GATE,
    .pd = PD_AUDIO,
    .irq = VAD_IRQn,
};
#endif

void BSP_Init(void)
{
}

void BSP_SetLoaderFlag(void)
{
}
