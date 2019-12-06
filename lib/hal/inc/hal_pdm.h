/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_conf.h"

#ifdef HAL_PDM_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PDM
 *  @{
 */

#ifndef _HAL_PDM_H_
#define _HAL_PDM_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup PDM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** PDM CLK RATE */
#define PDM_FPGA_CLK_RATE (72000000)
#define PDM_CLK_RATE      (100000000)
/***************************** Structure Definition **************************/

typedef enum {
    PDM_NORMAL_MODE = 0, /**< normal mode: 2.048/2.8224M/3.072M clk */
    PDM_LOW_MODE, /**< lower power mode: 1.024M/1.4112M/1.536M clk */
    PDM_HIGH_MODE, /**< high mode: 4.096M/5.6448M/6.144M clk */
} ePDM_MODE;

/** pdm dev struct */
struct HAL_PDM_DEV {
    struct PDM_REG *pReg;
    uint32_t mclk;
    uint32_t mclkGate;
    uint32_t mclkRate;
    uint32_t hclk;
    uint32_t reset;
    ePD_Id pd;
    ePDM_MODE mode;
    struct AUDIO_DMA_DATA rxDmaData;
};

/** @} */
/***************************** Function Declare ******************************/
/** @defgroup PDM_Public_Function_Declare Public Function Declare
 *  @{
 */

HAL_Status HAL_PDM_Supsend(struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Resume(struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Init(struct HAL_PDM_DEV *pdm, struct AUDIO_INIT_CONFIG *config);
HAL_Status HAL_PDM_DeInit(struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Enable(struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Disable(struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Config(struct HAL_PDM_DEV *pdm, struct AUDIO_PARAMS *params);

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_PDM_MODULE_ENABLED */
