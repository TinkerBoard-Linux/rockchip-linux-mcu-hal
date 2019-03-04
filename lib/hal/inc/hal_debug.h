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

//#define HAL_DBG_USING_RTT_SERIAL
#ifdef HAL_DBG_USING_RTT_SERIAL
#include <rthw.h>
#include <rtthread.h>

#define HAL_SYSLOG rt_kprintf
#else
#define HAL_SYSLOG printf
#endif

#if (HAL_DBG_ON) && (HAL_DBG_ON)
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
HAL_Status HAL_DBG_HEX(char *s, void *buf, uint32_t width, uint32_t len);

#endif

/** @} */

/** @} */
