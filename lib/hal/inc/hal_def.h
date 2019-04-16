/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
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
#define SET_BIT(REG, BIT)    (*(volatile uint32_t *)(REG) |= (BIT))
#define CLEAR_BIT(REG, MASK) (*(volatile uint32_t *)(REG) &= ~(MASK))
#define READ_BIT(REG, MASK)  (*(volatile uint32_t *)(REG) & (MASK))
#define CLEAR_REG(REG)       (*(volatile uint32_t *)(REG) = (0x0))
#define WRITE_REG(REG, VAL)  (*(volatile uint32_t *)(REG) = (VAL))
#define READ_REG(REG)        (*(volatile uint32_t *)(REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) \
        WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))

#define RK_CLRSET_BITS(CLR, SET) ((((CLR) | ((SET))) << 16) | ((SET)))
#define RK_SET_BITS(SET)         RK_CLRSET_BITS(0, SET)
#define RK_CLR_BITS(CLR)         RK_CLRSET_BITS(CLR, 0)
#define RK_CLRSET_REG_BITS(REG, CLR, SET) \
        WRITE_REG(REG, ((CLR) | (SET)) << 16 | ((SET)))

/* Misc OPS Marco */
#define HAL_MAX_DELAY 0xFFFFFFFFU

#define RESET 0
#define HAL_IS_BIT_SET(REG, MASK) ((*(volatile uint32_t *)(REG) & (MASK)) != RESET)
#define HAL_IS_BIT_CLR(REG, MASK) ((*(volatile uint32_t *)(REG) & (MASK)) == RESET)

#define HAL_BIT(nr)       (1UL << (nr))
#define HAL_ARRAY_SIZE(a) (sizeof((a)) / sizeof((a)[0]))
#define HAL_MIN(x, y)     ((x) < (y) ? (x) : (y))

/* Compiller Marco */
#ifdef __GNUC__
#ifndef __weak
#define __weak __attribute__((weak))
#endif
#ifndef __packed
#define __packed __attribute__((__packed__))
#endif
#ifndef __unused
#define __unused __attribute__((unused))
#endif
#endif

#define __irq

/***************************** Structure Definition **************************/
typedef enum {
    FALSE = 0x00U,
    TRUE  = 0x01U
} HAL_Check;

typedef enum {
    HAL_OK      = 0x00U,
    HAL_ERROR   = (-1),
    HAL_BUSY    = (-16),
    HAL_NODEV   = (-19),
    HAL_INVAL   = (-22),
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
