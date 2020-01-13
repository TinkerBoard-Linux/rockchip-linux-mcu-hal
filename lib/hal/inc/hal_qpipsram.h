/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_conf.h"

#ifdef HAL_QPIPSRAM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup QPIPSRAM
 *  @{
 */

#ifndef _HAL_QPIPSRAM_H_
#define _HAL_QPIPSRAM_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

#define QPIPSRAM_PROTO_STR(a, b, c)            ((a << 8) | (b << 4) | c)
#define QPIPSRAM_GET_PROTOCOL_CMD_BITS(proto)  ((proto >> 8) & 0xf)
#define QPIPSRAM_GET_PROTOCOL_ADDR_BITS(proto) ((proto >> 4) & 0xf)
#define QPIPSRAM_GET_PROTOCOL_DATA_BITS(proto) (proto & 0xf)

enum QPIPSRAM_PROTOCOL {
    QPIPSRAM_PROTO_1_1_1 = QPIPSRAM_PROTO_STR(1, 1, 1),
    QPIPSRAM_PROTO_1_1_2 = QPIPSRAM_PROTO_STR(1, 1, 2),
    QPIPSRAM_PROTO_1_1_4 = QPIPSRAM_PROTO_STR(1, 1, 4),
    QPIPSRAM_PROTO_1_1_8 = QPIPSRAM_PROTO_STR(1, 1, 8),
    QPIPSRAM_PROTO_1_2_2 = QPIPSRAM_PROTO_STR(1, 2, 2),
    QPIPSRAM_PROTO_1_4_4 = QPIPSRAM_PROTO_STR(1, 4, 4),
    QPIPSRAM_PROTO_1_8_8 = QPIPSRAM_PROTO_STR(1, 8, 8),
    QPIPSRAM_PROTO_2_2_2 = QPIPSRAM_PROTO_STR(2, 2, 2),
    QPIPSRAM_PROTO_4_4_4 = QPIPSRAM_PROTO_STR(4, 4, 4),
    QPIPSRAM_PROTO_8_8_8 = QPIPSRAM_PROTO_STR(8, 8, 8),
};

/***************************** Structure Definition **************************/

struct QPIPSRAM_HOST {
    uint32_t speed;
    uint32_t mode;
    uint8_t flags;
    HAL_Status (*xfer)(struct QPIPSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op);
    HAL_Status (*xipConfig)(struct QPIPSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op, uint32_t on);

    void *userdata;
};

struct QPI_PSRAM {
    struct QPIPSRAM_HOST *spi;
    uint8_t id[2];
    uint8_t addrWidth;
    uint8_t readOpcode;
    uint8_t readDummy;
    uint8_t programOpcode;
    uint8_t programDummy;

    enum QPIPSRAM_PROTOCOL readProto;
    enum QPIPSRAM_PROTOCOL writeProto;
};

/***************************** Function Declare ******************************/
/** @defgroup QPIPSRAM_Public_Function_Declare Public Function Declare
 *  @{
 */

HAL_Status HAL_QPIPSRAM_Init(struct QPI_PSRAM *psram);
HAL_Status HAL_QPIPSRAM_DeInit(struct QPI_PSRAM *psram);
HAL_Status HAL_QPIPSRAM_XIPEnable(struct QPI_PSRAM *psram);
HAL_Status HAL_QPIPSRAM_XIPDisable(struct QPI_PSRAM *psram);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_QPIPSRAM_MODULE_ENABLED */
