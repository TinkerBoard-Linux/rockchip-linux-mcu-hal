/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PM
 *  @{
 */

/** @defgroup PM_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PM driver can be used as follows:

 (#) Invoke HAL_SYS_SuspendEnter when system will enter suspend.

 @endverbatim
 @} */

#include "hal_base.h"

#if defined(HAL_PM_MODULE_ENABLED)

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

#ifdef HAL_PM_CPU_SLEEP_MODULE_ENABLED
static int SOC_SuspendEnter(uint32_t flag)
{
    HAL_DCACHE_CleanInvalidate();
    HAL_DCACHE_Disable();
    __WFI();

    return HAL_OK;
}
#endif

/** @defgroup PM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  it is the enterpoint for suspend invoked by a os's powermanager implement.
 * @param  flag: flag for controlling
 * @return HAL_Status
 */
int HAL_SYS_Suspend(uint32_t flag)
{
#ifdef HAL_PM_CPU_SLEEP_MODULE_ENABLED
    HAL_NVIC_SuspendSave();
    HAL_CPU_SuspendEnter(flag, SOC_SuspendEnter);
    HAL_DCACHE_Enable();
    HAL_NVIC_ResumeRestore();
#endif

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
