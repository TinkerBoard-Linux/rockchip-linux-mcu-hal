/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#if defined(RKMCU_PISCES) || defined(RKMCU_RK2108)

#ifdef UNITY_HAL_COREMARK
#include "coremark.h"
#endif

TEST_GROUP(HAL_LEAGACY);

TEST_SETUP(HAL_LEAGACY){
}

TEST_TEAR_DOWN(HAL_LEAGACY){
}

#ifdef UNITY_HAL_DataAccess
#define BUFFER_SIZE (16 * 1024) /* Config the size of test buffer */
#ifdef RKMCU_PISCES
#define XIP_RAM_BASE 0x60000000
#endif

static char *AlignUp(char *ptr, int32_t align)
{
    return (char *)(((uintptr_t)ptr + align - 1) & ~(uintptr_t)(align - 1));
}

static void *AllocBuffer(void * *buf1_, int32_t size)
{
    char * *buf1 = (char * *)buf1_;
    char *buf, *ptr;

    if (!buf1 || size < 0)
        size = 0;

    ptr = buf = (char *)malloc(size + CACHE_LINE_SIZE);
    memset(buf, 0xCC, size + CACHE_LINE_SIZE);

    *buf1 = AlignUp(ptr, CACHE_LINE_SIZE);

    return buf;
}

static void SumTest(uint32_t *src, uint32_t *dst, uint32_t size)
{
    int32_t i, sum;

    for (i = 0; i < (size / 4); i++)
        sum += src[i];

    dst[0] = sum;
}

static void DataAccessHelper(uint32_t *srcbuf, uint32_t *dstbuf, void (*f)(int32_t *, int32_t *, uint32_t))
{
    uint32_t uTick[4], tickVal[4];
    struct CACHE_PMU_CNT pmuStatus[4];
    double val;

    /* 1st test */
    HAL_DCACHE_CleanInvalidate();
    HAL_DCACHE_GetPMU(&pmuStatus[0]);
    uTick[0] = HAL_GetTick();
    tickVal[0] = SysTick->VAL;
    f(srcbuf, dstbuf, BUFFER_SIZE);
    tickVal[1] = SysTick->VAL;
    uTick[1] = HAL_GetTick();
    HAL_DCACHE_GetPMU(&pmuStatus[1]);

    /* 2nd test */
    HAL_DCACHE_GetPMU(&pmuStatus[2]);
    uTick[2] = HAL_GetTick();
    tickVal[2] = SysTick->VAL;
    f(srcbuf, dstbuf, BUFFER_SIZE);
    tickVal[3] = SysTick->VAL;
    uTick[3] = HAL_GetTick();
    HAL_DCACHE_GetPMU(&pmuStatus[3]);

    val = (double)BUFFER_SIZE / ((double)((uTick[1] - uTick[0]) * SysTick->LOAD + tickVal[0] - tickVal[1]));
    HAL_DBG("1st: %.2f cycle/byte %.2f MB/s (CCLK 30Mhz)\n", 1 / val, val * 30000000 / 1024 / 1024);
    HAL_DBG("PMU read hit/total=%lu/%lu rate= %f\n",
            pmuStatus[1].rdHit - pmuStatus[0].rdHit,
            pmuStatus[1].rdNum - pmuStatus[0].rdNum,
            (double)(pmuStatus[1].rdHit - pmuStatus[0].rdHit) / (double)(pmuStatus[1].rdNum - pmuStatus[0].rdNum));
    HAL_DBG("PMU read miss penalty %lu\n", pmuStatus[1].rdMissPenalty - pmuStatus[0].rdMissPenalty);
    val = (double)BUFFER_SIZE / ((double)((uTick[3] - uTick[2]) * SysTick->LOAD + tickVal[2] - tickVal[3]));
    HAL_DBG("2nd: %.2f cycle/byte %.2f MB/s (CCLK 30Mhz)\n", 1 / val, val * 30000000 / 1024 / 1024);
    HAL_DBG("PMU read hit/total=%lu/%lu rate= %f\n",
            pmuStatus[3].rdHit - pmuStatus[2].rdHit,
            pmuStatus[3].rdNum - pmuStatus[2].rdNum,
            (double)(pmuStatus[3].rdHit - pmuStatus[2].rdHit) / (double)(pmuStatus[3].rdNum - pmuStatus[2].rdNum));
    HAL_DBG("PMU read miss penalty %lu\n", pmuStatus[3].rdMissPenalty - pmuStatus[2].rdMissPenalty);
}

