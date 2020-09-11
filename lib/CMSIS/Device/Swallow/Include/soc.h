/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

/* IO definitions (access restrictions to peripheral registers) */
#ifdef __cplusplus
  #define   __I     volatile             /*!< brief Defines 'read only' permissions    */
#else
  #define   __I     volatile const       /*!< brief Defines 'read only' permissions    */
#endif
#define     __O     volatile             /*!< brief Defines 'write only' permissions   */
#define     __IO    volatile             /*!< brief Defines 'read / write' permissions */

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_UART0_TX = 0,
    DMA_REQ_UART0_RX = 1,
    DMA_REQ_SPI0_TX  = 2,
    DMA_REQ_SPI0_RX  = 3,
    DMA_REQ_SPI1_TX  = 4,
    DMA_REQ_SPI1_RX  = 5,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
  NonMaskableInt_IRQn       = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn            = -13,     /*  3 HardFault Interrupt */



  SVCall_IRQn               =  -5,     /* 11 SV Call Interrupt */

  PendSV_IRQn               =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn              =  -1,     /* 15 System Tick Interrupt */

/******  Platform Exceptions Numbers ***************************************************/
  SARADC_IRQn              = 0,      /*!< SARADC Interrupt              */
  WDT_IRQn                 = 1,      /*!< WDT Interrupt                 */
  TIMER0_IRQn              = 2,      /*!< TIMER0 Interrupt              */
  TIMER1_IRQn              = 3,      /*!< TIMER1 Interrupt              */
  TIMER2_IRQn              = 4,      /*!< TIMER2 Interrupt              */
  TIMER3_IRQn              = 5,      /*!< TIMER3 Interrupt              */
  TIMER4_IRQn              = 6,      /*!< TIMER4 Interrupt              */
  TIMER5_IRQn              = 7,      /*!< TIMER5 Interrupt              */
  JPEG0_IRQn               = 8,      /*!< JPEG0 Interrupt               */
  JPEG1_IRQn               = 9,      /*!< JPEG1 Interrupt               */
  PWM_IRQn                 = 10,     /*!< PWM Interrupt                 */
  FSPI0_IRQn               = 11,     /*!< FSPI0 Interrupt               */
  CACHE_IRQn               = 12,     /*!< CACHE Interrupt               */
  ISP_IRQn                 = 13,     /*!< ISP Interrupt                 */
  VICAP_IRQn               = 14,     /*!< VICAP Interrupt               */
  USB_IRQn                 = 15,     /*!< USB Interrupt                 */
  USB_BVALID_IRQn          = 16,     /*!< USB BVALID Interrupt          */
  USB_ID_IRQn              = 17,     /*!< USB ID Interrupt              */
  USB_LINESTATE_IRQn       = 18,     /*!< USB LINESTATE Interrupt       */
  USB_DISCONNECT_IRQn      = 19,     /*!< USB DISCONNECT Interrupt      */
  CSI2HOST0_IRQn           = 20,     /*!< CSI2HOST0 Interrupt           */
  CSI2HOST1_IRQn           = 21,     /*!< CSI2HOST1 Interrupt           */
  DMAC0_IRQn               = 22,     /*!< DMAC0 Interrupt               */
  DMAC1_IRQn               = 23,     /*!< DMAC1 Interrupt               */
  DMAC2_IRQn               = 24,     /*!< DMAC2 Interrupt               */
  BUFFER_MANAGER_CH0_IRQn  = 25,     /*!< BUFFER MANAGER CHANEL 0       */
  BUFFER_MANAGER_CH1_IRQn  = 26,     /*!< BUFFER MANAGER CHANEL 1       */
  BUFFER_MANAGER_CH2_IRQn  = 27,     /*!< BUFFER MANAGER CHANEL 2       */
  BUFFER_MANAGER_CH3_IRQn  = 28,     /*!< BUFFER MANAGER CHANEL 3       */
  BUFFER_MANAGER_CH4_IRQn  = 29,     /*!< BUFFER MANAGER CHANEL 4       */
  BUFFER_MANAGER_CH5_IRQn  = 30,     /*!< BUFFER MANAGER CHANEL 5       */
  INTC0_IRQn               = 31,     /*!< External IRQ controller 0     */
  NUM_INTERRUPTS           = 32,     /*!< Number of internal IRQ        */
  I2C0_IRQn                = 32,     /*!< I2C0 Interrupt                */
  I2C1_IRQn                = 33,     /*!< I2C1 Interrupt                */
  UART0_IRQn               = 34,     /*!< UART0 Interrupt               */
  SPI0_IRQn                = 35,     /*!< SPI0 Interrupt                */
  SPI1_IRQn                = 36,     /*!< SPI1 Interrupt                */
  GPIO0_IRQn               = 37,     /*!< GPIO0 Interrupt               */
  GPIO1_IRQn               = 38,     /*!< GPIO1 Interrupt               */
  CKCAL_IRQn               = 39,     /*!< JSHASH Interrupt              */
  AHB_ARB_IRQn             = 40,     /*!< AHB ARB Interrupt             */
  TOTAL_INTERRUPTS         = 41,     /*!< Total Interrupt               */
} IRQn_Type;

