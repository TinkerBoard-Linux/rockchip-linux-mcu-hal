/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_ASRC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup ASRC
 *  @{
 */

/** @defgroup ASRC_How_To_Use How To Use
 *  @{

 The ASRC driver can be used as follows:

 The ASRC is asynchronous sampling rate converter. It is used to connect audio
 devices with different clock sources and frequencies.
 - Invoke HAL_ASRC_Init() to init ASRC.
 - Invoke HAL_ASRC_Config() to setup ASRC audio parameters.
 - Invoke HAL_ASRC_SelectSeriesMode() to set ASRC as master or slave mode.
 - Invoke ASRC hard or soft mute function to mute asrc lane 0-3.
 - Invoke HAL_ASRC_Start() to start ASRC.
 - Invoke HAL_ASRC_Stop() to stop ASRC.
 - Invoke HAL_ASRC_DeInit() to clse ASRC device.

 @} */

/** @defgroup ASRC_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
/* CON */
#define ASRC_EN            (0x1 << ASRC_CON_EN_SHIFT)
#define ASRC_DIS           (0x0 << ASRC_CON_EN_SHIFT)
#define ASRC_OUT_STOP      (1 << ASRC_CON_OUT_STOP_SHIFT)
#define ASRC_OUT_START     (0 << ASRC_CON_OUT_STOP_SHIFT)
#define ASRC_IN_STOP       (1 << ASRC_CON_IN_STOP_SHIFT)
#define ASRC_IN_START      (0 << ASRC_CON_IN_STOP_SHIFT)
#define ASRC_REAL_TIME     (0x0 << ASRC_CON_MODE_SHIFT)
#define ASRC_MEMORY_FETCH  (0x1 << ASRC_CON_MODE_SHIFT)
#define ASRC_M2M           (0x0 << ASRC_CON_REAL_TIME_MODE_SHIFT)
#define ASRC_S2M           (0x1 << ASRC_CON_REAL_TIME_MODE_SHIFT)
#define ASRC_M2D           (0x2 << ASRC_CON_REAL_TIME_MODE_SHIFT)
#define ASRC_S2D           (0x3 << ASRC_CON_REAL_TIME_MODE_SHIFT)
#define ASRC_CHAN_NUM(x)   (((x - 2) / 2) << ASRC_CON_CHAN_NUM_SHIFT)
#define ASRC_SERIES_DIS    (0x0 << ASRC_CON_SERIES_EN_SHIFT)
#define ASRC_SERIES_MASTER (0x1 << ASRC_CON_SERIES_EN_SHIFT)
#define ASRC_SERIES_SLAVE  (0x2 << ASRC_CON_SERIES_EN_SHIFT)

/* INT_CON */
#define ASRC_CONV_DONE_EN (0x1 << ASRC_INT_CON_CONV_DONE_EN_SHIFT)

/* DATA_FMT */
#define ASRC_OWL_16BIT        (0x2 << ASRC_DATA_FMT_OWL_SHIFT)
#define ASRC_OWL_20BIT        (0x1 << ASRC_DATA_FMT_OWL_SHIFT)
#define ASRC_OWL_24BIT        (0x0 << ASRC_DATA_FMT_OWL_SHIFT)
#define ASRC_IWL_16BIT        (0x2 << ASRC_DATA_FMT_IWL_SHIFT)
#define ASRC_IWL_20BIT        (0x1 << ASRC_DATA_FMT_IWL_SHIFT)
#define ASRC_IWL_24BIT        (0x0 << ASRC_DATA_FMT_IWL_SHIFT)
#define ASRC_DATA_FMT_IFMT_16 (0x1 << ASRC_DATA_FMT_IFMT_SHIFT)
#define ASRC_DATA_FMT_IFMT_32 (0x0 << ASRC_DATA_FMT_IFMT_SHIFT)
#define ASRC_DATA_FMT_OFMT_16 (0x1 << ASRC_DATA_FMT_OFMT_SHIFT)
#define ASRC_DATA_FMT_OFMT_32 (0x0 << ASRC_DATA_FMT_OFMT_SHIFT)

/* DMA_THRESH */
#define ASRC_DMA_TX_THRESH(x) (x << ASRC_DMA_THRESH_DMA_TX_THRESH_SHIFT)
#define ASRC_DMA_RX_THRESH(x) (x << ASRC_DMA_THRESH_DMA_RX_THRESH_SHIFT)
#define ASRC_IN_THRESH(x)     (x << ASRC_DMA_THRESH_ASRC_IN_THRESH_SHIFT)
#define ASRC_OUT_THRESH(x)    (x << ASRC_DMA_THRESH_ASRC_OUT_THRESH_SHIFT)
#define ASRC_NEG_THRESH(x)    (x << ASRC_DMA_THRESH_ASRC_NEG_THRESH_SHIFT)
#define ASRC_POS_THRESH(x)    (x << ASRC_DMA_THRESH_ASRC_POS_THRESH_SHIFT)

/* TRACK_PERIOD */
#define ASRC_RATIO_TRACK_DIV(x)    (x << ASRC_TRACK_PERIOD_RATIO_TRACK_DIV_SHIFT)
#define ASRC_RATIO_TRACK_PERIOD(x) (x << ASRC_TRACK_PERIOD_RATIO_TRACK_PERIOD_SHIFT)

/********************* Private Structure Definition **************************/
/********************* Private Variable Definition ***************************/
/********************* Private Function Definition ***************************/
static int HAL_ASRC_CalculateRatio(struct HAL_ASRC_DEV *asrc,
                                   int numerator, int denominator)
{
    int i, integerPart, remainder, ratio, digit;
    unsigned int temp = 0;;

    HAL_ASSERT(asrc != NULL);
    if (denominator == 0) {
        HAL_DBG_WRN("The denominator can not be zero.\n");

        return 0;
    }

    integerPart = numerator / denominator;
    remainder = numerator % denominator;
    ratio = integerPart << 22;
    for (i = 0; i < 8; i++) {
        remainder <<= 4;
        digit = remainder / denominator;
        temp |= (digit << (28 - i * 4));
        remainder %= denominator;
    }

    ratio += (temp >> 10);

    return ratio;
}

static void HAL_ASRC_RatioUpdate(struct HAL_ASRC_DEV *asrc)
{
    HAL_ASSERT(asrc != NULL);
    WRITE_REG(asrc->pReg->SAMPLE_RATE, asrc->rxParams.sampleRate);
    WRITE_REG(asrc->pReg->RESAMPLE_RATE, asrc->txParams.sampleRate);
    WRITE_REG(asrc->pReg->MANUAL_RATIO,
              HAL_ASRC_CalculateRatio(asrc, asrc->rxParams.sampleRate, asrc->txParams.sampleRate));
}

/** @} */
/********************* Public Function Definition ****************************/
/** @defgroup ASRC_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  asrc suspend.
 * @param  asrc: the handle of asrc.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Supsend(struct HAL_ASRC_DEV *asrc)
{
    return HAL_OK;
}

/**
 * @brief  asrc resume.
 * @param  asrc: the handle of asrc.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Resume(struct HAL_ASRC_DEV *asrc)
{
    return HAL_OK;
}

/** @} */

/** @defgroup ASRC_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup ASRC_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup ASRC_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Init ASRC controller.
 * @param  asrc: the handle of asrc.
 * @param  config: init config for asrc init.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Init(struct HAL_ASRC_DEV *asrc, struct AUDIO_INIT_CONFIG *config)
{
    uint32_t val = 0;

    HAL_ASSERT(asrc != NULL);
    HAL_ASSERT(config != NULL);
#ifdef HAL_CRU_MODULE_ENABLED
    uint32_t mux;

    HAL_CRU_ClkEnable(asrc->mclk);
    if (asrc->txParams.lrckDiv) {
        MODIFY_REG(asrc->pReg->CLKDIV_CON,
                   ASRC_CLKDIV_CON_DST_LRCK_DIV_EN_MASK |
                   ASRC_CLKDIV_CON_DST_LRCK_DIV_CON_MASK,
                   ASRC_CLKDIV_CON_DST_LRCK_DIV_EN_MASK |
                   (asrc->txParams.lrckDiv << ASRC_CLKDIV_CON_DST_LRCK_DIV_CON_SHIFT));
    } else {
        MODIFY_REG(asrc->pReg->CLKDIV_CON,
                   ASRC_CLKDIV_CON_DST_LRCK_DIV_EN_MASK, 0);
    }

    mux = CLK_GET_MUX(asrc->txParams.lrck);
    HAL_CRU_ClkSetMux(mux, asrc->txParams.lrckMux);

    if (asrc->rxParams.lrckDiv) {
        MODIFY_REG(asrc->pReg->CLKDIV_CON,
                   ASRC_CLKDIV_CON_SRC_LRCK_DIV_EN_MASK |
                   ASRC_CLKDIV_CON_SRC_LRCK_DIV_CON_MASK,
                   ASRC_CLKDIV_CON_SRC_LRCK_DIV_EN_MASK |
                   (asrc->rxParams.lrckDiv << ASRC_CLKDIV_CON_SRC_LRCK_DIV_CON_SHIFT));
    } else {
        MODIFY_REG(asrc->pReg->CLKDIV_CON,
                   ASRC_CLKDIV_CON_SRC_LRCK_DIV_EN_MASK, 0);
    }

    mux = CLK_GET_MUX(asrc->rxParams.lrck);
    HAL_CRU_ClkSetMux(mux, asrc->rxParams.lrckMux);
#endif
    switch (config->asrcMode) {
    case ASRC_REAL_TIME_M2M_MODE:
        val = ASRC_M2M;
        break;
    case ASRC_REAL_TIME_S2M_MODE:
        val = ASRC_S2M;
        break;
    case ASRC_REAL_TIME_M2D_MODE:
        val = ASRC_M2D;
        break;
    case ASRC_REAL_TIME_S2D_MODE:
        val = ASRC_S2D;
        break;
    default:

        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON,
               ASRC_CON_MODE_MASK | ASRC_CON_RATIO_TRACK_MODE_MASK | ASRC_CON_REAL_TIME_MODE_MASK,
               ASRC_REAL_TIME | ASRC_CON_RATIO_TRACK_MODE_MASK | val);
    /* Ser track period, the parameter can be calculated. */
    MODIFY_REG(asrc->pReg->TRACK_PERIOD,
               ASRC_TRACK_PERIOD_RATIO_TRACK_DIV_MASK | ASRC_TRACK_PERIOD_RATIO_TRACK_PERIOD_MASK,
               ASRC_RATIO_TRACK_DIV(0x20) | ASRC_RATIO_TRACK_PERIOD(512));
    asrc->mode = config->asrcMode;
    MODIFY_REG(asrc->pReg->DMA_THRESH, ASRC_DMA_THRESH_DMA_TX_THRESH_MASK, ASRC_DMA_TX_THRESH(3));
    MODIFY_REG(asrc->pReg->DMA_THRESH, ASRC_DMA_THRESH_DMA_RX_THRESH_MASK, ASRC_DMA_RX_THRESH(3));
    MODIFY_REG(asrc->pReg->DMA_THRESH, ASRC_DMA_THRESH_ASRC_IN_THRESH_MASK, ASRC_IN_THRESH(3));
    MODIFY_REG(asrc->pReg->DMA_THRESH, ASRC_DMA_THRESH_ASRC_OUT_THRESH_MASK, ASRC_OUT_THRESH(12));
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_CONV_ERROR_EN_MASK, ASRC_INT_CON_CONV_ERROR_EN_MASK);

