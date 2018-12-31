/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_timer.c
 * @brief TIMER driver.
 *
 * @defgroup TIMER TIMER
 *  @{
 @verbatim

 #### How to use ####

 The TIMER driver can be used as follows:

 (#) IT mode: Resgister TIMER handler.
 (#) Initialize the TIMER(HAL_TIMER_Init):
    (##) Mask interrupt.
    (##) Set TIMER mode.
 (#) Set TIMER count(HAL_TIMER_SetCount).
 (#) Start ther TIMER(HAL_TIMER_Start, HAL_TIMER_Start_IT).
 (#) Stop TIMER(HAL_TIMER_Stop, HAL_TIMER_Stop_IT).

 @endverbatim
 ** @} */

#include "hal_base.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

#ifdef HAL_TIMER_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define TIMER_PORT(n) ((struct TIMER_REG *)(TIMER_GROUP[n]))

/********************* Private Structure Definition **************************/

const uint32_t TIMER_GROUP[2] = {
    TIMER_BASE,
    TIMER_BASE + 0x20,
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static uint32_t TIMER_ClrInt(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return (uint32_t)(-1);

    timerReg = TIMER_PORT(timerNum);
    timerReg->TimerIntStatus = 0x1;
    return 0;
}

/********************* Public Function Definition ****************************/

/** @defgroup TIMER TIMER
 *  @{
 */

/**
 * @brief  Stop TIMER counter.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 * Just disable TIMER, and keep TIMER configuration.
 */
HAL_Status HAL_TIMER_Stop(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);

    timerReg->TimerControlReg |= TIMERN_CONTROLREG_EN_DISABLE;

    return HAL_OK;
}

/**
 * @brief  Start TIMER counter.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Start(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);

    timerReg->TimerControlReg |= TIMERN_CONTROLREG_EN_ENABLE;

    return HAL_OK;
}

/**
 * @brief  Stop TIMER counter in interrupt mode.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 * Just disable TIMER, and keep TIMER configuration.
 */
HAL_Status HAL_TIMER_Stop_IT(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);

    timerReg->TimerControlReg |=
        TIMERN_CONTROLREG_MASK_MASK | TIMERN_CONTROLREG_EN_DISABLE;

    return HAL_OK;
}

/**
 * @brief  Start TIMER counter in interrupt mode.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Start_IT(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);
    timerReg->TimerControlReg |=
        TIMERN_CONTROLREG_MASK_UNMASK | TIMERN_CONTROLREG_EN_ENABLE;

    return HAL_OK;
}

/**
 * @brief  Set TIMER count number.
 * @param  timerNum: Choose TIMER.
 * @param  usTick: TIMER counter loading number.
 * @return HAL_Status.
 * Set timer count number.
 */
HAL_Status HAL_TIMER_SetCount(eTIMER_CH timerNum, uint64_t usTick)
{
    struct TIMER_REG *timerReg;
    uint64_t loadCount = 0;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    loadCount = usTick;
    timerReg = TIMER_PORT(timerNum);
    timerReg->TimerLoadCount0 = (loadCount & 0xffffffff);
    timerReg->TimerLoadCount1 = ((loadCount >> 32) & 0xffffffff);

    return HAL_OK;
}

/**
 * @brief  Get TIMER count number.
 * @param  timerNum: Choose TIMER.
 * @return uint64_t: Current conut number.
 */
uint64_t HAL_TIMER_GetCount(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return (uint64_t)(-1);

    timerReg = TIMER_PORT(timerNum);

    return (uint64_t)(((uint64_t)timerReg->TimerCurrentValue1) << 32) |
           timerReg->TimerCurrentValue0;
}

/**
 * @brief  TIMER0 interrupt handler.
 * @return HAL_Status: HAL_OK.
 * Clear interrupt status.
 */
HAL_Status HAL_TIMER0_Handler(void)
{
    TIMER_ClrInt(TIMER0);

    return HAL_OK;
}

/**
 * @brief  TIMER1 interrupt handler.
 * @return HAL_Status: HAL_OK.
 * Clear interrupt status.
 */
HAL_Status HAL_TIMER1_Handler(void)
{
    TIMER_ClrInt(TIMER1);

    return HAL_OK;
}

/**
 * @brief  Timer init.
 * @param  timerNum: Choose TIMER.
 * @param  mode: Choose TIMER mode.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_Init(eTIMER_CH timerNum, eTIMER_MODE mode)
{
    struct TIMER_REG *timerReg;

    if ((timerNum >= TIMER_MAX) || (mode >= TIMER_MODE_MAX))
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);
    timerReg->TimerControlReg |=
        TIMERN_CONTROLREG_MASK_MASK | (mode << TIMERN_CONTROLREG_MODE_POS);

    return HAL_OK;
}

/**
 * @brief  Timer deinit.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 */
HAL_Status HAL_TIMER_DeInit(eTIMER_CH timerNum)
{
    struct TIMER_REG *timerReg;

    if (timerNum >= TIMER_MAX)
        return HAL_ERROR;

    timerReg = TIMER_PORT(timerNum);
    timerReg->TimerControlReg |=
        TIMERN_CONTROLREG_MASK_UNMASK | TIMERN_CONTROLREG_EN_DISABLE;

    return HAL_OK;
}

/** @} */

#endif

/** @} */
