/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup SFC
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The SFC driver can be used as follows:

 This host driver need to be used in conjunction with device flash driver like
 hal_snor.c

 (#) DMA mode: Register handler(HAL_SFC_IRQHandler).
 (#) DMA mode: Unmask TRANSM interrupt(HAL_SFC_UnMaskTransmInterrupt).
 (#) Initialize SFC controller(HAL_SFC_Init);
 (#) Send SFC request:
    (##) Normal mode: (SFC_Request);
    (##) DMA mode: (SFC_Request_DMA);
 (#) DMA mode: Handling interrupt return in DMA mode SFC request.
 (#) Configure XIP mode if needed.(HAL_SFC_XipConfig)

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_SFC_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/* SFC_CTRL */
#define SFC_CTRL_SHIFTPHASE_NEGEDGE 1

/* SFC_RCVR */
#define SFC_RCVR_RCVR_RESET (1 << SFC_RCVR_RCVR_SHIFT) /* Recover The SFC State Machine */

/* SFC_ISR */
#define SFC_ISR_DMAS_ACTIVE   (1 << SFC_ISR_DMAS_SHIFT) /* DMA Finish Interrupt Active */
#define SFC_ISR_NSPIS_ACTIVE  (1 << SFC_ISR_NSPIS_SHIFT) /* SPI Error Interrupt Active */
#define SFC_ISR_AHBS_ACTIVE   (1 << SFC_ISR_AHBS_SHIFT) /* AHB Error Interrupt Active */
#define SFC_ISR_TRANSS_ACTIVE (1 << SFC_ISR_TRANSS_SHIFT) /* Transfer finish Interrupt Active */
#define SFC_ISR_TXES_ACTIVE   (1 << SFC_ISR_TXES_SHIFT) /* Transmit FIFO Empty Interrupt Active */
#define SFC_ISR_TXOS_ACTIVE   (1 << SFC_ISR_TXOS_SHIFT) /* Transmit FIFO Overflow Interrupt Active */
#define SFC_ISR_RXUS_ACTIVE   (1 << SFC_ISR_RXUS_SHIFT) /* Receive FIFO Underflow Interrupt Active */
#define SFC_ISR_RXFS_ACTIVE   (1 << SFC_ISR_RXFS_SHIFT) /* Receive FIFO Full Interrupt Active */

/* SFC_FSR */
#define SFC_FSR_RXFS_EMPTY (1 << SFC_FSR_RXFS_SHIFT) /* Receive FIFO Full */
#define SFC_FSR_RXES_EMPTY (1 << SFC_FSR_RXES_SHIFT) /* Receive FIFO Empty */
#define SFC_FSR_TXFS_FULL  (1 << SFC_FSR_TXFS_SHIFT) /* Transmit FIFO Full */
#define SFC_FSR_TXES_EMPTY (1 << SFC_FSR_TXES_SHIFT) /* Transmit FIFO Empty */

/* SFC_SR */
#define SFC_SR_SR_BUSY (1 << SFC_SR_SR_SHIFT) /* When busy, don¡¯t set the control register. */

/* SFC_DMATR */
#define SFC_DMATR_DMATR_START (1 << SFC_DMATR_DMATR_SHIFT) /* Write 1 to start the dma transfer. */

/* SFC_RISR */
#define SFC_RISR_TRANSS_ACTIVE (1 << SFC_RISR_TRANSS_SHIFT)

/********************* Private Structure Definition **************************/

typedef union {
    uint32_t d32;
    struct {
        unsigned txempty : 1; /* tx fifo empty */
        unsigned txfull : 1; /* tx fifo full */
        unsigned rxempty : 1; /* rx fifo empty */
        unsigned rxfull : 1; /* tx fifo empty interrupt mask */
        unsigned reserved7_4 : 4;
        unsigned txlevel : 5; /* tx fifo: 0: full; 1: left 1 entry; ... */
        unsigned reserved15_13 : 3;
        unsigned rxlevel : 5; /* rx fifo: 0: full; 1: left 1 entry; ... */
        unsigned reserved31_21 : 11;
    } b;
} SFCFSR_DATA;

/** SFC_XMMC bit union */
typedef union {
    uint32_t d32;
    struct {
        unsigned reserverd1 : 5;
        unsigned devHwEn : 1; /* device Hwrite Enable */
        unsigned prefetch : 1; /* prefetch enable */
        unsigned uincrPrefetchEn : 1; /* undefine INCR Burst Prefetch Enable */
        unsigned uincrLen : 4; /* undefine INCR length */
        unsigned devWrapEn : 1; /* device Wrap Enable */
        unsigned devIncrEn : 1; /* device INCR2/4/8/16 Enable */
        unsigned devUdfincrEn : 1; /* device Undefine INCR Enable */
        unsigned reserved2 : 17;
    } b;
} SFCXMMCCTRL_DATA;

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static void SFC_Reset(struct SFC_REG *pReg)
{
    int32_t timeout = 10000;

    pReg->RCVR = SFC_RCVR_RCVR_RESET;
    while ((pReg->RCVR == SFC_RCVR_RCVR_RESET) && (timeout > 0)) {
        HAL_DelayUs(1);
        timeout--;
    }
    pReg->ICLR = 0xFFFFFFFF;
}

#ifdef SFC_MODE_XMMC_MODE_EN_SHIFT

HAL_Status SFC_XmmcDevRegionInit(struct HAL_SFC_HOST *host)
{
    host->instance->DEVRGN = 25;    /* 32MB for each region */
    host->instance->DEVSIZE0 = 24;     /* 16MB for dev0 */
    host->instance->DEVSIZE1 = 24;     /* 16MB for dev1 */

    return HAL_OK;
}

#endif
/********************* Public Function Definition ****************************/

/** @defgroup SFC_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 (#) Operate in blocking mode (DMA IT) using HAL_SFC_Request_DMA();
 (#) Operate in blocking mode (Normal) using HAL_SFC_Request();

 @endverbatim
 *  @{
 */

/**
 * @brief  Configuration Register Transfer Flash Protocol in normal mode.
 * @param  host: SFC host.
 * @param  sfcmd: SFC_CMD set.
 * @param  sfctrl: SFC_CTRL set.
 * @param  addr: flash device address.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_XferRequest(struct HAL_SFC_HOST *host, uint32_t sfcmd, uint32_t sfctrl, uint32_t addr)
{
    int32_t ret = HAL_OK;
    SFCCMD_DATA cmd;
    SFCCTRL_DATA ctrl;
    __IO SFCFSR_DATA fifostat;
    int32_t timeout = 0;
    uint32_t i, words;
    uint32_t *pData = (uint32_t *)host->data;
    struct SFC_REG *pReg = host->instance;

    cmd.d32 = sfcmd;
    ctrl.d32 = sfctrl;

    if (!(pReg->FSR & SFC_FSR_TXES_EMPTY) || !(pReg->FSR & SFC_FSR_RXES_EMPTY) || (pReg->SR & SFC_SR_SR_BUSY))
        SFC_Reset(pReg);

    if (cmd.b.addrbits == SFC_ADDR_XBITS) {
        if (!ctrl.b.addrbits)
            return HAL_INVAL;
        pReg->ABIT = ctrl.b.addrbits - 1; /* add 1 inside the controller */
    }

    ctrl.b.sps = SFC_CTRL_SHIFTPHASE_NEGEDGE;
    pReg->CTRL = ctrl.d32;
    pReg->CMD = cmd.d32;
    if (cmd.b.addrbits)
        pReg->ADDR = addr;

    if (cmd.b.datasize) {
        if (cmd.b.rw == SFC_WRITE) {
            words = (cmd.b.datasize + 3) >> 2;
            while (words) {
                fifostat.d32 = pReg->FSR;
                if (fifostat.b.txlevel > 0) {
                    uint32_t count = HAL_MIN(words, fifostat.b.txlevel);

                    for (i = 0; i < count; i++) {
                        pReg->DATA = *pData++;
                        words--;
                    }
                    if (words == 0)
                        break;
                    timeout = 0;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }
        } else {
            uint32_t bytes = cmd.b.datasize & 0x3;

            words = cmd.b.datasize >> 2;
            while (words) {
                fifostat.d32 = pReg->FSR;
                if (fifostat.b.rxlevel > 0) {
                    uint32_t count = HAL_MIN(words, fifostat.b.rxlevel);

                    for (i = 0; i < count; i++) {
                        *pData++ = pReg->DATA;
                        words--;
                    }
                    if (0 == words)
                        break;
                    timeout = 0;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }

            timeout = 0;
            while (bytes) {
                fifostat.d32 = pReg->FSR;
                if (fifostat.b.rxlevel > 0) {
                    uint8_t *pData1 = (uint8_t *)pData;
                    words = pReg->DATA;
                    for (i = 0; i < bytes; i++)
                        pData1[i] = (uint8_t)((words >> (i * 8)) & 0xFF);
                    break;
                } else {
                    HAL_DelayUs(1);
                    if (timeout++ > 10000) {
                        ret = HAL_TIMEOUT;
                        break;
                    }
                }
            }
        }
    }

    timeout = 0; /*wait cmd or data send complete*/
    while (pReg->SR & SFC_SR_SR_BUSY) {
        HAL_DelayUs(1);
        if (timeout++ > 100000) { /*wait 100ms*/
            ret = HAL_TIMEOUT;
            break;
        }
    }
    HAL_DelayUs(1); //CS# High Time (read/write) >100ns

    return ret;
}

/**
 * @brief  Configuration Register Transfer Flash Protocol in DMA mode.
 * @param  host: SFC host.
 * @param  sfcmd: SFC_CMD set.
 * @param  sfctrl: SFC_CTRL set.
 * @param  addr: flash device address.
 * @return HAL_Status.
 * Only use for data transmission cmd
 */
HAL_Status HAL_SFC_XferRequest_DMA(struct HAL_SFC_HOST *host, uint32_t sfcmd, uint32_t sfctrl, uint32_t addr)
{
    int32_t ret = HAL_OK;
    SFCCMD_DATA cmd;
    SFCCTRL_DATA ctrl;
    struct SFC_REG *pReg = host->instance;

    cmd.d32 = sfcmd;
    ctrl.d32 = sfctrl;
    host->status = HAL_LOCKED;

    if (!(pReg->FSR & SFC_FSR_TXES_EMPTY) || !(pReg->FSR & SFC_FSR_RXES_EMPTY) || (pReg->SR & SFC_SR_SR_BUSY))
        SFC_Reset(pReg);

    if (cmd.b.addrbits == SFC_ADDR_XBITS) {
        if (!ctrl.b.addrbits)
            return HAL_INVAL;
        pReg->ABIT = ctrl.b.addrbits - 1; /* add 1 inside the controller */
    }

    ctrl.b.sps = SFC_CTRL_SHIFTPHASE_NEGEDGE;
    pReg->CTRL = ctrl.d32;
    pReg->CMD = cmd.d32;
    if (cmd.b.addrbits)
        pReg->ADDR = addr;

    if (cmd.b.datasize) {
        pReg->ICLR = 0xFFFFFFFF;
        pReg->DMAADDR = (uint32_t)host->data;
        pReg->DMATR = SFC_DMATR_DMATR_START;
    }

    return ret;
}

/** @} */

/** @defgroup SFC_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Init SFC.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_Init(struct HAL_SFC_HOST *host)
{
    HAL_ASSERT(IS_SFC_INSTANCE(host->instance));

    SFC_Reset(host->instance);
    host->status = HAL_UNLOCKED;
    host->instance->CTRL = 0;
    host->version = (uint16_t)(host->instance && SFC_VER_VER_MASK);
    HAL_DBG("SFC vertion %lx\n", host->version);

    return HAL_OK;
}

/**
 * @brief  Deinit SFC.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_Deinit(struct HAL_SFC_HOST *host)
{
    SFC_Reset(host->instance);

    return HAL_OK;
}

/** @} */

/** @defgroup SFC_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Mask internal data transmission finish interrupt.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_MaskDMAInterrupt(struct HAL_SFC_HOST *host)
{
    SET_BIT(host->instance->IMR, SFC_IMR_DMAM_MASK);

    return HAL_OK;
}

/**
 * @brief  Unmask internal data transmission finish interrupt.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_UnmaskDMAInterrupt(struct HAL_SFC_HOST *host)
{
    CLEAR_BIT(host->instance->IMR, SFC_IMR_DMAM_MASK);

    return HAL_OK;
}

/**
 * @brief  Check internal data transmission finish interrupt.
 * @param  host: SFC host.
 * @return HAL_Check.
 */
HAL_Check HAL_SFC_IsDMAInterrupt(struct HAL_SFC_HOST *host)
{
    return (HAL_Check)HAL_IS_BIT_SET(host->instance->ISR, SFC_ISR_DMAS_ACTIVE);
}

/**
 * @brief  Clear internal data transmission finish interrupt.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_ClearIsr(struct HAL_SFC_HOST *host)
{
    host->instance->ICLR = 0xFFFFFFFF;

    return HAL_OK;
}

/**
 * @brief  SFC interrupt handler.
 * @param  host: SFC host.
 * @return HAL_Status.
 */
HAL_Status HAL_SFC_IRQHelper(struct HAL_SFC_HOST *host)
{
    HAL_ASSERT(HAL_SFC_IsDMAInterrupt(host)); /* Only support TRANSM IT */

    HAL_SFC_ClearIsr(host);
    host->status = HAL_UNLOCKED;

    return HAL_OK;
}

#ifdef SFC_MODE_XMMC_MODE_EN_SHIFT
HAL_Status HAL_SFC_XmmcDevRegionInit(struct HAL_SFC_HOST *host)
{
    host->instance->DEVRGN = 25;    /* 32MB for each region */
    host->instance->DEVSIZE0 = 24;     /* 16MB for dev0 */
    host->instance->DEVSIZE1 = 24;     /* 16MB for dev1 */

    return HAL_OK;
}

/**
 * @brief  Configuration x mode.
 * @param  host: SFC host.
 * @param  on: 1 enable, 0 disable.
 * @return HAL_Status.
 * XIP configuration cannot be modified in XIP mode.
 */
HAL_Status HAL_SFC_XmmcRequest(struct HAL_SFC_HOST *host, uint8_t on)
{
    SFCCTRL_DATA ctrl;
    SFCXMMCCTRL_DATA xmmcCtrl;
    struct SFC_REG *pReg = host->instance;

    if (on) {
        if (pReg->MODE & 0x1)
            return HAL_INVAL;

        if (host->xmmcDev[0].type == DEV_PSRAM || host->xmmcDev[1].type == DEV_PSRAM) {
            xmmcCtrl.b.devHwEn = 1;
            xmmcCtrl.b.prefetch = 0;
            xmmcCtrl.b.uincrPrefetchEn = 1;
            xmmcCtrl.b.uincrLen = 2;
            xmmcCtrl.b.devWrapEn = 1;
            xmmcCtrl.b.devIncrEn = 1;
            xmmcCtrl.b.devUdfincrEn = 1;
        } else {
            xmmcCtrl.b.devHwEn = 0;
            xmmcCtrl.b.prefetch = 1;
        }

        ctrl.d32 = host->xmmcDev[0].ctrl;
        ctrl.b.sps = SFC_CTRL_SHIFTPHASE_NEGEDGE;
        ctrl.b.mode = 0;
        ctrl.b.scic = 0;
        ctrl.b.cmdlines = 0;

        /* config ctroller */
        SFC_XmmcDevRegionInit(host);
        pReg->CTRL = ctrl.d32;
        pReg->XMMC_CTRL = xmmcCtrl.d32;
        /* config cs 0 */
        pReg->XMMC_RCMD0 = host->xmmcDev[0].readCmd;
        pReg->XMMC_WCMD0 = host->xmmcDev[0].writeCmd;
        /* config cs 1 */
        pReg->XMMC_RCMD1 = host->xmmcDev[1].readCmd;
        pReg->XMMC_WCMD1 = host->xmmcDev[2].writeCmd;

        pReg->MODE = 1;
    } else {
        pReg->MODE = 0;
    }

    return HAL_OK;
}
#endif

/** @} */

#endif

/** @} */

/** @} */
