/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

/* IO definitions (access restrictions to peripheral registers) */
#ifdef __cplusplus
  #define   __I     volatile             /*!< \brief Defines 'read only' permissions */
#else
  #define   __I     volatile const       /*!< \brief Defines 'read only' permissions */
#endif
#define     __O     volatile             /*!< \brief Defines 'write only' permissions */
#define     __IO    volatile             /*!< \brief Defines 'read / write' permissions */

#ifdef ARCH_ARM
#define __CORTEX_A           7U    /* Cortex-A7 Core                                */
#endif

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_SPI0_RX  = 0,
    DMA_REQ_SPI0_TX  = 1,
    DMA_REQ_SPI1_RX  = 2,
    DMA_REQ_SPI1_TX  = 3,
    DMA_REQ_UART0_RX = 4,
    DMA_REQ_UART0_TX = 5,
    DMA_REQ_UART1_RX = 6,
    DMA_REQ_UART1_TX = 7,
    DMA_REQ_UART2_RX = 8,
    DMA_REQ_UART2_TX = 9,
    DMA_REQ_UART3_RX = 10,
    DMA_REQ_UART3_TX = 11,
    DMA_REQ_UART4_RX = 12,
    DMA_REQ_UART4_TX = 13,
    DMA_REQ_UART5_RX = 14,
    DMA_REQ_UART5_TX = 15,
    DMA_REQ_PWM0     = 16,
    DMA_REQ_PWM1     = 17,
    DMA_REQ_PWM2     = 18,
    DMA_REQ_I2S0_RX  = 19,
    DMA_REQ_I2S0_TX  = 20,
    DMA_REQ_I2S1_RX  = 21,
    DMA_REQ_I2S1_TX  = 22,
    DMA_REQ_I2S2_RX  = 23,
    DMA_REQ_I2S2_TX  = 24,
    DMA_REQ_PDM      = 25,
    DMA_REQ_AUDIOPWM = 26,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
#ifdef ARCH_RISCV
typedef enum
{
/******  Platform Exceptions Numbers ***************************************************/
  I2C0_IRQn              = 4,      /*!< I2C0 Interrupt              */
  I2C1_IRQn              = 5,      /*!< I2C1 Interrupt              */
  I2C2_IRQn              = 6,      /*!< I2C2 Interrupt              */
  I2C3_IRQn              = 7,      /*!< I2C3 Interrupt              */
  I2C4_IRQn              = 8,      /*!< I2C4 Interrupt              */
  I2C5_IRQn              = 9,      /*!< I2C5 Interrupt              */
  SPI0_IRQn              = 10,      /*!< SPI0 Interrupt              */
  SPI1_IRQn              = 11,      /*!< SPI1 Interrupt              */
  GPIO0_IRQn             = 34,      /*!< GPIO0 Interrupt             */
  GPIO1_IRQn             = 35,      /*!< GPIO1 Interrupt             */
  GPIO2_IRQn             = 36,      /*!< GPIO2 Interrupt             */
  GPIO3_IRQn             = 37,      /*!< GPIO3 Interrupt             */
  GPIO4_IRQn             = 38,      /*!< GPIO4 Interrupt             */
  MAILBOX0_AP_IRQn       = 111,     /*!< MAILBOX0_AP Interrupt       */
  MAILBOX0_BB_IRQn       = 112,     /*!< MAILBOX0_BB Interrupt       */
  NUM_INTERRUPTS         = 128,
} IRQn_Type;
#else
typedef enum
{
/*******  SGI Interrupts Numbers  ***************************************************/
  SGI0_IRQn              =  0,
  SGI1_IRQn              =  1,
  SGI2_IRQn              =  2,
  SGI3_IRQn              =  3,
  SGI4_IRQn              =  4,
  SGI5_IRQn              =  5,
  SGI6_IRQn              =  6,
  SGI7_IRQn              =  7,
  SGI8_IRQn              =  8,
  SGI9_IRQn              =  9,
  SGI10_IRQn             = 10,
  SGI11_IRQn             = 11,
  SGI12_IRQn             = 12,
  SGI13_IRQn             = 13,
  SGI14_IRQn             = 14,
  SGI15_IRQn             = 15,

/******  Cortex-A7 Processor Exceptions Numbers ****************************************/
  SecurePhyTimer_IRQn    = 29,      /*!< Physical Timer Interrupt    */
  NoSecurePhyTimer_IRQn  = 30,    /*!< Physical Timer Interrupt    */

/******  Platform Exceptions Numbers ***************************************************/
  I2C0_IRQn              = 36,      /*!< I2C0 Interrupt              */
  I2C1_IRQn              = 37,      /*!< I2C1 Interrupt              */
  I2C2_IRQn              = 38,      /*!< I2C2 Interrupt              */
  I2C3_IRQn              = 39,      /*!< I2C3 Interrupt              */
  I2C4_IRQn              = 40,      /*!< I2C4 Interrupt              */
  I2C5_IRQn              = 41,      /*!< I2C5 Interrupt              */
  SPI0_IRQn              = 42,      /*!< SPI0 Interrupt              */
  SPI1_IRQn              = 43,      /*!< SPI1 Interrupt              */
  GPIO0_IRQn             = 66,      /*!< GPIO0 Interrupt             */
  GPIO1_IRQn             = 67,      /*!< GPIO1 Interrupt             */
  GPIO2_IRQn             = 68,      /*!< GPIO2 Interrupt             */
  GPIO3_IRQn             = 69,      /*!< GPIO3 Interrupt             */
  GPIO4_IRQn             = 70,      /*!< GPIO4 Interrupt             */
  MAILBOX0_AP_IRQn       = 143,     /*!< MAILBOX0_AP Interrupt       */
  MAILBOX0_BB_IRQn       = 144,     /*!< MAILBOX0_BB Interrupt       */
  NUM_INTERRUPTS         = 256,
} IRQn_Type;
#endif
/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */
#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */
#include "system_rv1126.h"
#endif /* __ASSEMBLY__ */
#include "rv1126.h"

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************CRU*******************************************/
#define CRU_SRST_CON_CNT    15
#define CRU_GATE_CON_CNT    25
#define CRU_CLK_DIV_CON_CNT 78
#define CRU_CLK_SEL_CON_CNT 78
#define CLK(mux, div) \
    ((mux & 0x0F0F00FFU) | ((div & 0xFFU) << 8) | ((div & 0xFFFF0000U) << 4))
