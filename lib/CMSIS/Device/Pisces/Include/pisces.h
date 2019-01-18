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

/* Memory Base */
#define ICACHE_BASE                    0x40000000
#define ICACHE_CTRL_BASE               ICACHE_BASE
#define ICACHE_PMU_BASE                (ICACHE_BASE + 0x40)
#define DCACHE_BASE                    0x40004000
#define DCACHE_CTRL_BASE               DCACHE_BASE
#define DCACHE_PMU_BASE                (DCACHE_BASE + 0x40)
#define RKIO_UART0_BASE                0x40800000
#define RKIO_MAILBOX0_BASE             0x40100000
#define RKIO_MAILBOX1_BASE             0x40110000
#define RKIO_MAILBOX2_BASE             0x40120000
#define SDIO_BASE                      0x40c90000
#define WDT_BASE                       0x40a00000

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

#define ICACHE_CTRL       ((struct CACHE_CTRL_REG *) ICACHE_CTRL_BASE)
#define ICACHE_PMU        ((struct CACHE_PMU_REG *) ICACHE_PMU_BASE)
#define DCACHE_CTRL       ((struct CACHE_CTRL_REG *) DCACHE_CTRL_BASE)
#define DCACHE_PMU        ((struct CACHE_PMU_REG *) DCACHE_PMU_BASE)

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/***********************  Bit definition for CACHE_CTRL register  ***********************/
#define CACHE_MPU_MODE_SHIFT            (12U)
#define CACHE_MPU_MODE                  (0x1U << CACHE_MPU_MODE_SHIFT)
#define CACHE_ENTRY_THRESH_SHIFT        (8U)
#define CACHE_ENTRY_THRESH_MASK         (0x7U << CACHE_ENTRY_THRESH_SHIFT)
#define CACHE_STB_TIMEOUT_EN_SHIFT      (7U)
#define CACHE_STB_TIMEOUT_EN            (0x1U << CACHE_STB_TIMEOUT_EN_SHIFT)
#define CACHE_BYPASS_SHIFT              (6U)
#define CACHE_BYPASS                    (0x1U << CACHE_BYPASS_SHIFT)
#define CACHE_PMU_EN_SHIFT              (5U)
#define CACHE_PMU_EN                    (0x1U << CACHE_PMU_EN_SHIFT)
#define CACHE_FLUSH_SHIFT               (4U)
#define CACHE_FLUSH                     (0x1U << CACHE_FLUSH_SHIFT)
#define CACHE_STB_EN_SHIFT              (3U)
#define CACHE_STB_EN                    (0x1U << CACHE_STB_EN_SHIFT)
#define CACHE_HB_EN_SHIFT               (2U)
#define CACHE_HB_EN                     (0x1U << CACHE_HB_EN_SHIFT)
#define CACHE_WT_EN_SHIFT               (1U)
#define CACHE_WT_EN                     (0x1U << CACHE_WT_EN_SHIFT)
#define CACHE_EN_SHIFT                  (0U)
#define CACHE_EN                        (0x1U << CACHE_EN_SHIFT)

/********************  Bit definition for CACHE_MAINTAIN0 register  *********************/
#define CACHE_M_ADDR_MASK               0xFFFFFFE0U
#define CACHE_M_CLEAN                   0x0U
#define CACHE_M_INVALID                 0x2U
#define CACHE_M_CLEAN_INVALID           0x4U
#define CACHE_M_INVALID_ALL             0x6U
#define CACHE_M_VALID                   0x1U
#define CACHE_M_STATUS_MASK             0x1U

/********************  Bit definition for CACHE_MAINTAIN1 register  *********************/
#define CACHE_M_OFFSET_MASK             0xFFFFU

/********************  Bit definition for STB_TIMEOUT_CTRL register  ********************/
#define CACHE_STB_TIMEOUT_VALUE_MASK    0x7FFFFU

/**********************  Bit definition for CACHE_INT_ST register  **********************/
#define CACHE_ERR_RECORD_EN             0x1U

/********************  Bit definition for CACHE_ERR_HADDR register  *********************/
#define CACHE_AHB_ERROR_ST_MASK         0x1U

/**********************  Bit definition for CACHE_STATUS register  **********************/
#define CACHE_STATUS_FLUSH_DONE_MASK    (0x04U)
#define CACHE_STATUS_M_BUSY_MASK        (0x02U)
#define CACHE_STATUS_INIT_FINISH_MASK   (0x01U)

/**********************  definition for CACHE LINE SIZE  **********************/
#define CACHE_LINE_SHIFT                (5U)
#define CACHE_LINE_SIZE                 (0x1U << CACHE_LINE_SHIFT)
#define CACHE_LINE_ADDR_MASK            (0xFFFFFFFFU << CACHE_LINE_SHIFT)

#define CACHE_REVISION                  (0x00000100U)

/* MAILBOX Register Structure Define */
#define MBOX_BASE                      RKIO_MAILBOX0_BASE
#define MBOX1_BASE                     RKIO_MAILBOX1_BASE
#define MBOX_GROUP_CNT                 2
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

/* SDMMC/EMMC/SDIO Macro Define */
#define MMC_STATUS_DATA_STATE_MC_BUSY_SHIFT (10U)
#define MMC_STATUS_DATA_STATE_MC_BUSY_MASK (0x1U)
#define MMC_STATUS_FIFO_COUNT_SHIFT (17U)
#define MMC_STATUS_FIFO_COUNT_MASK (0x1fffU)
#define MMC_STATUS_FIFO_EMPTY_SHIFT (2U)
#define MMC_STATUS_FIFO_EMPTY_MASK (0x1U)

#define MMC_FIFOTH_TX_WMARK_SHIFT (0U)
#define MMC_FIFOTH_RX_WMARK_SHIFT (16U)
#define MMC_FIFOTH_RX_WMARK_MASK (0x7ffU)
#define MMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_SHIFT (28U)
#define MMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_8 (0x2U)

/* WDT Macro Define */
#define WDOG_CONTROL_REG_WDT_EN_MASK (0x1U)
#define WDOG_TIMEOUT_RANGE_TOPINIT_SHIFT (4U)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __Pisces_H */
