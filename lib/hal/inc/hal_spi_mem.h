/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SPI_MEM
 *  @{
 */

#ifndef _HAL_SPI_MEM_H_
#define _HAL_SPI_MEM_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SPI_MEM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

enum SPI_MEM_DATA_DIR {
    HAL_SPI_MEM_DATA_IN,
    HAL_SPI_MEM_DATA_OUT,
};

struct HAL_SPI_MEM_OP {
    struct {
        uint8_t buswidth;
        uint8_t opcode;
    } cmd;

    struct {
        uint8_t nbytes;
        uint8_t buswidth;
        uint32_t val;
    } addr;

    struct {
        uint8_t nbytes;
        uint8_t buswidth;
    } dummy;

    struct {
        uint8_t buswidth;
        enum SPI_MEM_DATA_DIR dir;
        unsigned int nbytes;
        /* buf.{in,out} must be DMA-able. */
        union {
            void *in;
            const void *out;
        } buf;
    } data;
};

/** SNOR HOST mode */
#define HAL_SPI_CPHA      HAL_BIT(0)            /* clock phase */
#define HAL_SPI_CPOL      HAL_BIT(1)            /* clock polarity */
#define HAL_SPI_MODE_0    (0|0)                 /* (original MicroWire) */
#define HAL_SPI_MODE_1    (0|HAL_SPI_CPHA)
#define HAL_SPI_MODE_2    (HAL_SPI_CPOL|0)
#define HAL_SPI_MODE_3    (HAL_SPI_CPOL|HAL_SPI_CPHA)
#define HAL_SPI_CS_HIGH   HAL_BIT(2)            /* CS active high */
#define HAL_SPI_LSB_FIRST HAL_BIT(3)            /* per-word bits-on-wire */
#define HAL_SPI_3WIRE     HAL_BIT(4)            /* SI/SO signals shared */
#define HAL_SPI_LOOP      HAL_BIT(5)            /* loopback mode */
#define HAL_SPI_SLAVE     HAL_BIT(6)            /* slave mode */
#define HAL_SPI_PREAMBLE  HAL_BIT(7)            /* Skip preamble bytes */
#define HAL_SPI_TX_BYTE   HAL_BIT(8)            /* transmit with 1 wire byte */
#define HAL_SPI_TX_DUAL   HAL_BIT(9)            /* transmit with 2 wires */
#define HAL_SPI_TX_QUAD   HAL_BIT(10)           /* transmit with 4 wires */
#define HAL_SPI_RX_SLOW   HAL_BIT(11)           /* receive with 1 wire slow */
#define HAL_SPI_RX_DUAL   HAL_BIT(12)           /* receive with 2 wires */
#define HAL_SPI_RX_QUAD   HAL_BIT(13)           /* receive with 4 wires */
#define HAL_SPI_XIP       HAL_BIT(14)           /* support spi flash xip mode */

/** SNOR HOST xfer flags */
#define HAL_SPI_XFER_BEGIN HAL_BIT(0)	/* Assert CS before transfer */
#define HAL_SPI_XFER_END   HAL_BIT(1)	/* Deassert CS after transfer */
#define HAL_SPI_XFER_ONCE  (HAL_SPI_XFER_BEGIN | HAL_SPI_XFER_END)

/** @} */

#endif

/** @} */

/** @} */