/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

#include "hal_conf.h"

/* IO definitions (access restrictions to peripheral registers) */
#ifdef __cplusplus
  #define   __I     volatile             /*!< brief Defines 'read only' permissions */
#else
  #define   __I     volatile const       /*!< brief Defines 'read only' permissions */
#endif
#define     __O     volatile             /*!< brief Defines 'write only' permissions */
#define     __IO    volatile             /*!< brief Defines 'read / write' permissions */

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_SPI0_TX  = 0,
    DMA_REQ_SPI0_RX  = 1,
    DMA_REQ_SPI1_TX  = 2,
    DMA_REQ_SPI1_RX  = 3,
    DMA_REQ_UART0_TX = 4,
    DMA_REQ_UART0_RX = 5,
    DMA_REQ_UART1_TX = 6,
    DMA_REQ_UART1_RX = 7,
    DMA_REQ_UART2_TX = 8,
    DMA_REQ_UART2_RX = 9,
    DMA_REQ_UART3_TX = 10,
    DMA_REQ_UART3_RX = 11,
    DMA_REQ_I2S_8CH_0_TX  = 0,
    DMA_REQ_I2S_8CH_0_RX  = 1,
    DMA_REQ_I2S_8CH_1_TX  = 2,
    DMA_REQ_I2S_8CH_1_RX  = 3,
    DMA_REQ_I2S_8CH_2_TX  = 4,
    DMA_REQ_I2S_8CH_2_RX  = 5,
    DMA_REQ_I2S_8CH_3_TX  = 6,
    DMA_REQ_I2S_8CH_3_RX  = 7,
    DMA_REQ_I2S_2CH_0_TX  = 8,
    DMA_REQ_I2S_2CH_0_RX  = 9,
    DMA_REQ_I2S_2CH_1_TX  = 10,
    DMA_REQ_I2S_2CH_1_RX  = 11,
    DMA_REQ_PDM0_RX  = 12,
    DMA_REQ_SPIDF_TX = 13,
    DMA_REQ_SPIDF_RX = 14,
    DMA_REQ_PWM0_RX  = 15,
    DMA_REQ_SPI2_TX  = 16,
    DMA_REQ_SPI2_RX  = 17,
    DMA_REQ_UART4_TX = 18,
    DMA_REQ_UART4_RX = 19,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
/******  Platform Exceptions Numbers ***************************************************/
  DMAC0_IRQn              = 32,       /*!< CAN0 Interrupt              */
  DMAC0_ABORT_IRQn        = 33,       /*!< CAN1 Interrupt              */
  DMAC1_IRQn              = 34,       /*!< CAN2 Interrupt              */
  DMAC1_ABORT_IRQn        = 35,       /*!< DMAC0 Abort Interrupt       */
  PWM1_IRQn               = 36,       /*!< DMAC0 Interrupt             */
  PWM1_PWR_IRQn           = 37,       /*!< DMAC1 Abort Interrupt       */
  PWM2_IRQn               = 38,       /*!< DMAC1 Interrupt             */
  PWM2_PWR_IRQn           = 39,       /*!< GMAC0 Interrupt             */
  DDR_PCTL_IRQn           = 40,       /*!< GMAC1 Interrupt             */
  DDR_MON_IRQn            = 41,       /*!< GPIO0 Interrupt             */
  WDT0_IRQn               = 42,       /*!< GPIO1 Interrupt             */
  I2C0_IRQn               = 43,       /*!< GPIO2 Interrupt             */
  I2C1_IRQn               = 44,       /*!< GPIO3 Interrupt             */
  I2C2_IRQn               = 45,       /*!< GPIO4 Interrupt             */
  I2C3_IRQn               = 46,       /*!< I2C0 Interrupt              */
  SPI0_IRQn               = 47,       /*!< I2C1 Interrupt              */
  SPI1_IRQn               = 48,       /*!< I2C2 Interrupt              */
  SPI2_IRQn               = 49,       /*!< I2C3 Interrupt              */
  UART0_IRQn              = 50,       /*!< I2C4 Interrupt              */
  UART1_IRQn              = 51,       /*!< I2C5 Interrupt              */
  UART2_IRQn              = 53,       /*!< FSPI Interrupt              */
  UART3_IRQn              = 53,       /*!< SPI0 Interrupt              */
  UART4_IRQn              = 54,       /*!< SPI1 Interrupt              */
  PWM0_IRQn               = 55,       /*!< SPI2 Interrupt              */
  PWM0_PWR_IRQn           = 56,       /*!< SPI3 Interrupt              */
  TIMER0_IRQn             = 57,       /*!< TIMER0 Interrupt            */
  TIMER1_IRQn             = 58,       /*!< TIMER1 Interrupt            */
  TIMER2_IRQn             = 59,       /*!< TIMER2 Interrupt            */
  TIMER3_IRQn             = 60,       /*!< TIMER3 Interrupt            */
  TIMER4_IRQn             = 61,       /*!< TIMER4 Interrupt            */
  TIMER5_IRQn             = 62,       /*!< TIMER5 Interrupt            */
  TIMER6_IRQn             = 63,       /*!< UART0  Interrupt            */
  TIMER7_IRQn             = 64,       /*!< UART1  Interrupt            */
  TIMER8_IRQn             = 65,       /*!< UART2  Interrupt            */
  TIMER9_IRQn             = 66,       /*!< UART3  Interrupt            */
  TIMER10_IRQn            = 67,       /*!< UART4  Interrupt            */
  TIMER11_IRQn            = 68,       /*!< UART5  Interrupt            */
  SARADC_IRQn             = 69,       /*!< UART6  Interrupt            */
  TSADC_IRQn              = 70,       /*!< UART7  Interrupt            */
  GPIO0_IRQn              = 72,       /*!< UART8  Interrupt            */
  GPIO1_IRQn              = 73,       /*!< UART9  Interrupt            */
  GPIO2_IRQn              = 74,       /*!< WDT0  Interrupt             */
  GPIO3_IRQn              = 75,       /*!< DDR ECC correctable fault Interrupt */
  GPIO4_IRQn              = 76,       /*!< DDR ECC uncorrectable fault Interrupt */
  CRYPTO_IRQn             = 77,       /*!< MBOX0 CH0 A2B Interrupt     */
  VOP_IRQn                = 78,       /*!< MBOX0 CH1 A2B Interrupt     */
  I2S_8CH_0_IRQn          = 80,       /*!< MBOX0 CH2 A2B Interrupt     */
  I2S_8CH_1_IRQn          = 81,       /*!< MBOX0 CH3 A2B Interrupt     */
  I2S_8CH_2_IRQn          = 82,       /*!< MBOX0 CH0 B2A Interrupt     */
  I2S_8CH_3_IRQn          = 83,       /*!< MBOX0 CH1 B2A Interrupt     */
  I2S_2CH_0_IRQn          = 84,       /*!< MBOX0 CH2 B2A Interrupt     */
  I2S_2CH_1_IRQn          = 85,       /*!< MBOX0 CH3 B2A Interrupt     */
  PDM0_IRQn               = 86,       /*!< CPU1 L1-L2 CACHE ECC FAULT Interrupt */
  SPDIF_TX_IRQn           = 87,       /*!< CPU2 L1-L2 CACHE ECC FAULT Interrupt */
  SPDIF_RX_IRQn           = 88,       /*!< CPU3 L1-L2 CACHE ECC FAULT Interrupt */
  VAD_IRQn                = 89,       /*!< DSU L3 CACHE ECC ERROR Interrupt */
  OWIRE_IRQn              = 90,       /*!< CPU0 L1-L2 CACHE ECC ERROR Interrupt */
  CAN0_IRQn               = 91,       /*!< CPU1 L1-L2 CACHE ECC ERROR Interrupt */
  SFC_IRQn                = 114,
  RSVD0_IRQn              = 148,      /*!< RSVD0  Interrupt            */
} IRQn_Type;

