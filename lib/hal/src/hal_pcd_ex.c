/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PCDEx
 *  @brief USB PCD Extended HAL module driver
 *  @{
 */

/** @defgroup PCDEx_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PCD Extended HAL driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PCD_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
/********************* Private Structure Definition **************************/
/********************* Private Variable Definition ***************************/
/********************* Private Function Definition ***************************/
/********************* Public Function Definition ****************************/
/** @defgroup PCDEx_Exported_Functions_Group5 Other Function
 *  @{
 */

/**
 * @brief  Set Tx FIFO
 * @param  pPCD PCD handle
 * @param  fifo The number of Tx fifo
 * @param  size Fifo size
 * @return HAL status
 */
HAL_Status HAL_PCDEx_SetTxFiFo(struct PCD_HANDLE *pPCD, uint8_t fifo, uint16_t size)
{
    uint8_t i = 0;
    uint32_t txOffset = 0;

    /*
     * TXn min size = 16 words. (n  : Transmit FIFO index)
     * When a TxFIFO is not used, the Configuration should be as follows:
     *     case 1 :  n > m    and Txn is not used    (n,m  : Transmit FIFO indexes)
     *     --> Txm can use the space allocated for Txn.
     *     case2  :  n < m    and Txn is not used    (n,m  : Transmit FIFO indexes)
     *     --> Txn should be configured with the minimum space of 16 words
     * The FIFO is used optimally when used TxFIFOs are allocated in the top
     * of the FIFO.Ex: use EP1 and EP2 as IN instead of EP1 and EP3 as IN ones.
     * When DMA is used 3n * FIFO locations should be reserved for internal DMA registers
     */
    txOffset = pPCD->pReg->GRXFSIZ;

    if (fifo == 0) {
        pPCD->pReg->DIEPTXF0_HNPTXFSIZ = (uint32_t)(((uint32_t)size << 16) | txOffset);
    } else {
        txOffset += (pPCD->pReg->DIEPTXF0_HNPTXFSIZ) >> 16;
        for (i = 0; i < (fifo - 1); i++)
            txOffset += (pPCD->pReg->DIEPTXF[i] >> 16);

        /* Multiply Tx_Size by 2 to get higher performance */
        pPCD->pReg->DIEPTXF[fifo - 1] = (uint32_t)(((uint32_t)size << 16) | txOffset);
    }

    return HAL_OK;
}

/**
 * @brief  Set Rx FIFO
 * @param  pPCD PCD handle
 * @param  size Size of Rx fifo
 * @return HAL status
 */
HAL_Status HAL_PCDEx_SetRxFiFo(struct PCD_HANDLE *pPCD, uint16_t size)
{
    pPCD->pReg->GRXFSIZ = size;

    return HAL_OK;
}

/**
 * @brief  Activate LPM Feature
 * @param  pPCD PCD handle
 * @return HAL status
 */
HAL_Status HAL_PCDEx_ActivateLPM(struct PCD_HANDLE *pPCD)
{
    struct USB_GLOBAL_REG *pUSB = pPCD->pReg;

    pPCD->lpmState = LPM_L0;
    pUSB->GINTMSK |= USB_OTG_GINTMSK_LPMINTM;
    pUSB->GLPMCFG |= (USB_OTG_GLPMCFG_LPMEN | USB_OTG_GLPMCFG_LPMACK | USB_OTG_GLPMCFG_ENBESL);

    return HAL_OK;
}

/**
 * @brief  DeActivate LPM feature.
 * @param  pPCD PCD handle
 * @return HAL status
 */
HAL_Status HAL_PCDEx_DeActivateLPM(struct PCD_HANDLE *pPCD)
{
    struct USB_GLOBAL_REG *pUSB = pPCD->pReg;

    pUSB->GINTMSK &= ~USB_OTG_GINTMSK_LPMINTM;
    pUSB->GLPMCFG &= ~(USB_OTG_GLPMCFG_LPMEN | USB_OTG_GLPMCFG_LPMACK | USB_OTG_GLPMCFG_ENBESL);

    return HAL_OK;
}

/**
 * @brief  Send LPM message to user layer callback.
 * @param  pPCD PCD handle
 * @param  msg LPM message
 * @return None
 */
__WEAK void HAL_PCDEx_LPM_Callback(struct PCD_HANDLE *pPCD, ePCD_lpmMsg msg)
{
    /*
     * NOTE : This function Should not be modified, when the callback is needed,
     *        the HAL_PCDEx_LPM_Callback could be implemented in the user file
     */
}

/** @} */

#endif /* HAL_PCD_MODULE_ENABLED */

/** @} */

/** @} */
