/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"

#if defined(HAL_CRU_MODULE_ENABLED)
static struct CRU_BANK_INFO cruBanks[] = {
    CRU_BANK_CFG_FLAGS(CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(PMU_CRU_BASE, 0x300, 0x800, 0xa00),
    CRU_BANK_CFG_FLAGS(SCRU_BASE, 0x0, 0x40, 0x80),
};

const struct HAL_CRU_DEV g_cruDev = {
    .banks = cruBanks,
    .banksNum = HAL_ARRAY_SIZE(cruBanks),
};
#endif

#ifdef HAL_CANFD_MODULE_ENABLED
const struct HAL_CANFD_DEV g_can0Dev =
{
    .pReg = CAN,
    .sclkID = CLK_CAN,
    .sclkGateID = CLK_CAN_GATE,
    .pclkGateID = PCLK_CAN_GATE,
    .irqNum = CAN_IRQn,
};
#endif

#ifdef HAL_FSPI_MODULE_ENABLED
struct HAL_FSPI_HOST g_fspi0Dev =
{
    .instance = FSPI0,
    .sclkGate = 0,
    .hclkGate = 0,
    .xipClkGate = 0,
    .sclkID = SCLK_SFC,
    .irqNum = FSPI_IRQn,
    .xipMemCode = XIP_MAP0_BASE0,
    .xipMemData = XIP_MAP0_BASE0,
    .xmmcDev[0] =
    {
        .type = DEV_NOR,
    },
};
#endif

#ifdef HAL_GMAC_MODULE_ENABLED
const struct HAL_GMAC_DEV g_gmac0Dev =
{
    .pReg = GMAC,
    .clkID125M = CLK_MAC_OUT,
    .clkID50M = CLK_MAC_OUT,
    .clkGateID125M = CLK_MAC_OUT_GATE,
    .clkGateID50M = CLK_MAC_OUT_GATE,
    .pclkID = ACLK_HSPERI,
    .pclkGateID = PCLK_MAC_GATE,
    .irqNum = MAC_SBD_IRQn,
};
#endif

#ifdef HAL_PDM_MODULE_ENABLED
struct HAL_PDM_DEV g_pdm0Dev =
{
    .pReg = PDM,
    .mclkRate = 2048000,
    .gain = 0xaf,
    .rxDmaData =
    {
        .addr = (uint32_t)&(PDM->RXFIFO_DATA_REG),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA1_REQ_AUDIO0_PDM_RX,
        .dmac = DMA1,
    },
};
#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev0 =
{
    .pReg = DMA0,
    .peripReqType = BURST,
    .irq[0] = DMAC0_BUS_CH0_IRQn,
    .irq[1] = DMAC0_BUS_CH1_IRQn,
    .irq[2] = DMAC0_BUS_CH2_IRQn,
    .irq[3] = DMAC0_BUS_CH3_IRQn,
    .irq[4] = DMAC0_BUS_CH4_IRQn,
    .irq[5] = DMAC0_BUS_CH5_IRQn,
    .irq[6] = DMAC0_BUS_CH6_IRQn,
    .irq[7] = DMAC0_BUS_CH7_IRQn,
    .irq[8] = DMAC0_BUS_ABORT_IRQn,
    .pd = 0,
};

struct HAL_PL330_DEV g_pl330Dev1 =
{
    .pReg = DMA1,
    .peripReqType = BURST,
    .irq[0] = DMAC1_AUDIO0_CH0_IRQn,
    .irq[1] = DMAC1_AUDIO0_CH1_IRQn,
    .irq[2] = DMAC1_AUDIO0_CH2_IRQn,
    .irq[3] = DMAC1_AUDIO0_CH3_IRQn,
    .irq[4] = DMAC1_AUDIO0_CH4_IRQn,
    .irq[5] = DMAC1_AUDIO0_CH5_IRQn,
    .irq[6] = DMAC1_AUDIO0_CH6_IRQn,
    .irq[7] = DMAC1_AUDIO0_CH7_IRQn,
    .irq[8] = DMAC1_AUDIO0_ABORT_IRQn,
    .pd = 0,
};

struct HAL_PL330_DEV g_pl330Dev2 =
{
    .pReg = DMA2,
    .peripReqType = BURST,
    .irq[0] = DMAC2_AUDIO0_CH0_IRQn,
    .irq[1] = DMAC2_AUDIO0_CH1_IRQn,
    .irq[2] = DMAC2_AUDIO0_CH2_IRQn,
    .irq[3] = DMAC2_AUDIO0_CH3_IRQn,
    .irq[4] = DMAC2_AUDIO0_CH4_IRQn,
    .irq[5] = DMAC2_AUDIO0_CH5_IRQn,
    .irq[6] = DMAC2_AUDIO0_CH6_IRQn,
    .irq[7] = DMAC2_AUDIO0_CH7_IRQn,
    .irq[8] = DMAC2_AUDIO0_ABORT_IRQn,
    .pd = 0,
};

struct HAL_PL330_DEV g_pl330Dev3 =
{
    .pReg = DMA3,
    .peripReqType = BURST,
    .irq[0] = DMAC3_AUDIO1_CH0_IRQn,
    .irq[1] = DMAC3_AUDIO1_CH1_IRQn,
    .irq[2] = DMAC3_AUDIO1_CH2_IRQn,
    .irq[3] = DMAC3_AUDIO1_CH3_IRQn,
    .irq[4] = DMAC3_AUDIO1_CH4_IRQn,
    .irq[5] = DMAC3_AUDIO1_CH5_IRQn,
    .irq[6] = DMAC3_AUDIO1_CH6_IRQn,
    .irq[7] = DMAC3_AUDIO1_CH7_IRQn,
    .irq[8] = DMAC3_AUDIO1_ABORT_IRQn,
    .pd = 0,
};

struct HAL_PL330_DEV g_pl330Dev4 =
{
    .pReg = DMA4,
    .peripReqType = BURST,
    .irq[0] = DMAC4_AUDIO1_CH0_IRQn,
    .irq[1] = DMAC4_AUDIO1_CH1_IRQn,
    .irq[2] = DMAC4_AUDIO1_CH2_IRQn,
    .irq[3] = DMAC4_AUDIO1_CH3_IRQn,
    .irq[4] = DMAC4_AUDIO1_CH4_IRQn,
    .irq[5] = DMAC4_AUDIO1_CH5_IRQn,
    .irq[6] = DMAC4_AUDIO1_CH6_IRQn,
    .irq[7] = DMAC4_AUDIO1_CH7_IRQn,
    .irq[8] = DMAC4_AUDIO1_ABORT_IRQn,
    .pd = 0,
};
#endif

#ifdef HAL_PWM_MODULE_ENABLED
const struct HAL_PWM_DEV g_pwm0Dev =
{
    .pReg = PWM0,
    .clkID = CLK_PWM0,
    .clkGateID = CLK_PWM0_GATE,
    .pclkGateID = PCLK_PWM0_GATE,
    .irqNum[0] = PWM0_CH0_IRQn,
    .irqNum[1] = PWM0_CH1_IRQn,
    .irqNum[2] = PWM0_CH2_IRQn,
    .irqNum[3] = PWM0_CH3_IRQn,
};

const struct HAL_PWM_DEV g_pwm1Dev =
{
    .pReg = PWM1,
    .clkID = CLK_PWM1,
    .clkGateID = CLK_PWM1_GATE,
    .pclkGateID = PCLK_PWM1_GATE,
    .irqNum[0] = PWM1_CH0_IRQn,
    .irqNum[1] = PWM1_CH1_IRQn,
    .irqNum[2] = PWM1_CH2_IRQn,
    .irqNum[3] = PWM1_CH3_IRQn,
};
#endif

#ifdef HAL_SAI_MODULE_ENABLED
struct HAL_SAI_DEV g_sai0Dev =
{
    .pReg = SAI0,
    .mclk = SCLK_SAI0,
    .mclkGate = SCLK_SAI0_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI0->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA1_REQ_AUDIO0_SAI0_RX,
        .dmac = DMA1,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI0->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA1_REQ_AUDIO0_SAI0_TX,
        .dmac = DMA1,
    },
};

