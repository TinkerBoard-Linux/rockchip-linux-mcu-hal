/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

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
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
/******  Platform Exceptions Numbers ***************************************************/
  TIMER0_IRQn            = 141,      /*!< TIMER0 Interrupt            */
  TIMER1_IRQn            = 142,      /*!< TIMER1 Interrupt            */
  TIMER2_IRQn            = 143,      /*!< TIMER2 Interrupt            */
  TIMER3_IRQn            = 144,      /*!< TIMER3 Interrupt            */
  TIMER4_IRQn            = 145,      /*!< TIMER4 Interrupt            */
  TIMER5_IRQn            = 146,      /*!< TIMER5 Interrupt            */
  UART0_IRQn             = 148,      /*!< UART0  Interrupt            */
  UART1_IRQn             = 149,      /*!< UART1  Interrupt            */
  UART2_IRQn             = 150,      /*!< UART2  Interrupt            */
  UART3_IRQn             = 151,      /*!< UART3  Interrupt            */
  UART4_IRQn             = 152,      /*!< UART4  Interrupt            */
  UART5_IRQn             = 153,      /*!< UART5  Interrupt            */
  UART6_IRQn             = 154,      /*!< UART6  Interrupt            */
  UART7_IRQn             = 155,      /*!< UART7  Interrupt            */
  UART8_IRQn             = 156,      /*!< UART8  Interrupt            */
  UART9_IRQn             = 157,      /*!< UART9  Interrupt            */
  NUM_INTERRUPTS         = 283,
} IRQn_Type;

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */
#ifndef __ASSEMBLY__
#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */
#ifndef ARCH_RISCV
#define __CORTEX_A           55U          /* Cortex-A55 Core                          */
#include "core_ca.h"
#endif /* ARCH_RISCV */
#include "system_rk3568.h"
#endif /* __ASSEMBLY__ */
#include "rk3568.h"

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************CRU*******************************************/
#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
} eCLOCK_Name;
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
