/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_PCIE_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PCIE
 *  @{
 */

#ifndef _HAL_PCIE_H_
#define _HAL_PCIE_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup PCIE_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/** PCIe handler */
struct HAL_PCIE_DEV {
    uint32_t apbBase;
    uint32_t dbiBase;
};

struct HAL_PCIE_HANDLE {
    struct HAL_PCIE_DEV *dev;
};
/** @} */
/***************************** Function Declare ******************************/
/** @defgroup PCIE_Public_Function_Declare Public Function Declare
 *  @{
 */

int HAL_PCIE_GetDmaStatus(struct HAL_PCIE_HANDLE *pcie, uint8_t chn, enum HAL_PCIE_DMA_DIR dir);
HAL_Status HAL_PCIE_ConfigDma(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *table);
HAL_Status HAL_PCIE_StartDma(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *table);
HAL_Check HAL_PCIE_LinkUp(struct HAL_PCIE_HANDLE *pcie);
uint32_t HAL_PCIE_GetLTSSM(struct HAL_PCIE_HANDLE *pcie);
HAL_Status HAL_PCIE_Init(struct HAL_PCIE_HANDLE *pcie, struct HAL_PCIE_DEV *dev);
HAL_Status HAL_PCIE_DeInit(struct HAL_PCIE_HANDLE *pcie);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_PCIE_MODULE_ENABLED */
