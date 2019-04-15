/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup SNOR
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The SNOR driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_SNOR_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define SNOR_4BIT_DATA_DETECT_EN 0
#define NOR_PAGE_SIZE            256
#define NOR_BLOCK_SIZE           (64 * 1024)
#define NOR_SECS_BLK             (NOR_BLOCK_SIZE / 512)
#define NOR_SECS_PAGE            4

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

/*Command Set*/
#define CMD_READ_JEDECID  (0x9F)
#define CMD_READ_DATA     (0x03)
#define CMD_READ_STATUS   (0x05)
#define CMD_WRITE_STATUS  (0x01)
#define CMD_PAGE_PROG     (0x02)
#define CMD_SECTOR_ERASE  (0x20)
#define CMD_BLK64K_ERASE  (0xD8)
#define CMD_BLK32K_ERASE  (0x52)
#define CMD_CHIP_ERASE    (0xC7)
#define CMD_WRITE_EN      (0x06)
#define CMD_WRITE_DIS     (0x04)
#define CMD_PAGE_READ     (0x13)
#define CMD_GET_FEATURE   (0x0F)
#define CMD_SET_FEATURE   (0x1F)
#define CMD_PROG_LOAD     (0x02)
#define CMD_PROG_EXEC     (0x10)
#define CMD_BLOCK_ERASE   (0xD8)
#define CMD_READ_DATA_X2  (0x3B)
#define CMD_READ_DATA_X4  (0x6B)
#define CMD_PROG_LOAD_X4  (0x32)
#define CMD_READ_STATUS2  (0x35)
#define CMD_READ_STATUS3  (0x15)
#define CMD_WRITE_STATUS2 (0x31)
#define CMD_WRITE_STATUS3 (0x11)
#define CMD_FAST_READ_X1  (0x0B) /* X1 cmd, X1 addr, X1 data */
#define CMD_FAST_READ_X2  (0x3B) /* X1 cmd, X1 addr, X2 data */
#define CMD_FAST_READ_X4  (0x6B) /* X1 cmd, X1 addr, X4 data SUPPORT GD MARCONIX WINBOND */
#define CMD_FAST_4READ_X4 (0x6C) /* X1 cmd, X1 addr, X4 data SUPPORT GD MARCONIX WINBOND */

#define CMD_FAST_READ_A4 (0xEB) /* X1 cmd, X4 addr, X4 data SUPPORT EON GD MARCONIX WINBOND */
#define CMD_PAGE_PROG_X4 (0x32) /* X1 cmd, X1 addr, X4 data, SUPPORT GD WINBOND */
#define CMD_PAGE_PROG_A4 (0x38) /* X1 cmd, X4 addr, X4 data, SUPPORT MARCONIX */
#define CMD_RESET_NAND   (0xFF)

#define CMD_ENTER_4BYTE_MODE (0xB7)
#define CMD_EXIT_4BYTE_MODE  (0xE9)
#define CMD_ENABLE_RESER     (0x66)
#define CMD_RESET_DEVICE     (0x99)
#define CMD_READ_PARAMETER   (0x5A)

/********************* Private Structure Definition **************************/

typedef enum {
    IO_MODE_SPI,
    IO_MODE_QPI
} eSNOR_ioMode;

typedef enum {
    READ_MODE_NOMAL,
    READ_MODE_FAST
} eSNOR_readMode;

typedef enum {
    ADDR_MODE_3BYTE,
    ADDR_MODE_4BYTE
} eSNOR_addrMode;

struct FLASH_INFO {
    uint32_t id;

    uint8_t block_size;
    uint8_t sector_size;
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

typedef HAL_Status (*SNOR_WRITE_STATUS)(struct HAL_SFC_HOST *host, uint32_t regIndex, uint8_t status);

struct SFNOR_DEV {
    uint32_t capacity;
    uint8_t manufacturer;
    uint8_t memType;
    uint16_t pageSize;
    uint32_t blockSize;

    uint8_t readCmd;
    uint8_t ProgCmd;
    uint8_t secEraseCmd;
    uint8_t blkEraseCmd;
    uint8_t QEBits;

    eSNOR_readMode readMode;
    eSNOR_addrMode addrMode;
    eSNOR_ioMode ioMode;

    SFC_DATA_LINES readLines;
    SFC_DATA_LINES progLines;

