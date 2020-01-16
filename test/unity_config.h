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
//#define UNITY_HAL_LEAGACY
//#define UNITY_HAL_COREMARK
//#define UNITY_HAL_DATA_ACCESS
#define UNITY_HAL_THROUGHPUT
#define UNITY_HAL_PSRAM
#define UNITY_HAL_SPIFLASH

/************** HAL Macro Define *****************/

#endif
