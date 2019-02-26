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
#define __VTOR_PRESENT            1U       /* VTOR present */
#define __NVIC_PRIO_BITS          4U       /* Pisces uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig    0U       /* Set to 1 if different SysTick Config is used  */


#include "core_cm4.h"             /* Cortex-M4 processor and core peripherals */
#include "system_pisces.h"

/* ================================================================================ */
/* ================            Extend  Peripheral Resource         ================ */
/* ================================================================================ */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
/* SHAREMEM Register Structure Define */
struct SHAREMEM_REG {
    __IO uint32_t RRA_SLT_LO;                         /* Address Offset: 0x0000 */
    __IO uint32_t RRA_SLT_HI;                         /* Address Offset: 0x0004 */
    __IO uint32_t RRA_WEIGHT_LO;                      /* Address Offset: 0x0008 */
    __IO uint32_t RRA_WEIGHT_HI;                      /* Address Offset: 0x000C */
    __IO uint32_t RRA_SLT_PRI;                        /* Address Offset: 0x0010 */
         uint32_t RESERVED0[3];                       /* Address Offset: 0x0014 */
    __IO uint32_t CTRL;                               /* Address Offset: 0x0020 */
    __IO uint32_t STATUS;                             /* Address Offset: 0x0024 */
};
/* M4ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0[4];                       /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED1;                          /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED3[33];                      /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* M4DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0[4];                       /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED1;                          /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED3[33];                      /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* GRF Register Structure Define */
struct GRF_REG {
    __IO uint32_t GPIO0A_IOMUX_L;                     /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_H;                     /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_L;                     /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0B_IOMUX_H;                     /* Address Offset: 0x000C */
    __IO uint32_t GPIO0C_IOMUX_L;                     /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0C_IOMUX_H;                     /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0D_IOMUX_L;                     /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0D_IOMUX_H;                     /* Address Offset: 0x001C */
    __IO uint32_t GPIO1A_IOMUX_L;                     /* Address Offset: 0x0020 */
    __IO uint32_t GPIO1A_IOMUX_H;                     /* Address Offset: 0x0024 */
    __IO uint32_t GPIO1B_IOMUX_L;                     /* Address Offset: 0x0028 */
         uint32_t RESERVED0;                          /* Address Offset: 0x002C */
    __IO uint32_t GPIO1C_IOMUX_L;                     /* Address Offset: 0x0030 */
    __IO uint32_t GPIO1C_IOMUX_H;                     /* Address Offset: 0x0034 */
         uint32_t RESERVED1[2];                       /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0L_SR;                          /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0H_SR;                          /* Address Offset: 0x0044 */
    __IO uint32_t GPIO1L_SR;                          /* Address Offset: 0x0048 */
    __IO uint32_t GPIO1H_SR;                          /* Address Offset: 0x004C */
         uint32_t RESERVED2[12];                      /* Address Offset: 0x0050 */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0080 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0084 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0088 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x008C */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x0090 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x0094 */
    __IO uint32_t GPIO1C_P;                           /* Address Offset: 0x0098 */
    __IO uint32_t GPIO1D_P;                           /* Address Offset: 0x009C */
         uint32_t RESERVED3[8];                       /* Address Offset: 0x00A0 */
    __IO uint32_t GPIO0A_E;                           /* Address Offset: 0x00C0 */
    __IO uint32_t GPIO0B_E;                           /* Address Offset: 0x00C4 */
    __IO uint32_t GPIO0C_E;                           /* Address Offset: 0x00C8 */
    __IO uint32_t GPIO0D_E;                           /* Address Offset: 0x00CC */
    __IO uint32_t GPIO1A_E;                           /* Address Offset: 0x00D0 */
    __IO uint32_t GPIO1B_E;                           /* Address Offset: 0x00D4 */
    __IO uint32_t GPIO1C_E;                           /* Address Offset: 0x00D8 */
    __IO uint32_t GPIO1D_E;                           /* Address Offset: 0x00DC */
         uint32_t RESERVED4[8];                       /* Address Offset: 0x00E0 */
    __IO uint32_t SOC_CON[6];                         /* Address Offset: 0x0100 */
         uint32_t RESERVED5[10];                      /* Address Offset: 0x0118 */
    __IO uint32_t SOC_STATUS[2];                      /* Address Offset: 0x0140 */
         uint32_t RESERVED6[6];                       /* Address Offset: 0x0148 */
    __IO uint32_t DSP_CON[3];                         /* Address Offset: 0x0160 */
         uint32_t RESERVED7;                          /* Address Offset: 0x016C */
    __IO uint32_t DSP_STAT[2];                        /* Address Offset: 0x0170 */
         uint32_t RESERVED8[2];                       /* Address Offset: 0x0178 */
    __IO uint32_t PVTM_CON[2];                        /* Address Offset: 0x0180 */
    __IO uint32_t PVTM_STATUS[2];                     /* Address Offset: 0x0188 */
         uint32_t RESERVED9[12];                      /* Address Offset: 0x0190 */
    __IO uint32_t FW_CON[3];                          /* Address Offset: 0x01C0 */
         uint32_t RESERVED10[13];                     /* Address Offset: 0x01CC */
    __IO uint32_t MCU_CON[4];                         /* Address Offset: 0x0200 */
         uint32_t RESERVED11[4];                      /* Address Offset: 0x0210 */
    __I  uint32_t MCU_STAT0;                          /* Address Offset: 0x0220 */
         uint32_t RESERVED12[7];                      /* Address Offset: 0x0224 */
    __IO uint32_t DSI_CON[30];                        /* Address Offset: 0x0240 */
         uint32_t RESERVED13[2];                      /* Address Offset: 0x02B8 */
    __IO uint32_t DSI_STATUS[9];                      /* Address Offset: 0x02C0 */
         uint32_t RESERVED14[7];                      /* Address Offset: 0x02E4 */
    __IO uint32_t MEM_CON[6];                         /* Address Offset: 0x0300 */
         uint32_t RESERVED15[26];                     /* Address Offset: 0x0318 */
    __IO uint32_t DMAC_CON[7];                        /* Address Offset: 0x0380 */
         uint32_t RESERVED16[9];                      /* Address Offset: 0x039C */
    __IO uint32_t FAST_BOOT_EN;                       /* Address Offset: 0x03C0 */
    __IO uint32_t FAST_BOOT_ADDR;                     /* Address Offset: 0x03C4 */
         uint32_t RESERVED17[14];                     /* Address Offset: 0x03C8 */
    __IO uint32_t OS_REG[8];                          /* Address Offset: 0x0400 */
         uint32_t RESERVED18[696];                    /* Address Offset: 0x0420 */
    __IO uint32_t CHIP_ID;                            /* Address Offset: 0x0F00 */
};
/* MAILBOX Register Structure Define */
#define MBOX_CNT                       2
#define MBOX_CHAN_CNT                  4

struct MBOX_CMD_DAT {
    __IO uint32_t cmd;
    __IO uint32_t data;
};

struct MBOX_REG {
    __IO uint32_t          A2B_INTEN;
    __IO uint32_t          A2B_STATUS;
    struct MBOX_CMD_DAT    A2B[MBOX_CHAN_CNT];
    __IO uint32_t          B2A_INTEN;
    __IO uint32_t          B2A_STATUS;
    struct MBOX_CMD_DAT    B2A[MBOX_CHAN_CNT];
};
/* PWM Register Structure Define */
struct PWM_CHANNEL {
    __I  uint32_t cnt;
    __IO uint32_t period_hpr;
    __IO uint32_t duty_lpr;
    __IO uint32_t ctrl;
};
struct PWM_REG {
    struct PWM_CHANNEL CHANNELS[4];                   /* Address Offset: 0x0000 */
    __IO uint32_t INTSTS;                             /* Address Offset: 0x0040 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x0044 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0048 */
    __IO uint32_t FIFO_CTRL;                          /* Address Offset: 0x0050 */
    __IO uint32_t FIFO_INTSTS;                        /* Address Offset: 0x0054 */
    __IO uint32_t FIFO_TOUTTHR;                       /* Address Offset: 0x0058 */
    __IO uint32_t VERSION_ID;                         /* Address Offset: 0x005C */
    __I  uint32_t FIFO;                               /* Address Offset: 0x0060 */
         uint32_t RESERVED1[7];                       /* Address Offset: 0x0064 */
    __IO uint32_t PWRMATCH_CTRL;                      /* Address Offset: 0x0080 */
    __IO uint32_t PWRMATCH_LPRE;                      /* Address Offset: 0x0084 */
    __IO uint32_t PWRMATCH_HPRE;                      /* Address Offset: 0x0088 */
    __IO uint32_t PWRMATCH_LD;                        /* Address Offset: 0x008C */
    __IO uint32_t PWRMATCH_HD_ZERO;                   /* Address Offset: 0x0090 */
    __IO uint32_t PWRMATCH_HD_ONE;                    /* Address Offset: 0x0094 */
    __IO uint32_t PWRMATCH_VALUE[10];                 /* Address Offset: 0x0098 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x00C0 */
    __I  uint32_t PWM3_PWRCAPTURE_VALUE;              /* Address Offset: 0x00CC */
    __IO uint32_t FILTER_CTRL;                        /* Address Offset: 0x00D0 */
};
/* TIMER Register Structure Define  */
struct TIMER_REG
{
    __IO uint32_t TimerLoadCount0; /* Load Count Register */
    __IO uint32_t TimerLoadCount1; /* Load Count Register */
    __IO uint32_t TimerCurrentValue0; /* Current Value Register */
    __IO uint32_t TimerCurrentValue1; /* Current Value Register */
    __IO uint32_t TimerControlReg; /* Control Register */
    __IO uint32_t Reserved; /* End-of-Interrupt Register */
    __IO uint32_t TimerIntStatus; /* Interrupt Status Register */
};

#define TIMER_CNT   7
/* WDT Register Structure Define */
struct WDT_REG
{
    __IO uint32_t WDT_CR;
    __IO uint32_t WDT_TORR;
    __I  uint32_t WDT_CCVR;
    __IO uint32_t WDT_CRR;
    __I  uint32_t WDT_STAT;
    __I  uint32_t WDT_EOI;
};
/* SPI2APB Register Structure Define */
struct SPI2APB_REG {
    __IO uint32_t CTRL0;                              /* Address Offset: 0x0000 */
         uint32_t RESERVED0[8];                       /* Address Offset: 0x0004 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
         uint32_t RESERVED1;                          /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
         uint32_t RESERVED2;                          /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
         uint32_t RESERVED3[3];                       /* Address Offset: 0x003C */
    __IO uint32_t VERSION;                            /* Address Offset: 0x0048 */
         uint32_t RESERVED4;                          /* Address Offset: 0x004C */
    __IO uint32_t QUICK_REG[3];                       /* Address Offset: 0x0050 */
};
/* SPI Register Structure Define */
struct SPI_REG {
    __IO uint32_t CTRLR[2];                           /* Address Offset: 0x0000 */
    __IO uint32_t ENR;                                /* Address Offset: 0x0008 */
    __IO uint32_t SER;                                /* Address Offset: 0x000C */
    __IO uint32_t BAUDR;                              /* Address Offset: 0x0010 */
    __IO uint32_t TXFTLR;                             /* Address Offset: 0x0014 */
    __IO uint32_t RXFTLR;                             /* Address Offset: 0x0018 */
    __I  uint32_t TXFLR;                              /* Address Offset: 0x001C */
    __I  uint32_t RXFLR;                              /* Address Offset: 0x0020 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
    __IO uint32_t IPR;                                /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
    __I  uint32_t ISR;                                /* Address Offset: 0x0030 */
    __I  uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
    __IO uint32_t DMACR;                              /* Address Offset: 0x003C */
    __IO uint32_t DMATDLR;                            /* Address Offset: 0x0040 */
    __IO uint32_t DMARDLR;                            /* Address Offset: 0x0044 */
         uint32_t RESERVED0[238];                     /* Address Offset: 0x0048 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED1[255];                     /* Address Offset: 0x0404 */
    __IO uint32_t RXDR;                               /* Address Offset: 0x0800 */
};
/* SFC Register Structure Define */
struct SFC_REG {
    __IO uint32_t CTRL;                               /* Address Offset: 0x0000 */
    __IO uint32_t IMR;                                /* Address Offset: 0x0004 */
    __O  uint32_t ICLR;                               /* Address Offset: 0x0008 */
    __IO uint32_t FTLR;                               /* Address Offset: 0x000C */
    __IO uint32_t RCVR;                               /* Address Offset: 0x0010 */
    __IO uint32_t AX;                                 /* Address Offset: 0x0014 */
    __IO uint32_t ABIT;                               /* Address Offset: 0x0018 */
    __IO uint32_t ISR;                                /* Address Offset: 0x001C */
    __IO uint32_t FSR;                                /* Address Offset: 0x0020 */
    __IO uint32_t SR;                                 /* Address Offset: 0x0024 */
    __I  uint32_t RISR;                               /* Address Offset: 0x0028 */
    __IO uint32_t VER;                                /* Address Offset: 0x002C */
    __IO uint32_t QOP;                                /* Address Offset: 0x0030 */
    __IO uint32_t EXT_CTRL;                           /* Address Offset: 0x0034 */
         uint32_t RESERVED0;                          /* Address Offset: 0x0038 */
    __IO uint32_t DLL_CTRL;                           /* Address Offset: 0x003C */
         uint32_t RESERVED1[4];                       /* Address Offset: 0x0040 */
    __IO uint32_t POLL_CTRL;                          /* Address Offset: 0x0050 */
    __O  uint32_t FETCH_CMD;                          /* Address Offset: 0x0054 */
    __IO uint32_t FETCH_CTRL;                         /* Address Offset: 0x0058 */
    __IO uint32_t XIP_MODE;                           /* Address Offset: 0x005C */
    __I  uint32_t POLL_DATA;                          /* Address Offset: 0x0060 */
         uint32_t RESERVED2[7];                       /* Address Offset: 0x0064 */
    __O  uint32_t DMATR;                              /* Address Offset: 0x0080 */
    __IO uint32_t DMAADDR;                            /* Address Offset: 0x0084 */
         uint32_t RESERVED3[30];                      /* Address Offset: 0x0088 */
    __O  uint32_t CMD;                                /* Address Offset: 0x0100 */
    __O  uint32_t ADDR;                               /* Address Offset: 0x0104 */
    __IO uint32_t DATA;                               /* Address Offset: 0x0108 */
};
/* SDMMC Register Structure Define */
struct MMC_REG {
    __IO uint32_t CTRL;                               /* Address Offset: 0x0000 */
    __IO uint32_t PWREN;                              /* Address Offset: 0x0004 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0008 */
    __IO uint32_t CLKSRC;                             /* Address Offset: 0x000C */
    __IO uint32_t CLKENA;                             /* Address Offset: 0x0010 */
    __IO uint32_t TMOUT;                              /* Address Offset: 0x0014 */
    __IO uint32_t CTYPE;                              /* Address Offset: 0x0018 */
    __IO uint32_t BLKSIZ;                             /* Address Offset: 0x001C */
    __IO uint32_t BYTCNT;                             /* Address Offset: 0x0020 */
    __IO uint32_t INTMASK;                            /* Address Offset: 0x0024 */
    __IO uint32_t CMDARG;                             /* Address Offset: 0x0028 */
    __IO uint32_t CMD;                                /* Address Offset: 0x002C */
    __I  uint32_t RESP0;                              /* Address Offset: 0x0030 */
    __I  uint32_t RESP1;                              /* Address Offset: 0x0034 */
    __I  uint32_t RESP2;                              /* Address Offset: 0x0038 */
    __I  uint32_t RESP3;                              /* Address Offset: 0x003C */
    __IO uint32_t MINTSTS;                            /* Address Offset: 0x0040 */
    __IO uint32_t RINTSTS;                            /* Address Offset: 0x0044 */
    __I  uint32_t STATUS;                             /* Address Offset: 0x0048 */
    __IO uint32_t FIFOTH;                             /* Address Offset: 0x004C */
    __I  uint32_t CDETECT;                            /* Address Offset: 0x0050 */
    __IO uint32_t WRTPRT;                             /* Address Offset: 0x0054 */
    __IO uint32_t RESERVED0;                          /* Address Offset: 0x0058 */
    __I  uint32_t TCBCNT;                             /* Address Offset: 0x005C */
    __I  uint32_t TBBCNT;                             /* Address Offset: 0x0060 */
    __IO uint32_t DEBNCE;                             /* Address Offset: 0x0064 */
    __IO uint32_t USRID;                              /* Address Offset: 0x0068 */
    __I  uint32_t VERID;                              /* Address Offset: 0x006C */
    __I  uint32_t HCON;                               /* Address Offset: 0x0070 */
    __IO uint32_t UHSREG;                             /* Address Offset: 0x0074 */
    __IO uint32_t RSTN;                               /* Address Offset: 0x0078 */
    __IO uint32_t RESERVED1;                          /* Address Offset: 0x007C */
    __IO uint32_t BMOD;                               /* Address Offset: 0x0080 */
    __O  uint32_t PLDMND;                             /* Address Offset: 0x0084 */
    __IO uint32_t DBADDR;                             /* Address Offset: 0x0088 */
    __IO uint32_t IDSTS;                              /* Address Offset: 0x008C */
    __IO uint32_t IDINTEN;                            /* Address Offset: 0x0090 */
    __IO uint32_t DSCADDR;                            /* Address Offset: 0x0094 */
    __IO uint32_t BUFADDR;                            /* Address Offset: 0x0098 */
    __IO uint32_t RESERVED2[25];                      /* Address Offset: 0x009C */
    __IO uint32_t CARDTHRCTL;                         /* Address Offset: 0x0100 */
    __IO uint32_t BACKEND_POWER;                      /* Address Offset: 0x0104 */
    __IO uint32_t RESERVED3;                          /* Address Offset: 0x0108 */
    __IO uint32_t EMMCDDR_REG;                        /* Address Offset: 0x010C */
    __IO uint32_t RESERVED4[4];                       /* Address Offset: 0x0110 */
    __IO uint32_t RDYINT_GEN;                         /* Address Offset: 0x0120 */
    __IO uint32_t RESERVED5[55];                      /* Address Offset: 0x0124 */
    __IO uint32_t FIFO_BASE;                          /* Address Offset: 0x0200 */
};
/* GPIO Register Structure Define */
struct GPIO_REG {
    __IO uint32_t SWPORT_DR_L;                        /* Address Offset: 0x0000 */
    __IO uint32_t SWPORT_DR_H;                        /* Address Offset: 0x0004 */
    __IO uint32_t SWPORT_DDR_L;                       /* Address Offset: 0x0008 */
    __IO uint32_t SWPORT_DDR_H;                       /* Address Offset: 0x000C */
    __IO uint32_t INT_EN_L;                           /* Address Offset: 0x0010 */
    __IO uint32_t INT_EN_H;                           /* Address Offset: 0x0014 */
    __IO uint32_t INT_MASK_L;                         /* Address Offset: 0x0018 */
    __IO uint32_t INT_MASK_H;                         /* Address Offset: 0x001C */
    __IO uint32_t INT_TYPE_L;                         /* Address Offset: 0x0020 */
    __IO uint32_t INT_TYPE_H;                         /* Address Offset: 0x0024 */
    __IO uint32_t INT_POLARITY_L;                     /* Address Offset: 0x0028 */
    __IO uint32_t INT_POLARITY_H;                     /* Address Offset: 0x002C */
    __IO uint32_t INT_BOTHEDGE_L;                     /* Address Offset: 0x0030 */
    __IO uint32_t INT_BOTHEDGE_H;                     /* Address Offset: 0x0034 */
    __IO uint32_t DEBOUNCE_L;                         /* Address Offset: 0x0038 */
    __IO uint32_t DEBOUNCE_H;                         /* Address Offset: 0x003C */
    __IO uint32_t DBCLK_DIV_EN_L;                     /* Address Offset: 0x0040 */
    __IO uint32_t DBCLK_DIV_EN_H;                     /* Address Offset: 0x0044 */
    __IO uint32_t DBCLK_DIV_CON;                      /* Address Offset: 0x0048 */
         uint32_t RESERVED0;                          /* Address Offset: 0x004C */
    __I  uint32_t INT_STATUS;                         /* Address Offset: 0x0050 */
         uint32_t RESERVED1;                          /* Address Offset: 0x0054 */
    __I  uint32_t INT_RAWSTATUS;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED2;                          /* Address Offset: 0x005C */
    __O  uint32_t PORT_EOI_L;                         /* Address Offset: 0x0060 */
    __O  uint32_t PORT_EOI_H;                         /* Address Offset: 0x0064 */
         uint32_t RESERVED3[2];                       /* Address Offset: 0x0068 */
    __I  uint32_t EXT_PORT;                           /* Address Offset: 0x0070 */
         uint32_t RESERVED4;                          /* Address Offset: 0x0074 */
    __I  uint32_t VER_ID;                             /* Address Offset: 0x0078 */
};
/* PDM Register Structure Define */
struct PDM_REG {
    __IO uint32_t SYSCONFIG;                          /* Address Offset: 0x0000 */
    __IO uint32_t CTRL[2];                            /* Address Offset: 0x0004 */
    __IO uint32_t CLK_CTRL;                           /* Address Offset: 0x000C */
    __IO uint32_t HPF_CTRL;                           /* Address Offset: 0x0010 */
    __IO uint32_t FIFO_CTRL;                          /* Address Offset: 0x0014 */
    __IO uint32_t DMA_CTRL;                           /* Address Offset: 0x0018 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x001C */
    __O  uint32_t INT_CLR;                            /* Address Offset: 0x0020 */
    __I  uint32_t INT_ST;                             /* Address Offset: 0x0024 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0028 */
    __I  uint32_t RXFIFO_DATA_REG;                    /* Address Offset: 0x0030 */
    __I  uint32_t DATA0R_REG;                         /* Address Offset: 0x0034 */
    __I  uint32_t DATA0L_REG;                         /* Address Offset: 0x0038 */
    __I  uint32_t DATA1R_REG;                         /* Address Offset: 0x003C */
    __I  uint32_t DATA1L_REG;                         /* Address Offset: 0x0040 */
    __I  uint32_t DATA2R_REG;                         /* Address Offset: 0x0044 */
    __I  uint32_t DATA2L_REG;                         /* Address Offset: 0x0048 */
    __I  uint32_t DATA3R_REG;                         /* Address Offset: 0x004C */
    __I  uint32_t DATA3L_REG;                         /* Address Offset: 0x0050 */
    __I  uint32_t DATA_VALID;                         /* Address Offset: 0x0054 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0058 */
         uint32_t RESERVED1[233];                     /* Address Offset: 0x005C */
    __I  uint32_t INCR_RXDR;                          /* Address Offset: 0x0400 */
};
/* I2S Register Structure Define */
struct I2S_REG {
    __IO uint32_t TXCR;                               /* Address Offset: 0x0000 */
    __IO uint32_t RXCR;                               /* Address Offset: 0x0004 */
    __IO uint32_t CKR;                                /* Address Offset: 0x0008 */
    __I  uint32_t TXFIFOLR;                           /* Address Offset: 0x000C */
    __IO uint32_t DMACR;                              /* Address Offset: 0x0010 */
    __IO uint32_t INTCR;                              /* Address Offset: 0x0014 */
    __IO uint32_t INTSR;                              /* Address Offset: 0x0018 */
    __IO uint32_t XFER;                               /* Address Offset: 0x001C */
    __IO uint32_t CLR;                                /* Address Offset: 0x0020 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0024 */
    __I  uint32_t RXDR;                               /* Address Offset: 0x0028 */
    __I  uint32_t RXFIFOLR;                           /* Address Offset: 0x002C */
    __IO uint32_t VER;                                /* Address Offset: 0x0030 */
};
/* VAD Register Structure Define */
struct VAD_REG {
    __IO uint32_t CONTROL;                            /* Address Offset: 0x0000 */
    __IO uint32_t VS_ADDR;                            /* Address Offset: 0x0004 */
    __IO uint32_t ACODEC_BASE_ADDR;                   /* Address Offset: 0x0008 */
    __IO uint32_t OD_ADDR[8];                         /* Address Offset: 0x000C */
    __IO uint32_t D_DATA[8];                          /* Address Offset: 0x002C */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t RAM_START_ADDR;                     /* Address Offset: 0x0050 */
    __IO uint32_t RAM_END_ADDR;                       /* Address Offset: 0x0054 */
    __IO uint32_t RAM_CUR_ADDR;                       /* Address Offset: 0x0058 */
    __IO uint32_t DET_CON[6];                         /* Address Offset: 0x005C */
    __IO uint32_t INT;                                /* Address Offset: 0x0074 */
    __IO uint32_t AUX_CONTROL;                        /* Address Offset: 0x0078 */
    __I  uint32_t SAMPLE_CNT;                         /* Address Offset: 0x007C */
         uint32_t RESERVED0[32];                      /* Address Offset: 0x0080 */
    __IO uint32_t NOISE_DATA;                         /* Address Offset: 0x0100 */
};
/* VOP Register Structure Define */
struct VOP_REG {
    __IO uint32_t REG_CFG_DONE;                       /* Address Offset: 0x0000 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0004 */
    __IO uint32_t DSP_BG;                             /* Address Offset: 0x0008 */
         uint32_t RESERVED0;                          /* Address Offset: 0x000C */
    __IO uint32_t SYS_CTRL[3];                        /* Address Offset: 0x0010 */
         uint32_t RESERVED1;                          /* Address Offset: 0x001C */
    __IO uint32_t DSP_CTRL0;                          /* Address Offset: 0x0020 */
         uint32_t RESERVED2;                          /* Address Offset: 0x0024 */
    __IO uint32_t DSP_CTRL2;                          /* Address Offset: 0x0028 */
    __IO uint32_t VOP_STATUS;                         /* Address Offset: 0x002C */
    __IO uint32_t LINE_FLAG;                          /* Address Offset: 0x0030 */
    __IO uint32_t INTR_EN;                            /* Address Offset: 0x0034 */
    __IO uint32_t INTR_CLEAR;                         /* Address Offset: 0x0038 */
    __IO uint32_t INTR_STATUS;                        /* Address Offset: 0x003C */
    __IO uint32_t WIN1_CTRL[2];                       /* Address Offset: 0x0040 */
    __IO uint32_t WIN1_VIR;                           /* Address Offset: 0x0048 */
         uint32_t RESERVED3;                          /* Address Offset: 0x004C */
    __IO uint32_t WIN1_YRGB_MST;                      /* Address Offset: 0x0050 */
    __IO uint32_t WIN1_DSP_INFO;                      /* Address Offset: 0x0054 */
    __IO uint32_t WIN1_DSP_ST;                        /* Address Offset: 0x0058 */
    __IO uint32_t WIN1_COLOR_KEY;                     /* Address Offset: 0x005C */
         uint32_t RESERVED4[3];                       /* Address Offset: 0x0060 */
    __IO uint32_t WIN1_ALPHA_CTRL;                    /* Address Offset: 0x006C */
    __IO uint32_t WIN1_CBCR_MST;                      /* Address Offset: 0x0070 */
    __IO uint32_t WIN1_YRGB_MST_RAW;                  /* Address Offset: 0x0074 */
    __IO uint32_t WIN1_CBCR_MST_RAW;                  /* Address Offset: 0x0078 */
    __IO uint32_t WIN1_LOOP_OFFSET;                   /* Address Offset: 0x007C */
    __IO uint32_t WIN2_CTRL[2];                       /* Address Offset: 0x0080 */
    __IO uint32_t WIN2_VIR;                           /* Address Offset: 0x0088 */
         uint32_t RESERVED5;                          /* Address Offset: 0x008C */
    __IO uint32_t WIN2_YRGB_MST;                      /* Address Offset: 0x0090 */
    __IO uint32_t WIN2_DSP_INFO;                      /* Address Offset: 0x0094 */
    __IO uint32_t WIN2_DSP_ST;                        /* Address Offset: 0x0098 */
    __IO uint32_t WIN2_COLOR_KEY;                     /* Address Offset: 0x009C */
         uint32_t RESERVED6[3];                       /* Address Offset: 0x00A0 */
    __IO uint32_t WIN2_ALPHA_CTRL;                    /* Address Offset: 0x00AC */
    __IO uint32_t WIN2_CBCR_MST;                      /* Address Offset: 0x00B0 */
    __IO uint32_t WIN2_YRGB_MST_RAW;                  /* Address Offset: 0x00B4 */
    __IO uint32_t WIN2_CBCR_MST_RAW;                  /* Address Offset: 0x00B8 */
    __IO uint32_t WIN2_LOOP_OFFSET;                   /* Address Offset: 0x00BC */
    __IO uint32_t WIN3_CTRL[2];                       /* Address Offset: 0x00C0 */
    __IO uint32_t WIN3_VIR;                           /* Address Offset: 0x00C8 */
         uint32_t RESERVED7;                          /* Address Offset: 0x00CC */
    __IO uint32_t WIN3_YRGB_MST;                      /* Address Offset: 0x00D0 */
    __IO uint32_t WIN3_DSP_INFO;                      /* Address Offset: 0x00D4 */
    __IO uint32_t WIN3_DSP_ST;                        /* Address Offset: 0x00D8 */
    __IO uint32_t WIN3_COLOR_KEY;                     /* Address Offset: 0x00DC */
         uint32_t RESERVED8[3];                       /* Address Offset: 0x00E0 */
    __IO uint32_t WIN3_ALPHA_CTRL;                    /* Address Offset: 0x00EC */
    __IO uint32_t WIN3_CBCR_MST;                      /* Address Offset: 0x00F0 */
    __IO uint32_t WIN3_YRGB_MST_RAW;                  /* Address Offset: 0x00F4 */
    __IO uint32_t WIN3_CBCR_MST_RAW;                  /* Address Offset: 0x00F8 */
    __IO uint32_t WIN3_LOOP_OFFSET;                   /* Address Offset: 0x00FC */
    __IO uint32_t DSP_HTOTAL_HS_END;                  /* Address Offset: 0x0100 */
    __IO uint32_t DSP_HACT_ST_END;                    /* Address Offset: 0x0104 */
    __IO uint32_t DSP_VTOTAL_VS_END;                  /* Address Offset: 0x0108 */
    __IO uint32_t DSP_VACT_ST_END;                    /* Address Offset: 0x010C */
         uint32_t RESERVED9[20];                      /* Address Offset: 0x0110 */
    __IO uint32_t BCSH_CTRL;                          /* Address Offset: 0x0160 */
    __IO uint32_t BCSH_COL_BAR;                       /* Address Offset: 0x0164 */
    __IO uint32_t BCSH_BCS;                           /* Address Offset: 0x0168 */
    __IO uint32_t BCSH_H;                             /* Address Offset: 0x016C */
    __IO uint32_t GAMMA_COE_WORD[4];                  /* Address Offset: 0x0170 */
    __IO uint32_t POST_CTRL;                          /* Address Offset: 0x0180 */
    __IO uint32_t COLOR_MATRIX_COE[3];                /* Address Offset: 0x0184 */
    __I  uint32_t DBG_REG_SCAN_LINE;                  /* Address Offset: 0x0190 */
         uint32_t RESERVED10[24];                     /* Address Offset: 0x0194 */
    __IO uint32_t BLANKING_VALUE;                     /* Address Offset: 0x01F4 */
    __I  uint32_t FLAG_REG_FRM_VALID;                 /* Address Offset: 0x01F8 */
    __O  uint32_t FLAG_REG;                           /* Address Offset: 0x01FC */
};
/* PMU Register Structure Define */
struct PMU_REG {
    __IO uint32_t WAKEUP_CFG[4];                      /* Address Offset: 0x0000 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0010 */
    __IO uint32_t WAKEUP_CFG6;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED1[5];                       /* Address Offset: 0x001C */
    __IO uint32_t PWRDN_CON;                          /* Address Offset: 0x0030 */
    __I  uint32_t PWRDN_ST;                           /* Address Offset: 0x0034 */
    __IO uint32_t PLL_CON;                            /* Address Offset: 0x0038 */
    __IO uint32_t PWRMODE_CON;                        /* Address Offset: 0x003C */
    __IO uint32_t SFT_CON;                            /* Address Offset: 0x0040 */
         uint32_t RESERVED2[7];                       /* Address Offset: 0x0044 */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0060 */
    __O  uint32_t INT_ST;                             /* Address Offset: 0x0064 */
    __IO uint32_t PWRMODE_GPIO_POS_INT_CON;           /* Address Offset: 0x0068 */
    __IO uint32_t PWRMODE_GPIO_NEG_INT_CON;           /* Address Offset: 0x006C */
    __IO uint32_t DSP_GPIO_POS_INT_CON;               /* Address Offset: 0x0070 */
    __IO uint32_t DSP_GPIO_NEG_INT_CON;               /* Address Offset: 0x0074 */
    __O  uint32_t PWRMODE_GPIO_POS_INT_ST;            /* Address Offset: 0x0078 */
    __O  uint32_t PWRMODE_GPIO_NEG_INT_ST;            /* Address Offset: 0x007C */
    __O  uint32_t DSP_GPIO_POS_INT_ST;                /* Address Offset: 0x0080 */
    __O  uint32_t DSP_GPIO_NEG_INT_ST;                /* Address Offset: 0x0084 */
    __IO uint32_t PWRDN_INTEN;                        /* Address Offset: 0x0088 */
    __O  uint32_t PWRDN_INT_STATUS;                   /* Address Offset: 0x008C */
    __O  uint32_t WAKEUP_STATUS;                      /* Address Offset: 0x0090 */
         uint32_t RESERVED3[3];                       /* Address Offset: 0x0094 */
    __IO uint32_t BUS_CLR;                            /* Address Offset: 0x00A0 */
    __IO uint32_t BUS_IDLE_REQ;                       /* Address Offset: 0x00A4 */
    __I  uint32_t BUS_IDLE_ST;                        /* Address Offset: 0x00A8 */
    __I  uint32_t BUS_IDLE_ACK;                       /* Address Offset: 0x00AC */
    __I  uint32_t POWER_ST;                           /* Address Offset: 0x00B0 */
    __I  uint32_t CORE_PWR_ST;                        /* Address Offset: 0x00B4 */
         uint32_t RESERVED4;                          /* Address Offset: 0x00B8 */
    __IO uint32_t PLLLOCK_CNT;                        /* Address Offset: 0x00BC */
    __IO uint32_t PWRMODE_TIMEOUT_CNT;                /* Address Offset: 0x00C0 */
    __IO uint32_t NOC_AUTO_ENA;                       /* Address Offset: 0x00C4 */
         uint32_t RESERVED5[2];                       /* Address Offset: 0x00C8 */
    __IO uint32_t DSPAPM_CON;                         /* Address Offset: 0x00D0 */
         uint32_t RESERVED6;                          /* Address Offset: 0x00D4 */
    __IO uint32_t DSP_LDO_ADJ_CNT;                    /* Address Offset: 0x00D8 */
    __IO uint32_t DSP_TIMEOUT_CNT;                    /* Address Offset: 0x00DC */
    __IO uint32_t PWRMODE_LDO_ADJ_CNT;                /* Address Offset: 0x00E0 */
    __IO uint32_t SHRM_CON;                           /* Address Offset: 0x00E4 */
    __IO uint32_t DSPTCM_CON[2];                      /* Address Offset: 0x00E8 */
    __IO uint32_t SYS_REG[4];                         /* Address Offset: 0x00F0 */
};
/* UART Register Structure Define */
typedef struct UART_REG
{
    __IO uint32_t UART_RBR;
    __IO uint32_t UART_DLH;
    __IO uint32_t UART_IIR;
    __IO uint32_t UART_LCR;
    __IO uint32_t UART_MCR;
    __IO uint32_t UART_LSR;
    __IO uint32_t UART_MSR;
    __IO uint32_t UART_SCR;
    __IO uint32_t RESERVED1_UART[(0x30 - 0x20) / 4];
    __IO uint32_t UART_SRBR[(0x70 - 0x30) / 4];
    __IO uint32_t UART_FAR;
    __IO uint32_t UART_TFR;
    __IO uint32_t UART_RFW;
    __IO uint32_t UART_USR;
    __IO uint32_t UART_TFL;
    __IO uint32_t UART_RFL;
    __IO uint32_t UART_SRR;
    __IO uint32_t UART_SRTS;
    __IO uint32_t UART_SBCR;
    __IO uint32_t UART_SDMAM;
    __IO uint32_t UART_SFE;
    __IO uint32_t UART_SRT;
    __IO uint32_t UART_STET;
    __IO uint32_t UART_HTX;
    __IO uint32_t UART_DMASA;
    __IO uint32_t RESERVED2_UART[(0xf4 - 0xac) / 4];
    __IO uint32_t UART_CPR;
    __IO uint32_t UART_UCV;
    __IO uint32_t UART_CTR;
} UART_REG_t;

