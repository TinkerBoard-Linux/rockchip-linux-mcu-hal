/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup TIMER
 *  @{
 */

#ifndef _HAL_TIMER_H_
#define _HAL_TIMER_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

/** @defgroup TIMER_Exported_Definition_Group1 Basic Definition
 *  @{
 */

typedef enum
{
    TIMER_FREE_RUNNING = 0,
    TIMER_USER_DEFINED,
    TIMER_MODE_MAX
} eTIMER_MODE;

typedef enum
{
    TIMER0 = 0,
    TIMER1,
    TIMER_MAX
} eTIMER_CH;

/***************************** Structure Definition **************************/

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_TIMER_Stop(eTIMER_CH timerNum);
HAL_Status HAL_TIMER_Start(eTIMER_CH timerNum);
HAL_Status HAL_TIMER_Stop_IT(eTIMER_CH timerNum);
HAL_Status HAL_TIMER_Start_IT(eTIMER_CH timerNum);
HAL_Status HAL_TIMER_SetCount(eTIMER_CH timerNum, uint64_t usTick);
uint64_t HAL_TIMER_GetCount(eTIMER_CH timerNum);
HAL_Status HAL_TIMER0_Handler(void);
HAL_Status HAL_TIMER1_Handler(void);
HAL_Status HAL_TIMER_Init(eTIMER_CH timerNum, eTIMER_MODE mode);
HAL_Status HAL_TIMER_DeInit(eTIMER_CH timerNum);
HAL_Status HAL_TIMER_ClrInt(eTIMER_CH timerNum);

#endif

/** @} */

/** @} */
