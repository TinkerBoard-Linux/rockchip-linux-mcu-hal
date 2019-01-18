/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup SFC
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The SFC driver can be used as follows:

 (#) DMA mode: Register handler(HAL_SFC_IRQHandler).
 (#) DMA mode: Unmask TRANSM interrupt(HAL_SFC_UnMaskTransmInterrupt).
 (#) Initialize SFC controller(HAL_SFC_Init);
 (#) Send SFC request:
 	(##) Normal mode: (SFC_Request);
 	(##) DMA mode: (SFC_Request_DMA);
 (#) DMA mode: Handling interrupt return in DMA mode SFC request:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_SFC_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/* SFC_CTRL */
#define SFC_CTRL_SHIFTPHASE_NEGEDGE (1 << SFC_CTRL_SHIFTPHASE_SHIFT)

/* SFC_RCVR */
#define SFC_RCVR_RCVR_RESET \
    (1 << SFC_RCVR_RCVR_SHIFT) /* Recover The SFC State Machine */

/* SFC_ISR */
#define SFC_ISR_DMAS_ACTIVE \
    (1 << SFC_ISR_DMAS_SHIFT) /* DMA Finish Interrupt Active */
#define SFC_ISR_NSPIS_ACTIVE \
    (1 << SFC_ISR_NSPIS_SHIFT) /* SPI Error Interrupt Active */
#define SFC_ISR_AHBS_ACTIVE \
    (1 << SFC_ISR_AHBS_SHIFT) /* AHB Error Interrupt Active */
#define SFC_ISR_TRANSS_ACTIVE \
    (1 << SFC_ISR_TRANSS_SHIFT) /* Transfer finish Interrupt Active */
#define SFC_ISR_TXES_ACTIVE \
    (1 << SFC_ISR_TXES_SHIFT) /* Transmit FIFO Empty Interrupt Active */
#define SFC_ISR_TXOS_ACTIVE \
    (1 << SFC_ISR_TXOS_SHIFT) /* Transmit FIFO Overflow Interrupt Active */
#define SFC_ISR_RXUS_ACTIVE \
    (1 << SFC_ISR_RXUS_SHIFT) /* Receive FIFO Underflow Interrupt Active */
#define SFC_ISR_RXFS_ACTIVE \
    (1 << SFC_ISR_RXFS_SHIFT) /* Receive FIFO Full Interrupt Active */

/* SFC_FSR */
#define SFC_FSR_RXFS_EMPTY (1 << SFC_FSR_RXFS_SHIFT) /* Receive FIFO Full */
#define SFC_FSR_RXES_EMPTY (1 << SFC_FSR_RXES_SHIFT) /* Receive FIFO Empty */
#define SFC_FSR_TXFS_FULL (1 << SFC_FSR_TXFS_SHIFT) /* Transmit FIFO Full */
#define SFC_FSR_TXES_EMPTY (1 << SFC_FSR_TXES_SHIFT) /* Transmit FIFO Empty */

/* SFC_SR */
#define SFC_SR_SR_BUSY \
    (1 << SFC_SR_SR_SHIFT) /* When busy, don¡¯t set the control register. */

/* SFC_DMATR */
#define SFC_DMATR_DMATR_START \
    (1 << SFC_DMATR_DMATR_SHIFT) /* Write 1 to start the dma transfer. */

/* SFC_RISR */
#define SFC_RISR_TRANSS_ACTIVE (1 << SFC_RISR_TRANSS_SHIFT)

/********************* Private Structure Definition **************************/

typedef union
{
    uint32_t d32;
    struct
    {
        unsigned txempty : 1; /* tx fifo empty */
        unsigned txfull : 1; /* tx fifo full */
        unsigned rxempty : 1; /* rx fifo empty */
        unsigned rxfull : 1; /* tx fifo empty interrupt mask */
        unsigned reserved7_4 : 4;
        unsigned txlevel : 5; /* tx fifo: 0: full; 1: left 1 entry; ... */
        unsigned reserved15_13 : 3;
        unsigned rxlevel : 5; /* rx fifo: 0: full; 1: left 1 entry; ... */
        unsigned reserved31_21 : 11;
    } b;
} SFCFSR_DATA;

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static void SFC_Reset(void)
{
    int32_t timeout = 10000;

    pSFC->RCVR = SFC_RCVR_RCVR_RESET;
    while ((pSFC->RCVR == SFC_RCVR_RCVR_RESET) && (timeout > 0)) {
        HAL_DelayUs(1);
        timeout--;
    }
    pSFC->ICLR = 0xFFFFFFFF;
}

/********************* Public Function Definition ****************************/

/** @defgroup SFC_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 (#) Operate in blocking mode (DMA IT) using HAL_SFC_Request_DMA();
 (#) Operate in blocking mode (Normal) using HAL_SFC_Request();

 @endverbatim
 *  @{
 */

/**
 * @brief  Configuration Register Transfer Flash Protocol in normal mode.
 * @param  sfcmd: SFC_CMD set.
 * @param  sfctrl: SFC_CTRL set.
 * @param  addr: flash device address.
 * @param  data: data ram address.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_Request(uint32_t sfcmd, uint32_t sfctrl, uint32_t addr,
                           void *data)
{
    int32_t ret = HAL_OK;
    SFCCMD_DATA cmd;
    SFCCTRL_DATA ctrl;
    __IO SFCFSR_DATA fifostat;
    int32_t timeout = 0;
    uint32_t i, words;
    uint32_t *pData = (uint32_t *)data;

    cmd.d32 = sfcmd;
    ctrl.d32 = sfctrl;

    if (!(pSFC->FSR & SFC_FSR_TXES_EMPTY) ||
        !(pSFC->FSR & SFC_FSR_RXES_EMPTY) || (pSFC->SR & SFC_SR_SR_BUSY))
        SFC_Reset();

    if (cmd.b.addrbits == SFC_ADDR_XBITS) {
        if (!ctrl.b.addrbits)
            return HAL_INVAL;
        pSFC->ABIT = ctrl.b.addrbits - 1; /* add 1 inside the controller */
    }

    ctrl.d32 |= SFC_CTRL_SHIFTPHASE_NEGEDGE;
    pSFC->CTRL = ctrl.d32;
    pSFC->CMD = cmd.d32;
    if (cmd.b.addrbits)
        pSFC->ADDR = addr;

    if (cmd.b.datasize) {
        if (cmd.b.rw == SFC_WRITE) {
            words = (cmd.b.datasize + 3) >> 2;
            while (words) {
                fifostat.d32 = pSFC->FSR;
                if (fifostat.b.txlevel > 0) {
                    uint32_t count = HAL_MIN(words, fifostat.b.txlevel);

                    for (i = 0; i < count; i++) {
                        pSFC->DATA = *pData++;
                        words--;
                    }
                    if (words == 0)
                        break;
                    timeout = 0;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }
        } else {
            uint32_t bytes = cmd.b.datasize & 0x3;

            words = cmd.b.datasize >> 2;
            while (words) {
                fifostat.d32 = pSFC->FSR;
                if (fifostat.b.rxlevel > 0) {
                    uint32_t count = HAL_MIN(words, fifostat.b.rxlevel);

                    for (i = 0; i < count; i++) {
                        *pData++ = pSFC->DATA;
                        words--;
                    }
                    if (0 == words)
                        break;
                    timeout = 0;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }

            timeout = 0;
            while (bytes) {
                fifostat.d32 = pSFC->FSR;
                if (fifostat.b.rxlevel > 0) {
                    uint8_t *pData1 = (uint8_t *)pData;
                    words = pSFC->DATA;
                    for (i = 0; i < bytes; i++)
                        pData1[i] = (uint8_t)((words >> (i * 8)) & 0xFF);
                    break;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }
        }
    }

    timeout = 0; /*wait cmd or data send complete*/
    while (pSFC->SR & SFC_SR_SR_BUSY) {
        HAL_DelayUs(1);
        if (timeout++ > 100000) { /*wait 100ms*/
            ret = HAL_TIMEOUT;
            break;
        }
    }
    HAL_DelayUs(1); //CS# High Time (read/write) >100ns

    return ret;
}

/**
 * @brief  Configuration Register Transfer Flash Protocol in DMA mode.
 * @param  sfcmd: SFC_CMD set.
 * @param  sfctrl: SFC_CTRL set.
 * @param  addr: flash device address.
 * @param  data: data ram address.
 * @return HAL_Status.
 * Only use for data transmission cmd
 */
HAL_Status HAL_SFC_Request_DMA(uint32_t sfcmd, uint32_t sfctrl, uint32_t addr,
                               void *data)
{
    int32_t ret = HAL_OK;
    SFCCMD_DATA cmd;
    SFCCTRL_DATA ctrl;
    int32_t timeout = 0;

    cmd.d32 = sfcmd;
    ctrl.d32 = sfctrl;

    if (!(pSFC->FSR & SFC_FSR_TXES_EMPTY) ||
        !(pSFC->FSR & SFC_FSR_RXES_EMPTY) || (pSFC->SR & SFC_SR_SR_BUSY))
        SFC_Reset();

    if (cmd.b.addrbits == SFC_ADDR_XBITS) {
        if (!ctrl.b.addrbits)
            return HAL_INVAL;
        pSFC->ABIT = ctrl.b.addrbits - 1; /* add 1 inside the controller */
    }

    ctrl.d32 |= SFC_CTRL_SHIFTPHASE_NEGEDGE;
    pSFC->CTRL = ctrl.d32;
    pSFC->CMD = cmd.d32;
    if (cmd.b.addrbits)
        pSFC->ADDR = addr;

    if (cmd.b.datasize) {
        pSFC->ICLR = 0xFFFFFFFF;
        pSFC->DMAADDR = (uint32_t)data;
        pSFC->DMATR = SFC_DMATR_DMATR_START;
        timeout = cmd.b.datasize * 10;
    }

    return ret;
}

/** @} */

/** @defgroup SFC_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Init SFC.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_Init(void)
{
    SFC_Reset();
    pSFC->CTRL = 0;
    HAL_DBG("SFC vertion %x\n", HAL_SFC_GetCtrlVertion());

    return HAL_OK;
}

/**
 * @brief  Deinit SFC.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_Deinit(void)
{
    /* TBD */

    return HAL_OK;
}

/** @} */

/** @defgroup SFC_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Get SFC version.
 * @return uint16_t: SFC version
 */
uint16_t HAL_SFC_GetCtrlVertion(void)
{
    return (uint16_t)(pSFC->VER && SFC_VER_VER_MASK);
}

/**
 * @brief  Mask internal data transmission finish interrupt.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_MaskTransmInterrupt(void)
{
    SET_BIT(pSFC->IMR, SFC_IMR_TRANSM_MASK);

    return HAL_OK;
}

/**
 * @brief  Unmask internal data transmission finish interrupt.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_UnMaskTransmInterrupt(void)
{
    CLEAR_BIT(pSFC->IMR, SFC_IMR_TRANSM_MASK);

    return HAL_OK;
}

/**
 * @brief  Check internal data transmission finish interrupt.
 * @return HAL_Check.
 */
HAL_Check HAL_SFC_IsTransmInterrupt(void)
{
    return (HAL_Check)HAL_IS_BIT_SET(pSFC->ISR, SFC_ISR_TRANSS_ACTIVE);
}

/**
 * @brief  Clear internal data transmission finish interrupt.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_ClearTransmInterrupt(void)
{
    pSFC->ICLR = 0xFFFFFFFF;

    return HAL_OK;
}

/**
 * @brief  SFC interrupt handler.
 * @return HAL_Status.
 */
__weak HAL_Status HAL_SFC_IRQHandler(void)
{
    HAL_ASSERT(HAL_SFC_IsTransmInterrupt()); /* Only support TRANSM IT */
    HAL_SFC_ClearTransmInterrupt();

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
