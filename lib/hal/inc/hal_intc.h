/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_INTC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup INTC
 *  @{
 */

#ifndef _HAL_INTC_H_
#define _HAL_INTC_H_

#include "hal_base.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/

#define L32             32
#define INTC            ((struct INTC_REG *)INTC_BASE)
#define IS_VALID_IRQ(n) ((int32_t)(n) >= 0 && (int32_t)(n) < 64)

/***************************** Structure Definition **************************/

/********************* Public Function Definition ****************************/
/** @defgroup INTC_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  INTC Enable Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_EnableIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTEN_L |= (1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTEN_H |= (1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Disable Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_DisableIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTEN_L &= ~(1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTEN_H &= ~(1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Mask Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_MaskIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTMASK_L |= (1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTMASK_H |= (1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Unmask Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_UnmaskIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTMASK_L &= ~(1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTMASK_H &= ~(1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Set a Software Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_SetSoftwareIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTFORCE_L |= (1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTFORCE_H |= (1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Clear a Software Interrupt.
 * @param  IRQn: Device specific interrupt number.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_ClearSoftwareIRQ(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        INTC->INTC_IRQ_INTFORCE_L &= ~(1UL << IRQn);
    } else {
        INTC->INTC_IRQ_INTFORCE_H &= ~(1UL << (IRQn - L32));
    }
}

/**
 * @brief  INTC Get Interrupt Status.
 * @param  IRQn: Device specific interrupt number.
 * @return uint32_t: If is active return 1, or 0.
 */
__STATIC_INLINE uint32_t HAL_INTC_GetStatus(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        return (INTC->INTC_IRQ_STATUS_L & (1UL << IRQn)) ? 1UL : 0UL;
    }

    return (INTC->INTC_IRQ_STATUS_H & (1UL << (IRQn - L32))) ? 1UL : 0UL;
}

/**
 * @brief  INTC Get Interrupt Raw Status.
 * @param  IRQn: Device specific interrupt number.
 * @return uint32_t: If is active return 1, or 0.
 */
__STATIC_INLINE uint32_t HAL_INTC_GetRawStatus(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        return (INTC->INTC_IRQ_RAWSTATUS_L & (1UL << IRQn)) ? 1UL : 0UL;
    }

    return (INTC->INTC_IRQ_RAWSTATUS_H & (1UL << (IRQn - L32))) ? 1UL : 0UL;
}

/**
 * @brief  INTC Get Interrupt Mask Status.
 * @param  IRQn: Device specific interrupt number.
 * @return uint32_t: If is active return 1, or 0.
 */
__STATIC_INLINE uint32_t HAL_INTC_GetMaskStatus(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        return (INTC->INTC_IRQ_MASKSTATUS_L & (1UL << IRQn)) ? 1UL : 0UL;
    }

    return (INTC->INTC_IRQ_MASKSTATUS_H & (1UL << (IRQn - L32))) ? 1UL : 0UL;
}

/**
 * @brief  INTC Get Interrupt Final Status.
 * @param  IRQn: Device specific interrupt number.
 * @return uint32_t: If is active return 1, or 0.
 */
__STATIC_INLINE uint32_t HAL_INTC_GetFinalStatus(IRQn_Type IRQn)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if ((int32_t)IRQn < L32) {
        return (INTC->INTC_IRQ_FINALSTATUS_L & (1UL << IRQn)) ? 1UL : 0UL;
    }

    return (INTC->INTC_IRQ_FINALSTATUS_H & (1UL << (IRQn - L32))) ? 1UL : 0UL;
}

/**
 * @brief  INTC Set System Priority Level.
 * @param  plevel: System specific priority level.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_SetPriorityLevel(uint8_t plevel)
{
    if (plevel >= 0 && plevel <= 0x0f) {
        INTC->INTC_IRQ_PLEVEL = plevel & 0x0fUL;
    }
}

/**
 * @brief  INTC Set Interrupt Priority.
 * @param  IRQn: Device specific interrupt number.
 * @param  priority: Priority to set.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_SetPriority(IRQn_Type IRQn, uint8_t priority)
{
    HAL_ASSERT(IS_VALID_IRQ(IRQn));

    if (priority >= 0 && priority <= 0x0f) {
        INTC->INTC_IRQ_PR_N[IRQn] = priority & 0x0fUL;
    }
}

/**
 * @brief  INTC Enable All Interrupt.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_EnableAllRQ()
{
    INTC->INTC_IRQ_INTEN_L = 0xffffffff;
    INTC->INTC_IRQ_INTEN_H = 0xffffffff;
}

/**
 * @brief  INTC Disable All Interrupt.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_DisableAlIRQ()
{
    INTC->INTC_IRQ_INTEN_L = 0x00000000;
    INTC->INTC_IRQ_INTEN_H = 0x00000000;
}

/**
 * @brief  INTC Mask All Interrupt.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_MaskAllRQ()
{
    INTC->INTC_IRQ_INTMASK_L = 0xffffffff;
    INTC->INTC_IRQ_INTMASK_H = 0xffffffff;
}

/**
 * @brief  INTC Unmask All Interrupt.
 * @return None.
 */
__STATIC_INLINE void HAL_INTC_UnmaskAllRQ()
{
    INTC->INTC_IRQ_INTMASK_L = 0x00000000;
    INTC->INTC_IRQ_INTMASK_H = 0x00000000;
}

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_INTC_MODULE_ENABLED */
