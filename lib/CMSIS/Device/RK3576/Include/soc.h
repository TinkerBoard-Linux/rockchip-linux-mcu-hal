/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

#include "hal_conf.h"

/* IO definitions (access restrictions to peripheral registers) */
#ifdef __cplusplus
  #define   __I     volatile             /*!< brief Defines 'read only' permissions    */
#else
  #define   __I     volatile const       /*!< brief Defines 'read only' permissions    */
#endif
#define     __O     volatile             /*!< brief Defines 'write only' permissions   */
#define     __IO    volatile             /*!< brief Defines 'read / write' permissions */

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_SAI0_TX = 0,
    DMA_REQ_SAI2_TX = 0,
    DMA_REQ_SAI4_TX = 0,
    DMA_REQ_SAI0_RX = 1,
    DMA_REQ_SAI2_RX = 1,
    DMA_REQ_SAI4_RX = 1,
    DMA_REQ_SAI1_TX = 2,
    DMA_REQ_SAI3_TX = 2,
    DMA_REQ_SAI1_RX = 3,
    DMA_REQ_SAI3_RX = 3,
    DMA_REQ_SAI5_RX = 3,
    DMA_REQ_PDM0 = 4,
    DMA_REQ_PDM1 = 4,
    DMA_REQ_SAI6_TX = 4,
    DMA_REQ_SPDIF_TX0 = 5,
    DMA_REQ_SPDIF_TX1 = 5,
    DMA_REQ_SAI6_RX = 5,
    DMA_REQ_UART0_TX = 6,
    DMA_REQ_SPDIF_TX4 = 6,
    DMA_REQ_UART7_TX = 6,
    DMA_REQ_UART0_RX = 7,
    DMA_REQ_SAI8_TX = 7,
    DMA_REQ_UART7_RX = 7,
    DMA_REQ_UART1_TX = 8,
    DMA_REQ_SPDIF_RX0 = 8,
    DMA_REQ_UART8_TX = 8,
    DMA_REQ_UART1_RX = 9,
    DMA_REQ_UART4_TX = 9,
    DMA_REQ_UART8_RX = 9,
    DMA_REQ_UART2_TX = 10,
    DMA_REQ_UART4_RX = 10,
    DMA_REQ_UART9_TX = 10,
    DMA_REQ_UART2_RX = 11,
    DMA_REQ_UART5_TX = 11,
    DMA_REQ_UART9_RX = 11,
    DMA_REQ_UART3_TX = 12,
    DMA_REQ_UART5_RX = 12,
    DMA_REQ_SPI4_TX = 12,
    DMA_REQ_UART3_RX = 13,
    DMA_REQ_UART6_TX = 13,
    DMA_REQ_SPI4_RX = 13,
    DMA_REQ_SPI0_TX = 14,
    DMA_REQ_UART6_RX = 14,
    DMA_REQ_SPI0_RX = 15,
    DMA_REQ_SPI2_TX = 15,
    DMA_REQ_SPI1_TX = 16,
    DMA_REQ_SPI2_RX = 16,
    DMA_REQ_SPDIF_RX1 = 16,
    DMA_REQ_SPI1_RX = 17,
    DMA_REQ_SPI3_TX = 17,
    DMA_REQ_ASRC_4CH0_RX = 17,
    DMA_REQ_SPI3_RX = 18,
    DMA_REQ_ASRC_4CH0_TX = 18,
    DMA_REQ_SAI7_TX = 19,
    DMA_REQ_CAN0_RX = 20,
    DMA_REQ_CAN1_RX = 21,
    DMA_REQ_UART10_TX = 21,
    DMA_REQ_I3C0_RX = 22,
    DMA_REQ_I3C1_RX = 22,
    DMA_REQ_UART10_RX = 22,
    DMA_REQ_I3C0_TX = 23,
    DMA_REQ_I3C1_TX = 23,
    DMA_REQ_UART11_TX = 23,
    DMA_REQ_I3C0_IBI = 24,
    DMA_REQ_I3C1_IBI = 24,
    DMA_REQ_UART11_RX = 24,
    DMA_REQ_SPDIF_TX5 = 25,
    DMA_REQ_ASRC_4CH1_RX = 25,
    DMA_REQ_SAI9_TX = 26,
    DMA_REQ_ASRC_4CH1_TX = 26,
    DMA_REQ_ASRC_2CH0_RX = 27,
    DMA_REQ_ASRC_2CH1_RX = 27,
    DMA_REQ_SPDIF_RX2 = 27,
    DMA_REQ_ASRC_2CH0_TX = 28,
    DMA_REQ_ASRC_2CH1_TX = 28,
    DMA_REQ_SPDIF_TX2 = 28,
    DMA_REQ_SPDIF_TX3 = 29,
    DMA_REQ_DSMC_DMA0 = 30,
    DMA_REQ_DSMC_DMA1 = 31,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
