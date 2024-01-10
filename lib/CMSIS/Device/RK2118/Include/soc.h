/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2022 Rockchip Electronics Co., Ltd.
 */

#ifndef SOC_H
#define SOC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_conf.h"

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA0_REQ_BUS_SPI1_TX                  = 0,
    DMA0_REQ_BUS_SPI1_RX                  = 1,
    DMA0_REQ_BUS_SPI2_TX                  = 2,
    DMA0_REQ_BUS_SPI2_RX                  = 3,
    DMA0_REQ_BUS_UART0_TX                 = 4,
    DMA0_REQ_BUS_UART0_RX                 = 5,
    DMA0_REQ_BUS_UART1_TX                 = 6,
    DMA0_REQ_BUS_UART1_RX                 = 7,
    DMA0_REQ_BUS_UART2_TX                 = 8,
    DMA0_REQ_BUS_UART2_RX                 = 9,
    DMA0_REQ_BUS_UART3_TX                 = 10,
    DMA0_REQ_BUS_UART3_RX                 = 11,
    DMA0_REQ_BUS_CAN_RX                   = 12,
    DMA1_REQ_AUDIO0_SAI0_TX               = 0,
    DMA1_REQ_AUDIO0_SAI0_RX               = 1,
    DMA1_REQ_AUDIO0_SAI1_TX               = 2,
    DMA1_REQ_AUDIO0_SAI1_RX               = 3,
    DMA1_REQ_AUDIO0_SAI2_TX               = 4,
    DMA1_REQ_AUDIO0_SAI2_RX               = 5,
    DMA1_REQ_AUDIO0_SAI3_TX               = 6,
    DMA1_REQ_AUDIO0_SAI3_RX               = 7,
    DMA1_REQ_AUDIO0_ASRC0_TX              = 8,
    DMA1_REQ_AUDIO0_ASRC0_RX              = 9,
    DMA1_REQ_AUDIO0_ASRC1_TX              = 10,
    DMA1_REQ_AUDIO0_ASRC1_RX              = 11,
    DMA1_REQ_AUDIO0_ASRC2_TX              = 12,
    DMA1_REQ_AUDIO0_ASRC2_RX              = 13,
    DMA1_REQ_AUDIO0_ASRC3_TX              = 14,
    DMA1_REQ_AUDIO0_ASRC3_RX              = 15,
    DMA1_REQ_AUDIO0_PDM_RX                = 16,
    DMA1_REQ_AUDIO0_SPDIF_RX              = 17,
    DMA2_REQ_AUDIO0_SAI0_TX               = 0,
    DMA2_REQ_AUDIO0_SAI0_RX               = 1,
    DMA2_REQ_AUDIO0_SAI1_TX               = 2,
    DMA2_REQ_AUDIO0_SAI1_RX               = 3,
    DMA2_REQ_AUDIO0_SAI2_TX               = 4,
    DMA2_REQ_AUDIO0_SAI2_RX               = 5,
    DMA2_REQ_AUDIO0_SAI3_TX               = 6,
    DMA2_REQ_AUDIO0_SAI3_RX               = 7,
    DMA2_REQ_AUDIO0_ASRC0_TX              = 8,
    DMA2_REQ_AUDIO0_ASRC0_RX              = 9,
    DMA2_REQ_AUDIO0_ASRC1_TX              = 10,
    DMA2_REQ_AUDIO0_ASRC1_RX              = 11,
    DMA2_REQ_AUDIO0_ASRC2_TX              = 12,
    DMA2_REQ_AUDIO0_ASRC2_RX              = 13,
    DMA2_REQ_AUDIO0_ASRC3_TX              = 14,
    DMA2_REQ_AUDIO0_ASRC3_RX              = 15,
    DMA2_REQ_AUDIO0_PDM_RX                = 16,
    DMA2_REQ_AUDIO0_SPDIF_RX              = 17,
    DMA3_REQ_AUDIO1_SAI4_TX               = 0,
    DMA3_REQ_AUDIO1_SAI4_RX               = 1,
    DMA3_REQ_AUDIO1_SAI5_TX               = 2,
    DMA3_REQ_AUDIO1_SAI5_RX               = 3,
    DMA3_REQ_AUDIO1_SAI6_TX               = 4,
    DMA3_REQ_AUDIO1_SAI6_RX               = 5,
    DMA3_REQ_AUDIO1_SAI7_TX               = 6,
    DMA3_REQ_AUDIO1_SAI7_RX               = 7,
    DMA3_REQ_AUDIO1_ASRC4_TX              = 8,
    DMA3_REQ_AUDIO1_ASRC4_RX              = 9,
    DMA3_REQ_AUDIO1_ASRC5_TX              = 10,
    DMA3_REQ_AUDIO1_ASRC5_RX              = 11,
    DMA3_REQ_AUDIO1_ASRC6_TX              = 12,
    DMA3_REQ_AUDIO1_ASRC6_RX              = 13,
    DMA3_REQ_AUDIO1_ASRC7_TX              = 14,
    DMA3_REQ_AUDIO1_ASRC7_RX              = 15,
    DMA3_REQ_AUDIO1_SPDIF_TX              = 16,
    DMA3_REQ_AUDIO1_SPDIF_RX              = 17,
    DMA4_REQ_AUDIO1_SAI4_TX               = 0,
    DMA4_REQ_AUDIO1_SAI4_RX               = 1,
    DMA4_REQ_AUDIO1_SAI5_TX               = 2,
    DMA4_REQ_AUDIO1_SAI5_RX               = 3,
    DMA4_REQ_AUDIO1_SAI6_TX               = 4,
    DMA4_REQ_AUDIO1_SAI6_RX               = 5,
    DMA4_REQ_AUDIO1_SAI7_TX               = 6,
    DMA4_REQ_AUDIO1_SAI7_RX               = 7,
    DMA4_REQ_AUDIO1_ASRC4_TX              = 8,
    DMA4_REQ_AUDIO1_ASRC4_RX              = 9,
    DMA4_REQ_AUDIO1_ASRC5_TX              = 10,
    DMA4_REQ_AUDIO1_ASRC5_RX              = 11,
    DMA4_REQ_AUDIO1_ASRC6_TX              = 12,
    DMA4_REQ_AUDIO1_ASRC6_RX              = 13,
    DMA4_REQ_AUDIO1_ASRC7_TX              = 14,
    DMA4_REQ_AUDIO1_ASRC7_RX              = 15,
    DMA4_REQ_AUDIO1_SPDIF_TX              = 16,
    DMA4_REQ_AUDIO1_SPDIF_RX              = 17,
} DMA_REQ_Type;

