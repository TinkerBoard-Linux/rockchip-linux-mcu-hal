/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SARADC
 *  @{
 */

#ifndef _HAL_SARADC_H_
#define _HAL_SARADC_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup PINCTRL_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/
typedef enum {
    SARADC_INT_MOD,
    SARADC_POL_MOD,
} eSARADC_mode;

/** @} */

/***************************** Function Declare ******************************/
HAL_Status HAL_SARADC_Start(struct SARADC_REG *reg, eSARADC_mode mode, uint32_t chn);
HAL_Status HAL_SARADC_Stop(struct SARADC_REG *reg);
uint32_t HAL_SARADC_GetRaw(struct SARADC_REG *reg);
HAL_Check HAL_SARADC_PollIsEOC(struct SARADC_REG *reg);
void HAL_SARADC_IrqHandler(struct SARADC_REG *reg);

#endif

/** @} */

/** @} */
