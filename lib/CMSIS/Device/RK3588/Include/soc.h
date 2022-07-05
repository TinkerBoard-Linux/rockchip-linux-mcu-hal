/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

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
    DMA_REQ_UART0_TX = 0,
    DMA_REQ_UART0_RX = 1,
    DMA_REQ_UART1_TX = 2,
    DMA_REQ_UART1_RX = 3,
    DMA_REQ_UART2_TX = 4,
    DMA_REQ_UART2_RX = 5,
    DMA_REQ_UART3_TX = 6,
    DMA_REQ_UART3_RX = 7,
    DMA_REQ_UART4_TX = 8,
    DMA_REQ_UART4_RX = 9,
    DMA_REQ_UART5_TX = 10,
    DMA_REQ_UART5_RX = 11,
    DMA_REQ_UART6_TX = 12,
    DMA_REQ_UART6_RX = 13,
    DMA_REQ_UART7_TX = 14,
    DMA_REQ_UART7_RX = 15,
    DMA_REQ_UART8_TX = 16,
    DMA_REQ_UART8_RX = 17,
    DMA_REQ_UART9_TX = 18,
    DMA_REQ_UART9_RX = 19,
    DMA_REQ_SPI0_TX = 20,
    DMA_REQ_SPI0_RX = 21,
    DMA_REQ_SPI1_TX = 22,
    DMA_REQ_SPI1_RX = 23,
    DMA_REQ_SPI2_TX = 24,
    DMA_REQ_SPI2_RX = 25,
    DMA_REQ_SPI3_TX = 26,
    DMA_REQ_SPI3_RX = 27,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
#define NUM_INT_PER_CON           256
#define NUM_INT_PER_GROUP         64
#define NUM_EXT_INTERRUPTS        512

