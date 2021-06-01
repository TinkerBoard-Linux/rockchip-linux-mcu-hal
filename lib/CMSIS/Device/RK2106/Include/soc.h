/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2021 Rockchip Electronics Co., Ltd.
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
    DMA_REQ_I2S0_TX = 0,
    DMA_REQ_I2S0_RX = 1,
    DMA_REQ_I2S1_TX = 2,
    DMA_REQ_I2S1_RX = 3,
    DMA_REQ_SPI0_TX = 4,
    DMA_REQ_SPI0_RX = 5,
    DMA_REQ_SPI1_TX = 6,
    DMA_REQ_SPI1_RX = 7,
    DMA_REQ_UART0_TX = 8,
    DMA_REQ_UART0_RX = 9,
    DMA_REQ_UART2_TX = 8,
    DMA_REQ_UART2_RX = 9,
    DMA_REQ_UART1_TX = 10,
    DMA_REQ_UART1_RX = 11,
    DMA_REQ_SDMMC = 12,
    DMA_REQ_EMMC = 13,
    DMA_REQ_VOP = 14,
    DMA_REQ_HIFI_RX = 0,
    DMA_REQ_HIFI_TX = 1,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
    /* -------------------  Processor Exceptions Numbers  ----------------------------- */
    NonMaskableInt_IRQn = -14, /*  2 Non Maskable Interrupt */
    HardFault_IRQn = -13, /*  3 HardFault Interrupt */
    MemoryManagement_IRQn = -12, /*  4 Memory Management Interrupt */
    BusFault_IRQn = -11, /*  5 Bus Fault Interrupt */
    UsageFault_IRQn = -10, /*  6 Usage Fault Interrupt */
    SVCall_IRQn = -5, /* 11 SV Call Interrupt */
    DebugMonitor_IRQn = -4, /* 12 Debug Monitor Interrupt */
    PendSV_IRQn = -2, /* 14 Pend SV Interrupt */
    SysTick_IRQn = -1, /* 15 System Tick Interrupt */

    /* -------------------  Processor Interrupt Numbers  ------------------------------ */
    SFC_IRQn = 0,
    SYNTH_IRQn,
    EBC_IRQn,
    EMMC_IRQn,
    SDMMC_IRQn,
    USBC_IRQn,
    DMA_IRQn,
    IMDCT_IRQn,
    WDT_IRQn,
    MAILBOX0_IRQn,
    MAILBOX1_IRQn,
    MAILBOX2_IRQn,
    MAILBOX3_IRQn,
    REV0_IRQn,
    REV1_IRQn,
    REV2_IRQn,
    PWM1_IRQn,
    PWM0_IRQn,
    TIMER1_IRQn,
    TIMER0_IRQn,
    SRADC_IRQn,
    UART5_IRQn,
    UART4_IRQn,
    UART3_IRQn,
    UART2_IRQn,
    UART1_IRQn,
    UART0_IRQn,
    SPI1_IRQn,
    SPI0_IRQn,
    I2C2_IRQn,
    I2C1_IRQn,
    I2C0_IRQn,
    I2S1_IRQn,
    I2S0_IRQn,
    HIFI_IRQn,
    PMU_IRQn,
    GPIO2_IRQn,
    GPIO1_IRQn,
    GPIO0_IRQn,
    VOP_IRQn,
    DMA2_IRQn,

    NUM_INTERRUPTS //Interrupts Total Nums

    /* Interrupts 10 .. 224 are left out */
} IRQn_Type;
#endif /* __ASSEMBLY__ */

#define NVIC_PERIPH_IRQ_NUM MAX_IRQn
#define NVIC_PERIPH_IRQ_OFFSET 16

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define __CM3_REV                   0x0201U  /* Core revision r2p1 */
#define __MPU_PRESENT               1U       /* MPU present */
#define __VTOR_PRESENT              1U       /* VTOR present */
#define __NVIC_PRIO_BITS            3U       /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig      0U       /* Set to 1 if different SysTick Config is used */

#ifndef __ASSEMBLY__
#include "core_cm3.h" /* Processor and core peripherals */
#include "system_rk2106.h" /* System Header */
#endif /* __ASSEMBLY__ */
#include "rk2106.h"

/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************CRU*******************************************/
#define PLL_INPUT_OSC_RATE (24 * 1000 * 1000)
/******************************************SFC*******************************************/
#define SFC_CHIP_CNT                                       (1U)
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
