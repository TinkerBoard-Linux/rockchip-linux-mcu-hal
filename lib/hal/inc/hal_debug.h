/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_DEBUG_H_
#define _HAL_DEBUG_H_

/***************************** MACRO Definition ******************************/

#define HAL_SYSLOG printf

#define HAL_LOG(flags, fmt, arg...) \
    do {                            \
        if (flags)                  \
            HAL_SYSLOG(fmt, ##arg); \
    } while (0)

#define HAL_DBG(fmt, arg...) HAL_LOG(HAL_DBG_ON, "[HAL] " fmt, ##arg)
#define HAL_DBG_WRN(fmt, arg...) \
    HAL_LOG(HAL_DBG_ON &&HAL_DBG_WRN_ON, "[HAL WARNING] " fmt, ##arg)
#define HAL_DBG_ERR(fmt, arg...) \
    HAL_LOG(HAL_DBG_ON &&HAL_DBG_ERR_ON, "[HAL ERROR] " fmt, ##arg)

#define HAL_ASSERT(expr)                                               \
    do {                                                               \
        if (!(exp)) {                                                  \
            HAL_DBG_ERR("%s %d Assert failed!\n", __func__, __LINE__); \
        }                                                              \
    } while (1)

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

#endif

