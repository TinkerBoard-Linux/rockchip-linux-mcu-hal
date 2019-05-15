/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

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
    /******  RK2206 specific Interrupt Numbers **********************************************************************/
    DMAC_CH0_IRQn               = 0,
    WDT0_IRQn                   = 1,
    NA_IRQn                     = 2,
    DMAC_CH1_IRQn               = 3,
    TIMER0_6CH_0_IRQn           = 4,
    TIMER0_6CH_1_IRQn           = 5,
    TIMER0_6CH_2_IRQn           = 6,
    TIMER0_6CH_3_IRQn           = 7,
    TIMER0_6CH_4_IRQn           = 8,
    TIMER0_6CH_5_IRQn           = 9,
    TIMER1_1CH_IRQn             = 10,
    I2C0_IRQn                   = 11,
    I2C1_IRQn                   = 12,
    I2C2_IRQn                   = 13,
    SPI0_IRQn                   = 14,
    SPI1_IRQn                   = 15,
    UART0_IRQn                  = 16,
    UART1_IRQn                  = 17,
    UART2_IRQn                  = 18,
    PWM_4CH_0_IRQn              = 19,
    PWM_4CH_1_IRQn              = 20,
    PWM_4CH_2_IRQn              = 21,
    SARADC_CTL_IRQn             = 22,
    B2A0_INT0_IRQn              = 23,
    B2A0_INT1_IRQn              = 24,
    B2A0_INT2_IRQn              = 25,
    B2A0_INT3_IRQn              = 26,
    B2A1_INT0_IRQn              = 27,
    B2A1_INT1_IRQn              = 28,
    B2A1_INT2_IRQn              = 29,
    B2A1_INT3_IRQn              = 30,
    XIPSFC0_IRQn                = 31,
    XIPSFC1_IRQn                = 32,
    VOP_INTR_IRQn               = 33,
    CACHE0_I_IRQn               = 34,
    CACHE0_D_IRQn               = 35,
    DSP_ERROR_IRQn              = 36,
    HYPERX8_IRQn                = 37,
    USB2OTG_IRQn                = 38,
    USB2OTG_BVALID_IRQn         = 39,
    USB2OTG_ID_IRQn             = 40,
    USB2OTG_LINESTATE_IRQn      = 41,
    USB2OTG_DISCONNECT_IRQn     = 42,
    SD_MMC_IRQn                 = 43,
    ADUPWM_IRQn                 = 44,
    PVTM_IRQn                   = 45,
    CRYPTO_IRQn                 = 46,
    CIF_IRQn                    = 47,
    PMU_IRQn                    = 48,
    GPIO0_IRQn                  = 49,
    GPIO1_IRQn                  = 50,
    TRIM_IRQn                   = 51,
    I2S0_IRQn                   = 52,
    I2S1_IRQn                   = 53,
    PDM_IRQn                    = 54,
    VAD_IRQn                    = 55,
    EFUSE_IRQn                  = 56,
    TOUCH_IRQn                  = 57,
    PMIC_IRQn                   = 58,
    SPI2APB_IRQn                = 59,
    DMAC_CH2_IRQn               = 60,
    DMAC_CH3_IRQn               = 61,
    DMAC_CH4_IRQn               = 62,
    DMAC_CH5_IRQn               = 63,
    NUM_INTERRUPTS
} IRQn_Type;

#define NVIC_PERIPH_IRQ_NUM MAX_IRQn
#define NVIC_PERIPH_IRQ_OFFSET 16

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define __CM4_REV                 0x0001U  /* Core revision r0p1                         */
#define __MPU_PRESENT             1U       /* RK2206 provides an MPU                     */
#define __VTOR_PRESENT            1U       /* VTOR present */
#define __NVIC_PRIO_BITS          3U       /* RK2206 uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig    0U       /* Set to 1 if different SysTick Config is used  */
#define __FPU_PRESENT             1U       /* FPU present                                   */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
/* TIMER Register Structure Define */
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __IO uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __O  uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
};
/* WDT Register Structure Define */
struct WDT_REG {
    __IO uint32_t WDT_CR;                             /* Address Offset: 0x0000 */
    __IO uint32_t WDT_TORR;                           /* Address Offset: 0x0004 */
    __I  uint32_t WDT_CCVR;                           /* Address Offset: 0x0008 */
    __O  uint32_t WDT_CRR;                            /* Address Offset: 0x000C */
    __I  uint32_t WDT_STAT;                           /* Address Offset: 0x0010 */
    __I  uint32_t WDT_EOI;                            /* Address Offset: 0x0014 */
};
/* RKI2C_20180130 Register Structure Define */
struct RKI2C_20180130_REG {
    __IO uint32_t CON;                                /* Address Offset: 0x0000 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0004 */
    __IO uint32_t MRXADDR;                            /* Address Offset: 0x0008 */
    __IO uint32_t MRXRADDR;                           /* Address Offset: 0x000C */
    __IO uint32_t MTXCNT;                             /* Address Offset: 0x0010 */
    __IO uint32_t MRXCNT;                             /* Address Offset: 0x0014 */
    __IO uint32_t IEN;                                /* Address Offset: 0x0018 */
    __IO uint32_t IPD;                                /* Address Offset: 0x001C */
    __I  uint32_t FCNT;                               /* Address Offset: 0x0020 */
    __IO uint32_t SCL_OE_DB;                          /* Address Offset: 0x0024 */
         uint32_t RESERVED0028[54];                   /* Address Offset: 0x0028 */
    __IO uint32_t TXDATA[8];                          /* Address Offset: 0x0100 */
         uint32_t RESERVED0120[56];                   /* Address Offset: 0x0120 */
    __IO uint32_t RXDATA[8];                          /* Address Offset: 0x0200 */
    __I  uint32_t ST;                                 /* Address Offset: 0x0220 */
    __IO uint32_t DBGCTRL;                            /* Address Offset: 0x0224 */
};
/* UART Register Structure Define */
struct UART_REG {
    __IO uint32_t RBR;                                /* Address Offset: 0x0000 */
    __IO uint32_t THR;                                /* Address Offset: 0x0000 */
    __IO uint32_t DLL;                                /* Address Offset: 0x0000 */
    __IO uint32_t DLH;                                /* Address Offset: 0x0004 */
    __IO uint32_t IER;                                /* Address Offset: 0x0004 */
    __I  uint32_t IIR;                                /* Address Offset: 0x0008 */
    __O  uint32_t FCR;                                /* Address Offset: 0x0008 */
    __IO uint32_t LCR;                                /* Address Offset: 0x000C */
    __IO uint32_t MCR;                                /* Address Offset: 0x0010 */
    __I  uint32_t LSR;                                /* Address Offset: 0x0014 */
    __I  uint32_t MSR;                                /* Address Offset: 0x0018 */
    __IO uint32_t SCR;                                /* Address Offset: 0x001C */
    __I  uint32_t SRBR;                               /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[14];                   /* Address Offset: 0x0034 */
    __I  uint32_t STHR;                               /* Address Offset: 0x006C */
    __IO uint32_t FAR;                                /* Address Offset: 0x0070 */
    __I  uint32_t TFR;                                /* Address Offset: 0x0074 */
    __O  uint32_t RFW;                                /* Address Offset: 0x0078 */
    __I  uint32_t USR;                                /* Address Offset: 0x007C */
    __IO uint32_t TFL;                                /* Address Offset: 0x0080 */
    __I  uint32_t RFL;                                /* Address Offset: 0x0084 */
    __O  uint32_t SRR;                                /* Address Offset: 0x0088 */
    __IO uint32_t SRTS;                               /* Address Offset: 0x008C */
    __IO uint32_t SBCR;                               /* Address Offset: 0x0090 */
    __IO uint32_t SDMAM;                              /* Address Offset: 0x0094 */
    __IO uint32_t SFE;                                /* Address Offset: 0x0098 */
    __IO uint32_t SRT;                                /* Address Offset: 0x009C */
    __IO uint32_t STET;                               /* Address Offset: 0x00A0 */
    __IO uint32_t HTX;                                /* Address Offset: 0x00A4 */
    __O  uint32_t DMASA;                              /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC[18];                   /* Address Offset: 0x00AC */
    __I  uint32_t CPR;                                /* Address Offset: 0x00F4 */
    __I  uint32_t UCV;                                /* Address Offset: 0x00F8 */
    __I  uint32_t CTR;                                /* Address Offset: 0x00FC */
};
/* PWM_2 Register Structure Define */
struct PWM_CHANNEL {
    __I  uint32_t CNT;
    __IO uint32_t PERIOD_HPR;
    __IO uint32_t DUTY_LPR;
    __IO uint32_t CTRL;
};
struct PWM_2_REG {
    __I  uint32_t PWM0_CNT;                           /* Address Offset: 0x0000 */
    __IO uint32_t PWM0_PERIOD_HPR;                    /* Address Offset: 0x0004 */
    __IO uint32_t PWM0_DUTY_LPR;                      /* Address Offset: 0x0008 */
    __IO uint32_t PWM0_CTRL;                          /* Address Offset: 0x000C */
    __I  uint32_t PWM1_CNT;                           /* Address Offset: 0x0010 */
    __IO uint32_t PWM1_PERIOD_HPR;                    /* Address Offset: 0x0014 */
    __IO uint32_t PWM1_DUTY_LPR;                      /* Address Offset: 0x0018 */
    __IO uint32_t PWM1_CTRL;                          /* Address Offset: 0x001C */
    __I  uint32_t PWM2_CNT;                           /* Address Offset: 0x0020 */
    __IO uint32_t PWM2_PERIOD_HPR;                    /* Address Offset: 0x0024 */
    __IO uint32_t PWM2_DUTY_LPR;                      /* Address Offset: 0x0028 */
    __IO uint32_t PWM2_CTRL;                          /* Address Offset: 0x002C */
    __I  uint32_t PWM3_CNT;                           /* Address Offset: 0x0030 */
    __IO uint32_t PWM3_PERIOD_HPR;                    /* Address Offset: 0x0034 */
    __IO uint32_t PWM3_DUTY_LPR;                      /* Address Offset: 0x0038 */
    __IO uint32_t PWM3_CTRL;                          /* Address Offset: 0x003C */
    __IO uint32_t INTSTS;                             /* Address Offset: 0x0040 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x0044 */
         uint32_t RESERVED0048[2];                    /* Address Offset: 0x0048 */
    __IO uint32_t FIFO_CTRL;                          /* Address Offset: 0x0050 */
    __IO uint32_t FIFO_INTSTS;                        /* Address Offset: 0x0054 */
    __IO uint32_t FIFO_TOUTTHR;                       /* Address Offset: 0x0058 */
    __IO uint32_t VERSION_ID;                         /* Address Offset: 0x005C */
    __I  uint32_t FIFO;                               /* Address Offset: 0x0060 */
         uint32_t RESERVED0064[7];                    /* Address Offset: 0x0064 */
    __IO uint32_t PWRMATCH_CTRL;                      /* Address Offset: 0x0080 */
    __IO uint32_t PWRMATCH_LPRE;                      /* Address Offset: 0x0084 */
    __IO uint32_t PWRMATCH_HPRE;                      /* Address Offset: 0x0088 */
    __IO uint32_t PWRMATCH_LD;                        /* Address Offset: 0x008C */
    __IO uint32_t PWRMATCH_HD_ZERO;                   /* Address Offset: 0x0090 */
    __IO uint32_t PWRMATCH_HD_ONE;                    /* Address Offset: 0x0094 */
    __IO uint32_t PWRMATCH_VALUE[10];                 /* Address Offset: 0x0098 */
         uint32_t RESERVED00C0[3];                    /* Address Offset: 0x00C0 */
    __I  uint32_t PWM3_PWRCAPTURE_VALUE;              /* Address Offset: 0x00CC */
    __IO uint32_t FILTER_CTRL;                        /* Address Offset: 0x00D0 */
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
    __IO uint32_t ISR;                                /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __IO uint32_t ICR;                                /* Address Offset: 0x0038 */
    __IO uint32_t DMACR;                              /* Address Offset: 0x003C */
    __IO uint32_t DMATDLR;                            /* Address Offset: 0x0040 */
    __IO uint32_t DMARDLR;                            /* Address Offset: 0x0044 */
         uint32_t RESERVED0048;                       /* Address Offset: 0x0048 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t BYPASS;                             /* Address Offset: 0x0050 */
         uint32_t RESERVED0054[235];                  /* Address Offset: 0x0054 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED0404[255];                  /* Address Offset: 0x0404 */
    __IO uint32_t RXDR;                               /* Address Offset: 0x0800 */
};
/* EFUSE_CTL Register Structure Define */
struct EFUSE_CTL_REG {
    __IO uint32_t MOD;                                /* Address Offset: 0x0000 */
    __IO uint32_t RD_MASK;                            /* Address Offset: 0x0004 */
    __IO uint32_t PG_MASK;                            /* Address Offset: 0x0008 */
         uint32_t RESERVED000C[2];                    /* Address Offset: 0x000C */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0014 */
    __O  uint32_t INT_STATUS;                         /* Address Offset: 0x0018 */
    __IO uint32_t USER_CTRL;                          /* Address Offset: 0x001C */
    __I  uint32_t DOUT;                               /* Address Offset: 0x0020 */
    __IO uint32_t AUTO_CTRL;                          /* Address Offset: 0x0024 */
    __IO uint32_t T_CSB_P;                            /* Address Offset: 0x0028 */
    __IO uint32_t T_PGENB_P;                          /* Address Offset: 0x002C */
    __IO uint32_t T_LOAD_P;                           /* Address Offset: 0x0030 */
    __IO uint32_t T_ADDR_P;                           /* Address Offset: 0x0034 */
    __IO uint32_t T_STROBE_P;                         /* Address Offset: 0x0038 */
    __IO uint32_t T_CSB_R;                            /* Address Offset: 0x003C */
    __IO uint32_t T_PGENB_R;                          /* Address Offset: 0x0040 */
    __IO uint32_t T_LOAD_R;                           /* Address Offset: 0x0044 */
    __IO uint32_t T_ADDR_R;                           /* Address Offset: 0x0048 */
    __IO uint32_t T_STROBE_R;                         /* Address Offset: 0x004C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x0050 */
};
/* MAILBOX Register Structure Define */
struct MBOX_CMD_DAT {
    __IO uint32_t CMD;
    __IO uint32_t DATA;
};
struct MAILBOX_REG {
    __IO uint32_t A2B_INTEN;                          /* Address Offset: 0x0000 */
    __IO uint32_t A2B_STATUS;                         /* Address Offset: 0x0004 */
    __IO uint32_t A2B_CMD_0;                          /* Address Offset: 0x0008 */
    __IO uint32_t A2B_DAT_0;                          /* Address Offset: 0x000C */
    __IO uint32_t A2B_CMD_1;                          /* Address Offset: 0x0010 */
    __IO uint32_t A2B_DAT_1;                          /* Address Offset: 0x0014 */
    __IO uint32_t A2B_CMD_2;                          /* Address Offset: 0x0018 */
    __IO uint32_t A2B_DAT_2;                          /* Address Offset: 0x001C */
    __IO uint32_t A2B_CMD_3;                          /* Address Offset: 0x0020 */
    __IO uint32_t A2B_DAT_3;                          /* Address Offset: 0x0024 */
    __IO uint32_t B2A_INTEN;                          /* Address Offset: 0x0028 */
    __IO uint32_t B2A_STATUS;                         /* Address Offset: 0x002C */
    __IO uint32_t B2A_CMD_0;                          /* Address Offset: 0x0030 */
    __IO uint32_t B2A_DAT_0;                          /* Address Offset: 0x0034 */
    __IO uint32_t B2A_CMD_1;                          /* Address Offset: 0x0038 */
    __IO uint32_t B2A_DAT_1;                          /* Address Offset: 0x003C */
    __IO uint32_t B2A_CMD_2;                          /* Address Offset: 0x0040 */
    __IO uint32_t B2A_DAT_2;                          /* Address Offset: 0x0044 */
    __IO uint32_t B2A_CMD_3;                          /* Address Offset: 0x0048 */
    __IO uint32_t B2A_DAT_3;                          /* Address Offset: 0x004C */
         uint32_t RESERVED0050[44];                   /* Address Offset: 0x0050 */
    __IO uint32_t ATOMIC_LOCK[32];                    /* Address Offset: 0x0100 */
};
/* SARADC Register Structure Define */
struct SARADC_REG {
    __I  uint32_t DATA;                               /* Address Offset: 0x0000 */
    __I  uint32_t STAS;                               /* Address Offset: 0x0004 */
    __IO uint32_t CTRL;                               /* Address Offset: 0x0008 */
    __IO uint32_t DLY_PU_SOC;                         /* Address Offset: 0x000C */
};
/* DMA Register Structure Define */
struct DMA_REG {
    __IO uint32_t SAR0;                               /* Address Offset: 0x0000 */
         uint32_t RESERVED0004;                       /* Address Offset: 0x0004 */
    __IO uint32_t DAR0;                               /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t LLP0;                               /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t CTL0;                               /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t SSTAT0;                             /* Address Offset: 0x0020 */
         uint32_t RESERVED0024;                       /* Address Offset: 0x0024 */
    __IO uint32_t DSTAT0;                             /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __IO uint32_t SSTATAR0;                           /* Address Offset: 0x0030 */
         uint32_t RESERVED0034;                       /* Address Offset: 0x0034 */
    __IO uint32_t DSTATAR0;                           /* Address Offset: 0x0038 */
         uint32_t RESERVED003C;                       /* Address Offset: 0x003C */
    __IO uint32_t CFG0;                               /* Address Offset: 0x0040 */
         uint32_t RESERVED0044;                       /* Address Offset: 0x0044 */
    __IO uint32_t SGR0;                               /* Address Offset: 0x0048 */
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __IO uint32_t DSR0;                               /* Address Offset: 0x0050 */
         uint32_t RESERVED0054;                       /* Address Offset: 0x0054 */
    __IO uint32_t SAR1;                               /* Address Offset: 0x0058 */
         uint32_t RESERVED005C;                       /* Address Offset: 0x005C */
    __IO uint32_t DAR1;                               /* Address Offset: 0x0060 */
         uint32_t RESERVED0064;                       /* Address Offset: 0x0064 */
    __IO uint32_t LLP1;                               /* Address Offset: 0x0068 */
         uint32_t RESERVED006C;                       /* Address Offset: 0x006C */
    __IO uint32_t CTL1;                               /* Address Offset: 0x0070 */
         uint32_t RESERVED0074;                       /* Address Offset: 0x0074 */
    __IO uint32_t SSTAT1;                             /* Address Offset: 0x0078 */
         uint32_t RESERVED007C;                       /* Address Offset: 0x007C */
    __IO uint32_t DSTAT1;                             /* Address Offset: 0x0080 */
         uint32_t RESERVED0084;                       /* Address Offset: 0x0084 */
    __IO uint32_t SSTATAR1;                           /* Address Offset: 0x0088 */
         uint32_t RESERVED008C;                       /* Address Offset: 0x008C */
    __IO uint32_t DSTATAR1;                           /* Address Offset: 0x0090 */
         uint32_t RESERVED0094;                       /* Address Offset: 0x0094 */
    __IO uint32_t CFG1;                               /* Address Offset: 0x0098 */
         uint32_t RESERVED009C;                       /* Address Offset: 0x009C */
    __IO uint32_t SGR1;                               /* Address Offset: 0x00A0 */
         uint32_t RESERVED00A4;                       /* Address Offset: 0x00A4 */
    __IO uint32_t DSR1;                               /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC;                       /* Address Offset: 0x00AC */
    __IO uint32_t SAR2;                               /* Address Offset: 0x00B0 */
         uint32_t RESERVED00B4;                       /* Address Offset: 0x00B4 */
    __IO uint32_t DAR2;                               /* Address Offset: 0x00B8 */
         uint32_t RESERVED00BC;                       /* Address Offset: 0x00BC */
    __IO uint32_t LLP2;                               /* Address Offset: 0x00C0 */
         uint32_t RESERVED00C4;                       /* Address Offset: 0x00C4 */
    __IO uint32_t CTL2;                               /* Address Offset: 0x00C8 */
         uint32_t RESERVED00CC;                       /* Address Offset: 0x00CC */
    __IO uint32_t SSTAT2;                             /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4;                       /* Address Offset: 0x00D4 */
    __IO uint32_t DSTAT2;                             /* Address Offset: 0x00D8 */
         uint32_t RESERVED00DC;                       /* Address Offset: 0x00DC */
    __IO uint32_t SSTATAR2;                           /* Address Offset: 0x00E0 */
         uint32_t RESERVED00E4;                       /* Address Offset: 0x00E4 */
    __IO uint32_t DSTATAR2;                           /* Address Offset: 0x00E8 */
         uint32_t RESERVED00EC;                       /* Address Offset: 0x00EC */
    __IO uint32_t CFG2;                               /* Address Offset: 0x00F0 */
         uint32_t RESERVED00F4;                       /* Address Offset: 0x00F4 */
    __IO uint32_t SGR2;                               /* Address Offset: 0x00F8 */
         uint32_t RESERVED00FC;                       /* Address Offset: 0x00FC */
    __IO uint32_t DSR2;                               /* Address Offset: 0x0100 */
         uint32_t RESERVED0104[111];                  /* Address Offset: 0x0104 */
    __I  uint32_t RAWTFR;                             /* Address Offset: 0x02C0 */
         uint32_t RESERVED02C4;                       /* Address Offset: 0x02C4 */
    __I  uint32_t RAWBLOCK;                           /* Address Offset: 0x02C8 */
         uint32_t RESERVED02CC;                       /* Address Offset: 0x02CC */
    __I  uint32_t RAWSRCTRAN;                         /* Address Offset: 0x02D0 */
         uint32_t RESERVED02D4;                       /* Address Offset: 0x02D4 */
    __I  uint32_t RAWDSTTRAN;                         /* Address Offset: 0x02D8 */
         uint32_t RESERVED02DC;                       /* Address Offset: 0x02DC */
    __I  uint32_t RAWERR;                             /* Address Offset: 0x02E0 */
         uint32_t RESERVED02E4;                       /* Address Offset: 0x02E4 */
    __I  uint32_t STATUSTFR;                          /* Address Offset: 0x02E8 */
         uint32_t RESERVED02EC;                       /* Address Offset: 0x02EC */
    __I  uint32_t STATUSBLOCK;                        /* Address Offset: 0x02F0 */
         uint32_t RESERVED02F4;                       /* Address Offset: 0x02F4 */
    __I  uint32_t STATUSSRCTRAN;                      /* Address Offset: 0x02F8 */
         uint32_t RESERVED02FC;                       /* Address Offset: 0x02FC */
    __I  uint32_t STATUSDSTTRAN;                      /* Address Offset: 0x0300 */
         uint32_t RESERVED0304;                       /* Address Offset: 0x0304 */
    __I  uint32_t STATUSERR;                          /* Address Offset: 0x0308 */
         uint32_t RESERVED030C;                       /* Address Offset: 0x030C */
    __IO uint32_t MASKTFR;                            /* Address Offset: 0x0310 */
         uint32_t RESERVED0314;                       /* Address Offset: 0x0314 */
    __IO uint32_t MASKBLOCK;                          /* Address Offset: 0x0318 */
         uint32_t RESERVED031C;                       /* Address Offset: 0x031C */
    __IO uint32_t MASKSRCTRAN;                        /* Address Offset: 0x0320 */
         uint32_t RESERVED0324;                       /* Address Offset: 0x0324 */
    __IO uint32_t MASKDSTTRAN;                        /* Address Offset: 0x0328 */
         uint32_t RESERVED032C;                       /* Address Offset: 0x032C */
    __IO uint32_t MASKERR;                            /* Address Offset: 0x0330 */
         uint32_t RESERVED0334;                       /* Address Offset: 0x0334 */
    __O  uint32_t CLEARTFR;                           /* Address Offset: 0x0338 */
         uint32_t RESERVED033C;                       /* Address Offset: 0x033C */
    __O  uint32_t CLEARBLOCK;                         /* Address Offset: 0x0340 */
         uint32_t RESERVED0344;                       /* Address Offset: 0x0344 */
    __O  uint32_t CLEARSRCTRAN;                       /* Address Offset: 0x0348 */
         uint32_t RESERVED034C;                       /* Address Offset: 0x034C */
    __O  uint32_t CLEARDSTTRAN;                       /* Address Offset: 0x0350 */
         uint32_t RESERVED0354;                       /* Address Offset: 0x0354 */
    __O  uint32_t CLEARERR;                           /* Address Offset: 0x0358 */
         uint32_t RESERVED035C;                       /* Address Offset: 0x035C */
    __I  uint32_t STATUSINT;                          /* Address Offset: 0x0360 */
         uint32_t RESERVED0364[13];                   /* Address Offset: 0x0364 */
    __IO uint32_t DMACFGREG;                          /* Address Offset: 0x0398 */
         uint32_t RESERVED039C;                       /* Address Offset: 0x039C */
    __IO uint32_t CHENREG;                            /* Address Offset: 0x03A0 */
};
/* SFC_V3 Register Structure Define */
struct SFC_V3_REG {
    __IO uint32_t CTRL0;                              /* Address Offset: 0x0000 */
    __IO uint32_t IMR;                                /* Address Offset: 0x0004 */
    __O  uint32_t ICLR;                               /* Address Offset: 0x0008 */
    __IO uint32_t FTLR;                               /* Address Offset: 0x000C */
    __IO uint32_t RCVR;                               /* Address Offset: 0x0010 */
    __IO uint32_t AX0;                                /* Address Offset: 0x0014 */
    __IO uint32_t ABIT0;                              /* Address Offset: 0x0018 */
    __IO uint32_t ISR;                                /* Address Offset: 0x001C */
    __IO uint32_t FSR;                                /* Address Offset: 0x0020 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
    __I  uint32_t RISR;                               /* Address Offset: 0x0028 */
    __I  uint32_t VER;                                /* Address Offset: 0x002C */
    __IO uint32_t QOP;                                /* Address Offset: 0x0030 */
    __IO uint32_t EXT_CTRL;                           /* Address Offset: 0x0034 */
    __IO uint32_t POLL_CTRL;                          /* Address Offset: 0x0038 */
    __IO uint32_t DLL_CTRL0;                          /* Address Offset: 0x003C */
    __IO uint32_t HRDYMASK;                           /* Address Offset: 0x0040 */
    __IO uint32_t EXT_AX;                             /* Address Offset: 0x0044 */
    __IO uint32_t SCLK_INATM_CNT;                     /* Address Offset: 0x0048 */
    __IO uint32_t AUTO_RF_CNT;                        /* Address Offset: 0x004C */
    __O  uint32_t XMMC_WCMD0;                         /* Address Offset: 0x0050 */
    __O  uint32_t XMMC_RCMD0;                         /* Address Offset: 0x0054 */
    __IO uint32_t XMMC_CTRL;                          /* Address Offset: 0x0058 */
    __IO uint32_t MODE;                               /* Address Offset: 0x005C */
    __IO uint32_t DEVRGN;                             /* Address Offset: 0x0060 */
    __IO uint32_t DEVSIZE0;                           /* Address Offset: 0x0064 */
    __IO uint32_t TME0;                               /* Address Offset: 0x0068 */
    __IO uint32_t POLLDLY_CTRL;                       /* Address Offset: 0x006C */
         uint32_t RESERVED0070[4];                    /* Address Offset: 0x0070 */
    __O  uint32_t DMATR;                              /* Address Offset: 0x0080 */
    __IO uint32_t DMAADDR;                            /* Address Offset: 0x0084 */
         uint32_t RESERVED0088[2];                    /* Address Offset: 0x0088 */
    __I  uint32_t POLL_DATA;                          /* Address Offset: 0x0090 */
    __IO uint32_t XMMCSR;                             /* Address Offset: 0x0094 */
         uint32_t RESERVED0098[26];                   /* Address Offset: 0x0098 */
    __O  uint32_t CMD;                                /* Address Offset: 0x0100 */
    __O  uint32_t ADDR;                               /* Address Offset: 0x0104 */
    __IO uint32_t DATA;                               /* Address Offset: 0x0108 */
         uint32_t RESERVED010C[61];                   /* Address Offset: 0x010C */
    __IO uint32_t CTRL1;                              /* Address Offset: 0x0200 */
         uint32_t RESERVED0204[4];                    /* Address Offset: 0x0204 */
    __IO uint32_t AX1;                                /* Address Offset: 0x0214 */
    __IO uint32_t ABIT1;                              /* Address Offset: 0x0218 */
         uint32_t RESERVED021C[8];                    /* Address Offset: 0x021C */
    __IO uint32_t DLL_CTRL1;                          /* Address Offset: 0x023C */
         uint32_t RESERVED0240[4];                    /* Address Offset: 0x0240 */
    __O  uint32_t XMMC_WCMD1;                         /* Address Offset: 0x0250 */
    __O  uint32_t XMMC_RCMD1;                         /* Address Offset: 0x0254 */
         uint32_t RESERVED0258[3];                    /* Address Offset: 0x0258 */
    __IO uint32_t DEVSIZE1;                           /* Address Offset: 0x0264 */
    __IO uint32_t TME1;                               /* Address Offset: 0x0268 */
};
/* RK_CACHE_M4 Register Structure Define */
struct RK_CACHE_M4_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
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
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* VOP Register Structure Define */
struct VOP_REG {
    __IO uint32_t CON;                                /* Address Offset: 0x0000 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0004 */
    __IO uint32_t TIMING;                             /* Address Offset: 0x0008 */
    __IO uint32_t LCD_SIZE;                           /* Address Offset: 0x000C */
    __IO uint32_t FIFO_WATERMARK;                     /* Address Offset: 0x0010 */
    __O  uint32_t SRT;                                /* Address Offset: 0x0014 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x0018 */
    __IO uint32_t INT_CLEAR;                          /* Address Offset: 0x001C */
    __IO uint32_t INT_STATUS;                         /* Address Offset: 0x0020 */
    __IO uint32_t STATUS;                             /* Address Offset: 0x0024 */
    __IO uint32_t CMD;                                /* Address Offset: 0x0028 */
    __IO uint32_t DATA;                               /* Address Offset: 0x002C */
    __IO uint32_t START;                              /* Address Offset: 0x0030 */
};
/* AUDPWM Register Structure Define */
struct AUDPWM_REG {
    __I  uint32_t VERSION;                            /* Address Offset: 0x0000 */
    __IO uint32_t XFER;                               /* Address Offset: 0x0004 */
    __IO uint32_t SRC_CFG;                            /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t PWM_CFG;                            /* Address Offset: 0x0010 */
    __I  uint32_t PWM_ST;                             /* Address Offset: 0x0014 */
    __IO uint32_t PWM_BUF[2];                         /* Address Offset: 0x0018 */
    __IO uint32_t FIFO_CFG;                           /* Address Offset: 0x0020 */
    __I  uint32_t FIFO_ST;                            /* Address Offset: 0x0024 */
    __IO uint32_t FIFO_INT_EN;                        /* Address Offset: 0x0028 */
    __O  uint32_t FIFO_INT_ST;                        /* Address Offset: 0x002C */
         uint32_t RESERVED0030[20];                   /* Address Offset: 0x0030 */
    __O  uint32_t FIFO_ENTRY;                         /* Address Offset: 0x0080 */
};
/* PMU Register Structure Define */
struct PMU_REG {
    __IO uint32_t WAKEUP_CFG;                         /* Address Offset: 0x0000 */
    __IO uint32_t PWRDN_ST;                           /* Address Offset: 0x0004 */
    __IO uint32_t PWRMODE_CON;                        /* Address Offset: 0x0008 */
    __IO uint32_t SFT_CON;                            /* Address Offset: 0x000C */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0010 */
    __IO uint32_t INT_ST;                             /* Address Offset: 0x0014 */
    __IO uint32_t BUS_IDLE_ST;                        /* Address Offset: 0x0018 */
    __IO uint32_t POWER_ST;                           /* Address Offset: 0x001C */
    __IO uint32_t OSC_CNT;                            /* Address Offset: 0x0020 */
    __IO uint32_t PLLLOCK_CNT;                        /* Address Offset: 0x0024 */
    __IO uint32_t PLLRST_CNT;                         /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __IO uint32_t INFO_TX_CON;                        /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __IO uint32_t SYS_REG[4];                         /* Address Offset: 0x0040 */
         uint32_t RESERVED0050[12];                   /* Address Offset: 0x0050 */
    __IO uint32_t TIMEOUT_CNT;                        /* Address Offset: 0x0080 */
};
/* RK_GPIO Register Structure Define */
struct RK_GPIO_REG {
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
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __I  uint32_t INT_STATUS;                         /* Address Offset: 0x0050 */
         uint32_t RESERVED0054;                       /* Address Offset: 0x0054 */
    __I  uint32_t INT_RAWSTATUS;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED005C;                       /* Address Offset: 0x005C */
    __O  uint32_t PORT_EOI_L;                         /* Address Offset: 0x0060 */
    __O  uint32_t PORT_EOI_H;                         /* Address Offset: 0x0064 */
         uint32_t RESERVED0068[2];                    /* Address Offset: 0x0068 */
    __I  uint32_t EXT_PORT;                           /* Address Offset: 0x0070 */
         uint32_t RESERVED0074;                       /* Address Offset: 0x0074 */
    __I  uint32_t VER_ID;                             /* Address Offset: 0x0078 */
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
    __IO uint32_t GPIO1B_IOMUX_H;                     /* Address Offset: 0x002C */
    __IO uint32_t GPIO1C_IOMUX_L;                     /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[51];                   /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0100 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0104 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0108 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x010C */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x0110 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x0114 */
    __IO uint32_t GPIO1C_P;                           /* Address Offset: 0x0118 */
         uint32_t RESERVED011C[57];                   /* Address Offset: 0x011C */
    __IO uint32_t SOC_CON[30];                        /* Address Offset: 0x0200 */
         uint32_t RESERVED0278[2];                    /* Address Offset: 0x0278 */
    __IO uint32_t SOC_STATUS;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t MCU0_CON[2];                        /* Address Offset: 0x0300 */
    __IO uint32_t MCU1_CON[2];                        /* Address Offset: 0x0308 */
         uint32_t RESERVED0310[4];                    /* Address Offset: 0x0310 */
    __IO uint32_t SOC_DSP[3];                         /* Address Offset: 0x0320 */
         uint32_t RESERVED032C[5];                    /* Address Offset: 0x032C */
    __IO uint32_t SOC_UOC[3];                         /* Address Offset: 0x0340 */
         uint32_t RESERVED034C[13];                   /* Address Offset: 0x034C */
    __IO uint32_t MCU0_STATUS;                        /* Address Offset: 0x0380 */
    __IO uint32_t MCU1_STATUS;                        /* Address Offset: 0x0384 */
    __IO uint32_t DSP_STATUS[2];                      /* Address Offset: 0x0388 */
         uint32_t RESERVED0390[92];                   /* Address Offset: 0x0390 */
    __IO uint32_t LPW_CON;                            /* Address Offset: 0x0500 */
    __IO uint32_t LPWCLK_CON;                         /* Address Offset: 0x0504 */
    __IO uint32_t LPW_GPIO_IN;                        /* Address Offset: 0x0508 */
    __IO uint32_t LPW_GPIO_OUT;                       /* Address Offset: 0x050C */
         uint32_t RESERVED0510[28];                   /* Address Offset: 0x0510 */
    __IO uint32_t LPW_STATUS;                         /* Address Offset: 0x0580 */
         uint32_t RESERVED0584[63];                   /* Address Offset: 0x0584 */
    __IO uint32_t USB2_DISCONNECT_CON;                /* Address Offset: 0x0680 */
    __IO uint32_t USB2_LINESTATE_CON;                 /* Address Offset: 0x0684 */
    __IO uint32_t USB2_BVALID_CON;                    /* Address Offset: 0x0688 */
    __IO uint32_t USB2_ID_CON;                        /* Address Offset: 0x068C */
    __IO uint32_t USB2_DETECT_IRQ_ENABLE;             /* Address Offset: 0x0690 */
    __IO uint32_t USB2_DETECT_IRQ_STATUS;             /* Address Offset: 0x0694 */
    __IO uint32_t USB2_DETECT_IRQ_STATUS_CLR;         /* Address Offset: 0x0698 */
         uint32_t RESERVED069C[89];                   /* Address Offset: 0x069C */
    __IO uint32_t OS_REG[8];                          /* Address Offset: 0x0800 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
    __IO uint32_t VPLL_CON[5];                        /* Address Offset: 0x0020 */
         uint32_t RESERVED0034[27];                   /* Address Offset: 0x0034 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x00A0 */
         uint32_t RESERVED00A4[3];                    /* Address Offset: 0x00A4 */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x00B0 */
    __O  uint32_t GLB_RST_ST;                         /* Address Offset: 0x00B4 */
    __IO uint32_t GLB_SRST_FST;                       /* Address Offset: 0x00B8 */
    __IO uint32_t GLB_SRST_SND;                       /* Address Offset: 0x00BC */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x00C0 */
         uint32_t RESERVED00C4[15];                   /* Address Offset: 0x00C4 */
    __IO uint32_t CLKSEL_CON[36];                     /* Address Offset: 0x0100 */
         uint32_t RESERVED0190[92];                   /* Address Offset: 0x0190 */
    __IO uint32_t CLKGATE_CON[13];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED0334[19];                   /* Address Offset: 0x0334 */
    __O  uint32_t SSCGTBL0_3;                         /* Address Offset: 0x0380 */
    __O  uint32_t SSCGTBL4_7;                         /* Address Offset: 0x0384 */
    __O  uint32_t SSCGTBL8_11;                        /* Address Offset: 0x0388 */
    __O  uint32_t SSCGTBL12_15;                       /* Address Offset: 0x038C */
    __O  uint32_t SSCGTBL16_19;                       /* Address Offset: 0x0390 */
    __O  uint32_t SSCGTBL20_23;                       /* Address Offset: 0x0394 */
    __O  uint32_t SSCGTBL24_27;                       /* Address Offset: 0x0398 */
    __O  uint32_t SSCGTBL28_31;                       /* Address Offset: 0x039C */
    __O  uint32_t SSCGTBL32_35;                       /* Address Offset: 0x03A0 */
    __O  uint32_t SSCGTBL36_39;                       /* Address Offset: 0x03A4 */
    __O  uint32_t SSCGTBL40_43;                       /* Address Offset: 0x03A8 */
    __O  uint32_t SSCGTBL44_47;                       /* Address Offset: 0x03AC */
    __O  uint32_t SSCGTBL48_51;                       /* Address Offset: 0x03B0 */
    __O  uint32_t SSCGTBL52_55;                       /* Address Offset: 0x03B4 */
    __O  uint32_t SSCGTBL56_59;                       /* Address Offset: 0x03B8 */
    __O  uint32_t SSCGTBL60_63;                       /* Address Offset: 0x03BC */
    __O  uint32_t SSCGTBL64_67;                       /* Address Offset: 0x03C0 */
    __O  uint32_t SSCGTBL68_71;                       /* Address Offset: 0x03C4 */
    __O  uint32_t SSCGTBL72_75;                       /* Address Offset: 0x03C8 */
    __O  uint32_t SSCGTBL76_79;                       /* Address Offset: 0x03CC */
    __O  uint32_t SSCGTBL80_83;                       /* Address Offset: 0x03D0 */
    __O  uint32_t SSCGTBL84_87;                       /* Address Offset: 0x03D4 */
    __O  uint32_t SSCGTBL88_91;                       /* Address Offset: 0x03D8 */
    __O  uint32_t SSCGTBL92_95;                       /* Address Offset: 0x03DC */
    __O  uint32_t SSCGTBL96_99;                       /* Address Offset: 0x03E0 */
    __O  uint32_t SSCGTBL100_103;                     /* Address Offset: 0x03E4 */
    __O  uint32_t SSCGTBL104_107;                     /* Address Offset: 0x03E8 */
    __O  uint32_t SSCGTBL108_111;                     /* Address Offset: 0x03EC */
    __O  uint32_t SSCGTBL112_115;                     /* Address Offset: 0x03F0 */
    __O  uint32_t SSCGTBL116_119;                     /* Address Offset: 0x03F4 */
    __O  uint32_t SSCGTBL120_123;                     /* Address Offset: 0x03F8 */
    __O  uint32_t SSCGTBL124_127;                     /* Address Offset: 0x03FC */
         uint32_t RESERVED0400;                       /* Address Offset: 0x0400 */
    __IO uint32_t SOFTRST_CON[12];                    /* Address Offset: 0x0404 */
         uint32_t RESERVED0434[19];                   /* Address Offset: 0x0434 */
    __IO uint32_t SDMMC_CON[2];                       /* Address Offset: 0x0480 */
};
/* PVTM Register Structure Define */
struct PVTM_REG {
    __IO uint32_t PVTM_VERSION;                       /* Address Offset: 0x0000 */
    __IO uint32_t PVTM_CON[2];                        /* Address Offset: 0x0004 */
         uint32_t RESERVED000C[29];                   /* Address Offset: 0x000C */
    __IO uint32_t PVTM_STATUS[2];                     /* Address Offset: 0x0080 */
};
/* TOUCH_SENSOR Register Structure Define */
struct TOUCH_SENSOR_REG {
    __IO uint32_t CH_START;                           /* Address Offset: 0x0000 */
    __IO uint32_t CH_ENABLE[2];                       /* Address Offset: 0x0004 */
    __IO uint32_t CH_DIV;                             /* Address Offset: 0x000C */
    __IO uint32_t CH_IRQ_EN[2];                       /* Address Offset: 0x0010 */
    __IO uint32_t CH_IRQ_ST;                          /* Address Offset: 0x0018 */
    __IO uint32_t CH_IRQ_RAW;                         /* Address Offset: 0x001C */
    __IO uint32_t CH_IRQ_CLEAR[2];                    /* Address Offset: 0x0020 */
    __IO uint32_t CH_FILTER_THRESHOLD;                /* Address Offset: 0x0028 */
    __IO uint32_t CH_CHARGE_THRESHOLD;                /* Address Offset: 0x002C */
         uint32_t RESERVED0030;                       /* Address Offset: 0x0030 */
    __IO uint32_t CH_LOCK;                            /* Address Offset: 0x0034 */
         uint32_t RESERVED0038[50];                   /* Address Offset: 0x0038 */
    __IO uint32_t CH0_CNT;                            /* Address Offset: 0x0100 */
    __IO uint32_t CH0_CNT_DC;                         /* Address Offset: 0x0104 */
    __IO uint32_t CH0_CNT_DO;                         /* Address Offset: 0x0108 */
    __IO uint32_t CH0_CNT_FILTER;                     /* Address Offset: 0x010C */
         uint32_t RESERVED0110[60];                   /* Address Offset: 0x0110 */
    __IO uint32_t CH1_CNT;                            /* Address Offset: 0x0200 */
    __IO uint32_t CH1_CNT_DC;                         /* Address Offset: 0x0204 */
    __IO uint32_t CH1_CNT_DO;                         /* Address Offset: 0x0208 */
    __IO uint32_t CH1_CNT_FILTER;                     /* Address Offset: 0x020C */
         uint32_t RESERVED0210[60];                   /* Address Offset: 0x0210 */
    __IO uint32_t CH2_CNT;                            /* Address Offset: 0x0300 */
    __IO uint32_t CH2_CNT_DC;                         /* Address Offset: 0x0304 */
    __IO uint32_t CH2_CNT_DO;                         /* Address Offset: 0x0308 */
    __IO uint32_t CH2_CNT_FILTER;                     /* Address Offset: 0x030C */
         uint32_t RESERVED0310[60];                   /* Address Offset: 0x0310 */
    __IO uint32_t CH3_CNT;                            /* Address Offset: 0x0400 */
    __IO uint32_t CH3_CNT_DC;                         /* Address Offset: 0x0404 */
    __IO uint32_t CH3_CNT_DO;                         /* Address Offset: 0x0408 */
    __IO uint32_t CH3_CNT_FILTER;                     /* Address Offset: 0x040C */
         uint32_t RESERVED0410[60];                   /* Address Offset: 0x0410 */
    __IO uint32_t CH4_CNT;                            /* Address Offset: 0x0500 */
    __IO uint32_t CH4_CNT_DC;                         /* Address Offset: 0x0504 */
    __IO uint32_t CH4_CNT_DO;                         /* Address Offset: 0x0508 */
    __IO uint32_t CH4_CNT_FILTER;                     /* Address Offset: 0x050C */
         uint32_t RESERVED0510[60];                   /* Address Offset: 0x0510 */
    __IO uint32_t CH5_CNT;                            /* Address Offset: 0x0600 */
    __IO uint32_t CH5_CNT_DC;                         /* Address Offset: 0x0604 */
    __IO uint32_t CH5_CNT_DO;                         /* Address Offset: 0x0608 */
    __IO uint32_t CH5_CNT_FILTER;                     /* Address Offset: 0x060C */
         uint32_t RESERVED0610[60];                   /* Address Offset: 0x0610 */
    __IO uint32_t CH6_CNT;                            /* Address Offset: 0x0700 */
    __IO uint32_t CH6_CNT_DC;                         /* Address Offset: 0x0704 */
    __IO uint32_t CH6_CNT_DO;                         /* Address Offset: 0x0708 */
    __IO uint32_t CH6_CNT_FILTER;                     /* Address Offset: 0x070C */
         uint32_t RESERVED0710[60];                   /* Address Offset: 0x0710 */
    __IO uint32_t CH7_CNT;                            /* Address Offset: 0x0800 */
    __IO uint32_t CH7_CNT_DC;                         /* Address Offset: 0x0804 */
    __IO uint32_t CH7_CNT_DO;                         /* Address Offset: 0x0808 */
    __IO uint32_t CH7_CNT_FILTER;                     /* Address Offset: 0x080C */
         uint32_t RESERVED0810[60];                   /* Address Offset: 0x0810 */
    __IO uint32_t CH8_CNT;                            /* Address Offset: 0x0900 */
    __IO uint32_t CH8_CNT_DC;                         /* Address Offset: 0x0904 */
    __IO uint32_t CH8_CNT_DO;                         /* Address Offset: 0x0908 */
    __IO uint32_t CH8_CNT_FILTER;                     /* Address Offset: 0x090C */
         uint32_t RESERVED0910[444];                  /* Address Offset: 0x0910 */
    __IO uint32_t CH9_CNT;                            /* Address Offset: 0x1000 */
    __IO uint32_t CH9_CNT_DC;                         /* Address Offset: 0x1004 */
    __IO uint32_t CH9_CNT_DO;                         /* Address Offset: 0x1008 */
    __IO uint32_t CH9_CNT_FILTER;                     /* Address Offset: 0x100C */
         uint32_t RESERVED1010[60];                   /* Address Offset: 0x1010 */
    __IO uint32_t CH10_CNT;                           /* Address Offset: 0x1100 */
    __IO uint32_t CH10_CNT_DC;                        /* Address Offset: 0x1104 */
    __IO uint32_t CH10_CNT_DO;                        /* Address Offset: 0x1108 */
    __IO uint32_t CH10_CNT_FILTER;                    /* Address Offset: 0x110C */
         uint32_t RESERVED1110[60];                   /* Address Offset: 0x1110 */
    __IO uint32_t CH11_CNT;                           /* Address Offset: 0x1200 */
    __IO uint32_t CH11_CNT_DC;                        /* Address Offset: 0x1204 */
    __IO uint32_t CH11_CNT_DO;                        /* Address Offset: 0x1208 */
    __IO uint32_t CH11_CNT_FILTER;                    /* Address Offset: 0x120C */
         uint32_t RESERVED1210[60];                   /* Address Offset: 0x1210 */
    __IO uint32_t CH12_CNT;                           /* Address Offset: 0x1300 */
    __IO uint32_t CH12_CNT_DC;                        /* Address Offset: 0x1304 */
    __IO uint32_t CH12_CNT_DO;                        /* Address Offset: 0x1308 */
    __IO uint32_t CH12_CNT_FILTER;                    /* Address Offset: 0x130C */
         uint32_t RESERVED1310[60];                   /* Address Offset: 0x1310 */
    __IO uint32_t CH13_CNT;                           /* Address Offset: 0x1400 */
    __IO uint32_t CH13_CNT_DC;                        /* Address Offset: 0x1404 */
    __IO uint32_t CH13_CNT_DO;                        /* Address Offset: 0x1408 */
    __IO uint32_t CH13_CNT_FILTER;                    /* Address Offset: 0x140C */
         uint32_t RESERVED1410[60];                   /* Address Offset: 0x1410 */
    __IO uint32_t CH14_CNT;                           /* Address Offset: 0x1500 */
    __IO uint32_t CH14_CNT_DC;                        /* Address Offset: 0x1504 */
    __IO uint32_t CH14_CNT_DO;                        /* Address Offset: 0x1508 */
    __IO uint32_t CH14_CNT_FILTER;                    /* Address Offset: 0x150C */
         uint32_t RESERVED1510[60];                   /* Address Offset: 0x1510 */
    __IO uint32_t CH15_CNT;                           /* Address Offset: 0x1600 */
    __IO uint32_t CH15_CNT_DC;                        /* Address Offset: 0x1604 */
    __IO uint32_t CH15_CNT_DO;                        /* Address Offset: 0x1608 */
    __IO uint32_t CH15_CNT_FILTER;                    /* Address Offset: 0x160C */
         uint32_t RESERVED1610[60];                   /* Address Offset: 0x1610 */
    __IO uint32_t CH16_CNT;                           /* Address Offset: 0x1700 */
    __IO uint32_t CH16_CNT_DC;                        /* Address Offset: 0x1704 */
    __IO uint32_t CH16_CNT_DO;                        /* Address Offset: 0x1708 */
    __IO uint32_t CH16_CNT_FILTER;                    /* Address Offset: 0x170C */
         uint32_t RESERVED1710[60];                   /* Address Offset: 0x1710 */
    __IO uint32_t CH17_CNT;                           /* Address Offset: 0x1800 */
    __IO uint32_t CH17_CNT_DC;                        /* Address Offset: 0x1804 */
    __IO uint32_t CH17_CNT_DO;                        /* Address Offset: 0x1808 */
    __IO uint32_t CH17_CNT_FILTER;                    /* Address Offset: 0x180C */
         uint32_t RESERVED1810[60];                   /* Address Offset: 0x1810 */
    __IO uint32_t CH18_CNT;                           /* Address Offset: 0x1900 */
    __IO uint32_t CH18_CNT_DC;                        /* Address Offset: 0x1904 */
    __IO uint32_t CH18_CNT_DO;                        /* Address Offset: 0x1908 */
    __IO uint32_t CH18_CNT_FILTER;                    /* Address Offset: 0x190C */
         uint32_t RESERVED1910[444];                  /* Address Offset: 0x1910 */
    __IO uint32_t CH19_CNT;                           /* Address Offset: 0x2000 */
    __IO uint32_t CH19_CNT_DC;                        /* Address Offset: 0x2004 */
    __IO uint32_t CH19_CNT_DO;                        /* Address Offset: 0x2008 */
    __IO uint32_t CH19_CNT_FILTER;                    /* Address Offset: 0x200C */
};
/* I2S_TDM_8CH Register Structure Define */
struct I2S_TDM_8CH_REG {
    __IO uint32_t TXCR;                               /* Address Offset: 0x0000 */
    __IO uint32_t RXCR;                               /* Address Offset: 0x0004 */
    __IO uint32_t CKR;                                /* Address Offset: 0x0008 */
    __IO uint32_t TXFIFOLR;                           /* Address Offset: 0x000C */
    __IO uint32_t DMACR;                              /* Address Offset: 0x0010 */
    __IO uint32_t INTCR;                              /* Address Offset: 0x0014 */
    __IO uint32_t INTSR;                              /* Address Offset: 0x0018 */
    __IO uint32_t XFER;                               /* Address Offset: 0x001C */
    __IO uint32_t CLR;                                /* Address Offset: 0x0020 */
    __IO uint32_t TXDR;                               /* Address Offset: 0x0024 */
    __IO uint32_t RXDR;                               /* Address Offset: 0x0028 */
    __IO uint32_t RXFIFOLR;                           /* Address Offset: 0x002C */
    __IO uint32_t TDM_TXCTRL;                         /* Address Offset: 0x0030 */
    __IO uint32_t TDM_RXCTRL;                         /* Address Offset: 0x0034 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0038 */
    __IO uint32_t VERSION;                            /* Address Offset: 0x003C */
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
         uint32_t RESERVED0028[2];                    /* Address Offset: 0x0028 */
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
};
/* VAD Register Structure Define */
struct VAD_REG {
    __IO uint32_t CONTROL;                            /* Address Offset: 0x0000 */
    __IO uint32_t VS_ADDR;                            /* Address Offset: 0x0004 */
         uint32_t RESERVED0008[17];                   /* Address Offset: 0x0008 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t RAM_START_ADDR;                     /* Address Offset: 0x0050 */
    __IO uint32_t RAM_END_ADDR;                       /* Address Offset: 0x0054 */
    __IO uint32_t RAM_CUR_ADDR;                       /* Address Offset: 0x0058 */
    __IO uint32_t DET_CON[6];                         /* Address Offset: 0x005C */
    __IO uint32_t INT;                                /* Address Offset: 0x0074 */
    __IO uint32_t AUX_CON0;                           /* Address Offset: 0x0078 */
    __I  uint32_t SAMPLE_CNT;                         /* Address Offset: 0x007C */
    __IO uint32_t RAM_START_ADDR_BUS;                 /* Address Offset: 0x0080 */
    __IO uint32_t RAM_END_ADDR_BUS;                   /* Address Offset: 0x0084 */
    __IO uint32_t RAM_CUR_ADDR_BUS;                   /* Address Offset: 0x0088 */
    __IO uint32_t AUX_CON1;                           /* Address Offset: 0x008C */
         uint32_t RESERVED0090[28];                   /* Address Offset: 0x0090 */
    __IO uint32_t NOISE_FIRST_DATA;                   /* Address Offset: 0x0100 */
         uint32_t RESERVED0104[126];                  /* Address Offset: 0x0104 */
    __IO uint32_t NOISE_LAST_DATA;                    /* Address Offset: 0x02FC */
};
/* LPW_SYSBUS Register Structure Define */
struct LPW_SYSBUS_REG {
    __IO uint32_t MIPS_MCU_CONTROL;                   /* Address Offset: 0x0000 */
         uint32_t RESERVED0004[11];                   /* Address Offset: 0x0004 */
    __IO uint32_t MIPS_MCU_SYS_CORE_MEM_CTRL;         /* Address Offset: 0x0030 */
    __IO uint32_t MIPS_MCU_SYS_CORE_MEM_WDATA;        /* Address Offset: 0x0034 */
    __IO uint32_t MIPS_MCU_SYS_CORE_MEM_RDATA;        /* Address Offset: 0x0038 */
         uint32_t RESERVED003C[5];                    /* Address Offset: 0x003C */
    __IO uint32_t MIPS_MCU_BOOT_EXCP_INSTR[4];        /* Address Offset: 0x0050 */
         uint32_t RESERVED0060[244];                  /* Address Offset: 0x0060 */
    __IO uint32_t UCCP_CORE_HOST_TO_MTX_CMD;          /* Address Offset: 0x0430 */
    __IO uint32_t UCCP_CORE_MTX_TO_HOST_CMD;          /* Address Offset: 0x0434 */
    __IO uint32_t UCCP_CORE_HOST_TO_MTX_ACK;          /* Address Offset: 0x0438 */
    __IO uint32_t UCCP_CORE_MTX_TO_HOST_ACK;          /* Address Offset: 0x043C */
    __IO uint32_t UCCP_CORE_HOST_INT_ENABLE;          /* Address Offset: 0x0440 */
    __IO uint32_t UCCP_CORE_MTX_INT_ENABLE;           /* Address Offset: 0x0444 */
         uint32_t RESERVED0448[209];                  /* Address Offset: 0x0448 */
    __IO uint32_t UCCP_SOC_FAB_STATUS;                /* Address Offset: 0x078C */
         uint32_t RESERVED0790[2343];                 /* Address Offset: 0x0790 */
    __IO uint32_t UCC_SLEEP_CTRL_DATA_0;              /* Address Offset: 0x2C2C */
         uint32_t RESERVED2C30[105];                  /* Address Offset: 0x2C30 */
    __IO uint32_t UCC_SLEEP_CTRL_MCU_BOOT_ADDR_MS;    /* Address Offset: 0x2DD4 */
    __IO uint32_t UCC_SLEEP_CTRL_MCU_BOOT_ADDR_LS;    /* Address Offset: 0x2DD8 */
};
/* LPW_PBUS Register Structure Define */
struct LPW_PBUS_REG {
         uint32_t RESERVED0000[3840];                 /* Address Offset: 0x0000 */
    __IO uint32_t EDC_GPIO0_OUT;                      /* Address Offset: 0x3C00 */
    __IO uint32_t EDC_GPIO1_OUT;                      /* Address Offset: 0x3C04 */
    __IO uint32_t EDC_GPIO0_IN;                       /* Address Offset: 0x3C08 */
    __IO uint32_t EDC_GPIO1_IN;                       /* Address Offset: 0x3C0C */
         uint32_t RESERVED3C10[5124];                 /* Address Offset: 0x3C10 */
    __IO uint32_t RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1; /* Address Offset: 0x8C20 */
};
/* VIP Register Structure Define */
struct VIP_REG {
    __IO uint32_t DVP_CTRL;                           /* Address Offset: 0x0000 */
    __IO uint32_t DVP_INTEN;                          /* Address Offset: 0x0004 */
    __IO uint32_t DVP_INTSTAT;                        /* Address Offset: 0x0008 */
    __IO uint32_t DVP_FOR;                            /* Address Offset: 0x000C */
    __IO uint32_t DVP_DMA_IDLE_REQ;                   /* Address Offset: 0x0010 */
    __IO uint32_t DVP_FRM0_ADDR_Y;                    /* Address Offset: 0x0014 */
    __IO uint32_t DVP_FRM0_ADDR_UV;                   /* Address Offset: 0x0018 */
    __IO uint32_t DVP_FRM1_ADDR_Y;                    /* Address Offset: 0x001C */
    __IO uint32_t DVP_FRM1_ADDR_UV;                   /* Address Offset: 0x0020 */
    __IO uint32_t DVP_VIR_LINE_WIDTH;                 /* Address Offset: 0x0024 */
    __IO uint32_t DVP_SET_SIZE;                       /* Address Offset: 0x0028 */
    __IO uint32_t DVP_BLOCK_LINE_NUM;                 /* Address Offset: 0x002C */
    __IO uint32_t DVP_BLOCK0_ADDR_Y;                  /* Address Offset: 0x0030 */
    __IO uint32_t DVP_BLOCK0_ADDR_UV;                 /* Address Offset: 0x0034 */
    __IO uint32_t DVP_BLOCK1_ADDR_Y;                  /* Address Offset: 0x0038 */
    __IO uint32_t DVP_BLOCK1_ADDR_UV;                 /* Address Offset: 0x003C */
    __IO uint32_t DVP_BLOCK_STATUS;                   /* Address Offset: 0x0040 */
    __IO uint32_t DVP_CROP;                           /* Address Offset: 0x0044 */
    __IO uint32_t DVP_PATH_SEL;                       /* Address Offset: 0x0048 */
    __IO uint32_t DVP_LINE_INT_NUM;                   /* Address Offset: 0x004C */
    __IO uint32_t DVP_WATER_LINE;                     /* Address Offset: 0x0050 */
    __IO uint32_t DVP_FIFO_ENTRY;                     /* Address Offset: 0x0054 */
         uint32_t RESERVED0058[2];                    /* Address Offset: 0x0058 */
    __I  uint32_t DVP_FRAME_STATUS;                   /* Address Offset: 0x0060 */
    __I  uint32_t DVP_CUR_DST;                        /* Address Offset: 0x0064 */
    __IO uint32_t DVP_LAST_LINE;                      /* Address Offset: 0x0068 */
    __IO uint32_t DVP_LAST_PIX;                       /* Address Offset: 0x006C */
};
/* SDMMC Register Structure Define */
struct SDMMC_REG {
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
    __IO uint32_t RESP[4];                            /* Address Offset: 0x0030 */
    __IO uint32_t MINTSTS;                            /* Address Offset: 0x0040 */
    __IO uint32_t RINTSTS;                            /* Address Offset: 0x0044 */
    __I  uint32_t STATUS;                             /* Address Offset: 0x0048 */
    __IO uint32_t FIFOTH;                             /* Address Offset: 0x004C */
    __I  uint32_t CDETECT;                            /* Address Offset: 0x0050 */
    __IO uint32_t WRTPRT;                             /* Address Offset: 0x0054 */
         uint32_t RESERVED0058;                       /* Address Offset: 0x0058 */
    __I  uint32_t TCBCNT;                             /* Address Offset: 0x005C */
    __I  uint32_t TBBCNT;                             /* Address Offset: 0x0060 */
    __IO uint32_t DEBNCE;                             /* Address Offset: 0x0064 */
    __IO uint32_t USRID;                              /* Address Offset: 0x0068 */
    __I  uint32_t VERID;                              /* Address Offset: 0x006C */
    __I  uint32_t HCON;                               /* Address Offset: 0x0070 */
    __IO uint32_t UHSREG;                             /* Address Offset: 0x0074 */
    __IO uint32_t RSTN;                               /* Address Offset: 0x0078 */
         uint32_t RESERVED007C;                       /* Address Offset: 0x007C */
    __IO uint32_t BMOD;                               /* Address Offset: 0x0080 */
    __O  uint32_t PLDMND;                             /* Address Offset: 0x0084 */
    __IO uint32_t DBADDR;                             /* Address Offset: 0x0088 */
    __IO uint32_t IDSTS;                              /* Address Offset: 0x008C */
    __IO uint32_t IDINTEN;                            /* Address Offset: 0x0090 */
    __IO uint32_t DSCADDR;                            /* Address Offset: 0x0094 */
    __IO uint32_t BUFADDR;                            /* Address Offset: 0x0098 */
         uint32_t RESERVED009C[25];                   /* Address Offset: 0x009C */
    __IO uint32_t CARDTHRCTL;                         /* Address Offset: 0x0100 */
    __IO uint32_t BACKEND_POWER;                      /* Address Offset: 0x0104 */
         uint32_t RESERVED0108;                       /* Address Offset: 0x0108 */
    __IO uint32_t EMMCDDR_REG;                        /* Address Offset: 0x010C */
         uint32_t RESERVED0110[4];                    /* Address Offset: 0x0110 */
    __IO uint32_t RDYINT_GEN;                         /* Address Offset: 0x0120 */
         uint32_t RESERVED0124[55];                   /* Address Offset: 0x0124 */
    __IO uint32_t FIFO_BASE;                          /* Address Offset: 0x0200 */
};
/* CRYPTO Register Structure Define */
struct CRYPTO_REG {
    __IO uint32_t CLK_CTL;                            /* Address Offset: 0x0000 */
    __IO uint32_t RST_CTL;                            /* Address Offset: 0x0004 */
    __IO uint32_t DMA_INT_EN;                         /* Address Offset: 0x0008 */
    __O  uint32_t DMA_INT_ST;                         /* Address Offset: 0x000C */
    __IO uint32_t DMA_CTL;                            /* Address Offset: 0x0010 */
    __IO uint32_t DMA_LLI_ADDR;                       /* Address Offset: 0x0014 */
    __IO uint32_t DMA_ST;                             /* Address Offset: 0x0018 */
    __I  uint32_t DMA_STATE;                          /* Address Offset: 0x001C */
    __IO uint32_t DMA_LLI_RADDR;                      /* Address Offset: 0x0020 */
    __IO uint32_t DMA_SRC_RADDR;                      /* Address Offset: 0x0024 */
    __IO uint32_t DMA_DST_WADDR;                      /* Address Offset: 0x0028 */
    __I  uint32_t DMA_ITEM_ID;                        /* Address Offset: 0x002C */
         uint32_t RESERVED0030[4];                    /* Address Offset: 0x0030 */
    __IO uint32_t FIFO_CTL;                           /* Address Offset: 0x0040 */
    __IO uint32_t BC_CTL;                             /* Address Offset: 0x0044 */
    __IO uint32_t HASH_CTL;                           /* Address Offset: 0x0048 */
    __I  uint32_t CIPHER_ST;                          /* Address Offset: 0x004C */
    __IO uint32_t CIPHER_STATE;                       /* Address Offset: 0x0050 */
         uint32_t RESERVED0054[43];                   /* Address Offset: 0x0054 */
    __IO uint32_t CHN_IV[4];                          /* Address Offset: 0x0100 */
         uint32_t RESERVED0110[28];                   /* Address Offset: 0x0110 */
    __IO uint32_t CHN_KEY[4];                         /* Address Offset: 0x0180 */
         uint32_t RESERVED0190[28];                   /* Address Offset: 0x0190 */
    __IO uint32_t CHN_PKEY[4];                        /* Address Offset: 0x0200 */
         uint32_t RESERVED0210[28];                   /* Address Offset: 0x0210 */
    __IO uint32_t CHN_PC_LEN[2];                      /* Address Offset: 0x0280 */
         uint32_t RESERVED0288[14];                   /* Address Offset: 0x0288 */
    __IO uint32_t CHN_ADA_LEN[2];                     /* Address Offset: 0x02C0 */
         uint32_t RESERVED02C8[14];                   /* Address Offset: 0x02C8 */
    __IO uint32_t CHN_IV_LEN_0;                       /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[7];                    /* Address Offset: 0x0304 */
    __IO uint32_t CHN_TAG[4];                         /* Address Offset: 0x0320 */
         uint32_t RESERVED0330[28];                   /* Address Offset: 0x0330 */
    __IO uint32_t HASH_DOUT[16];                      /* Address Offset: 0x03A0 */
    __O  uint32_t TAG_VALID;                          /* Address Offset: 0x03E0 */
    __O  uint32_t HASH_VALID;                         /* Address Offset: 0x03E4 */
         uint32_t RESERVED03E8[2];                    /* Address Offset: 0x03E8 */
    __IO uint32_t VERSION;                            /* Address Offset: 0x03F0 */
         uint32_t RESERVED03F4[3];                    /* Address Offset: 0x03F4 */
    __IO uint32_t RNG_CTL;                            /* Address Offset: 0x0400 */
    __IO uint32_t RNG_SAMPLE_CNT;                     /* Address Offset: 0x0404 */
         uint32_t RESERVED0408[2];                    /* Address Offset: 0x0408 */
    __IO uint32_t RNG_DOUT[8];                        /* Address Offset: 0x0410 */
         uint32_t RESERVED0430[20];                   /* Address Offset: 0x0430 */
    __IO uint32_t RAM_CTL;                            /* Address Offset: 0x0480 */
    __I  uint32_t RAM_ST;                             /* Address Offset: 0x0484 */
         uint32_t RESERVED0488[6];                    /* Address Offset: 0x0488 */
    __IO uint32_t DEBUG_CTL;                          /* Address Offset: 0x04A0 */
    __I  uint32_t DEBUG_ST;                           /* Address Offset: 0x04A4 */
    __IO uint32_t DEBUG_MONITOR;                      /* Address Offset: 0x04A8 */
         uint32_t RESERVED04AC[213];                  /* Address Offset: 0x04AC */
    __IO uint32_t PKA_MEM_MAP[32];                    /* Address Offset: 0x0800 */
    __O  uint32_t PKA_OPCODE;                         /* Address Offset: 0x0880 */
    __IO uint32_t N_NP_TO_T1_ADDR;                    /* Address Offset: 0x0884 */
    __I  uint32_t PKA_STATUS;                         /* Address Offset: 0x0888 */
    __O  uint32_t PKA_SW_RESET;                       /* Address Offset: 0x088C */
    __IO uint32_t PKA_L[8];                           /* Address Offset: 0x0890 */
    __I  uint32_t PKA_PIPE_RDY;                       /* Address Offset: 0x08B0 */
    __I  uint32_t PKA_DONE;                           /* Address Offset: 0x08B4 */
    __IO uint32_t PKA_MON_SELECT;                     /* Address Offset: 0x08B8 */
    __IO uint32_t PKA_DEBUG_REG_EN;                   /* Address Offset: 0x08BC */
    __IO uint32_t DEBUG_CNT_ADDR;                     /* Address Offset: 0x08C0 */
    __O  uint32_t DEBUG_EXT_ADDR;                     /* Address Offset: 0x08C4 */
    __I  uint32_t PKA_DEBUG_HALT;                     /* Address Offset: 0x08C8 */
         uint32_t RESERVED08CC;                       /* Address Offset: 0x08CC */
    __I  uint32_t PKA_MON_READ;                       /* Address Offset: 0x08D0 */
    __IO uint32_t PKA_INT_ENA;                        /* Address Offset: 0x08D4 */
    __O  uint32_t PKA_INT_ST;                         /* Address Offset: 0x08D8 */
         uint32_t RESERVED08DC[457];                  /* Address Offset: 0x08DC */
    __IO uint32_t SRAM_ADDR;                          /* Address Offset: 0x1000 */
};
/* SPI2APB Register Structure Define */
struct SPI2APB_REG {
    __IO uint32_t CTRL0;                              /* Address Offset: 0x0000 */
         uint32_t RESERVED0004[8];                    /* Address Offset: 0x0004 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
         uint32_t RESERVED0028;                       /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
         uint32_t RESERVED0030;                       /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
         uint32_t RESERVED003C[3];                    /* Address Offset: 0x003C */
    __IO uint32_t VERSION;                            /* Address Offset: 0x0048 */
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __IO uint32_t QUICK_REG[3];                       /* Address Offset: 0x0050 */
};
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define TIMER0_BASE         0x40000000U /* TIMER0 base address */
#define WDT0_BASE           0x40010000U /* WDT0 base address */
#define WDT1_BASE           0x40020000U /* WDT1 base address */
#define WDT2_BASE           0x40030000U /* WDT2 base address */
#define I2C0_BASE           0x40040000U /* I2C0 base address */
#define I2C1_BASE           0x40050000U /* I2C1 base address */
#define I2C2_BASE           0x40060000U /* I2C2 base address */
#define UART0_BASE          0x40070000U /* UART0 base address */
#define UART1_BASE          0x40080000U /* UART1 base address */
#define UART2_BASE          0x40090000U /* UART2 base address */
#define PWM0_BASE           0x400A0000U /* PWM0 base address */
#define PWM1_BASE           0x400B0000U /* PWM1 base address */
#define PWM2_BASE           0x400C0000U /* PWM2 base address */
#define SPI0_BASE           0x400D0000U /* SPI0 base address */
#define SPI1_BASE           0x400E0000U /* SPI1 base address */
#define EFUSE_CTL0_BASE     0x400F0000U /* EFUSE_CTL0 base address */
#define MBOX0_BASE          0x40100000U /* MBOX0 base address */
#define MBOX1_BASE          0x40110000U /* MBOX1 base address */
#define SARADC_BASE         0x40120000U /* SARADC base address */
#define DMA_BASE            0x40200000U /* DMA base address */
#define SFC0_BASE           0x40210000U /* SFC0 base address */
#define SFC1_BASE           0x40220000U /* SFC1 base address */
#define ICACHE0_BASE        0x40230000U /* ICACHE0 base address */
#define DCACHE0_BASE        0x40234000U /* DCACHE0 base address */
#define VOP_BASE            0x40250000U /* VOP base address */
#define AUDPWM_BASE         0x40260000U /* AUDPWM base address */
#define PMU_BASE            0x41000000U /* PMU base address */
#define GPIO0_BASE          0x41010000U /* GPIO0 base address */
#define GPIO1_BASE          0x41020000U /* GPIO1 base address */
#define TIMER1_BASE         0x41030000U /* TIMER1 base address */
#define GRF_BASE            0x41050000U /* GRF base address */
#define CRU_BASE            0x41060000U /* CRU base address */
#define PVTM_BASE           0x41080000U /* PVTM base address */
#define TOUCH_SENSOR_BASE   0x41090000U /* TOUCH_SENSOR base address */
#define I2S0_BASE           0x41100000U /* I2S0 base address */
#define I2S1_BASE           0x41110000U /* I2S1 base address */
#define PDM_BASE            0x41120000U /* PDM base address */
#define VAD_BASE            0x41130000U /* VAD base address */
#define LPW_SYSBUS_BASE     0x42000000U /* LPW_SYSBUS base address */
#define LPW_PBUS_BASE       0x42040000U /* LPW_PBUS base address */
#define VIP_BASE            0x43000000U /* VIP base address */
#define SDMMC_BASE          0x43010000U /* SDMMC base address */
#define CRYPTO_BASE         0x43020000U /* CRYPTO base address */
#define SPI2APB_BASE        0x43080000U /* SPI2APB base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define TIMER0              ((struct TIMER_REG *) TIMER0_BASE)
#define WDT0                ((struct WDT_REG *) WDT0_BASE)
#define WDT1                ((struct WDT_REG *) WDT1_BASE)
#define WDT2                ((struct WDT_REG *) WDT2_BASE)
#define I2C0                ((struct I2C_REG *) I2C0_BASE)
#define I2C1                ((struct I2C_REG *) I2C1_BASE)
#define I2C2                ((struct I2C_REG *) I2C2_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define PWM0                ((struct PWM_REG *) PWM0_BASE)
#define PWM1                ((struct PWM_REG *) PWM1_BASE)
#define PWM2                ((struct PWM_REG *) PWM2_BASE)
#define SPI0                ((struct SPI_REG *) SPI0_BASE)
#define SPI1                ((struct SPI_REG *) SPI1_BASE)
#define EFUSE_CTL0          ((struct EFUSE_CTL_REG *) EFUSE_CTL0_BASE)
#define MBOX0               ((struct MBOX_REG *) MBOX0_BASE)
#define MBOX1               ((struct MBOX_REG *) MBOX1_BASE)
#define SARADC              ((struct SARADC_REG *) SARADC_BASE)
#define DMA                 ((struct DMA_REG *) DMA_BASE)
#define SFC0                ((struct SFC_REG *) SFC0_BASE)
#define SFC1                ((struct SFC_REG *) SFC1_BASE)
#define ICACHE0             ((struct ICACHE_REG *) ICACHE0_BASE)
#define DCACHE0             ((struct DCACHE_REG *) DCACHE0_BASE)
#define VOP                 ((struct VOP_REG *) VOP_BASE)
#define AUDPWM              ((struct AUDPWM_REG *) AUDPWM_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define TIMER1              ((struct TIMER_REG *) TIMER1_BASE)
#define GRF                 ((struct GRF_REG *) GRF_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define PVTM                ((struct PVTM_REG *) PVTM_BASE)
#define TOUCH_SENSOR        ((struct TOUCH_SENSOR_REG *) TOUCH_SENSOR_BASE)
#define I2S0                ((struct I2S_REG *) I2S0_BASE)
#define I2S1                ((struct I2S_REG *) I2S1_BASE)
#define PDM                 ((struct PDM_REG *) PDM_BASE)
#define VAD                 ((struct VAD_REG *) VAD_BASE)
#define LPW_SYSBUS          ((struct LPW_SYSBUS_REG *) LPW_SYSBUS_BASE)
#define LPW_PBUS            ((struct LPW_PBUS_REG *) LPW_PBUS_BASE)
#define VIP                 ((struct VIP_REG *) VIP_BASE)
#define SDMMC               ((struct SDMMC_REG *) SDMMC_BASE)
#define CRYPTO              ((struct CRYPTO_REG *) CRYPTO_BASE)
#define SPI2APB             ((struct SPI2APB_REG *) SPI2APB_BASE)

#define IS_SARADC_INSTANCE(instance) ((instance) == SARADC)
#define IS_DMA_INSTANCE(instance) ((instance) == DMA)
#define IS_VOP_INSTANCE(instance) ((instance) == VOP)
#define IS_AUDPWM_INSTANCE(instance) ((instance) == AUDPWM)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_GRF_INSTANCE(instance) ((instance) == GRF)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_PVTM_INSTANCE(instance) ((instance) == PVTM)
#define IS_TOUCH_SENSOR_INSTANCE(instance) ((instance) == TOUCH_SENSOR)
#define IS_PDM_INSTANCE(instance) ((instance) == PDM)
#define IS_VAD_INSTANCE(instance) ((instance) == VAD)
#define IS_LPW_SYSBUS_INSTANCE(instance) ((instance) == LPW_SYSBUS)
#define IS_LPW_PBUS_INSTANCE(instance) ((instance) == LPW_PBUS)
#define IS_VIP_INSTANCE(instance) ((instance) == VIP)
#define IS_SDMMC_INSTANCE(instance) ((instance) == SDMMC)
#define IS_CRYPTO_INSTANCE(instance) ((instance) == CRYPTO)
#define IS_SPI2APB_INSTANCE(instance) ((instance) == SPI2APB)
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1))
#define IS_WDT_INSTANCE(instance) (((instance) == WDT0) || ((instance) == WDT1) || ((instance) == WDT2))
#define IS_I2C_INSTANCE(instance) (((instance) == I2C0) || ((instance) == I2C1) || ((instance) == I2C2))
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2))
#define IS_PWM_INSTANCE(instance) (((instance) == PWM0) || ((instance) == PWM1) || ((instance) == PWM2))
#define IS_SPI_INSTANCE(instance) (((instance) == SPI0) || ((instance) == SPI1))
#define IS_EFUSE_CTL_INSTANCE(instance) ((instance) == EFUSE_CTL0)
#define IS_MBOX_INSTANCE(instance) (((instance) == MBOX0) || ((instance) == MBOX1))
#define IS_SFC_INSTANCE(instance) (((instance) == SFC0) || ((instance) == SFC1))
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE0)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE0)
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1))
#define IS_I2S_INSTANCE(instance) (((instance) == I2S0) || ((instance) == I2S1))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/*****************************************TIMER******************************************/
/* LOAD_COUNT0 */
#define TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_SHIFT          (0U)
#define TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_MASK           (0xFFFFFFFFU << TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_SHIFT)   /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_SHIFT          (0U)
#define TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_MASK           (0xFFFFFFFFU << TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_SHIFT)   /* 0xFFFFFFFF */
/* CURRENT_VALUE0 */
#define TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_SHIFT    (0U)
#define TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_MASK     (0xFFFFFFFFU << TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_SHIFT) /* 0xFFFFFFFF */
/* CURRENT_VALUE1 */
#define TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_SHIFT     (0U)
#define TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_MASK      (0xFFFFFFFFU << TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* CONTROLREG */
#define TIMER_CONTROLREG_TIMER_ENABLE_SHIFT                (0U)
#define TIMER_CONTROLREG_TIMER_ENABLE_MASK                 (0x1U << TIMER_CONTROLREG_TIMER_ENABLE_SHIFT)                /* 0x00000001 */
#define TIMER_CONTROLREG_TIMER_MODE_SHIFT                  (1U)
#define TIMER_CONTROLREG_TIMER_MODE_MASK                   (0x1U << TIMER_CONTROLREG_TIMER_MODE_SHIFT)                  /* 0x00000002 */
#define TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT              (2U)
#define TIMER_CONTROLREG_TIMER_INT_MASK_MASK               (0x1U << TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT)              /* 0x00000004 */
/* INTSTATUS */
#define TIMER_INTSTATUS_INTSTATUS_SHIFT                    (0U)
#define TIMER_INTSTATUS_INTSTATUS_MASK                     (0x1U << TIMER_INTSTATUS_INTSTATUS_SHIFT)                    /* 0x00000001 */
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
/*************************************RKI2C_20180130*************************************/
/* CON */
#define RKI2C_20180130_CON_I2C_EN_SHIFT                    (0U)
#define RKI2C_20180130_CON_I2C_EN_MASK                     (0x1U << RKI2C_20180130_CON_I2C_EN_SHIFT)                    /* 0x00000001 */
#define RKI2C_20180130_CON_I2C_MODE_SHIFT                  (1U)
#define RKI2C_20180130_CON_I2C_MODE_MASK                   (0x3U << RKI2C_20180130_CON_I2C_MODE_SHIFT)                  /* 0x00000006 */
#define RKI2C_20180130_CON_START_SHIFT                     (3U)
#define RKI2C_20180130_CON_START_MASK                      (0x1U << RKI2C_20180130_CON_START_SHIFT)                     /* 0x00000008 */
#define RKI2C_20180130_CON_STOP_SHIFT                      (4U)
#define RKI2C_20180130_CON_STOP_MASK                       (0x1U << RKI2C_20180130_CON_STOP_SHIFT)                      /* 0x00000010 */
#define RKI2C_20180130_CON_ACK_SHIFT                       (5U)
#define RKI2C_20180130_CON_ACK_MASK                        (0x1U << RKI2C_20180130_CON_ACK_SHIFT)                       /* 0x00000020 */
#define RKI2C_20180130_CON_ACT2NAK_SHIFT                   (6U)
#define RKI2C_20180130_CON_ACT2NAK_MASK                    (0x1U << RKI2C_20180130_CON_ACT2NAK_SHIFT)                   /* 0x00000040 */
#define RKI2C_20180130_CON_DATA_UPD_ST_SHIFT               (8U)
#define RKI2C_20180130_CON_DATA_UPD_ST_MASK                (0x7U << RKI2C_20180130_CON_DATA_UPD_ST_SHIFT)               /* 0x00000700 */
#define RKI2C_20180130_CON_START_SETUP_SHIFT               (12U)
#define RKI2C_20180130_CON_START_SETUP_MASK                (0x3U << RKI2C_20180130_CON_START_SETUP_SHIFT)               /* 0x00003000 */
#define RKI2C_20180130_CON_STOP_SETUP_SHIFT                (14U)
#define RKI2C_20180130_CON_STOP_SETUP_MASK                 (0x3U << RKI2C_20180130_CON_STOP_SETUP_SHIFT)                /* 0x0000C000 */
#define RKI2C_20180130_CON_VERSION_SHIFT                   (16U)
#define RKI2C_20180130_CON_VERSION_MASK                    (0xFFFFU << RKI2C_20180130_CON_VERSION_SHIFT)                /* 0xFFFF0000 */
/* CLKDIV */
#define RKI2C_20180130_CLKDIV_CLKDIVL_SHIFT                (0U)
#define RKI2C_20180130_CLKDIV_CLKDIVL_MASK                 (0xFFFFU << RKI2C_20180130_CLKDIV_CLKDIVL_SHIFT)             /* 0x0000FFFF */
#define RKI2C_20180130_CLKDIV_CLKDIVH_SHIFT                (16U)
#define RKI2C_20180130_CLKDIV_CLKDIVH_MASK                 (0xFFFFU << RKI2C_20180130_CLKDIV_CLKDIVH_SHIFT)             /* 0xFFFF0000 */
/* MRXADDR */
#define RKI2C_20180130_MRXADDR_SADDR_SHIFT                 (0U)
#define RKI2C_20180130_MRXADDR_SADDR_MASK                  (0xFFFFFFU << RKI2C_20180130_MRXADDR_SADDR_SHIFT)            /* 0x00FFFFFF */
#define RKI2C_20180130_MRXADDR_ADDLVLD_SHIFT               (24U)
#define RKI2C_20180130_MRXADDR_ADDLVLD_MASK                (0x1U << RKI2C_20180130_MRXADDR_ADDLVLD_SHIFT)               /* 0x01000000 */
#define RKI2C_20180130_MRXADDR_ADDMVLD_SHIFT               (25U)
#define RKI2C_20180130_MRXADDR_ADDMVLD_MASK                (0x1U << RKI2C_20180130_MRXADDR_ADDMVLD_SHIFT)               /* 0x02000000 */
#define RKI2C_20180130_MRXADDR_ADDHVLD_SHIFT               (26U)
#define RKI2C_20180130_MRXADDR_ADDHVLD_MASK                (0x1U << RKI2C_20180130_MRXADDR_ADDHVLD_SHIFT)               /* 0x04000000 */
/* MRXRADDR */
#define RKI2C_20180130_MRXRADDR_SRADDR_SHIFT               (0U)
#define RKI2C_20180130_MRXRADDR_SRADDR_MASK                (0xFFFFFFU << RKI2C_20180130_MRXRADDR_SRADDR_SHIFT)          /* 0x00FFFFFF */
#define RKI2C_20180130_MRXRADDR_SRADDLVLD_SHIFT            (24U)
#define RKI2C_20180130_MRXRADDR_SRADDLVLD_MASK             (0x1U << RKI2C_20180130_MRXRADDR_SRADDLVLD_SHIFT)            /* 0x01000000 */
#define RKI2C_20180130_MRXRADDR_SRADDMVLD_SHIFT            (25U)
#define RKI2C_20180130_MRXRADDR_SRADDMVLD_MASK             (0x1U << RKI2C_20180130_MRXRADDR_SRADDMVLD_SHIFT)            /* 0x02000000 */
#define RKI2C_20180130_MRXRADDR_SRADDHVLD_SHIFT            (26U)
#define RKI2C_20180130_MRXRADDR_SRADDHVLD_MASK             (0x1U << RKI2C_20180130_MRXRADDR_SRADDHVLD_SHIFT)            /* 0x04000000 */
/* MTXCNT */
#define RKI2C_20180130_MTXCNT_MTXCNT_SHIFT                 (0U)
#define RKI2C_20180130_MTXCNT_MTXCNT_MASK                  (0x3FU << RKI2C_20180130_MTXCNT_MTXCNT_SHIFT)                /* 0x0000003F */
/* MRXCNT */
#define RKI2C_20180130_MRXCNT_MRXCNT_SHIFT                 (0U)
#define RKI2C_20180130_MRXCNT_MRXCNT_MASK                  (0x3FU << RKI2C_20180130_MRXCNT_MRXCNT_SHIFT)                /* 0x0000003F */
/* IEN */
#define RKI2C_20180130_IEN_BTFIEN_SHIFT                    (0U)
#define RKI2C_20180130_IEN_BTFIEN_MASK                     (0x1U << RKI2C_20180130_IEN_BTFIEN_SHIFT)                    /* 0x00000001 */
#define RKI2C_20180130_IEN_BRFIEN_SHIFT                    (1U)
#define RKI2C_20180130_IEN_BRFIEN_MASK                     (0x1U << RKI2C_20180130_IEN_BRFIEN_SHIFT)                    /* 0x00000002 */
#define RKI2C_20180130_IEN_MBTFIEN_SHIFT                   (2U)
#define RKI2C_20180130_IEN_MBTFIEN_MASK                    (0x1U << RKI2C_20180130_IEN_MBTFIEN_SHIFT)                   /* 0x00000004 */
#define RKI2C_20180130_IEN_MBRFIEN_SHIFT                   (3U)
#define RKI2C_20180130_IEN_MBRFIEN_MASK                    (0x1U << RKI2C_20180130_IEN_MBRFIEN_SHIFT)                   /* 0x00000008 */
#define RKI2C_20180130_IEN_STARTIEN_SHIFT                  (4U)
#define RKI2C_20180130_IEN_STARTIEN_MASK                   (0x1U << RKI2C_20180130_IEN_STARTIEN_SHIFT)                  /* 0x00000010 */
#define RKI2C_20180130_IEN_STOPIEN_SHIFT                   (5U)
#define RKI2C_20180130_IEN_STOPIEN_MASK                    (0x1U << RKI2C_20180130_IEN_STOPIEN_SHIFT)                   /* 0x00000020 */
#define RKI2C_20180130_IEN_NAKRCVIEN_SHIFT                 (6U)
#define RKI2C_20180130_IEN_NAKRCVIEN_MASK                  (0x1U << RKI2C_20180130_IEN_NAKRCVIEN_SHIFT)                 /* 0x00000040 */
#define RKI2C_20180130_IEN_SLAVEHDSCLEN_SHIFT              (7U)
#define RKI2C_20180130_IEN_SLAVEHDSCLEN_MASK               (0x1U << RKI2C_20180130_IEN_SLAVEHDSCLEN_SHIFT)              /* 0x00000080 */
/* IPD */
#define RKI2C_20180130_IPD_BTFIPD_SHIFT                    (0U)
#define RKI2C_20180130_IPD_BTFIPD_MASK                     (0x1U << RKI2C_20180130_IPD_BTFIPD_SHIFT)                    /* 0x00000001 */
#define RKI2C_20180130_IPD_BRFIPD_SHIFT                    (1U)
#define RKI2C_20180130_IPD_BRFIPD_MASK                     (0x1U << RKI2C_20180130_IPD_BRFIPD_SHIFT)                    /* 0x00000002 */
#define RKI2C_20180130_IPD_MBTFIPD_SHIFT                   (2U)
#define RKI2C_20180130_IPD_MBTFIPD_MASK                    (0x1U << RKI2C_20180130_IPD_MBTFIPD_SHIFT)                   /* 0x00000004 */
#define RKI2C_20180130_IPD_MBRFIPD_SHIFT                   (3U)
#define RKI2C_20180130_IPD_MBRFIPD_MASK                    (0x1U << RKI2C_20180130_IPD_MBRFIPD_SHIFT)                   /* 0x00000008 */
#define RKI2C_20180130_IPD_STARTIPD_SHIFT                  (4U)
#define RKI2C_20180130_IPD_STARTIPD_MASK                   (0x1U << RKI2C_20180130_IPD_STARTIPD_SHIFT)                  /* 0x00000010 */
#define RKI2C_20180130_IPD_STOPIPD_SHIFT                   (5U)
#define RKI2C_20180130_IPD_STOPIPD_MASK                    (0x1U << RKI2C_20180130_IPD_STOPIPD_SHIFT)                   /* 0x00000020 */
#define RKI2C_20180130_IPD_NAKRCVIPD_SHIFT                 (6U)
#define RKI2C_20180130_IPD_NAKRCVIPD_MASK                  (0x1U << RKI2C_20180130_IPD_NAKRCVIPD_SHIFT)                 /* 0x00000040 */
#define RKI2C_20180130_IPD_SLAVEHDSCLIPD_SHIFT             (7U)
#define RKI2C_20180130_IPD_SLAVEHDSCLIPD_MASK              (0x1U << RKI2C_20180130_IPD_SLAVEHDSCLIPD_SHIFT)             /* 0x00000080 */
/* FCNT */
#define RKI2C_20180130_FCNT_FCNT_SHIFT                     (0U)
#define RKI2C_20180130_FCNT_FCNT_MASK                      (0x3FU << RKI2C_20180130_FCNT_FCNT_SHIFT)                    /* 0x0000003F */
/* SCL_OE_DB */
#define RKI2C_20180130_SCL_OE_DB_SCL_OE_DB_SHIFT           (0U)
#define RKI2C_20180130_SCL_OE_DB_SCL_OE_DB_MASK            (0xFFU << RKI2C_20180130_SCL_OE_DB_SCL_OE_DB_SHIFT)          /* 0x000000FF */
/* TXDATA0 */
#define RKI2C_20180130_TXDATA0_TXDATA0_SHIFT               (0U)
#define RKI2C_20180130_TXDATA0_TXDATA0_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA0_TXDATA0_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA1 */
#define RKI2C_20180130_TXDATA1_TXDATA1_SHIFT               (0U)
#define RKI2C_20180130_TXDATA1_TXDATA1_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA1_TXDATA1_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA2 */
#define RKI2C_20180130_TXDATA2_TXDATA2_SHIFT               (0U)
#define RKI2C_20180130_TXDATA2_TXDATA2_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA2_TXDATA2_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA3 */
#define RKI2C_20180130_TXDATA3_TXDATA3_SHIFT               (0U)
#define RKI2C_20180130_TXDATA3_TXDATA3_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA3_TXDATA3_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA4 */
#define RKI2C_20180130_TXDATA4_TXDATA4_SHIFT               (0U)
#define RKI2C_20180130_TXDATA4_TXDATA4_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA4_TXDATA4_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA5 */
#define RKI2C_20180130_TXDATA5_TXDATA5_SHIFT               (0U)
#define RKI2C_20180130_TXDATA5_TXDATA5_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA5_TXDATA5_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA6 */
#define RKI2C_20180130_TXDATA6_TXDATA6_SHIFT               (0U)
#define RKI2C_20180130_TXDATA6_TXDATA6_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA6_TXDATA6_SHIFT)        /* 0xFFFFFFFF */
/* TXDATA7 */
#define RKI2C_20180130_TXDATA7_TXDATA7_SHIFT               (0U)
#define RKI2C_20180130_TXDATA7_TXDATA7_MASK                (0xFFFFFFFFU << RKI2C_20180130_TXDATA7_TXDATA7_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA0 */
#define RKI2C_20180130_RXDATA0_RXDATA0_SHIFT               (0U)
#define RKI2C_20180130_RXDATA0_RXDATA0_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA0_RXDATA0_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA1 */
#define RKI2C_20180130_RXDATA1_RXDATA1_SHIFT               (0U)
#define RKI2C_20180130_RXDATA1_RXDATA1_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA1_RXDATA1_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA2 */
#define RKI2C_20180130_RXDATA2_RXDATA2_SHIFT               (0U)
#define RKI2C_20180130_RXDATA2_RXDATA2_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA2_RXDATA2_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA3 */
#define RKI2C_20180130_RXDATA3_RXDATA3_SHIFT               (0U)
#define RKI2C_20180130_RXDATA3_RXDATA3_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA3_RXDATA3_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA4 */
#define RKI2C_20180130_RXDATA4_RXDATA4_SHIFT               (0U)
#define RKI2C_20180130_RXDATA4_RXDATA4_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA4_RXDATA4_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA5 */
#define RKI2C_20180130_RXDATA5_RXDATA5_SHIFT               (0U)
#define RKI2C_20180130_RXDATA5_RXDATA5_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA5_RXDATA5_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA6 */
#define RKI2C_20180130_RXDATA6_RXDATA6_SHIFT               (0U)
#define RKI2C_20180130_RXDATA6_RXDATA6_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA6_RXDATA6_SHIFT)        /* 0xFFFFFFFF */
/* RXDATA7 */
#define RKI2C_20180130_RXDATA7_RXDATA7_SHIFT               (0U)
#define RKI2C_20180130_RXDATA7_RXDATA7_MASK                (0xFFFFFFFFU << RKI2C_20180130_RXDATA7_RXDATA7_SHIFT)        /* 0xFFFFFFFF */
/* ST */
#define RKI2C_20180130_ST_SDA_ST_SHIFT                     (0U)
#define RKI2C_20180130_ST_SDA_ST_MASK                      (0x1U << RKI2C_20180130_ST_SDA_ST_SHIFT)                     /* 0x00000001 */
#define RKI2C_20180130_ST_SCL_ST_SHIFT                     (1U)
#define RKI2C_20180130_ST_SCL_ST_MASK                      (0x1U << RKI2C_20180130_ST_SCL_ST_SHIFT)                     /* 0x00000002 */
/* DBGCTRL */
#define RKI2C_20180130_DBGCTRL_FLT_F_SHIFT                 (0U)
#define RKI2C_20180130_DBGCTRL_FLT_F_MASK                  (0xFU << RKI2C_20180130_DBGCTRL_FLT_F_SHIFT)                 /* 0x0000000F */
#define RKI2C_20180130_DBGCTRL_FLT_R_SHIFT                 (4U)
#define RKI2C_20180130_DBGCTRL_FLT_R_MASK                  (0xFU << RKI2C_20180130_DBGCTRL_FLT_R_SHIFT)                 /* 0x000000F0 */
#define RKI2C_20180130_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT       (8U)
#define RKI2C_20180130_DBGCTRL_SLV_HOLD_SCL_TH_MASK        (0xFU << RKI2C_20180130_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT)       /* 0x00000F00 */
#define RKI2C_20180130_DBGCTRL_FLT_EN_SHIFT                (12U)
#define RKI2C_20180130_DBGCTRL_FLT_EN_MASK                 (0x1U << RKI2C_20180130_DBGCTRL_FLT_EN_SHIFT)                /* 0x00001000 */
#define RKI2C_20180130_DBGCTRL_NAK_RELEASE_SCL_SHIFT       (13U)
#define RKI2C_20180130_DBGCTRL_NAK_RELEASE_SCL_MASK        (0x1U << RKI2C_20180130_DBGCTRL_NAK_RELEASE_SCL_SHIFT)       /* 0x00002000 */
#define RKI2C_20180130_DBGCTRL_H0_CHECK_SCL_SHIFT          (14U)
#define RKI2C_20180130_DBGCTRL_H0_CHECK_SCL_MASK           (0x1U << RKI2C_20180130_DBGCTRL_H0_CHECK_SCL_SHIFT)          /* 0x00004000 */
/******************************************UART******************************************/
/* RBR */
#define UART_RBR_DATA_INPUT_SHIFT                          (0U)
#define UART_RBR_DATA_INPUT_MASK                           (0xFFU << UART_RBR_DATA_INPUT_SHIFT)                         /* 0x000000FF */
/* THR */
#define UART_THR_DATA_OUTPUT_SHIFT                         (0U)
#define UART_THR_DATA_OUTPUT_MASK                          (0xFFU << UART_THR_DATA_OUTPUT_SHIFT)                        /* 0x000000FF */
/* DLL */
#define UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT                 (0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_MASK                  (0xFFU << UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT)                /* 0x000000FF */
/* DLH */
#define UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT                 (0U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_MASK                  (0xFFU << UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT)                /* 0x000000FF */
/* IER */
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT       (0U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_MASK        (0x1U << UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT)       /* 0x00000001 */
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT             (1U)
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_MASK              (0x1U << UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT)             /* 0x00000002 */
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT          (2U)
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_MASK           (0x1U << UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT)          /* 0x00000004 */
#define UART_IER_MODEM_STATUS_INT_EN_SHIFT                 (3U)
#define UART_IER_MODEM_STATUS_INT_EN_MASK                  (0x1U << UART_IER_MODEM_STATUS_INT_EN_SHIFT)                 /* 0x00000008 */
#define UART_IER_PROG_THRE_INT_EN_SHIFT                    (7U)
#define UART_IER_PROG_THRE_INT_EN_MASK                     (0x1U << UART_IER_PROG_THRE_INT_EN_SHIFT)                    /* 0x00000080 */
/* IIR */
#define UART_IIR_INT_ID_SHIFT                              (0U)
#define UART_IIR_INT_ID_MASK                               (0xFU << UART_IIR_INT_ID_SHIFT)                              /* 0x0000000F */
#define UART_IIR_FIFOS_EN_SHIFT                            (6U)
#define UART_IIR_FIFOS_EN_MASK                             (0x3U << UART_IIR_FIFOS_EN_SHIFT)                            /* 0x000000C0 */
/* FCR */
#define UART_FCR_FIFO_EN_SHIFT                             (0U)
#define UART_FCR_FIFO_EN_MASK                              (0x1U << UART_FCR_FIFO_EN_SHIFT)                             /* 0x00000001 */
#define UART_FCR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_FCR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_FCR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_FCR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_FCR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_FCR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
#define UART_FCR_DMA_MODE_SHIFT                            (3U)
#define UART_FCR_DMA_MODE_MASK                             (0x1U << UART_FCR_DMA_MODE_SHIFT)                            /* 0x00000008 */
#define UART_FCR_TX_EMPTY_TRIGGER_SHIFT                    (4U)
#define UART_FCR_TX_EMPTY_TRIGGER_MASK                     (0x3U << UART_FCR_TX_EMPTY_TRIGGER_SHIFT)                    /* 0x00000030 */
#define UART_FCR_RCVR_TRIGGER_SHIFT                        (6U)
#define UART_FCR_RCVR_TRIGGER_MASK                         (0x3U << UART_FCR_RCVR_TRIGGER_SHIFT)                        /* 0x000000C0 */
/* LCR */
#define UART_LCR_DATA_LENGTH_SEL_SHIFT                     (0U)
#define UART_LCR_DATA_LENGTH_SEL_MASK                      (0x3U << UART_LCR_DATA_LENGTH_SEL_SHIFT)                     /* 0x00000003 */
#define UART_LCR_STOP_BITS_NUM_SHIFT                       (2U)
#define UART_LCR_STOP_BITS_NUM_MASK                        (0x1U << UART_LCR_STOP_BITS_NUM_SHIFT)                       /* 0x00000004 */
#define UART_LCR_PARITY_EN_SHIFT                           (3U)
#define UART_LCR_PARITY_EN_MASK                            (0x1U << UART_LCR_PARITY_EN_SHIFT)                           /* 0x00000008 */
#define UART_LCR_EVEN_PARITY_SEL_SHIFT                     (4U)
#define UART_LCR_EVEN_PARITY_SEL_MASK                      (0x1U << UART_LCR_EVEN_PARITY_SEL_SHIFT)                     /* 0x00000010 */
#define UART_LCR_BREAK_CTRL_SHIFT                          (6U)
#define UART_LCR_BREAK_CTRL_MASK                           (0x1U << UART_LCR_BREAK_CTRL_SHIFT)                          /* 0x00000040 */
#define UART_LCR_DIV_LAT_ACCESS_SHIFT                      (7U)
#define UART_LCR_DIV_LAT_ACCESS_MASK                       (0x1U << UART_LCR_DIV_LAT_ACCESS_SHIFT)                      /* 0x00000080 */
/* MCR */
#define UART_MCR_DATA_TERMINAL_READY_SHIFT                 (0U)
#define UART_MCR_DATA_TERMINAL_READY_MASK                  (0x1U << UART_MCR_DATA_TERMINAL_READY_SHIFT)                 /* 0x00000001 */
#define UART_MCR_REQ_TO_SEND_SHIFT                         (1U)
#define UART_MCR_REQ_TO_SEND_MASK                          (0x1U << UART_MCR_REQ_TO_SEND_SHIFT)                         /* 0x00000002 */
#define UART_MCR_OUT1_SHIFT                                (2U)
#define UART_MCR_OUT1_MASK                                 (0x1U << UART_MCR_OUT1_SHIFT)                                /* 0x00000004 */
#define UART_MCR_OUT2_SHIFT                                (3U)
#define UART_MCR_OUT2_MASK                                 (0x1U << UART_MCR_OUT2_SHIFT)                                /* 0x00000008 */
#define UART_MCR_LOOPBACK_SHIFT                            (4U)
#define UART_MCR_LOOPBACK_MASK                             (0x1U << UART_MCR_LOOPBACK_SHIFT)                            /* 0x00000010 */
#define UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT                   (5U)
#define UART_MCR_AUTO_FLOW_CTRL_EN_MASK                    (0x1U << UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT)                   /* 0x00000020 */
#define UART_MCR_SIR_MODE_EN_SHIFT                         (6U)
#define UART_MCR_SIR_MODE_EN_MASK                          (0x1U << UART_MCR_SIR_MODE_EN_SHIFT)                         /* 0x00000040 */
/* LSR */
#define UART_LSR_DATA_READY_SHIFT                          (0U)
#define UART_LSR_DATA_READY_MASK                           (0x1U << UART_LSR_DATA_READY_SHIFT)                          /* 0x00000001 */
#define UART_LSR_OVERRUN_ERROR_SHIFT                       (1U)
#define UART_LSR_OVERRUN_ERROR_MASK                        (0x1U << UART_LSR_OVERRUN_ERROR_SHIFT)                       /* 0x00000002 */
#define UART_LSR_PARITY_EROR_SHIFT                         (2U)
#define UART_LSR_PARITY_EROR_MASK                          (0x1U << UART_LSR_PARITY_EROR_SHIFT)                         /* 0x00000004 */
#define UART_LSR_FRAMING_ERROR_SHIFT                       (3U)
#define UART_LSR_FRAMING_ERROR_MASK                        (0x1U << UART_LSR_FRAMING_ERROR_SHIFT)                       /* 0x00000008 */
#define UART_LSR_BREAK_INT_SHIFT                           (4U)
#define UART_LSR_BREAK_INT_MASK                            (0x1U << UART_LSR_BREAK_INT_SHIFT)                           /* 0x00000010 */
#define UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT                (5U)
#define UART_LSR_TRANS_HOLD_REG_EMPTY_MASK                 (0x1U << UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT)                /* 0x00000020 */
#define UART_LSR_TRANS_EMPTY_SHIFT                         (6U)
#define UART_LSR_TRANS_EMPTY_MASK                          (0x1U << UART_LSR_TRANS_EMPTY_SHIFT)                         /* 0x00000040 */
#define UART_LSR_RECEIVER_FIFO_ERROR_SHIFT                 (7U)
#define UART_LSR_RECEIVER_FIFO_ERROR_MASK                  (0x1U << UART_LSR_RECEIVER_FIFO_ERROR_SHIFT)                 /* 0x00000080 */
/* MSR */
#define UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT                 (0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_MASK                  (0x1U << UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT)                 /* 0x00000001 */
#define UART_MSR_DELTA_DATA_SET_READY_SHIFT                (1U)
#define UART_MSR_DELTA_DATA_SET_READY_MASK                 (0x1U << UART_MSR_DELTA_DATA_SET_READY_SHIFT)                /* 0x00000002 */
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT        (2U)
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_MASK         (0x1U << UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT)        /* 0x00000004 */
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT           (3U)
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_MASK            (0x1U << UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT)           /* 0x00000008 */
#define UART_MSR_CLEAR_TO_SEND_SHIFT                       (4U)
#define UART_MSR_CLEAR_TO_SEND_MASK                        (0x1U << UART_MSR_CLEAR_TO_SEND_SHIFT)                       /* 0x00000010 */
#define UART_MSR_DATA_SET_READY_SHIFT                      (5U)
#define UART_MSR_DATA_SET_READY_MASK                       (0x1U << UART_MSR_DATA_SET_READY_SHIFT)                      /* 0x00000020 */
#define UART_MSR_RING_INDICATOR_SHIFT                      (6U)
#define UART_MSR_RING_INDICATOR_MASK                       (0x1U << UART_MSR_RING_INDICATOR_SHIFT)                      /* 0x00000040 */
#define UART_MSR_DATA_CARRIOR_DETECT_SHIFT                 (7U)
#define UART_MSR_DATA_CARRIOR_DETECT_MASK                  (0x1U << UART_MSR_DATA_CARRIOR_DETECT_SHIFT)                 /* 0x00000080 */
/* SCR */
#define UART_SCR_TEMP_STORE_SPACE_SHIFT                    (0U)
#define UART_SCR_TEMP_STORE_SPACE_MASK                     (0xFFU << UART_SCR_TEMP_STORE_SPACE_SHIFT)                   /* 0x000000FF */
/* SRBR */
#define UART_SRBR_SHADOW_RBR_SHIFT                         (0U)
#define UART_SRBR_SHADOW_RBR_MASK                          (0xFFU << UART_SRBR_SHADOW_RBR_SHIFT)                        /* 0x000000FF */
/* STHR */
#define UART_STHR_SHADOW_THR_SHIFT                         (0U)
#define UART_STHR_SHADOW_THR_MASK                          (0xFFU << UART_STHR_SHADOW_THR_SHIFT)                        /* 0x000000FF */
/* FAR */
#define UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT                 (0U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_MASK                  (0x1U << UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT)                 /* 0x00000001 */
/* TFR */
#define UART_TFR_TRANS_FIFO_READ_SHIFT                     (0U)
#define UART_TFR_TRANS_FIFO_READ_MASK                      (0xFFU << UART_TFR_TRANS_FIFO_READ_SHIFT)                    /* 0x000000FF */
/* RFW */
#define UART_RFW_RECEIVE_FIFO_WRITE_SHIFT                  (0U)
#define UART_RFW_RECEIVE_FIFO_WRITE_MASK                   (0xFFU << UART_RFW_RECEIVE_FIFO_WRITE_SHIFT)                 /* 0x000000FF */
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT           (8U)
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_MASK            (0x1U << UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT)           /* 0x00000100 */
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT          (9U)
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_MASK           (0x1U << UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT)          /* 0x00000200 */
/* USR */
#define UART_USR_UART_BUSY_SHIFT                           (0U)
#define UART_USR_UART_BUSY_MASK                            (0x1U << UART_USR_UART_BUSY_SHIFT)                           /* 0x00000001 */
#define UART_USR_TRANS_FIFO_NOT_FULL_SHIFT                 (1U)
#define UART_USR_TRANS_FIFO_NOT_FULL_MASK                  (0x1U << UART_USR_TRANS_FIFO_NOT_FULL_SHIFT)                 /* 0x00000002 */
#define UART_USR_TRASN_FIFO_EMPTY_SHIFT                    (2U)
#define UART_USR_TRASN_FIFO_EMPTY_MASK                     (0x1U << UART_USR_TRASN_FIFO_EMPTY_SHIFT)                    /* 0x00000004 */
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT              (3U)
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_MASK               (0x1U << UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT)              /* 0x00000008 */
#define UART_USR_RECEIVE_FIFO_FULL_SHIFT                   (4U)
#define UART_USR_RECEIVE_FIFO_FULL_MASK                    (0x1U << UART_USR_RECEIVE_FIFO_FULL_SHIFT)                   /* 0x00000010 */
/* TFL */
#define UART_TFL_TRANS_FIFO_LEVEL_SHIFT                    (0U)
#define UART_TFL_TRANS_FIFO_LEVEL_MASK                     (0x1FU << UART_TFL_TRANS_FIFO_LEVEL_SHIFT)                   /* 0x0000001F */
/* RFL */
#define UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT                  (0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_MASK                   (0x1FU << UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT)                 /* 0x0000001F */
/* SRR */
#define UART_SRR_UART_RESET_SHIFT                          (0U)
#define UART_SRR_UART_RESET_MASK                           (0x1U << UART_SRR_UART_RESET_SHIFT)                          /* 0x00000001 */
#define UART_SRR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_SRR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_SRR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_SRR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_SRR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_SRR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
/* SRTS */
#define UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT                 (0U)
#define UART_SRTS_SHADOW_REQ_TO_SEND_MASK                  (0x1U << UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT)                 /* 0x00000001 */
/* SBCR */
#define UART_SBCR_SHADOW_BREAK_CTRL_SHIFT                  (0U)
#define UART_SBCR_SHADOW_BREAK_CTRL_MASK                   (0x1U << UART_SBCR_SHADOW_BREAK_CTRL_SHIFT)                  /* 0x00000001 */
/* SDMAM */
#define UART_SDMAM_SHADOW_DMA_MODE_SHIFT                   (0U)
#define UART_SDMAM_SHADOW_DMA_MODE_MASK                    (0x1U << UART_SDMAM_SHADOW_DMA_MODE_SHIFT)                   /* 0x00000001 */
/* SFE */
#define UART_SFE_SHADOW_FIFO_EN_SHIFT                      (0U)
#define UART_SFE_SHADOW_FIFO_EN_MASK                       (0x1U << UART_SFE_SHADOW_FIFO_EN_SHIFT)                      /* 0x00000001 */
/* SRT */
#define UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT                 (0U)
#define UART_SRT_SHADOW_RCVR_TRIGGER_MASK                  (0x1U << UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT)                 /* 0x00000001 */
/* STET */
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT            (0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_MASK             (0x1U << UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT)            /* 0x00000001 */
/* HTX */
#define UART_HTX_HALT_TX_EN_SHIFT                          (0U)
#define UART_HTX_HALT_TX_EN_MASK                           (0x1U << UART_HTX_HALT_TX_EN_SHIFT)                          /* 0x00000001 */
/* DMASA */
#define UART_DMASA_DMA_SOFTWARE_ACK_SHIFT                  (0U)
#define UART_DMASA_DMA_SOFTWARE_ACK_MASK                   (0x1U << UART_DMASA_DMA_SOFTWARE_ACK_SHIFT)                  /* 0x00000001 */
/* CPR */
#define UART_CPR_APB_DATA_WIDTH_SHIFT                      (0U)
#define UART_CPR_APB_DATA_WIDTH_MASK                       (0x3U << UART_CPR_APB_DATA_WIDTH_SHIFT)                      /* 0x00000003 */
#define UART_CPR_AFCE_MODE_SHIFT                           (4U)
#define UART_CPR_AFCE_MODE_MASK                            (0x1U << UART_CPR_AFCE_MODE_SHIFT)                           /* 0x00000010 */
#define UART_CPR_THRE_MODE_SHIFT                           (5U)
#define UART_CPR_THRE_MODE_MASK                            (0x1U << UART_CPR_THRE_MODE_SHIFT)                           /* 0x00000020 */
#define UART_CPR_SIR_MODE_SHIFT                            (6U)
#define UART_CPR_SIR_MODE_MASK                             (0x1U << UART_CPR_SIR_MODE_SHIFT)                            /* 0x00000040 */
#define UART_CPR_SIR_LP_MODE_SHIFT                         (7U)
#define UART_CPR_SIR_LP_MODE_MASK                          (0x1U << UART_CPR_SIR_LP_MODE_SHIFT)                         /* 0x00000080 */
#define UART_CPR_NEW_FEAT_SHIFT                            (8U)
#define UART_CPR_NEW_FEAT_MASK                             (0x1U << UART_CPR_NEW_FEAT_SHIFT)                            /* 0x00000100 */
#define UART_CPR_FIFO_ACCESS_SHIFT                         (9U)
#define UART_CPR_FIFO_ACCESS_MASK                          (0x1U << UART_CPR_FIFO_ACCESS_SHIFT)                         /* 0x00000200 */
#define UART_CPR_FIFO_STAT_SHIFT                           (10U)
#define UART_CPR_FIFO_STAT_MASK                            (0x1U << UART_CPR_FIFO_STAT_SHIFT)                           /* 0x00000400 */
#define UART_CPR_SHADOW_SHIFT                              (11U)
#define UART_CPR_SHADOW_MASK                               (0x1U << UART_CPR_SHADOW_SHIFT)                              /* 0x00000800 */
#define UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT             (12U)
#define UART_CPR_UART_ADD_ENCODED_PARAMS_MASK              (0x1U << UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT)             /* 0x00001000 */
#define UART_CPR_DMA_EXTRA_SHIFT                           (13U)
#define UART_CPR_DMA_EXTRA_MASK                            (0x1U << UART_CPR_DMA_EXTRA_SHIFT)                           /* 0x00002000 */
#define UART_CPR_FIFO_MODE_SHIFT                           (16U)
#define UART_CPR_FIFO_MODE_MASK                            (0xFFU << UART_CPR_FIFO_MODE_SHIFT)                          /* 0x00FF0000 */
/* UCV */
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
/*****************************************PWM_2******************************************/
/* PWM0_CNT */
#define PWM_2_PWM0_CNT_CNT_SHIFT                           (0U)
#define PWM_2_PWM0_CNT_CNT_MASK                            (0xFFFFFFFFU << PWM_2_PWM0_CNT_CNT_SHIFT)                    /* 0xFFFFFFFF */
/* PWM0_PERIOD_HPR */
#define PWM_2_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT             (0U)
#define PWM_2_PWM0_PERIOD_HPR_PERIOD_HPR_MASK              (0xFFFFFFFFU << PWM_2_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT)      /* 0xFFFFFFFF */
/* PWM0_DUTY_LPR */
#define PWM_2_PWM0_DUTY_LPR_DUTY_LPR_SHIFT                 (0U)
#define PWM_2_PWM0_DUTY_LPR_DUTY_LPR_MASK                  (0xFFFFFFFFU << PWM_2_PWM0_DUTY_LPR_DUTY_LPR_SHIFT)          /* 0xFFFFFFFF */
/* PWM0_CTRL */
#define PWM_2_PWM0_CTRL_PWM_EN_SHIFT                       (0U)
#define PWM_2_PWM0_CTRL_PWM_EN_MASK                        (0x1U << PWM_2_PWM0_CTRL_PWM_EN_SHIFT)                       /* 0x00000001 */
#define PWM_2_PWM0_CTRL_PWM_MODE_SHIFT                     (1U)
#define PWM_2_PWM0_CTRL_PWM_MODE_MASK                      (0x3U << PWM_2_PWM0_CTRL_PWM_MODE_SHIFT)                     /* 0x00000006 */
#define PWM_2_PWM0_CTRL_DUTY_POL_SHIFT                     (3U)
#define PWM_2_PWM0_CTRL_DUTY_POL_MASK                      (0x1U << PWM_2_PWM0_CTRL_DUTY_POL_SHIFT)                     /* 0x00000008 */
#define PWM_2_PWM0_CTRL_INACTIVE_POL_SHIFT                 (4U)
#define PWM_2_PWM0_CTRL_INACTIVE_POL_MASK                  (0x1U << PWM_2_PWM0_CTRL_INACTIVE_POL_SHIFT)                 /* 0x00000010 */
#define PWM_2_PWM0_CTRL_OUTPUT_MODE_SHIFT                  (5U)
#define PWM_2_PWM0_CTRL_OUTPUT_MODE_MASK                   (0x1U << PWM_2_PWM0_CTRL_OUTPUT_MODE_SHIFT)                  /* 0x00000020 */
#define PWM_2_PWM0_CTRL_CONLOCK_SHIFT                      (6U)
#define PWM_2_PWM0_CTRL_CONLOCK_MASK                       (0x1U << PWM_2_PWM0_CTRL_CONLOCK_SHIFT)                      /* 0x00000040 */
#define PWM_2_PWM0_CTRL_CH_CNT_EN_SHIFT                    (7U)
#define PWM_2_PWM0_CTRL_CH_CNT_EN_MASK                     (0x1U << PWM_2_PWM0_CTRL_CH_CNT_EN_SHIFT)                    /* 0x00000080 */
#define PWM_2_PWM0_CTRL_FORCE_CLK_EN_SHIFT                 (8U)
#define PWM_2_PWM0_CTRL_FORCE_CLK_EN_MASK                  (0x1U << PWM_2_PWM0_CTRL_FORCE_CLK_EN_SHIFT)                 /* 0x00000100 */
#define PWM_2_PWM0_CTRL_CLK_SEL_SHIFT                      (9U)
#define PWM_2_PWM0_CTRL_CLK_SEL_MASK                       (0x1U << PWM_2_PWM0_CTRL_CLK_SEL_SHIFT)                      /* 0x00000200 */
#define PWM_2_PWM0_CTRL_PRESCALE_SHIFT                     (12U)
#define PWM_2_PWM0_CTRL_PRESCALE_MASK                      (0x7U << PWM_2_PWM0_CTRL_PRESCALE_SHIFT)                     /* 0x00007000 */
#define PWM_2_PWM0_CTRL_SCALE_SHIFT                        (16U)
#define PWM_2_PWM0_CTRL_SCALE_MASK                         (0xFFU << PWM_2_PWM0_CTRL_SCALE_SHIFT)                       /* 0x00FF0000 */
#define PWM_2_PWM0_CTRL_RPT_SHIFT                          (24U)
#define PWM_2_PWM0_CTRL_RPT_MASK                           (0xFFU << PWM_2_PWM0_CTRL_RPT_SHIFT)                         /* 0xFF000000 */
/* PWM1_CNT */
#define PWM_2_PWM1_CNT_CNT_SHIFT                           (0U)
#define PWM_2_PWM1_CNT_CNT_MASK                            (0xFFFFFFFFU << PWM_2_PWM1_CNT_CNT_SHIFT)                    /* 0xFFFFFFFF */
/* PWM1_PERIOD_HPR */
#define PWM_2_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT             (0U)
#define PWM_2_PWM1_PERIOD_HPR_PERIOD_HPR_MASK              (0xFFFFFFFFU << PWM_2_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT)      /* 0xFFFFFFFF */
/* PWM1_DUTY_LPR */
#define PWM_2_PWM1_DUTY_LPR_DUTY_LPR_SHIFT                 (0U)
#define PWM_2_PWM1_DUTY_LPR_DUTY_LPR_MASK                  (0xFFFFFFFFU << PWM_2_PWM1_DUTY_LPR_DUTY_LPR_SHIFT)          /* 0xFFFFFFFF */
/* PWM1_CTRL */
#define PWM_2_PWM1_CTRL_PWM_EN_SHIFT                       (0U)
#define PWM_2_PWM1_CTRL_PWM_EN_MASK                        (0x1U << PWM_2_PWM1_CTRL_PWM_EN_SHIFT)                       /* 0x00000001 */
#define PWM_2_PWM1_CTRL_PWM_MODE_SHIFT                     (1U)
#define PWM_2_PWM1_CTRL_PWM_MODE_MASK                      (0x3U << PWM_2_PWM1_CTRL_PWM_MODE_SHIFT)                     /* 0x00000006 */
#define PWM_2_PWM1_CTRL_DUTY_POL_SHIFT                     (3U)
#define PWM_2_PWM1_CTRL_DUTY_POL_MASK                      (0x1U << PWM_2_PWM1_CTRL_DUTY_POL_SHIFT)                     /* 0x00000008 */
#define PWM_2_PWM1_CTRL_INACTIVE_POL_SHIFT                 (4U)
#define PWM_2_PWM1_CTRL_INACTIVE_POL_MASK                  (0x1U << PWM_2_PWM1_CTRL_INACTIVE_POL_SHIFT)                 /* 0x00000010 */
#define PWM_2_PWM1_CTRL_OUTPUT_MODE_SHIFT                  (5U)
#define PWM_2_PWM1_CTRL_OUTPUT_MODE_MASK                   (0x1U << PWM_2_PWM1_CTRL_OUTPUT_MODE_SHIFT)                  /* 0x00000020 */
#define PWM_2_PWM1_CTRL_CONLOCK_SHIFT                      (6U)
#define PWM_2_PWM1_CTRL_CONLOCK_MASK                       (0x1U << PWM_2_PWM1_CTRL_CONLOCK_SHIFT)                      /* 0x00000040 */
#define PWM_2_PWM1_CTRL_CH_CNT_EN_SHIFT                    (7U)
#define PWM_2_PWM1_CTRL_CH_CNT_EN_MASK                     (0x1U << PWM_2_PWM1_CTRL_CH_CNT_EN_SHIFT)                    /* 0x00000080 */
#define PWM_2_PWM1_CTRL_FORCE_CLK_EN_SHIFT                 (8U)
#define PWM_2_PWM1_CTRL_FORCE_CLK_EN_MASK                  (0x1U << PWM_2_PWM1_CTRL_FORCE_CLK_EN_SHIFT)                 /* 0x00000100 */
#define PWM_2_PWM1_CTRL_CLK_SEL_SHIFT                      (9U)
#define PWM_2_PWM1_CTRL_CLK_SEL_MASK                       (0x1U << PWM_2_PWM1_CTRL_CLK_SEL_SHIFT)                      /* 0x00000200 */
#define PWM_2_PWM1_CTRL_PRESCALE_SHIFT                     (12U)
#define PWM_2_PWM1_CTRL_PRESCALE_MASK                      (0x7U << PWM_2_PWM1_CTRL_PRESCALE_SHIFT)                     /* 0x00007000 */
#define PWM_2_PWM1_CTRL_SCALE_SHIFT                        (16U)
#define PWM_2_PWM1_CTRL_SCALE_MASK                         (0xFFU << PWM_2_PWM1_CTRL_SCALE_SHIFT)                       /* 0x00FF0000 */
#define PWM_2_PWM1_CTRL_RPT_SHIFT                          (24U)
#define PWM_2_PWM1_CTRL_RPT_MASK                           (0xFFU << PWM_2_PWM1_CTRL_RPT_SHIFT)                         /* 0xFF000000 */
/* PWM2_CNT */
#define PWM_2_PWM2_CNT_CNT_SHIFT                           (0U)
#define PWM_2_PWM2_CNT_CNT_MASK                            (0xFFFFFFFFU << PWM_2_PWM2_CNT_CNT_SHIFT)                    /* 0xFFFFFFFF */
/* PWM2_PERIOD_HPR */
#define PWM_2_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT             (0U)
#define PWM_2_PWM2_PERIOD_HPR_PERIOD_HPR_MASK              (0xFFFFFFFFU << PWM_2_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT)      /* 0xFFFFFFFF */
/* PWM2_DUTY_LPR */
#define PWM_2_PWM2_DUTY_LPR_DUTY_LPR_SHIFT                 (0U)
#define PWM_2_PWM2_DUTY_LPR_DUTY_LPR_MASK                  (0xFFFFFFFFU << PWM_2_PWM2_DUTY_LPR_DUTY_LPR_SHIFT)          /* 0xFFFFFFFF */
/* PWM2_CTRL */
#define PWM_2_PWM2_CTRL_PWM_EN_SHIFT                       (0U)
#define PWM_2_PWM2_CTRL_PWM_EN_MASK                        (0x1U << PWM_2_PWM2_CTRL_PWM_EN_SHIFT)                       /* 0x00000001 */
#define PWM_2_PWM2_CTRL_PWM_MODE_SHIFT                     (1U)
#define PWM_2_PWM2_CTRL_PWM_MODE_MASK                      (0x3U << PWM_2_PWM2_CTRL_PWM_MODE_SHIFT)                     /* 0x00000006 */
#define PWM_2_PWM2_CTRL_DUTY_POL_SHIFT                     (3U)
#define PWM_2_PWM2_CTRL_DUTY_POL_MASK                      (0x1U << PWM_2_PWM2_CTRL_DUTY_POL_SHIFT)                     /* 0x00000008 */
#define PWM_2_PWM2_CTRL_INACTIVE_POL_SHIFT                 (4U)
#define PWM_2_PWM2_CTRL_INACTIVE_POL_MASK                  (0x1U << PWM_2_PWM2_CTRL_INACTIVE_POL_SHIFT)                 /* 0x00000010 */
#define PWM_2_PWM2_CTRL_OUTPUT_MODE_SHIFT                  (5U)
#define PWM_2_PWM2_CTRL_OUTPUT_MODE_MASK                   (0x1U << PWM_2_PWM2_CTRL_OUTPUT_MODE_SHIFT)                  /* 0x00000020 */
#define PWM_2_PWM2_CTRL_CONLOCK_SHIFT                      (6U)
#define PWM_2_PWM2_CTRL_CONLOCK_MASK                       (0x1U << PWM_2_PWM2_CTRL_CONLOCK_SHIFT)                      /* 0x00000040 */
#define PWM_2_PWM2_CTRL_CH_CNT_EN_SHIFT                    (7U)
#define PWM_2_PWM2_CTRL_CH_CNT_EN_MASK                     (0x1U << PWM_2_PWM2_CTRL_CH_CNT_EN_SHIFT)                    /* 0x00000080 */
#define PWM_2_PWM2_CTRL_FORCE_CLK_EN_SHIFT                 (8U)
#define PWM_2_PWM2_CTRL_FORCE_CLK_EN_MASK                  (0x1U << PWM_2_PWM2_CTRL_FORCE_CLK_EN_SHIFT)                 /* 0x00000100 */
#define PWM_2_PWM2_CTRL_CLK_SEL_SHIFT                      (9U)
#define PWM_2_PWM2_CTRL_CLK_SEL_MASK                       (0x1U << PWM_2_PWM2_CTRL_CLK_SEL_SHIFT)                      /* 0x00000200 */
#define PWM_2_PWM2_CTRL_PRESCALE_SHIFT                     (12U)
#define PWM_2_PWM2_CTRL_PRESCALE_MASK                      (0x7U << PWM_2_PWM2_CTRL_PRESCALE_SHIFT)                     /* 0x00007000 */
#define PWM_2_PWM2_CTRL_SCALE_SHIFT                        (16U)
#define PWM_2_PWM2_CTRL_SCALE_MASK                         (0xFFU << PWM_2_PWM2_CTRL_SCALE_SHIFT)                       /* 0x00FF0000 */
#define PWM_2_PWM2_CTRL_RPT_SHIFT                          (24U)
#define PWM_2_PWM2_CTRL_RPT_MASK                           (0xFFU << PWM_2_PWM2_CTRL_RPT_SHIFT)                         /* 0xFF000000 */
/* PWM3_CNT */
#define PWM_2_PWM3_CNT_CNT_SHIFT                           (0U)
#define PWM_2_PWM3_CNT_CNT_MASK                            (0xFFFFFFFFU << PWM_2_PWM3_CNT_CNT_SHIFT)                    /* 0xFFFFFFFF */
/* PWM3_PERIOD_HPR */
#define PWM_2_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT             (0U)
#define PWM_2_PWM3_PERIOD_HPR_PERIOD_HPR_MASK              (0xFFFFFFFFU << PWM_2_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT)      /* 0xFFFFFFFF */
/* PWM3_DUTY_LPR */
#define PWM_2_PWM3_DUTY_LPR_DUTY_LPR_SHIFT                 (0U)
#define PWM_2_PWM3_DUTY_LPR_DUTY_LPR_MASK                  (0xFFFFFFFFU << PWM_2_PWM3_DUTY_LPR_DUTY_LPR_SHIFT)          /* 0xFFFFFFFF */
/* PWM3_CTRL */
#define PWM_2_PWM3_CTRL_PWM_EN_SHIFT                       (0U)
#define PWM_2_PWM3_CTRL_PWM_EN_MASK                        (0x1U << PWM_2_PWM3_CTRL_PWM_EN_SHIFT)                       /* 0x00000001 */
#define PWM_2_PWM3_CTRL_PWM_MODE_SHIFT                     (1U)
#define PWM_2_PWM3_CTRL_PWM_MODE_MASK                      (0x3U << PWM_2_PWM3_CTRL_PWM_MODE_SHIFT)                     /* 0x00000006 */
#define PWM_2_PWM3_CTRL_DUTY_POL_SHIFT                     (3U)
#define PWM_2_PWM3_CTRL_DUTY_POL_MASK                      (0x1U << PWM_2_PWM3_CTRL_DUTY_POL_SHIFT)                     /* 0x00000008 */
#define PWM_2_PWM3_CTRL_INACTIVE_POL_SHIFT                 (4U)
#define PWM_2_PWM3_CTRL_INACTIVE_POL_MASK                  (0x1U << PWM_2_PWM3_CTRL_INACTIVE_POL_SHIFT)                 /* 0x00000010 */
#define PWM_2_PWM3_CTRL_OUTPUT_MODE_SHIFT                  (5U)
#define PWM_2_PWM3_CTRL_OUTPUT_MODE_MASK                   (0x1U << PWM_2_PWM3_CTRL_OUTPUT_MODE_SHIFT)                  /* 0x00000020 */
#define PWM_2_PWM3_CTRL_CONLOCK_SHIFT                      (6U)
#define PWM_2_PWM3_CTRL_CONLOCK_MASK                       (0x1U << PWM_2_PWM3_CTRL_CONLOCK_SHIFT)                      /* 0x00000040 */
#define PWM_2_PWM3_CTRL_CH_CNT_EN_SHIFT                    (7U)
#define PWM_2_PWM3_CTRL_CH_CNT_EN_MASK                     (0x1U << PWM_2_PWM3_CTRL_CH_CNT_EN_SHIFT)                    /* 0x00000080 */
#define PWM_2_PWM3_CTRL_FORCE_CLK_EN_SHIFT                 (8U)
#define PWM_2_PWM3_CTRL_FORCE_CLK_EN_MASK                  (0x1U << PWM_2_PWM3_CTRL_FORCE_CLK_EN_SHIFT)                 /* 0x00000100 */
#define PWM_2_PWM3_CTRL_CLK_SEL_SHIFT                      (9U)
#define PWM_2_PWM3_CTRL_CLK_SEL_MASK                       (0x1U << PWM_2_PWM3_CTRL_CLK_SEL_SHIFT)                      /* 0x00000200 */
#define PWM_2_PWM3_CTRL_PRESCALE_SHIFT                     (12U)
#define PWM_2_PWM3_CTRL_PRESCALE_MASK                      (0x7U << PWM_2_PWM3_CTRL_PRESCALE_SHIFT)                     /* 0x00007000 */
#define PWM_2_PWM3_CTRL_SCALE_SHIFT                        (16U)
#define PWM_2_PWM3_CTRL_SCALE_MASK                         (0xFFU << PWM_2_PWM3_CTRL_SCALE_SHIFT)                       /* 0x00FF0000 */
#define PWM_2_PWM3_CTRL_RPT_SHIFT                          (24U)
#define PWM_2_PWM3_CTRL_RPT_MASK                           (0xFFU << PWM_2_PWM3_CTRL_RPT_SHIFT)                         /* 0xFF000000 */
/* INTSTS */
#define PWM_2_INTSTS_CH0_INTSTS_SHIFT                      (0U)
#define PWM_2_INTSTS_CH0_INTSTS_MASK                       (0x1U << PWM_2_INTSTS_CH0_INTSTS_SHIFT)                      /* 0x00000001 */
#define PWM_2_INTSTS_CH1_INTSTS_SHIFT                      (1U)
#define PWM_2_INTSTS_CH1_INTSTS_MASK                       (0x1U << PWM_2_INTSTS_CH1_INTSTS_SHIFT)                      /* 0x00000002 */
#define PWM_2_INTSTS_CH2_INTSTS_SHIFT                      (2U)
#define PWM_2_INTSTS_CH2_INTSTS_MASK                       (0x1U << PWM_2_INTSTS_CH2_INTSTS_SHIFT)                      /* 0x00000004 */
#define PWM_2_INTSTS_CH3_INTSTS_SHIFT                      (3U)
#define PWM_2_INTSTS_CH3_INTSTS_MASK                       (0x1U << PWM_2_INTSTS_CH3_INTSTS_SHIFT)                      /* 0x00000008 */
#define PWM_2_INTSTS_CH0_PWR_INTSTS_SHIFT                  (4U)
#define PWM_2_INTSTS_CH0_PWR_INTSTS_MASK                   (0x1U << PWM_2_INTSTS_CH0_PWR_INTSTS_SHIFT)                  /* 0x00000010 */
#define PWM_2_INTSTS_CH1_PWR_INTSTS_SHIFT                  (5U)
#define PWM_2_INTSTS_CH1_PWR_INTSTS_MASK                   (0x1U << PWM_2_INTSTS_CH1_PWR_INTSTS_SHIFT)                  /* 0x00000020 */
#define PWM_2_INTSTS_CH2_PWR_INTSTS_SHIFT                  (6U)
#define PWM_2_INTSTS_CH2_PWR_INTSTS_MASK                   (0x1U << PWM_2_INTSTS_CH2_PWR_INTSTS_SHIFT)                  /* 0x00000040 */
#define PWM_2_INTSTS_CH3_PWR_INTSTS_SHIFT                  (7U)
#define PWM_2_INTSTS_CH3_PWR_INTSTS_MASK                   (0x1U << PWM_2_INTSTS_CH3_PWR_INTSTS_SHIFT)                  /* 0x00000080 */
#define PWM_2_INTSTS_CH0_POL_SHIFT                         (8U)
#define PWM_2_INTSTS_CH0_POL_MASK                          (0x1U << PWM_2_INTSTS_CH0_POL_SHIFT)                         /* 0x00000100 */
#define PWM_2_INTSTS_CH1_POL_SHIFT                         (9U)
#define PWM_2_INTSTS_CH1_POL_MASK                          (0x1U << PWM_2_INTSTS_CH1_POL_SHIFT)                         /* 0x00000200 */
#define PWM_2_INTSTS_CH2_POL_SHIFT                         (10U)
#define PWM_2_INTSTS_CH2_POL_MASK                          (0x1U << PWM_2_INTSTS_CH2_POL_SHIFT)                         /* 0x00000400 */
#define PWM_2_INTSTS_CH3_POL_SHIFT                         (11U)
#define PWM_2_INTSTS_CH3_POL_MASK                          (0x1U << PWM_2_INTSTS_CH3_POL_SHIFT)                         /* 0x00000800 */
/* INT_EN */
#define PWM_2_INT_EN_CH0_INT_EN_SHIFT                      (0U)
#define PWM_2_INT_EN_CH0_INT_EN_MASK                       (0x1U << PWM_2_INT_EN_CH0_INT_EN_SHIFT)                      /* 0x00000001 */
#define PWM_2_INT_EN_CH1_INT_EN_SHIFT                      (1U)
#define PWM_2_INT_EN_CH1_INT_EN_MASK                       (0x1U << PWM_2_INT_EN_CH1_INT_EN_SHIFT)                      /* 0x00000002 */
#define PWM_2_INT_EN_CH2_INT_EN_SHIFT                      (2U)
#define PWM_2_INT_EN_CH2_INT_EN_MASK                       (0x1U << PWM_2_INT_EN_CH2_INT_EN_SHIFT)                      /* 0x00000004 */
#define PWM_2_INT_EN_CH3_INT_EN_SHIFT                      (3U)
#define PWM_2_INT_EN_CH3_INT_EN_MASK                       (0x1U << PWM_2_INT_EN_CH3_INT_EN_SHIFT)                      /* 0x00000008 */
#define PWM_2_INT_EN_CH0_PWR_INT_EN_SHIFT                  (4U)
#define PWM_2_INT_EN_CH0_PWR_INT_EN_MASK                   (0x1U << PWM_2_INT_EN_CH0_PWR_INT_EN_SHIFT)                  /* 0x00000010 */
#define PWM_2_INT_EN_CH1_PWR_INT_EN_SHIFT                  (5U)
#define PWM_2_INT_EN_CH1_PWR_INT_EN_MASK                   (0x1U << PWM_2_INT_EN_CH1_PWR_INT_EN_SHIFT)                  /* 0x00000020 */
#define PWM_2_INT_EN_CH2_PWR_INT_EN_SHIFT                  (6U)
#define PWM_2_INT_EN_CH2_PWR_INT_EN_MASK                   (0x1U << PWM_2_INT_EN_CH2_PWR_INT_EN_SHIFT)                  /* 0x00000040 */
#define PWM_2_INT_EN_CH3_PWR_INT_EN_SHIFT                  (7U)
#define PWM_2_INT_EN_CH3_PWR_INT_EN_MASK                   (0x1U << PWM_2_INT_EN_CH3_PWR_INT_EN_SHIFT)                  /* 0x00000080 */
/* FIFO_CTRL */
#define PWM_2_FIFO_CTRL_FIFO_MODE_SEL_SHIFT                (0U)
#define PWM_2_FIFO_CTRL_FIFO_MODE_SEL_MASK                 (0x1U << PWM_2_FIFO_CTRL_FIFO_MODE_SEL_SHIFT)                /* 0x00000001 */
#define PWM_2_FIFO_CTRL_FULL_INT_EN_SHIFT                  (1U)
#define PWM_2_FIFO_CTRL_FULL_INT_EN_MASK                   (0x1U << PWM_2_FIFO_CTRL_FULL_INT_EN_SHIFT)                  /* 0x00000002 */
#define PWM_2_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT              (2U)
#define PWM_2_FIFO_CTRL_OVERFLOW_INT_EN_MASK               (0x1U << PWM_2_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT)              /* 0x00000004 */
#define PWM_2_FIFO_CTRL_WATERMARK_INT_EN_SHIFT             (3U)
#define PWM_2_FIFO_CTRL_WATERMARK_INT_EN_MASK              (0x1U << PWM_2_FIFO_CTRL_WATERMARK_INT_EN_SHIFT)             /* 0x00000008 */
#define PWM_2_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT        (4U)
#define PWM_2_FIFO_CTRL_ALMOST_FULL_WATERMARK_MASK         (0x7U << PWM_2_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT)        /* 0x00000070 */
#define PWM_2_FIFO_CTRL_DMA_MODE_EN_SHIFT                  (8U)
#define PWM_2_FIFO_CTRL_DMA_MODE_EN_MASK                   (0x1U << PWM_2_FIFO_CTRL_DMA_MODE_EN_SHIFT)                  /* 0x00000100 */
#define PWM_2_FIFO_CTRL_TIMEOUT_EN_SHIFT                   (9U)
#define PWM_2_FIFO_CTRL_TIMEOUT_EN_MASK                    (0x1U << PWM_2_FIFO_CTRL_TIMEOUT_EN_SHIFT)                   /* 0x00000200 */
#define PWM_2_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT                (10U)
#define PWM_2_FIFO_CTRL_DMA_CH_SEL_EN_MASK                 (0x1U << PWM_2_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT)                /* 0x00000400 */
#define PWM_2_FIFO_CTRL_DMA_CH_SEL_SHIFT                   (12U)
#define PWM_2_FIFO_CTRL_DMA_CH_SEL_MASK                    (0x3U << PWM_2_FIFO_CTRL_DMA_CH_SEL_SHIFT)                   /* 0x00003000 */
/* FIFO_INTSTS */
#define PWM_2_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT           (0U)
#define PWM_2_FIFO_INTSTS_FIFO_FULL_INTSTS_MASK            (0x1U << PWM_2_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT)           /* 0x00000001 */
#define PWM_2_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT       (1U)
#define PWM_2_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_MASK        (0x1U << PWM_2_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT)       /* 0x00000002 */
#define PWM_2_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT (2U)
#define PWM_2_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_MASK  (0x1U << PWM_2_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT) /* 0x00000004 */
#define PWM_2_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT            (3U)
#define PWM_2_FIFO_INTSTS_TIMIEOUT_INTSTS_MASK             (0x1U << PWM_2_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT)            /* 0x00000008 */
#define PWM_2_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT          (4U)
#define PWM_2_FIFO_INTSTS_FIFO_EMPTY_STATUS_MASK           (0x1U << PWM_2_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT)          /* 0x00000010 */
/* FIFO_TOUTTHR */
#define PWM_2_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT         (0U)
#define PWM_2_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_MASK          (0xFFFFFU << PWM_2_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT)     /* 0x000FFFFF */
/* VERSION_ID */
#define PWM_2_VERSION_ID_SVN_VERSION_SHIFT                 (0U)
#define PWM_2_VERSION_ID_SVN_VERSION_MASK                  (0xFFFFU << PWM_2_VERSION_ID_SVN_VERSION_SHIFT)              /* 0x0000FFFF */
#define PWM_2_VERSION_ID_MINOR_VERSION_SHIFT               (16U)
#define PWM_2_VERSION_ID_MINOR_VERSION_MASK                (0xFFU << PWM_2_VERSION_ID_MINOR_VERSION_SHIFT)              /* 0x00FF0000 */
#define PWM_2_VERSION_ID_MAIN_VERSION_SHIFT                (24U)
#define PWM_2_VERSION_ID_MAIN_VERSION_MASK                 (0xFFU << PWM_2_VERSION_ID_MAIN_VERSION_SHIFT)               /* 0xFF000000 */
/* FIFO */
#define PWM_2_FIFO_CYCLE_CNT_SHIFT                         (0U)
#define PWM_2_FIFO_CYCLE_CNT_MASK                          (0x7FFFFFFFU << PWM_2_FIFO_CYCLE_CNT_SHIFT)                  /* 0x7FFFFFFF */
#define PWM_2_FIFO_POL_SHIFT                               (31U)
#define PWM_2_FIFO_POL_MASK                                (0x1U << PWM_2_FIFO_POL_SHIFT)                               /* 0x80000000 */
/* PWRMATCH_CTRL */
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT        (3U)
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_MASK         (0x1U << PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT)        /* 0x00000008 */
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT      (7U)
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_MASK       (0x1U << PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT)      /* 0x00000080 */
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT  (11U)
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_MASK   (0x1U << PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT)  /* 0x00000800 */
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT      (15U)
#define PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_MASK       (0x1U << PWM_2_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT)      /* 0x00008000 */
/* PWRMATCH_LPRE */
#define PWM_2_PWRMATCH_LPRE_CNT_MIN_SHIFT                  (0U)
#define PWM_2_PWRMATCH_LPRE_CNT_MIN_MASK                   (0xFFFFU << PWM_2_PWRMATCH_LPRE_CNT_MIN_SHIFT)               /* 0x0000FFFF */
#define PWM_2_PWRMATCH_LPRE_CNT_MAX_SHIFT                  (16U)
#define PWM_2_PWRMATCH_LPRE_CNT_MAX_MASK                   (0xFFFFU << PWM_2_PWRMATCH_LPRE_CNT_MAX_SHIFT)               /* 0xFFFF0000 */
/* PWRMATCH_HPRE */
#define PWM_2_PWRMATCH_HPRE_CNT_MIN_SHIFT                  (0U)
#define PWM_2_PWRMATCH_HPRE_CNT_MIN_MASK                   (0xFFFFU << PWM_2_PWRMATCH_HPRE_CNT_MIN_SHIFT)               /* 0x0000FFFF */
#define PWM_2_PWRMATCH_HPRE_CNT_MAX_SHIFT                  (16U)
#define PWM_2_PWRMATCH_HPRE_CNT_MAX_MASK                   (0xFFFFU << PWM_2_PWRMATCH_HPRE_CNT_MAX_SHIFT)               /* 0xFFFF0000 */
/* PWRMATCH_LD */
#define PWM_2_PWRMATCH_LD_CNT_MIN_SHIFT                    (0U)
#define PWM_2_PWRMATCH_LD_CNT_MIN_MASK                     (0xFFFFU << PWM_2_PWRMATCH_LD_CNT_MIN_SHIFT)                 /* 0x0000FFFF */
#define PWM_2_PWRMATCH_LD_CNT_MAX_SHIFT                    (16U)
#define PWM_2_PWRMATCH_LD_CNT_MAX_MASK                     (0xFFFFU << PWM_2_PWRMATCH_LD_CNT_MAX_SHIFT)                 /* 0xFFFF0000 */
/* PWRMATCH_HD_ZERO */
#define PWM_2_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT               (0U)
#define PWM_2_PWRMATCH_HD_ZERO_CNT_MIN_MASK                (0xFFFFU << PWM_2_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT)            /* 0x0000FFFF */
#define PWM_2_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT               (16U)
#define PWM_2_PWRMATCH_HD_ZERO_CNT_MAX_MASK                (0xFFFFU << PWM_2_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT)            /* 0xFFFF0000 */
/* PWRMATCH_HD_ONE */
#define PWM_2_PWRMATCH_HD_ONE_CNT_MIN_SHIFT                (0U)
#define PWM_2_PWRMATCH_HD_ONE_CNT_MIN_MASK                 (0xFFFFU << PWM_2_PWRMATCH_HD_ONE_CNT_MIN_SHIFT)             /* 0x0000FFFF */
#define PWM_2_PWRMATCH_HD_ONE_CNT_MAX_SHIFT                (16U)
#define PWM_2_PWRMATCH_HD_ONE_CNT_MAX_MASK                 (0xFFFFU << PWM_2_PWRMATCH_HD_ONE_CNT_MAX_SHIFT)             /* 0xFFFF0000 */
/* PWRMATCH_VALUE0 */
#define PWM_2_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE1 */
#define PWM_2_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE2 */
#define PWM_2_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE3 */
#define PWM_2_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE4 */
#define PWM_2_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE5 */
#define PWM_2_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE6 */
#define PWM_2_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE7 */
#define PWM_2_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE8 */
#define PWM_2_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE9 */
#define PWM_2_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_SHIFT     (0U)
#define PWM_2_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_MASK      (0xFFFFFFFFU << PWM_2_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE_SHIFT) /* 0xFFFFFFFF */
/* PWM3_PWRCAPTURE_VALUE */
#define PWM_2_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT (0U)
#define PWM_2_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_MASK (0xFFFFFFFFU << PWM_2_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT) /* 0xFFFFFFFF */
/* FILTER_CTRL */
#define PWM_2_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT    (0U)
#define PWM_2_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_MASK     (0x1U << PWM_2_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT)    /* 0x00000001 */
#define PWM_2_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT    (1U)
#define PWM_2_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_MASK     (0x1U << PWM_2_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT)    /* 0x00000002 */
#define PWM_2_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT    (2U)
#define PWM_2_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_MASK     (0x1U << PWM_2_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT)    /* 0x00000004 */
#define PWM_2_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT    (3U)
#define PWM_2_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_MASK     (0x1U << PWM_2_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT)    /* 0x00000008 */
#define PWM_2_FILTER_CTRL_FILTER_NUMBER_SHIFT              (4U)
#define PWM_2_FILTER_CTRL_FILTER_NUMBER_MASK               (0x1FFU << PWM_2_FILTER_CTRL_FILTER_NUMBER_SHIFT)            /* 0x00001FF0 */
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
#define SPI_IMR_TOIM_SHIFT                                 (5U)
#define SPI_IMR_TOIM_MASK                                  (0x1U << SPI_IMR_TOIM_SHIFT)                                 /* 0x00000020 */
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
#define SPI_ISR_TORIS_SHIFT                                (5U)
#define SPI_ISR_TORIS_MASK                                 (0x1U << SPI_ISR_TORIS_SHIFT)                                /* 0x00000020 */
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
#define SPI_RISR_TORIS_SHIFT                               (5U)
#define SPI_RISR_TORIS_MASK                                (0x1U << SPI_RISR_TORIS_SHIFT)                               /* 0x00000020 */
/* ICR */
#define SPI_ICR_CCI_SHIFT                                  (0U)
#define SPI_ICR_CCI_MASK                                   (0x1U << SPI_ICR_CCI_SHIFT)                                  /* 0x00000001 */
#define SPI_ICR_CRFUI_SHIFT                                (1U)
#define SPI_ICR_CRFUI_MASK                                 (0x1U << SPI_ICR_CRFUI_SHIFT)                                /* 0x00000002 */
#define SPI_ICR_CRFOI_SHIFT                                (2U)
#define SPI_ICR_CRFOI_MASK                                 (0x1U << SPI_ICR_CRFOI_SHIFT)                                /* 0x00000004 */
#define SPI_ICR_CTFOI_SHIFT                                (3U)
#define SPI_ICR_CTFOI_MASK                                 (0x1U << SPI_ICR_CTFOI_SHIFT)                                /* 0x00000008 */
#define SPI_ICR_CTOI_SHIFT                                 (4U)
#define SPI_ICR_CTOI_MASK                                  (0x1U << SPI_ICR_CTOI_SHIFT)                                 /* 0x00000010 */
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
/* TIMEOUT */
#define SPI_TIMEOUT_TOV_SHIFT                              (0U)
#define SPI_TIMEOUT_TOV_MASK                               (0xFFFFU << SPI_TIMEOUT_TOV_SHIFT)                           /* 0x0000FFFF */
#define SPI_TIMEOUT_TOE_SHIFT                              (16U)
#define SPI_TIMEOUT_TOE_MASK                               (0x1U << SPI_TIMEOUT_TOE_SHIFT)                              /* 0x00010000 */
/* BYPASS */
#define SPI_BYPASS_BYEN_SHIFT                              (0U)
#define SPI_BYPASS_BYEN_MASK                               (0x1U << SPI_BYPASS_BYEN_SHIFT)                              /* 0x00000001 */
#define SPI_BYPASS_FBM_SHIFT                               (1U)
#define SPI_BYPASS_FBM_MASK                                (0x1U << SPI_BYPASS_FBM_SHIFT)                               /* 0x00000002 */
#define SPI_BYPASS_END_SHIFT                               (2U)
#define SPI_BYPASS_END_MASK                                (0x1U << SPI_BYPASS_END_SHIFT)                               /* 0x00000004 */
#define SPI_BYPASS_RXCP_SHIFT                              (3U)
#define SPI_BYPASS_RXCP_MASK                               (0x1U << SPI_BYPASS_RXCP_SHIFT)                              /* 0x00000008 */
#define SPI_BYPASS_TXCP_SHIFT                              (4U)
#define SPI_BYPASS_TXCP_MASK                               (0x1U << SPI_BYPASS_TXCP_SHIFT)                              /* 0x00000010 */
/* TXDR */
#define SPI_TXDR_TXDR_SHIFT                                (0U)
#define SPI_TXDR_TXDR_MASK                                 (0xFFFFU << SPI_TXDR_TXDR_SHIFT)                             /* 0x0000FFFF */
/* RXDR */
#define SPI_RXDR_RXDR_SHIFT                                (0U)
#define SPI_RXDR_RXDR_MASK                                 (0xFFFFU << SPI_RXDR_RXDR_SHIFT)                             /* 0x0000FFFF */
/***************************************EFUSE_CTL****************************************/
/* MOD */
#define EFUSE_CTL_MOD_WORK_MOD_SHIFT                       (0U)
#define EFUSE_CTL_MOD_WORK_MOD_MASK                        (0x1U << EFUSE_CTL_MOD_WORK_MOD_SHIFT)                       /* 0x00000001 */
#define EFUSE_CTL_MOD_CSB_POL_SHIFT                        (1U)
#define EFUSE_CTL_MOD_CSB_POL_MASK                         (0x1U << EFUSE_CTL_MOD_CSB_POL_SHIFT)                        /* 0x00000002 */
#define EFUSE_CTL_MOD_PGENB_POL_SHIFT                      (2U)
#define EFUSE_CTL_MOD_PGENB_POL_MASK                       (0x1U << EFUSE_CTL_MOD_PGENB_POL_SHIFT)                      /* 0x00000004 */
#define EFUSE_CTL_MOD_LOAD_POL_SHIFT                       (3U)
#define EFUSE_CTL_MOD_LOAD_POL_MASK                        (0x1U << EFUSE_CTL_MOD_LOAD_POL_SHIFT)                       /* 0x00000008 */
#define EFUSE_CTL_MOD_STROBE_POL_SHIFT                     (4U)
#define EFUSE_CTL_MOD_STROBE_POL_MASK                      (0x1U << EFUSE_CTL_MOD_STROBE_POL_SHIFT)                     /* 0x00000010 */
#define EFUSE_CTL_MOD_PG_EN_USER_SHIFT                     (5U)
#define EFUSE_CTL_MOD_PG_EN_USER_MASK                      (0x1U << EFUSE_CTL_MOD_PG_EN_USER_SHIFT)                     /* 0x00000020 */
#define EFUSE_CTL_MOD_RD_ENB_USER_SHIFT                    (6U)
#define EFUSE_CTL_MOD_RD_ENB_USER_MASK                     (0x1U << EFUSE_CTL_MOD_RD_ENB_USER_SHIFT)                    /* 0x00000040 */
/* RD_MASK */
#define EFUSE_CTL_RD_MASK_RD_MASK_SHIFT                    (0U)
#define EFUSE_CTL_RD_MASK_RD_MASK_MASK                     (0xFFFFFFFFU << EFUSE_CTL_RD_MASK_RD_MASK_SHIFT)             /* 0xFFFFFFFF */
/* PG_MASK */
#define EFUSE_CTL_PG_MASK_PG_MASK_SHIFT                    (0U)
#define EFUSE_CTL_PG_MASK_PG_MASK_MASK                     (0xFFFFFFFFU << EFUSE_CTL_PG_MASK_PG_MASK_SHIFT)             /* 0xFFFFFFFF */
/* INT_CON */
#define EFUSE_CTL_INT_CON_FINISH_INT_EN_SHIFT              (0U)
#define EFUSE_CTL_INT_CON_FINISH_INT_EN_MASK               (0x1U << EFUSE_CTL_INT_CON_FINISH_INT_EN_SHIFT)              /* 0x00000001 */
#define EFUSE_CTL_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT        (7U)
#define EFUSE_CTL_INT_CON_AUTO_RD_MASK_INT_EN_MASK         (0x1U << EFUSE_CTL_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT)        /* 0x00000080 */
#define EFUSE_CTL_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT        (8U)
#define EFUSE_CTL_INT_CON_AUTO_PG_MASK_INT_EN_MASK         (0x1U << EFUSE_CTL_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT)        /* 0x00000100 */
#define EFUSE_CTL_INT_CON_USER_RD_MASK_INT_EN_SHIFT        (11U)
#define EFUSE_CTL_INT_CON_USER_RD_MASK_INT_EN_MASK         (0x1U << EFUSE_CTL_INT_CON_USER_RD_MASK_INT_EN_SHIFT)        /* 0x00000800 */
#define EFUSE_CTL_INT_CON_USER_PG_MASK_INT_EN_SHIFT        (12U)
#define EFUSE_CTL_INT_CON_USER_PG_MASK_INT_EN_MASK         (0x1U << EFUSE_CTL_INT_CON_USER_PG_MASK_INT_EN_SHIFT)        /* 0x00001000 */
/* INT_STATUS */
#define EFUSE_CTL_INT_STATUS_FINISH_INT_SHIFT              (0U)
#define EFUSE_CTL_INT_STATUS_FINISH_INT_MASK               (0x1U << EFUSE_CTL_INT_STATUS_FINISH_INT_SHIFT)              /* 0x00000001 */
#define EFUSE_CTL_INT_STATUS_AUTO_RD_MASK_INT_SHIFT        (7U)
#define EFUSE_CTL_INT_STATUS_AUTO_RD_MASK_INT_MASK         (0x1U << EFUSE_CTL_INT_STATUS_AUTO_RD_MASK_INT_SHIFT)        /* 0x00000080 */
#define EFUSE_CTL_INT_STATUS_AUTO_PG_MASK_INT_SHIFT        (8U)
#define EFUSE_CTL_INT_STATUS_AUTO_PG_MASK_INT_MASK         (0x1U << EFUSE_CTL_INT_STATUS_AUTO_PG_MASK_INT_SHIFT)        /* 0x00000100 */
#define EFUSE_CTL_INT_STATUS_USER_RD_MASK_INT_SHIFT        (11U)
#define EFUSE_CTL_INT_STATUS_USER_RD_MASK_INT_MASK         (0x1U << EFUSE_CTL_INT_STATUS_USER_RD_MASK_INT_SHIFT)        /* 0x00000800 */
#define EFUSE_CTL_INT_STATUS_USER_PG_MASK_INT_SHIFT        (12U)
#define EFUSE_CTL_INT_STATUS_USER_PG_MASK_INT_MASK         (0x1U << EFUSE_CTL_INT_STATUS_USER_PG_MASK_INT_SHIFT)        /* 0x00001000 */
/* USER_CTRL */
#define EFUSE_CTL_USER_CTRL_CSB_USER_SHIFT                 (0U)
#define EFUSE_CTL_USER_CTRL_CSB_USER_MASK                  (0x1U << EFUSE_CTL_USER_CTRL_CSB_USER_SHIFT)                 /* 0x00000001 */
#define EFUSE_CTL_USER_CTRL_STROBE_USER_SHIFT              (1U)
#define EFUSE_CTL_USER_CTRL_STROBE_USER_MASK               (0x1U << EFUSE_CTL_USER_CTRL_STROBE_USER_SHIFT)              /* 0x00000002 */
#define EFUSE_CTL_USER_CTRL_LOAD_USER_SHIFT                (2U)
#define EFUSE_CTL_USER_CTRL_LOAD_USER_MASK                 (0x1U << EFUSE_CTL_USER_CTRL_LOAD_USER_SHIFT)                /* 0x00000004 */
#define EFUSE_CTL_USER_CTRL_PGENB_USER_SHIFT               (3U)
#define EFUSE_CTL_USER_CTRL_PGENB_USER_MASK                (0x1U << EFUSE_CTL_USER_CTRL_PGENB_USER_SHIFT)               /* 0x00000008 */
#define EFUSE_CTL_USER_CTRL_MR1_SHIFT                      (4U)
#define EFUSE_CTL_USER_CTRL_MR1_MASK                       (0x1U << EFUSE_CTL_USER_CTRL_MR1_SHIFT)                      /* 0x00000010 */
#define EFUSE_CTL_USER_CTRL_MR0_SHIFT                      (5U)
#define EFUSE_CTL_USER_CTRL_MR0_MASK                       (0x1U << EFUSE_CTL_USER_CTRL_MR0_SHIFT)                      /* 0x00000020 */
#define EFUSE_CTL_USER_CTRL_ADDR_USER_SHIFT                (16U)
#define EFUSE_CTL_USER_CTRL_ADDR_USER_MASK                 (0x3FFU << EFUSE_CTL_USER_CTRL_ADDR_USER_SHIFT)              /* 0x03FF0000 */
/* DOUT */
#define EFUSE_CTL_DOUT_DOUT_SHIFT                          (0U)
#define EFUSE_CTL_DOUT_DOUT_MASK                           (0xFFFFFFFFU << EFUSE_CTL_DOUT_DOUT_SHIFT)                   /* 0xFFFFFFFF */
/* AUTO_CTRL */
#define EFUSE_CTL_AUTO_CTRL_ENB_SHIFT                      (0U)
#define EFUSE_CTL_AUTO_CTRL_ENB_MASK                       (0x1U << EFUSE_CTL_AUTO_CTRL_ENB_SHIFT)                      /* 0x00000001 */
#define EFUSE_CTL_AUTO_CTRL_PG_R_SHIFT                     (1U)
#define EFUSE_CTL_AUTO_CTRL_PG_R_MASK                      (0x1U << EFUSE_CTL_AUTO_CTRL_PG_R_SHIFT)                     /* 0x00000002 */
#define EFUSE_CTL_AUTO_CTRL_ADDR_AUTO_SHIFT                (16U)
#define EFUSE_CTL_AUTO_CTRL_ADDR_AUTO_MASK                 (0x3FFU << EFUSE_CTL_AUTO_CTRL_ADDR_AUTO_SHIFT)              /* 0x03FF0000 */
/* T_CSB_P */
#define EFUSE_CTL_T_CSB_P_T_CSB_P_L_SHIFT                  (0U)
#define EFUSE_CTL_T_CSB_P_T_CSB_P_L_MASK                   (0x7FFU << EFUSE_CTL_T_CSB_P_T_CSB_P_L_SHIFT)                /* 0x000007FF */
#define EFUSE_CTL_T_CSB_P_T_CSB_P_S_SHIFT                  (16U)
#define EFUSE_CTL_T_CSB_P_T_CSB_P_S_MASK                   (0xFU << EFUSE_CTL_T_CSB_P_T_CSB_P_S_SHIFT)                  /* 0x000F0000 */
/* T_PGENB_P */
#define EFUSE_CTL_T_PGENB_P_T_PGENB_P_L_SHIFT              (0U)
#define EFUSE_CTL_T_PGENB_P_T_PGENB_P_L_MASK               (0x7FFU << EFUSE_CTL_T_PGENB_P_T_PGENB_P_L_SHIFT)            /* 0x000007FF */
#define EFUSE_CTL_T_PGENB_P_T_PGENB_P_S_SHIFT              (16U)
#define EFUSE_CTL_T_PGENB_P_T_PGENB_P_S_MASK               (0xFU << EFUSE_CTL_T_PGENB_P_T_PGENB_P_S_SHIFT)              /* 0x000F0000 */
/* T_LOAD_P */
#define EFUSE_CTL_T_LOAD_P_T_LOAD_P_L_SHIFT                (0U)
#define EFUSE_CTL_T_LOAD_P_T_LOAD_P_L_MASK                 (0x7FFU << EFUSE_CTL_T_LOAD_P_T_LOAD_P_L_SHIFT)              /* 0x000007FF */
#define EFUSE_CTL_T_LOAD_P_T_LOAD_P_S_SHIFT                (16U)
#define EFUSE_CTL_T_LOAD_P_T_LOAD_P_S_MASK                 (0xFU << EFUSE_CTL_T_LOAD_P_T_LOAD_P_S_SHIFT)                /* 0x000F0000 */
/* T_ADDR_P */
#define EFUSE_CTL_T_ADDR_P_T_ADDR_P_L_SHIFT                (0U)
#define EFUSE_CTL_T_ADDR_P_T_ADDR_P_L_MASK                 (0x7FFU << EFUSE_CTL_T_ADDR_P_T_ADDR_P_L_SHIFT)              /* 0x000007FF */
#define EFUSE_CTL_T_ADDR_P_T_ADDR_P_S_SHIFT                (16U)
#define EFUSE_CTL_T_ADDR_P_T_ADDR_P_S_MASK                 (0xFU << EFUSE_CTL_T_ADDR_P_T_ADDR_P_S_SHIFT)                /* 0x000F0000 */
/* T_STROBE_P */
#define EFUSE_CTL_T_STROBE_P_T_STROBE_P_L_SHIFT            (0U)
#define EFUSE_CTL_T_STROBE_P_T_STROBE_P_L_MASK             (0x7FFU << EFUSE_CTL_T_STROBE_P_T_STROBE_P_L_SHIFT)          /* 0x000007FF */
#define EFUSE_CTL_T_STROBE_P_T_STROBE_P_S_SHIFT            (16U)
#define EFUSE_CTL_T_STROBE_P_T_STROBE_P_S_MASK             (0xFFU << EFUSE_CTL_T_STROBE_P_T_STROBE_P_S_SHIFT)           /* 0x00FF0000 */
/* T_CSB_R */
#define EFUSE_CTL_T_CSB_R_T_CSB_R_L_SHIFT                  (0U)
#define EFUSE_CTL_T_CSB_R_T_CSB_R_L_MASK                   (0x3FFU << EFUSE_CTL_T_CSB_R_T_CSB_R_L_SHIFT)                /* 0x000003FF */
#define EFUSE_CTL_T_CSB_R_T_CSB_R_S_SHIFT                  (16U)
#define EFUSE_CTL_T_CSB_R_T_CSB_R_S_MASK                   (0xFU << EFUSE_CTL_T_CSB_R_T_CSB_R_S_SHIFT)                  /* 0x000F0000 */
/* T_PGENB_R */
#define EFUSE_CTL_T_PGENB_R_T_PGENB_R_L_SHIFT              (0U)
#define EFUSE_CTL_T_PGENB_R_T_PGENB_R_L_MASK               (0x3FFU << EFUSE_CTL_T_PGENB_R_T_PGENB_R_L_SHIFT)            /* 0x000003FF */
#define EFUSE_CTL_T_PGENB_R_T_PGENB_R_S_SHIFT              (16U)
#define EFUSE_CTL_T_PGENB_R_T_PGENB_R_S_MASK               (0xFU << EFUSE_CTL_T_PGENB_R_T_PGENB_R_S_SHIFT)              /* 0x000F0000 */
/* T_LOAD_R */
#define EFUSE_CTL_T_LOAD_R_T_LOAD_R_L_SHIFT                (0U)
#define EFUSE_CTL_T_LOAD_R_T_LOAD_R_L_MASK                 (0x3FFU << EFUSE_CTL_T_LOAD_R_T_LOAD_R_L_SHIFT)              /* 0x000003FF */
#define EFUSE_CTL_T_LOAD_R_T_LOAD_R_S_SHIFT                (16U)
#define EFUSE_CTL_T_LOAD_R_T_LOAD_R_S_MASK                 (0xFU << EFUSE_CTL_T_LOAD_R_T_LOAD_R_S_SHIFT)                /* 0x000F0000 */
/* T_ADDR_R */
#define EFUSE_CTL_T_ADDR_R_T_ADDR_R_L_SHIFT                (0U)
#define EFUSE_CTL_T_ADDR_R_T_ADDR_R_L_MASK                 (0x3FFU << EFUSE_CTL_T_ADDR_R_T_ADDR_R_L_SHIFT)              /* 0x000003FF */
#define EFUSE_CTL_T_ADDR_R_T_ADDR_R_S_SHIFT                (16U)
#define EFUSE_CTL_T_ADDR_R_T_ADDR_R_S_MASK                 (0xFU << EFUSE_CTL_T_ADDR_R_T_ADDR_R_S_SHIFT)                /* 0x000F0000 */
/* T_STROBE_R */
#define EFUSE_CTL_T_STROBE_R_T_STROBE_R_L_SHIFT            (0U)
#define EFUSE_CTL_T_STROBE_R_T_STROBE_R_L_MASK             (0x3FFU << EFUSE_CTL_T_STROBE_R_T_STROBE_R_L_SHIFT)          /* 0x000003FF */
#define EFUSE_CTL_T_STROBE_R_T_STROBE_R_S_SHIFT            (16U)
#define EFUSE_CTL_T_STROBE_R_T_STROBE_R_S_MASK             (0xFU << EFUSE_CTL_T_STROBE_R_T_STROBE_R_S_SHIFT)            /* 0x000F0000 */
/* REVISION */
#define EFUSE_CTL_REVISION_REVISION_SHIFT                  (0U)
#define EFUSE_CTL_REVISION_REVISION_MASK                   (0xFFU << EFUSE_CTL_REVISION_REVISION_SHIFT)                 /* 0x000000FF */
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
/*****************************************SARADC*****************************************/
/* DATA */
#define SARADC_DATA_ADC_DATA_SHIFT                         (0U)
#define SARADC_DATA_ADC_DATA_MASK                          (0x3FFU << SARADC_DATA_ADC_DATA_SHIFT)                       /* 0x000003FF */
/* STAS */
#define SARADC_STAS_ADC_STATUS_SHIFT                       (0U)
#define SARADC_STAS_ADC_STATUS_MASK                        (0x1U << SARADC_STAS_ADC_STATUS_SHIFT)                       /* 0x00000001 */
/* CTRL */
#define SARADC_CTRL_ADC_INPUT_SRC_SEL_SHIFT                (0U)
#define SARADC_CTRL_ADC_INPUT_SRC_SEL_MASK                 (0x7U << SARADC_CTRL_ADC_INPUT_SRC_SEL_SHIFT)                /* 0x00000007 */
#define SARADC_CTRL_ADC_POWER_CTRL_SHIFT                   (3U)
#define SARADC_CTRL_ADC_POWER_CTRL_MASK                    (0x1U << SARADC_CTRL_ADC_POWER_CTRL_SHIFT)                   /* 0x00000008 */
#define SARADC_CTRL_INT_EN_SHIFT                           (5U)
#define SARADC_CTRL_INT_EN_MASK                            (0x1U << SARADC_CTRL_INT_EN_SHIFT)                           /* 0x00000020 */
#define SARADC_CTRL_INT_STATUS_SHIFT                       (6U)
#define SARADC_CTRL_INT_STATUS_MASK                        (0x1U << SARADC_CTRL_INT_STATUS_SHIFT)                       /* 0x00000040 */
/* DLY_PU_SOC */
#define SARADC_DLY_PU_SOC_DLY_PU_SOC_SHIFT                 (0U)
#define SARADC_DLY_PU_SOC_DLY_PU_SOC_MASK                  (0x3FU << SARADC_DLY_PU_SOC_DLY_PU_SOC_SHIFT)                /* 0x0000003F */
/******************************************DMA*******************************************/
/* SAR0 */
#define DMA_SAR0_SAR_SHIFT                                 (0U)
#define DMA_SAR0_SAR_MASK                                  (0xFFFFFFFFU << DMA_SAR0_SAR_SHIFT)                          /* 0xFFFFFFFF */
/* DAR0 */
#define DMA_DAR0_DAR_SHIFT                                 (0U)
#define DMA_DAR0_DAR_MASK                                  (0xFFFFFFFFU << DMA_DAR0_DAR_SHIFT)                          /* 0xFFFFFFFF */
/* LLP0 */
#define DMA_LLP0_LMS_SHIFT                                 (0U)
#define DMA_LLP0_LMS_MASK                                  (0x3U << DMA_LLP0_LMS_SHIFT)                                 /* 0x00000003 */
#define DMA_LLP0_LOC_SHIFT                                 (2U)
#define DMA_LLP0_LOC_MASK                                  (0x3FFFFFFFU << DMA_LLP0_LOC_SHIFT)                          /* 0xFFFFFFFC */
/* CTL0 */
#define DMA_CTL0_INT_EN_SHIFT                              (0U)
#define DMA_CTL0_INT_EN_MASK                               (0x1U << DMA_CTL0_INT_EN_SHIFT)                              /* 0x00000001 */
#define DMA_CTL0_DST_TR_WIDTH_SHIFT                        (1U)
#define DMA_CTL0_DST_TR_WIDTH_MASK                         (0x7U << DMA_CTL0_DST_TR_WIDTH_SHIFT)                        /* 0x0000000E */
#define DMA_CTL0_SRC_TR_WIDTH_SHIFT                        (4U)
#define DMA_CTL0_SRC_TR_WIDTH_MASK                         (0x7U << DMA_CTL0_SRC_TR_WIDTH_SHIFT)                        /* 0x00000070 */
#define DMA_CTL0_DINC_SHIFT                                (7U)
#define DMA_CTL0_DINC_MASK                                 (0x3U << DMA_CTL0_DINC_SHIFT)                                /* 0x00000180 */
#define DMA_CTL0_SINC_SHIFT                                (9U)
#define DMA_CTL0_SINC_MASK                                 (0x3U << DMA_CTL0_SINC_SHIFT)                                /* 0x00000600 */
#define DMA_CTL0_DEST_MSIZE_SHIFT                          (11U)
#define DMA_CTL0_DEST_MSIZE_MASK                           (0x7U << DMA_CTL0_DEST_MSIZE_SHIFT)                          /* 0x00003800 */
#define DMA_CTL0_SRC_MSIZE_SHIFT                           (14U)
#define DMA_CTL0_SRC_MSIZE_MASK                            (0x7U << DMA_CTL0_SRC_MSIZE_SHIFT)                           /* 0x0001C000 */
#define DMA_CTL0_SRC_GATHER_EN_SHIFT                       (17U)
#define DMA_CTL0_SRC_GATHER_EN_MASK                        (0x1U << DMA_CTL0_SRC_GATHER_EN_SHIFT)                       /* 0x00020000 */
#define DMA_CTL0_DST_SCATTER_EN_SHIFT                      (18U)
#define DMA_CTL0_DST_SCATTER_EN_MASK                       (0x1U << DMA_CTL0_DST_SCATTER_EN_SHIFT)                      /* 0x00040000 */
#define DMA_CTL0_TT_FC_SHIFT                               (20U)
#define DMA_CTL0_TT_FC_MASK                                (0x7U << DMA_CTL0_TT_FC_SHIFT)                               /* 0x00700000 */
#define DMA_CTL0_DMS_SHIFT                                 (23U)
#define DMA_CTL0_DMS_MASK                                  (0x3U << DMA_CTL0_DMS_SHIFT)                                 /* 0x01800000 */
#define DMA_CTL0_SMS_SHIFT                                 (25U)
#define DMA_CTL0_SMS_MASK                                  (0x3U << DMA_CTL0_SMS_SHIFT)                                 /* 0x06000000 */
#define DMA_CTL0_LLP_DST_EN_SHIFT                          (27U)
#define DMA_CTL0_LLP_DST_EN_MASK                           (0x1U << DMA_CTL0_LLP_DST_EN_SHIFT)                          /* 0x08000000 */
#define DMA_CTL0_LLP_SRC_EN_SHIFT                          (28U)
#define DMA_CTL0_LLP_SRC_EN_MASK                           (0x1U << DMA_CTL0_LLP_SRC_EN_SHIFT)                          /* 0x10000000 */
#define DMA_CTL0_BLOCK_TS_SHIFT                            (32U)
#define DMA_CTL0_BLOCK_TS_MASK                             (0xFFFU << DMA_CTL0_BLOCK_TS_SHIFT)                          /* 0xFFF00000000 */
#define DMA_CTL0_DONE_SHIFT                                (44U)
#define DMA_CTL0_DONE_MASK                                 (0x1U << DMA_CTL0_DONE_SHIFT)                                /* 0x100000000000 */
/* SSTAT0 */
#define DMA_SSTAT0_SSTAT_SHIFT                             (0U)
#define DMA_SSTAT0_SSTAT_MASK                              (0xFFFFFFFFU << DMA_SSTAT0_SSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* DSTAT0 */
#define DMA_DSTAT0_DSTAT_SHIFT                             (0U)
#define DMA_DSTAT0_DSTAT_MASK                              (0xFFFFFFFFU << DMA_DSTAT0_DSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* SSTATAR0 */
#define DMA_SSTATAR0_SSTATAR_SHIFT                         (0U)
#define DMA_SSTATAR0_SSTATAR_MASK                          (0xFFFFFFFFU << DMA_SSTATAR0_SSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* DSTATAR0 */
#define DMA_DSTATAR0_DSTATAR_SHIFT                         (0U)
#define DMA_DSTATAR0_DSTATAR_MASK                          (0xFFFFFFFFU << DMA_DSTATAR0_DSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* CFG0 */
#define DMA_CFG0_CH_PRIOR_SHIFT                            (5U)
#define DMA_CFG0_CH_PRIOR_MASK                             (0x7U << DMA_CFG0_CH_PRIOR_SHIFT)                            /* 0x000000E0 */
#define DMA_CFG0_CH_SUSP_SHIFT                             (8U)
#define DMA_CFG0_CH_SUSP_MASK                              (0x1U << DMA_CFG0_CH_SUSP_SHIFT)                             /* 0x00000100 */
#define DMA_CFG0_FIFO_EMPTY_SHIFT                          (9U)
#define DMA_CFG0_FIFO_EMPTY_MASK                           (0x1U << DMA_CFG0_FIFO_EMPTY_SHIFT)                          /* 0x00000200 */
#define DMA_CFG0_HS_SEL_DST_SHIFT                          (10U)
#define DMA_CFG0_HS_SEL_DST_MASK                           (0x1U << DMA_CFG0_HS_SEL_DST_SHIFT)                          /* 0x00000400 */
#define DMA_CFG0_HS_SEL_SRC_SHIFT                          (11U)
#define DMA_CFG0_HS_SEL_SRC_MASK                           (0x1U << DMA_CFG0_HS_SEL_SRC_SHIFT)                          /* 0x00000800 */
#define DMA_CFG0_LOCK_CH_L_SHIFT                           (12U)
#define DMA_CFG0_LOCK_CH_L_MASK                            (0x3U << DMA_CFG0_LOCK_CH_L_SHIFT)                           /* 0x00003000 */
#define DMA_CFG0_LOCK_B_L_SHIFT                            (14U)
#define DMA_CFG0_LOCK_B_L_MASK                             (0x3U << DMA_CFG0_LOCK_B_L_SHIFT)                            /* 0x0000C000 */
#define DMA_CFG0_LOCK_CH_SHIFT                             (16U)
#define DMA_CFG0_LOCK_CH_MASK                              (0x1U << DMA_CFG0_LOCK_CH_SHIFT)                             /* 0x00010000 */
#define DMA_CFG0_LOCK_B_SHIFT                              (17U)
#define DMA_CFG0_LOCK_B_MASK                               (0x1U << DMA_CFG0_LOCK_B_SHIFT)                              /* 0x00020000 */
#define DMA_CFG0_DST_HS_POL_SHIFT                          (18U)
#define DMA_CFG0_DST_HS_POL_MASK                           (0x1U << DMA_CFG0_DST_HS_POL_SHIFT)                          /* 0x00040000 */
#define DMA_CFG0_SRC_HS_POL_SHIFT                          (19U)
#define DMA_CFG0_SRC_HS_POL_MASK                           (0x1U << DMA_CFG0_SRC_HS_POL_SHIFT)                          /* 0x00080000 */
#define DMA_CFG0_MAX_ABRST_SHIFT                           (20U)
#define DMA_CFG0_MAX_ABRST_MASK                            (0x3FFU << DMA_CFG0_MAX_ABRST_SHIFT)                         /* 0x3FF00000 */
#define DMA_CFG0_RELOAD_SRC_SHIFT                          (30U)
#define DMA_CFG0_RELOAD_SRC_MASK                           (0x1U << DMA_CFG0_RELOAD_SRC_SHIFT)                          /* 0x40000000 */
#define DMA_CFG0_RELOAD_DST_SHIFT                          (31U)
#define DMA_CFG0_RELOAD_DST_MASK                           (0x1U << DMA_CFG0_RELOAD_DST_SHIFT)                          /* 0x80000000 */
#define DMA_CFG0_FCMODE_SHIFT                              (32U)
#define DMA_CFG0_FCMODE_MASK                               (0x1U << DMA_CFG0_FCMODE_SHIFT)                              /* 0x100000000 */
#define DMA_CFG0_FIFO_MODE_SHIFT                           (33U)
#define DMA_CFG0_FIFO_MODE_MASK                            (0x1U << DMA_CFG0_FIFO_MODE_SHIFT)                           /* 0x200000000 */
#define DMA_CFG0_PROTCTL_SHIFT                             (34U)
#define DMA_CFG0_PROTCTL_MASK                              (0x7U << DMA_CFG0_PROTCTL_SHIFT)                             /* 0x1C00000000 */
#define DMA_CFG0_DS_UPD_EN_SHIFT                           (37U)
#define DMA_CFG0_DS_UPD_EN_MASK                            (0x1U << DMA_CFG0_DS_UPD_EN_SHIFT)                           /* 0x2000000000 */
#define DMA_CFG0_SS_UPD_EN_SHIFT                           (38U)
#define DMA_CFG0_SS_UPD_EN_MASK                            (0x1U << DMA_CFG0_SS_UPD_EN_SHIFT)                           /* 0x4000000000 */
#define DMA_CFG0_SRC_PER_SHIFT                             (39U)
#define DMA_CFG0_SRC_PER_MASK                              (0xFU << DMA_CFG0_SRC_PER_SHIFT)                             /* 0x78000000000 */
#define DMA_CFG0_DEST_PER_SHIFT                            (43U)
#define DMA_CFG0_DEST_PER_MASK                             (0xFU << DMA_CFG0_DEST_PER_SHIFT)                            /* 0x780000000000 */
/* SGR0 */
#define DMA_SGR0_SGI_SHIFT                                 (0U)
#define DMA_SGR0_SGI_MASK                                  (0xFFFFFU << DMA_SGR0_SGI_SHIFT)                             /* 0x000FFFFF */
#define DMA_SGR0_SGC_SHIFT                                 (20U)
#define DMA_SGR0_SGC_MASK                                  (0xFFFU << DMA_SGR0_SGC_SHIFT)                               /* 0xFFF00000 */
/* DSR0 */
#define DMA_DSR0_DSI_SHIFT                                 (0U)
#define DMA_DSR0_DSI_MASK                                  (0xFFFFFU << DMA_DSR0_DSI_SHIFT)                             /* 0x000FFFFF */
#define DMA_DSR0_DSC_SHIFT                                 (20U)
#define DMA_DSR0_DSC_MASK                                  (0xFFFU << DMA_DSR0_DSC_SHIFT)                               /* 0xFFF00000 */
/* SAR1 */
#define DMA_SAR1_SAR_SHIFT                                 (0U)
#define DMA_SAR1_SAR_MASK                                  (0xFFFFFFFFU << DMA_SAR1_SAR_SHIFT)                          /* 0xFFFFFFFF */
/* DAR1 */
#define DMA_DAR1_DAR_SHIFT                                 (0U)
#define DMA_DAR1_DAR_MASK                                  (0xFFFFFFFFU << DMA_DAR1_DAR_SHIFT)                          /* 0xFFFFFFFF */
/* LLP1 */
#define DMA_LLP1_LMS_SHIFT                                 (0U)
#define DMA_LLP1_LMS_MASK                                  (0x3U << DMA_LLP1_LMS_SHIFT)                                 /* 0x00000003 */
#define DMA_LLP1_LOC_SHIFT                                 (2U)
#define DMA_LLP1_LOC_MASK                                  (0x3FFFFFFFU << DMA_LLP1_LOC_SHIFT)                          /* 0xFFFFFFFC */
/* CTL1 */
#define DMA_CTL1_INT_EN_SHIFT                              (0U)
#define DMA_CTL1_INT_EN_MASK                               (0x1U << DMA_CTL1_INT_EN_SHIFT)                              /* 0x00000001 */
#define DMA_CTL1_DST_TR_WIDTH_SHIFT                        (1U)
#define DMA_CTL1_DST_TR_WIDTH_MASK                         (0x7U << DMA_CTL1_DST_TR_WIDTH_SHIFT)                        /* 0x0000000E */
#define DMA_CTL1_SRC_TR_WIDTH_SHIFT                        (4U)
#define DMA_CTL1_SRC_TR_WIDTH_MASK                         (0x7U << DMA_CTL1_SRC_TR_WIDTH_SHIFT)                        /* 0x00000070 */
#define DMA_CTL1_DINC_SHIFT                                (7U)
#define DMA_CTL1_DINC_MASK                                 (0x3U << DMA_CTL1_DINC_SHIFT)                                /* 0x00000180 */
#define DMA_CTL1_SINC_SHIFT                                (9U)
#define DMA_CTL1_SINC_MASK                                 (0x3U << DMA_CTL1_SINC_SHIFT)                                /* 0x00000600 */
#define DMA_CTL1_DEST_MSIZE_SHIFT                          (11U)
#define DMA_CTL1_DEST_MSIZE_MASK                           (0x7U << DMA_CTL1_DEST_MSIZE_SHIFT)                          /* 0x00003800 */
#define DMA_CTL1_SRC_MSIZE_SHIFT                           (14U)
#define DMA_CTL1_SRC_MSIZE_MASK                            (0x7U << DMA_CTL1_SRC_MSIZE_SHIFT)                           /* 0x0001C000 */
#define DMA_CTL1_SRC_GATHER_EN_SHIFT                       (17U)
#define DMA_CTL1_SRC_GATHER_EN_MASK                        (0x1U << DMA_CTL1_SRC_GATHER_EN_SHIFT)                       /* 0x00020000 */
#define DMA_CTL1_DST_SCATTER_EN_SHIFT                      (18U)
#define DMA_CTL1_DST_SCATTER_EN_MASK                       (0x1U << DMA_CTL1_DST_SCATTER_EN_SHIFT)                      /* 0x00040000 */
#define DMA_CTL1_TT_FC_SHIFT                               (20U)
#define DMA_CTL1_TT_FC_MASK                                (0x7U << DMA_CTL1_TT_FC_SHIFT)                               /* 0x00700000 */
#define DMA_CTL1_DMS_SHIFT                                 (23U)
#define DMA_CTL1_DMS_MASK                                  (0x3U << DMA_CTL1_DMS_SHIFT)                                 /* 0x01800000 */
#define DMA_CTL1_SMS_SHIFT                                 (25U)
#define DMA_CTL1_SMS_MASK                                  (0x3U << DMA_CTL1_SMS_SHIFT)                                 /* 0x06000000 */
#define DMA_CTL1_LLP_DST_EN_SHIFT                          (27U)
#define DMA_CTL1_LLP_DST_EN_MASK                           (0x1U << DMA_CTL1_LLP_DST_EN_SHIFT)                          /* 0x08000000 */
#define DMA_CTL1_LLP_SRC_EN_SHIFT                          (28U)
#define DMA_CTL1_LLP_SRC_EN_MASK                           (0x1U << DMA_CTL1_LLP_SRC_EN_SHIFT)                          /* 0x10000000 */
#define DMA_CTL1_BLOCK_TS_SHIFT                            (32U)
#define DMA_CTL1_BLOCK_TS_MASK                             (0xFFFU << DMA_CTL1_BLOCK_TS_SHIFT)                          /* 0xFFF00000000 */
#define DMA_CTL1_DONE_SHIFT                                (44U)
#define DMA_CTL1_DONE_MASK                                 (0x1U << DMA_CTL1_DONE_SHIFT)                                /* 0x100000000000 */
/* SSTAT1 */
#define DMA_SSTAT1_SSTAT_SHIFT                             (0U)
#define DMA_SSTAT1_SSTAT_MASK                              (0xFFFFFFFFU << DMA_SSTAT1_SSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* DSTAT1 */
#define DMA_DSTAT1_DSTAT_SHIFT                             (0U)
#define DMA_DSTAT1_DSTAT_MASK                              (0xFFFFFFFFU << DMA_DSTAT1_DSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* SSTATAR1 */
#define DMA_SSTATAR1_SSTATAR_SHIFT                         (0U)
#define DMA_SSTATAR1_SSTATAR_MASK                          (0xFFFFFFFFU << DMA_SSTATAR1_SSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* DSTATAR1 */
#define DMA_DSTATAR1_DSTATAR_SHIFT                         (0U)
#define DMA_DSTATAR1_DSTATAR_MASK                          (0xFFFFFFFFU << DMA_DSTATAR1_DSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* CFG1 */
#define DMA_CFG1_CH_PRIOR_SHIFT                            (5U)
#define DMA_CFG1_CH_PRIOR_MASK                             (0x7U << DMA_CFG1_CH_PRIOR_SHIFT)                            /* 0x000000E0 */
#define DMA_CFG1_CH_SUSP_SHIFT                             (8U)
#define DMA_CFG1_CH_SUSP_MASK                              (0x1U << DMA_CFG1_CH_SUSP_SHIFT)                             /* 0x00000100 */
#define DMA_CFG1_FIFO_EMPTY_SHIFT                          (9U)
#define DMA_CFG1_FIFO_EMPTY_MASK                           (0x1U << DMA_CFG1_FIFO_EMPTY_SHIFT)                          /* 0x00000200 */
#define DMA_CFG1_HS_SEL_DST_SHIFT                          (10U)
#define DMA_CFG1_HS_SEL_DST_MASK                           (0x1U << DMA_CFG1_HS_SEL_DST_SHIFT)                          /* 0x00000400 */
#define DMA_CFG1_HS_SEL_SRC_SHIFT                          (11U)
#define DMA_CFG1_HS_SEL_SRC_MASK                           (0x1U << DMA_CFG1_HS_SEL_SRC_SHIFT)                          /* 0x00000800 */
#define DMA_CFG1_LOCK_CH_L_SHIFT                           (12U)
#define DMA_CFG1_LOCK_CH_L_MASK                            (0x3U << DMA_CFG1_LOCK_CH_L_SHIFT)                           /* 0x00003000 */
#define DMA_CFG1_LOCK_B_L_SHIFT                            (14U)
#define DMA_CFG1_LOCK_B_L_MASK                             (0x3U << DMA_CFG1_LOCK_B_L_SHIFT)                            /* 0x0000C000 */
#define DMA_CFG1_LOCK_CH_SHIFT                             (16U)
#define DMA_CFG1_LOCK_CH_MASK                              (0x1U << DMA_CFG1_LOCK_CH_SHIFT)                             /* 0x00010000 */
#define DMA_CFG1_LOCK_B_SHIFT                              (17U)
#define DMA_CFG1_LOCK_B_MASK                               (0x1U << DMA_CFG1_LOCK_B_SHIFT)                              /* 0x00020000 */
#define DMA_CFG1_DST_HS_POL_SHIFT                          (18U)
#define DMA_CFG1_DST_HS_POL_MASK                           (0x1U << DMA_CFG1_DST_HS_POL_SHIFT)                          /* 0x00040000 */
#define DMA_CFG1_SRC_HS_POL_SHIFT                          (19U)
#define DMA_CFG1_SRC_HS_POL_MASK                           (0x1U << DMA_CFG1_SRC_HS_POL_SHIFT)                          /* 0x00080000 */
#define DMA_CFG1_MAX_ABRST_SHIFT                           (20U)
#define DMA_CFG1_MAX_ABRST_MASK                            (0x3FFU << DMA_CFG1_MAX_ABRST_SHIFT)                         /* 0x3FF00000 */
#define DMA_CFG1_RELOAD_SRC_SHIFT                          (30U)
#define DMA_CFG1_RELOAD_SRC_MASK                           (0x1U << DMA_CFG1_RELOAD_SRC_SHIFT)                          /* 0x40000000 */
#define DMA_CFG1_RELOAD_DST_SHIFT                          (31U)
#define DMA_CFG1_RELOAD_DST_MASK                           (0x1U << DMA_CFG1_RELOAD_DST_SHIFT)                          /* 0x80000000 */
#define DMA_CFG1_FCMODE_SHIFT                              (32U)
#define DMA_CFG1_FCMODE_MASK                               (0x1U << DMA_CFG1_FCMODE_SHIFT)                              /* 0x100000000 */
#define DMA_CFG1_FIFO_MODE_SHIFT                           (33U)
#define DMA_CFG1_FIFO_MODE_MASK                            (0x1U << DMA_CFG1_FIFO_MODE_SHIFT)                           /* 0x200000000 */
#define DMA_CFG1_PROTCTL_SHIFT                             (34U)
#define DMA_CFG1_PROTCTL_MASK                              (0x7U << DMA_CFG1_PROTCTL_SHIFT)                             /* 0x1C00000000 */
#define DMA_CFG1_DS_UPD_EN_SHIFT                           (37U)
#define DMA_CFG1_DS_UPD_EN_MASK                            (0x1U << DMA_CFG1_DS_UPD_EN_SHIFT)                           /* 0x2000000000 */
#define DMA_CFG1_SS_UPD_EN_SHIFT                           (38U)
#define DMA_CFG1_SS_UPD_EN_MASK                            (0x1U << DMA_CFG1_SS_UPD_EN_SHIFT)                           /* 0x4000000000 */
#define DMA_CFG1_SRC_PER_SHIFT                             (39U)
#define DMA_CFG1_SRC_PER_MASK                              (0xFU << DMA_CFG1_SRC_PER_SHIFT)                             /* 0x78000000000 */
#define DMA_CFG1_DEST_PER_SHIFT                            (43U)
#define DMA_CFG1_DEST_PER_MASK                             (0xFU << DMA_CFG1_DEST_PER_SHIFT)                            /* 0x780000000000 */
/* SGR1 */
#define DMA_SGR1_SGI_SHIFT                                 (0U)
#define DMA_SGR1_SGI_MASK                                  (0xFFFFFU << DMA_SGR1_SGI_SHIFT)                             /* 0x000FFFFF */
#define DMA_SGR1_SGC_SHIFT                                 (20U)
#define DMA_SGR1_SGC_MASK                                  (0xFFFU << DMA_SGR1_SGC_SHIFT)                               /* 0xFFF00000 */
/* DSR1 */
#define DMA_DSR1_DSI_SHIFT                                 (0U)
#define DMA_DSR1_DSI_MASK                                  (0xFFFFFU << DMA_DSR1_DSI_SHIFT)                             /* 0x000FFFFF */
#define DMA_DSR1_DSC_SHIFT                                 (20U)
#define DMA_DSR1_DSC_MASK                                  (0xFFFU << DMA_DSR1_DSC_SHIFT)                               /* 0xFFF00000 */
/* SAR2 */
#define DMA_SAR2_SAR_SHIFT                                 (0U)
#define DMA_SAR2_SAR_MASK                                  (0xFFFFFFFFU << DMA_SAR2_SAR_SHIFT)                          /* 0xFFFFFFFF */
/* DAR2 */
#define DMA_DAR2_DAR_SHIFT                                 (0U)
#define DMA_DAR2_DAR_MASK                                  (0xFFFFFFFFU << DMA_DAR2_DAR_SHIFT)                          /* 0xFFFFFFFF */
/* LLP2 */
#define DMA_LLP2_LMS_SHIFT                                 (0U)
#define DMA_LLP2_LMS_MASK                                  (0x3U << DMA_LLP2_LMS_SHIFT)                                 /* 0x00000003 */
#define DMA_LLP2_LOC_SHIFT                                 (2U)
#define DMA_LLP2_LOC_MASK                                  (0x3FFFFFFFU << DMA_LLP2_LOC_SHIFT)                          /* 0xFFFFFFFC */
/* CTL2 */
#define DMA_CTL2_INT_EN_SHIFT                              (0U)
#define DMA_CTL2_INT_EN_MASK                               (0x1U << DMA_CTL2_INT_EN_SHIFT)                              /* 0x00000001 */
#define DMA_CTL2_DST_TR_WIDTH_SHIFT                        (1U)
#define DMA_CTL2_DST_TR_WIDTH_MASK                         (0x7U << DMA_CTL2_DST_TR_WIDTH_SHIFT)                        /* 0x0000000E */
#define DMA_CTL2_SRC_TR_WIDTH_SHIFT                        (4U)
#define DMA_CTL2_SRC_TR_WIDTH_MASK                         (0x7U << DMA_CTL2_SRC_TR_WIDTH_SHIFT)                        /* 0x00000070 */
#define DMA_CTL2_DINC_SHIFT                                (7U)
#define DMA_CTL2_DINC_MASK                                 (0x3U << DMA_CTL2_DINC_SHIFT)                                /* 0x00000180 */
#define DMA_CTL2_SINC_SHIFT                                (9U)
#define DMA_CTL2_SINC_MASK                                 (0x3U << DMA_CTL2_SINC_SHIFT)                                /* 0x00000600 */
#define DMA_CTL2_DEST_MSIZE_SHIFT                          (11U)
#define DMA_CTL2_DEST_MSIZE_MASK                           (0x7U << DMA_CTL2_DEST_MSIZE_SHIFT)                          /* 0x00003800 */
#define DMA_CTL2_SRC_MSIZE_SHIFT                           (14U)
#define DMA_CTL2_SRC_MSIZE_MASK                            (0x7U << DMA_CTL2_SRC_MSIZE_SHIFT)                           /* 0x0001C000 */
#define DMA_CTL2_SRC_GATHER_EN_SHIFT                       (17U)
#define DMA_CTL2_SRC_GATHER_EN_MASK                        (0x1U << DMA_CTL2_SRC_GATHER_EN_SHIFT)                       /* 0x00020000 */
#define DMA_CTL2_DST_SCATTER_EN_SHIFT                      (18U)
#define DMA_CTL2_DST_SCATTER_EN_MASK                       (0x1U << DMA_CTL2_DST_SCATTER_EN_SHIFT)                      /* 0x00040000 */
#define DMA_CTL2_TT_FC_SHIFT                               (20U)
#define DMA_CTL2_TT_FC_MASK                                (0x7U << DMA_CTL2_TT_FC_SHIFT)                               /* 0x00700000 */
#define DMA_CTL2_DMS_SHIFT                                 (23U)
#define DMA_CTL2_DMS_MASK                                  (0x3U << DMA_CTL2_DMS_SHIFT)                                 /* 0x01800000 */
#define DMA_CTL2_SMS_SHIFT                                 (25U)
#define DMA_CTL2_SMS_MASK                                  (0x3U << DMA_CTL2_SMS_SHIFT)                                 /* 0x06000000 */
#define DMA_CTL2_LLP_DST_EN_SHIFT                          (27U)
#define DMA_CTL2_LLP_DST_EN_MASK                           (0x1U << DMA_CTL2_LLP_DST_EN_SHIFT)                          /* 0x08000000 */
#define DMA_CTL2_LLP_SRC_EN_SHIFT                          (28U)
#define DMA_CTL2_LLP_SRC_EN_MASK                           (0x1U << DMA_CTL2_LLP_SRC_EN_SHIFT)                          /* 0x10000000 */
#define DMA_CTL2_BLOCK_TS_SHIFT                            (32U)
#define DMA_CTL2_BLOCK_TS_MASK                             (0xFFFU << DMA_CTL2_BLOCK_TS_SHIFT)                          /* 0xFFF00000000 */
#define DMA_CTL2_DONE_SHIFT                                (44U)
#define DMA_CTL2_DONE_MASK                                 (0x1U << DMA_CTL2_DONE_SHIFT)                                /* 0x100000000000 */
/* SSTAT2 */
#define DMA_SSTAT2_SSTAT_SHIFT                             (0U)
#define DMA_SSTAT2_SSTAT_MASK                              (0xFFFFFFFFU << DMA_SSTAT2_SSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* DSTAT2 */
#define DMA_DSTAT2_DSTAT_SHIFT                             (0U)
#define DMA_DSTAT2_DSTAT_MASK                              (0xFFFFFFFFU << DMA_DSTAT2_DSTAT_SHIFT)                      /* 0xFFFFFFFF */
/* SSTATAR2 */
#define DMA_SSTATAR2_SSTATAR_SHIFT                         (0U)
#define DMA_SSTATAR2_SSTATAR_MASK                          (0xFFFFFFFFU << DMA_SSTATAR2_SSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* DSTATAR2 */
#define DMA_DSTATAR2_DSTATAR_SHIFT                         (0U)
#define DMA_DSTATAR2_DSTATAR_MASK                          (0xFFFFFFFFU << DMA_DSTATAR2_DSTATAR_SHIFT)                  /* 0xFFFFFFFF */
/* CFG2 */
#define DMA_CFG2_CH_PRIOR_SHIFT                            (5U)
#define DMA_CFG2_CH_PRIOR_MASK                             (0x7U << DMA_CFG2_CH_PRIOR_SHIFT)                            /* 0x000000E0 */
#define DMA_CFG2_CH_SUSP_SHIFT                             (8U)
#define DMA_CFG2_CH_SUSP_MASK                              (0x1U << DMA_CFG2_CH_SUSP_SHIFT)                             /* 0x00000100 */
#define DMA_CFG2_FIFO_EMPTY_SHIFT                          (9U)
#define DMA_CFG2_FIFO_EMPTY_MASK                           (0x1U << DMA_CFG2_FIFO_EMPTY_SHIFT)                          /* 0x00000200 */
#define DMA_CFG2_HS_SEL_DST_SHIFT                          (10U)
#define DMA_CFG2_HS_SEL_DST_MASK                           (0x1U << DMA_CFG2_HS_SEL_DST_SHIFT)                          /* 0x00000400 */
#define DMA_CFG2_HS_SEL_SRC_SHIFT                          (11U)
#define DMA_CFG2_HS_SEL_SRC_MASK                           (0x1U << DMA_CFG2_HS_SEL_SRC_SHIFT)                          /* 0x00000800 */
#define DMA_CFG2_LOCK_CH_L_SHIFT                           (12U)
#define DMA_CFG2_LOCK_CH_L_MASK                            (0x3U << DMA_CFG2_LOCK_CH_L_SHIFT)                           /* 0x00003000 */
#define DMA_CFG2_LOCK_B_L_SHIFT                            (14U)
#define DMA_CFG2_LOCK_B_L_MASK                             (0x3U << DMA_CFG2_LOCK_B_L_SHIFT)                            /* 0x0000C000 */
#define DMA_CFG2_LOCK_CH_SHIFT                             (16U)
#define DMA_CFG2_LOCK_CH_MASK                              (0x1U << DMA_CFG2_LOCK_CH_SHIFT)                             /* 0x00010000 */
#define DMA_CFG2_LOCK_B_SHIFT                              (17U)
#define DMA_CFG2_LOCK_B_MASK                               (0x1U << DMA_CFG2_LOCK_B_SHIFT)                              /* 0x00020000 */
#define DMA_CFG2_DST_HS_POL_SHIFT                          (18U)
#define DMA_CFG2_DST_HS_POL_MASK                           (0x1U << DMA_CFG2_DST_HS_POL_SHIFT)                          /* 0x00040000 */
#define DMA_CFG2_SRC_HS_POL_SHIFT                          (19U)
#define DMA_CFG2_SRC_HS_POL_MASK                           (0x1U << DMA_CFG2_SRC_HS_POL_SHIFT)                          /* 0x00080000 */
#define DMA_CFG2_MAX_ABRST_SHIFT                           (20U)
#define DMA_CFG2_MAX_ABRST_MASK                            (0x3FFU << DMA_CFG2_MAX_ABRST_SHIFT)                         /* 0x3FF00000 */
#define DMA_CFG2_RELOAD_SRC_SHIFT                          (30U)
#define DMA_CFG2_RELOAD_SRC_MASK                           (0x1U << DMA_CFG2_RELOAD_SRC_SHIFT)                          /* 0x40000000 */
#define DMA_CFG2_RELOAD_DST_SHIFT                          (31U)
#define DMA_CFG2_RELOAD_DST_MASK                           (0x1U << DMA_CFG2_RELOAD_DST_SHIFT)                          /* 0x80000000 */
#define DMA_CFG2_FCMODE_SHIFT                              (32U)
#define DMA_CFG2_FCMODE_MASK                               (0x1U << DMA_CFG2_FCMODE_SHIFT)                              /* 0x100000000 */
#define DMA_CFG2_FIFO_MODE_SHIFT                           (33U)
#define DMA_CFG2_FIFO_MODE_MASK                            (0x1U << DMA_CFG2_FIFO_MODE_SHIFT)                           /* 0x200000000 */
#define DMA_CFG2_PROTCTL_SHIFT                             (34U)
#define DMA_CFG2_PROTCTL_MASK                              (0x7U << DMA_CFG2_PROTCTL_SHIFT)                             /* 0x1C00000000 */
#define DMA_CFG2_DS_UPD_EN_SHIFT                           (37U)
#define DMA_CFG2_DS_UPD_EN_MASK                            (0x1U << DMA_CFG2_DS_UPD_EN_SHIFT)                           /* 0x2000000000 */
#define DMA_CFG2_SS_UPD_EN_SHIFT                           (38U)
#define DMA_CFG2_SS_UPD_EN_MASK                            (0x1U << DMA_CFG2_SS_UPD_EN_SHIFT)                           /* 0x4000000000 */
#define DMA_CFG2_SRC_PER_SHIFT                             (39U)
#define DMA_CFG2_SRC_PER_MASK                              (0xFU << DMA_CFG2_SRC_PER_SHIFT)                             /* 0x78000000000 */
#define DMA_CFG2_DEST_PER_SHIFT                            (43U)
#define DMA_CFG2_DEST_PER_MASK                             (0xFU << DMA_CFG2_DEST_PER_SHIFT)                            /* 0x780000000000 */
/* SGR2 */
#define DMA_SGR2_SGI_SHIFT                                 (0U)
#define DMA_SGR2_SGI_MASK                                  (0xFFFFFU << DMA_SGR2_SGI_SHIFT)                             /* 0x000FFFFF */
#define DMA_SGR2_SGC_SHIFT                                 (20U)
#define DMA_SGR2_SGC_MASK                                  (0xFFFU << DMA_SGR2_SGC_SHIFT)                               /* 0xFFF00000 */
/* DSR2 */
#define DMA_DSR2_DSI_SHIFT                                 (0U)
#define DMA_DSR2_DSI_MASK                                  (0xFFFFFU << DMA_DSR2_DSI_SHIFT)                             /* 0x000FFFFF */
#define DMA_DSR2_DSC_SHIFT                                 (20U)
#define DMA_DSR2_DSC_MASK                                  (0xFFFU << DMA_DSR2_DSC_SHIFT)                               /* 0xFFF00000 */
/* RAWTFR */
#define DMA_RAWTFR_RAW_SHIFT                               (0U)
#define DMA_RAWTFR_RAW_MASK                                (0xFU << DMA_RAWTFR_RAW_SHIFT)                               /* 0x0000000F */
/* RAWBLOCK */
#define DMA_RAWBLOCK_RAW_SHIFT                             (0U)
#define DMA_RAWBLOCK_RAW_MASK                              (0xFU << DMA_RAWBLOCK_RAW_SHIFT)                             /* 0x0000000F */
/* RAWSRCTRAN */
#define DMA_RAWSRCTRAN_RAW_SHIFT                           (0U)
#define DMA_RAWSRCTRAN_RAW_MASK                            (0xFU << DMA_RAWSRCTRAN_RAW_SHIFT)                           /* 0x0000000F */
/* RAWDSTTRAN */
#define DMA_RAWDSTTRAN_RAW_SHIFT                           (0U)
#define DMA_RAWDSTTRAN_RAW_MASK                            (0xFU << DMA_RAWDSTTRAN_RAW_SHIFT)                           /* 0x0000000F */
/* RAWERR */
#define DMA_RAWERR_RAW_SHIFT                               (0U)
#define DMA_RAWERR_RAW_MASK                                (0xFU << DMA_RAWERR_RAW_SHIFT)                               /* 0x0000000F */
/* STATUSTFR */
#define DMA_STATUSTFR_STATUS_SHIFT                         (0U)
#define DMA_STATUSTFR_STATUS_MASK                          (0xFU << DMA_STATUSTFR_STATUS_SHIFT)                         /* 0x0000000F */
/* STATUSBLOCK */
#define DMA_STATUSBLOCK_STATUS_SHIFT                       (0U)
#define DMA_STATUSBLOCK_STATUS_MASK                        (0xFU << DMA_STATUSBLOCK_STATUS_SHIFT)                       /* 0x0000000F */
/* STATUSSRCTRAN */
#define DMA_STATUSSRCTRAN_STATUS_SHIFT                     (0U)
#define DMA_STATUSSRCTRAN_STATUS_MASK                      (0xFU << DMA_STATUSSRCTRAN_STATUS_SHIFT)                     /* 0x0000000F */
/* STATUSDSTTRAN */
#define DMA_STATUSDSTTRAN_STATUS_SHIFT                     (0U)
#define DMA_STATUSDSTTRAN_STATUS_MASK                      (0xFU << DMA_STATUSDSTTRAN_STATUS_SHIFT)                     /* 0x0000000F */
/* STATUSERR */
#define DMA_STATUSERR_STATUS_SHIFT                         (0U)
#define DMA_STATUSERR_STATUS_MASK                          (0xFU << DMA_STATUSERR_STATUS_SHIFT)                         /* 0x0000000F */
/* MASKTFR */
#define DMA_MASKTFR_INT_MASK_SHIFT                         (0U)
#define DMA_MASKTFR_INT_MASK_MASK                          (0xFU << DMA_MASKTFR_INT_MASK_SHIFT)                         /* 0x0000000F */
#define DMA_MASKTFR_INT_MASK_WE_SHIFT                      (8U)
#define DMA_MASKTFR_INT_MASK_WE_MASK                       (0xFU << DMA_MASKTFR_INT_MASK_WE_SHIFT)                      /* 0x00000F00 */
/* MASKBLOCK */
#define DMA_MASKBLOCK_INT_MASK_SHIFT                       (0U)
#define DMA_MASKBLOCK_INT_MASK_MASK                        (0xFU << DMA_MASKBLOCK_INT_MASK_SHIFT)                       /* 0x0000000F */
#define DMA_MASKBLOCK_INT_MASK_WE_SHIFT                    (8U)
#define DMA_MASKBLOCK_INT_MASK_WE_MASK                     (0xFU << DMA_MASKBLOCK_INT_MASK_WE_SHIFT)                    /* 0x00000F00 */
/* MASKSRCTRAN */
#define DMA_MASKSRCTRAN_INT_MASK_SHIFT                     (0U)
#define DMA_MASKSRCTRAN_INT_MASK_MASK                      (0xFU << DMA_MASKSRCTRAN_INT_MASK_SHIFT)                     /* 0x0000000F */
#define DMA_MASKSRCTRAN_INT_MASK_WE_SHIFT                  (8U)
#define DMA_MASKSRCTRAN_INT_MASK_WE_MASK                   (0xFU << DMA_MASKSRCTRAN_INT_MASK_WE_SHIFT)                  /* 0x00000F00 */
/* MASKDSTTRAN */
#define DMA_MASKDSTTRAN_INT_MASK_SHIFT                     (0U)
#define DMA_MASKDSTTRAN_INT_MASK_MASK                      (0xFU << DMA_MASKDSTTRAN_INT_MASK_SHIFT)                     /* 0x0000000F */
#define DMA_MASKDSTTRAN_INT_MASK_WE_SHIFT                  (8U)
#define DMA_MASKDSTTRAN_INT_MASK_WE_MASK                   (0xFU << DMA_MASKDSTTRAN_INT_MASK_WE_SHIFT)                  /* 0x00000F00 */
/* MASKERR */
#define DMA_MASKERR_INT_MASK_SHIFT                         (0U)
#define DMA_MASKERR_INT_MASK_MASK                          (0xFU << DMA_MASKERR_INT_MASK_SHIFT)                         /* 0x0000000F */
#define DMA_MASKERR_INT_MASK_WE_SHIFT                      (8U)
#define DMA_MASKERR_INT_MASK_WE_MASK                       (0xFU << DMA_MASKERR_INT_MASK_WE_SHIFT)                      /* 0x00000F00 */
/* CLEARTFR */
#define DMA_CLEARTFR_CLEAR_SHIFT                           (0U)
#define DMA_CLEARTFR_CLEAR_MASK                            (0xFU << DMA_CLEARTFR_CLEAR_SHIFT)                           /* 0x0000000F */
/* CLEARBLOCK */
#define DMA_CLEARBLOCK_CLEAR_SHIFT                         (0U)
#define DMA_CLEARBLOCK_CLEAR_MASK                          (0xFU << DMA_CLEARBLOCK_CLEAR_SHIFT)                         /* 0x0000000F */
/* CLEARSRCTRAN */
#define DMA_CLEARSRCTRAN_CLEAR_SHIFT                       (0U)
#define DMA_CLEARSRCTRAN_CLEAR_MASK                        (0xFU << DMA_CLEARSRCTRAN_CLEAR_SHIFT)                       /* 0x0000000F */
/* CLEARDSTTRAN */
#define DMA_CLEARDSTTRAN_CLEAR_SHIFT                       (0U)
#define DMA_CLEARDSTTRAN_CLEAR_MASK                        (0xFU << DMA_CLEARDSTTRAN_CLEAR_SHIFT)                       /* 0x0000000F */
/* CLEARERR */
#define DMA_CLEARERR_CLEAR_SHIFT                           (0U)
#define DMA_CLEARERR_CLEAR_MASK                            (0xFU << DMA_CLEARERR_CLEAR_SHIFT)                           /* 0x0000000F */
/* STATUSINT */
#define DMA_STATUSINT_TFR_SHIFT                            (0U)
#define DMA_STATUSINT_TFR_MASK                             (0x1U << DMA_STATUSINT_TFR_SHIFT)                            /* 0x00000001 */
#define DMA_STATUSINT_BLOCK_SHIFT                          (1U)
#define DMA_STATUSINT_BLOCK_MASK                           (0x1U << DMA_STATUSINT_BLOCK_SHIFT)                          /* 0x00000002 */
#define DMA_STATUSINT_SRCT_SHIFT                           (2U)
#define DMA_STATUSINT_SRCT_MASK                            (0x1U << DMA_STATUSINT_SRCT_SHIFT)                           /* 0x00000004 */
#define DMA_STATUSINT_DSTT_SHIFT                           (3U)
#define DMA_STATUSINT_DSTT_MASK                            (0x1U << DMA_STATUSINT_DSTT_SHIFT)                           /* 0x00000008 */
#define DMA_STATUSINT_ERR_SHIFT                            (4U)
#define DMA_STATUSINT_ERR_MASK                             (0x1U << DMA_STATUSINT_ERR_SHIFT)                            /* 0x00000010 */
/* DMACFGREG */
#define DMA_DMACFGREG_DMA_EN_SHIFT                         (0U)
#define DMA_DMACFGREG_DMA_EN_MASK                          (0x1U << DMA_DMACFGREG_DMA_EN_SHIFT)                         /* 0x00000001 */
/* CHENREG */
#define DMA_CHENREG_CH_EN_SHIFT                            (0U)
#define DMA_CHENREG_CH_EN_MASK                             (0xFU << DMA_CHENREG_CH_EN_SHIFT)                            /* 0x0000000F */
#define DMA_CHENREG_CH_EN_WE_SHIFT                         (8U)
#define DMA_CHENREG_CH_EN_WE_MASK                          (0xFU << DMA_CHENREG_CH_EN_WE_SHIFT)                         /* 0x00000F00 */
/*****************************************SFC_V3*****************************************/
/* CTRL0 */
#define SFC_V3_CTRL0_SPIM_SHIFT                            (0U)
#define SFC_V3_CTRL0_SPIM_MASK                             (0x1U << SFC_V3_CTRL0_SPIM_SHIFT)                            /* 0x00000001 */
#define SFC_V3_CTRL0_SHIFTPHASE_SHIFT                      (1U)
#define SFC_V3_CTRL0_SHIFTPHASE_MASK                       (0x1U << SFC_V3_CTRL0_SHIFTPHASE_SHIFT)                      /* 0x00000002 */
#define SFC_V3_CTRL0_IDLE_CYCLE_SHIFT                      (4U)
#define SFC_V3_CTRL0_IDLE_CYCLE_MASK                       (0xFU << SFC_V3_CTRL0_IDLE_CYCLE_SHIFT)                      /* 0x000000F0 */
#define SFC_V3_CTRL0_CMDB_SHIFT                            (8U)
#define SFC_V3_CTRL0_CMDB_MASK                             (0x3U << SFC_V3_CTRL0_CMDB_SHIFT)                            /* 0x00000300 */
#define SFC_V3_CTRL0_ADRB_SHIFT                            (10U)
#define SFC_V3_CTRL0_ADRB_MASK                             (0x3U << SFC_V3_CTRL0_ADRB_SHIFT)                            /* 0x00000C00 */
#define SFC_V3_CTRL0_DATB_SHIFT                            (12U)
#define SFC_V3_CTRL0_DATB_MASK                             (0x3U << SFC_V3_CTRL0_DATB_SHIFT)                            /* 0x00003000 */
/* IMR */
#define SFC_V3_IMR_RXFM_SHIFT                              (0U)
#define SFC_V3_IMR_RXFM_MASK                               (0x1U << SFC_V3_IMR_RXFM_SHIFT)                              /* 0x00000001 */
#define SFC_V3_IMR_RXUM_SHIFT                              (1U)
#define SFC_V3_IMR_RXUM_MASK                               (0x1U << SFC_V3_IMR_RXUM_SHIFT)                              /* 0x00000002 */
#define SFC_V3_IMR_TXOM_SHIFT                              (2U)
#define SFC_V3_IMR_TXOM_MASK                               (0x1U << SFC_V3_IMR_TXOM_SHIFT)                              /* 0x00000004 */
#define SFC_V3_IMR_TXEM_SHIFT                              (3U)
#define SFC_V3_IMR_TXEM_MASK                               (0x1U << SFC_V3_IMR_TXEM_SHIFT)                              /* 0x00000008 */
#define SFC_V3_IMR_TRANSM_SHIFT                            (4U)
#define SFC_V3_IMR_TRANSM_MASK                             (0x1U << SFC_V3_IMR_TRANSM_SHIFT)                            /* 0x00000010 */
#define SFC_V3_IMR_AHBM_SHIFT                              (5U)
#define SFC_V3_IMR_AHBM_MASK                               (0x1U << SFC_V3_IMR_AHBM_SHIFT)                              /* 0x00000020 */
#define SFC_V3_IMR_NSPIM_SHIFT                             (6U)
#define SFC_V3_IMR_NSPIM_MASK                              (0x1U << SFC_V3_IMR_NSPIM_SHIFT)                             /* 0x00000040 */
#define SFC_V3_IMR_DMAM_SHIFT                              (7U)
#define SFC_V3_IMR_DMAM_MASK                               (0x1U << SFC_V3_IMR_DMAM_SHIFT)                              /* 0x00000080 */
#define SFC_V3_IMR_STPOLLM_SHIFT                           (8U)
#define SFC_V3_IMR_STPOLLM_MASK                            (0x1U << SFC_V3_IMR_STPOLLM_SHIFT)                           /* 0x00000100 */
/* ICLR */
#define SFC_V3_ICLR_RXFC_SHIFT                             (0U)
#define SFC_V3_ICLR_RXFC_MASK                              (0x1U << SFC_V3_ICLR_RXFC_SHIFT)                             /* 0x00000001 */
#define SFC_V3_ICLR_RXUC_SHIFT                             (1U)
#define SFC_V3_ICLR_RXUC_MASK                              (0x1U << SFC_V3_ICLR_RXUC_SHIFT)                             /* 0x00000002 */
#define SFC_V3_ICLR_TXOC_SHIFT                             (2U)
#define SFC_V3_ICLR_TXOC_MASK                              (0x1U << SFC_V3_ICLR_TXOC_SHIFT)                             /* 0x00000004 */
#define SFC_V3_ICLR_TXEC_SHIFT                             (3U)
#define SFC_V3_ICLR_TXEC_MASK                              (0x1U << SFC_V3_ICLR_TXEC_SHIFT)                             /* 0x00000008 */
#define SFC_V3_ICLR_TRANSC_SHIFT                           (4U)
#define SFC_V3_ICLR_TRANSC_MASK                            (0x1U << SFC_V3_ICLR_TRANSC_SHIFT)                           /* 0x00000010 */
#define SFC_V3_ICLR_AHBC_SHIFT                             (5U)
#define SFC_V3_ICLR_AHBC_MASK                              (0x1U << SFC_V3_ICLR_AHBC_SHIFT)                             /* 0x00000020 */
#define SFC_V3_ICLR_NSPIC_SHIFT                            (6U)
#define SFC_V3_ICLR_NSPIC_MASK                             (0x1U << SFC_V3_ICLR_NSPIC_SHIFT)                            /* 0x00000040 */
#define SFC_V3_ICLR_DMAC_SHIFT                             (7U)
#define SFC_V3_ICLR_DMAC_MASK                              (0x1U << SFC_V3_ICLR_DMAC_SHIFT)                             /* 0x00000080 */
#define SFC_V3_ICLR_STPOLLC_SHIFT                          (8U)
#define SFC_V3_ICLR_STPOLLC_MASK                           (0x1U << SFC_V3_ICLR_STPOLLC_SHIFT)                          /* 0x00000100 */
/* FTLR */
#define SFC_V3_FTLR_TXFTLR_SHIFT                           (0U)
#define SFC_V3_FTLR_TXFTLR_MASK                            (0xFFU << SFC_V3_FTLR_TXFTLR_SHIFT)                          /* 0x000000FF */
#define SFC_V3_FTLR_RXFTLR_SHIFT                           (8U)
#define SFC_V3_FTLR_RXFTLR_MASK                            (0xFFU << SFC_V3_FTLR_RXFTLR_SHIFT)                          /* 0x0000FF00 */
/* RCVR */
#define SFC_V3_RCVR_RCVR_SHIFT                             (0U)
#define SFC_V3_RCVR_RCVR_MASK                              (0x1U << SFC_V3_RCVR_RCVR_SHIFT)                             /* 0x00000001 */
/* AX0 */
#define SFC_V3_AX0_AX_SHIFT                                (0U)
#define SFC_V3_AX0_AX_MASK                                 (0xFFU << SFC_V3_AX0_AX_SHIFT)                               /* 0x000000FF */
/* ABIT0 */
#define SFC_V3_ABIT0_ABIT_SHIFT                            (0U)
#define SFC_V3_ABIT0_ABIT_MASK                             (0x1FU << SFC_V3_ABIT0_ABIT_SHIFT)                           /* 0x0000001F */
/* ISR */
#define SFC_V3_ISR_RXFS_SHIFT                              (0U)
#define SFC_V3_ISR_RXFS_MASK                               (0x1U << SFC_V3_ISR_RXFS_SHIFT)                              /* 0x00000001 */
#define SFC_V3_ISR_RXUS_SHIFT                              (1U)
#define SFC_V3_ISR_RXUS_MASK                               (0x1U << SFC_V3_ISR_RXUS_SHIFT)                              /* 0x00000002 */
#define SFC_V3_ISR_TXOS_SHIFT                              (2U)
#define SFC_V3_ISR_TXOS_MASK                               (0x1U << SFC_V3_ISR_TXOS_SHIFT)                              /* 0x00000004 */
#define SFC_V3_ISR_TXES_SHIFT                              (3U)
#define SFC_V3_ISR_TXES_MASK                               (0x1U << SFC_V3_ISR_TXES_SHIFT)                              /* 0x00000008 */
#define SFC_V3_ISR_TRANSS_SHIFT                            (4U)
#define SFC_V3_ISR_TRANSS_MASK                             (0x1U << SFC_V3_ISR_TRANSS_SHIFT)                            /* 0x00000010 */
#define SFC_V3_ISR_AHBS_SHIFT                              (5U)
#define SFC_V3_ISR_AHBS_MASK                               (0x1U << SFC_V3_ISR_AHBS_SHIFT)                              /* 0x00000020 */
#define SFC_V3_ISR_NSPIS_SHIFT                             (6U)
#define SFC_V3_ISR_NSPIS_MASK                              (0x1U << SFC_V3_ISR_NSPIS_SHIFT)                             /* 0x00000040 */
#define SFC_V3_ISR_DMAS_SHIFT                              (7U)
#define SFC_V3_ISR_DMAS_MASK                               (0x1U << SFC_V3_ISR_DMAS_SHIFT)                              /* 0x00000080 */
#define SFC_V3_ISR_STPOLLS_SHIFT                           (8U)
#define SFC_V3_ISR_STPOLLS_MASK                            (0x1U << SFC_V3_ISR_STPOLLS_SHIFT)                           /* 0x00000100 */
/* FSR */
#define SFC_V3_FSR_TXFS_SHIFT                              (0U)
#define SFC_V3_FSR_TXFS_MASK                               (0x1U << SFC_V3_FSR_TXFS_SHIFT)                              /* 0x00000001 */
#define SFC_V3_FSR_TXES_SHIFT                              (1U)
#define SFC_V3_FSR_TXES_MASK                               (0x1U << SFC_V3_FSR_TXES_SHIFT)                              /* 0x00000002 */
#define SFC_V3_FSR_RXES_SHIFT                              (2U)
#define SFC_V3_FSR_RXES_MASK                               (0x1U << SFC_V3_FSR_RXES_SHIFT)                              /* 0x00000004 */
#define SFC_V3_FSR_RXFS_SHIFT                              (3U)
#define SFC_V3_FSR_RXFS_MASK                               (0x1U << SFC_V3_FSR_RXFS_SHIFT)                              /* 0x00000008 */
#define SFC_V3_FSR_TXWLVL_SHIFT                            (8U)
#define SFC_V3_FSR_TXWLVL_MASK                             (0x1FU << SFC_V3_FSR_TXWLVL_SHIFT)                           /* 0x00001F00 */
#define SFC_V3_FSR_RXWLVL_SHIFT                            (16U)
#define SFC_V3_FSR_RXWLVL_MASK                             (0x1FU << SFC_V3_FSR_RXWLVL_SHIFT)                           /* 0x001F0000 */
/* SR */
#define SFC_V3_SR_SR_SHIFT                                 (0U)
#define SFC_V3_SR_SR_MASK                                  (0x1U << SFC_V3_SR_SR_SHIFT)                                 /* 0x00000001 */
/* RISR */
#define SFC_V3_RISR_RXFS_SHIFT                             (0U)
#define SFC_V3_RISR_RXFS_MASK                              (0x1U << SFC_V3_RISR_RXFS_SHIFT)                             /* 0x00000001 */
#define SFC_V3_RISR_RXUS_SHIFT                             (1U)
#define SFC_V3_RISR_RXUS_MASK                              (0x1U << SFC_V3_RISR_RXUS_SHIFT)                             /* 0x00000002 */
#define SFC_V3_RISR_TXOS_SHIFT                             (2U)
#define SFC_V3_RISR_TXOS_MASK                              (0x1U << SFC_V3_RISR_TXOS_SHIFT)                             /* 0x00000004 */
#define SFC_V3_RISR_TXES_SHIFT                             (3U)
#define SFC_V3_RISR_TXES_MASK                              (0x1U << SFC_V3_RISR_TXES_SHIFT)                             /* 0x00000008 */
#define SFC_V3_RISR_TRANSS_SHIFT                           (4U)
#define SFC_V3_RISR_TRANSS_MASK                            (0x1U << SFC_V3_RISR_TRANSS_SHIFT)                           /* 0x00000010 */
#define SFC_V3_RISR_AHBS_SHIFT                             (5U)
#define SFC_V3_RISR_AHBS_MASK                              (0x1U << SFC_V3_RISR_AHBS_SHIFT)                             /* 0x00000020 */
#define SFC_V3_RISR_NSPIS_SHIFT                            (6U)
#define SFC_V3_RISR_NSPIS_MASK                             (0x1U << SFC_V3_RISR_NSPIS_SHIFT)                            /* 0x00000040 */
#define SFC_V3_RISR_DMAS_SHIFT                             (7U)
#define SFC_V3_RISR_DMAS_MASK                              (0x1U << SFC_V3_RISR_DMAS_SHIFT)                             /* 0x00000080 */
#define SFC_V3_RISR_STPOLLS_SHIFT                          (8U)
#define SFC_V3_RISR_STPOLLS_MASK                           (0x1U << SFC_V3_RISR_STPOLLS_SHIFT)                          /* 0x00000100 */
/* VER */
#define SFC_V3_VER_VER_SHIFT                               (0U)
#define SFC_V3_VER_VER_MASK                                (0xFFFFU << SFC_V3_VER_VER_SHIFT)                            /* 0x0000FFFF */
/* QOP */
#define SFC_V3_QOP_SO123_SHIFT                             (0U)
#define SFC_V3_QOP_SO123_MASK                              (0x1U << SFC_V3_QOP_SO123_SHIFT)                             /* 0x00000001 */
#define SFC_V3_QOP_SO123BP_SHIFT                           (1U)
#define SFC_V3_QOP_SO123BP_MASK                            (0x1U << SFC_V3_QOP_SO123BP_SHIFT)                           /* 0x00000002 */
/* EXT_CTRL */
#define SFC_V3_EXT_CTRL_CS_DESEL_CTRL_SHIFT                (0U)
#define SFC_V3_EXT_CTRL_CS_DESEL_CTRL_MASK                 (0xFU << SFC_V3_EXT_CTRL_CS_DESEL_CTRL_SHIFT)                /* 0x0000000F */
#define SFC_V3_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT           (4U)
#define SFC_V3_EXT_CTRL_SWITCH_IO_DUMM_CNT_MASK            (0xFU << SFC_V3_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT)           /* 0x000000F0 */
#define SFC_V3_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT            (8U)
#define SFC_V3_EXT_CTRL_SWITCH_IO_O2I_CNT_MASK             (0xFU << SFC_V3_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT)            /* 0x00000F00 */
#define SFC_V3_EXT_CTRL_TRANS_INT_MODE_SHIFT               (13U)
#define SFC_V3_EXT_CTRL_TRANS_INT_MODE_MASK                (0x1U << SFC_V3_EXT_CTRL_TRANS_INT_MODE_SHIFT)               /* 0x00002000 */
#define SFC_V3_EXT_CTRL_SR_GEN_MODE_SHIFT                  (14U)
#define SFC_V3_EXT_CTRL_SR_GEN_MODE_MASK                   (0x1U << SFC_V3_EXT_CTRL_SR_GEN_MODE_SHIFT)                  /* 0x00004000 */
/* POLL_CTRL */
#define SFC_V3_POLL_CTRL_ST_POLL_EN_SHIFT                  (0U)
#define SFC_V3_POLL_CTRL_ST_POLL_EN_MASK                   (0x1U << SFC_V3_POLL_CTRL_ST_POLL_EN_SHIFT)                  /* 0x00000001 */
#define SFC_V3_POLL_CTRL_POLL_DLY_EN_SHIFT                 (1U)
#define SFC_V3_POLL_CTRL_POLL_DLY_EN_MASK                  (0x1U << SFC_V3_POLL_CTRL_POLL_DLY_EN_SHIFT)                 /* 0x00000002 */
#define SFC_V3_POLL_CTRL_ST_POLL_CMD_PARA_SHIFT            (8U)
#define SFC_V3_POLL_CTRL_ST_POLL_CMD_PARA_MASK             (0xFFU << SFC_V3_POLL_CTRL_ST_POLL_CMD_PARA_SHIFT)           /* 0x0000FF00 */
#define SFC_V3_POLL_CTRL_ST_POLL_EXPECT_DATA_SHIFT         (16U)
#define SFC_V3_POLL_CTRL_ST_POLL_EXPECT_DATA_MASK          (0xFFU << SFC_V3_POLL_CTRL_ST_POLL_EXPECT_DATA_SHIFT)        /* 0x00FF0000 */
#define SFC_V3_POLL_CTRL_ST_POLL_BIT_COMP_EN_SHIFT         (24U)
#define SFC_V3_POLL_CTRL_ST_POLL_BIT_COMP_EN_MASK          (0xFFU << SFC_V3_POLL_CTRL_ST_POLL_BIT_COMP_EN_SHIFT)        /* 0xFF000000 */
/* DLL_CTRL0 */
#define SFC_V3_DLL_CTRL0_SMP_DLL_CFG_SHIFT                 (0U)
#define SFC_V3_DLL_CTRL0_SMP_DLL_CFG_MASK                  (0xFFU << SFC_V3_DLL_CTRL0_SMP_DLL_CFG_SHIFT)                /* 0x000000FF */
#define SFC_V3_DLL_CTRL0_SCLK_SMP_SEL_SHIFT                (8U)
#define SFC_V3_DLL_CTRL0_SCLK_SMP_SEL_MASK                 (0x1U << SFC_V3_DLL_CTRL0_SCLK_SMP_SEL_SHIFT)                /* 0x00000100 */
/* HRDYMASK */
#define SFC_V3_HRDYMASK_HRDYMASK_SHIFT                     (0U)
#define SFC_V3_HRDYMASK_HRDYMASK_MASK                      (0x1U << SFC_V3_HRDYMASK_HRDYMASK_SHIFT)                     /* 0x00000001 */
/* EXT_AX */
#define SFC_V3_EXT_AX_AX_CANCEL_PAT_SHIFT                  (0U)
#define SFC_V3_EXT_AX_AX_CANCEL_PAT_MASK                   (0xFFU << SFC_V3_EXT_AX_AX_CANCEL_PAT_SHIFT)                 /* 0x000000FF */
#define SFC_V3_EXT_AX_AX_SETUP_PAT_SHIFT                   (8U)
#define SFC_V3_EXT_AX_AX_SETUP_PAT_MASK                    (0xFFU << SFC_V3_EXT_AX_AX_SETUP_PAT_SHIFT)                  /* 0x0000FF00 */
/* SCLK_INATM_CNT */
#define SFC_V3_SCLK_INATM_CNT_SCLK_INATM_CNT_SHIFT         (0U)
#define SFC_V3_SCLK_INATM_CNT_SCLK_INATM_CNT_MASK          (0xFFFFFFFFU << SFC_V3_SCLK_INATM_CNT_SCLK_INATM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* AUTO_RF_CNT */
#define SFC_V3_AUTO_RF_CNT_AUTO_RF_CNT_SHIFT               (0U)
#define SFC_V3_AUTO_RF_CNT_AUTO_RF_CNT_MASK                (0xFFFFFFFFU << SFC_V3_AUTO_RF_CNT_AUTO_RF_CNT_SHIFT)        /* 0xFFFFFFFF */
/* XMMC_WCMD0 */
#define SFC_V3_XMMC_WCMD0_CMD_SHIFT                        (0U)
#define SFC_V3_XMMC_WCMD0_CMD_MASK                         (0xFFU << SFC_V3_XMMC_WCMD0_CMD_SHIFT)                       /* 0x000000FF */
#define SFC_V3_XMMC_WCMD0_DUMM_SHIFT                       (8U)
#define SFC_V3_XMMC_WCMD0_DUMM_MASK                        (0xFU << SFC_V3_XMMC_WCMD0_DUMM_SHIFT)                       /* 0x00000F00 */
#define SFC_V3_XMMC_WCMD0_CONT_SHIFT                       (13U)
#define SFC_V3_XMMC_WCMD0_CONT_MASK                        (0x1U << SFC_V3_XMMC_WCMD0_CONT_SHIFT)                       /* 0x00002000 */
#define SFC_V3_XMMC_WCMD0_ADDRB_SHIFT                      (14U)
#define SFC_V3_XMMC_WCMD0_ADDRB_MASK                       (0x3U << SFC_V3_XMMC_WCMD0_ADDRB_SHIFT)                      /* 0x0000C000 */
/* XMMC_RCMD0 */
#define SFC_V3_XMMC_RCMD0_CMD_SHIFT                        (0U)
#define SFC_V3_XMMC_RCMD0_CMD_MASK                         (0xFFU << SFC_V3_XMMC_RCMD0_CMD_SHIFT)                       /* 0x000000FF */
#define SFC_V3_XMMC_RCMD0_DUMM_SHIFT                       (8U)
#define SFC_V3_XMMC_RCMD0_DUMM_MASK                        (0xFU << SFC_V3_XMMC_RCMD0_DUMM_SHIFT)                       /* 0x00000F00 */
#define SFC_V3_XMMC_RCMD0_CONT_SHIFT                       (13U)
#define SFC_V3_XMMC_RCMD0_CONT_MASK                        (0x1U << SFC_V3_XMMC_RCMD0_CONT_SHIFT)                       /* 0x00002000 */
#define SFC_V3_XMMC_RCMD0_ADDRB_SHIFT                      (14U)
#define SFC_V3_XMMC_RCMD0_ADDRB_MASK                       (0x3U << SFC_V3_XMMC_RCMD0_ADDRB_SHIFT)                      /* 0x0000C000 */
/* XMMC_CTRL */
#define SFC_V3_XMMC_CTRL_DEV_HWEN_SHIFT                    (5U)
#define SFC_V3_XMMC_CTRL_DEV_HWEN_MASK                     (0x1U << SFC_V3_XMMC_CTRL_DEV_HWEN_SHIFT)                    /* 0x00000020 */
#define SFC_V3_XMMC_CTRL_PFT_EN_SHIFT                      (6U)
#define SFC_V3_XMMC_CTRL_PFT_EN_MASK                       (0x1U << SFC_V3_XMMC_CTRL_PFT_EN_SHIFT)                      /* 0x00000040 */
#define SFC_V3_XMMC_CTRL_UINCR_PFT_EN_SHIFT                (7U)
#define SFC_V3_XMMC_CTRL_UINCR_PFT_EN_MASK                 (0x1U << SFC_V3_XMMC_CTRL_UINCR_PFT_EN_SHIFT)                /* 0x00000080 */
#define SFC_V3_XMMC_CTRL_UINCR_LEN_SHIFT                   (8U)
#define SFC_V3_XMMC_CTRL_UINCR_LEN_MASK                    (0xFU << SFC_V3_XMMC_CTRL_UINCR_LEN_SHIFT)                   /* 0x00000F00 */
#define SFC_V3_XMMC_CTRL_DEV_WRAP_EN_SHIFT                 (12U)
#define SFC_V3_XMMC_CTRL_DEV_WRAP_EN_MASK                  (0x1U << SFC_V3_XMMC_CTRL_DEV_WRAP_EN_SHIFT)                 /* 0x00001000 */
#define SFC_V3_XMMC_CTRL_DEV_INCR_EN_SHIFT                 (13U)
#define SFC_V3_XMMC_CTRL_DEV_INCR_EN_MASK                  (0x1U << SFC_V3_XMMC_CTRL_DEV_INCR_EN_SHIFT)                 /* 0x00002000 */
#define SFC_V3_XMMC_CTRL_DEV_UDFINCR_EN_SHIFT              (14U)
#define SFC_V3_XMMC_CTRL_DEV_UDFINCR_EN_MASK               (0x1U << SFC_V3_XMMC_CTRL_DEV_UDFINCR_EN_SHIFT)              /* 0x00004000 */
/* MODE */
#define SFC_V3_MODE_XMMC_MODE_EN_SHIFT                     (0U)
#define SFC_V3_MODE_XMMC_MODE_EN_MASK                      (0x1U << SFC_V3_MODE_XMMC_MODE_EN_SHIFT)                     /* 0x00000001 */
/* DEVRGN */
#define SFC_V3_DEVRGN_RSIZE_SHIFT                          (0U)
#define SFC_V3_DEVRGN_RSIZE_MASK                           (0x1FU << SFC_V3_DEVRGN_RSIZE_SHIFT)                         /* 0x0000001F */
/* DEVSIZE0 */
#define SFC_V3_DEVSIZE0_DSIZE_SHIFT                        (0U)
#define SFC_V3_DEVSIZE0_DSIZE_MASK                         (0x1FU << SFC_V3_DEVSIZE0_DSIZE_SHIFT)                       /* 0x0000001F */
/* TME0 */
#define SFC_V3_TME0_AUTO_RF_EN_SHIFT                       (0U)
#define SFC_V3_TME0_AUTO_RF_EN_MASK                        (0x1U << SFC_V3_TME0_AUTO_RF_EN_SHIFT)                       /* 0x00000001 */
#define SFC_V3_TME0_SCLK_INATM_EN_SHIFT                    (1U)
#define SFC_V3_TME0_SCLK_INATM_EN_MASK                     (0x1U << SFC_V3_TME0_SCLK_INATM_EN_SHIFT)                    /* 0x00000002 */
/* POLLDLY_CTRL */
#define SFC_V3_POLLDLY_CTRL_CNT_SHIFT                      (0U)
#define SFC_V3_POLLDLY_CTRL_CNT_MASK                       (0x7FFFFFFFU << SFC_V3_POLLDLY_CTRL_CNT_SHIFT)               /* 0x7FFFFFFF */
#define SFC_V3_POLLDLY_CTRL_POLLDLY_IP_SHIFT               (31U)
#define SFC_V3_POLLDLY_CTRL_POLLDLY_IP_MASK                (0x1U << SFC_V3_POLLDLY_CTRL_POLLDLY_IP_SHIFT)               /* 0x80000000 */
/* DMATR */
#define SFC_V3_DMATR_DMATR_SHIFT                           (0U)
#define SFC_V3_DMATR_DMATR_MASK                            (0x1U << SFC_V3_DMATR_DMATR_SHIFT)                           /* 0x00000001 */
/* DMAADDR */
#define SFC_V3_DMAADDR_DMAADDR_SHIFT                       (0U)
#define SFC_V3_DMAADDR_DMAADDR_MASK                        (0xFFFFFFFFU << SFC_V3_DMAADDR_DMAADDR_SHIFT)                /* 0xFFFFFFFF */
/* POLL_DATA */
#define SFC_V3_POLL_DATA_POLL_DATA_SHIFT                   (0U)
#define SFC_V3_POLL_DATA_POLL_DATA_MASK                    (0xFFU << SFC_V3_POLL_DATA_POLL_DATA_SHIFT)                  /* 0x000000FF */
#define SFC_V3_POLL_DATA_POLL_STA_SHIFT                    (8U)
#define SFC_V3_POLL_DATA_POLL_STA_MASK                     (0x1U << SFC_V3_POLL_DATA_POLL_STA_SHIFT)                    /* 0x00000100 */
/* XMMCSR */
#define SFC_V3_XMMCSR_SLOPOVER0_SHIFT                      (0U)
#define SFC_V3_XMMCSR_SLOPOVER0_MASK                       (0x1U << SFC_V3_XMMCSR_SLOPOVER0_SHIFT)                      /* 0x00000001 */
#define SFC_V3_XMMCSR_SLOPOVER1_SHIFT                      (1U)
#define SFC_V3_XMMCSR_SLOPOVER1_MASK                       (0x1U << SFC_V3_XMMCSR_SLOPOVER1_SHIFT)                      /* 0x00000002 */
/* CMD */
#define SFC_V3_CMD_CMD_SHIFT                               (0U)
#define SFC_V3_CMD_CMD_MASK                                (0xFFU << SFC_V3_CMD_CMD_SHIFT)                              /* 0x000000FF */
#define SFC_V3_CMD_DUMM_SHIFT                              (8U)
#define SFC_V3_CMD_DUMM_MASK                               (0xFU << SFC_V3_CMD_DUMM_SHIFT)                              /* 0x00000F00 */
#define SFC_V3_CMD_WR_SHIFT                                (12U)
#define SFC_V3_CMD_WR_MASK                                 (0x1U << SFC_V3_CMD_WR_SHIFT)                                /* 0x00001000 */
#define SFC_V3_CMD_CONT_SHIFT                              (13U)
#define SFC_V3_CMD_CONT_MASK                               (0x1U << SFC_V3_CMD_CONT_SHIFT)                              /* 0x00002000 */
#define SFC_V3_CMD_ADDRB_SHIFT                             (14U)
#define SFC_V3_CMD_ADDRB_MASK                              (0x3U << SFC_V3_CMD_ADDRB_SHIFT)                             /* 0x0000C000 */
#define SFC_V3_CMD_TRB_SHIFT                               (16U)
#define SFC_V3_CMD_TRB_MASK                                (0x3FFFU << SFC_V3_CMD_TRB_SHIFT)                            /* 0x3FFF0000 */
#define SFC_V3_CMD_CS_SHIFT                                (30U)
#define SFC_V3_CMD_CS_MASK                                 (0x3U << SFC_V3_CMD_CS_SHIFT)                                /* 0xC0000000 */
/* ADDR */
#define SFC_V3_ADDR_ADDR_SHIFT                             (0U)
#define SFC_V3_ADDR_ADDR_MASK                              (0xFFFFFFFFU << SFC_V3_ADDR_ADDR_SHIFT)                      /* 0xFFFFFFFF */
/* DATA */
#define SFC_V3_DATA_DATA_SHIFT                             (0U)
#define SFC_V3_DATA_DATA_MASK                              (0xFFFFFFFFU << SFC_V3_DATA_DATA_SHIFT)                      /* 0xFFFFFFFF */
/* CTRL1 */
#define SFC_V3_CTRL1_SPIM_SHIFT                            (0U)
#define SFC_V3_CTRL1_SPIM_MASK                             (0x1U << SFC_V3_CTRL1_SPIM_SHIFT)                            /* 0x00000001 */
#define SFC_V3_CTRL1_SHIFTPHASE_SHIFT                      (1U)
#define SFC_V3_CTRL1_SHIFTPHASE_MASK                       (0x1U << SFC_V3_CTRL1_SHIFTPHASE_SHIFT)                      /* 0x00000002 */
#define SFC_V3_CTRL1_IDLE_CYCLE_SHIFT                      (4U)
#define SFC_V3_CTRL1_IDLE_CYCLE_MASK                       (0xFU << SFC_V3_CTRL1_IDLE_CYCLE_SHIFT)                      /* 0x000000F0 */
#define SFC_V3_CTRL1_CMDB_SHIFT                            (8U)
#define SFC_V3_CTRL1_CMDB_MASK                             (0x3U << SFC_V3_CTRL1_CMDB_SHIFT)                            /* 0x00000300 */
#define SFC_V3_CTRL1_ADRB_SHIFT                            (10U)
#define SFC_V3_CTRL1_ADRB_MASK                             (0x3U << SFC_V3_CTRL1_ADRB_SHIFT)                            /* 0x00000C00 */
#define SFC_V3_CTRL1_DATB_SHIFT                            (12U)
#define SFC_V3_CTRL1_DATB_MASK                             (0x3U << SFC_V3_CTRL1_DATB_SHIFT)                            /* 0x00003000 */
/* AX1 */
#define SFC_V3_AX1_AX_SHIFT                                (0U)
#define SFC_V3_AX1_AX_MASK                                 (0xFFU << SFC_V3_AX1_AX_SHIFT)                               /* 0x000000FF */
/* ABIT1 */
#define SFC_V3_ABIT1_ABIT_SHIFT                            (0U)
#define SFC_V3_ABIT1_ABIT_MASK                             (0x1FU << SFC_V3_ABIT1_ABIT_SHIFT)                           /* 0x0000001F */
/* DLL_CTRL1 */
#define SFC_V3_DLL_CTRL1_SMP_DLL_CFG_SHIFT                 (0U)
#define SFC_V3_DLL_CTRL1_SMP_DLL_CFG_MASK                  (0xFFU << SFC_V3_DLL_CTRL1_SMP_DLL_CFG_SHIFT)                /* 0x000000FF */
#define SFC_V3_DLL_CTRL1_SCLK_SMP_SEL_SHIFT                (8U)
#define SFC_V3_DLL_CTRL1_SCLK_SMP_SEL_MASK                 (0x1U << SFC_V3_DLL_CTRL1_SCLK_SMP_SEL_SHIFT)                /* 0x00000100 */
/* XMMC_WCMD1 */
#define SFC_V3_XMMC_WCMD1_CMD_SHIFT                        (0U)
#define SFC_V3_XMMC_WCMD1_CMD_MASK                         (0xFFU << SFC_V3_XMMC_WCMD1_CMD_SHIFT)                       /* 0x000000FF */
#define SFC_V3_XMMC_WCMD1_DUMM_SHIFT                       (8U)
#define SFC_V3_XMMC_WCMD1_DUMM_MASK                        (0xFU << SFC_V3_XMMC_WCMD1_DUMM_SHIFT)                       /* 0x00000F00 */
#define SFC_V3_XMMC_WCMD1_CONT_SHIFT                       (13U)
#define SFC_V3_XMMC_WCMD1_CONT_MASK                        (0x1U << SFC_V3_XMMC_WCMD1_CONT_SHIFT)                       /* 0x00002000 */
#define SFC_V3_XMMC_WCMD1_ADDRB_SHIFT                      (14U)
#define SFC_V3_XMMC_WCMD1_ADDRB_MASK                       (0x3U << SFC_V3_XMMC_WCMD1_ADDRB_SHIFT)                      /* 0x0000C000 */
/* XMMC_RCMD1 */
#define SFC_V3_XMMC_RCMD1_CMD_SHIFT                        (0U)
#define SFC_V3_XMMC_RCMD1_CMD_MASK                         (0xFFU << SFC_V3_XMMC_RCMD1_CMD_SHIFT)                       /* 0x000000FF */
#define SFC_V3_XMMC_RCMD1_DUMM_SHIFT                       (8U)
#define SFC_V3_XMMC_RCMD1_DUMM_MASK                        (0xFU << SFC_V3_XMMC_RCMD1_DUMM_SHIFT)                       /* 0x00000F00 */
#define SFC_V3_XMMC_RCMD1_CONT_SHIFT                       (13U)
#define SFC_V3_XMMC_RCMD1_CONT_MASK                        (0x1U << SFC_V3_XMMC_RCMD1_CONT_SHIFT)                       /* 0x00002000 */
#define SFC_V3_XMMC_RCMD1_ADDRB_SHIFT                      (14U)
#define SFC_V3_XMMC_RCMD1_ADDRB_MASK                       (0x3U << SFC_V3_XMMC_RCMD1_ADDRB_SHIFT)                      /* 0x0000C000 */
/* DEVSIZE1 */
#define SFC_V3_DEVSIZE1_DSIZE_SHIFT                        (0U)
#define SFC_V3_DEVSIZE1_DSIZE_MASK                         (0x1FU << SFC_V3_DEVSIZE1_DSIZE_SHIFT)                       /* 0x0000001F */
/* TME1 */
#define SFC_V3_TME1_AUTO_RF_EN_SHIFT                       (0U)
#define SFC_V3_TME1_AUTO_RF_EN_MASK                        (0x1U << SFC_V3_TME1_AUTO_RF_EN_SHIFT)                       /* 0x00000001 */
#define SFC_V3_TME1_SCLK_INATM_EN_SHIFT                    (1U)
#define SFC_V3_TME1_SCLK_INATM_EN_MASK                     (0x1U << SFC_V3_TME1_SCLK_INATM_EN_SHIFT)                    /* 0x00000002 */
/**************************************RK_CACHE_M4***************************************/
/* CACHE_CTRL */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_EN_SHIFT              (0U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_EN_MASK               (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_EN_SHIFT)              /* 0x00000001 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_WT_EN_SHIFT           (1U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_WT_EN_MASK            (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_WT_EN_SHIFT)           /* 0x00000002 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_HB_EN_SHIFT           (2U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_HB_EN_MASK            (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_HB_EN_SHIFT)           /* 0x00000004 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_STB_EN_SHIFT          (3U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_STB_EN_MASK           (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_STB_EN_SHIFT)          /* 0x00000008 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_FLUSH_SHIFT           (4U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_FLUSH_MASK            (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_FLUSH_SHIFT)           /* 0x00000010 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_PMU_EN_SHIFT          (5U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_PMU_EN_MASK           (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_PMU_EN_SHIFT)          /* 0x00000020 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_BYPASS_SHIFT          (6U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_BYPASS_MASK           (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_BYPASS_SHIFT)          /* 0x00000040 */
#define RK_CACHE_M4_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT        (7U)
#define RK_CACHE_M4_CACHE_CTRL_STB_TIMEOUT_EN_MASK         (0x1U << RK_CACHE_M4_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)        /* 0x00000080 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT    (8U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK     (0x7U << RK_CACHE_M4_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)    /* 0x00000700 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_MPU_MODE_SHIFT        (12U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_MPU_MODE_MASK         (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)        /* 0x00001000 */
#define RK_CACHE_M4_CACHE_CTRL_CACHE_PF_EN_SHIFT           (13U)
#define RK_CACHE_M4_CACHE_CTRL_CACHE_PF_EN_MASK            (0x1U << RK_CACHE_M4_CACHE_CTRL_CACHE_PF_EN_SHIFT)           /* 0x00002000 */
#define RK_CACHE_M4_CACHE_CTRL_AHB_WR_PIPE_SHIFT           (15U)
#define RK_CACHE_M4_CACHE_CTRL_AHB_WR_PIPE_MASK            (0x1U << RK_CACHE_M4_CACHE_CTRL_AHB_WR_PIPE_SHIFT)           /* 0x00008000 */
/* CACHE_MAINTAIN0 */
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT    (0U)
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_VALID_MASK     (0x1U << RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)    /* 0x00000001 */
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT      (1U)
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_CMD_MASK       (0x3U << RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)      /* 0x00000006 */
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT     (5U)
#define RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK      (0x7FFFFFFU << RK_CACHE_M4_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT) /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define RK_CACHE_M4_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT   (0U)
#define RK_CACHE_M4_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK    (0xFFFFU << RK_CACHE_M4_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT) /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define RK_CACHE_M4_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT (0U)
#define RK_CACHE_M4_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK (0x7FFFFU << RK_CACHE_M4_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define RK_CACHE_M4_CACHE_INT_EN_ERR_RECORD_EN_SHIFT       (0U)
#define RK_CACHE_M4_CACHE_INT_EN_ERR_RECORD_EN_MASK        (0x1U << RK_CACHE_M4_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)       /* 0x00000001 */
/* CACHE_INT_ST */
#define RK_CACHE_M4_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT    (0U)
#define RK_CACHE_M4_CACHE_INT_ST_AHB_ERROR_STATUS_MASK     (0x1U << RK_CACHE_M4_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)    /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define RK_CACHE_M4_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT     (0U)
#define RK_CACHE_M4_CACHE_ERR_HADDR_STATUS_HADDR_MASK      (0x1U << RK_CACHE_M4_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)     /* 0x00000001 */
/* CACHE_STATUS */
#define RK_CACHE_M4_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT   (0U)
#define RK_CACHE_M4_CACHE_STATUS_CACHE_INIT_FINISH_MASK    (0x1U << RK_CACHE_M4_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)   /* 0x00000001 */
#define RK_CACHE_M4_CACHE_STATUS_CACHE_M_BUSY_SHIFT        (1U)
#define RK_CACHE_M4_CACHE_STATUS_CACHE_M_BUSY_MASK         (0x1U << RK_CACHE_M4_CACHE_STATUS_CACHE_M_BUSY_SHIFT)        /* 0x00000002 */
#define RK_CACHE_M4_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT    (2U)
#define RK_CACHE_M4_CACHE_STATUS_CACHE_FLUSH_DONE_MASK     (0x1U << RK_CACHE_M4_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)    /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define RK_CACHE_M4_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define RK_CACHE_M4_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define RK_CACHE_M4_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define RK_CACHE_M4_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << RK_CACHE_M4_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define RK_CACHE_M4_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT (0U)
#define RK_CACHE_M4_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK (0xFFFFFFFFU << RK_CACHE_M4_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define RK_CACHE_M4_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define RK_CACHE_M4_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK (0xFFFFFFFFU << RK_CACHE_M4_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define RK_CACHE_M4_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define RK_CACHE_M4_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define RK_CACHE_M4_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define RK_CACHE_M4_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << RK_CACHE_M4_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define RK_CACHE_M4_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define RK_CACHE_M4_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << RK_CACHE_M4_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define RK_CACHE_M4_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define RK_CACHE_M4_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT    (0U)
#define RK_CACHE_M4_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK     (0xFFFFFFFFU << RK_CACHE_M4_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT) /* 0xFFFFFFFF */
/* REVISION */
#define RK_CACHE_M4_REVISION_REVISION_SHIFT                (0U)
#define RK_CACHE_M4_REVISION_REVISION_MASK                 (0xFFFFFFFFU << RK_CACHE_M4_REVISION_REVISION_SHIFT)         /* 0xFFFFFFFF */
/******************************************VOP*******************************************/
/* CON */
#define VOP_CON_SW_MCU_IDLE_DIR_SHIFT                      (0U)
#define VOP_CON_SW_MCU_IDLE_DIR_MASK                       (0x1U << VOP_CON_SW_MCU_IDLE_DIR_SHIFT)                      /* 0x00000001 */
#define VOP_CON_SW_MCU_WR_PHASE_SHIFT                      (1U)
#define VOP_CON_SW_MCU_WR_PHASE_MASK                       (0x3U << VOP_CON_SW_MCU_WR_PHASE_SHIFT)                      /* 0x00000006 */
#define VOP_CON_SW_MCU_BITS_SHIFT                          (3U)
#define VOP_CON_SW_MCU_BITS_MASK                           (0x1U << VOP_CON_SW_MCU_BITS_SHIFT)                          /* 0x00000008 */
#define VOP_CON_SW_MCU_HW_SWAP_SHIFT                       (4U)
#define VOP_CON_SW_MCU_HW_SWAP_MASK                        (0x1U << VOP_CON_SW_MCU_HW_SWAP_SHIFT)                       /* 0x00000010 */
#define VOP_CON_SW_MCU_BYTE_SWAP_SHIFT                     (5U)
#define VOP_CON_SW_MCU_BYTE_SWAP_MASK                      (0x1U << VOP_CON_SW_MCU_BYTE_SWAP_SHIFT)                     /* 0x00000020 */
#define VOP_CON_SW_MCU_Y2R_MODE_SHIFT                      (6U)
#define VOP_CON_SW_MCU_Y2R_MODE_MASK                       (0x3U << VOP_CON_SW_MCU_Y2R_MODE_SHIFT)                      /* 0x000000C0 */
#define VOP_CON_SW_MCU_INPUT_FORMAT_SHIFT                  (8U)
#define VOP_CON_SW_MCU_INPUT_FORMAT_MASK                   (0x1U << VOP_CON_SW_MCU_INPUT_FORMAT_SHIFT)                  /* 0x00000100 */
#define VOP_CON_SW_MCU_UV_SWAP_SHIFT                       (9U)
#define VOP_CON_SW_MCU_UV_SWAP_MASK                        (0x1U << VOP_CON_SW_MCU_UV_SWAP_SHIFT)                       /* 0x00000200 */
#define VOP_CON_SW_DITHER_DOWN_EN_SHIFT                    (10U)
#define VOP_CON_SW_DITHER_DOWN_EN_MASK                     (0x1U << VOP_CON_SW_DITHER_DOWN_EN_SHIFT)                    /* 0x00000400 */
#define VOP_CON_SW_WDATA_BYPASS_EN_SHIFT                   (11U)
#define VOP_CON_SW_WDATA_BYPASS_EN_MASK                    (0x1U << VOP_CON_SW_WDATA_BYPASS_EN_SHIFT)                   /* 0x00000800 */
#define VOP_CON_SW_AUTO_CKG_SHIFT                          (12U)
#define VOP_CON_SW_AUTO_CKG_MASK                           (0x1U << VOP_CON_SW_AUTO_CKG_SHIFT)                          /* 0x00001000 */
#define VOP_CON_SW_MCU_BURST_SHIFT                         (13U)
#define VOP_CON_SW_MCU_BURST_MASK                          (0x7U << VOP_CON_SW_MCU_BURST_SHIFT)                         /* 0x0000E000 */
/* VERSION */
#define VOP_VERSION_SW_MCU_VERSION_SHIFT                   (0U)
#define VOP_VERSION_SW_MCU_VERSION_MASK                    (0xFFFFFFFFU << VOP_VERSION_SW_MCU_VERSION_SHIFT)            /* 0xFFFFFFFF */
/* TIMING */
#define VOP_TIMING_SW_MCU_RWCS_SHIFT                       (0U)
#define VOP_TIMING_SW_MCU_RWCS_MASK                        (0x1FU << VOP_TIMING_SW_MCU_RWCS_SHIFT)                      /* 0x0000001F */
#define VOP_TIMING_SW_MCU_RWPW_SHIFT                       (5U)
#define VOP_TIMING_SW_MCU_RWPW_MASK                        (0x3FU << VOP_TIMING_SW_MCU_RWPW_SHIFT)                      /* 0x000007E0 */
#define VOP_TIMING_SW_MCU_CSRW_SHIFT                       (12U)
#define VOP_TIMING_SW_MCU_CSRW_MASK                        (0xFU << VOP_TIMING_SW_MCU_CSRW_SHIFT)                       /* 0x0000F000 */
/* LCD_SIZE */
#define VOP_LCD_SIZE_SW_MCU_LCD_WIDTH_SHIFT                (0U)
#define VOP_LCD_SIZE_SW_MCU_LCD_WIDTH_MASK                 (0x1FFU << VOP_LCD_SIZE_SW_MCU_LCD_WIDTH_SHIFT)              /* 0x000001FF */
#define VOP_LCD_SIZE_SW_MCU_LCD_HEIGHT_SHIFT               (12U)
#define VOP_LCD_SIZE_SW_MCU_LCD_HEIGHT_MASK                (0x1FFU << VOP_LCD_SIZE_SW_MCU_LCD_HEIGHT_SHIFT)             /* 0x001FF000 */
/* FIFO_WATERMARK */
#define VOP_FIFO_WATERMARK_SW_ALMOST_FULL_WATERMARK_SHIFT  (0U)
#define VOP_FIFO_WATERMARK_SW_ALMOST_FULL_WATERMARK_MASK   (0x1FU << VOP_FIFO_WATERMARK_SW_ALMOST_FULL_WATERMARK_SHIFT) /* 0x0000001F */
#define VOP_FIFO_WATERMARK_SW_ALMOST_EMPTY_WATERMARK_SHIFT (8U)
#define VOP_FIFO_WATERMARK_SW_ALMOST_EMPTY_WATERMARK_MASK  (0x1FU << VOP_FIFO_WATERMARK_SW_ALMOST_EMPTY_WATERMARK_SHIFT) /* 0x00001F00 */
/* SRT */
#define VOP_SRT_SW_SOFT_RESET_SHIFT                        (0U)
#define VOP_SRT_SW_SOFT_RESET_MASK                         (0x1U << VOP_SRT_SW_SOFT_RESET_SHIFT)                        /* 0x00000001 */
/* INT_EN */
#define VOP_INT_EN_SW_INT_EN_FRAME_DONE_SHIFT              (0U)
#define VOP_INT_EN_SW_INT_EN_FRAME_DONE_MASK               (0x1U << VOP_INT_EN_SW_INT_EN_FRAME_DONE_SHIFT)              /* 0x00000001 */
#define VOP_INT_EN_SW_INT_EN_FIFO_EMPTY_SHIFT              (1U)
#define VOP_INT_EN_SW_INT_EN_FIFO_EMPTY_MASK               (0x1U << VOP_INT_EN_SW_INT_EN_FIFO_EMPTY_SHIFT)              /* 0x00000002 */
#define VOP_INT_EN_SW_INT_EN_FIFO_FULL_SHIFT               (2U)
#define VOP_INT_EN_SW_INT_EN_FIFO_FULL_MASK                (0x1U << VOP_INT_EN_SW_INT_EN_FIFO_FULL_SHIFT)               /* 0x00000004 */
/* INT_CLEAR */
#define VOP_INT_CLEAR_SW_INT_CLEAR_FRAME_DONE_SHIFT        (0U)
#define VOP_INT_CLEAR_SW_INT_CLEAR_FRAME_DONE_MASK         (0x1U << VOP_INT_CLEAR_SW_INT_CLEAR_FRAME_DONE_SHIFT)        /* 0x00000001 */
#define VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_EMPTY_SHIFT        (1U)
#define VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_EMPTY_MASK         (0x1U << VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_EMPTY_SHIFT)        /* 0x00000002 */
#define VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_FULL_SHIFT         (2U)
#define VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_FULL_MASK          (0x1U << VOP_INT_CLEAR_SW_INT_CLEAR_FIFO_FULL_SHIFT)         /* 0x00000004 */
/* INT_STATUS */
#define VOP_INT_STATUS_SW_INT_FRAME_DONE_SHIFT             (0U)
#define VOP_INT_STATUS_SW_INT_FRAME_DONE_MASK              (0x1U << VOP_INT_STATUS_SW_INT_FRAME_DONE_SHIFT)             /* 0x00000001 */
#define VOP_INT_STATUS_SW_INT_FIFO_EMPTY_SHIFT             (1U)
#define VOP_INT_STATUS_SW_INT_FIFO_EMPTY_MASK              (0x1U << VOP_INT_STATUS_SW_INT_FIFO_EMPTY_SHIFT)             /* 0x00000002 */
#define VOP_INT_STATUS_SW_INT_FIFO_FULL_SHIFT              (2U)
#define VOP_INT_STATUS_SW_INT_FIFO_FULL_MASK               (0x1U << VOP_INT_STATUS_SW_INT_FIFO_FULL_SHIFT)              /* 0x00000004 */
#define VOP_INT_STATUS_SW_INT_RAW_FRAME_DONE_SHIFT         (3U)
#define VOP_INT_STATUS_SW_INT_RAW_FRAME_DONE_MASK          (0x1U << VOP_INT_STATUS_SW_INT_RAW_FRAME_DONE_SHIFT)         /* 0x00000008 */
#define VOP_INT_STATUS_SW_INT_RAW_FIFO_EMPTY_SHIFT         (4U)
#define VOP_INT_STATUS_SW_INT_RAW_FIFO_EMPTY_MASK          (0x1U << VOP_INT_STATUS_SW_INT_RAW_FIFO_EMPTY_SHIFT)         /* 0x00000010 */
#define VOP_INT_STATUS_SW_INT_RAW_FIFO_FULL_SHIFT          (5U)
#define VOP_INT_STATUS_SW_INT_RAW_FIFO_FULL_MASK           (0x1U << VOP_INT_STATUS_SW_INT_RAW_FIFO_FULL_SHIFT)          /* 0x00000020 */
/* STATUS */
#define VOP_STATUS_SW_MCU_WORKING_SHIFT                    (0U)
#define VOP_STATUS_SW_MCU_WORKING_MASK                     (0x1U << VOP_STATUS_SW_MCU_WORKING_SHIFT)                    /* 0x00000001 */
#define VOP_STATUS_SW_MCU_CURRENT_ROW_SHIFT                (4U)
#define VOP_STATUS_SW_MCU_CURRENT_ROW_MASK                 (0x1FFU << VOP_STATUS_SW_MCU_CURRENT_ROW_SHIFT)              /* 0x00001FF0 */
#define VOP_STATUS_SW_MCU_CURRENT_LINE_SHIFT               (16U)
#define VOP_STATUS_SW_MCU_CURRENT_LINE_MASK                (0x1FFU << VOP_STATUS_SW_MCU_CURRENT_LINE_SHIFT)             /* 0x01FF0000 */
/* CMD */
#define VOP_CMD_MCU_CMD_LOW_BITS_SHIFT                     (0U)
#define VOP_CMD_MCU_CMD_LOW_BITS_MASK                      (0xFFU << VOP_CMD_MCU_CMD_LOW_BITS_SHIFT)                    /* 0x000000FF */
#define VOP_CMD_MCU_CMD_HIGH_BITS_SHIFT                    (8U)
#define VOP_CMD_MCU_CMD_HIGH_BITS_MASK                     (0xFFFFFFU << VOP_CMD_MCU_CMD_HIGH_BITS_SHIFT)               /* 0xFFFFFF00 */
/* DATA */
#define VOP_DATA_MCU_DATA_LOW_BITS_SHIFT                   (0U)
#define VOP_DATA_MCU_DATA_LOW_BITS_MASK                    (0xFFU << VOP_DATA_MCU_DATA_LOW_BITS_SHIFT)                  /* 0x000000FF */
#define VOP_DATA_MCU_DATA_HIGH_BITS_SHIFT                  (8U)
#define VOP_DATA_MCU_DATA_HIGH_BITS_MASK                   (0xFFFFFFU << VOP_DATA_MCU_DATA_HIGH_BITS_SHIFT)             /* 0xFFFFFF00 */
/* START */
#define VOP_START_SW_MCU_START_SHIFT                       (0U)
#define VOP_START_SW_MCU_START_MASK                        (0x1U << VOP_START_SW_MCU_START_SHIFT)                       /* 0x00000001 */
/*****************************************AUDPWM*****************************************/
/* VERSION */
#define AUDPWM_VERSION_VERSION_SHIFT                       (0U)
#define AUDPWM_VERSION_VERSION_MASK                        (0xFFFFFFFFU << AUDPWM_VERSION_VERSION_SHIFT)                /* 0xFFFFFFFF */
/* XFER */
#define AUDPWM_XFER_START_SHIFT                            (0U)
#define AUDPWM_XFER_START_MASK                             (0x1U << AUDPWM_XFER_START_SHIFT)                            /* 0x00000001 */
#define AUDPWM_XFER_LSTOP_SHIFT                            (1U)
#define AUDPWM_XFER_LSTOP_MASK                             (0x1U << AUDPWM_XFER_LSTOP_SHIFT)                            /* 0x00000002 */
/* SRC_CFG */
#define AUDPWM_SRC_CFG_WIDTH_SHIFT                         (0U)
#define AUDPWM_SRC_CFG_WIDTH_MASK                          (0x1FU << AUDPWM_SRC_CFG_WIDTH_SHIFT)                        /* 0x0000001F */
#define AUDPWM_SRC_CFG_ALIGN_SHIFT                         (5U)
#define AUDPWM_SRC_CFG_ALIGN_MASK                          (0x1U << AUDPWM_SRC_CFG_ALIGN_SHIFT)                         /* 0x00000020 */
#define AUDPWM_SRC_CFG_HALF_EN_SHIFT                       (6U)
#define AUDPWM_SRC_CFG_HALF_EN_MASK                        (0x1U << AUDPWM_SRC_CFG_HALF_EN_SHIFT)                       /* 0x00000040 */
/* PWM_CFG */
#define AUDPWM_PWM_CFG_INTERPOLATE_RATE_SHIFT              (0U)
#define AUDPWM_PWM_CFG_INTERPOLATE_RATE_MASK               (0xFU << AUDPWM_PWM_CFG_INTERPOLATE_RATE_SHIFT)              /* 0x0000000F */
#define AUDPWM_PWM_CFG_LINEAR_INTERPOLATE_EN_SHIFT         (4U)
#define AUDPWM_PWM_CFG_LINEAR_INTERPOLATE_EN_MASK          (0x1U << AUDPWM_PWM_CFG_LINEAR_INTERPOLATE_EN_SHIFT)         /* 0x00000010 */
#define AUDPWM_PWM_CFG_PWM_OUT_SWAP_SHIFT                  (5U)
#define AUDPWM_PWM_CFG_PWM_OUT_SWAP_MASK                   (0x1U << AUDPWM_PWM_CFG_PWM_OUT_SWAP_SHIFT)                  /* 0x00000020 */
#define AUDPWM_PWM_CFG_PWM0_DIS_SHIFT                      (6U)
#define AUDPWM_PWM_CFG_PWM0_DIS_MASK                       (0x1U << AUDPWM_PWM_CFG_PWM0_DIS_SHIFT)                      /* 0x00000040 */
#define AUDPWM_PWM_CFG_PWM1_DIS_SHIFT                      (7U)
#define AUDPWM_PWM_CFG_PWM1_DIS_MASK                       (0x1U << AUDPWM_PWM_CFG_PWM1_DIS_SHIFT)                      /* 0x00000080 */
#define AUDPWM_PWM_CFG_SAMPLE_RATE_SHIFT                   (8U)
#define AUDPWM_PWM_CFG_SAMPLE_RATE_MASK                    (0x3U << AUDPWM_PWM_CFG_SAMPLE_RATE_SHIFT)                   /* 0x00000300 */
/* PWM_ST */
#define AUDPWM_PWM_ST_RX_FIFO_BUSY_SHIFT                   (0U)
#define AUDPWM_PWM_ST_RX_FIFO_BUSY_MASK                    (0x1U << AUDPWM_PWM_ST_RX_FIFO_BUSY_SHIFT)                   /* 0x00000001 */
#define AUDPWM_PWM_ST_PWM_BUSY_SHIFT                       (1U)
#define AUDPWM_PWM_ST_PWM_BUSY_MASK                        (0x1U << AUDPWM_PWM_ST_PWM_BUSY_SHIFT)                       /* 0x00000002 */
/* PWM_BUF_01 */
#define AUDPWM_PWM_BUF_01_PWM_BUF_0_SHIFT                  (0U)
#define AUDPWM_PWM_BUF_01_PWM_BUF_0_MASK                   (0x7FFU << AUDPWM_PWM_BUF_01_PWM_BUF_0_SHIFT)                /* 0x000007FF */
#define AUDPWM_PWM_BUF_01_PWM_BUF_1_SHIFT                  (16U)
#define AUDPWM_PWM_BUF_01_PWM_BUF_1_MASK                   (0x7FFU << AUDPWM_PWM_BUF_01_PWM_BUF_1_SHIFT)                /* 0x07FF0000 */
/* PWM_BUF_23 */
#define AUDPWM_PWM_BUF_23_PWM_BUF_2_SHIFT                  (0U)
#define AUDPWM_PWM_BUF_23_PWM_BUF_2_MASK                   (0x7FFU << AUDPWM_PWM_BUF_23_PWM_BUF_2_SHIFT)                /* 0x000007FF */
#define AUDPWM_PWM_BUF_23_PWM_BUF_3_SHIFT                  (16U)
#define AUDPWM_PWM_BUF_23_PWM_BUF_3_MASK                   (0x7FFU << AUDPWM_PWM_BUF_23_PWM_BUF_3_SHIFT)                /* 0x07FF0000 */
/* FIFO_CFG */
#define AUDPWM_FIFO_CFG_DMA_WATERMARK_SHIFT                (0U)
#define AUDPWM_FIFO_CFG_DMA_WATERMARK_MASK                 (0x1FU << AUDPWM_FIFO_CFG_DMA_WATERMARK_SHIFT)               /* 0x0000001F */
#define AUDPWM_FIFO_CFG_DMA_ENA_SHIFT                      (7U)
#define AUDPWM_FIFO_CFG_DMA_ENA_MASK                       (0x1U << AUDPWM_FIFO_CFG_DMA_ENA_SHIFT)                      /* 0x00000080 */
#define AUDPWM_FIFO_CFG_ALMOST_FULL_WATERMARK_SHIFT        (8U)
#define AUDPWM_FIFO_CFG_ALMOST_FULL_WATERMARK_MASK         (0x1FU << AUDPWM_FIFO_CFG_ALMOST_FULL_WATERMARK_SHIFT)       /* 0x00001F00 */
/* FIFO_ST */
#define AUDPWM_FIFO_ST_FIFO_UNUSED_WORD_SHIFT              (0U)
#define AUDPWM_FIFO_ST_FIFO_UNUSED_WORD_MASK               (0x3FU << AUDPWM_FIFO_ST_FIFO_UNUSED_WORD_SHIFT)             /* 0x0000003F */
/* FIFO_INT_EN */
#define AUDPWM_FIFO_INT_EN_FULL_INT_EN_SHIFT               (0U)
#define AUDPWM_FIFO_INT_EN_FULL_INT_EN_MASK                (0x1U << AUDPWM_FIFO_INT_EN_FULL_INT_EN_SHIFT)               /* 0x00000001 */
#define AUDPWM_FIFO_INT_EN_OVERRUN_INT_EN_SHIFT            (1U)
#define AUDPWM_FIFO_INT_EN_OVERRUN_INT_EN_MASK             (0x1U << AUDPWM_FIFO_INT_EN_OVERRUN_INT_EN_SHIFT)            /* 0x00000002 */
#define AUDPWM_FIFO_INT_EN_EMPTY_INT_EN_SHIFT              (2U)
#define AUDPWM_FIFO_INT_EN_EMPTY_INT_EN_MASK               (0x1U << AUDPWM_FIFO_INT_EN_EMPTY_INT_EN_SHIFT)              /* 0x00000004 */
/* FIFO_INT_ST */
#define AUDPWM_FIFO_INT_ST_FULL_INT_ST_SHIFT               (0U)
#define AUDPWM_FIFO_INT_ST_FULL_INT_ST_MASK                (0x1U << AUDPWM_FIFO_INT_ST_FULL_INT_ST_SHIFT)               /* 0x00000001 */
#define AUDPWM_FIFO_INT_ST_OVERRUN_INT_ST_SHIFT            (1U)
#define AUDPWM_FIFO_INT_ST_OVERRUN_INT_ST_MASK             (0x1U << AUDPWM_FIFO_INT_ST_OVERRUN_INT_ST_SHIFT)            /* 0x00000002 */
#define AUDPWM_FIFO_INT_ST_EMPTY_INT_ST_SHIFT              (2U)
#define AUDPWM_FIFO_INT_ST_EMPTY_INT_ST_MASK               (0x1U << AUDPWM_FIFO_INT_ST_EMPTY_INT_ST_SHIFT)              /* 0x00000004 */
/* FIFO_ENTRY */
#define AUDPWM_FIFO_ENTRY_FIFO_DATA_ENTRY_SHIFT            (0U)
#define AUDPWM_FIFO_ENTRY_FIFO_DATA_ENTRY_MASK             (0xFFFFFFFFU << AUDPWM_FIFO_ENTRY_FIFO_DATA_ENTRY_SHIFT)     /* 0xFFFFFFFF */
/******************************************PMU*******************************************/
/* WAKEUP_CFG */
#define PMU_WAKEUP_CFG_M4_INT_EN_SHIFT                     (0U)
#define PMU_WAKEUP_CFG_M4_INT_EN_MASK                      (0x1U << PMU_WAKEUP_CFG_M4_INT_EN_SHIFT)                     /* 0x00000001 */
#define PMU_WAKEUP_CFG_M0_INT_EN_SHIFT                     (1U)
#define PMU_WAKEUP_CFG_M0_INT_EN_MASK                      (0x1U << PMU_WAKEUP_CFG_M0_INT_EN_SHIFT)                     /* 0x00000002 */
#define PMU_WAKEUP_CFG_TIMEOUT_EN_SHIFT                    (2U)
#define PMU_WAKEUP_CFG_TIMEOUT_EN_MASK                     (0x1U << PMU_WAKEUP_CFG_TIMEOUT_EN_SHIFT)                    /* 0x00000004 */
/* PWRDN_ST */
#define PMU_PWRDN_ST_RPU_SLEEP_READY_SHIFT                 (0U)
#define PMU_PWRDN_ST_RPU_SLEEP_READY_MASK                  (0x1U << PMU_PWRDN_ST_RPU_SLEEP_READY_SHIFT)                 /* 0x00000001 */
#define PMU_PWRDN_ST_M4_SLEEP_SHIFT                        (1U)
#define PMU_PWRDN_ST_M4_SLEEP_MASK                         (0x1U << PMU_PWRDN_ST_M4_SLEEP_SHIFT)                        /* 0x00000002 */
#define PMU_PWRDN_ST_M0_SLEEP_SHIFT                        (2U)
#define PMU_PWRDN_ST_M0_SLEEP_MASK                         (0x1U << PMU_PWRDN_ST_M0_SLEEP_SHIFT)                        /* 0x00000004 */
#define PMU_PWRDN_ST_M4_DBGPWRUPREQ_SHIFT                  (3U)
#define PMU_PWRDN_ST_M4_DBGPWRUPREQ_MASK                   (0x1U << PMU_PWRDN_ST_M4_DBGPWRUPREQ_SHIFT)                  /* 0x00000008 */
#define PMU_PWRDN_ST_M0_DBGPWRUPREQ_SHIFT                  (4U)
#define PMU_PWRDN_ST_M0_DBGPWRUPREQ_MASK                   (0x1U << PMU_PWRDN_ST_M0_DBGPWRUPREQ_SHIFT)                  /* 0x00000010 */
#define PMU_PWRDN_ST_LPW_SLEEP_NOW_SHIFT                   (5U)
#define PMU_PWRDN_ST_LPW_SLEEP_NOW_MASK                    (0x1U << PMU_PWRDN_ST_LPW_SLEEP_NOW_SHIFT)                   /* 0x00000020 */
#define PMU_PWRDN_ST_LPW_SLEEP_STATE_SHIFT                 (6U)
#define PMU_PWRDN_ST_LPW_SLEEP_STATE_MASK                  (0x1U << PMU_PWRDN_ST_LPW_SLEEP_STATE_SHIFT)                 /* 0x00000040 */
#define PMU_PWRDN_ST_PD_LPW_DWN_STAT_SHIFT                 (7U)
#define PMU_PWRDN_ST_PD_LPW_DWN_STAT_MASK                  (0x1U << PMU_PWRDN_ST_PD_LPW_DWN_STAT_SHIFT)                 /* 0x00000080 */
#define PMU_PWRDN_ST_PD_PERI_DWN_STAT_SHIFT                (8U)
#define PMU_PWRDN_ST_PD_PERI_DWN_STAT_MASK                 (0x1U << PMU_PWRDN_ST_PD_PERI_DWN_STAT_SHIFT)                /* 0x00000100 */
#define PMU_PWRDN_ST_PD_MCU_DWN_STAT_SHIFT                 (9U)
#define PMU_PWRDN_ST_PD_MCU_DWN_STAT_MASK                  (0x1U << PMU_PWRDN_ST_PD_MCU_DWN_STAT_SHIFT)                 /* 0x00000200 */
#define PMU_PWRDN_ST_LDO_REGULAR_OK_SHIFT                  (10U)
#define PMU_PWRDN_ST_LDO_REGULAR_OK_MASK                   (0x1U << PMU_PWRDN_ST_LDO_REGULAR_OK_SHIFT)                  /* 0x00000400 */
/* PWRMODE_CON */
#define PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT                (0U)
#define PMU_PWRMODE_CON_POWER_MODE_EN_MASK                 (0x1U << PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT)                /* 0x00000001 */
#define PMU_PWRMODE_CON_CLR_WIFI_SHIFT                     (1U)
#define PMU_PWRMODE_CON_CLR_WIFI_MASK                      (0x1U << PMU_PWRMODE_CON_CLR_WIFI_SHIFT)                     /* 0x00000002 */
#define PMU_PWRMODE_CON_CLR_PERI_SHIFT                     (2U)
#define PMU_PWRMODE_CON_CLR_PERI_MASK                      (0x1U << PMU_PWRMODE_CON_CLR_PERI_SHIFT)                     /* 0x00000004 */
#define PMU_PWRMODE_CON_CLR_MCU_SHIFT                      (3U)
#define PMU_PWRMODE_CON_CLR_MCU_MASK                       (0x1U << PMU_PWRMODE_CON_CLR_MCU_SHIFT)                      /* 0x00000008 */
#define PMU_PWRMODE_CON_CLR_TOP_SHIFT                      (4U)
#define PMU_PWRMODE_CON_CLR_TOP_MASK                       (0x1U << PMU_PWRMODE_CON_CLR_TOP_SHIFT)                      /* 0x00000010 */
#define PMU_PWRMODE_CON_NOC_AUTO_CON_WIFI_SHIFT            (5U)
#define PMU_PWRMODE_CON_NOC_AUTO_CON_WIFI_MASK             (0x1U << PMU_PWRMODE_CON_NOC_AUTO_CON_WIFI_SHIFT)            /* 0x00000020 */
#define PMU_PWRMODE_CON_NOC_AUTO_CON_PERI_SHIFT            (6U)
#define PMU_PWRMODE_CON_NOC_AUTO_CON_PERI_MASK             (0x1U << PMU_PWRMODE_CON_NOC_AUTO_CON_PERI_SHIFT)            /* 0x00000040 */
#define PMU_PWRMODE_CON_NOC_AUTO_CON_MCU_SHIFT             (7U)
#define PMU_PWRMODE_CON_NOC_AUTO_CON_MCU_MASK              (0x1U << PMU_PWRMODE_CON_NOC_AUTO_CON_MCU_SHIFT)             /* 0x00000080 */
#define PMU_PWRMODE_CON_NOC_AUTO_CON_TOP_SHIFT             (8U)
#define PMU_PWRMODE_CON_NOC_AUTO_CON_TOP_MASK              (0x1U << PMU_PWRMODE_CON_NOC_AUTO_CON_TOP_SHIFT)             /* 0x00000100 */
#define PMU_PWRMODE_CON_CLK_CORE_SRC_GATE_SHIFT            (9U)
#define PMU_PWRMODE_CON_CLK_CORE_SRC_GATE_MASK             (0x1U << PMU_PWRMODE_CON_CLK_CORE_SRC_GATE_SHIFT)            /* 0x00000200 */
#define PMU_PWRMODE_CON_CLK_TOP_SRC_GATE_SHIFT             (10U)
#define PMU_PWRMODE_CON_CLK_TOP_SRC_GATE_MASK              (0x1U << PMU_PWRMODE_CON_CLK_TOP_SRC_GATE_SHIFT)             /* 0x00000400 */
#define PMU_PWRMODE_CON_PMU_USE_LF_SHIFT                   (11U)
#define PMU_PWRMODE_CON_PMU_USE_LF_MASK                    (0x1U << PMU_PWRMODE_CON_PMU_USE_LF_SHIFT)                   /* 0x00000800 */
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_SHIFT           (12U)
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_MASK            (0x1U << PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_SHIFT)           /* 0x00001000 */
#define PMU_PWRMODE_CON_MCU_PD_EN_SHIFT                    (13U)
#define PMU_PWRMODE_CON_MCU_PD_EN_MASK                     (0x1U << PMU_PWRMODE_CON_MCU_PD_EN_SHIFT)                    /* 0x00002000 */
#define PMU_PWRMODE_CON_RF_RESET_EN_SHIFT                  (14U)
#define PMU_PWRMODE_CON_RF_RESET_EN_MASK                   (0x1U << PMU_PWRMODE_CON_RF_RESET_EN_SHIFT)                  /* 0x00004000 */
#define PMU_PWRMODE_CON_AON_RESET_EN_SHIFT                 (15U)
#define PMU_PWRMODE_CON_AON_RESET_EN_MASK                  (0x1U << PMU_PWRMODE_CON_AON_RESET_EN_SHIFT)                 /* 0x00008000 */
#define PMU_PWRMODE_CON_OSC_DIS_SHIFT                      (16U)
#define PMU_PWRMODE_CON_OSC_DIS_MASK                       (0x1U << PMU_PWRMODE_CON_OSC_DIS_SHIFT)                      /* 0x00010000 */
#define PMU_PWRMODE_CON_RF_VDD18_DIS_SHIFT                 (17U)
#define PMU_PWRMODE_CON_RF_VDD18_DIS_MASK                  (0x1U << PMU_PWRMODE_CON_RF_VDD18_DIS_SHIFT)                 /* 0x00020000 */
#define PMU_PWRMODE_CON_WAIT_WAKEUP_BEGIN_SHIFT            (18U)
#define PMU_PWRMODE_CON_WAIT_WAKEUP_BEGIN_MASK             (0x1U << PMU_PWRMODE_CON_WAIT_WAKEUP_BEGIN_SHIFT)            /* 0x00040000 */
#define PMU_PWRMODE_CON_OSC_40M_GATE_EN_SHIFT              (19U)
#define PMU_PWRMODE_CON_OSC_40M_GATE_EN_MASK               (0x1U << PMU_PWRMODE_CON_OSC_40M_GATE_EN_SHIFT)              /* 0x00080000 */
#define PMU_PWRMODE_CON_PLL_PD_EN_SHIFT                    (20U)
#define PMU_PWRMODE_CON_PLL_PD_EN_MASK                     (0x1U << PMU_PWRMODE_CON_PLL_PD_EN_SHIFT)                    /* 0x00100000 */
#define PMU_PWRMODE_CON_GPLL_PD_EN_SHIFT                   (21U)
#define PMU_PWRMODE_CON_GPLL_PD_EN_MASK                    (0x1U << PMU_PWRMODE_CON_GPLL_PD_EN_SHIFT)                   /* 0x00200000 */
#define PMU_PWRMODE_CON_VPLL_PD_EN_SHIFT                   (22U)
#define PMU_PWRMODE_CON_VPLL_PD_EN_MASK                    (0x1U << PMU_PWRMODE_CON_VPLL_PD_EN_SHIFT)                   /* 0x00400000 */
#define PMU_PWRMODE_CON_PMU_SLEEP_POL_SHIFT                (23U)
#define PMU_PWRMODE_CON_PMU_SLEEP_POL_MASK                 (0x1U << PMU_PWRMODE_CON_PMU_SLEEP_POL_SHIFT)                /* 0x00800000 */
#define PMU_PWRMODE_CON_SRAM_RET_EN_SHIFT                  (24U)
#define PMU_PWRMODE_CON_SRAM_RET_EN_MASK                   (0xFU << PMU_PWRMODE_CON_SRAM_RET_EN_SHIFT)                  /* 0x0F000000 */
/* SFT_CON */
#define PMU_SFT_CON_IDLE_REQ_LPW_CFG_SHIFT                 (0U)
#define PMU_SFT_CON_IDLE_REQ_LPW_CFG_MASK                  (0x1U << PMU_SFT_CON_IDLE_REQ_LPW_CFG_SHIFT)                 /* 0x00000001 */
#define PMU_SFT_CON_IDLE_REQ_PER_CFG_SHIFT                 (1U)
#define PMU_SFT_CON_IDLE_REQ_PER_CFG_MASK                  (0x1U << PMU_SFT_CON_IDLE_REQ_PER_CFG_SHIFT)                 /* 0x00000002 */
#define PMU_SFT_CON_IDLE_REQ_MCU_CFG_SHIFT                 (2U)
#define PMU_SFT_CON_IDLE_REQ_MCU_CFG_MASK                  (0x1U << PMU_SFT_CON_IDLE_REQ_MCU_CFG_SHIFT)                 /* 0x00000004 */
#define PMU_SFT_CON_IDLE_REQ_TOP_CFG_SHIFT                 (3U)
#define PMU_SFT_CON_IDLE_REQ_TOP_CFG_MASK                  (0x1U << PMU_SFT_CON_IDLE_REQ_TOP_CFG_SHIFT)                 /* 0x00000008 */
#define PMU_SFT_CON_M4_CLK_SRC_GATING_CFG_SHIFT            (4U)
#define PMU_SFT_CON_M4_CLK_SRC_GATING_CFG_MASK             (0x1U << PMU_SFT_CON_M4_CLK_SRC_GATING_CFG_SHIFT)            /* 0x00000010 */
#define PMU_SFT_CON_LF_ENA_CFG_SHIFT                       (5U)
#define PMU_SFT_CON_LF_ENA_CFG_MASK                        (0x1U << PMU_SFT_CON_LF_ENA_CFG_SHIFT)                       /* 0x00000020 */
#define PMU_SFT_CON_LF_MODE_CFG_SHIFT                      (6U)
#define PMU_SFT_CON_LF_MODE_CFG_MASK                       (0x1U << PMU_SFT_CON_LF_MODE_CFG_SHIFT)                      /* 0x00000040 */
#define PMU_SFT_CON_LF_SWITCH_CFG_SHIFT                    (7U)
#define PMU_SFT_CON_LF_SWITCH_CFG_MASK                     (0x1U << PMU_SFT_CON_LF_SWITCH_CFG_SHIFT)                    /* 0x00000080 */
#define PMU_SFT_CON_OSC_40_GATE_CFG_SHIFT                  (8U)
#define PMU_SFT_CON_OSC_40_GATE_CFG_MASK                   (0x1U << PMU_SFT_CON_OSC_40_GATE_CFG_SHIFT)                  /* 0x00000100 */
#define PMU_SFT_CON_PD_PERI_PWRDWN_CFG_SHIFT               (9U)
#define PMU_SFT_CON_PD_PERI_PWRDWN_CFG_MASK                (0x1U << PMU_SFT_CON_PD_PERI_PWRDWN_CFG_SHIFT)               /* 0x00000200 */
#define PMU_SFT_CON_PD_MCU_PWRDWN_CFG_SHIFT                (10U)
#define PMU_SFT_CON_PD_MCU_PWRDWN_CFG_MASK                 (0x1U << PMU_SFT_CON_PD_MCU_PWRDWN_CFG_SHIFT)                /* 0x00000400 */
#define PMU_SFT_CON_GPLL_PD_CFG_SHIFT                      (11U)
#define PMU_SFT_CON_GPLL_PD_CFG_MASK                       (0x1U << PMU_SFT_CON_GPLL_PD_CFG_SHIFT)                      /* 0x00000800 */
#define PMU_SFT_CON_VPLL_PD_CFG_SHIFT                      (12U)
#define PMU_SFT_CON_VPLL_PD_CFG_MASK                       (0x1U << PMU_SFT_CON_VPLL_PD_CFG_SHIFT)                      /* 0x00001000 */
#define PMU_SFT_CON_RF_RESETN_CFG_SHIFT                    (13U)
#define PMU_SFT_CON_RF_RESETN_CFG_MASK                     (0x1U << PMU_SFT_CON_RF_RESETN_CFG_SHIFT)                    /* 0x00002000 */
#define PMU_SFT_CON_RF_VDD18_CFG_SHIFT                     (14U)
#define PMU_SFT_CON_RF_VDD18_CFG_MASK                      (0x1U << PMU_SFT_CON_RF_VDD18_CFG_SHIFT)                     /* 0x00004000 */
#define PMU_SFT_CON_RF_XO_CFG_SHIFT                        (15U)
#define PMU_SFT_CON_RF_XO_CFG_MASK                         (0x1U << PMU_SFT_CON_RF_XO_CFG_SHIFT)                        /* 0x00008000 */
#define PMU_SFT_CON_AON_RESETN_CFG_SHIFT                   (16U)
#define PMU_SFT_CON_AON_RESETN_CFG_MASK                    (0x1U << PMU_SFT_CON_AON_RESETN_CFG_SHIFT)                   /* 0x00010000 */
#define PMU_SFT_CON_INT_MEM_NAP_CFG_SHIFT                  (20U)
#define PMU_SFT_CON_INT_MEM_NAP_CFG_MASK                   (0xFU << PMU_SFT_CON_INT_MEM_NAP_CFG_SHIFT)                  /* 0x00F00000 */
#define PMU_SFT_CON_INT_MEM_RET_CFG_SHIFT                  (24U)
#define PMU_SFT_CON_INT_MEM_RET_CFG_MASK                   (0xFU << PMU_SFT_CON_INT_MEM_RET_CFG_SHIFT)                  /* 0x0F000000 */
#define PMU_SFT_CON_INT_MEM_PSD_CFG_SHIFT                  (28U)
#define PMU_SFT_CON_INT_MEM_PSD_CFG_MASK                   (0xFU << PMU_SFT_CON_INT_MEM_PSD_CFG_SHIFT)                  /* 0xF0000000 */
/* INT_CON */
#define PMU_INT_CON_PMU_INT_EN_SHIFT                       (0U)
#define PMU_INT_CON_PMU_INT_EN_MASK                        (0x1U << PMU_INT_CON_PMU_INT_EN_SHIFT)                       /* 0x00000001 */
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT            (1U)
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_MASK             (0x1U << PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT)            /* 0x00000002 */
#define PMU_INT_CON_WAKEUP_M4_INT_EN_SHIFT                 (2U)
#define PMU_INT_CON_WAKEUP_M4_INT_EN_MASK                  (0x1U << PMU_INT_CON_WAKEUP_M4_INT_EN_SHIFT)                 /* 0x00000004 */
#define PMU_INT_CON_WAKEUP_M0_INT_EN_SHIFT                 (3U)
#define PMU_INT_CON_WAKEUP_M0_INT_EN_MASK                  (0x1U << PMU_INT_CON_WAKEUP_M0_INT_EN_SHIFT)                 /* 0x00000008 */
#define PMU_INT_CON_WAKEUP_TIMEOUT_INT_EN_SHIFT            (4U)
#define PMU_INT_CON_WAKEUP_TIMEOUT_INT_EN_MASK             (0x1U << PMU_INT_CON_WAKEUP_TIMEOUT_INT_EN_SHIFT)            /* 0x00000010 */
#define PMU_INT_CON_LPW_PWR_SWITCH_INT_EN_SHIFT            (5U)
#define PMU_INT_CON_LPW_PWR_SWITCH_INT_EN_MASK             (0x1U << PMU_INT_CON_LPW_PWR_SWITCH_INT_EN_SHIFT)            /* 0x00000020 */
#define PMU_INT_CON_PERI_PWR_SWITCH_INT_EN_SHIFT           (6U)
#define PMU_INT_CON_PERI_PWR_SWITCH_INT_EN_MASK            (0x1U << PMU_INT_CON_PERI_PWR_SWITCH_INT_EN_SHIFT)           /* 0x00000040 */
#define PMU_INT_CON_MCU_PWR_SWITCH_INT_EN_SHIFT            (7U)
#define PMU_INT_CON_MCU_PWR_SWITCH_INT_EN_MASK             (0x1U << PMU_INT_CON_MCU_PWR_SWITCH_INT_EN_SHIFT)            /* 0x00000080 */
/* INT_ST */
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT             (1U)
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_MASK              (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT)             /* 0x00000002 */
#define PMU_INT_ST_WAKEUP_M4_STATUS_SHIFT                  (2U)
#define PMU_INT_ST_WAKEUP_M4_STATUS_MASK                   (0x1U << PMU_INT_ST_WAKEUP_M4_STATUS_SHIFT)                  /* 0x00000004 */
#define PMU_INT_ST_WAKEUP_INT_M0_STATUS_SHIFT              (3U)
#define PMU_INT_ST_WAKEUP_INT_M0_STATUS_MASK               (0x1U << PMU_INT_ST_WAKEUP_INT_M0_STATUS_SHIFT)              /* 0x00000008 */
#define PMU_INT_ST_WAKEUP_TIMOUT_STATUS_SHIFT              (4U)
#define PMU_INT_ST_WAKEUP_TIMOUT_STATUS_MASK               (0x1U << PMU_INT_ST_WAKEUP_TIMOUT_STATUS_SHIFT)              /* 0x00000010 */
#define PMU_INT_ST_LPW_POWER_SWITCH_WAKEUP_STATUS_SHIFT    (5U)
#define PMU_INT_ST_LPW_POWER_SWITCH_WAKEUP_STATUS_MASK     (0x1U << PMU_INT_ST_LPW_POWER_SWITCH_WAKEUP_STATUS_SHIFT)    /* 0x00000020 */
#define PMU_INT_ST_PERI_POWER_SWITCH_WAKEUP_STATUS_SHIFT   (6U)
#define PMU_INT_ST_PERI_POWER_SWITCH_WAKEUP_STATUS_MASK    (0x1U << PMU_INT_ST_PERI_POWER_SWITCH_WAKEUP_STATUS_SHIFT)   /* 0x00000040 */
#define PMU_INT_ST_MCU_POWER_SWITCH_WAKEUP_STATUS_SHIFT    (7U)
#define PMU_INT_ST_MCU_POWER_SWITCH_WAKEUP_STATUS_MASK     (0x1U << PMU_INT_ST_MCU_POWER_SWITCH_WAKEUP_STATUS_SHIFT)    /* 0x00000080 */
/* BUS_IDLE_ST */
#define PMU_BUS_IDLE_ST_IDLE_ACK_LPW_SHIFT                 (0U)
#define PMU_BUS_IDLE_ST_IDLE_ACK_LPW_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_ACK_LPW_SHIFT)                 /* 0x00000001 */
#define PMU_BUS_IDLE_ST_IDLE_ACK_PERI_SHIFT                (1U)
#define PMU_BUS_IDLE_ST_IDLE_ACK_PERI_MASK                 (0x1U << PMU_BUS_IDLE_ST_IDLE_ACK_PERI_SHIFT)                /* 0x00000002 */
#define PMU_BUS_IDLE_ST_IDLE_ACK_MCU_SHIFT                 (2U)
#define PMU_BUS_IDLE_ST_IDLE_ACK_MCU_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_ACK_MCU_SHIFT)                 /* 0x00000004 */
#define PMU_BUS_IDLE_ST_IDLE_ACK_TOP_SHIFT                 (3U)
#define PMU_BUS_IDLE_ST_IDLE_ACK_TOP_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_ACK_TOP_SHIFT)                 /* 0x00000008 */
#define PMU_BUS_IDLE_ST_IDLE_TOP_SHIFT                     (4U)
#define PMU_BUS_IDLE_ST_IDLE_TOP_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_TOP_SHIFT)                     /* 0x00000010 */
#define PMU_BUS_IDLE_ST_IDLE_LPW_SHIFT                     (16U)
#define PMU_BUS_IDLE_ST_IDLE_LPW_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_LPW_SHIFT)                     /* 0x00010000 */
#define PMU_BUS_IDLE_ST_IDLE_PERI_SHIFT                    (17U)
#define PMU_BUS_IDLE_ST_IDLE_PERI_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_PERI_SHIFT)                    /* 0x00020000 */
#define PMU_BUS_IDLE_ST_IDLE_MCU_SHIFT                     (18U)
#define PMU_BUS_IDLE_ST_IDLE_MCU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_MCU_SHIFT)                     /* 0x00040000 */
/* POWER_ST */
#define PMU_POWER_ST_POWER_STATE_SHIFT                     (0U)
#define PMU_POWER_ST_POWER_STATE_MASK                      (0x1FU << PMU_POWER_ST_POWER_STATE_SHIFT)                    /* 0x0000001F */
/* OSC_CNT */
#define PMU_OSC_CNT_PMU_OSC_CNT_SHIFT                      (0U)
#define PMU_OSC_CNT_PMU_OSC_CNT_MASK                       (0xFFFFFU << PMU_OSC_CNT_PMU_OSC_CNT_SHIFT)                  /* 0x000FFFFF */
/* PLLLOCK_CNT */
#define PMU_PLLLOCK_CNT_PMU_OSC_CNT_SHIFT                  (0U)
#define PMU_PLLLOCK_CNT_PMU_OSC_CNT_MASK                   (0xFFFFFU << PMU_PLLLOCK_CNT_PMU_OSC_CNT_SHIFT)              /* 0x000FFFFF */
/* PLLRST_CNT */
#define PMU_PLLRST_CNT_PMU_OSC_CNT_SHIFT                   (0U)
#define PMU_PLLRST_CNT_PMU_OSC_CNT_MASK                    (0xFFFFFU << PMU_PLLRST_CNT_PMU_OSC_CNT_SHIFT)               /* 0x000FFFFF */
/* INFO_TX_CON */
#define PMU_INFO_TX_CON_INFO_TX_EN_SHIFT                   (0U)
#define PMU_INFO_TX_CON_INFO_TX_EN_MASK                    (0x1U << PMU_INFO_TX_CON_INFO_TX_EN_SHIFT)                   /* 0x00000001 */
#define PMU_INFO_TX_CON_INFO_TX_MODE_SHIFT                 (4U)
#define PMU_INFO_TX_CON_INFO_TX_MODE_MASK                  (0x7U << PMU_INFO_TX_CON_INFO_TX_MODE_SHIFT)                 /* 0x00000070 */
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT            (8U)
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_MASK             (0xFFU << PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT)           /* 0x0000FF00 */
/* SYS_REG0 */
#define PMU_SYS_REG0_SYSTEM_REGISTERS0_SHIFT               (0U)
#define PMU_SYS_REG0_SYSTEM_REGISTERS0_MASK                (0xFFFFFFFFU << PMU_SYS_REG0_SYSTEM_REGISTERS0_SHIFT)        /* 0xFFFFFFFF */
/* SYS_REG1 */
#define PMU_SYS_REG1_SYSTEM_REGISTERS1_SHIFT               (0U)
#define PMU_SYS_REG1_SYSTEM_REGISTERS1_MASK                (0xFFFFFFFFU << PMU_SYS_REG1_SYSTEM_REGISTERS1_SHIFT)        /* 0xFFFFFFFF */
/* SYS_REG2 */
#define PMU_SYS_REG2_SYSTEM_REGISTERS2_SHIFT               (0U)
#define PMU_SYS_REG2_SYSTEM_REGISTERS2_MASK                (0xFFFFFFFFU << PMU_SYS_REG2_SYSTEM_REGISTERS2_SHIFT)        /* 0xFFFFFFFF */
/* SYS_REG3 */
#define PMU_SYS_REG3_SYSTEM_REGISTERS3_SHIFT               (0U)
#define PMU_SYS_REG3_SYSTEM_REGISTERS3_MASK                (0xFFFFFFFFU << PMU_SYS_REG3_SYSTEM_REGISTERS3_SHIFT)        /* 0xFFFFFFFF */
/* TIMEOUT_CNT */
#define PMU_TIMEOUT_CNT_TIMEOUT_COUNT_SHIFT                (0U)
#define PMU_TIMEOUT_CNT_TIMEOUT_COUNT_MASK                 (0xFFFFFFFFU << PMU_TIMEOUT_CNT_TIMEOUT_COUNT_SHIFT)         /* 0xFFFFFFFF */
/****************************************RK_GPIO*****************************************/
/* SWPORT_DR_L */
#define RK_GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT       (0U)
#define RK_GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_MASK        (0xFFFFU << RK_GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT)    /* 0x0000FFFF */
/* SWPORT_DR_H */
#define RK_GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT      (0U)
#define RK_GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_MASK       (0xFFFFU << RK_GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT)   /* 0x0000FFFF */
/* SWPORT_DDR_L */
#define RK_GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT     (0U)
#define RK_GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_MASK      (0xFFFFU << RK_GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT)  /* 0x0000FFFF */
/* SWPORT_DDR_H */
#define RK_GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT    (0U)
#define RK_GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_MASK     (0xFFFFU << RK_GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT) /* 0x0000FFFF */
/* INT_EN_L */
#define RK_GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT             (0U)
#define RK_GPIO_INT_EN_L_GPIO_INT_EN_LOW_MASK              (0xFFFFU << RK_GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT)          /* 0x0000FFFF */
/* INT_EN_H */
#define RK_GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT            (0U)
#define RK_GPIO_INT_EN_H_GPIO_INT_EN_HIGH_MASK             (0xFFFFU << RK_GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT)         /* 0x0000FFFF */
/* INT_MASK_L */
#define RK_GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT         (0U)
#define RK_GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_MASK          (0xFFFFU << RK_GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_MASK_H */
#define RK_GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT        (0U)
#define RK_GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_MASK         (0xFFFFU << RK_GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT)     /* 0x0000FFFF */
/* INT_TYPE_L */
#define RK_GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT         (0U)
#define RK_GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_MASK          (0xFFFFU << RK_GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_TYPE_H */
#define RK_GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT        (0U)
#define RK_GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_MASK         (0xFFFFU << RK_GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT)     /* 0x0000FFFF */
/* INT_POLARITY_L */
#define RK_GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT (0U)
#define RK_GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_MASK  (0xFFFFU << RK_GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT) /* 0x0000FFFF */
/* INT_POLARITY_H */
#define RK_GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT (0U)
#define RK_GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_MASK (0xFFFFU << RK_GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_L */
#define RK_GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT (0U)
#define RK_GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_MASK  (0xFFFFU << RK_GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_H */
#define RK_GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT (0U)
#define RK_GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_MASK (0xFFFFU << RK_GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT) /* 0x0000FFFF */
/* DEBOUNCE_L */
#define RK_GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT         (0U)
#define RK_GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_MASK          (0xFFFFU << RK_GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT)      /* 0x0000FFFF */
/* DEBOUNCE_H */
#define RK_GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT        (0U)
#define RK_GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_MASK         (0xFFFFU << RK_GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT)     /* 0x0000FFFF */
/* DBCLK_DIV_EN_L */
#define RK_GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT (0U)
#define RK_GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_MASK  (0xFFFFU << RK_GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_EN_H */
#define RK_GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT (0U)
#define RK_GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_MASK (0xFFFFU << RK_GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_CON */
#define RK_GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT     (0U)
#define RK_GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_MASK      (0xFFFFFFU << RK_GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT) /* 0x00FFFFFF */
/* INT_STATUS */
#define RK_GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT           (0U)
#define RK_GPIO_INT_STATUS_GPIO_INT_STATUS_MASK            (0xFFFFFFFFU << RK_GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT)    /* 0xFFFFFFFF */
/* INT_RAWSTATUS */
#define RK_GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT     (0U)
#define RK_GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_MASK      (0xFFFFFFFFU << RK_GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT) /* 0xFFFFFFFF */
/* PORT_EOI_L */
#define RK_GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT         (0U)
#define RK_GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_MASK          (0xFFFFU << RK_GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT)      /* 0x0000FFFF */
/* PORT_EOI_H */
#define RK_GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT        (0U)
#define RK_GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_MASK         (0xFFFFU << RK_GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT)     /* 0x0000FFFF */
/* EXT_PORT */
#define RK_GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT               (0U)
#define RK_GPIO_EXT_PORT_GPIO_EXT_PORT_MASK                (0xFFFFFFFFU << RK_GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT)        /* 0xFFFFFFFF */
/* VER_ID */
#define RK_GPIO_VER_ID_GPIO_VER_ID_SHIFT                   (0U)
#define RK_GPIO_VER_ID_GPIO_VER_ID_MASK                    (0xFFFFFFFFU << RK_GPIO_VER_ID_GPIO_VER_ID_SHIFT)            /* 0xFFFFFFFF */
/******************************************GRF*******************************************/
/* GPIO0A_IOMUX_L */
#define GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT               (0U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_MASK                (0xFU << GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT)               /* 0x0000000F */
#define GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT               (4U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_MASK                (0xFU << GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT)               /* 0x000000F0 */
#define GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT               (8U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_MASK                (0xFU << GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT)               /* 0x00000F00 */
#define GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT               (12U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_MASK                (0xFU << GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT)               /* 0x0000F000 */
/* GPIO0A_IOMUX_H */
#define GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT               (0U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_MASK                (0xFU << GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT)               /* 0x0000000F */
#define GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT               (4U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT               (8U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT               (12U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0B_IOMUX_L */
#define GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT               (0U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT               (4U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT               (8U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT               (12U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0B_IOMUX_H */
#define GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT               (0U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_MASK                (0xFU << GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT)               /* 0x0000000F */
#define GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT               (4U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT               (8U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT               (12U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0C_IOMUX_L */
#define GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT               (0U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT               (4U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_MASK                (0xFU << GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT)               /* 0x000000F0 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT               (8U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_MASK                (0xFU << GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT)               /* 0x00000F00 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT               (12U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_MASK                (0xFU << GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT)               /* 0x0000F000 */
/* GPIO0C_IOMUX_H */
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT               (0U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT               (4U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT               (8U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_MASK                (0xFU << GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT)               /* 0x00000F00 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT               (12U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_MASK                (0xFU << GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT)               /* 0x0000F000 */
/* GPIO0D_IOMUX_L */
#define GRF_GPIO0D_IOMUX_L_GPIOOD0_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_L_GPIOOD0_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIOOD0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT               (12U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0D_IOMUX_H */
#define GRF_GPIO0D_IOMUX_H_GPIOOD4_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_H_GPIOOD4_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIOOD4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT)               /* 0x00000700 */
/* GPIO1A_IOMUX_L */
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT)               /* 0x00000001 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT)               /* 0x00000010 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT               (8U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT)               /* 0x00000100 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT               (12U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT)               /* 0x00001000 */
/* GPIO1A_IOMUX_H */
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT)               /* 0x00000001 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_MASK                (0x1U << GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT)               /* 0x00000010 */
/* GPIO1B_IOMUX_L */
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT               (0U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_MASK                (0x3U << GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT)               /* 0x00000003 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT               (4U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_MASK                (0x1U << GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT)               /* 0x00000010 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT               (8U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_MASK                (0x3U << GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT)               /* 0x00000300 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT               (12U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_MASK                (0x1U << GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT)               /* 0x00001000 */
/* GPIO1B_IOMUX_H */
#define GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT               (0U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_MASK                (0x3U << GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT)               /* 0x00000003 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT               (4U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_MASK                (0x1U << GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT)               /* 0x00000010 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT               (8U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_MASK                (0x3U << GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT)               /* 0x00000300 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT               (12U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_MASK                (0x3U << GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT)               /* 0x00003000 */
/* GPIO1C_IOMUX_L */
#define GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_SHIFT               (0U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_MASK                (0x3U << GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_SHIFT)               /* 0x00000003 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_SHIFT               (4U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_MASK                (0x1U << GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_SHIFT)               /* 0x00000010 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_SHIFT               (8U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_MASK                (0x1U << GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_SHIFT)               /* 0x00000100 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_SHIFT               (12U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_MASK                (0x1U << GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_SHIFT)               /* 0x00001000 */
/* GPIO0A_P */
#define GRF_GPIO0A_P_GPIO0A0_P_SHIFT                       (0U)
#define GRF_GPIO0A_P_GPIO0A0_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO0A_P_GPIO0A1_P_SHIFT                       (2U)
#define GRF_GPIO0A_P_GPIO0A1_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO0A_P_GPIO0A2_P_SHIFT                       (4U)
#define GRF_GPIO0A_P_GPIO0A2_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO0A_P_GPIO0A3_P_SHIFT                       (6U)
#define GRF_GPIO0A_P_GPIO0A3_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO0A_P_GPIO0A4_P_SHIFT                       (8U)
#define GRF_GPIO0A_P_GPIO0A4_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO0A_P_GPIO0A5_P_SHIFT                       (10U)
#define GRF_GPIO0A_P_GPIO0A5_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO0A_P_GPIO0A6_P_SHIFT                       (12U)
#define GRF_GPIO0A_P_GPIO0A6_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO0A_P_GPIO0A7_P_SHIFT                       (14U)
#define GRF_GPIO0A_P_GPIO0A7_P_MASK                        (0x3U << GRF_GPIO0A_P_GPIO0A7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO0B_P */
#define GRF_GPIO0B_P_GPIO0B0_P_SHIFT                       (0U)
#define GRF_GPIO0B_P_GPIO0B0_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO0B_P_GPIO0B1_P_SHIFT                       (2U)
#define GRF_GPIO0B_P_GPIO0B1_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO0B_P_GPIO0B2_P_SHIFT                       (4U)
#define GRF_GPIO0B_P_GPIO0B2_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO0B_P_GPIO0B3_P_SHIFT                       (6U)
#define GRF_GPIO0B_P_GPIO0B3_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO0B_P_GPIO0B4_P_SHIFT                       (8U)
#define GRF_GPIO0B_P_GPIO0B4_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO0B_P_GPIO0B5_P_SHIFT                       (10U)
#define GRF_GPIO0B_P_GPIO0B5_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO0B_P_GPIO0B6_P_SHIFT                       (12U)
#define GRF_GPIO0B_P_GPIO0B6_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO0B_P_GPIO0B7_P_SHIFT                       (14U)
#define GRF_GPIO0B_P_GPIO0B7_P_MASK                        (0x3U << GRF_GPIO0B_P_GPIO0B7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO0C_P */
#define GRF_GPIO0C_P_GPIO0C0_P_SHIFT                       (0U)
#define GRF_GPIO0C_P_GPIO0C0_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO0C_P_GPIO0C1_P_SHIFT                       (2U)
#define GRF_GPIO0C_P_GPIO0C1_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO0C_P_GPIO0C2_P_SHIFT                       (4U)
#define GRF_GPIO0C_P_GPIO0C2_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO0C_P_GPIO0C3_P_SHIFT                       (6U)
#define GRF_GPIO0C_P_GPIO0C3_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO0C_P_GPIO0C4_P_SHIFT                       (8U)
#define GRF_GPIO0C_P_GPIO0C4_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO0C_P_GPIO0C5_P_SHIFT                       (10U)
#define GRF_GPIO0C_P_GPIO0C5_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO0C_P_GPIO0C6_P_SHIFT                       (12U)
#define GRF_GPIO0C_P_GPIO0C6_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO0C_P_GPIO0C7_P_SHIFT                       (14U)
#define GRF_GPIO0C_P_GPIO0C7_P_MASK                        (0x3U << GRF_GPIO0C_P_GPIO0C7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO0D_P */
#define GRF_GPIO0D_P_GPIO0D0_P_SHIFT                       (0U)
#define GRF_GPIO0D_P_GPIO0D0_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO0D_P_GPIO0D1_P_SHIFT                       (2U)
#define GRF_GPIO0D_P_GPIO0D1_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO0D_P_GPIO0D2_P_SHIFT                       (4U)
#define GRF_GPIO0D_P_GPIO0D2_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO0D_P_GPIO0D3_P_SHIFT                       (6U)
#define GRF_GPIO0D_P_GPIO0D3_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO0D_P_GPIO0D4_P_SHIFT                       (8U)
#define GRF_GPIO0D_P_GPIO0D4_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO0D_P_GPIO0D5_P_SHIFT                       (10U)
#define GRF_GPIO0D_P_GPIO0D5_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO0D_P_GPIO0D6_P_SHIFT                       (12U)
#define GRF_GPIO0D_P_GPIO0D6_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D6_P_SHIFT)                       /* 0x00003000 */
/* GPIO1A_P */
#define GRF_GPIO1A_P_GPIO1A0_P_SHIFT                       (0U)
#define GRF_GPIO1A_P_GPIO1A0_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1A_P_GPIO1A1_P_SHIFT                       (2U)
#define GRF_GPIO1A_P_GPIO1A1_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1A_P_GPIO1A2_P_SHIFT                       (4U)
#define GRF_GPIO1A_P_GPIO1A2_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1A_P_GPIO1A3_P_SHIFT                       (6U)
#define GRF_GPIO1A_P_GPIO1A3_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1A_P_GPIO1A4_P_SHIFT                       (8U)
#define GRF_GPIO1A_P_GPIO1A4_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1A_P_GPIO1A5_P_SHIFT                       (10U)
#define GRF_GPIO1A_P_GPIO1A5_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A5_P_SHIFT)                       /* 0x00000C00 */
/* GPIO1B_P */
#define GRF_GPIO1B_P_GPIO1B0_P_SHIFT                       (0U)
#define GRF_GPIO1B_P_GPIO1B0_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1B_P_GPIO1B1_P_SHIFT                       (2U)
#define GRF_GPIO1B_P_GPIO1B1_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1B_P_GPIO1B2_P_SHIFT                       (4U)
#define GRF_GPIO1B_P_GPIO1B2_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1B_P_GPIO1B3_P_SHIFT                       (6U)
#define GRF_GPIO1B_P_GPIO1B3_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1B_P_GPIO1B4_P_SHIFT                       (8U)
#define GRF_GPIO1B_P_GPIO1B4_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1B_P_GPIO1B5_P_SHIFT                       (10U)
#define GRF_GPIO1B_P_GPIO1B5_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO1B_P_GPIO1B6_P_SHIFT                       (12U)
#define GRF_GPIO1B_P_GPIO1B6_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO1B_P_GPIO1B7_P_SHIFT                       (14U)
#define GRF_GPIO1B_P_GPIO1B7_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO1C_P */
#define GRF_GPIO1C_P_GPIO1C0_P_SHIFT                       (0U)
#define GRF_GPIO1C_P_GPIO1C0_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1C_P_GPIO1C1_P_SHIFT                       (2U)
#define GRF_GPIO1C_P_GPIO1C1_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1C_P_GPIO1C2_P_SHIFT                       (4U)
#define GRF_GPIO1C_P_GPIO1C2_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1C_P_GPIO1C3_P_SHIFT                       (6U)
#define GRF_GPIO1C_P_GPIO1C3_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C3_P_SHIFT)                       /* 0x000000C0 */
/* SOC_CON0 */
#define GRF_SOC_CON0_REMAP_SHIFT                           (0U)
#define GRF_SOC_CON0_REMAP_MASK                            (0x1U << GRF_SOC_CON0_REMAP_SHIFT)                           /* 0x00000001 */
#define GRF_SOC_CON0_GRF_CON_M4F_JTAGTCK_GATING_SHIFT      (1U)
#define GRF_SOC_CON0_GRF_CON_M4F_JTAGTCK_GATING_MASK       (0x1U << GRF_SOC_CON0_GRF_CON_M4F_JTAGTCK_GATING_SHIFT)      /* 0x00000002 */
#define GRF_SOC_CON0_GRF_CON_M0_JTAGTCK_GATING_SHIFT       (2U)
#define GRF_SOC_CON0_GRF_CON_M0_JTAGTCK_GATING_MASK        (0x1U << GRF_SOC_CON0_GRF_CON_M0_JTAGTCK_GATING_SHIFT)       /* 0x00000004 */
#define GRF_SOC_CON0_GRF_CON_DSP_JTAGTCK_GATING_SHIFT      (3U)
#define GRF_SOC_CON0_GRF_CON_DSP_JTAGTCK_GATING_MASK       (0x1U << GRF_SOC_CON0_GRF_CON_DSP_JTAGTCK_GATING_SHIFT)      /* 0x00000008 */
#define GRF_SOC_CON0_GRF_CON_HYPERX8_SFC1_SEL_SHIFT        (4U)
#define GRF_SOC_CON0_GRF_CON_HYPERX8_SFC1_SEL_MASK         (0x1U << GRF_SOC_CON0_GRF_CON_HYPERX8_SFC1_SEL_SHIFT)        /* 0x00000010 */
#define GRF_SOC_CON0_DSP_TCM_SEL0_SHIFT                    (5U)
#define GRF_SOC_CON0_DSP_TCM_SEL0_MASK                     (0x1U << GRF_SOC_CON0_DSP_TCM_SEL0_SHIFT)                    /* 0x00000020 */
#define GRF_SOC_CON0_DSP_TCM_SEL1_SHIFT                    (6U)
#define GRF_SOC_CON0_DSP_TCM_SEL1_MASK                     (0x1U << GRF_SOC_CON0_DSP_TCM_SEL1_SHIFT)                    /* 0x00000040 */
#define GRF_SOC_CON0_DSP_TCM_SEL2_SHIFT                    (7U)
#define GRF_SOC_CON0_DSP_TCM_SEL2_MASK                     (0x1U << GRF_SOC_CON0_DSP_TCM_SEL2_SHIFT)                    /* 0x00000080 */
#define GRF_SOC_CON0_DSP_TCM_SEL3_SHIFT                    (8U)
#define GRF_SOC_CON0_DSP_TCM_SEL3_MASK                     (0x1U << GRF_SOC_CON0_DSP_TCM_SEL3_SHIFT)                    /* 0x00000100 */
/* SOC_CON1 */
#define GRF_SOC_CON1_GRF_MCLKOUT_I2S8CH0_IOE_SHIFT         (0U)
#define GRF_SOC_CON1_GRF_MCLKOUT_I2S8CH0_IOE_MASK          (0x1U << GRF_SOC_CON1_GRF_MCLKOUT_I2S8CH0_IOE_SHIFT)         /* 0x00000001 */
#define GRF_SOC_CON1_GRF_SPI0_MULTI_IOFUNC_SRC_SEL_SHIFT   (1U)
#define GRF_SOC_CON1_GRF_SPI0_MULTI_IOFUNC_SRC_SEL_MASK    (0x1U << GRF_SOC_CON1_GRF_SPI0_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00000002 */
#define GRF_SOC_CON1_GRF_SPI1_MULTI_IOFUNC_SRC_SEL_SHIFT   (2U)
#define GRF_SOC_CON1_GRF_SPI1_MULTI_IOFUNC_SRC_SEL_MASK    (0x3U << GRF_SOC_CON1_GRF_SPI1_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x0000000C */
#define GRF_SOC_CON1_GRF_PWM0_MULTI_IOFUNC_SRC_SEL_SHIFT   (4U)
#define GRF_SOC_CON1_GRF_PWM0_MULTI_IOFUNC_SRC_SEL_MASK    (0x1U << GRF_SOC_CON1_GRF_PWM0_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00000010 */
#define GRF_SOC_CON1_GRF_PWM1_MULTI_IOFUNC_SRC_SEL_SHIFT   (5U)
#define GRF_SOC_CON1_GRF_PWM1_MULTI_IOFUNC_SRC_SEL_MASK    (0x1U << GRF_SOC_CON1_GRF_PWM1_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00000020 */
#define GRF_SOC_CON1_GRF_I2C0_MULTI_IOFUNC_SRC_SEL_SHIFT   (6U)
#define GRF_SOC_CON1_GRF_I2C0_MULTI_IOFUNC_SRC_SEL_MASK    (0x3U << GRF_SOC_CON1_GRF_I2C0_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x000000C0 */
#define GRF_SOC_CON1_GRF_I2C1_MULTI_IOFUNC_SRC_SEL_SHIFT   (8U)
#define GRF_SOC_CON1_GRF_I2C1_MULTI_IOFUNC_SRC_SEL_MASK    (0x3U << GRF_SOC_CON1_GRF_I2C1_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00000300 */
#define GRF_SOC_CON1_GRF_PDM_MULTI_IOFUNC_SRC_SEL_SHIFT    (10U)
#define GRF_SOC_CON1_GRF_PDM_MULTI_IOFUNC_SRC_SEL_MASK     (0x1U << GRF_SOC_CON1_GRF_PDM_MULTI_IOFUNC_SRC_SEL_SHIFT)    /* 0x00000400 */
#define GRF_SOC_CON1_GRF_CON_VIP_NEG_POS_SEL_SHIFT         (11U)
#define GRF_SOC_CON1_GRF_CON_VIP_NEG_POS_SEL_MASK          (0x1U << GRF_SOC_CON1_GRF_CON_VIP_NEG_POS_SEL_SHIFT)         /* 0x00000800 */
#define GRF_SOC_CON1_GRF_I2C2_MULTI_IOFUNC_SRC_SEL_SHIFT   (12U)
#define GRF_SOC_CON1_GRF_I2C2_MULTI_IOFUNC_SRC_SEL_MASK    (0x1U << GRF_SOC_CON1_GRF_I2C2_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00001000 */
#define GRF_SOC_CON1_UART2_CTS_INV_SEL_SHIFT               (14U)
#define GRF_SOC_CON1_UART2_CTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON1_UART2_CTS_INV_SEL_SHIFT)               /* 0x00004000 */
#define GRF_SOC_CON1_UART2_RTS_INV_SEL_SHIFT               (15U)
#define GRF_SOC_CON1_UART2_RTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON1_UART2_RTS_INV_SEL_SHIFT)               /* 0x00008000 */
/* SOC_CON2 */
#define GRF_SOC_CON2_UART0_CTS_INV_SEL_SHIFT               (0U)
#define GRF_SOC_CON2_UART0_CTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON2_UART0_CTS_INV_SEL_SHIFT)               /* 0x00000001 */
#define GRF_SOC_CON2_UART1_CTS_INV_SEL_SHIFT               (1U)
#define GRF_SOC_CON2_UART1_CTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON2_UART1_CTS_INV_SEL_SHIFT)               /* 0x00000002 */
#define GRF_SOC_CON2_UART0_RTS_INV_SEL_SHIFT               (2U)
#define GRF_SOC_CON2_UART0_RTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON2_UART0_RTS_INV_SEL_SHIFT)               /* 0x00000004 */
#define GRF_SOC_CON2_UART1_RTS_INV_SEL_SHIFT               (3U)
#define GRF_SOC_CON2_UART1_RTS_INV_SEL_MASK                (0x1U << GRF_SOC_CON2_UART1_RTS_INV_SEL_SHIFT)               /* 0x00000008 */
#define GRF_SOC_CON2_GRF_PDM_CLK_S_G_SHIFT                 (4U)
#define GRF_SOC_CON2_GRF_PDM_CLK_S_G_MASK                  (0x1U << GRF_SOC_CON2_GRF_PDM_CLK_S_G_SHIFT)                 /* 0x00000010 */
#define GRF_SOC_CON2_BOOTROM_MEMAUTO_GATING_EN_SHIFT       (6U)
#define GRF_SOC_CON2_BOOTROM_MEMAUTO_GATING_EN_MASK        (0x1U << GRF_SOC_CON2_BOOTROM_MEMAUTO_GATING_EN_SHIFT)       /* 0x00000040 */
#define GRF_SOC_CON2_AHBBUFFER_MEMAUTO_GATING_EN_SHIFT     (7U)
#define GRF_SOC_CON2_AHBBUFFER_MEMAUTO_GATING_EN_MASK      (0x1U << GRF_SOC_CON2_AHBBUFFER_MEMAUTO_GATING_EN_SHIFT)     /* 0x00000080 */
#define GRF_SOC_CON2_INTMEM0_MEMAUTO_GATING_EN_SHIFT       (9U)
#define GRF_SOC_CON2_INTMEM0_MEMAUTO_GATING_EN_MASK        (0x1U << GRF_SOC_CON2_INTMEM0_MEMAUTO_GATING_EN_SHIFT)       /* 0x00000200 */
#define GRF_SOC_CON2_INTMEM1_MEMAUTO_GATING_EN_SHIFT       (10U)
#define GRF_SOC_CON2_INTMEM1_MEMAUTO_GATING_EN_MASK        (0x1U << GRF_SOC_CON2_INTMEM1_MEMAUTO_GATING_EN_SHIFT)       /* 0x00000400 */
#define GRF_SOC_CON2_INTMEM1_VAD_MEMAUTO_GATING_EN_SHIFT   (11U)
#define GRF_SOC_CON2_INTMEM1_VAD_MEMAUTO_GATING_EN_MASK    (0x1U << GRF_SOC_CON2_INTMEM1_VAD_MEMAUTO_GATING_EN_SHIFT)   /* 0x00000800 */
#define GRF_SOC_CON2_ICACHE0_FLUSH_REQ_SHIFT               (12U)
#define GRF_SOC_CON2_ICACHE0_FLUSH_REQ_MASK                (0x1U << GRF_SOC_CON2_ICACHE0_FLUSH_REQ_SHIFT)               /* 0x00001000 */
#define GRF_SOC_CON2_DCACHE0_FLUSH_REQ_SHIFT               (13U)
#define GRF_SOC_CON2_DCACHE0_FLUSH_REQ_MASK                (0x1U << GRF_SOC_CON2_DCACHE0_FLUSH_REQ_SHIFT)               /* 0x00002000 */
#define GRF_SOC_CON2_CAHCE1_FLUSH_REQ_SHIFT                (14U)
#define GRF_SOC_CON2_CAHCE1_FLUSH_REQ_MASK                 (0x1U << GRF_SOC_CON2_CAHCE1_FLUSH_REQ_SHIFT)                /* 0x00004000 */
/* SOC_CON3 */
#define GRF_SOC_CON3_GRF_CON_RDS_DELAY_ADJ_SHIFT           (0U)
#define GRF_SOC_CON3_GRF_CON_RDS_DELAY_ADJ_MASK            (0xFFU << GRF_SOC_CON3_GRF_CON_RDS_DELAY_ADJ_SHIFT)          /* 0x000000FF */
#define GRF_SOC_CON3_GRF_RDS_CLK_SMP_SEL_SHIFT             (8U)
#define GRF_SOC_CON3_GRF_RDS_CLK_SMP_SEL_MASK              (0x1U << GRF_SOC_CON3_GRF_RDS_CLK_SMP_SEL_SHIFT)             /* 0x00000100 */
#define GRF_SOC_CON3_GRF_RPC_INITIAL_STATE_SHIFT           (9U)
#define GRF_SOC_CON3_GRF_RPC_INITIAL_STATE_MASK            (0x1U << GRF_SOC_CON3_GRF_RPC_INITIAL_STATE_SHIFT)           /* 0x00000200 */
/* SOC_CON4 */
#define GRF_SOC_CON4_ICACHE0_SPRA_MS_SHIFT                 (0U)
#define GRF_SOC_CON4_ICACHE0_SPRA_MS_MASK                  (0xFU << GRF_SOC_CON4_ICACHE0_SPRA_MS_SHIFT)                 /* 0x0000000F */
#define GRF_SOC_CON4_ICACHE0_SPRA_MSE_SHIFT                (4U)
#define GRF_SOC_CON4_ICACHE0_SPRA_MSE_MASK                 (0x1U << GRF_SOC_CON4_ICACHE0_SPRA_MSE_SHIFT)                /* 0x00000010 */
#define GRF_SOC_CON4_ICACHE0_SPRA_PD_SHIFT                 (5U)
#define GRF_SOC_CON4_ICACHE0_SPRA_PD_MASK                  (0x1U << GRF_SOC_CON4_ICACHE0_SPRA_PD_SHIFT)                 /* 0x00000020 */
#define GRF_SOC_CON4_ICACHE0_SPRA_NAP_SHIFT                (6U)
#define GRF_SOC_CON4_ICACHE0_SPRA_NAP_MASK                 (0x1U << GRF_SOC_CON4_ICACHE0_SPRA_NAP_SHIFT)                /* 0x00000040 */
#define GRF_SOC_CON4_ICACHE0_SPRA_RET_SHIFT                (7U)
#define GRF_SOC_CON4_ICACHE0_SPRA_RET_MASK                 (0x1U << GRF_SOC_CON4_ICACHE0_SPRA_RET_SHIFT)                /* 0x00000080 */
#define GRF_SOC_CON4_DCACHE0_SPRA_MS_SHIFT                 (8U)
#define GRF_SOC_CON4_DCACHE0_SPRA_MS_MASK                  (0xFU << GRF_SOC_CON4_DCACHE0_SPRA_MS_SHIFT)                 /* 0x00000F00 */
#define GRF_SOC_CON4_DCACHE0_SPRA_MSE_SHIFT                (12U)
#define GRF_SOC_CON4_DCACHE0_SPRA_MSE_MASK                 (0x1U << GRF_SOC_CON4_DCACHE0_SPRA_MSE_SHIFT)                /* 0x00001000 */
#define GRF_SOC_CON4_DCACHE0_SPRA_PD_SHIFT                 (13U)
#define GRF_SOC_CON4_DCACHE0_SPRA_PD_MASK                  (0x1U << GRF_SOC_CON4_DCACHE0_SPRA_PD_SHIFT)                 /* 0x00002000 */
#define GRF_SOC_CON4_DCACHE0_SPRA_NAP_SHIFT                (14U)
#define GRF_SOC_CON4_DCACHE0_SPRA_NAP_MASK                 (0x1U << GRF_SOC_CON4_DCACHE0_SPRA_NAP_SHIFT)                /* 0x00004000 */
#define GRF_SOC_CON4_DCACHE0_SPRA_RET_SHIFT                (15U)
#define GRF_SOC_CON4_DCACHE0_SPRA_RET_MASK                 (0x1U << GRF_SOC_CON4_DCACHE0_SPRA_RET_SHIFT)                /* 0x00008000 */
/* SOC_CON5 */
#define GRF_SOC_CON5_CACHE1_SPRA_MS_SHIFT                  (0U)
#define GRF_SOC_CON5_CACHE1_SPRA_MS_MASK                   (0xFU << GRF_SOC_CON5_CACHE1_SPRA_MS_SHIFT)                  /* 0x0000000F */
#define GRF_SOC_CON5_CACHE1_SPRA_MSE_SHIFT                 (4U)
#define GRF_SOC_CON5_CACHE1_SPRA_MSE_MASK                  (0x1U << GRF_SOC_CON5_CACHE1_SPRA_MSE_SHIFT)                 /* 0x00000010 */
#define GRF_SOC_CON5_CACHE1_SPRA_PD_SHIFT                  (5U)
#define GRF_SOC_CON5_CACHE1_SPRA_PD_MASK                   (0x1U << GRF_SOC_CON5_CACHE1_SPRA_PD_SHIFT)                  /* 0x00000020 */
#define GRF_SOC_CON5_CACHE1_SPRA_NAP_SHIFT                 (6U)
#define GRF_SOC_CON5_CACHE1_SPRA_NAP_MASK                  (0x1U << GRF_SOC_CON5_CACHE1_SPRA_NAP_SHIFT)                 /* 0x00000040 */
#define GRF_SOC_CON5_CACHE1_SPRA_RET_SHIFT                 (7U)
#define GRF_SOC_CON5_CACHE1_SPRA_RET_MASK                  (0x1U << GRF_SOC_CON5_CACHE1_SPRA_RET_SHIFT)                 /* 0x00000080 */
#define GRF_SOC_CON5_VOP_SPRF_PD_SHIFT                     (8U)
#define GRF_SOC_CON5_VOP_SPRF_PD_MASK                      (0x1U << GRF_SOC_CON5_VOP_SPRF_PD_SHIFT)                     /* 0x00000100 */
#define GRF_SOC_CON5_VOP_SPRF_RTSEL_SHIFT                  (9U)
#define GRF_SOC_CON5_VOP_SPRF_RTSEL_MASK                   (0x1U << GRF_SOC_CON5_VOP_SPRF_RTSEL_SHIFT)                  /* 0x00000200 */
#define GRF_SOC_CON5_VOP_SPRF_TURBO_SHIFT                  (10U)
#define GRF_SOC_CON5_VOP_SPRF_TURBO_MASK                   (0x1U << GRF_SOC_CON5_VOP_SPRF_TURBO_SHIFT)                  /* 0x00000400 */
#define GRF_SOC_CON5_VOP_SPRF_TSEL_SHIFT                   (11U)
#define GRF_SOC_CON5_VOP_SPRF_TSEL_MASK                    (0x3U << GRF_SOC_CON5_VOP_SPRF_TSEL_SHIFT)                   /* 0x00001800 */
#define GRF_SOC_CON5_VOP_DPRF_PD_SHIFT                     (13U)
#define GRF_SOC_CON5_VOP_DPRF_PD_MASK                      (0x1U << GRF_SOC_CON5_VOP_DPRF_PD_SHIFT)                     /* 0x00002000 */
/* SOC_CON6 */
#define GRF_SOC_CON6_DSP_SPRF_PD_SHIFT                     (0U)
#define GRF_SOC_CON6_DSP_SPRF_PD_MASK                      (0x1U << GRF_SOC_CON6_DSP_SPRF_PD_SHIFT)                     /* 0x00000001 */
#define GRF_SOC_CON6_DSP_SPRF_RTSEL_SHIFT                  (1U)
#define GRF_SOC_CON6_DSP_SPRF_RTSEL_MASK                   (0x1U << GRF_SOC_CON6_DSP_SPRF_RTSEL_SHIFT)                  /* 0x00000002 */
#define GRF_SOC_CON6_DSP_SPRF_TURBO_SHIFT                  (2U)
#define GRF_SOC_CON6_DSP_SPRF_TURBO_MASK                   (0x1U << GRF_SOC_CON6_DSP_SPRF_TURBO_SHIFT)                  /* 0x00000004 */
#define GRF_SOC_CON6_DSP_SPRF_TSEL_SHIFT                   (3U)
#define GRF_SOC_CON6_DSP_SPRF_TSEL_MASK                    (0x3U << GRF_SOC_CON6_DSP_SPRF_TSEL_SHIFT)                   /* 0x00000018 */
#define GRF_SOC_CON6_DSP_CORE_SPRA_NAP_SHIFT               (5U)
#define GRF_SOC_CON6_DSP_CORE_SPRA_NAP_MASK                (0x1U << GRF_SOC_CON6_DSP_CORE_SPRA_NAP_SHIFT)               /* 0x00000020 */
#define GRF_SOC_CON6_DSP_CORE_SPRA_RET_SHIFT               (6U)
#define GRF_SOC_CON6_DSP_CORE_SPRA_RET_MASK                (0x1U << GRF_SOC_CON6_DSP_CORE_SPRA_RET_SHIFT)               /* 0x00000040 */
#define GRF_SOC_CON6_DSP_CORE_SPRA_PD_SHIFT                (7U)
#define GRF_SOC_CON6_DSP_CORE_SPRA_PD_MASK                 (0x1U << GRF_SOC_CON6_DSP_CORE_SPRA_PD_SHIFT)                /* 0x00000080 */
#define GRF_SOC_CON6_DSP_CORE_SPRA_MS_SHIFT                (8U)
#define GRF_SOC_CON6_DSP_CORE_SPRA_MS_MASK                 (0xFU << GRF_SOC_CON6_DSP_CORE_SPRA_MS_SHIFT)                /* 0x00000F00 */
#define GRF_SOC_CON6_DSP_CORE_SPRA_MSE_SHIFT               (12U)
#define GRF_SOC_CON6_DSP_CORE_SPRA_MSE_MASK                (0x1U << GRF_SOC_CON6_DSP_CORE_SPRA_MSE_SHIFT)               /* 0x00001000 */
#define GRF_SOC_CON6_BOOTROM_ROM_PD_SHIFT                  (13U)
#define GRF_SOC_CON6_BOOTROM_ROM_PD_MASK                   (0x1U << GRF_SOC_CON6_BOOTROM_ROM_PD_SHIFT)                  /* 0x00002000 */
/* SOC_CON7 */
#define GRF_SOC_CON7_USB_SPRA_MS_SHIFT                     (0U)
#define GRF_SOC_CON7_USB_SPRA_MS_MASK                      (0xFU << GRF_SOC_CON7_USB_SPRA_MS_SHIFT)                     /* 0x0000000F */
#define GRF_SOC_CON7_USB_SPRA_MSE_SHIFT                    (4U)
#define GRF_SOC_CON7_USB_SPRA_MSE_MASK                     (0x1U << GRF_SOC_CON7_USB_SPRA_MSE_SHIFT)                    /* 0x00000010 */
#define GRF_SOC_CON7_USB_SPRA_PD_SHIFT                     (5U)
#define GRF_SOC_CON7_USB_SPRA_PD_MASK                      (0x1U << GRF_SOC_CON7_USB_SPRA_PD_SHIFT)                     /* 0x00000020 */
#define GRF_SOC_CON7_USB_SPRA_NAP_SHIFT                    (6U)
#define GRF_SOC_CON7_USB_SPRA_NAP_MASK                     (0x1U << GRF_SOC_CON7_USB_SPRA_NAP_SHIFT)                    /* 0x00000040 */
#define GRF_SOC_CON7_USB_SPRA_RET_SHIFT                    (7U)
#define GRF_SOC_CON7_USB_SPRA_RET_MASK                     (0x1U << GRF_SOC_CON7_USB_SPRA_RET_SHIFT)                    /* 0x00000080 */
#define GRF_SOC_CON7_CRYPTO_SPRA_MS_SHIFT                  (8U)
#define GRF_SOC_CON7_CRYPTO_SPRA_MS_MASK                   (0xFU << GRF_SOC_CON7_CRYPTO_SPRA_MS_SHIFT)                  /* 0x00000F00 */
#define GRF_SOC_CON7_CRYPTO_SPRA_MSE_SHIFT                 (12U)
#define GRF_SOC_CON7_CRYPTO_SPRA_MSE_MASK                  (0x1U << GRF_SOC_CON7_CRYPTO_SPRA_MSE_SHIFT)                 /* 0x00001000 */
#define GRF_SOC_CON7_CRYPTO_SPRA_PD_SHIFT                  (13U)
#define GRF_SOC_CON7_CRYPTO_SPRA_PD_MASK                   (0x1U << GRF_SOC_CON7_CRYPTO_SPRA_PD_SHIFT)                  /* 0x00002000 */
#define GRF_SOC_CON7_CRYPTO_SPRA_NAP_SHIFT                 (14U)
#define GRF_SOC_CON7_CRYPTO_SPRA_NAP_MASK                  (0x1U << GRF_SOC_CON7_CRYPTO_SPRA_NAP_SHIFT)                 /* 0x00004000 */
#define GRF_SOC_CON7_CRYPTO_SPRA_RET_SHIFT                 (15U)
#define GRF_SOC_CON7_CRYPTO_SPRA_RET_MASK                  (0x1U << GRF_SOC_CON7_CRYPTO_SPRA_RET_SHIFT)                 /* 0x00008000 */
/* SOC_CON8 */
#define GRF_SOC_CON8_CRYPTO_DPRF_PD_SHIFT                  (0U)
#define GRF_SOC_CON8_CRYPTO_DPRF_PD_MASK                   (0x1U << GRF_SOC_CON8_CRYPTO_DPRF_PD_SHIFT)                  /* 0x00000001 */
#define GRF_SOC_CON8_SDMMC_DPRF_PD_SHIFT                   (1U)
#define GRF_SOC_CON8_SDMMC_DPRF_PD_MASK                    (0x1U << GRF_SOC_CON8_SDMMC_DPRF_PD_SHIFT)                   /* 0x00000002 */
#define GRF_SOC_CON8_VIP_DPRF_PD_SHIFT                     (2U)
#define GRF_SOC_CON8_VIP_DPRF_PD_MASK                      (0x1U << GRF_SOC_CON8_VIP_DPRF_PD_SHIFT)                     /* 0x00000004 */
#define GRF_SOC_CON8_AHBBUFFER_SPRA_MS_SHIFT               (8U)
#define GRF_SOC_CON8_AHBBUFFER_SPRA_MS_MASK                (0xFU << GRF_SOC_CON8_AHBBUFFER_SPRA_MS_SHIFT)               /* 0x00000F00 */
#define GRF_SOC_CON8_AHBBUFFER_SPRA_MSE_SHIFT              (12U)
#define GRF_SOC_CON8_AHBBUFFER_SPRA_MSE_MASK               (0x1U << GRF_SOC_CON8_AHBBUFFER_SPRA_MSE_SHIFT)              /* 0x00001000 */
#define GRF_SOC_CON8_AHBBUFFER_SPRA_PD_SHIFT               (13U)
#define GRF_SOC_CON8_AHBBUFFER_SPRA_PD_MASK                (0x1U << GRF_SOC_CON8_AHBBUFFER_SPRA_PD_SHIFT)               /* 0x00002000 */
#define GRF_SOC_CON8_AHBBUFFER_SPRA_NAP_SHIFT              (14U)
#define GRF_SOC_CON8_AHBBUFFER_SPRA_NAP_MASK               (0x1U << GRF_SOC_CON8_AHBBUFFER_SPRA_NAP_SHIFT)              /* 0x00004000 */
#define GRF_SOC_CON8_AHBBUFFER_SPRA_RET_SHIFT              (15U)
#define GRF_SOC_CON8_AHBBUFFER_SPRA_RET_MASK               (0x1U << GRF_SOC_CON8_AHBBUFFER_SPRA_RET_SHIFT)              /* 0x00008000 */
/* SOC_CON9 */
#define GRF_SOC_CON9_INTMEM0_SPRA_MS_SHIFT                 (0U)
#define GRF_SOC_CON9_INTMEM0_SPRA_MS_MASK                  (0xFU << GRF_SOC_CON9_INTMEM0_SPRA_MS_SHIFT)                 /* 0x0000000F */
#define GRF_SOC_CON9_INTMEM0_SPRA_MSE_SHIFT                (4U)
#define GRF_SOC_CON9_INTMEM0_SPRA_MSE_MASK                 (0x1U << GRF_SOC_CON9_INTMEM0_SPRA_MSE_SHIFT)                /* 0x00000010 */
#define GRF_SOC_CON9_INTMEM1_SPRA_MS_SHIFT                 (8U)
#define GRF_SOC_CON9_INTMEM1_SPRA_MS_MASK                  (0xFU << GRF_SOC_CON9_INTMEM1_SPRA_MS_SHIFT)                 /* 0x00000F00 */
#define GRF_SOC_CON9_INTMEM1_SPRA_MSE_SHIFT                (12U)
#define GRF_SOC_CON9_INTMEM1_SPRA_MSE_MASK                 (0x1U << GRF_SOC_CON9_INTMEM1_SPRA_MSE_SHIFT)                /* 0x00001000 */
/* SOC_CON10 */
#define GRF_SOC_CON10_VAD_SPRF_PD_SHIFT                    (0U)
#define GRF_SOC_CON10_VAD_SPRF_PD_MASK                     (0x1U << GRF_SOC_CON10_VAD_SPRF_PD_SHIFT)                    /* 0x00000001 */
#define GRF_SOC_CON10_VAD_SPRF_RTSEL_SHIFT                 (1U)
#define GRF_SOC_CON10_VAD_SPRF_RTSEL_MASK                  (0x1U << GRF_SOC_CON10_VAD_SPRF_RTSEL_SHIFT)                 /* 0x00000002 */
#define GRF_SOC_CON10_VAD_SPRF_TURBO_SHIFT                 (2U)
#define GRF_SOC_CON10_VAD_SPRF_TURBO_MASK                  (0x1U << GRF_SOC_CON10_VAD_SPRF_TURBO_SHIFT)                 /* 0x00000004 */
#define GRF_SOC_CON10_VAD_SPRF_TSEL_SHIFT                  (3U)
#define GRF_SOC_CON10_VAD_SPRF_TSEL_MASK                   (0x3U << GRF_SOC_CON10_VAD_SPRF_TSEL_SHIFT)                  /* 0x00000018 */
#define GRF_SOC_CON10_PDM_SPRF_PD_SHIFT                    (5U)
#define GRF_SOC_CON10_PDM_SPRF_PD_MASK                     (0x1U << GRF_SOC_CON10_PDM_SPRF_PD_SHIFT)                    /* 0x00000020 */
#define GRF_SOC_CON10_PDM_SPRF_RTSEL_SHIFT                 (6U)
#define GRF_SOC_CON10_PDM_SPRF_RTSEL_MASK                  (0x1U << GRF_SOC_CON10_PDM_SPRF_RTSEL_SHIFT)                 /* 0x00000040 */
#define GRF_SOC_CON10_PDM_SPRF_TURBO_SHIFT                 (7U)
#define GRF_SOC_CON10_PDM_SPRF_TURBO_MASK                  (0x1U << GRF_SOC_CON10_PDM_SPRF_TURBO_SHIFT)                 /* 0x00000080 */
#define GRF_SOC_CON10_PDM_SPRF_TSEL_SHIFT                  (8U)
#define GRF_SOC_CON10_PDM_SPRF_TSEL_MASK                   (0x3U << GRF_SOC_CON10_PDM_SPRF_TSEL_SHIFT)                  /* 0x00000300 */
#define GRF_SOC_CON10_CODEC_SPRF_PD_SHIFT                  (10U)
#define GRF_SOC_CON10_CODEC_SPRF_PD_MASK                   (0x1U << GRF_SOC_CON10_CODEC_SPRF_PD_SHIFT)                  /* 0x00000400 */
#define GRF_SOC_CON10_CODEC_SPRF_RTSEL_SHIFT               (11U)
#define GRF_SOC_CON10_CODEC_SPRF_RTSEL_MASK                (0x1U << GRF_SOC_CON10_CODEC_SPRF_RTSEL_SHIFT)               /* 0x00000800 */
#define GRF_SOC_CON10_CODEC_SPRF_TURBO_SHIFT               (12U)
#define GRF_SOC_CON10_CODEC_SPRF_TURBO_MASK                (0x1U << GRF_SOC_CON10_CODEC_SPRF_TURBO_SHIFT)               /* 0x00001000 */
#define GRF_SOC_CON10_CODEC_SPRF_TSEL_SHIFT                (13U)
#define GRF_SOC_CON10_CODEC_SPRF_TSEL_MASK                 (0x3U << GRF_SOC_CON10_CODEC_SPRF_TSEL_SHIFT)                /* 0x00006000 */
/* SOC_CON11 */
#define GRF_SOC_CON11_DSP_SPRA_MS_SHIFT                    (0U)
#define GRF_SOC_CON11_DSP_SPRA_MS_MASK                     (0xFU << GRF_SOC_CON11_DSP_SPRA_MS_SHIFT)                    /* 0x0000000F */
#define GRF_SOC_CON11_DSP_SPRA_MSE_SHIFT                   (4U)
#define GRF_SOC_CON11_DSP_SPRA_MSE_MASK                    (0x1U << GRF_SOC_CON11_DSP_SPRA_MSE_SHIFT)                   /* 0x00000010 */
/* SOC_CON12 */
#define GRF_SOC_CON12_DSP_ITCM_SPRA_NAP_SHIFT              (0U)
#define GRF_SOC_CON12_DSP_ITCM_SPRA_NAP_MASK               (0x3U << GRF_SOC_CON12_DSP_ITCM_SPRA_NAP_SHIFT)              /* 0x00000003 */
#define GRF_SOC_CON12_DSP_DTCM_SPRA_NAP_SHIFT              (4U)
#define GRF_SOC_CON12_DSP_DTCM_SPRA_NAP_MASK               (0xFFFU << GRF_SOC_CON12_DSP_DTCM_SPRA_NAP_SHIFT)            /* 0x0000FFF0 */
/* SOC_CON13 */
#define GRF_SOC_CON13_DSP_ITCM_SPRA_RET_SHIFT              (0U)
#define GRF_SOC_CON13_DSP_ITCM_SPRA_RET_MASK               (0x3U << GRF_SOC_CON13_DSP_ITCM_SPRA_RET_SHIFT)              /* 0x00000003 */
#define GRF_SOC_CON13_DSP_DTCM_SPRA_RET_SHIFT              (4U)
#define GRF_SOC_CON13_DSP_DTCM_SPRA_RET_MASK               (0xFFFU << GRF_SOC_CON13_DSP_DTCM_SPRA_RET_SHIFT)            /* 0x0000FFF0 */
/* SOC_CON14 */
#define GRF_SOC_CON14_DSP_ITCM_SPRA_PD_SHIFT               (0U)
#define GRF_SOC_CON14_DSP_ITCM_SPRA_PD_MASK                (0x3U << GRF_SOC_CON14_DSP_ITCM_SPRA_PD_SHIFT)               /* 0x00000003 */
#define GRF_SOC_CON14_DSP_DTCM_SPRA_PD_SHIFT               (4U)
#define GRF_SOC_CON14_DSP_DTCM_SPRA_PD_MASK                (0xFFFU << GRF_SOC_CON14_DSP_DTCM_SPRA_PD_SHIFT)             /* 0x0000FFF0 */
/* SOC_CON15 */
#define GRF_SOC_CON15_GRF_SARADC_IEN_SHIFT                 (0U)
#define GRF_SOC_CON15_GRF_SARADC_IEN_MASK                  (0xFFU << GRF_SOC_CON15_GRF_SARADC_IEN_SHIFT)                /* 0x000000FF */
/* SOC_CON16 */
#define GRF_SOC_CON16_GRF_UART0_MULTI_IOFUNC_SRC_SEL_SHIFT (0U)
#define GRF_SOC_CON16_GRF_UART0_MULTI_IOFUNC_SRC_SEL_MASK  (0x1U << GRF_SOC_CON16_GRF_UART0_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000001 */
#define GRF_SOC_CON16_GRF_UART1_MULTI_IOFUNC_SRC_SEL_SHIFT (1U)
#define GRF_SOC_CON16_GRF_UART1_MULTI_IOFUNC_SRC_SEL_MASK  (0x3U << GRF_SOC_CON16_GRF_UART1_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000006 */
#define GRF_SOC_CON16_GRF_UART2_MULTI_IOFUNC_SRC_SEL_SHIFT (3U)
#define GRF_SOC_CON16_GRF_UART2_MULTI_IOFUNC_SRC_SEL_MASK  (0x1U << GRF_SOC_CON16_GRF_UART2_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000008 */
#define GRF_SOC_CON16_GRF_I2S_MULTI_IOFUNC_SRC_SEL_SHIFT   (4U)
#define GRF_SOC_CON16_GRF_I2S_MULTI_IOFUNC_SRC_SEL_MASK    (0x1U << GRF_SOC_CON16_GRF_I2S_MULTI_IOFUNC_SRC_SEL_SHIFT)   /* 0x00000010 */
#define GRF_SOC_CON16_GRF_TOUCHKEY0_MULTI_IOFUNC_SRC_SEL_SHIFT (5U)
#define GRF_SOC_CON16_GRF_TOUCHKEY0_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY0_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000020 */
#define GRF_SOC_CON16_GRF_TOUCHKEY1_MULTI_IOFUNC_SRC_SEL_SHIFT (6U)
#define GRF_SOC_CON16_GRF_TOUCHKEY1_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY1_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000040 */
#define GRF_SOC_CON16_GRF_TOUCHKEY2_MULTI_IOFUNC_SRC_SEL_SHIFT (7U)
#define GRF_SOC_CON16_GRF_TOUCHKEY2_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY2_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000080 */
#define GRF_SOC_CON16_GRF_TOUCHKEY3_MULTI_IOFUNC_SRC_SEL_SHIFT (8U)
#define GRF_SOC_CON16_GRF_TOUCHKEY3_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY3_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000100 */
#define GRF_SOC_CON16_GRF_TOUCHKEY4_MULTI_IOFUNC_SRC_SEL_SHIFT (9U)
#define GRF_SOC_CON16_GRF_TOUCHKEY4_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY4_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000200 */
#define GRF_SOC_CON16_GRF_TOUCHKEY5_MULTI_IOFUNC_SRC_SEL_SHIFT (10U)
#define GRF_SOC_CON16_GRF_TOUCHKEY5_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY5_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000400 */
#define GRF_SOC_CON16_GRF_TOUCHKEY6_MULTI_IOFUNC_SRC_SEL_SHIFT (11U)
#define GRF_SOC_CON16_GRF_TOUCHKEY6_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_TOUCHKEY6_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00000800 */
#define GRF_SOC_CON16_GRF_I2C_TRANS_REQ_SHIFT              (12U)
#define GRF_SOC_CON16_GRF_I2C_TRANS_REQ_MASK               (0x1U << GRF_SOC_CON16_GRF_I2C_TRANS_REQ_SHIFT)              /* 0x00001000 */
#define GRF_SOC_CON16_GRF_CODEC_PMIC_MULTI_IOFUNC_SRC_SEL_SHIFT (13U)
#define GRF_SOC_CON16_GRF_CODEC_PMIC_MULTI_IOFUNC_SRC_SEL_MASK (0x1U << GRF_SOC_CON16_GRF_CODEC_PMIC_MULTI_IOFUNC_SRC_SEL_SHIFT) /* 0x00002000 */
#define GRF_SOC_CON16_GRF_FORCE_SEL_I2C2_SHIFT             (14U)
#define GRF_SOC_CON16_GRF_FORCE_SEL_I2C2_MASK              (0x1U << GRF_SOC_CON16_GRF_FORCE_SEL_I2C2_SHIFT)             /* 0x00004000 */
/* SOC_CON17 */
#define GRF_SOC_CON17_GRF_CON_CH0_REQ_ACK_SEL_SHIFT        (0U)
#define GRF_SOC_CON17_GRF_CON_CH0_REQ_ACK_SEL_MASK         (0x3U << GRF_SOC_CON17_GRF_CON_CH0_REQ_ACK_SEL_SHIFT)        /* 0x00000003 */
#define GRF_SOC_CON17_GRF_CON_CH1_REQ_ACK_SEL_SHIFT        (2U)
#define GRF_SOC_CON17_GRF_CON_CH1_REQ_ACK_SEL_MASK         (0x3U << GRF_SOC_CON17_GRF_CON_CH1_REQ_ACK_SEL_SHIFT)        /* 0x0000000C */
#define GRF_SOC_CON17_GRF_CON_CH2_REQ_ACK_SEL_SHIFT        (4U)
#define GRF_SOC_CON17_GRF_CON_CH2_REQ_ACK_SEL_MASK         (0x3U << GRF_SOC_CON17_GRF_CON_CH2_REQ_ACK_SEL_SHIFT)        /* 0x00000030 */
#define GRF_SOC_CON17_GRF_CON_CH3_REQ_ACK_SEL_SHIFT        (6U)
#define GRF_SOC_CON17_GRF_CON_CH3_REQ_ACK_SEL_MASK         (0x3U << GRF_SOC_CON17_GRF_CON_CH3_REQ_ACK_SEL_SHIFT)        /* 0x000000C0 */
#define GRF_SOC_CON17_GRF_CON_CH8_REQ_ACK_SEL_SHIFT        (8U)
#define GRF_SOC_CON17_GRF_CON_CH8_REQ_ACK_SEL_MASK         (0x3U << GRF_SOC_CON17_GRF_CON_CH8_REQ_ACK_SEL_SHIFT)        /* 0x00000300 */
/* SOC_CON18 */
#define GRF_SOC_CON18_EFUSE_RD_MASK0_SHIFT                 (0U)
#define GRF_SOC_CON18_EFUSE_RD_MASK0_MASK                  (0xFFFFFFFFU << GRF_SOC_CON18_EFUSE_RD_MASK0_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON19 */
#define GRF_SOC_CON19_EFUSE_RD_MASK1_SHIFT                 (0U)
#define GRF_SOC_CON19_EFUSE_RD_MASK1_MASK                  (0xFFFFFFFFU << GRF_SOC_CON19_EFUSE_RD_MASK1_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON20 */
#define GRF_SOC_CON20_EFUSE_RD_MASK2_SHIFT                 (0U)
#define GRF_SOC_CON20_EFUSE_RD_MASK2_MASK                  (0xFFFFFFFFU << GRF_SOC_CON20_EFUSE_RD_MASK2_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON21 */
#define GRF_SOC_CON21_EFUSE_RD_MASK3_SHIFT                 (0U)
#define GRF_SOC_CON21_EFUSE_RD_MASK3_MASK                  (0xFFFFFFFFU << GRF_SOC_CON21_EFUSE_RD_MASK3_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON22 */
#define GRF_SOC_CON22_EFUSE_PG_MASK0_SHIFT                 (0U)
#define GRF_SOC_CON22_EFUSE_PG_MASK0_MASK                  (0xFFFFFFFFU << GRF_SOC_CON22_EFUSE_PG_MASK0_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON23 */
#define GRF_SOC_CON23_EFUSE_PG_MASK1_SHIFT                 (0U)
#define GRF_SOC_CON23_EFUSE_PG_MASK1_MASK                  (0xFFFFFFFFU << GRF_SOC_CON23_EFUSE_PG_MASK1_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON24 */
#define GRF_SOC_CON24_EFUSE_PG_MASK2_SHIFT                 (0U)
#define GRF_SOC_CON24_EFUSE_PG_MASK2_MASK                  (0xFFFFFFFFU << GRF_SOC_CON24_EFUSE_PG_MASK2_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON25 */
#define GRF_SOC_CON25_EFUSE_PG_MASK3_SHIFT                 (0U)
#define GRF_SOC_CON25_EFUSE_PG_MASK3_MASK                  (0xFFFFFFFFU << GRF_SOC_CON25_EFUSE_PG_MASK3_SHIFT)          /* 0xFFFFFFFF */
/* SOC_CON26 */
#define GRF_SOC_CON26_SPI2APB_ADDR_RANGE_LOW_SHIFT         (0U)
#define GRF_SOC_CON26_SPI2APB_ADDR_RANGE_LOW_MASK          (0xFFFFFFFFU << GRF_SOC_CON26_SPI2APB_ADDR_RANGE_LOW_SHIFT)  /* 0xFFFFFFFF */
/* SOC_CON27 */
#define GRF_SOC_CON27_SPI2APB_ADDR_RANGE_HIGH_SHIFT        (0U)
#define GRF_SOC_CON27_SPI2APB_ADDR_RANGE_HIGH_MASK         (0xFFFFFFFFU << GRF_SOC_CON27_SPI2APB_ADDR_RANGE_HIGH_SHIFT) /* 0xFFFFFFFF */
/* SOC_CON28 */
#define GRF_SOC_CON28_DMASSWFWD_PERISLVSWFWD_PWRSTALL_SHIFT (0U)
#define GRF_SOC_CON28_DMASSWFWD_PERISLVSWFWD_PWRSTALL_MASK (0x1U << GRF_SOC_CON28_DMASSWFWD_PERISLVSWFWD_PWRSTALL_SHIFT) /* 0x00000001 */
#define GRF_SOC_CON28_DMASSWFWD_PMUSLVSWFWD_PWRSTALL_SHIFT (1U)
#define GRF_SOC_CON28_DMASSWFWD_PMUSLVSWFWD_PWRSTALL_MASK  (0x1U << GRF_SOC_CON28_DMASSWFWD_PMUSLVSWFWD_PWRSTALL_SHIFT) /* 0x00000002 */
#define GRF_SOC_CON28_DMASSWFWD_WIFISLVSWFWD_PWRSTALL_SHIFT (2U)
#define GRF_SOC_CON28_DMASSWFWD_WIFISLVSWFWD_PWRSTALL_MASK (0x1U << GRF_SOC_CON28_DMASSWFWD_WIFISLVSWFWD_PWRSTALL_SHIFT) /* 0x00000004 */
#define GRF_SOC_CON28_VADMSTSWFWD_PWRSTALL_SHIFT           (3U)
#define GRF_SOC_CON28_VADMSTSWFWD_PWRSTALL_MASK            (0x1U << GRF_SOC_CON28_VADMSTSWFWD_PWRSTALL_SHIFT)           /* 0x00000008 */
#define GRF_SOC_CON28_LPWSRAMSWLINKFWD_PWRSTALL_SHIFT      (4U)
#define GRF_SOC_CON28_LPWSRAMSWLINKFWD_PWRSTALL_MASK       (0x1U << GRF_SOC_CON28_LPWSRAMSWLINKFWD_PWRSTALL_SHIFT)      /* 0x00000010 */
#define GRF_SOC_CON28_PERIMSTSWLINKFWD_PWRSALL_SHIFT       (5U)
#define GRF_SOC_CON28_PERIMSTSWLINKFWD_PWRSALL_MASK        (0x1U << GRF_SOC_CON28_PERIMSTSWLINKFWD_PWRSALL_SHIFT)       /* 0x00000020 */
/* SOC_CON29 */
#define GRF_SOC_CON29_GRF_SARADC_ANA_REG_LOW_SHIFT         (0U)
#define GRF_SOC_CON29_GRF_SARADC_ANA_REG_LOW_MASK          (0xFU << GRF_SOC_CON29_GRF_SARADC_ANA_REG_LOW_SHIFT)         /* 0x0000000F */
#define GRF_SOC_CON29_GRF_SARADC_VOL_SEL_SHIFT             (4U)
#define GRF_SOC_CON29_GRF_SARADC_VOL_SEL_MASK              (0x1U << GRF_SOC_CON29_GRF_SARADC_VOL_SEL_SHIFT)             /* 0x00000010 */
#define GRF_SOC_CON29_GRF_SARADC_ANA_REG_HIGH_SHIFT        (5U)
#define GRF_SOC_CON29_GRF_SARADC_ANA_REG_HIGH_MASK         (0x7FFU << GRF_SOC_CON29_GRF_SARADC_ANA_REG_HIGH_SHIFT)      /* 0x0000FFE0 */
/* SOC_STATUS */
#define GRF_SOC_STATUS_GRF_ST_GPLL_LOCK_SHIFT              (0U)
#define GRF_SOC_STATUS_GRF_ST_GPLL_LOCK_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_GPLL_LOCK_SHIFT)              /* 0x00000001 */
#define GRF_SOC_STATUS_GRF_ST_TIMER0_EN_SHIFT              (1U)
#define GRF_SOC_STATUS_GRF_ST_TIMER0_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER0_EN_SHIFT)              /* 0x00000002 */
#define GRF_SOC_STATUS_GRF_ST_TIMER1_EN_SHIFT              (2U)
#define GRF_SOC_STATUS_GRF_ST_TIMER1_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER1_EN_SHIFT)              /* 0x00000004 */
#define GRF_SOC_STATUS_GRF_ST_TIMER2_EN_SHIFT              (3U)
#define GRF_SOC_STATUS_GRF_ST_TIMER2_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER2_EN_SHIFT)              /* 0x00000008 */
#define GRF_SOC_STATUS_GRF_ST_TIMER3_EN_SHIFT              (4U)
#define GRF_SOC_STATUS_GRF_ST_TIMER3_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER3_EN_SHIFT)              /* 0x00000010 */
#define GRF_SOC_STATUS_GRF_ST_TIMER4_EN_SHIFT              (5U)
#define GRF_SOC_STATUS_GRF_ST_TIMER4_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER4_EN_SHIFT)              /* 0x00000020 */
#define GRF_SOC_STATUS_GRF_ST_TIMER5_EN_SHIFT              (6U)
#define GRF_SOC_STATUS_GRF_ST_TIMER5_EN_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER5_EN_SHIFT)              /* 0x00000040 */
#define GRF_SOC_STATUS_GRF_ST_VPLL_LOCK_SHIFT              (7U)
#define GRF_SOC_STATUS_GRF_ST_VPLL_LOCK_MASK               (0x1U << GRF_SOC_STATUS_GRF_ST_VPLL_LOCK_SHIFT)              /* 0x00000080 */
#define GRF_SOC_STATUS_GRF_ST_NPOR_BYPASSN_SHIFT           (8U)
#define GRF_SOC_STATUS_GRF_ST_NPOR_BYPASSN_MASK            (0x1U << GRF_SOC_STATUS_GRF_ST_NPOR_BYPASSN_SHIFT)           /* 0x00000100 */
#define GRF_SOC_STATUS_GRF_ST_RTC_BYPASS_SHIFT             (9U)
#define GRF_SOC_STATUS_GRF_ST_RTC_BYPASS_MASK              (0x1U << GRF_SOC_STATUS_GRF_ST_RTC_BYPASS_SHIFT)             /* 0x00000200 */
#define GRF_SOC_STATUS_DCACHE0_FLUSH_ACK_SHIFT             (10U)
#define GRF_SOC_STATUS_DCACHE0_FLUSH_ACK_MASK              (0x1U << GRF_SOC_STATUS_DCACHE0_FLUSH_ACK_SHIFT)             /* 0x00000400 */
#define GRF_SOC_STATUS_ICACHE0_FLUSH_ACK_SHIFT             (11U)
#define GRF_SOC_STATUS_ICACHE0_FLUSH_ACK_MASK              (0x1U << GRF_SOC_STATUS_ICACHE0_FLUSH_ACK_SHIFT)             /* 0x00000800 */
#define GRF_SOC_STATUS_USB2OTG_UTMI_IDDIG_SHIFT            (12U)
#define GRF_SOC_STATUS_USB2OTG_UTMI_IDDIG_MASK             (0x1U << GRF_SOC_STATUS_USB2OTG_UTMI_IDDIG_SHIFT)            /* 0x00001000 */
#define GRF_SOC_STATUS_USB2OTG_UTMI_BVALID_SHIFT           (13U)
#define GRF_SOC_STATUS_USB2OTG_UTMI_BVALID_MASK            (0x1U << GRF_SOC_STATUS_USB2OTG_UTMI_BVALID_SHIFT)           /* 0x00002000 */
#define GRF_SOC_STATUS_USB2OTG_UTMI_LINESTATE_SHIFT        (14U)
#define GRF_SOC_STATUS_USB2OTG_UTMI_LINESTATE_MASK         (0x3U << GRF_SOC_STATUS_USB2OTG_UTMI_LINESTATE_SHIFT)        /* 0x0000C000 */
#define GRF_SOC_STATUS_USB2OTG_UTMI_VBUSVALID_SHIFT        (16U)
#define GRF_SOC_STATUS_USB2OTG_UTMI_VBUSVALID_MASK         (0x1U << GRF_SOC_STATUS_USB2OTG_UTMI_VBUSVALID_SHIFT)        /* 0x00010000 */
#define GRF_SOC_STATUS_CACHE1_FLUSH_ACK_SHIFT              (17U)
#define GRF_SOC_STATUS_CACHE1_FLUSH_ACK_MASK               (0x1U << GRF_SOC_STATUS_CACHE1_FLUSH_ACK_SHIFT)              /* 0x00020000 */
#define GRF_SOC_STATUS_GRF_ST_TIMER_1CH_EN_SHIFT           (18U)
#define GRF_SOC_STATUS_GRF_ST_TIMER_1CH_EN_MASK            (0x1U << GRF_SOC_STATUS_GRF_ST_TIMER_1CH_EN_SHIFT)           /* 0x00040000 */
#define GRF_SOC_STATUS_GRF_CODEC_I2C_TRANS_ACK_SHIFT       (19U)
#define GRF_SOC_STATUS_GRF_CODEC_I2C_TRANS_ACK_MASK        (0x1U << GRF_SOC_STATUS_GRF_CODEC_I2C_TRANS_ACK_SHIFT)       /* 0x00080000 */
#define GRF_SOC_STATUS_DMASSWFWD_PERISLVSWFWD_PWRACTIVE_SHIFT (20U)
#define GRF_SOC_STATUS_DMASSWFWD_PERISLVSWFWD_PWRACTIVE_MASK (0x1U << GRF_SOC_STATUS_DMASSWFWD_PERISLVSWFWD_PWRACTIVE_SHIFT) /* 0x00100000 */
#define GRF_SOC_STATUS_DMASSWFWD_PMUSLVSWFWD_PWRACTIVE_SHIFT (21U)
#define GRF_SOC_STATUS_DMASSWFWD_PMUSLVSWFWD_PWRACTIVE_MASK (0x1U << GRF_SOC_STATUS_DMASSWFWD_PMUSLVSWFWD_PWRACTIVE_SHIFT) /* 0x00200000 */
#define GRF_SOC_STATUS_DMASSWFWD_WIFISLVSWFWD_PWRACTIVE_SHIFT (22U)
#define GRF_SOC_STATUS_DMASSWFWD_WIFISLVSWFWD_PWRACTIVE_MASK (0x1U << GRF_SOC_STATUS_DMASSWFWD_WIFISLVSWFWD_PWRACTIVE_SHIFT) /* 0x00400000 */
#define GRF_SOC_STATUS_VADMSTSWFWD_PWRACTIVE_SHIFT         (23U)
#define GRF_SOC_STATUS_VADMSTSWFWD_PWRACTIVE_MASK          (0x1U << GRF_SOC_STATUS_VADMSTSWFWD_PWRACTIVE_SHIFT)         /* 0x00800000 */
#define GRF_SOC_STATUS_LPWSRAMSWLINKFWD_PWRACTIVE_SHIFT    (24U)
#define GRF_SOC_STATUS_LPWSRAMSWLINKFWD_PWRACTIVE_MASK     (0x1U << GRF_SOC_STATUS_LPWSRAMSWLINKFWD_PWRACTIVE_SHIFT)    /* 0x01000000 */
#define GRF_SOC_STATUS_PERIMSTSWLINKFWD_PWRACTIVE_SHIFT    (25U)
#define GRF_SOC_STATUS_PERIMSTSWLINKFWD_PWRACTIVE_MASK     (0x1U << GRF_SOC_STATUS_PERIMSTSWLINKFWD_PWRACTIVE_SHIFT)    /* 0x02000000 */
/* MCU0_CON0 */
#define GRF_MCU0_CON0_M4_TENMS_SHIFT                       (0U)
#define GRF_MCU0_CON0_M4_TENMS_MASK                        (0xFFFFFFU << GRF_MCU0_CON0_M4_TENMS_SHIFT)                  /* 0x00FFFFFF */
#define GRF_MCU0_CON0_M4_SKEW_SHIFT                        (24U)
#define GRF_MCU0_CON0_M4_SKEW_MASK                         (0x1U << GRF_MCU0_CON0_M4_SKEW_SHIFT)                        /* 0x01000000 */
/* MCU0_CON1 */
#define GRF_MCU0_CON1_GRF_CON_M4F_RXEV_SHIFT               (0U)
#define GRF_MCU0_CON1_GRF_CON_M4F_RXEV_MASK                (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_RXEV_SHIFT)               /* 0x00000001 */
#define GRF_MCU0_CON1_GRF_CON_M4F_NMI_SHIFT                (1U)
#define GRF_MCU0_CON1_GRF_CON_M4F_NMI_MASK                 (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_NMI_SHIFT)                /* 0x00000002 */
#define GRF_MCU0_CON1_GRF_CON_M4F_EDBGRP_SHIFT             (2U)
#define GRF_MCU0_CON1_GRF_CON_M4F_EDBGRP_MASK              (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_EDBGRP_SHIFT)             /* 0x00000004 */
#define GRF_MCU0_CON1_GRF_CON_M4F_DBGRESTART_SHIFT         (3U)
#define GRF_MCU0_CON1_GRF_CON_M4F_DBGRESTART_MASK          (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_DBGRESTART_SHIFT)         /* 0x00000008 */
#define GRF_MCU0_CON1_GRF_CON_M4F_DBGEN_SHIFT              (4U)
#define GRF_MCU0_CON1_GRF_CON_M4F_DBGEN_MASK               (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_DBGEN_SHIFT)              /* 0x00000010 */
#define GRF_MCU0_CON1_GRF_CON_M4F_PMU_ENABLE_SHIFT         (5U)
#define GRF_MCU0_CON1_GRF_CON_M4F_PMU_ENABLE_MASK          (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_PMU_ENABLE_SHIFT)         /* 0x00000020 */
#define GRF_MCU0_CON1_GRF_CON_M4F_MPU_DISABLE_SHIFT        (6U)
#define GRF_MCU0_CON1_GRF_CON_M4F_MPU_DISABLE_MASK         (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_MPU_DISABLE_SHIFT)        /* 0x00000040 */
#define GRF_MCU0_CON1_GRF_CON_M4F_FPU_DISABLE_SHIFT        (7U)
#define GRF_MCU0_CON1_GRF_CON_M4F_FPU_DISABLE_MASK         (0x1U << GRF_MCU0_CON1_GRF_CON_M4F_FPU_DISABLE_SHIFT)        /* 0x00000080 */
/* MCU1_CON0 */
#define GRF_MCU1_CON0_GRF_CON_M0_STALIB_SHIFT              (0U)
#define GRF_MCU1_CON0_GRF_CON_M0_STALIB_MASK               (0x3FFFFFFU << GRF_MCU1_CON0_GRF_CON_M0_STALIB_SHIFT)        /* 0x03FFFFFF */
/* MCU1_CON1 */
#define GRF_MCU1_CON1_GRF_CON_M0_RXEV_SHIFT                (0U)
#define GRF_MCU1_CON1_GRF_CON_M0_RXEV_MASK                 (0x1U << GRF_MCU1_CON1_GRF_CON_M0_RXEV_SHIFT)                /* 0x00000001 */
#define GRF_MCU1_CON1_GRF_CON_M0_NMI_SHIFT                 (1U)
#define GRF_MCU1_CON1_GRF_CON_M0_NMI_MASK                  (0x1U << GRF_MCU1_CON1_GRF_CON_M0_NMI_SHIFT)                 /* 0x00000002 */
#define GRF_MCU1_CON1_GRF_CON_M0_EDBGRP_SHIFT              (2U)
#define GRF_MCU1_CON1_GRF_CON_M0_EDBGRP_MASK               (0x1U << GRF_MCU1_CON1_GRF_CON_M0_EDBGRP_SHIFT)              /* 0x00000004 */
#define GRF_MCU1_CON1_GRF_CON_M0_DBGRESTART_SHIFT          (3U)
#define GRF_MCU1_CON1_GRF_CON_M0_DBGRESTART_MASK           (0x1U << GRF_MCU1_CON1_GRF_CON_M0_DBGRESTART_SHIFT)          /* 0x00000008 */
#define GRF_MCU1_CON1_GRF_CON_M0_DBGEN_SHIFT               (4U)
#define GRF_MCU1_CON1_GRF_CON_M0_DBGEN_MASK                (0x1U << GRF_MCU1_CON1_GRF_CON_M0_DBGEN_SHIFT)               /* 0x00000010 */
#define GRF_MCU1_CON1_GRF_CON_M0_PMU_ENABLE_SHIFT          (5U)
#define GRF_MCU1_CON1_GRF_CON_M0_PMU_ENABLE_MASK           (0x1U << GRF_MCU1_CON1_GRF_CON_M0_PMU_ENABLE_SHIFT)          /* 0x00000020 */
#define GRF_MCU1_CON1_GRF_CON_M0_MPU_DISABLE_SHIFT         (6U)
#define GRF_MCU1_CON1_GRF_CON_M0_MPU_DISABLE_MASK          (0xFFU << GRF_MCU1_CON1_GRF_CON_M0_MPU_DISABLE_SHIFT)        /* 0x00003FC0 */
/* SOC_DSP0 */
#define GRF_SOC_DSP0_GRF_CON_DSP_OCDHALTONRESET_SHIFT      (0U)
#define GRF_SOC_DSP0_GRF_CON_DSP_OCDHALTONRESET_MASK       (0x1U << GRF_SOC_DSP0_GRF_CON_DSP_OCDHALTONRESET_SHIFT)      /* 0x00000001 */
#define GRF_SOC_DSP0_GRF_CON_DSP_BREAKIN_SHIFT             (1U)
#define GRF_SOC_DSP0_GRF_CON_DSP_BREAKIN_MASK              (0x1U << GRF_SOC_DSP0_GRF_CON_DSP_BREAKIN_SHIFT)             /* 0x00000002 */
#define GRF_SOC_DSP0_GRF_CON_DSP_BREAKOUTACK_SHIFT         (2U)
#define GRF_SOC_DSP0_GRF_CON_DSP_BREAKOUTACK_MASK          (0x1U << GRF_SOC_DSP0_GRF_CON_DSP_BREAKOUTACK_SHIFT)         /* 0x00000004 */
#define GRF_SOC_DSP0_GRF_CON_DSP_STATVECTORSEL_SHIFT       (4U)
#define GRF_SOC_DSP0_GRF_CON_DSP_STATVECTORSEL_MASK        (0x1U << GRF_SOC_DSP0_GRF_CON_DSP_STATVECTORSEL_SHIFT)       /* 0x00000010 */
#define GRF_SOC_DSP0_GRF_CON_DSP_RUNSTALL_SHIFT            (5U)
#define GRF_SOC_DSP0_GRF_CON_DSP_RUNSTALL_MASK             (0x1U << GRF_SOC_DSP0_GRF_CON_DSP_RUNSTALL_SHIFT)            /* 0x00000020 */
/* SOC_DSP1 */
#define GRF_SOC_DSP1_GRF_CON_DSP_ALTRESETVEC_SHIFT         (0U)
#define GRF_SOC_DSP1_GRF_CON_DSP_ALTRESETVEC_MASK          (0xFFFFFFFFU << GRF_SOC_DSP1_GRF_CON_DSP_ALTRESETVEC_SHIFT)  /* 0xFFFFFFFF */
/* SOC_DSP2 */
#define GRF_SOC_DSP2_GRF_CON_DSP_MEMAUTOGATINGEN_SHIFT     (0U)
#define GRF_SOC_DSP2_GRF_CON_DSP_MEMAUTOGATINGEN_MASK      (0x1FU << GRF_SOC_DSP2_GRF_CON_DSP_MEMAUTOGATINGEN_SHIFT)    /* 0x0000001F */
#define GRF_SOC_DSP2_GRF_CON_DSP_TCM_MEMAUTOGATINGEN_SHIFT (5U)
#define GRF_SOC_DSP2_GRF_CON_DSP_TCM_MEMAUTOGATINGEN_MASK  (0x3U << GRF_SOC_DSP2_GRF_CON_DSP_TCM_MEMAUTOGATINGEN_SHIFT) /* 0x00000060 */
/* SOC_UOC0 */
#define GRF_SOC_UOC0_OTGPHY_COMMON_ON_N_SHIFT              (0U)
#define GRF_SOC_UOC0_OTGPHY_COMMON_ON_N_MASK               (0x1U << GRF_SOC_UOC0_OTGPHY_COMMON_ON_N_SHIFT)              /* 0x00000001 */
#define GRF_SOC_UOC0_OTGPHY_COMPDISTUNE_SHIFT              (1U)
#define GRF_SOC_UOC0_OTGPHY_COMPDISTUNE_MASK               (0x7U << GRF_SOC_UOC0_OTGPHY_COMPDISTUNE_SHIFT)              /* 0x0000000E */
#define GRF_SOC_UOC0_OTGPHY_DISABLE_SHIFT                  (4U)
#define GRF_SOC_UOC0_OTGPHY_DISABLE_MASK                   (0x1U << GRF_SOC_UOC0_OTGPHY_DISABLE_SHIFT)                  /* 0x00000010 */
#define GRF_SOC_UOC0_OTGPHY_TUNE_SHIFT                     (5U)
#define GRF_SOC_UOC0_OTGPHY_TUNE_MASK                      (0x7U << GRF_SOC_UOC0_OTGPHY_TUNE_SHIFT)                     /* 0x000000E0 */
#define GRF_SOC_UOC0_OTGPHY_REFCLKDIV_SHIFT                (8U)
#define GRF_SOC_UOC0_OTGPHY_REFCLKDIV_MASK                 (0x3U << GRF_SOC_UOC0_OTGPHY_REFCLKDIV_SHIFT)                /* 0x00000300 */
#define GRF_SOC_UOC0_OTGPHY_REFCLKSEL_SHIFT                (10U)
#define GRF_SOC_UOC0_OTGPHY_REFCLKSEL_MASK                 (0x3U << GRF_SOC_UOC0_OTGPHY_REFCLKSEL_SHIFT)                /* 0x00000C00 */
#define GRF_SOC_UOC0_OTGPHY_PORT_RESET_SHIFT               (12U)
#define GRF_SOC_UOC0_OTGPHY_PORT_RESET_MASK                (0x1U << GRF_SOC_UOC0_OTGPHY_PORT_RESET_SHIFT)               /* 0x00001000 */
#define GRF_SOC_UOC0_OTGPHY_SIDDQ_SHIFT                    (13U)
#define GRF_SOC_UOC0_OTGPHY_SIDDQ_MASK                     (0x1U << GRF_SOC_UOC0_OTGPHY_SIDDQ_SHIFT)                    /* 0x00002000 */
#define GRF_SOC_UOC0_OTGPHY_TXBITSTUFFEN_SHIFT             (14U)
#define GRF_SOC_UOC0_OTGPHY_TXBITSTUFFEN_MASK              (0x1U << GRF_SOC_UOC0_OTGPHY_TXBITSTUFFEN_SHIFT)             /* 0x00004000 */
#define GRF_SOC_UOC0_OTGPHY_TXBITSTUFFENH_SHIFT            (15U)
#define GRF_SOC_UOC0_OTGPHY_TXBITSTUFFENH_MASK             (0x1U << GRF_SOC_UOC0_OTGPHY_TXBITSTUFFENH_SHIFT)            /* 0x00008000 */
/* SOC_UOC1 */
#define GRF_SOC_UOC1_OTGPHY_SQRXTUNE_SHIFT                 (0U)
#define GRF_SOC_UOC1_OTGPHY_SQRXTUNE_MASK                  (0x7U << GRF_SOC_UOC1_OTGPHY_SQRXTUNE_SHIFT)                 /* 0x00000007 */
#define GRF_SOC_UOC1_OTGPHY_TXPREEMPHASISTUNE_SHIFT        (3U)
#define GRF_SOC_UOC1_OTGPHY_TXPREEMPHASISTUNE_MASK         (0x1U << GRF_SOC_UOC1_OTGPHY_TXPREEMPHASISTUNE_SHIFT)        /* 0x00000008 */
#define GRF_SOC_UOC1_OTGPHY_TXFSLSTUNE_SHIFT               (4U)
#define GRF_SOC_UOC1_OTGPHY_TXFSLSTUNE_MASK                (0xFU << GRF_SOC_UOC1_OTGPHY_TXFSLSTUNE_SHIFT)               /* 0x000000F0 */
#define GRF_SOC_UOC1_TOGPHY_TXVREFTUNE_SHIFT               (8U)
#define GRF_SOC_UOC1_TOGPHY_TXVREFTUNE_MASK                (0xFU << GRF_SOC_UOC1_TOGPHY_TXVREFTUNE_SHIFT)               /* 0x00000F00 */
#define GRF_SOC_UOC1_OTGPHY_TXHSXVTUNE_SHIFT               (12U)
#define GRF_SOC_UOC1_OTGPHY_TXHSXVTUNE_MASK                (0x3U << GRF_SOC_UOC1_OTGPHY_TXHSXVTUNE_SHIFT)               /* 0x00003000 */
#define GRF_SOC_UOC1_OTGPHY_TXRISETUNE_SHIFT               (14U)
#define GRF_SOC_UOC1_OTGPHY_TXRISETUNE_MASK                (0x1U << GRF_SOC_UOC1_OTGPHY_TXRISETUNE_SHIFT)               /* 0x00004000 */
/* SOC_UOC2 */
#define GRF_SOC_UOC2_OTGPHY_VBUSVLDEXT_SHIFT               (0U)
#define GRF_SOC_UOC2_OTGPHY_VBUSVLDEXT_MASK                (0x1U << GRF_SOC_UOC2_OTGPHY_VBUSVLDEXT_SHIFT)               /* 0x00000001 */
#define GRF_SOC_UOC2_OTGPHY_VBUSVLDEXTSEL_SHIFT            (1U)
#define GRF_SOC_UOC2_OTGPHY_VBUSVLDEXTSEL_MASK             (0x1U << GRF_SOC_UOC2_OTGPHY_VBUSVLDEXTSEL_SHIFT)            /* 0x00000002 */
#define GRF_SOC_UOC2_OTGPHY_SOFT_CON_SEL_SHIFT             (2U)
#define GRF_SOC_UOC2_OTGPHY_SOFT_CON_SEL_MASK              (0x1U << GRF_SOC_UOC2_OTGPHY_SOFT_CON_SEL_SHIFT)             /* 0x00000004 */
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_SUSPEND_N_SHIFT      (3U)
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_SUSPEND_N_MASK       (0x1U << GRF_SOC_UOC2_GRF_CON_OTG_UTMI_SUSPEND_N_SHIFT)      /* 0x00000008 */
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_OPMODE_SHIFT         (4U)
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_OPMODE_MASK          (0x3U << GRF_SOC_UOC2_GRF_CON_OTG_UTMI_OPMODE_SHIFT)         /* 0x00000030 */
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_XCVRSELECT_SHIFT     (6U)
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_XCVRSELECT_MASK      (0x3U << GRF_SOC_UOC2_GRF_CON_OTG_UTMI_XCVRSELECT_SHIFT)     /* 0x000000C0 */
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_TERMSELECT_SHIFT     (8U)
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_TERMSELECT_MASK      (0x1U << GRF_SOC_UOC2_GRF_CON_OTG_UTMI_TERMSELECT_SHIFT)     /* 0x00000100 */
#define GRF_SOC_UOC2_OTGPHY_VREGTUNE_SHIFT                 (9U)
#define GRF_SOC_UOC2_OTGPHY_VREGTUNE_MASK                  (0x1U << GRF_SOC_UOC2_OTGPHY_VREGTUNE_SHIFT)                 /* 0x00000200 */
#define GRF_SOC_UOC2_OTGPHY_SLEEPM_SHIFT                   (10U)
#define GRF_SOC_UOC2_OTGPHY_SLEEPM_MASK                    (0x1U << GRF_SOC_UOC2_OTGPHY_SLEEPM_SHIFT)                   /* 0x00000400 */
#define GRF_SOC_UOC2_GRF_CON_OTG_SCALEDOWN_MODE_SHIFT      (11U)
#define GRF_SOC_UOC2_GRF_CON_OTG_SCALEDOWN_MODE_MASK       (0x3U << GRF_SOC_UOC2_GRF_CON_OTG_SCALEDOWN_MODE_SHIFT)      /* 0x00001800 */
#define GRF_SOC_UOC2_GRF_CON_OTG_DBNCE_FLTR_BYPASS_SHIFT   (13U)
#define GRF_SOC_UOC2_GRF_CON_OTG_DBNCE_FLTR_BYPASS_MASK    (0x1U << GRF_SOC_UOC2_GRF_CON_OTG_DBNCE_FLTR_BYPASS_SHIFT)   /* 0x00002000 */
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_IDDIG_PMU_SHIFT      (14U)
#define GRF_SOC_UOC2_GRF_CON_OTG_UTMI_IDDIG_PMU_MASK       (0x1U << GRF_SOC_UOC2_GRF_CON_OTG_UTMI_IDDIG_PMU_SHIFT)      /* 0x00004000 */
/* MCU0_STATUS */
#define GRF_MCU0_STATUS_GRF_ST_M4F_HALTED_SHIFT            (0U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_HALTED_MASK             (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_HALTED_SHIFT)            /* 0x00000001 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_LOCKUP_SHIFT            (1U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_LOCKUP_MASK             (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_LOCKUP_SHIFT)            /* 0x00000002 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPDEEP_SHIFT         (2U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPDEEP_MASK          (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPDEEP_SHIFT)         /* 0x00000004 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPING_SHIFT          (3U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPING_MASK           (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_SLEEPING_SHIFT)          /* 0x00000008 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_DEGRESTARTED_SHIFT      (4U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_DEGRESTARTED_MASK       (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_DEGRESTARTED_SHIFT)      /* 0x00000010 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_GATEHCLK_SHIFT          (5U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_GATEHCLK_MASK           (0x1U << GRF_MCU0_STATUS_GRF_ST_M4F_GATEHCLK_SHIFT)          /* 0x00000020 */
#define GRF_MCU0_STATUS_GRF_ST_M4F_CURRPRI_SHIFT           (8U)
#define GRF_MCU0_STATUS_GRF_ST_M4F_CURRPRI_MASK            (0xFFU << GRF_MCU0_STATUS_GRF_ST_M4F_CURRPRI_SHIFT)          /* 0x0000FF00 */
#define GRF_MCU0_STATUS_M4_FPIXC_SHIFT                     (16U)
#define GRF_MCU0_STATUS_M4_FPIXC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPIXC_SHIFT)                     /* 0x00010000 */
#define GRF_MCU0_STATUS_M4_FPOFC_SHIFT                     (17U)
#define GRF_MCU0_STATUS_M4_FPOFC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPOFC_SHIFT)                     /* 0x00020000 */
#define GRF_MCU0_STATUS_M4_FPUFC_SHIFT                     (18U)
#define GRF_MCU0_STATUS_M4_FPUFC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPUFC_SHIFT)                     /* 0x00040000 */
#define GRF_MCU0_STATUS_M4_FPIOC_SHIFT                     (19U)
#define GRF_MCU0_STATUS_M4_FPIOC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPIOC_SHIFT)                     /* 0x00080000 */
#define GRF_MCU0_STATUS_M4_FPDZC_SHIFT                     (20U)
#define GRF_MCU0_STATUS_M4_FPDZC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPDZC_SHIFT)                     /* 0x00100000 */
#define GRF_MCU0_STATUS_M4_FPIDC_SHIFT                     (21U)
#define GRF_MCU0_STATUS_M4_FPIDC_MASK                      (0x1U << GRF_MCU0_STATUS_M4_FPIDC_SHIFT)                     /* 0x00200000 */
/* MCU1_STATUS */
#define GRF_MCU1_STATUS_GRF_ST_M0_DBGRESTARTED_SHIFT       (0U)
#define GRF_MCU1_STATUS_GRF_ST_M0_DBGRESTARTED_MASK        (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_DBGRESTARTED_SHIFT)       /* 0x00000001 */
#define GRF_MCU1_STATUS_GRF_ST_M0_HALTED_SHIFT             (1U)
#define GRF_MCU1_STATUS_GRF_ST_M0_HALTED_MASK              (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_HALTED_SHIFT)             /* 0x00000002 */
#define GRF_MCU1_STATUS_GRF_ST_M0_TXEV_SHIFT               (2U)
#define GRF_MCU1_STATUS_GRF_ST_M0_TXEV_MASK                (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_TXEV_SHIFT)               /* 0x00000004 */
#define GRF_MCU1_STATUS_GRF_ST_M0_LOCKUP_SHIFT             (3U)
#define GRF_MCU1_STATUS_GRF_ST_M0_LOCKUP_MASK              (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_LOCKUP_SHIFT)             /* 0x00000008 */
#define GRF_MCU1_STATUS_GRF_ST_M0_HCLK_GATE_SHIFT          (4U)
#define GRF_MCU1_STATUS_GRF_ST_M0_HCLK_GATE_MASK           (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_HCLK_GATE_SHIFT)          /* 0x00000010 */
#define GRF_MCU1_STATUS_GRF_ST_M0_WAKEUP_SHIFT             (5U)
#define GRF_MCU1_STATUS_GRF_ST_M0_WAKEUP_MASK              (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_WAKEUP_SHIFT)             /* 0x00000020 */
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPDEEP_SHIFT          (6U)
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPDEEP_MASK           (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_SLEEPDEEP_SHIFT)          /* 0x00000040 */
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPING_SHIFT           (7U)
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPING_MASK            (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_SLEEPING_SHIFT)           /* 0x00000080 */
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPHOLDACKN_SHIFT      (8U)
#define GRF_MCU1_STATUS_GRF_ST_M0_SLEEPHOLDACKN_MASK       (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_SLEEPHOLDACKN_SHIFT)      /* 0x00000100 */
#define GRF_MCU1_STATUS_GRF_ST_M0_WICENACK_SHIFT           (9U)
#define GRF_MCU1_STATUS_GRF_ST_M0_WICENACK_MASK            (0x1U << GRF_MCU1_STATUS_GRF_ST_M0_WICENACK_SHIFT)           /* 0x00000200 */
/* DSP_STATUS0 */
#define GRF_DSP_STATUS0_XOCDMODE_SHIFT                     (0U)
#define GRF_DSP_STATUS0_XOCDMODE_MASK                      (0x1U << GRF_DSP_STATUS0_XOCDMODE_SHIFT)                     /* 0x00000001 */
#define GRF_DSP_STATUS0_DEBUGMODE_SHIFT                    (1U)
#define GRF_DSP_STATUS0_DEBUGMODE_MASK                     (0x1U << GRF_DSP_STATUS0_DEBUGMODE_SHIFT)                    /* 0x00000002 */
#define GRF_DSP_STATUS0_BREAKINACK_SHIFT                   (2U)
#define GRF_DSP_STATUS0_BREAKINACK_MASK                    (0x1U << GRF_DSP_STATUS0_BREAKINACK_SHIFT)                   /* 0x00000004 */
#define GRF_DSP_STATUS0_BREAKOUT_SHIFT                     (3U)
#define GRF_DSP_STATUS0_BREAKOUT_MASK                      (0x1U << GRF_DSP_STATUS0_BREAKOUT_SHIFT)                     /* 0x00000008 */
#define GRF_DSP_STATUS0_DOUBLEEXCEPTIONERROR_SHIFT         (4U)
#define GRF_DSP_STATUS0_DOUBLEEXCEPTIONERROR_MASK          (0x1U << GRF_DSP_STATUS0_DOUBLEEXCEPTIONERROR_SHIFT)         /* 0x00000010 */
#define GRF_DSP_STATUS0_PFATALERROR_SHIFT                  (5U)
#define GRF_DSP_STATUS0_PFATALERROR_MASK                   (0x1U << GRF_DSP_STATUS0_PFATALERROR_SHIFT)                  /* 0x00000020 */
#define GRF_DSP_STATUS0_PFAULTINFOVALID_SHIFT              (6U)
#define GRF_DSP_STATUS0_PFAULTINFOVALID_MASK               (0x1U << GRF_DSP_STATUS0_PFAULTINFOVALID_SHIFT)              /* 0x00000040 */
#define GRF_DSP_STATUS0_PWAITMODE_SHIFT                    (7U)
#define GRF_DSP_STATUS0_PWAITMODE_MASK                     (0x1U << GRF_DSP_STATUS0_PWAITMODE_SHIFT)                    /* 0x00000080 */
#define GRF_DSP_STATUS0_IRAM0LADSTORE_SHIFT                (8U)
#define GRF_DSP_STATUS0_IRAM0LADSTORE_MASK                 (0x1U << GRF_DSP_STATUS0_IRAM0LADSTORE_SHIFT)                /* 0x00000100 */
/* DSP_STATUS1 */
#define GRF_DSP_STATUS1_PFAULTINFO_SHIFT                   (0U)
#define GRF_DSP_STATUS1_PFAULTINFO_MASK                    (0xFFFFFFFFU << GRF_DSP_STATUS1_PFAULTINFO_SHIFT)            /* 0xFFFFFFFF */
/* LPW_CON */
#define GRF_LPW_CON_XTALMOD_0_SHIFT                        (0U)
#define GRF_LPW_CON_XTALMOD_0_MASK                         (0x1U << GRF_LPW_CON_XTALMOD_0_SHIFT)                        /* 0x00000001 */
#define GRF_LPW_CON_XTALMOD_1_SHIFT                        (1U)
#define GRF_LPW_CON_XTALMOD_1_MASK                         (0x1U << GRF_LPW_CON_XTALMOD_1_SHIFT)                        /* 0x00000002 */
#define GRF_LPW_CON_XTALMOD_2_SHIFT                        (2U)
#define GRF_LPW_CON_XTALMOD_2_MASK                         (0x1U << GRF_LPW_CON_XTALMOD_2_SHIFT)                        /* 0x00000004 */
#define GRF_LPW_CON_LPW_WRITE_INT_EN_SHIFT                 (3U)
#define GRF_LPW_CON_LPW_WRITE_INT_EN_MASK                  (0x1U << GRF_LPW_CON_LPW_WRITE_INT_EN_SHIFT)                 /* 0x00000008 */
#define GRF_LPW_CON_RPU_SLEEP_IRQ_EN_SHIFT                 (4U)
#define GRF_LPW_CON_RPU_SLEEP_IRQ_EN_MASK                  (0x1U << GRF_LPW_CON_RPU_SLEEP_IRQ_EN_SHIFT)                 /* 0x00000010 */
#define GRF_LPW_CON_RPU_WAKEUP_IRQ_EN_SHIFT                (5U)
#define GRF_LPW_CON_RPU_WAKEUP_IRQ_EN_MASK                 (0x1U << GRF_LPW_CON_RPU_WAKEUP_IRQ_EN_SHIFT)                /* 0x00000020 */
#define GRF_LPW_CON_RPU_READY_IRQ_EN_SHIFT                 (6U)
#define GRF_LPW_CON_RPU_READY_IRQ_EN_MASK                  (0x1U << GRF_LPW_CON_RPU_READY_IRQ_EN_SHIFT)                 /* 0x00000040 */
#define GRF_LPW_CON_LPW_REV_SHIFT                          (8U)
#define GRF_LPW_CON_LPW_REV_MASK                           (0xFFU << GRF_LPW_CON_LPW_REV_SHIFT)                         /* 0x0000FF00 */
/* LPWCLK_CON */
#define GRF_LPWCLK_CON_LPW_SYS_CLK_GATE_SHIFT              (0U)
#define GRF_LPWCLK_CON_LPW_SYS_CLK_GATE_MASK               (0x1U << GRF_LPWCLK_CON_LPW_SYS_CLK_GATE_SHIFT)              /* 0x00000001 */
#define GRF_LPWCLK_CON_RPU_CLK_FLEVEL_SHIFT                (1U)
#define GRF_LPWCLK_CON_RPU_CLK_FLEVEL_MASK                 (0x1U << GRF_LPWCLK_CON_RPU_CLK_FLEVEL_SHIFT)                /* 0x00000002 */
#define GRF_LPWCLK_CON_RPU_CLK_FORCE_SHIFT                 (2U)
#define GRF_LPWCLK_CON_RPU_CLK_FORCE_MASK                  (0x1U << GRF_LPWCLK_CON_RPU_CLK_FORCE_SHIFT)                 /* 0x00000004 */
#define GRF_LPWCLK_CON_MCU_CLK_FLEVEL_SHIFT                (3U)
#define GRF_LPWCLK_CON_MCU_CLK_FLEVEL_MASK                 (0x1U << GRF_LPWCLK_CON_MCU_CLK_FLEVEL_SHIFT)                /* 0x00000008 */
#define GRF_LPWCLK_CON_MCU_CLK_FORCE_SHIFT                 (4U)
#define GRF_LPWCLK_CON_MCU_CLK_FORCE_MASK                  (0x1U << GRF_LPWCLK_CON_MCU_CLK_FORCE_SHIFT)                 /* 0x00000010 */
#define GRF_LPWCLK_CON_LPW_AON_WAKEUP_SHIFT                (5U)
#define GRF_LPWCLK_CON_LPW_AON_WAKEUP_MASK                 (0x1U << GRF_LPWCLK_CON_LPW_AON_WAKEUP_SHIFT)                /* 0x00000020 */
/* LPW_GPIO_IN */
#define GRF_LPW_GPIO_IN_LPW_GPIO_IN_SHIFT                  (0U)
#define GRF_LPW_GPIO_IN_LPW_GPIO_IN_MASK                   (0xFFFFFFFFU << GRF_LPW_GPIO_IN_LPW_GPIO_IN_SHIFT)           /* 0xFFFFFFFF */
/* LPW_GPIO_OUT */
#define GRF_LPW_GPIO_OUT_LPW_GPIO_OUT_SHIFT                (0U)
#define GRF_LPW_GPIO_OUT_LPW_GPIO_OUT_MASK                 (0xFFFFFFFFU << GRF_LPW_GPIO_OUT_LPW_GPIO_OUT_SHIFT)         /* 0xFFFFFFFF */
/* LPW_STATUS */
#define GRF_LPW_STATUS_RPU_SLEEP_SHIFT                     (0U)
#define GRF_LPW_STATUS_RPU_SLEEP_MASK                      (0x1U << GRF_LPW_STATUS_RPU_SLEEP_SHIFT)                     /* 0x00000001 */
#define GRF_LPW_STATUS_RPU_WAKEUP_SHIFT                    (1U)
#define GRF_LPW_STATUS_RPU_WAKEUP_MASK                     (0x1U << GRF_LPW_STATUS_RPU_WAKEUP_SHIFT)                    /* 0x00000002 */
#define GRF_LPW_STATUS_RPU_READY_STATUS_SHIFT              (2U)
#define GRF_LPW_STATUS_RPU_READY_STATUS_MASK               (0x1U << GRF_LPW_STATUS_RPU_READY_STATUS_SHIFT)              /* 0x00000004 */
#define GRF_LPW_STATUS_LPW_MAC_PHY_DEBUG_BUS_SHIFT         (4U)
#define GRF_LPW_STATUS_LPW_MAC_PHY_DEBUG_BUS_MASK          (0xFFFU << GRF_LPW_STATUS_LPW_MAC_PHY_DEBUG_BUS_SHIFT)       /* 0x0000FFF0 */
/* USB2_DISCONNECT_CON */
#define GRF_USB2_DISCONNECT_CON_DISCONNECT_FILTER_CON_SHIFT (0U)
#define GRF_USB2_DISCONNECT_CON_DISCONNECT_FILTER_CON_MASK (0xFFFFFFFFU << GRF_USB2_DISCONNECT_CON_DISCONNECT_FILTER_CON_SHIFT) /* 0xFFFFFFFF */
/* USB2_LINESTATE_CON */
#define GRF_USB2_LINESTATE_CON_LINESTATE_FILTER_CON_SHIFT  (0U)
#define GRF_USB2_LINESTATE_CON_LINESTATE_FILTER_CON_MASK   (0xFFFFFFFFU << GRF_USB2_LINESTATE_CON_LINESTATE_FILTER_CON_SHIFT) /* 0xFFFFFFFF */
/* USB2_BVALID_CON */
#define GRF_USB2_BVALID_CON_BVALID_FILTER_CON_SHIFT        (0U)
#define GRF_USB2_BVALID_CON_BVALID_FILTER_CON_MASK         (0xFFFFFFFFU << GRF_USB2_BVALID_CON_BVALID_FILTER_CON_SHIFT) /* 0xFFFFFFFF */
/* USB2_ID_CON */
#define GRF_USB2_ID_CON_ID_FILTER_CON_SHIFT                (0U)
#define GRF_USB2_ID_CON_ID_FILTER_CON_MASK                 (0xFFFFFFFFU << GRF_USB2_ID_CON_ID_FILTER_CON_SHIFT)         /* 0xFFFFFFFF */
/* USB2_DETECT_IRQ_ENABLE */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_LINESTATE_IRQ_EN_SHIFT (0U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_LINESTATE_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_LINESTATE_IRQ_EN_SHIFT) /* 0x00000001 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_POS_IRQ_EN_SHIFT (1U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_POS_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_POS_IRQ_EN_SHIFT) /* 0x00000002 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_NEG_IRQ_EN_SHIFT (2U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_NEG_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_BVALID_NEG_IRQ_EN_SHIFT) /* 0x00000004 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_POS_IRQ_EN_SHIFT (3U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_POS_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_POS_IRQ_EN_SHIFT) /* 0x00000008 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_NEG_IRQ_EN_SHIFT (4U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_NEG_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_ID_NEG_IRQ_EN_SHIFT) /* 0x00000010 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_POS_IRQ_EN_SHIFT (5U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_POS_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_POS_IRQ_EN_SHIFT) /* 0x00000020 */
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_NEG_IRQ_EN_SHIFT (6U)
#define GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_NEG_IRQ_EN_MASK (0x1U << GRF_USB2_DETECT_IRQ_ENABLE_OTG0_DISCONNECT_NEG_IRQ_EN_SHIFT) /* 0x00000040 */
/* USB2_DETECT_IRQ_STATUS */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_LINESTATE_IRQ_SHIFT (0U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_LINESTATE_IRQ_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_LINESTATE_IRQ_SHIFT) /* 0x00000001 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_POS_IRQ_SHIFT (1U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_POS_IRQ_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_POS_IRQ_SHIFT) /* 0x00000002 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_NEG_IRQ_SHIFT (2U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_NEG_IRQ_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_BVALID_NEG_IRQ_SHIFT) /* 0x00000004 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_POS_IRQ_SHIFT   (3U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_POS_IRQ_MASK    (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_POS_IRQ_SHIFT)   /* 0x00000008 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_NEG_IRQ_SHIFT   (4U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_NEG_IRQ_MASK    (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_ID_NEG_IRQ_SHIFT)   /* 0x00000010 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_POS_IRQ_SHIFT (5U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_POS_IRQ_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_POS_IRQ_SHIFT) /* 0x00000020 */
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_NEG_IRQ_SHIFT (6U)
#define GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_NEG_IRQ_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_OTG0_DISCONNECT_NEG_IRQ_SHIFT) /* 0x00000040 */
/* USB2_DETECT_IRQ_STATUS_CLR */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_SHIFT (0U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_SHIFT) /* 0x00000001 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_POS_IRQ_CLR_SHIFT (1U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_POS_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_POS_IRQ_CLR_SHIFT) /* 0x00000002 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_NEG_IRQ_CLR_SHIFT (2U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_NEG_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_BVALID_NEG_IRQ_CLR_SHIFT) /* 0x00000004 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_POS_IRQ_CLR_SHIFT (3U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_POS_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_POS_IRQ_CLR_SHIFT) /* 0x00000008 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_NEG_IRQ_CLR_SHIFT (4U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_NEG_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_ID_NEG_IRQ_CLR_SHIFT) /* 0x00000010 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_POS_IRQ_CLR_SHIFT (5U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_POS_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_POS_IRQ_CLR_SHIFT) /* 0x00000020 */
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_NEG_IRQ_CLR_SHIFT (6U)
#define GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_NEG_IRQ_CLR_MASK (0x1U << GRF_USB2_DETECT_IRQ_STATUS_CLR_OTG0_DISCONNECT_NEG_IRQ_CLR_SHIFT) /* 0x00000040 */
/* OS_REG0 */
#define GRF_OS_REG0_OS_REGISTER0_SHIFT                     (0U)
#define GRF_OS_REG0_OS_REGISTER0_MASK                      (0xFFFFFFFFU << GRF_OS_REG0_OS_REGISTER0_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG1 */
#define GRF_OS_REG1_OS_REGISTER1_SHIFT                     (0U)
#define GRF_OS_REG1_OS_REGISTER1_MASK                      (0xFFFFFFFFU << GRF_OS_REG1_OS_REGISTER1_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG2 */
#define GRF_OS_REG2_OS_REGISTER2_SHIFT                     (0U)
#define GRF_OS_REG2_OS_REGISTER2_MASK                      (0xFFFFFFFFU << GRF_OS_REG2_OS_REGISTER2_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG3 */
#define GRF_OS_REG3_OS_REGISTER3_SHIFT                     (0U)
#define GRF_OS_REG3_OS_REGISTER3_MASK                      (0xFFFFFFFFU << GRF_OS_REG3_OS_REGISTER3_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG4 */
#define GRF_OS_REG4_OS_REGISTER4_SHIFT                     (0U)
#define GRF_OS_REG4_OS_REGISTER4_MASK                      (0xFFFFFFFFU << GRF_OS_REG4_OS_REGISTER4_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG5 */
#define GRF_OS_REG5_OS_REGISTER5_SHIFT                     (0U)
#define GRF_OS_REG5_OS_REGISTER5_MASK                      (0xFFFFFFFFU << GRF_OS_REG5_OS_REGISTER5_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG6 */
#define GRF_OS_REG6_OS_REGISTER6_SHIFT                     (0U)
#define GRF_OS_REG6_OS_REGISTER6_MASK                      (0xFFFFFFFFU << GRF_OS_REG6_OS_REGISTER6_SHIFT)              /* 0xFFFFFFFF */
/* OS_REG7 */
#define GRF_OS_REG7_OS_REGISTER7_SHIFT                     (0U)
#define GRF_OS_REG7_OS_REGISTER7_MASK                      (0xFFFFFFFFU << GRF_OS_REG7_OS_REGISTER7_SHIFT)              /* 0xFFFFFFFF */
/******************************************CRU*******************************************/
/* GPLL_CON0 */
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_GPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_GPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_GPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_GPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_GPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_GPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_GPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_GPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_GPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_GPLL_CON1_DSMPD_MASK                           (0x1U << CRU_GPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_GPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_GPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_GPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_GPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_GPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_GPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_GPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* GPLL_CON2 */
#define CRU_GPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_GPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_GPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_GPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_GPLL_CON2_DACPD_MASK                           (0x1U << CRU_GPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_GPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_GPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_GPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_GPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* GPLL_CON3 */
#define CRU_GPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_GPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_GPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_GPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_GPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_GPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_GPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_GPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* GPLL_CON4 */
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* VPLL_CON0 */
#define CRU_VPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_VPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_VPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_VPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_VPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_VPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_VPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_VPLL_CON0_BYPASS_MASK                          (0x1U << CRU_VPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* VPLL_CON1 */
#define CRU_VPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_VPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_VPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_VPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_VPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_VPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_VPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_VPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_VPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_VPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_VPLL_CON1_DSMPD_MASK                           (0x1U << CRU_VPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_VPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_VPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_VPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_VPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_VPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_VPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_VPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_VPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_VPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* VPLL_CON2 */
#define CRU_VPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_VPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_VPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_VPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_VPLL_CON2_DACPD_MASK                           (0x1U << CRU_VPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_VPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_VPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_VPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_VPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_VPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_VPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_VPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_VPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_VPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* VPLL_CON3 */
#define CRU_VPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_VPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_VPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_VPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_VPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_VPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_VPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_VPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_VPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_VPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_VPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_VPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_VPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_VPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_VPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_VPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_VPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_VPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* VPLL_CON4 */
#define CRU_VPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_VPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_VPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_VPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_VPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_VPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* MODE_CON00 */
#define CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON00_CLK_GPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON00_CLK_USBPLL_MODE_SHIFT               (2U)
#define CRU_MODE_CON00_CLK_USBPLL_MODE_MASK                (0x3U << CRU_MODE_CON00_CLK_USBPLL_MODE_SHIFT)               /* 0x0000000C */
#define CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON00_CLK_VPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT)                 /* 0x00000030 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0xFFFFFFFF */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT                (0U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT)                /* 0x00000001 */
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT                (1U)
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT)                /* 0x00000002 */
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT            (4U)
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT)            /* 0x00000010 */
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT            (5U)
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT)            /* 0x00000020 */
#define CRU_GLB_RST_ST_GLB_WDT0_RST_ST_SHIFT               (6U)
#define CRU_GLB_RST_ST_GLB_WDT0_RST_ST_MASK                (0x1U << CRU_GLB_RST_ST_GLB_WDT0_RST_ST_SHIFT)               /* 0x00000040 */
#define CRU_GLB_RST_ST_GLB_WDT1_RST_ST_SHIFT               (7U)
#define CRU_GLB_RST_ST_GLB_WDT1_RST_ST_MASK                (0x1U << CRU_GLB_RST_ST_GLB_WDT1_RST_ST_SHIFT)               /* 0x00000080 */
#define CRU_GLB_RST_ST_GLB_WDT2_RST_ST_SHIFT               (8U)
#define CRU_GLB_RST_ST_GLB_WDT2_RST_ST_MASK                (0x1U << CRU_GLB_RST_ST_GLB_WDT2_RST_ST_SHIFT)               /* 0x00000100 */
/* GLB_SRST_FST */
#define CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT                (0U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_MASK                 (0xFFFFU << CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT)             /* 0x0000FFFF */
/* GLB_SRST_SND */
#define CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT                (0U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_MASK                 (0xFFFFU << CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT)             /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_PMU_SRST_CTRL_SHIFT                (2U)
#define CRU_GLB_RST_CON_PMU_SRST_CTRL_MASK                 (0x1U << CRU_GLB_RST_CON_PMU_SRST_CTRL_SHIFT)                /* 0x00000004 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_RST_EN_SHIFT          (3U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_RST_EN_MASK           (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_RST_EN_SHIFT)          /* 0x00000008 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT             (7U)
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT)             /* 0x00000080 */
#define CRU_GLB_RST_CON_WDT0_GLB_SRST_EN_SHIFT             (8U)
#define CRU_GLB_RST_CON_WDT0_GLB_SRST_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT0_GLB_SRST_EN_SHIFT)             /* 0x00000100 */
#define CRU_GLB_RST_CON_WDT1_GLB_SRST_EN_SHIFT             (9U)
#define CRU_GLB_RST_CON_WDT1_GLB_SRST_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT1_GLB_SRST_EN_SHIFT)             /* 0x00000200 */
#define CRU_GLB_RST_CON_WDT2_GLB_SRST_EN_SHIFT             (10U)
#define CRU_GLB_RST_CON_WDT2_GLB_SRST_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT2_GLB_SRST_EN_SHIFT)             /* 0x00000400 */
#define CRU_GLB_RST_CON_WDT0_GLB_SRST_CTRL_SHIFT           (12U)
#define CRU_GLB_RST_CON_WDT0_GLB_SRST_CTRL_MASK            (0x1U << CRU_GLB_RST_CON_WDT0_GLB_SRST_CTRL_SHIFT)           /* 0x00001000 */
#define CRU_GLB_RST_CON_WDT1_GLB_SRST_CTRL_SHIFT           (13U)
#define CRU_GLB_RST_CON_WDT1_GLB_SRST_CTRL_MASK            (0x1U << CRU_GLB_RST_CON_WDT1_GLB_SRST_CTRL_SHIFT)           /* 0x00002000 */
#define CRU_GLB_RST_CON_WDT2_GLB_SRST_CTRL_SHIFT           (14U)
#define CRU_GLB_RST_CON_WDT2_GLB_SRST_CTRL_MASK            (0x1U << CRU_GLB_RST_CON_WDT2_GLB_SRST_CTRL_SHIFT)           /* 0x00004000 */
/* CLKSEL_CON00 */
#define CRU_CLKSEL_CON00_CLK_32K_SEL_SHIFT                 (5U)
#define CRU_CLKSEL_CON00_CLK_32K_SEL_MASK                  (0x3U << CRU_CLKSEL_CON00_CLK_32K_SEL_SHIFT)                 /* 0x00000060 */
#define CRU_CLKSEL_CON00_CLK_32K_FRAC_DIV_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON00_CLK_32K_FRAC_DIV_SEL_MASK         (0x1U << CRU_CLKSEL_CON00_CLK_32K_FRAC_DIV_SEL_SHIFT)        /* 0x00000080 */
#define CRU_CLKSEL_CON00_CLK_GPLL_MUX_NP5_DIV_SHIFT        (8U)
#define CRU_CLKSEL_CON00_CLK_GPLL_MUX_NP5_DIV_MASK         (0xFU << CRU_CLKSEL_CON00_CLK_GPLL_MUX_NP5_DIV_SHIFT)        /* 0x00000F00 */
/* CLKSEL_CON01 */
#define CRU_CLKSEL_CON01_CLK_32K_FRAC_DIV_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON01_CLK_32K_FRAC_DIV_DIV_MASK         (0xFFFFFFFFU << CRU_CLKSEL_CON01_CLK_32K_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON02 */
#define CRU_CLKSEL_CON02_HCLK_MCU_BUS_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON02_HCLK_MCU_BUS_DIV_MASK             (0x1FU << CRU_CLKSEL_CON02_HCLK_MCU_BUS_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON02_HCLK_MCU_BUS_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON02_HCLK_MCU_BUS_SEL_MASK             (0x1U << CRU_CLKSEL_CON02_HCLK_MCU_BUS_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON02_PCLK_MCU_BUS_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON02_PCLK_MCU_BUS_DIV_MASK             (0x1FU << CRU_CLKSEL_CON02_PCLK_MCU_BUS_DIV_SHIFT)           /* 0x00001F00 */
/* CLKSEL_CON03 */
#define CRU_CLKSEL_CON03_CLK_HIFI3_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON03_CLK_HIFI3_DIV_DIV_MASK            (0x1FU << CRU_CLKSEL_CON03_CLK_HIFI3_DIV_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON03_CLK_HIFI3_SRC_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON03_CLK_HIFI3_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON03_CLK_HIFI3_SRC_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON03_CLK_HIFI3_NP5_DIV_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON03_CLK_HIFI3_NP5_DIV_DIV_MASK        (0x1FU << CRU_CLKSEL_CON03_CLK_HIFI3_NP5_DIV_DIV_SHIFT)      /* 0x00001F00 */
#define CRU_CLKSEL_CON03_CLK_HIFI3_SEL_SHIFT               (15U)
#define CRU_CLKSEL_CON03_CLK_HIFI3_SEL_MASK                (0x1U << CRU_CLKSEL_CON03_CLK_HIFI3_SEL_SHIFT)               /* 0x00008000 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_CLK_UART0_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON04_CLK_UART0_DIV_DIV_MASK            (0x1FU << CRU_CLKSEL_CON04_CLK_UART0_DIV_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON04_CLK_UART0_DIV_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON04_CLK_UART0_DIV_SEL_MASK            (0x3U << CRU_CLKSEL_CON04_CLK_UART0_DIV_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON04_SCLK_UART0_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON04_SCLK_UART0_SEL_MASK               (0x1U << CRU_CLKSEL_CON04_SCLK_UART0_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_CLK_UART0_FRAC_DIV_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON05_CLK_UART0_FRAC_DIV_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON05_CLK_UART0_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_CLK_UART1_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON06_CLK_UART1_DIV_DIV_MASK            (0x1FU << CRU_CLKSEL_CON06_CLK_UART1_DIV_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON06_CLK_UART1_DIV_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON06_CLK_UART1_DIV_SEL_MASK            (0x3U << CRU_CLKSEL_CON06_CLK_UART1_DIV_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON06_SCLK_UART1_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON06_SCLK_UART1_SEL_MASK               (0x1U << CRU_CLKSEL_CON06_SCLK_UART1_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON07 */
#define CRU_CLKSEL_CON07_CLK_UART1_FRAC_DIV_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON07_CLK_UART1_FRAC_DIV_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON07_CLK_UART1_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_CLK_UART2_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON08_CLK_UART2_DIV_DIV_MASK            (0x1FU << CRU_CLKSEL_CON08_CLK_UART2_DIV_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON08_CLK_UART2_DIV_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON08_CLK_UART2_DIV_SEL_MASK            (0x3U << CRU_CLKSEL_CON08_CLK_UART2_DIV_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON08_SCLK_UART2_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON08_SCLK_UART2_SEL_MASK               (0x1U << CRU_CLKSEL_CON08_SCLK_UART2_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_CLK_UART2_FRAC_DIV_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON09_CLK_UART2_FRAC_DIV_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON09_CLK_UART2_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_CLK_I2C0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON10_CLK_I2C0_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON10_CLK_I2C0_DIV_SHIFT)               /* 0x0000003F */
#define CRU_CLKSEL_CON10_CLK_I2C0_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON10_CLK_I2C0_SEL_MASK                 (0x3U << CRU_CLKSEL_CON10_CLK_I2C0_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON10_CLK_I2C1_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON10_CLK_I2C1_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON10_CLK_I2C1_DIV_SHIFT)               /* 0x00003F00 */
#define CRU_CLKSEL_CON10_CLK_I2C1_SEL_SHIFT                (14U)
#define CRU_CLKSEL_CON10_CLK_I2C1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON10_CLK_I2C1_SEL_SHIFT)                /* 0x0000C000 */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_CLK_I2C2_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON11_CLK_I2C2_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON11_CLK_I2C2_DIV_SHIFT)               /* 0x0000003F */
#define CRU_CLKSEL_CON11_CLK_I2C2_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON11_CLK_I2C2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON11_CLK_I2C2_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON11_CLK_I2C_CODEC_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON11_CLK_I2C_CODEC_DIV_MASK            (0x3FU << CRU_CLKSEL_CON11_CLK_I2C_CODEC_DIV_SHIFT)          /* 0x00003F00 */
#define CRU_CLKSEL_CON11_CLK_I2C_CODEC_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON11_CLK_I2C_CODEC_SEL_MASK            (0x3U << CRU_CLKSEL_CON11_CLK_I2C_CODEC_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_CLK_PWM0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON12_CLK_PWM0_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON12_CLK_PWM0_DIV_SHIFT)               /* 0x0000003F */
#define CRU_CLKSEL_CON12_CLK_PWM0_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON12_CLK_PWM0_SEL_MASK                 (0x1U << CRU_CLKSEL_CON12_CLK_PWM0_SEL_SHIFT)                /* 0x00000080 */
#define CRU_CLKSEL_CON12_CLK_PWM1_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON12_CLK_PWM1_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON12_CLK_PWM1_DIV_SHIFT)               /* 0x00003F00 */
#define CRU_CLKSEL_CON12_CLK_PWM1_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON12_CLK_PWM1_SEL_MASK                 (0x1U << CRU_CLKSEL_CON12_CLK_PWM1_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_CLK_PWM2_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON13_CLK_PWM2_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON13_CLK_PWM2_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON13_CLK_PWM2_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON13_CLK_PWM2_SEL_MASK                 (0x1U << CRU_CLKSEL_CON13_CLK_PWM2_SEL_SHIFT)                /* 0x00000080 */
#define CRU_CLKSEL_CON13_CLK_EFUSE_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON13_CLK_EFUSE_DIV_MASK                (0x3FU << CRU_CLKSEL_CON13_CLK_EFUSE_DIV_SHIFT)              /* 0x00003F00 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_CLK_SPI0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON14_CLK_SPI0_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON14_CLK_SPI0_DIV_SHIFT)               /* 0x0000003F */
#define CRU_CLKSEL_CON14_CLK_SPI0_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON14_CLK_SPI0_SEL_MASK                 (0x1U << CRU_CLKSEL_CON14_CLK_SPI0_SEL_SHIFT)                /* 0x00000080 */
#define CRU_CLKSEL_CON14_CLK_SPI1_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON14_CLK_SPI1_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON14_CLK_SPI1_DIV_SHIFT)               /* 0x00003F00 */
#define CRU_CLKSEL_CON14_CLK_SPI1_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON14_CLK_SPI1_SEL_MASK                 (0x1U << CRU_CLKSEL_CON14_CLK_SPI1_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_CLK_TIMER_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON15_CLK_TIMER_DIV_MASK                (0x3FU << CRU_CLKSEL_CON15_CLK_TIMER_DIV_SHIFT)              /* 0x0000003F */
#define CRU_CLKSEL_CON15_CLK_TIMER_SEL_SHIFT               (7U)
#define CRU_CLKSEL_CON15_CLK_TIMER_SEL_MASK                (0x1U << CRU_CLKSEL_CON15_CLK_TIMER_SEL_SHIFT)               /* 0x00000080 */
#define CRU_CLKSEL_CON15_CLK_TOP_TIMER_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON15_CLK_TOP_TIMER_DIV_MASK            (0x3FU << CRU_CLKSEL_CON15_CLK_TOP_TIMER_DIV_SHIFT)          /* 0x00003F00 */
#define CRU_CLKSEL_CON15_CLK_TOP_TIMER_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON15_CLK_TOP_TIMER_SEL_MASK            (0x3U << CRU_CLKSEL_CON15_CLK_TOP_TIMER_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_CLK_XIP_SFC0_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON16_CLK_XIP_SFC0_DIV_MASK             (0x3FU << CRU_CLKSEL_CON16_CLK_XIP_SFC0_DIV_SHIFT)           /* 0x0000003F */
#define CRU_CLKSEL_CON16_CLK_XIP_SFC0_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON16_CLK_XIP_SFC0_SEL_MASK             (0x3U << CRU_CLKSEL_CON16_CLK_XIP_SFC0_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON16_CLK_XIP_SFC1_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON16_CLK_XIP_SFC1_DIV_MASK             (0x3FU << CRU_CLKSEL_CON16_CLK_XIP_SFC1_DIV_SHIFT)           /* 0x00003F00 */
#define CRU_CLKSEL_CON16_CLK_XIP_SFC1_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON16_CLK_XIP_SFC1_SEL_MASK             (0x3U << CRU_CLKSEL_CON16_CLK_XIP_SFC1_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_DIV_MASK          (0x3FU << CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_DIV_SHIFT)        /* 0x0000003F */
#define CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_SEL_SHIFT         (6U)
#define CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_SEL_MASK          (0x3U << CRU_CLKSEL_CON17_CLK_XIP_HYPERX8_SEL_SHIFT)         /* 0x000000C0 */
#define CRU_CLKSEL_CON17_SCLK_M4F0_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON17_SCLK_M4F0_DIV_MASK                (0x3FU << CRU_CLKSEL_CON17_SCLK_M4F0_DIV_SHIFT)              /* 0x00003F00 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_DIV_MASK           (0x1FU << CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_SEL_SHIFT          (6U)
#define CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON18_CLK_AUDPWM_DIV_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CLKSEL_CON18_SCLK_AUDPWM_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON18_SCLK_AUDPWM_SEL_MASK              (0x1U << CRU_CLKSEL_CON18_SCLK_AUDPWM_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_CLK_AUDPWM_FRAC_DIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON19_CLK_AUDPWM_FRAC_DIV_DIV_MASK      (0xFFFFFFFFU << CRU_CLKSEL_CON19_CLK_AUDPWM_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_ACLK_PERI_BUS_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON20_ACLK_PERI_BUS_DIV_MASK            (0x1FU << CRU_CLKSEL_CON20_ACLK_PERI_BUS_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON20_ACLK_PERI_BUS_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON20_ACLK_PERI_BUS_SEL_MASK            (0x1U << CRU_CLKSEL_CON20_ACLK_PERI_BUS_SEL_SHIFT)           /* 0x00000080 */
#define CRU_CLKSEL_CON20_HCLK_PERI_BUS_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON20_HCLK_PERI_BUS_DIV_MASK            (0x1FU << CRU_CLKSEL_CON20_HCLK_PERI_BUS_DIV_SHIFT)          /* 0x00001F00 */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_CLK_VIP_OUT_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON21_CLK_VIP_OUT_DIV_MASK              (0x3FU << CRU_CLKSEL_CON21_CLK_VIP_OUT_DIV_SHIFT)            /* 0x0000003F */
#define CRU_CLKSEL_CON21_CLK_VIP_OUT_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON21_CLK_VIP_OUT_SEL_MASK              (0x3U << CRU_CLKSEL_CON21_CLK_VIP_OUT_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON21_CLK_SDMMC_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON21_CLK_SDMMC_DIV_MASK                (0x3FU << CRU_CLKSEL_CON21_CLK_SDMMC_DIV_SHIFT)              /* 0x00003F00 */
#define CRU_CLKSEL_CON21_CLK_SDMMC_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON21_CLK_SDMMC_SEL_MASK                (0x3U << CRU_CLKSEL_CON21_CLK_SDMMC_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON22 */
#define CRU_CLKSEL_CON22_CLK_CRYPTO_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON22_CLK_CRYPTO_DIV_DIV_MASK           (0x1FU << CRU_CLKSEL_CON22_CLK_CRYPTO_DIV_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON22_CLK_CRYPTO_SRC_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON22_CLK_CRYPTO_SRC_SEL_MASK           (0x1U << CRU_CLKSEL_CON22_CLK_CRYPTO_SRC_SEL_SHIFT)          /* 0x00000080 */
#define CRU_CLKSEL_CON22_CLK_CRYPTO_NP5_DIV_DIV_SHIFT      (8U)
#define CRU_CLKSEL_CON22_CLK_CRYPTO_NP5_DIV_DIV_MASK       (0x1FU << CRU_CLKSEL_CON22_CLK_CRYPTO_NP5_DIV_DIV_SHIFT)     /* 0x00001F00 */
#define CRU_CLKSEL_CON22_CLK_CRYPTO_PKA_SEL_SHIFT          (14U)
#define CRU_CLKSEL_CON22_CLK_CRYPTO_PKA_SEL_MASK           (0x1U << CRU_CLKSEL_CON22_CLK_CRYPTO_PKA_SEL_SHIFT)          /* 0x00004000 */
#define CRU_CLKSEL_CON22_CLK_CRYPTO_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON22_CLK_CRYPTO_SEL_MASK               (0x1U << CRU_CLKSEL_CON22_CLK_CRYPTO_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_ACLK_WIFI_BUS_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON23_ACLK_WIFI_BUS_DIV_MASK            (0xFU << CRU_CLKSEL_CON23_ACLK_WIFI_BUS_DIV_SHIFT)           /* 0x0000000F */
#define CRU_CLKSEL_CON23_ACLK_WIFI_BUS_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON23_ACLK_WIFI_BUS_SEL_MASK            (0x1U << CRU_CLKSEL_CON23_ACLK_WIFI_BUS_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_HCLK_TOP_BUS_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON24_HCLK_TOP_BUS_DIV_MASK             (0x3FU << CRU_CLKSEL_CON24_HCLK_TOP_BUS_DIV_SHIFT)           /* 0x0000003F */
#define CRU_CLKSEL_CON24_HCLK_TOP_BUS_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON24_HCLK_TOP_BUS_SEL_MASK             (0x3U << CRU_CLKSEL_CON24_HCLK_TOP_BUS_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON24_PCLK_TOP_BUS_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON24_PCLK_TOP_BUS_DIV_MASK             (0x3FU << CRU_CLKSEL_CON24_PCLK_TOP_BUS_DIV_SHIFT)           /* 0x00003F00 */
#define CRU_CLKSEL_CON24_PCLK_TOP_BUS_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON24_PCLK_TOP_BUS_SEL_MASK             (0x3U << CRU_CLKSEL_CON24_PCLK_TOP_BUS_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_MCLK_PDM_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON25_MCLK_PDM_DIV_MASK                 (0x3FU << CRU_CLKSEL_CON25_MCLK_PDM_DIV_SHIFT)               /* 0x0000003F */
#define CRU_CLKSEL_CON25_MCLK_PDM_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON25_MCLK_PDM_SEL_MASK                 (0x3U << CRU_CLKSEL_CON25_MCLK_PDM_SEL_SHIFT)                /* 0x000000C0 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_DIV_MASK      (0x7FU << CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_SEL_MASK      (0x3U << CRU_CLKSEL_CON26_CLK_I2S8CH_0_TX_DIV_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON26_MCLK_I2S8CH_0_TX_MUX_SEL_SHIFT    (10U)
#define CRU_CLKSEL_CON26_MCLK_I2S8CH_0_TX_MUX_SEL_MASK     (0x3U << CRU_CLKSEL_CON26_MCLK_I2S8CH_0_TX_MUX_SEL_SHIFT)    /* 0x00000C00 */
#define CRU_CLKSEL_CON26_MCLKOUT_I2S8CH_0_SEL_SHIFT        (14U)
#define CRU_CLKSEL_CON26_MCLKOUT_I2S8CH_0_SEL_MASK         (0x3U << CRU_CLKSEL_CON26_MCLKOUT_I2S8CH_0_SEL_SHIFT)        /* 0x0000C000 */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_CLK_I2S8CH_0_TX_FRAC_DIV_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON27_CLK_I2S8CH_0_TX_FRAC_DIV_DIV_MASK (0xFFFFFFFFU << CRU_CLKSEL_CON27_CLK_I2S8CH_0_TX_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_DIV_MASK      (0x7FU << CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_SEL_MASK      (0x3U << CRU_CLKSEL_CON28_CLK_I2S8CH_0_RX_DIV_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON28_MCLK_I2S8CH_0_RX_MUX_SEL_SHIFT    (10U)
#define CRU_CLKSEL_CON28_MCLK_I2S8CH_0_RX_MUX_SEL_MASK     (0x3U << CRU_CLKSEL_CON28_MCLK_I2S8CH_0_RX_MUX_SEL_SHIFT)    /* 0x00000C00 */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_CLK_I2S8CH_0_RX_FRAC_DIV_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON29_CLK_I2S8CH_0_RX_FRAC_DIV_DIV_MASK (0xFFFFFFFFU << CRU_CLKSEL_CON29_CLK_I2S8CH_0_RX_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_DIV_MASK      (0x7FU << CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_SEL_MASK      (0x3U << CRU_CLKSEL_CON30_CLK_I2S8CH_1_TX_DIV_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON30_MCLK_I2S8CH_1_TX_MUX_SEL_SHIFT    (10U)
#define CRU_CLKSEL_CON30_MCLK_I2S8CH_1_TX_MUX_SEL_MASK     (0x3U << CRU_CLKSEL_CON30_MCLK_I2S8CH_1_TX_MUX_SEL_SHIFT)    /* 0x00000C00 */
#define CRU_CLKSEL_CON30_CLK_CODEC_SEL_SHIFT               (15U)
#define CRU_CLKSEL_CON30_CLK_CODEC_SEL_MASK                (0x1U << CRU_CLKSEL_CON30_CLK_CODEC_SEL_SHIFT)               /* 0x00008000 */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_CLK_I2S8CH_1_TX_FRAC_DIV_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON31_CLK_I2S8CH_1_TX_FRAC_DIV_DIV_MASK (0xFFFFFFFFU << CRU_CLKSEL_CON31_CLK_I2S8CH_1_TX_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_DIV_MASK      (0x7FU << CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_SEL_MASK      (0x3U << CRU_CLKSEL_CON32_CLK_I2S8CH_1_RX_DIV_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON32_MCLK_I2S8CH_1_RX_MUX_SEL_SHIFT    (10U)
#define CRU_CLKSEL_CON32_MCLK_I2S8CH_1_RX_MUX_SEL_MASK     (0x3U << CRU_CLKSEL_CON32_MCLK_I2S8CH_1_RX_MUX_SEL_SHIFT)    /* 0x00000C00 */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_CLK_I2S8CH_1_RX_FRAC_DIV_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON33_CLK_I2S8CH_1_RX_FRAC_DIV_DIV_MASK (0xFFFFFFFFU << CRU_CLKSEL_CON33_CLK_I2S8CH_1_RX_FRAC_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON34 */
#define CRU_CLKSEL_CON34_CLK_SARADC_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON34_CLK_SARADC_DIV_MASK               (0x1FU << CRU_CLKSEL_CON34_CLK_SARADC_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON34_CLK_OTG_USBPHY_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON34_CLK_OTG_USBPHY_DIV_MASK           (0x1FU << CRU_CLKSEL_CON34_CLK_OTG_USBPHY_DIV_SHIFT)         /* 0x00001F00 */
/* CLKSEL_CON35 */
#define CRU_CLKSEL_CON35_OUTCLOCK_TEST_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON35_OUTCLOCK_TEST_DIV_MASK            (0xFU << CRU_CLKSEL_CON35_OUTCLOCK_TEST_DIV_SHIFT)           /* 0x0000000F */
#define CRU_CLKSEL_CON35_OUTCLOCK_TEST_SEL_SHIFT           (4U)
#define CRU_CLKSEL_CON35_OUTCLOCK_TEST_SEL_MASK            (0x1FU << CRU_CLKSEL_CON35_OUTCLOCK_TEST_SEL_SHIFT)          /* 0x000001F0 */
/* CLKGATE_CON00 */
#define CRU_CLKGATE_CON00_CLK_32K_FRAC_DIV_EN_SHIFT        (1U)
#define CRU_CLKGATE_CON00_CLK_32K_FRAC_DIV_EN_MASK         (0x1U << CRU_CLKGATE_CON00_CLK_32K_FRAC_DIV_EN_SHIFT)        /* 0x00000002 */
#define CRU_CLKGATE_CON00_CLK_32K_EN_SHIFT                 (2U)
#define CRU_CLKGATE_CON00_CLK_32K_EN_MASK                  (0x1U << CRU_CLKGATE_CON00_CLK_32K_EN_SHIFT)                 /* 0x00000004 */
#define CRU_CLKGATE_CON00_CLK_32K_OUT_EN_SHIFT             (3U)
#define CRU_CLKGATE_CON00_CLK_32K_OUT_EN_MASK              (0x1U << CRU_CLKGATE_CON00_CLK_32K_OUT_EN_SHIFT)             /* 0x00000008 */
#define CRU_CLKGATE_CON00_CLK_GPLL_MUX_DIV_NP5_EN_SHIFT    (4U)
#define CRU_CLKGATE_CON00_CLK_GPLL_MUX_DIV_NP5_EN_MASK     (0x1U << CRU_CLKGATE_CON00_CLK_GPLL_MUX_DIV_NP5_EN_SHIFT)    /* 0x00000010 */
/* CLKGATE_CON01 */
#define CRU_CLKGATE_CON01_HCLK_MCU_BUS_PLL_EN_SHIFT        (0U)
#define CRU_CLKGATE_CON01_HCLK_MCU_BUS_PLL_EN_MASK         (0x1U << CRU_CLKGATE_CON01_HCLK_MCU_BUS_PLL_EN_SHIFT)        /* 0x00000001 */
#define CRU_CLKGATE_CON01_HCLK_MCU_BUS_NIU_EN_SHIFT        (1U)
#define CRU_CLKGATE_CON01_HCLK_MCU_BUS_NIU_EN_MASK         (0x1U << CRU_CLKGATE_CON01_HCLK_MCU_BUS_NIU_EN_SHIFT)        /* 0x00000002 */
#define CRU_CLKGATE_CON01_HCLK_M4F0_EN_SHIFT               (2U)
#define CRU_CLKGATE_CON01_HCLK_M4F0_EN_MASK                (0x1U << CRU_CLKGATE_CON01_HCLK_M4F0_EN_SHIFT)               /* 0x00000004 */
#define CRU_CLKGATE_CON01_FCLK_M0_EN_SHIFT                 (4U)
#define CRU_CLKGATE_CON01_FCLK_M0_EN_MASK                  (0x1U << CRU_CLKGATE_CON01_FCLK_M0_EN_SHIFT)                 /* 0x00000010 */
#define CRU_CLKGATE_CON01_DCLK_M0_EN_SHIFT                 (5U)
#define CRU_CLKGATE_CON01_DCLK_M0_EN_MASK                  (0x1U << CRU_CLKGATE_CON01_DCLK_M0_EN_SHIFT)                 /* 0x00000020 */
#define CRU_CLKGATE_CON01_SCLK_M0_EN_SHIFT                 (6U)
#define CRU_CLKGATE_CON01_SCLK_M0_EN_MASK                  (0x1U << CRU_CLKGATE_CON01_SCLK_M0_EN_SHIFT)                 /* 0x00000040 */
#define CRU_CLKGATE_CON01_HCLK_INTMEM0_MCU_EN_SHIFT        (9U)
#define CRU_CLKGATE_CON01_HCLK_INTMEM0_MCU_EN_MASK         (0x1U << CRU_CLKGATE_CON01_HCLK_INTMEM0_MCU_EN_SHIFT)        /* 0x00000200 */
#define CRU_CLKGATE_CON01_HCLK_INTMEM1_MCU_EN_SHIFT        (10U)
#define CRU_CLKGATE_CON01_HCLK_INTMEM1_MCU_EN_MASK         (0x1U << CRU_CLKGATE_CON01_HCLK_INTMEM1_MCU_EN_SHIFT)        /* 0x00000400 */
#define CRU_CLKGATE_CON01_HCLK_DMAC_EN_SHIFT               (11U)
#define CRU_CLKGATE_CON01_HCLK_DMAC_EN_MASK                (0x1U << CRU_CLKGATE_CON01_HCLK_DMAC_EN_SHIFT)               /* 0x00000800 */
#define CRU_CLKGATE_CON01_HCLK_ROM_EN_SHIFT                (12U)
#define CRU_CLKGATE_CON01_HCLK_ROM_EN_MASK                 (0x1U << CRU_CLKGATE_CON01_HCLK_ROM_EN_SHIFT)                /* 0x00001000 */
#define CRU_CLKGATE_CON01_HCLK_HIFI3_TCM_EN_SHIFT          (13U)
#define CRU_CLKGATE_CON01_HCLK_HIFI3_TCM_EN_MASK           (0x1U << CRU_CLKGATE_CON01_HCLK_HIFI3_TCM_EN_SHIFT)          /* 0x00002000 */
#define CRU_CLKGATE_CON01_HCLK_VOP_EN_SHIFT                (14U)
#define CRU_CLKGATE_CON01_HCLK_VOP_EN_MASK                 (0x1U << CRU_CLKGATE_CON01_HCLK_VOP_EN_SHIFT)                /* 0x00004000 */
#define CRU_CLKGATE_CON01_HCLK_SFC0_EN_SHIFT               (15U)
#define CRU_CLKGATE_CON01_HCLK_SFC0_EN_MASK                (0x1U << CRU_CLKGATE_CON01_HCLK_SFC0_EN_SHIFT)               /* 0x00008000 */
/* CLKGATE_CON02 */
#define CRU_CLKGATE_CON02_HCLK_SFC0_XIP_EN_SHIFT           (0U)
#define CRU_CLKGATE_CON02_HCLK_SFC0_XIP_EN_MASK            (0x1U << CRU_CLKGATE_CON02_HCLK_SFC0_XIP_EN_SHIFT)           /* 0x00000001 */
#define CRU_CLKGATE_CON02_HCLK_SFC1_EN_SHIFT               (1U)
#define CRU_CLKGATE_CON02_HCLK_SFC1_EN_MASK                (0x1U << CRU_CLKGATE_CON02_HCLK_SFC1_EN_SHIFT)               /* 0x00000002 */
#define CRU_CLKGATE_CON02_HCLK_SFC1_XIP_EN_SHIFT           (2U)
#define CRU_CLKGATE_CON02_HCLK_SFC1_XIP_EN_MASK            (0x1U << CRU_CLKGATE_CON02_HCLK_SFC1_XIP_EN_SHIFT)           /* 0x00000004 */
#define CRU_CLKGATE_CON02_ACLK_XIP_HYPERX8_EN_SHIFT        (3U)
#define CRU_CLKGATE_CON02_ACLK_XIP_HYPERX8_EN_MASK         (0x1U << CRU_CLKGATE_CON02_ACLK_XIP_HYPERX8_EN_SHIFT)        /* 0x00000008 */
#define CRU_CLKGATE_CON02_HCLK_AUDPWM_EN_SHIFT             (4U)
#define CRU_CLKGATE_CON02_HCLK_AUDPWM_EN_MASK              (0x1U << CRU_CLKGATE_CON02_HCLK_AUDPWM_EN_SHIFT)             /* 0x00000010 */
#define CRU_CLKGATE_CON02_PCLK_MCU_BUS_PLL_EN_SHIFT        (8U)
#define CRU_CLKGATE_CON02_PCLK_MCU_BUS_PLL_EN_MASK         (0x1U << CRU_CLKGATE_CON02_PCLK_MCU_BUS_PLL_EN_SHIFT)        /* 0x00000100 */
#define CRU_CLKGATE_CON02_PCLK_MCU_BUS_NIU_EN_SHIFT        (9U)
#define CRU_CLKGATE_CON02_PCLK_MCU_BUS_NIU_EN_MASK         (0x1U << CRU_CLKGATE_CON02_PCLK_MCU_BUS_NIU_EN_SHIFT)        /* 0x00000200 */
#define CRU_CLKGATE_CON02_PCLK_UART0_EN_SHIFT              (10U)
#define CRU_CLKGATE_CON02_PCLK_UART0_EN_MASK               (0x1U << CRU_CLKGATE_CON02_PCLK_UART0_EN_SHIFT)              /* 0x00000400 */
#define CRU_CLKGATE_CON02_PCLK_UART1_EN_SHIFT              (11U)
#define CRU_CLKGATE_CON02_PCLK_UART1_EN_MASK               (0x1U << CRU_CLKGATE_CON02_PCLK_UART1_EN_SHIFT)              /* 0x00000800 */
#define CRU_CLKGATE_CON02_PCLK_UART2_EN_SHIFT              (12U)
#define CRU_CLKGATE_CON02_PCLK_UART2_EN_MASK               (0x1U << CRU_CLKGATE_CON02_PCLK_UART2_EN_SHIFT)              /* 0x00001000 */
#define CRU_CLKGATE_CON02_PCLK_I2C0_EN_SHIFT               (13U)
#define CRU_CLKGATE_CON02_PCLK_I2C0_EN_MASK                (0x1U << CRU_CLKGATE_CON02_PCLK_I2C0_EN_SHIFT)               /* 0x00002000 */
#define CRU_CLKGATE_CON02_PCLK_I2C1_EN_SHIFT               (14U)
#define CRU_CLKGATE_CON02_PCLK_I2C1_EN_MASK                (0x1U << CRU_CLKGATE_CON02_PCLK_I2C1_EN_SHIFT)               /* 0x00004000 */
#define CRU_CLKGATE_CON02_PCLK_I2C2_EN_SHIFT               (15U)
#define CRU_CLKGATE_CON02_PCLK_I2C2_EN_MASK                (0x1U << CRU_CLKGATE_CON02_PCLK_I2C2_EN_SHIFT)               /* 0x00008000 */
/* CLKGATE_CON03 */
#define CRU_CLKGATE_CON03_PCLK_PWM0_EN_SHIFT               (0U)
#define CRU_CLKGATE_CON03_PCLK_PWM0_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_PWM0_EN_SHIFT)               /* 0x00000001 */
#define CRU_CLKGATE_CON03_PCLK_PWM1_EN_SHIFT               (1U)
#define CRU_CLKGATE_CON03_PCLK_PWM1_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_PWM1_EN_SHIFT)               /* 0x00000002 */
#define CRU_CLKGATE_CON03_PCLK_PWM2_EN_SHIFT               (2U)
#define CRU_CLKGATE_CON03_PCLK_PWM2_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_PWM2_EN_SHIFT)               /* 0x00000004 */
#define CRU_CLKGATE_CON03_PCLK_SPI0_EN_SHIFT               (3U)
#define CRU_CLKGATE_CON03_PCLK_SPI0_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_SPI0_EN_SHIFT)               /* 0x00000008 */
#define CRU_CLKGATE_CON03_PCLK_SPI1_EN_SHIFT               (4U)
#define CRU_CLKGATE_CON03_PCLK_SPI1_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_SPI1_EN_SHIFT)               /* 0x00000010 */
#define CRU_CLKGATE_CON03_PCLK_SARADC_CONTROL_EN_SHIFT     (5U)
#define CRU_CLKGATE_CON03_PCLK_SARADC_CONTROL_EN_MASK      (0x1U << CRU_CLKGATE_CON03_PCLK_SARADC_CONTROL_EN_SHIFT)     /* 0x00000020 */
#define CRU_CLKGATE_CON03_PCLK_EFUSE_EN_SHIFT              (6U)
#define CRU_CLKGATE_CON03_PCLK_EFUSE_EN_MASK               (0x1U << CRU_CLKGATE_CON03_PCLK_EFUSE_EN_SHIFT)              /* 0x00000040 */
#define CRU_CLKGATE_CON03_PCLK_TIMER_EN_SHIFT              (7U)
#define CRU_CLKGATE_CON03_PCLK_TIMER_EN_MASK               (0x1U << CRU_CLKGATE_CON03_PCLK_TIMER_EN_SHIFT)              /* 0x00000080 */
#define CRU_CLKGATE_CON03_PCLK_WDT0_EN_SHIFT               (8U)
#define CRU_CLKGATE_CON03_PCLK_WDT0_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_WDT0_EN_SHIFT)               /* 0x00000100 */
#define CRU_CLKGATE_CON03_PCLK_WDT1_EN_SHIFT               (9U)
#define CRU_CLKGATE_CON03_PCLK_WDT1_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_WDT1_EN_SHIFT)               /* 0x00000200 */
#define CRU_CLKGATE_CON03_PCLK_WDT2_EN_SHIFT               (10U)
#define CRU_CLKGATE_CON03_PCLK_WDT2_EN_MASK                (0x1U << CRU_CLKGATE_CON03_PCLK_WDT2_EN_SHIFT)               /* 0x00000400 */
#define CRU_CLKGATE_CON03_PCLK_MAILBOX0_EN_SHIFT           (11U)
#define CRU_CLKGATE_CON03_PCLK_MAILBOX0_EN_MASK            (0x1U << CRU_CLKGATE_CON03_PCLK_MAILBOX0_EN_SHIFT)           /* 0x00000800 */
#define CRU_CLKGATE_CON03_PCLK_MAILBOX1_EN_SHIFT           (12U)
#define CRU_CLKGATE_CON03_PCLK_MAILBOX1_EN_MASK            (0x1U << CRU_CLKGATE_CON03_PCLK_MAILBOX1_EN_SHIFT)           /* 0x00001000 */
#define CRU_CLKGATE_CON03_PCLK_INT_CTRL_EN_SHIFT           (13U)
#define CRU_CLKGATE_CON03_PCLK_INT_CTRL_EN_MASK            (0x1U << CRU_CLKGATE_CON03_PCLK_INT_CTRL_EN_SHIFT)           /* 0x00002000 */
/* CLKGATE_CON04 */
#define CRU_CLKGATE_CON04_CLK_HIFI3_DIV_EN_SHIFT           (0U)
#define CRU_CLKGATE_CON04_CLK_HIFI3_DIV_EN_MASK            (0x1U << CRU_CLKGATE_CON04_CLK_HIFI3_DIV_EN_SHIFT)           /* 0x00000001 */
#define CRU_CLKGATE_CON04_CLK_HIFI3_NP5_DIV_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON04_CLK_HIFI3_NP5_DIV_EN_MASK        (0x1U << CRU_CLKGATE_CON04_CLK_HIFI3_NP5_DIV_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON04_CLK_HIFI3_EN_SHIFT               (2U)
#define CRU_CLKGATE_CON04_CLK_HIFI3_EN_MASK                (0x1U << CRU_CLKGATE_CON04_CLK_HIFI3_EN_SHIFT)               /* 0x00000004 */
#define CRU_CLKGATE_CON04_HCLK_HIFI3_NIU_EN_SHIFT          (3U)
#define CRU_CLKGATE_CON04_HCLK_HIFI3_NIU_EN_MASK           (0x1U << CRU_CLKGATE_CON04_HCLK_HIFI3_NIU_EN_SHIFT)          /* 0x00000008 */
#define CRU_CLKGATE_CON04_CLK_UART0_PLL_EN_SHIFT           (4U)
#define CRU_CLKGATE_CON04_CLK_UART0_PLL_EN_MASK            (0x1U << CRU_CLKGATE_CON04_CLK_UART0_PLL_EN_SHIFT)           /* 0x00000010 */
#define CRU_CLKGATE_CON04_CLK_UART0_FRAC_EN_SHIFT          (5U)
#define CRU_CLKGATE_CON04_CLK_UART0_FRAC_EN_MASK           (0x1U << CRU_CLKGATE_CON04_CLK_UART0_FRAC_EN_SHIFT)          /* 0x00000020 */
#define CRU_CLKGATE_CON04_SCLK_UART0_EN_SHIFT              (6U)
#define CRU_CLKGATE_CON04_SCLK_UART0_EN_MASK               (0x1U << CRU_CLKGATE_CON04_SCLK_UART0_EN_SHIFT)              /* 0x00000040 */
#define CRU_CLKGATE_CON04_CLK_UART1_EN_SHIFT               (7U)
#define CRU_CLKGATE_CON04_CLK_UART1_EN_MASK                (0x1U << CRU_CLKGATE_CON04_CLK_UART1_EN_SHIFT)               /* 0x00000080 */
#define CRU_CLKGATE_CON04_CLK_UART1_FRAC_EN_SHIFT          (8U)
#define CRU_CLKGATE_CON04_CLK_UART1_FRAC_EN_MASK           (0x1U << CRU_CLKGATE_CON04_CLK_UART1_FRAC_EN_SHIFT)          /* 0x00000100 */
#define CRU_CLKGATE_CON04_SCLK_UART1_EN_SHIFT              (9U)
#define CRU_CLKGATE_CON04_SCLK_UART1_EN_MASK               (0x1U << CRU_CLKGATE_CON04_SCLK_UART1_EN_SHIFT)              /* 0x00000200 */
#define CRU_CLKGATE_CON04_CLK_UART2_PLL_EN_SHIFT           (10U)
#define CRU_CLKGATE_CON04_CLK_UART2_PLL_EN_MASK            (0x1U << CRU_CLKGATE_CON04_CLK_UART2_PLL_EN_SHIFT)           /* 0x00000400 */
#define CRU_CLKGATE_CON04_CLK_UART2_FRAC_EN_SHIFT          (11U)
#define CRU_CLKGATE_CON04_CLK_UART2_FRAC_EN_MASK           (0x1U << CRU_CLKGATE_CON04_CLK_UART2_FRAC_EN_SHIFT)          /* 0x00000800 */
#define CRU_CLKGATE_CON04_SCLK_UART2_EN_SHIFT              (12U)
#define CRU_CLKGATE_CON04_SCLK_UART2_EN_MASK               (0x1U << CRU_CLKGATE_CON04_SCLK_UART2_EN_SHIFT)              /* 0x00001000 */
/* CLKGATE_CON05 */
#define CRU_CLKGATE_CON05_CLK_I2C0_PLL_EN_SHIFT            (0U)
#define CRU_CLKGATE_CON05_CLK_I2C0_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_I2C0_PLL_EN_SHIFT)            /* 0x00000001 */
#define CRU_CLKGATE_CON05_CLK_I2C1_PLL_EN_SHIFT            (1U)
#define CRU_CLKGATE_CON05_CLK_I2C1_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_I2C1_PLL_EN_SHIFT)            /* 0x00000002 */
#define CRU_CLKGATE_CON05_CLK_I2C2_PLL_EN_SHIFT            (2U)
#define CRU_CLKGATE_CON05_CLK_I2C2_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_I2C2_PLL_EN_SHIFT)            /* 0x00000004 */
#define CRU_CLKGATE_CON05_CLK_PWM0_PLL_EN_SHIFT            (3U)
#define CRU_CLKGATE_CON05_CLK_PWM0_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_PWM0_PLL_EN_SHIFT)            /* 0x00000008 */
#define CRU_CLKGATE_CON05_CLK_PWM1_PLL_EN_SHIFT            (4U)
#define CRU_CLKGATE_CON05_CLK_PWM1_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_PWM1_PLL_EN_SHIFT)            /* 0x00000010 */
#define CRU_CLKGATE_CON05_CLK_PWM2_PLL_EN_SHIFT            (5U)
#define CRU_CLKGATE_CON05_CLK_PWM2_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_PWM2_PLL_EN_SHIFT)            /* 0x00000020 */
#define CRU_CLKGATE_CON05_CLK_SPI0_PLL_EN_SHIFT            (6U)
#define CRU_CLKGATE_CON05_CLK_SPI0_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_SPI0_PLL_EN_SHIFT)            /* 0x00000040 */
#define CRU_CLKGATE_CON05_CLK_SPI1_PLL_EN_SHIFT            (7U)
#define CRU_CLKGATE_CON05_CLK_SPI1_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON05_CLK_SPI1_PLL_EN_SHIFT)            /* 0x00000080 */
#define CRU_CLKGATE_CON05_CLK_TIMER_PLL_EN_SHIFT           (8U)
#define CRU_CLKGATE_CON05_CLK_TIMER_PLL_EN_MASK            (0x1U << CRU_CLKGATE_CON05_CLK_TIMER_PLL_EN_SHIFT)           /* 0x00000100 */
#define CRU_CLKGATE_CON05_CLK_TIMER0_EN_SHIFT              (9U)
#define CRU_CLKGATE_CON05_CLK_TIMER0_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER0_EN_SHIFT)              /* 0x00000200 */
#define CRU_CLKGATE_CON05_CLK_TIMER1_EN_SHIFT              (10U)
#define CRU_CLKGATE_CON05_CLK_TIMER1_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER1_EN_SHIFT)              /* 0x00000400 */
#define CRU_CLKGATE_CON05_CLK_TIMER2_EN_SHIFT              (11U)
#define CRU_CLKGATE_CON05_CLK_TIMER2_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER2_EN_SHIFT)              /* 0x00000800 */
#define CRU_CLKGATE_CON05_CLK_TIMER3_EN_SHIFT              (12U)
#define CRU_CLKGATE_CON05_CLK_TIMER3_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER3_EN_SHIFT)              /* 0x00001000 */
#define CRU_CLKGATE_CON05_CLK_TIMER4_EN_SHIFT              (13U)
#define CRU_CLKGATE_CON05_CLK_TIMER4_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER4_EN_SHIFT)              /* 0x00002000 */
#define CRU_CLKGATE_CON05_CLK_TIMER5_EN_SHIFT              (14U)
#define CRU_CLKGATE_CON05_CLK_TIMER5_EN_MASK               (0x1U << CRU_CLKGATE_CON05_CLK_TIMER5_EN_SHIFT)              /* 0x00004000 */
/* CLKGATE_CON06 */
#define CRU_CLKGATE_CON06_CLK_EFUSE_EN_SHIFT               (2U)
#define CRU_CLKGATE_CON06_CLK_EFUSE_EN_MASK                (0x1U << CRU_CLKGATE_CON06_CLK_EFUSE_EN_SHIFT)               /* 0x00000004 */
#define CRU_CLKGATE_CON06_CLK_XIP_SFC0_DT50_EN_SHIFT       (3U)
#define CRU_CLKGATE_CON06_CLK_XIP_SFC0_DT50_EN_MASK        (0x1U << CRU_CLKGATE_CON06_CLK_XIP_SFC0_DT50_EN_SHIFT)       /* 0x00000008 */
#define CRU_CLKGATE_CON06_CLK_XIP_SFC1_DT50_EN_SHIFT       (4U)
#define CRU_CLKGATE_CON06_CLK_XIP_SFC1_DT50_EN_MASK        (0x1U << CRU_CLKGATE_CON06_CLK_XIP_SFC1_DT50_EN_SHIFT)       /* 0x00000010 */
#define CRU_CLKGATE_CON06_CLK_XIP_HYPERX8_DT50_EN_SHIFT    (5U)
#define CRU_CLKGATE_CON06_CLK_XIP_HYPERX8_DT50_EN_MASK     (0x1U << CRU_CLKGATE_CON06_CLK_XIP_HYPERX8_DT50_EN_SHIFT)    /* 0x00000020 */
#define CRU_CLKGATE_CON06_SCLK_M4F0_EN_SHIFT               (6U)
#define CRU_CLKGATE_CON06_SCLK_M4F0_EN_MASK                (0x1U << CRU_CLKGATE_CON06_SCLK_M4F0_EN_SHIFT)               /* 0x00000040 */
#define CRU_CLKGATE_CON06_CLK_AUDPWM_PLL_EN_SHIFT          (7U)
#define CRU_CLKGATE_CON06_CLK_AUDPWM_PLL_EN_MASK           (0x1U << CRU_CLKGATE_CON06_CLK_AUDPWM_PLL_EN_SHIFT)          /* 0x00000080 */
#define CRU_CLKGATE_CON06_CLK_AUDPWM_FRAC_EN_SHIFT         (8U)
#define CRU_CLKGATE_CON06_CLK_AUDPWM_FRAC_EN_MASK          (0x1U << CRU_CLKGATE_CON06_CLK_AUDPWM_FRAC_EN_SHIFT)         /* 0x00000100 */
#define CRU_CLKGATE_CON06_SCLK_AUDPWM_EN_SHIFT             (9U)
#define CRU_CLKGATE_CON06_SCLK_AUDPWM_EN_MASK              (0x1U << CRU_CLKGATE_CON06_SCLK_AUDPWM_EN_SHIFT)             /* 0x00000200 */
/* CLKGATE_CON07 */
#define CRU_CLKGATE_CON07_ACLK_PERI_BUS_PLL_EN_SHIFT       (0U)
#define CRU_CLKGATE_CON07_ACLK_PERI_BUS_PLL_EN_MASK        (0x1U << CRU_CLKGATE_CON07_ACLK_PERI_BUS_PLL_EN_SHIFT)       /* 0x00000001 */
#define CRU_CLKGATE_CON07_HCLK_PERI_BUS_PLL_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON07_HCLK_PERI_BUS_PLL_EN_MASK        (0x1U << CRU_CLKGATE_CON07_HCLK_PERI_BUS_PLL_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON07_ACLK_PERI_BUS_NIU_EN_SHIFT       (2U)
#define CRU_CLKGATE_CON07_ACLK_PERI_BUS_NIU_EN_MASK        (0x1U << CRU_CLKGATE_CON07_ACLK_PERI_BUS_NIU_EN_SHIFT)       /* 0x00000004 */
#define CRU_CLKGATE_CON07_HCLK_PERI_BUS_NIU_EN_SHIFT       (3U)
#define CRU_CLKGATE_CON07_HCLK_PERI_BUS_NIU_EN_MASK        (0x1U << CRU_CLKGATE_CON07_HCLK_PERI_BUS_NIU_EN_SHIFT)       /* 0x00000008 */
#define CRU_CLKGATE_CON07_ACLK_VIP_EN_SHIFT                (4U)
#define CRU_CLKGATE_CON07_ACLK_VIP_EN_MASK                 (0x1U << CRU_CLKGATE_CON07_ACLK_VIP_EN_SHIFT)                /* 0x00000010 */
#define CRU_CLKGATE_CON07_ACLK_CRYPTO_EN_SHIFT             (5U)
#define CRU_CLKGATE_CON07_ACLK_CRYPTO_EN_MASK              (0x1U << CRU_CLKGATE_CON07_ACLK_CRYPTO_EN_SHIFT)             /* 0x00000020 */
#define CRU_CLKGATE_CON07_HCLK_VIP_EN_SHIFT                (6U)
#define CRU_CLKGATE_CON07_HCLK_VIP_EN_MASK                 (0x1U << CRU_CLKGATE_CON07_HCLK_VIP_EN_SHIFT)                /* 0x00000040 */
#define CRU_CLKGATE_CON07_HCLK_CRYPTO_EN_SHIFT             (7U)
#define CRU_CLKGATE_CON07_HCLK_CRYPTO_EN_MASK              (0x1U << CRU_CLKGATE_CON07_HCLK_CRYPTO_EN_SHIFT)             /* 0x00000080 */
#define CRU_CLKGATE_CON07_HCLK_SDMMC_EN_SHIFT              (8U)
#define CRU_CLKGATE_CON07_HCLK_SDMMC_EN_MASK               (0x1U << CRU_CLKGATE_CON07_HCLK_SDMMC_EN_SHIFT)              /* 0x00000100 */
#define CRU_CLKGATE_CON07_HCLK_USBOTG_EN_SHIFT             (9U)
#define CRU_CLKGATE_CON07_HCLK_USBOTG_EN_MASK              (0x1U << CRU_CLKGATE_CON07_HCLK_USBOTG_EN_SHIFT)             /* 0x00000200 */
#define CRU_CLKGATE_CON07_HCLK_USBOTG_PMU_EN_SHIFT         (10U)
#define CRU_CLKGATE_CON07_HCLK_USBOTG_PMU_EN_MASK          (0x1U << CRU_CLKGATE_CON07_HCLK_USBOTG_PMU_EN_SHIFT)         /* 0x00000400 */
#define CRU_CLKGATE_CON07_PCLK_SPI2APB_EN_SHIFT            (13U)
#define CRU_CLKGATE_CON07_PCLK_SPI2APB_EN_MASK             (0x1U << CRU_CLKGATE_CON07_PCLK_SPI2APB_EN_SHIFT)            /* 0x00002000 */
#define CRU_CLKGATE_CON07_CLK_VIP_PLL_EN_SHIFT             (14U)
#define CRU_CLKGATE_CON07_CLK_VIP_PLL_EN_MASK              (0x1U << CRU_CLKGATE_CON07_CLK_VIP_PLL_EN_SHIFT)             /* 0x00004000 */
/* CLKGATE_CON08 */
#define CRU_CLKGATE_CON08_CLK_OTG_ADP_EN_SHIFT             (1U)
#define CRU_CLKGATE_CON08_CLK_OTG_ADP_EN_MASK              (0x1U << CRU_CLKGATE_CON08_CLK_OTG_ADP_EN_SHIFT)             /* 0x00000002 */
#define CRU_CLKGATE_CON08_CLK_SDMMC_DT50_EN_SHIFT          (2U)
#define CRU_CLKGATE_CON08_CLK_SDMMC_DT50_EN_MASK           (0x1U << CRU_CLKGATE_CON08_CLK_SDMMC_DT50_EN_SHIFT)          /* 0x00000004 */
#define CRU_CLKGATE_CON08_CLK_CRYPTO_DIV_EN_SHIFT          (3U)
#define CRU_CLKGATE_CON08_CLK_CRYPTO_DIV_EN_MASK           (0x1U << CRU_CLKGATE_CON08_CLK_CRYPTO_DIV_EN_SHIFT)          /* 0x00000008 */
#define CRU_CLKGATE_CON08_CLK_CRYPTO_NP5_DIV_EN_SHIFT      (4U)
#define CRU_CLKGATE_CON08_CLK_CRYPTO_NP5_DIV_EN_MASK       (0x1U << CRU_CLKGATE_CON08_CLK_CRYPTO_NP5_DIV_EN_SHIFT)      /* 0x00000010 */
#define CRU_CLKGATE_CON08_CLK_CRYPTO_EN_SHIFT              (5U)
#define CRU_CLKGATE_CON08_CLK_CRYPTO_EN_MASK               (0x1U << CRU_CLKGATE_CON08_CLK_CRYPTO_EN_SHIFT)              /* 0x00000020 */
#define CRU_CLKGATE_CON08_CLK_CRYPTO_PKA_EN_SHIFT          (6U)
#define CRU_CLKGATE_CON08_CLK_CRYPTO_PKA_EN_MASK           (0x1U << CRU_CLKGATE_CON08_CLK_CRYPTO_PKA_EN_SHIFT)          /* 0x00000040 */
#define CRU_CLKGATE_CON08_ACLK_WIFI_BUS_EN_SHIFT           (8U)
#define CRU_CLKGATE_CON08_ACLK_WIFI_BUS_EN_MASK            (0x1U << CRU_CLKGATE_CON08_ACLK_WIFI_BUS_EN_SHIFT)           /* 0x00000100 */
#define CRU_CLKGATE_CON08_ACLK_WIFI_BUS_NIU_EN_SHIFT       (9U)
#define CRU_CLKGATE_CON08_ACLK_WIFI_BUS_NIU_EN_MASK        (0x1U << CRU_CLKGATE_CON08_ACLK_WIFI_BUS_NIU_EN_SHIFT)       /* 0x00000200 */
#define CRU_CLKGATE_CON08_HCLK_WIFI_BUS_NIU_EN_SHIFT       (10U)
#define CRU_CLKGATE_CON08_HCLK_WIFI_BUS_NIU_EN_MASK        (0x1U << CRU_CLKGATE_CON08_HCLK_WIFI_BUS_NIU_EN_SHIFT)       /* 0x00000400 */
#define CRU_CLKGATE_CON08_HCLK_BUFFER_EN_SHIFT             (11U)
#define CRU_CLKGATE_CON08_HCLK_BUFFER_EN_MASK              (0x1U << CRU_CLKGATE_CON08_HCLK_BUFFER_EN_SHIFT)             /* 0x00000800 */
#define CRU_CLKGATE_CON08_CLK80_LPW_EN_SHIFT               (12U)
#define CRU_CLKGATE_CON08_CLK80_LPW_EN_MASK                (0x1U << CRU_CLKGATE_CON08_CLK80_LPW_EN_SHIFT)               /* 0x00001000 */
#define CRU_CLKGATE_CON08_CLK40_LPW_EN_SHIFT               (13U)
#define CRU_CLKGATE_CON08_CLK40_LPW_EN_MASK                (0x1U << CRU_CLKGATE_CON08_CLK40_LPW_EN_SHIFT)               /* 0x00002000 */
/* CLKGATE_CON09 */
#define CRU_CLKGATE_CON09_HCLK_TOP_BUS_PLL_EN_SHIFT        (0U)
#define CRU_CLKGATE_CON09_HCLK_TOP_BUS_PLL_EN_MASK         (0x1U << CRU_CLKGATE_CON09_HCLK_TOP_BUS_PLL_EN_SHIFT)        /* 0x00000001 */
#define CRU_CLKGATE_CON09_HCLK_TOP_BUS_NIU_EN_SHIFT        (1U)
#define CRU_CLKGATE_CON09_HCLK_TOP_BUS_NIU_EN_MASK         (0x1U << CRU_CLKGATE_CON09_HCLK_TOP_BUS_NIU_EN_SHIFT)        /* 0x00000002 */
#define CRU_CLKGATE_CON09_HCLK_PDM_EN_SHIFT                (2U)
#define CRU_CLKGATE_CON09_HCLK_PDM_EN_MASK                 (0x1U << CRU_CLKGATE_CON09_HCLK_PDM_EN_SHIFT)                /* 0x00000004 */
#define CRU_CLKGATE_CON09_HCLK_I2S0_EN_SHIFT               (3U)
#define CRU_CLKGATE_CON09_HCLK_I2S0_EN_MASK                (0x1U << CRU_CLKGATE_CON09_HCLK_I2S0_EN_SHIFT)               /* 0x00000008 */
#define CRU_CLKGATE_CON09_HCLK_I2S1_EN_SHIFT               (4U)
#define CRU_CLKGATE_CON09_HCLK_I2S1_EN_MASK                (0x1U << CRU_CLKGATE_CON09_HCLK_I2S1_EN_SHIFT)               /* 0x00000010 */
#define CRU_CLKGATE_CON09_HCLK_VAD_EN_SHIFT                (5U)
#define CRU_CLKGATE_CON09_HCLK_VAD_EN_MASK                 (0x1U << CRU_CLKGATE_CON09_HCLK_VAD_EN_SHIFT)                /* 0x00000020 */
#define CRU_CLKGATE_CON09_PCLK_TOP_BUS_PLL_EN_SHIFT        (6U)
#define CRU_CLKGATE_CON09_PCLK_TOP_BUS_PLL_EN_MASK         (0x1U << CRU_CLKGATE_CON09_PCLK_TOP_BUS_PLL_EN_SHIFT)        /* 0x00000040 */
#define CRU_CLKGATE_CON09_PCLK_TOP_BUS_NIU_EN_SHIFT        (7U)
#define CRU_CLKGATE_CON09_PCLK_TOP_BUS_NIU_EN_MASK         (0x1U << CRU_CLKGATE_CON09_PCLK_TOP_BUS_NIU_EN_SHIFT)        /* 0x00000080 */
#define CRU_CLKGATE_CON09_PCLK_GPIO0_EN_SHIFT              (8U)
#define CRU_CLKGATE_CON09_PCLK_GPIO0_EN_MASK               (0x1U << CRU_CLKGATE_CON09_PCLK_GPIO0_EN_SHIFT)              /* 0x00000100 */
#define CRU_CLKGATE_CON09_PCLK_GPIO1_EN_SHIFT              (9U)
#define CRU_CLKGATE_CON09_PCLK_GPIO1_EN_MASK               (0x1U << CRU_CLKGATE_CON09_PCLK_GPIO1_EN_SHIFT)              /* 0x00000200 */
#define CRU_CLKGATE_CON09_PCLK_PMU_EN_SHIFT                (10U)
#define CRU_CLKGATE_CON09_PCLK_PMU_EN_MASK                 (0x1U << CRU_CLKGATE_CON09_PCLK_PMU_EN_SHIFT)                /* 0x00000400 */
#define CRU_CLKGATE_CON09_PCLK_CRU_EN_SHIFT                (11U)
#define CRU_CLKGATE_CON09_PCLK_CRU_EN_MASK                 (0x1U << CRU_CLKGATE_CON09_PCLK_CRU_EN_SHIFT)                /* 0x00000800 */
#define CRU_CLKGATE_CON09_PCLK_GRF_EN_SHIFT                (12U)
#define CRU_CLKGATE_CON09_PCLK_GRF_EN_MASK                 (0x1U << CRU_CLKGATE_CON09_PCLK_GRF_EN_SHIFT)                /* 0x00001000 */
#define CRU_CLKGATE_CON09_PCLK_ACODEC_EN_SHIFT             (13U)
#define CRU_CLKGATE_CON09_PCLK_ACODEC_EN_MASK              (0x1U << CRU_CLKGATE_CON09_PCLK_ACODEC_EN_SHIFT)             /* 0x00002000 */
#define CRU_CLKGATE_CON09_PCLK_32KTRIM_EN_SHIFT            (14U)
#define CRU_CLKGATE_CON09_PCLK_32KTRIM_EN_MASK             (0x1U << CRU_CLKGATE_CON09_PCLK_32KTRIM_EN_SHIFT)            /* 0x00004000 */
#define CRU_CLKGATE_CON09_PCLK_TOP_TIMER_EN_SHIFT          (15U)
#define CRU_CLKGATE_CON09_PCLK_TOP_TIMER_EN_MASK           (0x1U << CRU_CLKGATE_CON09_PCLK_TOP_TIMER_EN_SHIFT)          /* 0x00008000 */
/* CLKGATE_CON10 */
#define CRU_CLKGATE_CON10_PCLK_PVTM_EN_SHIFT               (0U)
#define CRU_CLKGATE_CON10_PCLK_PVTM_EN_MASK                (0x1U << CRU_CLKGATE_CON10_PCLK_PVTM_EN_SHIFT)               /* 0x00000001 */
#define CRU_CLKGATE_CON10_PCLK_TOUCH_DETECT_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON10_PCLK_TOUCH_DETECT_EN_MASK        (0x1U << CRU_CLKGATE_CON10_PCLK_TOUCH_DETECT_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON10_AON_SLEEP_CLK_EN_SHIFT           (2U)
#define CRU_CLKGATE_CON10_AON_SLEEP_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON10_AON_SLEEP_CLK_EN_SHIFT)           /* 0x00000004 */
#define CRU_CLKGATE_CON10_CLK_32K_TOP_EN_SHIFT             (3U)
#define CRU_CLKGATE_CON10_CLK_32K_TOP_EN_MASK              (0x1U << CRU_CLKGATE_CON10_CLK_32K_TOP_EN_SHIFT)             /* 0x00000008 */
#define CRU_CLKGATE_CON10_CLK_PMU_EN_SHIFT                 (4U)
#define CRU_CLKGATE_CON10_CLK_PMU_EN_MASK                  (0x1U << CRU_CLKGATE_CON10_CLK_PMU_EN_SHIFT)                 /* 0x00000010 */
#define CRU_CLKGATE_CON10_DBCLK_GPIO0_EN_SHIFT             (5U)
#define CRU_CLKGATE_CON10_DBCLK_GPIO0_EN_MASK              (0x1U << CRU_CLKGATE_CON10_DBCLK_GPIO0_EN_SHIFT)             /* 0x00000020 */
#define CRU_CLKGATE_CON10_DBCLK_GPIO1_EN_SHIFT             (6U)
#define CRU_CLKGATE_CON10_DBCLK_GPIO1_EN_MASK              (0x1U << CRU_CLKGATE_CON10_DBCLK_GPIO1_EN_SHIFT)             /* 0x00000040 */
#define CRU_CLKGATE_CON10_CLK_PMU_OSC_EN_SHIFT             (7U)
#define CRU_CLKGATE_CON10_CLK_PMU_OSC_EN_MASK              (0x1U << CRU_CLKGATE_CON10_CLK_PMU_OSC_EN_SHIFT)             /* 0x00000080 */
#define CRU_CLKGATE_CON10_MCLK_PDM_PLL_EN_SHIFT            (12U)
#define CRU_CLKGATE_CON10_MCLK_PDM_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON10_MCLK_PDM_PLL_EN_SHIFT)            /* 0x00001000 */
#define CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_PLL_EN_SHIFT     (13U)
#define CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_PLL_EN_MASK      (0x1U << CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_PLL_EN_SHIFT)     /* 0x00002000 */
#define CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_FRAC_DIV_EN_SHIFT (14U)
#define CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_FRAC_DIV_EN_MASK (0x1U << CRU_CLKGATE_CON10_CLK_I2S8CH_0_TX_FRAC_DIV_EN_SHIFT) /* 0x00004000 */
#define CRU_CLKGATE_CON10_MCLK_I2S8CH_0_TX_EN_SHIFT        (15U)
#define CRU_CLKGATE_CON10_MCLK_I2S8CH_0_TX_EN_MASK         (0x1U << CRU_CLKGATE_CON10_MCLK_I2S8CH_0_TX_EN_SHIFT)        /* 0x00008000 */
/* CLKGATE_CON11 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_PLL_EN_SHIFT     (0U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_PLL_EN_MASK      (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_PLL_EN_SHIFT)     /* 0x00000001 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_FRAC_DIV_EN_SHIFT (1U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_FRAC_DIV_EN_MASK (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_0_RX_FRAC_DIV_EN_SHIFT) /* 0x00000002 */
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_0_RX_EN_SHIFT        (2U)
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_0_RX_EN_MASK         (0x1U << CRU_CLKGATE_CON11_MCLK_I2S8CH_0_RX_EN_SHIFT)        /* 0x00000004 */
#define CRU_CLKGATE_CON11_MCLKOUT_I2S8CH_0_EN_SHIFT        (3U)
#define CRU_CLKGATE_CON11_MCLKOUT_I2S8CH_0_EN_MASK         (0x1U << CRU_CLKGATE_CON11_MCLKOUT_I2S8CH_0_EN_SHIFT)        /* 0x00000008 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_PLL_EN_SHIFT     (4U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_PLL_EN_MASK      (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_PLL_EN_SHIFT)     /* 0x00000010 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_FRAC_DIV_EN_SHIFT (5U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_FRAC_DIV_EN_MASK (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_1_TX_FRAC_DIV_EN_SHIFT) /* 0x00000020 */
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_1_TX_EN_SHIFT        (6U)
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_1_TX_EN_MASK         (0x1U << CRU_CLKGATE_CON11_MCLK_I2S8CH_1_TX_EN_SHIFT)        /* 0x00000040 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_PLL_EN_SHIFT     (7U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_PLL_EN_MASK      (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_PLL_EN_SHIFT)     /* 0x00000080 */
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_FRAC_DIV_EN_SHIFT (8U)
#define CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_FRAC_DIV_EN_MASK (0x1U << CRU_CLKGATE_CON11_CLK_I2S8CH_1_RX_FRAC_DIV_EN_SHIFT) /* 0x00000100 */
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_1_RX_EN_SHIFT        (9U)
#define CRU_CLKGATE_CON11_MCLK_I2S8CH_1_RX_EN_MASK         (0x1U << CRU_CLKGATE_CON11_MCLK_I2S8CH_1_RX_EN_SHIFT)        /* 0x00000200 */
#define CRU_CLKGATE_CON11_SCLK_CODEC_EN_SHIFT              (10U)
#define CRU_CLKGATE_CON11_SCLK_CODEC_EN_MASK               (0x1U << CRU_CLKGATE_CON11_SCLK_CODEC_EN_SHIFT)              /* 0x00000400 */
#define CRU_CLKGATE_CON11_CLK_I2C_CODEC_PLL_EN_SHIFT       (11U)
#define CRU_CLKGATE_CON11_CLK_I2C_CODEC_PLL_EN_MASK        (0x1U << CRU_CLKGATE_CON11_CLK_I2C_CODEC_PLL_EN_SHIFT)       /* 0x00000800 */
/* CLKGATE_CON12 */
#define CRU_CLKGATE_CON12_CLK_SARADC_EN_SHIFT              (2U)
#define CRU_CLKGATE_CON12_CLK_SARADC_EN_MASK               (0x1U << CRU_CLKGATE_CON12_CLK_SARADC_EN_SHIFT)              /* 0x00000004 */
#define CRU_CLKGATE_CON12_CLK_OTG_USBPHY_PLL_EN_SHIFT      (3U)
#define CRU_CLKGATE_CON12_CLK_OTG_USBPHY_PLL_EN_MASK       (0x1U << CRU_CLKGATE_CON12_CLK_OTG_USBPHY_PLL_EN_SHIFT)      /* 0x00000008 */
#define CRU_CLKGATE_CON12_CLK_32KTRIM_EN_SHIFT             (4U)
#define CRU_CLKGATE_CON12_CLK_32KTRIM_EN_MASK              (0x1U << CRU_CLKGATE_CON12_CLK_32KTRIM_EN_SHIFT)             /* 0x00000010 */
#define CRU_CLKGATE_CON12_OUTCLOCK_TEST_EN_SHIFT           (5U)
#define CRU_CLKGATE_CON12_OUTCLOCK_TEST_EN_MASK            (0x1U << CRU_CLKGATE_CON12_OUTCLOCK_TEST_EN_SHIFT)           /* 0x00000020 */
#define CRU_CLKGATE_CON12_CLK_PVTM_EN_SHIFT                (7U)
#define CRU_CLKGATE_CON12_CLK_PVTM_EN_MASK                 (0x1U << CRU_CLKGATE_CON12_CLK_PVTM_EN_SHIFT)                /* 0x00000080 */
#define CRU_CLKGATE_CON12_CLK_TOUCH_DETECT_EN_SHIFT        (8U)
#define CRU_CLKGATE_CON12_CLK_TOUCH_DETECT_EN_MASK         (0x1U << CRU_CLKGATE_CON12_CLK_TOUCH_DETECT_EN_SHIFT)        /* 0x00000100 */
#define CRU_CLKGATE_CON12_CLK_TIMER_TOP_PLL_EN_SHIFT       (9U)
#define CRU_CLKGATE_CON12_CLK_TIMER_TOP_PLL_EN_MASK        (0x1U << CRU_CLKGATE_CON12_CLK_TIMER_TOP_PLL_EN_SHIFT)       /* 0x00000200 */
/* SSCGTBL0_3 */
#define CRU_SSCGTBL0_3_SSCGTBL0_3_SHIFT                    (0U)
#define CRU_SSCGTBL0_3_SSCGTBL0_3_MASK                     (0xFFFFFFFFU << CRU_SSCGTBL0_3_SSCGTBL0_3_SHIFT)             /* 0xFFFFFFFF */
/* SSCGTBL4_7 */
#define CRU_SSCGTBL4_7_SSCGTBL4_7_SHIFT                    (0U)
#define CRU_SSCGTBL4_7_SSCGTBL4_7_MASK                     (0xFFFFFFFFU << CRU_SSCGTBL4_7_SSCGTBL4_7_SHIFT)             /* 0xFFFFFFFF */
/* SSCGTBL8_11 */
#define CRU_SSCGTBL8_11_SSCGTBL8_11_SHIFT                  (0U)
#define CRU_SSCGTBL8_11_SSCGTBL8_11_MASK                   (0xFFFFFFFFU << CRU_SSCGTBL8_11_SSCGTBL8_11_SHIFT)           /* 0xFFFFFFFF */
/* SSCGTBL12_15 */
#define CRU_SSCGTBL12_15_SSCGTBL12_15_SHIFT                (0U)
#define CRU_SSCGTBL12_15_SSCGTBL12_15_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL12_15_SSCGTBL12_15_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL16_19 */
#define CRU_SSCGTBL16_19_SSCGTBL16_19_SHIFT                (0U)
#define CRU_SSCGTBL16_19_SSCGTBL16_19_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL16_19_SSCGTBL16_19_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL20_23 */
#define CRU_SSCGTBL20_23_SSCGTBL20_23_SHIFT                (0U)
#define CRU_SSCGTBL20_23_SSCGTBL20_23_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL20_23_SSCGTBL20_23_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL24_27 */
#define CRU_SSCGTBL24_27_SSCGTBL24_27_SHIFT                (0U)
#define CRU_SSCGTBL24_27_SSCGTBL24_27_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL24_27_SSCGTBL24_27_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL28_31 */
#define CRU_SSCGTBL28_31_SSCGTBL28_31_SHIFT                (0U)
#define CRU_SSCGTBL28_31_SSCGTBL28_31_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL28_31_SSCGTBL28_31_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL32_35 */
#define CRU_SSCGTBL32_35_SSCGTBL32_35_SHIFT                (0U)
#define CRU_SSCGTBL32_35_SSCGTBL32_35_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL32_35_SSCGTBL32_35_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL36_39 */
#define CRU_SSCGTBL36_39_SSCGTBL36_39_SHIFT                (0U)
#define CRU_SSCGTBL36_39_SSCGTBL36_39_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL36_39_SSCGTBL36_39_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL40_43 */
#define CRU_SSCGTBL40_43_SSCGTBL40_43_SHIFT                (0U)
#define CRU_SSCGTBL40_43_SSCGTBL40_43_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL40_43_SSCGTBL40_43_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL44_47 */
#define CRU_SSCGTBL44_47_SSCGTBL44_47_SHIFT                (0U)
#define CRU_SSCGTBL44_47_SSCGTBL44_47_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL44_47_SSCGTBL44_47_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL48_51 */
#define CRU_SSCGTBL48_51_SSCGTBL48_51_SHIFT                (0U)
#define CRU_SSCGTBL48_51_SSCGTBL48_51_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL48_51_SSCGTBL48_51_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL52_55 */
#define CRU_SSCGTBL52_55_SSCGTBL52_55_SHIFT                (0U)
#define CRU_SSCGTBL52_55_SSCGTBL52_55_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL52_55_SSCGTBL52_55_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL56_59 */
#define CRU_SSCGTBL56_59_SSCGTBL56_59_SHIFT                (0U)
#define CRU_SSCGTBL56_59_SSCGTBL56_59_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL56_59_SSCGTBL56_59_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL60_63 */
#define CRU_SSCGTBL60_63_SSCGTBL60_63_SHIFT                (0U)
#define CRU_SSCGTBL60_63_SSCGTBL60_63_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL60_63_SSCGTBL60_63_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL64_67 */
#define CRU_SSCGTBL64_67_SSCGTBL64_67_SHIFT                (0U)
#define CRU_SSCGTBL64_67_SSCGTBL64_67_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL64_67_SSCGTBL64_67_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL68_71 */
#define CRU_SSCGTBL68_71_SSCGTBL68_71_SHIFT                (0U)
#define CRU_SSCGTBL68_71_SSCGTBL68_71_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL68_71_SSCGTBL68_71_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL72_75 */
#define CRU_SSCGTBL72_75_SSCGTBL72_75_SHIFT                (0U)
#define CRU_SSCGTBL72_75_SSCGTBL72_75_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL72_75_SSCGTBL72_75_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL76_79 */
#define CRU_SSCGTBL76_79_SSCGTBL76_79_SHIFT                (0U)
#define CRU_SSCGTBL76_79_SSCGTBL76_79_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL76_79_SSCGTBL76_79_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL80_83 */
#define CRU_SSCGTBL80_83_SSCGTBL80_83_SHIFT                (0U)
#define CRU_SSCGTBL80_83_SSCGTBL80_83_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL80_83_SSCGTBL80_83_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL84_87 */
#define CRU_SSCGTBL84_87_SSCGTBL84_87_SHIFT                (0U)
#define CRU_SSCGTBL84_87_SSCGTBL84_87_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL84_87_SSCGTBL84_87_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL88_91 */
#define CRU_SSCGTBL88_91_SSCGTBL88_91_SHIFT                (0U)
#define CRU_SSCGTBL88_91_SSCGTBL88_91_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL88_91_SSCGTBL88_91_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL92_95 */
#define CRU_SSCGTBL92_95_SSCGTBL92_95_SHIFT                (0U)
#define CRU_SSCGTBL92_95_SSCGTBL92_95_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL92_95_SSCGTBL92_95_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL96_99 */
#define CRU_SSCGTBL96_99_SSCGTBL96_99_SHIFT                (0U)
#define CRU_SSCGTBL96_99_SSCGTBL96_99_MASK                 (0xFFFFFFFFU << CRU_SSCGTBL96_99_SSCGTBL96_99_SHIFT)         /* 0xFFFFFFFF */
/* SSCGTBL100_103 */
#define CRU_SSCGTBL100_103_SSCGTBL100_103_SHIFT            (0U)
#define CRU_SSCGTBL100_103_SSCGTBL100_103_MASK             (0xFFFFFFFFU << CRU_SSCGTBL100_103_SSCGTBL100_103_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL104_107 */
#define CRU_SSCGTBL104_107_SSCGTBL104_107_SHIFT            (0U)
#define CRU_SSCGTBL104_107_SSCGTBL104_107_MASK             (0xFFFFFFFFU << CRU_SSCGTBL104_107_SSCGTBL104_107_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL108_111 */
#define CRU_SSCGTBL108_111_SSCGTBL108_111_SHIFT            (0U)
#define CRU_SSCGTBL108_111_SSCGTBL108_111_MASK             (0xFFFFFFFFU << CRU_SSCGTBL108_111_SSCGTBL108_111_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL112_115 */
#define CRU_SSCGTBL112_115_SSCGTBL112_115_SHIFT            (0U)
#define CRU_SSCGTBL112_115_SSCGTBL112_115_MASK             (0xFFFFFFFFU << CRU_SSCGTBL112_115_SSCGTBL112_115_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL116_119 */
#define CRU_SSCGTBL116_119_SSCGTBL116_119_SHIFT            (0U)
#define CRU_SSCGTBL116_119_SSCGTBL116_119_MASK             (0xFFFFFFFFU << CRU_SSCGTBL116_119_SSCGTBL116_119_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL120_123 */
#define CRU_SSCGTBL120_123_SSCGTBL120_123_SHIFT            (0U)
#define CRU_SSCGTBL120_123_SSCGTBL120_123_MASK             (0xFFFFFFFFU << CRU_SSCGTBL120_123_SSCGTBL120_123_SHIFT)     /* 0xFFFFFFFF */
/* SSCGTBL124_127 */
#define CRU_SSCGTBL124_127_SSCGTBL124_127_SHIFT            (0U)
#define CRU_SSCGTBL124_127_SSCGTBL124_127_MASK             (0xFFFFFFFFU << CRU_SSCGTBL124_127_SSCGTBL124_127_SHIFT)     /* 0xFFFFFFFF */
/* SOFTRST_CON01 */
#define CRU_SOFTRST_CON01_HRESETN_MCU_BUS_NIU_SHIFT        (1U)
#define CRU_SOFTRST_CON01_HRESETN_MCU_BUS_NIU_MASK         (0x1U << CRU_SOFTRST_CON01_HRESETN_MCU_BUS_NIU_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON01_HRESETN_M4F0_SHIFT               (2U)
#define CRU_SOFTRST_CON01_HRESETN_M4F0_MASK                (0x1U << CRU_SOFTRST_CON01_HRESETN_M4F0_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON01_HRESETN_M0_SHIFT                 (3U)
#define CRU_SOFTRST_CON01_HRESETN_M0_MASK                  (0x1U << CRU_SOFTRST_CON01_HRESETN_M0_SHIFT)                 /* 0x00000008 */
#define CRU_SOFTRST_CON01_PORESETN_M0_SHIFT                (4U)
#define CRU_SOFTRST_CON01_PORESETN_M0_MASK                 (0x1U << CRU_SOFTRST_CON01_PORESETN_M0_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON01_DBRESETN_M0_SHIFT                (5U)
#define CRU_SOFTRST_CON01_DBRESETN_M0_MASK                 (0x1U << CRU_SOFTRST_CON01_DBRESETN_M0_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON01_HRESETN_INTMEM0_SHIFT            (9U)
#define CRU_SOFTRST_CON01_HRESETN_INTMEM0_MASK             (0x1U << CRU_SOFTRST_CON01_HRESETN_INTMEM0_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON01_HRESETN_INTMEM1_SHIFT            (10U)
#define CRU_SOFTRST_CON01_HRESETN_INTMEM1_MASK             (0x1U << CRU_SOFTRST_CON01_HRESETN_INTMEM1_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON01_HRESETN_DMAC_SHIFT               (11U)
#define CRU_SOFTRST_CON01_HRESETN_DMAC_MASK                (0x1U << CRU_SOFTRST_CON01_HRESETN_DMAC_SHIFT)               /* 0x00000800 */
#define CRU_SOFTRST_CON01_HRESETN_ROM_SHIFT                (12U)
#define CRU_SOFTRST_CON01_HRESETN_ROM_MASK                 (0x1U << CRU_SOFTRST_CON01_HRESETN_ROM_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON01_HRESETN_HIFI3_TCM_SHIFT          (13U)
#define CRU_SOFTRST_CON01_HRESETN_HIFI3_TCM_MASK           (0x1U << CRU_SOFTRST_CON01_HRESETN_HIFI3_TCM_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON01_HRESETN_VOP_SHIFT                (14U)
#define CRU_SOFTRST_CON01_HRESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON01_HRESETN_VOP_SHIFT)                /* 0x00004000 */
#define CRU_SOFTRST_CON01_HRESETN_SFC0_SHIFT               (15U)
#define CRU_SOFTRST_CON01_HRESETN_SFC0_MASK                (0x1U << CRU_SOFTRST_CON01_HRESETN_SFC0_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_HRESETN_SFC0_XIP_SHIFT           (0U)
#define CRU_SOFTRST_CON02_HRESETN_SFC0_XIP_MASK            (0x1U << CRU_SOFTRST_CON02_HRESETN_SFC0_XIP_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON02_HRESETN_SFC1_SHIFT               (1U)
#define CRU_SOFTRST_CON02_HRESETN_SFC1_MASK                (0x1U << CRU_SOFTRST_CON02_HRESETN_SFC1_SHIFT)               /* 0x00000002 */
#define CRU_SOFTRST_CON02_HRESETN_SFC1_XIP_SHIFT           (2U)
#define CRU_SOFTRST_CON02_HRESETN_SFC1_XIP_MASK            (0x1U << CRU_SOFTRST_CON02_HRESETN_SFC1_XIP_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON02_ARESETN_XIP_HYPERX8_SHIFT        (3U)
#define CRU_SOFTRST_CON02_ARESETN_XIP_HYPERX8_MASK         (0x1U << CRU_SOFTRST_CON02_ARESETN_XIP_HYPERX8_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON02_HRESETN_AUDPWM_SHIFT             (4U)
#define CRU_SOFTRST_CON02_HRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON02_HRESETN_AUDPWM_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON02_PRESETN_MCU_BUS_NIU_SHIFT        (9U)
#define CRU_SOFTRST_CON02_PRESETN_MCU_BUS_NIU_MASK         (0x1U << CRU_SOFTRST_CON02_PRESETN_MCU_BUS_NIU_SHIFT)        /* 0x00000200 */
#define CRU_SOFTRST_CON02_PRESETN_UART0_SHIFT              (10U)
#define CRU_SOFTRST_CON02_PRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON02_PRESETN_UART0_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON02_PRESETN_UART1_SHIFT              (11U)
#define CRU_SOFTRST_CON02_PRESETN_UART1_MASK               (0x1U << CRU_SOFTRST_CON02_PRESETN_UART1_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON02_PRESETN_UART2_SHIFT              (12U)
#define CRU_SOFTRST_CON02_PRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON02_PRESETN_UART2_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON02_PRESETN_I2C0_SHIFT               (13U)
#define CRU_SOFTRST_CON02_PRESETN_I2C0_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C0_SHIFT)               /* 0x00002000 */
#define CRU_SOFTRST_CON02_PRESETN_I2C1_SHIFT               (14U)
#define CRU_SOFTRST_CON02_PRESETN_I2C1_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C1_SHIFT)               /* 0x00004000 */
#define CRU_SOFTRST_CON02_PRESETN_I2C2_SHIFT               (15U)
#define CRU_SOFTRST_CON02_PRESETN_I2C2_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C2_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON03 */
#define CRU_SOFTRST_CON03_PRESETN_PWM0_SHIFT               (0U)
#define CRU_SOFTRST_CON03_PRESETN_PWM0_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_PWM0_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON03_PRESETN_PWM1_SHIFT               (1U)
#define CRU_SOFTRST_CON03_PRESETN_PWM1_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_PWM1_SHIFT)               /* 0x00000002 */
#define CRU_SOFTRST_CON03_PRESETN_PWM2_SHIFT               (2U)
#define CRU_SOFTRST_CON03_PRESETN_PWM2_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_PWM2_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON03_PRESETN_SPI0_SHIFT               (3U)
#define CRU_SOFTRST_CON03_PRESETN_SPI0_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_SPI0_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON03_PRESETN_SPI1_SHIFT               (4U)
#define CRU_SOFTRST_CON03_PRESETN_SPI1_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_SPI1_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON03_PRESETN_SARADC_CONTROL_SHIFT     (5U)
#define CRU_SOFTRST_CON03_PRESETN_SARADC_CONTROL_MASK      (0x1U << CRU_SOFTRST_CON03_PRESETN_SARADC_CONTROL_SHIFT)     /* 0x00000020 */
#define CRU_SOFTRST_CON03_PRESETN_EFUSE_SHIFT              (6U)
#define CRU_SOFTRST_CON03_PRESETN_EFUSE_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_EFUSE_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON03_PRESETN_TIMER_SHIFT              (7U)
#define CRU_SOFTRST_CON03_PRESETN_TIMER_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_TIMER_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON03_PRESETN_WDT0_SHIFT               (8U)
#define CRU_SOFTRST_CON03_PRESETN_WDT0_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_WDT0_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON03_PRESETN_WDT1_SHIFT               (9U)
#define CRU_SOFTRST_CON03_PRESETN_WDT1_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_WDT1_SHIFT)               /* 0x00000200 */
#define CRU_SOFTRST_CON03_PRESETN_WDT2_SHIFT               (10U)
#define CRU_SOFTRST_CON03_PRESETN_WDT2_MASK                (0x1U << CRU_SOFTRST_CON03_PRESETN_WDT2_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX0_SHIFT           (11U)
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX0_MASK            (0x1U << CRU_SOFTRST_CON03_PRESETN_MAILBOX0_SHIFT)           /* 0x00000800 */
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX1_SHIFT           (12U)
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX1_MASK            (0x1U << CRU_SOFTRST_CON03_PRESETN_MAILBOX1_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON03_PRESETN_INT_CTRL_SHIFT           (13U)
#define CRU_SOFTRST_CON03_PRESETN_INT_CTRL_MASK            (0x1U << CRU_SOFTRST_CON03_PRESETN_INT_CTRL_SHIFT)           /* 0x00002000 */
/* SOFTRST_CON04 */
#define CRU_SOFTRST_CON04_DRESETN_HIFI3_SHIFT              (1U)
#define CRU_SOFTRST_CON04_DRESETN_HIFI3_MASK               (0x1U << CRU_SOFTRST_CON04_DRESETN_HIFI3_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON04_BRESETN_HIFI3_SHIFT              (2U)
#define CRU_SOFTRST_CON04_BRESETN_HIFI3_MASK               (0x1U << CRU_SOFTRST_CON04_BRESETN_HIFI3_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON04_HRESETN_HIFI3_NIU_SHIFT          (3U)
#define CRU_SOFTRST_CON04_HRESETN_HIFI3_NIU_MASK           (0x1U << CRU_SOFTRST_CON04_HRESETN_HIFI3_NIU_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON04_SRESETN_UART1_SHIFT              (5U)
#define CRU_SOFTRST_CON04_SRESETN_UART1_MASK               (0x1U << CRU_SOFTRST_CON04_SRESETN_UART1_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON04_SRESETN_UART0_SHIFT              (6U)
#define CRU_SOFTRST_CON04_SRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON04_SRESETN_UART0_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON04_RESETN_PWM2_SHIFT                (10U)
#define CRU_SOFTRST_CON04_RESETN_PWM2_MASK                 (0x1U << CRU_SOFTRST_CON04_RESETN_PWM2_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON04_SRESETN_UART2_SHIFT              (12U)
#define CRU_SOFTRST_CON04_SRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON04_SRESETN_UART2_SHIFT)              /* 0x00001000 */
/* SOFTRST_CON05 */
#define CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT                (0U)
#define CRU_SOFTRST_CON05_RESETN_I2C0_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON05_RESETN_I2C1_SHIFT                (1U)
#define CRU_SOFTRST_CON05_RESETN_I2C1_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_I2C1_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON05_RESETN_I2C2_SHIFT                (2U)
#define CRU_SOFTRST_CON05_RESETN_I2C2_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_I2C2_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON05_RESETN_PWM0_SHIFT                (3U)
#define CRU_SOFTRST_CON05_RESETN_PWM0_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_PWM0_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON05_RESETN_PWM1_SHIFT                (4U)
#define CRU_SOFTRST_CON05_RESETN_PWM1_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_PWM1_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON05_RESETN_SPI0_SHIFT                (6U)
#define CRU_SOFTRST_CON05_RESETN_SPI0_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_SPI0_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON05_RESETN_SPI1_SHIFT                (7U)
#define CRU_SOFTRST_CON05_RESETN_SPI1_MASK                 (0x1U << CRU_SOFTRST_CON05_RESETN_SPI1_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON05_RESETN_TIMER0_SHIFT              (9U)
#define CRU_SOFTRST_CON05_RESETN_TIMER0_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER0_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON05_RESETN_TIMER1_SHIFT              (10U)
#define CRU_SOFTRST_CON05_RESETN_TIMER1_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER1_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON05_RESETN_TIMER2_SHIFT              (11U)
#define CRU_SOFTRST_CON05_RESETN_TIMER2_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER2_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON05_RESETN_TIMER3_SHIFT              (12U)
#define CRU_SOFTRST_CON05_RESETN_TIMER3_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER3_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON05_RESETN_TIMER4_SHIFT              (13U)
#define CRU_SOFTRST_CON05_RESETN_TIMER4_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER4_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON05_RESETN_TIMER5_SHIFT              (14U)
#define CRU_SOFTRST_CON05_RESETN_TIMER5_MASK               (0x1U << CRU_SOFTRST_CON05_RESETN_TIMER5_SHIFT)              /* 0x00004000 */
/* SOFTRST_CON06 */
#define CRU_SOFTRST_CON06_RESETN_EFUSE_SHIFT               (2U)
#define CRU_SOFTRST_CON06_RESETN_EFUSE_MASK                (0x1U << CRU_SOFTRST_CON06_RESETN_EFUSE_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON06_RESETN_XIP_SFC0_SHIFT            (3U)
#define CRU_SOFTRST_CON06_RESETN_XIP_SFC0_MASK             (0x1U << CRU_SOFTRST_CON06_RESETN_XIP_SFC0_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON06_RESETN_XIP_SFC1_SHIFT            (4U)
#define CRU_SOFTRST_CON06_RESETN_XIP_SFC1_MASK             (0x1U << CRU_SOFTRST_CON06_RESETN_XIP_SFC1_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON06_RESETN_XIP_HYPERX8_SHIFT         (5U)
#define CRU_SOFTRST_CON06_RESETN_XIP_HYPERX8_MASK          (0x1U << CRU_SOFTRST_CON06_RESETN_XIP_HYPERX8_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON06_SRESETN_AUDPWM_SHIFT             (9U)
#define CRU_SOFTRST_CON06_SRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON06_SRESETN_AUDPWM_SHIFT)             /* 0x00000200 */
/* SOFTRST_CON07 */
#define CRU_SOFTRST_CON07_ARESETN_PERI_BUS_NIU_SHIFT       (2U)
#define CRU_SOFTRST_CON07_ARESETN_PERI_BUS_NIU_MASK        (0x1U << CRU_SOFTRST_CON07_ARESETN_PERI_BUS_NIU_SHIFT)       /* 0x00000004 */
#define CRU_SOFTRST_CON07_HRESETN_PERI_BUS_NIU_SHIFT       (3U)
#define CRU_SOFTRST_CON07_HRESETN_PERI_BUS_NIU_MASK        (0x1U << CRU_SOFTRST_CON07_HRESETN_PERI_BUS_NIU_SHIFT)       /* 0x00000008 */
#define CRU_SOFTRST_CON07_ARESETN_VIP_SHIFT                (4U)
#define CRU_SOFTRST_CON07_ARESETN_VIP_MASK                 (0x1U << CRU_SOFTRST_CON07_ARESETN_VIP_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON07_ARESETN_CRYPTO_SHIFT             (5U)
#define CRU_SOFTRST_CON07_ARESETN_CRYPTO_MASK              (0x1U << CRU_SOFTRST_CON07_ARESETN_CRYPTO_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON07_HRESETN_VIP_SHIFT                (6U)
#define CRU_SOFTRST_CON07_HRESETN_VIP_MASK                 (0x1U << CRU_SOFTRST_CON07_HRESETN_VIP_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON07_HRESETN_CRYPTO_SHIFT             (7U)
#define CRU_SOFTRST_CON07_HRESETN_CRYPTO_MASK              (0x1U << CRU_SOFTRST_CON07_HRESETN_CRYPTO_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON07_HRESETN_SDMMC_SHIFT              (8U)
#define CRU_SOFTRST_CON07_HRESETN_SDMMC_MASK               (0x1U << CRU_SOFTRST_CON07_HRESETN_SDMMC_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON07_HRESETN_USBOTG_SHIFT             (9U)
#define CRU_SOFTRST_CON07_HRESETN_USBOTG_MASK              (0x1U << CRU_SOFTRST_CON07_HRESETN_USBOTG_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON07_HRESETN_USBOTG_PMU_SHIFT         (10U)
#define CRU_SOFTRST_CON07_HRESETN_USBOTG_PMU_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_USBOTG_PMU_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON07_PRESETN_SPI2APB_SHIFT            (13U)
#define CRU_SOFTRST_CON07_PRESETN_SPI2APB_MASK             (0x1U << CRU_SOFTRST_CON07_PRESETN_SPI2APB_SHIFT)            /* 0x00002000 */
/* SOFTRST_CON08 */
#define CRU_SOFTRST_CON08_RESETN_UTMI_SHIFT                (0U)
#define CRU_SOFTRST_CON08_RESETN_UTMI_MASK                 (0x1U << CRU_SOFTRST_CON08_RESETN_UTMI_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON08_RESETN_OTG_ADP_SHIFT             (1U)
#define CRU_SOFTRST_CON08_RESETN_OTG_ADP_MASK              (0x1U << CRU_SOFTRST_CON08_RESETN_OTG_ADP_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON08_RESETN_CRYPTO_SHIFT              (5U)
#define CRU_SOFTRST_CON08_RESETN_CRYPTO_MASK               (0x1U << CRU_SOFTRST_CON08_RESETN_CRYPTO_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON08_RESETN_CRYPTO_PKA_SHIFT          (6U)
#define CRU_SOFTRST_CON08_RESETN_CRYPTO_PKA_MASK           (0x1U << CRU_SOFTRST_CON08_RESETN_CRYPTO_PKA_SHIFT)          /* 0x00000040 */
#define CRU_SOFTRST_CON08_ARESETN_WIFI_BUS_NIU_SHIFT       (9U)
#define CRU_SOFTRST_CON08_ARESETN_WIFI_BUS_NIU_MASK        (0x1U << CRU_SOFTRST_CON08_ARESETN_WIFI_BUS_NIU_SHIFT)       /* 0x00000200 */
#define CRU_SOFTRST_CON08_HRESETN_WIFI_BUS_NIU_SHIFT       (10U)
#define CRU_SOFTRST_CON08_HRESETN_WIFI_BUS_NIU_MASK        (0x1U << CRU_SOFTRST_CON08_HRESETN_WIFI_BUS_NIU_SHIFT)       /* 0x00000400 */
#define CRU_SOFTRST_CON08_HRESETN_BUFFER_SHIFT             (11U)
#define CRU_SOFTRST_CON08_HRESETN_BUFFER_MASK              (0x1U << CRU_SOFTRST_CON08_HRESETN_BUFFER_SHIFT)             /* 0x00000800 */
/* SOFTRST_CON09 */
#define CRU_SOFTRST_CON09_HRESETN_TOP_BUS_NIU_SHIFT        (1U)
#define CRU_SOFTRST_CON09_HRESETN_TOP_BUS_NIU_MASK         (0x1U << CRU_SOFTRST_CON09_HRESETN_TOP_BUS_NIU_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON09_HRESETN_PDM_SHIFT                (2U)
#define CRU_SOFTRST_CON09_HRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON09_HRESETN_PDM_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON09_HRESETN_I2S0_SHIFT               (3U)
#define CRU_SOFTRST_CON09_HRESETN_I2S0_MASK                (0x1U << CRU_SOFTRST_CON09_HRESETN_I2S0_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON09_HRESETN_I2S1_SHIFT               (4U)
#define CRU_SOFTRST_CON09_HRESETN_I2S1_MASK                (0x1U << CRU_SOFTRST_CON09_HRESETN_I2S1_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON09_HRESETN_VAD_SHIFT                (5U)
#define CRU_SOFTRST_CON09_HRESETN_VAD_MASK                 (0x1U << CRU_SOFTRST_CON09_HRESETN_VAD_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON09_PRESETN_TOP_BUS_NIU_SHIFT        (7U)
#define CRU_SOFTRST_CON09_PRESETN_TOP_BUS_NIU_MASK         (0x1U << CRU_SOFTRST_CON09_PRESETN_TOP_BUS_NIU_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON09_PRESETN_GPIO0_SHIFT              (8U)
#define CRU_SOFTRST_CON09_PRESETN_GPIO0_MASK               (0x1U << CRU_SOFTRST_CON09_PRESETN_GPIO0_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON09_PRESETN_GPIO1_SHIFT              (9U)
#define CRU_SOFTRST_CON09_PRESETN_GPIO1_MASK               (0x1U << CRU_SOFTRST_CON09_PRESETN_GPIO1_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON09_PRESETN_CRU_SHIFT                (11U)
#define CRU_SOFTRST_CON09_PRESETN_CRU_MASK                 (0x1U << CRU_SOFTRST_CON09_PRESETN_CRU_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON09_PRESETN_GRF_SHIFT                (12U)
#define CRU_SOFTRST_CON09_PRESETN_GRF_MASK                 (0x1U << CRU_SOFTRST_CON09_PRESETN_GRF_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON09_PRESETN_ACODEC_SHIFT             (13U)
#define CRU_SOFTRST_CON09_PRESETN_ACODEC_MASK              (0x1U << CRU_SOFTRST_CON09_PRESETN_ACODEC_SHIFT)             /* 0x00002000 */
#define CRU_SOFTRST_CON09_PRESETN_32KTRIM_SHIFT            (14U)
#define CRU_SOFTRST_CON09_PRESETN_32KTRIM_MASK             (0x1U << CRU_SOFTRST_CON09_PRESETN_32KTRIM_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON09_PRESETN_TOP_TIMER_SHIFT          (15U)
#define CRU_SOFTRST_CON09_PRESETN_TOP_TIMER_MASK           (0x1U << CRU_SOFTRST_CON09_PRESETN_TOP_TIMER_SHIFT)          /* 0x00008000 */
/* SOFTRST_CON10 */
#define CRU_SOFTRST_CON10_PRESETN_PVTM_SHIFT               (0U)
#define CRU_SOFTRST_CON10_PRESETN_PVTM_MASK                (0x1U << CRU_SOFTRST_CON10_PRESETN_PVTM_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON10_PRESETN_TOUCH_DETECT_SHIFT       (1U)
#define CRU_SOFTRST_CON10_PRESETN_TOUCH_DETECT_MASK        (0x1U << CRU_SOFTRST_CON10_PRESETN_TOUCH_DETECT_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON10_RESETN_AON_SHIFT                 (2U)
#define CRU_SOFTRST_CON10_RESETN_AON_MASK                  (0x1U << CRU_SOFTRST_CON10_RESETN_AON_SHIFT)                 /* 0x00000004 */
#define CRU_SOFTRST_CON10_DBRESETN_GPIO0_SHIFT             (5U)
#define CRU_SOFTRST_CON10_DBRESETN_GPIO0_MASK              (0x1U << CRU_SOFTRST_CON10_DBRESETN_GPIO0_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON10_DBRESETN_GPIO1_SHIFT             (6U)
#define CRU_SOFTRST_CON10_DBRESETN_GPIO1_MASK              (0x1U << CRU_SOFTRST_CON10_DBRESETN_GPIO1_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON10_MRESETN_PDM_SHIFT                (12U)
#define CRU_SOFTRST_CON10_MRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON10_MRESETN_PDM_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON10_MRESETN_I2S8CH_0_TX_SHIFT        (15U)
#define CRU_SOFTRST_CON10_MRESETN_I2S8CH_0_TX_MASK         (0x1U << CRU_SOFTRST_CON10_MRESETN_I2S8CH_0_TX_SHIFT)        /* 0x00008000 */
/* SOFTRST_CON11 */
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_0_RX_SHIFT        (2U)
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_0_RX_MASK         (0x1U << CRU_SOFTRST_CON11_MRESETN_I2S8CH_0_RX_SHIFT)        /* 0x00000004 */
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_TX_SHIFT        (6U)
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_TX_MASK         (0x1U << CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_TX_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_RX_SHIFT        (9U)
#define CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_RX_MASK         (0x1U << CRU_SOFTRST_CON11_MRESETN_I2S8CH_1_RX_SHIFT)        /* 0x00000200 */
#define CRU_SOFTRST_CON11_RESETN_CODEC_SHIFT               (10U)
#define CRU_SOFTRST_CON11_RESETN_CODEC_MASK                (0x1U << CRU_SOFTRST_CON11_RESETN_CODEC_SHIFT)               /* 0x00000400 */
/* SOFTRST_CON12 */
#define CRU_SOFTRST_CON12_RESETN_OTG_USBPHY_SHIFT          (3U)
#define CRU_SOFTRST_CON12_RESETN_OTG_USBPHY_MASK           (0x1U << CRU_SOFTRST_CON12_RESETN_OTG_USBPHY_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON12_RESETN_32KTRIM_SHIFT             (4U)
#define CRU_SOFTRST_CON12_RESETN_32KTRIM_MASK              (0x1U << CRU_SOFTRST_CON12_RESETN_32KTRIM_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON12_RESETN_PVTM_SHIFT                (7U)
#define CRU_SOFTRST_CON12_RESETN_PVTM_MASK                 (0x1U << CRU_SOFTRST_CON12_RESETN_PVTM_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON12_RESETN_TOUCH_DETECT_SHIFT        (8U)
#define CRU_SOFTRST_CON12_RESETN_TOUCH_DETECT_MASK         (0x1U << CRU_SOFTRST_CON12_RESETN_TOUCH_DETECT_SHIFT)        /* 0x00000100 */
#define CRU_SOFTRST_CON12_RESETN_TOP_TIMER_SHIFT           (9U)
#define CRU_SOFTRST_CON12_RESETN_TOP_TIMER_MASK            (0x1U << CRU_SOFTRST_CON12_RESETN_TOP_TIMER_SHIFT)           /* 0x00000200 */
/* SDMMC_CON00 */
#define CRU_SDMMC_CON00_INIT_STATE_SHIFT                   (0U)
#define CRU_SDMMC_CON00_INIT_STATE_MASK                    (0x1U << CRU_SDMMC_CON00_INIT_STATE_SHIFT)                   /* 0x00000001 */
#define CRU_SDMMC_CON00_DRV_DEGREE_SHIFT                   (1U)
#define CRU_SDMMC_CON00_DRV_DEGREE_MASK                    (0x3U << CRU_SDMMC_CON00_DRV_DEGREE_SHIFT)                   /* 0x00000006 */
#define CRU_SDMMC_CON00_DRV_DELAYNUM_SHIFT                 (3U)
#define CRU_SDMMC_CON00_DRV_DELAYNUM_MASK                  (0xFFU << CRU_SDMMC_CON00_DRV_DELAYNUM_SHIFT)                /* 0x000007F8 */
#define CRU_SDMMC_CON00_DRV_SEL_SHIFT                      (11U)
#define CRU_SDMMC_CON00_DRV_SEL_MASK                       (0x1U << CRU_SDMMC_CON00_DRV_SEL_SHIFT)                      /* 0x00000800 */
/* SDMMC_CON01 */
#define CRU_SDMMC_CON01_SAMPLE_DEGREE_SHIFT                (1U)
#define CRU_SDMMC_CON01_SAMPLE_DEGREE_MASK                 (0x3U << CRU_SDMMC_CON01_SAMPLE_DEGREE_SHIFT)                /* 0x00000006 */
#define CRU_SDMMC_CON01_SAMPLE_DELAYNUM_SHIFT              (3U)
#define CRU_SDMMC_CON01_SAMPLE_DELAYNUM_MASK               (0xFFU << CRU_SDMMC_CON01_SAMPLE_DELAYNUM_SHIFT)             /* 0x000007F8 */
#define CRU_SDMMC_CON01_SAMPLE_SEL_SHIFT                   (11U)
#define CRU_SDMMC_CON01_SAMPLE_SEL_MASK                    (0x1U << CRU_SDMMC_CON01_SAMPLE_SEL_SHIFT)                   /* 0x00000800 */
/******************************************PVTM******************************************/
/* PVTM_VERSION */
#define PVTM_PVTM_VERSION_VERSION_SHIFT                    (0U)
#define PVTM_PVTM_VERSION_VERSION_MASK                     (0xFFFFU << PVTM_PVTM_VERSION_VERSION_SHIFT)                 /* 0x0000FFFF */
/* PVTM_CON0 */
#define PVTM_PVTM_CON0_PVTM_START_SHIFT                    (0U)
#define PVTM_PVTM_CON0_PVTM_START_MASK                     (0x1U << PVTM_PVTM_CON0_PVTM_START_SHIFT)                    /* 0x00000001 */
#define PVTM_PVTM_CON0_PVTM_OSC_EN_SHIFT                   (1U)
#define PVTM_PVTM_CON0_PVTM_OSC_EN_MASK                    (0x1U << PVTM_PVTM_CON0_PVTM_OSC_EN_SHIFT)                   /* 0x00000002 */
#define PVTM_PVTM_CON0_PVTM_OSC_SEL_SHIFT                  (2U)
#define PVTM_PVTM_CON0_PVTM_OSC_SEL_MASK                   (0x3U << PVTM_PVTM_CON0_PVTM_OSC_SEL_SHIFT)                  /* 0x0000000C */
/* PVTM_CON1 */
#define PVTM_PVTM_CON1_PVTM_CAL_CNT_SHIFT                  (0U)
#define PVTM_PVTM_CON1_PVTM_CAL_CNT_MASK                   (0xFFFFFFFFU << PVTM_PVTM_CON1_PVTM_CAL_CNT_SHIFT)           /* 0xFFFFFFFF */
/* PVTM_STATUS0 */
#define PVTM_PVTM_STATUS0_PVTM_FREQ_DONE_SHIFT             (0U)
#define PVTM_PVTM_STATUS0_PVTM_FREQ_DONE_MASK              (0x1U << PVTM_PVTM_STATUS0_PVTM_FREQ_DONE_SHIFT)             /* 0x00000001 */
/* PVTM_STATUS1 */
#define PVTM_PVTM_STATUS1_PVTM_FREQ_CNT_SHIFT              (0U)
#define PVTM_PVTM_STATUS1_PVTM_FREQ_CNT_MASK               (0xFFFFFFFFU << PVTM_PVTM_STATUS1_PVTM_FREQ_CNT_SHIFT)       /* 0xFFFFFFFF */
/**************************************TOUCH_SENSOR**************************************/
/* CH_START */
#define TOUCH_SENSOR_CH_START_START_SHIFT                  (0U)
#define TOUCH_SENSOR_CH_START_START_MASK                   (0x1U << TOUCH_SENSOR_CH_START_START_SHIFT)                  /* 0x00000001 */
/* CH_ENABLE0 */
#define TOUCH_SENSOR_CH_ENABLE0_ENABLE_SHIFT               (0U)
#define TOUCH_SENSOR_CH_ENABLE0_ENABLE_MASK                (0xFFFFU << TOUCH_SENSOR_CH_ENABLE0_ENABLE_SHIFT)            /* 0x0000FFFF */
/* CH_ENABLE1 */
#define TOUCH_SENSOR_CH_ENABLE1_ENABLE_SHIFT               (0U)
#define TOUCH_SENSOR_CH_ENABLE1_ENABLE_MASK                (0xFU << TOUCH_SENSOR_CH_ENABLE1_ENABLE_SHIFT)               /* 0x0000000F */
/* CH_DIV */
#define TOUCH_SENSOR_CH_DIV_DRIVE_PULSE_DIV_SHIFT          (0U)
#define TOUCH_SENSOR_CH_DIV_DRIVE_PULSE_DIV_MASK           (0xFFFFU << TOUCH_SENSOR_CH_DIV_DRIVE_PULSE_DIV_SHIFT)       /* 0x0000FFFF */
/* CH_IRQ_EN0 */
#define TOUCH_SENSOR_CH_IRQ_EN0_CHARGE_IRQ_EN_SHIFT        (0U)
#define TOUCH_SENSOR_CH_IRQ_EN0_CHARGE_IRQ_EN_MASK         (0xFFFFU << TOUCH_SENSOR_CH_IRQ_EN0_CHARGE_IRQ_EN_SHIFT)     /* 0x0000FFFF */
/* CH_IRQ_EN1 */
#define TOUCH_SENSOR_CH_IRQ_EN1_CHARGE_IRQ_EN_SHIFT        (0U)
#define TOUCH_SENSOR_CH_IRQ_EN1_CHARGE_IRQ_EN_MASK         (0xFU << TOUCH_SENSOR_CH_IRQ_EN1_CHARGE_IRQ_EN_SHIFT)        /* 0x0000000F */
/* CH_IRQ_ST */
#define TOUCH_SENSOR_CH_IRQ_ST_CHARGE_IRQ_SHIFT            (0U)
#define TOUCH_SENSOR_CH_IRQ_ST_CHARGE_IRQ_MASK             (0xFFFFFU << TOUCH_SENSOR_CH_IRQ_ST_CHARGE_IRQ_SHIFT)        /* 0x000FFFFF */
/* CH_IRQ_RAW */
#define TOUCH_SENSOR_CH_IRQ_RAW_CHARGE_IRQ_SHIFT           (0U)
#define TOUCH_SENSOR_CH_IRQ_RAW_CHARGE_IRQ_MASK            (0xFFFFFU << TOUCH_SENSOR_CH_IRQ_RAW_CHARGE_IRQ_SHIFT)       /* 0x000FFFFF */
/* CH_IRQ_CLEAR0 */
#define TOUCH_SENSOR_CH_IRQ_CLEAR0_CHARGE_IRQ_CLEAR_SHIFT  (0U)
#define TOUCH_SENSOR_CH_IRQ_CLEAR0_CHARGE_IRQ_CLEAR_MASK   (0xFFFFU << TOUCH_SENSOR_CH_IRQ_CLEAR0_CHARGE_IRQ_CLEAR_SHIFT) /* 0x0000FFFF */
/* CH_IRQ_CLEAR1 */
#define TOUCH_SENSOR_CH_IRQ_CLEAR1_CHARGE_IRQ_CLEAR_SHIFT  (0U)
#define TOUCH_SENSOR_CH_IRQ_CLEAR1_CHARGE_IRQ_CLEAR_MASK   (0xFU << TOUCH_SENSOR_CH_IRQ_CLEAR1_CHARGE_IRQ_CLEAR_SHIFT)  /* 0x0000000F */
/* CH_FILTER_THRESHOLD */
#define TOUCH_SENSOR_CH_FILTER_THRESHOLD_FILTER_THRESHOLD_SHIFT (0U)
#define TOUCH_SENSOR_CH_FILTER_THRESHOLD_FILTER_THRESHOLD_MASK (0xFFFFU << TOUCH_SENSOR_CH_FILTER_THRESHOLD_FILTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
/* CH_CHARGE_THRESHOLD */
#define TOUCH_SENSOR_CH_CHARGE_THRESHOLD_CHARGE_THRESHOLD_SHIFT (0U)
#define TOUCH_SENSOR_CH_CHARGE_THRESHOLD_CHARGE_THRESHOLD_MASK (0xFFFFU << TOUCH_SENSOR_CH_CHARGE_THRESHOLD_CHARGE_THRESHOLD_SHIFT) /* 0x0000FFFF */
/* CH_LOCK */
#define TOUCH_SENSOR_CH_LOCK_CH_LOCK_SHIFT                 (0U)
#define TOUCH_SENSOR_CH_LOCK_CH_LOCK_MASK                  (0x1U << TOUCH_SENSOR_CH_LOCK_CH_LOCK_SHIFT)                 /* 0x00000001 */
#define TOUCH_SENSOR_CH_LOCK_CH_KICK_SHIFT                 (1U)
#define TOUCH_SENSOR_CH_LOCK_CH_KICK_MASK                  (0x1U << TOUCH_SENSOR_CH_LOCK_CH_KICK_SHIFT)                 /* 0x00000002 */
/* CH0_CNT */
#define TOUCH_SENSOR_CH0_CNT_CH0_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH0_CNT_CH0_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH0_CNT_CH0_CNT_SHIFT)              /* 0x0000FFFF */
/* CH0_CNT_DC */
#define TOUCH_SENSOR_CH0_CNT_DC_CH0_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH0_CNT_DC_CH0_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH0_CNT_DC_CH0_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH0_CNT_DO */
#define TOUCH_SENSOR_CH0_CNT_DO_CH0_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH0_CNT_DO_CH0_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH0_CNT_DO_CH0_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH0_CNT_FILTER */
#define TOUCH_SENSOR_CH0_CNT_FILTER_CH0_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH0_CNT_FILTER_CH0_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH0_CNT_FILTER_CH0_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH1_CNT */
#define TOUCH_SENSOR_CH1_CNT_CH1_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH1_CNT_CH1_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH1_CNT_CH1_CNT_SHIFT)              /* 0x0000FFFF */
/* CH1_CNT_DC */
#define TOUCH_SENSOR_CH1_CNT_DC_CH1_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH1_CNT_DC_CH1_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH1_CNT_DC_CH1_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH1_CNT_DO */
#define TOUCH_SENSOR_CH1_CNT_DO_CH1_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH1_CNT_DO_CH1_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH1_CNT_DO_CH1_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH1_CNT_FILTER */
#define TOUCH_SENSOR_CH1_CNT_FILTER_CH1_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH1_CNT_FILTER_CH1_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH1_CNT_FILTER_CH1_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH2_CNT */
#define TOUCH_SENSOR_CH2_CNT_CH2_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH2_CNT_CH2_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH2_CNT_CH2_CNT_SHIFT)              /* 0x0000FFFF */
/* CH2_CNT_DC */
#define TOUCH_SENSOR_CH2_CNT_DC_CH2_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH2_CNT_DC_CH2_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH2_CNT_DC_CH2_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH2_CNT_DO */
#define TOUCH_SENSOR_CH2_CNT_DO_CH2_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH2_CNT_DO_CH2_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH2_CNT_DO_CH2_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH2_CNT_FILTER */
#define TOUCH_SENSOR_CH2_CNT_FILTER_CH2_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH2_CNT_FILTER_CH2_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH2_CNT_FILTER_CH2_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH3_CNT */
#define TOUCH_SENSOR_CH3_CNT_CH3_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH3_CNT_CH3_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH3_CNT_CH3_CNT_SHIFT)              /* 0x0000FFFF */
/* CH3_CNT_DC */
#define TOUCH_SENSOR_CH3_CNT_DC_CH3_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH3_CNT_DC_CH3_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH3_CNT_DC_CH3_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH3_CNT_DO */
#define TOUCH_SENSOR_CH3_CNT_DO_CH3_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH3_CNT_DO_CH3_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH3_CNT_DO_CH3_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH3_CNT_FILTER */
#define TOUCH_SENSOR_CH3_CNT_FILTER_CH3_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH3_CNT_FILTER_CH3_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH3_CNT_FILTER_CH3_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH4_CNT */
#define TOUCH_SENSOR_CH4_CNT_CH4_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH4_CNT_CH4_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH4_CNT_CH4_CNT_SHIFT)              /* 0x0000FFFF */
/* CH4_CNT_DC */
#define TOUCH_SENSOR_CH4_CNT_DC_CH4_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH4_CNT_DC_CH4_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH4_CNT_DC_CH4_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH4_CNT_DO */
#define TOUCH_SENSOR_CH4_CNT_DO_CH4_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH4_CNT_DO_CH4_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH4_CNT_DO_CH4_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH4_CNT_FILTER */
#define TOUCH_SENSOR_CH4_CNT_FILTER_CH4_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH4_CNT_FILTER_CH4_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH4_CNT_FILTER_CH4_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH5_CNT */
#define TOUCH_SENSOR_CH5_CNT_CH5_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH5_CNT_CH5_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH5_CNT_CH5_CNT_SHIFT)              /* 0x0000FFFF */
/* CH5_CNT_DC */
#define TOUCH_SENSOR_CH5_CNT_DC_CH5_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH5_CNT_DC_CH5_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH5_CNT_DC_CH5_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH5_CNT_DO */
#define TOUCH_SENSOR_CH5_CNT_DO_CH5_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH5_CNT_DO_CH5_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH5_CNT_DO_CH5_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH5_CNT_FILTER */
#define TOUCH_SENSOR_CH5_CNT_FILTER_CH5_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH5_CNT_FILTER_CH5_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH5_CNT_FILTER_CH5_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH6_CNT */
#define TOUCH_SENSOR_CH6_CNT_CH6_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH6_CNT_CH6_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH6_CNT_CH6_CNT_SHIFT)              /* 0x0000FFFF */
/* CH6_CNT_DC */
#define TOUCH_SENSOR_CH6_CNT_DC_CH6_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH6_CNT_DC_CH6_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH6_CNT_DC_CH6_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH6_CNT_DO */
#define TOUCH_SENSOR_CH6_CNT_DO_CH6_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH6_CNT_DO_CH6_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH6_CNT_DO_CH6_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH6_CNT_FILTER */
#define TOUCH_SENSOR_CH6_CNT_FILTER_CH6_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH6_CNT_FILTER_CH6_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH6_CNT_FILTER_CH6_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH7_CNT */
#define TOUCH_SENSOR_CH7_CNT_CH7_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH7_CNT_CH7_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH7_CNT_CH7_CNT_SHIFT)              /* 0x0000FFFF */
/* CH7_CNT_DC */
#define TOUCH_SENSOR_CH7_CNT_DC_CH7_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH7_CNT_DC_CH7_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH7_CNT_DC_CH7_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH7_CNT_DO */
#define TOUCH_SENSOR_CH7_CNT_DO_CH7_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH7_CNT_DO_CH7_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH7_CNT_DO_CH7_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH7_CNT_FILTER */
#define TOUCH_SENSOR_CH7_CNT_FILTER_CH7_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH7_CNT_FILTER_CH7_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH7_CNT_FILTER_CH7_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH8_CNT */
#define TOUCH_SENSOR_CH8_CNT_CH8_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH8_CNT_CH8_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH8_CNT_CH8_CNT_SHIFT)              /* 0x0000FFFF */
/* CH8_CNT_DC */
#define TOUCH_SENSOR_CH8_CNT_DC_CH8_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH8_CNT_DC_CH8_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH8_CNT_DC_CH8_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH8_CNT_DO */
#define TOUCH_SENSOR_CH8_CNT_DO_CH8_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH8_CNT_DO_CH8_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH8_CNT_DO_CH8_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH8_CNT_FILTER */
#define TOUCH_SENSOR_CH8_CNT_FILTER_CH8_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH8_CNT_FILTER_CH8_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH8_CNT_FILTER_CH8_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH9_CNT */
#define TOUCH_SENSOR_CH9_CNT_CH9_CNT_SHIFT                 (0U)
#define TOUCH_SENSOR_CH9_CNT_CH9_CNT_MASK                  (0xFFFFU << TOUCH_SENSOR_CH9_CNT_CH9_CNT_SHIFT)              /* 0x0000FFFF */
/* CH9_CNT_DC */
#define TOUCH_SENSOR_CH9_CNT_DC_CH9_CNT_DC_SHIFT           (0U)
#define TOUCH_SENSOR_CH9_CNT_DC_CH9_CNT_DC_MASK            (0xFFFFFFU << TOUCH_SENSOR_CH9_CNT_DC_CH9_CNT_DC_SHIFT)      /* 0x00FFFFFF */
/* CH9_CNT_DO */
#define TOUCH_SENSOR_CH9_CNT_DO_CH9_CNT_DO_SHIFT           (0U)
#define TOUCH_SENSOR_CH9_CNT_DO_CH9_CNT_DO_MASK            (0xFFFFU << TOUCH_SENSOR_CH9_CNT_DO_CH9_CNT_DO_SHIFT)        /* 0x0000FFFF */
/* CH9_CNT_FILTER */
#define TOUCH_SENSOR_CH9_CNT_FILTER_CH9_CNT_FILTER_SHIFT   (0U)
#define TOUCH_SENSOR_CH9_CNT_FILTER_CH9_CNT_FILTER_MASK    (0xFFFFU << TOUCH_SENSOR_CH9_CNT_FILTER_CH9_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH10_CNT */
#define TOUCH_SENSOR_CH10_CNT_CH10_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH10_CNT_CH10_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH10_CNT_CH10_CNT_SHIFT)            /* 0x0000FFFF */
/* CH10_CNT_DC */
#define TOUCH_SENSOR_CH10_CNT_DC_CH10_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH10_CNT_DC_CH10_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH10_CNT_DC_CH10_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH10_CNT_DO */
#define TOUCH_SENSOR_CH10_CNT_DO_CH10_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH10_CNT_DO_CH10_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH10_CNT_DO_CH10_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH10_CNT_FILTER */
#define TOUCH_SENSOR_CH10_CNT_FILTER_CH10_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH10_CNT_FILTER_CH10_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH10_CNT_FILTER_CH10_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH11_CNT */
#define TOUCH_SENSOR_CH11_CNT_CH11_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH11_CNT_CH11_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH11_CNT_CH11_CNT_SHIFT)            /* 0x0000FFFF */
/* CH11_CNT_DC */
#define TOUCH_SENSOR_CH11_CNT_DC_CH11_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH11_CNT_DC_CH11_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH11_CNT_DC_CH11_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH11_CNT_DO */
#define TOUCH_SENSOR_CH11_CNT_DO_CH11_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH11_CNT_DO_CH11_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH11_CNT_DO_CH11_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH11_CNT_FILTER */
#define TOUCH_SENSOR_CH11_CNT_FILTER_CH11_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH11_CNT_FILTER_CH11_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH11_CNT_FILTER_CH11_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH12_CNT */
#define TOUCH_SENSOR_CH12_CNT_CH12_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH12_CNT_CH12_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH12_CNT_CH12_CNT_SHIFT)            /* 0x0000FFFF */
/* CH12_CNT_DC */
#define TOUCH_SENSOR_CH12_CNT_DC_CH12_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH12_CNT_DC_CH12_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH12_CNT_DC_CH12_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH12_CNT_DO */
#define TOUCH_SENSOR_CH12_CNT_DO_CH12_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH12_CNT_DO_CH12_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH12_CNT_DO_CH12_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH12_CNT_FILTER */
#define TOUCH_SENSOR_CH12_CNT_FILTER_CH12_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH12_CNT_FILTER_CH12_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH12_CNT_FILTER_CH12_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH13_CNT */
#define TOUCH_SENSOR_CH13_CNT_CH13_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH13_CNT_CH13_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH13_CNT_CH13_CNT_SHIFT)            /* 0x0000FFFF */
/* CH13_CNT_DC */
#define TOUCH_SENSOR_CH13_CNT_DC_CH13_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH13_CNT_DC_CH13_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH13_CNT_DC_CH13_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH13_CNT_DO */
#define TOUCH_SENSOR_CH13_CNT_DO_CH13_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH13_CNT_DO_CH13_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH13_CNT_DO_CH13_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH13_CNT_FILTER */
#define TOUCH_SENSOR_CH13_CNT_FILTER_CH13_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH13_CNT_FILTER_CH13_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH13_CNT_FILTER_CH13_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH14_CNT */
#define TOUCH_SENSOR_CH14_CNT_CH14_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH14_CNT_CH14_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH14_CNT_CH14_CNT_SHIFT)            /* 0x0000FFFF */
/* CH14_CNT_DC */
#define TOUCH_SENSOR_CH14_CNT_DC_CH14_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH14_CNT_DC_CH14_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH14_CNT_DC_CH14_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH14_CNT_DO */
#define TOUCH_SENSOR_CH14_CNT_DO_CH14_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH14_CNT_DO_CH14_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH14_CNT_DO_CH14_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH14_CNT_FILTER */
#define TOUCH_SENSOR_CH14_CNT_FILTER_CH14_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH14_CNT_FILTER_CH14_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH14_CNT_FILTER_CH14_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH15_CNT */
#define TOUCH_SENSOR_CH15_CNT_CH15_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH15_CNT_CH15_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH15_CNT_CH15_CNT_SHIFT)            /* 0x0000FFFF */
/* CH15_CNT_DC */
#define TOUCH_SENSOR_CH15_CNT_DC_CH15_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH15_CNT_DC_CH15_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH15_CNT_DC_CH15_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH15_CNT_DO */
#define TOUCH_SENSOR_CH15_CNT_DO_CH15_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH15_CNT_DO_CH15_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH15_CNT_DO_CH15_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH15_CNT_FILTER */
#define TOUCH_SENSOR_CH15_CNT_FILTER_CH15_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH15_CNT_FILTER_CH15_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH15_CNT_FILTER_CH15_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH16_CNT */
#define TOUCH_SENSOR_CH16_CNT_CH16_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH16_CNT_CH16_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH16_CNT_CH16_CNT_SHIFT)            /* 0x0000FFFF */
/* CH16_CNT_DC */
#define TOUCH_SENSOR_CH16_CNT_DC_CH16_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH16_CNT_DC_CH16_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH16_CNT_DC_CH16_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH16_CNT_DO */
#define TOUCH_SENSOR_CH16_CNT_DO_CH16_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH16_CNT_DO_CH16_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH16_CNT_DO_CH16_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH16_CNT_FILTER */
#define TOUCH_SENSOR_CH16_CNT_FILTER_CH16_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH16_CNT_FILTER_CH16_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH16_CNT_FILTER_CH16_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH17_CNT */
#define TOUCH_SENSOR_CH17_CNT_CH17_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH17_CNT_CH17_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH17_CNT_CH17_CNT_SHIFT)            /* 0x0000FFFF */
/* CH17_CNT_DC */
#define TOUCH_SENSOR_CH17_CNT_DC_CH17_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH17_CNT_DC_CH17_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH17_CNT_DC_CH17_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH17_CNT_DO */
#define TOUCH_SENSOR_CH17_CNT_DO_CH17_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH17_CNT_DO_CH17_CNT_DO_MASK          (0xFFFFU << TOUCH_SENSOR_CH17_CNT_DO_CH17_CNT_DO_SHIFT)      /* 0x0000FFFF */
/* CH17_CNT_FILTER */
#define TOUCH_SENSOR_CH17_CNT_FILTER_CH17_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH17_CNT_FILTER_CH17_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH17_CNT_FILTER_CH17_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH18_CNT */
#define TOUCH_SENSOR_CH18_CNT_CH18_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH18_CNT_CH18_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH18_CNT_CH18_CNT_SHIFT)            /* 0x0000FFFF */
/* CH18_CNT_DC */
#define TOUCH_SENSOR_CH18_CNT_DC_CH18_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH18_CNT_DC_CH18_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH18_CNT_DC_CH18_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH18_CNT_DO */
#define TOUCH_SENSOR_CH18_CNT_DO_CH18_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH18_CNT_DO_CH18_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH18_CNT_DO_CH18_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH18_CNT_FILTER */
#define TOUCH_SENSOR_CH18_CNT_FILTER_CH18_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH18_CNT_FILTER_CH18_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH18_CNT_FILTER_CH18_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/* CH19_CNT */
#define TOUCH_SENSOR_CH19_CNT_CH19_CNT_SHIFT               (0U)
#define TOUCH_SENSOR_CH19_CNT_CH19_CNT_MASK                (0xFFFFU << TOUCH_SENSOR_CH19_CNT_CH19_CNT_SHIFT)            /* 0x0000FFFF */
/* CH19_CNT_DC */
#define TOUCH_SENSOR_CH19_CNT_DC_CH19_CNT_DC_SHIFT         (0U)
#define TOUCH_SENSOR_CH19_CNT_DC_CH19_CNT_DC_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH19_CNT_DC_CH19_CNT_DC_SHIFT)    /* 0x00FFFFFF */
/* CH19_CNT_DO */
#define TOUCH_SENSOR_CH19_CNT_DO_CH19_CNT_DO_SHIFT         (0U)
#define TOUCH_SENSOR_CH19_CNT_DO_CH19_CNT_DO_MASK          (0xFFFFFFU << TOUCH_SENSOR_CH19_CNT_DO_CH19_CNT_DO_SHIFT)    /* 0x00FFFFFF */
/* CH19_CNT_FILTER */
#define TOUCH_SENSOR_CH19_CNT_FILTER_CH19_CNT_FILTER_SHIFT (0U)
#define TOUCH_SENSOR_CH19_CNT_FILTER_CH19_CNT_FILTER_MASK  (0xFFFFU << TOUCH_SENSOR_CH19_CNT_FILTER_CH19_CNT_FILTER_SHIFT) /* 0x0000FFFF */
/**************************************I2S_TDM_8CH***************************************/
/* TXCR */
#define I2S_TDM_8CH_TXCR_VDW_SHIFT                         (0U)
#define I2S_TDM_8CH_TXCR_VDW_MASK                          (0x1FU << I2S_TDM_8CH_TXCR_VDW_SHIFT)                        /* 0x0000001F */
#define I2S_TDM_8CH_TXCR_TFS_SHIFT                         (5U)
#define I2S_TDM_8CH_TXCR_TFS_MASK                          (0x3U << I2S_TDM_8CH_TXCR_TFS_SHIFT)                         /* 0x00000060 */
#define I2S_TDM_8CH_TXCR_PBM_SHIFT                         (7U)
#define I2S_TDM_8CH_TXCR_PBM_MASK                          (0x3U << I2S_TDM_8CH_TXCR_PBM_SHIFT)                         /* 0x00000180 */
#define I2S_TDM_8CH_TXCR_IBM_SHIFT                         (9U)
#define I2S_TDM_8CH_TXCR_IBM_MASK                          (0x3U << I2S_TDM_8CH_TXCR_IBM_SHIFT)                         /* 0x00000600 */
#define I2S_TDM_8CH_TXCR_FBM_SHIFT                         (11U)
#define I2S_TDM_8CH_TXCR_FBM_MASK                          (0x1U << I2S_TDM_8CH_TXCR_FBM_SHIFT)                         /* 0x00000800 */
#define I2S_TDM_8CH_TXCR_SJM_SHIFT                         (12U)
#define I2S_TDM_8CH_TXCR_SJM_MASK                          (0x1U << I2S_TDM_8CH_TXCR_SJM_SHIFT)                         /* 0x00001000 */
#define I2S_TDM_8CH_TXCR_HWT_SHIFT                         (14U)
#define I2S_TDM_8CH_TXCR_HWT_MASK                          (0x1U << I2S_TDM_8CH_TXCR_HWT_SHIFT)                         /* 0x00004000 */
#define I2S_TDM_8CH_TXCR_TCSR_SHIFT                        (15U)
#define I2S_TDM_8CH_TXCR_TCSR_MASK                         (0x3U << I2S_TDM_8CH_TXCR_TCSR_SHIFT)                        /* 0x00018000 */
#define I2S_TDM_8CH_TXCR_RCNT_SHIFT                        (17U)
#define I2S_TDM_8CH_TXCR_RCNT_MASK                         (0x3FU << I2S_TDM_8CH_TXCR_RCNT_SHIFT)                       /* 0x007E0000 */
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT0_SHIFT             (23U)
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT0_MASK              (0x3U << I2S_TDM_8CH_TXCR_TX_PATH_SELECT0_SHIFT)             /* 0x01800000 */
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT1_SHIFT             (25U)
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT1_MASK              (0x3U << I2S_TDM_8CH_TXCR_TX_PATH_SELECT1_SHIFT)             /* 0x06000000 */
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT2_SHIFT             (27U)
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT2_MASK              (0x3U << I2S_TDM_8CH_TXCR_TX_PATH_SELECT2_SHIFT)             /* 0x18000000 */
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT3_SHIFT             (29U)
#define I2S_TDM_8CH_TXCR_TX_PATH_SELECT3_MASK              (0x3U << I2S_TDM_8CH_TXCR_TX_PATH_SELECT3_SHIFT)             /* 0x60000000 */
/* RXCR */
#define I2S_TDM_8CH_RXCR_VDW_SHIFT                         (0U)
#define I2S_TDM_8CH_RXCR_VDW_MASK                          (0x1FU << I2S_TDM_8CH_RXCR_VDW_SHIFT)                        /* 0x0000001F */
#define I2S_TDM_8CH_RXCR_TFS_SHIFT                         (5U)
#define I2S_TDM_8CH_RXCR_TFS_MASK                          (0x3U << I2S_TDM_8CH_RXCR_TFS_SHIFT)                         /* 0x00000060 */
#define I2S_TDM_8CH_RXCR_PBM_SHIFT                         (7U)
#define I2S_TDM_8CH_RXCR_PBM_MASK                          (0x3U << I2S_TDM_8CH_RXCR_PBM_SHIFT)                         /* 0x00000180 */
#define I2S_TDM_8CH_RXCR_IBM_SHIFT                         (9U)
#define I2S_TDM_8CH_RXCR_IBM_MASK                          (0x3U << I2S_TDM_8CH_RXCR_IBM_SHIFT)                         /* 0x00000600 */
#define I2S_TDM_8CH_RXCR_FBM_SHIFT                         (11U)
#define I2S_TDM_8CH_RXCR_FBM_MASK                          (0x1U << I2S_TDM_8CH_RXCR_FBM_SHIFT)                         /* 0x00000800 */
#define I2S_TDM_8CH_RXCR_SJM_SHIFT                         (12U)
#define I2S_TDM_8CH_RXCR_SJM_MASK                          (0x1U << I2S_TDM_8CH_RXCR_SJM_SHIFT)                         /* 0x00001000 */
#define I2S_TDM_8CH_RXCR_HWT_SHIFT                         (14U)
#define I2S_TDM_8CH_RXCR_HWT_MASK                          (0x1U << I2S_TDM_8CH_RXCR_HWT_SHIFT)                         /* 0x00004000 */
#define I2S_TDM_8CH_RXCR_RCSR_SHIFT                        (15U)
#define I2S_TDM_8CH_RXCR_RCSR_MASK                         (0x3U << I2S_TDM_8CH_RXCR_RCSR_SHIFT)                        /* 0x00018000 */
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT0_SHIFT             (17U)
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT0_MASK              (0x3U << I2S_TDM_8CH_RXCR_RX_PATH_SELECT0_SHIFT)             /* 0x00060000 */
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT1_SHIFT             (19U)
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT1_MASK              (0x3U << I2S_TDM_8CH_RXCR_RX_PATH_SELECT1_SHIFT)             /* 0x00180000 */
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT2_SHIFT             (21U)
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT2_MASK              (0x3U << I2S_TDM_8CH_RXCR_RX_PATH_SELECT2_SHIFT)             /* 0x00600000 */
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT3_SHIFT             (23U)
#define I2S_TDM_8CH_RXCR_RX_PATH_SELECT3_MASK              (0x3U << I2S_TDM_8CH_RXCR_RX_PATH_SELECT3_SHIFT)             /* 0x01800000 */
/* CKR */
#define I2S_TDM_8CH_CKR_TSD_SHIFT                          (0U)
#define I2S_TDM_8CH_CKR_TSD_MASK                           (0xFFU << I2S_TDM_8CH_CKR_TSD_SHIFT)                         /* 0x000000FF */
#define I2S_TDM_8CH_CKR_RSD_SHIFT                          (8U)
#define I2S_TDM_8CH_CKR_RSD_MASK                           (0xFFU << I2S_TDM_8CH_CKR_RSD_SHIFT)                         /* 0x0000FF00 */
#define I2S_TDM_8CH_CKR_TLP_SHIFT                          (24U)
#define I2S_TDM_8CH_CKR_TLP_MASK                           (0x1U << I2S_TDM_8CH_CKR_TLP_SHIFT)                          /* 0x01000000 */
#define I2S_TDM_8CH_CKR_RLP_SHIFT                          (25U)
#define I2S_TDM_8CH_CKR_RLP_MASK                           (0x1U << I2S_TDM_8CH_CKR_RLP_SHIFT)                          /* 0x02000000 */
#define I2S_TDM_8CH_CKR_CKP_SHIFT                          (26U)
#define I2S_TDM_8CH_CKR_CKP_MASK                           (0x1U << I2S_TDM_8CH_CKR_CKP_SHIFT)                          /* 0x04000000 */
#define I2S_TDM_8CH_CKR_MSS_SHIFT                          (27U)
#define I2S_TDM_8CH_CKR_MSS_MASK                           (0x1U << I2S_TDM_8CH_CKR_MSS_SHIFT)                          /* 0x08000000 */
#define I2S_TDM_8CH_CKR_LRCK_COMMON_SHIFT                  (28U)
#define I2S_TDM_8CH_CKR_LRCK_COMMON_MASK                   (0x3U << I2S_TDM_8CH_CKR_LRCK_COMMON_SHIFT)                  /* 0x30000000 */
/* TXFIFOLR */
#define I2S_TDM_8CH_TXFIFOLR_TFL0_SHIFT                    (0U)
#define I2S_TDM_8CH_TXFIFOLR_TFL0_MASK                     (0x3FU << I2S_TDM_8CH_TXFIFOLR_TFL0_SHIFT)                   /* 0x0000003F */
#define I2S_TDM_8CH_TXFIFOLR_TFL1_SHIFT                    (6U)
#define I2S_TDM_8CH_TXFIFOLR_TFL1_MASK                     (0x3FU << I2S_TDM_8CH_TXFIFOLR_TFL1_SHIFT)                   /* 0x00000FC0 */
#define I2S_TDM_8CH_TXFIFOLR_TFL2_SHIFT                    (12U)
#define I2S_TDM_8CH_TXFIFOLR_TFL2_MASK                     (0x3FU << I2S_TDM_8CH_TXFIFOLR_TFL2_SHIFT)                   /* 0x0003F000 */
#define I2S_TDM_8CH_TXFIFOLR_TFL3_SHIFT                    (18U)
#define I2S_TDM_8CH_TXFIFOLR_TFL3_MASK                     (0x3FU << I2S_TDM_8CH_TXFIFOLR_TFL3_SHIFT)                   /* 0x00FC0000 */
/* DMACR */
#define I2S_TDM_8CH_DMACR_TDL_SHIFT                        (0U)
#define I2S_TDM_8CH_DMACR_TDL_MASK                         (0x1FU << I2S_TDM_8CH_DMACR_TDL_SHIFT)                       /* 0x0000001F */
#define I2S_TDM_8CH_DMACR_TDE_SHIFT                        (8U)
#define I2S_TDM_8CH_DMACR_TDE_MASK                         (0x1U << I2S_TDM_8CH_DMACR_TDE_SHIFT)                        /* 0x00000100 */
#define I2S_TDM_8CH_DMACR_RDL_SHIFT                        (16U)
#define I2S_TDM_8CH_DMACR_RDL_MASK                         (0x1FU << I2S_TDM_8CH_DMACR_RDL_SHIFT)                       /* 0x001F0000 */
#define I2S_TDM_8CH_DMACR_RDE_SHIFT                        (24U)
#define I2S_TDM_8CH_DMACR_RDE_MASK                         (0x1U << I2S_TDM_8CH_DMACR_RDE_SHIFT)                        /* 0x01000000 */
/* INTCR */
#define I2S_TDM_8CH_INTCR_TXEIE_SHIFT                      (0U)
#define I2S_TDM_8CH_INTCR_TXEIE_MASK                       (0x1U << I2S_TDM_8CH_INTCR_TXEIE_SHIFT)                      /* 0x00000001 */
#define I2S_TDM_8CH_INTCR_TXUIE_SHIFT                      (1U)
#define I2S_TDM_8CH_INTCR_TXUIE_MASK                       (0x1U << I2S_TDM_8CH_INTCR_TXUIE_SHIFT)                      /* 0x00000002 */
#define I2S_TDM_8CH_INTCR_TXUIC_SHIFT                      (2U)
#define I2S_TDM_8CH_INTCR_TXUIC_MASK                       (0x1U << I2S_TDM_8CH_INTCR_TXUIC_SHIFT)                      /* 0x00000004 */
#define I2S_TDM_8CH_INTCR_TFT_SHIFT                        (4U)
#define I2S_TDM_8CH_INTCR_TFT_MASK                         (0x1FU << I2S_TDM_8CH_INTCR_TFT_SHIFT)                       /* 0x000001F0 */
#define I2S_TDM_8CH_INTCR_RXFIE_SHIFT                      (16U)
#define I2S_TDM_8CH_INTCR_RXFIE_MASK                       (0x1U << I2S_TDM_8CH_INTCR_RXFIE_SHIFT)                      /* 0x00010000 */
#define I2S_TDM_8CH_INTCR_RXOIE_SHIFT                      (17U)
#define I2S_TDM_8CH_INTCR_RXOIE_MASK                       (0x1U << I2S_TDM_8CH_INTCR_RXOIE_SHIFT)                      /* 0x00020000 */
#define I2S_TDM_8CH_INTCR_RXOIC_SHIFT                      (18U)
#define I2S_TDM_8CH_INTCR_RXOIC_MASK                       (0x1U << I2S_TDM_8CH_INTCR_RXOIC_SHIFT)                      /* 0x00040000 */
#define I2S_TDM_8CH_INTCR_RFT_SHIFT                        (20U)
#define I2S_TDM_8CH_INTCR_RFT_MASK                         (0x1FU << I2S_TDM_8CH_INTCR_RFT_SHIFT)                       /* 0x01F00000 */
/* INTSR */
#define I2S_TDM_8CH_INTSR_TXEI_SHIFT                       (0U)
#define I2S_TDM_8CH_INTSR_TXEI_MASK                        (0x1U << I2S_TDM_8CH_INTSR_TXEI_SHIFT)                       /* 0x00000001 */
#define I2S_TDM_8CH_INTSR_TXUI_SHIFT                       (1U)
#define I2S_TDM_8CH_INTSR_TXUI_MASK                        (0x1U << I2S_TDM_8CH_INTSR_TXUI_SHIFT)                       /* 0x00000002 */
#define I2S_TDM_8CH_INTSR_RXFI_SHIFT                       (16U)
#define I2S_TDM_8CH_INTSR_RXFI_MASK                        (0x1U << I2S_TDM_8CH_INTSR_RXFI_SHIFT)                       /* 0x00010000 */
#define I2S_TDM_8CH_INTSR_RXOI_SHIFT                       (17U)
#define I2S_TDM_8CH_INTSR_RXOI_MASK                        (0x1U << I2S_TDM_8CH_INTSR_RXOI_SHIFT)                       /* 0x00020000 */
/* XFER */
#define I2S_TDM_8CH_XFER_TXS_SHIFT                         (0U)
#define I2S_TDM_8CH_XFER_TXS_MASK                          (0x1U << I2S_TDM_8CH_XFER_TXS_SHIFT)                         /* 0x00000001 */
#define I2S_TDM_8CH_XFER_RXS_SHIFT                         (1U)
#define I2S_TDM_8CH_XFER_RXS_MASK                          (0x1U << I2S_TDM_8CH_XFER_RXS_SHIFT)                         /* 0x00000002 */
/* CLR */
#define I2S_TDM_8CH_CLR_TXC_SHIFT                          (0U)
#define I2S_TDM_8CH_CLR_TXC_MASK                           (0x1U << I2S_TDM_8CH_CLR_TXC_SHIFT)                          /* 0x00000001 */
#define I2S_TDM_8CH_CLR_RXC_SHIFT                          (1U)
#define I2S_TDM_8CH_CLR_RXC_MASK                           (0x1U << I2S_TDM_8CH_CLR_RXC_SHIFT)                          /* 0x00000002 */
/* TXDR */
#define I2S_TDM_8CH_TXDR_TXDR_SHIFT                        (0U)
#define I2S_TDM_8CH_TXDR_TXDR_MASK                         (0xFFFFFFFFU << I2S_TDM_8CH_TXDR_TXDR_SHIFT)                 /* 0xFFFFFFFF */
/* RXDR */
#define I2S_TDM_8CH_RXDR_RXDR_SHIFT                        (0U)
#define I2S_TDM_8CH_RXDR_RXDR_MASK                         (0xFFFFFFFFU << I2S_TDM_8CH_RXDR_RXDR_SHIFT)                 /* 0xFFFFFFFF */
/* RXFIFOLR */
#define I2S_TDM_8CH_RXFIFOLR_RFL0_SHIFT                    (0U)
#define I2S_TDM_8CH_RXFIFOLR_RFL0_MASK                     (0x3FU << I2S_TDM_8CH_RXFIFOLR_RFL0_SHIFT)                   /* 0x0000003F */
#define I2S_TDM_8CH_RXFIFOLR_RFL1_SHIFT                    (6U)
#define I2S_TDM_8CH_RXFIFOLR_RFL1_MASK                     (0x3FU << I2S_TDM_8CH_RXFIFOLR_RFL1_SHIFT)                   /* 0x00000FC0 */
#define I2S_TDM_8CH_RXFIFOLR_RFL2_SHIFT                    (12U)
#define I2S_TDM_8CH_RXFIFOLR_RFL2_MASK                     (0x3FU << I2S_TDM_8CH_RXFIFOLR_RFL2_SHIFT)                   /* 0x0003F000 */
#define I2S_TDM_8CH_RXFIFOLR_RFL3_SHIFT                    (18U)
#define I2S_TDM_8CH_RXFIFOLR_RFL3_MASK                     (0x3FU << I2S_TDM_8CH_RXFIFOLR_RFL3_SHIFT)                   /* 0x00FC0000 */
/* TDM_TXCTRL */
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_SHIFT    (0U)
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_MASK     (0x1FFU << I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_SHIFT)  /* 0x000001FF */
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_SHIFT (9U)
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_MASK  (0x1FU << I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_SHIFT) /* 0x00003E00 */
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_SHIFT     (14U)
#define I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_MASK      (0x7U << I2S_TDM_8CH_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_SHIFT)     /* 0x0001C000 */
#define I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_SHIFT (17U)
#define I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_MASK (0x1U << I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_SHIFT) /* 0x00020000 */
#define I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_SHIFT (18U)
#define I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_MASK (0x7U << I2S_TDM_8CH_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_SHIFT) /* 0x001C0000 */
/* TDM_RXCTRL */
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_SHIFT    (0U)
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_MASK     (0x1FFU << I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_SHIFT)  /* 0x000001FF */
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_SHIFT (9U)
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_MASK  (0x1FU << I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_SHIFT) /* 0x00003E00 */
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_SHIFT     (14U)
#define I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_MASK      (0x7U << I2S_TDM_8CH_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_SHIFT)     /* 0x0001C000 */
#define I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_SHIFT (17U)
#define I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_MASK (0x1U << I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_SHIFT) /* 0x00020000 */
#define I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_SHIFT (18U)
#define I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_MASK (0x7U << I2S_TDM_8CH_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_SHIFT) /* 0x001C0000 */
/* CLKDIV */
#define I2S_TDM_8CH_CLKDIV_TX_MDIV_SHIFT                   (0U)
#define I2S_TDM_8CH_CLKDIV_TX_MDIV_MASK                    (0xFFU << I2S_TDM_8CH_CLKDIV_TX_MDIV_SHIFT)                  /* 0x000000FF */
#define I2S_TDM_8CH_CLKDIV_RX_MDIV_SHIFT                   (8U)
#define I2S_TDM_8CH_CLKDIV_RX_MDIV_MASK                    (0xFFU << I2S_TDM_8CH_CLKDIV_RX_MDIV_SHIFT)                  /* 0x0000FF00 */
/* VERSION */
#define I2S_TDM_8CH_VERSION_I2S_VERSION_SHIFT              (0U)
#define I2S_TDM_8CH_VERSION_I2S_VERSION_MASK               (0xFFFFFFFFU << I2S_TDM_8CH_VERSION_I2S_VERSION_SHIFT)       /* 0xFFFFFFFF */
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
#define VAD_CONTROL_VAD_MODE_SHIFT                         (20U)
#define VAD_CONTROL_VAD_MODE_MASK                          (0x3U << VAD_CONTROL_VAD_MODE_SHIFT)                         /* 0x00300000 */
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
#define VAD_RAM_START_ADDR_RAM_START_ADDR_SHIFT            (0U)
#define VAD_RAM_START_ADDR_RAM_START_ADDR_MASK             (0xFFFFFFFFU << VAD_RAM_START_ADDR_RAM_START_ADDR_SHIFT)     /* 0xFFFFFFFF */
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
#define VAD_INT_RAMP_LOOP_FLAG_BUS_SHIFT                   (12U)
#define VAD_INT_RAMP_LOOP_FLAG_BUS_MASK                    (0x1U << VAD_INT_RAMP_LOOP_FLAG_BUS_SHIFT)                   /* 0x00001000 */
/* AUX_CON0 */
#define VAD_AUX_CON0_BUS_WRITE_EN_SHIFT                    (0U)
#define VAD_AUX_CON0_BUS_WRITE_EN_MASK                     (0x1U << VAD_AUX_CON0_BUS_WRITE_EN_SHIFT)                    /* 0x00000001 */
#define VAD_AUX_CON0_DIS_RAM_ITF_SHIFT                     (1U)
#define VAD_AUX_CON0_DIS_RAM_ITF_MASK                      (0x1U << VAD_AUX_CON0_DIS_RAM_ITF_SHIFT)                     /* 0x00000002 */
#define VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_SHIFT          (2U)
#define VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_MASK           (0x1U << VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_SHIFT)          /* 0x00000004 */
#define VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_SHIFT            (4U)
#define VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_MASK             (0xFFU << VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_SHIFT)           /* 0x00000FF0 */
#define VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_SHIFT             (12U)
#define VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_MASK              (0x1U << VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_SHIFT)             /* 0x00001000 */
#define VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_SHIFT      (13U)
#define VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_MASK       (0x1U << VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_SHIFT)      /* 0x00002000 */
#define VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_SHIFT      (14U)
#define VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_MASK       (0x1U << VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_SHIFT)      /* 0x00004000 */
#define VAD_AUX_CON0_INT_TRIG_VALID_THD_SHIFT              (16U)
#define VAD_AUX_CON0_INT_TRIG_VALID_THD_MASK               (0xFFFU << VAD_AUX_CON0_INT_TRIG_VALID_THD_SHIFT)            /* 0x0FFF0000 */
#define VAD_AUX_CON0_INT_TRIG_CTRL_EN_SHIFT                (28U)
#define VAD_AUX_CON0_INT_TRIG_CTRL_EN_MASK                 (0x1U << VAD_AUX_CON0_INT_TRIG_CTRL_EN_SHIFT)                /* 0x10000000 */
#define VAD_AUX_CON0_SAMPLE_CNT_EN_SHIFT                   (29U)
#define VAD_AUX_CON0_SAMPLE_CNT_EN_MASK                    (0x1U << VAD_AUX_CON0_SAMPLE_CNT_EN_SHIFT)                   /* 0x20000000 */
/* SAMPLE_CNT */
#define VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT                    (0U)
#define VAD_SAMPLE_CNT_SAMPLE_CNT_MASK                     (0xFFFFFFFFU << VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT)             /* 0xFFFFFFFF */
/* RAM_START_ADDR_BUS */
#define VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_SHIFT    (0U)
#define VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_MASK     (0xFFFFFFFFU << VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* RAM_END_ADDR_BUS */
#define VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_SHIFT      (0U)
#define VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_MASK       (0xFFFFFFFFU << VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* RAM_CUR_ADDR_BUS */
#define VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_SHIFT        (0U)
#define VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_MASK         (0xFFFFFFFFU << VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* AUX_CON1 */
#define VAD_AUX_CON1_DATA_TRANS_WORD_THD_SHIFT             (0U)
#define VAD_AUX_CON1_DATA_TRANS_WORD_THD_MASK              (0xFFFFU << VAD_AUX_CON1_DATA_TRANS_WORD_THD_SHIFT)          /* 0x0000FFFF */
#define VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_SHIFT         (16U)
#define VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_MASK          (0x1U << VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_SHIFT)         /* 0x00010000 */
/* NOISE_FIRST_DATA */
#define VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_SHIFT        (0U)
#define VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_MASK         (0xFFFFU << VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_SHIFT)     /* 0x0000FFFF */
/* NOISE_LAST_DATA */
#define VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_SHIFT          (0U)
#define VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_MASK           (0xFFFFU << VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_SHIFT)       /* 0x0000FFFF */
/***************************************LPW_SYSBUS***************************************/
/* MIPS_MCU_CONTROL */
#define LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_PULSE_SOFT_RESET_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_PULSE_SOFT_RESET_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_PULSE_SOFT_RESET_SHIFT) /* 0x00000001 */
#define LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_LATCH_SOFT_RESET_SHIFT (1U)
#define LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_LATCH_SOFT_RESET_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_CONTROL_MIPS_MCU_LATCH_SOFT_RESET_SHIFT) /* 0x00000002 */
/* MIPS_MCU_SYS_CORE_MEM_CTRL */
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_ADDR_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_ADDR_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_ADDR_SHIFT) /* 0x00000001 */
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_REGION_SHIFT (30U)
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_REGION_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_REGION_SHIFT) /* 0x40000000 */
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_RDNWR_SHIFT (31U)
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_RDNWR_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_CTRL_MIPS_MCU_CORE_MEM_RDNWR_SHIFT) /* 0x80000000 */
/* MIPS_MCU_SYS_CORE_MEM_WDATA */
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_WDATA_MIPS_MCU_CORE_MEM_WDATA_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_WDATA_MIPS_MCU_CORE_MEM_WDATA_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_WDATA_MIPS_MCU_CORE_MEM_WDATA_SHIFT) /* 0x00000001 */
/* MIPS_MCU_SYS_CORE_MEM_RDATA */
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_RDATA_MIPS_MCU_CORE_MEM_RDATA_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_RDATA_MIPS_MCU_CORE_MEM_RDATA_MASK (0x1U << LPW_SYSBUS_MIPS_MCU_SYS_CORE_MEM_RDATA_MIPS_MCU_CORE_MEM_RDATA_SHIFT) /* 0x00000001 */
/* MIPS_MCU_BOOT_EXCP_INSTR_0 */
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_0_MCU_BOOT_EXCP_INSTR_0_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_0_MCU_BOOT_EXCP_INSTR_0_MASK (0xFFFFFFFFU << LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_0_MCU_BOOT_EXCP_INSTR_0_SHIFT) /* 0xFFFFFFFF */
/* MIPS_MCU_BOOT_EXCP_INSTR_1 */
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_1_MIPS_MCU_BOOT_EXCP_INSTR_1_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_1_MIPS_MCU_BOOT_EXCP_INSTR_1_MASK (0xFFFFFFFFU << LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_1_MIPS_MCU_BOOT_EXCP_INSTR_1_SHIFT) /* 0xFFFFFFFF */
/* MIPS_MCU_BOOT_EXCP_INSTR_2 */
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_2_MCU_BOOT_EXCP_INSTR_2_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_2_MCU_BOOT_EXCP_INSTR_2_MASK (0xFFFFFFFFU << LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_2_MCU_BOOT_EXCP_INSTR_2_SHIFT) /* 0xFFFFFFFF */
/* MIPS_MCU_BOOT_EXCP_INSTR_3 */
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_3_MCU_BOOT_EXCP_INSTR_3_SHIFT (0U)
#define LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_3_MCU_BOOT_EXCP_INSTR_3_MASK (0xFFFFFFFFU << LPW_SYSBUS_MIPS_MCU_BOOT_EXCP_INSTR_3_MCU_BOOT_EXCP_INSTR_3_SHIFT) /* 0xFFFFFFFF */
/* UCCP_CORE_HOST_TO_MTX_CMD */
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_DATA_SHIFT (0U)
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_DATA_MASK (0x7FFFFFFFU << LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_DATA_SHIFT) /* 0x7FFFFFFF */
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_INT_SHIFT (31U)
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_INT_MASK (0x1U << LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_CMD_HOST_INT_SHIFT) /* 0x80000000 */
/* UCCP_CORE_MTX_TO_HOST_CMD */
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_DATA_SHIFT (0U)
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_DATA_MASK (0x7FFFFFFFU << LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_DATA_SHIFT) /* 0x7FFFFFFF */
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_INT_SHIFT (31U)
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_INT_MASK  (0x1U << LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_CMD_MTX_INT_SHIFT) /* 0x80000000 */
/* UCCP_CORE_HOST_TO_MTX_ACK */
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_ACK_MTX_INT_CLR_SHIFT (31U)
#define LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_ACK_MTX_INT_CLR_MASK (0x1U << LPW_SYSBUS_UCCP_CORE_HOST_TO_MTX_ACK_MTX_INT_CLR_SHIFT) /* 0x80000000 */
/* UCCP_CORE_MTX_TO_HOST_ACK */
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_ACK_HOST_INT_CLR_SHIFT (31U)
#define LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_ACK_HOST_INT_CLR_MASK (0x1U << LPW_SYSBUS_UCCP_CORE_MTX_TO_HOST_ACK_HOST_INT_CLR_SHIFT) /* 0x80000000 */
/* UCCP_CORE_HOST_INT_ENABLE */
#define LPW_SYSBUS_UCCP_CORE_HOST_INT_ENABLE_HOST_INT_EN_SHIFT (31U)
#define LPW_SYSBUS_UCCP_CORE_HOST_INT_ENABLE_HOST_INT_EN_MASK (0x1U << LPW_SYSBUS_UCCP_CORE_HOST_INT_ENABLE_HOST_INT_EN_SHIFT) /* 0x80000000 */
/* UCCP_CORE_MTX_INT_ENABLE */
#define LPW_SYSBUS_UCCP_CORE_MTX_INT_ENABLE_MTX_INT_EN_SHIFT (0U)
#define LPW_SYSBUS_UCCP_CORE_MTX_INT_ENABLE_MTX_INT_EN_MASK (0x1U << LPW_SYSBUS_UCCP_CORE_MTX_INT_ENABLE_MTX_INT_EN_SHIFT) /* 0x00000001 */
/* UCCP_SOC_FAB_STATUS */
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_MEMOPT_IDLE_SHIFT (2U)
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_MEMOPT_IDLE_MASK (0x1U << LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_MEMOPT_IDLE_SHIFT) /* 0x00000004 */
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_REQ_IDLE_SHIFT (4U)
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_REQ_IDLE_MASK (0x1U << LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_REQ_IDLE_SHIFT) /* 0x00000010 */
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_MEM_IDLE_SHIFT (5U)
#define LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_MEM_IDLE_MASK (0x1U << LPW_SYSBUS_UCCP_SOC_FAB_STATUS_CR_EXTOPT_MEM_IDLE_SHIFT) /* 0x00000020 */
/* UCC_SLEEP_CTRL_DATA_0 */
#define LPW_SYSBUS_UCC_SLEEP_CTRL_DATA_0_DATA_0_SHIFT      (0U)
#define LPW_SYSBUS_UCC_SLEEP_CTRL_DATA_0_DATA_0_MASK       (0xFFFFFU << LPW_SYSBUS_UCC_SLEEP_CTRL_DATA_0_DATA_0_SHIFT)  /* 0x000FFFFF */
/* UCC_SLEEP_CTRL_MCU_BOOT_ADDR_MS */
#define LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_MS_MCU_BOOT_ADDR_MS_SHIFT (0U)
#define LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_MS_MCU_BOOT_ADDR_MS_MASK (0x3FFFU << LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_MS_MCU_BOOT_ADDR_MS_SHIFT) /* 0x00003FFF */
/* UCC_SLEEP_CTRL_MCU_BOOT_ADDR_LS */
#define LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_LS_MCU_BOOT_ADDR_LS_SHIFT (0U)
#define LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_LS_MCU_BOOT_ADDR_LS_MASK (0xFFFFU << LPW_SYSBUS_UCC_SLEEP_CTRL_MCU_BOOT_ADDR_LS_MCU_BOOT_ADDR_LS_SHIFT) /* 0x0000FFFF */
/****************************************LPW_PBUS****************************************/
/* EDC_GPIO0_OUT */
#define LPW_PBUS_EDC_GPIO0_OUT_GPIO0_OUT_SHIFT             (0U)
#define LPW_PBUS_EDC_GPIO0_OUT_GPIO0_OUT_MASK              (0xFFFFU << LPW_PBUS_EDC_GPIO0_OUT_GPIO0_OUT_SHIFT)          /* 0x0000FFFF */
/* EDC_GPIO1_OUT */
#define LPW_PBUS_EDC_GPIO1_OUT_GPIO1_OUT_SHIFT             (0U)
#define LPW_PBUS_EDC_GPIO1_OUT_GPIO1_OUT_MASK              (0xFFFFU << LPW_PBUS_EDC_GPIO1_OUT_GPIO1_OUT_SHIFT)          /* 0x0000FFFF */
/* EDC_GPIO0_IN */
#define LPW_PBUS_EDC_GPIO0_IN_GPIO0_IN_SHIFT               (0U)
#define LPW_PBUS_EDC_GPIO0_IN_GPIO0_IN_MASK                (0xFFFFU << LPW_PBUS_EDC_GPIO0_IN_GPIO0_IN_SHIFT)            /* 0x0000FFFF */
/* EDC_GPIO1_IN */
#define LPW_PBUS_EDC_GPIO1_IN_GPIO1_IN_SHIFT               (0U)
#define LPW_PBUS_EDC_GPIO1_IN_GPIO1_IN_MASK                (0xFFFFU << LPW_PBUS_EDC_GPIO1_IN_GPIO1_IN_SHIFT)            /* 0x0000FFFF */
/* RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1 */
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_ALL_SHIFT (0U)
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_ALL_MASK (0x1U << LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_ALL_SHIFT) /* 0x00000001 */
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCU_SHIFT (4U)
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCU_MASK (0x1U << LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCU_SHIFT) /* 0x00000010 */
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCP_SHIFT (16U)
#define LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCP_MASK (0x1U << LPW_PBUS_RPU_CLOCK_RESET_CTRL_CLOCK_ENABLE_1_CLOCK_ENABLE_MCP_SHIFT) /* 0x00010000 */
/******************************************VIP*******************************************/
/* DVP_CTRL */
#define VIP_DVP_CTRL_CAP_EN_SHIFT                          (0U)
#define VIP_DVP_CTRL_CAP_EN_MASK                           (0x1U << VIP_DVP_CTRL_CAP_EN_SHIFT)                          /* 0x00000001 */
#define VIP_DVP_CTRL_WORK_MODE_SHIFT                       (1U)
#define VIP_DVP_CTRL_WORK_MODE_MASK                        (0x3U << VIP_DVP_CTRL_WORK_MODE_SHIFT)                       /* 0x00000006 */
#define VIP_DVP_CTRL_AXI_BURST_TYPE_SHIFT                  (12U)
#define VIP_DVP_CTRL_AXI_BURST_TYPE_MASK                   (0xFU << VIP_DVP_CTRL_AXI_BURST_TYPE_SHIFT)                  /* 0x0000F000 */
/* DVP_INTEN */
#define VIP_DVP_INTEN_DMA_FRAME_END_EN_SHIFT               (0U)
#define VIP_DVP_INTEN_DMA_FRAME_END_EN_MASK                (0x1U << VIP_DVP_INTEN_DMA_FRAME_END_EN_SHIFT)               /* 0x00000001 */
#define VIP_DVP_INTEN_LINE_END_EN_SHIFT                    (1U)
#define VIP_DVP_INTEN_LINE_END_EN_MASK                     (0x1U << VIP_DVP_INTEN_LINE_END_EN_SHIFT)                    /* 0x00000002 */
#define VIP_DVP_INTEN_LINE_ERR_EN_SHIFT                    (2U)
#define VIP_DVP_INTEN_LINE_ERR_EN_MASK                     (0x1U << VIP_DVP_INTEN_LINE_ERR_EN_SHIFT)                    /* 0x00000004 */
#define VIP_DVP_INTEN_PIX_ERR_EN_SHIFT                     (3U)
#define VIP_DVP_INTEN_PIX_ERR_EN_MASK                      (0x1U << VIP_DVP_INTEN_PIX_ERR_EN_SHIFT)                     /* 0x00000008 */
#define VIP_DVP_INTEN_IFIFO_OF_EN_SHIFT                    (4U)
#define VIP_DVP_INTEN_IFIFO_OF_EN_MASK                     (0x1U << VIP_DVP_INTEN_IFIFO_OF_EN_SHIFT)                    /* 0x00000010 */
#define VIP_DVP_INTEN_DFIFO_OF_EN_SHIFT                    (5U)
#define VIP_DVP_INTEN_DFIFO_OF_EN_MASK                     (0x1U << VIP_DVP_INTEN_DFIFO_OF_EN_SHIFT)                    /* 0x00000020 */
#define VIP_DVP_INTEN_BUS_ERR_EN_SHIFT                     (6U)
#define VIP_DVP_INTEN_BUS_ERR_EN_MASK                      (0x1U << VIP_DVP_INTEN_BUS_ERR_EN_SHIFT)                     /* 0x00000040 */
#define VIP_DVP_INTEN_FRAME_START_EN_SHIFT                 (7U)
#define VIP_DVP_INTEN_FRAME_START_EN_MASK                  (0x1U << VIP_DVP_INTEN_FRAME_START_EN_SHIFT)                 /* 0x00000080 */
#define VIP_DVP_INTEN_PRE_INF_FRAME_END_EN_SHIFT           (8U)
#define VIP_DVP_INTEN_PRE_INF_FRAME_END_EN_MASK            (0x1U << VIP_DVP_INTEN_PRE_INF_FRAME_END_EN_SHIFT)           /* 0x00000100 */
#define VIP_DVP_INTEN_PST_INF_FRAME_END_EN_SHIFT           (9U)
#define VIP_DVP_INTEN_PST_INF_FRAME_END_EN_MASK            (0x1U << VIP_DVP_INTEN_PST_INF_FRAME_END_EN_SHIFT)           /* 0x00000200 */
#define VIP_DVP_INTEN_BLOCK0_END_EN_SHIFT                  (10U)
#define VIP_DVP_INTEN_BLOCK0_END_EN_MASK                   (0x1U << VIP_DVP_INTEN_BLOCK0_END_EN_SHIFT)                  /* 0x00000400 */
#define VIP_DVP_INTEN_BLOCK1_END_EN_SHIFT                  (11U)
#define VIP_DVP_INTEN_BLOCK1_END_EN_MASK                   (0x1U << VIP_DVP_INTEN_BLOCK1_END_EN_SHIFT)                  /* 0x00000800 */
#define VIP_DVP_INTEN_LINE0_END_EN_SHIFT                   (12U)
#define VIP_DVP_INTEN_LINE0_END_EN_MASK                    (0x1U << VIP_DVP_INTEN_LINE0_END_EN_SHIFT)                   /* 0x00001000 */
#define VIP_DVP_INTEN_LINE1_END_EN_SHIFT                   (13U)
#define VIP_DVP_INTEN_LINE1_END_EN_MASK                    (0x1U << VIP_DVP_INTEN_LINE1_END_EN_SHIFT)                   /* 0x00002000 */
#define VIP_DVP_INTEN_BLOCK_ERR_EN_SHIFT                   (14U)
#define VIP_DVP_INTEN_BLOCK_ERR_EN_MASK                    (0x1U << VIP_DVP_INTEN_BLOCK_ERR_EN_SHIFT)                   /* 0x00004000 */
/* DVP_INTSTAT */
#define VIP_DVP_INTSTAT_DMA_FRAME_END_SHIFT                (0U)
#define VIP_DVP_INTSTAT_DMA_FRAME_END_MASK                 (0x1U << VIP_DVP_INTSTAT_DMA_FRAME_END_SHIFT)                /* 0x00000001 */
#define VIP_DVP_INTSTAT_LINE_END_SHIFT                     (1U)
#define VIP_DVP_INTSTAT_LINE_END_MASK                      (0x1U << VIP_DVP_INTSTAT_LINE_END_SHIFT)                     /* 0x00000002 */
#define VIP_DVP_INTSTAT_LINE_ERR_SHIFT                     (2U)
#define VIP_DVP_INTSTAT_LINE_ERR_MASK                      (0x1U << VIP_DVP_INTSTAT_LINE_ERR_SHIFT)                     /* 0x00000004 */
#define VIP_DVP_INTSTAT_PIX_ERR_SHIFT                      (3U)
#define VIP_DVP_INTSTAT_PIX_ERR_MASK                       (0x1U << VIP_DVP_INTSTAT_PIX_ERR_SHIFT)                      /* 0x00000008 */
#define VIP_DVP_INTSTAT_IFIFO_OF_SHIFT                     (4U)
#define VIP_DVP_INTSTAT_IFIFO_OF_MASK                      (0x1U << VIP_DVP_INTSTAT_IFIFO_OF_SHIFT)                     /* 0x00000010 */
#define VIP_DVP_INTSTAT_DFIFO_OF_SHIFT                     (5U)
#define VIP_DVP_INTSTAT_DFIFO_OF_MASK                      (0x1U << VIP_DVP_INTSTAT_DFIFO_OF_SHIFT)                     /* 0x00000020 */
#define VIP_DVP_INTSTAT_BUS_ERR_SHIFT                      (6U)
#define VIP_DVP_INTSTAT_BUS_ERR_MASK                       (0x1U << VIP_DVP_INTSTAT_BUS_ERR_SHIFT)                      /* 0x00000040 */
#define VIP_DVP_INTSTAT_FRAME_START_SHIFT                  (7U)
#define VIP_DVP_INTSTAT_FRAME_START_MASK                   (0x1U << VIP_DVP_INTSTAT_FRAME_START_SHIFT)                  /* 0x00000080 */
#define VIP_DVP_INTSTAT_PRE_INF_FRAME_END_SHIFT            (8U)
#define VIP_DVP_INTSTAT_PRE_INF_FRAME_END_MASK             (0x1U << VIP_DVP_INTSTAT_PRE_INF_FRAME_END_SHIFT)            /* 0x00000100 */
#define VIP_DVP_INTSTAT_PST_INF_FRAME_END_SHIFT            (9U)
#define VIP_DVP_INTSTAT_PST_INF_FRAME_END_MASK             (0x1U << VIP_DVP_INTSTAT_PST_INF_FRAME_END_SHIFT)            /* 0x00000200 */
#define VIP_DVP_INTSTAT_BLOCK0_END_SHIFT                   (10U)
#define VIP_DVP_INTSTAT_BLOCK0_END_MASK                    (0x1U << VIP_DVP_INTSTAT_BLOCK0_END_SHIFT)                   /* 0x00000400 */
#define VIP_DVP_INTSTAT_BLOCK1_END_SHIFT                   (11U)
#define VIP_DVP_INTSTAT_BLOCK1_END_MASK                    (0x1U << VIP_DVP_INTSTAT_BLOCK1_END_SHIFT)                   /* 0x00000800 */
#define VIP_DVP_INTSTAT_LINE0_END_SHIFT                    (12U)
#define VIP_DVP_INTSTAT_LINE0_END_MASK                     (0x1U << VIP_DVP_INTSTAT_LINE0_END_SHIFT)                    /* 0x00001000 */
#define VIP_DVP_INTSTAT_LINE1_END_SHIFT                    (13U)
#define VIP_DVP_INTSTAT_LINE1_END_MASK                     (0x1U << VIP_DVP_INTSTAT_LINE1_END_SHIFT)                    /* 0x00002000 */
#define VIP_DVP_INTSTAT_BLOCK_ERR_SHIFT                    (14U)
#define VIP_DVP_INTSTAT_BLOCK_ERR_MASK                     (0x1U << VIP_DVP_INTSTAT_BLOCK_ERR_SHIFT)                    /* 0x00004000 */
/* DVP_FOR */
#define VIP_DVP_FOR_VSYNC_POL_SHIFT                        (0U)
#define VIP_DVP_FOR_VSYNC_POL_MASK                         (0x1U << VIP_DVP_FOR_VSYNC_POL_SHIFT)                        /* 0x00000001 */
#define VIP_DVP_FOR_HREF_POL_SHIFT                         (1U)
#define VIP_DVP_FOR_HREF_POL_MASK                          (0x1U << VIP_DVP_FOR_HREF_POL_SHIFT)                         /* 0x00000002 */
#define VIP_DVP_FOR_INPUT_MODE_SHIFT                       (2U)
#define VIP_DVP_FOR_INPUT_MODE_MASK                        (0x7U << VIP_DVP_FOR_INPUT_MODE_SHIFT)                       /* 0x0000001C */
#define VIP_DVP_FOR_YUV_IN_ORDER_SHIFT                     (5U)
#define VIP_DVP_FOR_YUV_IN_ORDER_MASK                      (0x3U << VIP_DVP_FOR_YUV_IN_ORDER_SHIFT)                     /* 0x00000060 */
#define VIP_DVP_FOR_FIELD_ORDER_SHIFT                      (9U)
#define VIP_DVP_FOR_FIELD_ORDER_MASK                       (0x1U << VIP_DVP_FOR_FIELD_ORDER_SHIFT)                      /* 0x00000200 */
#define VIP_DVP_FOR_JPEG_MODE_SHIFT                        (10U)
#define VIP_DVP_FOR_JPEG_MODE_MASK                         (0x1U << VIP_DVP_FOR_JPEG_MODE_SHIFT)                        /* 0x00000400 */
#define VIP_DVP_FOR_RAW_WIDTH_SHIFT                        (11U)
#define VIP_DVP_FOR_RAW_WIDTH_MASK                         (0x3U << VIP_DVP_FOR_RAW_WIDTH_SHIFT)                        /* 0x00001800 */
#define VIP_DVP_FOR_ONLY_Y_MODE_SHIFT                      (15U)
#define VIP_DVP_FOR_ONLY_Y_MODE_MASK                       (0x1U << VIP_DVP_FOR_ONLY_Y_MODE_SHIFT)                      /* 0x00008000 */
#define VIP_DVP_FOR_OUTPUT_420_SHIFT                       (16U)
#define VIP_DVP_FOR_OUTPUT_420_MASK                        (0x1U << VIP_DVP_FOR_OUTPUT_420_SHIFT)                       /* 0x00010000 */
#define VIP_DVP_FOR_OUT_420_ORDER_SHIFT                    (17U)
#define VIP_DVP_FOR_OUT_420_ORDER_MASK                     (0x1U << VIP_DVP_FOR_OUT_420_ORDER_SHIFT)                    /* 0x00020000 */
#define VIP_DVP_FOR_RAW_END_SHIFT                          (18U)
#define VIP_DVP_FOR_RAW_END_MASK                           (0x1U << VIP_DVP_FOR_RAW_END_SHIFT)                          /* 0x00040000 */
#define VIP_DVP_FOR_UV_STORE_ORDER_SHIFT                   (19U)
#define VIP_DVP_FOR_UV_STORE_ORDER_MASK                    (0x1U << VIP_DVP_FOR_UV_STORE_ORDER_SHIFT)                   /* 0x00080000 */
#define VIP_DVP_FOR_HSYNC_MODE_SHIFT                       (20U)
#define VIP_DVP_FOR_HSYNC_MODE_MASK                        (0x1U << VIP_DVP_FOR_HSYNC_MODE_SHIFT)                       /* 0x00100000 */
/* DVP_DMA_IDLE_REQ */
#define VIP_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_SHIFT            (0U)
#define VIP_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_MASK             (0x1U << VIP_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_SHIFT)            /* 0x00000001 */
/* DVP_FRM0_ADDR_Y */
#define VIP_DVP_FRM0_ADDR_Y_FRM0_ADDR_Y_SHIFT              (0U)
#define VIP_DVP_FRM0_ADDR_Y_FRM0_ADDR_Y_MASK               (0xFFFFFFFFU << VIP_DVP_FRM0_ADDR_Y_FRM0_ADDR_Y_SHIFT)       /* 0xFFFFFFFF */
/* DVP_FRM0_ADDR_UV */
#define VIP_DVP_FRM0_ADDR_UV_FRM0_ADDR_UV_SHIFT            (0U)
#define VIP_DVP_FRM0_ADDR_UV_FRM0_ADDR_UV_MASK             (0xFFFFFFFFU << VIP_DVP_FRM0_ADDR_UV_FRM0_ADDR_UV_SHIFT)     /* 0xFFFFFFFF */
/* DVP_FRM1_ADDR_Y */
#define VIP_DVP_FRM1_ADDR_Y_FRM1_ADDR_Y_SHIFT              (0U)
#define VIP_DVP_FRM1_ADDR_Y_FRM1_ADDR_Y_MASK               (0xFFFFFFFFU << VIP_DVP_FRM1_ADDR_Y_FRM1_ADDR_Y_SHIFT)       /* 0xFFFFFFFF */
/* DVP_FRM1_ADDR_UV */
#define VIP_DVP_FRM1_ADDR_UV_FRM1_ADDR_UV_SHIFT            (0U)
#define VIP_DVP_FRM1_ADDR_UV_FRM1_ADDR_UV_MASK             (0xFFFFFFFFU << VIP_DVP_FRM1_ADDR_UV_FRM1_ADDR_UV_SHIFT)     /* 0xFFFFFFFF */
/* DVP_VIR_LINE_WIDTH */
#define VIP_DVP_VIR_LINE_WIDTH_VIR_LINE_WIDTH_SHIFT        (0U)
#define VIP_DVP_VIR_LINE_WIDTH_VIR_LINE_WIDTH_MASK         (0x7FFFU << VIP_DVP_VIR_LINE_WIDTH_VIR_LINE_WIDTH_SHIFT)     /* 0x00007FFF */
/* DVP_SET_SIZE */
#define VIP_DVP_SET_SIZE_SET_WIDTH_SHIFT                   (0U)
#define VIP_DVP_SET_SIZE_SET_WIDTH_MASK                    (0x1FFFU << VIP_DVP_SET_SIZE_SET_WIDTH_SHIFT)                /* 0x00001FFF */
#define VIP_DVP_SET_SIZE_SET_HEIGHT_SHIFT                  (16U)
#define VIP_DVP_SET_SIZE_SET_HEIGHT_MASK                   (0x1FFFU << VIP_DVP_SET_SIZE_SET_HEIGHT_SHIFT)               /* 0x1FFF0000 */
/* DVP_BLOCK_LINE_NUM */
#define VIP_DVP_BLOCK_LINE_NUM_BLOCK_LINE_NUM_SHIFT        (0U)
#define VIP_DVP_BLOCK_LINE_NUM_BLOCK_LINE_NUM_MASK         (0x1FFFU << VIP_DVP_BLOCK_LINE_NUM_BLOCK_LINE_NUM_SHIFT)     /* 0x00001FFF */
/* DVP_BLOCK0_ADDR_Y */
#define VIP_DVP_BLOCK0_ADDR_Y_BLOCK0_ADDR_Y_SHIFT          (0U)
#define VIP_DVP_BLOCK0_ADDR_Y_BLOCK0_ADDR_Y_MASK           (0xFFFFFFFFU << VIP_DVP_BLOCK0_ADDR_Y_BLOCK0_ADDR_Y_SHIFT)   /* 0xFFFFFFFF */
/* DVP_BLOCK0_ADDR_UV */
#define VIP_DVP_BLOCK0_ADDR_UV_BLOCK0_ADDR_UV_SHIFT        (0U)
#define VIP_DVP_BLOCK0_ADDR_UV_BLOCK0_ADDR_UV_MASK         (0xFFFFFFFFU << VIP_DVP_BLOCK0_ADDR_UV_BLOCK0_ADDR_UV_SHIFT) /* 0xFFFFFFFF */
/* DVP_BLOCK1_ADDR_Y */
#define VIP_DVP_BLOCK1_ADDR_Y_BLOCK1_ADDR_Y_SHIFT          (0U)
#define VIP_DVP_BLOCK1_ADDR_Y_BLOCK1_ADDR_Y_MASK           (0xFFFFFFFFU << VIP_DVP_BLOCK1_ADDR_Y_BLOCK1_ADDR_Y_SHIFT)   /* 0xFFFFFFFF */
/* DVP_BLOCK1_ADDR_UV */
#define VIP_DVP_BLOCK1_ADDR_UV_BLOCK1_ADDR_UV_SHIFT        (0U)
#define VIP_DVP_BLOCK1_ADDR_UV_BLOCK1_ADDR_UV_MASK         (0xFFFFFFFFU << VIP_DVP_BLOCK1_ADDR_UV_BLOCK1_ADDR_UV_SHIFT) /* 0xFFFFFFFF */
/* DVP_BLOCK_STATUS */
#define VIP_DVP_BLOCK_STATUS_BLK0_STATUS_SHIFT             (0U)
#define VIP_DVP_BLOCK_STATUS_BLK0_STATUS_MASK              (0x1U << VIP_DVP_BLOCK_STATUS_BLK0_STATUS_SHIFT)             /* 0x00000001 */
#define VIP_DVP_BLOCK_STATUS_BLK1_STATUS_SHIFT             (1U)
#define VIP_DVP_BLOCK_STATUS_BLK1_STATUS_MASK              (0x1U << VIP_DVP_BLOCK_STATUS_BLK1_STATUS_SHIFT)             /* 0x00000002 */
#define VIP_DVP_BLOCK_STATUS_BLK_ID_SHIFT                  (16U)
#define VIP_DVP_BLOCK_STATUS_BLK_ID_MASK                   (0xFFU << VIP_DVP_BLOCK_STATUS_BLK_ID_SHIFT)                 /* 0x00FF0000 */
/* DVP_CROP */
#define VIP_DVP_CROP_START_X_SHIFT                         (0U)
#define VIP_DVP_CROP_START_X_MASK                          (0x1FFFU << VIP_DVP_CROP_START_X_SHIFT)                      /* 0x00001FFF */
#define VIP_DVP_CROP_START_Y_SHIFT                         (16U)
#define VIP_DVP_CROP_START_Y_MASK                          (0x1FFFU << VIP_DVP_CROP_START_Y_SHIFT)                      /* 0x1FFF0000 */
/* DVP_PATH_SEL */
#define VIP_DVP_PATH_SEL_YUV_SEL_SHIFT                     (4U)
#define VIP_DVP_PATH_SEL_YUV_SEL_MASK                      (0x1U << VIP_DVP_PATH_SEL_YUV_SEL_SHIFT)                     /* 0x00000010 */
#define VIP_DVP_PATH_SEL_RAW_SEL_SHIFT                     (5U)
#define VIP_DVP_PATH_SEL_RAW_SEL_MASK                      (0x1U << VIP_DVP_PATH_SEL_RAW_SEL_SHIFT)                     /* 0x00000020 */
/* DVP_LINE_INT_NUM */
#define VIP_DVP_LINE_INT_NUM_LINE0_INT_NUM_SHIFT           (0U)
#define VIP_DVP_LINE_INT_NUM_LINE0_INT_NUM_MASK            (0x1FFFU << VIP_DVP_LINE_INT_NUM_LINE0_INT_NUM_SHIFT)        /* 0x00001FFF */
#define VIP_DVP_LINE_INT_NUM_LINE1_INT_NUM_SHIFT           (16U)
#define VIP_DVP_LINE_INT_NUM_LINE1_INT_NUM_MASK            (0x1FFFU << VIP_DVP_LINE_INT_NUM_LINE1_INT_NUM_SHIFT)        /* 0x1FFF0000 */
/* DVP_WATER_LINE */
#define VIP_DVP_WATER_LINE_HURRY_EN_SHIFT                  (0U)
#define VIP_DVP_WATER_LINE_HURRY_EN_MASK                   (0x1U << VIP_DVP_WATER_LINE_HURRY_EN_SHIFT)                  /* 0x00000001 */
#define VIP_DVP_WATER_LINE_HURRY_VALUE_SHIFT               (4U)
#define VIP_DVP_WATER_LINE_HURRY_VALUE_MASK                (0x3U << VIP_DVP_WATER_LINE_HURRY_VALUE_SHIFT)               /* 0x00000030 */
#define VIP_DVP_WATER_LINE_WATER_LINE_SHIFT                (8U)
#define VIP_DVP_WATER_LINE_WATER_LINE_MASK                 (0x3U << VIP_DVP_WATER_LINE_WATER_LINE_SHIFT)                /* 0x00000300 */
/* DVP_FIFO_ENTRY */
#define VIP_DVP_FIFO_ENTRY_Y_FIFO_ENTRY_SHIFT              (0U)
#define VIP_DVP_FIFO_ENTRY_Y_FIFO_ENTRY_MASK               (0x1FFU << VIP_DVP_FIFO_ENTRY_Y_FIFO_ENTRY_SHIFT)            /* 0x000001FF */
#define VIP_DVP_FIFO_ENTRY_UV_FIFO_ENTRY_SHIFT             (9U)
#define VIP_DVP_FIFO_ENTRY_UV_FIFO_ENTRY_MASK              (0x1FFU << VIP_DVP_FIFO_ENTRY_UV_FIFO_ENTRY_SHIFT)           /* 0x0003FE00 */
/* DVP_FRAME_STATUS */
#define VIP_DVP_FRAME_STATUS_F0_STS_SHIFT                  (0U)
#define VIP_DVP_FRAME_STATUS_F0_STS_MASK                   (0x1U << VIP_DVP_FRAME_STATUS_F0_STS_SHIFT)                  /* 0x00000001 */
#define VIP_DVP_FRAME_STATUS_F1_STS_SHIFT                  (1U)
#define VIP_DVP_FRAME_STATUS_F1_STS_MASK                   (0x1U << VIP_DVP_FRAME_STATUS_F1_STS_SHIFT)                  /* 0x00000002 */
#define VIP_DVP_FRAME_STATUS_IDLE_SHIFT                    (2U)
#define VIP_DVP_FRAME_STATUS_IDLE_MASK                     (0x1U << VIP_DVP_FRAME_STATUS_IDLE_SHIFT)                    /* 0x00000004 */
#define VIP_DVP_FRAME_STATUS_FRAME_NUM_SHIFT               (16U)
#define VIP_DVP_FRAME_STATUS_FRAME_NUM_MASK                (0xFFFFU << VIP_DVP_FRAME_STATUS_FRAME_NUM_SHIFT)            /* 0xFFFF0000 */
/* DVP_CUR_DST */
#define VIP_DVP_CUR_DST_CUR_DST_SHIFT                      (0U)
#define VIP_DVP_CUR_DST_CUR_DST_MASK                       (0xFFFFFFFFU << VIP_DVP_CUR_DST_CUR_DST_SHIFT)               /* 0xFFFFFFFF */
/* DVP_LAST_LINE */
#define VIP_DVP_LAST_LINE_LAST_Y_NUM_SHIFT                 (0U)
#define VIP_DVP_LAST_LINE_LAST_Y_NUM_MASK                  (0x1FFFU << VIP_DVP_LAST_LINE_LAST_Y_NUM_SHIFT)              /* 0x00001FFF */
#define VIP_DVP_LAST_LINE_LAST_UV_NUM_SHIFT                (16U)
#define VIP_DVP_LAST_LINE_LAST_UV_NUM_MASK                 (0x1FFFU << VIP_DVP_LAST_LINE_LAST_UV_NUM_SHIFT)             /* 0x1FFF0000 */
/* DVP_LAST_PIX */
#define VIP_DVP_LAST_PIX_LAST_Y_NUM_SHIFT                  (0U)
#define VIP_DVP_LAST_PIX_LAST_Y_NUM_MASK                   (0x1FFFU << VIP_DVP_LAST_PIX_LAST_Y_NUM_SHIFT)               /* 0x00001FFF */
#define VIP_DVP_LAST_PIX_LAST_UV_NUM_SHIFT                 (16U)
#define VIP_DVP_LAST_PIX_LAST_UV_NUM_MASK                  (0x1FFFU << VIP_DVP_LAST_PIX_LAST_UV_NUM_SHIFT)              /* 0x1FFF0000 */
/*****************************************SDMMC******************************************/
/* CTRL */
#define SDMMC_CTRL_CONTROLLER_RESET_SHIFT                  (0U)
#define SDMMC_CTRL_CONTROLLER_RESET_MASK                   (0x1U << SDMMC_CTRL_CONTROLLER_RESET_SHIFT)                  /* 0x00000001 */
#define SDMMC_CTRL_FIFO_RESET_SHIFT                        (1U)
#define SDMMC_CTRL_FIFO_RESET_MASK                         (0x1U << SDMMC_CTRL_FIFO_RESET_SHIFT)                        /* 0x00000002 */
#define SDMMC_CTRL_DMA_RESET_SHIFT                         (2U)
#define SDMMC_CTRL_DMA_RESET_MASK                          (0x1U << SDMMC_CTRL_DMA_RESET_SHIFT)                         /* 0x00000004 */
#define SDMMC_CTRL_INT_ENABLE_SHIFT                        (4U)
#define SDMMC_CTRL_INT_ENABLE_MASK                         (0x1U << SDMMC_CTRL_INT_ENABLE_SHIFT)                        /* 0x00000010 */
#define SDMMC_CTRL_DMA_ENABLE_SHIFT                        (5U)
#define SDMMC_CTRL_DMA_ENABLE_MASK                         (0x1U << SDMMC_CTRL_DMA_ENABLE_SHIFT)                        /* 0x00000020 */
#define SDMMC_CTRL_READ_WAIT_SHIFT                         (6U)
#define SDMMC_CTRL_READ_WAIT_MASK                          (0x1U << SDMMC_CTRL_READ_WAIT_SHIFT)                         /* 0x00000040 */
#define SDMMC_CTRL_SEND_IRQ_RESPONSE_SHIFT                 (7U)
#define SDMMC_CTRL_SEND_IRQ_RESPONSE_MASK                  (0x1U << SDMMC_CTRL_SEND_IRQ_RESPONSE_SHIFT)                 /* 0x00000080 */
#define SDMMC_CTRL_ABORT_READ_DATA_SHIFT                   (8U)
#define SDMMC_CTRL_ABORT_READ_DATA_MASK                    (0x1U << SDMMC_CTRL_ABORT_READ_DATA_SHIFT)                   /* 0x00000100 */
#define SDMMC_CTRL_SEND_CCSD_SHIFT                         (9U)
#define SDMMC_CTRL_SEND_CCSD_MASK                          (0x1U << SDMMC_CTRL_SEND_CCSD_SHIFT)                         /* 0x00000200 */
#define SDMMC_CTRL_SEND_AUTO_STOP_CCSD_SHIFT               (10U)
#define SDMMC_CTRL_SEND_AUTO_STOP_CCSD_MASK                (0x1U << SDMMC_CTRL_SEND_AUTO_STOP_CCSD_SHIFT)               /* 0x00000400 */
#define SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SHIFT     (11U)
#define SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_MASK      (0x1U << SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS_SHIFT)     /* 0x00000800 */
#define SDMMC_CTRL_USE_INTERNAL_DMAC_SHIFT                 (25U)
#define SDMMC_CTRL_USE_INTERNAL_DMAC_MASK                  (0x1U << SDMMC_CTRL_USE_INTERNAL_DMAC_SHIFT)                 /* 0x02000000 */
/* PWREN */
#define SDMMC_PWREN_POWER_ENABLE_SHIFT                     (0U)
#define SDMMC_PWREN_POWER_ENABLE_MASK                      (0x1U << SDMMC_PWREN_POWER_ENABLE_SHIFT)                     /* 0x00000001 */
/* CLKDIV */
#define SDMMC_CLKDIV_CLK_DIVIDER0_SHIFT                    (0U)
#define SDMMC_CLKDIV_CLK_DIVIDER0_MASK                     (0xFFU << SDMMC_CLKDIV_CLK_DIVIDER0_SHIFT)                   /* 0x000000FF */
/* CLKSRC */
#define SDMMC_CLKSRC_CLK_SOURCE_SHIFT                      (0U)
#define SDMMC_CLKSRC_CLK_SOURCE_MASK                       (0x3U << SDMMC_CLKSRC_CLK_SOURCE_SHIFT)                      /* 0x00000003 */
/* CLKENA */
#define SDMMC_CLKENA_CCLK_ENABLE_SHIFT                     (0U)
#define SDMMC_CLKENA_CCLK_ENABLE_MASK                      (0x1U << SDMMC_CLKENA_CCLK_ENABLE_SHIFT)                     /* 0x00000001 */
#define SDMMC_CLKENA_CCLK_LOW_POWER_SHIFT                  (16U)
#define SDMMC_CLKENA_CCLK_LOW_POWER_MASK                   (0x1U << SDMMC_CLKENA_CCLK_LOW_POWER_SHIFT)                  /* 0x00010000 */
/* TMOUT */
#define SDMMC_TMOUT_RESPONSE_TIMEOUT_SHIFT                 (0U)
#define SDMMC_TMOUT_RESPONSE_TIMEOUT_MASK                  (0xFFU << SDMMC_TMOUT_RESPONSE_TIMEOUT_SHIFT)                /* 0x000000FF */
#define SDMMC_TMOUT_DATA_TIMEOUT_SHIFT                     (8U)
#define SDMMC_TMOUT_DATA_TIMEOUT_MASK                      (0xFFFFFFU << SDMMC_TMOUT_DATA_TIMEOUT_SHIFT)                /* 0xFFFFFF00 */
/* CTYPE */
#define SDMMC_CTYPE_CARD_WIDTH_SHIFT                       (0U)
#define SDMMC_CTYPE_CARD_WIDTH_MASK                        (0x1U << SDMMC_CTYPE_CARD_WIDTH_SHIFT)                       /* 0x00000001 */
#define SDMMC_CTYPE_CARD_WIDTH_8_SHIFT                     (16U)
#define SDMMC_CTYPE_CARD_WIDTH_8_MASK                      (0x1U << SDMMC_CTYPE_CARD_WIDTH_8_SHIFT)                     /* 0x00010000 */
/* BLKSIZ */
#define SDMMC_BLKSIZ_BLOCK_SIZE_SHIFT                      (0U)
#define SDMMC_BLKSIZ_BLOCK_SIZE_MASK                       (0xFFFFU << SDMMC_BLKSIZ_BLOCK_SIZE_SHIFT)                   /* 0x0000FFFF */
/* BYTCNT */
#define SDMMC_BYTCNT_BYTE_COUNT_SHIFT                      (0U)
#define SDMMC_BYTCNT_BYTE_COUNT_MASK                       (0xFFFFFFFFU << SDMMC_BYTCNT_BYTE_COUNT_SHIFT)               /* 0xFFFFFFFF */
/* INTMASK */
#define SDMMC_INTMASK_INT_MASK_SHIFT                       (0U)
#define SDMMC_INTMASK_INT_MASK_MASK                        (0xFFFFU << SDMMC_INTMASK_INT_MASK_SHIFT)                    /* 0x0000FFFF */
#define SDMMC_INTMASK_DATA_NOBUSY_INT_MASK_SHIFT           (16U)
#define SDMMC_INTMASK_DATA_NOBUSY_INT_MASK_MASK            (0x1U << SDMMC_INTMASK_DATA_NOBUSY_INT_MASK_SHIFT)           /* 0x00010000 */
#define SDMMC_INTMASK_SDIO_INT_MASK_SHIFT                  (24U)
#define SDMMC_INTMASK_SDIO_INT_MASK_MASK                   (0x1U << SDMMC_INTMASK_SDIO_INT_MASK_SHIFT)                  /* 0x01000000 */
/* CMDARG */
#define SDMMC_CMDARG_CMD_ARG_SHIFT                         (0U)
#define SDMMC_CMDARG_CMD_ARG_MASK                          (0xFFFFFFFFU << SDMMC_CMDARG_CMD_ARG_SHIFT)                  /* 0xFFFFFFFF */
/* CMD */
#define SDMMC_CMD_CMD_INDEX_SHIFT                          (0U)
#define SDMMC_CMD_CMD_INDEX_MASK                           (0x3FU << SDMMC_CMD_CMD_INDEX_SHIFT)                         /* 0x0000003F */
#define SDMMC_CMD_RESPONSE_EXPECT_SHIFT                    (6U)
#define SDMMC_CMD_RESPONSE_EXPECT_MASK                     (0x1U << SDMMC_CMD_RESPONSE_EXPECT_SHIFT)                    /* 0x00000040 */
#define SDMMC_CMD_RESPONSE_LENGTH_SHIFT                    (7U)
#define SDMMC_CMD_RESPONSE_LENGTH_MASK                     (0x1U << SDMMC_CMD_RESPONSE_LENGTH_SHIFT)                    /* 0x00000080 */
#define SDMMC_CMD_CHECK_RESPONSE_CRC_SHIFT                 (8U)
#define SDMMC_CMD_CHECK_RESPONSE_CRC_MASK                  (0x1U << SDMMC_CMD_CHECK_RESPONSE_CRC_SHIFT)                 /* 0x00000100 */
#define SDMMC_CMD_DATA_EXPECTED_SHIFT                      (9U)
#define SDMMC_CMD_DATA_EXPECTED_MASK                       (0x1U << SDMMC_CMD_DATA_EXPECTED_SHIFT)                      /* 0x00000200 */
#define SDMMC_CMD_WR_SHIFT                                 (10U)
#define SDMMC_CMD_WR_MASK                                  (0x1U << SDMMC_CMD_WR_SHIFT)                                 /* 0x00000400 */
#define SDMMC_CMD_TRANSFER_MODE_SHIFT                      (11U)
#define SDMMC_CMD_TRANSFER_MODE_MASK                       (0x1U << SDMMC_CMD_TRANSFER_MODE_SHIFT)                      /* 0x00000800 */
#define SDMMC_CMD_SEND_AUTO_STOP_SHIFT                     (12U)
#define SDMMC_CMD_SEND_AUTO_STOP_MASK                      (0x1U << SDMMC_CMD_SEND_AUTO_STOP_SHIFT)                     /* 0x00001000 */
#define SDMMC_CMD_WAIT_PRVDATA_COMPLETE_SHIFT              (13U)
#define SDMMC_CMD_WAIT_PRVDATA_COMPLETE_MASK               (0x1U << SDMMC_CMD_WAIT_PRVDATA_COMPLETE_SHIFT)              /* 0x00002000 */
#define SDMMC_CMD_STOP_ABORT_CMD_SHIFT                     (14U)
#define SDMMC_CMD_STOP_ABORT_CMD_MASK                      (0x1U << SDMMC_CMD_STOP_ABORT_CMD_SHIFT)                     /* 0x00004000 */
#define SDMMC_CMD_SEND_INITIALIZATION_SHIFT                (15U)
#define SDMMC_CMD_SEND_INITIALIZATION_MASK                 (0x1U << SDMMC_CMD_SEND_INITIALIZATION_SHIFT)                /* 0x00008000 */
#define SDMMC_CMD_UPDATE_CLOCK_REGS_ONLY_SHIFT             (21U)
#define SDMMC_CMD_UPDATE_CLOCK_REGS_ONLY_MASK              (0x1U << SDMMC_CMD_UPDATE_CLOCK_REGS_ONLY_SHIFT)             /* 0x00200000 */
#define SDMMC_CMD_READ_CEATA_DEVICE_SHIFT                  (22U)
#define SDMMC_CMD_READ_CEATA_DEVICE_MASK                   (0x1U << SDMMC_CMD_READ_CEATA_DEVICE_SHIFT)                  /* 0x00400000 */
#define SDMMC_CMD_CCS_EXPECTED_SHIFT                       (23U)
#define SDMMC_CMD_CCS_EXPECTED_MASK                        (0x1U << SDMMC_CMD_CCS_EXPECTED_SHIFT)                       /* 0x00800000 */
#define SDMMC_CMD_ENABLE_BOOT_SHIFT                        (24U)
#define SDMMC_CMD_ENABLE_BOOT_MASK                         (0x1U << SDMMC_CMD_ENABLE_BOOT_SHIFT)                        /* 0x01000000 */
#define SDMMC_CMD_EXPECT_BOOT_ACK_SHIFT                    (25U)
#define SDMMC_CMD_EXPECT_BOOT_ACK_MASK                     (0x1U << SDMMC_CMD_EXPECT_BOOT_ACK_SHIFT)                    /* 0x02000000 */
#define SDMMC_CMD_DISABLE_BOOT_SHIFT                       (26U)
#define SDMMC_CMD_DISABLE_BOOT_MASK                        (0x1U << SDMMC_CMD_DISABLE_BOOT_SHIFT)                       /* 0x04000000 */
#define SDMMC_CMD_BOOT_MODE_SHIFT                          (27U)
#define SDMMC_CMD_BOOT_MODE_MASK                           (0x1U << SDMMC_CMD_BOOT_MODE_SHIFT)                          /* 0x08000000 */
#define SDMMC_CMD_VOLT_SWITCH_SHIFT                        (28U)
#define SDMMC_CMD_VOLT_SWITCH_MASK                         (0x1U << SDMMC_CMD_VOLT_SWITCH_SHIFT)                        /* 0x10000000 */
#define SDMMC_CMD_USE_HOLD_REG_SHIFT                       (29U)
#define SDMMC_CMD_USE_HOLD_REG_MASK                        (0x1U << SDMMC_CMD_USE_HOLD_REG_SHIFT)                       /* 0x20000000 */
#define SDMMC_CMD_START_CMD_SHIFT                          (31U)
#define SDMMC_CMD_START_CMD_MASK                           (0x1U << SDMMC_CMD_START_CMD_SHIFT)                          /* 0x80000000 */
/* RESP0 */
#define SDMMC_RESP0_RESPONSE0_SHIFT                        (0U)
#define SDMMC_RESP0_RESPONSE0_MASK                         (0xFFFFFFFFU << SDMMC_RESP0_RESPONSE0_SHIFT)                 /* 0xFFFFFFFF */
/* RESP1 */
#define SDMMC_RESP1_RESPONSE_SHIFT                         (0U)
#define SDMMC_RESP1_RESPONSE_MASK                          (0xFFFFFFFFU << SDMMC_RESP1_RESPONSE_SHIFT)                  /* 0xFFFFFFFF */
/* RESP2 */
#define SDMMC_RESP2_RESPONSE2_SHIFT                        (0U)
#define SDMMC_RESP2_RESPONSE2_MASK                         (0xFFFFFFFFU << SDMMC_RESP2_RESPONSE2_SHIFT)                 /* 0xFFFFFFFF */
/* RESP3 */
#define SDMMC_RESP3_RESPONSE3_SHIFT                        (0U)
#define SDMMC_RESP3_RESPONSE3_MASK                         (0xFFFFFFFFU << SDMMC_RESP3_RESPONSE3_SHIFT)                 /* 0xFFFFFFFF */
/* MINTSTS */
#define SDMMC_MINTSTS_INT_STATUS_SHIFT                     (0U)
#define SDMMC_MINTSTS_INT_STATUS_MASK                      (0xFFFFU << SDMMC_MINTSTS_INT_STATUS_SHIFT)                  /* 0x0000FFFF */
#define SDMMC_MINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT         (16U)
#define SDMMC_MINTSTS_DATA_NOBUSY_INT_STATUS_MASK          (0x1U << SDMMC_MINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT)         /* 0x00010000 */
#define SDMMC_MINTSTS_SDIO_INTERRUPT_SHIFT                 (24U)
#define SDMMC_MINTSTS_SDIO_INTERRUPT_MASK                  (0x1U << SDMMC_MINTSTS_SDIO_INTERRUPT_SHIFT)                 /* 0x01000000 */
/* RINTSTS */
#define SDMMC_RINTSTS_INT_STATUS_SHIFT                     (0U)
#define SDMMC_RINTSTS_INT_STATUS_MASK                      (0xFFFFU << SDMMC_RINTSTS_INT_STATUS_SHIFT)                  /* 0x0000FFFF */
#define SDMMC_RINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT         (16U)
#define SDMMC_RINTSTS_DATA_NOBUSY_INT_STATUS_MASK          (0x1U << SDMMC_RINTSTS_DATA_NOBUSY_INT_STATUS_SHIFT)         /* 0x00010000 */
#define SDMMC_RINTSTS_SDIO_INTERRUPT_SHIFT                 (24U)
#define SDMMC_RINTSTS_SDIO_INTERRUPT_MASK                  (0x1U << SDMMC_RINTSTS_SDIO_INTERRUPT_SHIFT)                 /* 0x01000000 */
/* STATUS */
#define SDMMC_STATUS_FIFO_RX_WATERMARK_SHIFT               (0U)
#define SDMMC_STATUS_FIFO_RX_WATERMARK_MASK                (0x1U << SDMMC_STATUS_FIFO_RX_WATERMARK_SHIFT)               /* 0x00000001 */
#define SDMMC_STATUS_FIFO_TX_WATERMARK_SHIFT               (1U)
#define SDMMC_STATUS_FIFO_TX_WATERMARK_MASK                (0x1U << SDMMC_STATUS_FIFO_TX_WATERMARK_SHIFT)               /* 0x00000002 */
#define SDMMC_STATUS_FIFO_EMPTY_SHIFT                      (2U)
#define SDMMC_STATUS_FIFO_EMPTY_MASK                       (0x1U << SDMMC_STATUS_FIFO_EMPTY_SHIFT)                      /* 0x00000004 */
#define SDMMC_STATUS_FIFO_FULL_SHIFT                       (3U)
#define SDMMC_STATUS_FIFO_FULL_MASK                        (0x1U << SDMMC_STATUS_FIFO_FULL_SHIFT)                       /* 0x00000008 */
#define SDMMC_STATUS_COMMAND_FSM_STATES_SHIFT              (4U)
#define SDMMC_STATUS_COMMAND_FSM_STATES_MASK               (0xFU << SDMMC_STATUS_COMMAND_FSM_STATES_SHIFT)              /* 0x000000F0 */
#define SDMMC_STATUS_DATA_3_STATUS_SHIFT                   (8U)
#define SDMMC_STATUS_DATA_3_STATUS_MASK                    (0x1U << SDMMC_STATUS_DATA_3_STATUS_SHIFT)                   /* 0x00000100 */
#define SDMMC_STATUS_DATA_BUSY_SHIFT                       (9U)
#define SDMMC_STATUS_DATA_BUSY_MASK                        (0x1U << SDMMC_STATUS_DATA_BUSY_SHIFT)                       /* 0x00000200 */
#define SDMMC_STATUS_DATA_STATE_MC_BUSY_SHIFT              (10U)
#define SDMMC_STATUS_DATA_STATE_MC_BUSY_MASK               (0x1U << SDMMC_STATUS_DATA_STATE_MC_BUSY_SHIFT)              /* 0x00000400 */
#define SDMMC_STATUS_RESPONSE_INDEX_SHIFT                  (11U)
#define SDMMC_STATUS_RESPONSE_INDEX_MASK                   (0x3FU << SDMMC_STATUS_RESPONSE_INDEX_SHIFT)                 /* 0x0001F800 */
#define SDMMC_STATUS_FIFO_COUNT_SHIFT                      (17U)
#define SDMMC_STATUS_FIFO_COUNT_MASK                       (0x1FFFU << SDMMC_STATUS_FIFO_COUNT_SHIFT)                   /* 0x3FFE0000 */
#define SDMMC_STATUS_DMA_ACK_SHIFT                         (30U)
#define SDMMC_STATUS_DMA_ACK_MASK                          (0x1U << SDMMC_STATUS_DMA_ACK_SHIFT)                         /* 0x40000000 */
#define SDMMC_STATUS_DMA_REQ_SHIFT                         (31U)
#define SDMMC_STATUS_DMA_REQ_MASK                          (0x1U << SDMMC_STATUS_DMA_REQ_SHIFT)                         /* 0x80000000 */
/* FIFOTH */
#define SDMMC_FIFOTH_TX_WMARK_SHIFT                        (0U)
#define SDMMC_FIFOTH_TX_WMARK_MASK                         (0xFFFU << SDMMC_FIFOTH_TX_WMARK_SHIFT)                      /* 0x00000FFF */
#define SDMMC_FIFOTH_RX_WMARK_SHIFT                        (16U)
#define SDMMC_FIFOTH_RX_WMARK_MASK                         (0xFFFU << SDMMC_FIFOTH_RX_WMARK_SHIFT)                      /* 0x0FFF0000 */
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_SHIFT    (28U)
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_MASK     (0x7U << SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_SHIFT)    /* 0x70000000 */
/* CDETECT */
#define SDMMC_CDETECT_CARD_DETECT_N_SHIFT                  (0U)
#define SDMMC_CDETECT_CARD_DETECT_N_MASK                   (0x1U << SDMMC_CDETECT_CARD_DETECT_N_SHIFT)                  /* 0x00000001 */
/* WRTPRT */
#define SDMMC_WRTPRT_WRITE_PROTECT_SHIFT                   (0U)
#define SDMMC_WRTPRT_WRITE_PROTECT_MASK                    (0x1U << SDMMC_WRTPRT_WRITE_PROTECT_SHIFT)                   /* 0x00000001 */
/* TCBCNT */
#define SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SHIFT           (0U)
#define SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_MASK            (0xFFFFFFFFU << SDMMC_TCBCNT_TRANS_CARD_BYTE_COUNT_SHIFT)    /* 0xFFFFFFFF */
/* TBBCNT */
#define SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SHIFT           (0U)
#define SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_MASK            (0xFFFFFFFFU << SDMMC_TBBCNT_TRANS_FIFO_BYTE_COUNT_SHIFT)    /* 0xFFFFFFFF */
/* DEBNCE */
#define SDMMC_DEBNCE_DEBOUNCE_COUNT_SHIFT                  (0U)
#define SDMMC_DEBNCE_DEBOUNCE_COUNT_MASK                   (0xFFFFFFU << SDMMC_DEBNCE_DEBOUNCE_COUNT_SHIFT)             /* 0x00FFFFFF */
/* USRID */
#define SDMMC_USRID_USRID_SHIFT                            (0U)
#define SDMMC_USRID_USRID_MASK                             (0xFFFFFFFFU << SDMMC_USRID_USRID_SHIFT)                     /* 0xFFFFFFFF */
/* VERID */
#define SDMMC_VERID_VERID_SHIFT                            (0U)
#define SDMMC_VERID_VERID_MASK                             (0xFFFFFFFFU << SDMMC_VERID_VERID_SHIFT)                     /* 0xFFFFFFFF */
/* HCON */
#define SDMMC_HCON_CARD_TYPE_SHIFT                         (0U)
#define SDMMC_HCON_CARD_TYPE_MASK                          (0x1U << SDMMC_HCON_CARD_TYPE_SHIFT)                         /* 0x00000001 */
#define SDMMC_HCON_CARD_NUM_SHIFT                          (1U)
#define SDMMC_HCON_CARD_NUM_MASK                           (0x1FU << SDMMC_HCON_CARD_NUM_SHIFT)                         /* 0x0000003E */
#define SDMMC_HCON_H_BUS_TYPE_SHIFT                        (6U)
#define SDMMC_HCON_H_BUS_TYPE_MASK                         (0x1U << SDMMC_HCON_H_BUS_TYPE_SHIFT)                        /* 0x00000040 */
#define SDMMC_HCON_H_DATA_WIDTH_SHIFT                      (7U)
#define SDMMC_HCON_H_DATA_WIDTH_MASK                       (0x7U << SDMMC_HCON_H_DATA_WIDTH_SHIFT)                      /* 0x00000380 */
#define SDMMC_HCON_H_ADDR_WIDTH_SHIFT                      (10U)
#define SDMMC_HCON_H_ADDR_WIDTH_MASK                       (0x3FU << SDMMC_HCON_H_ADDR_WIDTH_SHIFT)                     /* 0x0000FC00 */
#define SDMMC_HCON_DMA_INTERFACE_SHIFT                     (16U)
#define SDMMC_HCON_DMA_INTERFACE_MASK                      (0x3U << SDMMC_HCON_DMA_INTERFACE_SHIFT)                     /* 0x00030000 */
#define SDMMC_HCON_GE_DMA_DATA_WIDTH_SHIFT                 (18U)
#define SDMMC_HCON_GE_DMA_DATA_WIDTH_MASK                  (0x7U << SDMMC_HCON_GE_DMA_DATA_WIDTH_SHIFT)                 /* 0x001C0000 */
#define SDMMC_HCON_FIFO_RAM_INSIDE_SHIFT                   (21U)
#define SDMMC_HCON_FIFO_RAM_INSIDE_MASK                    (0x1U << SDMMC_HCON_FIFO_RAM_INSIDE_SHIFT)                   /* 0x00200000 */
#define SDMMC_HCON_IMPL_HOLD_REG_SHIFT                     (22U)
#define SDMMC_HCON_IMPL_HOLD_REG_MASK                      (0x1U << SDMMC_HCON_IMPL_HOLD_REG_SHIFT)                     /* 0x00400000 */
#define SDMMC_HCON_SET_CLK_FALSE_PATH_SHIFT                (23U)
#define SDMMC_HCON_SET_CLK_FALSE_PATH_MASK                 (0x1U << SDMMC_HCON_SET_CLK_FALSE_PATH_SHIFT)                /* 0x00800000 */
#define SDMMC_HCON_NUM_CLK_DIV_SHIFT                       (24U)
#define SDMMC_HCON_NUM_CLK_DIV_MASK                        (0x3U << SDMMC_HCON_NUM_CLK_DIV_SHIFT)                       /* 0x03000000 */
#define SDMMC_HCON_AREA_OPTIMIZED_SHIFT                    (26U)
#define SDMMC_HCON_AREA_OPTIMIZED_MASK                     (0x1U << SDMMC_HCON_AREA_OPTIMIZED_SHIFT)                    /* 0x04000000 */
/* UHSREG */
#define SDMMC_UHSREG_DDR_REG_SHIFT                         (16U)
#define SDMMC_UHSREG_DDR_REG_MASK                          (0x1U << SDMMC_UHSREG_DDR_REG_SHIFT)                         /* 0x00010000 */
/* RSTN */
#define SDMMC_RSTN_CARD_RESET_SHIFT                        (0U)
#define SDMMC_RSTN_CARD_RESET_MASK                         (0x1U << SDMMC_RSTN_CARD_RESET_SHIFT)                        /* 0x00000001 */
/* BMOD */
#define SDMMC_BMOD_SWR_SHIFT                               (0U)
#define SDMMC_BMOD_SWR_MASK                                (0x1U << SDMMC_BMOD_SWR_SHIFT)                               /* 0x00000001 */
#define SDMMC_BMOD_FB_SHIFT                                (1U)
#define SDMMC_BMOD_FB_MASK                                 (0x1U << SDMMC_BMOD_FB_SHIFT)                                /* 0x00000002 */
#define SDMMC_BMOD_DSL_SHIFT                               (2U)
#define SDMMC_BMOD_DSL_MASK                                (0x1FU << SDMMC_BMOD_DSL_SHIFT)                              /* 0x0000007C */
#define SDMMC_BMOD_DE_SHIFT                                (7U)
#define SDMMC_BMOD_DE_MASK                                 (0x1U << SDMMC_BMOD_DE_SHIFT)                                /* 0x00000080 */
#define SDMMC_BMOD_PBL_SHIFT                               (8U)
#define SDMMC_BMOD_PBL_MASK                                (0x7U << SDMMC_BMOD_PBL_SHIFT)                               /* 0x00000700 */
/* PLDMND */
#define SDMMC_PLDMND_PD_SHIFT                              (0U)
#define SDMMC_PLDMND_PD_MASK                               (0xFFFFFFFFU << SDMMC_PLDMND_PD_SHIFT)                       /* 0xFFFFFFFF */
/* DBADDR */
#define SDMMC_DBADDR_SBL_SHIFT                             (0U)
#define SDMMC_DBADDR_SBL_MASK                              (0xFFFFFFFFU << SDMMC_DBADDR_SBL_SHIFT)                      /* 0xFFFFFFFF */
/* IDSTS */
#define SDMMC_IDSTS_TI_SHIFT                               (0U)
#define SDMMC_IDSTS_TI_MASK                                (0x1U << SDMMC_IDSTS_TI_SHIFT)                               /* 0x00000001 */
#define SDMMC_IDSTS_RI_SHIFT                               (1U)
#define SDMMC_IDSTS_RI_MASK                                (0x1U << SDMMC_IDSTS_RI_SHIFT)                               /* 0x00000002 */
#define SDMMC_IDSTS_FBE_SHIFT                              (2U)
#define SDMMC_IDSTS_FBE_MASK                               (0x1U << SDMMC_IDSTS_FBE_SHIFT)                              /* 0x00000004 */
#define SDMMC_IDSTS_DUI_SHIFT                              (4U)
#define SDMMC_IDSTS_DUI_MASK                               (0x1U << SDMMC_IDSTS_DUI_SHIFT)                              /* 0x00000010 */
#define SDMMC_IDSTS_CES_SHIFT                              (5U)
#define SDMMC_IDSTS_CES_MASK                               (0x1U << SDMMC_IDSTS_CES_SHIFT)                              /* 0x00000020 */
#define SDMMC_IDSTS_NIS_SHIFT                              (8U)
#define SDMMC_IDSTS_NIS_MASK                               (0x1U << SDMMC_IDSTS_NIS_SHIFT)                              /* 0x00000100 */
#define SDMMC_IDSTS_AIS_SHIFT                              (9U)
#define SDMMC_IDSTS_AIS_MASK                               (0x1U << SDMMC_IDSTS_AIS_SHIFT)                              /* 0x00000200 */
#define SDMMC_IDSTS_EB_SHIFT                               (10U)
#define SDMMC_IDSTS_EB_MASK                                (0x7U << SDMMC_IDSTS_EB_SHIFT)                               /* 0x00001C00 */
#define SDMMC_IDSTS_FSM_SHIFT                              (13U)
#define SDMMC_IDSTS_FSM_MASK                               (0xFU << SDMMC_IDSTS_FSM_SHIFT)                              /* 0x0001E000 */
/* IDINTEN */
#define SDMMC_IDINTEN_TI_SHIFT                             (0U)
#define SDMMC_IDINTEN_TI_MASK                              (0x1U << SDMMC_IDINTEN_TI_SHIFT)                             /* 0x00000001 */
#define SDMMC_IDINTEN_RI_SHIFT                             (1U)
#define SDMMC_IDINTEN_RI_MASK                              (0x1U << SDMMC_IDINTEN_RI_SHIFT)                             /* 0x00000002 */
#define SDMMC_IDINTEN_FBE_SHIFT                            (2U)
#define SDMMC_IDINTEN_FBE_MASK                             (0x1U << SDMMC_IDINTEN_FBE_SHIFT)                            /* 0x00000004 */
#define SDMMC_IDINTEN_DU_SHIFT                             (4U)
#define SDMMC_IDINTEN_DU_MASK                              (0x1U << SDMMC_IDINTEN_DU_SHIFT)                             /* 0x00000010 */
#define SDMMC_IDINTEN_CES_SHIFT                            (5U)
#define SDMMC_IDINTEN_CES_MASK                             (0x1U << SDMMC_IDINTEN_CES_SHIFT)                            /* 0x00000020 */
#define SDMMC_IDINTEN_NI_SHIFT                             (8U)
#define SDMMC_IDINTEN_NI_MASK                              (0x1U << SDMMC_IDINTEN_NI_SHIFT)                             /* 0x00000100 */
#define SDMMC_IDINTEN_AI_SHIFT                             (9U)
#define SDMMC_IDINTEN_AI_MASK                              (0x1U << SDMMC_IDINTEN_AI_SHIFT)                             /* 0x00000200 */
/* DSCADDR */
#define SDMMC_DSCADDR_HDA_SHIFT                            (0U)
#define SDMMC_DSCADDR_HDA_MASK                             (0xFFFFFFFFU << SDMMC_DSCADDR_HDA_SHIFT)                     /* 0xFFFFFFFF */
/* BUFADDR */
#define SDMMC_BUFADDR_HBA_SHIFT                            (0U)
#define SDMMC_BUFADDR_HBA_MASK                             (0xFFFFFFFFU << SDMMC_BUFADDR_HBA_SHIFT)                     /* 0xFFFFFFFF */
/* CARDTHRCTL */
#define SDMMC_CARDTHRCTL_CARD_RD_THRES_EN_SHIFT            (0U)
#define SDMMC_CARDTHRCTL_CARD_RD_THRES_EN_MASK             (0x1U << SDMMC_CARDTHRCTL_CARD_RD_THRES_EN_SHIFT)            /* 0x00000001 */
#define SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_SHIFT             (1U)
#define SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_MASK              (0x1U << SDMMC_CARDTHRCTL_BUSY_CLR_INT_EN_SHIFT)             /* 0x00000002 */
#define SDMMC_CARDTHRCTL_CARD_RD_THRES_SHIFT               (16U)
#define SDMMC_CARDTHRCTL_CARD_RD_THRES_MASK                (0xFFFU << SDMMC_CARDTHRCTL_CARD_RD_THRES_SHIFT)             /* 0x0FFF0000 */
/* BACKEND_POWER */
#define SDMMC_BACKEND_POWER_BACK_END_POWER_SHIFT           (0U)
#define SDMMC_BACKEND_POWER_BACK_END_POWER_MASK            (0x1U << SDMMC_BACKEND_POWER_BACK_END_POWER_SHIFT)           /* 0x00000001 */
/* EMMCDDR_REG */
#define SDMMC_EMMCDDR_REG_HALF_START_BIT_SHIFT             (0U)
#define SDMMC_EMMCDDR_REG_HALF_START_BIT_MASK              (0x1U << SDMMC_EMMCDDR_REG_HALF_START_BIT_SHIFT)             /* 0x00000001 */
/* RDYINT_GEN */
#define SDMMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_SHIFT           (0U)
#define SDMMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_MASK            (0xFFU << SDMMC_RDYINT_GEN_RDYINT_GEN_MAXVAL_SHIFT)          /* 0x000000FF */
#define SDMMC_RDYINT_GEN_RDYINT_GEN_WORKING_SHIFT          (8U)
#define SDMMC_RDYINT_GEN_RDYINT_GEN_WORKING_MASK           (0x1U << SDMMC_RDYINT_GEN_RDYINT_GEN_WORKING_SHIFT)          /* 0x00000100 */
#define SDMMC_RDYINT_GEN_RDYINT_CNT_STATUS_SHIFT           (16U)
#define SDMMC_RDYINT_GEN_RDYINT_CNT_STATUS_MASK            (0xFFU << SDMMC_RDYINT_GEN_RDYINT_CNT_STATUS_SHIFT)          /* 0x00FF0000 */
#define SDMMC_RDYINT_GEN_RDYINT_CNT_FINISH_SHIFT           (24U)
#define SDMMC_RDYINT_GEN_RDYINT_CNT_FINISH_MASK            (0x1U << SDMMC_RDYINT_GEN_RDYINT_CNT_FINISH_SHIFT)           /* 0x01000000 */
/* FIFO_BASE */
#define SDMMC_FIFO_BASE_FIFO_BASE_ADDR_SHIFT               (0U)
#define SDMMC_FIFO_BASE_FIFO_BASE_ADDR_MASK                (0xFFFFFFFFU << SDMMC_FIFO_BASE_FIFO_BASE_ADDR_SHIFT)        /* 0xFFFFFFFF */
/*****************************************CRYPTO*****************************************/
/* CLK_CTL */
#define CRYPTO_CLK_CTL_AUTO_CLKGATE_EN_SHIFT               (0U)
#define CRYPTO_CLK_CTL_AUTO_CLKGATE_EN_MASK                (0x1U << CRYPTO_CLK_CTL_AUTO_CLKGATE_EN_SHIFT)               /* 0x00000001 */
/* RST_CTL */
#define CRYPTO_RST_CTL_SW_CC_RESET_SHIFT                   (0U)
#define CRYPTO_RST_CTL_SW_CC_RESET_MASK                    (0x1U << CRYPTO_RST_CTL_SW_CC_RESET_SHIFT)                   /* 0x00000001 */
#define CRYPTO_RST_CTL_SW_RNG_RESET_SHIFT                  (1U)
#define CRYPTO_RST_CTL_SW_RNG_RESET_MASK                   (0x1U << CRYPTO_RST_CTL_SW_RNG_RESET_SHIFT)                  /* 0x00000002 */
#define CRYPTO_RST_CTL_SW_PKA_RESET_SHIFT                  (2U)
#define CRYPTO_RST_CTL_SW_PKA_RESET_MASK                   (0x1U << CRYPTO_RST_CTL_SW_PKA_RESET_SHIFT)                  /* 0x00000004 */
/* DMA_INT_EN */
#define CRYPTO_DMA_INT_EN_LIST_DONE_INT_EN_SHIFT           (0U)
#define CRYPTO_DMA_INT_EN_LIST_DONE_INT_EN_MASK            (0x1U << CRYPTO_DMA_INT_EN_LIST_DONE_INT_EN_SHIFT)           /* 0x00000001 */
#define CRYPTO_DMA_INT_EN_DST_ITEM_DONE_INT_EN_SHIFT       (1U)
#define CRYPTO_DMA_INT_EN_DST_ITEM_DONE_INT_EN_MASK        (0x1U << CRYPTO_DMA_INT_EN_DST_ITEM_DONE_INT_EN_SHIFT)       /* 0x00000002 */
#define CRYPTO_DMA_INT_EN_SRC_ITEM_DONE_INT_EN_SHIFT       (2U)
#define CRYPTO_DMA_INT_EN_SRC_ITEM_DONE_INT_EN_MASK        (0x1U << CRYPTO_DMA_INT_EN_SRC_ITEM_DONE_INT_EN_SHIFT)       /* 0x00000004 */
#define CRYPTO_DMA_INT_EN_DST_ERR_INT_EN_SHIFT             (3U)
#define CRYPTO_DMA_INT_EN_DST_ERR_INT_EN_MASK              (0x1U << CRYPTO_DMA_INT_EN_DST_ERR_INT_EN_SHIFT)             /* 0x00000008 */
#define CRYPTO_DMA_INT_EN_SRC_ERR_INT_EN_SHIFT             (4U)
#define CRYPTO_DMA_INT_EN_SRC_ERR_INT_EN_MASK              (0x1U << CRYPTO_DMA_INT_EN_SRC_ERR_INT_EN_SHIFT)             /* 0x00000010 */
#define CRYPTO_DMA_INT_EN_LIST_ERR_INT_EN_SHIFT            (5U)
#define CRYPTO_DMA_INT_EN_LIST_ERR_INT_EN_MASK             (0x1U << CRYPTO_DMA_INT_EN_LIST_ERR_INT_EN_SHIFT)            /* 0x00000020 */
#define CRYPTO_DMA_INT_EN_ZERO_LEN_INT_EN_SHIFT            (6U)
#define CRYPTO_DMA_INT_EN_ZERO_LEN_INT_EN_MASK             (0x1U << CRYPTO_DMA_INT_EN_ZERO_LEN_INT_EN_SHIFT)            /* 0x00000040 */
/* DMA_INT_ST */
#define CRYPTO_DMA_INT_ST_LIST_DONE_SHIFT                  (0U)
#define CRYPTO_DMA_INT_ST_LIST_DONE_MASK                   (0x1U << CRYPTO_DMA_INT_ST_LIST_DONE_SHIFT)                  /* 0x00000001 */
#define CRYPTO_DMA_INT_ST_DST_ITEM_DONE_SHIFT              (1U)
#define CRYPTO_DMA_INT_ST_DST_ITEM_DONE_MASK               (0x1U << CRYPTO_DMA_INT_ST_DST_ITEM_DONE_SHIFT)              /* 0x00000002 */
#define CRYPTO_DMA_INT_ST_SRC_ITEM_DONE_SHIFT              (2U)
#define CRYPTO_DMA_INT_ST_SRC_ITEM_DONE_MASK               (0x1U << CRYPTO_DMA_INT_ST_SRC_ITEM_DONE_SHIFT)              /* 0x00000004 */
#define CRYPTO_DMA_INT_ST_DST_ERR_SHIFT                    (3U)
#define CRYPTO_DMA_INT_ST_DST_ERR_MASK                     (0x1U << CRYPTO_DMA_INT_ST_DST_ERR_SHIFT)                    /* 0x00000008 */
#define CRYPTO_DMA_INT_ST_SRC_ERR_SHIFT                    (4U)
#define CRYPTO_DMA_INT_ST_SRC_ERR_MASK                     (0x1U << CRYPTO_DMA_INT_ST_SRC_ERR_SHIFT)                    /* 0x00000010 */
#define CRYPTO_DMA_INT_ST_LIST_ERR_SHIFT                   (5U)
#define CRYPTO_DMA_INT_ST_LIST_ERR_MASK                    (0x1U << CRYPTO_DMA_INT_ST_LIST_ERR_SHIFT)                   /* 0x00000020 */
#define CRYPTO_DMA_INT_ST_ZERO_LEN_SHIFT                   (6U)
#define CRYPTO_DMA_INT_ST_ZERO_LEN_MASK                    (0x1U << CRYPTO_DMA_INT_ST_ZERO_LEN_SHIFT)                   /* 0x00000040 */
/* DMA_CTL */
#define CRYPTO_DMA_CTL_DMA_START_SHIFT                     (0U)
#define CRYPTO_DMA_CTL_DMA_START_MASK                      (0x1U << CRYPTO_DMA_CTL_DMA_START_SHIFT)                     /* 0x00000001 */
#define CRYPTO_DMA_CTL_DMA_RESTART_SHIFT                   (1U)
#define CRYPTO_DMA_CTL_DMA_RESTART_MASK                    (0x1U << CRYPTO_DMA_CTL_DMA_RESTART_SHIFT)                   /* 0x00000002 */
/* DMA_LLI_ADDR */
#define CRYPTO_DMA_LLI_ADDR_DMA_LLI_ADDR_SHIFT             (3U)
#define CRYPTO_DMA_LLI_ADDR_DMA_LLI_ADDR_MASK              (0x1FFFFFFFU << CRYPTO_DMA_LLI_ADDR_DMA_LLI_ADDR_SHIFT)      /* 0xFFFFFFF8 */
/* DMA_ST */
#define CRYPTO_DMA_ST_DMA_BUSY_SHIFT                       (0U)
#define CRYPTO_DMA_ST_DMA_BUSY_MASK                        (0x1U << CRYPTO_DMA_ST_DMA_BUSY_SHIFT)                       /* 0x00000001 */
/* DMA_STATE */
#define CRYPTO_DMA_STATE_DMA_DST_STATE_SHIFT               (0U)
#define CRYPTO_DMA_STATE_DMA_DST_STATE_MASK                (0x3U << CRYPTO_DMA_STATE_DMA_DST_STATE_SHIFT)               /* 0x00000003 */
#define CRYPTO_DMA_STATE_DMA_SRC_STATE_SHIFT               (2U)
#define CRYPTO_DMA_STATE_DMA_SRC_STATE_MASK                (0x3U << CRYPTO_DMA_STATE_DMA_SRC_STATE_SHIFT)               /* 0x0000000C */
#define CRYPTO_DMA_STATE_DMA_LLI_STATE_SHIFT               (4U)
#define CRYPTO_DMA_STATE_DMA_LLI_STATE_MASK                (0x3U << CRYPTO_DMA_STATE_DMA_LLI_STATE_SHIFT)               /* 0x00000030 */
/* DMA_LLI_RADDR */
#define CRYPTO_DMA_LLI_RADDR_DMA_LLI_RADDR_SHIFT           (0U)
#define CRYPTO_DMA_LLI_RADDR_DMA_LLI_RADDR_MASK            (0xFFFFFFFFU << CRYPTO_DMA_LLI_RADDR_DMA_LLI_RADDR_SHIFT)    /* 0xFFFFFFFF */
/* DMA_SRC_RADDR */
#define CRYPTO_DMA_SRC_RADDR_DMA_SRC_RADDR_SHIFT           (0U)
#define CRYPTO_DMA_SRC_RADDR_DMA_SRC_RADDR_MASK            (0xFFFFFFFFU << CRYPTO_DMA_SRC_RADDR_DMA_SRC_RADDR_SHIFT)    /* 0xFFFFFFFF */
/* DMA_DST_WADDR */
#define CRYPTO_DMA_DST_WADDR_DMA_DST_WADDR_SHIFT           (0U)
#define CRYPTO_DMA_DST_WADDR_DMA_DST_WADDR_MASK            (0xFFFFFFFFU << CRYPTO_DMA_DST_WADDR_DMA_DST_WADDR_SHIFT)    /* 0xFFFFFFFF */
/* DMA_ITEM_ID */
#define CRYPTO_DMA_ITEM_ID_DMA_ITEM_ID_SHIFT               (0U)
#define CRYPTO_DMA_ITEM_ID_DMA_ITEM_ID_MASK                (0xFFU << CRYPTO_DMA_ITEM_ID_DMA_ITEM_ID_SHIFT)              /* 0x000000FF */
/* FIFO_CTL */
#define CRYPTO_FIFO_CTL_DIN_BYTESWAP_SHIFT                 (0U)
#define CRYPTO_FIFO_CTL_DIN_BYTESWAP_MASK                  (0x1U << CRYPTO_FIFO_CTL_DIN_BYTESWAP_SHIFT)                 /* 0x00000001 */
#define CRYPTO_FIFO_CTL_DOUT_BYTESWAP_SHIFT                (1U)
#define CRYPTO_FIFO_CTL_DOUT_BYTESWAP_MASK                 (0x1U << CRYPTO_FIFO_CTL_DOUT_BYTESWAP_SHIFT)                /* 0x00000002 */
/* BC_CTL */
#define CRYPTO_BC_CTL_BC_ENABLE_SHIFT                      (0U)
#define CRYPTO_BC_CTL_BC_ENABLE_MASK                       (0x1U << CRYPTO_BC_CTL_BC_ENABLE_SHIFT)                      /* 0x00000001 */
#define CRYPTO_BC_CTL_DECRYPT_SHIFT                        (1U)
#define CRYPTO_BC_CTL_DECRYPT_MASK                         (0x1U << CRYPTO_BC_CTL_DECRYPT_SHIFT)                        /* 0x00000002 */
#define CRYPTO_BC_CTL_KEY_SIZE_SHIFT                       (2U)
#define CRYPTO_BC_CTL_KEY_SIZE_MASK                        (0x3U << CRYPTO_BC_CTL_KEY_SIZE_SHIFT)                       /* 0x0000000C */
#define CRYPTO_BC_CTL_MODE_SHIFT                           (4U)
#define CRYPTO_BC_CTL_MODE_MASK                            (0xFU << CRYPTO_BC_CTL_MODE_SHIFT)                           /* 0x000000F0 */
#define CRYPTO_BC_CTL_BC_CIPHER_SEL_SHIFT                  (8U)
#define CRYPTO_BC_CTL_BC_CIPHER_SEL_MASK                   (0x3U << CRYPTO_BC_CTL_BC_CIPHER_SEL_SHIFT)                  /* 0x00000300 */
/* HASH_CTL */
#define CRYPTO_HASH_CTL_HASH_ENABLE_SHIFT                  (0U)
#define CRYPTO_HASH_CTL_HASH_ENABLE_MASK                   (0x1U << CRYPTO_HASH_CTL_HASH_ENABLE_SHIFT)                  /* 0x00000001 */
#define CRYPTO_HASH_CTL_HASH_SRC_SEL_SHIFT                 (1U)
#define CRYPTO_HASH_CTL_HASH_SRC_SEL_MASK                  (0x1U << CRYPTO_HASH_CTL_HASH_SRC_SEL_SHIFT)                 /* 0x00000002 */
#define CRYPTO_HASH_CTL_HW_PAD_ENABLE_SHIFT                (2U)
#define CRYPTO_HASH_CTL_HW_PAD_ENABLE_MASK                 (0x1U << CRYPTO_HASH_CTL_HW_PAD_ENABLE_SHIFT)                /* 0x00000004 */
#define CRYPTO_HASH_CTL_HMAC_ENABLE_SHIFT                  (3U)
#define CRYPTO_HASH_CTL_HMAC_ENABLE_MASK                   (0x1U << CRYPTO_HASH_CTL_HMAC_ENABLE_SHIFT)                  /* 0x00000008 */
#define CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT              (4U)
#define CRYPTO_HASH_CTL_HASH_CIPHER_SEL_MASK               (0xFU << CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT)              /* 0x000000F0 */
/* CIPHER_ST */
#define CRYPTO_CIPHER_ST_BLOCK_CIPHER_BUSY_SHIFT           (0U)
#define CRYPTO_CIPHER_ST_BLOCK_CIPHER_BUSY_MASK            (0x1U << CRYPTO_CIPHER_ST_BLOCK_CIPHER_BUSY_SHIFT)           /* 0x00000001 */
#define CRYPTO_CIPHER_ST_HASH_BUSY_SHIFT                   (1U)
#define CRYPTO_CIPHER_ST_HASH_BUSY_MASK                    (0x1U << CRYPTO_CIPHER_ST_HASH_BUSY_SHIFT)                   /* 0x00000002 */
#define CRYPTO_CIPHER_ST_OTP_KEY_VALID_SHIFT               (2U)
#define CRYPTO_CIPHER_ST_OTP_KEY_VALID_MASK                (0x1U << CRYPTO_CIPHER_ST_OTP_KEY_VALID_SHIFT)               /* 0x00000004 */
/* CIPHER_STATE */
#define CRYPTO_CIPHER_STATE_SERIAL_STATE_SHIFT             (0U)
#define CRYPTO_CIPHER_STATE_SERIAL_STATE_MASK              (0x3U << CRYPTO_CIPHER_STATE_SERIAL_STATE_SHIFT)             /* 0x00000003 */
#define CRYPTO_CIPHER_STATE_MAC_STATE_SHIFT                (2U)
#define CRYPTO_CIPHER_STATE_MAC_STATE_MASK                 (0x3U << CRYPTO_CIPHER_STATE_MAC_STATE_SHIFT)                /* 0x0000000C */
#define CRYPTO_CIPHER_STATE_PARALLEL_STATE_SHIFT           (4U)
#define CRYPTO_CIPHER_STATE_PARALLEL_STATE_MASK            (0x3U << CRYPTO_CIPHER_STATE_PARALLEL_STATE_SHIFT)           /* 0x00000030 */
#define CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT                (6U)
#define CRYPTO_CIPHER_STATE_CCM_STATE_MASK                 (0x3U << CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT)                /* 0x000000C0 */
#define CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT                (8U)
#define CRYPTO_CIPHER_STATE_GCM_STATE_MASK                 (0x3U << CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT)                /* 0x00000300 */
#define CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT               (10U)
#define CRYPTO_CIPHER_STATE_HASH_STATE_MASK                (0x1FU << CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT)              /* 0x00007C00 */
/* CHN_IV_0 */
#define CRYPTO_CHN_IV_0_CHN_IV_0_SHIFT                     (0U)
#define CRYPTO_CHN_IV_0_CHN_IV_0_MASK                      (0xFFFFFFFFU << CRYPTO_CHN_IV_0_CHN_IV_0_SHIFT)              /* 0xFFFFFFFF */
/* CHN_IV_1 */
#define CRYPTO_CHN_IV_1_CHN_IV_1_SHIFT                     (0U)
#define CRYPTO_CHN_IV_1_CHN_IV_1_MASK                      (0xFFFFFFFFU << CRYPTO_CHN_IV_1_CHN_IV_1_SHIFT)              /* 0xFFFFFFFF */
/* CHN_IV_2 */
#define CRYPTO_CHN_IV_2_CHN_IV_2_SHIFT                     (0U)
#define CRYPTO_CHN_IV_2_CHN_IV_2_MASK                      (0xFFFFFFFFU << CRYPTO_CHN_IV_2_CHN_IV_2_SHIFT)              /* 0xFFFFFFFF */
/* CHN_IV_3 */
#define CRYPTO_CHN_IV_3_CHN_IV_3_SHIFT                     (0U)
#define CRYPTO_CHN_IV_3_CHN_IV_3_MASK                      (0xFFFFFFFFU << CRYPTO_CHN_IV_3_CHN_IV_3_SHIFT)              /* 0xFFFFFFFF */
/* CHN_KEY_0 */
#define CRYPTO_CHN_KEY_0_CHN_KEY_0_SHIFT                   (0U)
#define CRYPTO_CHN_KEY_0_CHN_KEY_0_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_KEY_0_CHN_KEY_0_SHIFT)            /* 0xFFFFFFFF */
/* CHN_KEY_1 */
#define CRYPTO_CHN_KEY_1_CHN_KEY_1_SHIFT                   (0U)
#define CRYPTO_CHN_KEY_1_CHN_KEY_1_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_KEY_1_CHN_KEY_1_SHIFT)            /* 0xFFFFFFFF */
/* CHN_KEY_2 */
#define CRYPTO_CHN_KEY_2_CHN_KEY_2_SHIFT                   (0U)
#define CRYPTO_CHN_KEY_2_CHN_KEY_2_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_KEY_2_CHN_KEY_2_SHIFT)            /* 0xFFFFFFFF */
/* CHN_KEY_3 */
#define CRYPTO_CHN_KEY_3_CHN_KEY_3_SHIFT                   (0U)
#define CRYPTO_CHN_KEY_3_CHN_KEY_3_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_KEY_3_CHN_KEY_3_SHIFT)            /* 0xFFFFFFFF */
/* CHN_PKEY_0 */
#define CRYPTO_CHN_PKEY_0_CHN_PKEY_0_SHIFT                 (0U)
#define CRYPTO_CHN_PKEY_0_CHN_PKEY_0_MASK                  (0xFFFFFFFFU << CRYPTO_CHN_PKEY_0_CHN_PKEY_0_SHIFT)          /* 0xFFFFFFFF */
/* CHN_PKEY_1 */
#define CRYPTO_CHN_PKEY_1_CHN_PKEY_1_SHIFT                 (0U)
#define CRYPTO_CHN_PKEY_1_CHN_PKEY_1_MASK                  (0xFFFFFFFFU << CRYPTO_CHN_PKEY_1_CHN_PKEY_1_SHIFT)          /* 0xFFFFFFFF */
/* CHN_PKEY_2 */
#define CRYPTO_CHN_PKEY_2_CHN_PKEY_2_SHIFT                 (0U)
#define CRYPTO_CHN_PKEY_2_CHN_PKEY_2_MASK                  (0xFFFFFFFFU << CRYPTO_CHN_PKEY_2_CHN_PKEY_2_SHIFT)          /* 0xFFFFFFFF */
/* CHN_PKEY_3 */
#define CRYPTO_CHN_PKEY_3_CHN_KEY_3_SHIFT                  (0U)
#define CRYPTO_CHN_PKEY_3_CHN_KEY_3_MASK                   (0xFFFFFFFFU << CRYPTO_CHN_PKEY_3_CHN_KEY_3_SHIFT)           /* 0xFFFFFFFF */
/* CHN_PC_LEN_0 */
#define CRYPTO_CHN_PC_LEN_0_CHN_PC_LEN_0_SHIFT             (0U)
#define CRYPTO_CHN_PC_LEN_0_CHN_PC_LEN_0_MASK              (0xFFFFFFFFU << CRYPTO_CHN_PC_LEN_0_CHN_PC_LEN_0_SHIFT)      /* 0xFFFFFFFF */
/* CHN_PC_LEN_1 */
#define CRYPTO_CHN_PC_LEN_1_CHN_PC_LEN_1_SHIFT             (0U)
#define CRYPTO_CHN_PC_LEN_1_CHN_PC_LEN_1_MASK              (0x1FFFFFFFU << CRYPTO_CHN_PC_LEN_1_CHN_PC_LEN_1_SHIFT)      /* 0x1FFFFFFF */
/* CHN_ADA_LEN_0 */
#define CRYPTO_CHN_ADA_LEN_0_CHN_ADA_LEN_0_SHIFT           (0U)
#define CRYPTO_CHN_ADA_LEN_0_CHN_ADA_LEN_0_MASK            (0xFFFFFFFFU << CRYPTO_CHN_ADA_LEN_0_CHN_ADA_LEN_0_SHIFT)    /* 0xFFFFFFFF */
/* CHN_ADA_LEN_1 */
#define CRYPTO_CHN_ADA_LEN_1_CHN_ADA_LEN_1_SHIFT           (0U)
#define CRYPTO_CHN_ADA_LEN_1_CHN_ADA_LEN_1_MASK            (0x1FFFFFFFU << CRYPTO_CHN_ADA_LEN_1_CHN_ADA_LEN_1_SHIFT)    /* 0x1FFFFFFF */
/* CHN_IV_LEN_0 */
#define CRYPTO_CHN_IV_LEN_0_CHN_IV_LEN_SHIFT               (0U)
#define CRYPTO_CHN_IV_LEN_0_CHN_IV_LEN_MASK                (0x1FU << CRYPTO_CHN_IV_LEN_0_CHN_IV_LEN_SHIFT)              /* 0x0000001F */
/* CHN_TAG_0 */
#define CRYPTO_CHN_TAG_0_CHN_TAG_0_SHIFT                   (0U)
#define CRYPTO_CHN_TAG_0_CHN_TAG_0_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_TAG_0_CHN_TAG_0_SHIFT)            /* 0xFFFFFFFF */
/* CHN_TAG_1 */
#define CRYPTO_CHN_TAG_1_CHN_TAG_1_SHIFT                   (0U)
#define CRYPTO_CHN_TAG_1_CHN_TAG_1_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_TAG_1_CHN_TAG_1_SHIFT)            /* 0xFFFFFFFF */
/* CHN_TAG_2 */
#define CRYPTO_CHN_TAG_2_CHN_TAG_2_SHIFT                   (0U)
#define CRYPTO_CHN_TAG_2_CHN_TAG_2_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_TAG_2_CHN_TAG_2_SHIFT)            /* 0xFFFFFFFF */
/* CHN_TAG_3 */
#define CRYPTO_CHN_TAG_3_CHN_TAG_3_SHIFT                   (0U)
#define CRYPTO_CHN_TAG_3_CHN_TAG_3_MASK                    (0xFFFFFFFFU << CRYPTO_CHN_TAG_3_CHN_TAG_3_SHIFT)            /* 0xFFFFFFFF */
/* HASH_DOUT_0 */
#define CRYPTO_HASH_DOUT_0_HASH_DOUT_0_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_0_HASH_DOUT_0_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_0_HASH_DOUT_0_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_1 */
#define CRYPTO_HASH_DOUT_1_HASH_DOUT_1_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_1_HASH_DOUT_1_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_1_HASH_DOUT_1_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_2 */
#define CRYPTO_HASH_DOUT_2_HASH_DOUT_2_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_2_HASH_DOUT_2_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_2_HASH_DOUT_2_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_3 */
#define CRYPTO_HASH_DOUT_3_HASH_DOUT_3_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_3_HASH_DOUT_3_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_3_HASH_DOUT_3_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_4 */
#define CRYPTO_HASH_DOUT_4_HASH_DOUT_4_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_4_HASH_DOUT_4_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_4_HASH_DOUT_4_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_5 */
#define CRYPTO_HASH_DOUT_5_HASH_DOUT_5_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_5_HASH_DOUT_5_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_5_HASH_DOUT_5_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_6 */
#define CRYPTO_HASH_DOUT_6_HASH_DOUT_6_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_6_HASH_DOUT_6_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_6_HASH_DOUT_6_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_7 */
#define CRYPTO_HASH_DOUT_7_HASH_DOUT_7_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_7_HASH_DOUT_7_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_7_HASH_DOUT_7_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_8 */
#define CRYPTO_HASH_DOUT_8_HASH_DOUT_8_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_8_HASH_DOUT_8_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_8_HASH_DOUT_8_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_9 */
#define CRYPTO_HASH_DOUT_9_HASH_DOUT_9_SHIFT               (0U)
#define CRYPTO_HASH_DOUT_9_HASH_DOUT_9_MASK                (0xFFFFFFFFU << CRYPTO_HASH_DOUT_9_HASH_DOUT_9_SHIFT)        /* 0xFFFFFFFF */
/* HASH_DOUT_10 */
#define CRYPTO_HASH_DOUT_10_HASH_DOUT_10_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_10_HASH_DOUT_10_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_10_HASH_DOUT_10_SHIFT)      /* 0xFFFFFFFF */
/* HASH_DOUT_11 */
#define CRYPTO_HASH_DOUT_11_HASH_DOUT_11_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_11_HASH_DOUT_11_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_11_HASH_DOUT_11_SHIFT)      /* 0xFFFFFFFF */
/* HASH_DOUT_12 */
#define CRYPTO_HASH_DOUT_12_HASH_DOUT_12_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_12_HASH_DOUT_12_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_12_HASH_DOUT_12_SHIFT)      /* 0xFFFFFFFF */
/* HASH_DOUT_13 */
#define CRYPTO_HASH_DOUT_13_HASH_DOUT_13_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_13_HASH_DOUT_13_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_13_HASH_DOUT_13_SHIFT)      /* 0xFFFFFFFF */
/* HASH_DOUT_14 */
#define CRYPTO_HASH_DOUT_14_HASH_DOUT_14_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_14_HASH_DOUT_14_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_14_HASH_DOUT_14_SHIFT)      /* 0xFFFFFFFF */
/* HASH_DOUT_15 */
#define CRYPTO_HASH_DOUT_15_HASH_DOUT_15_SHIFT             (0U)
#define CRYPTO_HASH_DOUT_15_HASH_DOUT_15_MASK              (0xFFFFFFFFU << CRYPTO_HASH_DOUT_15_HASH_DOUT_15_SHIFT)      /* 0xFFFFFFFF */
/* TAG_VALID */
#define CRYPTO_TAG_VALID_CH0_TAG_VALID_SHIFT               (0U)
#define CRYPTO_TAG_VALID_CH0_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH0_TAG_VALID_SHIFT)               /* 0x00000001 */
#define CRYPTO_TAG_VALID_CH1_TAG_VALID_SHIFT               (1U)
#define CRYPTO_TAG_VALID_CH1_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH1_TAG_VALID_SHIFT)               /* 0x00000002 */
#define CRYPTO_TAG_VALID_CH2_TAG_VALID_SHIFT               (2U)
#define CRYPTO_TAG_VALID_CH2_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH2_TAG_VALID_SHIFT)               /* 0x00000004 */
#define CRYPTO_TAG_VALID_CH3_TAG_VALID_SHIFT               (3U)
#define CRYPTO_TAG_VALID_CH3_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH3_TAG_VALID_SHIFT)               /* 0x00000008 */
#define CRYPTO_TAG_VALID_CH4_TAG_VALID_SHIFT               (4U)
#define CRYPTO_TAG_VALID_CH4_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH4_TAG_VALID_SHIFT)               /* 0x00000010 */
#define CRYPTO_TAG_VALID_CH5_TAG_VALID_SHIFT               (5U)
#define CRYPTO_TAG_VALID_CH5_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH5_TAG_VALID_SHIFT)               /* 0x00000020 */
#define CRYPTO_TAG_VALID_CH6_TAG_VALID_SHIFT               (6U)
#define CRYPTO_TAG_VALID_CH6_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH6_TAG_VALID_SHIFT)               /* 0x00000040 */
#define CRYPTO_TAG_VALID_CH7_TAG_VALID_SHIFT               (7U)
#define CRYPTO_TAG_VALID_CH7_TAG_VALID_MASK                (0x1U << CRYPTO_TAG_VALID_CH7_TAG_VALID_SHIFT)               /* 0x00000080 */
/* HASH_VALID */
#define CRYPTO_HASH_VALID_HASH_VALID_SHIFT                 (0U)
#define CRYPTO_HASH_VALID_HASH_VALID_MASK                  (0x1U << CRYPTO_HASH_VALID_HASH_VALID_SHIFT)                 /* 0x00000001 */
/* VERSION */
#define CRYPTO_VERSION_VERSION_NUM_SHIFT                   (0U)
#define CRYPTO_VERSION_VERSION_NUM_MASK                    (0xFFFFFFFFU << CRYPTO_VERSION_VERSION_NUM_SHIFT)            /* 0xFFFFFFFF */
/* RNG_CTL */
#define CRYPTO_RNG_CTL_RNG_START_SHIFT                     (0U)
#define CRYPTO_RNG_CTL_RNG_START_MASK                      (0x1U << CRYPTO_RNG_CTL_RNG_START_SHIFT)                     /* 0x00000001 */
#define CRYPTO_RNG_CTL_RNG_ENABLE_SHIFT                    (1U)
#define CRYPTO_RNG_CTL_RNG_ENABLE_MASK                     (0x1U << CRYPTO_RNG_CTL_RNG_ENABLE_SHIFT)                    /* 0x00000002 */
#define CRYPTO_RNG_CTL_RING_SEL_SHIFT                      (2U)
#define CRYPTO_RNG_CTL_RING_SEL_MASK                       (0x3U << CRYPTO_RNG_CTL_RING_SEL_SHIFT)                      /* 0x0000000C */
#define CRYPTO_RNG_CTL_RNG_LEN_SHIFT                       (4U)
#define CRYPTO_RNG_CTL_RNG_LEN_MASK                        (0x3U << CRYPTO_RNG_CTL_RNG_LEN_SHIFT)                       /* 0x00000030 */
/* RNG_SAMPLE_CNT */
#define CRYPTO_RNG_SAMPLE_CNT_RNG_SAMPLE_CNT_SHIFT         (0U)
#define CRYPTO_RNG_SAMPLE_CNT_RNG_SAMPLE_CNT_MASK          (0xFFFFU << CRYPTO_RNG_SAMPLE_CNT_RNG_SAMPLE_CNT_SHIFT)      /* 0x0000FFFF */
/* RNG_DOUT_0 */
#define CRYPTO_RNG_DOUT_0_RNG_DOUT_0_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_0_RNG_DOUT_0_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_0_RNG_DOUT_0_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_1 */
#define CRYPTO_RNG_DOUT_1_RNG_DOUT_1_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_1_RNG_DOUT_1_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_1_RNG_DOUT_1_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_2 */
#define CRYPTO_RNG_DOUT_2_RNG_DOUT_2_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_2_RNG_DOUT_2_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_2_RNG_DOUT_2_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_3 */
#define CRYPTO_RNG_DOUT_3_RNG_DOUT_3_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_3_RNG_DOUT_3_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_3_RNG_DOUT_3_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_4 */
#define CRYPTO_RNG_DOUT_4_RNG_DOUT_4_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_4_RNG_DOUT_4_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_4_RNG_DOUT_4_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_5 */
#define CRYPTO_RNG_DOUT_5_RNG_DOUT_5_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_5_RNG_DOUT_5_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_5_RNG_DOUT_5_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_6 */
#define CRYPTO_RNG_DOUT_6_RNG_DOUT_6_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_6_RNG_DOUT_6_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_6_RNG_DOUT_6_SHIFT)          /* 0xFFFFFFFF */
/* RNG_DOUT_7 */
#define CRYPTO_RNG_DOUT_7_RNG_DOUT_7_SHIFT                 (0U)
#define CRYPTO_RNG_DOUT_7_RNG_DOUT_7_MASK                  (0xFFFFFFFFU << CRYPTO_RNG_DOUT_7_RNG_DOUT_7_SHIFT)          /* 0xFFFFFFFF */
/* RAM_CTL */
#define CRYPTO_RAM_CTL_RAM_PKA_RDY_SHIFT                   (0U)
#define CRYPTO_RAM_CTL_RAM_PKA_RDY_MASK                    (0x1U << CRYPTO_RAM_CTL_RAM_PKA_RDY_SHIFT)                   /* 0x00000001 */
/* RAM_ST */
#define CRYPTO_RAM_ST_CLK_RAM_RDY_SHIFT                    (0U)
#define CRYPTO_RAM_ST_CLK_RAM_RDY_MASK                     (0x1U << CRYPTO_RAM_ST_CLK_RAM_RDY_SHIFT)                    /* 0x00000001 */
/* DEBUG_CTL */
#define CRYPTO_DEBUG_CTL_PKA_DEBUG_MODE_SHIFT              (0U)
#define CRYPTO_DEBUG_CTL_PKA_DEBUG_MODE_MASK               (0x1U << CRYPTO_DEBUG_CTL_PKA_DEBUG_MODE_SHIFT)              /* 0x00000001 */
/* DEBUG_ST */
#define CRYPTO_DEBUG_ST_PKA_DEBUG_CLK_EN_SHIFT             (0U)
#define CRYPTO_DEBUG_ST_PKA_DEBUG_CLK_EN_MASK              (0x1U << CRYPTO_DEBUG_ST_PKA_DEBUG_CLK_EN_SHIFT)             /* 0x00000001 */
/* DEBUG_MONITOR */
#define CRYPTO_DEBUG_MONITOR_PKA_MONITOR_BUS_SHIFT         (0U)
#define CRYPTO_DEBUG_MONITOR_PKA_MONITOR_BUS_MASK          (0xFFFFFFFFU << CRYPTO_DEBUG_MONITOR_PKA_MONITOR_BUS_SHIFT)  /* 0xFFFFFFFF */
/* PKA_MEM_MAP0 */
#define CRYPTO_PKA_MEM_MAP0_MEMORY_MAP0_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP0_MEMORY_MAP0_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP0_MEMORY_MAP0_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP1 */
#define CRYPTO_PKA_MEM_MAP1_MEMORY_MAP1_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP1_MEMORY_MAP1_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP1_MEMORY_MAP1_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP2 */
#define CRYPTO_PKA_MEM_MAP2_MEMORY_MAP2_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP2_MEMORY_MAP2_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP2_MEMORY_MAP2_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP3 */
#define CRYPTO_PKA_MEM_MAP3_MEMORY_MAP3_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP3_MEMORY_MAP3_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP3_MEMORY_MAP3_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP4 */
#define CRYPTO_PKA_MEM_MAP4_MEMORY_MAP4_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP4_MEMORY_MAP4_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP4_MEMORY_MAP4_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP5 */
#define CRYPTO_PKA_MEM_MAP5_MEMORY_MAP5_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP5_MEMORY_MAP5_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP5_MEMORY_MAP5_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP6 */
#define CRYPTO_PKA_MEM_MAP6_MEMORY_MAP6_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP6_MEMORY_MAP6_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP6_MEMORY_MAP6_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP7 */
#define CRYPTO_PKA_MEM_MAP7_MEMORY_MAP7_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP7_MEMORY_MAP7_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP7_MEMORY_MAP7_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP8 */
#define CRYPTO_PKA_MEM_MAP8_MEMORY_MAP8_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP8_MEMORY_MAP8_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP8_MEMORY_MAP8_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP9 */
#define CRYPTO_PKA_MEM_MAP9_MEMORY_MAP9_SHIFT              (2U)
#define CRYPTO_PKA_MEM_MAP9_MEMORY_MAP9_MASK               (0x3FFU << CRYPTO_PKA_MEM_MAP9_MEMORY_MAP9_SHIFT)            /* 0x00000FFC */
/* PKA_MEM_MAP10 */
#define CRYPTO_PKA_MEM_MAP10_MEMORY_MAP10_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP10_MEMORY_MAP10_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP10_MEMORY_MAP10_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP11 */
#define CRYPTO_PKA_MEM_MAP11_MEMORY_MAP11_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP11_MEMORY_MAP11_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP11_MEMORY_MAP11_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP12 */
#define CRYPTO_PKA_MEM_MAP12_MEMORY_MAP12_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP12_MEMORY_MAP12_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP12_MEMORY_MAP12_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP13 */
#define CRYPTO_PKA_MEM_MAP13_MEMORY_MAP13_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP13_MEMORY_MAP13_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP13_MEMORY_MAP13_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP14 */
#define CRYPTO_PKA_MEM_MAP14_MEMORY_MAP14_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP14_MEMORY_MAP14_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP14_MEMORY_MAP14_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP15 */
#define CRYPTO_PKA_MEM_MAP15_MEMORY_MAP15_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP15_MEMORY_MAP15_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP15_MEMORY_MAP15_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP16 */
#define CRYPTO_PKA_MEM_MAP16_MEMORY_MAP16_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP16_MEMORY_MAP16_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP16_MEMORY_MAP16_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP17 */
#define CRYPTO_PKA_MEM_MAP17_MEMORY_MAP17_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP17_MEMORY_MAP17_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP17_MEMORY_MAP17_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP18 */
#define CRYPTO_PKA_MEM_MAP18_MEMORY_MAP18_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP18_MEMORY_MAP18_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP18_MEMORY_MAP18_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP19 */
#define CRYPTO_PKA_MEM_MAP19_MEMORY_MAP19_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP19_MEMORY_MAP19_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP19_MEMORY_MAP19_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP20 */
#define CRYPTO_PKA_MEM_MAP20_MEMORY_MAP20_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP20_MEMORY_MAP20_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP20_MEMORY_MAP20_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP21 */
#define CRYPTO_PKA_MEM_MAP21_MEMORY_MAP21_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP21_MEMORY_MAP21_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP21_MEMORY_MAP21_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP22 */
#define CRYPTO_PKA_MEM_MAP22_MEMORY_MAP22_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP22_MEMORY_MAP22_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP22_MEMORY_MAP22_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP23 */
#define CRYPTO_PKA_MEM_MAP23_MEMORY_MAP23_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP23_MEMORY_MAP23_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP23_MEMORY_MAP23_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP24 */
#define CRYPTO_PKA_MEM_MAP24_MEMORY_MAP24_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP24_MEMORY_MAP24_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP24_MEMORY_MAP24_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP25 */
#define CRYPTO_PKA_MEM_MAP25_MEMORY_MAP25_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP25_MEMORY_MAP25_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP25_MEMORY_MAP25_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP26 */
#define CRYPTO_PKA_MEM_MAP26_MEMORY_MAP26_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP26_MEMORY_MAP26_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP26_MEMORY_MAP26_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP27 */
#define CRYPTO_PKA_MEM_MAP27_MEMORY_MAP27_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP27_MEMORY_MAP27_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP27_MEMORY_MAP27_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP28 */
#define CRYPTO_PKA_MEM_MAP28_MEMORY_MAP28_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP28_MEMORY_MAP28_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP28_MEMORY_MAP28_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP29 */
#define CRYPTO_PKA_MEM_MAP29_MEMORY_MAP29_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP29_MEMORY_MAP29_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP29_MEMORY_MAP29_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP30 */
#define CRYPTO_PKA_MEM_MAP30_MEMORY_MAP30_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP30_MEMORY_MAP30_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP30_MEMORY_MAP30_SHIFT)          /* 0x00000FFC */
/* PKA_MEM_MAP31 */
#define CRYPTO_PKA_MEM_MAP31_MEMORY_MAP31_SHIFT            (2U)
#define CRYPTO_PKA_MEM_MAP31_MEMORY_MAP31_MASK             (0x3FFU << CRYPTO_PKA_MEM_MAP31_MEMORY_MAP31_SHIFT)          /* 0x00000FFC */
/* PKA_OPCODE */
#define CRYPTO_PKA_OPCODE_TAG_SHIFT                        (0U)
#define CRYPTO_PKA_OPCODE_TAG_MASK                         (0x3FU << CRYPTO_PKA_OPCODE_TAG_SHIFT)                       /* 0x0000003F */
#define CRYPTO_PKA_OPCODE_REG_R_SHIFT                      (6U)
#define CRYPTO_PKA_OPCODE_REG_R_MASK                       (0x3FU << CRYPTO_PKA_OPCODE_REG_R_SHIFT)                     /* 0x00000FC0 */
#define CRYPTO_PKA_OPCODE_REG_B_SHIFT                      (12U)
#define CRYPTO_PKA_OPCODE_REG_B_MASK                       (0x3FU << CRYPTO_PKA_OPCODE_REG_B_SHIFT)                     /* 0x0003F000 */
#define CRYPTO_PKA_OPCODE_REG_A_SHIFT                      (18U)
#define CRYPTO_PKA_OPCODE_REG_A_MASK                       (0x3FU << CRYPTO_PKA_OPCODE_REG_A_SHIFT)                     /* 0x00FC0000 */
#define CRYPTO_PKA_OPCODE_LEN_SHIFT                        (24U)
#define CRYPTO_PKA_OPCODE_LEN_MASK                         (0x7U << CRYPTO_PKA_OPCODE_LEN_SHIFT)                        /* 0x07000000 */
#define CRYPTO_PKA_OPCODE_OPCODE_SHIFT                     (27U)
#define CRYPTO_PKA_OPCODE_OPCODE_MASK                      (0x1FU << CRYPTO_PKA_OPCODE_OPCODE_SHIFT)                    /* 0xF8000000 */
/* N_NP_TO_T1_ADDR */
#define CRYPTO_N_NP_TO_T1_ADDR_REG_N_SHIFT                 (0U)
#define CRYPTO_N_NP_TO_T1_ADDR_REG_N_MASK                  (0x1FU << CRYPTO_N_NP_TO_T1_ADDR_REG_N_SHIFT)                /* 0x0000001F */
#define CRYPTO_N_NP_TO_T1_ADDR_REG_NP_SHIFT                (5U)
#define CRYPTO_N_NP_TO_T1_ADDR_REG_NP_MASK                 (0x1FU << CRYPTO_N_NP_TO_T1_ADDR_REG_NP_SHIFT)               /* 0x000003E0 */
#define CRYPTO_N_NP_TO_T1_ADDR_REG_T0_SHIFT                (10U)
#define CRYPTO_N_NP_TO_T1_ADDR_REG_T0_MASK                 (0x1FU << CRYPTO_N_NP_TO_T1_ADDR_REG_T0_SHIFT)               /* 0x00007C00 */
#define CRYPTO_N_NP_TO_T1_ADDR_REG_T1_SHIFT                (15U)
#define CRYPTO_N_NP_TO_T1_ADDR_REG_T1_MASK                 (0x1FU << CRYPTO_N_NP_TO_T1_ADDR_REG_T1_SHIFT)               /* 0x000F8000 */
/* PKA_STATUS */
#define CRYPTO_PKA_STATUS_PIPE_IS_BUSY_SHIFT               (0U)
#define CRYPTO_PKA_STATUS_PIPE_IS_BUSY_MASK                (0x1U << CRYPTO_PKA_STATUS_PIPE_IS_BUSY_SHIFT)               /* 0x00000001 */
#define CRYPTO_PKA_STATUS_PKA_BUSY_SHIFT                   (1U)
#define CRYPTO_PKA_STATUS_PKA_BUSY_MASK                    (0x1U << CRYPTO_PKA_STATUS_PKA_BUSY_SHIFT)                   /* 0x00000002 */
#define CRYPTO_PKA_STATUS_ALU_OUT_ZERO_SHIFT               (2U)
#define CRYPTO_PKA_STATUS_ALU_OUT_ZERO_MASK                (0x1U << CRYPTO_PKA_STATUS_ALU_OUT_ZERO_SHIFT)               /* 0x00000004 */
#define CRYPTO_PKA_STATUS_ALU_MOD_OVFLW_SHIFT              (3U)
#define CRYPTO_PKA_STATUS_ALU_MOD_OVFLW_MASK               (0x1U << CRYPTO_PKA_STATUS_ALU_MOD_OVFLW_SHIFT)              /* 0x00000008 */
#define CRYPTO_PKA_STATUS_DIV_BY_ZERO_SHIFT                (4U)
#define CRYPTO_PKA_STATUS_DIV_BY_ZERO_MASK                 (0x1U << CRYPTO_PKA_STATUS_DIV_BY_ZERO_SHIFT)                /* 0x00000010 */
#define CRYPTO_PKA_STATUS_ALU_CARRY_SHIFT                  (5U)
#define CRYPTO_PKA_STATUS_ALU_CARRY_MASK                   (0x1U << CRYPTO_PKA_STATUS_ALU_CARRY_SHIFT)                  /* 0x00000020 */
#define CRYPTO_PKA_STATUS_ALU_SIGN_OUT_SHIFT               (6U)
#define CRYPTO_PKA_STATUS_ALU_SIGN_OUT_MASK                (0x1U << CRYPTO_PKA_STATUS_ALU_SIGN_OUT_SHIFT)               /* 0x00000040 */
#define CRYPTO_PKA_STATUS_MODINV_OF_ZERO_SHIFT             (7U)
#define CRYPTO_PKA_STATUS_MODINV_OF_ZERO_MASK              (0x1U << CRYPTO_PKA_STATUS_MODINV_OF_ZERO_SHIFT)             /* 0x00000080 */
#define CRYPTO_PKA_STATUS_PKA_CPU_BUSY_SHIFT               (8U)
#define CRYPTO_PKA_STATUS_PKA_CPU_BUSY_MASK                (0x1U << CRYPTO_PKA_STATUS_PKA_CPU_BUSY_SHIFT)               /* 0x00000100 */
#define CRYPTO_PKA_STATUS_OPCODE_SHIFT                     (9U)
#define CRYPTO_PKA_STATUS_OPCODE_MASK                      (0x1FU << CRYPTO_PKA_STATUS_OPCODE_SHIFT)                    /* 0x00003E00 */
#define CRYPTO_PKA_STATUS_TAG_SHIFT                        (14U)
#define CRYPTO_PKA_STATUS_TAG_MASK                         (0x3FU << CRYPTO_PKA_STATUS_TAG_SHIFT)                       /* 0x000FC000 */
/* PKA_SW_RESET */
#define CRYPTO_PKA_SW_RESET_PKA_SW_RESET_SHIFT             (0U)
#define CRYPTO_PKA_SW_RESET_PKA_SW_RESET_MASK              (0x1U << CRYPTO_PKA_SW_RESET_PKA_SW_RESET_SHIFT)             /* 0x00000001 */
/* PKA_L0 */
#define CRYPTO_PKA_L0_PKA_L0_SHIFT                         (0U)
#define CRYPTO_PKA_L0_PKA_L0_MASK                          (0x1FFFU << CRYPTO_PKA_L0_PKA_L0_SHIFT)                      /* 0x00001FFF */
/* PKA_L1 */
#define CRYPTO_PKA_L1_PKA_L1_SHIFT                         (0U)
#define CRYPTO_PKA_L1_PKA_L1_MASK                          (0x1FFFU << CRYPTO_PKA_L1_PKA_L1_SHIFT)                      /* 0x00001FFF */
/* PKA_L2 */
#define CRYPTO_PKA_L2_PKA_L2_SHIFT                         (0U)
#define CRYPTO_PKA_L2_PKA_L2_MASK                          (0x1FFFU << CRYPTO_PKA_L2_PKA_L2_SHIFT)                      /* 0x00001FFF */
/* PKA_L3 */
#define CRYPTO_PKA_L3_PKA_L3_SHIFT                         (0U)
#define CRYPTO_PKA_L3_PKA_L3_MASK                          (0x1FFFU << CRYPTO_PKA_L3_PKA_L3_SHIFT)                      /* 0x00001FFF */
/* PKA_L4 */
#define CRYPTO_PKA_L4_PKA_L4_SHIFT                         (0U)
#define CRYPTO_PKA_L4_PKA_L4_MASK                          (0x1FFFU << CRYPTO_PKA_L4_PKA_L4_SHIFT)                      /* 0x00001FFF */
/* PKA_L5 */
#define CRYPTO_PKA_L5_PKA_L5_SHIFT                         (0U)
#define CRYPTO_PKA_L5_PKA_L5_MASK                          (0x1FFFU << CRYPTO_PKA_L5_PKA_L5_SHIFT)                      /* 0x00001FFF */
/* PKA_L6 */
#define CRYPTO_PKA_L6_PKA_L6_SHIFT                         (0U)
#define CRYPTO_PKA_L6_PKA_L6_MASK                          (0x1FFFU << CRYPTO_PKA_L6_PKA_L6_SHIFT)                      /* 0x00001FFF */
/* PKA_L7 */
#define CRYPTO_PKA_L7_PKA_L7_SHIFT                         (0U)
#define CRYPTO_PKA_L7_PKA_L7_MASK                          (0x1FFFU << CRYPTO_PKA_L7_PKA_L7_SHIFT)                      /* 0x00001FFF */
/* PKA_PIPE_RDY */
#define CRYPTO_PKA_PIPE_RDY_PKA_PIPE_RDY_SHIFT             (0U)
#define CRYPTO_PKA_PIPE_RDY_PKA_PIPE_RDY_MASK              (0x1U << CRYPTO_PKA_PIPE_RDY_PKA_PIPE_RDY_SHIFT)             /* 0x00000001 */
/* PKA_DONE */
#define CRYPTO_PKA_DONE_PKA_DONE_SHIFT                     (0U)
#define CRYPTO_PKA_DONE_PKA_DONE_MASK                      (0x1U << CRYPTO_PKA_DONE_PKA_DONE_SHIFT)                     /* 0x00000001 */
/* PKA_MON_SELECT */
#define CRYPTO_PKA_MON_SELECT_PKA_MON_SELECT_SHIFT         (0U)
#define CRYPTO_PKA_MON_SELECT_PKA_MON_SELECT_MASK          (0xFU << CRYPTO_PKA_MON_SELECT_PKA_MON_SELECT_SHIFT)         /* 0x0000000F */
/* PKA_DEBUG_REG_EN */
#define CRYPTO_PKA_DEBUG_REG_EN_PKA_DEBUG_REG_EN_SHIFT     (0U)
#define CRYPTO_PKA_DEBUG_REG_EN_PKA_DEBUG_REG_EN_MASK      (0x1U << CRYPTO_PKA_DEBUG_REG_EN_PKA_DEBUG_REG_EN_SHIFT)     /* 0x00000001 */
/* DEBUG_CNT_ADDR */
#define CRYPTO_DEBUG_CNT_ADDR_DEBUG_CNT_ADDR_SHIFT         (0U)
#define CRYPTO_DEBUG_CNT_ADDR_DEBUG_CNT_ADDR_MASK          (0xFFFFFU << CRYPTO_DEBUG_CNT_ADDR_DEBUG_CNT_ADDR_SHIFT)     /* 0x000FFFFF */
/* DEBUG_EXT_ADDR */
#define CRYPTO_DEBUG_EXT_ADDR_DEBUG_EXT_ADDR_SHIFT         (0U)
#define CRYPTO_DEBUG_EXT_ADDR_DEBUG_EXT_ADDR_MASK          (0x1U << CRYPTO_DEBUG_EXT_ADDR_DEBUG_EXT_ADDR_SHIFT)         /* 0x00000001 */
/* PKA_DEBUG_HALT */
#define CRYPTO_PKA_DEBUG_HALT_PKA_DEBUG_HALT_SHIFT         (0U)
#define CRYPTO_PKA_DEBUG_HALT_PKA_DEBUG_HALT_MASK          (0x1U << CRYPTO_PKA_DEBUG_HALT_PKA_DEBUG_HALT_SHIFT)         /* 0x00000001 */
/* PKA_MON_READ */
#define CRYPTO_PKA_MON_READ_PKA_MON_READ_SHIFT             (0U)
#define CRYPTO_PKA_MON_READ_PKA_MON_READ_MASK              (0xFFFFFFFFU << CRYPTO_PKA_MON_READ_PKA_MON_READ_SHIFT)      /* 0xFFFFFFFF */
/* PKA_INT_ENA */
#define CRYPTO_PKA_INT_ENA_PKA_INT_ENA_SHIFT               (0U)
#define CRYPTO_PKA_INT_ENA_PKA_INT_ENA_MASK                (0x1U << CRYPTO_PKA_INT_ENA_PKA_INT_ENA_SHIFT)               /* 0x00000001 */
/* PKA_INT_ST */
#define CRYPTO_PKA_INT_ST_PKA_INT_ST_SHIFT                 (0U)
#define CRYPTO_PKA_INT_ST_PKA_INT_ST_MASK                  (0x1U << CRYPTO_PKA_INT_ST_PKA_INT_ST_SHIFT)                 /* 0x00000001 */
/* SRAM_ADDR */
#define CRYPTO_SRAM_ADDR_SRAM_ADDR_SHIFT                   (0U)
#define CRYPTO_SRAM_ADDR_SRAM_ADDR_MASK                    (0xFFFFFFFFU << CRYPTO_SRAM_ADDR_SRAM_ADDR_SHIFT)            /* 0xFFFFFFFF */
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
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
