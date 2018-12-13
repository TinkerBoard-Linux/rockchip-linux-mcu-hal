/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_uart.h
 */

#ifndef _HAL_UART_H_
#define _HAL_UART_H_

#include "hal_def.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/***************************** MACRO Definition ******************************/

/** @defgroup UART UART
 *  UART Driver
 *  @{
 */

typedef enum UART_DEV {
    UART_DEV0,
    UART_DEV1,
    UART_DEV2,
    UART_DEV3,
    UART_DEV4,
    UART_DEV5,

    UART_DEV_MAX
} eUART_DEV;

typedef enum UART_CH { UART_CHA, UART_CHB, UART_CHC, UART_CH_MAX } eUART_CH;

typedef enum UART_BaudRate {
    UART_BR_110 = 110,
    UART_BR_300 = 300,
    UART_BR_600 = 600,
    UART_BR_1200 = 1200,
    UART_BR_2400 = 2400,
    UART_BR_4800 = 4800,
    UART_BR_9600 = 9600,
    UART_BR_14400 = 14400,
    UART_BR_19200 = 19200,
    UART_BR_38400 = 38400,
    UART_BR_57600 = 57600,
    UART_BR_115200 = 115200,
    UART_BR_230400 = 230400,
    UART_BR_380400 = 380400,
    UART_BR_460800 = 460800,
    UART_BR_921600 = 921600
} eUART_BaudRate;

typedef enum UART_dataLen {
    UART_DATA_5B = 5,
    UART_DATA_6B,
    UART_DATA_7B,
    UART_DATA_8B
} eUART_dataLen;

typedef enum UART_stopBit {
    UART_ONE_STOPBIT,
    UART_ONE_AND_HALF_OR_TWO_STOPBIT
} eUART_stopBit;

typedef enum UART_parity_en {
    UART_ODD_PARITY,
    UART_EVEN_PARITY,
    UART_PARITY_DISABLE
} eUART_parityEn;

/**
 * @brief UART initialization parameters
 */
typedef enum _UART_INT_TYPE {
    UART_INT_READ_FIFO_NOT_EMPTY = 2,
    UART_INT_WRITE_FIFO_EMPTY = 4,
    UART_INT_UART_ERR = 8,
    UART_INT_NUM

} UART_INT_TYPE,
    *P_UART_INT_TYPE;

/***************************** Structure Definition **************************/

/** @} */

/***************************** Function Declare ******************************/

void HAL_UART_SetIntEnabled(eUART_CH uartPort, uint32_t uartIntNumb);
void HAL_UART_SetIntDisabled(eUART_CH uartPort, uint32_t uartIntNumb);
int HAL_UART_WriteByte(eUART_CH uartPort, uint8_t *pdata, uint32_t cnt);
int HAL_UART_WriteByte(eUART_CH uartPort, uint8_t *pdata, uint32_t cnt);
int HAL_UART_ReadByte(eUART_CH uartPort, uint8_t *pdata, uint32_t cnt);
HAL_Status HAL_UART_Init(eUART_CH uartPort, eUART_BaudRate baudRate,
                         eUART_dataLen dataBit, eUART_stopBit stopBit,
                         eUART_parityEn parity);
uint32_t HAL_UART_GetIntType(eUART_CH uartPort);
uint32_t HAL_UART_GetCTSState(eUART_CH uartPort);
void HAL_UART_EnableAutoFlowControl(eUART_CH uartPort);

#endif

/** @} */