#define UART_THR UART_RBR
#define UART_DLL UART_RBR
#define UART_IER UART_DLH
#define UART_FCR UART_IIR
#define UART_STHR UART_SRBR
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define ICACHE_BASE         0x40000000U /* Cortex m4 ICache base address */
#define DCACHE_BASE         0x40004000U /* Cortex m4 DCache base address */
#define GRF_BASE            0x400B0000U /* GRF base address */
#define UART0_BASE          0x40800000U /* UART0 base address */
#define UART1_BASE          0x40810000U /* UART1 base address */
#define UART2_BASE          0x40820000U /* UART2 base address */
#define MBOX0_BASE          0x40100000U /* MAILBOX0 base address */
#define MBOX1_BASE          0x40110000U /* MAILBOX1 base address */
#define MBOX2_BASE          0x40120000U /* MAILBOX2 base address */
#define PMU_BASE            0x40130000U /* PMU base address */
#define SHAREMEM_BASE       0x40160000U /* SHAREMEM base address */
#define PWM0_BASE           0x40880000U /* PWM base address */
#define TIMER_BASE          0x40900000U /* TIMER base address */
#define WDT_BASE            0x40A00000U /* WDT base address */
#define SPI2APB_BASE        0x40C00000U /* SPI2APB base address */
#define SPI_BASE            0x40C10000U /* SPI base address */
#define SFC_BASE            0x40C80000U /* SFC base address */
#define MMC0_BASE           0x40C90000U /* MMC base address */
#define GPIO0_BASE          0x40D00000U /* GPIO0 base address */
#define GPIO1_BASE          0x40D10000U /* GPIO1 base address */
#define PDM0_BASE           0x41000000U /* PDM0 base address */
#define I2S0_BASE           0x41010000U /* I2S0 base address */
#define VAD_BASE            0x41020000U /* VAD base address */
#define I2S1_BASE           0x41030000U /* I2S1 base address */
#define VOP_BASE            0x41100000U /* VOP base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)
#define GRF                 ((struct GRF_REG *) GRF_BASE)
#define MBOX0               ((struct MBOX_REG *) MBOX0_BASE)
#define MBOX1               ((struct MBOX_REG *) MBOX1_BASE)
#define MBOX2               ((struct MBOX_REG *) MBOX2_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define SHAREMEM            ((struct SHAREMEM_REG *) SHAREMEM_BASE)
#define PWM0                ((struct PWM_REG *) PWM0_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER_BASE)
#define TIMER1              ((struct TIMER_REG *) (TIMER_BASE + 0x20))
#define TIMER2              ((struct TIMER_REG *) (TIMER_BASE + 0x40))
#define TIMER3              ((struct TIMER_REG *) (TIMER_BASE + 0x60))
#define TIMER4              ((struct TIMER_REG *) (TIMER_BASE + 0x80))
#define TIMER5              ((struct TIMER_REG *) (TIMER_BASE + 0xA0))
#define WDT                 ((struct WDT_REG *) WDT_BASE)
#define SPI2APB             ((struct SPI2APB_REG *) SPI2APB_BASE)
#define SPI0                ((struct SPI_REG *) SPI0_BASE)
#define SFC                 ((struct SFC_REG *) SFC_BASE)
#define MMC0                ((struct MMC_REG *) MMC0_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define PDM                 ((struct PDM_REG *) PDM_BASE)
#define I2S0                ((struct I2S_REG *) I2S0_BASE)
#define VAD                 ((struct VAD_REG *) VAD_BASE)
#define I2S1                ((struct I2S_REG *) I2S1_BASE)
#define VOP                 ((struct VOP_REG *) VOP_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)

#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_GRF_INSTANCE(instance) ((instance) == GRF)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_SHAREMEM_INSTANCE(instance) ((instance) == SHAREMEM)
#define IS_WDT_INSTANCE(instance) ((instance) == WDT)
#define IS_SPI2APB_INSTANCE(instance) ((instance) == SPI2APB)
#define IS_SFC_INSTANCE(instance) ((instance) == SFC)
#define IS_PDM_INSTANCE(instance) ((instance) == PDM)
#define IS_VAD_INSTANCE(instance) ((instance) == VAD)
#define IS_VOP_INSTANCE(instance) ((instance) == VOP)
#define IS_MBOX_INSTANCE(instance) (((instance) == MBOX0) || ((instance) == MBOX1) || ((instance) == MBOX2))
#define IS_PWM_INSTANCE(instance) ((instance) == PWM0)
#define IS_TIMER_INSTANCE(instance) ((instance) == TIMER0 || (instance) == TIMER1 || (instance) == TIMER2 || (instance) == TIMER3 || (instance) == TIMER4 || (instance) == TIMER5)
#define IS_SPI_INSTANCE(instance) ((instance) == SPI0)
#define IS_MMC_INSTANCE(instance) ((instance) == MMC0)
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1))
#define IS_I2S_INSTANCE(instance) (((instance) == I2S0) || ((instance) == I2S1))
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2))
/****************************************SHAREMEM****************************************/
/* RRA_SLT_LO */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT0_SHIFT                (0U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT0_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT0_SHIFT)                /* 0x0000000F */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT1_SHIFT                (4U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT1_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT1_SHIFT)                /* 0x000000F0 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT2_SHIFT                (8U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT2_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT2_SHIFT)                /* 0x00000F00 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT3_SHIFT                (12U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT3_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT3_SHIFT)                /* 0x0000F000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT4_SHIFT                (16U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT4_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT4_SHIFT)                /* 0x000F0000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT5_SHIFT                (20U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT5_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT5_SHIFT)                /* 0x00F00000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT6_SHIFT                (24U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT6_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT6_SHIFT)                /* 0x0F000000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT7_SHIFT                (28U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT7_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT7_SHIFT)                /* 0xF0000000 */
/* RRA_SLT_HI */
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT8_SHIFT                (0U)
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT8_MASK                 (0xFU << SHAREMEM_RRA_SLT_HI_REQ_SLOT8_SHIFT)                /* 0x0000000F */
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT9_SHIFT                (4U)
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT9_MASK                 (0xFU << SHAREMEM_RRA_SLT_HI_REQ_SLOT9_SHIFT)                /* 0x000000F0 */
/* RRA_WEIGHT_LO */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_SHIFT        (0U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_SHIFT)        /* 0x00000007 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_SHIFT        (4U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_SHIFT)        /* 0x00000070 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_SHIFT        (8U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_SHIFT)        /* 0x00000700 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_SHIFT        (12U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_SHIFT)        /* 0x00007000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_SHIFT        (16U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_SHIFT)        /* 0x00070000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_SHIFT        (20U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_SHIFT)        /* 0x00700000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_SHIFT        (24U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_SHIFT)        /* 0x07000000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_SHIFT        (28U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_SHIFT)        /* 0x70000000 */
/* RRA_WEIGHT_HI */
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_SHIFT        (0U)
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_SHIFT)        /* 0x00000007 */
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_SHIFT        (4U)
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_SHIFT)        /* 0x00000070 */
/* RRA_SLT_PRI */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_SHIFT   (0U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_SHIFT)   /* 0x0000000F */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_SHIFT   (4U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_SHIFT)   /* 0x000000F0 */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_SHIFT   (8U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_SHIFT)   /* 0x00000F00 */
/* CTRL */
#define SHAREMEM_CTRL_CFG_LOAD_EN_SHIFT                    (0U)
#define SHAREMEM_CTRL_CFG_LOAD_EN_MASK                     (0x1U << SHAREMEM_CTRL_CFG_LOAD_EN_SHIFT)                    /* 0x00000001 */
#define SHAREMEM_CTRL_FREE_RUN_MODE_SHIFT                  (1U)
#define SHAREMEM_CTRL_FREE_RUN_MODE_MASK                   (0x1U << SHAREMEM_CTRL_FREE_RUN_MODE_SHIFT)                  /* 0x00000002 */
#define SHAREMEM_CTRL_ADDR_ROUND_EN_SHIFT                  (2U)
#define SHAREMEM_CTRL_ADDR_ROUND_EN_MASK                   (0x1FU << SHAREMEM_CTRL_ADDR_ROUND_EN_SHIFT)                 /* 0x0000007C */
/* STATUS */
#define SHAREMEM_STATUS_AXISLV_ACTIVE_SHIFT                (0U)
#define SHAREMEM_STATUS_AXISLV_ACTIVE_MASK                 (0x1FU << SHAREMEM_STATUS_AXISLV_ACTIVE_SHIFT)               /* 0x0000001F */
#define SHAREMEM_STATUS_AXISLV_RRESPERR_SHIFT              (8U)
#define SHAREMEM_STATUS_AXISLV_RRESPERR_MASK               (0x1FU << SHAREMEM_STATUS_AXISLV_RRESPERR_SHIFT)             /* 0x00001F00 */
#define SHAREMEM_STATUS_AXISLV_WRESPERR_SHIFT              (16U)
#define SHAREMEM_STATUS_AXISLV_WRESPERR_MASK               (0x1FU << SHAREMEM_STATUS_AXISLV_WRESPERR_SHIFT)             /* 0x001F0000 */
#define SHAREMEM_STATUS_AXISLV_ADDR_ROUND_SHIFT            (24U)
#define SHAREMEM_STATUS_AXISLV_ADDR_ROUND_MASK             (0x1FU << SHAREMEM_STATUS_AXISLV_ADDR_ROUND_SHIFT)           /* 0x1F000000 */
/*****************************************ICACHE*****************************************/
/* CACHE_CTRL */
#define ICACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << ICACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (16U)
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00010000 */
/* CACHE_MAINTAIN0 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/*****************************************DCACHE*****************************************/
/* CACHE_CTRL */
#define DCACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << DCACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (16U)
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00010000 */
/* CACHE_MAINTAIN0 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/* CACHE LINE SIZE */
#define CACHE_LINE_SHIFT                (5U)
#define CACHE_LINE_SIZE                 (0x1U << CACHE_LINE_SHIFT)
#define CACHE_LINE_ADDR_MASK            (0xFFFFFFFFU << CACHE_LINE_SHIFT)
#define CACHE_M_CLEAN                   0x0U
#define CACHE_M_INVALID                 0x2U
#define CACHE_M_CLEAN_INVALID           0x4U
#define CACHE_M_INVALID_ALL             0x6U

