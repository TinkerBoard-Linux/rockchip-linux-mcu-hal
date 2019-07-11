/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup I2S
 *  @{
 */

#ifndef _HAL_I2S_H_
#define _HAL_I2S_H_

#include "hal_audio.h"
#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup I2S_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/*
 * TXCR
 * transmit operation control register
 */
#define I2S_TDM_TXCR_PATH_SHIFT(x) (23 + (x) * 2)
#define I2S_TDM_TXCR_PATH_MASK(x)  (0x3 << I2S_TDM_TXCR_PATH_SHIFT(x))
#define I2S_TDM_TXCR_PATH(x, v)    ((v) << I2S_TDM_TXCR_PATH_SHIFT(x))
#define I2S_TDM_TXCR_RCNT_SHIFT    17
#define I2S_TDM_TXCR_RCNT_MASK     (0x3f << I2S_TDM_TXCR_RCNT_SHIFT)
#define I2S_TDM_TXCR_CSR_SHIFT     15
#define I2S_TDM_TXCR_CSR(x)        (x << I2S_TDM_TXCR_CSR_SHIFT)
#define I2S_TDM_TXCR_CSR_MASK      (3 << I2S_TDM_TXCR_CSR_SHIFT)
#define I2S_TDM_TXCR_HWT           HAL_BIT(14)
#define I2S_TDM_TXCR_SJM_SHIFT     12
#define I2S_TDM_TXCR_SJM_R         (0 << I2S_TDM_TXCR_SJM_SHIFT)
#define I2S_TDM_TXCR_SJM_L         (1 << I2S_TDM_TXCR_SJM_SHIFT)
#define I2S_TDM_TXCR_FBM_SHIFT     11
#define I2S_TDM_TXCR_FBM_MSB       (0 << I2S_TDM_TXCR_FBM_SHIFT)
#define I2S_TDM_TXCR_FBM_LSB       (1 << I2S_TDM_TXCR_FBM_SHIFT)
#define I2S_TDM_TXCR_IBM_SHIFT     9
#define I2S_TDM_TXCR_IBM_NORMAL    (0 << I2S_TDM_TXCR_IBM_SHIFT)
#define I2S_TDM_TXCR_IBM_LSJM      (1 << I2S_TDM_TXCR_IBM_SHIFT)
#define I2S_TDM_TXCR_IBM_RSJM      (2 << I2S_TDM_TXCR_IBM_SHIFT)
#define I2S_TDM_TXCR_IBM_MASK      (3 << I2S_TDM_TXCR_IBM_SHIFT)
#define I2S_TDM_TXCR_PBM_SHIFT     7
#define I2S_TDM_TXCR_PBM_MODE(x)   (x << I2S_TDM_TXCR_PBM_SHIFT)
#define I2S_TDM_TXCR_PBM_MASK      (3 << I2S_TDM_TXCR_PBM_SHIFT)
#define I2S_TDM_TXCR_TFS_SHIFT     5
#define I2S_TDM_TXCR_TFS_I2S       (0 << I2S_TDM_TXCR_TFS_SHIFT)
#define I2S_TDM_TXCR_TFS_PCM       (1 << I2S_TDM_TXCR_TFS_SHIFT)
#define I2S_TDM_TXCR_TFS_TDM_PCM   (2 << I2S_TDM_TXCR_TFS_SHIFT)
#define I2S_TDM_TXCR_TFS_TDM_I2S   (3 << I2S_TDM_TXCR_TFS_SHIFT)
#define I2S_TDM_TXCR_TFS_MASK      (3 << I2S_TDM_TXCR_TFS_SHIFT)
#define I2S_TDM_TXCR_VDW_SHIFT     0
#define I2S_TDM_TXCR_VDW(x)        ((x - 1) << I2S_TDM_TXCR_VDW_SHIFT)
#define I2S_TDM_TXCR_VDW_MASK      (0x1f << I2S_TDM_TXCR_VDW_SHIFT)

/*
 * RXCR
 * receive operation control register
 */
#define I2S_TDM_RXCR_PATH_SHIFT(x) (17 + (x) * 2)
#define I2S_TDM_RXCR_PATH_MASK(x)  (0x3 << I2S_TDM_RXCR_PATH_SHIFT(x))
#define I2S_TDM_RXCR_PATH(x, v)    ((v) << I2S_TDM_RXCR_PATH_SHIFT(x))
#define I2S_TDM_RXCR_CSR_SHIFT     15
#define I2S_TDM_RXCR_CSR(x)        (x << I2S_TDM_RXCR_CSR_SHIFT)
#define I2S_TDM_RXCR_CSR_MASK      (3 << I2S_TDM_RXCR_CSR_SHIFT)
#define I2S_TDM_RXCR_HWT           HAL_BIT(14)
#define I2S_TDM_RXCR_SJM_SHIFT     12
#define I2S_TDM_RXCR_SJM_R         (0 << I2S_TDM_RXCR_SJM_SHIFT)
#define I2S_TDM_RXCR_SJM_L         (1 << I2S_TDM_RXCR_SJM_SHIFT)
#define I2S_TDM_RXCR_FBM_SHIFT     11
#define I2S_TDM_RXCR_FBM_MSB       (0 << I2S_TDM_RXCR_FBM_SHIFT)
#define I2S_TDM_RXCR_FBM_LSB       (1 << I2S_TDM_RXCR_FBM_SHIFT)
#define I2S_TDM_RXCR_IBM_SHIFT     9
#define I2S_TDM_RXCR_IBM_NORMAL    (0 << I2S_TDM_RXCR_IBM_SHIFT)
#define I2S_TDM_RXCR_IBM_LSJM      (1 << I2S_TDM_RXCR_IBM_SHIFT)
#define I2S_TDM_RXCR_IBM_RSJM      (2 << I2S_TDM_RXCR_IBM_SHIFT)
#define I2S_TDM_RXCR_IBM_MASK      (3 << I2S_TDM_RXCR_IBM_SHIFT)
#define I2S_TDM_RXCR_PBM_SHIFT     7
#define I2S_TDM_RXCR_PBM_MODE(x)   (x << I2S_TDM_RXCR_PBM_SHIFT)
#define I2S_TDM_RXCR_PBM_MASK      (3 << I2S_TDM_RXCR_PBM_SHIFT)
#define I2S_TDM_RXCR_TFS_SHIFT     5
#define I2S_TDM_RXCR_TFS_I2S       (0 << I2S_TDM_RXCR_TFS_SHIFT)
#define I2S_TDM_RXCR_TFS_PCM       (1 << I2S_TDM_RXCR_TFS_SHIFT)
#define I2S_TDM_RXCR_TFS_TDM_PCM   (2 << I2S_TDM_RXCR_TFS_SHIFT)
#define I2S_TDM_RXCR_TFS_TDM_I2S   (3 << I2S_TDM_RXCR_TFS_SHIFT)
#define I2S_TDM_RXCR_TFS_MASK      (3 << I2S_TDM_RXCR_TFS_SHIFT)
#define I2S_TDM_RXCR_VDW_SHIFT     0
#define I2S_TDM_RXCR_VDW(x)        ((x - 1) << I2S_TDM_RXCR_VDW_SHIFT)
#define I2S_TDM_RXCR_VDW_MASK      (0x1f << I2S_TDM_RXCR_VDW_SHIFT)

/*
 * CKR
 * clock generation register
 */
#define I2S_TDM_CKR_TRCM_SHIFT  28
#define I2S_TDM_CKR_TRCM(x)     (x << I2S_TDM_CKR_TRCM_SHIFT)
#define I2S_TDM_CKR_TRCM_TXRX   (0 << I2S_TDM_CKR_TRCM_SHIFT)
#define I2S_TDM_CKR_TRCM_TXONLY (1 << I2S_TDM_CKR_TRCM_SHIFT)
#define I2S_TDM_CKR_TRCM_RXONLY (2 << I2S_TDM_CKR_TRCM_SHIFT)
#define I2S_TDM_CKR_TRCM_MASK   (3 << I2S_TDM_CKR_TRCM_SHIFT)
#define I2S_TDM_CKR_MSS_SHIFT   27
#define I2S_TDM_CKR_MSS_MASTER  (0 << I2S_TDM_CKR_MSS_SHIFT)
#define I2S_TDM_CKR_MSS_SLAVE   (1 << I2S_TDM_CKR_MSS_SHIFT)
#define I2S_TDM_CKR_MSS_MASK    (1 << I2S_TDM_CKR_MSS_SHIFT)
#define I2S_TDM_CKR_CKP_SHIFT   26
#define I2S_TDM_CKR_CKP_NEG     (0 << I2S_TDM_CKR_CKP_SHIFT)
#define I2S_TDM_CKR_CKP_POS     (1 << I2S_TDM_CKR_CKP_SHIFT)
#define I2S_TDM_CKR_CKP_MASK    (1 << I2S_TDM_CKR_CKP_SHIFT)
#define I2S_TDM_CKR_RLP_SHIFT   25
#define I2S_TDM_CKR_RLP_NORMAL  (0 << I2S_TDM_CKR_RLP_SHIFT)
#define I2S_TDM_CKR_RLP_OPPSITE (1 << I2S_TDM_CKR_RLP_SHIFT)
#define I2S_TDM_CKR_TLP_SHIFT   24
#define I2S_TDM_CKR_TLP_NORMAL  (0 << I2S_TDM_CKR_TLP_SHIFT)
#define I2S_TDM_CKR_TLP_OPPSITE (1 << I2S_TDM_CKR_TLP_SHIFT)
#define I2S_TDM_CKR_MDIV_SHIFT  16
#define I2S_TDM_CKR_MDIV(x)     ((x - 1) << I2S_TDM_CKR_MDIV_SHIFT)
#define I2S_TDM_CKR_MDIV_MASK   (0xff << I2S_TDM_CKR_MDIV_SHIFT)
#define I2S_TDM_CKR_RSD_SHIFT   8
#define I2S_TDM_CKR_RSD(x)      ((x - 1) << I2S_TDM_CKR_RSD_SHIFT)
#define I2S_TDM_CKR_RSD_MASK    (0xff << I2S_TDM_CKR_RSD_SHIFT)
#define I2S_TDM_CKR_TSD_SHIFT   0
#define I2S_TDM_CKR_TSD(x)      ((x - 1) << I2S_TDM_CKR_TSD_SHIFT)
#define I2S_TDM_CKR_TSD_MASK    (0xff << I2S_TDM_CKR_TSD_SHIFT)

/*
 * FIFOLR
 * FIFO level register
 */
#define I2S_TDM_FIFOLR_RFL_SHIFT  24
#define I2S_TDM_FIFOLR_RFL_MASK   (0x3f << I2S_TDM_FIFOLR_RFL_SHIFT)
#define I2S_TDM_FIFOLR_TFL3_SHIFT 18
#define I2S_TDM_FIFOLR_TFL3_MASK  (0x3f << I2S_TDM_FIFOLR_TFL3_SHIFT)
#define I2S_TDM_FIFOLR_TFL2_SHIFT 12
#define I2S_TDM_FIFOLR_TFL2_MASK  (0x3f << I2S_TDM_FIFOLR_TFL2_SHIFT)
#define I2S_TDM_FIFOLR_TFL1_SHIFT 6
#define I2S_TDM_FIFOLR_TFL1_MASK  (0x3f << I2S_TDM_FIFOLR_TFL1_SHIFT)
#define I2S_TDM_FIFOLR_TFL0_SHIFT 0
#define I2S_TDM_FIFOLR_TFL0_MASK  (0x3f << I2S_TDM_FIFOLR_TFL0_SHIFT)

/*
 * DMACR
 * DMA control register
 */
#define I2S_TDM_DMACR_RDE_SHIFT   24
#define I2S_TDM_DMACR_RDE_DISABLE (0 << I2S_TDM_DMACR_RDE_SHIFT)
#define I2S_TDM_DMACR_RDE_ENABLE  (1 << I2S_TDM_DMACR_RDE_SHIFT)
#define I2S_TDM_DMACR_RDL_SHIFT   16
#define I2S_TDM_DMACR_RDL(x)      ((x - 1) << I2S_TDM_DMACR_RDL_SHIFT)
#define I2S_TDM_DMACR_RDL_MASK    (0x1f << I2S_TDM_DMACR_RDL_SHIFT)
#define I2S_TDM_DMACR_TDE_SHIFT   8
#define I2S_TDM_DMACR_TDE_DISABLE (0 << I2S_TDM_DMACR_TDE_SHIFT)
#define I2S_TDM_DMACR_TDE_ENABLE  (1 << I2S_TDM_DMACR_TDE_SHIFT)
#define I2S_TDM_DMACR_TDL_SHIFT   0
#define I2S_TDM_DMACR_TDL(x)      ((x) << I2S_TDM_DMACR_TDL_SHIFT)
#define I2S_TDM_DMACR_TDL_MASK    (0x1f << I2S_TDM_DMACR_TDL_SHIFT)

/*
 * INTCR
 * interrupt control register
 */
#define I2S_TDM_INTCR_RFT_SHIFT     20
#define I2S_TDM_INTCR_RFT(x)        ((x - 1) << I2S_TDM_INTCR_RFT_SHIFT)
#define I2S_TDM_INTCR_RXOIC         HAL_BIT(18)
#define I2S_TDM_INTCR_RXOIE_SHIFT   17
#define I2S_TDM_INTCR_RXOIE_DISABLE (0 << I2S_TDM_INTCR_RXOIE_SHIFT)
#define I2S_TDM_INTCR_RXOIE_ENABLE  (1 << I2S_TDM_INTCR_RXOIE_SHIFT)
#define I2S_TDM_INTCR_RXFIE_SHIFT   16
#define I2S_TDM_INTCR_RXFIE_DISABLE (0 << I2S_TDM_INTCR_RXFIE_SHIFT)
#define I2S_TDM_INTCR_RXFIE_ENABLE  (1 << I2S_TDM_INTCR_RXFIE_SHIFT)
#define I2S_TDM_INTCR_TFT_SHIFT     4
#define I2S_TDM_INTCR_TFT(x)        ((x - 1) << I2S_TDM_INTCR_TFT_SHIFT)
#define I2S_TDM_INTCR_TFT_MASK      (0x1f << I2S_TDM_INTCR_TFT_SHIFT)
#define I2S_TDM_INTCR_TXUIC         HAL_BIT(2)
#define I2S_TDM_INTCR_TXUIE_SHIFT   1
#define I2S_TDM_INTCR_TXUIE_DISABLE (0 << I2S_TDM_INTCR_TXUIE_SHIFT)
#define I2S_TDM_INTCR_TXUIE_ENABLE  (1 << I2S_TDM_INTCR_TXUIE_SHIFT)

/*
 * INTSR
 * interrupt status register
 */
#define I2S_TDM_INTSR_TXEIE_SHIFT   0
#define I2S_TDM_INTSR_TXEIE_DISABLE (0 << I2S_TDM_INTSR_TXEIE_SHIFT)
#define I2S_TDM_INTSR_TXEIE_ENABLE  (1 << I2S_TDM_INTSR_TXEIE_SHIFT)
#define I2S_TDM_INTSR_RXOI_SHIFT    17
#define I2S_TDM_INTSR_RXOI_INA      (0 << I2S_TDM_INTSR_RXOI_SHIFT)
#define I2S_TDM_INTSR_RXOI_ACT      (1 << I2S_TDM_INTSR_RXOI_SHIFT)
#define I2S_TDM_INTSR_RXFI_SHIFT    16
#define I2S_TDM_INTSR_RXFI_INA      (0 << I2S_TDM_INTSR_RXFI_SHIFT)
#define I2S_TDM_INTSR_RXFI_ACT      (1 << I2S_TDM_INTSR_RXFI_SHIFT)
#define I2S_TDM_INTSR_TXUI_SHIFT    1
#define I2S_TDM_INTSR_TXUI_INA      (0 << I2S_TDM_INTSR_TXUI_SHIFT)
#define I2S_TDM_INTSR_TXUI_ACT      (1 << I2S_TDM_INTSR_TXUI_SHIFT)
#define I2S_TDM_INTSR_TXEI_SHIFT    0
#define I2S_TDM_INTSR_TXEI_INA      (0 << I2S_TDM_INTSR_TXEI_SHIFT)
#define I2S_TDM_INTSR_TXEI_ACT      (1 << I2S_TDM_INTSR_TXEI_SHIFT)

/*
 * XFER
 * Transfer start register
 */
#define I2S_TDM_XFER_RXS_SHIFT 1
#define I2S_TDM_XFER_RXS_STOP  (0 << I2S_TDM_XFER_RXS_SHIFT)
#define I2S_TDM_XFER_RXS_START (1 << I2S_TDM_XFER_RXS_SHIFT)
#define I2S_TDM_XFER_TXS_SHIFT 0
#define I2S_TDM_XFER_TXS_STOP  (0 << I2S_TDM_XFER_TXS_SHIFT)
#define I2S_TDM_XFER_TXS_START (1 << I2S_TDM_XFER_TXS_SHIFT)

/*
 * CLR
 * clear SCLK domain logic register
 */
#define I2S_TDM_CLR_RXC HAL_BIT(1)
#define I2S_TDM_CLR_TXC HAL_BIT(0)

/*
 * TXDR
 * Transimt FIFO data register, write only.
 */
#define I2S_TDM_TXDR_MASK (0xff)

/*
 * RXDR
 * Receive FIFO data register, write only.
 */
#define I2S_TDM_RXDR_MASK (0xff)

/*
 * TDM_CTRL
 * TDM ctrl register
 */
#define TDM_FSYNC_WIDTH_SEL1_SHIFT 18
#define TDM_FSYNC_WIDTH_SEL1_MSK   (0X7 << TDM_FSYNC_WIDTH_SEL1_SHIFT)
#define TDM_FSYNC_WIDTH_SEL1(x)    ((x - 1) << TDM_FSYNC_WIDTH_SEL1_SHIFT)
#define TDM_FSYNC_WIDTH_SEL0_MSK   HAL_BIT(17)
#define TDM_FSYNC_WIDTH_HALF_FRAME 0
#define TDM_FSYNC_WIDTH_ONE_FRAME  HAL_BIT(17)
#define TDM_SHIFT_CTRL_SHIFT       14
#define TDM_SHIFT_CTRL_MSK         (0x7 << TDM_SHIFT_CTRL_SHIFT)
#define TDM_SHIFT_CTRL(x)          ((x) << TDM_SHIFT_CTRL_SHIFT)
#define TDM_SLOT_BIT_WIDTH_SHIFT   9
#define TDM_SLOT_BIT_WIDTH_MSK     (0x1f << TDM_SLOT_BIT_WIDTH_SHIFT)
#define TDM_SLOT_BIT_WIDTH(x)      ((x - 1) << TDM_SLOT_BIT_WIDTH_SHIFT)
#define TDM_FRAME_WIDTH_SHIFT      0
#define TDM_FRAME_WIDTH_MSK        (0x1ff << TDM_FRAME_WIDTH_SHIFT)
#define TDM_FRAME_WIDTH(x)         ((x - 1) << TDM_FRAME_WIDTH_SHIFT)

/*
 * CLKDIV
 * Mclk div register
 */
#define I2S_TDM_CLKDIV_TXM_SHIFT 0
#define I2S_TDM_CLKDIV_TXM(x)    ((x - 1) << I2S_TDM_CLKDIV_TXM_SHIFT)
#define I2S_TDM_CLKDIV_TXM_MASK  (0xff << I2S_TDM_CLKDIV_TXM_SHIFT)
#define I2S_TDM_CLKDIV_RXM_SHIFT 8
#define I2S_TDM_CLKDIV_RXM(x)    ((x - 1) << I2S_TDM_CLKDIV_RXM_SHIFT)
#define I2S_TDM_CLKDIV_RXM_MASK  (0xff << I2S_TDM_CLKDIV_RXM_SHIFT)

/* channel select */
#define I2S_TDM_CSR_SHIFT 15
#define I2S_TDM_CHN_2     (0 << I2S_TDM_CSR_SHIFT)
#define I2S_TDM_CHN_4     (1 << I2S_TDM_CSR_SHIFT)
#define I2S_TDM_CHN_6     (2 << I2S_TDM_CSR_SHIFT)
#define I2S_TDM_CHN_8     (3 << I2S_TDM_CSR_SHIFT)

/* I2S REGS */
#define I2S_TDM_TXCR     (0x0000)
#define I2S_TDM_RXCR     (0x0004)
#define I2S_TDM_CKR      (0x0008)
#define I2S_TDM_TXFIFOLR (0x000c)
#define I2S_TDM_DMACR    (0x0010)
#define I2S_TDM_INTCR    (0x0014)
#define I2S_TDM_INTSR    (0x0018)
#define I2S_TDM_XFER     (0x001c)
#define I2S_TDM_CLR      (0x0020)
#define I2S_TDM_TXDR     (0x0024)
#define I2S_TDM_RXDR     (0x0028)
#define I2S_TDM_RXFIFOLR (0x002c)
#define I2S_TDM_TDM_TXCR (0x0030)
#define I2S_TDM_TDM_RXCR (0x0034)
#define I2S_TDM_CLKDIV   (0x0038)

/***************************** Structure Definition **************************/

/** i2s dev struct */
struct HAL_I2S_DEV {
    uint32_t base;
    uint32_t mclk;
    uint32_t hclk;
    uint16_t bclkFs;

    struct AUDIO_DAI_DMA_DATA rxDmaData;
    struct AUDIO_DAI_DMA_DATA txDmaData;

    bool isMasterMode;
    bool tdmMode;
};

/** @} */
/***************************** Function Declare ******************************/

HAL_Status HAL_I2S_Supsend(struct AUDIO_DAI *dai);
HAL_Status HAL_I2S_Resume(struct AUDIO_DAI *dai);
HAL_Status HAL_I2S_Init(struct AUDIO_DAI *dai, struct HAL_I2S_DEV *i2s);
HAL_Status HAL_I2S_Deinit(struct AUDIO_DAI *dai);
HAL_Status HAL_I2S_Enable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_I2S_Disable(struct AUDIO_DAI *dai, uint8_t stream);
HAL_Status HAL_I2S_Config(struct AUDIO_DAI *dai, uint8_t stream,
                          struct AUDIO_PARAMS *params);

#endif

/** @} */

/** @} */
