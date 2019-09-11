
/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */
/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PD
 *  @{
 */

#ifndef _HAL_PD_H_
#define _HAL_PD_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

HAL_Status HAL_PD_On(ePD_Id pd);
HAL_Status HAL_PD_Off(ePD_Id pd);

#endif

/** @} */

/** @} */
