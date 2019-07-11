/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SPI2APB
 *  @{
 */

/** @defgroup SPI2APB_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The SPI2APB driver can be used as follows:

 (#) Invoke HAL_SPI2APB_Configurate to configurate it.
 (#) Invoke HAL_SPI2APB_ReadStatus to query status.
 (#) Invoke HAL_SPI2APB_UnmaskIrq to mask/unmask irq.
 (#) Invoke HAL_SPI2APB_CleanIrq to clean irq.
 (#) Invoke HAL_SPI2APB_ReadReg0 to read reg0.
 (#) Invoke HAL_SPI2APB_ReadReg1 to read reg1.
 (#) Invoke HAL_SPI2APB_WriteReg2 to write value into reg2.

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_SPI2APB_MODULE_ENABLED

/** @defgroup SPI2APB_Exported_Definition_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
 * @brief SPI2APB Configuration
 * @param pReg: pointer to a SPI2APB register base.
 * @param ctrl: configuration for SPI2APB.
 * @return HAL_Status
 */
HAL_Status HAL_SPI2APB_Configurate(struct SPI2APB_REG *pReg, uint32_t ctrl)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    WRITE_REG(pReg->CTRL0, ctrl);

    return HAL_OK;
}

/**
 * @brief SPI2APB Read Status
 * @param pReg: pointer to a SPI2APB register base.
 * @return HAL_Status
 */
uint32_t HAL_SPI2APB_ReadStatus(struct SPI2APB_REG *pReg)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    return READ_REG(pReg->SR);
}

/**
 * @brief SPI2APB Unmask Irq
 * @param pReg: pointer to a SPI2APB register base.
 * @param unmask: unmask or mask.
 * @return HAL_Status
 */
HAL_Status HAL_SPI2APB_UnmaskIrq(struct SPI2APB_REG *pReg, bool unmask)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    if (unmask)
        WRITE_REG(pReg->IMR, 0x1);
    else
        WRITE_REG(pReg->IMR, 0x0);

    return HAL_OK;
}

/**
 * @brief SPI2APB Clean Interrupt
 * @param pReg: pointer to a SPI2APB register base.
 * @return HAL_Status
 */
HAL_Status HAL_SPI2APB_CleanIrq(struct SPI2APB_REG *pReg)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    WRITE_REG(pReg->ICR, 0x1);

    return HAL_OK;
}

/**
 * @brief SPI2APB Read Reg0
 * @param pReg: pointer to a SPI2APB register base.
 * @return HAL_Status
 */
uint32_t HAL_SPI2APB_ReadReg0(struct SPI2APB_REG *pReg)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    return READ_REG(pReg->QUICK_REG[0]);
}

/**
 * @brief SPI2APB Read Reg1
 * @param pReg: pointer to a SPI2APB register base.
 * @return HAL_Status
 */
uint32_t HAL_SPI2APB_ReadReg1(struct SPI2APB_REG *pReg)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    return READ_REG(pReg->QUICK_REG[1]);
}

/**
 * @brief SPI2APB Write Reg2
 * @param pReg: pointer to a SPI2APB register base.
 * @param value: written into Reg2.
 * @return HAL_Status
 */
HAL_Status HAL_SPI2APB_WriteReg2(struct SPI2APB_REG *pReg, uint32_t value)
{
    HAL_ASSERT(IS_SPI2APB_INSTANCE(pReg));

    WRITE_REG(pReg->QUICK_REG[2], value);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
