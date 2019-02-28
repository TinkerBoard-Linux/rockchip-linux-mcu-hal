/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_GPIO_H_
#define _HAL_GPIO_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
typedef enum {
    GPIO_LOW,
    GPIO_HIGH

} eGPIOPinLevel;

typedef enum {
    GPIO_IN,
    GPIO_OUT

} eGPIOPinDirection;

typedef enum {
    GPIOPortA_Pin0,
    GPIOPortA_Pin1,
    GPIOPortA_Pin2,
    GPIOPortA_Pin3,
    GPIOPortA_Pin4,
    GPIOPortA_Pin5,
    GPIOPortA_Pin6,
    GPIOPortA_Pin7,
    GPIOPortB_Pin0,
    GPIOPortB_Pin1,
    GPIOPortB_Pin2,
    GPIOPortB_Pin3,
    GPIOPortB_Pin4,
    GPIOPortB_Pin5,
    GPIOPortB_Pin6,
    GPIOPortB_Pin7,
    GPIOPortC_Pin0,
    GPIOPortC_Pin1,
    GPIOPortC_Pin2,
    GPIOPortC_Pin3,
    GPIOPortC_Pin4,
    GPIOPortC_Pin5,
    GPIOPortC_Pin6,
    GPIOPortC_Pin7,
    GPIOPortD_Pin0,
    GPIOPortD_Pin1,
    GPIOPortD_Pin2,
    GPIOPortD_Pin3,
    GPIOPortD_Pin4,
    GPIOPortD_Pin5,
    GPIOPortD_Pin6,
    GPIOPortD_Pin7

} eGPIOPinNum;

typedef enum {
    GPIO_CH0,
    GPIO_CH1,
    GPIO_CH2,

    GPIO_CH_MAX
} eGPIO_CHANNEL;

/***************************** Structure Definition **************************/
/***************************** Function Declare ******************************/

void HAL_GPIO_SetPinDirection(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                              eGPIOPinDirection direction);
uint8_t HAL_GPIO_GetPinDirection(eGPIO_CHANNEL gpioPort,
                                 eGPIOPinNum gpioPinNum);
void HAL_GPIO_SetPinLevel(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                          eGPIOPinLevel level);
uint8_t HAL_GPIO_GetPinLevel(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum);
#endif