/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum IRQn
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn           = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn                = -13,     /*  3 HardFault Interrupt */
  MemoryManagement_IRQn         = -12,     /*  4 Memory Management Interrupt */
  BusFault_IRQn                 = -11,     /*  5 Bus Fault Interrupt */
  UsageFault_IRQn               = -10,     /*  6 Usage Fault Interrupt */
  SecureFault_IRQn              =  -9,     /*  7 Secure Fault Interrupt */
  SVCall_IRQn                   =  -5,     /* 11 SV Call Interrupt */
  DebugMonitor_IRQn             =  -4,     /* 12 Debug Monitor Interrupt */
  PendSV_IRQn                   =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn                  =  -1,     /* 15 System Tick Interrupt */

/* -------------------  Processor Interrupt Numbers  ------------------------------ */
  GPIO0_0_IRQn                  =   0,
  GPIO0_1_IRQn                  =   1,
  GPIO0_2_IRQn                  =   2,
  GPIO0_3_IRQn                  =   3,
  GPIO1_0_IRQn                  =   4,
  GPIO1_1_IRQn                  =   5,
  GPIO1_2_IRQn                  =   6,
  GPIO1_3_IRQn                  =   7,
  GPIO2_0_IRQn                  =   8,
  GPIO2_1_IRQn                  =   9,
  GPIO2_2_IRQn                  =   10,
  GPIO2_3_IRQn                  =   11,
  GPIO3_0_IRQn                  =   12,
  GPIO3_1_IRQn                  =   13,
  GPIO3_2_IRQn                  =   14,
  GPIO3_3_IRQn                  =   15,
  GPIO4_0_IRQn                  =   16,
  GPIO4_1_IRQn                  =   17,
  GPIO4_2_IRQn                  =   18,
  GPIO4_3_IRQn                  =   19,
  TOUCH_KEY_POS_IRQn            =   20,
  TOUCH_KEY_NEG_IRQn            =   21,
  PWM0_CH0_IRQn                 =   22,
  PWM0_CH1_IRQn                 =   23,
  PWM0_CH2_IRQn                 =   24,
  PWM0_CH3_IRQn                 =   25,
  PWM1_CH0_IRQn                 =   26,
  PWM1_CH1_IRQn                 =   27,
  PWM1_CH2_IRQn                 =   28,
  PWM1_CH3_IRQn                 =   29,
  UART0_IRQn                    =   30,
  UART1_IRQn                    =   31,
  UART2_IRQn                    =   32,
  UART3_IRQn                    =   33,
  I2C0_IRQn                     =   34,
  I2C1_IRQn                     =   35,
  I2C2_IRQn                     =   36,
  I2C3_IRQn                     =   37,
  I2C4_IRQn                     =   38,
  I2C5_IRQn                     =   39,
  SPI1_IRQn                     =   40,
  SPI2_IRQn                     =   41,
  CAN_IRQn                      =   42,
  SAI0_IRQn                     =   43,
  SAI1_IRQn                     =   44,
  SAI2_IRQn                     =   45,
  SAI3_IRQn                     =   46,
  ASRC0_IRQn                    =   47,
  ASRC1_IRQn                    =   48,
  ASRC2_IRQn                    =   49,
  ASRC3_IRQn                    =   50,
  PDM_IRQn                      =   51,
  SPDIF_RX0_IRQn                =   52,
  SAI4_IRQn                     =   53,
  SAI5_IRQn                     =   54,
  SAI6_IRQn                     =   55,
  SAI7_IRQn                     =   56,
  ASRC4_IRQn                    =   57,
  ASRC5_IRQn                    =   58,
  ASRC6_IRQn                    =   59,
  ASRC7_IRQn                    =   60,
  SPDIF_TX_IRQn                 =   61,
  SPDIF_RX1_IRQn                =   62,
  SARADC_IRQn                   =   63,
  TSADC_IRQn                    =   64,
  VOP_IRQn                      =   65,
  VOP_LB_INTR_IRQn              =   66,
  FACC_FIR_IRQn                 =   67,
  FACC_IIR_IRQn                 =   68,
  FLEXBUS_IRQn                  =   69,
  OTPC_NS_IRQn                  =   70,
  OTPC_S_IRQn                   =   71,
  KEY_READER_IRQn               =   72,
  OTPC_MASK_IRQn                =   73,
  MAC_SBD_IRQn                  =   74,
  MAC_SBD_TX_IRQn               =   75,
  MAC_SBD_RX_IRQn               =   76,
  MAC_PMT_IRQn                  =   77,
  MAC_MCGR_IRQn                 =   78,
  OTG_IRQn                      =   79,
  OTG_BVALID_IRQn               =   80,
  OTG_ID_IRQn                   =   81,
  OTG_LINESTATE_IRQn            =   82,
  OTG_DISCONNECT_IRQn           =   83,
  OTG_VBUSVALID_IRQn            =   84,
  SPI2APB_IRQn                  =   85,
  FSPI_IRQn                     =   86,
  SDMMC_IRQn                    =   87,
  SDIO_IRQn                     =   88,
  DDRC_AWPOISON0_IRQn           =   89,
  DDRC_AWPOISON1_IRQn           =   90,
  DDRC_ARPOISON0_IRQn           =   91,
  DDRC_ARPOISON1_IRQn           =   92,
  DDRC_DFI_ALERT_ERR_IRQn       =   93,
  DDR_MONITOR_IRQn              =   94,
  DDRPHY_IRQn                   =   95,
  TIMER0_IRQn                   =   96,
  TIMER1_IRQn                   =   97,
  TIMER2_IRQn                   =   98,
  TIMER3_IRQn                   =   99,
  TIMER4_IRQn                   =   100,
  TIMER5_IRQn                   =   101,
  TIMER6_IRQn                   =   102,
  TIMER7_IRQn                   =   103,
  TIMER8_IRQn                   =   104,
  TIMER9_IRQn                   =   105,
  TIMER10_IRQn                  =   106,
  TIMER11_IRQn                  =   107,
  TIMER12_IRQn                  =   108,
  TIMER13_IRQn                  =   109,
  TIMER14_IRQn                  =   110,
  TIMER15_IRQn                  =   111,
  TIMER16_IRQn                  =   112,
  TIMER17_IRQn                  =   113,
  TIMER18_IRQn                  =   114,
  TIMER19_IRQn                  =   115,
  HPTIMER_IRQn                  =   116,
  WDT0_IRQn                     =   117,
  WDT0_RSTN_IRQn                =   118,
  WDT1_IRQn                     =   119,
  WDT1_RSTN_IRQn                =   120,
  WDT2_IRQn                     =   121,
  WDT2_RSTN_IRQn                =   122,
  WDT3_IRQn                     =   123,
  WDT3_RSTN_IRQn                =   124,
  WDT4_IRQn                     =   125,
  WDT4_RSTN_IRQn                =   126,
  DSP0_ERR_IRQn                 =   127,
  DSP1_ERR_IRQn                 =   128,
  DSP2_ERR_IRQn                 =   129,
  CRYPTO_IRQn                   =   130,
  CRYPTO_KLAD_IRQn              =   131,
  CRYPTO_SC_IRQn                =   132,
  NS_TRNG_IRQn                  =   133,
  S_TRNG_IRQn                   =   134,
  DMAC0_BUS_CH0_IRQn            =   135,
  DMAC0_BUS_CH1_IRQn            =   136,
  DMAC0_BUS_CH2_IRQn            =   137,
  DMAC0_BUS_CH3_IRQn            =   138,
  DMAC0_BUS_CH4_IRQn            =   139,
  DMAC0_BUS_CH5_IRQn            =   140,
  DMAC0_BUS_CH6_IRQn            =   141,
  DMAC0_BUS_CH7_IRQn            =   142,
  DMAC0_BUS_ABORT_IRQn          =   143,
  DMAC1_AUDIO0_CH0_IRQn         =   144,
  DMAC1_AUDIO0_CH1_IRQn         =   145,
  DMAC1_AUDIO0_CH2_IRQn         =   146,
  DMAC1_AUDIO0_CH3_IRQn         =   147,
  DMAC1_AUDIO0_CH4_IRQn         =   148,
  DMAC1_AUDIO0_CH5_IRQn         =   149,
  DMAC1_AUDIO0_CH6_IRQn         =   150,
  DMAC1_AUDIO0_CH7_IRQn         =   151,
  DMAC1_AUDIO0_ABORT_IRQn       =   152,
  DMAC2_AUDIO0_CH0_IRQn         =   153,
  DMAC2_AUDIO0_CH1_IRQn         =   154,
  DMAC2_AUDIO0_CH2_IRQn         =   155,
  DMAC2_AUDIO0_CH3_IRQn         =   156,
  DMAC2_AUDIO0_CH4_IRQn         =   157,
  DMAC2_AUDIO0_CH5_IRQn         =   158,
  DMAC2_AUDIO0_CH6_IRQn         =   159,
  DMAC2_AUDIO0_CH7_IRQn         =   160,
  DMAC2_AUDIO0_ABORT_IRQn       =   161,
  DMAC3_AUDIO1_CH0_IRQn         =   162,
  DMAC3_AUDIO1_CH1_IRQn         =   163,
  DMAC3_AUDIO1_CH2_IRQn         =   164,
  DMAC3_AUDIO1_CH3_IRQn         =   165,
  DMAC3_AUDIO1_CH4_IRQn         =   166,
  DMAC3_AUDIO1_CH5_IRQn         =   167,
  DMAC3_AUDIO1_CH6_IRQn         =   168,
  DMAC3_AUDIO1_CH7_IRQn         =   169,
  DMAC3_AUDIO1_ABORT_IRQn       =   170,
  DMAC4_AUDIO1_CH0_IRQn         =   171,
  DMAC4_AUDIO1_CH1_IRQn         =   172,
  DMAC4_AUDIO1_CH2_IRQn         =   173,
  DMAC4_AUDIO1_CH3_IRQn         =   174,
  DMAC4_AUDIO1_CH4_IRQn         =   175,
  DMAC4_AUDIO1_CH5_IRQn         =   176,
  DMAC4_AUDIO1_CH6_IRQn         =   177,
  DMAC4_AUDIO1_CH7_IRQn         =   178,
  DMAC4_AUDIO1_ABORT_IRQn       =   179,
  NPU_IRQn                      =   180,
  PMU_IRQn                      =   181,
  NPOR_POWERGOOD_IRQn           =   182,
  DMA2DDR_IRQn                  =   183,
  MBOX0_AP_IRQn                 =   184,
  MBOX1_AP_IRQn                 =   185,
  MBOX2_AP_IRQn                 =   186,
  MBOX3_AP_IRQn                 =   187,
  MBOX4_AP_IRQn                 =   188,
  MBOX5_AP_IRQn                 =   189,
  MBOX6_AP_IRQn                 =   190,
  MBOX7_AP_IRQn                 =   191,
  MBOX8_AP_IRQn                 =   192,
  MBOX9_AP_IRQn                 =   193,
  MBOX10_AP_IRQn                =   194,
  MBOX11_AP_IRQn                =   195,
  MBOX12_AP_IRQn                =   196,
  MBOX13_AP_IRQn                =   197,
  MBOX14_AP_IRQn                =   198,
  MBOX15_AP_IRQn                =   199,
  MBOX0_BB_IRQn                 =   200,
  MBOX1_BB_IRQn                 =   201,
  MBOX2_BB_IRQn                 =   202,
  MBOX3_BB_IRQn                 =   203,
  MBOX4_BB_IRQn                 =   204,
  MBOX5_BB_IRQn                 =   205,
  MBOX6_BB_IRQn                 =   206,
  MBOX7_BB_IRQn                 =   207,
  MBOX8_BB_IRQn                 =   208,
  MBOX9_BB_IRQn                 =   209,
  MBOX10_BB_IRQn                =   210,
  MBOX11_BB_IRQn                =   211,
  MBOX12_BB_IRQn                =   212,
  MBOX13_BB_IRQn                =   213,
  MBOX14_BB_IRQn                =   214,
  MBOX15_BB_IRQn                =   215,

  NUM_INTERRUPTS
  /* Interrupts 214 .. 239 are reserved */
} IRQn_Type;

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* -------  Start of section using anonymous unions and disabling warnings  ------- */
#if   defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


