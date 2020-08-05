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
/******  Platform Exceptions Numbers ***************************************************/
  SARADC_IRQn              = 0,      /*!< SARADC Interrupt              */
  WDT_IRQn                 = 1,      /*!< WDT Interrupt                 */
  I2C0_IRQn                = 2,      /*!< I2C0 Interrupt                */
  I2C1_IRQn                = 3,      /*!< I2C1 Interrupt                */
  TIMER0_IRQn              = 4,      /*!< TIMER0 Interrupt              */
  TIMER1_IRQn              = 5,      /*!< TIMER1 Interrupt              */
  TIMER2_IRQn              = 6,      /*!< TIMER2 Interrupt              */
  TIMER3_IRQn              = 7,      /*!< TIMER3 Interrupt              */
  TIMER4_IRQn              = 8,      /*!< TIMER4 Interrupt              */
  TIMER5_IRQn              = 9,      /*!< TIMER5 Interrupt              */
  UART0_IRQn               = 10,     /*!< UART0 Interrupt               */
  JPEG0_IRQn               = 11,     /*!< JPEG0 Interrupt               */
  JPEG1_IRQn               = 12,     /*!< JPEG1 Interrupt               */
  SPI0_IRQn                = 13,     /*!< SPI0 Interrupt                */
  SPI1_IRQn                = 14,     /*!< SPI1 Interrupt                */
  PWM_IRQn                 = 15,     /*!< PWM Interrupt                 */
  FSPI0_IRQn               = 16,     /*!< FSPI0 Interrupt               */
  CACHE_IRQn               = 17,     /*!< CACHE Interrupt               */
  ISP_IRQn                 = 18,     /*!< ISP Interrupt                 */
  VICAP_IRQn               = 19,     /*!< VICAP Interrupt               */
  USB_IRQn                 = 20,     /*!< USB Interrupt                 */
  USB_BVALID_IRQn          = 21,     /*!< USB BVALID Interrupt          */
  USB_ID_IRQn              = 22,     /*!< USB ID Interrupt              */
  USB_LINESTATE_IRQn       = 23,     /*!< USB LINESTATE Interrupt       */
  USB_DISCONNECT_IRQn      = 24,     /*!< USB DISCONNECT Interrupt      */
  GPIO0_IRQn               = 25,     /*!< GPIO0 Interrupt               */
  GPIO1_IRQn               = 26,     /*!< GPIO1 Interrupt               */
  CSI2HOST0_IRQn           = 27,     /*!< CSI2HOST0 Interrupt           */
  CSI2HOST1_IRQn           = 28,     /*!< CSI2HOST1 Interrupt           */
  JSHASH_IRQn              = 29,     /*!< JSHASH Interrupt              */
  DMAC0_IRQn               = 30,     /*!< DMAC0 Interrupt               */
  DMAC1_IRQn               = 31,     /*!< DMAC1 Interrupt               */
  DMAC2_IRQn               = 32,     /*!< DMAC2 Interrupt               */
  AHB_ARB_IRQn             = 33,     /*!< DMAC3 Interrupt               */
  NUM_INTERRUPTS           = 34,
} IRQn_Type;

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define PLL_INPUT_OSC_RATE       (24 * 1000 * 1000)

#define RISC_V             1U
#define RV32I_ISA          1U
#define RV32M_ISA          1U
#define RV32C_ISA          1U
#define RV32E_ISA          0U

#define MAX_INTERRUPT_VECTOR    64U

#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */
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