#ifdef ASRC_DEBUG
    /* Open all interrupts for debug. */
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_OUT_START_EN_MASK, ASRC_INT_CON_OUT_START_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_CONV_DONE_EN_MASK, ASRC_CONV_DONE_EN);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_OUT_START_EN_MASK, ASRC_INT_CON_OUT_START_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_RATIO_INIT_DONE_EN_MASK, ASRC_INT_CON_RATIO_INIT_DONE_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_RATIO_CHANGE_DONE_EN_MASK, ASRC_INT_CON_RATIO_CHANGE_DONE_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_RATIO_UPDATE_DONE_EN_MASK, ASRC_INT_CON_RATIO_UPDATE_DONE_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_FIFO_IN_FULL_EN_MASK, ASRC_INT_CON_FIFO_IN_FULL_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_FIFO_IN_EMPTY_EN_MASK, ASRC_INT_CON_FIFO_IN_EMPTY_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_FIFO_OUT_FULL_EN_MASK, ASRC_INT_CON_FIFO_OUT_FULL_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_FIFO_OUT_EMPTY_EN_MASK, ASRC_INT_CON_FIFO_OUT_EMPTY_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_RATIO_UNLOCK_EN_MASK, ASRC_INT_CON_RATIO_UNLOCK_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_SRC_LRCK_UNLOCK_EN_MASK, ASRC_INT_CON_SRC_LRCK_UNLOCK_EN_MASK);
    MODIFY_REG(asrc->pReg->INT_CON, ASRC_INT_CON_DST_LRCK_UNLOCK_EN_MASK, ASRC_INT_CON_DST_LRCK_UNLOCK_EN_MASK);