/* --------  Configuration of Core Peripherals  ----------------------------------- */
#if defined(HAL_MCU_CORE)
#define __STAR_REV                0x0100U   /* Core revision r1p0 */
#define __SAUREGION_PRESENT       1U        /* SAU regions present */
#define __MPU_PRESENT             1U        /* MPU present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    1U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1U        /* FPU present */
#define __DSP_PRESENT             1U        /* DSP extension present */
#define __ICACHE_PRESENT          1U        /* ICache present */
#define __DCACHE_PRESENT          1U        /* DCache present */
#define NVIC_PERIPH_IRQ_OFFSET    16U       /* Interrupt offset for NVIC peripherals*/

#include "core_starmc1.h"                   /* Processor and core peripherals */
#include "system_rk2118.h"                  /* System Header */
#include "rk2118.h"                         /* SOC peripherals */
#include "rk2118_usb.h"                     /* USB peripheral */
#elif defined(HAL_DSP_CORE)
#include "core_hifi4.h"                     /* Processor and core peripherals */
#include "system_rk2118.h"                  /* System Header */
#include "rk2118.h"                         /* SOC peripherals */
#else
#error "you must define HAL_MCU_CORE or HAL_DSP_CORE!!!"
#endif

#undef INTMUX0
#undef INTMUX1
#undef INTMUX2
#undef INTMUX3
#undef INTMUX4
#undef INTMUX5
#undef INTMUX6
#undef INTMUX7
#undef INTMUX8
#undef INTMUX9
#undef INTMUX10
#undef INTMUX11
#if defined(HAL_DSP_CORE)
#if defined(RK2118_DSP_CORE0)
#define INTMUX0             ((struct INTMUX_REG *) INTMUX0_BASE)
#define INTMUX1             ((struct INTMUX_REG *) INTMUX1_BASE)
#define INTMUX2             ((struct INTMUX_REG *) INTMUX2_BASE)
#define INTMUX3             ((struct INTMUX_REG *) INTMUX3_BASE)
#elif defined(RK2118_DSP_CORE1)
#define INTMUX0             ((struct INTMUX_REG *) INTMUX4_BASE)
#define INTMUX1             ((struct INTMUX_REG *) INTMUX5_BASE)
#define INTMUX2             ((struct INTMUX_REG *) INTMUX6_BASE)
#define INTMUX3             ((struct INTMUX_REG *) INTMUX7_BASE)
#elif defined(RK2118_DSP_CORE2)
#define INTMUX0             ((struct INTMUX_REG *) INTMUX8_BASE)
#define INTMUX1             ((struct INTMUX_REG *) INTMUX9_BASE)
#define INTMUX2             ((struct INTMUX_REG *) INTMUX10_BASE)
#define INTMUX3             ((struct INTMUX_REG *) INTMUX11_BASE)
#endif

