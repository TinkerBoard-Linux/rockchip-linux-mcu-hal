/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PVTM
 *  @{
 */

#ifndef _HAL_PVTM_H_
#define _HAL_PVTM_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

HAL_Status HAL_PVTM_GetFreqCnt(struct PVTM_REG *reg, uint32_t chn,
                               uint32_t timeUs, uint32_t *val);

#endif

/** @} */

/** @} */
