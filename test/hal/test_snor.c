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
#define FLASH_SKIP_LBA 0x100 /* About 1M space skip */

HAL_Status SNOR_SINGLE_TEST(void)
{
    uint32_t ret, testLba = 0x80;

    pwrite32[0] = testLba;
    HAL_SNOR_Erase(nor, testLba << 9, 0);
    ret = HAL_GetTick();
    HAL_SNOR_ProgData(nor, testLba << 9, pwrite32, 0x1000);
    ret = HAL_GetTick() - ret;
    HAL_DBG("write %lu KB/s\n", 4 * 1000 / ret);
    memset(pread, 0, 256);
    ret = HAL_GetTick();
    for (int i = 0; i < 1024; i++)
        HAL_SNOR_ReadData(nor, testLba << 9, pread32, 0x1000);
    ret = HAL_GetTick() - ret;
    HAL_DBG("read %lu MB/s\n", 4 * 1000 / ret);
    for (int32_t i = 0; i < (0x1000 / 4); i++) {
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

static HAL_Status SNOR_STRESS_RANDOM_TEST(uint32_t testEndLBA)
{
    int32_t ret, j;
    uint32_t testCount, testLBA;
    int32_t testSecCount = 1;

    HAL_DBG("---------%s %lx---------\n", __func__, testEndLBA);
    HAL_DBG("---------%s---------\n", __func__);
    for (testCount = 0; testCount < testEndLBA; testCount++) {
        testLBA = (uint32_t)HAL_TIMER_GetCount(SYS_TIMER) % testEndLBA;
        testLBA = testLBA < FLASH_SKIP_LBA ? testLBA + FLASH_SKIP_LBA : testLBA;
        pwrite32[0] = testLBA;
        ret = HAL_SNOR_OverWrite(nor, testLBA, testSecCount, pwrite32);
        if (ret != testSecCount)
            return ret;
        pread32[0] = -1;
        ret = HAL_SNOR_Read(nor, testLBA, testSecCount, pread32);
        if (ret != testSecCount)
            return ret;
        for (j = 0; j < testSecCount * (int32_t)nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, 16);
                HAL_DBG_HEX("r:", pread32, 4, 16);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx %lx %lx %lx\n",
                    testLBA, j, pwrite32[j], pread32[j], pread32[j + 1], pread32[j + 2], pread32[j - 1]);

                return HAL_ERROR;
            }
        }
        HAL_DBG("testCount= %lx testLBA= %lx\n", testCount, testLBA);
    }
    HAL_DBG("---------%s SUCCESS---------\n", __func__);

    return HAL_OK;
}

#ifdef HAL_FSPI_XIP_ENABLE
static HAL_Status SNOR_XIP_RANDOM_TEST(uint32_t testEndLBA)
{
    uint32_t j, ret;
    uint32_t testLBA = 0;
    uint32_t testCount, testSecCount = 1;

    HAL_DBG("---------%s Begin to set pattern---------\n", __func__);
    for (testLBA = FLASH_SKIP_LBA; (testLBA + testSecCount) < testEndLBA;) {
        pwrite32[0] = testLBA;
        ret = HAL_SNOR_OverWrite(nor, testLBA, testSecCount, pwrite32);
        if (ret != testSecCount)
            return ret;
        pread32[0] = -1;
        ret = HAL_SNOR_Read(nor, testLBA, testSecCount, pread32);
        if (ret != testSecCount)
            return ret;
        for (j = 0; j < testSecCount * (int32_t)nor->sectorSize / 4; j++) {
            if (pwrite32[j] != pread32[j]) {
                HAL_DBG_HEX("w:", pwrite32, 4, 16);
                HAL_DBG_HEX("r:", pread32, 4, 16);
                HAL_DBG(
                    "check not match:row=%lx, num=%lx, write=%lx, read=%lx %lx %lx %lx\n",
                    testLBA, j, pwrite32[j], pread32[j], pread32[j + 1], pread32[j + 2], pread32[j - 1]);

                return HAL_ERROR;
            }
        }
        HAL_DBG("testLBA = %lx\n", testLBA);
        testLBA += testSecCount;
    }
    HAL_DBG("---------%s Begin to test---------\n", __func__);
    HAL_SNOR_XIPEnable(nor);
    testSecCount = 1;
    for (testCount = 0; testCount < testEndLBA; testCount++) {
        testLBA = (uint32_t)HAL_TIMER_GetCount(SYS_TIMER) % testEndLBA;
        testLBA = testLBA < FLASH_SKIP_LBA ? testLBA + FLASH_SKIP_LBA : testLBA;
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
        HAL_DBG("testCount= %lx testLBA = %lx\n", testCount, testLBA);
        testLBA += testSecCount;
    }
    HAL_DBG("---------%s SUCCESS---------\n", __func__);
    HAL_SNOR_XIPDisable(nor);

    return HAL_OK;
}
#endif

