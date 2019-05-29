/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

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

/* PDM REGS */
#define PDM_SYSCONFIG   (0x0000)
#define PDM_CTRL0       (0x0004)
#define PDM_CTRL1       (0x0008)
#define PDM_CLK_CTRL    (0x000c)
#define PDM_HPF_CTRL    (0x0010)
#define PDM_FIFO_CTRL   (0x0014)
#define PDM_DMA_CTRL    (0x0018)
#define PDM_INT_EN      (0x001c)
#define PDM_INT_CLR     (0x0020)
#define PDM_INT_ST      (0x0024)
#define PDM_RXFIFO_DATA (0x0030)
#define PDM_DATA_VALID  (0x0054)
#define PDM_VERSION     (0x0058)

/* PDM_SYSCONFIG */
#define PDM_RX_MASK     (0x1 << 2)
#define PDM_RX_START    (0x1 << 2)
#define PDM_RX_STOP     (0x0 << 2)
#define PDM_RX_CLR_MASK (0x1 << 0)
#define PDM_RX_CLR_WR   (0x1 << 0)
#define PDM_RX_CLR_DONE (0x0 << 0)

/* PDM CTRL0 */
#define PDM_PATH_MSK (0xf << 27)
#define PDM_MODE_MSK HAL_BIT(31)
#define PDM_MODE_RJ  0
#define PDM_MODE_LJ  HAL_BIT(31)
#define PDM_PATH3_EN HAL_BIT(30)
#define PDM_PATH2_EN HAL_BIT(29)
#define PDM_PATH1_EN HAL_BIT(28)
#define PDM_PATH0_EN HAL_BIT(27)
#define PDM_HWT_EN   HAL_BIT(26)
#define PDM_VDW_MSK  (0x1f << 0)
#define PDM_VDW(X) ((X - 1) << 0)

/* PDM CTRL1 */
#define PDM_FD_NUMERATOR_SFT   16
#define PDM_FD_NUMERATOR_MSK   (0xffff << PDM_FD_NUMERATOR_SFT)
#define PDM_FD_DENOMINATOR_SFT 0
#define PDM_FD_DENOMINATOR_MSK (0xffff)

/* PDM CLK CTRL */
#define PDM_CLK_FD_RATIO_MSK HAL_BIT(6)
#define PDM_CLK_FD_RATIO_40  (0X0 << 6)
#define PDM_CLK_FD_RATIO_35  HAL_BIT(6)
#define PDM_CLK_MSK          HAL_BIT(5)
#define PDM_CLK_EN           HAL_BIT(5)
#define PDM_CLK_DIS          (0x0 << 5)
#define PDM_CKP_MSK          HAL_BIT(3)
#define PDM_CKP_NORMAL       (0x0 << 3)
#define PDM_CKP_INVERTED     HAL_BIT(3)
#define PDM_DS_RATIO_MSK     (0x7 << 0)
#define PDM_CLK_320FS        (0x0 << 0)
#define PDM_CLK_640FS        (0x1 << 0)
#define PDM_CLK_1280FS       (0x2 << 0)
#define PDM_CLK_2560FS       (0x3 << 0)
#define PDM_CLK_5120FS       (0x4 << 0)

/* PDM HPF CTRL */
#define PDM_HPF_LE     HAL_BIT(3)
#define PDM_HPF_RE     HAL_BIT(2)
#define PDM_HPF_CF_MSK (0x3 << 0)
#define PDM_HPF_3P79HZ (0x0 << 0)
#define PDM_HPF_60HZ   (0x1 << 0)
#define PDM_HPF_243HZ  (0x2 << 0)
#define PDM_HPF_493HZ  (0x3 << 0)

/* PDM DMA CTRL */
#define PDM_DMA_RD_MSK  HAL_BIT(8)
#define PDM_DMA_RD_EN   HAL_BIT(8)
#define PDM_DMA_RD_DIS  (0x0 << 8)
#define PDM_DMA_RDL_MSK (0x7f << 0)
#define PDM_DMA_RDL(X) ((X - 1) << 0)

/** PDM CLK RATE */
#define PDM_FPGA_CLK_RATE (72000000)
#define PDM_CLK_RATE      (100000000)
/***************************** Structure Definition **************************/

/** pdm dev struct */
struct HAL_PDM_DEV {
    uint32_t base;
    uint32_t mclk;
    uint32_t mclkRate;
    uint32_t hclk;
    uint32_t reset;

    struct AUDIO_DAI_DMA_DATA rxDmaData;
};

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_PDM_Supsend(struct AUDIO_DAI *dai);
HAL_Status HAL_PDM_Resume(struct AUDIO_DAI *dai);
HAL_Status HAL_PDM_Init(struct AUDIO_DAI *dai, struct HAL_PDM_DEV *pdm);
HAL_Status HAL_PDM_Deinit(struct AUDIO_DAI *dai);
HAL_Status HAL_PDM_Enable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_PDM_Disable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_PDM_Config(struct AUDIO_DAI *dai, uint8_t stream,
                          struct AUDIO_PARAMS *params);

#endif

/** @} */

/** @} */
