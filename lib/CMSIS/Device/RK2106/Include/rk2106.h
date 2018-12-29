/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _RK2106_H_
#define _RK2106_H_

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum {
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
    Interrupt0_IRQn = 0,
    INT_ID_SFC,
    INT_ID_SYNTH,
    INT_ID_EBC,
    INT_ID_EMMC,
    INT_ID_SDMMC,
    INT_ID_USBC,
    INT_ID_DMA,
    INT_ID_IMDCT,
    INT_ID_WDT,
    INT_ID_MAILBOX0,
    INT_ID_MAILBOX1,
    INT_ID_MAILBOX2,
    INT_ID_MAILBOX3,
    INT_ID_REV0,
    INT_ID_REV1,
    INT_ID_REV2,
    INT_ID_PWM1,
    INT_ID_PWM0,
    INT_ID_TIMER1,
    INT_ID_TIMER0,
    INT_ID_SRADC,
    INT_ID_UART5,
    INT_ID_UART4,
    INT_ID_UART3,
    INT_ID_UART2,
    INT_ID_UART1,
    INT_ID_UART0,
    INT_ID_SPI1,
    INT_ID_SPI0,
    INT_ID_I2C2,
    INT_ID_I2C1,
    INT_ID_I2C0,
    INT_ID_I2S1,
    INT_ID_I2S0,
    INT_ID_HIFI,
    INT_ID_PMU,
    INT_ID_GPIO2,
    INT_ID_GPIO1,
    INT_ID_GPIO0,
    INT_ID_VOP,
    INT_ID_DMA2,

    NUM_INTERRUPTS //Interrupts Total Nums

    /* Interrupts 10 .. 224 are left out */
} IRQn_Type;

#define NVIC_PERIPH_IRQ_NUM MAX_IRQn
#define NVIC_PERIPH_IRQ_OFFSET 16

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* -------  Start of section using anonymous unions and disabling warnings  ------- */
#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined(__ICCARM__)
#pragma language = extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning 586
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CM3_REV 0x0201U /* Core revision r2p1 */
#define __MPU_PRESENT 1U /* MPU present */
#define __VTOR_PRESENT 1U /* VTOR present */
#define __NVIC_PRIO_BITS 5U /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig \
    0U /* Set to 1 if different SysTick Config is used */

#include "core_cm3.h" /* Processor and core peripherals */
#include "system_rk2106.h" /* System Header */
#include <stdint.h>

/* --------  End of section using anonymous unions and disabling warnings  -------- */
#if defined(__CC_ARM)
#pragma pop
#elif defined(__ICCARM__)
/* leave anonymous unions enabled */
#elif (defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050))
#pragma clang diagnostic pop
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning restore
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================            Extend  Peripheral Resource         ================ */
/* ================================================================================ */

#define SRAM_BASE ((uint32_t)0x03000000)

#define ADC_BASE ((uint32_t)0x400d0000)
#define EFUSE_BASE ((uint32_t)0x40090000)
#define RTC_BASE ((uint32_t)0x400b0000)
#define NANDC_BASE ((uint32_t)0x60080000)
#define HIFIACC_BASE ((uint32_t)0x01060000)

#define I2S0_BASE ((uint32_t)0x40020000)
#define I2S1_BASE ((uint32_t)0x40030000)
#define I2C0_BASE ((uint32_t)0x40040000)
#define I2C1_BASE ((uint32_t)0x40050000)
#define I2C2_BASE ((uint32_t)0x40060000)
#define SPI0_BASE ((uint32_t)0x40070000)
#define SPI1_BASE ((uint32_t)0x40080000)
#define ACODEC_BASE ((uint32_t)0x40090000)
#define UART0_BASE ((uint32_t)0x400a0000)
#define UART1_BASE ((uint32_t)0x400b0000)
#define UART2_BASE ((uint32_t)0x400c0000)
#define SARADC_BASE ((uint32_t)0x400d0000)
#define TIMER_BASE ((uint32_t)0x400e0000)
#define PWM0_BASE ((uint32_t)0x400f0000)
#define PWM1_BASE ((uint32_t)0x40100000)
#define MAILBOX_BASE ((uint32_t)0x40110000)
#define WDT_BASE ((uint32_t)0x40120000)
#define UART3_BASE ((uint32_t)0x40130000)
#define UART4_BASE ((uint32_t)0x40140000)
#define UART5_BASE ((uint32_t)0x40150000)

