/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#define TSIZE 64

static PL330 *pl330;
static uint8_t *src;
static uint8_t *dst;

static void HAL_PL330_Handler(void)
{
    HAL_PL330_IrqHandler(pl330);
}

TEST_GROUP(HAL_PL330);

TEST_SETUP(HAL_PL330)
{
    pl330 = (PL330 *)malloc(sizeof(*pl330));
    TEST_ASSERT_NOT_NULL(pl330);
    src = (uint8_t *)malloc(TSIZE);
    TEST_ASSERT_NOT_NULL(src);
    dst = (uint8_t *)malloc(TSIZE);
    TEST_ASSERT_NOT_NULL(dst);
}

TEST_TEAR_DOWN(HAL_PL330)
{
    free(pl330);
    free(src);
    free(dst);
}

static void PL330_Init_And_Deinit(PL330 *pl330, uint32_t base, uint32_t mode)
{
    uint32_t ret, i;
    PL330_CHANNEL *chan[PL330_CHANNELS_PER_DEV];

    ret = HAL_PL330_Init(pl330, base, mode);
    TEST_ASSERT(ret == HAL_OK);
    TEST_ASSERT(pl330->pcfg.numChan > 0);
    TEST_ASSERT(pl330->pcfg.numChan <= PL330_CHANNELS_PER_DEV);

    for (i = 0; i < pl330->pcfg.numChan; i++) {
        chan[i] = HAL_PL330_RequestChannel(pl330, i);
        TEST_ASSERT_NOT_NULL(chan[i]);
    }

    for (i = 0; i < pl330->pcfg.numChan; i++) {
        ret = HAL_PL330_ReleaseChannel(chan[i]);
        TEST_ASSERT(ret == HAL_OK);
    }

    ret = HAL_PL330_Deinit(pl330);
    TEST_ASSERT(ret == HAL_OK);
}

TEST(HAL_PL330, PL330InitAndDeinit)
{
    PL330_Init_And_Deinit(pl330, DMA_BASE, SINGLE);
    PL330_Init_And_Deinit(pl330, DMA_BASE, BURST);
}

static void MEMCPY_Callback(void *cparam)
{
    PL330_CHANNEL *chan = (PL330_CHANNEL *)cparam;
    PL330 *pl330 = chan->pl330;
    uint32_t ret;

    TEST_ASSERT_EQUAL_MEMORY(src, dst, TSIZE);

    ret = HAL_PL330_Stop(chan);
    TEST_ASSERT(ret == HAL_OK);

    ret = HAL_PL330_ReleaseChannel(chan);
    TEST_ASSERT(ret == HAL_OK);

    ret = HAL_PL330_Deinit(pl330);
    TEST_ASSERT(ret == HAL_OK);
}

static void PL330_MEMCPY(PL330 *pl330, uint32_t base, uint32_t mode)
{
    uint32_t ret, i;
    PL330_CHANNEL *chan;

    for (i = 0; i < TSIZE; i++)
        src[i] = i;

    ret = HAL_PL330_Init(pl330, base, mode);
    TEST_ASSERT(ret == HAL_OK);

    chan = HAL_PL330_RequestChannel(pl330, 0);
    TEST_ASSERT_NOT_NULL(chan);

    ret = HAL_PL330_PrepDmaMemcpy(chan, (uint32_t)&dst, (uint32_t)&src,
                                  TSIZE, MEMCPY_Callback, chan);
    TEST_ASSERT(ret == HAL_OK);

    ret = HAL_PL330_Start(chan);
    TEST_ASSERT(ret == HAL_OK);
}

TEST(HAL_PL330, PL330MemcpyTest)
{
    PL330_MEMCPY(pl330, DMA_BASE, BURST);
}

TEST_GROUP_RUNNER(HAL_PL330)
{
    HAL_NVIC_ConfigExtIRQ(DMAC_IRQn, (NVIC_IRQHandler)&HAL_PL330_Handler,
                          NVIC_PERIPH_PRIO_DEFAULT);
    HAL_NVIC_ConfigExtIRQ(DMAC_ABORT_IRQn, (NVIC_IRQHandler)&HAL_PL330_Handler,
                          NVIC_PERIPH_PRIO_DEFAULT);
    RUN_TEST_CASE(HAL_PL330, PL330InitAndDeinit);
    RUN_TEST_CASE(HAL_PL330, PL330MemcpyTest);
}