#ifdef HAL_MCU_CORE

#if defined(RKMCU_RK3576_BUS)

#define INTMUX_NUM_INT_PER_CON    416
#define INTMUX_NUM_OUT_PER_CON    13
#define INTMUX_NUM_INT_PER_OUT    32
#define INTMUX_NUM_GROUP_PER_OUT  1
#define INTMUX_NUM_GROUP_PER_CON  13
#define INTMUX_NUM_INT_PER_GROUP  32
/* INTMUX IRQ start from GIC irq num 64 */
#define INTMUX_IRQ_START_NUM      64
#define INTMUX_IRQ_OUT0
#define INTMUX_IRQ_OUT1
#define INTMUX_IRQ_OUT2
#define INTMUX_IRQ_OUT3
#define INTMUX_IRQ_OUT4
#define INTMUX_IRQ_OUT5
#define INTMUX_IRQ_OUT6
#define INTMUX_IRQ_OUT7
#define INTMUX_IRQ_OUT8
#define INTMUX_IRQ_OUT9
#define INTMUX_IRQ_OUT10
#define INTMUX_IRQ_OUT11
#define INTMUX_IRQ_OUT12
#define INTMUX_OUT_IRQ_START_NUM  16

#define NUM_EXT_INTERRUPTS        416

typedef enum {
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */

  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  GPIO0_EXP3_IRQn           =  0,      /*!< GPIO0 EXP3 Interrupt          */
  GPIO1_EXP3_IRQn           =  1,      /*!< GPIO1 EXP3 Interrupt          */
  GPIO2_EXP3_IRQn           =  2,      /*!< GPIO2 EXP3 Interrupt          */
  GPIO3_EXP3_IRQn           =  3,      /*!< GPIO3 EXP3 Interrupt          */
  GPIO4_EXP3_IRQn           =  4,      /*!< GPIO4 EXP3 Interrupt          */
  SARADC_IRQn               =  5,      /*!< SARADC Interrupt              */
  TIMER9_IRQn               =  6,      /*!< TIMER9 Interrupt              */
  TIMER10_IRQn              =  7,      /*!< TIMER10 Interrupt             */
  SPI4_IRQn                 =  8,      /*!< SPI4 Interrupt                */
  MBOX_BB0_IRQn             =  9,      /*!< MBOX_BB0 Interrupt            */
  MMC0_IRQn                 =  10,     /*!< MMC0 Interrupt                */
  DMAC2_IRQn                =  11,     /*!< DMAC2 Interrupt               */
  I2C3_IRQn                 =  12,     /*!< I2C3 Interrupt                */
  UART11_IRQn               =  13,     /*!< UART11 Interrupt              */
  PWM_CH14_IRQn             =  14,     /*!< PWM CH14 Interrupt            */
  FLEXBUS_IRQn              =  15,     /*!< FLEXBUS Interrupt             */
  INTMUX_OUT0_IRQn          =  16,     /*!< INTMUX OUT0 Interrupt         */
  INTMUX_OUT1_IRQn          =  17,     /*!< INTMUX OUT1 Interrupt         */
  INTMUX_OUT2_IRQn          =  18,     /*!< INTMUX OUT2 Interrupt         */
  INTMUX_OUT3_IRQn          =  19,     /*!< INTMUX OUT3 Interrupt         */
  INTMUX_OUT4_IRQn          =  20,     /*!< INTMUX OUT4 Interrupt         */
  INTMUX_OUT5_IRQn          =  21,     /*!< INTMUX OUT5 Interrupt         */
  INTMUX_OUT6_IRQn          =  22,     /*!< INTMUX OUT6 Interrupt         */
  INTMUX_OUT7_IRQn          =  23,     /*!< INTMUX OUT7 Interrupt         */
  INTMUX_OUT8_IRQn          =  24,     /*!< INTMUX OUT8 Interrupt         */
  INTMUX_OUT9_IRQn          =  25,     /*!< INTMUX OUT9 Interrupt         */
  INTMUX_OUT10_IRQn         =  26,     /*!< INTMUX OUT10 Interrupt        */
  INTMUX_OUT11_IRQn         =  27,     /*!< INTMUX OUT11 Interrupt        */
  INTMUX_OUT12_IRQn         =  28,     /*!< INTMUX OUT12 Interrupt        */
  GPIO0_EXP2_IRQn           =  29,     /*!< GPIO0 EXP2 Interrupt          */
  GPIO4_EXP1_IRQn           =  30,     /*!< GPIO4 EXP1 Interrupt          */
  GPIO4_EXP2_IRQn           =  31,     /*!< GPIO4 EXP2 Interrupt          */
  NUM_INTERRUPTS            =  32,     /*!< Number of internal IRQ        */
  TIMER0_IRQn               =  77 + NUM_INTERRUPTS,     /*!< TIMER0 Interrupt               */
  TIMER1_IRQn               =  78 + NUM_INTERRUPTS,     /*!< TIMER1 Interrupt               */
  TIMER2_IRQn               =  79 + NUM_INTERRUPTS,     /*!< TIMER2 Interrupt               */
  TIMER3_IRQn               =  80 + NUM_INTERRUPTS,     /*!< TIMER3 Interrupt               */
  TIMER4_IRQn               =  81 + NUM_INTERRUPTS,     /*!< TIMER4 Interrupt               */
  TIMER5_IRQn               =  82 + NUM_INTERRUPTS,     /*!< TIMER5 Interrupt               */
  TIMER6_IRQn               =  83 + NUM_INTERRUPTS,     /*!< TIMER6 Interrupt               */
  TIMER7_IRQn               =  84 + NUM_INTERRUPTS,     /*!< TIMER7 Interrupt               */
  TIMER8_IRQn               =  85 + NUM_INTERRUPTS,     /*!< TIMER8 Interrupt               */
  TIMER11_IRQn              =  88 + NUM_INTERRUPTS,     /*!< TIMER11 Interrupt              */
  UART0_IRQn                =  108 + NUM_INTERRUPTS,    /*!< UART0 Interrupt                */
  UART1_IRQn                =  109 + NUM_INTERRUPTS,    /*!< UART1 Interrupt                */
  UART2_IRQn                =  110 + NUM_INTERRUPTS,    /*!< UART2 Interrupt                */
  UART3_IRQn                =  111 + NUM_INTERRUPTS,    /*!< UART3 Interrupt                */
  UART4_IRQn                =  112 + NUM_INTERRUPTS,    /*!< UART4 Interrupt                */
  UART5_IRQn                =  113 + NUM_INTERRUPTS,    /*!< UART5 Interrupt                */
  UART6_IRQn                =  114 + NUM_INTERRUPTS,    /*!< UART6 Interrupt                */
  UART7_IRQn                =  115 + NUM_INTERRUPTS,    /*!< UART7 Interrupt                */
  UART8_IRQn                =  116 + NUM_INTERRUPTS,    /*!< UART8 Interrupt                */
  UART9_IRQn                =  117 + NUM_INTERRUPTS,    /*!< UART9 Interrupt                */
  UART10_IRQn               =  118 + NUM_INTERRUPTS,    /*!< UART10 Interrupt               */
  TOTAL_INTERRUPTS          =  (INTMUX_IRQ_START_NUM + NUM_INTERRUPTS + NUM_EXT_INTERRUPTS),
} IRQn_Type;

