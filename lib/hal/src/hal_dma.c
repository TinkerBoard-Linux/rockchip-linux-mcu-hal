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

/** @defgroup DMA_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DMA driver can be used as follows:

 (#) Invoke HAL_DMA_Init to initialize dma.
 (#) Invoke HAL_DMA_RequestChannel to request a available dma channel.
 (#) Invoke HAL_DMA_Config to config dma transfer config.
 (#) Invoke HAL_DMA_PrepDmaSingle/Cyclic for single/cyclic transfer.
 (#) Invoke HAL_DMA_Start to start a ready dma transfer.
 (#) Invoke HAL_DMA_Stop to stop the dma channel.
 (#) Invoke HAL_DMA_ReleaseChannel to release the dma channel.
 (#) Invoke HAL_DMA_Deinit to deinitialize dma.
 (#) More details refer to APIs' descriptions as below.

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_DMA_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static HAL_LIST_HEAD(sDMAList);

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup DMA_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup DMA_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Register a dma dev into system.
 * @param  dma: the handle of dma.
 * @return HAL_Status
 */
HAL_Status HAL_DMA_Register(struct HAL_DMA *dma)
{
    struct HAL_DMA *idma;

    HAL_ASSERT(dma);

    HAL_LIST_FOR_EACH_ENTRY(idma, &sDMAList, list) {
        if (idma->id == dma->id)
            return HAL_ERROR;
    }

    HAL_LIST_InsertAfter(&sDMAList, &dma->list);

    return HAL_OK;
}

/**
 * @brief  Unregister a dma from system.
 * @param  dma: the handle of dma.
 * @return HAL_Status
 */
HAL_Status HAL_DMA_Unregister(struct HAL_DMA *dma)
{
    HAL_ASSERT(dma);

    HAL_LIST_Remove(&dma->list);

    return HAL_OK;
}

/** @} */

/** @defgroup DMA_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
 * @brief Start a DMA channel.
 *
 * @param chan: the DMA channel handle.
 *
 * @return
 *        - HAL_OK on success
 *        - HAL_BUSY if DMA is busy
 *        - HAL_ERROR on other failures
 */
HAL_Status HAL_DMA_Start(struct DMA_CHAN *chan)
{
    HAL_ASSERT(chan);

    if (chan->device->start)
        return chan->device->start(chan);

    return HAL_NOSYS;
}

/**
 * @brief Stop a DMA channel.
 *
 * @param chan: the DMA channel number.
 *
 * @return
 *        - HAL_OK on success
 *        - HAL_BUSY if DMA is busy
 *        - HAL_ERROR on other failures
 */
HAL_Status HAL_DMA_Stop(struct DMA_CHAN *chan)
{
    HAL_ASSERT(chan);

    if (chan->device->stop)
        return chan->device->stop(chan);

    return HAL_NOSYS;
}

/**
 * @brief Request a dma dma channel
 *
 * @param dma: the handle of DMA.
 * @param id: the peri id.
 *
 * @return a idle dma channel.
 */
struct DMA_CHAN *HAL_DMA_RequestChannel(struct HAL_DMA *dma, uint16_t id)
{
    struct DMA_CHAN *chan = NULL;

    HAL_ASSERT(dma);

    if (dma->requestChannel) {
        chan = dma->requestChannel(dma, id);
        if (chan)
            chan->device = dma;
    }

    return chan;
}

/**
 * @brief Release a dma dma channel
 *
 * @param chan: the dma channel to be released
 *
 * @return
 *        - HAL_OK on success.
 *        - HAL_ERROR on fail.
 */
HAL_Status HAL_DMA_ReleaseChannel(struct DMA_CHAN *chan)
{
    HAL_ASSERT(chan);

    if (chan->device->releaseChannel)
        return chan->device->releaseChannel(chan);

    return HAL_NOSYS;
}