struct HAL_SAI_DEV g_sai1Dev =
{
    .pReg = SAI1,
    .mclk = SCLK_SAI1,
    .mclkGate = SCLK_SAI1_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI1->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA1_REQ_AUDIO0_SAI1_RX,
        .dmac = DMA1,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI1->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA1_REQ_AUDIO0_SAI1_TX,
        .dmac = DMA1,
    },
};

struct HAL_SAI_DEV g_sai2Dev =
{
    .pReg = SAI2,
    .mclk = SCLK_SAI2,
    .mclkGate = SCLK_SAI2_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI2->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA2_REQ_AUDIO0_SAI2_RX,
        .dmac = DMA2,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI2->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA2_REQ_AUDIO0_SAI2_TX,
        .dmac = DMA2,
    },
};

struct HAL_SAI_DEV g_sai3Dev =
{
    .pReg = SAI3,
    .mclk = SCLK_SAI3,
    .mclkGate = SCLK_SAI3_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI3->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA2_REQ_AUDIO0_SAI3_RX,
        .dmac = DMA2,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI3->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA2_REQ_AUDIO0_SAI3_TX,
        .dmac = DMA2,
    },
};

struct HAL_SAI_DEV g_sai4Dev =
{
    .pReg = SAI4,
    .mclk = SCLK_SAI4,
    .mclkGate = SCLK_SAI4_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI4->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA3_REQ_AUDIO1_SAI4_RX,
        .dmac = DMA3,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI4->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA3_REQ_AUDIO1_SAI4_TX,
        .dmac = DMA3,
    },
};

