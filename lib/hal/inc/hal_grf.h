/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_GRF_H_
#define _HAL_GRF_H_

#include "hal_def.h"
#include "hal_gpio.h"

/***************************** MACRO Definition ******************************/
/***************************** Structure Definition **************************/
/***************************** Function Declare ******************************/

void HAL_GRF_GPIOMuxSet(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                        uint32_t data);

#endif
