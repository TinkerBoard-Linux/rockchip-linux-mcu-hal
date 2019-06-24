/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PSRAM
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PSRAM driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PSRAM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
/*Command Set*/
#define CMD_READ_JEDECID (0x9F)

#define CMD_FAST_READ_A4 (0xEB)
#define CMD_PAGE_PROG_A4 (0x38)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static HAL_Status PSRAM_XmmcInit(struct HAL_FSPI_HOST *host, uint8_t cs)
{
    FSPICMD_DATA readCmd, writeCmd;
    FSPICTRL_DATA FSPItrl;

    HAL_ASSERT(cs < FSPI_CHIP_CNT);

    readCmd.d32 = 0;
    readCmd.b.cmd = CMD_FAST_READ_A4;
    readCmd.b.dummybits = 6;
    readCmd.b.addrbits = FSPI_ADDR_24BITS;

    writeCmd.d32 = 0;
    writeCmd.b.cmd = CMD_PAGE_PROG_A4;
    writeCmd.b.dummybits = 0;
    writeCmd.b.addrbits = FSPI_ADDR_24BITS;

    FSPItrl.d32 = 0;
    FSPItrl.b.cmdlines = FSPI_LINES_X4;
    FSPItrl.b.datalines = FSPI_LINES_X4;
    FSPItrl.b.addrlines = FSPI_LINES_X4;

    host->xmmcDev[cs].type = DEV_PSRAM;
    host->xmmcDev[cs].ctrl = FSPItrl.d32;
    host->xmmcDev[cs].readCmd = readCmd.d32;
    host->xmmcDev[cs].writeCmd = writeCmd.d32;

    return HAL_OK;
}

/********************* Public Function Definition ****************************/
/** @defgroup PSRAM_Exported_Functions_Group4 Init and Deinit Functions
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
 * @brief  Psram init.
 * @param  host: FSPI host.
 * @param  cs: chip select.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_Init(struct HAL_FSPI_HOST *host, uint8_t cs)
{
    uint8_t idByte[5];

    HAL_FSPI_Init(host);
    HAL_PSRAM_ReadID(host, idByte);

    PSRAM_XmmcInit(host, cs);

    return HAL_OK;
}

/**
 * @brief  Psram deinit.
 * @param  host: FSPI host.
 * @param  cs: chip select.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_Deinit(struct HAL_FSPI_HOST *host, uint8_t cs)
{
    HAL_FSPI_Deinit(host);
    memset(&host->xmmcDev[cs], 0, sizeof(struct HAL_FSPI_XMMC_DEV));

    return HAL_OK;
}

/** @} */

/** @defgroup PSRAM_Exported_Functions_Group5 Other Functions
 *  @{
// */

/**
 * @brief  Read psram ID.
 * @param  host: FSPI host.
 * @param  data: ID buffer.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_ReadID(struct HAL_FSPI_HOST *host, uint8_t *data)
{
    HAL_ASSERT(data != NULL);

    /* to-do */

    return HAL_OK;
}

/**
 * @brief  Psram XMMC mode enable.
 * @param  host: FSPI host.
 * @return HAL_Status
 * Access data in memory map mode.
 */
HAL_Status HAL_PSRAM_XmmcEnable(struct HAL_FSPI_HOST *host)
{
    return HAL_FSPI_XmmcRequest(host, 1);
}

/**
 * @brief  Psram XMMC mode disable.
 * @param  host: FSPI host.
 * @return HAL_Status
 */
HAL_Status HAL_PSRAM_XmmcDisable(struct HAL_FSPI_HOST *host)
{
    return HAL_FSPI_XmmcRequest(host, 0);
}

/** @} */

#endif

/** @} */

/** @} */
