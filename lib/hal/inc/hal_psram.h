/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifdef HAL_PSRAM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PSRAM
 *  @{
 */

#ifndef _HAL_PSRAM_H_
#define _HAL_PSRAM_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

#define PSRAM_PROTO_STR(a, b, c)            ((a << 8) | (b << 4) | c)
#define PSRAM_GET_PROTOCOL_CMD_BITS(proto)  ((proto >> 8) & 0xf)
#define PSRAM_GET_PROTOCOL_ADDR_BITS(proto) ((proto >> 4) & 0xf)
#define PSRAM_GET_PROTOCOL_DATA_BITS(proto) (proto & 0xf)

enum SPI_PSRAM_PROTOCOL {
    PSRAM_PROTO_1_1_1 = PSRAM_PROTO_STR(1, 1, 1),
    PSRAM_PROTO_1_1_2 = PSRAM_PROTO_STR(1, 1, 2),
    PSRAM_PROTO_1_1_4 = PSRAM_PROTO_STR(1, 1, 4),
    PSRAM_PROTO_1_1_8 = PSRAM_PROTO_STR(1, 1, 8),
    PSRAM_PROTO_1_2_2 = PSRAM_PROTO_STR(1, 2, 2),
    PSRAM_PROTO_1_4_4 = PSRAM_PROTO_STR(1, 4, 4),
    PSRAM_PROTO_1_8_8 = PSRAM_PROTO_STR(1, 8, 8),
    PSRAM_PROTO_2_2_2 = PSRAM_PROTO_STR(2, 2, 2),
    PSRAM_PROTO_4_4_4 = PSRAM_PROTO_STR(4, 4, 4),
    PSRAM_PROTO_8_8_8 = PSRAM_PROTO_STR(8, 8, 8),
};

/***************************** Structure Definition **************************/

struct PSRAM_HOST {
    uint32_t speed;
    uint32_t mode;
    uint8_t flags;
    HAL_Status (*xfer)(struct PSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op);
    HAL_Status (*xipConfig)(struct PSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op, uint32_t on);

    void *userdata;
};

struct SPI_PSRAM {
    struct PSRAM_HOST *spi;
    uint8_t addrWidth;
    uint8_t readOpcode;
    uint8_t readDummy;
    uint8_t programOpcode;
    uint8_t programDummy;

    enum SPI_PSRAM_PROTOCOL readProto;
    enum SPI_PSRAM_PROTOCOL writeProto;
};

/***************************** Function Declare ******************************/

HAL_Status HAL_PSRAM_Init(struct SPI_PSRAM *psram);
HAL_Status HAL_PSRAM_DeInit(struct SPI_PSRAM *psram);
HAL_Status HAL_PSRAM_XIPEnable(struct SPI_PSRAM *psram);
HAL_Status HAL_PSRAM_XIPDisable(struct SPI_PSRAM *psram);

#endif

/** @} */

/** @} */

#endif /* HAL_PSRAM_MODULE_ENABLED */
