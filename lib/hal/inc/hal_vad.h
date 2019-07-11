/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup VAD
 *  @{
 */

#ifndef _HAL_VAD_H_
#define _HAL_VAD_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup VAD_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define VAD_CTRL                     0x00
#define VAD_DET_CHNL_SHIFT           29
#define VAD_DET_CHNL_MASK            (0x7 << VAD_DET_CHNL_SHIFT)
#define VAD_DET_CHNL(x)              ((x) << VAD_DET_CHNL_SHIFT)
#define AUDIO_24BIT_SAT_SHIFT        28
#define AUDIO_24BIT_SAT_MASK         HAL_BIT(28)
#define AUDIO_H16B                   0
#define AUDIO_SAT_24TO16             HAL_BIT(28)
#define AUDIO_24BIT_ALIGN_MODE_SHIFT 27
#define AUDIO_24BIT_ALIGN_MODE_MASK  HAL_BIT(27)
#define AUDIO_24BIT_ALIGN_8_31B      0
#define AUDIO_24BIT_ALIGN_0_23B      HAL_BIT(27)
#define AUDIO_CHNL_BW_SHIFT          26
#define AUDIO_CHNL_BW_MASK           HAL_BIT(26)
#define AUDIO_CHNL_16B               0
#define AUDIO_CHNL_24B               HAL_BIT(26)
#define AUDIO_CHNL_NUM_SHIFT         23
#define AUDIO_CHNL_NUM_MASK          (0x7 << AUDIO_CHNL_NUM_SHIFT)
#define AUDIO_CHNL_NUM(x)            ((x - 1) << AUDIO_CHNL_NUM_SHIFT)
#define CFG_ACODE_AFTER_DET_EN_SHIFT 22
#define CFG_ACODE_AFTER_DET_EN_MASK  HAL_BIT(22)
#define CFG_ACODE_AFTER_DET_EN       HAL_BIT(22)
#define VAD_MODE_SHIFT               20
#define VAD_MODE_MASK                (0x3 << VAD_MODE_SHIFT)
#define VAD_MODE(x)                  ((x) << VAD_MODE_SHIFT)
#define STORE_DATA_VAD_DET_ONLY      0
#define STORE_DATA_ALL               (1 << VAD_MODE_SHIFT)
#define NO_STORE_DATA                (2 << VAD_MODE_SHIFT)
#define ACODE_CFG_REG_NUM_SHIFT      15
#define ACODE_CFG_REG_NUM_MASK       (0x1f << ACODE_CFG_REG_NUM_SHIFT)
#define ACODE_CFG_REG_NUM(x)         ((x - 1) << ACODE_CFG_REG_NUM_SHIFT)
#define SRC_ADDR_MODE_SHIFT          14
#define SRC_ADDR_MODE_MASK           HAL_BIT(14)
#define SRC_ADDR_MODE_INC            0
#define SRC_ADDR_MODE_FIXED          HAL_BIT(14)
#define INCR_BURST_LEN_SHIFT         10
#define INCR_BURST_LEN_MASK          (0xf << INCR_BURST_LEN_SHIFT)
#define INCR_BURST_LEN(x)            ((x - 1) << INCR_BURST_LEN_SHIFT)
#define SRC_BURST_NUM_SHIFT          7
#define SRC_BURST_NUM_MASK           (0x7 << SRC_BURST_NUM_SHIFT)
#define SRC_BURST_NUM(x)             ((x - 1) << SRC_BURST_NUM_SHIFT)
#define SRC_BURST_SHIFT              4
#define SRC_BURST_MASK               (0x7 << SRC_BURST_SHIFT)
#define SRC_BURST_SIGNLE             0
#define SRC_BURST_INCR               (1 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR4              (3 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR8              (5 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR16             (7 << SRC_BURST_SHIFT)
#define AUDIO_SRC_SEL_SHIFT          1
#define AUDIO_SRC_SEL_MASK           (0x7 << AUDIO_SRC_SEL_SHIFT)
#define AUDIO_SRC_SEL(x)             ((x) << AUDIO_SRC_SEL_SHIFT)
#define VAD_EN_SHIFT                 0
#define VAD_EN_MASK                  HAL_BIT(0)
#define VAD_EN                       HAL_BIT(0)
#define VAD_DISABLE                  0
#define VAD_IS_ADDR                  4
#define VAD_ID_ADDR                  8
#define VAD_OD_ADDR0                 0x0c
#define VAD_OD_ADDR1                 0x10
#define VAD_OD_ADDR2                 0x14
#define VAD_OD_ADDR3                 0x18
#define VAD_OD_ADDR4                 0x1c
#define VAD_OD_ADDR5                 0x20
#define VAD_OD_ADDR6                 0x24
#define VAD_OD_ADDR7                 0x28
#define VAD_D_DATA0                  0x2c
#define VAD_D_DATA1                  0x30
#define VAD_D_DATA2                  0x34
#define VAD_D_DATA3                  0x38
#define VAD_D_DATA4                  0x3c
#define VAD_D_DATA5                  0x40
#define VAD_D_DATA6                  0x44
#define VAD_D_DATA7                  0x48

#define VAD_TIMEOUT            0x4c
#define WORK_TIMEOUT_EN_MASK   HAL_BIT(31)
#define WORK_TIMEOUT_EN        HAL_BIT(31)
#define WORK_TIMEOUT_DISABLE   0
#define IDLE_TIMEOUT_EN_MASK   HAL_BIT(30)
#define IDLE_TIMEOUT_EN        HAL_BIT(30)
#define IDLE_TIMEOUT_DISABLE   0
#define WORK_TIMEOUT_THD_SHIFT 20
#define WORK_TIMEOUT_THD_MASK  (0x3ff << WORK_TIMEOUT_THD_SHIFT)
#define WORK_TIMEOUT_THD(x)    ((x) << WORK_TIMEOUT_THD_SHIFT)
#define IDLE_TIMEOUT_THD_SHIFT 0
#define IDLE_TIMEOUT_THD_MASK  (0x1fffff << IDLE_TIMEOUT_THD_SHIFT)
#define IDLE_TIMEOUT_THD(x)    ((x) << IDLE_TIMEOUT_THD_SHIFT)

#define VAD_RAM_BEGIN_ADDR 0x50
#define VAD_RAM_END_ADDR   0x54
#define VAD_RAM_CUR_ADDR   0x58
#define VAD_DET_CON0       0x5c
#define VAD_CON_THD_SHIFT  16
#define VAD_CON_THD_MASK   (0xff << VAD_CON_THD_SHIFT)
#define VAD_CON_THD(x)     ((x) << VAD_CON_THD_SHIFT)
#define NOISE_LEVEL_SHIFT  12
#define NOISE_LEVEL_MASK   (0x7 << NOISE_LEVEL_SHIFT)
#define NOISE_LEVEL(x)     ((x) << NOISE_LEVEL_SHIFT)
#define GAIN_SHIFT         0
#define GAIN_MASK          (0x3ff << GAIN_SHIFT)
#define GAIN(x)            (x)

#define VAD_DET_CON1              0x60
#define MIN_NOISE_FIND_MODE_SHIFT 30
#define MIN_NOISE_FIN_MODE_MASK   HAL_BIT(30)
#define MIN_NOISE_FIND_MODE0      0
#define MIN_NOISE_FIND_MODE1      HAL_BIT(30)
#define NOISE_CLEAN_MODE_SHIFT    29
#define NOISE_CLEAN_MODE_MASK     HAL_BIT(29)
#define NOISE_CLEAN_MODE0         0
#define NOISE_CLEAN_MODE1         HAL_BIT(29)
#define NOISE_CLK_FORCE_EN_MASK   HAL_BIT(28)
#define NOISE_CLK_AUTO_GATING     0
#define NOISE_CLK_FORCE_EN        HAL_BIT(28)
#define NOISE_SAMPLE_NUM_SHIFT    16
#define NOISE_SAMPLE_NUM_MASK     (0x3ff << NOISE_SAMPLE_NUM_SHIFT)
#define NOISE_SAMPLE_NUM          ((x) << NOISE_SAMPLE_NUM_SHIFT)
#define SOUND_THD_MASK            (0xffff)
#define SOUND_THD(x)              (x)

#define VAD_DET_CON2       0x64
#define IIR_B0_SHIFT       16
#define IIR_B0_MASK        (0xffff << IIR_B0_SHIFT)
#define IIR_B0(x)          ((x) << IIR_B0_SHIFT)
#define NOISE_ALPHA_SHIFT  8
#define NOISE_ALPHA_MASK   (0xff << NOISE_ALPHA_SHIFT)
#define NOISE_ALPHA(x)     ((x) << NOISE_ALPHA_SHIFT)
#define NOISE_FRM_NUM_MASK (0x7f)
#define NOISE_FRM_NUM(x)   (x)

#define VAD_DET_CON3 0x68
#define IIR_B2_MASK  (0xffff << 16)
#define IIR_B2(x)    ((x) << 16)
#define IIR_B1_MASK  (0xffff)
#define IIR_B1(x)    (x)

#define VAD_DET_CON4 0x6c
#define IIR_A2_MASK  (0xffff << 16)
#define IIR_A2(x)    ((x) << 16)
#define IIR_A1_MASK  (0xffff)
#define IIR_A1(x)    (x)

#define VAD_DET_CON5     0x70
#define IIR_RESULT_SHIFT 16
#define IIR_RESULT_MASK  (0xffff << 16)
#define NOISE_ABS_MASK   (0xffff)
#define NOISE_ABS(x)     (x)

#define VAD_INT                      0x74
#define VAD_DATA_TRANS_INT_FLAG_MASK HAL_BIT(11)
#define VAD_DATA_TRANS_INT_EN_MASK   HAL_BIT(10)
#define VAD_DATA_TRANS_INT_EN        HAL_BIT(10)
#define VAD_IDLE_MASK                HAL_BIT(9)
#define RAM_LOOP_FLGA_MASK           HAL_BIT(8)
#define WORK_TIMEOUT_FLAG_MASK       HAL_BIT(7)
#define IDLE_TIMEOUT_FLAG_MASK       HAL_BIT(6)
#define ERR_INT_FLAG_MASK            HAL_BIT(5)
#define VAD_DET_INT_FLAG_MASK        HAL_BIT(4)
#define WORK_TIMEOUT_INT_EN_MASK     HAL_BIT(3)
#define WORK_TIMEOUT_INT_EN          HAL_BIT(3)
#define IDLE_TIMEOUT_INT_EN_MASK     HAL_BIT(2)
#define IDLE_TIMEOUT_INT_EN          HAL_BIT(2)
#define ERR_INT_EN_MASK              HAL_BIT(1)
#define ERR_INT_EN                   HAL_BIT(1)
#define VAD_DET_INT_EN_MASK          HAL_BIT(0)
#define VAD_DET_INT_EN               HAL_BIT(0)

#define VAD_AUX_CONTROL             0x78
#define SAMPLE_CNT_EN_MASK          HAL_BIT(29)
#define SAMPLE_CNT_EN               HAL_BIT(29)
#define SAMPLE_CNT_DIS              0
#define INT_TRIG_CTRL_EN_MASK       HAL_BIT(28)
#define INT_TRIG_CTRL_EN            HAL_BIT(28)
#define INT_TRIG_CTRL_DIS           0
#define INT_TRIG_VALID_THD_MASK     (0xfff << 16)
#define INT_TRIG_VALID_THD(x)       (((x) - 1) << 16)
#define DATA_TRANS_KBYTE_THD_MASK   (0xff << 4)
#define DATA_TRANS_KBYTE_THD(x)     (((x) - 1) << 4)
#define DATA_TRANS_TRIG_INT_EN_MASK HAL_BIT(2)
#define DATA_TRANS_TRIG_INT_EN      HAL_BIT(2)
#define DATA_TRANS_TRIG_INT_DIS     0
#define RAM_ITF_EN_MASK             HAL_BIT(1)
#define RAM_ITF_EN                  0
#define RAM_ITF_DIS                 HAL_BIT(1)
#define BUS_WRITE_EN_MASK           HAL_BIT(0)
#define BUS_WRITE_EN                HAL_BIT(0)
#define BUS_WRITE_DIS               0

#define VAD_SAMPLE_CNT 0x7c
#define VAD_NOISE_DATA 0x100

/***************************** Structure Definition **************************/

/** vad buf description */
struct VAD_BUF {
    uint32_t begin; /**< The physical ring buffer begin address */
    uint32_t end; /**< The physical ring buffer end address */
    uint32_t cur; /**< The physical cur position when vad stop */
    uint32_t pos; /**< The start pos to be read */
    int size; /**< The buffer valid data size in bytes */
    bool loop; /**< To indicate whether the buffer is overlapped or not */
};

/** vad structure */
struct HAL_VAD_DEV {
    uint32_t base; /**< vad controller physical base address */
    uint32_t ramStartAddr; /**< The physical ring buffer start address, double word align */
    uint32_t ramEndAddr; /**< The physical ring buffer end address, double word align */
    uint32_t audioSrc; /**< Src 0: from i2s; src 1: from pdm */
    uint32_t audioSrcAddr; /**< Audio src controller's FIFO addr */
    uint32_t audioDetChnl; /**< Indicates which channel data used for vad detection */
    uint32_t channels; /**< The total audio channels */
    uint32_t sampleBytes; /**< Bytes per sample */
    uint32_t bufferTime; /* Buffer time in msec */
    uint32_t hclk;
    uint8_t irq;  /**< irq number */
    struct VAD_BUF vbuf;

    int mode; /**< Mode 0: store the audio data after the vad detection;
               *   Mode 1: store the audio data after the vad enable;
               *   Mode 2: don't store the audio data.
               */
    void *buf; /**< The malloc buf used for conversion */
    bool vswitch; /**< The vad switch on/off flag */
    bool h_16Bit; /**< Get he vad high 16 bit data for detection */
};

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_VAD_Init(struct AUDIO_DAI *dai, struct HAL_VAD_DEV *vad);
HAL_Status HAL_VAD_Deinit(struct AUDIO_DAI *dai);
HAL_Status HAL_VAD_Supsend(struct AUDIO_DAI *dai);
HAL_Status HAL_VAD_Resume(struct AUDIO_DAI *dai);
HAL_Status HAL_VAD_Start(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_VAD_Stop(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_VAD_SetAudioSource(struct AUDIO_DAI *dai, uint32_t source);
HAL_Status HAL_VAD_SetMode(struct AUDIO_DAI *dai, int mode);
HAL_Status HAL_VAD_SetBufferTime(struct AUDIO_DAI *dai, uint32_t bufferTime);
HAL_Status HAL_VAD_SetDetectChannel(struct AUDIO_DAI *dai,
                                    uint32_t detectChannel);
HAL_Status HAL_VAD_Config(struct AUDIO_DAI *dai, uint8_t stream,
                          struct AUDIO_PARAMS *params);
HAL_Status HAL_VAD_ConfigRingBuffer(struct AUDIO_DAI *dai,
                                    uint32_t start, uint32_t end);
HAL_Status HAL_VAD_SetPeriodSize(struct AUDIO_DAI *dai, uint32_t kbytes);
HAL_Status HAL_VAD_EnableBusMode(struct AUDIO_DAI *dai, uint8_t en);

HAL_Status HAL_VAD_IrqHandler(struct HAL_VAD_DEV *vad);

#endif

/** @} */

/** @} */