struct HAL_SAI_DEV g_sai5Dev =
{
    .pReg = SAI5,
    .mclk = SCLK_SAI5,
    .mclkGate = SCLK_SAI5_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI5->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA3_REQ_AUDIO1_SAI5_RX,
        .dmac = DMA3,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI5->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA3_REQ_AUDIO1_SAI5_TX,
        .dmac = DMA3,
    },
};

struct HAL_SAI_DEV g_sai6Dev =
{
    .pReg = SAI6,
    .mclk = SCLK_SAI6,
    .mclkGate = SCLK_SAI6_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI6->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA4_REQ_AUDIO1_SAI6_RX,
        .dmac = DMA4,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI6->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA4_REQ_AUDIO1_SAI6_TX,
        .dmac = DMA4,
    },
};

struct HAL_SAI_DEV g_sai7Dev =
{
    .pReg = SAI7,
    .mclk = SCLK_SAI7,
    .mclkGate = SCLK_SAI7_GATE,
    .bclkFs = 64,
    .rxDmaData =
    {
        .addr = (uint32_t)&(SAI7->RXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA4_REQ_AUDIO1_SAI7_RX,
        .dmac = DMA4,
    },
    .txDmaData =
    {
        .addr = (uint32_t)&(SAI7->TXDR),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA4_REQ_AUDIO1_SAI7_TX,
        .dmac = DMA4,
    },
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
const struct HAL_UART_DEV g_uart0Dev =
{
    .pReg = UART0,
    .sclkID = CLK_UART0,
    .sclkGateID = 0,
    .pclkGateID = 0,
    .irqNum = UART0_IRQn,
    .isAutoFlow = false,
    .runtimeID = PM_RUNTIME_ID_UART0,
};

const struct HAL_UART_DEV g_uart1Dev =
{
    .pReg = UART1,
    .sclkID = CLK_UART1,
    .sclkGateID = 0,
    .pclkGateID = 0,
    .irqNum = UART1_IRQn,
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART1,
};

const struct HAL_UART_DEV g_uart2Dev =
{
    .pReg = UART2,
    .sclkID = CLK_UART2,
    .sclkGateID = 0,
    .pclkGateID = 0,
    .irqNum = UART2_IRQn,
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART2,
};

const struct HAL_UART_DEV g_uart3Dev =
{
    .pReg = UART3,
    .sclkID = CLK_UART3,
    .sclkGateID = 0,
    .pclkGateID = 0,
    .irqNum = UART3_IRQn,
    .isAutoFlow = true,
    .runtimeID = PM_RUNTIME_ID_UART3,
};
#endif

__WEAK void BSP_MPU_Init(void)
{
}

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
    BSP_MPU_Init();
}

void BSP_SetLoaderFlag(void)
{
    //GRF->OS_REG0 = SYS_UPGRADE_FLAG;
}