    SNOR_WRITE_STATUS writeStatus;
};

/********************* Private Variable Definition ***************************/

struct FLASH_INFO spiFlashbl[] = {
    { 0xc84016, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x00, 13, 9, 0 }, /* GD25Q32B */
    { 0xc84017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0D, 14, 9, 0 }, /* GD25Q64B */
    { 0xc84018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 9, 0 }, /* GD25Q127C and GD25Q128C*/
    { 0xc84019, 128, 8, 0x13, 0x12, 0x6C, 0x3E, 0x21, 0xDC, 0x1C, 16, 6, 0 }, /* GD25Q256B/C */
    { 0xc84020, 128, 8, 0x13, 0x12, 0x6C, 0x3E, 0x21, 0xDC, 0x1C, 17, 6, 0 }, /* GD25Q512MC */
    { 0xef4017, 128, 8, 0x13, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 9, 0 }, /* 25Q64JVSSIQ */
    { 0xef4018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 9, 0 }, /* 25Q128FV and 25Q128JV*/
    { 0xef4019, 128, 8, 0x13, 0x02, 0x6C, 0x32, 0x20, 0xD8, 0x3C, 16, 9, 0 }, /* 25Q256FV */
    { 0xef6017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 9, 0 }, /* 25Q64FWSSIG */
    { 0xc22018, 128, 8, 0x03, 0x02, 0x6B, 0x38, 0x20, 0xD8, 0x00, 15, 6, 0 }, /* MX25L12835E/F */
    { 0xc22019, 128, 8, 0x03, 0x02, 0x6B, 0x38, 0x20, 0xD8, 0x30, 16, 6, 0 }, /* MX25L25635E/F */
    { 0x207017, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 14, 0, 0 }, /* XM25QH64A */
    { 0x207018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 0, 0 }, /* XM25QH128A */
    { 0x1c7018, 128, 8, 0x03, 0x02, 0x6B, 0x32, 0x20, 0xD8, 0x0C, 15, 0, 0 }, /* EN25QH128A */
    { 0xc22814, 128, 8, 0x03, 0x02, 0x6B, 0x38, 0x20, 0xD8, 0x0C, 11, 6, 0 }, /* MX25R8035F */
};

static struct FLASH_INFO *s_spiFlashInfo;

static struct SFNOR_DEV s_snorDev;

const uint8_t snorDevCode[] = { 0x11, 0x12, 0x13, 0x14, 0x15,
                                0x16, 0x17, 0x18, 0x19 };

const uint32_t snorCapacity[] = {
    0x20000, /* 128k-byte */
    0x40000, /* 256k-byte */
    0x80000, /* 512k-byte */
    0x100000, /* 1M-byte */
    0x200000, /* 2M-byte */
    0x400000, /* 4M-byte */
    0x800000, /* 8M-byte */
    0x1000000, /* 16M-byte */
    0x2000000 /* 32M-byte */
};

/********************* Private Function Definition ***************************/
static HAL_Status SNOR_WriteEn(struct HAL_SFC_HOST *host)
{
    SFCCMD_DATA sfcmd;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_WRITE_EN;

    return HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
}

static HAL_Status SNOR_WaitBusy(struct HAL_SFC_HOST *host, int32_t timeout)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    uint32_t i, status;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_READ_STATUS;
    sfcmd.b.datasize = 1;

    host->data = &status;
    for (i = 0; i < timeout; i++) {
        ret = HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
        if (ret != HAL_OK)
            return ret;

        if ((status & 0x01) == 0)
            return HAL_OK;

        HAL_DelayUs(1);
    }
    HAL_DBG("%s error %ld\n", __func__, timeout);

    return HAL_BUSY;
}

static HAL_Status SNOR_Enter4ByteMode(struct HAL_SFC_HOST *host)
{
    SFCCMD_DATA sfcmd;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_ENTER_4BYTE_MODE;

    return HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
}

static HAL_Status SNOR_ReadStatus(struct HAL_SFC_HOST *host, uint32_t regIndex, uint8_t *status)
{
    SFCCMD_DATA sfcmd;
    uint8_t readStatCmd[] = { CMD_READ_STATUS, CMD_READ_STATUS2,
                              CMD_READ_STATUS3 };

    sfcmd.d32 = 0;
    sfcmd.b.cmd = readStatCmd[regIndex];
    sfcmd.b.datasize = 1;

    host->data = status;

    return HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
}

