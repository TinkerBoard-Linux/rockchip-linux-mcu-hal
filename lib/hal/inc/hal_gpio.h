/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
  * @{
  */

/** @addtogroup GPIO
  * @{
  */

#ifndef __HAL_GPIO_H
#define __HAL_GPIO_H

#include "hal_def.h"

/***************************** MACRO Definition ******************************/

#ifndef GPIO_VER_ID
#define GPIO_VER_ID (0U)
#endif

#define PIN_NUMBER_PER_BANK (32)

#define GPIO_PIN_SHIFT  (0) /* Bits 0-4: GPIO Pin number: 0 - 31 */
#define GPIO_PIN_MASK   (0x1f << GPIO_PIN_SHIFT)
#define GPIO_BANK_SHIFT (5) /* Bits 5-7: GPIO Port number: 0 - 7 */
#define GPIO_BANK_MASK  (0x7 << GPIO_BANK_SHIFT)

/** @defgroup GPIO_Exported_Definition_Group1 Basic Definition
 *  @{
 */
#define BANK_PIN(BANK, PIN) ((((BANK) << GPIO_BANK_SHIFT) & GPIO_BANK_MASK) + (((PIN) << GPIO_PIN_SHIFT) & GPIO_PIN_MASK))

typedef enum {
    GPIO_LOW,
    GPIO_HIGH
} eGPIO_pinLevel;

typedef enum {
    GPIO_IN,
    GPIO_OUT
} eGPIO_pinDirection;

typedef enum {
    GPIO_DEBOUNCE_DIS,
    GPIO_DEBOUNCE_EN
} eGPIO_pinDebounce;

typedef enum {
    GPIO_INT_ENABLE,
    GPIO_INT_DISABLE
} eGPIO_intEnable;

typedef enum {
    GPIO_INT_TYPE_NONE         = 0x00000000,
    GPIO_INT_TYPE_EDGE_RISING  = 0x00000001,
    GPIO_INT_TYPE_EDGE_FALLING = 0x00000002,
    GPIO_INT_TYPE_EDGE_BOTH    = (GPIO_INT_TYPE_EDGE_FALLING | GPIO_INT_TYPE_EDGE_RISING),
    GPIO_INT_TYPE_LEVEL_HIGH   = 0x00000004,
    GPIO_INT_TYPE_LEVEL_LOW    = 0x00000008,
    GPIO_INT_TYPE_LEVEL_MASK   = (GPIO_INT_TYPE_LEVEL_LOW | GPIO_INT_TYPE_LEVEL_HIGH),
    GPIO_INT_TYPE_SENSE_MASK   = 0x0000000f,
    GPIO_INT_TYPE_DEFAULT      = GPIO_INT_TYPE_SENSE_MASK,
} eGPIO_intType;

typedef enum {
    #ifdef GPIO0
    GPIO_BANK0 = 0,
    #endif
    #ifdef GPIO1
    GPIO_BANK1 = 1,
    #endif
    #ifdef GPIO2
    GPIO_BANK2 = 2,
    #endif
    #ifdef GPIO3
    GPIO_BANK3 = 3,
    #endif
    #ifdef GPIO4
    GPIO_BANK4 = 4,
    #endif
    GPIO_BANK_NUM
} eGPIO_bankId;

typedef enum {
    GPIO_INT_MODE_EDGE_RISING,
    GPIO_INT_MODE_EDGE_FALLING,
    GPIO_INT_MODE_EDGE_RISING_FALLING,
    GPIO_INT_MODE_LEVEL_HIGH,
    GPIO_INT_MODE_LEVEL_LOW,
    GPIO_INT_MODE_INVALID
} eGPIO_intMode;
/** @} */

/** @defgroup GPIO_Exported_Definition_Group2 Public Functions Declare.
 *  @{
 */
eGPIO_pinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *pGPIO, uint32_t pin);
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_pinLevel pinLevel);
HAL_Status HAL_GPIO_SetPinDirection(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_pinDirection pinDir);

void HAL_GPIO_EnableIRQ(struct GPIO_REG *pGPIO, uint32_t pin);
void HAL_GPIO_DisableIRQ(struct GPIO_REG *pGPIO, uint32_t pin);
void HAL_GPIO_IRQHandler(struct GPIO_REG *pGPIO, eGPIO_bankId bank);

eGPIO_pinLevel HAL_GPIO_GetPinData(struct GPIO_REG *pGPIO, uint32_t pin);
/** @} */

/** @defgroup GPIO_Exported_Definition_Group3 Internal Public Functions Declare.
 *  Only used by user driver, not API for module driver.
 *  @{
 */

HAL_Status HAL_GPIO_SetIntType(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_intType mode);

/* The parameter pin for this function is special, it's 0~31. */
void HAL_GPIO_IRQDispatch(eGPIO_bankId bank, uint32_t pin);
/** @} */

#endif
/** @} */

/** @} */
