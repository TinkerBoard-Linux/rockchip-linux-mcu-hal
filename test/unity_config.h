/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef UNITY_CONFIG_H
#define UNITY_CONFIG_H

#define UNITY_INT_WIDTH 32

#define UNITY_OUTPUT_CHAR(a) printf

//#define UNITY_HAL_COREMARK
//#define UNITY_HAL_DATA_ACCESS
#define UNITY_HAL_THROUGHPUT

#ifdef RKMCU_RK2108
#define XIP_MEM_BASE 0x60000000
#endif

#endif
