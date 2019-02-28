/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DEMO
 *  @{
 */

#ifndef _HAL_DEMO_H_
#define _HAL_DEMO_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** Add brief to here */
#define DEMO_TEST_DEFINE 0

/***************************** Structure Definition **************************/

/**
 *  Add multi line brief to here
 *  ...
 */
typedef enum {
    TEST_ENUM_ONE,
    TEST_ENUM_TWO,
    TEST_ENUM_THREE
} eDEMO_Test;

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_DEMO_Supsend(void);
HAL_Status HAL_DEMO_Resume(void);
HAL_Status HAL_DEMO_GetXXXState(void);
HAL_Status HAL_DEMO_WriteByte_DMA(void);
HAL_Status HAL_DEMO_Init(void);
HAL_Status HAL_DEMO_Deinit(void);
HAL_Status HAL_DEMO_CommonFunction(void);

#endif

/** @} */

/** @} */
