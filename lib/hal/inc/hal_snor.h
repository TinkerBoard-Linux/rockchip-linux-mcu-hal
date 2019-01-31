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

#ifndef _HAL_SFC_NOR_H_
#define _HAL_SFC_NOR_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SNOR_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

typedef enum
{
    ERASE_SECTOR = 0,
    ERASE_BLOCK64K,
    ERASE_CHIP
} NOR_ERASE_TYPE;

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_SNOR_Init(void);
HAL_Status HAL_SNOR_Deinit(void);
uint32_t HAL_SNOR_GetCapacity(void);
HAL_Status HAL_SNOR_ReadID(uint8_t *data);
HAL_Status HAL_SNOR_ReadData(uint32_t addr, void *pData, uint32_t size);
HAL_Status HAL_SNOR_ProgData(uint32_t addr, void *pData, uint32_t size);
HAL_Status HAL_SNOR_Read(uint32_t sec, uint32_t nSec, void *pData);
HAL_Status HAL_SNOR_Write(uint32_t sec, uint32_t nSec, void *pData);
HAL_Status HAL_SNOR_Erase(uint32_t addr, NOR_ERASE_TYPE EraseType);
HAL_Status HAL_SNOR_EraseBlk(uint32_t addr);

#endif

/** @} */

/** @} */
