/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SNOR
 *  @{
 */

/** @defgroup SNOR_How_To_Use How To Use
 *  @{

 The SNOR driver can be used as follows:

 - Init a spi nor abstract (HAL_SNOR_Init()):
    - Malloc a struct of SPI_NOR by user;
    - Designated host to nor->spi by user;
    - Init spi nor abstract by calling func HAL_SNOR_Init();
 - Call the interface function like HAL_SNOR_Read().

 @} */

#include "hal_base.h"

#ifdef HAL_SNOR_MODULE_ENABLED
/********************* Private MACRO Definition ******************************/
struct FLASH_INFO {
    uint32_t id;

    uint8_t blockSize;
    uint8_t sectorSize;
    uint8_t readCmd;
    uint8_t progCmd;

    uint8_t readCmd_4;
    uint8_t progCmd_4;
    uint8_t sectorEraseCmd;
    uint8_t blockEraseCmd;

    uint8_t feature;
    uint8_t density; /* (1 << density) sectors */
    uint8_t QEBits;
    uint8_t reserved2;
};

#define FEA_READ_STATUE_MASK (0x3 << 0)
#define FEA_STATUE_MODE1     0
#define FEA_STATUE_MODE2     1
#define FEA_4BIT_READ        (1 << 2)
#define FEA_4BIT_PROG        (1 << 3)
#define FEA_4BYTE_ADDR       (1 << 4)
#define FEA_4BYTE_ADDR_MODE  (1 << 5)

/*Manufactory ID*/
#define MID_WINBOND  0xEF
#define MID_GIGADEV  0xC8
#define MID_MICRON   0x2C
#define MID_MACRONIX 0xC2
#define MID_SPANSION 0x01
#define MID_EON      0x1C
#define MID_ST       0x20
#define MID_PUYA     0x85

/* Used for Macronix and Winbond flashes. */
#define SPINOR_OP_EN4B 0xb7	/* Enter 4-byte mode */
#define SPINOR_OP_EX4B 0xe9	/* Exit 4-byte mode */

/* Used for SST flashes only. */
#define SPINOR_OP_WRDI 0x04	/* Write disable */

#define SPINOR_OP_MAX_SIZE 0x40
#define UINT_MAX           (~0U)

#define JEDEC_MFR(id) ((id >> 16) & 0xff)

#define SPI_MEM_OP_FORMAT(__cmd, __addr, __dummy, __data) \
    {                                                     \
        .cmd = __cmd,                                     \
        .addr = __addr,                                   \
        .dummy = __dummy,                                 \
        .data = __data,                                   \
    }

#define SPI_MEM_OP_CMD(__opcode, __buswidth) \
    {                                        \
        .buswidth = __buswidth,              \
        .opcode = __opcode,                  \
    }

#define SPI_MEM_OP_ADDR(__nbytes, __val, __buswidth) \
    {                                                \
        .nbytes = __nbytes,                          \
        .val = __val,                                \
        .buswidth = __buswidth,                      \
    }

#define SPI_MEM_OP_NO_ADDR { }

#define SPI_MEM_OP_DUMMY(__nbytes, __buswidth) \
    {                                          \
        .nbytes = __nbytes,                    \
        .buswidth = __buswidth,                \
    }

#define SPI_MEM_OP_NO_DUMMY { }

#define SPI_MEM_OP_DATA_IN(__nbytes, __buf, __buswidth) \
    {                                                   \
        .dir = SPI_MEM_DATA_IN,                         \
        .nbytes = __nbytes,                             \
        .buf.in = __buf,                                \
        .buswidth = __buswidth,                         \
    }

#define SPI_MEM_OP_DATA_OUT(__nbytes, __buf, __buswidth) \
    {                                                    \
        .dir = SPI_MEM_DATA_OUT,                         \
        .nbytes = __nbytes,                              \
        .buf.out = __buf,                                \
        .buswidth = __buswidth,                          \
    }

#define SPI_MEM_OP_NO_DATA { }

#define READ_MAX_IOSIZE (1024 * 8) /* 8KB */
/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/
struct FLASH_INFO spiFlashbl[] = {
    { 0xc84017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0D, 14, 9, 0 }, /* GD25Q64B */
    { 0xc84018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 9, 0 }, /* GD25Q127C and GD25Q128C*/
    { 0xc84019, 128, 8, 0x13, 0x12, 0x6C, 0x3E, 0x21, 0xDC, 0x1C, 16, 6, 0 }, /* GD25Q256B/C */
    { 0xc84020, 128, 8, 0x13, 0x12, 0x6C, 0x3E, 0x21, 0xDC, 0x1C, 17, 6, 0 }, /* GD25Q512MC */
    { 0xef4017, 128, 8, 0x13, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 9, 0 }, /* 25Q64JVSSIQ */
    { 0xef4018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 9, 0 }, /* 25Q128FV and 25Q128JV*/
    { 0xef4019, 128, 8, 0x13, 0x02, 0x6C, 0x32, 0x20, 0xD8, 0x3C, 16, 9, 0 }, /* 25Q256FV */
    { 0xef6017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 9, 0 }, /* 25Q64FWSSIG */
    { 0x207017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 0, 0 }, /* XM25QH64A */
    { 0x207018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 0, 0 }, /* XM25QH128A */
    { 0x1c7018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 0, 0 }, /* EN25QH128A */
    { 0xc22814, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 11, 6, 0 }, /* MX25R8035F */
    { 0x856017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 9, 0 }, /* P25Q64H */
    { 0x856016, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 13, 9, 0 }, /* P25Q32H */
};

/********************* Private Function Definition ***************************/
static HAL_Status SNOR_SPIMemExecOp(struct SNOR_HOST *spi, struct SPI_MEM_OP *op)
{
#if defined(HAL_SNOR_SPI_HOST)
    uint32_t pos = 0;
    const uint8_t *tx_buf = NULL;
    uint8_t *rx_buf = NULL;
    uint8_t op_buf[SPINOR_OP_MAX_SIZE];
    int32_t op_len;
    uint32_t flag;
    int32_t i, ret;

    if (op->data.nbytes) {
        if (op->data.dir == SPI_MEM_DATA_IN)
            rx_buf = op->data.buf.in;
        else
            tx_buf = op->data.buf.out;
    }

    /* HAL_DBG("%s %d %d %x\n", __func__, sizeof(op->cmd.opcode), op->addr.nbytes, op->dummy.nbytes); */
    op_len = sizeof(op->cmd.opcode) + op->addr.nbytes + op->dummy.nbytes;
    op_buf[pos++] = op->cmd.opcode;

    if (op->addr.nbytes) {
        for (i = 0; i < op->addr.nbytes; i++)
            op_buf[pos + i] = op->addr.val >>
                              (8 * (op->addr.nbytes - i - 1));

        pos += op->addr.nbytes;
    }

    if (op->dummy.nbytes)
        memset(&op_buf[pos], 0xff, op->dummy.nbytes);

    /* 1st transfer: opcode + address + dummy cycles */
    flag = SPI_XFER_BEGIN;
    /* Make sure to set END bit if no tx or rx data messages follow */
    if (!tx_buf && !rx_buf)
        flag |= SPI_XFER_END;

    /* HAL_DBG("%s %ld %ld opcode %x\n", __func__, op_len, flag, op->cmd.opcode); */
    ret = HAL_SPI_Xfer(spi, op_len * 8, op_buf, NULL, flag);
    if (ret)
        return HAL_ERROR;

    /* 2nd transfer: rx or tx data path */
    if (tx_buf || rx_buf) {
        ret = HAL_SPI_Xfer(spi, op->data.nbytes * 8, tx_buf, rx_buf, SPI_XFER_END);
        if (ret)
            return HAL_ERROR;
    }

    return HAL_OK;
#elif defined(HAL_SNOR_SFC_HOST)

    return HAL_SFC_SpiXfer(spi, op);
#elif defined(HAL_SNOR_FSPI_HOST)

    return HAL_FSPI_SpiXfer(spi, op);
#else

    return HAL_OK;
#endif
}

static HAL_Status SNOR_XipExecOp(struct SNOR_HOST *spi, struct SPI_MEM_OP *op, uint32_t on)
{
#if defined(HAL_SNOR_FSPI_HOST)

    return HAL_FSPI_SpiXipConfig(spi, op, on);
#else

    return HAL_OK;
#endif
}

static HAL_Status SNOR_ReadWriteReg(struct SPI_NOR *nor, struct SPI_MEM_OP *op, void *buf)
{
    if (op->data.dir == SPI_MEM_DATA_IN)
        op->data.buf.in = buf;
    else
        op->data.buf.out = buf;

    return SNOR_SPIMemExecOp(nor->spi, op);
}

static HAL_Status SNOR_ReadReg(struct SPI_NOR *nor, uint8_t code, uint8_t *val, int32_t len)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(code, 1),
                                             SPI_MEM_OP_NO_ADDR,
                                             SPI_MEM_OP_NO_DUMMY,
                                             SPI_MEM_OP_DATA_IN(len, NULL, 1));
    int32_t ret;

    ret = SNOR_ReadWriteReg(nor, &op, val);
    if (ret)
        HAL_DBG("error %ld reading %x\n", ret, code);

    return ret;
}