TEST_GROUP(HAL_SNOR);

TEST_SETUP(HAL_SNOR){
    int32_t i;

    /* Write pattern */
    for (i = 0; i < (maxest_sector * (int32_t)nor->sectorSize / 4); i++)
        pwrite32[i] = i;
}

TEST_TEAR_DOWN(HAL_SNOR){
}

/* SNOR test case 0 */
TEST(HAL_SNOR, SnorStressRandomTest){
    int32_t ret, testEndLBA;

    ret = SNOR_SINGLE_TEST();
    TEST_ASSERT(ret == HAL_OK);
    testEndLBA = HAL_SNOR_GetCapacity(nor) / nor->sectorSize;
    TEST_ASSERT(testEndLBA > 0);
    ret = SNOR_STRESS_RANDOM_TEST(testEndLBA);
    TEST_ASSERT(ret == HAL_OK);
}

#ifdef HAL_FSPI_XIP_ENABLE
/* SNOR test case 1 */
TEST(HAL_SNOR, SnorXIPRandomTest){
    int32_t ret, testEndLBA;

    testEndLBA = HAL_SNOR_GetCapacity(nor) / nor->sectorSize;
    TEST_ASSERT(testEndLBA > 0);
    ret = SNOR_XIP_RANDOM_TEST(testEndLBA);
    HAL_SNOR_XIPDisable(nor);
    TEST_ASSERT(ret == HAL_OK);
}
#endif

static uint8_t *AlignUp(uint8_t *ptr, int32_t align)
{
    return (uint8_t *)(((uintptr_t)ptr + align - 1) & ~(uintptr_t)(align - 1));
}

#ifdef HAL_SNOR_FSPI_HOST
static HAL_Status FSPI_IRQHandler(void)
{
    struct HAL_FSPI_HOST *host = (struct HAL_FSPI_HOST *)nor->spi->userdata;

    HAL_FSPI_IRQHelper(host);

    return HAL_OK;
}
#endif

#ifdef HAL_SNOR_SPI_HOST
static HAL_Status SPI_IRQHandler(void)
{
    struct SPI_HANDLE *host = (struct SPI_HANDLE *)nor->spi->userdata;

    HAL_SPI_IrqHandler(host);

    return HAL_OK;
}

static HAL_Status SPI_ReadID_IT(struct SPI_HANDLE *pSPI)
{
    uint32_t timeout, ret = HAL_OK;

    pwrite[0] = 0x9f;
    HAL_SPI_Configure(pSPI, pwrite, pread, 4);
    HAL_SPI_SetCS(pSPI, 0, HAL_TRUE);
    HAL_SPI_ItTransfer(pSPI);
    timeout = HAL_GetTick() + 10000;    /* FPGA may be in low frequency */
    do {
        ret = HAL_SPI_QueryBusState(pSPI);
        if (ret == HAL_OK)
            break;
    } while (timeout > HAL_GetTick());
    HAL_SPI_SetCS(pSPI, 0, HAL_FALSE);
    HAL_SPI_Stop(pSPI);
    HAL_DBG("SPI Nor ID %x %x %x\n", pread[1], pread[2], pread[3]);

    return ret;
}

HAL_Status HAL_SPI_Xfer(struct SNOR_HOST *spi, uint32_t bitlen, const void *dout, void *din, unsigned long flags)
{
    struct SPI_HANDLE *pSPI = (struct SPI_HANDLE *)spi->userdata;
    uint8_t *tx_data = (uint8_t *)dout;
    uint8_t *rx_data = (uint8_t *)din;
    unsigned int len = bitlen / 8;
    int ret;
    uint32_t timeout;
    uint32_t realLen, xferLimit = 64;

    /* HAL_DBG("%s %lx %lx\n", __func__, bitlen, flags); */
    if (flags & SPI_XFER_BEGIN)
        HAL_SPI_SetCS(pSPI, 0, HAL_TRUE);

    do {
        realLen = HAL_MIN(len, xferLimit);
        HAL_SPI_Configure(pSPI, tx_data, rx_data, realLen);
        HAL_SPI_PioTransfer(pSPI);
        if (tx_data) {
            /* HAL_DBG("%s len=%lx tx0= %x tx1=%x tx2=%x tx3=%x\n", __func__, realLen, tx_data[0], tx_data[1], tx_data[2], tx_data[2]); */
            timeout = HAL_GetTick() + 10000;    /* FPGA may be in low frequency */
            do {
                ret = HAL_SPI_QueryBusState(pSPI);
                if (ret == HAL_OK)
                    break;
            } while (timeout > HAL_GetTick());
            if (ret) {
                HAL_DBG("%s timeout\n", __func__);

                return HAL_TIMEOUT;
            }
        }
        len -= realLen;
        tx_data += realLen;
        rx_data += realLen;
        HAL_SPI_Stop(pSPI);
    } while (len > 0);

    if (flags & SPI_XFER_END) {
        HAL_SPI_SetCS(pSPI, 0, HAL_FALSE);
        HAL_DelayUs(1);
    }

    return HAL_OK;
}
#endif

