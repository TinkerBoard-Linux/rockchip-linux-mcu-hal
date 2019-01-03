/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#ifdef HAL_NVIC_MODULE_ENABLED

#include "hal_uart.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

void HAL_NVIC_SetIRQHandler(IRQn_Type IRQn, NVIC_IRQHandler handler)
{
    uint32_t *vectors = (uint32_t *)SCB->VTOR;

    vectors[IRQn + NVIC_PERIPH_IRQ_OFFSET] = (uint32_t)handler;
}

NVIC_IRQHandler HAL_NVIC_GetIRQHandler(IRQn_Type IRQn)
{
    uint32_t *vectors = (uint32_t *)SCB->VTOR;

    return (NVIC_IRQHandler)(vectors[IRQn + NVIC_PERIPH_IRQ_OFFSET]);
}

void HAL_NVIC_SetPriorityGrouping(eNVIC_PriorityGroup priorityGroup)
{
    NVIC_SetPriorityGrouping(priorityGroup);
}

uint32_t HAL_NVIC_GetPriorityGrouping(void)
{
    return NVIC_GetPriorityGrouping();
}

void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
    NVIC_SetPriority(IRQn, priority);
}

uint32_t HAL_NVIC_GetPriority(IRQn_Type IRQn)
{
    return NVIC_GetPriority(IRQn);
}

void HAL_NVIC_EnableIRQ(IRQn_Type IRQn)
{
    NVIC_EnableIRQ(IRQn);
}

void HAL_NVIC_DisableIRQ(IRQn_Type IRQn)
{
    NVIC_DisableIRQ(IRQn);
}

void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
    NVIC_SetPendingIRQ(IRQn);
}

/**
 * @brief  Check whether the interrupt is suspended.
 * @param  IRQn: interrupt number
 * @return int: if is pending return 1, or 0.
 */
HAL_Check HAL_NVIC_IsPendingIRQ(IRQn_Type IRQn)
{
    return (HAL_Check)(NVIC_GetPendingIRQ(IRQn));
}

/**
 * @brief  Clear pending interrupt.
 * @param  IRQn: interrupt number
 * @return None.
 */
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
    NVIC_ClearPendingIRQ(IRQn);
}

/**
 * @brief  Register peripheral interrupt handle and priority.
 * @param  IRQn: interrupt number
 * @param  handler: interrupt handle
 * @param  priority: interrupt priority
 * @return None.
 */
void HAL_NVIC_ConfigExtIRQ(IRQn_Type IRQn, NVIC_IRQHandler handler,
                           uint32_t priority)
{
    HAL_NVIC_SetIRQHandler(IRQn, handler);
    HAL_NVIC_SetPriority(IRQn, priority);
    HAL_NVIC_EnableIRQ(IRQn);
}

/**
 * @brief  Init NVIC Interrupt Controller.
 * @return None.
 */
void HAL_NVIC_Init(void)
{
    /* Enable some system fault exceptions */
    SCB->SHCSR |= SCB_SHCSR_USGFAULTENA_Msk | SCB_SHCSR_BUSFAULTENA_Msk |
                  SCB_SHCSR_MEMFAULTENA_Msk;
}

#endif
