/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_HWSPINLOCK_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HWSpinlock
 *  @{
 */

/** @defgroup HWSpinlock_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/

#define HWSPINLOCK_STATUS_MASK (0xFU << 0U)
#define IS_VALID_LOCKID(n)     ((uint32_t)(n) < 64U)
#define IS_VALID_OWNERID(n)    ((n) > 0U && (n) < 16U)

/********************* Private Variable Definition ***************************/

/*
 * g_ownerID variable *MUST* be initialized by invoking HAL_HWSpinlock_Init()
 * before using HWSpinlock.
 */
static uint32_t g_ownerID;

/** @} */
/********************* Public Function Definition ****************************/

/** @defgroup HWSpinlock_Exported_Functions_Group1 TryLock and Unlock Functions

This section provides functions allowing to Trylock and Unlock HWSpinlock:

*  @{
*/

/**
 * @brief  HWSpinlock Try to Lock API.
 * @param  lockID: The Lock ID which try to lock.
 * @return The lock status, 1 means locked and 0 is not.
 */
HAL_Check HAL_HWSpinlock_TryLock(uint32_t lockID)
{
    HAL_ASSERT(IS_VALID_LOCKID(lockID));

    /** Force to check Owner ID is initialized or not */
    if (!IS_VALID_OWNERID(g_ownerID)) {
        return HAL_FALSE;
    }

    WRITE_REG(SPINLOCK->STATUS[lockID], g_ownerID);

    /*
     * Get only first 4 bits and compare to HWSPINLOCK_OWNER_ID,
     * if equal, we attempt to acquire the lock, otherwise,
     * someone else has it.
     */
    return (g_ownerID == (HWSPINLOCK_STATUS_MASK &
                          READ_REG(SPINLOCK->STATUS[lockID])));
}

/**
 * @brief  HWSpinlock Unlock API
 * @param  lockID: The Lock ID which try to unlock.
 */
void HAL_HWSpinlock_Unlock(uint32_t lockID)
{
    HAL_ASSERT(IS_VALID_LOCKID(lockID));

    /* Release the lock by writing 0 to it */
    WRITE_REG(SPINLOCK->STATUS[lockID], 0);
}

/**
 * @brief  HWSpinlock Get Owner API
 * @param  lockID: The Lock ID which get owner.
 * @return The current owner of the lockID.
 */
uint32_t HAL_HWSpinlock_GetOwner(uint32_t lockID)
{
    HAL_ASSERT(IS_VALID_LOCKID(lockID));

    return (HWSPINLOCK_STATUS_MASK &
            READ_REG(SPINLOCK->STATUS[lockID]));
}

/**
 * @brief  HWSpinlock Init API
 * @param  ownerID: The Owner ID wanna set.
 * @return The init result, 1 means success and 0 is failed.
 */
HAL_Check HAL_HWSpinlock_Init(uint32_t ownerID)
{
    if (!IS_VALID_OWNERID(ownerID)) {
        return HAL_FALSE;
    }

    g_ownerID = ownerID;

    return HAL_TRUE;
}

/** @} */

/** @} */

/** @} */

#endif /* HAL_HWSPINLOCK_MODULE_ENABLED */