#define IS_INTMUX_INSTANCE(instance) (((instance) == INTMUX0) || \
                                      ((instance) == INTMUX1) || \
                                      ((instance) == INTMUX2) || \
                                      ((instance) == INTMUX3))
#endif

#define PLL_INPUT_OSC_RATE        24000000U /* freqency of OSC */
#define TIMER_CHAN_CNT            8         /* Core0 and core1 use 4 timer respectively */
#define MBOX_CNT                  16        /* Total Mailbox in SoC */

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define USB_OTG_BASE            0x50040000U /* USB OTG base address */
#define USB_INNO_PHY_BASE       0x503C0000U /* USB INNO base address */
#define USB_PHY_CON_BASE        (GRF->GRF_SOC_CON24) /* USB PHY control base address */
#define USB_PHY_STATUS_BASE     (GRF->SOC_STATUS6)   /* USB PHY status base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */
#define USB_OTG                     ((struct USB_GLOBAL_REG *) USB_OTG_BASE)
#define IS_PCD_INSTANCE(instance)   ((instance) == USB_OTG)
#define IS_HCD_INSTANCE(instance)   ((instance) == USB_OTG)
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************USB*******************************************/
#define USB_PHY_SUSPEND_MASK \
    (GRF_GRF_SOC_CON24_USBOTG_SW_EN_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_SUSPEND_N_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_OPMODE_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_XCVRSELECT_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_TERMSELECT_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_DPPULLDOWN_MASK | \
     GRF_GRF_SOC_CON24_USBOTG_UTMI_DMPULLDOWN_MASK)