#if defined(RKMCU_RK3588_PMU)
typedef enum
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */



  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  PMIC_IRQn                 =  0,      /*!< PMIC Interrupt                */
  SDMMC_DETECTN_IRQn        =  1,      /*!< SDMMC Interrupt               */
  UART0_IRQn                =  2,      /*!< UART0 Interrupt               */
  GPIO0_IRQn                =  3,      /*!< GPIO0 Interrupt               */
  GPIO0_EXP_IRQn            =  4,      /*!< GPIO0 EXP Interrupt           */
  I2C0_IRQn                 =  5,      /*!< I2C0 Interrupt                */
  VAD_IRQn                  =  6,      /*!< VAD Interrupt                 */
  PDM0_IRQn                 =  7,      /*!< PDM0 Interrupt                */
  I2S1_IRQn                 =  8,      /*!< I2S1 Interrupt                */
  PVTM_IRQn                 =  9,      /*!< PVTM Interrupt                */
  PWM0_PWR_IRQn             =  10,     /*!< PWM0 PWR Interrupt            */
  PWM0_IRQn                 =  11,     /*!< PWM0 Interrupt                */
  WDT0_IRQn                 =  12,     /*!< WDT Interrupt                 */
  TIMER0_IRQn               =  14,     /*!< TIMER0 Interrupt              */
  TIMER1_IRQn               =  13,     /*!< TIMER1 Interrupt              */
  CRC_CHK_RST_IRQn          =  15,     /*!< CRC_CHK_RST Interrupt         */
  INTMUX_OUT_START_IRQn     =  16,     /*!< INTMUX_OUT_START Interrupt    */
  INTMUX_OUT_END_IRQn       =  23,     /*!< INTMUX_OUT_END Interrupt      */
  HPTIMER_PMU0_IRQn         =  24,     /*!< HPTIMER_PMU0 Interrupt        */
  OSC_CHK_RST_IRQn          =  25,     /*!< OSC_CHK_RST Interrupt         */
  CACHE_IRQn                =  26,     /*!< CACHE Interrupt               */
  NUM_INTERRUPTS            =  27,     /*!< Number of internal IRQ        */
  MBOX0_CH0_AP_IRQn         =  93  + NUM_INTERRUPTS,     /*!< MAILBOX_CH0_AP Interrupt      */
  MBOX0_CH1_AP_IRQn         =  94  + NUM_INTERRUPTS,     /*!< MAILBOX_CH1_AP Interrupt      */
  MBOX0_CH2_AP_IRQn         =  95  + NUM_INTERRUPTS,     /*!< MAILBOX_CH2_AP Interrupt      */
  MBOX0_CH3_AP_IRQn         =  96  + NUM_INTERRUPTS,     /*!< MAILBOX_CH3_AP Interrupt      */
  MBOX0_CH0_BB_IRQn         =  97  + NUM_INTERRUPTS,     /*!< MAILBOX_CH0_BB Interrupt      */
  MBOX0_CH1_BB_IRQn         =  98  + NUM_INTERRUPTS,     /*!< MAILBOX_CH1_BB Interrupt      */
  MBOX0_CH2_BB_IRQn         =  99  + NUM_INTERRUPTS,     /*!< MAILBOX_CH2_BB Interrupt      */
  MBOX0_CH3_BB_IRQn         =  100 + NUM_INTERRUPTS,     /*!< MAILBOX_CH3_BB Interrupt      */
  TOTAL_INTERRUPTS          =  (NUM_INTERRUPTS + NUM_EXT_INTERRUPTS),   /*!< For external interrupt from intmux    */
} IRQn_Type;
#elif defined(RKMCU_RK3588_NPU)
typedef enum
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */



  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  TIMER0_IRQn               =  0,      /*!< TIMER0 Interrupt              */
  TIMER1_IRQn               =  1,      /*!< TIMER1 Interrupt              */
  PVTM_IRQn                 =  2,      /*!< PVTM Interrupt                */
  WDT0_IRQn                 =  3,      /*!< WDT Interrupt                 */
  C0_RKNN_IRQn              =  4,      /*!< C0_RKNN Interrupt             */
  C1_RKNN_IRQn              =  5,      /*!< C1_RKNN Interrupt             */
  C2_RKNN_IRQn              =  6,      /*!< C2_RKNN Interrupt             */
  CACHE_IRQn                =  7,      /*!< CACHE Interrupt               */
  MBOX0_CH0_AP_IRQn         =  8,      /*!< MAILBOX_CH0_AP Interrupt      */
  MBOX0_CH1_AP_IRQn         =  9,      /*!< MAILBOX_CH1_AP Interrupt      */
  MBOX0_CH2_AP_IRQn         =  10,     /*!< MAILBOX_CH2_AP Interrupt      */
  MBOX0_CH3_AP_IRQn         =  11,     /*!< MAILBOX_CH3_AP Interrupt      */
  MBOX0_CH0_BB_IRQn         =  12,     /*!< MAILBOX_CH0_BB Interrupt      */
  MBOX0_CH1_BB_IRQn         =  13,     /*!< MAILBOX_CH1_BB Interrupt      */
  MBOX0_CH2_BB_IRQn         =  14,     /*!< MAILBOX_CH2_BB Interrupt      */
  MBOX0_CH3_BB_IRQn         =  15,     /*!< MAILBOX_CH3_BB Interrupt      */
  NUM_INTERRUPTS            =  16,     /*!< Number of internal IRQ        */
  DUMMY_IRQn                =  256,    /*!< Avoid compile warning: overflow in conversion   */
} IRQn_Type;
#elif defined(RKMCU_RK3588_DDR)
typedef enum
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */



  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  INTMUX_OUT_START_IRQn     =  0,     /*!< INTMUX_OUT_START Interrupt    */
  INTMUX_OUT_END_IRQn       =  7,     /*!< INTMUX_OUT_END Interrupt      */
  NUM_INTERRUPTS            =  27,     /*!< Number of internal IRQ        */
  MBOX0_CH0_AP_IRQn         =  101  + NUM_INTERRUPTS,     /*!< MAILBOX_CH0_AP Interrupt      */
  MBOX0_CH1_AP_IRQn         =  102  + NUM_INTERRUPTS,     /*!< MAILBOX_CH1_AP Interrupt      */
  MBOX0_CH2_AP_IRQn         =  103  + NUM_INTERRUPTS,     /*!< MAILBOX_CH2_AP Interrupt      */
  MBOX0_CH3_AP_IRQn         =  104  + NUM_INTERRUPTS,     /*!< MAILBOX_CH3_AP Interrupt      */
  MBOX0_CH0_BB_IRQn         =  105  + NUM_INTERRUPTS,     /*!< MAILBOX_CH0_BB Interrupt      */
  MBOX0_CH1_BB_IRQn         =  106  + NUM_INTERRUPTS,     /*!< MAILBOX_CH1_BB Interrupt      */
  MBOX0_CH2_BB_IRQn         =  107  + NUM_INTERRUPTS,     /*!< MAILBOX_CH2_BB Interrupt      */
  MBOX0_CH3_BB_IRQn         =  108  + NUM_INTERRUPTS,     /*!< MAILBOX_CH3_BB Interrupt      */
  WDT0_IRQn                 =  433  + NUM_INTERRUPTS,     /*!< WDT Interrupt         */
  TIMER0_IRQn               =  434  + NUM_INTERRUPTS,     /*!< TIMER0 Interrupt      */
  TIMER1_IRQn               =  435  + NUM_INTERRUPTS,     /*!< TIMER1 Interrupt      */
  TOTAL_INTERRUPTS          =  (NUM_INTERRUPTS + NUM_EXT_INTERRUPTS),   /*!< For external interrupt from intmux    */
} IRQn_Type;

