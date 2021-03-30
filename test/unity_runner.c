/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#include "unity.h"
#include "unity_fixture.h"
#include "unity_runner.h"

static void RunAllTests(void)
{
#if defined(HAL_DEMO_MODULE_ENABLED) && defined(UNITY_HAL_DEMO)
    RUN_TEST_GROUP(HAL_DEMO);
#endif

#ifdef UNITY_HAL_LEAGACY
    RUN_TEST_GROUP(HAL_LEAGACY);
#endif
#ifdef HAL_TIMER_MODULE_ENABLED
    RUN_TEST_GROUP(HAL_TIMER);
#endif
#if defined(HAL_QPIPSRAM_MODULE_ENABLED) && defined(UNITY_HAL_QPIPSRAM)
    RUN_TEST_GROUP(HAL_QPIPSRAM);
#endif
#if defined(HAL_HYPERPSRAM_MODULE_ENABLED) && defined(UNITY_HAL_HYPERPSRAM)
    RUN_TEST_GROUP(HAL_HYPERPSRAM);
#endif
#if defined(HAL_SNOR_MODULE_ENABLED) && defined(UNITY_HAL_SPIFLASH)
    RUN_TEST_GROUP(HAL_SNOR);
#endif
#ifdef HAL_PL330_MODULE_ENABLED
    RUN_TEST_GROUP(HAL_PL330);
#endif
#if defined(HAL_PMU_MODULE_ENABLED) && (defined(RKMCU_PISCES) || defined(RKMCU_RK2108))
    RUN_TEST_GROUP(HAL_PD);
#endif
#if defined(HAL_CRU_MODULE_ENABLED) && (defined(RKMCU_PISCES) || defined(RKMCU_RK2108))
    RUN_TEST_GROUP(HAL_CRU);
#endif
#if defined(HAL_SPI_MODULE_ENABLED) && defined(HAL_PL330_MODULE_ENABLED) && defined(UNITY_HAL_SPI)
    RUN_TEST_GROUP(HAL_SPI);
#endif
}

int test_main(void)
{
    return UnityMain(1, NULL, RunAllTests);
}