#define GPIO0_BASE ((uint32_t)0x40160000)
#define GPIO1_BASE ((uint32_t)0x40170000)
#define CRU_BASE ((uint32_t)0x40180000)

#define GRF_BASE ((uint32_t)0x50010000)
#define PMU_BASE ((uint32_t)0x50020000)
#define GPIO2_BASE ((uint32_t)0x50030000)
#define DMA_BASE ((uint32_t)0x60000000)
#define DMA_BASE2 ((uint32_t)0x01070000)
#define IMDCT_BASE ((uint32_t)0x60010000)
#define SDMMC_BASE ((uint32_t)0x60020000)
#define EMMC_BASE ((uint32_t)0x60030000)
#define EBC_BASE ((uint32_t)0x60040000)
#define SYNTH_BASE ((uint32_t)0x60050000)
#define SFC_BASE ((uint32_t)0x60060000)
#define VOP_BASE ((uint32_t)0x60070000)
#define USB_BASE ((uint32_t)0x60080000)

#define SDC0_ADDR ((uint32_t)0x60020000)
#define SDC0_FIFO_ADDR (SDC0_ADDR + 0x200)
#define EMMC_ADDR ((uint32_t)0x60030000)
#define EMMC_FIFO_ADDR (EMMC_ADDR + 0x200)

/*
 * GPIO struct define
 */
struct GPIO_REG {
    __IO uint32_t GPIO_SWPORT_DR;
    __IO uint32_t GPIO_SWPORT_DDR;
    __IO uint32_t RESERVED1[(0x30 - 0x04) / 4 - 1];
    __IO uint32_t GPIO_INTEN;
    __IO uint32_t GPIO_INTMASK;
    __IO uint32_t GPIO_INTTYPE_LEVEL; /* edge or level trigger. */
    __IO uint32_t
        GPIO_INT_POLARITY; /* high level is valid or low level valid. */
    __IO uint32_t GPIO_INT_STATUS;
    __IO uint32_t GPIO_INT_RAWSTATUS;

    __IO uint32_t GPIO_DEBOUNCE;
    __IO uint32_t GPIO_PORT_EOI;
    __IO uint32_t GPIO_EXT_PORT;
    __IO uint32_t RESERVED2[(0x60 - 0x50) / 4 - 1];
    __IO uint32_t GPIO_LS_SYNC;
};

/*
 * CRU struct define
 */
struct CRU_REG {
    __IO uint32_t CRU_APLL_CON0;
    __IO uint32_t CRU_APLL_CON1;
    __IO uint32_t CRU_APLL_CON2;
    __IO uint32_t RESERVED1[1];
    __IO uint32_t CRU_MODE_CON;
    __IO uint32_t CRU_CLKSEL_CON[13];
    __IO uint32_t RESERVED2[2];
    __IO uint32_t CRU_CLK_FRACDIV_CON0;
    __IO uint32_t CRU_CLK_FRACDIV_CON1;
    __IO uint32_t RESERVED3[10];
    __IO uint32_t CRU_CLKGATE_CON[10];
    __IO uint32_t RESERVED4[6];
    __IO uint32_t CRU_SOFTRST[4];
    __IO uint32_t RESERVED5[4];
    __IO uint32_t CRU_STCLK_CON0;
    __IO uint32_t CRU_STCLK_CON1;
    __IO uint32_t RESERVED6[3];
    __IO uint32_t CRU_GLB_SRST_FST_VALUE;
    __IO uint32_t CRU_GLB_CNT_TH;
};

/*
 * UART struct define
 */
