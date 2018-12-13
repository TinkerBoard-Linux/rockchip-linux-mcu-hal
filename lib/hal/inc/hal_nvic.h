/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_nvic.h
 */

#ifndef _HAL_NVIC_H_
#define _HAL_NVIC_H_

#include "hal_def.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup NVIC NVIC
 *  NVIC interrupt controller driver
 *  @{
 */

#define NVIC_PRIORITYGROUP_0 (0x7U)
#define NVIC_PRIORITYGROUP_1 (0x6U)
#define NVIC_PRIORITYGROUP_2 (0x5U)
#define NVIC_PRIORITYGROUP_3 (0x4U)

/* Default NVIC priority grouping */
#define NVIC_PRIORITYGROUP_DEFAULT NVIC_PRIORITYGROUP_3

#define NVIC_PERIPH_PRIO_DEFAULT (4)

/** @brief Type define of NVIC interrupt handler */
typedef void (*NVIC_IRQHandler)(void);

/***************************** Structure Definition **************************/

/** @} */

/***************************** Function Declare ******************************/

void HAL_NVIC_SetIRQHandler(IRQn_Type IRQn, NVIC_IRQHandler handler);
NVIC_IRQHandler HAL_NVIC_GetIRQHandler(IRQn_Type IRQn);
void HAL_NVIC_SetPriorityGrouping(uint32_t priorityGroup);
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);
uint32_t HAL_NVIC_GetPriority(IRQn_Type IRQn);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
HAL_Check HAL_NVIC_IsPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ConfigExtIRQ(IRQn_Type IRQn, NVIC_IRQHandler handler,
                           uint32_t priority);
void HAL_NVIC_Init(void);

#endif
