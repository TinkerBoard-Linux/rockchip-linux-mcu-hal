/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#ifdef RKMCU_PISCES
#define XIP_RAM_BASE 0x60000000
#endif

struct cmdSet {
    char name[6];
    uint32_t ctrl;
    uint32_t cmd;
};

static struct cmdSet cmdSets[5] = {
    { "03h", 0x00000002, 0x00004003 },
    { "3Bh", 0x00001002, 0x0000483b },
    { "6Bh", 0x00002002, 0x0000486b },
    { "EBH", 0x00002802, 0x000046eb },
    { "", 0, 0 }
};

void SNOR_XipEnable(uint32_t ctrl, uint32_t cmd)
{
    SFC->CTRL = ctrl;
    SFC->FETCH_CMD = cmd;
    SFC->XIP_MODE = 0x00000001;
}

void SNOR_XipDisable(void)
{
    SFC->XIP_MODE = 0x0;
}

#define maxest_sector 64
static uint8_t *pwrite;
static uint8_t *pread;
static uint32_t *pread32;
static uint32_t *pwrite32;
static HAL_Status SNOR_TEST(uint32_t testEndLBA)
{
    uint32_t ret, i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;
    uint32_t printFlag;

    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;
    for (i = 0; i < (maxest_sector * 512); i++)
        pwrite[i] = i;

    HAL_DBG("---------Test SNOR STRESS TEST---------\n");
    HAL_DBG("---------Test ftl write---------\n");
    testSecCount = 1;
    HAL_DBG("testEndLBA = %lx\n", testEndLBA);
    HAL_DBG("testLBA = %lx\n", testLBA);
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        if (testLBA == 0) {
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
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
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

static HAL_Status SNOR_XIP_TEST(uint32_t testEndLBA, uint8_t cmdSetNum)
{
    uint32_t i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;
    uint32_t printFlag;

    pwrite32 = (uint32_t *)pwrite;

    for (i = 0; i < (maxest_sector * 512); i++)
        pwrite[i] = i;

    HAL_DBG("XIP %s read, flash memory in %x\n", cmdSets[cmdSetNum].name, XIP_RAM_BASE);
    SNOR_XipEnable(cmdSets[cmdSetNum].ctrl, cmdSets[cmdSetNum].cmd);

    testSecCount = 1;
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread32 = (uint32_t *)(XIP_RAM_BASE + testLBA * 512);
        for (j = 0; j < testSecCount * 128; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * 128);
                HAL_DBG(
                    "xip not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pwrite32[j], (uint32_t)pread32[j]);

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
    SNOR_XipDisable();

    return HAL_OK;
}

static HAL_Status SNOR_XIP_DEFAULT_TEST(uint32_t testEndLBA)
{
    uint32_t i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;
    uint32_t printFlag;

    pwrite32 = (uint32_t *)pwrite;

    for (i = 0; i < (maxest_sector * 512); i++)
        pwrite[i] = i;

    HAL_DBG("XIP default cmd read, flash memory in %x\n", XIP_RAM_BASE);
    HAL_SNOR_XipEnable();

    testSecCount = 1;
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread32 = (uint32_t *)(XIP_RAM_BASE + testLBA * 512);
        for (j = 0; j < testSecCount * 128; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * 128);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * 128);
                HAL_DBG(
                    "xip not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, (uint32_t)pwrite32[j], (uint32_t)pread32[j]);

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
    HAL_SNOR_XipDisable();

    return HAL_OK;
}


TEST_GROUP(HAL_SNOR);

TEST_SETUP(HAL_SNOR){
}

TEST_TEAR_DOWN(HAL_SNOR){
}

/* SNOR test case 0 */
TEST(HAL_SNOR, SnorStressTest){
    uint32_t ret, testEndLBA;

    /*  */
    testEndLBA = 0;
    testEndLBA = HAL_SNOR_GetCapacity();
    TEST_ASSERT(testEndLBA > 0);

    ret = SNOR_TEST(testEndLBA / 10);
    TEST_ASSERT(ret == HAL_OK);
}

/* SNOR test case 1 */
TEST(HAL_SNOR, XipTest){
    uint32_t ret, testEndLBA;
    uint32_t i;

    /*  */
    testEndLBA = 0;
    testEndLBA = HAL_SNOR_GetCapacity();
    TEST_ASSERT(testEndLBA > 0);

    i = 0;
    while (cmdSets[i].cmd != 0) {
        ret = SNOR_XIP_TEST(testEndLBA / 10, i);
        TEST_ASSERT(ret == HAL_OK);
        i++;
    }
}

/* SNOR test case 2 */
TEST(HAL_SNOR, XipDefaultTest){
    uint32_t ret, testEndLBA;

    /*  */
    testEndLBA = 0;
    testEndLBA = HAL_SNOR_GetCapacity();
    TEST_ASSERT(testEndLBA > 0);


    ret = SNOR_XIP_DEFAULT_TEST(testEndLBA / 10);
    TEST_ASSERT(ret == HAL_OK);
}

TEST_GROUP_RUNNER(HAL_SNOR){
    uint32_t ret;

    pwrite = malloc(maxest_sector * 512);
    pread = malloc(maxest_sector * 512);

#if defined(RKMCU_PISCES)
    if (HAL_SNOR_IsInXip()) {
        HAL_DBG("Skip SNOR Test In XIP mode\n");

        return;
    }
    ret = HAL_SNOR_Init();
    TEST_ASSERT(ret == HAL_OK);
    RUN_TEST_CASE(HAL_SNOR, SnorStressTest);
    RUN_TEST_CASE(HAL_SNOR, XipDefaultTest);
    RUN_TEST_CASE(HAL_SNOR, XipTest);

    /* SNOR deinit */
    ret = HAL_SNOR_Deinit();
    TEST_ASSERT(ret == HAL_OK);
#endif
    free(pwrite);
    free(pread);
}
