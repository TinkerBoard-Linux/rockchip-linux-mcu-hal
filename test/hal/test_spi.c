/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#if defined(HAL_SPI_MODULE_ENABLED) && defined(UNITY_HAL_SPI)
/*************************** SPI DRIVER ****************************/

/***************************** MACRO Definition ******************************/

#define ROCKCHIP_SPI_SPEED_DEFAULT 10000000

#define SPI_DEVICE_MAX 4
#define SPI_MAX_CH     2

struct SPI_DEVICE_CLASS {
    /* status */
    uint32_t error;

    /* Hal */
    struct SPI_HANDLE instance;
    const struct HAL_SPI_DEV *halDev;
};

/* RK_SPI_CONFIG mode */
#define RK_SPI_CPHA (1<<0)                         /* bit[0]:CPHA, clock phase */
#define RK_SPI_CPOL (1<<1)                         /* bit[1]:CPOL, clock polarity */
/**
 * At CPOL=0 the base value of the clock is zero
 *  - For CPHA=0, data are captured on the clock's rising edge (low->high transition)
 *    and data are propagated on a falling edge (high->low clock transition).
 *  - For CPHA=1, data are captured on the clock's falling edge and data are
 *    propagated on a rising edge.
 * At CPOL=1 the base value of the clock is one (inversion of CPOL=0)
 *  - For CPHA=0, data are captured on clock's falling edge and data are propagated
 *    on a rising edge.
 *  - For CPHA=1, data are captured on clock's rising edge and data are propagated
 *    on a falling edge.
 */
#define RK_SPI_MODE_0    (0 | 0)                        /* CPOL = 0, CPHA = 0 */
#define RK_SPI_MODE_1    (0 | RK_SPI_CPHA)              /* CPOL = 0, CPHA = 1 */
#define RK_SPI_MODE_2    (RK_SPI_CPOL | 0)              /* CPOL = 1, CPHA = 0 */
#define RK_SPI_MODE_3    (RK_SPI_CPOL | RK_SPI_CPHA)    /* CPOL = 1, CPHA = 1 */
#define RK_SPI_MODE_MASK (RK_SPI_CPHA | RK_SPI_CPOL | RK_SPI_MSB)

#define RK_SPI_LSB (0<<2)                         /* bit[2]: 0-LSB */
#define RK_SPI_MSB (1<<2)                         /* bit[2]: 1-MSB */

#define RK_SPI_MASTER (0<<3)                         /* SPI master device */
#define RK_SPI_SLAVE  (1<<3)                         /* SPI slave device */

#define RK_SPI_CSM_SHIFT (4)
#define RK_SPI_CSM_MASK  (0x3 << 4)                     /* SPI master ss_n hold cycles for MOTO SPI master */

/* Rockchip SPI configuration */
struct RK_SPI_CONFIG {
    uint8_t mode;
    uint8_t dataWidth;
    uint8_t reserved;

    uint32_t maxHz;
};

/* Rockchip SPI xfer massage */
struct RK_SPI_MESSAGE {
    uint32_t ch;
    const void *sendBuf;
    void *recvBuf;
    uint32_t length;

    unsigned csTake    : 1;
    unsigned csRelease : 1;
};

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/
HAL_Status SPI_Configure(uint8_t id, struct RK_SPI_CONFIG *config);
uint32_t SPI_Transfer(uint8_t id, uint8_t ch, const void *sendBuf, void *recvBuf, uint32_t length);
uint32_t SPI_Write(uint8_t id, uint8_t cs, const void *sendBuf, uint32_t length);
uint32_t SPI_Read(uint8_t id, uint8_t cs, void *recvBuf, uint32_t length);
HAL_Status SPI_SendThenSend(uint8_t id, uint8_t ch, const void *sendBuf0, uint32_t len0, const void *sendBuf1, uint32_t len1);
HAL_Status SPI_SendThenRecv(uint8_t id, uint8_t ch, const void *sendBuf, uint32_t len0, void *recvBuf, uint32_t len1);
HAL_Status SPI_Init(uint8_t id);

