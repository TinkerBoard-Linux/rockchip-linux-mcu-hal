/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PD
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PD driver can be used as follows:

 (#) Invoke HAL_PD_Setting in each device power on/off its own Pd.
 (#) The order of setting power domain.
       power on:
           set power domain on
           leave idle
       power off:
           request ilde
           set power domain off
 (#) The PD ID is include shift information:
      [3:0]:power on shift
      [7:4]:power on status shift
      [11:8]:idle request shift
      [15:12]:idle status shift
      [19:16]:ack status shift
 (#) PD driver is just responsible for passing simple command data, And
 the usecount is the user's responsibility. Protection the usecount at the driver layer.
 (#) More details refer to APIs' descriptions as below.

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PMU_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define PD_PWR_SHIFT  0U
#define PD_PWR_MASK   0x0000000FU
#define PD_ST_SHIFT   4U
#define PD_ST_MASK    0x000000F0U
#define PD_REQ_SHIFT  8U
#define PD_REQ_MASK   0x00000F00U
#define PD_IDLE_SHIFT 12U
#define PD_IDLE_MASK  0x0000F000U
#define PD_ACK_SHIFT  16U
#define PD_ACK_MASK   0x000F0000U

#define PD_GET_PWR_SHIFT(x) (((uint32_t)(x)&PD_PWR_MASK) >> PD_PWR_SHIFT)
#define PD_GET_ST_SHIFT(x)  (((uint32_t)(x)&PD_ST_MASK) >> PD_ST_SHIFT)
#define PD_GET_REQ_SHIFT(x) (((uint32_t)(x)&PD_REQ_MASK) >> PD_REQ_SHIFT)
#if defined(RKMCU_RK1808)
#define PD_GET_IDLE_SHIFT(x) ((((uint32_t)(x)&PD_IDLE_MASK) >> PD_IDLE_SHIFT) + 16)
#else
#define PD_GET_IDLE_SHIFT(x) (((uint32_t)(x)&PD_IDLE_MASK) >> PD_IDLE_SHIFT)
#endif
#define PD_GET_ACK_SHIFT(x) (((uint32_t)(x)&PD_ACK_MASK) >> PD_ACK_SHIFT)
/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static HAL_Check PD_IsIdle(uint32_t pd)
{
    uint32_t idleShift = PD_GET_IDLE_SHIFT(pd);

    return (HAL_Check)((PMU->BUS_IDLE_ST & (1 << idleShift)) >> idleShift);
}

#if defined(RKMCU_RK1808)
static HAL_Check PD_ReadAck(uint32_t pd)
{
    uint32_t ackShift = PD_GET_ACK_SHIFT(pd);

    return (HAL_Check)((PMU->BUS_IDLE_ST & (1 << ackShift)) >> ackShift);
}
#else
static HAL_Check PD_ReadAck(uint32_t pd)
{
    uint32_t ackShift = PD_GET_ACK_SHIFT(pd);

    return (HAL_Check)((PMU->BUS_IDLE_ACK & (1 << ackShift)) >> ackShift);
}
#endif

static HAL_Check PD_IsOn(uint32_t pd)
{
    uint32_t stShift = PD_GET_ST_SHIFT(pd);

    /* check idle status for idle-only domains */

    if (stShift > 16)
        return !PD_IsIdle(pd);

    return (HAL_Check)(!((PMU->PWRDN_ST & (1 << stShift)) >> stShift));
}

static HAL_Status PD_IdleRequest(uint32_t pd, bool idle)
{
    int delay = 24000000;
    uint32_t reqShift = PD_GET_REQ_SHIFT(pd);

    if (reqShift > 16)
        return HAL_INVAL;
    else
        PMU->BUS_IDLE_REQ = RK_CLRSET_BITS(1 << reqShift, idle << reqShift);

    /* Wait util idle_ack = 1 */
    while (delay > 0) {
        if (PD_ReadAck(pd) == idle)
            break;
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    delay = 24000000;
    while (delay > 0) {
        if (PD_IsIdle(pd) == idle)
            break;
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    return HAL_OK;
}

static HAL_Status PD_PowerOn(uint32_t pd, bool on)
{
    int delay = 24000000;
    uint32_t pwrShift = PD_GET_PWR_SHIFT(pd);

    if (pwrShift > 16)
        return HAL_INVAL;
    else
        PMU->PWRDN_CON = RK_CLRSET_BITS(1 << pwrShift, !on << pwrShift);

    while (delay > 0) {
        if (PD_IsOn(pd) == on)
            break;
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    return HAL_OK;
}

/********************* Public Function Definition ****************************/

/** @defgroup PD_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Pd setting API
 * @param  pd: pd id
 * @param  powerOn: power on or off
 * @return HAL_Status
 */
HAL_Status HAL_PD_Setting(uint32_t pd, bool powerOn)
{
    HAL_Status error = HAL_OK;

    if (PD_IsOn(pd) != powerOn) {
        if (!powerOn) {
            /* if powering down, idle request to NIU first */
            error = PD_IdleRequest(pd, 1);
            if (error < 0)
                return error;

            error = PD_PowerOn(pd, powerOn);
            if (error < 0)
                return error;
        } else {
            error = PD_PowerOn(pd, powerOn);
            if (error < 0)
                return error;

            /* if powering up, leave idle mode */
            error = PD_IdleRequest(pd, 0);
            if (error < 0)
                return error;
        }
    }

    return error;
}

/** @} */

#endif

/** @} */

/** @} */
