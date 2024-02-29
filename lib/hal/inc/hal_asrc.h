/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_ASRC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup ASRC
 *  @{
 */

#ifndef _HAL_ASRC_
#define _HAL_ASRC_
#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup ASRC_Exported_Definition_Group1 Basic Definition
 *  @{
 */
#define ASRC_FIFO_IN_INCR_DR  0x1000
#define ASRC_FIFO_OUT_INCR_DR 0x5000

/***************************** Structure Definition **************************/
/**
 * enum eASRC_SeriesMode - set asrc series mode.
 */
typedef enum {
    ASRC_SERIES_DIS = 0,
    ASRC_SERIES_MASTER,
    ASRC_SERIES_SLAVE,
} eASRC_SeriesMode;

struct HAL_ASRC_PARAMS {
    uint32_t lrckDiv;
    uint32_t lrckMux;
    eCLOCK_Name lrck;
    eAUDIO_sampleRate sampleRate;
    struct AUDIO_DMA_DATA dmaData;
};

struct HAL_ASRC_DEV {
    struct ASRC_REG *pReg;
    eCLOCK_Name mclk;
    uint32_t mclkGate;
    uint32_t mclkRate;
    uint32_t reset;
    uint32_t channels;
    eASRC_SeriesMode series;
    eASRC_mode mode;
    struct HAL_ASRC_PARAMS txParams;
    struct HAL_ASRC_PARAMS rxParams;
};

/** @} */
/***************************** Function Declare ******************************/
/** @defgroup ASRC_Public_Function_Declare Public Function Declare
 *  @{
 */

HAL_Status HAL_ASRC_Supsend(struct HAL_ASRC_DEV *asrc);
HAL_Status HAL_ASRC_Resume(struct HAL_ASRC_DEV *asrc);
HAL_Status HAL_ASRC_Init(struct HAL_ASRC_DEV *asrc, struct AUDIO_INIT_CONFIG *config);
HAL_Status HAL_ASRC_DeInit(struct HAL_ASRC_DEV *asrc);
HAL_Status HAL_ASRC_Start(struct HAL_ASRC_DEV *asrc);
HAL_Status HAL_ASRC_Stop(struct HAL_ASRC_DEV *asrc);
HAL_Status HAL_ASRC_Config(struct HAL_ASRC_DEV *asrc, struct AUDIO_PARAMS *params);
HAL_Status HAL_ASRC_SelectSeriesMode(struct HAL_ASRC_DEV *asrc, eASRC_SeriesMode series);
HAL_Status HAL_ASRC_HardMuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane);
HAL_Status HAL_ASRC_HardUnmuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane);
HAL_Status HAL_ASRC_SoftMuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane);
HAL_Status HAL_ASRC_SoftUnmuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane);

/** @} */
#endif

/** @} */

/** @} */

#endif /* HAL_ASRC_MODULE_ENABLED */