static HAL_Status SNOR_writeStatus2(struct HAL_SFC_HOST *host, uint32_t regIndex, uint8_t status)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    uint8_t status2[2];
    uint8_t readIndex;

    status2[regIndex] = status;
    readIndex = (regIndex == 0) ? 1 : 0;
    ret = SNOR_ReadStatus(host, readIndex, &status2[readIndex]);
    if (ret != HAL_OK)
        return ret;

    SNOR_WriteEn(host);

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_WRITE_STATUS;
    sfcmd.b.datasize = 2;
    sfcmd.b.rw = SFC_WRITE;

    host->data = &status2[0];
    ret = HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
    if (ret != HAL_OK)
        return ret;

    ret = SNOR_WaitBusy(host, 10000);

    return ret;
}

static HAL_Status SNOR_writeStatus(struct HAL_SFC_HOST *host, uint32_t regIndex, uint8_t status)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    uint8_t writeStatCmd[] = { CMD_WRITE_STATUS, CMD_WRITE_STATUS2,
                               CMD_WRITE_STATUS3 };

    SNOR_WriteEn(host);

    sfcmd.d32 = 0;
    sfcmd.b.cmd = writeStatCmd[regIndex];
    sfcmd.b.datasize = 1;
    sfcmd.b.rw = SFC_WRITE;

    host->data = &status;
    ret = HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
    if (ret != HAL_OK)
        return ret;

    ret = SNOR_WaitBusy(host, 10000); // 10ms

    return ret;
}

HAL_Status SNOR_DeviceReset(struct HAL_SFC_HOST *host)
{
    int32_t ret = HAL_OK;
    SFCCMD_DATA sfcmd;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_ENABLE_RESER;
    HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_RESET_DEVICE;
    HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
    if (ret != HAL_OK)
        return ret;

    ret = SNOR_WaitBusy(host, 10000);

    return ret;
}

static HAL_Status SNOR_EnableQE(struct HAL_SFC_HOST *host)
{
    int32_t ret = HAL_OK;
    int regIndex;
    int bitOffset;
    uint8_t status;
    struct SFNOR_DEV *pDev = &s_snorDev;

    if (pDev->manufacturer == MID_GIGADEV ||
        pDev->manufacturer == MID_WINBOND ||
        pDev->manufacturer == MID_MACRONIX) {
        regIndex = pDev->QEBits >> 3;
        bitOffset = pDev->QEBits & 0x7;
        ret = SNOR_ReadStatus(host, regIndex, &status);
        if (ret != HAL_OK)
            return ret;

        if (status & (1 << bitOffset)) //is QE bit set
            return HAL_OK;

        status |= (1 << bitOffset);

        return pDev->writeStatus(host, regIndex, status);
    }

    return ret;
}

static HAL_Status SNOR_ProgDataRaw(struct HAL_SFC_HOST *host, uint32_t addr, void *pData, uint32_t size)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    SFCCTRL_DATA sfctrl;
    struct SFNOR_DEV *pDev = &s_snorDev;

    /* HAL_DBG("%s %lx %lx\n", __func__, addr, size); */
    SNOR_WriteEn(host);

    sfcmd.d32 = 0;
    sfcmd.b.cmd = pDev->ProgCmd;
    sfcmd.b.addrbits = SFC_ADDR_24BITS;
    sfcmd.b.datasize = size;
    sfcmd.b.rw = SFC_WRITE;
    if (pDev->addrMode == ADDR_MODE_4BYTE)
        sfcmd.b.addrbits = SFC_ADDR_32BITS;

    sfctrl.d32 = 0;
    sfctrl.b.datalines = pDev->progLines;
    if (pDev->ProgCmd == CMD_PAGE_PROG_A4)
        sfctrl.b.addrlines = SFC_4BITS_LINE;
    ;

    host->data = pData;
    ret = HAL_SFC_XferRequest(host, sfcmd.d32, sfctrl.d32, addr);
    if (ret != HAL_OK)
        return ret;

    ret = SNOR_WaitBusy(host, 10000);

    return ret;
}