static HAL_Status SNOR_WriteReg(struct SPI_NOR *nor, uint8_t opcode, uint8_t *buf, int len)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(opcode, 1),
                                             SPI_MEM_OP_NO_ADDR,
                                             SPI_MEM_OP_NO_DUMMY,
                                             SPI_MEM_OP_DATA_OUT(len, NULL, 1));

    return SNOR_ReadWriteReg(nor, &op, buf);
}

static int32_t SNOR_ReadData(struct SPI_NOR *nor, uint32_t from, uint32_t len, void *buf)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(nor->readOpcode, 1),
                                             SPI_MEM_OP_ADDR(nor->addrWidth, from, 1),
                                             SPI_MEM_OP_DUMMY(nor->readDummy, 1),
                                             SPI_MEM_OP_DATA_IN(len, buf, 1));
    int32_t ret;

    /* get transfer protocols. */
    op.cmd.buswidth = 1;
    op.addr.buswidth = SNOR_GET_PROTOCOL_ADDR_BITS(nor->readProto);
    op.dummy.buswidth = op.addr.buswidth;
    op.data.buswidth = SNOR_GET_PROTOCOL_DATA_BITS(nor->readProto);

    /* HAL_DBG("%s %lx %lx %lx %lx\n", __func__, nor->readDummy, op.dummy.buswidth, from, op.addr.val); */
    /* convert the dummy cycles to the number of bytes */
    op.dummy.nbytes = (nor->readDummy * op.dummy.buswidth) / 8;

    ret = SNOR_SPIMemExecOp(nor->spi, &op);
    if (ret)
        return 0;

    return len;
}

