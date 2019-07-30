/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef UNITY_CONFIG_H
#define UNITY_CONFIG_H

/************** Unity Config *********************/
#define UNITY_INT_WIDTH 32
#define UNITY_OUTPUT_CHAR(a) printf

/************** HAL Module config ****************/
//#define UNITY_HAL_COREMARK
//#define UNITY_HAL_DATA_ACCESS
#define UNITY_HAL_THROUGHPUT
//#define UNITY_HAL_PSRAM

/************** HAL Macro Define *****************/
#if defined(RKMCU_RK2108)
#define XIP_MEM_BASE 0x60000000
#elif defined(RKMCU_RK2206)
#define XIP_MEM_BASE 0x10000000
#endif

#endif
