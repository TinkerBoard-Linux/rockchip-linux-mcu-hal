/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_conf.h"

#ifdef HAL_HYPERPSRAM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HYPERPSRAM
 *  @{
 */

#ifndef _HAL_HYPERBUS_H_
#define _HAL_HYPERBUS_H_

#include "hal_base.h"

/***************************** Structure Definition **************************/
/**
  * @brief  HYPERPSRAM psram chip information definition
  */
struct HYPERPSRAM_CHIP_INFO {
    uint16_t id;
    uint32_t spc;
    uint32_t cap;
};

/**
  * @brief  HYPERPSRAM information definition
  */
struct HAL_HYPERPSRAM_DEV {
    struct HYPERBUS_REG *pReg;
    struct HYPERPSRAM_CHIP_INFO psramChip;
    uint32_t clkID; /**< The hyperbus clk id */
    uint32_t aclkGateID; /**< The hyperbus aclk gate id */
    uint32_t hyperMem[2]; /**< The hyperbus psram base address
                            *  which should be initialized by device.
                            */
    uint32_t psramFreq; /**< The hyperbus psram frequency which
                          *  should initialized by device.
                          */
};

/***************************** Function Declare ******************************/
/** @defgroup HYPERPSRAM_Public_Function_Declare Public Function Declare
 *  @{
 */
HAL_Status HAL_HYPERPSRAM_Init(struct HAL_HYPERPSRAM_DEV *pHyperPsramDev);
HAL_Status HAL_HYPERPSRAM_DeInit(struct HAL_HYPERPSRAM_DEV *pHyperPsramDev);
HAL_Status HAL_HYPERPSRAM_ReInit(struct HAL_HYPERPSRAM_DEV *pHyperPsramDev);
HAL_Status HAL_HYPERPSRAM_ModifyTiming(struct HAL_HYPERPSRAM_DEV *pHyperPsramDev);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_HYPERPSRAM_MODULE_ENABLED */