/********************* Private MACRO Definition ******************************/

#define DEFINE_ROCKCHIP_SPI(ID)       \
                                      \
                                      \
struct SPI_DEVICE_CLASS gSpiDev##ID = \
{                                     \
    .halDev = &g_spiDev##ID,          \
};                                    \

#define ROCKCHIP_SPI(ID) gSpiDev##ID

#define RXBUSY (1 << 0)
#define TXBUSY (1 << 1)

#define ROCKCHIP_SPI_TX_IDLE_TIMEOUT 20

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/* Define SPI resource */
#ifdef SPI0
DEFINE_ROCKCHIP_SPI(0)
#endif
#ifdef SPI1
DEFINE_ROCKCHIP_SPI(1)
#endif
#ifdef SPI2
DEFINE_ROCKCHIP_SPI(2)
#endif
#ifdef SPI3
DEFINE_ROCKCHIP_SPI(3)
#endif

/* Add SPI resource to group */
struct SPI_DEVICE_CLASS *gSpiDev[SPI_DEVICE_MAX] =
{
#ifdef SPI0
    &ROCKCHIP_SPI(0),
#else
    NULL,
#endif
#ifdef SPI1
    &ROCKCHIP_SPI(1),
#else
    NULL,
#endif
#ifdef SPI2
    &ROCKCHIP_SPI(2),
#else
    NULL,
#endif
#ifdef SPI3
    &ROCKCHIP_SPI(3),
#else
    NULL,
#endif
};

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

HAL_Status SPI_Configure(uint8_t id, struct RK_SPI_CONFIG *configuration)
{
    struct SPI_DEVICE_CLASS *spi = (struct SPI_DEVICE_CLASS *)gSpiDev[id];
    struct SPI_HANDLE *pSPI = &spi->instance;
    struct SPI_CONFIG *pSPIConfig = &pSPI->config;

    /* Data width */
    if (configuration->dataWidth <= 8) {
        pSPIConfig->nBytes = CR0_DATA_FRAME_SIZE_8BIT;
    } else if (configuration->dataWidth <= 16) {
        pSPIConfig->nBytes = CR0_DATA_FRAME_SIZE_16BIT;
    } else {
        return HAL_ERROR;
    }

    /* CPOL */
    if (configuration->mode & RK_SPI_CPOL) {
        pSPIConfig->clkPolarity = CR0_POLARITY_HIGH;
    } else {
        pSPIConfig->clkPolarity = CR0_POLARITY_LOW;
    }

    /* CPHA */
    if (configuration->mode & RK_SPI_CPHA) {
        pSPIConfig->clkPhase = CR0_PHASE_2EDGE;
    } else {
        pSPIConfig->clkPhase = CR0_PHASE_1EDGE;
    }

    /* MSB or LSB */
    if (configuration->mode & RK_SPI_MSB) {
        pSPIConfig->firstBit = CR0_FIRSTBIT_MSB;
    } else {
        pSPIConfig->firstBit = CR0_FIRSTBIT_LSB;
    }

    /* Master or Slave */
    if (configuration->mode & RK_SPI_SLAVE) {
        pSPIConfig->opMode = CR0_OPM_SLAVE;
    } else {
        pSPIConfig->opMode = CR0_OPM_MASTER;
    }

    /* CSM cycles */
    pSPIConfig->csm = CR0_CSM((configuration->mode & RK_SPI_CSM_MASK) >> RK_SPI_CSM_SHIFT);

    pSPI->maxFreq = HAL_CRU_ClkGetFreq(spi->halDev->clkId);
    pSPIConfig->speed = configuration->maxHz;

    if (pSPIConfig->opMode == CR0_OPM_MASTER) {
        if (pSPI->config.speed > HAL_SPI_MASTER_MAX_SCLK_OUT) {
            pSPI->config.speed = HAL_SPI_MASTER_MAX_SCLK_OUT;
        }

        /* the master minimum divisor is 2 */
        if (pSPI->maxFreq < 2 * pSPI->config.speed) {
            HAL_CRU_ClkSetFreq(spi->halDev->clkId, 2 * pSPI->config.speed);
            pSPI->maxFreq = HAL_CRU_ClkGetFreq(spi->halDev->clkId);
            HAL_DBG("SPI SCLK is in maxFreq %ldHz in master mode\n", pSPI->maxFreq);
        }
    } else {
        if (pSPI->config.speed > HAL_SPI_SLAVE_MAX_SCLK_OUT) {
            pSPI->config.speed = HAL_SPI_SLAVE_MAX_SCLK_OUT;
        }

        /* the slave minimum divisor is 6 */
        if (pSPI->maxFreq < 6 * pSPI->config.speed) {
            HAL_CRU_ClkSetFreq(spi->halDev->clkId, 6 * pSPI->config.speed);
            pSPI->maxFreq = HAL_CRU_ClkGetFreq(spi->halDev->clkId);
            HAL_DBG("SPI SCLK is in maxFreq %ldHz in slave mode\n", pSPI->maxFreq);
        }
    }

    return HAL_OK;
}

