/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
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
#define DSP_IOCTL(a) (0x1000 + a)

/** general cmd for dsp control */
#define DSP_IOCTL_SET_ITCM_SIZE  DSP_IOCTL(1)
#define DSP_IOCTL_SET_DTCM_SIZE  DSP_IOCTL(2)
#define DSP_IOCTL_SET_MEM_GATING DSP_IOCTL(3)

#define DSP_TCM_SEL(a) (0x1 << a)

/***************************** Structure Definition **************************/

/**
 * enum DSP_TcmSel - dsp tcm select.
 */
typedef enum {
    DSP_DTCM0 = DSP_TCM_SEL(0),    /* 0x30200000 ~ 0x30210000 */
    DSP_DTCM1 = DSP_TCM_SEL(1),    /* 0x30210000 ~ 0x30220000 */
    DSP_DTCM2 = DSP_TCM_SEL(2),    /* 0x30220000 ~ 0x30230000 */
    DSP_DTCM3 = DSP_TCM_SEL(3),    /* 0x30230000 ~ 0x30240000 */
    DSP_DTCM4 = DSP_TCM_SEL(4),    /* 0x30240000 ~ 0x30250000 */
    DSP_DTCM5 = DSP_TCM_SEL(5),    /* 0x30250000 ~ 0x30260000 */
    DSP_DTCM6 = DSP_TCM_SEL(6),    /* 0x30260000 ~ 0x30270000 */
    DSP_DTCM7 = DSP_TCM_SEL(7),    /* 0x30270000 ~ 0x30280000 */
    DSP_ITCM  = DSP_TCM_SEL(8),    /* 0x30000000 ~ 0x30010000 */
} eDSP_tcmSel;

/**
 * enum DSP_TcmMode - dsp memory work mode.
 */
typedef enum    {
    NOR_MODE = 0,
    RET1N_MODE,
    RET2N_MODE,
    PWR_DOWN_MODE
} eDSP_tcmMode;

struct DSP_OPS {
    int (*ioctl)(void *priv, int cmd, void *arg);
};

/**
 * struct DSP_DEV - dsp dev struct.
 */
struct DSP_DEV {
    struct GRF_REG *grfReg;    /**< grf register base */
    const struct DSP_OPS *ops; /**< dsp ops function */
    int32_t resetFlag; /**< dsp have been reset flag */
    void *privData; /**< dsp dev privData */
};

/** @} */
/***************************** Function Declare ******************************/

/** should hold lock to call these functions */
HAL_Status HAL_DSP_SoftWakeup(void);
HAL_Status HAL_DSP_SetTcmMode(uint32_t tcmSel, eDSP_tcmMode mode);
HAL_Status HAL_DSP_Init(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_DeInit(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_Enable(struct DSP_DEV *dsp, uint32_t altAddr);
HAL_Status HAL_DSP_Disable(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_START(struct DSP_DEV *dsp);
HAL_Status HAL_DSP_STOP(struct DSP_DEV *dsp);

#endif

/** @} */

/** @} */