#elif defined(RKMCU_RK3576_PMU)

#define INTMUX_NUM_INT_PER_CON    416
#define INTMUX_NUM_OUT_PER_CON    13
#define INTMUX_NUM_INT_PER_OUT    32
#define INTMUX_NUM_GROUP_PER_OUT  1
#define INTMUX_NUM_GROUP_PER_CON  13
#define INTMUX_NUM_INT_PER_GROUP  32
/* INTMUX IRQ start from GIC irq num 64 */
#define INTMUX_IRQ_START_NUM      64
#define INTMUX_IRQ_OUT0
#define INTMUX_IRQ_OUT1
#define INTMUX_IRQ_OUT2
#define INTMUX_IRQ_OUT3
#define INTMUX_IRQ_OUT4
#define INTMUX_IRQ_OUT5
#define INTMUX_IRQ_OUT6
#define INTMUX_IRQ_OUT7
#define INTMUX_IRQ_OUT8
#define INTMUX_IRQ_OUT9
#define INTMUX_IRQ_OUT10
#define INTMUX_IRQ_OUT11
#define INTMUX_IRQ_OUT12
#define INTMUX_OUT_IRQ_START_NUM  14

#define NUM_EXT_INTERRUPTS        416

typedef enum {
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */

  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  GPIO0_EXP0_IRQn           =  0,      /*!< GPIO0 EXP0 Interrupt          */
  I2C0_IRQn                 =  1,      /*!< I2C0 Interrupt                */
  VAD_IRQn                  =  2,      /*!< VAD Interrupt                 */
  PWM_CH0_IRQn              =  3,      /*!< PWM CH0 Interrupt             */
  PWM_CH1_IRQn              =  4,      /*!< PWM CH1 Interrupt             */
  PMU_WDT_IRQn              =  5,      /*!< PMU WDT Interrupt             */
  PMU_TIMER1_IRQn           =  6,      /*!< PMU TIMER1 Interrupt          */
  PMU_TIMER0_IRQn           =  7,      /*!< PMU TIMER0 Interrupt          */
  SDMMC_DETECT_IRQn         =  8,      /*!< SDMMC DETECT Interrupt        */
  UART1_IRQn                =  9,      /*!< UART1 Interrupt               */
  PMU_CRC_CHK_RST_IRQn      =  10,     /*!< PMU CRC CHK RST Interrupt     */
  OSC_CHK_RST_IRQn          =  11,     /*!< OSC CHK RST Interrupt         */
  PMU_MCU_CACHE_IRQn        =  12,     /*!< PMU MCU CACHE Interrupt       */
  PMIC_IRQn                 =  13,     /*!< PMIC Interrupt                */
  INTMUX_OUT0_IRQn          =  14,     /*!< INTMUX OUT0 Interrupt         */
  INTMUX_OUT1_IRQn          =  15,     /*!< INTMUX OUT1 Interrupt         */
  INTMUX_OUT2_IRQn          =  16,     /*!< INTMUX OUT2 Interrupt         */
  INTMUX_OUT3_IRQn          =  17,     /*!< INTMUX OUT3 Interrupt         */
  INTMUX_OUT4_IRQn          =  18,     /*!< INTMUX OUT4 Interrupt         */
  INTMUX_OUT5_IRQn          =  19,     /*!< INTMUX OUT5 Interrupt         */
  INTMUX_OUT6_IRQn          =  20,     /*!< INTMUX OUT6 Interrupt         */
  INTMUX_OUT7_IRQn          =  21,     /*!< INTMUX OUT7 Interrupt         */
  INTMUX_OUT8_IRQn          =  22,     /*!< INTMUX OUT8 Interrupt         */
  INTMUX_OUT9_IRQn          =  23,     /*!< INTMUX OUT9 Interrupt         */
  INTMUX_OUT10_IRQn         =  24,     /*!< INTMUX OUT10 Interrupt        */
  INTMUX_OUT11_IRQn         =  25,     /*!< INTMUX OUT11 Interrupt        */
  INTMUX_OUT12_IRQn         =  26,     /*!< INTMUX OUT12 Interrupt        */
  PDM0_IRQn                 =  27,     /*!< PDM0 Interrupt                */
  MBOX_BB6_IRQn             =  28,     /*!< MBOX BB6 Interrupt            */
  PMU_PVTM_IRQn             =  29,     /*!< PMU PVTM Interrupt            */
  NUM_INTERRUPTS            =  32,     /*!< Number of internal IRQ        */
  TIMER0_IRQn               =  77 + NUM_INTERRUPTS,     /*!< TIMER0 Interrupt               */
  TIMER1_IRQn               =  78 + NUM_INTERRUPTS,     /*!< TIMER1 Interrupt               */
  TIMER2_IRQn               =  79 + NUM_INTERRUPTS,     /*!< TIMER2 Interrupt               */
  TIMER3_IRQn               =  80 + NUM_INTERRUPTS,     /*!< TIMER3 Interrupt               */
  TIMER4_IRQn               =  81 + NUM_INTERRUPTS,     /*!< TIMER4 Interrupt               */
  TIMER5_IRQn               =  82 + NUM_INTERRUPTS,     /*!< TIMER5 Interrupt               */
  TIMER6_IRQn               =  83 + NUM_INTERRUPTS,     /*!< TIMER6 Interrupt               */
  TIMER7_IRQn               =  84 + NUM_INTERRUPTS,     /*!< TIMER7 Interrupt               */
  TIMER8_IRQn               =  85 + NUM_INTERRUPTS,     /*!< TIMER8 Interrupt               */
  TIMER9_IRQn               =  86 + NUM_INTERRUPTS,     /*!< TIMER9 Interrupt               */
  TIMER10_IRQn              =  87 + NUM_INTERRUPTS,     /*!< TIMER10 Interrupt              */
  TIMER11_IRQn              =  88 + NUM_INTERRUPTS,     /*!< TIMER11 Interrupt              */
  UART0_IRQn                =  108 + NUM_INTERRUPTS,    /*!< UART0 Interrupt                */
  UART2_IRQn                =  110 + NUM_INTERRUPTS,    /*!< UART2 Interrupt                */
  UART3_IRQn                =  111 + NUM_INTERRUPTS,    /*!< UART3 Interrupt                */
  UART4_IRQn                =  112 + NUM_INTERRUPTS,    /*!< UART4 Interrupt                */
  UART5_IRQn                =  113 + NUM_INTERRUPTS,    /*!< UART5 Interrupt                */
  UART6_IRQn                =  114 + NUM_INTERRUPTS,    /*!< UART6 Interrupt                */
  UART7_IRQn                =  115 + NUM_INTERRUPTS,    /*!< UART7 Interrupt                */
  UART8_IRQn                =  116 + NUM_INTERRUPTS,    /*!< UART8 Interrupt                */
  UART9_IRQn                =  117 + NUM_INTERRUPTS,    /*!< UART9 Interrupt                */
  UART10_IRQn               =  118 + NUM_INTERRUPTS,    /*!< UART10 Interrupt               */
  UART11_IRQn               =  119 + NUM_INTERRUPTS,    /*!< UART11 Interrupt               */
  TOTAL_INTERRUPTS          =  (INTMUX_IRQ_START_NUM + NUM_INTERRUPTS + NUM_EXT_INTERRUPTS),
} IRQn_Type;