TEST(HAL_LEAGACY, DataAccess){
    int32_t *xipbuf, *srcbuf, *dstbuf;
    void *poolbuf1, *poolbuf2;

    HAL_DBG("\nDataAccess\n");
    HAL_DCACHE_EnablePMU();

    poolbuf1 = AllocBuffer((void * *)&srcbuf, BUFFER_SIZE);
    poolbuf2 = AllocBuffer((void * *)&dstbuf, BUFFER_SIZE);

    HAL_DBG("SRAM DataAccess\n");
    DataAccessHelper(srcbuf, dstbuf, (void *)&SumTest);

#ifdef XIP_RAM_BASE
    xipbuf = (int32_t *)XIP_RAM_BASE;

    if (HAL_SNOR_IsInXip() == FALSE) {
        HAL_SNOR_Init();

        HAL_SNOR_XipEnable();

        HAL_DBG("XIP DataAccess\n");
        DataAccessHelper(xipbuf, dstbuf, (void *)&SumTest);

        HAL_SNOR_XipDisable();
    } else {
        HAL_DBG("Skip XIP DataAccess Test In XIP mode\n");

    }
#endif

    free(poolbuf1);
    free(poolbuf2);

    HAL_SNOR_Deinit();
}
#endif

#ifdef UNITY_HAL_THROUGHPUT
static void NopTest(void)
{
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
    __NOP();
}

TEST(HAL_LEAGACY, CodePerformance){
    uint32_t uTick[4], tickVal[4];
    struct CACHE_PMU_CNT pmuStatus[4];

    HAL_DBG("\nCodePerformance\n");
    HAL_ICACHE_EnablePMU();
    HAL_ICACHE_GetPMU(&pmuStatus[0]);
    uTick[0] = HAL_GetTick();
    tickVal[0] = SysTick->VAL;
    NopTest();
    tickVal[1] = SysTick->VAL;
    uTick[1] = HAL_GetTick();
    HAL_ICACHE_GetPMU(&pmuStatus[1]);

    HAL_ICACHE_GetPMU(&pmuStatus[2]);
    uTick[2] = HAL_GetTick();
    tickVal[2] = SysTick->VAL;
    NopTest();
    tickVal[3] = SysTick->VAL;
    uTick[3] = HAL_GetTick();
    HAL_ICACHE_GetPMU(&pmuStatus[3]);

    HAL_DBG("1st: %f cycle per NOP\n",
            ((double)(uTick[1] - uTick[0]) * SysTick->LOAD + tickVal[0] - tickVal[1]) / (1024));  /* SysTick->VAL reciprocal */
    HAL_DBG("PMU read hit/total=%lu/%lu rate= %f\n",
            pmuStatus[1].rdHit - pmuStatus[0].rdHit,
            pmuStatus[1].rdNum - pmuStatus[0].rdNum,
            (double)(pmuStatus[1].rdHit - pmuStatus[0].rdHit) / (double)(pmuStatus[1].rdNum - pmuStatus[0].rdNum));
    HAL_DBG("PMU read miss penalty %lu\n", pmuStatus[1].rdMissPenalty - pmuStatus[0].rdMissPenalty);

    HAL_DBG("2nd: %f cycle per NOP\n",
            ((double)(uTick[3] - uTick[2]) * SysTick->LOAD + tickVal[2] - tickVal[3]) / (1024));
    HAL_DBG("PMU read hit/total=%lu/%lu rate= %f\n",
            pmuStatus[3].rdHit - pmuStatus[2].rdHit,
            pmuStatus[3].rdNum - pmuStatus[2].rdNum,
            (double)(pmuStatus[3].rdHit - pmuStatus[2].rdHit) /  (double)(pmuStatus[3].rdNum - pmuStatus[2].rdNum));
    HAL_DBG("PMU read miss penalty %lu\n", pmuStatus[3].rdMissPenalty - pmuStatus[2].rdMissPenalty);
    HAL_ICACHE_DisablePMU();
}
#endif

#ifdef UNITY_HAL_COREMARK
TEST(HAL_LEAGACY, CoreMark){
    coremark_main();
}
#endif

/* I/D cache should be preseted and enable */
TEST_GROUP_RUNNER(HAL_LEAGACY){
#ifdef UNITY_HAL_THROUGHPUT
    RUN_TEST_CASE(HAL_LEAGACY, CodePerformance);
#endif

#ifdef UNITY_HAL_DataAccess
    RUN_TEST_CASE(HAL_LEAGACY, DataAccess);
#endif

#ifdef UNITY_HAL_COREMARK
    RUN_TEST_CASE(HAL_LEAGACY, CoreMark);
#endif
}

#endif

