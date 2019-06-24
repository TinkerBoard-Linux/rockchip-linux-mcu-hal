/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SNOR
 *  @{
 */

#ifndef _HAL_SFC_NOR_H_
#define _HAL_SFC_NOR_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SNOR_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

typedef enum {
    ERASE_SECTOR = 0,
    ERASE_BLOCK64K,
    ERASE_CHIP
} NOR_ERASE_TYPE;

/** SNOR HOST mode */
#define SPI_CPHA      HAL_BIT(0)            /* clock phase */
#define SPI_CPOL      HAL_BIT(1)            /* clock polarity */
#define SPI_MODE_0    (0|0)                 /* (original MicroWire) */
#define SPI_MODE_1    (0|SPI_CPHA)
#define SPI_MODE_2    (SPI_CPOL|0)
#define SPI_MODE_3    (SPI_CPOL|SPI_CPHA)
#define SPI_CS_HIGH   HAL_BIT(2)            /* CS active high */
#define SPI_LSB_FIRST HAL_BIT(3)            /* per-word bits-on-wire */
#define SPI_3WIRE     HAL_BIT(4)            /* SI/SO signals shared */
#define SPI_LOOP      HAL_BIT(5)            /* loopback mode */
#define SPI_SLAVE     HAL_BIT(6)            /* slave mode */
#define SPI_PREAMBLE  HAL_BIT(7)            /* Skip preamble bytes */
#define SPI_TX_BYTE   HAL_BIT(8)            /* transmit with 1 wire byte */
#define SPI_TX_DUAL   HAL_BIT(9)            /* transmit with 2 wires */
#define SPI_TX_QUAD   HAL_BIT(10)           /* transmit with 4 wires */
#define SPI_RX_SLOW   HAL_BIT(11)           /* receive with 1 wire slow */
#define SPI_RX_DUAL   HAL_BIT(12)           /* receive with 2 wires */
#define SPI_RX_QUAD   HAL_BIT(13)           /* receive with 4 wires */

/** SNOR HOST xfer flags */
#define SPI_XFER_BEGIN HAL_BIT(0)	/* Assert CS before transfer */
#define SPI_XFER_END   HAL_BIT(1)	/* Deassert CS after transfer */
#define SPI_XFER_ONCE  (SPI_XFER_BEGIN | SPI_XFER_END)

struct SNOR_HOST {
    uint32_t max_hz;
    uint32_t speed;
    uint32_t mode;
    uint32_t max_read_size;
    uint32_t max_write_size;
    uint8_t flags;

    void *userdata;
};

/*  */
#define SPI_NOR_MAX_CMD_SIZE    8
#define SNOR_PROTO_STR(a, b, c) ((a << 8) | (b << 4) | c)

#define SNOR_GET_PROTOCOL_ADDR_BITS(proto) ((proto >> 4) & 0xf)
#define SNOR_GET_PROTOCOL_DATA_BITS(proto) (proto & 0xf)

enum SPI_NOR_PROTOCOL {
    SNOR_PROTO_1_1_1 = SNOR_PROTO_STR(1, 1, 1),
    SNOR_PROTO_1_1_2 = SNOR_PROTO_STR(1, 1, 2),
    SNOR_PROTO_1_1_4 = SNOR_PROTO_STR(1, 1, 4),
    SNOR_PROTO_1_1_8 = SNOR_PROTO_STR(1, 1, 8),
    SNOR_PROTO_1_2_2 = SNOR_PROTO_STR(1, 2, 2),
    SNOR_PROTO_1_4_4 = SNOR_PROTO_STR(1, 4, 4),
    SNOR_PROTO_1_8_8 = SNOR_PROTO_STR(1, 8, 8),
    SNOR_PROTO_2_2_2 = SNOR_PROTO_STR(2, 2, 2),
    SNOR_PROTO_4_4_4 = SNOR_PROTO_STR(4, 4, 4),
    SNOR_PROTO_8_8_8 = SNOR_PROTO_STR(8, 8, 8),
};

/* Flash opcodes. */
#define SPINOR_OP_WREN       0x06	/* Write enable */
#define SPINOR_OP_RDSR       0x05	/* Read status register */
#define SPINOR_OP_WRSR       0x01	/* Write status register 1 byte */
#define SPINOR_OP_RDSR2      0x3f	/* Read status register 2 */
#define SPINOR_OP_WRSR2      0x3e	/* Write status register 2 */
#define SPINOR_OP_READ       0x03	/* Read data bytes (low frequency) */
#define SPINOR_OP_READ_FAST  0x0b	/* Read data bytes (high frequency) */
#define SPINOR_OP_READ_1_1_2 0x3b	/* Read data bytes (Dual Output SPI) */
#define SPINOR_OP_READ_1_2_2 0xbb	/* Read data bytes (Dual I/O SPI) */
#define SPINOR_OP_READ_1_1_4 0x6b	/* Read data bytes (Quad Output SPI) */
#define SPINOR_OP_READ_1_4_4 0xeb	/* Read data bytes (Quad I/O SPI) */
#define SPINOR_OP_PP         0x02	/* Page program (up to 256 bytes) */
#define SPINOR_OP_PP_1_1_4   0x32	/* Quad page program */
#define SPINOR_OP_PP_1_4_4   0x38	/* Quad page program */
#define SPINOR_OP_BE_4K      0x20	/* Erase 4KiB block */
#define SPINOR_OP_BE_4K_PMC  0xd7	/* Erase 4KiB block on PMC chips */
#define SPINOR_OP_BE_32K     0x52	/* Erase 32KiB block */
#define SPINOR_OP_CHIP_ERASE 0xc7	/* Erase whole flash chip */
#define SPINOR_OP_SE         0xd8	/* Sector erase (usually 64KiB) */
#define SPINOR_OP_RDID       0x9f	/* Read JEDEC ID */
#define SPINOR_OP_RDSFDP     0x5a	/* Read SFDP */
#define SPINOR_OP_RDCR       0x35	/* Read configuration register */
#define SPINOR_OP_RDFSR      0x70	/* Read flag status register */
#define SPINOR_OP_CLFSR      0x50	/* Clear flag status register */
#define SPINOR_OP_RDEAR      0xc8	/* Read Extended Address Register */
#define SPINOR_OP_WREAR      0xc5	/* Write Extended Address Register */

struct SPI_NOR {
    struct SNOR_HOST *spi;
    const struct FLASH_INFO *info;
    uint32_t pageSize;
    uint8_t addrWidth;
    uint8_t eraseOpcodeSec;
    uint8_t eraseOpcodeBlk;
    uint8_t readOpcode;
    uint8_t readDummy;
    uint8_t programOpcode;

    HAL_Status (*readReg)(struct SPI_NOR *nor, uint8_t opcode, uint8_t *buf, uint32_t len);
    HAL_Status (*writeReg)(struct SPI_NOR *nor, uint8_t opcode, uint8_t *buf, uint32_t len);

    int32_t (*read)(struct SPI_NOR *nor, uint32_t from,
                    uint32_t len, uint8_t *read_buf);
    int32_t (*write)(struct SPI_NOR *nor, uint32_t to,
                     uint32_t len, const uint8_t *write_buf);
    int32_t (*erase)(struct SPI_NOR *nor, uint32_t offs);

    enum SPI_NOR_PROTOCOL readProto;
    enum SPI_NOR_PROTOCOL writeProto;
    uint8_t cmdBuf[SPI_NOR_MAX_CMD_SIZE];

    const char *name;
    uint32_t size;
    uint32_t sectorSize;
    uint32_t eraseSize;
};

enum SPI_MEM_DATA_DIR {
    SPI_MEM_DATA_IN,
    SPI_MEM_DATA_OUT,
};

struct SPI_MEM_OP {
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

/** @} */
/***************************** Function Declare ******************************/
HAL_Status HAL_SNOR_Init(struct SPI_NOR *nor);
HAL_Status HAL_SNOR_Deinit(struct SPI_NOR *nor);
uint32_t HAL_SNOR_GetCapacity(struct SPI_NOR *nor);
HAL_Status HAL_SNOR_ReadID(struct SPI_NOR *nor, uint8_t *data);
uint32_t HAL_SNOR_ReadData(struct SPI_NOR *nor, uint32_t from, void *buf, uint32_t len);
uint32_t HAL_SNOR_ProgData(struct SPI_NOR *nor, uint32_t to, void *buf, uint32_t len);
uint32_t HAL_SNOR_Read(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData);
uint32_t HAL_SNOR_Write(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData);
uint32_t HAL_SNOR_OverWrite(struct SPI_NOR *nor, uint32_t sec, uint32_t nSec, void *pData);
HAL_Status HAL_SNOR_Erase(struct SPI_NOR *nor, uint32_t addr, NOR_ERASE_TYPE EraseType);
HAL_Status HAL_SNOR_ShowFlashInfo(struct SPI_NOR *nor);

#endif

/** @} */

/** @} */