#else
#error missing IRQn_Type define for interrupt
#endif

#define HAS_CUSTOME_INTC

#else /* HAL_AP_CORE */

typedef enum {
/* When IPI_SGIs are used in AMP mode, you need to pay attention to whether it conflicts
 * with SMP mode. Especially in the case of Linux OS as The Master Core.
 * IPI_SGI 0~7 for non-secure and IPI_SGI 8~15 for secure.
 */
  IPI_SGI0                  = 0,
  IPI_SGI1                  = 1,
  IPI_SGI2                  = 2,
  IPI_SGI3                  = 3,
  IPI_SGI4                  = 4,
  IPI_SGI5                  = 5,
  IPI_SGI6                  = 6,
  IPI_SGI7                  = 7,
  IPI_SGI8                  = 8,
  IPI_SGI9                  = 9,
  IPI_SGI10                 = 10,
  IPI_SGI11                 = 11,
  IPI_SGI12                 = 12,
  IPI_SGI13                 = 13,
  IPI_SGI14                 = 14,
  IPI_SGI15                 = 15,

  CNTHP_IRQn                = 26,
  CNTV_IRQn                 = 27,
  CNTPS_IRQn                = 29,
  CNTPNS_IRQn               = 30,

/******  Platform Exceptions Numbers ***************************************************/
  RSVD0_IRQn                =  421,     /*!< RSVD0 Interrupt               */
  NUM_INTERRUPTS            =  512,
} IRQn_Type;

