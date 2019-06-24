/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#ifdef HAL_PSRAM_MODULE_ENABLED
static struct HAL_FSPI_HOST *sfcHost;
#define maxest_sector 16
static uint8_t *pwrite;
static uint32_t *pread32;
static uint32_t *pwrite32;

TEST_GROUP(HAL_PSRAM);

TEST_SETUP(HAL_PSRAM){
}

TEST_TEAR_DOWN(HAL_PSRAM){
}

static HAL_Status PSRAM_TEST(uint32_t testEndLBA)
{
    uint32_t i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;
    uint32_t printFlag;

    pwrite32 = (uint32_t *)pwrite;
    for (i = 0; i < (maxest_sector * 512); i++)
        pwrite[i] = i;

    HAL_DBG("---------Test PSRAM STRESS TEST---------\n");
    HAL_DBG("---------Test ftl write---------\n");
    testSecCount = 1;
    HAL_DBG("testEndLBA = %lx\n", testEndLBA);
    HAL_DBG("testLBA = %lx\n", testLBA);
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread32 = (uint32_t *)(XIP_MEM_BASE + testLBA * 512);
        for (i = 0; i < (maxest_sector * 128); i++)
            pread32[i] = pwrite32[i];
        for (j = 0; j < testSecCount * 128; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * 128);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pwrite32[j], (uint32_t)pread32[j]);
                while (1);

                return HAL_ERROR;
            }
        }
        printFlag = testLBA & 0x1FF;
        if (printFlag < testSecCount)
            HAL_DBG("testLBA = %lx\n", testLBA);
        testLBA += testSecCount;
        testSecCount++;
        if (testSecCount > maxest_sector)
            testSecCount = 1;
    }
    HAL_DBG("---------Test ftl check---------\n");

    testSecCount = 1;
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread32 = (uint32_t *)(XIP_MEM_BASE + testLBA * 512);
        for (j = 0; j < testSecCount * 128; j++) {
            if (pread32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * 128);
                HAL_DBG(
                    "recheck not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pread32[j], (uint32_t)pread32[j]);
                while (1);

                return HAL_ERROR;
            }
        }
        printFlag = testLBA & 0x1FF;
        if (printFlag < testSecCount)
            HAL_DBG("testLBA = %lx\n", testLBA);
        testLBA += testSecCount;
        testSecCount++;
        if (testSecCount > maxest_sector)
            testSecCount = 1;
    }
    HAL_DBG("---------Test end---------\n");

    return HAL_OK;
}

/* PSRAM test case 0 */
TEST(HAL_PSRAM, PsramStressTest){
    uint32_t ret;

    HAL_PSRAM_XmmcEnable(sfcHost);
    ret = PSRAM_TEST(0x1000);
    HAL_PSRAM_XmmcDisable(sfcHost);
    TEST_ASSERT(ret == HAL_OK);
}

static uint8_t *AlignUp(uint8_t *ptr, int32_t align)
{
    return (uint8_t *)(((uintptr_t)ptr + align - 1) & ~(uintptr_t)(align - 1));
}

/* Test code should be place in ram */
TEST_GROUP_RUNNER(HAL_PSRAM){
    uint32_t ret;
    uint8_t *pwrite_t;

    sfcHost = (struct HAL_FSPI_HOST *)malloc(sizeof(struct HAL_FSPI_HOST));
    sfcHost->instance = FSPI0;

    pwrite_t = (uint8_t *)malloc(maxest_sector * 512 + 64);
    pwrite = AlignUp(pwrite_t, CACHE_LINE_SIZE);
    HAL_DBG("pwrite %p\n", pwrite);
    if (!pwrite) {
        HAL_DBG("malloc failed\n");
        while (1);
    }

    ret = HAL_PSRAM_Init(sfcHost, 0);
    TEST_ASSERT(ret == HAL_OK);
    RUN_TEST_CASE(HAL_PSRAM, PsramStressTest);

    ret = HAL_PSRAM_Deinit(sfcHost, 0);
    TEST_ASSERT(ret == HAL_OK);

    free(pwrite_t);
}
#endif
