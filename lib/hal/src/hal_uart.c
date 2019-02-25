/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup UART
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The UART driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_UART_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
/********************* Private Structure Definition **************************/
/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
static void UART_Reset(struct UART_REG *pReg)
{
    pReg->UART_SRR = UART_SRR_UR | UART_SRR_RFR | UART_SRR_XFR;
    pReg->UART_IER = 0;
    pReg->UART_DMASA = 1;
}

static void UART_EnableDLAB(struct UART_REG *pReg)
{
    pReg->UART_LCR |= UART_LCR_DLAB;
}

static void UART_DisableDLAB(struct UART_REG *pReg)
{
    pReg->UART_LCR &= ~(UART_LCR_DLAB);
}

static int32_t UART_SetBaudRate(struct UART_REG *pReg, uint32_t clk,
                                uint32_t baudRate)
{
    uint32_t DivLatch;

    DivLatch = clk / MODE_X_DIV / baudRate;

    pReg->UART_MCR |= UART_MCR_LOOP;
    UART_EnableDLAB(pReg);

    pReg->UART_DLL = DivLatch & 0xff;
    pReg->UART_DLH = (DivLatch >> 8) & 0xff;

    UART_DisableDLAB(pReg);
    pReg->UART_MCR &= ~(UART_MCR_LOOP);

    return (0);
}

static int32_t UART_SetLcrReg(struct UART_REG *pReg, uint8_t byteSize,
                              uint8_t parity, uint8_t stopBits)
{
    uint32_t lcr = 0;
    int32_t bRet = 0;

    switch (byteSize) {
    case UART_DATA_5B:
        lcr |= UART_LCR_WLEN5;
        break;
    case UART_DATA_6B:
        lcr |= UART_LCR_WLEN6;
        break;
    case UART_DATA_7B:
        lcr |= UART_LCR_WLEN7;
        break;
    case UART_DATA_8B:
        lcr |= UART_LCR_WLEN8;
        break;
    default:
        bRet = -1;
        break;
    }

    switch (parity) {
    case UART_ODD_PARITY:
    case UART_EVEN_PARITY:
        lcr |= UART_LCR_PARITY;
        lcr |= ((parity) << 4);
        break;
    case UART_PARITY_DISABLE:
        lcr &= ~UART_LCR_PARITY;
        break;
    default:
        bRet = -1;
        break;
    }

    if (stopBits == UART_ONE_AND_HALF_OR_TWO_STOPBIT)
        lcr |= UART_LCR_STOP;

    pReg->UART_LCR = lcr;
    return (bRet);
}

/********************* Public Function Definition ****************************/

/** @defgroup UART_Exported_Functions_Group1 control uart Functions
 @verbatim

 ===============================================================================
             #### control uart functions ####
 ===============================================================================
 This section provides functions allowing to control uart:

 @endverbatim
 *  @{
 */
/**
  * @brief  enable uart sub interrupt
  * @param  pReg: uart reg base
  * @param  uartIntNumb: uart irq num, such as UART_IER_RDI
  * @return none
  */
void HAL_UART_EnableIrq(struct UART_REG *pReg, uint32_t uartIntNumb)
{
    pReg->UART_IER |= uartIntNumb;
}

/**
  * @brief  disable uart sub interrupt
  * @param  pReg: uart reg base
  * @param  uartIntNumb: uart irq num, such as UART_IER_RDI
  * @return none
  */
void HAL_UART_DisableIrq(struct UART_REG *pReg, uint32_t uartIntNumb)
{
    pReg->UART_IER &= ~uartIntNumb;
}

/**
  * @brief  enable uart loop back mode
  * @param  pReg: uart reg base
  * @return none
  */
void HAL_UART_EnableLoopback(struct UART_REG *pReg)
{
    pReg->UART_MCR |= UART_MCR_LOOP;
}

/**
  * @brief  disable uart loop back mode
  * @param  pReg: uart reg base
  * @return none
  */
void HAL_UART_DisableLoopback(struct UART_REG *pReg)
{
    pReg->UART_MCR &= ~(UART_MCR_LOOP);
}

/**
  * @brief  enable uart hardware auto flow control
  * @param  pReg: uart reg base
  * @return none
  */
void HAL_UART_EnableAutoFlowControl(struct UART_REG *pReg)
{
    pReg->UART_MCR = UART_MCR_AFE | 0X02;
}

/**
  * @brief  disable uart hardware auto flow control
  * @param  pReg: uart reg base
  * @return none
  */
void HAL_UART_DisableAutoFlowControl(struct UART_REG *pReg)
{
    pReg->UART_MCR &= ~UART_MCR_AFE;
}

/** @} */

/** @defgroup UART_Exported_Functions_Group2 get uart status Functions
 @verbatim

 ===============================================================================
             #### get uart status functions ####
 ===============================================================================
 This section provides functions allowing to get uart status:

 @endverbatim
 *  @{
 */

/**
  * @brief  get uart sub interrupt number
  * @param  pReg: uart reg base
  * @return irq number like UART_IIR_RDI
  */
uint32_t HAL_UART_GetIrqID(struct UART_REG *pReg)
{
    return (pReg->UART_IIR & UART_IIR_MASK);
}

/**
  * @brief  get uart sub interrupt number
  * @param  pReg: uart reg base
  * @return line status
  */
