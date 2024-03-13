/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_SAI_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SAI
 *  @{
 */

#ifndef _HAL_SAI_H_
#define _HAL_SAI_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup SAI_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/**
 * enum FPW_mode - Frame Pluse Width.
 */
typedef enum {
    FPW_ONE_BCLK_WIDTH,
    FPW_ONE_SLOT_WIDTH,
    FPW_HALF_FRAME_WIDTH,
} eFPW_mode;

/** sai dev struct */
struct HAL_SAI_DEV {
    struct SAI_REG *pReg;
    struct AUDIO_DMA_DATA rxDmaData;
    struct AUDIO_DMA_DATA txDmaData;
    eCLOCK_Name mclk;
    eFPW_mode fpw;
    ePD_Id pd;
    uint32_t mclkGate;
    uint16_t bclkFs;
    uint8_t txLanes;
    uint8_t rxLanes;
    uint8_t fwRatio;
    bool isClkAuto;
    bool isTdm;
};

/** @} */
/***************************** Function Declare ******************************/
/** @defgroup SAI_Public_Function_Declare Public Function Declare
 *  @{
 */

/** @defgroup SAI_Dev_Level_API Dev Level API
 *  @{
 */
HAL_Status HAL_SAI_DevInit(struct HAL_SAI_DEV *sai, struct AUDIO_INIT_CONFIG *config);
HAL_Status HAL_SAI_DevDeInit(struct HAL_SAI_DEV *sai);
HAL_Status HAL_SAI_DevEnable(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream);
HAL_Status HAL_SAI_DevDisable(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream);
HAL_Status HAL_SAI_DevConfig(struct HAL_SAI_DEV *sai, eAUDIO_streamType stream,
                             struct AUDIO_PARAMS *params);

/** @} */

/** @defgroup SAI_Low_Level_API Low Level API
 *  @{
 */
HAL_Status HAL_SAI_EnableTX(struct SAI_REG *pReg);
HAL_Status HAL_SAI_EnableRX(struct SAI_REG *pReg);
HAL_Status HAL_SAI_DisableTX(struct SAI_REG *pReg);
HAL_Status HAL_SAI_DisableRX(struct SAI_REG *pReg);
HAL_Status HAL_SAI_SetBclkDiv(struct SAI_REG *pReg, int div);

/** @} */

/** @} */

#endif

/** @} */

/** @} */

#endif /* HAL_SAI_MODULE_ENABLED */
