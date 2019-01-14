/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DEBUG
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DEBUG driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

__weak void AssertFailed(const char *file, uint32_t line)
{
    HAL_DBG_ERR("assert failed at %s %lu\n", file, line);
    while (1)
        ;
}

/********************* Public Function Definition ****************************/

/** @} */

/** @} */
