/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#include "unity.h"
#include "unity_fixture.h"

static void RunAllTests(void)
{
    RUN_TEST_GROUP(HAL_LEAGACY);
#ifdef HAL_TIMER_MODULE_ENABLED
    RUN_TEST_GROUP(HAL_TIMER);
#endif
#ifdef HAL_SNOR_MODULE_ENABLED
    RUN_TEST_GROUP(HAL_SNOR);
#endif
#ifdef HAL_PL330_MODULE_ENABLED
    RUN_TEST_GROUP(HAL_PL330);
#endif
}

int test_main(void)
{
    return UnityMain(1, NULL, RunAllTests);
}