#else
#error missing IRQn_Type define for interrupt
#endif

#if defined(RKMCU_RK3588_PMU) || defined(RKMCU_RK3588_DDR)
#define HAS_CUSTOME_INTC
#endif

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define PLL_INPUT_OSC_RATE       (24 * 1000 * 1000)

/* --------  Configuration of Core Peripherals  ----------------------------------- */
#if defined(HAL_AP_CORE) && defined(HAL_MCU_CORE)
#error "HAL_AP_CORE and HAL_MCU_CORE only one of them can be enabled"
#endif

#if !defined(HAL_AP_CORE) && !defined(HAL_MCU_CORE)
#error "Please define HAL_AP_CORE or HAL_MCU_CORE on hal_conf.h"
#endif

#ifdef HAL_AP_CORE
#define __CORTEX_A_BIG            76U       /* Cortex-A76 Core                          */
#define __CORTEX_A_LIT            55U       /* Cortex-A55 Core                          */
#define __FPU_PRESENT             1U        /* FPU present                              */
#else
#define __CM0_REV                 0x0000U   /* Core revision r0p0 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            0U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#define NVIC_PERIPH_IRQ_OFFSET    16U
#define MAX_INTERRUPT_VECTOR      64U

#endif

#ifndef __ASSEMBLY__
#ifdef HAL_AP_CORE
#include "core_ca.h"
#else
#include "core_cm0.h"
#endif
#include "system_rk3588.h"
#endif /* __ASSEMBLY__ */
#include "rk3588.h"

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
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

#endif

/******************************************CRU*******************************************/
#define CRU_CLK_USE_CON_BANK
#define CLK64(mux, div)   ((((mux) & 0xffffffffULL) << 32) | ((div) & 0xffffffffULL))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_AUPLL,
    PLL_B0PLL,
    PLL_B1PLL,
    PLL_CPLL,
    PLL_GPLL,
    PLL_LPLL,
    PLL_NPLL,
    PLL_PPLL,
    PLL_V0PLL,

    CCLK_EMMC            = CLK64(CCLK_EMMC_SEL, CCLK_EMMC_DIV),
    SCLK_SFC             = CLK64(SCLK_SFC_SEL, SCLK_SFC_DIV),
    CCLK_SRC_SDIO        = CLK64(CCLK_SRC_SDIO_SEL, CCLK_SRC_SDIO_DIV),
    BCLK_EMMC            = CLK64(BCLK_EMMC_SEL, BCLK_EMMC_DIV),
    CLK_REF_PIPE_PHY0    = CLK64(CLK_REF_PIPE_PHY0_SEL, CLK_REF_PIPE_PHY0_PLL_SRC_DIV),
    CLK_REF_PIPE_PHY1    = CLK64(CLK_REF_PIPE_PHY1_SEL, CLK_REF_PIPE_PHY1_PLL_SRC_DIV),
    CLK_REF_PIPE_PHY2    = CLK64(CLK_REF_PIPE_PHY2_SEL, CLK_REF_PIPE_PHY2_PLL_SRC_DIV),
    CLK_HCLK_VAD         = CLK64(HCLK_PMU1_ROOT_I_SEL, 0U),
    CLK_MCLK_PDM0        = CLK64(MCLK_PDM0_SEL, 0U),
    CLK_I2S1_8CH_TX_SRC  = CLK64(0U, CLK_I2S1_8CH_TX_SRC_DIV),
    CLK_I2S1_8CH_TX_FRAC = CLK64(0U, CLK_I2S1_8CH_TX_FRAC_DIV),
    CLK_I2S1_8CH_TX      = CLK64(MCLK_I2S1_8CH_TX_SEL, 0U),
    CLK_I2S1_8CH_RX_SRC  = CLK64(0U, CLK_I2S1_8CH_RX_SRC_DIV),
    CLK_I2S1_8CH_RX_FRAC = CLK64(0U, CLK_I2S1_8CH_RX_FRAC_DIV),
    CLK_I2S1_8CH_RX      = CLK64(MCLK_I2S1_8CH_RX_SEL, 0U),
    CLK_UART0_SRC        = CLK64(SCLK_UART0_SEL, CLK_UART0_SRC_DIV),
    CLK_UART0_FRAC       = CLK64(0U, CLK_UART0_FRAC_DIV),
    CLK_UART0            = CLK64(SCLK_UART0_SEL , 0U),
    CLK_UART2_SRC        = CLK64(CLK_UART2_SRC_SEL, CLK_UART2_SRC_DIV),
    CLK_UART2_FRAC       = CLK64(0U, CLK_UART2_FRAC_DIV),
    CLK_UART2            = CLK64(SCLK_UART2_SEL, 0U),
    HCLK_PMU_CM0         = CLK64(HCLK_PMU_CM0_ROOT_I_SEL, 0U),

} eCLOCK_Name;
#endif /* __ASSEMBLY__ */
/****************************************MBOX********************************************/
#define MBOX_CNT             2
#define MBOX_CHAN_CNT        4