static HAL_Status SNOR_ReadDataRaw(struct HAL_SFC_HOST *host, uint32_t addr, void *pData, uint32_t size)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    SFCCTRL_DATA sfctrl;
    struct SFNOR_DEV *pDev = &s_snorDev;

    /* HAL_DBG("%s %lx %lx\n", __func__, addr, size); */

    sfcmd.d32 = 0;
    sfcmd.b.cmd = pDev->readCmd;
    sfcmd.b.datasize = size;
    sfcmd.b.addrbits = SFC_ADDR_24BITS;

    sfctrl.d32 = 0;
    sfctrl.b.datalines = pDev->readLines;

    if (pDev->readCmd == CMD_FAST_READ_X1 ||
        pDev->readCmd == CMD_FAST_READ_X4 ||
        pDev->readCmd == CMD_FAST_READ_X2 ||
        pDev->readCmd == CMD_FAST_4READ_X4) {
        sfcmd.b.dummybits = 8;
    } else if (pDev->readCmd == CMD_FAST_READ_A4) {
        sfcmd.b.addrbits = SFC_ADDR_32BITS;
        addr = (addr << 8) | 0xFF; //Set M[7:0] = 0xFF
        sfcmd.b.dummybits = 4;
        sfctrl.b.addrlines = SFC_4BITS_LINE;
    }

    if (pDev->addrMode == ADDR_MODE_4BYTE)
        sfcmd.b.addrbits = SFC_ADDR_32BITS;

    host->data = pData;
    ret = HAL_SFC_XferRequest(host, sfcmd.d32, sfctrl.d32, addr);

    return ret;
}

HAL_Status SNOR_Read_Parameter(struct HAL_SFC_HOST *host, uint32_t addr, uint8_t *data)
{
    SFCCMD_DATA sfcmd;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_READ_PARAMETER;
    sfcmd.b.datasize = 1;
    sfcmd.b.addrbits = SFC_ADDR_24BITS;
    sfcmd.b.dummybits = 8;

    host->data = data;

    return HAL_SFC_XferRequest(host, sfcmd.d32, 0, addr);
}

struct FLASH_INFO *SNOR_get_flash_info(uint8_t *flashId)
{
    uint32_t i;
    uint32_t id = (flashId[0] << 16) | (flashId[1] << 8) | (flashId[2] << 0);

    for (i = 0; i < (sizeof(spiFlashbl) / sizeof(struct FLASH_INFO)); i++) {
        if (spiFlashbl[i].id == id)
            return &spiFlashbl[i];
    }

    return NULL;
}

/* Adjust flash info in ram base on parameter */
void *SNOR_flash_info_adjust(struct HAL_SFC_HOST *host, struct FLASH_INFO *spi_flash_info)
{
    uint32_t addr;
    uint8_t paraVersion;

    if (s_spiFlashInfo->id == 0xc84019) {
        addr = 0x09;
        SNOR_Read_Parameter(host, addr, &paraVersion);
        if (paraVersion == 0x06) {
            spi_flash_info->QEBits = 9;
            spi_flash_info->progCmd_4 = 0x34;
        }
    }

    return 0;
}

HAL_Status SNOR_XmmcInit(struct HAL_SFC_HOST *host, uint8_t cs)
{
    SFCCMD_DATA sfcmd;
    SFCCTRL_DATA sfctrl;
    struct SFNOR_DEV *pDev = &s_snorDev;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = pDev->readCmd;
    sfcmd.b.addrbits = SFC_ADDR_24BITS;

    sfctrl.d32 = 0;
    sfctrl.b.datalines = pDev->readLines;

    if (pDev->readCmd == CMD_FAST_READ_X1 ||
        pDev->readCmd == CMD_FAST_READ_X4 ||
        pDev->readCmd == CMD_FAST_READ_X2 ||
        pDev->readCmd == CMD_FAST_4READ_X4) {
        sfcmd.b.dummybits = 8;
    } else if (pDev->readCmd == CMD_FAST_READ_A4) {
        sfcmd.b.addrbits = SFC_ADDR_32BITS;
        sfcmd.b.dummybits = 4;
        sfctrl.b.addrlines = SFC_4BITS_LINE;
    }

    if (pDev->addrMode == ADDR_MODE_4BYTE)
        sfcmd.b.addrbits = SFC_ADDR_32BITS;

    host->xmmcDev[cs].ctrl = sfctrl.d32;
    host->xmmcDev[cs].readCmd = sfcmd.d32;
    host->xmmcDev[cs].writeCmd = 0;

    return HAL_OK;
}
/********************* Public Function Definition ****************************/
/** @defgroup SNOR_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
 * @brief  Flash erase with erase type.
 * @param  host: SFC host.
 * @param  addr: byte address.
 * @param  eraseType: erase type.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Erase(struct HAL_SFC_HOST *host, uint32_t addr, NOR_ERASE_TYPE eraseType)
{
    int32_t ret;
    SFCCMD_DATA sfcmd;
    int32_t timeout[] = { 400, 2000, 40000 };
    struct SFNOR_DEV *pDev = &s_snorDev;

    /* HAL_DBG("%s %lx %x\n", __func__, addr / 0x200, eraseType); */
    if (eraseType > ERASE_CHIP)
        return HAL_INVAL;

    ret = SNOR_WriteEn(host);

    sfcmd.d32 = 0;
    if (eraseType == ERASE_BLOCK64K)
        sfcmd.b.cmd = pDev->blkEraseCmd;
    else if (eraseType == ERASE_SECTOR)
        sfcmd.b.cmd = pDev->secEraseCmd;
    else
        sfcmd.b.cmd = CMD_CHIP_ERASE;

    sfcmd.b.addrbits =
        (eraseType != ERASE_CHIP) ? SFC_ADDR_24BITS : SFC_ADDR_0BITS;
    if ((pDev->addrMode == ADDR_MODE_4BYTE) && (eraseType != ERASE_CHIP))
        sfcmd.b.addrbits = SFC_ADDR_32BITS;

    if (ret != HAL_OK)
        return ret;

    ret = HAL_SFC_XferRequest(host, sfcmd.d32, 0, addr);
    if (ret != HAL_OK)
        return ret;

    ret = SNOR_WaitBusy(host, timeout[eraseType] * 1000);

    return ret;
}