#define RSVD_IRQn(_N)               (RSVD0_IRQn + (_N))

#endif

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define PLL_INPUT_32K_RATE       (32 * 1000)
#define PLL_INPUT_OSC_RATE       (24 * 1000 * 1000)

/* --------  Configuration of Core Peripherals  ----------------------------------- */
#if defined(HAL_AP_CORE) && defined(HAL_MCU_CORE)
#error "HAL_AP_CORE and HAL_MCU_CORE only one of them can be enabled"
#endif

#if !defined(HAL_AP_CORE) && !defined(HAL_MCU_CORE)
#error "Please define HAL_AP_CORE or HAL_MCU_CORE on hal_conf.h"
#endif

#ifdef HAL_MCU_CORE
#define __CM0_REV                 0x0000U   /* Core revision r0p0 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            0U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#define NVIC_PERIPH_IRQ_OFFSET    16U
#define MAX_INTERRUPT_VECTOR      64U

#else /* HAL_AP_CORE */

#define __CORTEX_A                53U       /* Cortex-A53 Core */
#define __FPU_PRESENT             1U        /* FPU present */
#define __TIM_PRESENT             1U        /* Generic Timer */

#define CACHE_LINE_SHIFT          (6U)
#define CACHE_LINE_SIZE           (0x1U << CACHE_LINE_SHIFT)