/***************************************INTMUX*******************************************/
#define INTMUX0_PMU_BASE               0xFECF0000U /* INTMUX0_PMU base address */
#define INTMUX1_PMU_BASE               0xFECF4000U /* INTMUX1_PMU base address */
#define INTMUX0_DDR_BASE               0xFECF8000U /* INTMUX0_DDR base address */
#define INTMUX1_DDR_BASE               0xFECFC000U /* INTMUX1_DDR base address */

/* INTMUX Register Structure Define */
struct INTMUX_REG {
    __IO uint32_t INT_ENABLE_GROUP[32];               /* Address Offset: 0x0000 */
    __IO uint32_t INT_FLAG_GROUP[32];                 /* Address Offset: 0x0080 */
};

#if defined(RKMCU_RK3588_PMU)
#define INTMUX0             ((struct INTMUX_REG *) INTMUX0_PMU_BASE)
#define INTMUX1             ((struct INTMUX_REG *) INTMUX1_PMU_BASE)
#elif defined(RKMCU_RK3588_DDR)
#define INTMUX0             ((struct INTMUX_REG *) INTMUX0_DDR_BASE)
#define INTMUX1             ((struct INTMUX_REG *) INTMUX1_DDR_BASE)
#endif

#define IS_INTMUX0_INSTANCE(instance) ((instance) == INTMUX0)
#define IS_INTMUX1_INSTANCE(instance) ((instance) == INTMUX1)

/****************************************************************************************/
/*                                                                                      */
/*                           Platform Differences Section                               */
/*                                                                                      */
/****************************************************************************************/
#if defined(RKMCU_RK3588_DDR)
#undef DCACHE
#undef ICACHE
#undef MBOX0_BASE
#define MBOX0_BASE                     0xFEC70000U /* MBOX0 base address */
#undef WDT_BASE
#define WDT_BASE                       0xFE110000U /* WDT base address*/
#undef TIMER0_BASE
#undef TIMER1_BASE
#define TIMER0_BASE                    0xFE118000U /* TIMER0_BASE*/
#define TIMER1_BASE                    0xFE118020U /* TIMER1_BASE*/
#elif defined(RKMCU_RK3588_NPU)
#undef MBOX0_BASE
#define MBOX0_BASE                     0xFECE0000U /* MBOX0 base address */
#undef WDT_BASE
#define WDT_BASE                       0xFDAF8000U /* WDT base address*/
#undef TIMER0_BASE
#undef TIMER1_BASE
#define TIMER0_BASE                    0xFDB00000U /* TIMER0_BASE*/
#define TIMER1_BASE                    0xFDB00020U /* TIMER1_BASE*/
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
