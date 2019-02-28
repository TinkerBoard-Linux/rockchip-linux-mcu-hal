/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup SFC
 *  @{
 */

#ifndef _HAL_SFC_H_
#define _HAL_SFC_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SFC_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define SFC_MAX_IOSIZE (1024 * 8) /* 8KB */

/** SFC_CMD Bit Value Without Shift */
#define SFC_ADDR_0BITS  (0)
#define SFC_ADDR_24BITS (1)
#define SFC_ADDR_32BITS (2)
#define SFC_ADDR_XBITS  (3)

#define SFC_WRITE (1)
#define SFC_READ  (0)

/** SFC_CTRL Bit Value Without Shift */
#define SFC_1BITS_LINE (0)
#define SFC_2BITS_LINE (1)
#define SFC_4BITS_LINE (2)

#define SFC_ENABLE_DMA (1 << 14)

/* SFC_VER */
#define SFC_VER_VER_1 (1 << SFC_VER_VER_SHIFT)
#define SFC_VER_VER_3 (3 << SFC_VER_VER_SHIFT)

/***************************** Structure Definition **************************/

/** SFC_CTRL bit union */
typedef union {
    uint32_t d32;
    struct {
        unsigned mode : 1; /* spi mode select */
        unsigned sps : 1; /* shift in phase at: posedge 1: negedge */
        unsigned reserved3_2 : 2;
        unsigned scic : 4; /* sclk_idle_level_cycles */
        unsigned cmdlines : 2; /* cmd bits number */
        unsigned addrlines : 2; /* address bits number */
        unsigned datalines : 2; /* data bits number */
        unsigned reserved14_15 : 2;
        unsigned addrbits : 5;
        unsigned reserved31_21 : 11;
    } b;
} SFCCTRL_DATA;

/** SFC_CMD bit union */
typedef union {
    uint32_t d32;
    struct {
        unsigned cmd : 8; /* command that will send to Serial Flash */
        unsigned dummybits : 4; /* dummy bits number */
        unsigned rw : 1; /* 0:read, 1: write */
        unsigned readmode : 1; /* continuous read mode */
        unsigned addrbits : 2; /* address bits number */
        unsigned datasize : 14; /* transferred bytes number */
        unsigned cs : 2; /* chip select */
    } b;
} SFCCMD_DATA;

/** SFC_CTRL datalines value */
typedef enum {
    DATA_LINES_X1 = 0,
    DATA_LINES_X2,
    DATA_LINES_X4
} SFC_DATA_LINES;

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_SFC_Init(void);
HAL_Status HAL_SFC_Deinit(void);
HAL_Status HAL_SFC_Request(uint32_t sfcmd, uint32_t sfctrl, uint32_t addr,
                           void *data);
HAL_Status HAL_SFC_Request_DMA(uint32_t sfcmd, uint32_t sfctrl, uint32_t addr,
                               void *data);
uint16_t HAL_SFC_GetCtrlVertion(void);
HAL_Status HAL_SFC_IRQHandler(void);
HAL_Status HAL_SFC_UnMaskTransmInterrupt(void);
HAL_Status HAL_SFC_MaskDmaInterrupt(void);
HAL_Check HAL_SFC_IsTransmInterrupt(void);
HAL_Status HAL_SFC_ClearTransmInterrupt(void);

#endif

/** @} */

/** @} */