static int32_t SNOR_WriteData(struct SPI_NOR *nor, uint32_t to, uint32_t len, const uint8_t *buf)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(nor->programOpcode, 1),
                                             SPI_MEM_OP_ADDR(nor->addrWidth, to, 1),
                                             SPI_MEM_OP_NO_DUMMY,
                                             SPI_MEM_OP_DATA_OUT(len, buf, 1));
    int32_t ret;

    /* get transfer protocols. */
    op.cmd.buswidth = 1;
    op.addr.buswidth = SNOR_GET_PROTOCOL_ADDR_BITS(nor->writeProto);
    op.data.buswidth = SNOR_GET_PROTOCOL_DATA_BITS(nor->writeProto);

    /* to-do 写数据限制 */
    op.data.nbytes = len < op.data.nbytes ? len : op.data.nbytes;

    ret = SNOR_SPIMemExecOp(nor->spi, &op);
    if (ret)
        return 0;

    return op.data.nbytes;
}

static HAL_Status SNOR_XipInit(struct SPI_NOR *nor)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(nor->readOpcode, 1),
                                             SPI_MEM_OP_ADDR(nor->addrWidth, 0, 1),
                                             SPI_MEM_OP_DUMMY(nor->readDummy, 1),
                                             SPI_MEM_OP_DATA_IN(0, NULL, 1));

    /* get transfer protocols. */
    op.cmd.buswidth = 1;
    op.addr.buswidth = SNOR_GET_PROTOCOL_ADDR_BITS(nor->readProto);
    op.dummy.buswidth = op.addr.buswidth;
    op.data.buswidth = SNOR_GET_PROTOCOL_DATA_BITS(nor->readProto);

    /* HAL_DBG("%s %x %x %x %x\n", __func__, nor->readOpcode, nor->readDummy, op.dummy.buswidth, op.data.buswidth); */
    /* convert the dummy cycles to the number of bytes */
    op.dummy.nbytes = (nor->readDummy * op.dummy.buswidth) / 8;

    return SNOR_XipExecOp(nor->spi, &op, 0);
}

/*
 * Initiate the erasure of a single sector
 */
