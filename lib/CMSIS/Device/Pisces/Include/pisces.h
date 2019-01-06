/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef __PISCES_H_
#define __PISCES_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

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
    PMU_IRQn                    = 8,      /* PMU                                                           */
    DMAC_IRQn                   = 9,      /* DMAC                                                        */
    DMAC_ABORT_IRQn             = 10,     /* DMA Abort                                                  */
    UART0_IRQn                  = 11,     /* UART 0                                                       */
    UART1_IRQn                  = 12,     /* UART 1                                                       */
    UART2_IRQn                  = 13,     /* UART 2                                                       */
    TIMER0_IRQn                 = 14,     /* Timer 0                                                      */
    TIMER1_IRQn                 = 15,     /* Timer 1                                                      */
    TIMER2_IRQn                 = 16,     /* Timer 2                                                      */
    TIMER3_IRQn                 = 17,     /* Timer 3                                                      */
    TIMER4_IRQn                 = 18,     /* Timer 4                                                      */
    TIMER5_IRQn                 = 19,     /* Timer 5                                                      */
    WDT0_IRQn                   = 20,     /* Watch dog 0                                               */
    WDT1_IRQn                   = 21,     /* Watch dog 1                                               */
    I2CMST0_IRQn                = 22,     /* I2C Master 0                                              */
    I2CMST1_IRQn                = 23,     /* I2C Master 1                                              */
    I2CMST2_IRQn                = 24,     /* I2C Master 2                                              */
    SPISLV0_IRQn                = 25,     /* SPI Slave 0                                                */
    SPIMST1_IRQn                = 26,     /* SPI Master 1                                              */
    SFC_IRQn                    = 27,     /* SFC                                                           */
    SDIO_IRQn                   = 28,     /* SDIO                                                         */
    GPIO0_IRQn                  = 29,     /* GPIO 0                                                       */
    GPIO1_IRQn                  = 30,     /* GPIO 1                                                       */
    I2S0_IRQn                   = 32,     /* I2S 0                                                          */
    PDM0_IRQn                   = 33,     /* PDM 0                                                         */
    I2S1_IRQn                   = 34,     /* I2S 1                                                          */
    VAD_IRQn                    = 35,     /* VAD                                                           */
    VOP_IRQn                    = 36,     /* VOP                                                           */
    VOP_POST_LB_IRQn            = 37,     /* VOP post lb                                                */
    MIPI_DSI_HOST_IRQn          = 38,     /* MIPI dsi host                                              */
    TP_IRQn                     = 39,     /* TP                                                             */
    DSP_PFATAL_ERROR_IRQn       = 40,     /* DSP pfatal error                                         */
    PWM_IRQn                    = 41,     /* PWM                                                         */
    PWM_PWR_IRQn                = 42,      /* PWM PWR                                                  */

    NUM_INTERRUPTS
} IRQn_Type;

#define NVIC_PERIPH_IRQ_NUM MAX_IRQn
#define NVIC_PERIPH_IRQ_OFFSET 16

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define __CM4_REV                 0x0001U  /* Core revision r0p1                            */
#define __MPU_PRESENT             1U       /* Pisces provides an MPU                     */
#define __NVIC_PRIO_BITS          4U       /* Pisces uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig    0U       /* Set to 1 if different SysTick Config is used  */


#include "core_cm4.h"             /* Cortex-M4 processor and core peripherals */
#include "system_pisces.h"

/* ================================================================================ */
/* ================            Extend  Peripheral Resource         ================ */
/* ================================================================================ */

/* Memory Base */
#define ICACHE_BASE                    0x40000000
#define ICACHE_CTRL_BASE               ICACHE_BASE
#define ICACHE_PMU_BASE                (ICACHE_BASE + 0x40)
#define DCACHE_BASE                    0x40004000
#define DCACHE_CTRL_BASE               DCACHE_BASE
#define DCACHE_PMU_BASE                (DCACHE_BASE + 0x40)
#define RKIO_UART0_BASE                0x40800000


/* CACHE CONTROLLER Register Structure Define  */
struct CACHE_CTRL_REG {
    __IO uint32_t CTRL;                 /* Cache control, Address offset: 0x00 */
    __IO uint32_t MAINTAIN0;            /* Cache maintain register0, Address offset: 0x04 */
    __IO uint32_t MAINTAIN1;            /* Cache maintain register1, Address offset: 0x08 */
    __IO uint32_t STB_TIMEOUT_CTRL;     /* Store buffer timeout control, Address offset: 0x0c */
    __IO uint32_t RESERVED1[4];         /* Reserved, Address offset: 0x10 */
    __IO uint32_t INT_EN ;              /* Cache interrupt enable, Address offset: 0x20 */
    __IO uint32_t INT_ST;               /* Interrupt status, Address offset: 0x24 */
    __IO uint32_t ERR_HADDR;            /* Address record when ahb error response on ahb master interface, Address offset: 0x28 */
    __IO uint32_t RESERVED2;            /* Reserved, Address offset: 0x2c */
    __IO uint32_t STATUS;               /* Cache status, Address offset: 0x30 */
};

/* CACHE PMU Register Structure Define  */
struct CACHE_PMU_REG {
    __IO uint32_t RD_NUM_CNT;           /* PMU read number counter status, Address offset: 0x00 */
    __IO uint32_t WR_NUM_CNT;           /* PMU write number counter status, Address offset: 0x04 */
    __IO uint32_t SRAM_RD_HIT_CNT;      /* PMU SRAM hit counter status, Address offset: 0x08 */
    __IO uint32_t HB_RD_HIT_CNT;        /* PMU hot buffer hit status, Address offset: 0x0c */
    __IO uint32_t STB_RD_HIT_CNT;       /* PMU store buffer hit status, Address offset: 0x10 */
    __IO uint32_t RD_HIT_CNT;           /* PMU read hit counter status, Address offset: 0x14 */
    __IO uint32_t WR_HIT_CNT;           /* PMU write hit counter status, Address offset: 0x18 */
    __IO uint32_t RD_MISS_PENALTY_CNT;  /* PMU read miss penalty counter status, Address offset: 0x1c */
    __IO uint32_t WR_MISS_PENALTY_CNT;  /* PMU write miss penalty counter status, Address offset: 0x20 */
    __IO uint32_t RD_LAT_CNT;           /* PMU read latency status, Address offset: 0x24 */
    __IO uint32_t WR_LAT_CNT;           /* PMU write latency status, Address offset: 0x28 */
} ;

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __Pisces_H */
