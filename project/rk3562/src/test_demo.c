/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"
#include "test_conf.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define IRQ_LATENCY_TEST
//#define PERF_TEST
//#define RPMSG_LINUX_TEST
//#define RPMSG_PERF_TEST
//#define SOFTIRQ_TEST
//#define SPINLOCK_TEST
//#define TIMER_TEST
//#define UART_TEST
//#define UNITY_TEST

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
/* TODO: Config the irqs here.
 * GIC version: GICv2
 * The priority higher than 0x80 is non-secure interrupt.
 */
#ifndef RPMSG_LINUX_TEST
    GIC_AMP_IRQ_CFG_ROUTE(MBOX_AP_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif
    GIC_AMP_IRQ_CFG_ROUTE(MBOX_BB_IRQn, 0xd0, CPU_GET_AFFINITY(3, 0)),

#ifdef IRQ_LATENCY_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

#ifdef SOFTIRQ_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

#ifdef TIMER_TEST
    GIC_AMP_IRQ_CFG_ROUTE(TIMER4_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

#ifdef UART_TEST
    GIC_AMP_IRQ_CFG_ROUTE(UART7_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/************************************************/
/*                                              */
/*                 HW Borad config              */
/*                                              */
/************************************************/

/* TODO: Set Module IOMUX Function Here */

/************************************************/
/*                                              */
/*             IRQ_LATENCY_TEST                 */
/*                                              */
/************************************************/
#ifdef IRQ_LATENCY_TEST
#define IRQ_LATENCY_TEST_NUM   10
#define IRQ_LATENCY_TEST_LOOP  10000
#define IRQ_LATENCY_TEST_DELAY 500

static uint64_t time_start, time_end;
static double time_one, time_sum, time_max, time_min;

static void irq_rsvd_isr(void)
{
    time_end = HAL_GetSysTimerCount();
    time_one = ((time_end - time_start) * 1000000.0) / PLL_INPUT_OSC_RATE;
    time_sum += time_one;
    if (time_one > time_max) {
        time_max = time_one;
    }
    if (time_one < time_min) {
        time_min = time_one;
    }
//    printf("irq_rsvd: latency = %.2f us\n", time_one);
}

static void irq_latency_test(void)
{
    int i, j;

    printf("irq_latency_test start:\n");

    printf("irq_rsvd:\n");
    HAL_IRQ_HANDLER_SetIRQHandler(RSVD0_IRQn, irq_rsvd_isr, NULL);
    HAL_GIC_Enable(RSVD0_IRQn);
    HAL_DelayMs(2000);

    for (i = 0; i < IRQ_LATENCY_TEST_NUM; i++) {
        time_sum = 0;
        time_max = 0;
        time_min = 1000;
        for (j = 0; j < IRQ_LATENCY_TEST_LOOP; j++) {
            time_start = HAL_GetSysTimerCount();
            HAL_GIC_SetPending(RSVD0_IRQn);
            HAL_DelayUs(IRQ_LATENCY_TEST_DELAY);
        }
        printf("irq_rsvd latency: avg = %.2f us, max = %.2f us, min = %.2f us\n",
               time_sum / IRQ_LATENCY_TEST_LOOP, time_max, time_min);
    }

    printf("irq_latency_test end.\n");
}
#endif

/************************************************/
/*                                              */
/*                  PERF_TEST                   */
/*                                              */
/************************************************/
#ifdef PERF_TEST
#include "benchmark.h"

uint32_t g_sum = 0;
static void perf_test(void)
{
    uint32_t cpu_id, loop = 1000, size = 4 * 1024 * 1024;
    uint32_t *ptr;
    uint64_t start, end;
    double time_s;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("perftest: cpu-%ld\n", cpu_id);

    benchmark_main();

    printf("test memset start!\n");
    ptr = (uint32_t *)malloc(size);
    if (ptr) {
        start = HAL_GetSysTimerCount();
        for (int i = 0; i < loop; i++) {
            memset(ptr, i, size);
        }
        end = HAL_GetSysTimerCount();
        time_s = ((end - start) * 1.0) / PLL_INPUT_OSC_RATE;
        printf("\nmemset bw=%.2fMB/s, time_s=%.2f\n", (size * loop) / time_s / 1000000, time_s);

        /* prevent optimization */
        for (int i = 0; i < size / sizeof(uint32_t); i++) {
            g_sum += ptr[i];
        }
        printf("sum=%d\n", g_sum);
        free(ptr);
    }
    printf("test memset end!\n");
}
#endif

/************************************************/
/*                                              */
/*              RPMSG_LINUX_TEST                */
/*                                              */
/************************************************/
#ifdef RPMSG_LINUX_TEST
#include "rpmsg_lite.h"
#include "rpmsg_ns.h"

// test is CPU0 as master and CPU3 as remote.
#define MASTER_ID   ((uint32_t)0)
#define REMOTE_ID_3 ((uint32_t)3)

// define remote endpoint id for test
#define RPMSG_HAL_REMOTE_TEST3_EPT      0x3003U
#define RPMSG_HAL_REMOTE_TEST_EPT3_NAME "rpmsg-ap3-ch0"

#define RPMSG_HAL_TEST_MSG "Rockchip rpmsg linux test!"

/* TODO: These are defined in the linked script gcc_arm.ld.S */
extern uint32_t __linux_share_rpmsg_start__[];
extern uint32_t __linux_share_rpmsg_end__[];

#define RPMSG_LINUX_MEM_BASE ((uint32_t)&__linux_share_rpmsg_start__)
#define RPMSG_LINUX_MEM_END  ((uint32_t)&__linux_share_rpmsg_end__)
#define RPMSG_LINUX_MEM_SIZE (2UL * RL_VRING_OVERHEAD)

struct rpmsg_block_t {
    uint32_t len;
    uint8_t buffer[496 - 4];
};

struct rpmsg_info_t {
    struct rpmsg_lite_instance *instance;
    struct rpmsg_lite_endpoint *ept;
    uint32_t cb_sta;    // callback status flags
    void * private;
    uint32_t m_ept_id;
};

static void rpmsg_share_mem_check(void)
{
    if ((RPMSG_LINUX_MEM_BASE + RPMSG_LINUX_MEM_SIZE) > RPMSG_LINUX_MEM_END) {
        printf("shared memory size error!\n");
        while (1) {
            ;
        }
    }
}

rpmsg_ns_new_ept_cb rpmsg_ns_cb(uint32_t new_ept, const char *new_ept_name, uint32_t flags, void *user_data)
{
    uint32_t cpu_id;
    char ept_name[RL_NS_NAME_SIZE];

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    strncpy(ept_name, new_ept_name, RL_NS_NAME_SIZE);
    printf("rpmsg remote: new_ept-0x%lx name-%s\n", new_ept, ept_name);
}

static int32_t remote_ept_cb(void *payload, uint32_t payload_len, uint32_t src, void *priv)
{
    int ret;
    uint32_t cpu_id;
    struct rpmsg_info_t *info = (struct rpmsg_info_t *)priv;
    struct rpmsg_block_t *block = (struct rpmsg_block_t *)info->private;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();

    info->m_ept_id = src;
    block->len = payload_len;
    memcpy(block->buffer, payload, payload_len);
    info->cb_sta = 1;
    //printf("rpmsg remote: msg: %s\n", block->buffer);
    ret = rpmsg_lite_send(info->instance, info->ept, info->m_ept_id, RPMSG_HAL_TEST_MSG, strlen(RPMSG_HAL_TEST_MSG), RL_BLOCK);

    if (ret) {
        printf("rpmsg_lite_send error!\n");
    }

    return ret;
}

static void rpmsg_linux_test(void)
{
    uint32_t master_id, remote_id;
    struct rpmsg_info_t *info;
    struct rpmsg_block_t *block;
    uint32_t ept_flags;
    void *ns_cb_data;

    rpmsg_share_mem_check();
    master_id = MASTER_ID;
    remote_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("rpmsg remote: remote core cpu_id-%ld\n", remote_id);
//    printf("rpmsg remote: shmem_base-0x%lx shmem_end-%lx\n", RPMSG_LINUX_MEM_BASE, RPMSG_LINUX_MEM_END);

    info = malloc(sizeof(struct rpmsg_info_t));
    if (info == NULL) {
        printf("info malloc error!\n");
        while (1) {
            ;
        }
    }
    info->private = malloc(sizeof(struct rpmsg_block_t));
    if (info->private == NULL) {
        printf("info malloc error!\n");
        while (1) {
            ;
        }
    }

    info->instance = rpmsg_lite_remote_init((void *)RPMSG_LINUX_MEM_BASE, RL_PLATFORM_SET_LINK_ID(master_id, remote_id), RL_NO_FLAGS);
    rpmsg_lite_wait_for_link_up(info->instance);
    printf("rpmsg remote: link up! link_id-0x%lx\n", info->instance->link_id);
    rpmsg_ns_bind(info->instance, rpmsg_ns_cb, &ns_cb_data);
    info->ept = rpmsg_lite_create_ept(info->instance, RPMSG_HAL_REMOTE_TEST3_EPT, remote_ept_cb, info);
    ept_flags = RL_NS_CREATE;
    rpmsg_ns_announce(info->instance, info->ept, RPMSG_HAL_REMOTE_TEST_EPT3_NAME, ept_flags);
    while (info->cb_sta != 1) {
    }
    rpmsg_lite_send(info->instance, info->ept, info->m_ept_id, RPMSG_HAL_TEST_MSG, sizeof(RPMSG_HAL_TEST_MSG), RL_BLOCK);
}
#endif

/************************************************/
/*                                              */
/*               RPMSG_PERF_TEST                */
/*                                              */
/************************************************/
#ifdef RPMSG_PERF_TEST
#include "rpmsg_lite.h"
#include "rpmsg_ns.h"
#include "rpmsg_perf.h"

/* TODO: Configure RPMSG PERF TEST shared memory base */
#define RPMSG_PERF_MEM_BASE 0x7a00000
#define RPMSG_PERF_MEM_SIZE 0x20000

static void rpmsg_perf_master_test(void)
{
    uint32_t cpu_id;
    struct rpmsg_lite_instance *master_rpmsg;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    rk_printf("rpmsg master: master core cpu_id-%ld\n", cpu_id);
    master_rpmsg = rpmsg_lite_master_init((void *)RPMSG_PERF_MEM_BASE, RPMSG_PERF_MEM_SIZE,
                                          RL_PLATFORM_SET_LINK_ID(0, 3), RL_NO_FLAGS);
    rpmsg_perf_master_main(master_rpmsg);
}

static void rpmsg_perf_remote_test(void)
{
    uint32_t cpu_id;
    struct rpmsg_lite_instance *remote_rpmsg;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    rk_printf("rpmsg remote: remote core cpu_id-%ld\n", cpu_id);
    remote_rpmsg = rpmsg_lite_remote_init((void *)RPMSG_PERF_MEM_BASE,
                                          RL_PLATFORM_SET_LINK_ID(0, 3), RL_NO_FLAGS);
    rpmsg_lite_wait_for_link_up(remote_rpmsg);
    rk_printf("rpmsg remote: link up! link_id-0x%lx\n", remote_rpmsg->link_id);
    rpmsg_perf_remote_main(remote_rpmsg);
}
#endif

/************************************************/
/*                                              */
/*                SOFTIRQ_TEST                  */
/*                                              */
/************************************************/
#ifdef SOFTIRQ_TEST
static void soft_isr(int vector, void *param)
{
    printf("soft_isr, vector = %d\n", vector);
    HAL_GIC_EndOfInterrupt(vector);
}

static void softirq_test(void)
{
    HAL_IRQ_HANDLER_SetIRQHandler(RSVD0_IRQn, soft_isr, NULL);
    HAL_GIC_Enable(RSVD0_IRQn);

    HAL_GIC_SetPending(RSVD0_IRQn);
}
#endif

/************************************************/
/*                                              */
/*                SPINLOCK_TEST                 */
/*                                              */
/************************************************/
#ifdef SPINLOCK_TEST
static void spinlock_test(void)
{
    uint32_t cpu_id, owner;
    HAL_Check ret;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("begin spinlock test: cpu=%ld\n", cpu_id);

    while (1) {
        ret = HAL_SPINLOCK_TryLock(0);
        if (ret) {
            printf("try lock success: %ld\n", cpu_id);
            HAL_SPINLOCK_Unlock(0);
        } else {
            printf("try lock failed: %ld\n", cpu_id);
        }
        HAL_SPINLOCK_Lock(0);
        printf("enter cpu%ld\n", cpu_id);
        HAL_CPUDelayUs(rand() % 2000000);
        owner = HAL_SPINLOCK_GetOwner(0);
        if ((owner >> 1) != cpu_id) {
            printf("owner id is not matched(%ld, %ld)\n", cpu_id, owner);
        }
        printf("leave cpu%ld\n", cpu_id);
        HAL_SPINLOCK_Unlock(0);
        HAL_CPUDelayUs(10);
    }
}
#endif

/************************************************/
/*                                              */
/*                  TIMER_TEST                  */
/*                                              */
/************************************************/
#ifdef TIMER_TEST
static int timer_int_count = 0;
static uint32_t latency_sum = 0;
static uint32_t latency_max = 0;
struct TIMER_REG *test_timer = TIMER4;
static bool desc_timer = true;

static void timer_isr(uint32_t irq, void *args)
{
    uint32_t count;
    uint32_t latency;

    count = (uint32_t)HAL_TIMER_GetCount(test_timer);
    if (desc_timer) {
        count = 24000000 - count;
    }
    /* 24M timer: 41.67ns per count */
    latency = count * 41;
    printf("timer_test: latency=%ldns(count=%ld)\n", latency, count);
    timer_int_count++;
    latency_sum += latency;
    latency_max = latency_max > latency ? latency_max : latency;
    if (timer_int_count == 100) {
        printf("timer_test: latency avg=%dns,max=%dns\n", latency_sum / timer_int_count, latency_max);
        timer_int_count = 0;
        latency_sum = 0;
        latency_max = 0;
        HAL_TIMER_ClrInt(test_timer);
        HAL_TIMER_Stop_IT(test_timer);
    }

    HAL_TIMER_ClrInt(test_timer);
}

static void timer_test(void)
{
    uint64_t start, end;
    uint32_t count;

    printf("timer_test start\n");
    start = HAL_GetSysTimerCount();
    HAL_DelayUs(1000000);
    end = HAL_GetSysTimerCount();
    /* sys_timer: TIMER5 is a increment count TIMER */
    count = (uint32_t)(end - start);
    printf("sys_timer 1s count: %ld(%lld, %lld)\n", count, start, end);

    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 2000000000);
    HAL_TIMER_Start(test_timer);
    start = HAL_TIMER_GetCount(test_timer);
    HAL_DelayUs(1000000);
    end = HAL_TIMER_GetCount(test_timer);
    /* Pay attention to the timer type */
    /* test_timer: TIMER4 is a decrement count TIMER */
    desc_timer = true;
    count = (uint32_t)(start - end);
    printf("test_timer 1s count: %ld(%lld, %lld)\n", count, start, end);
    HAL_TIMER_Stop(test_timer);

    HAL_IRQ_HANDLER_SetIRQHandler(TIMER4_IRQn, timer_isr, NULL);
    HAL_GIC_Enable(TIMER4_IRQn);
    printf("timer_test: 1s interrupt start\n");
    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 24000000);
    HAL_TIMER_Start_IT(test_timer);
}
#endif

/************************************************/
/*                                              */
/*                  UART_TEST                   */
/*                                              */
/************************************************/
#ifdef UART_TEST

struct HAL_UART_DEV *uart_test_dev = &g_uart7Dev;

int uart_test_send(char *ptr, int len)
{
    int i = 0;

    while (*ptr && (i < len)) {
        if (*ptr == '\n') {
            HAL_UART_SerialOutChar(uart_test_dev->pReg, '\r');
        }
        HAL_UART_SerialOutChar(uart_test_dev->pReg, *ptr);

        i++;
        ptr++;
    }

    return i;
}

void uart_test_isr(uint32_t irq, void *args)
{
    uint8_t data = 0;
    uint8_t buf[16];

    if (HAL_UART_GetIrqID(uart_test_dev->pReg) != UART_IIR_RX_TIMEOUT) {
        return;
    }

    HAL_UART_SerialIn(uart_test_dev->pReg, &data, 1);
    sprintf(buf, "echo test:%c\n", (char)data);
    uart_test_send(buf, strlen(buf));
}

void uart_test(void)
{
    HAL_IRQ_HANDLER_SetIRQHandler(uart_test_dev->irqNum, uart_test_isr, NULL);
    HAL_GIC_Enable(uart_test_dev->irqNum);
    HAL_UART_EnableIrq(uart_test_dev->pReg, 1);

    printf("uart test, input character\n");
}
#endif

/********************* Public Function Definition ****************************/

void TEST_DEMO_GIC_Init(void)
{
    HAL_GIC_Init(&irqConfig);
}

void test_demo(void)
{
#if defined(IRQ_LATENCY_TEST) && defined(CPU0)
    irq_latency_test();
#endif

#if defined(PERF_TEST) && defined(CPU0)
    perf_test();
#endif

#if defined(RPMSG_LINUX_TEST) && defined(CPU3)
    rpmsg_linux_test();
#endif

#ifdef RPMSG_PERF_TEST
#ifdef CPU0
    rpmsg_perf_master_test();
#elif CPU3
    rpmsg_perf_remote_test();
#endif
#endif

#if defined(SOFTIRQ_TEST) && defined(CPU0)
    softirq_test();
#endif

#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#if defined(TIMER_TEST) && defined(CPU0)
    timer_test();
#endif

#if defined(UART_TEST) && defined(CPU0)
    uart_test();
#endif

#if defined(UNITY_TEST) && defined(CPU0)
    /* Unity Test */
    test_main();
#endif
}
