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

/** @defgroup How_To_Use How To Use
 *  @{

 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The TIMER driver can be used as follows:

 (#) IT mode: Resgister TIMER handler.
 (#) Initialize the TIMER(HAL_TIMER_Init):
    (##) Mask interrupt.
    (##) Set TIMER mode.
 (#) Set TIMER count(HAL_TIMER_SetCount).
 (#) Start ther TIMER(HAL_TIMER_Start, HAL_TIMER_Start_IT).
 (#) Stop TIMER(HAL_TIMER_Stop, HAL_TIMER_Stop_IT).

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_TIMER_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup TIMER_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit module as follows:

 @endverbatim
 *  @{
 */

/**
 * @brief  Timer init.
 * @param  pReg: Choose TIMER.
 * @param  mode: Choose TIMER mode.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Init(struct TIMER_REG *pReg, eTIMER_MODE mode)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    pReg->TimerControlReg =
        TIMERN_CONTROLREG_MASK_MASK | (mode << TIMERN_CONTROLREG_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Timer deinit.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_DeInit(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    pReg->TimerControlReg =
        TIMERN_CONTROLREG_MASK_UNMASK | TIMERN_CONTROLREG_EN_DISABLE;

    return HAL_OK;
}

/** @} */

/** @defgroup TIMER_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Stop TIMER counter.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status.
 * Just disable TIMER, and keep TIMER configuration.
 */
HAL_Status HAL_TIMER_Stop(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    CLEAR_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_EN_ENABLE);
    CLEAR_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_MASK_UNMASK);

    return HAL_OK;
}

/**
 * @brief  Start TIMER counter.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Start(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    SET_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_EN_ENABLE);
    CLEAR_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_MASK_UNMASK);

    return HAL_OK;
}

/**
 * @brief  Stop TIMER counter in interrupt mode.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status.
 * Just disable TIMER, and keep TIMER configuration.
 */
HAL_Status HAL_TIMER_Stop_IT(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    CLEAR_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_EN_ENABLE);
    CLEAR_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_MASK_UNMASK);

    return HAL_OK;
}

/**
 * @brief  Start TIMER counter in interrupt mode.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Start_IT(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    SET_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_EN_ENABLE);
    SET_BIT(pReg->TimerControlReg, TIMERN_CONTROLREG_MASK_UNMASK);

    return HAL_OK;
}

/**
 * @brief  Set TIMER count number.
 * @param  pReg: Choose TIMER.
 * @param  usTick: TIMER counter loading number.
 * @return HAL_Status.
 * Set timer count number.
 */
HAL_Status HAL_TIMER_SetCount(struct TIMER_REG *pReg, uint64_t usTick)
{
    uint64_t loadCount = 0;

    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    loadCount = usTick;
    pReg->TimerLoadCount0 = (loadCount & 0xffffffff);
    pReg->TimerLoadCount1 = ((loadCount >> 32) & 0xffffffff);

    return HAL_OK;
}

/**
 * @brief  Get TIMER count number.
 * @param  pReg: Choose TIMER.
 * @return uint64_t: Current conut number.
 */
uint64_t HAL_TIMER_GetCount(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    return (uint64_t)(((uint64_t)pReg->TimerCurrentValue1) << 32) |
           pReg->TimerCurrentValue0;
}

/**
 * @brief  Clear TIMER intterrupt status.
 * @param  pReg: Choose TIMER.
 * @return HAL_Status: HAL_OK.
 */
HAL_Status HAL_TIMER_ClrInt(struct TIMER_REG *pReg)
{
    HAL_ASSERT(IS_TIMER_INSTANCE(pReg));

    pReg->TimerIntStatus = 0x1;

    return HAL_OK;
}

/**
 * @brief  TIMER0 interrupt handler.
 * @return HAL_Status: HAL_OK.
 * Clear interrupt status.
 */
__weak HAL_Status HAL_TIMER0_Handler(void)
{
    HAL_TIMER_ClrInt(TIMER0);

    return HAL_OK;
}

/**
 * @brief  TIMER1 interrupt handler.
 * @return HAL_Status: HAL_OK.
 * Clear interrupt status.
 */
__weak HAL_Status HAL_TIMER1_Handler(void)
{
    HAL_TIMER_ClrInt(TIMER1);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
