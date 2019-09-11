/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup I2STDM
 *  @{
 */

#ifndef _HAL_I2STDM_H_
#define _HAL_I2STDM_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup I2STDM_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/** i2s-tdm dev struct */
struct HAL_I2STDM_DEV {
    struct I2STDM_REG *pReg;
    uint32_t mclkTx;
    uint32_t mclkTxGate;
    uint32_t mclkRx;
    uint32_t mclkRxGate;
    uint32_t hclk;
    ePD_Id pd;
    uint16_t bclkFs;
    eTRCM_modeType trcmMode;
    struct AUDIO_DMA_DATA rxDmaData;
    struct AUDIO_DMA_DATA txDmaData;
};

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_I2STDM_Supsend(struct HAL_I2STDM_DEV *i2sTdm);
HAL_Status HAL_I2STDM_Resume(struct HAL_I2STDM_DEV *i2sTdm);
HAL_Status HAL_I2STDM_Init(struct HAL_I2STDM_DEV *i2sTdm, struct AUDIO_INIT_CONFIG *config);
HAL_Status HAL_I2STDM_DeInit(struct HAL_I2STDM_DEV *i2sTdm);
HAL_Status HAL_I2STDM_Enable(struct HAL_I2STDM_DEV *i2sTdm, eAUDIO_streamType stream);
HAL_Status HAL_I2STDM_Disable(struct HAL_I2STDM_DEV *i2sTdm, eAUDIO_streamType stream);
HAL_Status HAL_I2STDM_TxRxEnable(struct HAL_I2STDM_DEV *i2sTdm, eAUDIO_streamType stream, bool doXfer);
HAL_Status HAL_I2STDM_TxRxDisable(struct HAL_I2STDM_DEV *i2sTdm, eAUDIO_streamType stream, bool doXfer);
HAL_Status HAL_I2STDM_Config(struct HAL_I2STDM_DEV *i2sTdm, eAUDIO_streamType stream,
                             struct AUDIO_PARAMS *params);

#endif

/** @} */

/** @} */
