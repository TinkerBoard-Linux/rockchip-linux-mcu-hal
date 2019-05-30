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

#define GPIO_PIN_SHIFT  (0) /* Bits 0-4: GPIO Pin number: 0 - 31 */
#define GPIO_PIN_MASK   (0x1f << GPIO_PIN_SHIFT)
#define GPIO_PORT_SHIFT (5) /* Bits 5-7: GPIO Port number: 0 - 7 */
#define GPIO_PORT_MASK  (0x7 << GPIO_PORT_SHIFT)

#define GPIO_PIN_DEFAULT (-1)
#define GET_PIN(PORT, PIN) ((((PORT) << GPIO_PORT_SHIFT) & GPIO_PORT_MASK) + (((PIN) << GPIO_PIN_SHIFT) & GPIO_PIN_MASK))

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
    GPIO_FUNC3,
    GPIO_FUNC4,
    GPIO_FUNC5,
    GPIO_FUNC6,
    GPIO_FUNC7
} eGPIO_PinFunc;

typedef enum {
    GPIO_PULL_OD,
    GPIO_PULL_UP,
    GPIO_PULL_DOWN,
    GPIO_PULL_KEEP
} eGPIO_PinPull;

typedef enum {
    GPIO_DRIVE_LEVEL0,
    GPIO_DRIVE_LEVEL1,
    GPIO_DRIVE_LEVEL2,
    GPIO_DRIVE_LEVEL3,
    GPIO_DRIVE_LEVEL4,
    GPIO_DRIVE_LEVEL5,
    GPIO_DRIVE_LEVEL6,
    GPIO_DRIVE_LEVEL7
} eGPIO_PinDrive;

typedef enum {
    GPIO_SLEWRATE_SLOW,
    GPIO_SLEWRATE_FAST
} eGPIO_PinSlewRate;

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
    GPIO_IRQ_TYPE_NONE         = 0x00000000,
    GPIO_IRQ_TYPE_EDGE_RISING  = 0x00000001,
    GPIO_IRQ_TYPE_EDGE_FALLING = 0x00000002,
    GPIO_IRQ_TYPE_EDGE_BOTH    = (GPIO_IRQ_TYPE_EDGE_FALLING | GPIO_IRQ_TYPE_EDGE_RISING),
    GPIO_IRQ_TYPE_LEVEL_HIGH   = 0x00000004,
    GPIO_IRQ_TYPE_LEVEL_LOW    = 0x00000008,
    GPIO_IRQ_TYPE_LEVEL_MASK   = (GPIO_IRQ_TYPE_LEVEL_LOW | GPIO_IRQ_TYPE_LEVEL_HIGH),
    GPIO_IRQ_TYPE_SENSE_MASK   = 0x0000000f,
    GPIO_IRQ_TYPE_DEFAULT      = GPIO_IRQ_TYPE_SENSE_MASK,
} eGPIO_IrqType;

typedef enum {
    #ifdef GPIO0
    GPIO_PORT0 = 0,
    #endif
    #ifdef GPIO1
    GPIO_PORT1 = 1,
    #endif
    #ifdef GPIO2
    GPIO_PORT2 = 2,
    #endif
    #ifdef GPIO3
    GPIO_PORT3 = 3,
    #endif
    #ifdef GPIO4
    GPIO_PORT4 = 4,
    #endif
    #ifdef GPIO5
    GPIO_PORT5 = 5,
    #endif
    #ifdef GPIO6
    GPIO_PORT6 = 6,
    #endif
    #ifdef GPIO7
    GPIO_PORT7 = 7,
    #endif
    GPIO_PORT_NUM
} eGPIO_PortNum;

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
    GPIO_PIN_NUM
} eGPIO_PinNum;

typedef enum {
    GPIO_MODE_INPUT,
    GPIO_MODE_OUTPUT,
    GPIO_MODE_IT_EDGE_RISING,
    GPIO_MODE_IT_EDGE_FALLING,
    GPIO_MODE_IT_EDGE_RISING_FALLING,
    GPIO_MODE_IT_LEVEL_HIGH,
    GPIO_MODE_IT_LEVEL_LOW,
} eGPIO_Mode;

/**
 * @brief GPIO Init structure definition
 */
typedef struct {
    uint32_t pin;     /*!< Specifies the GPIO pins to be configured.
                           This parameter can be any value of (1<< @ref eGPIO_PinNum) */

    uint32_t mode;    /*!< Specifies the operating mode for the selected pins.
                           This parameter can be a value of @ref eGPIO_Mode */

    uint32_t pul;    /*!< Specifies the Pull-up or Pull-Down activation for the selected pins.
                           This parameter can be a value of @ref eGPIO_PinPull */

    uint32_t smt;  /*!< Specifies the Pull-up or Pull-Down activation for the selected pins.
                            This parameter can be a value of @ref eGPIO_PinSchmitt */

    uint32_t drv;   /*!< Specifies the drive for the selected pins.
                           This parameter can be a value of @ref eGPIO_PinDrive */

    uint32_t slr;   /*!< Specifies the speed for the selected pins.
                           This parameter can be a value of @ref eGPIO_PinSlewRate */
} GPIO_InitTypeDef;

struct GPIO_PIN_INFO {
    uint8_t bitsPerPin;
    uint8_t pinsPerReg;
};

struct GPIO_PIN_OFFSET {
    uint32_t mux; /* Offset of Pin IOMUX in GRF */
    uint32_t slr; /* Offset of Pin SlewRate in GRF */
    uint32_t smt; /* Offset of Pin Schmitt in GRF */
    uint32_t pul; /* Offset of Pin Pull in GRF */
    uint32_t drv; /* Offset of Pin Drive Capacity in GRF */
};

struct GPIO_DESC {
    uint32_t base;
    uint32_t irqn;
    char *name;
    void *handler;
    struct GPIO_PIN_OFFSET offset;
};

struct HAL_GPIO_DEV {
    uint32_t cnt;
    struct GPIO_DESC desc[GPIO_PORT_NUM];
    struct GPIO_PIN_INFO muxInfo;
    struct GPIO_PIN_INFO pulInfo;
    struct GPIO_PIN_INFO smtInfo;
    struct GPIO_PIN_INFO drvInfo;
    struct GPIO_PIN_INFO slrInfo;
};

/**
  * @}
  */

/***************************** Function Declare ******************************/
eGPIO_PinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
eGPIO_PinLevel HAL_GPIO_GetPinData(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinLevel level);
HAL_Status HAL_GPIO_SetIOMUX(struct GPIO_REG *GPIOx, uint32_t pin, uint32_t func);
HAL_Status HAL_GPIO_Init(struct GPIO_REG *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_EnableIRQ(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
void HAL_GPIO_DisableIRQ(struct GPIO_REG *GPIOx, eGPIO_PinNum pin);
void HAL_GPIO_Probe(const struct HAL_GPIO_DEV GPIO_Dev);
void HAL_GPIOn_IRQCallback(uint32_t port, uint32_t pin);
void HAL_GPIOn_IRQHandler(uint32_t port);
void HAL_GPIO0_IRQHandler(void);
void HAL_GPIO1_IRQHandler(void);
void HAL_GPIO2_IRQHandler(void);
void HAL_GPIO3_IRQHandler(void);
void HAL_GPIO4_IRQHandler(void);
void HAL_GPIO5_IRQHandler(void);
void HAL_GPIO6_IRQHandler(void);
void HAL_GPIO7_IRQHandler(void);
struct GPIO_REG *HAL_GPIO_GetBase(uint32_t port);

#endif

/**
  * @}
  */

/**
  * @}
  */
