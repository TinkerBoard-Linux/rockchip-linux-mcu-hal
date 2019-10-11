/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup AUDIO
 *  @{
 */

#ifndef _HAL_AUDIO_H_
#define _HAL_AUDIO_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup AUDIO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/**
 * enum AUDIO_sampleRate - audio samplerate: up to 192k.
 */
typedef enum {
    AUDIO_SAMPLERATE_8000   = 8000,
    AUDIO_SAMPLERATE_11025  = 11025,
    AUDIO_SAMPLERATE_12000  = 12000,
    AUDIO_SAMPLERATE_16000  = 16000,
    AUDIO_SAMPLERATE_22050  = 22050,
    AUDIO_SAMPLERATE_24000  = 24000,
    AUDIO_SAMPLERATE_32000  = 32000,
    AUDIO_SAMPLERATE_44100  = 44100,
    AUDIO_SAMPLERATE_48000  = 48000,
    AUDIO_SAMPLERATE_64000  = 64000,
    AUDIO_SAMPLERATE_88200  = 88200,
    AUDIO_SAMPLERATE_96000  = 96000,
    AUDIO_SAMPLERATE_128000 = 128000,
    AUDIO_SAMPLERATE_176400 = 176400,
    AUDIO_SAMPLERATE_192000 = 192000,
} eAUDIO_sampleRate;

/**
 * enum AUDIO_sampleBits - audio bits per sample.
 */
typedef enum {
    AUDIO_SAMPLEBITS_8  = 8,
    AUDIO_SAMPLEBITS_16 = 16,
    AUDIO_SAMPLEBITS_18 = 18,
    AUDIO_SAMPLEBITS_20 = 20,
    AUDIO_SAMPLEBITS_24 = 24,
    AUDIO_SAMPLEBITS_32 = 32,
} eAUDIO_sampleBits;

/**
 * enum AUDIO_channels - audio channels: up to 8 channels.
 */
typedef enum {
    AUDIO_CHANNELS_2 = 2,
    AUDIO_CHANNELS_4 = 4,
    AUDIO_CHANNELS_6 = 6,
    AUDIO_CHANNELS_8 = 8,
} eAUDIO_channels;

/**
 * enum AUDIO_streamType - audio stream is playback or capture.
 */
typedef enum {
    AUDIO_STREAM_PLAYBACK = 0,
    AUDIO_STREAM_CAPTURE,
} eAUDIO_streamType;

/**
 * enum AUDIO_fmtType - audio format.
 */
typedef enum {
    AUDIO_FMT_I2S,
    AUDIO_FMT_RIGHT_J,
    AUDIO_FMT_LEFT_J,
    AUDIO_FMT_DSP_A,
    AUDIO_FMT_DSP_B,
    AUDIO_FMT_PCM,
    AUDIO_FMT_PCM_DELAY1,
    AUDIO_FMT_PCM_DELAY2,
    AUDIO_FMT_PCM_DELAY3,
    AUDIO_FMT_PDM,
} eAUDIO_fmtType;

/**
 * enum TRCM_modeType - TRCM modes just for i2stdm.
 */
typedef enum {
    TRCM_NONE = 0,
    TRCM_TXONLY,
    TRCM_RXONLY,
} eTRCM_modeType;

/**
 * struct AUDIO_INIT_CONFIG - init config for dai/codec init.
 */
struct AUDIO_INIT_CONFIG {
    uint32_t master : 1;
    uint32_t clkInvert : 1;
    eAUDIO_fmtType format;
    eTRCM_modeType trcmMode;
};

/**
 * struct AUDIO_PARAMS - audio params for config dai.
 */
struct AUDIO_PARAMS {
    eAUDIO_sampleRate sampleRate; /**< sample rate: from 8k ~ 192k. */
    eAUDIO_sampleBits sampleBits; /**< bit per sample: 8bits, 16bits, 32bits. */
    eAUDIO_channels channels; /**< channels: up to 8ch. */
};

/**
 * struct AUDIO_DMA_DATA - audio dma data.
 */
struct AUDIO_DMA_DATA {
    uint32_t addr; /**< The fifo address of dai. */
    uint16_t addrWidth; /**< The width of the addr */
    uint8_t maxBurst; /**< Max number of words(in units of the addrWidth) */
    uint8_t dmaReqCh; /**< audio dma request channel number */
    struct DMA_REG *dmac; /**< dmac reg base ptr */
};

/** @} */
/***************************** Function Declare ******************************/

#endif

/** @} */

/** @} */
