/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#ifdef HAL_SNOR_MODULE_ENABLED

struct SPI_NOR *nor;
#define maxest_sector 4
static uint8_t *pwrite;
static uint8_t *pread;
static uint32_t *pread32;
static uint32_t *pwrite32;

struct cmdSet {
    char name[6];
    uint32_t ctrl;
    uint32_t cmd;
};

HAL_Status SNOR_SINGLE_TEST(void)
{
    uint32_t i, testLba = 0x80;

    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;

    for (i = 0; i < 256; i++) {
        pwrite[i] = i;
    }
    pwrite32[0] = testLba;

    HAL_SNOR_Erase(nor, testLba << 9, 0);
    HAL_SNOR_ProgData(nor, testLba << 9, pwrite32, 0x100);
    memset(pread, 0, 256);
    HAL_SNOR_ReadData(nor, testLba << 9, pread32, 0x100);
    for (int32_t i = 0; i < 256; i++) {
        if (pwrite[i] != pread[i]) {
            HAL_DBG_HEX("w", pwrite, 4, 64);
            HAL_DBG_HEX("r", pread, 4, 64);
            HAL_DBG("SNOR Single test fail\n");

            return HAL_ERROR;
        }
    }
    HAL_DBG("SNOR Single test success\n");

    return HAL_OK;
}

static HAL_Status SNOR_TEST(uint32_t testEndLBA)
{
    uint32_t ret, i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;

    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;
    for (i = 0; i < (maxest_sector * nor->sectorSize / 4); i++)
        pwrite32[i] = i;

    HAL_DBG("---------Test SNOR STRESS TEST---------\n");
    HAL_DBG("---------Test ftl write---------\n");
    testSecCount = 1;
    HAL_DBG("testEndLBA = %lx\n", testEndLBA);
    HAL_DBG("testLBA = %lx\n", testLBA);
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        ret = HAL_SNOR_OverWrite(nor, testLBA, testSecCount, pwrite32);
        if (ret != testSecCount)
            return ret;
        pread32[0] = -1;
        ret = HAL_SNOR_Read(nor, testLBA, testSecCount, pread32);
        if (ret != testSecCount)
            return ret;
        for (j = 0; j < testSecCount * nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, 16);
                HAL_DBG_HEX("r:", pread32, 4, 16);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx %lx %lx %lx\n",
                    testLBA, j, pwrite32[j], pread32[j], pread32[j+1], pread32[j+2], pread32[j-1]);

                return HAL_ERROR;
            }
        }
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
        pread32[0] = -1;
        ret = HAL_SNOR_Read(nor, testLBA, testSecCount, pread32);
        if (ret != testSecCount)
            return ret;
        for (j = 0; j < testSecCount * nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * nor->sectorSize / 4);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * nor->sectorSize / 4);
                HAL_DBG(
                    "recheck not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, pwrite32[j], pread32[j]);

                return HAL_ERROR;
            }
        }
        HAL_DBG("testLBA = %lx\n", testLBA);
        testLBA += testSecCount;
        testSecCount++;
        if (testSecCount > maxest_sector)
            testSecCount = 1;
    }
    HAL_DBG("---------Test end---------\n");

    return HAL_OK;
}

#ifdef HAL_FSPI_XIP_ENABLE
static HAL_Status SNOR_XIP_TEST(uint32_t testEndLBA)
{
    uint32_t i, j;
    uint32_t testLBA = 0;
    uint32_t testSecCount = 1;

    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;
    for (i = 0; i < (maxest_sector * nor->sectorSize / 4); i++)
        pwrite32[i] = i;

    HAL_SNOR_XIPEnable(nor);
    HAL_DBG("---------Test SNOR XIP TEST---------\n");
    HAL_DBG("---------Test ftl write---------\n");
    testSecCount = 1;
    HAL_DBG("testEndLBA = %lx\n", testEndLBA);
    HAL_DBG("testLBA = %lx\n", testLBA);
    for (testLBA = 0; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        pread32 = (uint32_t *)(XIP_MEM_BASE + testLBA * nor->sectorSize);
        for (i = 0; i < testSecCount * nor->sectorSize / 4; i++)
            pread32[i] = pwrite32[i];
        for (j = 0; j < testSecCount * nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, 16);
                HAL_DBG_HEX("r:", pread32, 4, 16);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx %lx %lx %lx\n",
                    testLBA, j, pwrite32[j], pread32[j], pread32[j+1], pread32[j+2], pread32[j-1]);

                return HAL_ERROR;
            }
        }
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
        pread32 = (uint32_t *)(XIP_MEM_BASE + testLBA * nor->sectorSize);
        for (j = 0; j < testSecCount * nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, testSecCount * nor->sectorSize / 4);
                HAL_DBG_HEX("r:", pread32, 4, testSecCount * nor->sectorSize / 4);
                HAL_DBG(
                    "recheck not match:row=%lx, num=%lx, write=%lx, read=%lx\n",
                    testLBA, j, pwrite32[j], pread32[j]);

                return HAL_ERROR;
            }
        }
        HAL_DBG("testLBA = %lx\n", testLBA);
        testLBA += testSecCount;
        testSecCount++;
        if (testSecCount > maxest_sector)
            testSecCount = 1;
    }
    HAL_DBG("---------Test end---------\n");

    return HAL_OK;

}
#endif

