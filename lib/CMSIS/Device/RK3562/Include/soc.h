/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
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
    DMA_REQ_UART0_RX = 0,
    DMA_REQ_UART1_RX = 1,
    DMA_REQ_UART2_RX = 2,
    DMA_REQ_UART3_RX = 3,
    DMA_REQ_UART4_RX = 4,
    DMA_REQ_UART5_RX = 5,
    DMA_REQ_UART6_RX = 6,
    DMA_REQ_UART7_RX = 7,
    DMA_REQ_UART8_RX = 8,
    DMA_REQ_UART9_RX = 9,
    DMA_REQ_UART1_TX = 10,
    DMA_REQ_UART5_TX = 11,
    DMA_REQ_SPI0_RX  = 12,
    DMA_REQ_SPI0_TX  = 13,
    DMA_REQ_SPI1_RX  = 14,
    DMA_REQ_SPI1_TX  = 15,
    DMA_REQ_SPI2_RX  = 16,
    DMA_REQ_SPI2_TX  = 17,
    DMA_REQ_SAI0_RX  = 18,
    DMA_REQ_SAI0_TX  = 19,
    DMA_REQ_SAI1_RX  = 20,
    DMA_REQ_SAI1_TX  = 21,
    DMA_REQ_SAI2_RX  = 22,
    DMA_REQ_SAI2_TX  = 23,
    DMA_REQ_CAN0_RX  = 24,
    DMA_REQ_CAN9_TX  = 25,
    DMA_REQ_PWM0     = 26,
    DMA_REQ_PWM1     = 27,
    DMA_REQ_PWM2     = 28,
    DMA_REQ_PWM3     = 29,
    DMA_REQ_SPDIF    = 30,
    DMA_REQ_PDM      = 31,
    DMA_REQ_CAN1_RX  = 32,
    DMA_REQ_CAN1_TX  = 33,
    DMA_REQ_UART0_TX = 34,
    DMA_REQ_UART2_TX = 35,
    DMA_REQ_UART3_TX = 36,
    DMA_REQ_UART4_TX = 37,
    DMA_REQ_UART6_TX = 38,
    DMA_REQ_UART7_TX = 39,
    DMA_REQ_UART8_TX = 40,
    DMA_REQ_UART9_TX = 41,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
#if defined(RKMCU_RK3562_BUS)

#define INTMUX_NUM_INT_PER_CON    256
#define INTMUX_NUM_OUT_PER_CON    4
#define INTMUX_NUM_INT_PER_OUT    64
#define INTMUX_NUM_GROUP_PER_OUT  8
#define INTMUX_NUM_GROUP_PER_CON  32
#define INTMUX_NUM_INT_PER_GROUP  8
/* INTMUX IRQ start from GIC SPI(Shared Peripheral Interrupt) */
#define INTMUX_IRQ_START_NUM      32
#define INTMUX_IRQ_OUT0
#define INTMUX_IRQ_OUT1
#define INTMUX_IRQ_OUT2
#define INTMUX_IRQ_OUT3
#define INTMUX_OUT_IRQ_START_NUM  0

#define NUM_EXT_INTERRUPTS        256