/* Test code should be place in ram */
TEST_GROUP_RUNNER(HAL_SNOR){
    struct SNOR_HOST *spi;
    uint8_t *pwrite_t, *pread_t;

    pwrite_t = (uint8_t *)malloc(maxest_sector * 4096 + 64);
    pread_t = (uint8_t *)malloc(maxest_sector * 4096 + 64);
    pwrite = AlignUp(pwrite_t, 64);
    pread = AlignUp(pread_t, 64);
    HAL_DBG("pwrite %p pread %p\n", pwrite, pread);
    TEST_ASSERT_NOT_NULL(pread);
    TEST_ASSERT_NOT_NULL(pwrite);
    pwrite32 = (uint32_t *)pwrite;
    pread32 = (uint32_t *)pread;
    /* Write pattern */
    for (int32_t i = 0; i < (maxest_sector * (int32_t)nor->sectorSize / 4); i++)
        pwrite32[i] = i;

    spi = (struct SNOR_HOST *)calloc(1, sizeof(struct SNOR_HOST));
    TEST_ASSERT_NOT_NULL(spi);
    nor = (struct SPI_NOR *)calloc(1, sizeof(struct SPI_NOR));
    TEST_ASSERT_NOT_NULL(nor);
    nor->spi = spi;

#ifdef HAL_SNOR_FSPI_HOST
    uint32_t ret;
    static struct HAL_FSPI_HOST *fspiHost;

    fspiHost = (struct HAL_FSPI_HOST *)calloc(1, sizeof(struct HAL_FSPI_HOST));
    TEST_ASSERT_NOT_NULL(fspiHost);

    fspiHost->instance = FSPI0;
    HAL_NVIC_SetIRQHandler(FSPI0_IRQn, (NVIC_IRQHandler) & FSPI_IRQHandler);
    HAL_NVIC_EnableIRQ(FSPI0_IRQn);
    HAL_FSPI_Init(fspiHost);

    spi->mode = SPI_MODE_3 | SPI_TX_QUAD | SPI_RX_QUAD;
#ifdef HAL_FSPI_XIP_ENABLE
    spi->mode |= SPI_XIP;
#endif
    spi->userdata = (void *)fspiHost;

/* SPI Setting */
#elif defined(HAL_SNOR_SPI_HOST)
    uint32_t ret;

    static struct SPI_HANDLE *spiHost;

    spiHost = (struct SPI_HANDLE *)calloc(1, sizeof(struct SPI_HANDLE));
    TEST_ASSERT_NOT_NULL(spiHost);

    spiHost->config.clkPolarity = CR0_POLARITY_HIGH;
    spiHost->config.clkPhase = CR0_PHASE_2EDGE;
    spiHost->config.firstBit = CR0_FIRSTBIT_MSB;
    spiHost->config.speed = HAL_SPI_MASTER_MAX_SCLK_OUT;
    spiHost->config.nBytes = CR0_DATA_FRAME_SIZE_8BIT;

    HAL_NVIC_SetIRQHandler(SPI0_IRQn, (NVIC_IRQHandler) & SPI_IRQHandler);
    HAL_NVIC_EnableIRQ(SPI0_IRQn);
    HAL_SPI_Init(spiHost, SPI0_BASE, HAL_FALSE);
    HAL_SPI_Stop(spiHost);

    spi->mode = SPI_MODE_3;
    spi->userdata = (void *)spiHost;

    SPI_ReadID_IT(spiHost);

#endif

    ret = HAL_SNOR_Init(nor);
    TEST_ASSERT(ret == HAL_OK);
    if (ret != HAL_OK)
        HAL_DBG("%s fail, ret %ld\n", __func__, ret);

    RUN_TEST_CASE(HAL_SNOR, SnorStressRandomTest);
#ifdef HAL_FSPI_XIP_ENABLE
    RUN_TEST_CASE(HAL_SNOR, SnorXIPRandomTest);
#endif

    /* SNOR deinit */
    ret = HAL_SNOR_DeInit(nor);
    TEST_ASSERT(ret == HAL_OK);

    free(pwrite_t);
    free(pread_t);
    free(spi);
    free(nor);
#if defined(HAL_SNOR_FSPI_HOST)
    free(fspiHost);
#elif defined(HAL_FSPI_MODULE_ENABLED)
    free(spiHost);
#endif
}

#endif
