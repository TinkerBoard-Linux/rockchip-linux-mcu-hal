/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DMA
 *  @{
 */

#ifndef _HAL_DMA_H
#define _HAL_DMA_H

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup DMA_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/
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
struct DMA_SLAVE_CONFIG {
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
};

/**
 * dma complete callback.
 */
typedef void (*DMA_Callback)(void *cparam);

struct DMA_CHAN;

/**
 * struct HAL_DMA - general dma struct.
 */
struct HAL_DMA {
    HAL_LIST list; /**< list node */
    struct DMA_REG *id; /**< assign DMA_REG ptr as the unique id. */

    uint32_t chanCnt; /**< dma channels count*/
    HAL_Status (*start)(struct DMA_CHAN *chan);
    HAL_Status (*stop)(struct DMA_CHAN *chan);

    struct DMA_CHAN *(*requestChannel)(struct HAL_DMA *dma, uint16_t id);
    HAL_Status (*releaseChannel)(struct DMA_CHAN *chan);

    HAL_Status (*config)(struct DMA_CHAN *chan, struct DMA_SLAVE_CONFIG *config);
    HAL_Status (*prepDmaMemcpy)(struct DMA_CHAN *chan, uint32_t dst,
                                uint32_t src, uint32_t len,
                                DMA_Callback callback, void *cparam);
    HAL_Status (*prepDmaCyclic)(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                uint32_t len, uint32_t periodLen,
                                eDMA_TRANSFER_DIRECTION direction,
                                DMA_Callback callback, void *cparam);
    HAL_Status (*prepDmaSingle)(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                uint32_t len,
                                eDMA_TRANSFER_DIRECTION direction,
                                DMA_Callback callback, void *cparam);
    int (*getPosition)(struct DMA_CHAN *chan);

    void *privData; /**< dma privData, general for priv dma struct*/
};

/**
 * struct DMA_CHAN - dma chan struct.
 */
struct DMA_CHAN {
    struct HAL_DMA *device;
    int chanId;
};

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_DMA_Register(struct HAL_DMA *dma);
HAL_Status HAL_DMA_Unregister(struct HAL_DMA *dma);

HAL_Status HAL_DMA_Start(struct DMA_CHAN *chan);
HAL_Status HAL_DMA_Stop(struct DMA_CHAN *chan);

struct DMA_CHAN *HAL_DMA_RequestChannel(struct HAL_DMA *dma, uint16_t id);
HAL_Status HAL_DMA_ReleaseChannel(struct DMA_CHAN *chan);

HAL_Status HAL_DMA_Config(struct DMA_CHAN *chan, struct DMA_SLAVE_CONFIG *config);
HAL_Status HAL_DMA_PrepDmaMemcpy(struct DMA_CHAN *chan, uint32_t dst,
                                 uint32_t src, uint32_t len,
                                 DMA_Callback callback, void *cparam);
HAL_Status HAL_DMA_PrepDmaCyclic(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                 uint32_t len, uint32_t periodLen,
                                 eDMA_TRANSFER_DIRECTION direction,
                                 DMA_Callback callback, void *cparam);
HAL_Status HAL_DMA_PrepDmaSingle(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                 uint32_t len,
                                 eDMA_TRANSFER_DIRECTION direction,
                                 DMA_Callback callback, void *cparam);

int HAL_DMA_GetPosition(struct DMA_CHAN *chan);
struct HAL_DMA *HAL_DMA_Get(struct DMA_REG *id);

#endif

/** @} */

/** @} */
