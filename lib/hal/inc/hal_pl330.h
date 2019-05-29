/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PL330
 *  @{
 */

#ifndef _HAL_PL330_H
#define _HAL_PL330_H

#include "hal_def.h"

/** @defgroup PL330_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** MACRO Definition ******************************/

#ifndef BIT
#define BIT(nr) (1UL << (nr))
#endif

/** PL330 status */
#define PL330_STATE_STOPPED        BIT(0)
#define PL330_STATE_EXECUTING      BIT(1)
#define PL330_STATE_WFE            BIT(2)
#define PL330_STATE_FAULTING       BIT(3)
#define PL330_STATE_COMPLETING     BIT(4)
#define PL330_STATE_WFP            BIT(5)
#define PL330_STATE_KILLING        BIT(6)
#define PL330_STATE_FAULT_COMPLETE BIT(7)
#define PL330_STATE_CACHEMISS      BIT(8)
#define PL330_STATE_UPDTPC         BIT(9)
#define PL330_STATE_ATBARRIER      BIT(10)
#define PL330_STATE_QUEUEBUSY      BIT(11)
#define PL330_STATE_INVALID        BIT(15)

#define PL330_STABLE_STATES                                          \
    (PL330_STATE_STOPPED | PL330_STATE_EXECUTING | PL330_STATE_WFE | \
     PL330_STATE_FAULTING)

#define PL330_MAX_CHAN  8
#define PL330_MAX_IRQS  32
#define PL330_MAX_PERI  32
#define PL330_MAX_BURST 16

/*
 * With 256 bytes, we can do more than 2.5MB and 5MB xfers per req
 * at 1byte/burst for P<->M and M<->M respectively.
 * For typical scenario, at 1word/burst, 10MB and 20MB xfers per req
 * should be enough for P<->M and M<->M respectively.
 */
#define MCODE_BUFF_PER_REQ     256
#define PL330_MAX_CHAN_BUFS    2
#define PL330_CHAN_BUF_LEN     128
#define PL330_CHANNELS_PER_DEV 8

/***************************** Structure Definition **************************/

/** enum PL330_CACHECTRL - pl330 cache control */
typedef enum {
    CCTRL0, /* Noncacheable and nonbufferable */
    CCTRL1, /* Bufferable only */
    CCTRL2, /* Cacheable, but do not allocate */
    CCTRL3, /* Cacheable and bufferable, but do not allocate */
    INVALID1, /* AWCACHE = 0x1000 */
    INVALID2,
    CCTRL6, /* Cacheable write-through, allocate on writes only */
    CCTRL7, /* Cacheable write-back, allocate on writes only */
} ePL330_CACHECTRL;

/** enum PL330_BYTESWAP - pl330 byte swap control */
typedef enum {
    SWAP_NO,
    SWAP_2,
    SWAP_4,
    SWAP_8,
    SWAP_16,
} ePL330_BYTESWAP;

/**
 * enum PL330_COND - dma transfer mode
 */
typedef enum {
    SINGLE,
    BURST,
    ALWAYS,
} ePL330_COND;

/**
 * enum DMA_TRANSFER_DIRECTION - dma transfer mode and direction indicator
 */
typedef enum {
    DMA_MEM_TO_MEM, /**< Async/Memcpy mode */
    DMA_MEM_TO_DEV, /**< Slave mode & From Memory to Device */
    DMA_DEV_TO_MEM, /**< Slave mode & From Device to Memory */
    DMA_DEV_TO_DEV, /**< Slave mode & From Device to Device */
    DMA_TRANS_NONE,
} eDMA_TRANSFER_DIRECTION;

/**
 * enum DMA_SLAVE_BUSWIDTH - defines bus width of the DMA slave
 * device, source or target buses
 */
typedef enum {
    DMA_SLAVE_BUSWIDTH_UNDEFINED = 0,
    DMA_SLAVE_BUSWIDTH_1_BYTE    = 1,
    DMA_SLAVE_BUSWIDTH_2_BYTES   = 2,
    DMA_SLAVE_BUSWIDTH_3_BYTES   = 3,
    DMA_SLAVE_BUSWIDTH_4_BYTES   = 4,
    DMA_SLAVE_BUSWIDTH_8_BYTES   = 8,
    DMA_SLAVE_BUSWIDTH_16_BYTES  = 16,
    DMA_SLAVE_BUSWIDTH_32_BYTES  = 32,
    DMA_SLAVE_BUSWIDTH_64_BYTES  = 64,
} eDMA_SLAVE_BUSWIDTH;

/**
 * struct DMA_SLAVE_CONFIG - dma slave channel runtime config
 */
typedef struct {
    eDMA_TRANSFER_DIRECTION direction; /**< Transfer direction. */
    eDMA_SLAVE_BUSWIDTH srcAddrWidth; /**< The width in bytes of the source,
                                        *  Legal values: 1, 2, 4, 8.
                                        */
    eDMA_SLAVE_BUSWIDTH dstAddrWidth; /**< The same as srcAddrWidth. */
    uint32_t srcAddr; /**< The source physical address. */
    uint32_t dstAddr; /**< The destination physical address. */
    uint32_t srcMaxBurst; /**< The maximum number of words (note: words, as in
                            *  units of the srcAddrWidth member, not bytes) that
                            *  can be sent in one burst to the device, Typically
                            *  something like half the FIFO depth on I/O peri so
                            *  you don't overflow it.
                            */
    uint32_t dstMaxBurst; /**< The same as srcMaxBurst for destination. */
} DMA_SLAVE_CONFIG;

/** PL330 soc configuration */
typedef struct {
    uint32_t periphId;
    uint32_t mode;
    uint32_t dataBusWidth; /* In number of bits */
    uint32_t dataBufDep;
    uint32_t numChan;
    uint32_t numPeri;
    uint32_t periNs;
    uint32_t numEvents;
    uint32_t irqNs;
} PL330_CONFIG;

/** PL330 request config */
typedef struct {
    /* Address Incrementing */
    uint32_t dstInc;
    uint32_t srcInc;

    /*
     * For now, the SRC & DST protection levels
     * and burst size/length are assumed same.
     */
    bool nonsecure;
    bool privileged;
    bool insnaccess;
    uint32_t brstLen;
    uint32_t brstSize; /* bytes */

    ePL330_CACHECTRL dcctl;
    ePL330_CACHECTRL scctl;
    ePL330_BYTESWAP swap;
} PL330_REQCFG;

/** DMA block descriptor struct. */
typedef struct {
    uint32_t srcAddr; /**< Source starting address */
    uint32_t dstAddr; /**< Destination starting address */
    uint32_t length; /**< Number of bytes for the xfer */
} PL330_XFER;

/**
 * It's the done callback a user can set for a desc
 */
typedef void (*PL330_Callback)(void *cparam);

/**
 * A DMA Desc consisits of a request config struct, a xfer descriptor,
 * a pointer pointing to generated DMA program, and execution result.
 */
typedef struct {
    PL330_REQCFG rqcfg;
    PL330_XFER px;
    uint8_t peri;
    eDMA_TRANSFER_DIRECTION dir;
    bool cyclic;
    uint32_t numPeriods;
    uint32_t bytesReq;
    void *mcBuf;
    int mcBufLength;
    int dmaStatus;
    PL330_Callback callback;
    void *cparam;
    void *nextDesc;
} PL330_DESC;

typedef struct {
    uint32_t ccr;
    PL330_DESC *desc;
} PL330_XFER_SPEC;

/**
 * The PL330_MCBUF is the struct for a DMA program buffer.
 */
typedef struct {
    char buf[PL330_CHAN_BUF_LEN];
    uint32_t len;
    int allocated;
} PL330_MCBUF;

struct _PL330;
/**
 * The PL330_CHANNEL Data is a struct to book keep individual channel of
 * the DMAC.
 */
typedef struct _PL330_CHANNEL {
    uint16_t periId;
    uint16_t chanId;
    uint32_t fifoAddr;
    uint32_t brstSz;
    uint32_t brstLen;
    PL330_MCBUF mcBufPool[PL330_MAX_CHAN_BUFS];
    PL330_DESC desc;
    struct _PL330 *pl330;
    bool used;
} PL330_CHANNEL;

/**
 * The PL330 driver instance data structure. A pointer to an instance data
 * structure is passed around by functions to refer to a specific driver
 * instance.
 */
typedef struct _PL330 {
    char *name;
    uint32_t base;
    bool isReady;
    PL330_CHANNEL chans[PL330_CHANNELS_PER_DEV];
    PL330_CONFIG pcfg;
    ePL330_COND peripReqType;
    HAL_LIST list;
} PL330;

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_PL330_Init(PL330 *pl330, uint32_t base, ePL330_COND cond);
HAL_Status HAL_PL330_Deinit(PL330 *pl330);

HAL_Status HAL_PL330_Start(PL330_CHANNEL *chan);
HAL_Status HAL_PL330_Stop(PL330_CHANNEL *chan);

HAL_Status HAL_PL330_ResetManager(PL330 *pl330);
HAL_Status HAL_PL330_ResetChannel(PL330_CHANNEL *chan);

PL330_CHANNEL *HAL_PL330_RequestChannel(PL330 *pl330, uint16_t id);
HAL_Status HAL_PL330_ReleaseChannel(PL330_CHANNEL *chan);

HAL_Status HAL_PL330_Config(PL330_CHANNEL *chan, DMA_SLAVE_CONFIG *config);
HAL_Status HAL_PL330_PrepDmaMemcpy(PL330_CHANNEL *chan, uint32_t dst,
                                   uint32_t src, uint32_t len,
                                   PL330_Callback callback, void *cparam);
HAL_Status HAL_PL330_PrepDmaCyclic(PL330_CHANNEL *chan, uint32_t dmaAddr,
                                   uint32_t len, uint32_t periodLen,
                                   eDMA_TRANSFER_DIRECTION direction,
                                   PL330_Callback callback, void *cparam);
HAL_Status HAL_PL330_PrepDmaSingle(PL330_CHANNEL *chan, uint32_t dmaAddr,
                                   uint32_t len,
                                   eDMA_TRANSFER_DIRECTION direction,
                                   PL330_Callback callback, void *cparam);
HAL_Status HAL_PL330_IrqHandler(PL330 *pl330);
uint32_t HAL_PL330_GetRawIrqStatus(PL330 *pl330);
HAL_Status HAL_PL330_ClearIrq(PL330 *pl330, uint32_t irq);
int HAL_PL330_GetPosition(PL330_CHANNEL *chan);
PL330 *HAL_PL330_Get(uint32_t base);

#endif

/** @} */

/** @} */