static HAL_Status SNOR_EraseSec(struct SPI_NOR *nor, uint32_t addr)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(nor->eraseOpcodeSec, 1),
                                             SPI_MEM_OP_ADDR(nor->addrWidth, addr, 1),
                                             SPI_MEM_OP_NO_DUMMY,
                                             SPI_MEM_OP_NO_DATA);

    if (nor->erase)
        return nor->erase(nor, addr);

    /*
     * Default implementation, if driver doesn't have a specialized HW
     * control
     */
    return SNOR_SPIMemExecOp(nor->spi, &op);
}

/*
 * Initiate the erasure of a single sector
 */
static HAL_Status SNOR_EraseBlk(struct SPI_NOR *nor, uint32_t addr)
{
    struct SPI_MEM_OP op = SPI_MEM_OP_FORMAT(SPI_MEM_OP_CMD(nor->eraseOpcodeSec, 1),
                                             SPI_MEM_OP_ADDR(nor->addrWidth, addr, 1),
                                             SPI_MEM_OP_NO_DUMMY,
                                             SPI_MEM_OP_NO_DATA);

    if (nor->erase)
        return nor->erase(nor, addr);

    /*
     * Default implementation, if driver doesn't have a specialized HW
     * control
     */
    return SNOR_SPIMemExecOp(nor->spi, &op);
}

struct FLASH_INFO *SNOR_GerFlashInfo(uint8_t *flashId)
{
    uint32_t i;
    uint32_t id = (flashId[0] << 16) | (flashId[1] << 8) | (flashId[2] << 0);

    for (i = 0; i < (sizeof(spiFlashbl) / sizeof(struct FLASH_INFO)); i++) {
        if (spiFlashbl[i].id == id)
            return &spiFlashbl[i];
    }

    return NULL;
}

static HAL_Status SNOR_WriteEnable(struct SPI_NOR *nor)
{
    return nor->writeReg(nor, SPINOR_OP_WREN, NULL, 0);
}

/*
 * Service routine to read status register until ready, or timeout occurs.
 * Returns non-zero if error.
 */
static HAL_Status SNOR_WaitBusy(struct SPI_NOR *nor, unsigned long timeout)
{
    int32_t ret;
    uint32_t i;
    uint8_t status;

    for (i = 0; i < timeout; i++) {
        ret = nor->readReg(nor, SPINOR_OP_RDSR, &status, 1);
        if (ret != HAL_OK)
            return ret;

        if ((status & 0x01) == 0)
            return HAL_OK;

        HAL_DelayUs(1);
    }
    HAL_DBG("%s error %ld\n", __func__, timeout);

    return HAL_BUSY;
}

static HAL_Status SNOR_ReadStatus(struct SPI_NOR *nor, uint32_t regIndex, uint8_t *status)
{
    uint8_t readStatCmd[] = { SPINOR_OP_RDSR, SPINOR_OP_RDSR1 };

    return nor->readReg(nor, readStatCmd[regIndex], status, 1);
}

static HAL_Status SNOR_WriteStatus(struct SPI_NOR *nor, uint32_t regIndex, uint8_t *status)
{
    uint8_t WriteStatCmd[2] = { SPINOR_OP_WRSR, SPINOR_OP_WRSR1 };
    uint8_t i = nor->info->feature & FEA_READ_STATUE_MASK;
    int32_t ret;

    if (i == 0) {
        SNOR_WriteEnable(nor);

        ret = nor->writeReg(nor, WriteStatCmd[regIndex], status, 1);
        if (ret) {
            HAL_DBG("error while writing configuration register\n");

            return HAL_INVAL;
        }

        ret = SNOR_WaitBusy(nor, 10000);
        if (ret) {
            HAL_DBG("timeout while writing configuration register\n");

            return ret;
        }
    } else {
        uint8_t readIndex;
        uint8_t status2[2];

        readIndex = (regIndex == 0) ? 1 : 0;
        ret = SNOR_ReadStatus(nor, readIndex, &status2[readIndex]);
        if (ret != HAL_OK)
            return ret;

        SNOR_WriteEnable(nor);
        ret = nor->writeReg(nor, SPINOR_OP_WRSR, &status2[0], 2);
        if (ret != HAL_OK)
            return ret;

        ret = SNOR_WaitBusy(nor, 10000);
    }

    return 0;
}

