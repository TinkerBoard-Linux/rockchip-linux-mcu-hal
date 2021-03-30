/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_DDR_ECC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DDR_ECC
 *  @{
 */

#ifndef _HAL_DDR_ECC_H_
#define _HAL_DDR_ECC_H_

#include "hal_def.h"

/********************* MACRO Definition ******************************/
/** @defgroup DDR_ECC_Exported_Definition_Group1 Basic Definition
 *  @{
 */
/***************************** Structure Definition **************************/
/**
 * @brief  DDR_ECC private instance data
 */
struct DDR_ECC_CNT {
    uint32_t ceCnt; /**< Statistical Correctable Error count */
    uint32_t ueCnt; /**< Statistical Uncorrectable Error count */
};

/** @} */
/***************************** Function Declare ******************************/
/** @defgroup DDR_ECC_Public_Function_Declare Public Function Declare
 *  @{
 */
HAL_Status HAL_DDR_ECC_GetInfo(struct DDR_ECC_CNT *p);
HAL_Status HAL_DDR_ECC_Init(struct DDR_ECC_CNT *p);
/** @} */

#endif
/** @} */

/** @} */
#endif