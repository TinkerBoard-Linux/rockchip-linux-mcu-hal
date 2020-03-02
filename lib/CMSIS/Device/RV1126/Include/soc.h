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
/* ================                       IRQ                      ================ */
/* ================================================================================ */
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

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */
#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */
#include "system_rv1126.h"
#endif /* __ASSEMBLY__ */
#include "rv1126.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