uint32_t SPI_ReadAndWrite(uint8_t id, struct RK_SPI_MESSAGE *message)
{
    struct SPI_DEVICE_CLASS *spi = (struct SPI_DEVICE_CLASS *)gSpiDev[id];
    struct SPI_HANDLE *pSPI = &spi->instance;
    uint64_t timeout;
    HAL_Status ret = HAL_OK;

    HAL_ASSERT((message->sendBuf != NULL) || (message->recvBuf != NULL));

    /* Configure spi mode here. */
    HAL_SPI_Configure(pSPI, message->sendBuf, message->recvBuf, message->length);

    spi->error = 0;
    if (message->csTake) {
        HAL_SPI_SetCS(pSPI, message->ch, true);
    }

    HAL_SPI_PioTransfer(pSPI);
    /* If tx, wait until the FIFO data completely. */
    if (message->sendBuf) {
        timeout = HAL_GetTick() + ROCKCHIP_SPI_TX_IDLE_TIMEOUT; /* some tolerance */
        do {
            ret = HAL_SPI_QueryBusState(pSPI);
            if (ret == HAL_OK) {
                break;
            }
            HAL_DBG("%s %d\n", __func__, __LINE__);
        } while (timeout > HAL_GetTick());
    }

    if (HAL_OK != ret) {
        spi->error = ret;
        HAL_DBG("%s error\n", __func__);
    }

    /* Disable SPI when finished. */
    HAL_SPI_Stop(pSPI);

    if (message->csRelease) {
        HAL_SPI_SetCS(pSPI, message->ch, false);
    }

    /* Successful to return message length and fail to return 0. */
    return spi->error ? 0 :  message->length;
}

uint32_t SPI_Transfer(uint8_t id, uint8_t ch, const void *sendBuf, void *recvBuf, uint32_t length)
{
    uint32_t ret;
    struct RK_SPI_MESSAGE message;

    /* initial message */
    message.ch = ch;
    message.sendBuf = sendBuf;
    message.recvBuf = recvBuf;
    message.length = length;
    message.csTake = 1;
    message.csRelease = 1;

    ret = SPI_ReadAndWrite(id, &message);

    return ret;
}

uint32_t SPI_Read(uint8_t id, uint8_t ch, void *recvBuf, uint32_t length)
{
    HAL_ASSERT(id < SPI_DEVICE_MAX);

    return SPI_Transfer(id, ch, NULL, recvBuf, length);
}

uint32_t SPI_Write(uint8_t id, uint8_t ch, const void *sendBuf, uint32_t length)
{
    HAL_ASSERT(id < SPI_DEVICE_MAX);

    return SPI_Transfer(id, ch, sendBuf, NULL, length);
}

