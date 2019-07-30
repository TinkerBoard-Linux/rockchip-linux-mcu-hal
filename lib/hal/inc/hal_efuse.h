/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup EFUSE
 *  @{
 */

#ifndef _HAL_EFUSE_H_
#define _HAL_EFUSE_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

HAL_Status HAL_EFUSE_WriteByte(struct EFUSE_CTL_REG *reg, uint32_t offset, uint8_t val);
HAL_Status HAL_EFUSE_ReadByte(struct EFUSE_CTL_REG *reg, uint32_t offset, uint8_t *val);

#endif

/** @} */

/** @} */