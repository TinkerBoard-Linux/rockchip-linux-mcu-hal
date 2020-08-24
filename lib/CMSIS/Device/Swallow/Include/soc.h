/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
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
    DMA_REQ_SPI0_TX  = 2,
    DMA_REQ_SPI0_RX  = 3,
    DMA_REQ_SPI1_TX  = 4,
    DMA_REQ_SPI1_RX  = 5,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */



  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  SARADC_IRQn              = 0,      /*!< SARADC Interrupt              */
  WDT_IRQn                 = 1,      /*!< WDT Interrupt                 */
  TIMER0_IRQn              = 2,      /*!< TIMER0 Interrupt              */
  TIMER1_IRQn              = 3,      /*!< TIMER1 Interrupt              */
  TIMER2_IRQn              = 4,      /*!< TIMER2 Interrupt              */
  TIMER3_IRQn              = 5,      /*!< TIMER3 Interrupt              */
  TIMER4_IRQn              = 6,      /*!< TIMER4 Interrupt              */
  TIMER5_IRQn              = 7,      /*!< TIMER5 Interrupt              */
  JPEG0_IRQn               = 8,      /*!< JPEG0 Interrupt               */
  JPEG1_IRQn               = 9,      /*!< JPEG1 Interrupt               */
  PWM_IRQn                 = 10,     /*!< PWM Interrupt                 */
  FSPI0_IRQn               = 11,     /*!< FSPI0 Interrupt               */
  CACHE_IRQn               = 12,     /*!< CACHE Interrupt               */
  ISP_IRQn                 = 13,     /*!< ISP Interrupt                 */
  VICAP_IRQn               = 14,     /*!< VICAP Interrupt               */
  USB_IRQn                 = 15,     /*!< USB Interrupt                 */
  USB_BVALID_IRQn          = 16,     /*!< USB BVALID Interrupt          */
  USB_ID_IRQn              = 17,     /*!< USB ID Interrupt              */
  USB_LINESTATE_IRQn       = 18,     /*!< USB LINESTATE Interrupt       */
  USB_DISCONNECT_IRQn      = 19,     /*!< USB DISCONNECT Interrupt      */
  CSI2HOST0_IRQn           = 20,     /*!< CSI2HOST0 Interrupt           */
  CSI2HOST1_IRQn           = 21,     /*!< CSI2HOST1 Interrupt           */
  DMAC0_IRQn               = 22,     /*!< DMAC0 Interrupt               */
  DMAC1_IRQn               = 23,     /*!< DMAC1 Interrupt               */
  DMAC2_IRQn               = 24,     /*!< DMAC2 Interrupt               */
  BUFFER_MANAGER_CH0_IRQn  = 25,     /*!< BUFFER MANAGER CHANEL 0       */
  BUFFER_MANAGER_CH1_IRQn  = 26,     /*!< BUFFER MANAGER CHANEL 1       */
  BUFFER_MANAGER_CH2_IRQn  = 27,     /*!< BUFFER MANAGER CHANEL 2       */
  BUFFER_MANAGER_CH3_IRQn  = 28,     /*!< BUFFER MANAGER CHANEL 3       */
  BUFFER_MANAGER_CH4_IRQn  = 29,     /*!< BUFFER MANAGER CHANEL 4       */
  BUFFER_MANAGER_CH5_IRQn  = 30,     /*!< BUFFER MANAGER CHANEL 5       */
  INTC0_IRQn               = 31,     /*!< External IRQ controller 0     */
  NUM_INTERRUPTS           = 32,     /*!< Number of internal IRQ        */
  I2C0_IRQn                = 32,     /*!< I2C0 Interrupt                */
  I2C1_IRQn                = 33,     /*!< I2C1 Interrupt                */
  UART0_IRQn               = 34,     /*!< UART0 Interrupt               */
  SPI0_IRQn                = 35,     /*!< SPI0 Interrupt                */
  SPI1_IRQn                = 36,     /*!< SPI1 Interrupt                */
  GPIO0_IRQn               = 37,     /*!< GPIO0 Interrupt               */
  GPIO1_IRQn               = 38,     /*!< GPIO1 Interrupt               */
  CKCAL_IRQn               = 39,     /*!< JSHASH Interrupt              */
  AHB_ARB_IRQn             = 40,     /*!< AHB ARB Interrupt             */
  TOTAL_INTERRUPTS         = 41,     /*!< Total Interrupt               */
} IRQn_Type;

#define EXT_INTERRUPT            1U
#define NUM_INTC                 (NUM_INTERRUPTS - INTC0_IRQn)
#define NUM_EXT_INTERRUPTS       (TOTAL_INTERRUPTS - NUM_INTERRUPTS)

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define PLL_INPUT_OSC_RATE       (24 * 1000 * 1000)

/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CM0_REV                 0x0000U   /* Core revision r0p0 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            0U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#define NVIC_PERIPH_IRQ_OFFSET  16U
#define MAX_INTERRUPT_VECTOR    64U

#ifndef __ASSEMBLY__
#include "core_cm0.h"                       /* Processor and core peripherals */
#include "system_swallow.h"
#endif /* __ASSEMBLY__ */
#include "swallow.h"
#include "swallow_usb.h"

#define XIP_MAP_BASE       0x10000000U
#define SRAM2_MAP_BASE     0x000A0000U
#define SRAM1_MAP_BASE     0x00060000U
#define SRAM0_MAP_BASE     0x00020000U
#define USB_BASE           0x40180000U

/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */
#define USB                 ((struct USB_GLOBAL_REG *) USB_BASE)

#define IS_PCD_INSTANCE(instance) ((instance) == USB)
#define IS_HCD_INSTANCE(instance) ((instance) == USB)

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
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
/*****************************************FSPI*******************************************/
#define FSPI_CHIP_CNT                                       (0x1U)

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_GPLL,
    PLL_CPLL,
    CLK_UART0_SRC,
    CLK_UART0_FRAC,
    CLK_UART0,
    CLK_I2C0,
    CLK_I2C1,
    ACLK_DMAC,
    CLK_GPIO_DBG0,
    CLK_GPIO_DBG1,
    PCLK_ALIVE,
    HCLK_ALIVE,
    CLK_SPI0,
    CLK_SPI1,
    SCLK_SFC_SRC,
    CLK_PWM,
    HCLK_LOGIC,
    PCLK_LOGIC,
    ACLK_LOGIC,
    CLK_32K,
} eCLOCK_Name;
#endif /* __ASSEMBLY__ */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