/**
 * @brief  Flash block erase.
 * @param  host: SFC host.
 * @param  addr: byte address.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_EraseBlk(struct HAL_SFC_HOST *host, uint32_t addr)
{
    return HAL_SNOR_Erase(host, addr, ERASE_BLOCK64K);
}

/**
 * @brief  Flash continuous writing.
 * @param  host: SFC host.
 * @param  addr: byte address.
 * @param  pData: source address.
 * @param  size: number of bytes.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_ProgData(struct HAL_SFC_HOST *host, uint32_t addr, void *pData, uint32_t size)
{
    int32_t ret = HAL_OK;
    uint32_t pageSize, len;
    struct SFNOR_DEV *pDev = &s_snorDev;
    uint8_t *pBuf = (uint8_t *)pData;

    if ((addr + size) > (pDev->capacity << 9))
        return HAL_INVAL;

    pageSize = NOR_PAGE_SIZE;
    while (size) {
        len = HAL_MIN(pageSize, size);
        ret = SNOR_ProgDataRaw(host, addr, pBuf, len);
        if (ret != HAL_OK) {
            HAL_DBG("%s %lu ret= %ld\n", __func__, addr >> 9, ret);

            return ret;
        }
        size -= len;
        addr += len;
        pBuf += len;
    }

    return ret;
}

/**
 * @brief  Flash continuous reading.
 * @param  host: SFC host.
 * @param  addr: byte address.
 * @param  pData: destination address.
 * @param  size: number of bytes.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_ReadData(struct HAL_SFC_HOST *host, uint32_t addr, void *pData, uint32_t size)
{
    int32_t ret = HAL_OK;
    uint32_t len;
    struct SFNOR_DEV *pDev = &s_snorDev;
    uint8_t *pBuf = (uint8_t *)pData;

    if ((addr + size) > (pDev->capacity << 9))
        return HAL_INVAL;

    while (size) {
        len = HAL_MIN(size, SFC_MAX_IOSIZE);
        ret = SNOR_ReadDataRaw(host, addr, pBuf, len);
        if (ret != HAL_OK) {
            HAL_DBG("%s %lu ret= %ld\n", __func__, addr >> 9, ret);

            return ret;
        }

        size -= len;
        addr += len;
        pBuf += len;
    }

    return ret;
}

/**
 * @brief  Flash continuous writing according to sectors.
 * @param  host: SFC host.
 * @param  sec: sector address.
 * @param  nSec: number of sectors.
 * @param  pData: source address.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Write(struct HAL_SFC_HOST *host, uint32_t sec, uint32_t nSec, void *pData)
{
    int32_t ret = HAL_OK;
    uint32_t len, blockSize, offset;
    struct SFNOR_DEV *pDev = &s_snorDev;
    uint8_t *pBuf = (uint8_t *)pData;

    if ((sec + nSec) > pDev->capacity)
        return HAL_INVAL;

    while (nSec) {
        if (sec < 512 || sec >= pDev->capacity - 512)
            blockSize = 8;
        else
            blockSize = pDev->blockSize;

        offset = (sec & (blockSize - 1));
        if (!offset) {
            ret = HAL_SNOR_Erase(host, sec << 9, (blockSize == 8) ? ERASE_SECTOR :
                                                                    ERASE_BLOCK64K);
            if (ret != HAL_OK) {
                HAL_DBG("SNOR_Erase %lu ret= %ld\n", sec, ret);
                break;
            }
        }
        len = HAL_MIN((blockSize - offset), nSec);
        ret = HAL_SNOR_ProgData(host, sec << 9, pBuf, len << 9);
        if (ret != HAL_OK) {
            HAL_DBG("SNOR_Erase %lu ret= %ld\n", sec, ret);
            break;
        }
        nSec -= len;
        sec += len;
        pBuf += len << 9;
    }

    return ret;
}

/**
 * @brief  Flash continuous reading according to sectors.
 * @param  host: SFC host.
 * @param  sec: sector address.
 * @param  nSec: number of sectors.
 * @param  pData: destination address.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Read(struct HAL_SFC_HOST *host, uint32_t sec, uint32_t nSec, void *pData)
{
    int32_t ret = HAL_OK;
    uint32_t addr, size, len;
    struct SFNOR_DEV *pDev = &s_snorDev;
    uint8_t *pBuf = (uint8_t *)pData;

    if ((sec + nSec) > pDev->capacity)
        return HAL_INVAL;

    addr = sec << 9;
    size = nSec << 9;
    while (size) {
        len = HAL_MIN(size, SFC_MAX_IOSIZE);
        ret = SNOR_ReadDataRaw(host, addr, pBuf, len);
        if (ret != HAL_OK) {
            HAL_DBG("SNOR_ReadData %lu ret= %ld\n", addr >> 9, ret);
            break;
        }

        size -= len;
        addr += len;
        pBuf += len;
    }

    return ret;
}

/** @} */

