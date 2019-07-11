/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

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

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

HAL_Status HAL_PSRAM_Init(struct HAL_FSPI_HOST *host, uint8_t cs);
HAL_Status HAL_PSRAM_Deinit(struct HAL_FSPI_HOST *host, uint8_t cs);
HAL_Status HAL_PSRAM_ReadID(struct HAL_FSPI_HOST *host, uint8_t *data);
HAL_Status HAL_PSRAM_XmmcEnable(struct HAL_FSPI_HOST *host);
HAL_Status HAL_PSRAM_XmmcDisable(struct HAL_FSPI_HOST *host);

#endif

/** @} */

/** @} */