static HAL_Status SNOR_EnableQE(struct SPI_NOR *nor)
{
    int32_t ret = HAL_OK;
    int regIndex;
    int bitOffset;
    uint8_t status;
    uint8_t id = JEDEC_MFR(nor->info->id);

    if (id == MID_GIGADEV ||
        id == MID_WINBOND ||
        id == MID_MACRONIX ||
        id == MID_PUYA) {
        regIndex = nor->info->QEBits >> 3;
        bitOffset = nor->info->QEBits & 0x7;
        ret = SNOR_ReadStatus(nor, regIndex, &status);
        if (ret != HAL_OK)
            return ret;

        if (status & (1 << bitOffset)) //is QE bit set
            return HAL_OK;

        ret = SNOR_WriteStatus(nor, regIndex, &status);
    }

    return ret;
}

/* Enable/disable 4-byte addressing mode. */
static HAL_Status SNOR_Set4byte(struct SPI_NOR *nor, const struct FLASH_INFO *info, int enable)
{
    int status;
    bool need_wren = false;
    uint8_t cmd;
    uint8_t id = JEDEC_MFR(info->id);

    switch (id) {
    case MID_ST:
    case MID_MICRON:
        /* Some Micron need WREN command; all will accept it */
        need_wren = HAL_TRUE;
    case MID_MACRONIX:
    case MID_WINBOND:
    case MID_GIGADEV:
    case MID_PUYA:
        if (need_wren)
            SNOR_WriteEnable(nor);

        cmd = enable ? SPINOR_OP_EN4B : SPINOR_OP_EX4B;
        status = nor->writeReg(nor, cmd, NULL, 0);
        if (!status && !enable &&
            id == MID_WINBOND) {
            /*
             * On Winbond W25Q256FV, leaving 4byte mode causes
             * the Extended Address Register to be set to 1, so all
             * 3-byte-address reads come from the second 16M.
             * We must clear the register to enable normal behavior.
             */
            SNOR_WriteEnable(nor);
            nor->cmdBuf[0] = 0;
            nor->writeReg(nor, SPINOR_OP_WREAR, nor->cmdBuf, 1);
        }
    default:
        break;
    }

    return HAL_OK;
}

/**
 * @brief  Flash continuous writing.
 * @param  nor: nor dev.
 * @param  from: byte address.
 * @param  buf: source address.
 * @param  len: number of bytes.
 * @return HAL_Status.
 */
uint32_t HAL_SNOR_ReadData(struct SPI_NOR *nor, uint32_t from, void *buf, uint32_t len)
{
    uint32_t ret;
    uint8_t *pBuf = (uint8_t *)buf;
    uint32_t size, remain = len;

    /* HAL_DBG("%s from 0x%08x, len %lx\n", __func__, from, len); */
    if ((from + len) > nor->size)
        return 0;

    while (remain) {
        size = HAL_MIN(READ_MAX_IOSIZE, remain);
        ret = nor->read(nor, from, size, pBuf);
        if (ret != size) {
            HAL_DBG("%s %lu ret= %ld\n", __func__, from >> 9, ret);

            return 0;
        }
        remain -= size;
        from += size;
        pBuf += size;
    }

    return len;
}

/**
 * @brief  Flash continuous reading.
 * @param  nor: nor dev.
 * @param  to: byte address.
 * @param  buf: source address.
 * @param  len: number of bytes.
 * @return HAL_Status.
 */
uint32_t HAL_SNOR_ProgData(struct SPI_NOR *nor, uint32_t to, void *buf, uint32_t len)
{
    uint32_t ret;
    uint8_t *pBuf = (uint8_t *)buf;
    uint32_t size, remain = len;

    /* HAL_DBG("%s to 0x%08x, len %lx\n", __func__, to, len); */
    if ((to + len) > nor->size)
        return 0;

    while (remain) {
        size = HAL_MIN(nor->pageSize, remain);
        SNOR_WriteEnable(nor);
        ret = nor->write(nor, to, size, pBuf);
        if (ret != size) {
            HAL_DBG("%s %lu ret= %ld\n", __func__, to >> 9, ret);

            return 0;
        }
        SNOR_WaitBusy(nor, 10000);
        remain -= size;
        to += size;
        pBuf += size;
    }

    return len;
}

