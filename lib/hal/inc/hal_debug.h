/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2019 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_DEBUG_H_
#define _HAL_DEBUG_H_

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DEBUG
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup DEBUG_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define HAL_SYSLOG printf

#if (HAL_DBG_ON && HAL_DBG_INFO_ON)
#define HAL_DBG(fmt, arg...) HAL_SYSLOG("[HAL INFO] " fmt, ##arg)
#else
#define HAL_DBG(fmt, arg...)
#endif

#if (HAL_DBG_ON && HAL_DBG_WRN_ON)
#define HAL_DBG_WRN(fmt, arg...) HAL_SYSLOG("[HAL WARNING] " fmt, ##arg)
#else
#define HAL_DBG_WRN(fmt, arg...)
#endif

#if (HAL_DBG_ON && HAL_DBG_ERR_ON)
#define HAL_DBG_ERR(fmt, arg...) HAL_SYSLOG("[HAL ERROR] " fmt, ##arg)
#else
#define HAL_DBG_ERR(fmt, arg...)
#endif

#if (HAL_DBG_ON && USE_FULL_ASSERT)
#define HAL_ASSERT(expr)                                    \
    do {                                                    \
        if (!(expr))                                        \
            AssertFailed((const char *)__FILE__, __LINE__); \
    } while (0)
#else
#define HAL_ASSERT(expr)
#endif

/***************************** Structure Definition **************************/

/** @} */
/***************************** Function Declare ******************************/

extern void AssertFailed(const char *file, uint32_t line);

#endif

/** @} */

/** @} */
