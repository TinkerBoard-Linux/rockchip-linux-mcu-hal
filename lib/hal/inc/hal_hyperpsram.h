/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HYPERPSRAM
 *  @{
 */

#ifndef _HAL_HYPERBUS_H_
#define _HAL_HYPERBUS_H_

#include "hal_base.h"

#ifdef HAL_HYPERPSRAM_MODULE_ENABLED

/***************************** Function Declare ******************************/
HAL_Status HAL_HYPERPSRAM_Init(struct HYPERBUS_REG *pReg, uint32_t psramBase);
HAL_Status HAL_HYPERPSRAM_DeInit(struct HYPERBUS_REG *pReg);

#endif

#endif

/** @} */

/** @} */
