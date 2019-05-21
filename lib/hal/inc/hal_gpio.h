/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
  * @{
  */

/** @addtogroup GPIO
  * @{
  */

#ifndef __HAL_GPIO_H
#define __HAL_GPIO_H

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup GPIO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

typedef enum {
    GPIO_LOW,
    GPIO_HIGH
} eGPIO_PinLevel;

typedef enum {
    GPIO_IN,
    GPIO_OUT
} eGPIO_PinDirection;

typedef enum {
    GPIO_FUNC0,
    GPIO_FUNC1,
    GPIO_FUNC2,
    GPIO_FUNC3
} eGPIO_PinFunc;

typedef enum {
    GPIO_PULL_OD,
    GPIO_PULL_UP,
    GPIO_PULL_DOWN,
} eGPIO_PinPull;

typedef enum {
    GPIO_DRIVE_LEVEL0,
    GPIO_DRIVE_LEVEL1,
    GPIO_DRIVE_LEVEL2,
    GPIO_DRIVE_LEVEL3
} eGPIO_PinDrive;

typedef enum {
    GPIO_SLEWRATE_SLOW,
    GPIO_SLEWRATE_FAST
} eGPIO_PinSpeed;

typedef enum {
    GPIO_SCHMITT_DIS,
    GPIO_SCHMITT_EN
} eGPIO_PinSchmitt;

typedef enum {
    GPIO_DEBOUNCE_DIS,
    GPIO_DEBOUNCE_EN
} eGPIO_PinDebounce;

typedef enum {
    GPIO_IRQ_EN,
    GPIO_IRQ_DIS
} eGPIO_IrqEn;

typedef enum {
    GPIO_IRQ_TYPE_POSITIVE = 0,
    GPIO_IRQ_TYPE_NEGATIVE,
    GPIO_IRQ_TYPE_HIGH,
    GPIO_IRQ_TYPE_LOW,
    GPIO_IRQ_TYPE_DOUBLE,
} eGPIO_IrqType;

typedef enum {
#ifdef GPIO0
    GPIO_GROUP0,
#endif
#ifdef GPIO1
    GPIO_GROUP1,
#endif
#ifdef GPIO2
    GPIO_GROUP2,
#endif
#ifdef GPIO3
    GPIO_GROUP3,
#endif
#ifdef GPIO4
    GPIO_GROUP4,
#endif
#ifdef GPIO5
    GPIO_GROUP5,
#endif
    GPIO_GROUP_NUM
} eGPIO_PinGroup;

typedef enum {
    GPIO_PIN_A0 = 0,
    GPIO_PIN_A1,
    GPIO_PIN_A2,
    GPIO_PIN_A3,
    GPIO_PIN_A4,
    GPIO_PIN_A5,
    GPIO_PIN_A6,
    GPIO_PIN_A7,
    GPIO_PIN_B0,
    GPIO_PIN_B1,
    GPIO_PIN_B2,
    GPIO_PIN_B3,
    GPIO_PIN_B4,
    GPIO_PIN_B5,
    GPIO_PIN_B6,
    GPIO_PIN_B7,
    GPIO_PIN_C0,
    GPIO_PIN_C1,
    GPIO_PIN_C2,
    GPIO_PIN_C3,
    GPIO_PIN_C4,
    GPIO_PIN_C5,
    GPIO_PIN_C6,
    GPIO_PIN_C7,
    GPIO_PIN_D0,
    GPIO_PIN_D1,
    GPIO_PIN_D2,
    GPIO_PIN_D3,
    GPIO_PIN_D4,
    GPIO_PIN_D5,
    GPIO_PIN_D6,
    GPIO_PIN_D7,
} eGPIO_PinNum;

/**
  * @}
  */

/***************************** Function Declare ******************************/
/** GRF Functions */
HAL_Status HAL_GPIO_SetDrive(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDrive level);
HAL_Status HAL_GPIO_SetFunc(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinFunc func);
HAL_Status HAL_GPIO_SetPull(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinPull pull);
HAL_Status HAL_GPIO_SetSchmitt(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinSchmitt enable);

/** GPIO Functions */
HAL_Status HAL_GPIO_SetIrqAck(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
HAL_Status HAL_GPIO_SetPinDebounce(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDebounce enable);
HAL_Status HAL_GPIO_SetIrqEnable(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_IrqEn enable);
HAL_Status HAL_GPIO_SetIrqType(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_IrqType type);
uint32_t HAL_GPIO_GetGPIOIrqType(struct GPIO_REG *GPIOx);
uint32_t HAL_GPIO_GetGPIOIrqStatus(struct GPIO_REG *GPIOx);

HAL_Status HAL_GPIO_SetPinDirection(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDirection direction);
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinLevel level);
eGPIO_PinDirection HAL_GPIO_GetPinDirection(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
eGPIO_PinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
eGPIO_PinLevel HAL_GPIO_GetPinData(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);

#endif

/**
  * @}
  */

/**
  * @}
  */