#define EXT_INTERRUPT            1U
#define NUM_INTC                 (NUM_INTERRUPTS - INTC0_IRQn)
#define NUM_EXT_INTERRUPTS       (TOTAL_INTERRUPTS - NUM_INTERRUPTS)

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

#define PLL_INPUT_OSC_RATE       (24 * 1000 * 1000)

/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CM0_REV                 0x0000U   /* Core revision r0p0 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            0U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#define NVIC_PERIPH_IRQ_OFFSET  16U
#define MAX_INTERRUPT_VECTOR    64U

#ifndef __ASSEMBLY__
#include "core_cm0.h"                       /* Processor and core peripherals */
#include "system_swallow.h"
#endif /* __ASSEMBLY__ */
#include "swallow.h"
#include "swallow_usb.h"

#define XIP_MAP_BASE       0x10000000U
#define SRAM2_MAP_BASE     0x000A0000U
#define SRAM1_MAP_BASE     0x00060000U
#define SRAM0_MAP_BASE     0x00020000U
#define USB_BASE           0x40180000U
#define USB_INNO_PHY_BASE  0x40250100U /* USB Innosilicon PHY base address */

/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */
#define USB                 ((struct USB_GLOBAL_REG *) USB_BASE)

#define IS_PCD_INSTANCE(instance) ((instance) == USB)
#define IS_HCD_INSTANCE(instance) ((instance) == USB)

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/*****************************************CACHE*****************************************/
/* CACHE LINE SIZE */
#define CACHE_LINE_SHIFT                (5U)
#define CACHE_LINE_SIZE                 (0x1U << CACHE_LINE_SHIFT)
#define CACHE_LINE_ADDR_MASK            (0xFFFFFFFFU << CACHE_LINE_SHIFT)
#define CACHE_M_CLEAN                   0x0U
#define CACHE_M_INVALID                 0x2U
#define CACHE_M_CLEAN_INVALID           0x4U
#define CACHE_M_INVALID_ALL             0x6U
#define CACHE_REVISION                  (0x00000100U)
/*****************************************FSPI*******************************************/
#define FSPI_CHIP_CNT                                       (0x1U)