/** @defgroup SNOR_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/**
 * @brief  SFC NOR flash module init.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Init(struct HAL_SFC_HOST *host)
{
    int32_t i;
    struct SFNOR_DEV *pDev = &s_snorDev;
    uint8_t idByte[5];

    HAL_SFC_Init(host);
    memset(pDev, 0, sizeof(struct SFNOR_DEV));
    HAL_SNOR_ReadID(host, idByte);
    HAL_DBG("sfc nor id: %x %x %x\n", idByte[0], idByte[1], idByte[2]);
    if ((idByte[0] == 0xFF) || (idByte[0] == 0x00))
        return HAL_ERROR;

    pDev->manufacturer = idByte[0];
    pDev->memType = idByte[1];

    s_spiFlashInfo = SNOR_get_flash_info(idByte);
    if (s_spiFlashInfo != NULL) {
        SNOR_flash_info_adjust(host, s_spiFlashInfo);
        pDev->capacity = 1 << s_spiFlashInfo->density;
        pDev->blockSize = s_spiFlashInfo->block_size;
        pDev->pageSize = NOR_SECS_PAGE;
        pDev->readCmd = s_spiFlashInfo->readCmd;
        pDev->ProgCmd = s_spiFlashInfo->progCmd;
        pDev->secEraseCmd = s_spiFlashInfo->sectorEraseCmd;
        pDev->blkEraseCmd = s_spiFlashInfo->blockEraseCmd;
        pDev->progLines = DATA_LINES_X1;
        pDev->readLines = DATA_LINES_X1;
        pDev->QEBits = s_spiFlashInfo->QEBits;

        i = s_spiFlashInfo->feature & FEA_READ_STATUE_MASK;
        if (i == 0)
            pDev->writeStatus = SNOR_writeStatus;
        else
            pDev->writeStatus = SNOR_writeStatus2;

        if (s_spiFlashInfo->feature & FEA_4BIT_READ) {
            if (SNOR_EnableQE(host) == HAL_OK) {
                pDev->readLines = DATA_LINES_X4;
                pDev->readCmd = s_spiFlashInfo->readCmd_4;
            }
        }
        if ((s_spiFlashInfo->feature & FEA_4BIT_PROG) &&
            (pDev->readLines == DATA_LINES_X4)) {
            pDev->progLines = DATA_LINES_X4;
            pDev->ProgCmd = s_spiFlashInfo->progCmd_4;
        }

        if (s_spiFlashInfo->feature & FEA_4BYTE_ADDR)
            pDev->addrMode = ADDR_MODE_4BYTE;
        if ((s_spiFlashInfo->feature & FEA_4BYTE_ADDR_MODE))
            SNOR_Enter4ByteMode(host);
        HAL_DBG("addrMode: %x\n", pDev->addrMode);
        HAL_DBG("readLines: %x\n", pDev->readLines);
        HAL_DBG("progLines: %x\n", pDev->progLines);
        HAL_DBG("readCmd: %x\n", pDev->readCmd);
        HAL_DBG("ProgCmd: %x\n", pDev->ProgCmd);
        HAL_DBG("blkEraseCmd: %x\n", pDev->blkEraseCmd);
        HAL_DBG("secEraseCmd: %x\n", pDev->secEraseCmd);
#ifdef SFC_MODE_XMMC_MODE_EN_SHIFT
        SNOR_XmmcInit(host, 0);
#endif

        return HAL_OK;
    }

    for (i = 0; i < sizeof(snorDevCode); i++) {
        if (idByte[2] == snorDevCode[i]) {
            pDev->capacity = snorCapacity[i] >> 9;
            break;
        }
    }

    if (i >= sizeof(snorDevCode))
        return HAL_ERROR;

    pDev->QEBits = 9;
    pDev->blockSize = NOR_SECS_BLK;
    pDev->pageSize = NOR_SECS_PAGE;

    pDev->readCmd = CMD_READ_DATA;
    pDev->ProgCmd = CMD_PAGE_PROG;
    pDev->secEraseCmd = CMD_SECTOR_ERASE;
    pDev->blkEraseCmd = CMD_BLOCK_ERASE;
    pDev->writeStatus = SNOR_writeStatus2;

    HAL_DBG("addrMode: %x\n", pDev->addrMode);
    HAL_DBG("readLines: %x\n", pDev->readLines);
    HAL_DBG("progLines: %x\n", pDev->progLines);
    HAL_DBG("readCmd: %x\n", pDev->readCmd);
    HAL_DBG("ProgCmd: %x\n", pDev->ProgCmd);
    HAL_DBG("blkEraseCmd: %x\n", pDev->blkEraseCmd);
    HAL_DBG("secEraseCmd: %x\n", pDev->secEraseCmd);
#ifdef SFC_MODE_XMMC_MODE_EN_SHIFT
    SNOR_XmmcInit(host, 0);
#endif

    return HAL_OK;
}

/**
 * @brief  SFC NOR flash module deinit.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_Deinit(struct HAL_SFC_HOST *host)
{
    uint32_t ret;

    ret = SNOR_DeviceReset(host);
    if (ret != HAL_OK)
        return ret;

    return HAL_SFC_Deinit(host);
}

/** @} */

