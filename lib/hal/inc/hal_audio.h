/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
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
#include "hal_dma.h"

/***************************** MACRO Definition ******************************/
/** @defgroup AUDIO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define AUDIO_IOCTL(a) (0x1000 + a)

/** general cmd for audio stream */
#define AUDIO_IOCTL_HW_PARAMS     AUDIO_IOCTL(1)
#define AUDIO_IOCTL_STATUS        AUDIO_IOCTL(2)
#define AUDIO_IOCTL_SYNC_PTR      AUDIO_IOCTL(3)
#define AUDIO_IOCTL_PREPARE       AUDIO_IOCTL(4)
#define AUDIO_IOCTL_RESET         AUDIO_IOCTL(5)
#define AUDIO_IOCTL_START         AUDIO_IOCTL(6)
#define AUDIO_IOCTL_DROP          AUDIO_IOCTL(7)
#define AUDIO_IOCTL_DRAIN         AUDIO_IOCTL(8)
#define AUDIO_IOCTL_PAUSE         AUDIO_IOCTL(9)
#define AUDIO_IOCTL_RESUME        AUDIO_IOCTL(10)
#define AUDIO_IOCTL_WRITEI_FRAMES AUDIO_IOCTL(11)
#define AUDIO_IOCTL_READI_FRAMES  AUDIO_IOCTL(12)
/** sepcial cmd for vad*/
#define AUDIO_IOCTL_VAD_SET_BUFFER   AUDIO_IOCTL(20)
#define AUDIO_IOCTL_VAD_SET_PERIOD   AUDIO_IOCTL(21)
#define AUDIO_IOCTL_VAD_SET_AUDIOSRC AUDIO_IOCTL(22)
#define AUDIO_IOCTL_VAD_EN_BUSMODE   AUDIO_IOCTL(23)
/** special cmd for pcm buffer */
#define AUDIO_IOCTL_PCM_PREPARE       AUDIO_IOCTL(30)
#define AUDIO_IOCTL_PCM_RELEASE       AUDIO_IOCTL(31)
#define AUDIO_IOCTL_PCM_BUFFER_STATUS AUDIO_IOCTL(32)
#define AUDIO_IOCTL_PCM_START         AUDIO_IOCTL(33)
#define AUDIO_IOCTL_PCM_STOP          AUDIO_IOCTL(34)
/** special cmd for audio path switch */
#define AUDIO_IOCTL_PATH_VAD    AUDIO_IOCTL(40)
#define AUDIO_IOCTL_PATH_DMA    AUDIO_IOCTL(41)
#define AUDIO_IOCTL_PATH_BYPASS AUDIO_IOCTL(42)

/** audio stream num: playback and capture */
#define AUDIO_STREAM_NUM 2

/***************************** Structure Definition **************************/

/**
 * enum AUDIO_SAMPLERATE - audio samplerate: up to 192k.
 */
typedef enum {
    AUDIO_SAMPLERATE_8000   = 8000,
    AUDIO_SAMPLERATE_11025  = 11025,
    AUDIO_SAMPLERATE_16000  = 16000,
    AUDIO_SAMPLERATE_22050  = 22050,
    AUDIO_SAMPLERATE_32000  = 32000,
    AUDIO_SAMPLERATE_44100  = 44100,
    AUDIO_SAMPLERATE_48000  = 48000,
    AUDIO_SAMPLERATE_64000  = 64000,
    AUDIO_SAMPLERATE_88200  = 88200,
    AUDIO_SAMPLERATE_96000  = 96000,
    AUDIO_SAMPLERATE_176400 = 176400,
    AUDIO_SAMPLERATE_192000 = 192000,
} eAUDIO_SAMPLERATE;

/**
 * enum AUDIO_SAMPLEBITS - audio bits per sample.
 */
typedef enum {
    AUDIO_SAMPLEBITS_8  = 8,
    AUDIO_SAMPLEBITS_16 = 16,
    AUDIO_SAMPLEBITS_32 = 32,
} eAUDIO_SAMPLEBITS;

/**
 * enum AUDIO_CHANNELS - audio channels: up to 8 channels.
 */
typedef enum {
    AUDIO_CHANNELS_2 = 2,
    AUDIO_CHANNELS_4 = 4,
    AUDIO_CHANNELS_6 = 6,
    AUDIO_CHANNELS_8 = 8,
} eAUDIO_CHANNELS;

/**
 * enum AUDIO_STREAM_TYPE - audio stream is playback or capture.
 */
typedef enum {
    AUDIO_STREAM_PLAYBACK = 0,
    AUDIO_STREAM_CAPTURE,
} eAUDIO_STREAM_TYPE;

/**
 * enum AUDIO_DAI_MASTER_TYPE - audio dai is master or slave.
 */
typedef enum {
    AUDIO_DAI_MASTER = 0,
    AUDIO_DAI_SLAVE,
    AUDIO_DAI_LAST = AUDIO_DAI_SLAVE,
} eAUDIO_DAI_MASTER_TYPE;

/**
 * enum AUDIO_CLK_INV_TYPE - audio clk is normal or invert.
 */
typedef enum {
    AUDIO_CLK_NORMAL,
    AUDIO_CLK_INVERT,
} eAUDIO_CLK_INV_TYPE;