HAL_Status SPI_SendThenSend(uint8_t id, uint8_t ch, const void *sendBuf0, uint32_t len0, const void *sendBuf1, uint32_t len1)
{
    HAL_Status ret;
    struct RK_SPI_MESSAGE message;

    HAL_ASSERT(id < SPI_DEVICE_MAX);

    /* initial first send message */
    message.ch = ch;
    message.sendBuf = sendBuf0;
    message.recvBuf = NULL;
    message.length = len0;
    message.csTake = 1;
    message.csRelease = 0;

    ret = SPI_ReadAndWrite(id, &message);
    if (ret != len0) {
        ret = HAL_ERROR;

        goto out;
    }

    /* initial second send message */
    message.ch = ch;
    message.sendBuf = sendBuf1;
    message.recvBuf = NULL;
    message.length = len1;
    message.csTake = 0;
    message.csRelease = 1;

    ret = SPI_ReadAndWrite(id, &message);
    if (ret != len1) {
        ret = HAL_ERROR;
    }

out:

    return HAL_OK;
}

HAL_Status SPI_SendThenRecv(uint8_t id, uint8_t ch, const void *sendBuf, uint32_t len0, void *recvBuf, uint32_t len1)
{
    HAL_Status ret;
    struct RK_SPI_MESSAGE message;

    HAL_ASSERT(id < SPI_DEVICE_MAX);

    /* initial first send message */
    message.ch = ch;
    message.sendBuf = sendBuf;
    message.recvBuf = NULL;
    message.length = len0;
    message.csTake = 1;
    message.csRelease = 0;

    ret = SPI_ReadAndWrite(id, &message);
    if (ret != len0) {
        ret = HAL_ERROR;

        goto out;
    }

    /* initial second send message */
    message.ch = ch;
    message.sendBuf = NULL;
    message.recvBuf = recvBuf;
    message.length = len1;
    message.csTake = 0;
    message.csRelease = 1;

    ret = SPI_ReadAndWrite(id, &message);
    if (ret != len1) {
        ret = HAL_ERROR;
    }

out:

    return HAL_OK;
}

HAL_Status SPI_Init(uint8_t id)
{
    struct SPI_DEVICE_CLASS *spi;
    struct RK_SPI_CONFIG config;

    HAL_ASSERT(id < SPI_DEVICE_MAX);

    spi = gSpiDev[id];
    if (!spi) {
        return HAL_ERROR;
    }

    HAL_SPI_Init(&spi->instance, (uint32_t)spi->halDev->base, spi->halDev->isSlave);

    /* Pre config */
    config.mode |= RK_SPI_MASTER;
    config.dataWidth = 8;
    config.maxHz = ROCKCHIP_SPI_SPEED_DEFAULT;
    SPI_Configure(id, &config);

    return HAL_OK;
}
/*************************** SPI TEST ****************************/
#define SPI_TEST_SIZE 4096
#define SPI_TEST_ID   0
static uint8_t tx_buf[SPI_TEST_SIZE];
static uint8_t rx_buf[SPI_TEST_SIZE];
static uint8_t *tx;
static uint8_t *rx;

TEST_GROUP(HAL_SPI);

TEST_SETUP(HAL_SPI){
}

TEST_TEAR_DOWN(HAL_SPI){
}

/* SPI test case 0 */
void SPI_LoopTest(void)
{
    uint32_t i;

    HAL_DBG("It's a SPI cpu loop test");

    for (i = 0; i < SPI_TEST_SIZE / 4; i++) {
        ((uint32_t *)tx)[i] = i;
    }
    memset(rx, 0, SPI_TEST_SIZE);
    SPI_Transfer(SPI_TEST_ID, 0, (const void *)tx, (void *)rx, SPI_TEST_SIZE);

    for (i = 0; i < SPI_TEST_SIZE; i++) {
        if (tx[i] != rx[i]) {
            HAL_DBG_HEX("w:", tx, 4, SPI_TEST_SIZE / 4);
            HAL_DBG_HEX("r:", rx, 4, SPI_TEST_SIZE / 4);
            TEST_ASSERT(0);
            break;
        }
    }
}

TEST_GROUP_RUNNER(HAL_SPI){
    HAL_DBG("%s\n", __func__);

    tx = (uint8_t *)&tx_buf;
    rx = (uint8_t *)&rx_buf;

    SPI_Init(SPI_TEST_ID);
    SPI_LoopTest();
}

#endif