#define HAL_GIC_V2                1U        /* GIC version 2 */

#endif

#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"                 /* CMSIS compiler specific defines */
#ifdef __CORTEX_A
#include "core_ca.h"
#endif
#ifdef HAL_MCU_CORE
#include "core_cm0.h"
#endif
#include "system_rk3576.h"
#endif /* __ASSEMBLY__ */
#include "rk3576.h"

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define GIC_DISTRIBUTOR_BASE            (0x2A701000) /* GICD base address */
#define GIC_CPU_INTERFACE_BASE          (0x2A702000) /* GICC base address */

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/

#ifdef HAL_AP_CORE
/********************************** CPU Topology ****************************************/
#define MPIDR_MT_MASK                      ((1U) << 24)
#define MPIDR_AFFLVL_MASK                  (0xFFU)
#define MPIDR_AFF0_SHIFT                   (0U)
#define MPIDR_AFF1_SHIFT                   (8U)
#define MPIDR_AFF2_SHIFT                   (16U)
#define MPIDR_AFFINITY_MASK                (0xFFFFFFU)
#define PLATFORM_CLUSTER0_CORE_COUNT       (4)
#define PLATFORM_CLUSTER1_CORE_COUNT       (4)
#define PLATFORM_CORE_COUNT                (PLATFORM_CLUSTER0_CORE_COUNT + PLATFORM_CLUSTER1_CORE_COUNT)
#define CPU_GET_AFFINITY(cpuId, clusterId) (((cpuId) << MPIDR_AFF0_SHIFT) | ((clusterId) << MPIDR_AFF2_SHIFT))

#endif /* HAL_AP_CORE */

#ifdef HAL_MCU_CORE
/*****************************************CACHE*****************************************/
/* CACHE LINE SIZE */
#define CACHE_LINE_SHIFT                (5U)
#define CACHE_LINE_SIZE                 (0x1U << CACHE_LINE_SHIFT)
#define CACHE_LINE_ADDR_MASK            (0xFFFFFFFFU << CACHE_LINE_SHIFT)
#define CACHE_M_CLEAN                   0x0U
#define CACHE_M_INVALID                 0x2U
#define CACHE_M_CLEAN_INVALID           0x4U
#define CACHE_M_INVALID_ALL             0x6U
#define CACHE_REVISION                  (0x00000100U)

#ifndef HAL_CACHE_DECODED_ADDR_BASE
#error "Please define HAL_CACHE_DECODED_ADDR_BASE on hal_conf.h"
#endif

#endif /* HAL_MCU_CORE */

/****************************************************************************************/
/*                                                                                      */
/*                           Platform Differences Section                               */
/*                                                                                      */
/****************************************************************************************/

/******************************************CRU*******************************************/
#define CRU_CLK_USE_CON_BANK
#define CLK64(mux, div) ((((mux) & 0xffffffffULL) << 32) | ((div) & 0xffffffffULL))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
} eCLOCK_Name;
#endif /* __ASSEMBLY__ */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
