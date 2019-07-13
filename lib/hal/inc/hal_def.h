/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
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
#include "soc.h"
#include "hal_list.h"

/* SOC OPS Marco */
#define SET_BIT(REG, BIT)    ((*(volatile uint32_t *)&(REG)) |= (BIT))
#define CLEAR_BIT(REG, MASK) ((*(volatile uint32_t *)&(REG)) &= ~(MASK))
#define READ_BIT(REG, MASK)  ((*(volatile uint32_t *)&(REG)) & (MASK))
#define CLEAR_REG(REG)       ((*(volatile uint32_t *)&(REG)) = (0x0))
#define WRITE_REG(REG, VAL)  ((*(volatile uint32_t *)&(REG)) = (VAL))
#define READ_REG(REG)        ((*(volatile uint32_t *)&(REG)))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) \
        WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))

#define MASK_TO_WE(msk)                  (__builtin_constant_p(msk) ? ((msk) > 0xFFFFU ? 0 : ((msk) << 16)) : ((msk) << 16))
#define VAL_MASK_WE(msk, val)            ((MASK_TO_WE(msk)) | (val))
#define WRITE_REG_MASK_WE(reg, msk, val) WRITE_REG(reg, (VAL_MASK_WE(msk, val)))

/* Misc OPS Marco */
#define HAL_MAX_DELAY 0xFFFFFFFFU

#define RESET                     0
#define HAL_IS_BIT_SET(REG, MASK) (((*(volatile uint32_t *)&(REG)) & (MASK)) != RESET)
#define HAL_IS_BIT_CLR(REG, MASK) (((*(volatile uint32_t *)&(REG)) & (MASK)) == RESET)

#define HAL_BIT(nr)       (1UL << (nr))
#define HAL_ARRAY_SIZE(a) (sizeof((a)) / sizeof((a)[0]))
#define HAL_MIN(x, y)     ((x) < (y) ? (x) : (y))

#define HAL_DIV_ROUND_UP(x, y) (((x) + (y) - 1) / (y))

/* Compiller Marco */
#ifdef __GNUC__
#ifndef __unused
#define __unused __attribute__((unused))
#endif
#endif

/***************************** Structure Definition **************************/
typedef enum {
    HAL_FALSE = 0x00U,
    HAL_TRUE  = 0x01U
} HAL_Check;

typedef enum {
    HAL_OK      = 0x00U,
    HAL_ERROR   = (-1),
    HAL_BUSY    = (-16),
    HAL_NODEV   = (-19),
    HAL_INVAL   = (-22),
    HAL_NOSYS   = (-38),
    HAL_TIMEOUT = (-110)
} HAL_Status;

typedef enum {
    HAL_DISABLE = 0x00U,
    HAL_ENABLE  = 0x01U
} HAL_FuncStatus;

typedef enum {
    HAL_UNLOCKED = 0x00U,
    HAL_LOCKED   = 0x01U
} HAL_LockStatus;

typedef void (*pFunc)(void);

/***************************** Function Declare ******************************/

#endif
