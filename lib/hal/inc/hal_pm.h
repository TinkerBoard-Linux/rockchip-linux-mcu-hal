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

#ifdef HAL_PM_CPU_SLEEP_MODULE_ENABLED
void HAL_CPU_ArchSuspend(uint32_t *ptr);
void HAL_CPU_ArchResume(void);

void HAL_NVIC_SuspendSave(void);
void HAL_NVIC_ResumeRestore(void);

int HAL_CPU_SuspendEnter(uint32_t flag, int (*suspend)(uint32_t));
#endif

#endif

/** @} */

/** @} */