#define CACHE_REVISION                  (0x00000100U)
/****************************************MAILBOX*****************************************/
/* A2B_INTEN */
#define MAILBOX_A2B_INTEN_INT0_SHIFT                       (0U)
#define MAILBOX_A2B_INTEN_INT0_MASK                        (0x1U << MAILBOX_A2B_INTEN_INT0_SHIFT)                       /* 0x00000001 */
#define MAILBOX_A2B_INTEN_INT1_SHIFT                       (1U)
#define MAILBOX_A2B_INTEN_INT1_MASK                        (0x1U << MAILBOX_A2B_INTEN_INT1_SHIFT)                       /* 0x00000002 */
#define MAILBOX_A2B_INTEN_INT2_SHIFT                       (2U)
#define MAILBOX_A2B_INTEN_INT2_MASK                        (0x1U << MAILBOX_A2B_INTEN_INT2_SHIFT)                       /* 0x00000004 */
#define MAILBOX_A2B_INTEN_INT3_SHIFT                       (3U)
#define MAILBOX_A2B_INTEN_INT3_MASK                        (0x1U << MAILBOX_A2B_INTEN_INT3_SHIFT)                       /* 0x00000008 */
/* A2B_STATUS */
#define MAILBOX_A2B_STATUS_INT0_SHIFT                      (0U)
#define MAILBOX_A2B_STATUS_INT0_MASK                       (0x1U << MAILBOX_A2B_STATUS_INT0_SHIFT)                      /* 0x00000001 */
#define MAILBOX_A2B_STATUS_INT1_SHIFT                      (1U)
#define MAILBOX_A2B_STATUS_INT1_MASK                       (0x1U << MAILBOX_A2B_STATUS_INT1_SHIFT)                      /* 0x00000002 */
#define MAILBOX_A2B_STATUS_INT2_SHIFT                      (2U)
#define MAILBOX_A2B_STATUS_INT2_MASK                       (0x1U << MAILBOX_A2B_STATUS_INT2_SHIFT)                      /* 0x00000004 */
#define MAILBOX_A2B_STATUS_INT3_SHIFT                      (3U)
#define MAILBOX_A2B_STATUS_INT3_MASK                       (0x1U << MAILBOX_A2B_STATUS_INT3_SHIFT)                      /* 0x00000008 */
/* A2B_CMD_0 */
#define MAILBOX_A2B_CMD_0_COMMAND_SHIFT                    (0U)
#define MAILBOX_A2B_CMD_0_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_A2B_CMD_0_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* A2B_DAT_0 */
#define MAILBOX_A2B_DAT_0_DATA_SHIFT                       (0U)
#define MAILBOX_A2B_DAT_0_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_A2B_DAT_0_DATA_SHIFT)                /* 0xFFFFFFFF */
/* A2B_CMD_1 */
#define MAILBOX_A2B_CMD_1_COMMAND_SHIFT                    (0U)
#define MAILBOX_A2B_CMD_1_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_A2B_CMD_1_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* A2B_DAT_1 */
#define MAILBOX_A2B_DAT_1_DATA_SHIFT                       (0U)
#define MAILBOX_A2B_DAT_1_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_A2B_DAT_1_DATA_SHIFT)                /* 0xFFFFFFFF */
/* A2B_CMD_2 */
#define MAILBOX_A2B_CMD_2_COMMAND_SHIFT                    (0U)
#define MAILBOX_A2B_CMD_2_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_A2B_CMD_2_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* A2B_DAT_2 */
#define MAILBOX_A2B_DAT_2_DATA_SHIFT                       (0U)
#define MAILBOX_A2B_DAT_2_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_A2B_DAT_2_DATA_SHIFT)                /* 0xFFFFFFFF */
/* A2B_CMD_3 */
#define MAILBOX_A2B_CMD_3_COMMAND_SHIFT                    (0U)
#define MAILBOX_A2B_CMD_3_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_A2B_CMD_3_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* A2B_DAT_3 */
#define MAILBOX_A2B_DAT_3_DATA_SHIFT                       (0U)
#define MAILBOX_A2B_DAT_3_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_A2B_DAT_3_DATA_SHIFT)                /* 0xFFFFFFFF */
/* B2A_INTEN */
#define MAILBOX_B2A_INTEN_INT0_SHIFT                       (0U)
#define MAILBOX_B2A_INTEN_INT0_MASK                        (0x1U << MAILBOX_B2A_INTEN_INT0_SHIFT)                       /* 0x00000001 */
#define MAILBOX_B2A_INTEN_INT1_SHIFT                       (1U)
#define MAILBOX_B2A_INTEN_INT1_MASK                        (0x1U << MAILBOX_B2A_INTEN_INT1_SHIFT)                       /* 0x00000002 */
#define MAILBOX_B2A_INTEN_INT2_SHIFT                       (2U)
#define MAILBOX_B2A_INTEN_INT2_MASK                        (0x1U << MAILBOX_B2A_INTEN_INT2_SHIFT)                       /* 0x00000004 */
#define MAILBOX_B2A_INTEN_INT3_SHIFT                       (3U)
#define MAILBOX_B2A_INTEN_INT3_MASK                        (0x1U << MAILBOX_B2A_INTEN_INT3_SHIFT)                       /* 0x00000008 */
/* B2A_STATUS */
#define MAILBOX_B2A_STATUS_INT0_SHIFT                      (0U)
#define MAILBOX_B2A_STATUS_INT0_MASK                       (0x1U << MAILBOX_B2A_STATUS_INT0_SHIFT)                      /* 0x00000001 */
#define MAILBOX_B2A_STATUS_INT1_SHIFT                      (1U)
#define MAILBOX_B2A_STATUS_INT1_MASK                       (0x1U << MAILBOX_B2A_STATUS_INT1_SHIFT)                      /* 0x00000002 */
#define MAILBOX_B2A_STATUS_INT2_SHIFT                      (2U)
#define MAILBOX_B2A_STATUS_INT2_MASK                       (0x1U << MAILBOX_B2A_STATUS_INT2_SHIFT)                      /* 0x00000004 */
#define MAILBOX_B2A_STATUS_INT3_SHIFT                      (3U)
#define MAILBOX_B2A_STATUS_INT3_MASK                       (0x1U << MAILBOX_B2A_STATUS_INT3_SHIFT)                      /* 0x00000008 */
/* B2A_CMD_0 */
#define MAILBOX_B2A_CMD_0_COMMAND_SHIFT                    (0U)
#define MAILBOX_B2A_CMD_0_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_B2A_CMD_0_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* B2A_DAT_0 */
#define MAILBOX_B2A_DAT_0_DATA_SHIFT                       (0U)
#define MAILBOX_B2A_DAT_0_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_B2A_DAT_0_DATA_SHIFT)                /* 0xFFFFFFFF */
/* B2A_CMD_1 */
#define MAILBOX_B2A_CMD_1_COMMAND_SHIFT                    (0U)
#define MAILBOX_B2A_CMD_1_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_B2A_CMD_1_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* B2A_DAT_1 */
#define MAILBOX_B2A_DAT_1_DATA_SHIFT                       (0U)
#define MAILBOX_B2A_DAT_1_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_B2A_DAT_1_DATA_SHIFT)                /* 0xFFFFFFFF */
/* B2A_CMD_2 */
#define MAILBOX_B2A_CMD_2_COMMAND_SHIFT                    (0U)
#define MAILBOX_B2A_CMD_2_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_B2A_CMD_2_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* B2A_DAT_2 */
#define MAILBOX_B2A_DAT_2_DATA_SHIFT                       (0U)
#define MAILBOX_B2A_DAT_2_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_B2A_DAT_2_DATA_SHIFT)                /* 0xFFFFFFFF */
/* B2A_CMD_3 */
#define MAILBOX_B2A_CMD_3_COMMAND_SHIFT                    (0U)
#define MAILBOX_B2A_CMD_3_COMMAND_MASK                     (0xFFFFFFFFU << MAILBOX_B2A_CMD_3_COMMAND_SHIFT)             /* 0xFFFFFFFF */
/* B2A_DAT_3 */
#define MAILBOX_B2A_DAT_3_DATA_SHIFT                       (0U)
#define MAILBOX_B2A_DAT_3_DATA_MASK                        (0xFFFFFFFFU << MAILBOX_B2A_DAT_3_DATA_SHIFT)                /* 0xFFFFFFFF */
/* ATOMIC_LOCK_00 */
#define MAILBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_01 */
#define MAILBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_02 */
#define MAILBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_03 */
#define MAILBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_04 */
#define MAILBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_05 */
#define MAILBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_06 */
#define MAILBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_07 */
#define MAILBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_08 */
#define MAILBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_09 */
#define MAILBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_10 */
#define MAILBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_11 */
#define MAILBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_12 */
#define MAILBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_13 */
#define MAILBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_14 */
#define MAILBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_15 */
#define MAILBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_16 */
#define MAILBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_17 */
#define MAILBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_18 */
#define MAILBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_19 */
#define MAILBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_20 */
#define MAILBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_21 */
#define MAILBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_22 */
#define MAILBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_23 */
#define MAILBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_24 */
#define MAILBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_25 */
#define MAILBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_26 */
#define MAILBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_27 */
#define MAILBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_28 */
#define MAILBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_29 */
#define MAILBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_30 */
#define MAILBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT)        /* 0x00000001 */
/* ATOMIC_LOCK_31 */
#define MAILBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT        (0U)
#define MAILBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_MASK         (0x1U << MAILBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT)        /* 0x00000001 */
/******************************************PWM*******************************************/
/* PWM0_CNT */
#define PWM_PWM0_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM0_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM0_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM0_PERIOD_HPR */
#define PWM_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM0_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM0_DUTY_LPR */
#define PWM_PWM0_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM0_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM0_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM0_CTRL */
#define PWM_PWM0_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM0_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM0_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM0_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM0_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM0_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM0_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM0_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM0_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM0_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM0_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM0_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM0_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM0_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM0_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM0_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM0_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM0_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM0_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM0_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM0_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM0_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM0_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM0_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM0_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM0_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM0_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM0_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM0_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM0_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM0_CTRL_RPT_MASK                             (0xFFU << PWM_PWM0_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM1_CNT */
#define PWM_PWM1_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM1_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM1_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM1_PERIOD_HPR */
#define PWM_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM1_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM1_DUTY_LPR */
#define PWM_PWM1_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM1_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM1_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM1_CTRL */
#define PWM_PWM1_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM1_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM1_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM1_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM1_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM1_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM1_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM1_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM1_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM1_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM1_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM1_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM1_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM1_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM1_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM1_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM1_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM1_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM1_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM1_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM1_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM1_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM1_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM1_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM1_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM1_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM1_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM1_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM1_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM1_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM1_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM1_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM1_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM1_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM1_CTRL_RPT_MASK                             (0xFFU << PWM_PWM1_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM2_CNT */
#define PWM_PWM2_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM2_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM2_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM2_PERIOD_HPR */
#define PWM_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM2_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM2_DUTY_LPR */
#define PWM_PWM2_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM2_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM2_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM2_CTRL */
#define PWM_PWM2_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM2_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM2_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM2_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM2_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM2_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM2_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM2_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM2_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM2_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM2_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM2_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM2_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM2_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM2_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM2_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM2_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM2_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM2_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM2_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM2_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM2_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM2_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM2_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM2_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM2_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM2_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM2_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM2_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM2_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM2_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM2_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM2_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM2_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM2_CTRL_RPT_MASK                             (0xFFU << PWM_PWM2_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM3_CNT */
#define PWM_PWM3_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM3_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM3_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM3_PERIOD_HPR */
#define PWM_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM3_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM3_DUTY_LPR */
#define PWM_PWM3_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM3_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM3_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM3_CTRL */
#define PWM_PWM3_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM3_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM3_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM3_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM3_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM3_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM3_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM3_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM3_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM3_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM3_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM3_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM3_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM3_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM3_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM3_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM3_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM3_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM3_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM3_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM3_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM3_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM3_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM3_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM3_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM3_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM3_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM3_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM3_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM3_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM3_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM3_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM3_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM3_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM3_CTRL_RPT_MASK                             (0xFFU << PWM_PWM3_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* INTSTS */
#define PWM_INTSTS_CH0_INTSTS_SHIFT                        (0U)
#define PWM_INTSTS_CH0_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH0_INTSTS_SHIFT)                        /* 0x00000001 */
#define PWM_INTSTS_CH1_INTSTS_SHIFT                        (1U)
#define PWM_INTSTS_CH1_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH1_INTSTS_SHIFT)                        /* 0x00000002 */
#define PWM_INTSTS_CH2_INTSTS_SHIFT                        (2U)
#define PWM_INTSTS_CH2_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH2_INTSTS_SHIFT)                        /* 0x00000004 */
#define PWM_INTSTS_CH3_INTSTS_SHIFT                        (3U)
#define PWM_INTSTS_CH3_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH3_INTSTS_SHIFT)                        /* 0x00000008 */
#define PWM_INTSTS_CH0_PWR_INTSTS_SHIFT                    (4U)
#define PWM_INTSTS_CH0_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH0_PWR_INTSTS_SHIFT)                    /* 0x00000010 */
#define PWM_INTSTS_CH1_PWR_INTSTS_SHIFT                    (5U)
#define PWM_INTSTS_CH1_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH1_PWR_INTSTS_SHIFT)                    /* 0x00000020 */
#define PWM_INTSTS_CH2_PWR_INTSTS_SHIFT                    (6U)
#define PWM_INTSTS_CH2_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH2_PWR_INTSTS_SHIFT)                    /* 0x00000040 */
#define PWM_INTSTS_CH3_PWR_INTSTS_SHIFT                    (7U)
#define PWM_INTSTS_CH3_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH3_PWR_INTSTS_SHIFT)                    /* 0x00000080 */
#define PWM_INTSTS_CH0_POL_SHIFT                           (8U)
#define PWM_INTSTS_CH0_POL_MASK                            (0x1U << PWM_INTSTS_CH0_POL_SHIFT)                           /* 0x00000100 */
#define PWM_INTSTS_CH1_POL_SHIFT                           (9U)
#define PWM_INTSTS_CH1_POL_MASK                            (0x1U << PWM_INTSTS_CH1_POL_SHIFT)                           /* 0x00000200 */
#define PWM_INTSTS_CH2_POL_SHIFT                           (10U)
#define PWM_INTSTS_CH2_POL_MASK                            (0x1U << PWM_INTSTS_CH2_POL_SHIFT)                           /* 0x00000400 */
#define PWM_INTSTS_CH3_POL_SHIFT                           (11U)
#define PWM_INTSTS_CH3_POL_MASK                            (0x1U << PWM_INTSTS_CH3_POL_SHIFT)                           /* 0x00000800 */
/* INT_EN */
#define PWM_INT_EN_CH0_INT_EN_SHIFT                        (0U)
#define PWM_INT_EN_CH0_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH0_INT_EN_SHIFT)                        /* 0x00000001 */
#define PWM_INT_EN_CH1_INT_EN_SHIFT                        (1U)
#define PWM_INT_EN_CH1_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH1_INT_EN_SHIFT)                        /* 0x00000002 */
#define PWM_INT_EN_CH2_INT_EN_SHIFT                        (2U)
#define PWM_INT_EN_CH2_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH2_INT_EN_SHIFT)                        /* 0x00000004 */
#define PWM_INT_EN_CH3_INT_EN_SHIFT                        (3U)
#define PWM_INT_EN_CH3_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH3_INT_EN_SHIFT)                        /* 0x00000008 */
#define PWM_INT_EN_CH0_PWR_INT_EN_SHIFT                    (4U)
#define PWM_INT_EN_CH0_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH0_PWR_INT_EN_SHIFT)                    /* 0x00000010 */
#define PWM_INT_EN_CH1_PWR_INT_EN_SHIFT                    (5U)
#define PWM_INT_EN_CH1_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH1_PWR_INT_EN_SHIFT)                    /* 0x00000020 */
#define PWM_INT_EN_CH2_PWR_INT_EN_SHIFT                    (6U)
#define PWM_INT_EN_CH2_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH2_PWR_INT_EN_SHIFT)                    /* 0x00000040 */
#define PWM_INT_EN_CH3_PWR_INT_EN_SHIFT                    (7U)
#define PWM_INT_EN_CH3_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH3_PWR_INT_EN_SHIFT)                    /* 0x00000080 */
/* FIFO_CTRL */
#define PWM_FIFO_CTRL_FIFO_MODE_SEL_SHIFT                  (0U)
#define PWM_FIFO_CTRL_FIFO_MODE_SEL_MASK                   (0x1U << PWM_FIFO_CTRL_FIFO_MODE_SEL_SHIFT)                  /* 0x00000001 */
#define PWM_FIFO_CTRL_FULL_INT_EN_SHIFT                    (1U)
#define PWM_FIFO_CTRL_FULL_INT_EN_MASK                     (0x1U << PWM_FIFO_CTRL_FULL_INT_EN_SHIFT)                    /* 0x00000002 */
#define PWM_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT                (2U)
#define PWM_FIFO_CTRL_OVERFLOW_INT_EN_MASK                 (0x1U << PWM_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT)                /* 0x00000004 */
#define PWM_FIFO_CTRL_WATERMARK_INT_EN_SHIFT               (3U)
#define PWM_FIFO_CTRL_WATERMARK_INT_EN_MASK                (0x1U << PWM_FIFO_CTRL_WATERMARK_INT_EN_SHIFT)               /* 0x00000008 */
#define PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT          (4U)
#define PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_MASK           (0x7U << PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT)          /* 0x00000070 */
#define PWM_FIFO_CTRL_DMA_MODE_EN_SHIFT                    (8U)
#define PWM_FIFO_CTRL_DMA_MODE_EN_MASK                     (0x1U << PWM_FIFO_CTRL_DMA_MODE_EN_SHIFT)                    /* 0x00000100 */
#define PWM_FIFO_CTRL_TIMEOUT_EN_SHIFT                     (9U)
#define PWM_FIFO_CTRL_TIMEOUT_EN_MASK                      (0x1U << PWM_FIFO_CTRL_TIMEOUT_EN_SHIFT)                     /* 0x00000200 */
#define PWM_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT                  (10U)
#define PWM_FIFO_CTRL_DMA_CH_SEL_EN_MASK                   (0x1U << PWM_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT)                  /* 0x00000400 */
#define PWM_FIFO_CTRL_DMA_CH_SEL_SHIFT                     (12U)
#define PWM_FIFO_CTRL_DMA_CH_SEL_MASK                      (0x3U << PWM_FIFO_CTRL_DMA_CH_SEL_SHIFT)                     /* 0x00003000 */
/* FIFO_INTSTS */
#define PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT             (0U)
#define PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_MASK              (0x1U << PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT)             /* 0x00000001 */
#define PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT         (1U)
#define PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_MASK          (0x1U << PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT)         /* 0x00000002 */
#define PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT   (2U)
#define PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_MASK    (0x1U << PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT)   /* 0x00000004 */
#define PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT              (3U)
#define PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_MASK               (0x1U << PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT)              /* 0x00000008 */
#define PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT            (4U)
#define PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_MASK             (0x1U << PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT)            /* 0x00000010 */
/* FIFO_TOUTTHR */
#define PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT           (0U)
#define PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_MASK            (0xFFFFFU << PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT)       /* 0x000FFFFF */
/* VERSION_ID */
#define PWM_VERSION_ID_SVN_VERSION_SHIFT                   (0U)
#define PWM_VERSION_ID_SVN_VERSION_MASK                    (0xFFFFU << PWM_VERSION_ID_SVN_VERSION_SHIFT)                /* 0x0000FFFF */
#define PWM_VERSION_ID_MINOR_VERSION_SHIFT                 (16U)
#define PWM_VERSION_ID_MINOR_VERSION_MASK                  (0xFFU << PWM_VERSION_ID_MINOR_VERSION_SHIFT)                /* 0x00FF0000 */
#define PWM_VERSION_ID_MAIN_VERSION_SHIFT                  (24U)
#define PWM_VERSION_ID_MAIN_VERSION_MASK                   (0xFFU << PWM_VERSION_ID_MAIN_VERSION_SHIFT)                 /* 0xFF000000 */
/* FIFO */
#define PWM_FIFO_CYCLE_CNT_SHIFT                           (0U)
#define PWM_FIFO_CYCLE_CNT_MASK                            (0x7FFFFFFFU << PWM_FIFO_CYCLE_CNT_SHIFT)                    /* 0x7FFFFFFF */
#define PWM_FIFO_POL_SHIFT                                 (31U)
#define PWM_FIFO_POL_MASK                                  (0x1U << PWM_FIFO_POL_SHIFT)                                 /* 0x80000000 */
/* PWRMATCH_CTRL */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT          (3U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_MASK           (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT)          /* 0x00000008 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT        (7U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_MASK         (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT)        /* 0x00000080 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT    (11U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_MASK     (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT)    /* 0x00000800 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT        (15U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_MASK         (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT)        /* 0x00008000 */
/* PWRMATCH_LPRE */
#define PWM_PWRMATCH_LPRE_CNT_MIN_SHIFT                    (0U)
#define PWM_PWRMATCH_LPRE_CNT_MIN_MASK                     (0xFFFFU << PWM_PWRMATCH_LPRE_CNT_MIN_SHIFT)                 /* 0x0000FFFF */
#define PWM_PWRMATCH_LPRE_CNT_MAX_SHIFT                    (16U)
#define PWM_PWRMATCH_LPRE_CNT_MAX_MASK                     (0xFFFFU << PWM_PWRMATCH_LPRE_CNT_MAX_SHIFT)                 /* 0xFFFF0000 */
/* PWRMATCH_HPRE */
#define PWM_PWRMATCH_HPRE_CNT_MIN_SHIFT                    (0U)
#define PWM_PWRMATCH_HPRE_CNT_MIN_MASK                     (0xFFFFU << PWM_PWRMATCH_HPRE_CNT_MIN_SHIFT)                 /* 0x0000FFFF */
#define PWM_PWRMATCH_HPRE_CNT_MAX_SHIFT                    (16U)
#define PWM_PWRMATCH_HPRE_CNT_MAX_MASK                     (0xFFFFU << PWM_PWRMATCH_HPRE_CNT_MAX_SHIFT)                 /* 0xFFFF0000 */
/* PWRMATCH_LD */
#define PWM_PWRMATCH_LD_CNT_MIN_SHIFT                      (0U)
#define PWM_PWRMATCH_LD_CNT_MIN_MASK                       (0xFFFFU << PWM_PWRMATCH_LD_CNT_MIN_SHIFT)                   /* 0x0000FFFF */
#define PWM_PWRMATCH_LD_CNT_MAX_SHIFT                      (16U)
#define PWM_PWRMATCH_LD_CNT_MAX_MASK                       (0xFFFFU << PWM_PWRMATCH_LD_CNT_MAX_SHIFT)                   /* 0xFFFF0000 */
/* PWRMATCH_HD_ZERO */
#define PWM_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT                 (0U)
#define PWM_PWRMATCH_HD_ZERO_CNT_MIN_MASK                  (0xFFFFU << PWM_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT)              /* 0x0000FFFF */
#define PWM_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT                 (16U)
#define PWM_PWRMATCH_HD_ZERO_CNT_MAX_MASK                  (0xFFFFU << PWM_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT)              /* 0xFFFF0000 */
/* PWRMATCH_HD_ONE */
#define PWM_PWRMATCH_HD_ONE_CNT_MIN_SHIFT                  (0U)
#define PWM_PWRMATCH_HD_ONE_CNT_MIN_MASK                   (0xFFFFU << PWM_PWRMATCH_HD_ONE_CNT_MIN_SHIFT)               /* 0x0000FFFF */
#define PWM_PWRMATCH_HD_ONE_CNT_MAX_SHIFT                  (16U)
#define PWM_PWRMATCH_HD_ONE_CNT_MAX_MASK                   (0xFFFFU << PWM_PWRMATCH_HD_ONE_CNT_MAX_SHIFT)               /* 0xFFFF0000 */
/* PWRMATCH_VALUE0 */
#define PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE1 */
#define PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE2 */
#define PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE3 */
#define PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE4 */
#define PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE5 */
#define PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE6 */
#define PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE7 */
#define PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE8 */
#define PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE9 */
#define PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_SHIFT       (0U)
#define PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_MASK        (0xFFFFFFFFU << PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWM3_PWRCAPTURE_VALUE */
#define PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT (0U)
#define PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_MASK (0xFFFFFFFFU << PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT) /* 0xFFFFFFFF */
/* FILTER_CTRL */
#define PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT      (0U)
#define PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000001 */
#define PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT      (1U)
#define PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000002 */
#define PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT      (2U)
#define PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000004 */
#define PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT      (3U)
#define PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000008 */
#define PWM_FILTER_CTRL_FILTER_NUMBER_SHIFT                (4U)
#define PWM_FILTER_CTRL_FILTER_NUMBER_MASK                 (0x1FFU << PWM_FILTER_CTRL_FILTER_NUMBER_SHIFT)              /* 0x00001FF0 */
/*****************************************TIMER******************************************/
#define TIMERN_CONTROLREG_EN_SHIFT                          (0U)
#define TIMERN_CONTROLREG_EN__MASK                          (0x1U << TIMERN_CONTROLREG_EN_SHIFT)
#define TIMERN_CONTROLREG_EN_DISABLE                        (0x0U << TIMERN_CONTROLREG_EN_SHIFT)
#define TIMERN_CONTROLREG_EN_ENABLE                         (0x1U << TIMERN_CONTROLREG_EN_SHIFT)

#define TIMERN_CONTROLREG_MODE_SHIFT                        (1U)
#define TIMERN_CONTROLREG_MODE__MASK                        (0x1U << TIMERN_CONTROLREG_MODE_SHIFT)
#define TIMERN_CONTROLREG_MODE_FREE_RUNNING                 (0x0U << TIMERN_CONTROLREG_MODE_SHIFT)
#define TIMERN_CONTROLREG_MODE_USER_DEFINED                 (0x0U << TIMERN_CONTROLREG_MODE_SHIFT)

#define TIMERN_CONTROLREG_MASK_SHIFT                        (2U)
#define TIMERN_CONTROLREG_MASK__MASK                        (0x1U << TIMERN_CONTROLREG_MASK_SHIFT)
#define TIMERN_CONTROLREG_MASK_MASK                         (0x0U << TIMERN_CONTROLREG_MASK_SHIFT)
#define TIMERN_CONTROLREG_MASK_UNMASK                       (0x1U << TIMERN_CONTROLREG_MASK_SHIFT)
/******************************************WDT*******************************************/
/* WDT_CR */
#define WDT_WDT_CR_WDT_EN_SHIFT                            (0U)
#define WDT_WDT_CR_WDT_EN_MASK                             (0x1U << WDT_WDT_CR_WDT_EN_SHIFT)                            /* 0x00000001 */
#define WDT_WDT_CR_RESP_MODE_SHIFT                         (1U)
#define WDT_WDT_CR_RESP_MODE_MASK                          (0x1U << WDT_WDT_CR_RESP_MODE_SHIFT)                         /* 0x00000002 */
#define WDT_WDT_CR_RST_PLUSE_LENTH_SHIFT                   (2U)
#define WDT_WDT_CR_RST_PLUSE_LENTH_MASK                    (0x3U << WDT_WDT_CR_RST_PLUSE_LENTH_SHIFT)                   /* 0x0000000C */
/* WDT_TORR */
#define WDT_WDT_TORR_TIMEOUT_PERIOD_SHIFT                  (0U)
#define WDT_WDT_TORR_TIMEOUT_PERIOD_MASK                   (0xFU << WDT_WDT_TORR_TIMEOUT_PERIOD_SHIFT)                  /* 0x0000000F */
/* WDT_CCVR */
#define WDT_WDT_CCVR_CUR_CNT_SHIFT                         (0U)
#define WDT_WDT_CCVR_CUR_CNT_MASK                          (0xFFFFFFFFU << WDT_WDT_CCVR_CUR_CNT_SHIFT)                  /* 0xFFFFFFFF */
/* WDT_CRR */
#define WDT_WDT_CRR_CNT_RESTART_SHIFT                      (0U)
#define WDT_WDT_CRR_CNT_RESTART_MASK                       (0xFFU << WDT_WDT_CRR_CNT_RESTART_SHIFT)                     /* 0x000000FF */
/* WDT_STAT */
#define WDT_WDT_STAT_WDT_STATUS_SHIFT                      (0U)
#define WDT_WDT_STAT_WDT_STATUS_MASK                       (0x1U << WDT_WDT_STAT_WDT_STATUS_SHIFT)                      /* 0x00000001 */
/* WDT_EOI */
#define WDT_WDT_EOI_WDT_INT_CLR_SHIFT                      (0U)
#define WDT_WDT_EOI_WDT_INT_CLR_MASK                       (0x1U << WDT_WDT_EOI_WDT_INT_CLR_SHIFT)                      /* 0x00000001 */
/****************************************SPI2APB*****************************************/
/* CTRL0 */
#define SPI2APB_CTRL0_FBM_SHIFT                            (0U)
#define SPI2APB_CTRL0_FBM_MASK                             (0x1U << SPI2APB_CTRL0_FBM_SHIFT)                            /* 0x00000001 */
#define SPI2APB_CTRL0_EM_SHIFT                             (1U)
#define SPI2APB_CTRL0_EM_MASK                              (0x1U << SPI2APB_CTRL0_EM_SHIFT)                             /* 0x00000002 */
#define SPI2APB_CTRL0_RXCP_SHIFT                           (2U)
#define SPI2APB_CTRL0_RXCP_MASK                            (0x1U << SPI2APB_CTRL0_RXCP_SHIFT)                           /* 0x00000004 */
#define SPI2APB_CTRL0_TXCP_SHIFT                           (3U)
#define SPI2APB_CTRL0_TXCP_MASK                            (0x1U << SPI2APB_CTRL0_TXCP_SHIFT)                           /* 0x00000008 */
/* SR */
#define SPI2APB_SR_BSF_SHIFT                               (0U)
#define SPI2APB_SR_BSF_MASK                                (0x1U << SPI2APB_SR_BSF_SHIFT)                               /* 0x00000001 */
#define SPI2APB_SR_TFF_SHIFT                               (1U)
#define SPI2APB_SR_TFF_MASK                                (0x1U << SPI2APB_SR_TFF_SHIFT)                               /* 0x00000002 */
#define SPI2APB_SR_TFE_SHIFT                               (2U)
#define SPI2APB_SR_TFE_MASK                                (0x1U << SPI2APB_SR_TFE_SHIFT)                               /* 0x00000004 */
#define SPI2APB_SR_RFF_SHIFT                               (3U)
#define SPI2APB_SR_RFF_MASK                                (0x1U << SPI2APB_SR_RFF_SHIFT)                               /* 0x00000008 */
#define SPI2APB_SR_RFE_SHIFT                               (4U)
#define SPI2APB_SR_RFE_MASK                                (0x1U << SPI2APB_SR_RFE_SHIFT)                               /* 0x00000010 */
/* IMR */
#define SPI2APB_IMR_QWIM_SHIFT                             (0U)
#define SPI2APB_IMR_QWIM_MASK                              (0x1U << SPI2APB_IMR_QWIM_SHIFT)                             /* 0x00000001 */
/* RISR */
#define SPI2APB_RISR_QWRIS_SHIFT                           (0U)
#define SPI2APB_RISR_QWRIS_MASK                            (0x1U << SPI2APB_RISR_QWRIS_SHIFT)                           /* 0x00000001 */
/* ICR */
#define SPI2APB_ICR_CQWI_SHIFT                             (0U)
#define SPI2APB_ICR_CQWI_MASK                              (0x1U << SPI2APB_ICR_CQWI_SHIFT)                             /* 0x00000001 */
/* VERSION */
#define SPI2APB_VERSION_VERSION_SHIFT                      (0U)
#define SPI2APB_VERSION_VERSION_MASK                       (0xFFFFFFFFU << SPI2APB_VERSION_VERSION_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG0 */
#define SPI2APB_QUICK_REG0_QWV0_SHIFT                      (0U)
#define SPI2APB_QUICK_REG0_QWV0_MASK                       (0xFFFFFFFFU << SPI2APB_QUICK_REG0_QWV0_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG1 */
#define SPI2APB_QUICK_REG1_QWV1_SHIFT                      (0U)
#define SPI2APB_QUICK_REG1_QWV1_MASK                       (0xFFFFFFFFU << SPI2APB_QUICK_REG1_QWV1_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG2 */
#define SPI2APB_QUICK_REG2_QRV_SHIFT                       (0U)
#define SPI2APB_QUICK_REG2_QRV_MASK                        (0xFFFFFFFFU << SPI2APB_QUICK_REG2_QRV_SHIFT)                /* 0xFFFFFFFF */
/******************************************SPI*******************************************/
/* CTRLR0 */
#define SPI_CTRLR0_DFS_SHIFT                               (0U)
#define SPI_CTRLR0_DFS_MASK                                (0x3U << SPI_CTRLR0_DFS_SHIFT)                               /* 0x00000003 */
#define SPI_CTRLR0_CFS_SHIFT                               (2U)
#define SPI_CTRLR0_CFS_MASK                                (0xFU << SPI_CTRLR0_CFS_SHIFT)                               /* 0x0000003C */
#define SPI_CTRLR0_SCPH_SHIFT                              (6U)
#define SPI_CTRLR0_SCPH_MASK                               (0x1U << SPI_CTRLR0_SCPH_SHIFT)                              /* 0x00000040 */
#define SPI_CTRLR0_SCPOL_SHIFT                             (7U)
#define SPI_CTRLR0_SCPOL_MASK                              (0x1U << SPI_CTRLR0_SCPOL_SHIFT)                             /* 0x00000080 */
#define SPI_CTRLR0_CSM_SHIFT                               (8U)
#define SPI_CTRLR0_CSM_MASK                                (0x3U << SPI_CTRLR0_CSM_SHIFT)                               /* 0x00000300 */
#define SPI_CTRLR0_SSD_SHIFT                               (10U)
#define SPI_CTRLR0_SSD_MASK                                (0x1U << SPI_CTRLR0_SSD_SHIFT)                               /* 0x00000400 */
#define SPI_CTRLR0_EM_SHIFT                                (11U)
#define SPI_CTRLR0_EM_MASK                                 (0x1U << SPI_CTRLR0_EM_SHIFT)                                /* 0x00000800 */
#define SPI_CTRLR0_FBM_SHIFT                               (12U)
#define SPI_CTRLR0_FBM_MASK                                (0x1U << SPI_CTRLR0_FBM_SHIFT)                               /* 0x00001000 */
#define SPI_CTRLR0_BHT_SHIFT                               (13U)
#define SPI_CTRLR0_BHT_MASK                                (0x1U << SPI_CTRLR0_BHT_SHIFT)                               /* 0x00002000 */
#define SPI_CTRLR0_RSD_SHIFT                               (14U)
#define SPI_CTRLR0_RSD_MASK                                (0x3U << SPI_CTRLR0_RSD_SHIFT)                               /* 0x0000C000 */
#define SPI_CTRLR0_FRF_SHIFT                               (16U)
#define SPI_CTRLR0_FRF_MASK                                (0x3U << SPI_CTRLR0_FRF_SHIFT)                               /* 0x00030000 */
#define SPI_CTRLR0_XFM_SHIFT                               (18U)
#define SPI_CTRLR0_XFM_MASK                                (0x3U << SPI_CTRLR0_XFM_SHIFT)                               /* 0x000C0000 */
#define SPI_CTRLR0_OPM_SHIFT                               (20U)
#define SPI_CTRLR0_OPM_MASK                                (0x1U << SPI_CTRLR0_OPM_SHIFT)                               /* 0x00100000 */
#define SPI_CTRLR0_MTM_SHIFT                               (21U)
#define SPI_CTRLR0_MTM_MASK                                (0x1U << SPI_CTRLR0_MTM_SHIFT)                               /* 0x00200000 */
/* CTRLR1 */
#define SPI_CTRLR1_NDM_SHIFT                               (0U)
#define SPI_CTRLR1_NDM_MASK                                (0xFFFFU << SPI_CTRLR1_NDM_SHIFT)                            /* 0x0000FFFF */
/* ENR */
#define SPI_ENR_ENR_SHIFT                                  (0U)
#define SPI_ENR_ENR_MASK                                   (0x1U << SPI_ENR_ENR_SHIFT)                                  /* 0x00000001 */
/* SER */
#define SPI_SER_SER_SHIFT                                  (0U)
#define SPI_SER_SER_MASK                                   (0x3U << SPI_SER_SER_SHIFT)                                  /* 0x00000003 */
/* BAUDR */
#define SPI_BAUDR_BAUDR_SHIFT                              (0U)
#define SPI_BAUDR_BAUDR_MASK                               (0xFFFFU << SPI_BAUDR_BAUDR_SHIFT)                           /* 0x0000FFFF */
/* TXFTLR */
#define SPI_TXFTLR_TXFTLR_SHIFT                            (0U)
#define SPI_TXFTLR_TXFTLR_MASK                             (0x1FU << SPI_TXFTLR_TXFTLR_SHIFT)                           /* 0x0000001F */
/* RXFTLR */
#define SPI_RXFTLR_RXFTLR_SHIFT                            (0U)
#define SPI_RXFTLR_RXFTLR_MASK                             (0x1FU << SPI_RXFTLR_RXFTLR_SHIFT)                           /* 0x0000001F */
/* TXFLR */
#define SPI_TXFLR_TXFLR_SHIFT                              (0U)
#define SPI_TXFLR_TXFLR_MASK                               (0x3FU << SPI_TXFLR_TXFLR_SHIFT)                             /* 0x0000003F */
/* RXFLR */
#define SPI_RXFLR_RXFLR_SHIFT                              (0U)
#define SPI_RXFLR_RXFLR_MASK                               (0x3FU << SPI_RXFLR_RXFLR_SHIFT)                             /* 0x0000003F */
/* SR */
#define SPI_SR_BSF_SHIFT                                   (0U)
#define SPI_SR_BSF_MASK                                    (0x1U << SPI_SR_BSF_SHIFT)                                   /* 0x00000001 */
#define SPI_SR_TFF_SHIFT                                   (1U)
#define SPI_SR_TFF_MASK                                    (0x1U << SPI_SR_TFF_SHIFT)                                   /* 0x00000002 */
#define SPI_SR_TFE_SHIFT                                   (2U)
#define SPI_SR_TFE_MASK                                    (0x1U << SPI_SR_TFE_SHIFT)                                   /* 0x00000004 */
#define SPI_SR_RFE_SHIFT                                   (3U)
#define SPI_SR_RFE_MASK                                    (0x1U << SPI_SR_RFE_SHIFT)                                   /* 0x00000008 */
#define SPI_SR_RFF_SHIFT                                   (4U)
#define SPI_SR_RFF_MASK                                    (0x1U << SPI_SR_RFF_SHIFT)                                   /* 0x00000010 */
/* IPR */
#define SPI_IPR_IPR_SHIFT                                  (0U)
#define SPI_IPR_IPR_MASK                                   (0x1U << SPI_IPR_IPR_SHIFT)                                  /* 0x00000001 */
/* IMR */
#define SPI_IMR_TFEIM_SHIFT                                (0U)
#define SPI_IMR_TFEIM_MASK                                 (0x1U << SPI_IMR_TFEIM_SHIFT)                                /* 0x00000001 */
#define SPI_IMR_TFOIM_SHIFT                                (1U)
#define SPI_IMR_TFOIM_MASK                                 (0x1U << SPI_IMR_TFOIM_SHIFT)                                /* 0x00000002 */
#define SPI_IMR_RFUIM_SHIFT                                (2U)
#define SPI_IMR_RFUIM_MASK                                 (0x1U << SPI_IMR_RFUIM_SHIFT)                                /* 0x00000004 */
#define SPI_IMR_RFOIM_SHIFT                                (3U)
#define SPI_IMR_RFOIM_MASK                                 (0x1U << SPI_IMR_RFOIM_SHIFT)                                /* 0x00000008 */
#define SPI_IMR_RFFIM_SHIFT                                (4U)
#define SPI_IMR_RFFIM_MASK                                 (0x1U << SPI_IMR_RFFIM_SHIFT)                                /* 0x00000010 */
/* ISR */
#define SPI_ISR_TFEIS_SHIFT                                (0U)
#define SPI_ISR_TFEIS_MASK                                 (0x1U << SPI_ISR_TFEIS_SHIFT)                                /* 0x00000001 */
#define SPI_ISR_TFOIS_SHIFT                                (1U)
#define SPI_ISR_TFOIS_MASK                                 (0x1U << SPI_ISR_TFOIS_SHIFT)                                /* 0x00000002 */
#define SPI_ISR_RFUIS_SHIFT                                (2U)
#define SPI_ISR_RFUIS_MASK                                 (0x1U << SPI_ISR_RFUIS_SHIFT)                                /* 0x00000004 */
#define SPI_ISR_RFOIS_SHIFT                                (3U)
#define SPI_ISR_RFOIS_MASK                                 (0x1U << SPI_ISR_RFOIS_SHIFT)                                /* 0x00000008 */
#define SPI_ISR_RFFIS_SHIFT                                (4U)
#define SPI_ISR_RFFIS_MASK                                 (0x1U << SPI_ISR_RFFIS_SHIFT)                                /* 0x00000010 */
/* RISR */
#define SPI_RISR_TFERIS_SHIFT                              (0U)
#define SPI_RISR_TFERIS_MASK                               (0x1U << SPI_RISR_TFERIS_SHIFT)                              /* 0x00000001 */
#define SPI_RISR_TFORIS_SHIFT                              (1U)
#define SPI_RISR_TFORIS_MASK                               (0x1U << SPI_RISR_TFORIS_SHIFT)                              /* 0x00000002 */
#define SPI_RISR_RFURIS_SHIFT                              (2U)
#define SPI_RISR_RFURIS_MASK                               (0x1U << SPI_RISR_RFURIS_SHIFT)                              /* 0x00000004 */
#define SPI_RISR_RFORIS_SHIFT                              (3U)
#define SPI_RISR_RFORIS_MASK                               (0x1U << SPI_RISR_RFORIS_SHIFT)                              /* 0x00000008 */
#define SPI_RISR_RFFRIS_SHIFT                              (4U)
#define SPI_RISR_RFFRIS_MASK                               (0x1U << SPI_RISR_RFFRIS_SHIFT)                              /* 0x00000010 */
/* ICR */
#define SPI_ICR_CCI_SHIFT                                  (0U)
#define SPI_ICR_CCI_MASK                                   (0x1U << SPI_ICR_CCI_SHIFT)                                  /* 0x00000001 */
#define SPI_ICR_CRFUI_SHIFT                                (1U)
#define SPI_ICR_CRFUI_MASK                                 (0x1U << SPI_ICR_CRFUI_SHIFT)                                /* 0x00000002 */
#define SPI_ICR_CRFOI_SHIFT                                (2U)
#define SPI_ICR_CRFOI_MASK                                 (0x1U << SPI_ICR_CRFOI_SHIFT)                                /* 0x00000004 */
#define SPI_ICR_CTFOI_SHIFT                                (3U)
#define SPI_ICR_CTFOI_MASK                                 (0x1U << SPI_ICR_CTFOI_SHIFT)                                /* 0x00000008 */
/* DMACR */
#define SPI_DMACR_RDE_SHIFT                                (0U)
#define SPI_DMACR_RDE_MASK                                 (0x1U << SPI_DMACR_RDE_SHIFT)                                /* 0x00000001 */
#define SPI_DMACR_TDE_SHIFT                                (1U)
#define SPI_DMACR_TDE_MASK                                 (0x1U << SPI_DMACR_TDE_SHIFT)                                /* 0x00000002 */
/* DMATDLR */
#define SPI_DMATDLR_TDL_SHIFT                              (0U)
#define SPI_DMATDLR_TDL_MASK                               (0x1FU << SPI_DMATDLR_TDL_SHIFT)                             /* 0x0000001F */
/* DMARDLR */
#define SPI_DMARDLR_RDL_SHIFT                              (0U)
#define SPI_DMARDLR_RDL_MASK                               (0x1FU << SPI_DMARDLR_RDL_SHIFT)                             /* 0x0000001F */
/* TXDR */
#define SPI_TXDR_TXDR_SHIFT                                (0U)
#define SPI_TXDR_TXDR_MASK                                 (0xFFFFU << SPI_TXDR_TXDR_SHIFT)                             /* 0x0000FFFF */
/* RXDR */
#define SPI_RXDR_RXDR_SHIFT                                (0U)
#define SPI_RXDR_RXDR_MASK                                 (0xFFFFU << SPI_RXDR_RXDR_SHIFT)                             /* 0x0000FFFF */
/******************************************SFC*******************************************/
/* CTRL */
#define SFC_CTRL_SPIM_SHIFT                                (0U)
#define SFC_CTRL_SPIM_MASK                                 (0x1U << SFC_CTRL_SPIM_SHIFT)                                /* 0x00000001 */
#define SFC_CTRL_SHIFTPHASE_SHIFT                          (1U)
#define SFC_CTRL_SHIFTPHASE_MASK                           (0x1U << SFC_CTRL_SHIFTPHASE_SHIFT)                          /* 0x00000002 */
#define SFC_CTRL_IDLE_CYCLE_SHIFT                          (4U)
#define SFC_CTRL_IDLE_CYCLE_MASK                           (0xFU << SFC_CTRL_IDLE_CYCLE_SHIFT)                          /* 0x000000F0 */
#define SFC_CTRL_CMDB_SHIFT                                (8U)
#define SFC_CTRL_CMDB_MASK                                 (0x3U << SFC_CTRL_CMDB_SHIFT)                                /* 0x00000300 */
#define SFC_CTRL_ADRB_SHIFT                                (10U)
#define SFC_CTRL_ADRB_MASK                                 (0x3U << SFC_CTRL_ADRB_SHIFT)                                /* 0x00000C00 */
#define SFC_CTRL_DATB_SHIFT                                (12U)
#define SFC_CTRL_DATB_MASK                                 (0x3U << SFC_CTRL_DATB_SHIFT)                                /* 0x00003000 */
/* IMR */
#define SFC_IMR_RXFM_SHIFT                                 (0U)
#define SFC_IMR_RXFM_MASK                                  (0x1U << SFC_IMR_RXFM_SHIFT)                                 /* 0x00000001 */
#define SFC_IMR_RXUM_SHIFT                                 (1U)
#define SFC_IMR_RXUM_MASK                                  (0x1U << SFC_IMR_RXUM_SHIFT)                                 /* 0x00000002 */
#define SFC_IMR_TXOM_SHIFT                                 (2U)
#define SFC_IMR_TXOM_MASK                                  (0x1U << SFC_IMR_TXOM_SHIFT)                                 /* 0x00000004 */
#define SFC_IMR_TXEM_SHIFT                                 (3U)
#define SFC_IMR_TXEM_MASK                                  (0x1U << SFC_IMR_TXEM_SHIFT)                                 /* 0x00000008 */
#define SFC_IMR_TRANSM_SHIFT                               (4U)
#define SFC_IMR_TRANSM_MASK                                (0x1U << SFC_IMR_TRANSM_SHIFT)                               /* 0x00000010 */
#define SFC_IMR_AHBM_SHIFT                                 (5U)
#define SFC_IMR_AHBM_MASK                                  (0x1U << SFC_IMR_AHBM_SHIFT)                                 /* 0x00000020 */
#define SFC_IMR_NSPIM_SHIFT                                (6U)
#define SFC_IMR_NSPIM_MASK                                 (0x1U << SFC_IMR_NSPIM_SHIFT)                                /* 0x00000040 */
#define SFC_IMR_DMAM_SHIFT                                 (7U)
#define SFC_IMR_DMAM_MASK                                  (0x1U << SFC_IMR_DMAM_SHIFT)                                 /* 0x00000080 */
#define SFC_IMR_STPOLLM_SHIFT                              (8U)
#define SFC_IMR_STPOLLM_MASK                               (0x1U << SFC_IMR_STPOLLM_SHIFT)                              /* 0x00000100 */
/* ICLR */
#define SFC_ICLR_RXFC_SHIFT                                (0U)
#define SFC_ICLR_RXFC_MASK                                 (0x1U << SFC_ICLR_RXFC_SHIFT)                                /* 0x00000001 */
#define SFC_ICLR_RXUC_SHIFT                                (1U)
#define SFC_ICLR_RXUC_MASK                                 (0x1U << SFC_ICLR_RXUC_SHIFT)                                /* 0x00000002 */
#define SFC_ICLR_TXOC_SHIFT                                (2U)
#define SFC_ICLR_TXOC_MASK                                 (0x1U << SFC_ICLR_TXOC_SHIFT)                                /* 0x00000004 */
#define SFC_ICLR_TXEC_SHIFT                                (3U)
#define SFC_ICLR_TXEC_MASK                                 (0x1U << SFC_ICLR_TXEC_SHIFT)                                /* 0x00000008 */
#define SFC_ICLR_TRANSC_SHIFT                              (4U)
#define SFC_ICLR_TRANSC_MASK                               (0x1U << SFC_ICLR_TRANSC_SHIFT)                              /* 0x00000010 */
#define SFC_ICLR_AHBC_SHIFT                                (5U)
#define SFC_ICLR_AHBC_MASK                                 (0x1U << SFC_ICLR_AHBC_SHIFT)                                /* 0x00000020 */
#define SFC_ICLR_NSPIC_SHIFT                               (6U)
#define SFC_ICLR_NSPIC_MASK                                (0x1U << SFC_ICLR_NSPIC_SHIFT)                               /* 0x00000040 */
#define SFC_ICLR_DMAC_SHIFT                                (7U)
#define SFC_ICLR_DMAC_MASK                                 (0x1U << SFC_ICLR_DMAC_SHIFT)                                /* 0x00000080 */
#define SFC_ICLR_STPOLLC_SHIFT                             (8U)
#define SFC_ICLR_STPOLLC_MASK                              (0x1U << SFC_ICLR_STPOLLC_SHIFT)                             /* 0x00000100 */
/* FTLR */
#define SFC_FTLR_TXFTLR_SHIFT                              (0U)
#define SFC_FTLR_TXFTLR_MASK                               (0xFFU << SFC_FTLR_TXFTLR_SHIFT)                             /* 0x000000FF */
#define SFC_FTLR_RXFTLR_SHIFT                              (8U)
#define SFC_FTLR_RXFTLR_MASK                               (0xFFU << SFC_FTLR_RXFTLR_SHIFT)                             /* 0x0000FF00 */
/* RCVR */
#define SFC_RCVR_RCVR_SHIFT                                (0U)
#define SFC_RCVR_RCVR_MASK                                 (0x1U << SFC_RCVR_RCVR_SHIFT)                                /* 0x00000001 */
/* AX */
#define SFC_AX_AX_SHIFT                                    (0U)
#define SFC_AX_AX_MASK                                     (0xFFU << SFC_AX_AX_SHIFT)                                   /* 0x000000FF */
/* ABIT */
#define SFC_ABIT_ABIT_SHIFT                                (0U)
#define SFC_ABIT_ABIT_MASK                                 (0x1FU << SFC_ABIT_ABIT_SHIFT)                               /* 0x0000001F */
/* ISR */
#define SFC_ISR_RXFS_SHIFT                                 (0U)
#define SFC_ISR_RXFS_MASK                                  (0x1U << SFC_ISR_RXFS_SHIFT)                                 /* 0x00000001 */
#define SFC_ISR_RXUS_SHIFT                                 (1U)
#define SFC_ISR_RXUS_MASK                                  (0x1U << SFC_ISR_RXUS_SHIFT)                                 /* 0x00000002 */
#define SFC_ISR_TXOS_SHIFT                                 (2U)
#define SFC_ISR_TXOS_MASK                                  (0x1U << SFC_ISR_TXOS_SHIFT)                                 /* 0x00000004 */
#define SFC_ISR_TXES_SHIFT                                 (3U)
#define SFC_ISR_TXES_MASK                                  (0x1U << SFC_ISR_TXES_SHIFT)                                 /* 0x00000008 */
#define SFC_ISR_TRANSS_SHIFT                               (4U)
#define SFC_ISR_TRANSS_MASK                                (0x1U << SFC_ISR_TRANSS_SHIFT)                               /* 0x00000010 */
#define SFC_ISR_AHBS_SHIFT                                 (5U)
#define SFC_ISR_AHBS_MASK                                  (0x1U << SFC_ISR_AHBS_SHIFT)                                 /* 0x00000020 */
#define SFC_ISR_NSPIS_SHIFT                                (6U)
#define SFC_ISR_NSPIS_MASK                                 (0x1U << SFC_ISR_NSPIS_SHIFT)                                /* 0x00000040 */
#define SFC_ISR_DMAS_SHIFT                                 (7U)
#define SFC_ISR_DMAS_MASK                                  (0x1U << SFC_ISR_DMAS_SHIFT)                                 /* 0x00000080 */
#define SFC_ISR_STPOLLS_SHIFT                              (8U)
#define SFC_ISR_STPOLLS_MASK                               (0x1U << SFC_ISR_STPOLLS_SHIFT)                              /* 0x00000100 */
/* FSR */
#define SFC_FSR_TXFS_SHIFT                                 (0U)
#define SFC_FSR_TXFS_MASK                                  (0x1U << SFC_FSR_TXFS_SHIFT)                                 /* 0x00000001 */
#define SFC_FSR_TXES_SHIFT                                 (1U)
#define SFC_FSR_TXES_MASK                                  (0x1U << SFC_FSR_TXES_SHIFT)                                 /* 0x00000002 */
#define SFC_FSR_RXES_SHIFT                                 (2U)
#define SFC_FSR_RXES_MASK                                  (0x1U << SFC_FSR_RXES_SHIFT)                                 /* 0x00000004 */
#define SFC_FSR_RXFS_SHIFT                                 (3U)
#define SFC_FSR_RXFS_MASK                                  (0x1U << SFC_FSR_RXFS_SHIFT)                                 /* 0x00000008 */
#define SFC_FSR_TXWLVL_SHIFT                               (8U)
#define SFC_FSR_TXWLVL_MASK                                (0x1FU << SFC_FSR_TXWLVL_SHIFT)                              /* 0x00001F00 */
#define SFC_FSR_RXWLVL_SHIFT                               (16U)
#define SFC_FSR_RXWLVL_MASK                                (0x1FU << SFC_FSR_RXWLVL_SHIFT)                              /* 0x001F0000 */
/* SR */
#define SFC_SR_SR_SHIFT                                    (0U)
#define SFC_SR_SR_MASK                                     (0x1U << SFC_SR_SR_SHIFT)                                    /* 0x00000001 */
/* RISR */
#define SFC_RISR_RXFS_SHIFT                                (0U)
#define SFC_RISR_RXFS_MASK                                 (0x1U << SFC_RISR_RXFS_SHIFT)                                /* 0x00000001 */
#define SFC_RISR_RXUS_SHIFT                                (1U)
#define SFC_RISR_RXUS_MASK                                 (0x1U << SFC_RISR_RXUS_SHIFT)                                /* 0x00000002 */
#define SFC_RISR_TXOS_SHIFT                                (2U)
#define SFC_RISR_TXOS_MASK                                 (0x1U << SFC_RISR_TXOS_SHIFT)                                /* 0x00000004 */
#define SFC_RISR_TXES_SHIFT                                (3U)
#define SFC_RISR_TXES_MASK                                 (0x1U << SFC_RISR_TXES_SHIFT)                                /* 0x00000008 */
#define SFC_RISR_TRANSS_SHIFT                              (4U)
#define SFC_RISR_TRANSS_MASK                               (0x1U << SFC_RISR_TRANSS_SHIFT)                              /* 0x00000010 */
#define SFC_RISR_AHBS_SHIFT                                (5U)
#define SFC_RISR_AHBS_MASK                                 (0x1U << SFC_RISR_AHBS_SHIFT)                                /* 0x00000020 */
#define SFC_RISR_NSPIS_SHIFT                               (6U)
#define SFC_RISR_NSPIS_MASK                                (0x1U << SFC_RISR_NSPIS_SHIFT)                               /* 0x00000040 */
#define SFC_RISR_DMAS_SHIFT                                (7U)
#define SFC_RISR_DMAS_MASK                                 (0x1U << SFC_RISR_DMAS_SHIFT)                                /* 0x00000080 */
#define SFC_RISR_STPOLLS_SHIFT                             (8U)
#define SFC_RISR_STPOLLS_MASK                              (0x1U << SFC_RISR_STPOLLS_SHIFT)                             /* 0x00000100 */
/* VER */
#define SFC_VER_VER_SHIFT                                  (0U)
#define SFC_VER_VER_MASK                                   (0xFFFFU << SFC_VER_VER_SHIFT)                               /* 0x0000FFFF */
/* QOP */
#define SFC_QOP_SO123_SHIFT                                (0U)
#define SFC_QOP_SO123_MASK                                 (0x1U << SFC_QOP_SO123_SHIFT)                                /* 0x00000001 */
/* EXT_CTRL */
#define SFC_EXT_CTRL_DESEL_CS_CTRL_SHIFT                   (0U)
#define SFC_EXT_CTRL_DESEL_CS_CTRL_MASK                    (0x7U << SFC_EXT_CTRL_DESEL_CS_CTRL_SHIFT)                   /* 0x00000007 */
#define SFC_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT              (4U)
#define SFC_EXT_CTRL_SWITCH_IO_DUMM_CNT_MASK               (0xFU << SFC_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT)              /* 0x000000F0 */
#define SFC_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT               (8U)
#define SFC_EXT_CTRL_SWITCH_IO_O2I_CNT_MASK                (0xFU << SFC_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT)               /* 0x00000F00 */
#define SFC_EXT_CTRL_AX_CANCEL_PAT_SHIFT                   (12U)
#define SFC_EXT_CTRL_AX_CANCEL_PAT_MASK                    (0xFFU << SFC_EXT_CTRL_AX_CANCEL_PAT_SHIFT)                  /* 0x000FF000 */
#define SFC_EXT_CTRL_AX_SETUP_PAT_SHIFT                    (20U)
#define SFC_EXT_CTRL_AX_SETUP_PAT_MASK                     (0xFFU << SFC_EXT_CTRL_AX_SETUP_PAT_SHIFT)                   /* 0x0FF00000 */
#define SFC_EXT_CTRL_SWITCH_IO_MODE_SHIFT                  (28U)
#define SFC_EXT_CTRL_SWITCH_IO_MODE_MASK                   (0x1U << SFC_EXT_CTRL_SWITCH_IO_MODE_SHIFT)                  /* 0x10000000 */
/* DLL_CTRL */
#define SFC_DLL_CTRL_SMP_DLL_CFG_SHIFT                     (0U)
#define SFC_DLL_CTRL_SMP_DLL_CFG_MASK                      (0xFFU << SFC_DLL_CTRL_SMP_DLL_CFG_SHIFT)                    /* 0x000000FF */
#define SFC_DLL_CTRL_SCLK_SCLK_SMP_SEL_SHIFT               (8U)
#define SFC_DLL_CTRL_SCLK_SCLK_SMP_SEL_MASK                (0x1U << SFC_DLL_CTRL_SCLK_SCLK_SMP_SEL_SHIFT)               /* 0x00000100 */
/* POLL_CTRL */
#define SFC_POLL_CTRL_ST_POLL_EN_SHIFT                     (0U)
#define SFC_POLL_CTRL_ST_POLL_EN_MASK                      (0x1U << SFC_POLL_CTRL_ST_POLL_EN_SHIFT)                     /* 0x00000001 */
#define SFC_POLL_CTRL_ST_POLL_CMD_PARA_SHIFT               (8U)
#define SFC_POLL_CTRL_ST_POLL_CMD_PARA_MASK                (0xFFU << SFC_POLL_CTRL_ST_POLL_CMD_PARA_SHIFT)              /* 0x0000FF00 */
#define SFC_POLL_CTRL_ST_POLL_EXPECT_DATA_SHIFT            (16U)
#define SFC_POLL_CTRL_ST_POLL_EXPECT_DATA_MASK             (0xFFU << SFC_POLL_CTRL_ST_POLL_EXPECT_DATA_SHIFT)           /* 0x00FF0000 */
#define SFC_POLL_CTRL_ST_POLL_BIT_COMP_EN_SHIFT            (24U)
#define SFC_POLL_CTRL_ST_POLL_BIT_COMP_EN_MASK             (0xFFU << SFC_POLL_CTRL_ST_POLL_BIT_COMP_EN_SHIFT)           /* 0xFF000000 */
/* FETCH_CMD */
#define SFC_FETCH_CMD_CMD_SHIFT                            (0U)
#define SFC_FETCH_CMD_CMD_MASK                             (0xFFU << SFC_FETCH_CMD_CMD_SHIFT)                           /* 0x000000FF */
#define SFC_FETCH_CMD_DUMM_SHIFT                           (8U)
#define SFC_FETCH_CMD_DUMM_MASK                            (0xFU << SFC_FETCH_CMD_DUMM_SHIFT)                           /* 0x00000F00 */
#define SFC_FETCH_CMD_CONT_SHIFT                           (13U)
#define SFC_FETCH_CMD_CONT_MASK                            (0x1U << SFC_FETCH_CMD_CONT_SHIFT)                           /* 0x00002000 */
#define SFC_FETCH_CMD_ADDRB_SHIFT                          (14U)
#define SFC_FETCH_CMD_ADDRB_MASK                           (0x3U << SFC_FETCH_CMD_ADDRB_SHIFT)                          /* 0x0000C000 */
/* FETCH_CTRL */
#define SFC_FETCH_CTRL_CS_BIT_SEL_SHIFT                    (0U)
#define SFC_FETCH_CTRL_CS_BIT_SEL_MASK                     (0x1FU << SFC_FETCH_CTRL_CS_BIT_SEL_SHIFT)                   /* 0x0000001F */
#define SFC_FETCH_CTRL_INCR_LEN_SHIFT                      (8U)
#define SFC_FETCH_CTRL_INCR_LEN_MASK                       (0xFU << SFC_FETCH_CTRL_INCR_LEN_SHIFT)                      /* 0x00000F00 */
/* XIP_MODE */
#define SFC_XIP_MODE_XIP_MODE_EN_SHIFT                     (0U)
#define SFC_XIP_MODE_XIP_MODE_EN_MASK                      (0x1U << SFC_XIP_MODE_XIP_MODE_EN_SHIFT)                     /* 0x00000001 */
/* POLL_DATA */
#define SFC_POLL_DATA_POLL_DATA_SHIFT                      (0U)
#define SFC_POLL_DATA_POLL_DATA_MASK                       (0xFFU << SFC_POLL_DATA_POLL_DATA_SHIFT)                     /* 0x000000FF */
#define SFC_POLL_DATA_POLL_BUSY_SHIFT                      (8U)
#define SFC_POLL_DATA_POLL_BUSY_MASK                       (0x1U << SFC_POLL_DATA_POLL_BUSY_SHIFT)                      /* 0x00000100 */
/* DMATR */
#define SFC_DMATR_DMATR_SHIFT                              (0U)
#define SFC_DMATR_DMATR_MASK                               (0x1U << SFC_DMATR_DMATR_SHIFT)                              /* 0x00000001 */
/* DMAADDR */
#define SFC_DMAADDR_DMAADDR_SHIFT                          (0U)
#define SFC_DMAADDR_DMAADDR_MASK                           (0xFFFFFFFFU << SFC_DMAADDR_DMAADDR_SHIFT)                   /* 0xFFFFFFFF */
/* CMD */
#define SFC_CMD_CMD_SHIFT                                  (0U)
#define SFC_CMD_CMD_MASK                                   (0xFFU << SFC_CMD_CMD_SHIFT)                                 /* 0x000000FF */
#define SFC_CMD_DUMM_SHIFT                                 (8U)
#define SFC_CMD_DUMM_MASK                                  (0xFU << SFC_CMD_DUMM_SHIFT)                                 /* 0x00000F00 */
#define SFC_CMD_WR_SHIFT                                   (12U)
#define SFC_CMD_WR_MASK                                    (0x1U << SFC_CMD_WR_SHIFT)                                   /* 0x00001000 */
#define SFC_CMD_CONT_SHIFT                                 (13U)
#define SFC_CMD_CONT_MASK                                  (0x1U << SFC_CMD_CONT_SHIFT)                                 /* 0x00002000 */
#define SFC_CMD_ADDRB_SHIFT                                (14U)
#define SFC_CMD_ADDRB_MASK                                 (0x3U << SFC_CMD_ADDRB_SHIFT)                                /* 0x0000C000 */
#define SFC_CMD_TRB_SHIFT                                  (16U)
#define SFC_CMD_TRB_MASK                                   (0x3FFFU << SFC_CMD_TRB_SHIFT)                               /* 0x3FFF0000 */
#define SFC_CMD_CS_SHIFT                                   (30U)
#define SFC_CMD_CS_MASK                                    (0x3U << SFC_CMD_CS_SHIFT)                                   /* 0xC0000000 */
/* ADDR */
#define SFC_ADDR_ADDR_SHIFT                                (0U)
#define SFC_ADDR_ADDR_MASK                                 (0xFFFFFFFFU << SFC_ADDR_ADDR_SHIFT)                         /* 0xFFFFFFFF */
/* DATA */
#define SFC_DATA_DATA_SHIFT                                (0U)
#define SFC_DATA_DATA_MASK                                 (0xFFFFFFFFU << SFC_DATA_DATA_SHIFT)                         /* 0xFFFFFFFF */
/******************************************MMC*******************************************/
/* CTRL */
#define MMC_CTRL_CONTROLLER_RESET_SHIFT                    (0U)
#define MMC_CTRL_CONTROLLER_RESET_MASK                     (0x1U << MMC_CTRL_CONTROLLER_RESET_SHIFT)                    /* 0x00000001 */
#define MMC_CTRL_FIFO_RESET_SHIFT                          (1U)
#define MMC_CTRL_FIFO_RESET_MASK                           (0x1U << MMC_CTRL_FIFO_RESET_SHIFT)                          /* 0x00000002 */
#define MMC_CTRL_DMA_RESET_SHIFT                           (2U)
#define MMC_CTRL_DMA_RESET_MASK                            (0x1U << MMC_CTRL_DMA_RESET_SHIFT)                           /* 0x00000004 */
#define MMC_CTRL_INT_ENABLE_SHIFT                          (4U)
#define MMC_CTRL_INT_ENABLE_MASK                           (0x1U << MMC_CTRL_INT_ENABLE_SHIFT)                          /* 0x00000010 */
#define MMC_CTRL_DMA_ENABLE_SHIFT                          (5U)
#define MMC_CTRL_DMA_ENABLE_MASK                           (0x1U << MMC_CTRL_DMA_ENABLE_SHIFT)                          /* 0x00000020 */
#define MMC_CTRL_READ_WAIT_SHIFT                           (6U)
#define MMC_CTRL_READ_WAIT_MASK                            (0x1U << MMC_CTRL_READ_WAIT_SHIFT)                           /* 0x00000040 */
#define MMC_CTRL_SEND_IRQ_RESPONSE_SHIFT                   (7U)
#define MMC_CTRL_SEND_IRQ_RESPONSE_MASK                    (0x1U << MMC_CTRL_SEND_IRQ_RESPONSE_SHIFT)                   /* 0x00000080 */
#define MMC_CTRL_ABORT_READ_DATA_SHIFT                     (8U)
#define MMC_CTRL_ABORT_READ_DATA_MASK                      (0x1U << MMC_CTRL_ABORT_READ_DATA_SHIFT)                     /* 0x00000100 */
#define MMC_CTRL_SEND_CCSD_SHIFT                           (9U)
#define MMC_CTRL_SEND_CCSD_MASK                            (0x1U << MMC_CTRL_SEND_CCSD_SHIFT)                           /* 0x00000200 */
#define MMC_CTRL_SEND_AUTO_STOP_CCSD_SHIFT                 (10U)
#define MMC_CTRL_SEND_AUTO_STOP_CCSD_MASK                  (0x1U << MMC_CTRL_SEND_AUTO_STOP_CCSD_SHIFT)                 /* 0x00000400 */
#define MMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SHIFT       (11U)
#define MMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_MASK        (0x1U << MMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SHIFT)       /* 0x00000800 */
#define MMC_CTRL_USE_INTERNAL_DMAC_SHIFT                   (25U)
#define MMC_CTRL_USE_INTERNAL_DMAC_MASK                    (0x1U << MMC_CTRL_USE_INTERNAL_DMAC_SHIFT)                   /* 0x02000000 */
/* PWREN */
#define MMC_PWREN_POWER_ENABLE_SHIFT                       (0U)
#define MMC_PWREN_POWER_ENABLE_MASK                        (0x1U << MMC_PWREN_POWER_ENABLE_SHIFT)                       /* 0x00000001 */
/* CLKDIV */
#define MMC_CLKDIV_CLK_DIVIDER0_SHIFT                      (0U)
#define MMC_CLKDIV_CLK_DIVIDER0_MASK                       (0xFFU << MMC_CLKDIV_CLK_DIVIDER0_SHIFT)                     /* 0x000000FF */
/* CLKSRC */
#define MMC_CLKSRC_CLK_SOURCE_SHIFT                        (0U)
#define MMC_CLKSRC_CLK_SOURCE_MASK                         (0x3U << MMC_CLKSRC_CLK_SOURCE_SHIFT)                        /* 0x00000003 */
/* CLKENA */
#define MMC_CLKENA_CCLK_ENABLE_SHIFT                       (0U)
#define MMC_CLKENA_CCLK_ENABLE_MASK                        (0x1U << MMC_CLKENA_CCLK_ENABLE_SHIFT)                       /* 0x00000001 */
#define MMC_CLKENA_CCLK_LOW_POWER_SHIFT                    (16U)
#define MMC_CLKENA_CCLK_LOW_POWER_MASK                     (0x1U << MMC_CLKENA_CCLK_LOW_POWER_SHIFT)                    /* 0x00010000 */
/* TMOUT */
#define MMC_TMOUT_RESPONSE_TIMEOUT_SHIFT                   (0U)
#define MMC_TMOUT_RESPONSE_TIMEOUT_MASK                    (0xFFU << MMC_TMOUT_RESPONSE_TIMEOUT_SHIFT)                  /* 0x000000FF */
#define MMC_TMOUT_DATA_TIMEOUT_SHIFT                       (8U)
#define MMC_TMOUT_DATA_TIMEOUT_MASK                        (0xFFFFFFU << MMC_TMOUT_DATA_TIMEOUT_SHIFT)                  /* 0xFFFFFF00 */
/* CTYPE */
#define MMC_CTYPE_CARD_WIDTH_SHIFT                         (0U)
#define MMC_CTYPE_CARD_WIDTH_MASK                          (0x1U << MMC_CTYPE_CARD_WIDTH_SHIFT)                         /* 0x00000001 */
#define MMC_CTYPE_CARD_WIDTH_8_SHIFT                       (16U)
#define MMC_CTYPE_CARD_WIDTH_8_MASK                        (0x1U << MMC_CTYPE_CARD_WIDTH_8_SHIFT)                       /* 0x00010000 */
/* BLKSIZ */
#define MMC_BLKSIZ_BLOCK_SIZE_SHIFT                        (0U)
#define MMC_BLKSIZ_BLOCK_SIZE_MASK                         (0xFFFFU << MMC_BLKSIZ_BLOCK_SIZE_SHIFT)                     /* 0x0000FFFF */
/* BYTCNT */
#define MMC_BYTCNT_BYTE_COUNT_SHIFT                        (0U)
#define MMC_BYTCNT_BYTE_COUNT_MASK                         (0xFFFFFFFFU << MMC_BYTCNT_BYTE_COUNT_SHIFT)                 /* 0xFFFFFFFF */
/* INTMASK */
#define MMC_INTMASK_INT_MASK_SHIFT                         (0U)
#define MMC_INTMASK_INT_MASK_MASK                          (0xFFFFU << MMC_INTMASK_INT_MASK_SHIFT)                      /* 0x0000FFFF */
#define MMC_INTMASK_DATA_NOBUSY_INT_MASK_SHIFT             (16U)
#define MMC_INTMASK_DATA_NOBUSY_INT_MASK_MASK              (0x1U << MMC_INTMASK_DATA_NOBUSY_INT_MASK_SHIFT)             /* 0x00010000 */
#define MMC_INTMASK_SDIO_INT_MASK_SHIFT                    (24U)
#define MMC_INTMASK_SDIO_INT_MASK_MASK                     (0x1U << MMC_INTMASK_SDIO_INT_MASK_SHIFT)                    /* 0x01000000 */
/* CMDARG */
#define MMC_CMDARG_CMD_ARG_SHIFT                           (0U)
#define MMC_CMDARG_CMD_ARG_MASK                            (0xFFFFFFFFU << MMC_CMDARG_CMD_ARG_SHIFT)                    /* 0xFFFFFFFF */
/* CMD */
#define MMC_CMD_CMD_INDEX_SHIFT                            (0U)
#define MMC_CMD_CMD_INDEX_MASK                             (0x3FU << MMC_CMD_CMD_INDEX_SHIFT)                           /* 0x0000003F */
#define MMC_CMD_RESPONSE_EXPECT_SHIFT                      (6U)
#define MMC_CMD_RESPONSE_EXPECT_MASK                       (0x1U << MMC_CMD_RESPONSE_EXPECT_SHIFT)                      /* 0x00000040 */
#define MMC_CMD_RESPONSE_LENGTH_SHIFT                      (7U)
#define MMC_CMD_RESPONSE_LENGTH_MASK                       (0x1U << MMC_CMD_RESPONSE_LENGTH_SHIFT)                      /* 0x00000080 */
#define MMC_CMD_CHECK_RESPONSE_CRC_SHIFT                   (8U)
#define MMC_CMD_CHECK_RESPONSE_CRC_MASK                    (0x1U << MMC_CMD_CHECK_RESPONSE_CRC_SHIFT)                   /* 0x00000100 */
#define MMC_CMD_DATA_EXPECTED_SHIFT                        (9U)
#define MMC_CMD_DATA_EXPECTED_MASK                         (0x1U << MMC_CMD_DATA_EXPECTED_SHIFT)                        /* 0x00000200 */
#define MMC_CMD_WR_SHIFT                                   (10U)
#define MMC_CMD_WR_MASK                                    (0x1U << MMC_CMD_WR_SHIFT)                                   /* 0x00000400 */
#define MMC_CMD_TRANSFER_MODE_SHIFT                        (11U)
#define MMC_CMD_TRANSFER_MODE_MASK                         (0x1U << MMC_CMD_TRANSFER_MODE_SHIFT)                        /* 0x00000800 */
#define MMC_CMD_SEND_AUTO_STOP_SHIFT                       (12U)
#define MMC_CMD_SEND_AUTO_STOP_MASK                        (0x1U << MMC_CMD_SEND_AUTO_STOP_SHIFT)                       /* 0x00001000 */
#define MMC_CMD_WAIT_PRVDATA_COMPLETE_SHIFT                (13U)
#define MMC_CMD_WAIT_PRVDATA_COMPLETE_MASK                 (0x1U << MMC_CMD_WAIT_PRVDATA_COMPLETE_SHIFT)                /* 0x00002000 */
#define MMC_CMD_STOP_ABORT_CMD_SHIFT                       (14U)
#define MMC_CMD_STOP_ABORT_CMD_MASK                        (0x1U << MMC_CMD_STOP_ABORT_CMD_SHIFT)                       /* 0x00004000 */
#define MMC_CMD_SEND_INITIALIZATION_SHIFT                  (15U)
#define MMC_CMD_SEND_INITIALIZATION_MASK                   (0x1U << MMC_CMD_SEND_INITIALIZATION_SHIFT)                  /* 0x00008000 */
#define MMC_CMD_UPDATE_CLOCK_REGS_ONLY_SHIFT               (21U)
#define MMC_CMD_UPDATE_CLOCK_REGS_ONLY_MASK                (0x1U << MMC_CMD_UPDATE_CLOCK_REGS_ONLY_SHIFT)               /* 0x00200000 */
#define MMC_CMD_READ_CEATA_DEVICE_SHIFT                    (22U)
#define MMC_CMD_READ_CEATA_DEVICE_MASK                     (0x1U << MMC_CMD_READ_CEATA_DEVICE_SHIFT)                    /* 0x00400000 */
#define MMC_CMD_CCS_EXPECTED_SHIFT                         (23U)
#define MMC_CMD_CCS_EXPECTED_MASK                          (0x1U << MMC_CMD_CCS_EXPECTED_SHIFT)                         /* 0x00800000 */
#define MMC_CMD_ENABLE_BOOT_SHIFT                          (24U)
#define MMC_CMD_ENABLE_BOOT_MASK                           (0x1U << MMC_CMD_ENABLE_BOOT_SHIFT)                          /* 0x01000000 */
#define MMC_CMD_EXPECT_BOOT_ACK_SHIFT                      (25U)
#define MMC_CMD_EXPECT_BOOT_ACK_MASK                       (0x1U << MMC_CMD_EXPECT_BOOT_ACK_SHIFT)                      /* 0x02000000 */
#define MMC_CMD_DISABLE_BOOT_SHIFT                         (26U)
#define MMC_CMD_DISABLE_BOOT_MASK                          (0x1U << MMC_CMD_DISABLE_BOOT_SHIFT)                         /* 0x04000000 */
#define MMC_CMD_BOOT_MODE_SHIFT                            (27U)
#define MMC_CMD_BOOT_MODE_MASK                             (0x1U << MMC_CMD_BOOT_MODE_SHIFT)                            /* 0x08000000 */
#define MMC_CMD_VOLT_SWITCH_SHIFT                          (28U)
#define MMC_CMD_VOLT_SWITCH_MASK                           (0x1U << MMC_CMD_VOLT_SWITCH_SHIFT)                          /* 0x10000000 */
#define MMC_CMD_USE_HOLD_REG_SHIFT                         (29U)
#define MMC_CMD_USE_HOLD_REG_MASK                          (0x1U << MMC_CMD_USE_HOLD_REG_SHIFT)                         /* 0x20000000 */
#define MMC_CMD_START_CMD_SHIFT                            (31U)
#define MMC_CMD_START_CMD_MASK                             (0x1U << MMC_CMD_START_CMD_SHIFT)                            /* 0x80000000 */
/* RESP0 */
#define MMC_RESP0_RESPONSE0_SHIFT                          (0U)
#define MMC_RESP0_RESPONSE0_MASK                           (0xFFFFFFFFU << MMC_RESP0_RESPONSE0_SHIFT)                   /* 0xFFFFFFFF */
/* RESP1 */
#define MMC_RESP1_RESPONSE_SHIFT                           (0U)
#define MMC_RESP1_RESPONSE_MASK                            (0xFFFFFFFFU << MMC_RESP1_RESPONSE_SHIFT)                    /* 0xFFFFFFFF */
/* RESP2 */
#define MMC_RESP2_RESPONSE2_SHIFT                          (0U)
#define MMC_RESP2_RESPONSE2_MASK                           (0xFFFFFFFFU << MMC_RESP2_RESPONSE2_SHIFT)                   /* 0xFFFFFFFF */
/* RESP3 */
#define MMC_RESP3_RESPONSE3_SHIFT                          (0U)
#define MMC_RESP3_RESPONSE3_MASK                           (0xFFFFFFFFU << MMC_RESP3_RESPONSE3_SHIFT)                   /* 0xFFFFFFFF */
/* MINTSTS */
#define MMC_MINTSTS_INT_STATUS_SHIFT                       (0U)
#define MMC_MINTSTS_INT_STATUS_MASK                        (0xFFFFU << MMC_MINTSTS_INT_STATUS_SHIFT)                    /* 0x0000FFFF */
#define MMC_MINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT           (16U)
#define MMC_MINTSTS_DATA_NOBUSY_INT_STATUS_MASK            (0x1U << MMC_MINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT)           /* 0x00010000 */
#define MMC_MINTSTS_SDIO_INTERRUPT_SHIFT                   (24U)
#define MMC_MINTSTS_SDIO_INTERRUPT_MASK                    (0x1U << MMC_MINTSTS_SDIO_INTERRUPT_SHIFT)                   /* 0x01000000 */
/* RINTSTS */
#define MMC_RINTSTS_INT_STATUS_SHIFT                       (0U)
#define MMC_RINTSTS_INT_STATUS_MASK                        (0xFFFFU << MMC_RINTSTS_INT_STATUS_SHIFT)                    /* 0x0000FFFF */
#define MMC_RINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT           (16U)
#define MMC_RINTSTS_DATA_NOBUSY_INT_STATUS_MASK            (0x1U << MMC_RINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT)           /* 0x00010000 */
#define MMC_RINTSTS_SDIO_INTERRUPT_SHIFT                   (24U)
#define MMC_RINTSTS_SDIO_INTERRUPT_MASK                    (0x1U << MMC_RINTSTS_SDIO_INTERRUPT_SHIFT)                   /* 0x01000000 */
/* STATUS */
#define MMC_STATUS_FIFO_RX_WATERMARK_SHIFT                 (0U)
#define MMC_STATUS_FIFO_RX_WATERMARK_MASK                  (0x1U << MMC_STATUS_FIFO_RX_WATERMARK_SHIFT)                 /* 0x00000001 */
#define MMC_STATUS_FIFO_TX_WATERMARK_SHIFT                 (1U)
#define MMC_STATUS_FIFO_TX_WATERMARK_MASK                  (0x1U << MMC_STATUS_FIFO_TX_WATERMARK_SHIFT)                 /* 0x00000002 */
#define MMC_STATUS_FIFO_EMPTY_SHIFT                        (2U)
#define MMC_STATUS_FIFO_EMPTY_MASK                         (0x1U << MMC_STATUS_FIFO_EMPTY_SHIFT)                        /* 0x00000004 */
#define MMC_STATUS_FIFO_FULL_SHIFT                         (3U)
#define MMC_STATUS_FIFO_FULL_MASK                          (0x1U << MMC_STATUS_FIFO_FULL_SHIFT)                         /* 0x00000008 */
#define MMC_STATUS_COMMAND_FSM_STATES_SHIFT                (4U)
#define MMC_STATUS_COMMAND_FSM_STATES_MASK                 (0xFU << MMC_STATUS_COMMAND_FSM_STATES_SHIFT)                /* 0x000000F0 */
#define MMC_STATUS_DATA_3_STATUS_SHIFT                     (8U)
#define MMC_STATUS_DATA_3_STATUS_MASK                      (0x1U << MMC_STATUS_DATA_3_STATUS_SHIFT)                     /* 0x00000100 */
#define MMC_STATUS_DATA_BUSY_SHIFT                         (9U)
#define MMC_STATUS_DATA_BUSY_MASK                          (0x1U << MMC_STATUS_DATA_BUSY_SHIFT)                         /* 0x00000200 */
#define MMC_STATUS_DATA_STATE_MC_BUSY_SHIFT                (10U)
#define MMC_STATUS_DATA_STATE_MC_BUSY_MASK                 (0x1U << MMC_STATUS_DATA_STATE_MC_BUSY_SHIFT)                /* 0x00000400 */
#define MMC_STATUS_RESPONSE_INDEX_SHIFT                    (11U)
#define MMC_STATUS_RESPONSE_INDEX_MASK                     (0x3FU << MMC_STATUS_RESPONSE_INDEX_SHIFT)                   /* 0x0001F800 */
#define MMC_STATUS_FIFO_COUNT_SHIFT                        (17U)
#define MMC_STATUS_FIFO_COUNT_MASK                         (0x1FFFU << MMC_STATUS_FIFO_COUNT_SHIFT)                     /* 0x3FFE0000 */
#define MMC_STATUS_DMA_ACK_SHIFT                           (30U)
#define MMC_STATUS_DMA_ACK_MASK                            (0x1U << MMC_STATUS_DMA_ACK_SHIFT)                           /* 0x40000000 */
#define MMC_STATUS_DMA_REQ_SHIFT                           (31U)
#define MMC_STATUS_DMA_REQ_MASK                            (0x1U << MMC_STATUS_DMA_REQ_SHIFT)                           /* 0x80000000 */
/* FIFOTH */
#define MMC_FIFOTH_TX_WMARK_SHIFT                          (0U)
#define MMC_FIFOTH_TX_WMARK_MASK                           (0xFFFU << MMC_FIFOTH_TX_WMARK_SHIFT)                        /* 0x00000FFF */
#define MMC_FIFOTH_RX_WMARK_SHIFT                          (16U)
#define MMC_FIFOTH_RX_WMARK_MASK                           (0xFFFU << MMC_FIFOTH_RX_WMARK_SHIFT)                        /* 0x0FFF0000 */
#define MMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_SHIFT      (28U)
#define MMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_MASK       (0x7U << MMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_SHIFT)      /* 0x70000000 */
/* CDETECT */
#define MMC_CDETECT_CARD_DETECT_N_SHIFT                    (0U)
#define MMC_CDETECT_CARD_DETECT_N_MASK                     (0x1U << MMC_CDETECT_CARD_DETECT_N_SHIFT)                    /* 0x00000001 */
/* WRTPRT */
#define MMC_WRTPRT_WRITE_PROTECT_SHIFT                     (0U)
#define MMC_WRTPRT_WRITE_PROTECT_MASK                      (0x1U << MMC_WRTPRT_WRITE_PROTECT_SHIFT)                     /* 0x00000001 */
/* TCBCNT */
#define MMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SHIFT             (0U)
#define MMC_TCBCNT_TRANS_CARD_BYTE_COUNT_MASK              (0xFFFFFFFFU << MMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SHIFT)      /* 0xFFFFFFFF */
/* TBBCNT */
#define MMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SHIFT             (0U)
#define MMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_MASK              (0xFFFFFFFFU << MMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SHIFT)      /* 0xFFFFFFFF */
/* DEBNCE */
#define MMC_DEBNCE_DEBOUNCE_COUNT_SHIFT                    (0U)
#define MMC_DEBNCE_DEBOUNCE_COUNT_MASK                     (0xFFFFFFU << MMC_DEBNCE_DEBOUNCE_COUNT_SHIFT)               /* 0x00FFFFFF */
/* USRID */
#define MMC_USRID_USRID_SHIFT                              (0U)
#define MMC_USRID_USRID_MASK                               (0xFFFFFFFFU << MMC_USRID_USRID_SHIFT)                       /* 0xFFFFFFFF */
/* VERID */
#define MMC_VERID_VERID_SHIFT                              (0U)
#define MMC_VERID_VERID_MASK                               (0xFFFFFFFFU << MMC_VERID_VERID_SHIFT)                       /* 0xFFFFFFFF */
/* HCON */
#define MMC_HCON_CARD_TYPE_SHIFT                           (0U)
#define MMC_HCON_CARD_TYPE_MASK                            (0x1U << MMC_HCON_CARD_TYPE_SHIFT)                           /* 0x00000001 */
#define MMC_HCON_CARD_NUM_SHIFT                            (1U)
#define MMC_HCON_CARD_NUM_MASK                             (0x1FU << MMC_HCON_CARD_NUM_SHIFT)                           /* 0x0000003E */
#define MMC_HCON_H_BUS_TYPE_SHIFT                          (6U)
#define MMC_HCON_H_BUS_TYPE_MASK                           (0x1U << MMC_HCON_H_BUS_TYPE_SHIFT)                          /* 0x00000040 */
#define MMC_HCON_H_DATA_WIDTH_SHIFT                        (7U)
#define MMC_HCON_H_DATA_WIDTH_MASK                         (0x7U << MMC_HCON_H_DATA_WIDTH_SHIFT)                        /* 0x00000380 */
#define MMC_HCON_H_ADDR_WIDTH_SHIFT                        (10U)
#define MMC_HCON_H_ADDR_WIDTH_MASK                         (0x3FU << MMC_HCON_H_ADDR_WIDTH_SHIFT)                       /* 0x0000FC00 */
#define MMC_HCON_DMA_INTERFACE_SHIFT                       (16U)
#define MMC_HCON_DMA_INTERFACE_MASK                        (0x3U << MMC_HCON_DMA_INTERFACE_SHIFT)                       /* 0x00030000 */
#define MMC_HCON_GE_DMA_DATA_WIDTH_SHIFT                   (18U)
#define MMC_HCON_GE_DMA_DATA_WIDTH_MASK                    (0x7U << MMC_HCON_GE_DMA_DATA_WIDTH_SHIFT)                   /* 0x001C0000 */
#define MMC_HCON_FIFO_RAM_INSIDE_SHIFT                     (21U)
#define MMC_HCON_FIFO_RAM_INSIDE_MASK                      (0x1U << MMC_HCON_FIFO_RAM_INSIDE_SHIFT)                     /* 0x00200000 */
#define MMC_HCON_IMPL_HOLD_REG_SHIFT                       (22U)
#define MMC_HCON_IMPL_HOLD_REG_MASK                        (0x1U << MMC_HCON_IMPL_HOLD_REG_SHIFT)                       /* 0x00400000 */
#define MMC_HCON_SET_CLK_FALSE_PATH_SHIFT                  (23U)
#define MMC_HCON_SET_CLK_FALSE_PATH_MASK                   (0x1U << MMC_HCON_SET_CLK_FALSE_PATH_SHIFT)                  /* 0x00800000 */
#define MMC_HCON_NUM_CLK_DIV_SHIFT                         (24U)
#define MMC_HCON_NUM_CLK_DIV_MASK                          (0x3U << MMC_HCON_NUM_CLK_DIV_SHIFT)                         /* 0x03000000 */
#define MMC_HCON_AREA_OPTIMIZED_SHIFT                      (26U)
#define MMC_HCON_AREA_OPTIMIZED_MASK                       (0x1U << MMC_HCON_AREA_OPTIMIZED_SHIFT)                      /* 0x04000000 */
/* UHSREG */
#define MMC_UHSREG_DDR_REG_SHIFT                           (16U)
#define MMC_UHSREG_DDR_REG_MASK                            (0x1U << MMC_UHSREG_DDR_REG_SHIFT)                           /* 0x00010000 */
/* RSTN */
#define MMC_RSTN_CARD_RESET_SHIFT                          (0U)
#define MMC_RSTN_CARD_RESET_MASK                           (0x1U << MMC_RSTN_CARD_RESET_SHIFT)                          /* 0x00000001 */
/* BMOD */
#define MMC_BMOD_SWR_SHIFT                                 (0U)
#define MMC_BMOD_SWR_MASK                                  (0x1U << MMC_BMOD_SWR_SHIFT)                                 /* 0x00000001 */
#define MMC_BMOD_FB_SHIFT                                  (1U)
#define MMC_BMOD_FB_MASK                                   (0x1U << MMC_BMOD_FB_SHIFT)                                  /* 0x00000002 */
#define MMC_BMOD_DSL_SHIFT                                 (2U)
#define MMC_BMOD_DSL_MASK                                  (0x1FU << MMC_BMOD_DSL_SHIFT)                                /* 0x0000007C */
#define MMC_BMOD_DE_SHIFT                                  (7U)
#define MMC_BMOD_DE_MASK                                   (0x1U << MMC_BMOD_DE_SHIFT)                                  /* 0x00000080 */
#define MMC_BMOD_PBL_SHIFT                                 (8U)
#define MMC_BMOD_PBL_MASK                                  (0x7U << MMC_BMOD_PBL_SHIFT)                                 /* 0x00000700 */
/* PLDMND */
#define MMC_PLDMND_PD_SHIFT                                (0U)
#define MMC_PLDMND_PD_MASK                                 (0xFFFFFFFFU << MMC_PLDMND_PD_SHIFT)                         /* 0xFFFFFFFF */
/* DBADDR */
#define MMC_DBADDR_SBL_SHIFT                               (0U)
#define MMC_DBADDR_SBL_MASK                                (0xFFFFFFFFU << MMC_DBADDR_SBL_SHIFT)                        /* 0xFFFFFFFF */
/* IDSTS */
#define MMC_IDSTS_TI_SHIFT                                 (0U)
#define MMC_IDSTS_TI_MASK                                  (0x1U << MMC_IDSTS_TI_SHIFT)                                 /* 0x00000001 */
#define MMC_IDSTS_RI_SHIFT                                 (1U)
#define MMC_IDSTS_RI_MASK                                  (0x1U << MMC_IDSTS_RI_SHIFT)                                 /* 0x00000002 */
#define MMC_IDSTS_FBE_SHIFT                                (2U)
#define MMC_IDSTS_FBE_MASK                                 (0x1U << MMC_IDSTS_FBE_SHIFT)                                /* 0x00000004 */
#define MMC_IDSTS_DUI_SHIFT                                (4U)
#define MMC_IDSTS_DUI_MASK                                 (0x1U << MMC_IDSTS_DUI_SHIFT)                                /* 0x00000010 */
#define MMC_IDSTS_CES_SHIFT                                (5U)
#define MMC_IDSTS_CES_MASK                                 (0x1U << MMC_IDSTS_CES_SHIFT)                                /* 0x00000020 */
#define MMC_IDSTS_NIS_SHIFT                                (8U)
#define MMC_IDSTS_NIS_MASK                                 (0x1U << MMC_IDSTS_NIS_SHIFT)                                /* 0x00000100 */
#define MMC_IDSTS_AIS_SHIFT                                (9U)
#define MMC_IDSTS_AIS_MASK                                 (0x1U << MMC_IDSTS_AIS_SHIFT)                                /* 0x00000200 */
#define MMC_IDSTS_EB_SHIFT                                 (10U)
#define MMC_IDSTS_EB_MASK                                  (0x7U << MMC_IDSTS_EB_SHIFT)                                 /* 0x00001C00 */
#define MMC_IDSTS_FSM_SHIFT                                (13U)
#define MMC_IDSTS_FSM_MASK                                 (0xFU << MMC_IDSTS_FSM_SHIFT)                                /* 0x0001E000 */
/* IDINTEN */
#define MMC_IDINTEN_TI_SHIFT                               (0U)
#define MMC_IDINTEN_TI_MASK                                (0x1U << MMC_IDINTEN_TI_SHIFT)                               /* 0x00000001 */
#define MMC_IDINTEN_RI_SHIFT                               (1U)
#define MMC_IDINTEN_RI_MASK                                (0x1U << MMC_IDINTEN_RI_SHIFT)                               /* 0x00000002 */
#define MMC_IDINTEN_FBE_SHIFT                              (2U)
#define MMC_IDINTEN_FBE_MASK                               (0x1U << MMC_IDINTEN_FBE_SHIFT)                              /* 0x00000004 */
#define MMC_IDINTEN_DU_SHIFT                               (4U)
#define MMC_IDINTEN_DU_MASK                                (0x1U << MMC_IDINTEN_DU_SHIFT)                               /* 0x00000010 */
#define MMC_IDINTEN_CES_SHIFT                              (5U)
#define MMC_IDINTEN_CES_MASK                               (0x1U << MMC_IDINTEN_CES_SHIFT)                              /* 0x00000020 */
#define MMC_IDINTEN_NI_SHIFT                               (8U)
#define MMC_IDINTEN_NI_MASK                                (0x1U << MMC_IDINTEN_NI_SHIFT)                               /* 0x00000100 */
#define MMC_IDINTEN_AI_SHIFT                               (9U)
#define MMC_IDINTEN_AI_MASK                                (0x1U << MMC_IDINTEN_AI_SHIFT)                               /* 0x00000200 */
/* DSCADDR */
#define MMC_DSCADDR_HDA_SHIFT                              (0U)
#define MMC_DSCADDR_HDA_MASK                               (0xFFFFFFFFU << MMC_DSCADDR_HDA_SHIFT)                       /* 0xFFFFFFFF */
/* BUFADDR */
#define MMC_BUFADDR_HBA_SHIFT                              (0U)
#define MMC_BUFADDR_HBA_MASK                               (0xFFFFFFFFU << MMC_BUFADDR_HBA_SHIFT)                       /* 0xFFFFFFFF */
/* CARDTHRCTL */
#define MMC_CARDTHRCTL_CARD_RD_THRES_EN_SHIFT              (0U)
#define MMC_CARDTHRCTL_CARD_RD_THRES_EN_MASK               (0x1U << MMC_CARDTHRCTL_CARD_RD_THRES_EN_SHIFT)              /* 0x00000001 */
#define MMC_CARDTHRCTL_BUSY_CLR_INT_EN_SHIFT               (1U)
#define MMC_CARDTHRCTL_BUSY_CLR_INT_EN_MASK                (0x1U << MMC_CARDTHRCTL_BUSY_CLR_INT_EN_SHIFT)               /* 0x00000002 */
#define MMC_CARDTHRCTL_CARD_RD_THRES_SHIFT                 (16U)
#define MMC_CARDTHRCTL_CARD_RD_THRES_MASK                  (0xFFFU << MMC_CARDTHRCTL_CARD_RD_THRES_SHIFT)               /* 0x0FFF0000 */
/* BACKEND_POWER */
#define MMC_BACKEND_POWER_BACK_END_POWER_SHIFT             (0U)
#define MMC_BACKEND_POWER_BACK_END_POWER_MASK              (0x1U << MMC_BACKEND_POWER_BACK_END_POWER_SHIFT)             /* 0x00000001 */
/* EMMCDDR_REG */
#define MMC_EMMCDDR_REG_HALF_START_BIT_SHIFT               (0U)
#define MMC_EMMCDDR_REG_HALF_START_BIT_MASK                (0x1U << MMC_EMMCDDR_REG_HALF_START_BIT_SHIFT)               /* 0x00000001 */
/* RDYINT_GEN */
#define MMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_SHIFT             (0U)
#define MMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_MASK              (0xFFU << MMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_SHIFT)            /* 0x000000FF */
#define MMC_RDYINT_GEN_RDYINT_GEN_WORKING_SHIFT            (8U)
#define MMC_RDYINT_GEN_RDYINT_GEN_WORKING_MASK             (0x1U << MMC_RDYINT_GEN_RDYINT_GEN_WORKING_SHIFT)            /* 0x00000100 */
#define MMC_RDYINT_GEN_RDYINT_CNT_STATUS_SHIFT             (16U)
#define MMC_RDYINT_GEN_RDYINT_CNT_STATUS_MASK              (0xFFU << MMC_RDYINT_GEN_RDYINT_CNT_STATUS_SHIFT)            /* 0x00FF0000 */
#define MMC_RDYINT_GEN_RDYINT_CNT_FINISH_SHIFT             (24U)
#define MMC_RDYINT_GEN_RDYINT_CNT_FINISH_MASK              (0x1U << MMC_RDYINT_GEN_RDYINT_CNT_FINISH_SHIFT)             /* 0x01000000 */
/* FIFO_BASE */
#define MMC_FIFO_BASE_FIFO_BASE_ADDR_SHIFT                 (0U)
#define MMC_FIFO_BASE_FIFO_BASE_ADDR_MASK                  (0xFFFFFFFFU << MMC_FIFO_BASE_FIFO_BASE_ADDR_SHIFT)          /* 0xFFFFFFFF */
/******************************************GPIO******************************************/
/* SWPORT_DR_L */
#define GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT          (0U)
#define GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_MASK           (0xFFFFU << GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT)       /* 0x0000FFFF */
/* SWPORT_DR_H */
#define GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT         (0U)
#define GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_MASK          (0xFFFFU << GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT)      /* 0x0000FFFF */
/* SWPORT_DDR_L */
#define GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT        (0U)
#define GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_MASK         (0xFFFFU << GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT)     /* 0x0000FFFF */
/* SWPORT_DDR_H */
#define GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT       (0U)
#define GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_MASK        (0xFFFFU << GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT)    /* 0x0000FFFF */
/* INT_EN_L */
#define GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT                (0U)
#define GPIO_INT_EN_L_GPIO_INT_EN_LOW_MASK                 (0xFFFFU << GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT)             /* 0x0000FFFF */
/* INT_EN_H */
#define GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT               (0U)
#define GPIO_INT_EN_H_GPIO_INT_EN_HIGH_MASK                (0xFFFFU << GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT)            /* 0x0000FFFF */
/* INT_MASK_L */
#define GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT            (0U)
#define GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_MASK             (0xFFFFU << GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT)         /* 0x0000FFFF */
/* INT_MASK_H */
#define GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT           (0U)
#define GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_MASK            (0xFFFFU << GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT)        /* 0x0000FFFF */
/* INT_TYPE_L */
#define GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT            (0U)
#define GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_MASK             (0xFFFFU << GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT)         /* 0x0000FFFF */
/* INT_TYPE_H */
#define GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT           (0U)
#define GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_MASK            (0xFFFFU << GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT)        /* 0x0000FFFF */
/* INT_POLARITY_L */
#define GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT    (0U)
#define GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_MASK     (0xFFFFU << GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT) /* 0x0000FFFF */
/* INT_POLARITY_H */
#define GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT   (0U)
#define GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_MASK    (0xFFFFU << GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_L */
#define GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT    (0U)
#define GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_MASK     (0xFFFFU << GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_H */
#define GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT   (0U)
#define GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_MASK    (0xFFFFU << GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT) /* 0x0000FFFF */
/* DEBOUNCE_L */
#define GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT            (0U)
#define GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_MASK             (0xFFFFU << GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT)         /* 0x0000FFFF */
/* DEBOUNCE_H */
#define GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT           (0U)
#define GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_MASK            (0xFFFFU << GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT)        /* 0x0000FFFF */
/* DBCLK_DIV_EN_L */
#define GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT    (0U)
#define GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_MASK     (0xFFFFU << GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_EN_H */
#define GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT   (0U)
#define GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_MASK    (0xFFFFU << GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_CON */
#define GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT        (0U)
#define GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_MASK         (0xFFFFFFU << GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT)   /* 0x00FFFFFF */
/* INT_STATUS */
#define GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT              (0U)
#define GPIO_INT_STATUS_GPIO_INT_STATUS_MASK               (0xFFFFFFFFU << GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT)       /* 0xFFFFFFFF */
/* INT_RAWSTATUS */
#define GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT        (0U)
#define GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_MASK         (0xFFFFFFFFU << GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT) /* 0xFFFFFFFF */
/* PORT_EOI_L */
#define GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT            (0U)
#define GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_MASK             (0xFFFFU << GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT)         /* 0x0000FFFF */
/* PORT_EOI_H */
#define GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT           (0U)
#define GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_MASK            (0xFFFFU << GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT)        /* 0x0000FFFF */
/* EXT_PORT */
#define GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT                  (0U)
#define GPIO_EXT_PORT_GPIO_EXT_PORT_MASK                   (0xFFFFFFFFU << GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT)           /* 0xFFFFFFFF */
/* VER_ID */
#define GPIO_VER_ID_GPIO_VER_ID_SHIFT                      (0U)
#define GPIO_VER_ID_GPIO_VER_ID_MASK                       (0xFFFFFFFFU << GPIO_VER_ID_GPIO_VER_ID_SHIFT)               /* 0xFFFFFFFF */
/******************************************PDM*******************************************/
/* SYSCONFIG */
#define PDM_SYSCONFIG_RX_CLR_SHIFT                         (0U)
#define PDM_SYSCONFIG_RX_CLR_MASK                          (0x1U << PDM_SYSCONFIG_RX_CLR_SHIFT)                         /* 0x00000001 */
#define PDM_SYSCONFIG_RX_START_SHIFT                       (2U)
#define PDM_SYSCONFIG_RX_START_MASK                        (0x1U << PDM_SYSCONFIG_RX_START_SHIFT)                       /* 0x00000004 */
/* CTRL0 */
#define PDM_CTRL0_DATA_VLD_WIDTH_SHIFT                     (0U)
#define PDM_CTRL0_DATA_VLD_WIDTH_MASK                      (0x1FU << PDM_CTRL0_DATA_VLD_WIDTH_SHIFT)                    /* 0x0000001F */
#define PDM_CTRL0_INT_DIV_CON_SHIFT                        (8U)
#define PDM_CTRL0_INT_DIV_CON_MASK                         (0xFFU << PDM_CTRL0_INT_DIV_CON_SHIFT)                       /* 0x0000FF00 */
#define PDM_CTRL0_CLK20X_DIV_CON_SHIFT                     (16U)
#define PDM_CTRL0_CLK20X_DIV_CON_MASK                      (0xFFU << PDM_CTRL0_CLK20X_DIV_CON_SHIFT)                    /* 0x00FF0000 */
#define PDM_CTRL0_FILTER_IN_TYPE_SEL_SHIFT                 (24U)
#define PDM_CTRL0_FILTER_IN_TYPE_SEL_MASK                  (0x1U << PDM_CTRL0_FILTER_IN_TYPE_SEL_SHIFT)                 /* 0x01000000 */
#define PDM_CTRL0_HWT_EN_SHIFT                             (26U)
#define PDM_CTRL0_HWT_EN_MASK                              (0x1U << PDM_CTRL0_HWT_EN_SHIFT)                             /* 0x04000000 */
#define PDM_CTRL0_PATH0_EN_SHIFT                           (27U)
#define PDM_CTRL0_PATH0_EN_MASK                            (0x1U << PDM_CTRL0_PATH0_EN_SHIFT)                           /* 0x08000000 */
#define PDM_CTRL0_PATH1_EN_SHIFT                           (28U)
#define PDM_CTRL0_PATH1_EN_MASK                            (0x1U << PDM_CTRL0_PATH1_EN_SHIFT)                           /* 0x10000000 */
#define PDM_CTRL0_PATH2_EN_SHIFT                           (29U)
#define PDM_CTRL0_PATH2_EN_MASK                            (0x1U << PDM_CTRL0_PATH2_EN_SHIFT)                           /* 0x20000000 */
#define PDM_CTRL0_PATH3_EN_SHIFT                           (30U)
#define PDM_CTRL0_PATH3_EN_MASK                            (0x1U << PDM_CTRL0_PATH3_EN_SHIFT)                           /* 0x40000000 */
#define PDM_CTRL0_SJM_SEL_SHIFT                            (31U)
#define PDM_CTRL0_SJM_SEL_MASK                             (0x1U << PDM_CTRL0_SJM_SEL_SHIFT)                            /* 0x80000000 */
/* CTRL1 */
#define PDM_CTRL1_FRAC_DIV_DENOMONATOR_SHIFT               (0U)
#define PDM_CTRL1_FRAC_DIV_DENOMONATOR_MASK                (0xFFFFU << PDM_CTRL1_FRAC_DIV_DENOMONATOR_SHIFT)            /* 0x0000FFFF */
#define PDM_CTRL1_FRAC_DIV_NUMERATOR_SHIFT                 (16U)
#define PDM_CTRL1_FRAC_DIV_NUMERATOR_MASK                  (0xFFFFU << PDM_CTRL1_FRAC_DIV_NUMERATOR_SHIFT)              /* 0xFFFF0000 */
/* CLK_CTRL */
#define PDM_CLK_CTRL_PDM_DS_RATIO_SHIFT                    (0U)
#define PDM_CLK_CTRL_PDM_DS_RATIO_MASK                     (0x7U << PDM_CLK_CTRL_PDM_DS_RATIO_SHIFT)                    /* 0x00000007 */
#define PDM_CLK_CTRL_CLK_POLAR_SHIFT                       (3U)
#define PDM_CLK_CTRL_CLK_POLAR_MASK                        (0x1U << PDM_CLK_CTRL_CLK_POLAR_SHIFT)                       /* 0x00000008 */
#define PDM_CLK_CTRL_DIV_TYPE_SEL_SHIFT                    (4U)
#define PDM_CLK_CTRL_DIV_TYPE_SEL_MASK                     (0x1U << PDM_CLK_CTRL_DIV_TYPE_SEL_SHIFT)                    /* 0x00000010 */
#define PDM_CLK_CTRL_PDM_CLK_EN_SHIFT                      (5U)
#define PDM_CLK_CTRL_PDM_CLK_EN_MASK                       (0x1U << PDM_CLK_CTRL_PDM_CLK_EN_SHIFT)                      /* 0x00000020 */
#define PDM_CLK_CTRL_DIV_RATIO_SEL_SHIFT                   (6U)
#define PDM_CLK_CTRL_DIV_RATIO_SEL_MASK                    (0x1U << PDM_CLK_CTRL_DIV_RATIO_SEL_SHIFT)                   /* 0x00000040 */
#define PDM_CLK_CTRL_FS_SEL_CFG_EN_SHIFT                   (7U)
#define PDM_CLK_CTRL_FS_SEL_CFG_EN_MASK                    (0x1U << PDM_CLK_CTRL_FS_SEL_CFG_EN_SHIFT)                   /* 0x00000080 */
#define PDM_CLK_CTRL_FS_SEL_CFG_SHIFT                      (8U)
#define PDM_CLK_CTRL_FS_SEL_CFG_MASK                       (0x1FU << PDM_CLK_CTRL_FS_SEL_CFG_SHIFT)                     /* 0x00001F00 */
/* HPF_CTRL */
#define PDM_HPF_CTRL_HPF_CF_SHIFT                          (0U)
#define PDM_HPF_CTRL_HPF_CF_MASK                           (0x3U << PDM_HPF_CTRL_HPF_CF_SHIFT)                          /* 0x00000003 */
#define PDM_HPF_CTRL_HPFRE_SHIFT                           (2U)
#define PDM_HPF_CTRL_HPFRE_MASK                            (0x1U << PDM_HPF_CTRL_HPFRE_SHIFT)                           /* 0x00000004 */
#define PDM_HPF_CTRL_HPFLE_SHIFT                           (3U)
#define PDM_HPF_CTRL_HPFLE_MASK                            (0x1U << PDM_HPF_CTRL_HPFLE_SHIFT)                           /* 0x00000008 */
/* FIFO_CTRL */
#define PDM_FIFO_CTRL_RFL_SHIFT                            (0U)
#define PDM_FIFO_CTRL_RFL_MASK                             (0xFFU << PDM_FIFO_CTRL_RFL_SHIFT)                           /* 0x000000FF */
#define PDM_FIFO_CTRL_RFT_SHIFT                            (8U)
#define PDM_FIFO_CTRL_RFT_MASK                             (0x7FU << PDM_FIFO_CTRL_RFT_SHIFT)                           /* 0x00007F00 */
/* DMA_CTRL */
#define PDM_DMA_CTRL_RDL_SHIFT                             (0U)
#define PDM_DMA_CTRL_RDL_MASK                              (0x7FU << PDM_DMA_CTRL_RDL_SHIFT)                            /* 0x0000007F */
#define PDM_DMA_CTRL_RDE_SHIFT                             (8U)
#define PDM_DMA_CTRL_RDE_MASK                              (0x1U << PDM_DMA_CTRL_RDE_SHIFT)                             /* 0x00000100 */
/* INT_EN */
#define PDM_INT_EN_RXTIE_SHIFT                             (0U)
#define PDM_INT_EN_RXTIE_MASK                              (0x1U << PDM_INT_EN_RXTIE_SHIFT)                             /* 0x00000001 */
#define PDM_INT_EN_RXOIE_SHIFT                             (1U)
#define PDM_INT_EN_RXOIE_MASK                              (0x1U << PDM_INT_EN_RXOIE_SHIFT)                             /* 0x00000002 */
/* INT_CLR */
#define PDM_INT_CLR_RXOIC_SHIFT                            (1U)
#define PDM_INT_CLR_RXOIC_MASK                             (0x1U << PDM_INT_CLR_RXOIC_SHIFT)                            /* 0x00000002 */
/* INT_ST */
#define PDM_INT_ST_RXFI_SHIFT                              (0U)
#define PDM_INT_ST_RXFI_MASK                               (0x1U << PDM_INT_ST_RXFI_SHIFT)                              /* 0x00000001 */
#define PDM_INT_ST_RXOI_SHIFT                              (1U)
#define PDM_INT_ST_RXOI_MASK                               (0x1U << PDM_INT_ST_RXOI_SHIFT)                              /* 0x00000002 */
/* RXFIFO_DATA_REG */
#define PDM_RXFIFO_DATA_REG_RXDR_SHIFT                     (0U)
#define PDM_RXFIFO_DATA_REG_RXDR_MASK                      (0xFFFFFFFFU << PDM_RXFIFO_DATA_REG_RXDR_SHIFT)              /* 0xFFFFFFFF */
/* DATA0R_REG */
#define PDM_DATA0R_REG_DATA0R_SHIFT                        (0U)
#define PDM_DATA0R_REG_DATA0R_MASK                         (0xFFFFFFFFU << PDM_DATA0R_REG_DATA0R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA0L_REG */
#define PDM_DATA0L_REG_DATA0L_SHIFT                        (0U)
#define PDM_DATA0L_REG_DATA0L_MASK                         (0xFFFFFFFFU << PDM_DATA0L_REG_DATA0L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA1R_REG */
#define PDM_DATA1R_REG_DATA1R_SHIFT                        (0U)
#define PDM_DATA1R_REG_DATA1R_MASK                         (0x1U << PDM_DATA1R_REG_DATA1R_SHIFT)                        /* 0x00000001 */
/* DATA1L_REG */
#define PDM_DATA1L_REG_DATA1L_SHIFT                        (0U)
#define PDM_DATA1L_REG_DATA1L_MASK                         (0xFFFFFFFFU << PDM_DATA1L_REG_DATA1L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA2R_REG */
#define PDM_DATA2R_REG_DATA2R_SHIFT                        (0U)
#define PDM_DATA2R_REG_DATA2R_MASK                         (0xFFFFFFFFU << PDM_DATA2R_REG_DATA2R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA2L_REG */
#define PDM_DATA2L_REG_DATA2L_SHIFT                        (0U)
#define PDM_DATA2L_REG_DATA2L_MASK                         (0xFFFFFFFFU << PDM_DATA2L_REG_DATA2L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA3R_REG */
#define PDM_DATA3R_REG_DATA3R_SHIFT                        (0U)
#define PDM_DATA3R_REG_DATA3R_MASK                         (0xFFFFFFFFU << PDM_DATA3R_REG_DATA3R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA3L_REG */
#define PDM_DATA3L_REG_DATA3L_SHIFT                        (0U)
#define PDM_DATA3L_REG_DATA3L_MASK                         (0xFFFFFFFFU << PDM_DATA3L_REG_DATA3L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA_VALID */
#define PDM_DATA_VALID_PATH3_VLD_SHIFT                     (0U)
#define PDM_DATA_VALID_PATH3_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH3_VLD_SHIFT)                     /* 0x00000001 */
#define PDM_DATA_VALID_PATH2_VLD_SHIFT                     (1U)
#define PDM_DATA_VALID_PATH2_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH2_VLD_SHIFT)                     /* 0x00000002 */
#define PDM_DATA_VALID_PATH1_VLD_SHIFT                     (2U)
#define PDM_DATA_VALID_PATH1_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH1_VLD_SHIFT)                     /* 0x00000004 */
#define PDM_DATA_VALID_PATH0_VLD_SHIFT                     (3U)
#define PDM_DATA_VALID_PATH0_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH0_VLD_SHIFT)                     /* 0x00000008 */
/* VERSION */
#define PDM_VERSION_VERSION_SHIFT                          (0U)
#define PDM_VERSION_VERSION_MASK                           (0xFFFFFFFFU << PDM_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* INCR_RXDR */
#define PDM_INCR_RXDR_RECEIVE_FIFO_DATA_SHIFT              (0U)
#define PDM_INCR_RXDR_RECEIVE_FIFO_DATA_MASK               (0xFFFFFFFFU << PDM_INCR_RXDR_RECEIVE_FIFO_DATA_SHIFT)       /* 0xFFFFFFFF */
/******************************************I2S*******************************************/
/* TXCR */
#define I2S_TXCR_VDW_SHIFT                                 (0U)
#define I2S_TXCR_VDW_MASK                                  (0x1FU << I2S_TXCR_VDW_SHIFT)                                /* 0x0000001F */
#define I2S_TXCR_TFS_SHIFT                                 (5U)
#define I2S_TXCR_TFS_MASK                                  (0x1U << I2S_TXCR_TFS_SHIFT)                                 /* 0x00000020 */
#define I2S_TXCR_PBM_SHIFT                                 (7U)
#define I2S_TXCR_PBM_MASK                                  (0x3U << I2S_TXCR_PBM_SHIFT)                                 /* 0x00000180 */
#define I2S_TXCR_IBM_SHIFT                                 (9U)
#define I2S_TXCR_IBM_MASK                                  (0x3U << I2S_TXCR_IBM_SHIFT)                                 /* 0x00000600 */
#define I2S_TXCR_FBM_SHIFT                                 (11U)
#define I2S_TXCR_FBM_MASK                                  (0x1U << I2S_TXCR_FBM_SHIFT)                                 /* 0x00000800 */
#define I2S_TXCR_SJM_SHIFT                                 (12U)
#define I2S_TXCR_SJM_MASK                                  (0x1U << I2S_TXCR_SJM_SHIFT)                                 /* 0x00001000 */
#define I2S_TXCR_HWT_SHIFT                                 (14U)
#define I2S_TXCR_HWT_MASK                                  (0x1U << I2S_TXCR_HWT_SHIFT)                                 /* 0x00004000 */
#define I2S_TXCR_TCSR_SHIFT                                (15U)
#define I2S_TXCR_TCSR_MASK                                 (0x3U << I2S_TXCR_TCSR_SHIFT)                                /* 0x00018000 */
#define I2S_TXCR_RCNT_SHIFT                                (17U)
#define I2S_TXCR_RCNT_MASK                                 (0x3FU << I2S_TXCR_RCNT_SHIFT)                               /* 0x007E0000 */
/* RXCR */
#define I2S_RXCR_VDW_SHIFT                                 (0U)
#define I2S_RXCR_VDW_MASK                                  (0x1FU << I2S_RXCR_VDW_SHIFT)                                /* 0x0000001F */
#define I2S_RXCR_TFS_SHIFT                                 (5U)
#define I2S_RXCR_TFS_MASK                                  (0x1U << I2S_RXCR_TFS_SHIFT)                                 /* 0x00000020 */
#define I2S_RXCR_PBM_SHIFT                                 (7U)
#define I2S_RXCR_PBM_MASK                                  (0x3U << I2S_RXCR_PBM_SHIFT)                                 /* 0x00000180 */
#define I2S_RXCR_IBM_SHIFT                                 (9U)
#define I2S_RXCR_IBM_MASK                                  (0x3U << I2S_RXCR_IBM_SHIFT)                                 /* 0x00000600 */
#define I2S_RXCR_FBM_SHIFT                                 (11U)
#define I2S_RXCR_FBM_MASK                                  (0x1U << I2S_RXCR_FBM_SHIFT)                                 /* 0x00000800 */
#define I2S_RXCR_SJM_SHIFT                                 (12U)
#define I2S_RXCR_SJM_MASK                                  (0x1U << I2S_RXCR_SJM_SHIFT)                                 /* 0x00001000 */
#define I2S_RXCR_HWT_SHIFT                                 (14U)
#define I2S_RXCR_HWT_MASK                                  (0x1U << I2S_RXCR_HWT_SHIFT)                                 /* 0x00004000 */
#define I2S_RXCR_RCSR_SHIFT                                (15U)
#define I2S_RXCR_RCSR_MASK                                 (0x3U << I2S_RXCR_RCSR_SHIFT)                                /* 0x00018000 */
/* CKR */
#define I2S_CKR_TSD_SHIFT                                  (0U)
#define I2S_CKR_TSD_MASK                                   (0xFFU << I2S_CKR_TSD_SHIFT)                                 /* 0x000000FF */
#define I2S_CKR_RSD_SHIFT                                  (8U)
#define I2S_CKR_RSD_MASK                                   (0xFFU << I2S_CKR_RSD_SHIFT)                                 /* 0x0000FF00 */
#define I2S_CKR_MDIV_SHIFT                                 (16U)
#define I2S_CKR_MDIV_MASK                                  (0xFFU << I2S_CKR_MDIV_SHIFT)                                /* 0x00FF0000 */
#define I2S_CKR_TLP_SHIFT                                  (24U)
#define I2S_CKR_TLP_MASK                                   (0x1U << I2S_CKR_TLP_SHIFT)                                  /* 0x01000000 */
#define I2S_CKR_RLP_SHIFT                                  (25U)
#define I2S_CKR_RLP_MASK                                   (0x1U << I2S_CKR_RLP_SHIFT)                                  /* 0x02000000 */
#define I2S_CKR_CKP_SHIFT                                  (26U)
#define I2S_CKR_CKP_MASK                                   (0x1U << I2S_CKR_CKP_SHIFT)                                  /* 0x04000000 */
#define I2S_CKR_MSS_SHIFT                                  (27U)
#define I2S_CKR_MSS_MASK                                   (0x1U << I2S_CKR_MSS_SHIFT)                                  /* 0x08000000 */
#define I2S_CKR_TRCM_SHIFT                                 (28U)
#define I2S_CKR_TRCM_MASK                                  (0x3U << I2S_CKR_TRCM_SHIFT)                                 /* 0x30000000 */
/* TXFIFOLR */
#define I2S_TXFIFOLR_TFL0_SHIFT                            (0U)
#define I2S_TXFIFOLR_TFL0_MASK                             (0x3FU << I2S_TXFIFOLR_TFL0_SHIFT)                           /* 0x0000003F */
#define I2S_TXFIFOLR_TFL1_SHIFT                            (6U)
#define I2S_TXFIFOLR_TFL1_MASK                             (0x3FU << I2S_TXFIFOLR_TFL1_SHIFT)                           /* 0x00000FC0 */
#define I2S_TXFIFOLR_TFL2_SHIFT                            (12U)
#define I2S_TXFIFOLR_TFL2_MASK                             (0x3FU << I2S_TXFIFOLR_TFL2_SHIFT)                           /* 0x0003F000 */
#define I2S_TXFIFOLR_TFL3_SHIFT                            (18U)
#define I2S_TXFIFOLR_TFL3_MASK                             (0x3FU << I2S_TXFIFOLR_TFL3_SHIFT)                           /* 0x00FC0000 */
/* DMACR */
#define I2S_DMACR_TDL_SHIFT                                (0U)
#define I2S_DMACR_TDL_MASK                                 (0x1FU << I2S_DMACR_TDL_SHIFT)                               /* 0x0000001F */
#define I2S_DMACR_TDE_SHIFT                                (8U)
#define I2S_DMACR_TDE_MASK                                 (0x1U << I2S_DMACR_TDE_SHIFT)                                /* 0x00000100 */
#define I2S_DMACR_RDL_SHIFT                                (16U)
#define I2S_DMACR_RDL_MASK                                 (0x1FU << I2S_DMACR_RDL_SHIFT)                               /* 0x001F0000 */
#define I2S_DMACR_RDE_SHIFT                                (24U)
#define I2S_DMACR_RDE_MASK                                 (0x1U << I2S_DMACR_RDE_SHIFT)                                /* 0x01000000 */
/* INTCR */
#define I2S_INTCR_TXEIE_SHIFT                              (0U)
#define I2S_INTCR_TXEIE_MASK                               (0x1U << I2S_INTCR_TXEIE_SHIFT)                              /* 0x00000001 */
#define I2S_INTCR_TXUIE_SHIFT                              (1U)
#define I2S_INTCR_TXUIE_MASK                               (0x1U << I2S_INTCR_TXUIE_SHIFT)                              /* 0x00000002 */
#define I2S_INTCR_TXUIC_SHIFT                              (2U)
#define I2S_INTCR_TXUIC_MASK                               (0x1U << I2S_INTCR_TXUIC_SHIFT)                              /* 0x00000004 */
#define I2S_INTCR_TFT_SHIFT                                (4U)
#define I2S_INTCR_TFT_MASK                                 (0x1FU << I2S_INTCR_TFT_SHIFT)                               /* 0x000001F0 */
#define I2S_INTCR_RXFIE_SHIFT                              (16U)
#define I2S_INTCR_RXFIE_MASK                               (0x1U << I2S_INTCR_RXFIE_SHIFT)                              /* 0x00010000 */
#define I2S_INTCR_RXOIE_SHIFT                              (17U)
#define I2S_INTCR_RXOIE_MASK                               (0x1U << I2S_INTCR_RXOIE_SHIFT)                              /* 0x00020000 */
#define I2S_INTCR_RXOIC_SHIFT                              (18U)
#define I2S_INTCR_RXOIC_MASK                               (0x1U << I2S_INTCR_RXOIC_SHIFT)                              /* 0x00040000 */
#define I2S_INTCR_RFT_SHIFT                                (20U)
#define I2S_INTCR_RFT_MASK                                 (0x1FU << I2S_INTCR_RFT_SHIFT)                               /* 0x01F00000 */
/* INTSR */
#define I2S_INTSR_TXEI_SHIFT                               (0U)
#define I2S_INTSR_TXEI_MASK                                (0x1U << I2S_INTSR_TXEI_SHIFT)                               /* 0x00000001 */
#define I2S_INTSR_TXUI_SHIFT                               (1U)
#define I2S_INTSR_TXUI_MASK                                (0x1U << I2S_INTSR_TXUI_SHIFT)                               /* 0x00000002 */
#define I2S_INTSR_RXFI_SHIFT                               (16U)
#define I2S_INTSR_RXFI_MASK                                (0x1U << I2S_INTSR_RXFI_SHIFT)                               /* 0x00010000 */
#define I2S_INTSR_RXOI_SHIFT                               (17U)
#define I2S_INTSR_RXOI_MASK                                (0x1U << I2S_INTSR_RXOI_SHIFT)                               /* 0x00020000 */
/* XFER */
#define I2S_XFER_TXS_SHIFT                                 (0U)
#define I2S_XFER_TXS_MASK                                  (0x1U << I2S_XFER_TXS_SHIFT)                                 /* 0x00000001 */
#define I2S_XFER_RXS_SHIFT                                 (1U)
#define I2S_XFER_RXS_MASK                                  (0x1U << I2S_XFER_RXS_SHIFT)                                 /* 0x00000002 */
/* CLR */
#define I2S_CLR_TXC_SHIFT                                  (0U)
#define I2S_CLR_TXC_MASK                                   (0x1U << I2S_CLR_TXC_SHIFT)                                  /* 0x00000001 */
#define I2S_CLR_RXC_SHIFT                                  (1U)
#define I2S_CLR_RXC_MASK                                   (0x1U << I2S_CLR_RXC_SHIFT)                                  /* 0x00000002 */
/* TXDR */
#define I2S_TXDR_TXDR_SHIFT                                (0U)
#define I2S_TXDR_TXDR_MASK                                 (0xFFFFFFFFU << I2S_TXDR_TXDR_SHIFT)                         /* 0xFFFFFFFF */
/* RXDR */
#define I2S_RXDR_RXDR_SHIFT                                (0U)
#define I2S_RXDR_RXDR_MASK                                 (0xFFFFFFFFU << I2S_RXDR_RXDR_SHIFT)                         /* 0xFFFFFFFF */
/* RXFIFOLR */
#define I2S_RXFIFOLR_RFL0_SHIFT                            (0U)
#define I2S_RXFIFOLR_RFL0_MASK                             (0x3FU << I2S_RXFIFOLR_RFL0_SHIFT)                           /* 0x0000003F */
#define I2S_RXFIFOLR_RFL1_SHIFT                            (6U)
#define I2S_RXFIFOLR_RFL1_MASK                             (0x3FU << I2S_RXFIFOLR_RFL1_SHIFT)                           /* 0x00000FC0 */
#define I2S_RXFIFOLR_RFL2_SHIFT                            (12U)
#define I2S_RXFIFOLR_RFL2_MASK                             (0x3FU << I2S_RXFIFOLR_RFL2_SHIFT)                           /* 0x0003F000 */
#define I2S_RXFIFOLR_RFL3_SHIFT                            (18U)
#define I2S_RXFIFOLR_RFL3_MASK                             (0x3FU << I2S_RXFIFOLR_RFL3_SHIFT)                           /* 0x00FC0000 */
/* VER */
#define I2S_VER_VER_SHIFT                                  (0U)
#define I2S_VER_VER_MASK                                   (0xFFFFFFFFU << I2S_VER_VER_SHIFT)                           /* 0xFFFFFFFF */
/******************************************VAD*******************************************/
/* CONTROL */
#define VAD_CONTROL_VAD_EN_SHIFT                           (0U)
#define VAD_CONTROL_VAD_EN_MASK                            (0x1U << VAD_CONTROL_VAD_EN_SHIFT)                           /* 0x00000001 */
#define VAD_CONTROL_SOURCE_SELECT_SHIFT                    (1U)
#define VAD_CONTROL_SOURCE_SELECT_MASK                     (0x7U << VAD_CONTROL_SOURCE_SELECT_SHIFT)                    /* 0x0000000E */
#define VAD_CONTROL_SOURCE_BURST_SHIFT                     (4U)
#define VAD_CONTROL_SOURCE_BURST_MASK                      (0x7U << VAD_CONTROL_SOURCE_BURST_SHIFT)                     /* 0x00000070 */
#define VAD_CONTROL_SOURCE_BURST_NUM_SHIFT                 (7U)
#define VAD_CONTROL_SOURCE_BURST_NUM_MASK                  (0x7U << VAD_CONTROL_SOURCE_BURST_NUM_SHIFT)                 /* 0x00000380 */
#define VAD_CONTROL_INCR_LENGTH_SHIFT                      (10U)
#define VAD_CONTROL_INCR_LENGTH_MASK                       (0xFU << VAD_CONTROL_INCR_LENGTH_SHIFT)                      /* 0x00003C00 */
#define VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT                (14U)
#define VAD_CONTROL_SOURCE_FIXADDR_EN_MASK                 (0x1U << VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT)                /* 0x00004000 */
#define VAD_CONTROL_ACODEC_CFG_REG_NUM_SHIFT               (15U)
#define VAD_CONTROL_ACODEC_CFG_REG_NUM_MASK                (0x1FU << VAD_CONTROL_ACODEC_CFG_REG_NUM_SHIFT)              /* 0x000F8000 */
#define VAD_CONTROL_VAD_MODE_SHIFT                         (20U)
#define VAD_CONTROL_VAD_MODE_MASK                          (0x3U << VAD_CONTROL_VAD_MODE_SHIFT)                         /* 0x00300000 */
#define VAD_CONTROL_CONFIG_AFTER_DET_EN_SHIFT              (22U)
#define VAD_CONTROL_CONFIG_AFTER_DET_EN_MASK               (0x1U << VAD_CONTROL_CONFIG_AFTER_DET_EN_SHIFT)              /* 0x00400000 */
#define VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT                (23U)
#define VAD_CONTROL_VOICE_CHANNEL_NUM_MASK                 (0x7U << VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT)                /* 0x03800000 */
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT           (26U)
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_MASK            (0x1U << VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT)           /* 0x04000000 */
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT           (27U)
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_MASK            (0x1U << VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT)           /* 0x08000000 */
#define VAD_CONTROL_VOICE_24BIT_SAT_SHIFT                  (28U)
#define VAD_CONTROL_VOICE_24BIT_SAT_MASK                   (0x1U << VAD_CONTROL_VOICE_24BIT_SAT_SHIFT)                  /* 0x10000000 */
#define VAD_CONTROL_VAD_DET_CHANNEL_SHIFT                  (29U)
#define VAD_CONTROL_VAD_DET_CHANNEL_MASK                   (0x7U << VAD_CONTROL_VAD_DET_CHANNEL_SHIFT)                  /* 0xE0000000 */
/* VS_ADDR */
#define VAD_VS_ADDR_VS_ADDR_SHIFT                          (0U)
#define VAD_VS_ADDR_VS_ADDR_MASK                           (0xFFFFFFFFU << VAD_VS_ADDR_VS_ADDR_SHIFT)                   /* 0xFFFFFFFF */
/* ACODEC_BASE_ADDR */
#define VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_SHIFT        (0U)
#define VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_MASK         (0xFFFFFFFFU << VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_SHIFT) /* 0xFFFFFFFF */
/* OD_ADDR0 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_SHIFT            (0U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_SHIFT            (8U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_SHIFT            (16U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_SHIFT)           /* 0x00FF0000 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_SHIFT            (24U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_SHIFT)           /* 0xFF000000 */
/* OD_ADDR1 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_SHIFT            (0U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_SHIFT            (8U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_SHIFT            (16U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_SHIFT)           /* 0x00FF0000 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_SHIFT            (24U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_SHIFT)           /* 0xFF000000 */
/* OD_ADDR2 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_SHIFT            (0U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_MASK             (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_SHIFT            (8U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_MASK             (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_SHIFT           (16U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_MASK            (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_SHIFT           (24U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_MASK            (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_SHIFT)          /* 0xFF000000 */
/* OD_ADDR3 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_SHIFT           (0U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_SHIFT           (8U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_SHIFT           (16U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_SHIFT           (24U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_SHIFT)          /* 0xFF000000 */
/* OD_ADDR4 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_SHIFT           (0U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_SHIFT           (8U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_SHIFT           (16U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_SHIFT           (24U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_SHIFT)          /* 0xFF000000 */
/* OD_ADDR5 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_SHIFT           (0U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_SHIFT           (8U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_SHIFT           (16U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_SHIFT           (24U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_SHIFT)          /* 0xFF000000 */
/* OD_ADDR6 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_SHIFT           (0U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_SHIFT           (8U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_SHIFT           (16U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_SHIFT           (24U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_SHIFT)          /* 0xFF000000 */
/* OD_ADDR7 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_SHIFT           (0U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_SHIFT           (8U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_SHIFT           (16U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_SHIFT           (24U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_SHIFT)          /* 0xFF000000 */
/* D_DATA0 */
#define VAD_D_DATA0_ACODEC_DATA_0_SHIFT                    (0U)
#define VAD_D_DATA0_ACODEC_DATA_0_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_0_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA0_ACODEC_DATA_1_SHIFT                    (8U)
#define VAD_D_DATA0_ACODEC_DATA_1_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_1_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA0_ACODEC_DATA_2_SHIFT                    (16U)
#define VAD_D_DATA0_ACODEC_DATA_2_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_2_SHIFT)                   /* 0x00FF0000 */
#define VAD_D_DATA0_ACODEC_DATA_3_SHIFT                    (24U)
#define VAD_D_DATA0_ACODEC_DATA_3_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_3_SHIFT)                   /* 0xFF000000 */
/* D_DATA1 */
#define VAD_D_DATA1_ACODEC_DATA_4_SHIFT                    (0U)
#define VAD_D_DATA1_ACODEC_DATA_4_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_4_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA1_ACODEC_DATA_5_SHIFT                    (8U)
#define VAD_D_DATA1_ACODEC_DATA_5_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_5_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA1_ACODEC_DATA_6_SHIFT                    (16U)
#define VAD_D_DATA1_ACODEC_DATA_6_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_6_SHIFT)                   /* 0x00FF0000 */
#define VAD_D_DATA1_ACODEC_DATA_7_SHIFT                    (24U)
#define VAD_D_DATA1_ACODEC_DATA_7_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_7_SHIFT)                   /* 0xFF000000 */
/* D_DATA2 */
#define VAD_D_DATA2_ACODEC_DATA_8_SHIFT                    (0U)
#define VAD_D_DATA2_ACODEC_DATA_8_MASK                     (0xFFU << VAD_D_DATA2_ACODEC_DATA_8_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA2_ACODEC_DATA_9_SHIFT                    (8U)
#define VAD_D_DATA2_ACODEC_DATA_9_MASK                     (0xFFU << VAD_D_DATA2_ACODEC_DATA_9_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA2_ACODEC_DATA_10_SHIFT                   (16U)
#define VAD_D_DATA2_ACODEC_DATA_10_MASK                    (0xFFU << VAD_D_DATA2_ACODEC_DATA_10_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA2_ACODEC_DATA_11_SHIFT                   (24U)
#define VAD_D_DATA2_ACODEC_DATA_11_MASK                    (0xFFU << VAD_D_DATA2_ACODEC_DATA_11_SHIFT)                  /* 0xFF000000 */
/* D_DATA3 */
#define VAD_D_DATA3_ACODEC_DATA_12_SHIFT                   (0U)
#define VAD_D_DATA3_ACODEC_DATA_12_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_12_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA3_ACODEC_DATA_13_SHIFT                   (8U)
#define VAD_D_DATA3_ACODEC_DATA_13_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_13_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA3_ACODEC_DATA_14_SHIFT                   (16U)
#define VAD_D_DATA3_ACODEC_DATA_14_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_14_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA3_ACODEC_DATA_15_SHIFT                   (24U)
#define VAD_D_DATA3_ACODEC_DATA_15_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_15_SHIFT)                  /* 0xFF000000 */
/* D_DATA4 */
#define VAD_D_DATA4_ACODEC_DATA_16_SHIFT                   (0U)
#define VAD_D_DATA4_ACODEC_DATA_16_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_16_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA4_ACODEC_DATA_17_SHIFT                   (8U)
#define VAD_D_DATA4_ACODEC_DATA_17_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_17_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA4_ACODEC_DATA_18_SHIFT                   (16U)
#define VAD_D_DATA4_ACODEC_DATA_18_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_18_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA4_ACODEC_DATA_19_SHIFT                   (24U)
#define VAD_D_DATA4_ACODEC_DATA_19_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_19_SHIFT)                  /* 0xFF000000 */
/* D_DATA5 */
#define VAD_D_DATA5_ACODEC_DATA_20_SHIFT                   (0U)
#define VAD_D_DATA5_ACODEC_DATA_20_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_20_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA5_ACODEC_DATA_21_SHIFT                   (8U)
#define VAD_D_DATA5_ACODEC_DATA_21_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_21_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA5_ACODEC_DATA_22_SHIFT                   (16U)
#define VAD_D_DATA5_ACODEC_DATA_22_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_22_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA5_ACODEC_DATA_23_SHIFT                   (24U)
#define VAD_D_DATA5_ACODEC_DATA_23_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_23_SHIFT)                  /* 0xFF000000 */
/* D_DATA6 */
#define VAD_D_DATA6_ACODEC_DATA_24_SHIFT                   (0U)
#define VAD_D_DATA6_ACODEC_DATA_24_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_24_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA6_ACODEC_DATA_25_SHIFT                   (8U)
#define VAD_D_DATA6_ACODEC_DATA_25_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_25_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA6_ACODEC_DATA_26_SHIFT                   (16U)
#define VAD_D_DATA6_ACODEC_DATA_26_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_26_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA6_ACODEC_DATA_27_SHIFT                   (24U)
#define VAD_D_DATA6_ACODEC_DATA_27_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_27_SHIFT)                  /* 0xFF000000 */
/* D_DATA7 */
#define VAD_D_DATA7_ACODEC_DATA_28_SHIFT                   (0U)
#define VAD_D_DATA7_ACODEC_DATA_28_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_28_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA7_ACODEC_DATA_29_SHIFT                   (8U)
#define VAD_D_DATA7_ACODEC_DATA_29_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_29_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA7_ACODEC_DATA_30_SHIFT                   (16U)
#define VAD_D_DATA7_ACODEC_DATA_30_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_30_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA7_ACODEC_DATA_31_SHIFT                   (24U)
#define VAD_D_DATA7_ACODEC_DATA_31_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_31_SHIFT)                  /* 0xFF000000 */
/* TIMEOUT */
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT                 (0U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_MASK                  (0xFFFFFU << VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT)             /* 0x000FFFFF */
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT                 (20U)
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_MASK                  (0x3FFU << VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT)               /* 0x3FF00000 */
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT                  (30U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT)                  /* 0x40000000 */
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT                  (31U)
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT)                  /* 0x80000000 */
/* RAM_START_ADDR */
#define VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_SHIFT            (0U)
#define VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_MASK             (0xFFFFFFFFU << VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_SHIFT)     /* 0xFFFFFFFF */
/* RAM_END_ADDR */
#define VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT                (0U)
#define VAD_RAM_END_ADDR_RAM_END_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* RAM_CUR_ADDR */
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT                (0U)
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* DET_CON0 */
#define VAD_DET_CON0_GAIN_SHIFT                            (0U)
#define VAD_DET_CON0_GAIN_MASK                             (0xFFFU << VAD_DET_CON0_GAIN_SHIFT)                          /* 0x00000FFF */
#define VAD_DET_CON0_NOISE_LEVEL_SHIFT                     (12U)
#define VAD_DET_CON0_NOISE_LEVEL_MASK                      (0x7U << VAD_DET_CON0_NOISE_LEVEL_SHIFT)                     /* 0x00007000 */
#define VAD_DET_CON0_VAD_CON_THD_SHIFT                     (16U)
#define VAD_DET_CON0_VAD_CON_THD_MASK                      (0xFFU << VAD_DET_CON0_VAD_CON_THD_SHIFT)                    /* 0x00FF0000 */
#define VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT                 (24U)
#define VAD_DET_CON0_DIS_VAD_CON_THD_MASK                  (0xFU << VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT)                 /* 0x0F000000 */
#define VAD_DET_CON0_VAD_THD_MODE_SHIFT                    (28U)
#define VAD_DET_CON0_VAD_THD_MODE_MASK                     (0x3U << VAD_DET_CON0_VAD_THD_MODE_SHIFT)                    /* 0x30000000 */
/* DET_CON1 */
#define VAD_DET_CON1_SOUND_THD_SHIFT                       (0U)
#define VAD_DET_CON1_SOUND_THD_MASK                        (0xFFFFU << VAD_DET_CON1_SOUND_THD_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT                (16U)
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_MASK                 (0x3FFU << VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT)              /* 0x03FF0000 */
#define VAD_DET_CON1_CLEAN_IIR_EN_SHIFT                    (26U)
#define VAD_DET_CON1_CLEAN_IIR_EN_MASK                     (0x1U << VAD_DET_CON1_CLEAN_IIR_EN_SHIFT)                    /* 0x04000000 */
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT              (28U)
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_MASK               (0x1U << VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT)              /* 0x10000000 */
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT            (29U)
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_MASK             (0x1U << VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT)            /* 0x20000000 */
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT             (30U)
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_MASK              (0x1U << VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT)             /* 0x40000000 */
/* DET_CON2 */
#define VAD_DET_CON2_NOISE_FRM_NUM_SHIFT                   (0U)
#define VAD_DET_CON2_NOISE_FRM_NUM_MASK                    (0x7FU << VAD_DET_CON2_NOISE_FRM_NUM_SHIFT)                  /* 0x0000007F */
#define VAD_DET_CON2_NOISE_ALPHA_SHIFT                     (8U)
#define VAD_DET_CON2_NOISE_ALPHA_MASK                      (0xFFU << VAD_DET_CON2_NOISE_ALPHA_SHIFT)                    /* 0x0000FF00 */
#define VAD_DET_CON2_IIR_ANUM_0_SHIFT                      (16U)
#define VAD_DET_CON2_IIR_ANUM_0_MASK                       (0xFFFFU << VAD_DET_CON2_IIR_ANUM_0_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON3 */
#define VAD_DET_CON3_IIR_ANUM_1_SHIFT                      (0U)
#define VAD_DET_CON3_IIR_ANUM_1_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON3_IIR_ANUM_2_SHIFT                      (16U)
#define VAD_DET_CON3_IIR_ANUM_2_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON4 */
#define VAD_DET_CON4_IIR_ADEN_1_SHIFT                      (0U)
#define VAD_DET_CON4_IIR_ADEN_1_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON4_IIR_ADEN_2_SHIFT                      (16U)
#define VAD_DET_CON4_IIR_ADEN_2_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON5 */
#define VAD_DET_CON5_NOISE_ABS_SHIFT                       (0U)
#define VAD_DET_CON5_NOISE_ABS_MASK                        (0xFFFFU << VAD_DET_CON5_NOISE_ABS_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON5_IIR_RESULT_SHIFT                      (16U)
#define VAD_DET_CON5_IIR_RESULT_MASK                       (0xFFFFU << VAD_DET_CON5_IIR_RESULT_SHIFT)                   /* 0xFFFF0000 */
/* INT */
#define VAD_INT_VAD_DET_INT_EN_SHIFT                       (0U)
#define VAD_INT_VAD_DET_INT_EN_MASK                        (0x1U << VAD_INT_VAD_DET_INT_EN_SHIFT)                       /* 0x00000001 */
#define VAD_INT_ERROR_INT_EN_SHIFT                         (1U)
#define VAD_INT_ERROR_INT_EN_MASK                          (0x1U << VAD_INT_ERROR_INT_EN_SHIFT)                         /* 0x00000002 */
#define VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT                  (2U)
#define VAD_INT_IDLE_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000004 */
#define VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT                  (3U)
#define VAD_INT_WORK_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000008 */
#define VAD_INT_VAD_DET_INT_SHIFT                          (4U)
#define VAD_INT_VAD_DET_INT_MASK                           (0x1U << VAD_INT_VAD_DET_INT_SHIFT)                          /* 0x00000010 */
#define VAD_INT_ERROR_INT_SHIFT                            (5U)
#define VAD_INT_ERROR_INT_MASK                             (0x1U << VAD_INT_ERROR_INT_SHIFT)                            /* 0x00000020 */
#define VAD_INT_IDLE_TIMEOUT_INT_SHIFT                     (6U)
#define VAD_INT_IDLE_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_IDLE_TIMEOUT_INT_SHIFT)                     /* 0x00000040 */
#define VAD_INT_WORK_TIMEOUT_INT_SHIFT                     (7U)
#define VAD_INT_WORK_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_WORK_TIMEOUT_INT_SHIFT)                     /* 0x00000080 */
#define VAD_INT_RAMP_LOOP_FLAG_SHIFT                       (8U)
#define VAD_INT_RAMP_LOOP_FLAG_MASK                        (0x1U << VAD_INT_RAMP_LOOP_FLAG_SHIFT)                       /* 0x00000100 */
#define VAD_INT_VAD_IDLE_SHIFT                             (9U)
#define VAD_INT_VAD_IDLE_MASK                              (0x1U << VAD_INT_VAD_IDLE_SHIFT)                             /* 0x00000200 */
#define VAD_INT_VAD_DATA_TRANS_INT_EN_SHIFT                (10U)
#define VAD_INT_VAD_DATA_TRANS_INT_EN_MASK                 (0x1U << VAD_INT_VAD_DATA_TRANS_INT_EN_SHIFT)                /* 0x00000400 */
#define VAD_INT_VAD_DATA_TRANS_INT_SHIFT                   (11U)
#define VAD_INT_VAD_DATA_TRANS_INT_MASK                    (0x1U << VAD_INT_VAD_DATA_TRANS_INT_SHIFT)                   /* 0x00000800 */
/* AUX_CONTROL */
#define VAD_AUX_CONTROL_BUS_WRITE_EN_SHIFT                 (0U)
#define VAD_AUX_CONTROL_BUS_WRITE_EN_MASK                  (0x1U << VAD_AUX_CONTROL_BUS_WRITE_EN_SHIFT)                 /* 0x00000001 */
#define VAD_AUX_CONTROL_DIS_RAM_ITF_SHIFT                  (1U)
#define VAD_AUX_CONTROL_DIS_RAM_ITF_MASK                   (0x1U << VAD_AUX_CONTROL_DIS_RAM_ITF_SHIFT)                  /* 0x00000002 */
#define VAD_AUX_CONTROL_DATA_TRANS_TRIG_INT_EN_SHIFT       (2U)
#define VAD_AUX_CONTROL_DATA_TRANS_TRIG_INT_EN_MASK        (0x1U << VAD_AUX_CONTROL_DATA_TRANS_TRIG_INT_EN_SHIFT)       /* 0x00000004 */
#define VAD_AUX_CONTROL_DATA_TRANS_KBYTE_THD_SHIFT         (4U)
#define VAD_AUX_CONTROL_DATA_TRANS_KBYTE_THD_MASK          (0xFFU << VAD_AUX_CONTROL_DATA_TRANS_KBYTE_THD_SHIFT)        /* 0x00000FF0 */
#define VAD_AUX_CONTROL_INT_TRIG_VALID_THD_SHIFT           (16U)
#define VAD_AUX_CONTROL_INT_TRIG_VALID_THD_MASK            (0xFFFU << VAD_AUX_CONTROL_INT_TRIG_VALID_THD_SHIFT)         /* 0x0FFF0000 */
#define VAD_AUX_CONTROL_INT_TRIG_CTRL_EN_SHIFT             (28U)
#define VAD_AUX_CONTROL_INT_TRIG_CTRL_EN_MASK              (0x1U << VAD_AUX_CONTROL_INT_TRIG_CTRL_EN_SHIFT)             /* 0x10000000 */
#define VAD_AUX_CONTROL_SAMPLE_CNT_EN_SHIFT                (29U)
#define VAD_AUX_CONTROL_SAMPLE_CNT_EN_MASK                 (0x1U << VAD_AUX_CONTROL_SAMPLE_CNT_EN_SHIFT)                /* 0x20000000 */
/* SAMPLE_CNT */
#define VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT                    (0U)
#define VAD_SAMPLE_CNT_SAMPLE_CNT_MASK                     (0xFFFFFFFFU << VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT)             /* 0xFFFFFFFF */
/* NOISE_DATA */
#define VAD_NOISE_DATA_NOISE_DATA_SHIFT                    (0U)
#define VAD_NOISE_DATA_NOISE_DATA_MASK                     (0xFFFFU << VAD_NOISE_DATA_NOISE_DATA_SHIFT)                 /* 0x0000FFFF */
/******************************************VOP*******************************************/
/* REG_CFG_DONE */
#define VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT          (0U)
#define VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_MASK           (0x1U << VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT)          /* 0x00000001 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_SHIFT            (2U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_SHIFT)            /* 0x00000004 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_SHIFT            (3U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_SHIFT)            /* 0x00000008 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_SHIFT            (4U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_SHIFT)            /* 0x00000010 */
#define VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_SHIFT             (5U)
#define VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_MASK              (0x1U << VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_SHIFT)             /* 0x00000020 */
/* VERSION */
#define VOP_VERSION_BUILD_SHIFT                            (0U)
#define VOP_VERSION_BUILD_MASK                             (0xFFFFU << VOP_VERSION_BUILD_SHIFT)                         /* 0x0000FFFF */
#define VOP_VERSION_MINOR_SHIFT                            (16U)
#define VOP_VERSION_MINOR_MASK                             (0xFFU << VOP_VERSION_MINOR_SHIFT)                           /* 0x00FF0000 */
#define VOP_VERSION_MAJOR_SHIFT                            (24U)
#define VOP_VERSION_MAJOR_MASK                             (0xFFU << VOP_VERSION_MAJOR_SHIFT)                           /* 0xFF000000 */
/* DSP_BG */
#define VOP_DSP_BG_DSP_BG_BLUE_SHIFT                       (0U)
#define VOP_DSP_BG_DSP_BG_BLUE_MASK                        (0xFFU << VOP_DSP_BG_DSP_BG_BLUE_SHIFT)                      /* 0x000000FF */
#define VOP_DSP_BG_DSP_BG_GREEN_SHIFT                      (8U)
#define VOP_DSP_BG_DSP_BG_GREEN_MASK                       (0xFFU << VOP_DSP_BG_DSP_BG_GREEN_SHIFT)                     /* 0x0000FF00 */
#define VOP_DSP_BG_DSP_BG_RED_SHIFT                        (16U)
#define VOP_DSP_BG_DSP_BG_RED_MASK                         (0xFFU << VOP_DSP_BG_DSP_BG_RED_SHIFT)                       /* 0x00FF0000 */
/* SYS_CTRL0 */
#define VOP_SYS_CTRL0_RESERVED_SHIFT                       (0U)
#define VOP_SYS_CTRL0_RESERVED_MASK                        (0xFFFFFFFFU << VOP_SYS_CTRL0_RESERVED_SHIFT)                /* 0xFFFFFFFF */
/* SYS_CTRL1 */
#define VOP_SYS_CTRL1_SW_NOC_QOS_EN_SHIFT                  (0U)
#define VOP_SYS_CTRL1_SW_NOC_QOS_EN_MASK                   (0x1U << VOP_SYS_CTRL1_SW_NOC_QOS_EN_SHIFT)                  /* 0x00000001 */
#define VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_SHIFT               (1U)
#define VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_MASK                (0x3U << VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_SHIFT)               /* 0x00000006 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_EN_SHIFT                (4U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_EN_MASK                 (0x1U << VOP_SYS_CTRL1_SW_NOC_HURRY_EN_SHIFT)                /* 0x00000010 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_SHIFT             (5U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_MASK              (0x3U << VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_SHIFT)             /* 0x00000060 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_SHIFT         (8U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_MASK          (0xFU << VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_SHIFT)         /* 0x00000F00 */
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_SHIFT         (12U)
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_MASK          (0x1U << VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_SHIFT)         /* 0x00001000 */
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_SHIFT        (16U)
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_MASK         (0x1FU << VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_SHIFT)       /* 0x001F0000 */
/* SYS_CTRL2 */
#define VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_SHIFT             (0U)
#define VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_MASK              (0x1U << VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_SHIFT)             /* 0x00000001 */
#define VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_SHIFT             (1U)
#define VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_MASK              (0x1U << VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_SHIFT)             /* 0x00000002 */
#define VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_SHIFT               (2U)
#define VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_MASK                (0x1U << VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_SHIFT)               /* 0x00000004 */
#define VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_SHIFT               (3U)
#define VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_MASK                (0x1U << VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_SHIFT)               /* 0x00000008 */
#define VOP_SYS_CTRL2_IMD_YUV_CLIP_SHIFT                   (4U)
#define VOP_SYS_CTRL2_IMD_YUV_CLIP_MASK                    (0x1U << VOP_SYS_CTRL2_IMD_YUV_CLIP_SHIFT)                   /* 0x00000010 */
#define VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_SHIFT          (6U)
#define VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_MASK           (0x1U << VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_SHIFT)          /* 0x00000040 */
#define VOP_SYS_CTRL2_IMD_EDPI_TE_EN_SHIFT                 (9U)
#define VOP_SYS_CTRL2_IMD_EDPI_TE_EN_MASK                  (0x1U << VOP_SYS_CTRL2_IMD_EDPI_TE_EN_SHIFT)                 /* 0x00000200 */
#define VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_SHIFT             (10U)
#define VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_MASK              (0x1U << VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_SHIFT)             /* 0x00000400 */
#define VOP_SYS_CTRL2_IMD_EDPI_FRM_ST_SHIFT                (11U)
#define VOP_SYS_CTRL2_IMD_EDPI_FRM_ST_MASK                 (0x1U << VOP_SYS_CTRL2_IMD_EDPI_FRM_ST_SHIFT)                /* 0x00000800 */
#define VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_SHIFT             (12U)
#define VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_MASK              (0x1U << VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_SHIFT)             /* 0x00001000 */
#define VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_SHIFT          (13U)
#define VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_MASK           (0x1U << VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_SHIFT)          /* 0x00002000 */
#define VOP_SYS_CTRL2_FS_ADDR_MASK_EN_SHIFT                (14U)
#define VOP_SYS_CTRL2_FS_ADDR_MASK_EN_MASK                 (0x1U << VOP_SYS_CTRL2_FS_ADDR_MASK_EN_SHIFT)                /* 0x00004000 */
#define VOP_SYS_CTRL2_DCF_IDLE_EN_SHIFT                    (15U)
#define VOP_SYS_CTRL2_DCF_IDLE_EN_MASK                     (0x1U << VOP_SYS_CTRL2_DCF_IDLE_EN_SHIFT)                    /* 0x00008000 */
#define VOP_SYS_CTRL2_WMS_HOLD_EN_SHIFT                    (31U)
#define VOP_SYS_CTRL2_WMS_HOLD_EN_MASK                     (0x1U << VOP_SYS_CTRL2_WMS_HOLD_EN_SHIFT)                    /* 0x80000000 */
/* DSP_CTRL0 */
#define VOP_DSP_CTRL0_MIPI_DCLK_EN_SHIFT                   (24U)
#define VOP_DSP_CTRL0_MIPI_DCLK_EN_MASK                    (0x1U << VOP_DSP_CTRL0_MIPI_DCLK_EN_SHIFT)                   /* 0x01000000 */
#define VOP_DSP_CTRL0_MIPI_DCLK_POL_SHIFT                  (25U)
#define VOP_DSP_CTRL0_MIPI_DCLK_POL_MASK                   (0x1U << VOP_DSP_CTRL0_MIPI_DCLK_POL_SHIFT)                  /* 0x02000000 */
#define VOP_DSP_CTRL0_MIPI_HSYNC_POL_SHIFT                 (26U)
#define VOP_DSP_CTRL0_MIPI_HSYNC_POL_MASK                  (0x1U << VOP_DSP_CTRL0_MIPI_HSYNC_POL_SHIFT)                 /* 0x04000000 */
#define VOP_DSP_CTRL0_MIPI_VSYNC_POL_SHIFT                 (27U)
#define VOP_DSP_CTRL0_MIPI_VSYNC_POL_MASK                  (0x1U << VOP_DSP_CTRL0_MIPI_VSYNC_POL_SHIFT)                 /* 0x08000000 */
#define VOP_DSP_CTRL0_MIPI_DEN_POL_SHIFT                   (28U)
#define VOP_DSP_CTRL0_MIPI_DEN_POL_MASK                    (0x1U << VOP_DSP_CTRL0_MIPI_DEN_POL_SHIFT)                   /* 0x10000000 */
/* DSP_CTRL2 */
#define VOP_DSP_CTRL2_DITHER_UP_SHIFT                      (2U)
#define VOP_DSP_CTRL2_DITHER_UP_MASK                       (0x1U << VOP_DSP_CTRL2_DITHER_UP_SHIFT)                      /* 0x00000004 */
#define VOP_DSP_CTRL2_SW_OVERLAY_MODE_SHIFT                (4U)
#define VOP_DSP_CTRL2_SW_OVERLAY_MODE_MASK                 (0x1U << VOP_DSP_CTRL2_SW_OVERLAY_MODE_SHIFT)                /* 0x00000010 */
#define VOP_DSP_CTRL2_DSP_LUT_EN_SHIFT                     (5U)
#define VOP_DSP_CTRL2_DSP_LUT_EN_MASK                      (0x1U << VOP_DSP_CTRL2_DSP_LUT_EN_SHIFT)                     /* 0x00000020 */
#define VOP_DSP_CTRL2_DITHER_DOWN_MODE_SHIFT               (6U)
#define VOP_DSP_CTRL2_DITHER_DOWN_MODE_MASK                (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_MODE_SHIFT)               /* 0x00000040 */
#define VOP_DSP_CTRL2_DITHER_DOWN_SEL_SHIFT                (7U)
#define VOP_DSP_CTRL2_DITHER_DOWN_SEL_MASK                 (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_SEL_SHIFT)                /* 0x00000080 */
#define VOP_DSP_CTRL2_DITHER_DOWN_SHIFT                    (8U)
#define VOP_DSP_CTRL2_DITHER_DOWN_MASK                     (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_SHIFT)                    /* 0x00000100 */
#define VOP_DSP_CTRL2_DSP_BG_SWAP_SHIFT                    (9U)
#define VOP_DSP_CTRL2_DSP_BG_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_BG_SWAP_SHIFT)                    /* 0x00000200 */
#define VOP_DSP_CTRL2_DSP_RB_SWAP_SHIFT                    (11U)
#define VOP_DSP_CTRL2_DSP_RB_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_RB_SWAP_SHIFT)                    /* 0x00000800 */
#define VOP_DSP_CTRL2_DSP_RG_SWAP_SHIFT                    (12U)
#define VOP_DSP_CTRL2_DSP_RG_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_RG_SWAP_SHIFT)                    /* 0x00001000 */
#define VOP_DSP_CTRL2_DSP_BLANK_EN_SHIFT                   (14U)
#define VOP_DSP_CTRL2_DSP_BLANK_EN_MASK                    (0x1U << VOP_DSP_CTRL2_DSP_BLANK_EN_SHIFT)                   /* 0x00004000 */
#define VOP_DSP_CTRL2_DSP_BLACK_EN_SHIFT                   (15U)
#define VOP_DSP_CTRL2_DSP_BLACK_EN_MASK                    (0x1U << VOP_DSP_CTRL2_DSP_BLACK_EN_SHIFT)                   /* 0x00008000 */
#define VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT                   (16U)
#define VOP_DSP_CTRL2_DSP_OUT_MODE_MASK                    (0xFU << VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT)                   /* 0x000F0000 */
#define VOP_DSP_CTRL2_DSP_LAYER1_SEL_SHIFT                 (22U)
#define VOP_DSP_CTRL2_DSP_LAYER1_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER1_SEL_SHIFT)                 /* 0x00C00000 */
#define VOP_DSP_CTRL2_DSP_LAYER2_SEL_SHIFT                 (24U)
#define VOP_DSP_CTRL2_DSP_LAYER2_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER2_SEL_SHIFT)                 /* 0x03000000 */
#define VOP_DSP_CTRL2_DSP_LAYER3_SEL_SHIFT                 (26U)
#define VOP_DSP_CTRL2_DSP_LAYER3_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER3_SEL_SHIFT)                 /* 0x0C000000 */
/* VOP_STATUS */
#define VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_SHIFT    (0U)
#define VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_MASK     (0x1U << VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_SHIFT)    /* 0x00000001 */
#define VOP_VOP_STATUS_INT_RAW_DMA_FINISH_SHIFT            (2U)
#define VOP_VOP_STATUS_INT_RAW_DMA_FINISH_MASK             (0x1U << VOP_VOP_STATUS_INT_RAW_DMA_FINISH_SHIFT)            /* 0x00000004 */
#define VOP_VOP_STATUS_DMA_STOP_VALID_SHIFT                (4U)
#define VOP_VOP_STATUS_DMA_STOP_VALID_MASK                 (0x1U << VOP_VOP_STATUS_DMA_STOP_VALID_SHIFT)                /* 0x00000010 */
#define VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_SHIFT           (8U)
#define VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_MASK            (0x1U << VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_SHIFT)           /* 0x00000100 */
/* LINE_FLAG */
#define VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_SHIFT             (0U)
#define VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_MASK              (0xFFFU << VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_SHIFT)           /* 0x00000FFF */
#define VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_SHIFT             (16U)
#define VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_MASK              (0xFFFU << VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_SHIFT)           /* 0x0FFF0000 */
/* INTR_EN */
#define VOP_INTR_EN_FS0_INTR_EN_SHIFT                      (0U)
#define VOP_INTR_EN_FS0_INTR_EN_MASK                       (0x1U << VOP_INTR_EN_FS0_INTR_EN_SHIFT)                      /* 0x00000001 */
#define VOP_INTR_EN_FS1_INTR_EN_SHIFT                      (1U)
#define VOP_INTR_EN_FS1_INTR_EN_MASK                       (0x1U << VOP_INTR_EN_FS1_INTR_EN_SHIFT)                      /* 0x00000002 */
#define VOP_INTR_EN_ADDR_SAME_INTR_EN_SHIFT                (2U)
#define VOP_INTR_EN_ADDR_SAME_INTR_EN_MASK                 (0x1U << VOP_INTR_EN_ADDR_SAME_INTR_EN_SHIFT)                /* 0x00000004 */
#define VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT               (3U)
#define VOP_INTR_EN_LINE_FLAG0_INTR_EN_MASK                (0x1U << VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT)               /* 0x00000008 */
#define VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT               (4U)
#define VOP_INTR_EN_LINE_FLAG1_INTR_EN_MASK                (0x1U << VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT)               /* 0x00000010 */
#define VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT                (5U)
#define VOP_INTR_EN_BUS_ERROR_INTR_EN_MASK                 (0x1U << VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT)                /* 0x00000020 */
#define VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT               (7U)
#define VOP_INTR_EN_WIN1_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT)               /* 0x00000080 */
#define VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT               (8U)
#define VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT)               /* 0x00000100 */
#define VOP_INTR_EN_WIN3_EMPTY_INTR_EN_SHIFT               (9U)
#define VOP_INTR_EN_WIN3_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN3_EMPTY_INTR_EN_SHIFT)               /* 0x00000200 */
#define VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_SHIFT           (10U)
#define VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_MASK            (0x1U << VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_SHIFT)           /* 0x00000400 */
#define VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_SHIFT              (11U)
#define VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_MASK               (0x1U << VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_SHIFT)              /* 0x00000800 */
#define VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT               (12U)
#define VOP_INTR_EN_POST_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT)               /* 0x00001000 */
/* INTR_CLEAR */
#define VOP_INTR_CLEAR_FS0_INTR_CLR_SHIFT                  (0U)
#define VOP_INTR_CLEAR_FS0_INTR_CLR_MASK                   (0x1U << VOP_INTR_CLEAR_FS0_INTR_CLR_SHIFT)                  /* 0x00000001 */
#define VOP_INTR_CLEAR_FS1_INTR_CLR_SHIFT                  (1U)
#define VOP_INTR_CLEAR_FS1_INTR_CLR_MASK                   (0x1U << VOP_INTR_CLEAR_FS1_INTR_CLR_SHIFT)                  /* 0x00000002 */
#define VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_SHIFT            (2U)
#define VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_MASK             (0x1U << VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_SHIFT)            /* 0x00000004 */
#define VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_SHIFT           (3U)
#define VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_SHIFT)           /* 0x00000008 */
#define VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_SHIFT           (4U)
#define VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_SHIFT)           /* 0x00000010 */
#define VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_SHIFT            (5U)
#define VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_MASK             (0x1U << VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_SHIFT)            /* 0x00000020 */
#define VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_SHIFT           (7U)
#define VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_SHIFT)           /* 0x00000080 */
#define VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_SHIFT           (8U)
#define VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_SHIFT)           /* 0x00000100 */
#define VOP_INTR_CLEAR_WIN3_EMPTY_INTR_CLR_SHIFT           (9U)
#define VOP_INTR_CLEAR_WIN3_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN3_EMPTY_INTR_CLR_SHIFT)           /* 0x00000200 */
#define VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_SHIFT       (10U)
#define VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_MASK        (0x1U << VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_SHIFT)       /* 0x00000400 */
#define VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_SHIFT          (11U)
#define VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_MASK           (0x1U << VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_SHIFT)          /* 0x00000800 */
#define VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_SHIFT           (12U)
#define VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_SHIFT)           /* 0x00001000 */
/* INTR_STATUS */
#define VOP_INTR_STATUS_FS0_INTR_STS_SHIFT                 (0U)
#define VOP_INTR_STATUS_FS0_INTR_STS_MASK                  (0x1U << VOP_INTR_STATUS_FS0_INTR_STS_SHIFT)                 /* 0x00000001 */
#define VOP_INTR_STATUS_FS1_INTR_STS_SHIFT                 (1U)
#define VOP_INTR_STATUS_FS1_INTR_STS_MASK                  (0x1U << VOP_INTR_STATUS_FS1_INTR_STS_SHIFT)                 /* 0x00000002 */
#define VOP_INTR_STATUS_ADDR_SAME_INTR_STS_SHIFT           (2U)
#define VOP_INTR_STATUS_ADDR_SAME_INTR_STS_MASK            (0x1U << VOP_INTR_STATUS_ADDR_SAME_INTR_STS_SHIFT)           /* 0x00000004 */
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_SHIFT          (3U)
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_SHIFT)          /* 0x00000008 */
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_SHIFT          (4U)
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_SHIFT)          /* 0x00000010 */
#define VOP_INTR_STATUS_BUS_ERROR_INTR_STS_SHIFT           (5U)
#define VOP_INTR_STATUS_BUS_ERROR_INTR_STS_MASK            (0x1U << VOP_INTR_STATUS_BUS_ERROR_INTR_STS_SHIFT)           /* 0x00000020 */
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_SHIFT          (7U)
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_SHIFT)          /* 0x00000080 */
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_SHIFT          (8U)
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_SHIFT)          /* 0x00000100 */
#define VOP_INTR_STATUS_WIN3_EMPTY_INTR_STS_SHIFT          (9U)
#define VOP_INTR_STATUS_WIN3_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN3_EMPTY_INTR_STS_SHIFT)          /* 0x00000200 */
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_SHIFT      (10U)
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_MASK       (0x1U << VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_SHIFT)      /* 0x00000400 */
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_SHIFT         (11U)
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_MASK          (0x1U << VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_SHIFT)         /* 0x00000800 */
#define VOP_INTR_STATUS_POST_EMPTY_INTR_STS_SHIFT          (12U)
#define VOP_INTR_STATUS_POST_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_POST_EMPTY_INTR_STS_SHIFT)          /* 0x00001000 */
#define VOP_INTR_STATUS_FS0_INTR_RAW_STS_SHIFT             (16U)
#define VOP_INTR_STATUS_FS0_INTR_RAW_STS_MASK              (0x1U << VOP_INTR_STATUS_FS0_INTR_RAW_STS_SHIFT)             /* 0x00010000 */
#define VOP_INTR_STATUS_FS1_INTR_RAW_STS_SHIFT             (17U)
#define VOP_INTR_STATUS_FS1_INTR_RAW_STS_MASK              (0x1U << VOP_INTR_STATUS_FS1_INTR_RAW_STS_SHIFT)             /* 0x00020000 */
#define VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_SHIFT       (18U)
#define VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_MASK        (0x1U << VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_SHIFT)       /* 0x00040000 */
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_SHIFT      (19U)
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_SHIFT)      /* 0x00080000 */
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_SHIFT      (20U)
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_SHIFT)      /* 0x00100000 */
#define VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_SHIFT       (21U)
#define VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_MASK        (0x1U << VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_SHIFT)       /* 0x00200000 */
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_SHIFT      (23U)
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x00800000 */
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_SHIFT      (24U)
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x01000000 */
#define VOP_INTR_STATUS_WIN3_EMPTY_INTR_RAW_STS_SHIFT      (25U)
#define VOP_INTR_STATUS_WIN3_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN3_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x02000000 */
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_SHIFT  (26U)
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_MASK   (0x1U << VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_SHIFT)  /* 0x04000000 */
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_SHIFT     (27U)
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_MASK      (0x1U << VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_SHIFT)     /* 0x08000000 */
#define VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_SHIFT          (28U)
#define VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_MASK           (0x1U << VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_SHIFT)          /* 0x10000000 */
/* WIN1_CTRL0 */
#define VOP_WIN1_CTRL0_WIN1_EN_SHIFT                       (0U)
#define VOP_WIN1_CTRL0_WIN1_EN_MASK                        (0x1U << VOP_WIN1_CTRL0_WIN1_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN1_CTRL0_WIN1_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN1_CTRL0_WIN1_DATA_FMT_MASK                  (0xFU << VOP_WIN1_CTRL0_WIN1_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_SHIFT              (8U)
#define VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_SHIFT)              /* 0x00000100 */
#define VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN1_CTRL0_WIN1_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN1_CTRL0_WIN1_RB_SWAP_MASK                   (0x1U << VOP_WIN1_CTRL0_WIN1_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_MASK                (0x1U << VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN1_CTRL0_WIN1_UV_SWAP_SHIFT                  (14U)
#define VOP_WIN1_CTRL0_WIN1_UV_SWAP_MASK                   (0x1U << VOP_WIN1_CTRL0_WIN1_UV_SWAP_SHIFT)                  /* 0x00004000 */
#define VOP_WIN1_CTRL0_WIN1_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN1_CTRL0_WIN1_R2Y_EN_MASK                    (0x1U << VOP_WIN1_CTRL0_WIN1_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN1_CTRL0_WIN1_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN1_CTRL0_WIN1_Y2R_EN_MASK                    (0x1U << VOP_WIN1_CTRL0_WIN1_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN1_CTRL0_WIN1_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN1_CTRL0_WIN1_CSC_MODE_MASK                  (0x3U << VOP_WIN1_CTRL0_WIN1_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN1_CTRL1 */
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_SHIFT              (8U)
#define VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_MASK               (0xFU << VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_SHIFT              (12U)
#define VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_MASK               (0xFU << VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN1_VIR */
#define VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN1_YRGB_MST */
#define VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_SHIFT              (0U)
#define VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN1_DSP_INFO */
#define VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_SHIFT             (0U)
#define VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_MASK              (0x1FFFU << VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_SHIFT            (16U)
#define VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_MASK             (0x1FFFU << VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN1_DSP_ST */
#define VOP_WIN1_DSP_ST_DSP_WIN1_XST_SHIFT                 (0U)
#define VOP_WIN1_DSP_ST_DSP_WIN1_XST_MASK                  (0x1FFFU << VOP_WIN1_DSP_ST_DSP_WIN1_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN1_DSP_ST_DSP_WIN1_YST_SHIFT                 (16U)
#define VOP_WIN1_DSP_ST_DSP_WIN1_YST_MASK                  (0x1FFFU << VOP_WIN1_DSP_ST_DSP_WIN1_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN1_COLOR_KEY */
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_SHIFT               (24U)
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_MASK                (0x1U << VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN1_ALPHA_CTRL */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_MASK             (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_MASK           (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN1_CBCR_MST */
#define VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_SHIFT              (0U)
#define VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN1_YRGB_MST_RAW */
#define VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN1_CBCR_MST_RAW */
#define VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN1_LOOP_OFFSET */
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_MASK            (0x1U << VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_MASK            (0x1U << VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* WIN2_CTRL0 */
#define VOP_WIN2_CTRL0_WIN2_EN_SHIFT                       (0U)
#define VOP_WIN2_CTRL0_WIN2_EN_MASK                        (0x1U << VOP_WIN2_CTRL0_WIN2_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN2_CTRL0_WIN2_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN2_CTRL0_WIN2_DATA_FMT_MASK                  (0xFU << VOP_WIN2_CTRL0_WIN2_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_SHIFT              (8U)
#define VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_SHIFT)              /* 0x00000100 */
#define VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN2_CTRL0_WIN2_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN2_CTRL0_WIN2_RB_SWAP_MASK                   (0x1U << VOP_WIN2_CTRL0_WIN2_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_MASK                (0x1U << VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN2_CTRL0_WIN2_UV_SWAP_SHIFT                  (14U)
#define VOP_WIN2_CTRL0_WIN2_UV_SWAP_MASK                   (0x1U << VOP_WIN2_CTRL0_WIN2_UV_SWAP_SHIFT)                  /* 0x00004000 */
#define VOP_WIN2_CTRL0_WIN2_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN2_CTRL0_WIN2_R2Y_EN_MASK                    (0x1U << VOP_WIN2_CTRL0_WIN2_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN2_CTRL0_WIN2_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN2_CTRL0_WIN2_Y2R_EN_MASK                    (0x1U << VOP_WIN2_CTRL0_WIN2_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN2_CTRL0_WIN2_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN2_CTRL0_WIN2_CSC_MODE_MASK                  (0x3U << VOP_WIN2_CTRL0_WIN2_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN2_CTRL1 */
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_SHIFT              (8U)
#define VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_MASK               (0xFU << VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_SHIFT              (12U)
#define VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_MASK               (0xFU << VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN2_VIR */
#define VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN2_YRGB_MST */
#define VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_SHIFT              (0U)
#define VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN2_DSP_INFO */
#define VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_SHIFT             (0U)
#define VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_MASK              (0x1FFFU << VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_SHIFT            (16U)
#define VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_MASK             (0x1FFFU << VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN2_DSP_ST */
#define VOP_WIN2_DSP_ST_DSP_WIN2_XST_SHIFT                 (0U)
#define VOP_WIN2_DSP_ST_DSP_WIN2_XST_MASK                  (0x1FFFU << VOP_WIN2_DSP_ST_DSP_WIN2_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN2_DSP_ST_DSP_WIN2_YST_SHIFT                 (16U)
#define VOP_WIN2_DSP_ST_DSP_WIN2_YST_MASK                  (0x1FFFU << VOP_WIN2_DSP_ST_DSP_WIN2_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN2_COLOR_KEY */
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_SHIFT               (24U)
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_MASK                (0x1U << VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN2_ALPHA_CTRL */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_MASK             (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_MASK           (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN2_CBCR_MST */
#define VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_SHIFT              (0U)
#define VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN2_YRGB_MST_RAW */
#define VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN2_CBCR_MST_RAW */
#define VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN2_LOOP_OFFSET */
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_MASK            (0x1U << VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_MASK            (0x1U << VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* WIN3_CTRL0 */
#define VOP_WIN3_CTRL0_WIN3_EN_SHIFT                       (0U)
#define VOP_WIN3_CTRL0_WIN3_EN_MASK                        (0x1U << VOP_WIN3_CTRL0_WIN3_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN3_CTRL0_WIN3_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN3_CTRL0_WIN3_DATA_FMT_MASK                  (0xFU << VOP_WIN3_CTRL0_WIN3_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN3_CTRL0_WIN3_YUV_4BIT_EN_SHIFT              (8U)
#define VOP_WIN3_CTRL0_WIN3_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN3_CTRL0_WIN3_YUV_4BIT_EN_SHIFT)              /* 0x00000100 */
#define VOP_WIN3_CTRL0_WIN3_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN3_CTRL0_WIN3_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN3_CTRL0_WIN3_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN3_CTRL0_WIN3_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN3_CTRL0_WIN3_RB_SWAP_MASK                   (0x1U << VOP_WIN3_CTRL0_WIN3_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN3_CTRL0_WIN3_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN3_CTRL0_WIN3_ALPHA_SWAP_MASK                (0x1U << VOP_WIN3_CTRL0_WIN3_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN3_CTRL0_WIN3_UV_SWAP_SHIFT                  (14U)
#define VOP_WIN3_CTRL0_WIN3_UV_SWAP_MASK                   (0x1U << VOP_WIN3_CTRL0_WIN3_UV_SWAP_SHIFT)                  /* 0x00004000 */
#define VOP_WIN3_CTRL0_WIN3_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN3_CTRL0_WIN3_R2Y_EN_MASK                    (0x1U << VOP_WIN3_CTRL0_WIN3_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN3_CTRL0_WIN3_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN3_CTRL0_WIN3_Y2R_EN_MASK                    (0x1U << VOP_WIN3_CTRL0_WIN3_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN3_CTRL0_WIN3_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN3_CTRL0_WIN3_CSC_MODE_MASK                  (0x3U << VOP_WIN3_CTRL0_WIN3_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN3_CTRL1 */
#define VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN3_CTRL1_WIN3_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN3_CTRL1_WIN3_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN3_CTRL1_WIN3_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN3_CTRL1_WIN3_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN3_CTRL1_WIN3_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN3_CTRL1_SW_WIN3_YRGB_RID_SHIFT              (8U)
#define VOP_WIN3_CTRL1_SW_WIN3_YRGB_RID_MASK               (0xFU << VOP_WIN3_CTRL1_SW_WIN3_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN3_CTRL1_SW_WIN3_CBCR_RID_SHIFT              (12U)
#define VOP_WIN3_CTRL1_SW_WIN3_CBCR_RID_MASK               (0xFU << VOP_WIN3_CTRL1_SW_WIN3_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN3_VIR */
#define VOP_WIN3_VIR_WIN3_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN3_VIR_WIN3_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN3_VIR_WIN3_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN3_VIR_WIN3_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN3_VIR_WIN3_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN3_VIR_WIN3_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN3_YRGB_MST */
#define VOP_WIN3_YRGB_MST_WIN3_YRGB_MST_SHIFT              (0U)
#define VOP_WIN3_YRGB_MST_WIN3_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN3_YRGB_MST_WIN3_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN3_DSP_INFO */
#define VOP_WIN3_DSP_INFO_DSP_WIN3_WIDTH_SHIFT             (0U)
#define VOP_WIN3_DSP_INFO_DSP_WIN3_WIDTH_MASK              (0x1FFFU << VOP_WIN3_DSP_INFO_DSP_WIN3_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN3_DSP_INFO_DSP_WIN3_HEIGHT_SHIFT            (16U)
#define VOP_WIN3_DSP_INFO_DSP_WIN3_HEIGHT_MASK             (0x1FFFU << VOP_WIN3_DSP_INFO_DSP_WIN3_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN3_DSP_ST */
#define VOP_WIN3_DSP_ST_DSP_WIN3_XST_SHIFT                 (0U)
#define VOP_WIN3_DSP_ST_DSP_WIN3_XST_MASK                  (0x1FFFU << VOP_WIN3_DSP_ST_DSP_WIN3_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN3_DSP_ST_DSP_WIN3_YST_SHIFT                 (16U)
#define VOP_WIN3_DSP_ST_DSP_WIN3_YST_MASK                  (0x1FFFU << VOP_WIN3_DSP_ST_DSP_WIN3_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN3_COLOR_KEY */
#define VOP_WIN3_COLOR_KEY_WIN3_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN3_COLOR_KEY_WIN3_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN3_COLOR_KEY_WIN3_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN3_COLOR_KEY_WIN3_KEY_EN_SHIFT               (24U)
#define VOP_WIN3_COLOR_KEY_WIN3_KEY_EN_MASK                (0x1U << VOP_WIN3_COLOR_KEY_WIN3_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN3_ALPHA_CTRL */
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_EN_MASK             (0x1U << VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_MODE_MASK           (0x1U << VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN3_ALPHA_CTRL_WIN3_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN3_CBCR_MST */
#define VOP_WIN3_CBCR_MST_WIN3_CBCR_MST_SHIFT              (0U)
#define VOP_WIN3_CBCR_MST_WIN3_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN3_CBCR_MST_WIN3_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN3_YRGB_MST_RAW */
#define VOP_WIN3_YRGB_MST_RAW_WIN3_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN3_YRGB_MST_RAW_WIN3_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN3_YRGB_MST_RAW_WIN3_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN3_CBCR_MST_RAW */
#define VOP_WIN3_CBCR_MST_RAW_WIN3_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN3_CBCR_MST_RAW_WIN3_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN3_CBCR_MST_RAW_WIN3_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN3_LOOP_OFFSET */
#define VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_EN_MASK            (0x1U << VOP_WIN3_LOOP_OFFSET_WIN3_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_EN_MASK            (0x1U << VOP_WIN3_LOOP_OFFSET_WIN3_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* DSP_HTOTAL_HS_END */
#define VOP_DSP_HTOTAL_HS_END_DSP_HS_END_SHIFT             (0U)
#define VOP_DSP_HTOTAL_HS_END_DSP_HS_END_MASK              (0xFFFU << VOP_DSP_HTOTAL_HS_END_DSP_HS_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_SHIFT             (16U)
#define VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_MASK              (0xFFFU << VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_SHIFT)           /* 0x0FFF0000 */
/* DSP_HACT_ST_END */
#define VOP_DSP_HACT_ST_END_DSP_HACT_END_SHIFT             (0U)
#define VOP_DSP_HACT_ST_END_DSP_HACT_END_MASK              (0xFFFU << VOP_DSP_HACT_ST_END_DSP_HACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_HACT_ST_END_DSP_HACT_ST_SHIFT              (16U)
#define VOP_DSP_HACT_ST_END_DSP_HACT_ST_MASK               (0xFFFU << VOP_DSP_HACT_ST_END_DSP_HACT_ST_SHIFT)            /* 0x0FFF0000 */
/* DSP_VTOTAL_VS_END */
#define VOP_DSP_VTOTAL_VS_END_DSP_VS_END_SHIFT             (0U)
#define VOP_DSP_VTOTAL_VS_END_DSP_VS_END_MASK              (0xFFFU << VOP_DSP_VTOTAL_VS_END_DSP_VS_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_SHIFT             (16U)
#define VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_MASK              (0xFFFU << VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_SHIFT)           /* 0x0FFF0000 */
/* DSP_VACT_ST_END */
#define VOP_DSP_VACT_ST_END_DSP_VACT_END_SHIFT             (0U)
#define VOP_DSP_VACT_ST_END_DSP_VACT_END_MASK              (0xFFFU << VOP_DSP_VACT_ST_END_DSP_VACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_VACT_ST_END_DSP_VACT_ST_SHIFT              (16U)
#define VOP_DSP_VACT_ST_END_DSP_VACT_ST_MASK               (0xFFFU << VOP_DSP_VACT_ST_END_DSP_VACT_ST_SHIFT)            /* 0x0FFF0000 */
/* BCSH_CTRL */
#define VOP_BCSH_CTRL_BCSH_EN_SHIFT                        (0U)
#define VOP_BCSH_CTRL_BCSH_EN_MASK                         (0x1U << VOP_BCSH_CTRL_BCSH_EN_SHIFT)                        /* 0x00000001 */
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_SHIFT           (1U)
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_MASK            (0x1U << VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_SHIFT)           /* 0x00000002 */
#define VOP_BCSH_CTRL_VIDEO_MODE_SHIFT                     (2U)
#define VOP_BCSH_CTRL_VIDEO_MODE_MASK                      (0x3U << VOP_BCSH_CTRL_VIDEO_MODE_SHIFT)                     /* 0x0000000C */
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_SHIFT           (4U)
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_MASK            (0x3U << VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_SHIFT)           /* 0x00000030 */
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_EN_SHIFT                 (6U)
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_EN_MASK                  (0x1U << VOP_BCSH_CTRL_SW_BCSH_Y2R_EN_SHIFT)                 /* 0x00000040 */
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT                 (7U)
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_MASK                  (0x1U << VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT)                 /* 0x00000080 */
/* BCSH_COL_BAR */
#define VOP_BCSH_COL_BAR_COLOR_BAR_Y_SHIFT                 (0U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_Y_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_Y_SHIFT)                /* 0x000000FF */
#define VOP_BCSH_COL_BAR_COLOR_BAR_U_SHIFT                 (8U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_U_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_U_SHIFT)                /* 0x0000FF00 */
#define VOP_BCSH_COL_BAR_COLOR_BAR_V_SHIFT                 (16U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_V_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_V_SHIFT)                /* 0x00FF0000 */
/* BCSH_BCS */
#define VOP_BCSH_BCS_BRIGHTNESS_SHIFT                      (0U)
#define VOP_BCSH_BCS_BRIGHTNESS_MASK                       (0x7FU << VOP_BCSH_BCS_BRIGHTNESS_SHIFT)                     /* 0x0000007F */
#define VOP_BCSH_BCS_CONTRAST_SHIFT                        (8U)
#define VOP_BCSH_BCS_CONTRAST_MASK                         (0x1FFU << VOP_BCSH_BCS_CONTRAST_SHIFT)                      /* 0x0001FF00 */
#define VOP_BCSH_BCS_SAT_CON_SHIFT                         (20U)
#define VOP_BCSH_BCS_SAT_CON_MASK                          (0x3FFU << VOP_BCSH_BCS_SAT_CON_SHIFT)                       /* 0x3FF00000 */
/* BCSH_H */
#define VOP_BCSH_H_SIN_HUE_SHIFT                           (0U)
#define VOP_BCSH_H_SIN_HUE_MASK                            (0x1FFU << VOP_BCSH_H_SIN_HUE_SHIFT)                         /* 0x000001FF */
#define VOP_BCSH_H_COS_HUE_SHIFT                           (16U)
#define VOP_BCSH_H_COS_HUE_MASK                            (0x1FFU << VOP_BCSH_H_COS_HUE_SHIFT)                         /* 0x01FF0000 */
/* GAMMA_COE_WORD0 */
#define VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD1 */
#define VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD2 */
#define VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD3 */
#define VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_SHIFT)   /* 0xFFFFFFFF */
/* POST_CTRL */
#define VOP_POST_CTRL_Y_GAMMA_EN_SHIFT                     (0U)
#define VOP_POST_CTRL_Y_GAMMA_EN_MASK                      (0x1U << VOP_POST_CTRL_Y_GAMMA_EN_SHIFT)                     /* 0x00000001 */
#define VOP_POST_CTRL_POST_SCL_EN_SHIFT                    (4U)
#define VOP_POST_CTRL_POST_SCL_EN_MASK                     (0x1U << VOP_POST_CTRL_POST_SCL_EN_SHIFT)                    /* 0x00000010 */
#define VOP_POST_CTRL_POST_SCL_HMODE_SHIFT                 (8U)
#define VOP_POST_CTRL_POST_SCL_HMODE_MASK                  (0x3U << VOP_POST_CTRL_POST_SCL_HMODE_SHIFT)                 /* 0x00000300 */
#define VOP_POST_CTRL_POST_SCL_VMODE_SHIFT                 (10U)
#define VOP_POST_CTRL_POST_SCL_VMODE_MASK                  (0x3U << VOP_POST_CTRL_POST_SCL_VMODE_SHIFT)                 /* 0x00000C00 */
#define VOP_POST_CTRL_POST_CSC_EN_SHIFT                    (12U)
#define VOP_POST_CTRL_POST_CSC_EN_MASK                     (0x1U << VOP_POST_CTRL_POST_CSC_EN_SHIFT)                    /* 0x00001000 */
#define VOP_POST_CTRL_POST_CSC_MODE_SHIFT                  (14U)
#define VOP_POST_CTRL_POST_CSC_MODE_MASK                   (0x3U << VOP_POST_CTRL_POST_CSC_MODE_SHIFT)                  /* 0x0000C000 */
#define VOP_POST_CTRL_COLOR_MATRIX_EN_SHIFT                (16U)
#define VOP_POST_CTRL_COLOR_MATRIX_EN_MASK                 (0x1U << VOP_POST_CTRL_COLOR_MATRIX_EN_SHIFT)                /* 0x00010000 */
#define VOP_POST_CTRL_CLIP_EN_SHIFT                        (20U)
#define VOP_POST_CTRL_CLIP_EN_MASK                         (0x1U << VOP_POST_CTRL_CLIP_EN_SHIFT)                        /* 0x00100000 */
#define VOP_POST_CTRL_Y_THRES_SHIFT                        (24U)
#define VOP_POST_CTRL_Y_THRES_MASK                         (0xFFU << VOP_POST_CTRL_Y_THRES_SHIFT)                       /* 0xFF000000 */
/* COLOR_MATRIX_COE0 */
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE0_SHIFT      (0U)
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE0_MASK       (0xFFFFFFFFU << VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE0_SHIFT) /* 0xFFFFFFFF */
/* COLOR_MATRIX_COE1 */
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE1_SHIFT      (0U)
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE1_MASK       (0xFFFFFFFFU << VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE1_SHIFT) /* 0xFFFFFFFF */
/* COLOR_MATRIX_COE2 */
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE2_SHIFT      (0U)
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE2_MASK       (0xFFFFFFFFU << VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE2_SHIFT) /* 0xFFFFFFFF */
/* DBG_REG_SCAN_LINE */
#define VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_SHIFT          (0U)
#define VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_MASK           (0xFFFU << VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_SHIFT)        /* 0x00000FFF */
/* BLANKING_VALUE */
#define VOP_BLANKING_VALUE_SW_BLANKING_VALUE_SHIFT         (0U)
#define VOP_BLANKING_VALUE_SW_BLANKING_VALUE_MASK          (0xFFFFFFU << VOP_BLANKING_VALUE_SW_BLANKING_VALUE_SHIFT)    /* 0x00FFFFFF */
#define VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_SHIFT  (24U)
#define VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_MASK   (0x1U << VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_SHIFT)  /* 0x01000000 */
/* FLAG_REG_FRM_VALID */
#define VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_SHIFT    (0U)
#define VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_MASK     (0xFFFFFFFFU << VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_SHIFT) /* 0xFFFFFFFF */
/* FLAG_REG */
#define VOP_FLAG_REG_FLAG_REG_SHIFT                        (0U)
#define VOP_FLAG_REG_FLAG_REG_MASK                         (0xFFFFFFFFU << VOP_FLAG_REG_FLAG_REG_SHIFT)                 /* 0xFFFFFFFF */
/******************************************PMU*******************************************/
/* WAKEUP_CFG0 */
#define PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG1 */
#define PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG2 */
#define PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG3 */
#define PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG6 */
#define PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_SHIFT        (0U)
#define PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_MASK         (0x1U << PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_SHIFT)        /* 0x00000001 */
#define PMU_WAKEUP_CFG6_GPIO_INT_EN_SHIFT                  (1U)
#define PMU_WAKEUP_CFG6_GPIO_INT_EN_MASK                   (0x1U << PMU_WAKEUP_CFG6_GPIO_INT_EN_SHIFT)                  /* 0x00000002 */
#define PMU_WAKEUP_CFG6_TIMEOUT_EN_SHIFT                   (2U)
#define PMU_WAKEUP_CFG6_TIMEOUT_EN_MASK                    (0x1U << PMU_WAKEUP_CFG6_TIMEOUT_EN_SHIFT)                   /* 0x00000004 */
#define PMU_WAKEUP_CFG6_TIMER_EN_SHIFT                     (3U)
#define PMU_WAKEUP_CFG6_TIMER_EN_MASK                      (0x1U << PMU_WAKEUP_CFG6_TIMER_EN_SHIFT)                     /* 0x00000008 */
#define PMU_WAKEUP_CFG6_VAD_EN_SHIFT                       (4U)
#define PMU_WAKEUP_CFG6_VAD_EN_MASK                        (0x1U << PMU_WAKEUP_CFG6_VAD_EN_SHIFT)                       /* 0x00000010 */
#define PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_SHIFT       (5U)
#define PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_MASK        (0x1U << PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_SHIFT)       /* 0x00000020 */
/* PWRDN_CON */
#define PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_SHIFT               (0U)
#define PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_MASK                (0x1U << PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_SHIFT)               /* 0x00000001 */
#define PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_SHIFT             (1U)
#define PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_MASK              (0x1U << PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_SHIFT)             /* 0x00000002 */
#define PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_SHIFT              (2U)
#define PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_MASK               (0x1U << PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_SHIFT)              /* 0x00000004 */
#define PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_SHIFT             (3U)
#define PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_MASK              (0x1U << PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_SHIFT)             /* 0x00000008 */
/* PWRDN_ST */
#define PMU_PWRDN_ST_PD_DSP_PWR_STAT_SHIFT                 (0U)
#define PMU_PWRDN_ST_PD_DSP_PWR_STAT_MASK                  (0x1U << PMU_PWRDN_ST_PD_DSP_PWR_STAT_SHIFT)                 /* 0x00000001 */
#define PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_SHIFT               (1U)
#define PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_MASK                (0x1U << PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_SHIFT)               /* 0x00000002 */
#define PMU_PWRDN_ST_PD_SHRM_PWR_STAT_SHIFT                (2U)
#define PMU_PWRDN_ST_PD_SHRM_PWR_STAT_MASK                 (0x1U << PMU_PWRDN_ST_PD_SHRM_PWR_STAT_SHIFT)                /* 0x00000004 */
#define PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_SHIFT               (3U)
#define PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_MASK                (0x1U << PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_SHIFT)               /* 0x00000008 */
#define PMU_PWRDN_ST_SHAREMEM_PWR_STAT_SHIFT               (4U)
#define PMU_PWRDN_ST_SHAREMEM_PWR_STAT_MASK                (0xFU << PMU_PWRDN_ST_SHAREMEM_PWR_STAT_SHIFT)               /* 0x000000F0 */
/* PLL_CON */
#define PMU_PLL_CON_PLL_PD_CFG_SHIFT                       (0U)
#define PMU_PLL_CON_PLL_PD_CFG_MASK                        (0x7U << PMU_PLL_CON_PLL_PD_CFG_SHIFT)                       /* 0x00000007 */
#define PMU_PLL_CON_SFT_PLL_PD_SHIFT                       (3U)
#define PMU_PLL_CON_SFT_PLL_PD_MASK                        (0x7U << PMU_PLL_CON_SFT_PLL_PD_SHIFT)                       /* 0x00000038 */
/* PWRMODE_CON */
#define PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT                (0U)
#define PMU_PWRMODE_CON_POWER_MODE_EN_MASK                 (0x1U << PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT)                /* 0x00000001 */
#define PMU_PWRMODE_CON_PMU_USE_LF_SHIFT                   (2U)
#define PMU_PWRMODE_CON_PMU_USE_LF_MASK                    (0x1U << PMU_PWRMODE_CON_PMU_USE_LF_SHIFT)                   /* 0x00000004 */
#define PMU_PWRMODE_CON_PLL_PD_EN_SHIFT                    (3U)
#define PMU_PWRMODE_CON_PLL_PD_EN_MASK                     (0x1U << PMU_PWRMODE_CON_PLL_PD_EN_SHIFT)                    /* 0x00000008 */
#define PMU_PWRMODE_CON_LOGIC_PD_EN_SHIFT                  (4U)
#define PMU_PWRMODE_CON_LOGIC_PD_EN_MASK                   (0x1U << PMU_PWRMODE_CON_LOGIC_PD_EN_SHIFT)                  /* 0x00000010 */
#define PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_SHIFT           (5U)
#define PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_MASK            (0x1U << PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_SHIFT)           /* 0x00000020 */
#define PMU_PWRMODE_CON_BYPASS_PLL_LOCK_SHIFT              (6U)
#define PMU_PWRMODE_CON_BYPASS_PLL_LOCK_MASK               (0x1U << PMU_PWRMODE_CON_BYPASS_PLL_LOCK_SHIFT)              /* 0x00000040 */
#define PMU_PWRMODE_CON_BYPASS_HF_EN_SHIFT                 (7U)
#define PMU_PWRMODE_CON_BYPASS_HF_EN_MASK                  (0x1U << PMU_PWRMODE_CON_BYPASS_HF_EN_SHIFT)                 /* 0x00000080 */
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_SHIFT       (8U)
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_MASK        (0x1U << PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_SHIFT)       /* 0x00000100 */
/* SFT_CON */
#define PMU_SFT_CON_PMU_LF_ENA_CFG_SHIFT                   (1U)
#define PMU_SFT_CON_PMU_LF_ENA_CFG_MASK                    (0x1U << PMU_SFT_CON_PMU_LF_ENA_CFG_SHIFT)                   /* 0x00000002 */
#define PMU_SFT_CON_PMU_26M_ENA_CFG_SHIFT                  (2U)
#define PMU_SFT_CON_PMU_26M_ENA_CFG_MASK                   (0x1U << PMU_SFT_CON_PMU_26M_ENA_CFG_SHIFT)                  /* 0x00000004 */
#define PMU_SFT_CON_PWRMODE_EN_SFT_SHIFT                   (3U)
#define PMU_SFT_CON_PWRMODE_EN_SFT_MASK                    (0x1U << PMU_SFT_CON_PWRMODE_EN_SFT_SHIFT)                   /* 0x00000008 */
#define PMU_SFT_CON_PMU_DEBUG_SEL_SHIFT                    (6U)
#define PMU_SFT_CON_PMU_DEBUG_SEL_MASK                     (0x1U << PMU_SFT_CON_PMU_DEBUG_SEL_SHIFT)                    /* 0x00000040 */
#define PMU_SFT_CON_LOD_ADJ_SFT_SHIFT                      (8U)
#define PMU_SFT_CON_LOD_ADJ_SFT_MASK                       (0x1U << PMU_SFT_CON_LOD_ADJ_SFT_SHIFT)                      /* 0x00000100 */
#define PMU_SFT_CON_LDO_ADJ_SEL_SHIFT                      (9U)
#define PMU_SFT_CON_LDO_ADJ_SEL_MASK                       (0x1U << PMU_SFT_CON_LDO_ADJ_SEL_SHIFT)                      /* 0x00000200 */
/* INT_CON */
#define PMU_INT_CON_PMU_INT_EN_SHIFT                       (0U)
#define PMU_INT_CON_PMU_INT_EN_MASK                        (0x1U << PMU_INT_CON_PMU_INT_EN_SHIFT)                       /* 0x00000001 */
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT            (1U)
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_MASK             (0x1U << PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT)            /* 0x00000002 */
#define PMU_INT_CON_DSP_WAKEUP_INT_EN_SHIFT                (2U)
#define PMU_INT_CON_DSP_WAKEUP_INT_EN_MASK                 (0x1U << PMU_INT_CON_DSP_WAKEUP_INT_EN_SHIFT)                /* 0x00000004 */
/* INT_ST */
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT             (0U)
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_MASK              (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT)             /* 0x00000001 */
#define PMU_INT_ST_DSP_WAKEUP_STATUS_SHIFT                 (1U)
#define PMU_INT_ST_DSP_WAKEUP_STATUS_MASK                  (0x1U << PMU_INT_ST_DSP_WAKEUP_STATUS_SHIFT)                 /* 0x00000002 */
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_SHIFT    (2U)
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_MASK     (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_SHIFT)    /* 0x00000004 */
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_SHIFT    (3U)
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_MASK     (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_SHIFT)    /* 0x00000008 */
#define PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_SHIFT        (4U)
#define PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_MASK         (0x1U << PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_SHIFT)        /* 0x00000010 */
#define PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_SHIFT        (5U)
#define PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_MASK         (0x1U << PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_SHIFT)        /* 0x00000020 */
/* PWRMODE_GPIO_POS_INT_CON */
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_SHIFT (0U)
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_SHIFT (8U)
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_NEG_INT_CON */
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_SHIFT (0U)
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_SHIFT (8U)
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_POS_INT_CON */
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_SHIFT (0U)
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_SHIFT (8U)
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_NEG_INT_CON */
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_SHIFT (0U)
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_SHIFT (8U)
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_POS_INT_ST */
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_SHIFT (0U)
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_SHIFT (8U)
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_NEG_INT_ST */
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_SHIFT (0U)
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_SHIFT (8U)
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_POS_INT_ST */
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_SHIFT (0U)
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_SHIFT (8U)
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_NEG_INT_ST */
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_SHIFT (0U)
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_SHIFT (8U)
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* PWRDN_INTEN */
#define PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_SHIFT     (0U)
#define PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_MASK      (0x1U << PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_SHIFT)     /* 0x00000001 */
#define PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_SHIFT   (1U)
#define PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_MASK    (0x1U << PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_SHIFT)   /* 0x00000002 */
#define PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_SHIFT    (2U)
#define PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_MASK     (0x1U << PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_SHIFT)    /* 0x00000004 */
#define PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_SHIFT   (3U)
#define PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_MASK    (0x1U << PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_SHIFT)   /* 0x00000008 */
/* PWRDN_INT_STATUS */
#define PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_SHIFT           (0U)
#define PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_MASK            (0x1U << PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_SHIFT)           /* 0x00000001 */
#define PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_SHIFT         (1U)
#define PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_MASK          (0x1U << PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_SHIFT)         /* 0x00000002 */
#define PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_SHIFT          (2U)
#define PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_MASK           (0x1U << PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_SHIFT)          /* 0x00000004 */
#define PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_SHIFT         (3U)
#define PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_MASK          (0x1U << PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_SHIFT)         /* 0x00000008 */
/* WAKEUP_STATUS */
#define PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_SHIFT  (0U)
#define PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_SHIFT)  /* 0x00000001 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_SHIFT (1U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_SHIFT) /* 0x00000002 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_SHIFT (2U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_SHIFT) /* 0x00000004 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_SHIFT (3U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_SHIFT) /* 0x00000008 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_SHIFT (4U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_SHIFT) /* 0x00000010 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_SHIFT  (5U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_SHIFT)  /* 0x00000020 */
#define PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_SHIFT      (6U)
#define PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_SHIFT)      /* 0x00000040 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_SHIFT (7U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_MASK  (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_SHIFT) /* 0x00000080 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_SHIFT  (8U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_SHIFT)  /* 0x00000100 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_SHIFT      (9U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_SHIFT)      /* 0x00000200 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_SHIFT    (10U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_MASK     (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_SHIFT)    /* 0x00000400 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_SHIFT      (11U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_SHIFT)      /* 0x00000800 */
/* BUS_CLR */
#define PMU_BUS_CLR_CLR_DSP_SHIFT                          (0U)
#define PMU_BUS_CLR_CLR_DSP_MASK                           (0x1U << PMU_BUS_CLR_CLR_DSP_SHIFT)                          /* 0x00000001 */
#define PMU_BUS_CLR_CLR_LOGIC_SHIFT                        (1U)
#define PMU_BUS_CLR_CLR_LOGIC_MASK                         (0x1U << PMU_BUS_CLR_CLR_LOGIC_SHIFT)                        /* 0x00000002 */
#define PMU_BUS_CLR_CLR_SHRM_SHIFT                         (2U)
#define PMU_BUS_CLR_CLR_SHRM_MASK                          (0x1U << PMU_BUS_CLR_CLR_SHRM_SHIFT)                         /* 0x00000004 */
#define PMU_BUS_CLR_CLR_AUDIO_SHIFT                        (3U)
#define PMU_BUS_CLR_CLR_AUDIO_MASK                         (0x1U << PMU_BUS_CLR_CLR_AUDIO_SHIFT)                        /* 0x00000008 */
/* BUS_IDLE_REQ */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_SHIFT                (0U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_MASK                 (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_SHIFT)                /* 0x00000001 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_SHIFT              (1U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_MASK               (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_SHIFT)              /* 0x00000002 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_SHIFT               (2U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_MASK                (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_SHIFT              (3U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_MASK               (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_SHIFT)              /* 0x00000008 */
/* BUS_IDLE_ST */
#define PMU_BUS_IDLE_ST_IDLE_DSP_SHIFT                     (0U)
#define PMU_BUS_IDLE_ST_IDLE_DSP_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_DSP_SHIFT)                     /* 0x00000001 */
#define PMU_BUS_IDLE_ST_IDLE_LOGIC_SHIFT                   (1U)
#define PMU_BUS_IDLE_ST_IDLE_LOGIC_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_LOGIC_SHIFT)                   /* 0x00000002 */
#define PMU_BUS_IDLE_ST_IDLE_SHRM_SHIFT                    (2U)
#define PMU_BUS_IDLE_ST_IDLE_SHRM_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_SHRM_SHIFT)                    /* 0x00000004 */
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT                   (3U)
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT)                   /* 0x00000008 */
/* BUS_IDLE_ACK */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_SHIFT                (0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_SHIFT)                /* 0x00000001 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_SHIFT              (1U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_SHIFT)              /* 0x00000002 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_SHIFT               (2U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT              (3U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT)              /* 0x00000008 */
/* POWER_ST */
#define PMU_POWER_ST_PWRMODE_POWER_STATE_SHIFT             (0U)
#define PMU_POWER_ST_PWRMODE_POWER_STATE_MASK              (0xFU << PMU_POWER_ST_PWRMODE_POWER_STATE_SHIFT)             /* 0x0000000F */
#define PMU_POWER_ST_DSP_POWER_STATE_SHIFT                 (4U)
#define PMU_POWER_ST_DSP_POWER_STATE_MASK                  (0x7U << PMU_POWER_ST_DSP_POWER_STATE_SHIFT)                 /* 0x00000070 */
/* CORE_PWR_ST */
#define PMU_CORE_PWR_ST_STANDBYWFI_CM4_SHIFT               (0U)
#define PMU_CORE_PWR_ST_STANDBYWFI_CM4_MASK                (0x1U << PMU_CORE_PWR_ST_STANDBYWFI_CM4_SHIFT)               /* 0x00000001 */
#define PMU_CORE_PWR_ST_STANDBYWFI_DSP_SHIFT               (1U)
#define PMU_CORE_PWR_ST_STANDBYWFI_DSP_MASK                (0x1U << PMU_CORE_PWR_ST_STANDBYWFI_DSP_SHIFT)               /* 0x00000002 */
/* PLLLOCK_CNT */
#define PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_SHIFT              (0U)
#define PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_MASK               (0xFFFFFU << PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_SHIFT)          /* 0x000FFFFF */
/* PWRMODE_TIMEOUT_CNT */
#define PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_SHIFT (0U)
#define PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_MASK (0xFFFFFFFFU << PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_SHIFT) /* 0xFFFFFFFF */
/* NOC_AUTO_ENA */
#define PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_SHIFT          (0U)
#define PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_MASK           (0x1U << PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_SHIFT)          /* 0x00000001 */
#define PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_SHIFT        (1U)
#define PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_MASK         (0x1U << PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_SHIFT)        /* 0x00000002 */
#define PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_SHIFT         (2U)
#define PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_MASK          (0x1U << PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_SHIFT)         /* 0x00000004 */
#define PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_SHIFT        (3U)
#define PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_MASK         (0x1U << PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_SHIFT)        /* 0x00000008 */
/* DSPAPM_CON */
#define PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_SHIFT           (0U)
#define PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_MASK            (0x1U << PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_SHIFT)           /* 0x00000001 */
#define PMU_DSPAPM_CON_PD_DSP_IDLE_EN_SHIFT                (1U)
#define PMU_DSPAPM_CON_PD_DSP_IDLE_EN_MASK                 (0x1U << PMU_DSPAPM_CON_PD_DSP_IDLE_EN_SHIFT)                /* 0x00000002 */
#define PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_SHIFT             (2U)
#define PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_MASK              (0x1U << PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_SHIFT)             /* 0x00000004 */
#define PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_SHIFT    (3U)
#define PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_MASK     (0x1U << PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_SHIFT)    /* 0x00000008 */
#define PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_SHIFT          (4U)
#define PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_MASK           (0x1U << PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_SHIFT)          /* 0x00000010 */
#define PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_SHIFT     (5U)
#define PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_MASK      (0x1U << PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_SHIFT)     /* 0x00000020 */
#define PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_SHIFT      (6U)
#define PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_MASK       (0x1U << PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_SHIFT)      /* 0x00000040 */
#define PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_SHIFT        (7U)
#define PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_MASK         (0x1U << PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_SHIFT)        /* 0x00000080 */
#define PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_SHIFT          (8U)
#define PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_MASK           (0x1U << PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_SHIFT)          /* 0x00000100 */
#define PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_SHIFT             (9U)
#define PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_MASK              (0x1U << PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_SHIFT)             /* 0x00000200 */
/* DSP_LDO_ADJ_CNT */
#define PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_SHIFT          (0U)
#define PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_MASK           (0xFFFFFU << PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_SHIFT)      /* 0x000FFFFF */
/* DSP_TIMEOUT_CNT */
#define PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_SHIFT        (0U)
#define PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_MASK         (0xFFFFFFFFU << PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_SHIFT) /* 0xFFFFFFFF */
/* PWRMODE_LDO_ADJ_CNT */
#define PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_SHIFT  (0U)
#define PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_MASK   (0xFFFFFU << PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_SHIFT) /* 0x000FFFFF */
/* SHRM_CON */
#define PMU_SHRM_CON_SHAREMEM_PWRDWN_EN_SHIFT              (0U)
#define PMU_SHRM_CON_SHAREMEM_PWRDWN_EN_MASK               (0xFU << PMU_SHRM_CON_SHAREMEM_PWRDWN_EN_SHIFT)              /* 0x0000000F */
#define PMU_SHRM_CON_SHAREMEM_RET1N_SHIFT                  (4U)
#define PMU_SHRM_CON_SHAREMEM_RET1N_MASK                   (0xFU << PMU_SHRM_CON_SHAREMEM_RET1N_SHIFT)                  /* 0x000000F0 */
#define PMU_SHRM_CON_SHAREMEM_RET2N_SHIFT                  (8U)
#define PMU_SHRM_CON_SHAREMEM_RET2N_MASK                   (0xFU << PMU_SHRM_CON_SHAREMEM_RET2N_SHIFT)                  /* 0x00000F00 */
/* DSPTCM_CON0 */
#define PMU_DSPTCM_CON0_DSPDTCM_PWRDWN_EN_SHIFT            (0U)
#define PMU_DSPTCM_CON0_DSPDTCM_PWRDWN_EN_MASK             (0xFFU << PMU_DSPTCM_CON0_DSPDTCM_PWRDWN_EN_SHIFT)           /* 0x000000FF */
#define PMU_DSPTCM_CON0_DSPDTCM_RET1N_SHIFT                (8U)
#define PMU_DSPTCM_CON0_DSPDTCM_RET1N_MASK                 (0xFFU << PMU_DSPTCM_CON0_DSPDTCM_RET1N_SHIFT)               /* 0x0000FF00 */
/* DSPTCM_CON1 */
#define PMU_DSPTCM_CON1_DSPDTCM_RET2N_SHIFT                (0U)
#define PMU_DSPTCM_CON1_DSPDTCM_RET2N_MASK                 (0xFFU << PMU_DSPTCM_CON1_DSPDTCM_RET2N_SHIFT)               /* 0x000000FF */
#define PMU_DSPTCM_CON1_DSPITCM_PWRDWN_EN_SHIFT            (8U)
#define PMU_DSPTCM_CON1_DSPITCM_PWRDWN_EN_MASK             (0x1U << PMU_DSPTCM_CON1_DSPITCM_PWRDWN_EN_SHIFT)            /* 0x00000100 */
#define PMU_DSPTCM_CON1_DSPITCM_RET1N_SHIFT                (9U)
#define PMU_DSPTCM_CON1_DSPITCM_RET1N_MASK                 (0x1U << PMU_DSPTCM_CON1_DSPITCM_RET1N_SHIFT)                /* 0x00000200 */
#define PMU_DSPTCM_CON1_DSPITCM_RET2N_SHIFT                (10U)
#define PMU_DSPTCM_CON1_DSPITCM_RET2N_MASK                 (0x1U << PMU_DSPTCM_CON1_DSPITCM_RET2N_SHIFT)                /* 0x00000400 */
/* SYS_REG0 */
#define PMU_SYS_REG0_PMU_SYS_REG0_SHIFT                    (0U)
#define PMU_SYS_REG0_PMU_SYS_REG0_MASK                     (0xFFFFFFFFU << PMU_SYS_REG0_PMU_SYS_REG0_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG1 */
#define PMU_SYS_REG1_PMU_SYS_REG1_SHIFT                    (0U)
#define PMU_SYS_REG1_PMU_SYS_REG1_MASK                     (0xFFFFFFFFU << PMU_SYS_REG1_PMU_SYS_REG1_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG2 */
#define PMU_SYS_REG2_PMU_SYS_REG2_SHIFT                    (0U)
#define PMU_SYS_REG2_PMU_SYS_REG2_MASK                     (0xFFFFFFFFU << PMU_SYS_REG2_PMU_SYS_REG2_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG3 */
#define PMU_SYS_REG3_PMU_SYS_REG3_SHIFT                    (0U)
#define PMU_SYS_REG3_PMU_SYS_REG3_MASK                     (0xFFFFFFFFU << PMU_SYS_REG3_PMU_SYS_REG3_SHIFT)             /* 0xFFFFFFFF */

#define PISCES_PD_DSP 0x00000000U
#define PISCES_PD_LOGIC 0x00011111U
#define PISCES_PD_SHRM 0x00022222U
#define PISCES_PD_AUDIO 0x00033333U
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __Pisces_H */