typedef enum {
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */

  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  INTMUX_OUT0_IRQn          =  0,      /*!< INTMUX OUT0 Interrupt         */
  INTMUX_OUT1_IRQn          =  1,      /*!< INTMUX OUT1 Interrupt         */
  INTMUX_OUT2_IRQn          =  2,      /*!< INTMUX OUT2 Interrupt         */
  INTMUX_OUT3_IRQn          =  3,      /*!< INTMUX OUT3 Interrupt         */
  MBOX_BB_IRQn              =  4,      /*!< MAILBOX_BB Interrupt          */
  TIMER0_IRQn               =  5,      /*!< TIMER0 Interrupt              */
  RSVD0_MCU_IRQn            =  6,      /*!< RSVD0 MCU Interrupt           */
  NUM_INTERRUPTS            =  8,      /*!< Number of internal IRQ        */
  UART0_IRQn                =  62 + NUM_INTERRUPTS,     /*!< UART0 Interrupt               */
  UART1_IRQn                =  63 + NUM_INTERRUPTS,     /*!< UART1 Interrupt               */
  UART2_IRQn                =  64 + NUM_INTERRUPTS,     /*!< UART2 Interrupt               */
  UART3_IRQn                =  65 + NUM_INTERRUPTS,     /*!< UART3 Interrupt               */
  UART4_IRQn                =  66 + NUM_INTERRUPTS,     /*!< UART4 Interrupt               */
  UART5_IRQn                =  67 + NUM_INTERRUPTS,     /*!< UART5 Interrupt               */
  UART6_IRQn                =  68 + NUM_INTERRUPTS,     /*!< UART6 Interrupt               */
  UART7_IRQn                =  69 + NUM_INTERRUPTS,     /*!< UART7 Interrupt               */
  UART8_IRQn                =  70 + NUM_INTERRUPTS,     /*!< UART8 Interrupt               */
  UART9_IRQn                =  71 + NUM_INTERRUPTS,     /*!< UART9 Interrupt               */
  TIMER1_IRQn               =  78 + NUM_INTERRUPTS,     /*!< TIMER1 Interrupt               */
  TIMER2_IRQn               =  79 + NUM_INTERRUPTS,     /*!< TIMER2 Interrupt               */
  TIMER3_IRQn               =  80 + NUM_INTERRUPTS,     /*!< TIMER3 Interrupt               */
  TIMER4_IRQn               =  81 + NUM_INTERRUPTS,     /*!< TIMER4 Interrupt               */
  TIMER5_IRQn               =  81 + NUM_INTERRUPTS,     /*!< TIMER5 Interrupt               */
  TOTAL_INTERRUPTS          =  (INTMUX_IRQ_START_NUM + NUM_INTERRUPTS + NUM_EXT_INTERRUPTS),
} IRQn_Type;

#elif defined(RKMCU_RK3562_PMU)

typedef enum {
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */

  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  MBOX_BB_IRQn              =  0,      /*!< MAILBOX_BB Interrupt          */
  HPTIMER_IRQn              =  1,      /*!< HPTIMER Interrupt             */
  UART0_IRQn                =  2,      /*!< UART0 Interrupt               */
  WDT_IRQn                  =  3,      /*!< WDT Interrupt                 */
  GPIO0_IRQn                =  4,      /*!< GPIO0 Interrupt               */
  SPI0_IRQn                 =  5,      /*!< SPI0 Interrupt                */
  PWM0_IRQn                 =  6,      /*!< PWM0 Interrupt                */
  I2C0_IRQn                 =  7,      /*!< I2C0 Interrupt                */
  NUM_INTERRUPTS            =  8,      /*!< Number of internal IRQ        */
  DUMMY_IRQn                =  256,    /*!< Avoid compile warning: overflow in conversion   */
} IRQn_Type;

#else
#error missing IRQn_Type define for interrupt
#endif

#if defined(RKMCU_RK3562_BUS)

#define RSVD_MCU_IRQn(_N)               (RSVD0_MCU_IRQn + (_N))
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

#ifdef HAL_MCU_CORE
#define __CM0_REV                 0x0000U   /* Core revision r0p0 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            0U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#define NVIC_PERIPH_IRQ_OFFSET    16U
#define MAX_INTERRUPT_VECTOR      64U
#endif

#ifndef __ASSEMBLY__
#ifdef HAL_MCU_CORE
#include "core_cm0.h"
#endif
#include "system_rk3562.h"
#endif /* __ASSEMBLY__ */
#include "rk3562.h"

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

#if defined(RKMCU_RK3562_BUS) && !defined(HAL_CACHE_DECODED_ADDR_BASE)
#error "Please define HAL_CACHE_DECODED_ADDR_BASE on hal_conf.h"
#endif

#endif

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
    /* TODO */
    CLK_INVALID = 0U,
} eCLOCK_Name;
#endif /* __ASSEMBLY__ */

/****************************************GPIO********************************************/
#ifdef GPIO_VER_ID
#undef GPIO_VER_ID
#define GPIO_VER_ID             (0x01000C2BU)
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
