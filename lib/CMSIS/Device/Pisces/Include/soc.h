/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

#ifndef __ASSEMBLY__
/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_UART0_TX = 0,
    DMA_REQ_UART0_RX = 1,
    DMA_REQ_UART1_TX = 2,
    DMA_REQ_UART1_RX = 3,
    DMA_REQ_I2S0_TX = 6,
    DMA_REQ_I2S0_RX = 7,
    DMA_REQ_PDM0 = 10,
    DMA_REQ_SPI1_TX = 11,
    DMA_REQ_SPI1_RX = 12,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
    /******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
    NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
    MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
    BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
    UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
    SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
    DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
    PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
    SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
    /******  Pisces specific Interrupt Numbers **********************************************************************/
    CACHE_IRQn                  = 0,      /* cortex m4 cache                                         */
    MAILBOX0_AP_IRQn            = 2,      /* Mailbox0 ap                                                */
    MAILBOX0_BB_IRQn            = 3,      /* Mailbox0 bb                                                */
    MAILBOX1_AP_IRQn            = 4,      /* Mailbox1 ap                                                */
    MAILBOX1_BB_IRQn            = 5,      /* Mailbox1 bb                                                */
    MAILBOX2_AP_IRQn            = 6,      /* Mailbox2 ap                                                */
    MAILBOX2_BB_IRQn            = 7,      /* Mailbox2 bb                                                */
    PMU_IRQn                    = 8,      /* PMU                                                        */
    DMAC_IRQn                   = 9,      /* DMAC                                                       */
    DMAC_ABORT_IRQn             = 10,     /* DMA Abort                                                  */
    UART0_IRQn                  = 11,     /* UART 0                                                     */
    UART1_IRQn                  = 12,     /* UART 1                                                     */
    TIMER0_IRQn                 = 14,     /* Timer 0                                                    */
    TIMER1_IRQn                 = 15,     /* Timer 1                                                    */
    TIMER2_IRQn                 = 16,     /* Timer 2                                                    */
    TIMER3_IRQn                 = 17,     /* Timer 3                                                    */
    TIMER4_IRQn                 = 18,     /* Timer 4                                                    */
    TIMER5_IRQn                 = 19,     /* Timer 5                                                    */
    WDT0_IRQn                   = 20,     /* Watch dog 0                                                */
    WDT1_IRQn                   = 21,     /* Watch dog 1                                                */
    I2CMST0_IRQn                = 22,     /* I2C Master 0                                               */
    I2CMST1_IRQn                = 23,     /* I2C Master 1                                               */
    I2CMST2_IRQn                = 24,     /* I2C Master 2                                               */
    SPISLV0_IRQn                = 25,     /* SPI Slave 0                                                */
    SPIMST1_IRQn                = 26,     /* SPI Master 1                                               */
    GPIO0_IRQn                  = 29,     /* GPIO 0                                                     */
    GPIO1_IRQn                  = 30,     /* GPIO 1                                                     */
    I2S0_IRQn                   = 32,     /* I2S 0                                                      */
    PDM0_IRQn                   = 33,     /* PDM 0                                                      */
    VAD_IRQn                    = 35,     /* VAD                                                        */
    VOP_IRQn                    = 36,     /* VOP                                                        */
    VOP_POST_LB_IRQn            = 37,     /* VOP post lb                                                */
    MIPI_DSI_HOST_IRQn          = 38,     /* MIPI dsi host                                              */
    TP_IRQn                     = 39,     /* TP                                                         */
    DSP_PFATAL_ERROR_IRQn       = 40,     /* DSP pfatal error                                           */
    SPIMST2_IRQn                = 45,     /* SPI Master 2                                               */
    NUM_INTERRUPTS
} IRQn_Type;
#endif /* __ASSEMBLY__ */

#define NVIC_PERIPH_IRQ_NUM MAX_IRQn
#define NVIC_PERIPH_IRQ_OFFSET 16

#define MAILBOX0_AP_IRQ0 MAILBOX0_AP_IRQn
#define MAILBOX0_AP_IRQ1 MAILBOX0_AP_IRQn
#define MAILBOX0_AP_IRQ2 MAILBOX0_AP_IRQn
#define MAILBOX0_AP_IRQ3 MAILBOX0_AP_IRQn

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define __CM4_REV                 0x0001U  /* Core revision r0p1                    */
#define __MPU_PRESENT             1U       /* Pisces provides an MPU                */
#define __VTOR_PRESENT            1U       /* VTOR present */
#define __NVIC_PRIO_BITS          3U       /* Pisces uses 3 Bits for the Priority Levels */
#define __Vendor_SysTickConfig    0U       /* Set to 1 if different SysTick Config is used  */
#define __FPU_PRESENT             1U       /* FPU present                                   */

#ifndef __ASSEMBLY__
#include "core_cm4.h"             /* Cortex-M4 processor and core peripherals */
#include "system_pisces.h"
#endif /* __ASSEMBLY__ */
#include "pisces.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
