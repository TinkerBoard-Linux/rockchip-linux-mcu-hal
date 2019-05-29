/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DSP
 *  @{
 */

#ifndef _HAL_DSP_H_
#define _HAL_DSP_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup DSP_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

struct DSP_OPS {
    int (*ioctl)(void *priv, int cmd, void *arg);
};

/**
 * struct DSP_DEV - dsp dev struct.
 */
struct DSP_DEV {
    struct GRF_REG *grfReg;    /**< grf register base */
    const struct DSP_OPS *ops; /**< dsp ops function */
    void *privData; /**< dsp dev privData */
};

/** @} */
/***************************** Function Declare ******************************/

/** should hold lock to call these functions */
HAL_Status HAL_DSP_Init(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_Deinit(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_Enable(struct DSP_DEV *dsp, uint32_t altAddr);
HAL_Status HAL_DSP_Disable(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_START(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_STOP(struct DSP_DEV *dsp);

#endif

/** @} */

/** @} */
