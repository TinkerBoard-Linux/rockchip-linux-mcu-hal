/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"
#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#ifdef HAL_PL330_MODULE_ENABLED

#define TSIZE 64

static struct HAL_DMA *dma;
static uint8_t *src;
static uint8_t *dst;

TEST_GROUP(HAL_PL330);

TEST_SETUP(HAL_PL330){
}

TEST_TEAR_DOWN(HAL_PL330){
}

__STATIC_INLINE struct HAL_PL330_DEV *to_pl330(struct HAL_DMA *dma)
{
    if (!dma)
        return NULL;

    return HAL_CONTAINER_OF(dma, struct HAL_PL330_DEV, dma);
}

static void HAL_PL330_Handler(void)
{
    struct HAL_PL330_DEV *pl330 = to_pl330(dma);

    HAL_PL330_IrqHandler(pl330);
}

static void MEMCPY_Callback(void *cparam)
{
    struct DMA_CHAN *chan = cparam;
    uint32_t ret;

    TEST_ASSERT_EQUAL_MEMORY(src, dst, TSIZE);

    ret = HAL_DMA_Stop(chan);
    TEST_ASSERT(ret == HAL_OK);

    ret = HAL_DMA_ReleaseChannel(chan);
    TEST_ASSERT(ret == HAL_OK);
}

TEST(HAL_PL330, MemcpyTest){
    uint32_t ret, i;
    struct DMA_CHAN *chan;

    for (i = 0; i < TSIZE; i++)
        src[i] = i;

    chan = HAL_DMA_RequestChannel(dma, 0);
    TEST_ASSERT_NOT_NULL(chan);

    ret = HAL_DMA_PrepDmaMemcpy(chan, (uint32_t)&dst, (uint32_t)&src,
                                TSIZE, MEMCPY_Callback, chan);
    TEST_ASSERT(ret == HAL_OK);

    ret = HAL_DMA_Start(chan);
    TEST_ASSERT(ret == HAL_OK);
}

TEST_GROUP_RUNNER(HAL_PL330){
    uint32_t ret;
    struct HAL_PL330_DEV *pl330 = &g_pl330Dev;

    ret = HAL_PL330_Init(pl330);
    TEST_ASSERT(ret == HAL_OK);

    dma = &pl330->dma;

    src = (uint8_t *)malloc(TSIZE);
    TEST_ASSERT_NOT_NULL(src);

    dst = (uint8_t *)malloc(TSIZE);
    TEST_ASSERT_NOT_NULL(dst);

    HAL_NVIC_ConfigExtIRQ(pl330->irq[0], (NVIC_IRQHandler) & HAL_PL330_Handler,
                          NVIC_PERIPH_PRIO_DEFAULT);
    HAL_NVIC_ConfigExtIRQ(pl330->irq[1], (NVIC_IRQHandler) & HAL_PL330_Handler,
                          NVIC_PERIPH_PRIO_DEFAULT);

    RUN_TEST_CASE(HAL_PL330, MemcpyTest);

    ret = HAL_PL330_Deinit(pl330);
    TEST_ASSERT(ret == HAL_OK);

    free(src);
    free(dst);
}

#endif