uint32_t HAL_UART_GetLsr(struct UART_REG *pReg)
{
    return pReg->UART_LSR;
}

/**
  * @brief  get uart status
  * @param  pReg: uart reg base
  * @return uart status
  */
uint32_t HAL_UART_GetUsr(struct UART_REG *pReg)
{
    return pReg->UART_USR;
}

/**
  * @brief  get uart modem status
  * @param  pReg: uart reg base
  * @return uart modem status
  */
uint32_t HAL_UART_GetMsr(struct UART_REG *pReg)
{
    return pReg->UART_MSR;
}

/** @} */

/** @defgroup UART_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */
/**
  * @brief  send one character
  * @param  pReg: uart reg base
  * @param  c: the character to be sent
  * @return none
  */
void HAL_UART_SerialOutChar(struct UART_REG *pReg, uint8_t c)
{
    pReg->UART_THR = c;
}

/**
  * @brief  send many characters
  * @param  pReg: uart reg base
  * @param  pdata: characters buffer
  * @param  cnt: the number of characters
  * @return dwRealSize the number has been sent
  */
int HAL_UART_SerialOut(struct UART_REG *pReg, uint8_t *pdata, uint32_t cnt)
{
    int dwRealSize = 0;

    while (cnt--) {
        if (!(pReg->UART_USR & UART_USR_TX_FIFO_NOT_FULL)) {
            break;
        }

        pReg->UART_THR = *pdata++;
        dwRealSize++;
    }

    return dwRealSize;
}

/**
  * @brief  receive many characters
  * @param  pReg: uart reg base
  * @param  pdata: characters buffer
  * @param  cnt: the number of characters
  * @return dwRealSize the number has been received
  */
int HAL_UART_SerialIn(struct UART_REG *pReg, uint8_t *pdata, uint32_t cnt)
{
    int dwRealSize = 0;

    while (cnt--) {
        if (!(pReg->UART_USR & UART_USR_RX_FIFO_NOT_EMPTY)) {
            break;
        }

        *pdata++ = (uint8_t)pReg->UART_RBR;
        dwRealSize++;
    }
    return dwRealSize;
}

/** @} */

/** @defgroup UART_Exported_Functions_Group4 interrupt Functions
 @verbatim

 ===============================================================================
             #### interrupt functions ####
 ===============================================================================
 This section provides functions allowing to handler interrupt:

 @endverbatim
 *  @{
 */
/**
  * @brief  low level irq handler, for msi, busy, rlsi
  * @param  pReg: uart reg base
  * @return HAL_OK for reserve
  */
HAL_Status HAL_UART_HandleIrq(struct UART_REG *pReg)
{
    int iir = 0;

    iir = HAL_UART_GetIrqID(pReg);

    /* Handle the three sub interrupts, so the upper irq handler needn't handle those */
    switch (iir) {
    case UART_IIR_MSI:
        HAL_UART_GetMsr(pReg); /* clear MSI only */
        break;
    case UART_IIR_BUSY:
        HAL_UART_GetUsr(pReg); /* clear BUSY interrupt only */
        break;
    case UART_IIR_RLSI:
        HAL_UART_GetMsr(pReg); /* clear RLSI interrupt only */
        break;
    case UART_IIR_NO_INT:
        break;
    }

    return HAL_OK;
}

/** @} */

/** @defgroup UART_Exported_Functions_Group5 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */
/**
  * @brief  configure uart baudrate,data bit,stop bit and so on
  * @param  pReg: uart reg base
  * @param  baudRate: like UART_BR_115200
  * @param  dataBit: like UART_DATA_8B
  * @param  stopBit: like UART_ONE_STOPBIT
  * @param  parity: like UART_PARITY_DISABLE
  * @return HAL_OK for reserve
  */
HAL_Status HAL_UART_Init(struct UART_REG *pReg, eUART_BaudRate baudRate,
                         eUART_dataLen dataBit, eUART_stopBit stopBit,
                         eUART_parityEn parity)
{
    UART_Reset(pReg);
    pReg->UART_FCR =
        UART_FCR_ENABLE_FIFO | UART_FCR_R_TRIG_10 | UART_FCR_T_TRIG_10;
    UART_SetLcrReg(pReg, dataBit, parity, stopBit);
    UART_SetBaudRate(pReg, 24000000, baudRate);
    return HAL_OK;
}

/**
  * @brief  disable uart by resetting it
  * @param  pReg: uart reg base
  * @return HAL_OK for reserve
  */
HAL_Status HAL_UART_DeInit(struct UART_REG *pReg)
{
    UART_Reset(pReg);
    return HAL_OK;
}

/** @} */

/** @defgroup UART_Exported_Functions_Group6 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 @endverbatim
 *  @{
 */
/**
  * @brief  suspend uart
  * @param  pReg: uart reg base
  * @return HAL_OK for reserve
  */
HAL_Status HAL_UART_Suspend(struct UART_REG *pReg)
{
    /* ...to do */
    return HAL_OK;
}

/**
  * @brief  resume uart
  * @param  pReg: uart reg base
  * @return HAL_OK for reserve
  */
HAL_Status HAL_UART_Resume(struct UART_REG *pReg)
{
    /* ...to do */
    return HAL_OK;
}
/** @} */

#endif

/** @} */

/** @} */