#endif

    return HAL_OK;
}

/**
 * @brief  DeInit ASRC controller.
 * @param  asrc: the handle of asrc.
 * @param  config: init config for asrc init.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_DeInit(struct HAL_ASRC_DEV *asrc, struct AUDIO_INIT_CONFIG *config)
{
    HAL_ASSERT(asrc != NULL);
    HAL_ASSERT(config != NULL);
#ifdef HAL_CRU_MODULE_ENABLED
    HAL_CRU_ClkDisable(asrc->mclk);
#endif

    return HAL_OK;
}

/** @} */

/** @defgroup ASRC_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Start ASRC controller.
 * @param  asrc: the handle of asrc.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Start(struct HAL_ASRC_DEV *asrc)
{
    HAL_ASSERT(asrc != NULL);
    MODIFY_REG(asrc->pReg->CON,
               ASRC_CON_IN_STOP_MASK | ASRC_CON_OUT_STOP_MASK,
               ASRC_IN_START | ASRC_OUT_START);
    /* Run asrc */
    MODIFY_REG(asrc->pReg->CON, ASRC_CON_EN_MASK, ASRC_EN);

    return HAL_OK;
}

/**
 * @brief  Disable ASRC controller.
 * @param  asrc: the handle of asrc.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Stop(struct HAL_ASRC_DEV *asrc)
{
    HAL_ASSERT(asrc != NULL);
    MODIFY_REG(asrc->pReg->CON,
               ASRC_CON_IN_STOP_MASK | ASRC_CON_OUT_STOP_MASK,
               ASRC_IN_STOP | ASRC_OUT_STOP);
    /* Stop asrc */
    MODIFY_REG(asrc->pReg->CON, ASRC_CON_EN_MASK, ASRC_DIS);

    return HAL_OK;
}

