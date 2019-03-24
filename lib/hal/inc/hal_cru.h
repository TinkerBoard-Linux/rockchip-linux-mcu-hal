/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */
/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup PD
 *  @{
 */

#ifndef _HAL_CRU_H_
#define _HAL_CRU_H_

#include "hal_def.h"

/*************************** MACRO Definition ****************************/

#define RK_PLL_RATE(_rate, _refdiv, _fbdiv, _postdiv1, _postdiv2, _dsmpd, \
                    _frac)                                                \
    {                                                                     \
        .rate = _rate##U, .fbDiv = _fbdiv, .postDiv1 = _postdiv1,         \
        .refDiv = _refdiv, .postDiv2 = _postdiv2, .dsmpd = _dsmpd,        \
        .frac = _frac,                                                    \
    }

struct PLL_CONFIG {
    uint32_t rate;
    uint32_t fbDiv;
    uint32_t postDiv1;
    uint32_t refDiv;
    uint32_t postDiv2;
    uint32_t dsmpd;
    uint32_t frac;
};

struct PLL_SETUP {
    uint32_t conOffset0;
    uint32_t conOffset1;
    uint32_t conOffset2;
    uint32_t modeOffset;
    uint32_t modeShift;
    uint32_t lockShift;
    uint32_t modeMask;
    const struct PLL_CONFIG *rateTable;
};

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/
HAL_Check HAL_CRU_ClkIsEnabled(uint32_t clk);
HAL_Status HAL_CRU_ClkEnable(uint32_t clk);
HAL_Status HAL_CRU_ClkDisable(uint32_t clk);
HAL_Check HAL_CRU_ClkIsReset(uint32_t clk);
HAL_Status HAL_CRU_ClkResetAssert(uint32_t clk);
HAL_Status HAL_CRU_ClkResetDeassert(uint32_t clk);
HAL_Status HAL_CRU_ClkSetDiv(uint32_t divName, uint32_t divValue);
uint32_t HAL_CRU_ClkGetDiv(uint32_t divName);
HAL_Status HAL_CRU_ClkSetMux(uint32_t muxName, uint32_t muxValue);
uint32_t HAL_CRU_ClkGetMux(uint32_t muxName);
HAL_Status HAL_CRU_FracdivGetConfig(uint32_t rateOut, uint32_t rate,
                                    uint32_t *numerator,
                                    uint32_t *denominator);
uint32_t HAL_CRU_ClkFracGetFreq(eCLOCK_Name clockName);
HAL_Status HAL_CRU_ClkFracSetFreq(eCLOCK_Name clockName, uint32_t rate);
uint32_t HAL_CRU_ClkGetFreq(eCLOCK_Name clockName);
HAL_Status HAL_CRU_ClkSetFreq(eCLOCK_Name clockName, uint32_t rate);

#endif

/** @} */

/** @} */
