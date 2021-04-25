/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_HWSPINLOCK_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HWSpinlock
 *  @{
 */

#ifndef _HAL_HWSPINLOCK_H_
#define _HAL_HWSPINLOCK_H_

#include "hal_def.h"

/***************************** Function Declare ******************************/
/** @defgroup HWSpinlock_Public_Function_Declare Public Function Declare
 *  @{
 */

HAL_Check HAL_HWSpinlock_TryLock(uint32_t lockID);
void HAL_HWSpinlock_Unlock(uint32_t lockID);
uint32_t HAL_HWSpinlock_GetOwner(uint32_t lockID);
HAL_Check HAL_HWSpinlock_Init(uint32_t ownerID);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_HWSPINLOCK_MODULE_ENABLED */
