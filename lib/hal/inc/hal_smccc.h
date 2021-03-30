/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_SMCCC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SMCCC
 *  @{
 */

#ifndef __HAL_SMCCC_H_
#define __HAL_SMCCC_H_

#include "hal_def.h"

/** @defgroup SMCCC_How_To_Use How To Use
 *  @{

 The ARM SMCCC(SMC Calling Convention) driver can be used as follows:

 - Trap into Secure Monitor mode which is at EL3 or Secure-PL1.

 @} */

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/
/** @defgroup SMCCC_Exported_Definition_Group1 Basic Definition
 *  @{
 */
struct SMCCC_PARAM {
    unsigned long a0;
    unsigned long a1;
    unsigned long a2;
    unsigned long a3;
    unsigned long a4;
    unsigned long a5;
    unsigned long a6;
    unsigned long a7;
};
/** @} */

/***************************** Function Declare ******************************/
/** @defgroup SMCCC_Public_Function_Declare Public Function Declare
 *  @{
 */

/**
* @brief  ARM SMC Calling Convention
* @param  pParam: point to the struct containing args to pass and return
* @attention this API allow direct use in the HAL layer.
*/
void HAL_SMCCC_Call(struct SMCCC_PARAM *pParam);

/** @} */

#endif /* __HAL_SMCCC_H_ */

/** @} */

/** @} */

#endif /* HAL_SMCCC_MODULE_ENABLED */