#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_APLL,
    PLL_CPLL,
    PLL_HPLL,
    PLL_GPLL,
    ARMCLK,
    PCLK_DBG        = CLK(0, PCLK_DBG_PRE_DIV),
    HCLK_PDCORE     = CLK(0, HCLK_PDCORE_NIU_DIV),
    ACLK_PDBUS      = CLK(ACLK_PDBUS_PRE_SEL, ACLK_PDBUS_PRE_DIV),
    HCLK_PDBUS      = CLK(HCLK_PDBUS_PRE_SEL, HCLK_PDBUS_PRE_DIV),
    PCLK_PDBUS      = CLK(PCLK_PDBUS_PRE_SEL, PCLK_PDBUS_PRE_DIV),
    ACLK_PDPHP      = CLK(ACLK_PDPHP_SEL, ACLK_PDPHP_DIV),
    HCLK_PDPHP      = CLK(0, HCLK_PDPHP_DIV),
    HCLK_PDAUDIO    = CLK(0, HCLK_PDAUDIO_DIV),
    PCLK_PDPMU      = CLK(0, PCLK_PDPMU_PRE_DIV),
    CLK_SPI0        = CLK(CLK_SPI0_SEL, CLK_SPI0_DIV),
    CLK_SPI1        = CLK(CLK_SPI1_SEL, CLK_SPI1_DIV),
    CLK_I2C0        = CLK(0, CLK_I2C0_DIV),
    CLK_I2C1        = CLK(0, CLK_I2C1_DIV),
    CLK_I2C2        = CLK(0, CLK_I2C2_DIV),
    CLK_I2C3        = CLK(0, CLK_I2C3_DIV),
    CLK_I2C4        = CLK(0, CLK_I2C4_DIV),
    CLK_I2C5        = CLK(0, CLK_I2C5_DIV),
    CLK_OSC0_DIV32K = CLK(CLK_DEEPSLOW_SEL, 0),
    CLK_RTC32K      = CLK(0, CLK_OSC0_DIV32K_DIV),
} eCLOCK_Name;
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
