/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_grf.h
 */

#ifndef _HAL_GRF_H_
#define _HAL_GRF_H_

#include "hal_def.h"
#include "hal_gpio.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup GRF GRF
 *  This is demo for macro definition
 *  @{
 */

/**
  * @brief GRF Chanel
  */

/***************************** Structure Definition **************************/

/** @} */

/***************************** Function Declare ******************************/

void HAL_GRF_GPIOMuxSet(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                        uint32_t data);

#endif

/** @} */