#define USB_PHY_RESUME_MASK         GRF_GRF_SOC_CON24_USBOTG_SW_EN_MASK
#define USB_PHY_CON_SHIFT           GRF_GRF_SOC_CON24_USBOTG_SW_EN_SHIFT
#define USB_PHY_SUSPEND_VAL         0x1D1U
#define USB_PHY_RESUME_VAL          0
/* --------  End of section using anonymous unions and disabling warnings  -------- */
#if   defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050))
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define XIP_MAP0_BASE0      0x11000000U /* FSPI0 map address0 */
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************FSPI******************************************/
#define FSPI_CHIP_CNT                            (2)
/******************************************CRU*******************************************/
#define CRU_CLK_USE_CON_BANK
#define CLK64(mux, div) ((((mux) & 0xffffffffULL) << 32) | ((div) & 0xffffffffULL))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_GPLL,
    PLL_VPLL0,
    PLL_VPLL1,

    PLL_GPLL_DIV      = CLK64(0U, CLK_GPLL_DIV_DIV),
    PLL_VPLL0_DIV     = CLK64(0U, CLK_V0PLL_DIV_DIV),
    PLL_VPLL1_DIV     = CLK64(0U, CLK_V1PLL_DIV_DIV),
    PLL_GPLL_DIV_100M = CLK64(0U, CLK_GPLL_DIV_100M_DIV),

    /* dsp */
    CLK_DSP0_SRC = CLK64(CLK_DSP0_SRC_DIV_SEL, CLK_DSP0_SRC_DIV_DIV),
    CLK_DSP0     = CLK64(CLK_DSP0_SRC_PVTMUX_SEL, 0U),
    CLK_DSP1     = CLK64(CLK_DSP1_ROOT_SEL, CLK_DSP1_ROOT_DIV),
    CLK_DSP2     = CLK64(CLK_DSP2_ROOT_SEL, CLK_DSP2_ROOT_DIV),

    /* npu */
    ACLK_NPU = CLK64(ACLK_NPU_ROOT_SEL, ACLK_NPU_ROOT_DIV),
    HCLK_NPU = CLK64(HCLK_NPU_ROOT_SEL, HCLK_NPU_ROOT_DIV),

    /* star */
    CLK_STARSE0 = CLK64(CLK_STARSE0_ROOT_SEL, CLK_STARSE0_ROOT_DIV),
    CLK_STARSE1 = CLK64(CLK_STARSE1_ROOT_SEL, CLK_STARSE1_ROOT_DIV),

    /* top */
    ACLK_HSPERI      = CLK64(ACLK_HSPERI_ROOT_SEL, ACLK_HSPERI_ROOT_DIV),
    ACLK_PERIB       = CLK64(ACLK_PERIB_ROOT_SEL, ACLK_PERIB_ROOT_DIV),
    HCLK_PERIB       = CLK64(HCLK_PERIB_ROOT_SEL, HCLK_PERIB_ROOT_DIV),
    ACLK_BUS         = CLK64(ACLK_BUS_ROOT_SEL, ACLK_BUS_ROOT_DIV),
    HCLK_BUS         = CLK64(HCLK_BUS_ROOT_SEL, HCLK_BUS_ROOT_DIV),
    PCLK_BUS         = CLK64(PCLK_BUS_ROOT_SEL, PCLK_BUS_ROOT_DIV),
    CLK_INT_VOICE0   = CLK64(0U, CLK_INT_VOICE_MATRIX0_DIV),
    CLK_INT_VOICE1   = CLK64(0U, CLK_INT_VOICE_MATRIX1_DIV),
    CLK_INT_VOICE2   = CLK64(0U, CLK_INT_VOICE_MATRIX2_DIV),
    CLK_FRAC_UART0   = CLK64(CLK_FRAC_UART_MATRIX0_MUX_SEL, CLK_FRAC_UART_MATRIX0_DIV),
    CLK_FRAC_UART1   = CLK64(CLK_FRAC_UART_MATRIX1_MUX_SEL, CLK_FRAC_UART_MATRIX1_DIV),
    CLK_FRAC_VOICE0  = CLK64(CLK_FRAC_VOICE_MATRIX0_MUX_SEL, CLK_FRAC_VOICE_MATRIX0_DIV),
    CLK_FRAC_VOICE1  = CLK64(CLK_FRAC_VOICE_MATRIX1_MUX_SEL, CLK_FRAC_VOICE_MATRIX1_DIV),
    CLK_FRAC_COMMON0 = CLK64(CLK_FRAC_COMMON_MATRIX0_MUX_SEL, CLK_FRAC_COMMON_MATRIX0_DIV),
    CLK_FRAC_COMMON1 = CLK64(CLK_FRAC_COMMON_MATRIX1_MUX_SEL, CLK_FRAC_COMMON_MATRIX1_DIV),
    CLK_FRAC_COMMON2 = CLK64(CLK_FRAC_COMMON_MATRIX2_MUX_SEL, CLK_FRAC_COMMON_MATRIX2_DIV),

    CLK_UART0 = CLK64(SCLK_UART0_SEL, SCLK_UART0_DIV),
    CLK_UART1 = CLK64(SCLK_UART1_SEL, SCLK_UART1_DIV),
    CLK_UART2 = CLK64(SCLK_UART2_SEL, SCLK_UART2_DIV),
    CLK_UART3 = CLK64(SCLK_UART3_SEL, SCLK_UART3_DIV),

    CLK_SPI1 = CLK64(CLK_SPI1_SEL, CLK_SPI1_DIV),
    CLK_SPI2 = CLK64(CLK_SPI2_SEL, CLK_SPI2_DIV),

    CLK_RKTIMER0_TIME0 = CLK64(CLK_RKTIMER0_TIMER0_SEL, 0U),
    CLK_RKTIMER0_TIME1 = CLK64(CLK_RKTIMER0_TIMER1_SEL, 0U),
    CLK_RKTIMER0_TIME2 = CLK64(CLK_RKTIMER0_TIMER2_SEL, 0U),
    CLK_RKTIMER0_TIME3 = CLK64(CLK_RKTIMER0_TIMER3_SEL, 0U),
    CLK_RKTIMER1_TIME0 = CLK64(CLK_RKTIMER1_TIMER0_SEL, 0U),
    CLK_RKTIMER1_TIME1 = CLK64(CLK_RKTIMER1_TIMER1_SEL, 0U),
    CLK_RKTIMER1_TIME2 = CLK64(CLK_RKTIMER1_TIMER2_SEL, 0U),
    CLK_RKTIMER1_TIME3 = CLK64(CLK_RKTIMER1_TIMER3_SEL, 0U),
    CLK_RKTIMER2_TIME0 = CLK64(CLK_RKTIMER2_TIMER0_SEL, 0U),
    CLK_RKTIMER2_TIME1 = CLK64(CLK_RKTIMER2_TIMER1_SEL, 0U),
    CLK_RKTIMER2_TIME2 = CLK64(CLK_RKTIMER2_TIMER2_SEL, 0U),
    CLK_RKTIMER2_TIME3 = CLK64(CLK_RKTIMER2_TIMER3_SEL, 0U),

    CLK_I2C0 = CLK64(CLK_I2C0_SEL, CLK_I2C0_DIV),
    CLK_I2C1 = CLK64(CLK_I2C1_SEL, CLK_I2C1_DIV),
    CLK_I2C2 = CLK64(CLK_I2C2_SEL, CLK_I2C2_DIV),
    CLK_I2C3 = CLK64(CLK_I2C3_SEL, CLK_I2C3_DIV),
    CLK_I2C4 = CLK64(CLK_I2C4_SEL, CLK_I2C4_DIV),
    CLK_I2C5 = CLK64(CLK_I2C5_SEL, CLK_I2C5_DIV),

    CLK_PWM1             = CLK64(CLK_PWM1_SEL, CLK_PWM1_DIV),
    CLK_FREQ_PWM1_SAI    = CLK64(CLK_FREQ_PWM1_SAI_SEL, 0U),
    CLK_FREQ_PWM1        = CLK64(CLK_FREQ_PWM1_SEL, 0U),
    CLK_COUNTER_PWM1_SAI = CLK64(CLK_COUNTER_PWM1_SAI_SEL, 0U),
    CLK_COUNTER_PWM1     = CLK64(CLK_COUNTER_PWM1_SEL, 0U),

    CLK_CAN = CLK64(CLK_CAN_SEL, CLK_CAN_DIV),

    DBCLK_GPIO1 = CLK64(DBCLK_GPIO1_SEL, 0U),
    DBCLK_GPIO2 = CLK64(DBCLK_GPIO2_SEL, 0U),
    DBCLK_GPIO3 = CLK64(DBCLK_GPIO3_SEL, 0U),
    DBCLK_GPIO4 = CLK64(DBCLK_GPIO4_SEL, 0U),

    CLK_TSADC      = CLK64(0U, CLK_TSADC_DIV),
    CLK_TSADC_TSEN = CLK64(0U, CLK_TSADC_TSEN_DIV),
    CLK_SARADC     = CLK64(CLK_SARADC_SEL, CLK_SARADC_DIV),

    /* audio */
    ACLK_AUDIO0 = CLK64(ACLK_AUDIO0_ROOT_SEL, ACLK_AUDIO0_ROOT_DIV),
    HCLK_AUDIO0 = CLK64(HCLK_AUDIO0_ROOT_SEL, HCLK_AUDIO0_ROOT_DIV),

    SCLK_SAI0      = CLK64(SCLK_SAI0_SEL, 0U),
    MCLK_OUT_SAI0  = CLK64(MCLK_OUT_SAI0_SEL, MCLK_OUT_SAI0_DIV),
    SCLK_SAI1      = CLK64(SCLK_SAI1_SEL, 0U),
    MCLK_OUT_SAI1  = CLK64(MCLK_OUT_SAI1_SEL, MCLK_OUT_SAI1_DIV),
    SCLK_SAI2      = CLK64(SCLK_SAI2_SEL, 0U),
    MCLK_OUT_SAI2  = CLK64(MCLK_OUT_SAI2_SEL, MCLK_OUT_SAI2_DIV),
    SCLK_SAI3      = CLK64(SCLK_SAI3_SEL, 0U),
    MCLK_OUT_SAI3  = CLK64(MCLK_OUT_SAI3_SEL, MCLK_OUT_SAI3_DIV),
    MCLK_PDM       = CLK64(MCLK_PDM_SEL, MCLK_PDM_DIV),
    CLKOUT_PDM     = CLK64(CLKOUT_PDM_SEL, CLKOUT_PDM_DIV),
    CLK_ASRC0      = CLK64(CLK_ASRC0_SEL, CLK_ASRC0_DIV),
    MCLK_ASRC0     = CLK64(MCLK_ASRC0_SEL, 0U),
    LRCK_ASRC0_SRC = CLK64(LRCK_ASRC0_SRC_SEL, 0U),
    LRCK_ASRC0_DST = CLK64(LRCK_ASRC0_DST_SEL, 0U),
    CLK_ASRC1      = CLK64(CLK_ASRC1_SEL, CLK_ASRC1_DIV),
    MCLK_ASRC1     = CLK64(MCLK_ASRC1_SEL, 0U),
    LRCK_ASRC1_SRC = CLK64(LRCK_ASRC1_SRC_SEL, 0U),
    LRCK_ASRC1_DST = CLK64(LRCK_ASRC1_DST_SEL, 0U),
    CLK_ASRC2      = CLK64(CLK_ASRC2_SEL, CLK_ASRC2_DIV),
    MCLK_ASRC2     = CLK64(MCLK_ASRC2_SEL, 0U),
    LRCK_ASRC2_SRC = CLK64(LRCK_ASRC2_SRC_SEL, 0U),
    LRCK_ASRC2_DST = CLK64(LRCK_ASRC2_DST_SEL, 0U),
    CLK_ASRC3      = CLK64(CLK_ASRC3_SEL, CLK_ASRC3_DIV),
    MCLK_ASRC3     = CLK64(MCLK_ASRC3_SEL, 0U),
    LRCK_ASRC3_SRC = CLK64(LRCK_ASRC3_SRC_SEL, 0U),
    LRCK_ASRC3_DST = CLK64(LRCK_ASRC3_DST_SEL, 0U),

    MCLK_SPDIFRX0 = CLK64(MCLK_SPDIFRX0_SEL, MCLK_SPDIFRX0_DIV),
    MCLK_SPDIFRX1 = CLK64(MCLK_SPDIFRX1_SEL, MCLK_SPDIFRX1_DIV),
    MCLK_SPDIFTX  = CLK64(MCLK_SPDIFTX_SEL, MCLK_SPDIFTX_DIV),

    ACLK_AUDIO1 = CLK64(ACLK_AUDIO1_ROOT_SEL, ACLK_AUDIO1_ROOT_DIV),
    HCLK_AUDIO1 = CLK64(HCLK_AUDIO1_ROOT_SEL, HCLK_AUDIO1_ROOT_DIV),

    SCLK_SAI4      = CLK64(SCLK_SAI4_SEL, 0U),
    MCLK_OUT_SAI4  = CLK64(MCLK_OUT_SAI4_SEL, MCLK_OUT_SAI4_DIV),
    SCLK_SAI5      = CLK64(SCLK_SAI5_SEL, 0U),
    MCLK_OUT_SAI5  = CLK64(MCLK_OUT_SAI5_SEL, MCLK_OUT_SAI5_DIV),
    SCLK_SAI6      = CLK64(SCLK_SAI6_SEL, 0U),
    MCLK_OUT_SAI6  = CLK64(MCLK_OUT_SAI6_SEL, MCLK_OUT_SAI6_DIV),
    SCLK_SAI7      = CLK64(SCLK_SAI7_SEL, 0U),
    MCLK_OUT_SAI7  = CLK64(MCLK_OUT_SAI7_SEL, MCLK_OUT_SAI7_DIV),
    CLK_ASRC4      = CLK64(CLK_ASRC4_SEL, CLK_ASRC4_DIV),
    MCLK_ASRC4     = CLK64(MCLK_ASRC4_SEL, 0U),
    LRCK_ASRC4_SRC = CLK64(LRCK_ASRC4_SRC_SEL, 0U),
    LRCK_ASRC4_DST = CLK64(LRCK_ASRC4_DST_SEL, 0U),
    CLK_ASRC5      = CLK64(CLK_ASRC5_SEL, CLK_ASRC5_DIV),
    MCLK_ASRC5     = CLK64(MCLK_ASRC5_SEL, 0U),
    LRCK_ASRC5_SRC = CLK64(LRCK_ASRC5_SRC_SEL, 0U),
    LRCK_ASRC5_DST = CLK64(LRCK_ASRC5_DST_SEL, 0U),
    CLK_ASRC6      = CLK64(CLK_ASRC6_SEL, CLK_ASRC6_DIV),
    MCLK_ASRC6     = CLK64(MCLK_ASRC6_SEL, 0U),
    LRCK_ASRC6_SRC = CLK64(LRCK_ASRC6_SRC_SEL, 0U),
    LRCK_ASRC6_DST = CLK64(LRCK_ASRC6_DST_SEL, 0U),
    CLK_ASRC7      = CLK64(CLK_ASRC7_SEL, CLK_ASRC7_DIV),
    MCLK_ASRC7     = CLK64(MCLK_ASRC7_SEL, 0U),
    LRCK_ASRC7_SRC = CLK64(LRCK_ASRC7_SRC_SEL, 0U),
    LRCK_ASRC7_DST = CLK64(LRCK_ASRC7_DST_SEL, 0U),

    /* mmc */
    CLK_SDMMC     = CLK64(CLK_SDMMC_SEL, CLK_SDMMC_DIV),
    CCLK_SRC_EMMC = CLK64(CCLK_SRC_EMMC_SEL, CCLK_SRC_EMMC_DIV),
    SCLK_SFC      = CLK64(SCLK_SFC_SEL, SCLK_SFC_DIV),

    /* vop */
    DCLK_VOP = CLK64(DCLK_VOP_SEL, DCLK_VOP_DIV),

    /* flexbus */
    CLK_FLEXBUS_TX = CLK64(CLK_FLEXBUS_TX_SEL, CLK_FLEXBUS_TX_DIV),
    CLK_FLEXBUS_RX = CLK64(CLK_FLEXBUS_RX_SEL, CLK_FLEXBUS_RX_DIV),

    /* mac */
    CLK_MAC_ROOT     = CLK64(0U, CLK_MAC_ROOT_DIV),
    CLK_MAC_PTP_ROOT = CLK64(CLK_MAC_PTP_ROOT_SEL, CLK_MAC_PTP_ROOT_DIV),

    /* facc */
    ACLK_FACC  = CLK64(ACLK_FACC_ROOT_SEL, ACLK_FACC_ROOT_DIV),
    HCLK_FACC  = CLK64(HCLK_FACC_ROOT_SEL, HCLK_FACC_ROOT_DIV),
    CLK_RKFACC = CLK64(CLK_RKFACC_SEL, CLK_RKFACC_DIV),

    /* pmu */
    PCLK_PMU     = CLK64(PCLK_PMU_ROOT_SEL, PCLK_PMU_ROOT_DIV),
    CLK_PWM0     = CLK64(CLK_PWM0_SEL, CLK_PWM0_DIV),
    CLK_MAC_OUT  = CLK64(0U, CLK_MAC_OUT_DIV),
    CLK_HPTIMER  = CLK64(CLK_HPTIMER_SEL, 0U),
    DBCLK_GPIO0  = CLK64(DBCLK_GPIO0_SEL, 0U),
    CLK_REF_OUT0 = CLK64(CLK_REF_OUT0_SEL, CLK_REF_OUT0_DIV),
    CLK_REF_OUT1 = CLK64(CLK_REF_OUT1_SEL, CLK_REF_OUT1_DIV),
    CLK_32K_FRAC = CLK64(CLK_DEEPSLOW_FRAC_SEL, CLK_DEEPSLOW_FRAC_DIV),
    CLK_32K      = CLK64(CLK_DEEPSLOW_SEL, 0U),
    CLK_DDRPHY   = CLK64(CLK_DDRPHY_SEL, CLK_DDRPHY_DIV),

    /* scru */
    CLK_RKTIMER3_TIME1 = CLK64(CLK_RKTIMER3_TIMER1_SEL, 0U),
    CLK_RKTIMER3_TIME2 = CLK64(CLK_RKTIMER3_TIMER2_SEL, 0U),
    CLK_RKTIMER3_TIME3 = CLK64(CLK_RKTIMER3_TIMER3_SEL, 0U),
    CLK_RKTIMER4_TIME1 = CLK64(CLK_RKTIMER4_TIMER1_SEL, 0U),
    CLK_RKTIMER4_TIME2 = CLK64(CLK_RKTIMER4_TIMER2_SEL, 0U),
    CLK_RKTIMER4_TIME3 = CLK64(CLK_RKTIMER4_TIMER3_SEL, 0U),

    CLK_CORE_CRYPTO  = CLK64(CLK_CORE_CRYPTO_SEL, CLK_CORE_CRYPTO_DIV),
    CLK_PKA_CRYPTO   = CLK64(CLK_PKA_CRYPTO_SEL, CLK_PKA_CRYPTO_DIV),
    SSTCLKEN_STARSE0 = CLK64(0U, SSTCLKEN_STARSE0_DIV),
    SSTCLKEN_STARSE1 = CLK64(0U, SSTCLKEN_STARSE1_DIV),
} eCLOCK_Name;

typedef enum PD_Id {
    PD_INVALID = 0U,
} ePD_Id;
#endif /* __ASSEMBLY__ */

#ifdef __cplusplus
}
#endif

#endif  /* SOC_H */