/** @defgroup SNOR_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Read flash ID.
 * @param  host: SFC host.
 * @param  data: address to storage flash ID value.
 * @return HAL_Status.
 */
HAL_Status HAL_SNOR_ReadID(struct HAL_SFC_HOST *host, uint8_t *data)
{
    SFCCMD_DATA sfcmd;

    sfcmd.d32 = 0;
    sfcmd.b.cmd = CMD_READ_JEDECID;
    sfcmd.b.datasize = 3;

    host->data = data;

    return HAL_SFC_XferRequest(host, sfcmd.d32, 0, 0);
}

/**
 * @brief  Get flash capacity.
 * @return uint32_t: flash capacity, sectors.
 */
uint32_t HAL_SNOR_GetCapacity(void)
{
    struct SFNOR_DEV *pDev = &s_snorDev;

    return pDev->capacity;
}

#ifdef SFC_MODE_XMMC_MODE_EN_SHIFT
/**
 * @brief  Enable XIP mode
 * @param  host: SFC host.
 * @return HAL_Status
 */
HAL_Status HAL_SNOR_XipEnable(struct HAL_SFC_HOST *host)
{
    return HAL_SFC_XmmcRequest(host, 1);
}

/**
 * @brief  Disable XIP mode
 * @param  host: SFC host.
 * @return HAL_Status
 */
HAL_Status HAL_SNOR_XipDisable(struct HAL_SFC_HOST *host)
{
    return HAL_SFC_XmmcRequest(host, 0);
}
#endif
/** @} */

#endif

/** @} */

/** @} */