/**
 * enum AUDIO_FMT_TYPE - audio format: i2s, pcm, left j, right j.
 */
typedef enum {
    AUDIO_FMT_I2S,
    AUDIO_FMT_RIGHT_J,
    AUDIO_FMT_LEFT_J,
    AUDIO_FMT_DSP_A,
    AUDIO_FMT_DSP_B,
    AUDIO_FMT_PDM,
} eAUDIO_FMT_TYPE;

/**
 * struct AUDIO_PARAMS - audio params for config dai.
 */
struct AUDIO_PARAMS {
    uint32_t sampleRate; /**< sample rate: from 8k ~ 192k. */
    uint8_t sampleBits; /**< bit per sample: 8bits, 16bits, 32bits. */
    uint8_t channels; /**< channels: up to 8ch. */
    uint8_t daiMaster; /**< indicate dai is master or slave. */
    uint8_t clkInvert; /**< indicate clk is normal or invert. */
    uint8_t format; /**< indicate the audio format. */
    uint8_t stream; /**< indicate config params for stream */
};

struct AUDIO_OPS {
    int (*ioctl)(void *priv, int cmd, void *arg);
};

/**
 * struct AUDIO_BUF - audio buf struct.
 */
struct AUDIO_BUF {
    uint8_t *buf; /**< audio buf */
    uint8_t stream; /**< playback or capture */
    uint32_t bufSize; /**< buf size in bytes */
    uint32_t periodSize; /**< period size in bytes */
};

/**
 * struct AUDIO_BUF_STATUS - audio buf status.
 */
struct AUDIO_BUF_STATUS {
    uint32_t hwPtr; /**< audio hw ptr in uframes */
    uint32_t applPtr; /**< audio appl ptr in uframes */
};

/**
 * struct AUDIO_DAI_DMA_DATA - audio dai dma data.
 */
struct AUDIO_DAI_DMA_DATA {
    uint32_t addr; /**< The fifo address of dai. */
    uint16_t addrWidth; /**< The width of the addr */
    uint8_t maxBurst; /**< Max number of words(in units of the addrWidth) */
    uint8_t dmaReqCh; /**< audio dma request channel number */
    struct DMA_REG *dmac; /**< dmac ptr */
};

/**
 * struct AUDIO_DAI - audio dai struct.
 */
struct AUDIO_DAI {
    HAL_LIST list; /**< list node */
    uint32_t id; /**< assign from dai base(such as i2s) as the unique id. */
    struct AUDIO_DAI_DMA_DATA *dmaData[AUDIO_STREAM_NUM]; /**< dma data */
    const struct AUDIO_OPS *ops; /**< audio ops function */
    void *privData; /**< audio dai privData, general for priv dai struct*/
};

/**
 * struct AUDIO_PCM - audio pcm struct.
 */
struct AUDIO_PCM {
    HAL_LIST list; /**< list node */
    struct AUDIO_DAI *dai; /**< the parent audio dai */
    struct AUDIO_PARAMS params; /**< audio params */
    struct AUDIO_BUF abuf; /**< buf info */
    struct AUDIO_BUF_STATUS status;
    const struct AUDIO_OPS *ops; /**< audio ops function */
    struct DMA_CHAN *chan; /**< dma chan */
};

/**
 * struct AUDIO_CODEC - audio codec struct.
 */
struct AUDIO_CODEC {
    HAL_LIST list; /**< list node */
    uint32_t id; /**< assign from codee base as the unique id. */
    /* TBD */ /**< audio codec i2c device */
    const struct AUDIO_OPS *ops; /**< audio ops function */
};

/**
 * struct AUDIO_CARD - audio card struct.
 */
struct AUDIO_CARD {
    HAL_LIST list; /**< list node */
    uint32_t id; /**< card unique id. */
    struct AUDIO_DAI *dai; /**< audio dai device */
    struct AUDIO_DAI *vadDai; /**< vad dai device, optional */
    struct AUDIO_CODEC *codec; /**< audio codec device */
    struct AUDIO_PCM *pcm[AUDIO_STREAM_NUM]; /**< stream pcm */
    const struct AUDIO_OPS *ops; /**< audio ops function */
};

/** @} */
/***************************** Function Declare ******************************/

/** should hold lock to call these functions */
HAL_Status HAL_AUDIO_RegisterDai(struct AUDIO_DAI *dai);
HAL_Status HAL_AUDIO_UnregisterDai(struct AUDIO_DAI *dai);
HAL_Status HAL_AUDIO_RegisterPcm(struct AUDIO_PCM *pcm);
HAL_Status HAL_AUDIO_UnregisterPcm(struct AUDIO_PCM *pcm);
HAL_Status HAL_AUDIO_RegisterCodec(struct AUDIO_CODEC *codec);
HAL_Status HAL_AUDIO_UnregisterCodec(struct AUDIO_CODEC *codec);
HAL_Status HAL_AUDIO_RegisterCard(struct AUDIO_CARD *card);
HAL_Status HAL_AUDIO_UnregisterCard(struct AUDIO_CARD *card);
struct AUDIO_DAI *HAL_AUDIO_FindDai(uint32_t id);
struct AUDIO_CODEC *HAL_AUDIO_FindCodec(uint32_t id);
struct AUDIO_CARD *HAL_AUDIO_FindCard(uint32_t id);

#endif

/** @} */

/** @} */