/********Name=SOFTRST_CON00,Offset=0x400********/
#define SRST_H_MCU_BUS_AC   1U
#define SRST_MCU_AC         2U
#define SRST_P_LOGIC_BUS_AC 3U
/********Name=SOFTRST_CON01,Offset=0x404********/
#define SRST_H_MCU_BUS_NIU 17U
#define SRST_MCU           18U
#define SRST_H_INTMEM0     19U
#define SRST_H_INTMEM1     20U
#define SRST_H_INTMEM2     21U
#define SRST_H_ROM         22U
#define SRST_H_SFC         23U
#define SRST_H_SFC_XIP     24U
#define SRST_H_USB         25U
#define SRST_A_VIPCAP      28U
#define SRST_H_VIPCAP      29U
#define SRST_H_ISP         31U
/********Name=SOFTRST_CON02,Offset=0x408********/
#define SRST_H_JPEG_ENC0     32U
#define SRST_H_JPEG_ENC1     33U
#define SRST_H_LOGIC_BUS_NIU 34U
#define SRST_H_DMAC          35U
#define SRST_H_JHASH_M       36U
#define SRST_H_JHASH_S       37U
#define SRST_H_HOST_ARB      38U
#define SRST_A_JPEG_BUS_NIU  41U
#define SRST_A_JPEG_ENC0     42U
#define SRST_A_JPEG_ENC1     43U
/********Name=SOFTRST_CON03,Offset=0x40C********/
#define SRST_P_LOGIC_BUS_NIU  49U
#define SRST_P_UART           50U
#define SRST_P_I2C0           51U
#define SRST_P_I2C1           52U
#define SRST_P_PWM            53U
#define SRST_P_SPI0           54U
#define SRST_P_SPI1           55U
#define SRST_P_SARADC_CONTROL 56U
#define SRST_P_TIMER          57U
#define SRST_P_WDT            58U
#define SRST_P_CSI2HOST       59U
#define SRST_P_BUFFER_MANAGE  60U
#define SRST_P_INTCTRL        61U
/********Name=SOFTRST_CON04,Offset=0x410********/
#define SRST_P_GPIO0  68U
#define SRST_P_GPIO1  69U
#define SRST_P_GRF    72U
#define SRST_P_USBGRF 73U
#define SRST_DB_GPIO0 74U
#define SRST_DB_GPIO1 75U
#define SRST_USBPHY   77U
/********Name=SOFTRST_CON05,Offset=0x414********/
#define SRST_I2C0      80U
#define SRST_I2C1      81U
#define SRST_SPI0      82U
#define SRST_SPI1      83U
#define SRST_PWM       84U
#define SRST_TIMER0    86U
#define SRST_TIMER1    87U
#define SRST_TIMER2    88U
#define SRST_TIMER3    89U
#define SRST_TIMER4    90U
#define SRST_TIMER5    91U
#define SRST_MCU_JTRST 92U
#define SRST_XIP_SFC   93U
/********Name=SOFTRST_CON06,Offset=0x418********/
#define SRST_ISP      97U
#define SRST_D_VIPCAP 98U
#define SRST_I_VIPCAP 99U
#define SRST_UTMI     101U
#define SRST_USB_ADP  102U
#define SRST_S_UART   106U
/********Name=SOFTRST_CON07,Offset=0x41C********/
#define SRST_WBUFFER_CH0_MANAGE0 112U
#define SRST_WBUFFER_CH0_MANAGE1 113U
#define SRST_WBUFFER_CH1_MANAGE0 114U
#define SRST_WBUFFER_CH2_MANAGE0 115U
#define SRST_WBUFFER_CH2_MANAGE1 116U
#define SRST_WBUFFER_CH3_MANAGE0 117U
#define SRST_RBUFFER_CH0_MANAGE0 118U
#define SRST_RBUFFER_CH0_MANAGE1 119U
#define SRST_RBUFFER_CH1_MANAGE0 120U
#define SRST_RBUFFER_CH1_MANAGE1 121U

