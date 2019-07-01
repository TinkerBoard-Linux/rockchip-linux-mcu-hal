/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup FSPI
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The FSPI driver can be used as follows:

 This host driver need to be used in conjunction with device flash driver like
 hal_snor.c

 (#) DMA mode: Register handler(HAL_FSPI_IRQHelper).
 (#) DMA mode: Unmask TRANSM interrupt(HAL_FSPI_UnmaskDMAInterrupt).
 (#) Initialize FSPI controller(HAL_FSPI_Init);
 (#) Send FSPI request:
    (##) SNOR support api: (HAL_FSPI_SpiXfer);
 (#) DMA mode: Handling interrupt return in DMA mode FSPI request.
 (#) Configure XIP mode if needed.(HAL_FSPI_XmmcRequest)

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_FSPI_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/* FSPI_CTRL */
#define FSPI_CTRL_SHIFTPHASE_NEGEDGE 1

/* FSPI_RCVR */
#define FSPI_RCVR_RCVR_RESET (1 << FSPI_RCVR_RCVR_SHIFT) /* Recover The FSPI State Machine */

/* FSPI_ISR */
#define FSPI_ISR_DMAS_ACTIVE   (1 << FSPI_ISR_DMAS_SHIFT) /* DMA Finish Interrupt Active */
#define FSPI_ISR_NSPIS_ACTIVE  (1 << FSPI_ISR_NSPIS_SHIFT) /* SPI Error Interrupt Active */
#define FSPI_ISR_AHBS_ACTIVE   (1 << FSPI_ISR_AHBS_SHIFT) /* AHB Error Interrupt Active */
#define FSPI_ISR_TRANSS_ACTIVE (1 << FSPI_ISR_TRANSS_SHIFT) /* Transfer finish Interrupt Active */
#define FSPI_ISR_TXES_ACTIVE   (1 << FSPI_ISR_TXES_SHIFT) /* Transmit FIFO Empty Interrupt Active */
#define FSPI_ISR_TXOS_ACTIVE   (1 << FSPI_ISR_TXOS_SHIFT) /* Transmit FIFO Overflow Interrupt Active */
#define FSPI_ISR_RXUS_ACTIVE   (1 << FSPI_ISR_RXUS_SHIFT) /* Receive FIFO Underflow Interrupt Active */
#define FSPI_ISR_RXFS_ACTIVE   (1 << FSPI_ISR_RXFS_SHIFT) /* Receive FIFO Full Interrupt Active */

/* FSPI_FSR */
#define FSPI_FSR_RXFS_EMPTY (1 << FSPI_FSR_RXFS_SHIFT) /* Receive FIFO Full */
#define FSPI_FSR_RXES_EMPTY (1 << FSPI_FSR_RXES_SHIFT) /* Receive FIFO Empty */
#define FSPI_FSR_TXFS_FULL  (1 << FSPI_FSR_TXFS_SHIFT) /* Transmit FIFO Full */
#define FSPI_FSR_TXES_EMPTY (1 << FSPI_FSR_TXES_SHIFT) /* Transmit FIFO Empty */

/* FSPI_SR */
#define FSPI_SR_SR_BUSY (1 << FSPI_SR_SR_SHIFT) /* When busy, do not set the control register. */

/* FSPI_DMATR */
#define FSPI_DMATR_DMATR_START (1 << FSPI_DMATR_DMATR_SHIFT) /* Write 1 to start the dma transfer. */

/* FSPI_RISR */
#define FSPI_RISR_TRANSS_ACTIVE (1 << FSPI_RISR_TRANSS_SHIFT)

/* FSPI attributes */
#define FSPI_VER_VER_1 1
#define FSPI_VER_VER_3 3

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
} FSPIFSR_DATA;

/** FSPI_XMMC bit union */
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
} FSPIXMMCCTRL_DATA;
/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
static void FSPI_Reset(struct FSPI_REG *pReg)
{
    int32_t timeout = 10000;

    pReg->RCVR = FSPI_RCVR_RCVR_RESET;
    while ((pReg->RCVR == FSPI_RCVR_RCVR_RESET) && (timeout > 0)) {
        HAL_DelayUs(1);
        timeout--;
    }
    pReg->ICLR = 0xFFFFFFFF;
}

/**
 * @brief  Clear internal data transmission finish interrupt.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status FSPI_ClearIsr(struct HAL_FSPI_HOST *host)
{
    host->instance->ICLR = 0xFFFFFFFF;

    return HAL_OK;
}

/**
 * @brief  Check internal data transmission finish interrupt.
 * @param  host: FSPI host.
 * @return HAL_Check.
 */
HAL_Check FSPI_IsDMAInterrupt(struct HAL_FSPI_HOST *host)
{
    return (HAL_Check)HAL_IS_BIT_SET(host->instance->ISR, FSPI_ISR_DMAS_ACTIVE);
}

HAL_Status FSPI_XmmcDevRegionInit(struct HAL_FSPI_HOST *host)
{
    host->instance->DEVRGN = 25;    /* 32MB for each region */
    host->instance->DEVSIZE0 = 24;     /* 16MB for dev0 */
    host->instance->DEVSIZE1 = 24;     /* 16MB for dev1 */

    return HAL_OK;
}

#ifdef HAL_SNOR_MODULE_ENABLED
/**
 * @brief  Configuration register with flash operation protocol.
 * @param  host: FSPI host.
 * @param  op: flash operation protocol.
 * @return HAL_Status.
 */
static HAL_Status FSPI_XferStart(struct HAL_FSPI_HOST *host, struct SPI_MEM_OP *op)
{
    struct FSPI_REG *pReg = host->instance;
    FSPICMD_DATA FSPICmd;
    FSPICTRL_DATA FSPICtrl;

    FSPICmd.d32 = 0;
    FSPICtrl.d32 = 0;

    /* set CMD */
    FSPICmd.b.cmd = op->cmd.opcode;

    /* set ADDR */
    if (op->addr.nbytes) {
        FSPICmd.b.addrbits = op->addr.nbytes == 4 ? FSPI_ADDR_32BITS : FSPI_ADDR_24BITS;
        FSPICtrl.b.addrlines = op->addr.buswidth == 4 ? FSPI_LINES_X4 : FSPI_LINES_X1;
    }
    /* set DUMMY*/
    if (op->dummy.nbytes)
        FSPICmd.b.dummybits = (op->dummy.nbytes * 8) / (op->dummy.buswidth);

    /* set DATA */
    if (op->data.nbytes) {
        FSPICmd.b.datasize = op->data.nbytes;
        if (op->data.dir == SPI_MEM_DATA_OUT)
            FSPICmd.b.rw = FSPI_WRITE;
        FSPICtrl.b.datalines = op->data.buswidth == 4 ? FSPI_LINES_X4 : FSPI_LINES_X1;
    }

    /* spitial setting */
    FSPICtrl.b.sps = FSPI_CTRL_SHIFTPHASE_NEGEDGE;

    if (!(pReg->FSR & FSPI_FSR_TXES_EMPTY) || !(pReg->FSR & FSPI_FSR_RXES_EMPTY) || (pReg->SR & FSPI_SR_SR_BUSY))
        FSPI_Reset(pReg);

    /* HAL_DBG("%s 1 %lx %lx %lx\n", __func__, op->addr.nbytes, op->dummy.nbytes, op->data.nbytes); */
    /* HAL_DBG("%s 2 %lx %lx %lx\n", __func__, FSPICtrl.d32, FSPICmd.d32, op->addr.val); */

    /* config FSPI */
    pReg->CTRL0 = FSPICtrl.d32;
    pReg->CMD = FSPICmd.d32;
    if (op->addr.nbytes)
        pReg->ADDR = op->addr.val;

    return HAL_OK;
}

/**
 * @brief  IO transfer.
 * @param  host: FSPI host.
 * @param  len: data n bytes.
 * @param  data: transfer buffer.
 * @param  dir: transfer direction.
 * @return HAL_Status.
 */
static HAL_Status FSPI_XferData(struct HAL_FSPI_HOST *host, uint32_t len, void *data, uint32_t dir)
{
    int32_t ret = HAL_OK;
    __IO FSPIFSR_DATA fifostat;
    int32_t timeout = 0;
    uint32_t i, words;
    uint32_t *pData = (uint32_t *)data;
    struct FSPI_REG *pReg = host->instance;

    /* HAL_DBG("%s %p len %lx word0 %lx dir %lx\n", __func__, len, pData[0], dir); */
    if (dir == FSPI_WRITE) {
        words = (len + 3) >> 2;
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
        uint32_t bytes = len & 0x3;

        words = len >> 2;
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

    return ret;
}

/**
 * @brief  Wait for FSPI host transfer finished.
 * @return HAL_Status.
 */
static HAL_Status FSPI_XferDone(struct HAL_FSPI_HOST *host)
{
    int32_t ret = HAL_OK;
    int32_t timeout = 0;
    struct FSPI_REG *pReg = host->instance;

    while (pReg->SR & FSPI_SR_SR_BUSY) {
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
 * @brief  Set XMMC dev.
 * @param  host: FSPI host.
 * @param  op: flash operation protocol.
 * @return HAL_Status.
 */
HAL_Status FSPI_XmmcSetting(struct HAL_FSPI_HOST *host, struct SPI_MEM_OP *op)
{
    FSPICMD_DATA FSPICmd;
    FSPICTRL_DATA FSPICtrl;

    FSPICmd.d32 = 0;
    FSPICtrl.d32 = 0;

    /* set CMD */
    FSPICmd.b.cmd = op->cmd.opcode;

    /* set ADDR */
    if (op->addr.nbytes) {
        FSPICmd.b.addrbits = op->addr.nbytes == 4 ? FSPI_ADDR_32BITS : FSPI_ADDR_24BITS;
        FSPICtrl.b.addrlines = op->addr.buswidth == 4 ? FSPI_LINES_X4 : FSPI_LINES_X1;
    }
    /* set DUMMY*/
    if (op->dummy.nbytes)
        FSPICmd.b.dummybits = (op->dummy.nbytes * 8) / (op->dummy.buswidth);

    /* set DATA */
    if (op->data.nbytes) {
        FSPICmd.b.datasize = op->data.nbytes;
        if (op->data.dir == SPI_MEM_DATA_OUT)
            FSPICmd.b.rw = FSPI_WRITE;
        FSPICtrl.b.datalines = op->data.buswidth == 4 ? FSPI_LINES_X4 : FSPI_LINES_X1;
    }

    /* spitial setting */
    FSPICtrl.b.sps = FSPI_CTRL_SHIFTPHASE_NEGEDGE;

    /* HAL_DBG("%s 1 %lx %lx %lx\n", __func__, op->addr.nbytes, op->dummy.nbytes, op->data.nbytes); */
    /* HAL_DBG("%s 2 %lx %lx %lx\n", __func__, FSPICtrl.d32, FSPICmd.d32, op->addr.val); */
    host->xmmcDev[host->cs].type = DEV_NOR;
    host->xmmcDev[host->cs].ctrl = FSPICtrl.d32;
    host->xmmcDev[host->cs].readCmd = FSPICmd.d32;

    return HAL_OK;
}

/**
 * @brief  Enable or Disable FSPI XIP interface.
 * @param  host: FSPI host.
 * @param  on: 1 enable, 0 disable.
 * @return HAL_Status.
 */
HAL_Status FSPI_XmmcRequest(struct HAL_FSPI_HOST *host, uint8_t on)
{
    FSPIXMMCCTRL_DATA xmmcCtrl;
    struct FSPI_REG *pReg = host->instance;

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

        /* config ctroller */
        pReg->CTRL0 = host->xmmcDev[0].ctrl;
        pReg->XMMC_CTRL = xmmcCtrl.d32;
        /* config cs 0 */
        pReg->XMMC_RCMD0 = host->xmmcDev[0].readCmd;
        pReg->XMMC_WCMD0 = host->xmmcDev[0].writeCmd;
        /* config cs 1 */
        pReg->XMMC_RCMD1 = host->xmmcDev[1].readCmd;
        pReg->XMMC_WCMD1 = host->xmmcDev[1].writeCmd;

        pReg->MODE = 1;
    } else {
        pReg->MODE = 0;
    }

    return HAL_OK;
}

#endif

/********************* Public Function Definition ****************************/

/** @defgroup FSPI_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 (#) Operate in blocking mode (DMA IT) using HAL_FSPI_Request_DMA();
 (#) Operate in blocking mode (Normal) using HAL_FSPI_Request();

 @endverbatim
 *  @{
 */

#ifdef HAL_SNOR_MODULE_ENABLED
/**
 * @brief  SPI Nor flash data transmission interface supporting open source specifications.
 * @param  spi: host abstract.
 * @param  op: flash operation protocol.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_SpiXfer(struct SNOR_HOST *spi, struct SPI_MEM_OP *op)
{
    struct HAL_FSPI_HOST *host = (struct HAL_FSPI_HOST *)spi->userdata;
    uint32_t ret = HAL_OK;

    FSPI_XferStart(host, op);
    if (op->data.dir == SPI_MEM_DATA_IN)
        ret = FSPI_XferData(host, op->data.nbytes, op->data.buf.in, FSPI_READ);
    else if (op->data.buf.out)
        ret = FSPI_XferData(host, op->data.nbytes, op->data.buf.in, FSPI_WRITE);
    if (ret) {
        HAL_DBG("%s xfer data failed ret %ld\n", __func__, ret);

        return ret;
    }

    return FSPI_XferDone(host);
}

/**
 * @brief  SPI Nor flash data transmission interface supporting open source specifications.
 * @param  spi: host abstract.
 * @param  op: flash operation protocol.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_SpiXipConfig(struct SNOR_HOST *spi, struct SPI_MEM_OP *op, uint32_t on)
{
    struct HAL_FSPI_HOST *host = (struct HAL_FSPI_HOST *)spi->userdata;

    if (op->cmd.opcode)
        FSPI_XmmcSetting(host, op);

    return FSPI_XmmcRequest(host, on);
}
#endif

/** @} */

/** @defgroup FSPI_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Init FSPI.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_Init(struct HAL_FSPI_HOST *host)
{
    HAL_ASSERT(IS_FSPI_INSTANCE(host->instance));

    FSPI_Reset(host->instance);
    FSPI_XmmcDevRegionInit(host);
    host->instance->CTRL0 = 0;
    host->version = host->instance->VER & FSPI_VER_VER_MASK;
    HAL_DBG("FSPI vertion %lx\n", host->version);

    return HAL_OK;
}

/**
 * @brief  Deinit FSPI.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_Deinit(struct HAL_FSPI_HOST *host)
{
    FSPI_Reset(host->instance);

    return HAL_OK;
}

/** @} */

/** @defgroup FSPI_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Mask internal data transmission finish interrupt.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_MaskDMAInterrupt(struct HAL_FSPI_HOST *host)
{
    SET_BIT(host->instance->IMR, FSPI_IMR_DMAM_MASK);

    return HAL_OK;
}

/**
 * @brief  Unmask internal data transmission finish interrupt.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_UnmaskDMAInterrupt(struct HAL_FSPI_HOST *host)
{
    CLEAR_BIT(host->instance->IMR, FSPI_IMR_DMAM_MASK);

    return HAL_OK;
}

/**
 * @brief  FSPI interrupt handler.
 * @param  host: FSPI host.
 * @return HAL_Status.
 */
HAL_Status HAL_FSPI_IRQHelper(struct HAL_FSPI_HOST *host)
{
    HAL_ASSERT(FSPI_IsDMAInterrupt(host)); /* Only support TRANSM IT */
    FSPI_ClearIsr(host);

    return HAL_OK;
}

/**
 * @brief  Configure FSPI XIP mode.
 * @param  host: FSPI host.
 * @param  on: 1 enable, 0 disable.
 * @return HAL_Status.
 * XIP configuration cannot be modified in XIP mode.
 */
HAL_Status HAL_FSPI_XmmcRequest(struct HAL_FSPI_HOST *host, uint8_t on)
{
    FSPICTRL_DATA ctrl;
    FSPIXMMCCTRL_DATA xmmcCtrl;
    struct FSPI_REG *pReg = host->instance;

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
        ctrl.b.sps = FSPI_CTRL_SHIFTPHASE_NEGEDGE;
        ctrl.b.mode = 0;
        ctrl.b.scic = 0;
        ctrl.b.cmdlines = 0;

        /* config ctroller */
        FSPI_XmmcDevRegionInit(host);
        pReg->CTRL0 = ctrl.d32;
        pReg->XMMC_CTRL = xmmcCtrl.d32;
        /* config cs 0 */
        pReg->XMMC_RCMD0 = host->xmmcDev[0].readCmd;
        pReg->XMMC_WCMD0 = host->xmmcDev[0].writeCmd;
        /* config cs 1 */
        pReg->XMMC_RCMD1 = host->xmmcDev[1].readCmd;
        pReg->XMMC_WCMD1 = host->xmmcDev[1].writeCmd;

        pReg->MODE = 1;
    } else {
        pReg->MODE = 0;
    }

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
