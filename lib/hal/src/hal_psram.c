/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_base.h"

#ifdef HAL_PSRAM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PSRAM
 *  @{
 */

/** @defgroup PSRAM_How_To_Use How To Use
 *  @{

 The PSRAM driver can be used as follows:

 - Init a SPI psram abstract:
     - Malloc struct SPI_PSRAM psram by user;
     - Designated host to struct SPI_PSRAM psram->spi by user;
     - Init spi nor abstract by calling HAL_PSRAM_Init();
 - Enable or disable XIP:
     - HAL_PSRAM_XIPEnable()
     - HAL_PSRAM_XIPDisable()

 @} */

/** @defgroup PSRAM_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
//#define HAL_PSRAM_DEBUG
#ifdef HAL_PSRAM_DEBUG
#define HAL_PSRAM_DBG(...) HAL_DBG(__VA_ARGS__)
#else
#define HAL_PSRAM_DBG(...) do { if (0) HAL_DBG(__VA_ARGS__); } while (0)
#endif

/*Command Set*/
#define PSRAM_OP_RDID       0x9F
#define PSRAM_OP_READ_1_1_1 0x0B
#define PSRAM_OP_PP_1_1_1   0x02
#define PSRAM_OP_READ_1_4_4 0xEB
#define PSRAM_OP_PP_1_4_4   0x38
#define PSRAM_OP_ENQPI      0x35
#define PSRAM_OP_EIXTQPI    0xF5

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static HAL_Status PSRAM_SPIMemExecOp(struct PSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op)
{
    if (spi->xfer)
        return spi->xfer(spi, op);
    else
        return HAL_ERROR;
}

static HAL_Status PSRAM_XipExecOp(struct PSRAM_HOST *spi, struct HAL_SPI_MEM_OP *op, uint32_t on)
{
    if (spi->xipConfig)
        return spi->xipConfig(spi, op, on);
    else
        return HAL_ERROR;
}

static HAL_Status PSRAM_XmmcInit(struct SPI_PSRAM *psram)
{
    struct HAL_SPI_MEM_OP opRead = HAL_SPI_MEM_OP_FORMAT(HAL_SPI_MEM_OP_CMD(psram->readOpcode, 1),
                                                         HAL_SPI_MEM_OP_ADDR(psram->addrWidth, 0, 1),
                                                         HAL_SPI_MEM_OP_DUMMY(psram->readDummy, 1),
                                                         HAL_SPI_MEM_OP_DATA_IN(0, NULL, 1));
    struct HAL_SPI_MEM_OP opWrite = HAL_SPI_MEM_OP_FORMAT(HAL_SPI_MEM_OP_CMD(psram->programOpcode, 1),
                                                          HAL_SPI_MEM_OP_ADDR(psram->addrWidth, 0, 1),
                                                          HAL_SPI_MEM_OP_DUMMY(psram->programDummy, 1),
                                                          HAL_SPI_MEM_OP_DATA_OUT(0, NULL, 1));

    /* get read transfer protocols. */
    opRead.cmd.buswidth = PSRAM_GET_PROTOCOL_CMD_BITS(psram->readProto);
    opRead.addr.buswidth = PSRAM_GET_PROTOCOL_ADDR_BITS(psram->readProto);
    opRead.dummy.buswidth = opRead.addr.buswidth;
    opRead.data.buswidth = PSRAM_GET_PROTOCOL_DATA_BITS(psram->readProto);

    /* convert the dummy cycles to the number of bytes */
    opRead.dummy.nbytes = (psram->readDummy * opRead.dummy.buswidth) / 8;

    /* HAL_PSRAM_DBG("%s %x %x %x %x\n", __func__, psram->readOpcode, psram->readDummy, opRead.dummy.buswidth, opRead.data.buswidth); */
    PSRAM_XipExecOp(psram->spi, &opRead, 0);

    /* get write transfer protocols. */
    opWrite.cmd.buswidth = PSRAM_GET_PROTOCOL_CMD_BITS(psram->writeProto);
    opWrite.addr.buswidth = PSRAM_GET_PROTOCOL_ADDR_BITS(psram->writeProto);
    opWrite.dummy.buswidth = opWrite.addr.buswidth;
    opWrite.data.buswidth = PSRAM_GET_PROTOCOL_DATA_BITS(psram->writeProto);
    opWrite.dummy.nbytes = (psram->programDummy * opWrite.dummy.buswidth) / 8;

    /* HAL_PSRAM_DBG("%s %x %x %x %x\n", __func__, psram->readOpcode, psram->readDummy, opWrite.dummy.buswidth, opWrite.data.buswidth); */
    PSRAM_XipExecOp(psram->spi, &opWrite, 0);

    return HAL_OK;
}

static HAL_Status PSRAM_ReadWriteReg(struct SPI_PSRAM *psram, struct HAL_SPI_MEM_OP *op, void *buf)
{
    if (op->data.dir == HAL_SPI_MEM_DATA_IN)
        op->data.buf.in = buf;
    else
        op->data.buf.out = buf;

    return PSRAM_SPIMemExecOp(psram->spi, op);
}

static HAL_Status PSRAM_WriteReg(struct SPI_PSRAM *psram, uint8_t opcode, uint8_t *buf, int32_t len)
{
    struct HAL_SPI_MEM_OP op = HAL_SPI_MEM_OP_FORMAT(HAL_SPI_MEM_OP_CMD(opcode, 1),
                                                     HAL_SPI_MEM_OP_NO_ADDR,
                                                     HAL_SPI_MEM_OP_NO_DUMMY,
                                                     HAL_SPI_MEM_OP_DATA_OUT(len, NULL, 1));

    /* HAL_SNOR_DBG("%s %x %ld\n", __func__, opcode, len); */

    return PSRAM_ReadWriteReg(psram, &op, buf);
}

static HAL_Status PSRAM_EnterQPI(struct SPI_PSRAM *psram)
{
    return PSRAM_WriteReg(psram, PSRAM_OP_ENQPI, NULL, 0);
}

static HAL_Status PSRAM_ExitQPI(struct SPI_PSRAM *psram)
{
    return PSRAM_WriteReg(psram, PSRAM_OP_EIXTQPI, NULL, 0);
}

static HAL_Status PSRAM_ReadID(struct SPI_PSRAM *psram, uint8_t *data)
{
    int32_t ret;
    uint8_t *id = data;
    struct HAL_SPI_MEM_OP op = HAL_SPI_MEM_OP_FORMAT(HAL_SPI_MEM_OP_CMD(PSRAM_OP_RDID, 1),
                                                     HAL_SPI_MEM_OP_ADDR(3, 0xa5a5a5a5, 1),
                                                     HAL_SPI_MEM_OP_DUMMY(0, 1),
                                                     HAL_SPI_MEM_OP_DATA_IN(2, data, 1));

    /* get transfer protocols. */
    op.cmd.buswidth = 1;
    op.addr.buswidth = 1;
    op.dummy.buswidth = 1;
    op.data.buswidth = 1;

    op.dummy.nbytes = 0;

    ret = PSRAM_SPIMemExecOp(psram->spi, &op);
    if (ret) {
        HAL_PSRAM_DBG("error reading JEDEC ID%x %x\n", id[0], id[1]);

        return HAL_ERROR;
    }

    return ret;
}

/** @} */
/********************* Public Function Definition ****************************/
/** @defgroup PSRAM_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Psram init.
 * @param  psram: psram dev.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_Init(struct SPI_PSRAM *psram)
{
    uint8_t idByte[5];

    PSRAM_ReadID(psram, idByte);
    HAL_PSRAM_DBG("SPI psram ID: %x %x\n", idByte[0], idByte[1]);

    /* Temporarily fixed configuration */
    psram->addrWidth = 3;
    psram->readOpcode = PSRAM_OP_READ_1_4_4;
    psram->readProto = PSRAM_PROTO_4_4_4;
    psram->readDummy = 6;
    psram->programOpcode = PSRAM_OP_PP_1_4_4;
    psram->writeProto = PSRAM_PROTO_4_4_4;
    psram->programDummy = 0;

//    psram->addrWidth = 1;
//    psram->readOpcode = PSRAM_OP_READ_1_1_1;
//    psram->readProto = PSRAM_PROTO_1_1_1;
//    psram->readDummy = 8;
//    psram->programOpcode = PSRAM_OP_PP_1_1_1;
//    psram->writeProto = PSRAM_PROTO_1_1_1;
//    psram->programDummy = 0;

    if (psram->readProto == PSRAM_PROTO_4_4_4 &&
        psram->writeProto == PSRAM_PROTO_4_4_4)
        PSRAM_EnterQPI(psram);
    else
        PSRAM_ExitQPI(psram);

    PSRAM_XmmcInit(psram);
    HAL_PSRAM_XIPEnable(psram);

    return HAL_OK;
}

/**
 * @brief  Psram deinit.
 * @param  psram: psram dev.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_DeInit(struct SPI_PSRAM *psram)
{
    /* TO-DO*/

    return HAL_OK;
}

/** @} */

/** @defgroup PSRAM_Exported_Functions_Group5 Other Functions
 *  @{
// */

/**
 * @brief  Psram XIP mode enable.
 * @param  psram: psram dev.
 * @return HAL_Status
 * Access data in memory map mode.
 */
HAL_Status HAL_PSRAM_XIPEnable(struct SPI_PSRAM *psram)
{
    return PSRAM_XipExecOp(psram->spi, NULL, 1);
}

/**
 * @brief  Psram XIP mode disable.
 * @param  psram: psram dev.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_XIPDisable(struct SPI_PSRAM *psram)
{
    return PSRAM_XipExecOp(psram->spi, NULL, 0);
}

/** @} */

/** @} */

/** @} */

#endif /* HAL_PSRAM_MODULE_ENABLED */