/**
 * @brief  Config ASRC controller.
 * @param  asrc: the handle of asrc.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_Config(struct HAL_ASRC_DEV *asrc, struct AUDIO_PARAMS *params)
{
    uint32_t val = 0;

    HAL_ASSERT(asrc != NULL);
    HAL_ASSERT(params != NULL);
    asrc->rxParams.sampleRate = params->sampleRate;
    asrc->txParams.sampleRate = params->reSampleRate;
    HAL_ASRC_RatioUpdate(asrc);
    /* Set channels */
    MODIFY_REG(asrc->pReg->CON, ASRC_CON_CHAN_NUM_MASK, ASRC_CHAN_NUM(params->channels));
    /* Set sample bits */
    switch (params->sampleBits) {
    case 24:
        val = ASRC_OWL_24BIT | ASRC_IWL_24BIT |
              ASRC_DATA_FMT_OFMT_32 | ASRC_DATA_FMT_IFMT_32;
        break;
    case 16:
        val = ASRC_IWL_16BIT | ASRC_OWL_16BIT |
              ASRC_DATA_FMT_IFMT_16 | ASRC_DATA_FMT_OFMT_16;
        break;
    default:

        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->DATA_FMT, ASRC_DATA_FMT_IWL_MASK | ASRC_DATA_FMT_OWL_MASK, val);

    return HAL_OK;
}

/**
 * @brief  ASRC series master or slave mode.
 * @param  asrc: the handle of asrc.
 * @param  series: master or slave mode.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_SelectSeriesMode(struct HAL_ASRC_DEV *asrc, eASRC_SeriesMode series)
{
    HAL_ASSERT(asrc != NULL);
    if (series > ASRC_SERIES_SLAVE) {
        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON, ASRC_CON_SERIES_EN_MASK, series << ASRC_CON_SERIES_EN_SHIFT);

    return HAL_OK;
}

/**
 * @brief  ASRC hard mute control.
 * @param  asrc: the handle of asrc.
 * @param  lane: asrc lane 0-3.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_HardMuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane)
{
    HAL_ASSERT(asrc != NULL);

    if (lane > 3) {
        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON,
               (1 << lane) << ASRC_CON_HARD_MUTE_EN_SHIFT,
               (1 << lane) << ASRC_CON_HARD_MUTE_EN_SHIFT);

    return HAL_OK;
}

/**
 * @brief  ASRC hard unmute control.
 * @param  asrc: the handle of asrc.
 * @param  lane: asrc lane 0-3.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_HardUnmuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane)
{
    HAL_ASSERT(asrc != NULL);

    if (lane > 3) {
        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON,
               (1 << lane) << ASRC_CON_HARD_MUTE_EN_SHIFT,
               (0 << lane) << ASRC_CON_HARD_MUTE_EN_SHIFT);

    return HAL_OK;
}

/**
 * @brief  ASRC soft mute control.
 * @param  asrc: the handle of asrc.
 * @param  lane: asrc lane 0-3.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_SoftMuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane)
{
    HAL_ASSERT(asrc != NULL);

    if (lane > 3) {
        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON,
               (1 << lane) << ASRC_CON_SOFT_MUTE_EN_SHIFT,
               (1 << lane) << ASRC_CON_SOFT_MUTE_EN_SHIFT);

    return HAL_OK;
}

/**
 * @brief  ASRC soft unmute control.
 * @param  asrc: the handle of asrc.
 * @param  lane: asrc lane 0-3.
 * @return HAL_Status
 */
HAL_Status HAL_ASRC_SoftUnmuteByLane(struct HAL_ASRC_DEV *asrc, uint8_t lane)
{
    HAL_ASSERT(asrc != NULL);

    if (lane > 3) {
        return HAL_INVAL;
    }

    MODIFY_REG(asrc->pReg->CON,
               (1 << lane) << ASRC_CON_SOFT_MUTE_EN_SHIFT,
               (0 << lane) << ASRC_CON_SOFT_MUTE_EN_SHIFT);

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif /* HAL_ASRC_MODULE_ENABLED */
