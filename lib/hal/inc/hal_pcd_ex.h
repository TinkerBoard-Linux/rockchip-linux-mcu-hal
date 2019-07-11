/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PCDEx
 *  @{
 */

#ifndef _HAL_PCD_EX_H_
#define _HAL_PCD_EX_H_

#include "hal_def.h"

/***************************** Structure Definition **************************/
/** @defgroup PCDEx_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** PCD LPM State Structure definition */
typedef enum {
    PCD_LPM_L0_ACTIVE = 0x00U, /* on */
    PCD_LPM_L1_ACTIVE = 0x01U, /* LPM L1 sleep */
} ePCD_lpmMsg;

/** PCD BCD State Structure definition */
typedef enum {
    PCD_BCD_ERROR                    = 0xFF,
    PCD_BCD_CONTACT_DETECTION        = 0xFE,
    PCD_BCD_STD_DOWNSTREAM_PORT      = 0xFD,
    PCD_BCD_CHARGING_DOWNSTREAM_PORT = 0xFC,
    PCD_BCD_DEDICATED_CHARGING_PORT  = 0xFB,
    PCD_BCD_DISCOVERY_COMPLETED      = 0x00,
} ePCD_bcdMsg;

/** @} */

/***************************** Function Declare ******************************/
HAL_Status HAL_PCDEx_SetTxFiFo(struct PCD_HANDLE *pPCD, uint8_t fifo, uint16_t size);
HAL_Status HAL_PCDEx_SetRxFiFo(struct PCD_HANDLE *pPCD, uint16_t size);
HAL_Status HAL_PCDEx_ActivateLPM(struct PCD_HANDLE *pPCD);
HAL_Status HAL_PCDEx_DeActivateLPM(struct PCD_HANDLE *pPCD);
void HAL_PCDEx_LPM_Callback(struct PCD_HANDLE *pPCD, ePCD_lpmMsg msg);

#endif /* _HAL_PCD_EX_H_ */

/** @} */

/** @} */