/**
 * @brief Config a dma dma channel
 *
 * @param chan: the channel to config.
 * @param config: the peri req config.
 *
 * @return
 *        - HAL_OK on success.
 *        - HAL_ERROR on fail.
 */
HAL_Status HAL_DMA_Config(struct DMA_CHAN *chan, struct DMA_SLAVE_CONFIG *config)
{
    HAL_ASSERT(chan);
    HAL_ASSERT(config);

    if (chan->device->config)
        return chan->device->config(chan, config);

    return HAL_NOSYS;
}

/**
 * @brief Prepare a cyclic dma transfer for the channel
 *
 * @param chan: the specified channel.
 * @param dmaAddr: the memory addr.
 * @param len: data len.
 * @param periodLen: periodic len.
 * @param direction: transfer direction.
 * @param callback: callback function.
 * @param cparam: callback param.
 *
 * @return
 *        - HAL_OK on success.
 *        - HAL_ERROR on fail.
 */
HAL_Status HAL_DMA_PrepDmaCyclic(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                 uint32_t len, uint32_t periodLen,
                                 eDMA_TRANSFER_DIRECTION direction,
                                 DMA_Callback callback, void *cparam)
{
    HAL_ASSERT(chan);

    if (chan->device->prepDmaCyclic)
        return chan->device->prepDmaCyclic(chan, dmaAddr, len, periodLen,
                                           direction, callback, cparam);

    return HAL_NOSYS;
}

/**
 * @brief Prepare a single dma transfer for the channel
 *
 * @param chan: the specified channel.
 * @param dmaAddr: the memory addr.
 * @param len: data len.
 * @param direction: transfer direction.
 * @param callback: callback function.
 * @param cparam: callback param.
 *
 * @return
 *        - HAL_OK on success.
 *        - HAL_ERROR on fail.
 */
HAL_Status HAL_DMA_PrepDmaSingle(struct DMA_CHAN *chan, uint32_t dmaAddr,
                                 uint32_t len,
                                 eDMA_TRANSFER_DIRECTION direction,
                                 DMA_Callback callback, void *cparam)
{
    HAL_ASSERT(chan);

    if (chan->device->prepDmaSingle)
        return chan->device->prepDmaSingle(chan, dmaAddr, len, direction,
                                           callback, cparam);

    return HAL_NOSYS;
}

/**
 * @brief Prepare a dma memcpy
 *
 * @param chan: the specified dma channel.
 * @param dst: the memory dst addr.
 * @param src: the memory src addr.
 * @param len: data len.
 * @param callback: callback function.
 * @param cparam: callback param.
 *
 * @return
 *        - HAL_OK on success.
 *        - HAL_ERROR on fail.
 */
HAL_Status HAL_DMA_PrepDmaMemcpy(struct DMA_CHAN *chan, uint32_t dst,
                                 uint32_t src, uint32_t len,
                                 DMA_Callback callback, void *cparam)
{
    HAL_ASSERT(chan);

    if (chan->device->prepDmaMemcpy)
        return chan->device->prepDmaMemcpy(chan, dst, src, len,
                                           callback, cparam);

    return HAL_NOSYS;
}

/**
 * @brief get the position
 *
 * @param chan: the specified channel.
 *
 * @return the size dma transferred.
 */
int HAL_DMA_GetPosition(struct DMA_CHAN *chan)
{
    HAL_ASSERT(chan);

    if (chan->device->getPosition)
        return chan->device->getPosition(chan);

    return HAL_NOSYS;
}

/**
 * @brief  Get dma handle by base.
 * @param  id: the DMA_REG info.
 * @return dma
 */
struct HAL_DMA *HAL_DMA_Get(struct DMA_REG *id)
{
    struct HAL_DMA *dma;

    HAL_ASSERT(id);

    HAL_LIST_FOR_EACH_ENTRY(dma, &sDMAList, list) {
        if (dma->id == id)
            return dma;
    }

    return NULL;
}

/** @} */

#endif

/** @} */

/** @} */