/********Name=GATE_CON00,Offset=0x300********/
#define CLK_32K_GATE              1U
#define CLK_GPLL_MUX_DIV_NP5_GATE 4U
#define HCLK_MCU_BUS_PLL_GATE     5U
/********Name=GATE_CON01,Offset=0x304********/
#define HCLK_LOGIC_BUS_GATE     16U
#define HCLK_MCU_BUS_NIU_GATE   17U
#define CLK_MCU_GATE            18U
#define HCLK_INTMEM0_LOGIC_GATE 19U
#define HCLK_INTMEM1_LOGIC_GATE 20U
#define HCLK_INTMEM2_LOGIC_GATE 21U
#define HCLK_ROM_GATE           22U
#define HCLK_SFC_GATE           23U
#define HCLK_SFC_XIP_GATE       24U
#define HCLK_USB_GATE           25U
#define HCLK_USB_PMU_GATE       26U
#define ACLK_VIPCAP_GATE        28U
#define HCLK_VIPCAP_GATE        29U
#define ACLK_ISP_GATE           30U
#define HCLK_ISP_GATE           31U
/********Name=GATE_CON02,Offset=0x308********/
#define HCLK_JPEG_ENC0_GATE     32U
#define HCLK_JPEG_ENC1_GATE     33U
#define HCLK_LOGIC_BUS_NIU_GATE 34U
#define HCLK_DMAC_GATE          35U
#define HCLK_JHASH_M_GATE       36U
#define HCLK_JHASH_S_GATE       37U
#define HCLK_HOST_ARB_GATE      38U
#define ACLK_JPEG_BUS_PLL_GATE  40U
#define ACLK_JPEG_BUS_NIU_GATE  41U
#define ACLK_JPEG_ENC0_GATE     42U
#define ACLK_JPEG_ENC1_GATE     43U
/********Name=GATE_CON03,Offset=0x30C********/
#define PCLK_LOGIC_BUS_PLL_GATE  48U
#define PCLK_LOGIC_BUS_NIU_GATE  49U
#define PCLK_UART_GATE           50U
#define PCLK_I2C0_GATE           51U
#define PCLK_I2C1_GATE           52U
#define PCLK_PWM_GATE            53U
#define PCLK_SPI0_GATE           54U
#define PCLK_SPI1_GATE           55U
#define PCLK_SARADC_CONTROL_GATE 56U
#define PCLK_TIMER_GATE          57U
#define PCLK_WDT_GATE            58U
#define PCLK_CSI2HOST_GATE       59U
#define PCLK_BUFFER_MANAGE_GATE  60U
#define PCLK_INTCTRL_GATE        61U
/********Name=GATE_CON04,Offset=0x310********/
#define PCLK_GPIO0_GATE       68U
#define PCLK_GPIO1_GATE       69U
#define PCLK_CRU_GATE         70U
#define PCLK_GRF_GATE         72U
#define PCLK_USBGRF_GATE      73U
#define DBCLK_GPIO0_GATE      74U
#define DBCLK_GPIO1_GATE      75U
#define CLK_SARADC_GATE       76U
#define CLK_MIPIPHY0_CFG_GATE 78U
#define CLK_MIPIPHY1_CFG_GATE 79U
/********Name=GATE_CON05,Offset=0x314********/
#define CLK_I2C0_PLL_GATE        80U
#define CLK_I2C1_PLL_GATE        81U
#define CLK_SPI0_PLL_GATE        82U
#define CLK_SPI1_PLL_GATE        83U
#define CLK_PWM_PLL_GATE         84U
#define CLK_TIMER_PLL_GATE       85U
#define CLK_TIMER0_GATE          86U
#define CLK_TIMER1_GATE          87U
#define CLK_TIMER2_GATE          88U
#define CLK_TIMER3_GATE          89U
#define CLK_TIMER4_GATE          90U
#define CLK_TIMER5_GATE          91U
#define CLK_XIP_SFC_DT50_GATE    93U
#define CLK_PWM_CAPTURE_PLL_GATE 94U
#define RTCCLK_MCU_GATE          95U
/********Name=GATE_CON06,Offset=0x318********/
#define CLK_WDT_PLL_GATE     96U
#define CLK_ISP_PLL_GATE     97U
#define DCLK_VIPCAP_PLL_GATE 98U
#define CLK_VIP_OUT_PLL_GATE 100U
#define CLK_USB_ADP_GATE     102U
#define OUTCLOCK_TEST_GATE   103U
#define CLK_UART_PLL_GATE    104U
#define CLK_UART_FRAC_GATE   105U
#define SCLK_UART_GATE       106U

/********Name=CLKSEL_CON00,Offset=0x100********/
#define HCLK_MCU_BUS_DIV     0x07000000U
#define CLK_GPLL_MUX_NP5_DIV 0x04080000U
/********Name=CLKSEL_CON01,Offset=0x104********/
#define CLK_32K_FRAC_DIV_DIV 0x20000001U
/********Name=CLKSEL_CON02,Offset=0x108********/
#define HCLK_LOGIC_BUS_DIV 0x04000002U
#define ACLK_JPEG_BUS_DIV  0x05080002U
/********Name=CLKSEL_CON03,Offset=0x10C********/
#define PCLK_LOGIC_BUS_DIV 0x05000003U
#define CLK_SARADC_DIV     0x08080003U
/********Name=CLKSEL_CON04,Offset=0x110********/
#define CLK_I2C0_DIV 0x06000004U
#define CLK_I2C1_DIV 0x06080004U
/********Name=CLKSEL_CON05,Offset=0x114********/
#define CLK_SPI0_DIV 0x06000005U
#define CLK_SPI1_DIV 0x06080005U
/********Name=CLKSEL_CON06,Offset=0x118********/
#define CLK_PWM_DIV   0x06000006U
#define CLK_TIMER_DIV 0x06080006U
/********Name=CLKSEL_CON07,Offset=0x11C********/
#define CLK_XIP_SFC_DIV 0x06000007U
#define CLK_ISP_DIV     0x06080007U
/********Name=CLKSEL_CON08,Offset=0x120********/
#define DCLK_VIPCAP_DIV 0x06000008U
#define CLK_VIP_OUT_DIV 0x06080008U
/********Name=CLKSEL_CON09,Offset=0x124********/
#define OUTCLOCK_TEST_DIV 0x04000009U
/********Name=CLKSEL_CON10,Offset=0x128********/
#define CLK_UART_DIV_DIV 0x0500000AU
/********Name=CLKSEL_CON11,Offset=0x12C********/
#define CLK_UART_FRAC_DIV_DIV 0x2000000BU

