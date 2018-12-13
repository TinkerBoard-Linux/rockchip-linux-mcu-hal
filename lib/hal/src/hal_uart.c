/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_uart.c
 */

#include "hal_base.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

#ifdef HAL_UART_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define UART_PORT(n) ((struct UART_REG *)(UART_GROUP[n]))

/********************* Private Structure Definition **************************/

static const uint32_t UART_GROUP[6] = {
    UART0_BASE, UART1_BASE, UART2_BASE, UART3_BASE, UART4_BASE, UART5_BASE,
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static void UART_Rest(eUART_CH uartPort)
{
    struct UART_REG *pReg = UART_PORT(uartPort);
    pReg->UART_SRR = UART_RESET | RCVR_FIFO_REST | XMIT_FIFO_RESET;
    pReg->UART_IER = 0;
    pReg->UART_DMASA = 1;
}

static int32_t UART_SetBaudRate(eUART_CH uartPort, uint32_t clk,
                                uint32_t baudRate)
{
    uint32_t DivLatch;
    struct UART_REG *pReg = UART_PORT(uartPort);

    DivLatch = clk / MODE_X_DIV / baudRate;

    pReg->UART_LCR |= LCR_DLA_EN;

    pReg->UART_DLL = (DivLatch >> 0) & 0xff;
    pReg->UART_DLH = (DivLatch >> 8) & 0xff;

    pReg->UART_LCR &= (~LCR_DLA_EN);

    return (0);
}

static int32_t UART_SetLcrReg(eUART_CH uartPort, uint8_t byteSize,
                              uint8_t parity, uint8_t stopBits)
{
    uint32_t lcr;
    int32_t bRet = 0;

    struct UART_REG *pReg = UART_PORT(uartPort);
    lcr = (pReg->UART_LCR) & (~(uint32_t)(UART_DATABIT_MASK));

    switch (byteSize) {
    case UART_DATA_5B:
        lcr |= LCR_WLS_5;
        break;
    case UART_DATA_6B:
        lcr |= LCR_WLS_6;
        break;
    case UART_DATA_7B:
        lcr |= LCR_WLS_7;
        break;
    case UART_DATA_8B:
        lcr |= LCR_WLS_8;
        break;
    default:
        bRet = -1;
        break;
    }

    //Parity set
    switch (parity) {
    case UART_ODD_PARITY:
    case UART_EVEN_PARITY:
        lcr |= PARITY_ENABLED;
        lcr |= ((parity) << 4);
        break;
    case UART_PARITY_DISABLE:
        lcr &= ~PARITY_ENABLED;
        break;
    default:
        bRet = -1;
        break;
    }

    //StopBits set
    switch (stopBits) {
    case 0:
        lcr |= ONE_STOP_BIT;
        break;
    case 1:
        lcr |= ONE_HALF_OR_TWO_BIT;
        break;
    default:
        bRet = -1;
        break;
    }

    if (bRet == 0) {
        pReg->UART_LCR = lcr;
    }

    return (bRet);
}

static void UART_SetFifoEnabledNumb(eUART_CH uartPort, uint32_t param)
{
    struct UART_REG *pReg = UART_PORT(uartPort);

    pReg->UART_SFE = (param & 0x01);
    pReg->UART_SRT = (param >> 1) & 0x03;
    pReg->UART_STET = (param >> 3) & 0x03;
}

/********************* Public Function Definition ****************************/

/** @defgroup UART UART
 *  UART Driver
 *  @{
 */

/**
  * @brief  UART enable interrupt
  * @param  uartPort: uart port
  * @param  uartIntNumb: uart irq num
  * @return HAL_Status
  */
void HAL_UART_SetIntEnabled(eUART_CH uartPort, uint32_t uartIntNumb)
{
    struct UART_REG *pReg = UART_PORT(uartPort);

    pReg->UART_IER |= uartIntNumb;
}

void HAL_UART_SetIntDisabled(eUART_CH uartPort, uint32_t uartIntNumb)
{
    struct UART_REG *pReg = UART_PORT(uartPort);

    pReg->UART_IER &= (~uartIntNumb);
}

int HAL_UART_WriteByte(eUART_CH uartPort, uint8_t *pdata, uint32_t cnt)
{
    int dwRealSize;
    struct UART_REG *pReg = UART_PORT(uartPort);

    dwRealSize = 0;
    while (cnt--) {
        if (!(pReg->UART_USR & UART_TRANSMIT_FIFO_NOT_FULL)) {
            break;
        }

        pReg->UART_THR = *pdata++;
        dwRealSize++;
    }

    return dwRealSize;
}

int HAL_UART_ReadByte(eUART_CH uartPort, uint8_t *pdata, uint32_t cnt)
{
    int dwRealSize;
    struct UART_REG *pReg = UART_PORT(uartPort);

    dwRealSize = 0;

    while (cnt--) {
        if (!(pReg->UART_USR & UART_RECEIVE_FIFO_NOT_EMPTY)) {
            break;
        }

        *pdata++ = (uint8_t)pReg->UART_RBR;
        dwRealSize++;
    }
    return dwRealSize;
}

HAL_Status HAL_UART_Init(eUART_CH uartPort, eUART_BaudRate baudRate,
                         eUART_dataLen dataBit, eUART_stopBit stopBit,
                         eUART_parityEn parity)
{
    struct UART_REG *pReg = UART_PORT(uartPort);

    UART_Rest(uartPort);

    UART_SetFifoEnabledNumb(uartPort, SHADOW_FIFI_ENABLED | RCVR_TRIGGER_ONE |
                                          TX_TRIGGER_EMPTY);

    UART_SetLcrReg(uartPort, dataBit, parity, stopBit);

    UART_SetBaudRate(uartPort, 24 * 1000 * 1000, baudRate);
    pReg->UART_SRR = RCVR_FIFO_REST | XMIT_FIFO_RESET;

    return HAL_OK;
}

uint32_t HAL_UART_GetIntType(eUART_CH uartPort)
{
    uint32_t dwUartIntStaus;
    uint32_t event;
    struct UART_REG *pReg = UART_PORT(uartPort);

    dwUartIntStaus = pReg->UART_IIR & UART_IF_MASK;
    event = 0;

    if (dwUartIntStaus == UART_IF_REC_DATA) {
        event |= UART_INT_READ_FIFO_NOT_EMPTY;
    } else if (dwUartIntStaus == UART_IF_THR_EMPTY) {
        event |= UART_INT_WRITE_FIFO_EMPTY;
    } else if (dwUartIntStaus == UART_IF_C_TIMEOUT) {
        event |= UART_INT_READ_FIFO_NOT_EMPTY;
    } else {
        if (dwUartIntStaus != 0x01) {
            printf("\n uart err = %x = %x", pReg->UART_LSR, dwUartIntStaus);
        }
    }

    return event;
}

void HAL_UART_EnableAutoFlowControl(eUART_CH uartPort)
{
    struct UART_REG *pReg;
    pReg = UART_PORT(uartPort);
    pReg->UART_MCR = AUTO_FLOW_ENSABLED | 0X02;
}

uint32_t HAL_UART_GetCTSState(eUART_CH uartPort)
{
    struct UART_REG *pReg;
    uint32_t cts_status;

    pReg = UART_PORT(uartPort);
    cts_status = pReg->UART_MSR & (1 << 4);

    return cts_status;
}

/** @} */

#endif

/** @} */