#define RSVD_IRQn(_N)               (RSVD0_IRQn + (_N))

#define AMP_CPUOFF_REQ_IRQ(cpu)     RSVD_IRQn(12 + (cpu)) /* gic irq: 160 */

#define GPIO_IRQ_GROUP_DIRQ_BASE    RSVD_IRQn(52) /* gic irq:  200 */
#define GPIO_IRQ_GROUP_DIRQ_NUM     (NUM_INTERRUPTS - GPIO_IRQ_GROUP_DIRQ_BASE)

#define GPIO_IRQ_GROUP_GPIO0_HWIRQ  GPIO0_IRQn
#define GPIO_IRQ_GROUP_GPION_HWIRQ  GPIO4_IRQn

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define __CORTEX_A           35U          /* Cortex-A35 Core                          */
#define __FPU_PRESENT         1U          /* FPU present                              */

#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */
#ifdef __CORTEX_A
#include "core_ca.h"
#endif
#include "system_rk3308.h"
#endif /* __ASSEMBLY__ */
#include "rk3308.h"

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define GIC_DISTRIBUTOR_BASE    0xFF580000 /* GIC Dist base address */
#define GIC_CPU_BASE            0xFF581000 /* GIC CPU interface base address */

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/********************************** CPU Topology ****************************************/
#define MPIDR_MT_MASK       ((1U) << 24)
#define MPIDR_AFFLVL_MASK   (0xFFU)
#define MPIDR_AFF0_SHIFT    (0U)
#define MPIDR_AFF1_SHIFT    (8U)
#define MPIDR_AFF2_SHIFT    (16U)
#define MPIDR_AFFINITY_MASK (0xFFFFFFU)
#define PLATFORM_CLUSTER0_CORE_COUNT (4)
#define PLATFORM_CLUSTER1_CORE_COUNT (0)
#define PLATFORM_CORE_COUNT PLATFORM_CLUSTER0_CORE_COUNT
#define CPU_GET_AFFINITY(cpuId, clusterId) ((cpuId) << MPIDR_AFF1_SHIFT)

/******************************************CRU*******************************************/
#define PLL_INPUT_OSC_RATE (24 * 1000 * 1000)

#define CRU_SRST_CON_CNT    29
#define CRU_GATE_CON_CNT    35
#define CRU_CLK_DIV_CON_CNT 84
#define CRU_CLK_SEL_CON_CNT 84

#define CLK(mux, div) \
    (((mux) & 0x0F0F00FFU) | (((div) & 0xFFU) << 8) | (((div) & 0x0F0F0000U) << 4))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_APLL,
    PLL_CPLL,
    PLL_GPLL,
    PLL_NPLL,
    PLL_VPLL,
    PLL_PPLL,
    PLL_HPLL,
    CLK_WDT,
} eCLOCK_Name;
#endif

/****************************************GRF*********************************************/
#define GRF_IOMUX_BIT_PER_PIN	(2)
#define GRF_DS_BIT_PER_PIN	(8)
#define GRF_PULL_BIT_PER_PIN	(2)
/****************************************GPIO********************************************/
#ifdef GPIO_VER_ID
#undef GPIO_VER_ID
#define GPIO_VER_ID             (0x01000C2BU)
#endif
/****************************************PMU*********************************************/
#ifndef __ASSEMBLY__
typedef enum PD_Id {
    PD_UNKOWN,
} ePD_Id;
#endif
/****************************************FSPI********************************************/
#define FSPI_CHIP_CNT                            (1)

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
