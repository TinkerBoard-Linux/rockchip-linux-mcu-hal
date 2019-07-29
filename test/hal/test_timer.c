/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_base.h"
#include "unity.h"
#include "unity_fixture.h"

#ifdef HAL_TIMER_MODULE_ENABLED

static uint32_t isrActive;

static uint64_t TIMER_getReloadNum(struct TIMER_REG *pReg)
{
    uint64_t loadCount = 0;

    loadCount = (((uint64_t)pReg->LOAD_COUNT[1]) << 32) | (pReg->LOAD_COUNT[0] & 0xffffffff);

    return loadCount;
}

HAL_Status HAL_TIMER0_Handler(void)
{
    HAL_TIMER_ClrInt(TIMER0);
    isrActive = 1;

    return HAL_OK;
}

TEST_GROUP(HAL_TIMER);

TEST_SETUP(HAL_TIMER){
    isrActive = 0;
}

TEST_TEAR_DOWN(HAL_TIMER){
    HAL_TIMER_DeInit(TIMER0);
    HAL_TIMER_DeInit(TIMER1);
}

/* TIMER test case 0 */
TEST(HAL_TIMER, TimerInit){
    uint64_t ret;

    /* check config para */
    ret = HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
    TEST_ASSERT(ret == HAL_OK);
    ret = HAL_TIMER_Init(TIMER0, TIMER_USER_DEFINED);
    TEST_ASSERT(ret == HAL_OK);
    ret = HAL_TIMER_Init(TIMER1, TIMER_FREE_RUNNING);
    TEST_ASSERT(ret == HAL_OK);
    ret = HAL_TIMER_Init(TIMER1, TIMER_USER_DEFINED);
    TEST_ASSERT(ret == HAL_OK);


    /* test timer0 TIMER_FREE_RUNNING mode */
    HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(TIMER0, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    HAL_TIMER_Start(TIMER0);
    HAL_DelayMs(1000);
    ret = HAL_TIMER_GetCount(TIMER0);
    if (!ret)
        ret =
            HAL_TIMER_GetCount(TIMER0); /* Avoiding Small Probability Events */
    TEST_ASSERT(ret > 0);
    HAL_TIMER_Stop(TIMER0);

    /* test timer0 TIMER_USER_DEFINED mode */
    HAL_TIMER_Init(TIMER0, TIMER_USER_DEFINED);
    HAL_TIMER_SetCount(TIMER0, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    HAL_TIMER_Start(TIMER0);
    HAL_DelayMs(1000);
    ret = HAL_TIMER_GetCount(TIMER0);
    TEST_ASSERT((ret == 0) || (ret == (uint64_t)SystemCoreClock / 1000));
    HAL_TIMER_Stop(TIMER0);
}

/* TIMER test case 1 */
TEST(HAL_TIMER, TimerSetCount){
    uint64_t loadCount = 0;

    /* test timer0 setcount */
    HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(TIMER0, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    loadCount = TIMER_getReloadNum(TIMER0);
    TEST_ASSERT(loadCount == (uint64_t)SystemCoreClock / 1000);
    HAL_TIMER_Stop(TIMER0);

    /* test timer1 setcount */
    loadCount = 0;
    HAL_TIMER_Init(TIMER1, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(TIMER1, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    loadCount = TIMER_getReloadNum(TIMER1);
    TEST_ASSERT(loadCount == (uint64_t)SystemCoreClock / 1000);
    HAL_TIMER_Stop(TIMER1);
}

/* TIMER test case 2 */
TEST(HAL_TIMER, TimerStartStop){
    uint32_t ret;

    /* test timer0 stop in normalc mode */
    HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(TIMER0, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    HAL_TIMER_Start(TIMER0);
    ret = HAL_TIMER_GetCount(TIMER0);
    TEST_ASSERT(ret != HAL_TIMER_GetCount(TIMER0)); /* test start*/
    HAL_TIMER_Stop(TIMER0);
    ret = HAL_TIMER_GetCount(TIMER0);
    TEST_ASSERT(ret == HAL_TIMER_GetCount(TIMER0)); /* test stop*/

    /* test timer0 stop in IT mode */
    isrActive = 0;
    HAL_TIMER_Init(TIMER0, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(TIMER0, (uint64_t)SystemCoreClock / 1000); /* Ms count */
    HAL_TIMER_Start_IT(TIMER0);
    HAL_DelayMs(1);
    ret = HAL_TIMER_GetCount(TIMER0);
    TEST_ASSERT(ret != HAL_TIMER_GetCount(TIMER0)); /* test start*/
    HAL_TIMER_Stop_IT(TIMER0);
    ret = HAL_TIMER_GetCount(TIMER0);
    TEST_ASSERT(ret == HAL_TIMER_GetCount(TIMER0)); /* test stop*/
}

TEST_GROUP_RUNNER(HAL_TIMER){
    HAL_NVIC_SetIRQHandler(TIMER0_IRQn, (NVIC_IRQHandler) & HAL_TIMER0_Handler);
    HAL_NVIC_SetIRQHandler(TIMER1_IRQn, (NVIC_IRQHandler) & HAL_TIMER1_Handler);
    RUN_TEST_CASE(HAL_TIMER, TimerInit);
    RUN_TEST_CASE(HAL_TIMER, TimerSetCount);
    RUN_TEST_CASE(HAL_TIMER, TimerStartStop);
}

#endif