TEST_GROUP(HAL_SNOR);

TEST_SETUP(HAL_SNOR){
}

TEST_TEAR_DOWN(HAL_SNOR){
}

/* SNOR test case 0 */
TEST(HAL_SNOR, SnorStressTest){
    int32_t ret, testEndLBA;

    ret = SNOR_SINGLE_TEST();
    TEST_ASSERT(ret == HAL_OK);
    testEndLBA = HAL_SNOR_GetCapacity(nor) / nor->sectorSize;
    TEST_ASSERT(testEndLBA > 0);
    ret = SNOR_TEST(testEndLBA);
    TEST_ASSERT(ret == HAL_OK);
}

#ifdef HAL_FSPI_XIP_ENABLE
/* SNOR test case 1 */
TEST(HAL_SNOR, SnorXIPTest){
    int32_t ret, testEndLBA;

    testEndLBA = HAL_SNOR_GetCapacity(nor) / nor->sectorSize;
    TEST_ASSERT(testEndLBA > 0);
    ret = SNOR_XIP_TEST(testEndLBA);
    TEST_ASSERT(ret == HAL_OK);
}
#endif

static uint8_t *AlignUp(uint8_t *ptr, int32_t align)
{
    return (uint8_t *)(((uintptr_t)ptr + align - 1) & ~(uintptr_t)(align - 1));
}

#ifdef HAL_FSPI_MODULE_ENABLED
static HAL_Status FSPI_IRQHandler(void)
{
    struct HAL_FSPI_HOST *host = (struct HAL_FSPI_HOST *)nor->spi->userdata;

    HAL_FSPI_IRQHelper(host);

    return HAL_OK;
}
#endif

/* Test code should be place in ram */
TEST_GROUP_RUNNER(HAL_SNOR){
    uint8_t *pwrite_t, *pread_t;

    pwrite_t = (uint8_t *)malloc(maxest_sector * 4096 + 64);
    pread_t = (uint8_t *)malloc(maxest_sector * 4096  + 64);
    pwrite = AlignUp(pwrite_t, 64);
    pread = AlignUp(pread_t, 64);
    HAL_DBG("pwrite %p pread %p\n", pwrite, pread);
    if (!pwrite || !pread) {
        HAL_DBG("malloc failed\n");
        while (1);
    }

#ifdef HAL_FSPI_MODULE_ENABLED
    uint32_t ret;
    static struct HAL_FSPI_HOST *fspiHost;
    struct SNOR_HOST *spi;

    fspiHost = (struct HAL_FSPI_HOST *)malloc(sizeof(struct HAL_FSPI_HOST));
    TEST_ASSERT_NOT_NULL(fspiHost);
    spi = (struct SNOR_HOST *)malloc(sizeof(struct SNOR_HOST));
    TEST_ASSERT_NOT_NULL(spi);
    nor = (struct SPI_NOR *)malloc(sizeof(struct SPI_NOR));
    TEST_ASSERT_NOT_NULL(nor);

    fspiHost->instance = FSPI0;
    HAL_FSPI_Init(fspiHost);

#ifdef HAL_FSPI_QUAD_ENABLE
    spi->mode = SPI_MODE_3 | SPI_TX_QUAD | SPI_RX_QUAD;
#else
    spi->mode = SPI_MODE_3;
#endif
    spi->userdata = (void *)fspiHost;

#ifdef HAL_FSPI_XIP_ENABLE
    spi->mode = SPI_XIP;
#endif
    nor->spi = spi;
    ret = HAL_SNOR_Init(nor);
    TEST_ASSERT(ret == HAL_OK);
    if (ret != HAL_OK)
        HAL_DBG("%s fail, ret %ld\n", __func__, ret);
    HAL_NVIC_SetIRQHandler(FSPI0_IRQn, (NVIC_IRQHandler) & FSPI_IRQHandler);
    HAL_NVIC_EnableIRQ(FSPI0_IRQn);
    RUN_TEST_CASE(HAL_SNOR, SnorStressTest);
#ifdef HAL_FSPI_XIP_ENABLE
    RUN_TEST_CASE(HAL_SNOR, SnorXIPTest);
#endif
    /* SNOR deinit */
    ret = HAL_SNOR_Deinit(nor);
    TEST_ASSERT(ret == HAL_OK);
#endif

    free(pwrite_t);
    free(pread_t);
}

#endif
