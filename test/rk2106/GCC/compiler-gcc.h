/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef __COMPILER_GCC_H
#define __COMPILER_GCC_H

#define __irq
#define __align(n) __attribute__((__aligned__(n)))
#define __packed __attribute__((__packed__))
#define __PACKED_STRUCT                        __packed struct

#endif /* __COMPILER_GCC_H */