typedef struct UART_REG {
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

/*
 * GRF struct define
 */
struct GRF_REG {
    __IO uint32_t GPIO_IO0MUX[4];
    __IO uint32_t GPIO_IO0PULL[4]; /* 0x10 */

    __IO uint32_t GPIO_IO1MUX[4]; /* 0x20 */
    __IO uint32_t GPIO_IO1PULL[4];

    __IO uint32_t GPIO_IO2MUX[4]; /* 0x40 */
    __IO uint32_t GPIO_IO2PULL[4];

    __IO uint32_t GRF_PVTM_CON0; /* GRF_DLL_CON0 0x60 */
    __IO uint32_t GRF_PVTM_CON1;
    __IO uint32_t GRF_PVTM_CON2;

    __IO uint32_t GRF_PVTM_STATUS0; /* GRF_DLL_STATUS0 */
    __IO uint32_t GRF_PVTM_STATUS1; /* 0x70 */

    __IO uint32_t PAD0[3];

    __IO uint32_t GRF_USBPHY_CON0; /* 0x80 */
    __IO uint32_t GRF_USBPHY_CON1;
    __IO uint32_t GRF_USBPHY_CON2;
    __IO uint32_t GRF_USBPHY_CON3;
    __IO uint32_t GRF_USBPHY_CON4; /* 0x90 */
    __IO uint32_t GRF_USBPHY_CON5;
    __IO uint32_t GRF_USBPHY_CON6;
    __IO uint32_t GRF_USBPHY_CON7;
    __IO uint32_t GRF_USBPHY_CON8; /* 0xa0 */
    __IO uint32_t GRF_USBPHY_CON9;
    __IO uint32_t GRF_USBPHY_CON10;
    __IO uint32_t GRF_USBPHY_CON11;

    __IO uint32_t GRF_UOC_CON0; /* 0xb0 */
    __IO uint32_t GRF_UOC_CON1;
    __IO uint32_t GRF_UOC_CON2;

    __IO uint32_t GRF_IOMUX_CON;
    __IO uint32_t PAD1; /* 0xc0 */
    __IO uint32_t GRF_INTER_CON0;
    __IO uint32_t PAD2;
    __IO uint32_t GRF_VREF_TRIM_CON; /* 0xcc */
    __IO uint32_t PAD3[4]; /* 0xd0 - 0xdc */
    __IO uint32_t GRF_SOC_STATUS0; /* 0xe0 */
    __IO uint32_t GRF_SOC_STATUS1;
    __IO uint32_t GRF_SOC_USB_STATUS; /* 0xe8 */
    __IO uint32_t PAD4[3]; /* 0xec - 0xf4 */
    __IO uint32_t GRF_PRJ_ID; /* f8 */
    __IO uint32_t GRF_CPU_ID;
};

/*
 * GRF BIT MACRO
 */
#define IOMUX_GPIO2A6_IO ((uint32_t)(0))

/*
 * GPIO BIT MACRO
 */
#define UART0_TX_WORK BIT(0)
#define UART0_RX_WORK BIT(1)
#define UART1_TX_WORK BIT(2)
#define UART1_RX_WORK BIT(3)
#define UART2_TX_WORK BIT(5)
#define UART2_RX_WORK BIT(6)
#define UART3_TX_WORK BIT(7)
#define UART3_RX_WORK BIT(8)
#define UART_ERR_RX BIT(14)

#define UART_IE_TX BIT(1)
#define UART_IE_RX BIT(0)

#define UART_IF_MASK (0xFU)
#define UART_IF_THR_EMPTY (0x2U)
#define UART_IF_REC_DATA (0x4U)
#define UART_IF_C_TIMEOUT (0xCU)

/* UART_IER */
#define THRE_INT_ENABLE ((uint32_t)(1) << 7)
#define THRE_INT_DISABLE ((uint32_t)(0))
#define ENABLE_MODEM_STATUS_INT ((uint32_t)(1) << 3)
#define DISABLE_MODEM_STATUS_INT ((uint32_t)(0))
#define ENABLE_RECEIVER_LINE_STATUS_INT ((uint32_t)(1) << 2)
#define DISABLE_RECEIVER_LINE_STATUS_INT ((uint32_t)(0))
#define ENABLE_TRANSMIT_HOLDING_EM_INT ((uint32_t)(1) << 1)
#define DISABLE_TRANSMIT_HOLDING_EM_INT ((uint32_t)(0))
#define ENABLE_RECEIVER_DATA_INT ((uint32_t)(1))
#define DISABLE_RECEIVER_DATA_INT ((uint32_t)(0))

/* UART_IIR */
#define IR_MODEM_STATUS ((uint32_t)(0))
#define NO_INT_PENDING ((uint32_t)(1))
#define THR_EMPTY ((uint32_t)(2))
#define RECEIVER_DATA_AVAILABLE ((uint32_t)(0x04))
#define RECEIVER_LINE_AVAILABLE ((uint32_t)(0x06))
#define BUSY_DETECT ((uint32_t)(0x07))
#define CHARACTER_TIMEOUT ((uint32_t)(0x0c))

/* UART_LCR */
#define LCR_DLA_EN ((uint32_t)(1) << 7)
#define BREAK_CONTROL_BIT ((uint32_t)(1) << 6)
#define PARITY_DISABLED ((uint32_t)(0))
#define PARITY_ENABLED ((uint32_t)(1) << 3)
#define ONE_STOP_BIT ((uint32_t)(0))
#define ONE_HALF_OR_TWO_BIT ((uint32_t)(1) << 2)
#define LCR_WLS_5 ((uint32_t)(0x00))
#define LCR_WLS_6 ((uint32_t)(0x01))
#define LCR_WLS_7 ((uint32_t)(0x02))
#define LCR_WLS_8 ((uint32_t)(0x03))
#define UART_DATABIT_MASK ((uint32_t)(0x03))

/* UART_MCR */
#define IRDA_SIR_DISABLED ((uint32_t)(0))
#define IRDA_SIR_ENSABLED ((uint32_t)(1) << 6)
#define AUTO_FLOW_DISABLED ((uint32_t)(0))
#define AUTO_FLOW_ENSABLED ((uint32_t)(1) << 5)

/* UART_LSR */
#define THRE_BIT_EN ((uint32_t)(1) << 5)

/* UART_USR */
#define UART_RECEIVE_FIFO_EMPTY ((uint32_t)(0))
#define UART_RECEIVE_FIFO_NOT_EMPTY ((uint32_t)(1) << 3)
#define UART_TRANSMIT_FIFO_FULL ((uint32_t)(0))
#define UART_TRANSMIT_FIFO_NOT_FULL ((uint32_t)(1) << 1)

/* UART_SFE */
#define SHADOW_SHIFT ((uint32_t)(0))
#define SHADOW_FIFI_ENABLED ((uint32_t)(1))
#define SHADOW_FIFI_DISABLED ((uint32_t)(0))

/* UART_SRT */
#define RCVR_TRIGGER_SHIF ((uint32_t)(1))
#define RCVR_TRIGGER_ONE ((uint32_t)(0) << RCVR_TRIGGER_SHIF)
#define RCVR_TRIGGER_QUARTER_FIFO ((uint32_t)(1) << RCVR_TRIGGER_SHIF)
#define RCVR_TRIGGER_HALF_FIFO ((uint32_t)(2) << RCVR_TRIGGER_SHIF)
#define RCVR_TRIGGER_TWO_LESS_FIFO ((uint32_t)(3) << RCVR_TRIGGER_SHIF)

/* UART_STET */
#define TX_TRIGGER_PARA_SHIFT ((uint32_t)(3))
#define TX_TRIGGER_EMPTY ((uint32_t)(0) << TX_TRIGGER_PARA_SHIFT)
#define TX_TRIGGER_TWO_IN_FIFO ((uint32_t)(1) << TX_TRIGGER_PARA_SHIFT)
#define TX_TRIGGER_ONE_FOUR_FIFO ((uint32_t)(2) << TX_TRIGGER_PARA_SHIFT)
#define TX_TRIGGER_HALF_FIFO ((uint32_t)(3) << TX_TRIGGER_PARA_SHIFT)

/* UART_SRR */
#define UART_RESET ((uint32_t)(1))
#define RCVR_FIFO_REST ((uint32_t)(1) << 1)
#define XMIT_FIFO_RESET ((uint32_t)(1) << 2)

/* UART_FCR */
#define TX_TRIGGER_TWO ((uint32_t)(0x1) << 4) // 2 characters in the TX FIFO
#define RX_TRIGGER_HALF_FIFO ((uint32_t)(0x1) << 7) // 1/2 in the rx FIFO
#define TX_LEN_PER_INT ((uint32_t)(64)) //(16)
#define RX_LEN_PER_INT ((uint32_t)(8))

#define MODE_X_DIV 16

#endif /* _RK2106_H_ */