/********Name=CLKSEL_CON00,Offset=0x100********/
#define HCLK_MCU_BUS_SEL                  0x020E0000U
#define HCLK_MCU_BUS_SEL_CLK_GPLL_MUX     0U
#define HCLK_MCU_BUS_SEL_CLK_GPLL_MUX_NP5 1U
#define HCLK_MCU_BUS_SEL_CLK_USBPLL_MUX   2U
#define HCLK_MCU_BUS_SEL_RESERVED         3U
/********Name=CLKSEL_CON01,Offset=0x104********/
/********Name=CLKSEL_CON02,Offset=0x108********/
#define ACLK_JPEG_BUS_SEL                  0x010F0002U
#define ACLK_JPEG_BUS_SEL_CLK_GPLL_MUX     0U
#define ACLK_JPEG_BUS_SEL_CLK_GPLL_MUX_NP5 1U
/********Name=CLKSEL_CON03,Offset=0x10C********/
/********Name=CLKSEL_CON04,Offset=0x110********/
#define CLK_I2C0_SEL                  0x02060004U
#define CLK_I2C0_SEL_CLK_GPLL_MUX     0U
#define CLK_I2C0_SEL_CLK_GPLL_MUX_NP5 1U
#define CLK_I2C0_SEL_XIN_OSC0_FUNC    2U
#define CLK_I2C1_SEL                  0x020E0004U
#define CLK_I2C1_SEL_CLK_GPLL_MUX     0U
#define CLK_I2C1_SEL_CLK_GPLL_MUX_NP5 1U
#define CLK_I2C1_SEL_XIN_OSC0_FUNC    2U
/********Name=CLKSEL_CON05,Offset=0x114********/
#define CLK_SPI0_SEL               0x01070005U
#define CLK_SPI0_SEL_CLK_GPLL_MUX  0U
#define CLK_SPI0_SEL_XIN_OSC0_FUNC 1U
#define CLK_SPI1_SEL               0x010F0005U
#define CLK_SPI1_SEL_CLK_GPLL_MUX  0U
#define CLK_SPI1_SEL_XIN_OSC0_FUNC 1U
/********Name=CLKSEL_CON06,Offset=0x118********/
#define CLK_PWM_SEL                 0x01070006U
#define CLK_PWM_SEL_CLK_GPLL_MUX    0U
#define CLK_PWM_SEL_XIN_OSC0_FUNC   1U
#define CLK_TIMER_SEL               0x010F0006U
#define CLK_TIMER_SEL_CLK_GPLL_MUX  0U
#define CLK_TIMER_SEL_XIN_OSC0_FUNC 1U
/********Name=CLKSEL_CON07,Offset=0x11C********/
#define CLK_XIP_SFC_SEL                0x02060007U
#define CLK_XIP_SFC_SEL_CLK_GPLL_MUX   0U
#define CLK_XIP_SFC_SEL_CLK_USBPLL_MUX 1U
#define CLK_XIP_SFC_SEL_XIN_OSC0_FUNC  2U
/********Name=CLKSEL_CON08,Offset=0x120********/
#define CLK_VIP_OUT_SEL                0x020E0008U
#define CLK_VIP_OUT_SEL_CLK_GPLL_MUX   0U
#define CLK_VIP_OUT_SEL_CLK_USBPLL_MUX 1U
#define CLK_VIP_OUT_SEL_XIN_OSC0_FUNC  2U
/********Name=CLKSEL_CON09,Offset=0x124********/
#define OUTCLOCK_TEST_SEL                0x04040009U
#define OUTCLOCK_TEST_SEL_XIN_OSC0_FUNC  0U
#define OUTCLOCK_TEST_SEL_CLK_32K        1U
#define OUTCLOCK_TEST_SEL_CLK_GPLL       2U
#define OUTCLOCK_TEST_SEL_CLK_USBPLL     3U
#define OUTCLOCK_TEST_SEL_USB_PHYCLK     4U
#define OUTCLOCK_TEST_SEL_HCLK_MCU_BUS   5U
#define OUTCLOCK_TEST_SEL_ACLK_JPEG_BUS  6U
#define OUTCLOCK_TEST_SEL_PCLK_LOGIC_BUS 7U
#define OUTCLOCK_TEST_SEL_CLK_I2C0       8U
#define OUTCLOCK_TEST_SEL_CLK_I2C1       9U
#define OUTCLOCK_TEST_SEL_CLK_ISP        10U
#define OUTCLOCK_TEST_SEL_MIPI_PHYCLK0   11U
#define OUTCLOCK_TEST_SEL_MIPI_PHYCLK1   12U
#define OUTCLOCK_TEST_SEL_DCLK_VIPCAP    13U
#define OUTCLOCK_TEST_SEL_CLK_XIP_SFC    14U
#define OUTCLOCK_TEST_SEL_SCLK_UART      15U
/********Name=CLKSEL_CON10,Offset=0x128********/
#define CLK_UART_DIV_SEL                0x0107000AU
#define CLK_UART_DIV_SEL_CLK_GPLL_MUX   0U
#define CLK_UART_DIV_SEL_XIN_OSC0_FUNC  1U
#define SCLK_UART_SEL                   0x010F000AU
#define SCLK_UART_SEL_CLK_UART_DIV      0U
#define SCLK_UART_SEL_CLK_UART_FRAC_DIV 1U
/********Name=CLKSEL_CON11,Offset=0x12C********/

