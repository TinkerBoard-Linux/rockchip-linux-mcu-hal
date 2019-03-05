/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "unity.h"
#include "unity_fixture.h"

static void RunAllTests(void)
{
    RUN_TEST_GROUP(HAL_TIMER);
    RUN_TEST_GROUP(HAL_SNOR);
    RUN_TEST_GROUP(HAL_PL330);
}

int test_main(void)
{
    return UnityMain(1, NULL, RunAllTests);
}
