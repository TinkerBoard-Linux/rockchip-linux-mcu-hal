/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef _TASK_IPC_H_
#define _TASK_IPC_H_

/* spinlock ID define */
#define RK_PRINTF_SPINLOCK_ID 0U
#define RK_SHMEM_SPINLOCK_ID  1U

/* IPC memory section define */
#define IPC_DATA_MEM __attribute__((section(".share_data")))

/* IPC data struct define */
struct IPC_DATA_T {
    uint32_t spinlock_id;   // for spinlock ID
    uint32_t flag;          // set a flag for example
    uint32_t data[1];       // share data buffer for example
};

typedef struct IPC_DATA_T IPC_DATA;     // mem: IPC_DATA_MEM

/* Public function declaration */
extern IPC_DATA_MEM IPC_DATA share_t;

#endif
