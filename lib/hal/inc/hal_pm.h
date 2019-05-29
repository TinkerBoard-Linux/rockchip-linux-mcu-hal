/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PM
 *  @{
 */

#ifndef _HAL_PM_H_
#define _HAL_PM_H_

#include "hal_def.h"

/***************************** Function Declare ******************************/
int HAL_SYS_Suspend(uint32_t flag);
void HAL_CPU_ArchSuspend(uint32_t *ptr);
void HAL_CPU_ArchResume(void);

/** @defgroup PM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  it is the enterpoint for the soc suspend.
 * @param  flag: flag for controlling
 * @param  suspend: a callback function for running some codes at last when suspending.
 * @return HAL_Status
 */
int HAL_CPU_SuspendEnter(uint32_t flag, int (*suspend)(uint32_t));

/** @} */

#endif

/** @} */

/** @} */
