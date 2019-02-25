/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(HAL_SNOR);

TEST_SETUP(HAL_SNOR)
{
}

TEST_TEAR_DOWN(HAL_SNOR)
{
}

#define maxest_sector 64
static uint8_t pwrite[maxest_sector * 512];
static uint8_t pread[maxest_sector * 512];
static uint32_t *pread32;
static uint32_t *pwrite32;
static HAL_Status SNOR_TEST(uint32_t testEndLBA)
{
    uint32_t ret, i, j, loop = 0;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;
    uint32_t printFlag;

    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;
    for (i = 0; i < (maxest_sector * 512); i++)
        pwrite[i] = i;

    HAL_DBG("---------Test loop = %lx---------\n", loop);
    HAL_DBG("---------Test ftl write---------\n");
    testSecCount = 1;
    HAL_DBG("testEndLBA = %lx\n", testEndLBA);
    HAL_DBG("testLBA = %lx\n", testLBA);
    for (testLBA = 0 + loop; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        if (testLBA == loop) {
            ret = HAL_SNOR_Erase((testLBA & 0xFFFFFF80) << 9, ERASE_BLOCK64K);
            if (ret)
                return ret;
        }
        ret = HAL_SNOR_Write(testLBA, testSecCount, pwrite);
        if (ret)
            return ret;
        pread[0] = -1;
        ret = HAL_SNOR_Read(testLBA, testSecCount, pread);
        if (ret)
            return ret;
        for (j = 0; j < testSecCount * 512; j++) {
            if (pwrite[j] != pread[j]) {
                HAL_DBG_HEX("w:", pwrite, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread, 4, testSecCount * 128);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pwrite[j], (uint32_t)pread[j]);
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
    for (testLBA = 0 + loop; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread[0] = -1;
        ret = HAL_SNOR_Read(testLBA, testSecCount, pread);
        if (ret)
            return ret;
        for (j = 0; j < testSecCount * 512; j++) {
            if (pwrite[j] != pread[j]) {
                HAL_DBG_HEX("w:", pwrite, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread, 4, testSecCount * 128);
                HAL_DBG(
                    "recheck not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pwrite[j], (uint32_t)pread[j]);
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

/* TIMER test case 0 */
TEST(HAL_SNOR, SnorStressTest)
{
    uint32_t ret, testEndLBA;

    /* Controller init */
    ret = HAL_SFC_Init();
    TEST_ASSERT(ret == HAL_OK);

    /* SNOR init */
    ret = HAL_SNOR_Init();
    TEST_ASSERT(ret == HAL_OK);

    /*  */
    testEndLBA = 0;
    testEndLBA = HAL_SNOR_GetCapacity();
    TEST_ASSERT(testEndLBA > 0);

    ret = SNOR_TEST(testEndLBA / 10);
    TEST_ASSERT(ret == HAL_OK);
}

TEST_GROUP_RUNNER(HAL_SNOR)
{
    RUN_TEST_CASE(HAL_SNOR, SnorStressTest);
}
