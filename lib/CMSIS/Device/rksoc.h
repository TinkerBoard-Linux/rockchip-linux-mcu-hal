/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _RKSOC_H_
#define _RKSOC_H_

#if defined(RKMCU_RK2106)
#include "rk2106.h"
#elif defined(RKMCU_RK2108)
#include "rk2108.h"
#elif defined(RKMCU_PISCES)
#include "pisces.h"
#endif

#define SET_BIT(REG, BIT) ((REG) |= (BIT))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT))
#define READ_BIT(REG, BIT) ((REG) & (BIT))
#define CLEAR_REG(REG) ((REG) = (0x0))
#define WRITE_REG(REG, VAL) ((REG) = (VAL))
#define READ_REG(REG) ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) \
        WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))

#define RK_CLRSET_BITS(CLR, SET) ((((CLR) | ((SET))) << 16) | ((SET)))
#define RK_SET_BITS(SET) RK_CLRSET_BITS(0, SET)
#define RK_CLR_BITS(CLR) RK_CLRSET_BITS(CLR, 0)
#define RK_CLRSET_REG_BITS(REG, CLR, SET) \
        WRITE_REG(REG, ((CLR) | (SET)) << 16 | ((SET)))

#endif
