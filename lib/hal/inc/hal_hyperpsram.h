/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_conf.h"

#ifdef HAL_HYPERPSRAM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HYPERPSRAM
 *  @{
 */

#ifndef _HAL_HYPERBUS_H_
#define _HAL_HYPERBUS_H_

#include "hal_base.h"

/***************************** Function Declare ******************************/
/** @defgroup HYPERPSRAM_Public_Function_Declare Public Function Declare
 *  @{
 */
HAL_Status HAL_HYPERPSRAM_Init(struct HYPERBUS_REG *pReg, uint32_t psramBase);
HAL_Status HAL_HYPERPSRAM_DeInit(struct HYPERBUS_REG *pReg);
HAL_Status HAL_HYPERPSRAM_ModifyTiming(struct HYPERBUS_REG *pReg, uint32_t hyperFreq);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_HYPERPSRAM_MODULE_ENABLED */