/**
 * @brief  Flash erase with erase type.
 * @param  nor: nor dev.
 * @param  addr: byte address.
 * @param  eraseType: erase type.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Erase(struct SPI_NOR *nor, uint32_t addr, NOR_ERASE_TYPE eraseType)
{
    uint32_t ret;
    int32_t timeout[] = { 400, 2000, 40000 };

    /* HAL_DBG("%s addr lx\n", __func__, addr); */
    SNOR_WriteEnable(nor);
    if (eraseType == ERASE_SECTOR)
        ret = SNOR_EraseSec(nor, addr);
    else
        ret = SNOR_EraseBlk(nor, addr);
    if (ret != HAL_OK)
        return ret;

    return SNOR_WaitBusy(nor, timeout[eraseType] * 1000);
}

/**
 * @brief  Flash continuous reading according to sectors.
 * @param  nor: nor dev.
 * @param  sec: sector address.
 * @param  nSec: number of sectors.
 * @param  pData: destination address.
 * @return HAL_Status.
 */
uint32_t HAL_SNOR_Read(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData)
{
    uint32_t ret = HAL_OK;

    /* HAL_DBG("%s sec 0x%08x, nSec %lx\n", __func__, sec, nSec); */
    if ((sec + nSec) * 512 > nor->size)
        return HAL_INVAL;

    ret = HAL_SNOR_ReadData(nor, sec * nor->sectorSize, pData, nSec * nor->sectorSize);
    if (ret != nSec * nor->sectorSize)
        return 0;

    return nSec;
}

/**
 * @brief  Flash continuous writing according to sectors.
 * @param  nor: nor dev.
 * @param  sec: sector address.
 * @param  nSec: number of sectors.
 * @param  pData: source address.
 * @return HAL_Status.
 */
uint32_t HAL_SNOR_Write(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData)
{
    int32_t ret = HAL_OK;

    /* HAL_DBG("%s sec 0x%08x, nSec %lx\n", __func__, sec, nSec); */
    if ((sec + nSec) * nor->sectorSize > nor->size)
        return HAL_INVAL;

    ret = HAL_SNOR_ProgData(nor, sec * nor->sectorSize, pData, nSec * nor->sectorSize);
    if (ret != nSec * nor->sectorSize)
        return ret;

    return nSec;
}

/**
 * @brief  Flash continuous writing according to sectors.
 * @param  nor: nor dev.
 * @param  sec: sector address.
 * @param  nSec: number of sectors.
 * @param  pData: source address.
 * @return HAL_Status.
 */
uint32_t HAL_SNOR_OverWrite(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData)
{
    uint32_t ret = HAL_OK;
    uint8_t *pBuf = (uint8_t *)pData;
    uint32_t remaining = nSec;

    /* HAL_DBG("%s sec 0x%08x, nSec %lx\n", __func__, sec, nSec); */
    if ((sec + nSec) * 512 > nor->size)
        return HAL_INVAL;

    while (remaining) {
        ret = HAL_SNOR_Erase(nor, sec * nor->sectorSize, ERASE_SECTOR);
        if (ret != HAL_OK)
            return 0;

        ret = HAL_SNOR_ProgData(nor, sec * nor->sectorSize, (void *)pBuf, nor->sectorSize);
        if (ret != nor->sectorSize)
            return 0;

        pBuf += nor->sectorSize;
        remaining--;
        sec++;
    }

    return nSec;
}