#define CLK(mux, div) \
    (((mux) & 0x0F0F00FFU) | (((div) & 0xFFU) << 8) | (((div) & 0x0F0F0000U) << 4))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_GPLL,
    PLL_GPLL_NP5   = CLK(0U, CLK_GPLL_MUX_NP5_DIV),
    PCLK_LOGIC_BUS = CLK(0U, PCLK_LOGIC_BUS_DIV),
    CLK_SARADC     = CLK(0U, CLK_SARADC_DIV),
    ACLK_JPEG_BUS  = CLK(ACLK_JPEG_BUS_SEL, ACLK_JPEG_BUS_DIV),
    HCLK_MCU_BUS   = CLK(HCLK_MCU_BUS_SEL, HCLK_MCU_BUS_DIV),
    HCLK_LOGIC_BUS = CLK(0U, HCLK_LOGIC_BUS_DIV),
    DCLK_VIPCAP    = CLK(0U, DCLK_VIPCAP_DIV),
    CLK_ISP        = CLK(0U, CLK_ISP_DIV),
    CLK_I2C0       = CLK(CLK_I2C0_SEL, CLK_I2C0_DIV),
    CLK_I2C1       = CLK(CLK_I2C1_SEL, CLK_I2C1_DIV),
    CLK_SPI0       = CLK(CLK_SPI0_SEL, CLK_SPI0_DIV),
    CLK_SPI1       = CLK(CLK_SPI1_SEL, CLK_SPI1_DIV),
    CLK_PWM        = CLK(CLK_PWM_SEL, CLK_PWM_DIV),
    CLK_TIMER      = CLK(CLK_TIMER_SEL, CLK_TIMER_DIV),
    CLK_XIP_SFC    = CLK(CLK_XIP_SFC_SEL, CLK_XIP_SFC_DIV),
    CLK_VIP_OUT    = CLK(CLK_VIP_OUT_SEL, CLK_VIP_OUT_DIV),
    OUTCLK_TEST    = CLK(OUTCLOCK_TEST_SEL, OUTCLOCK_TEST_DIV),
    CLK_UART0_SRC  = CLK(CLK_UART_DIV_SEL, CLK_UART_DIV_DIV),
    CLK_UART0_FRAC = CLK(0U, CLK_UART_FRAC_DIV_DIV),
    CLK_UART0      = CLK(SCLK_UART_SEL, 0U),
    CLK_32K        = CLK(0U, CLK_32K_FRAC_DIV_DIV),
} eCLOCK_Name;
#endif /* __ASSEMBLY__ */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
