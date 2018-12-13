/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_def.h
 */

#ifndef _HAL_DEF_H_
#define _HAL_DEF_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>

#include "cmsis_compiler.h"
#include "rksoc.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup HAL_DEF HAL_DEF
 *  Common defination, enum, macro for HAL drivers.
 *  @{
 */

#define HAL_MAX_DELAY 0xFFFFFFFFU
#define HAL_IS_BIT_SET(REG, BIT) (((REG) & (BIT)) != RESET)
#define HAL_IS_BIT_CLR(REG, BIT) (((REG) & (BIT)) == RESET)

#define HAL_ARRAY_SIZE(a) (sizeof((a)) / sizeof((a)[0]))

/***************************** Structure Definition **************************/

typedef enum { FALSE = 0x00U, TRUE = 0x01U } HAL_Check;

typedef enum {
    HAL_OK = 0x00U,
    HAL_ERROR = (-1),
    HAL_BUSY = (-16),
    HAL_NODEV = (-19),
    HAL_INVAL = (-22),
    HAL_TIMEOUT = (-110)
} HAL_Status;

typedef enum { HAL_DISABLE = 0x00U, HAL_ENABLE = 0x01U } HAL_FuncStatus;

typedef enum { HAL_UNLOCKED = 0x00U, HAL_LOCKED = 0x01U } HAL_LockStatus;

typedef void (*pFunc)(void);

/** @} */

/***************************** Function Declare ******************************/

#endif

/** @} */