/** @defgroup SNOR_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  SFC NOR flash module init.
 * @param  nor: nor dev.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Init(struct SPI_NOR *nor)
{
    uint8_t idByte[5];
    struct FLASH_INFO *info;

    if (!nor->spi) {
        HAL_DBG("%s no host\n", __func__);

        return HAL_INVAL;
    }
    nor->read = (void *)SNOR_ReadData;
    nor->write = (void *)SNOR_WriteData;
    nor->readReg = (void *)SNOR_ReadReg;
    nor->writeReg = (void *)SNOR_WriteReg;

    HAL_SNOR_ReadID(nor, idByte);
    HAL_DBG("SPI Nor ID: %x %x %x\n", idByte[0], idByte[1], idByte[2]);
    if ((idByte[0] == 0xFF) || (idByte[0] == 0x00))
        return HAL_NODEV;

    info = SNOR_GerFlashInfo(idByte);
    if (info) {
        nor->info = info;
        nor->pageSize = 256;
        nor->addrWidth = 3;
        nor->eraseOpcodeSec = info->sectorEraseCmd;
        nor->eraseOpcodeBlk = info->blockEraseCmd;
        nor->readOpcode = info->readCmd;
        nor->readProto = SNOR_PROTO_1_1_1;
        nor->readDummy = 0;
        nor->programOpcode = info->progCmd;
        nor->writeProto = SNOR_PROTO_1_1_1;
        nor->name = "spi-nor";
        nor->sectorSize = info->sectorSize * 512;
        nor->size = 1 << (info->density + 9);
        nor->eraseSize = nor->sectorSize;
        if ((info->feature & FEA_4BIT_READ) && (nor->spi->mode & SPI_RX_QUAD)) {
            if (SNOR_EnableQE(nor) == HAL_OK) {
                nor->readOpcode = info->readCmd_4;
                switch (nor->readOpcode) {
                case SPINOR_OP_READ_1_4_4:
                    nor->readDummy = 4;
                    nor->readProto = SNOR_PROTO_1_4_4;
                    break;
                case SPINOR_OP_READ_1_2_2:
                    nor->readDummy = 8;
                    nor->readProto = SNOR_PROTO_1_2_2;
                    break;
                default:
                    nor->readDummy = 8;
                    nor->readProto = SNOR_PROTO_1_1_4;
                    break;
                }
            }
        }
        if ((info->feature & FEA_4BIT_PROG) && (nor->spi->mode & SPI_TX_QUAD)) {
            nor->programOpcode = info->progCmd_4;
            switch (nor->programOpcode) {
            case SPINOR_OP_PP_1_4_4:
                nor->writeProto = SNOR_PROTO_1_4_4;
                break;
            default:
                nor->writeProto = SNOR_PROTO_1_1_4;
                break;
            }
        }
        if (info->feature & FEA_4BYTE_ADDR)
            nor->addrWidth = 4;

        if ((info->feature & FEA_4BYTE_ADDR_MODE))
            SNOR_Set4byte(nor, info, HAL_ENABLE);

//        HAL_DBG("nor->addrWidth: %x\n", nor->addrWidth);
//        HAL_DBG("nor->readProto: %x\n", nor->readProto);
//        HAL_DBG("nor->writeProto: %x\n", nor->writeProto);
//        HAL_DBG("nor->readCmd: %x\n", nor->readOpcode);
//        HAL_DBG("nor->programCmd: %x\n", nor->programOpcode);
//        HAL_DBG("nor->eraseOpcodeBlk: %x\n", nor->eraseOpcodeBlk);
//        HAL_DBG("nor->eraseOpcodeSec: %x\n", nor->eraseOpcodeSec);
//        HAL_DBG("nor->size: %ldMB\n", nor->size >> 20);
//        HAL_DBG("xip enable: %lx\n", nor->spi->mode & SPI_XIP);
    } else {
        return HAL_NODEV;
    }

    if (nor->spi->mode & SPI_XIP)
        SNOR_XipInit(nor);

    return HAL_OK;
}

/**
 * @brief  SFC NOR flash module deinit.
 * @param  nor: nor dev.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_DeInit(struct SPI_NOR *nor)
{
    return HAL_OK;
}

/** @} */

/** @defgroup SNOR_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Read flash ID.
 * @param  nor: nor dev.
 * @param  data: address to storage flash ID value.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_ReadID(struct SPI_NOR *nor, uint8_t *data)
{
    uint32_t ret;
    uint8_t *id = data;

    ret = nor->readReg(nor, SPINOR_OP_RDID, id, 3);
    if (ret) {
        HAL_DBG("error reading JEDEC ID%x %x %x\n", id[0], id[1], id[2]);

        return HAL_ERROR;
    }

    return HAL_OK;
}

/**
 * @brief  Get flash capacity.
 * @param  nor: nor dev.
 * @return uint32_t: flash capacity, n bytes.
 */
uint32_t HAL_SNOR_GetCapacity(struct SPI_NOR *nor)
{
    return nor->size;
}

/**
 * @brief  Enable SPI Flash XIP mode.
 * @param  nor: nor dev.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_XIPEnable(struct SPI_NOR *nor)
{
    return SNOR_XipExecOp(nor->spi, NULL, 1);
}

/**
 * @brief  Diabled SPI Flash XIP mode.
 * @param  nor: nor dev.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_XIPDisable(struct SPI_NOR *nor)
{
    return SNOR_XipExecOp(nor->spi, NULL, 0);
}

/** @} */

#endif

/** @} */

/** @} */
