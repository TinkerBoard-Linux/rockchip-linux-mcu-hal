/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

#ifdef __GNUC__
int _write(int fd, char *ptr, int len);
#else
int fputc(int ch, FILE *f);
#endif

static struct UART_REG *pUart = UART4;

static void HAL_IOMUX_Uart4M0Config(void)
{
    /* UART4 M0 RX-4B0 TX-4B1 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK4,
                         GPIO_PIN_B0 |
                         GPIO_PIN_B1,
                         PIN_CONFIG_MUX_FUNC1);
}

#ifdef __GNUC__
int _write(int fd, char *ptr, int len)
{
    int i = 0;

    /*
     * write "len" of char from "ptr" to file id "fd"
     * Return number of char written.
     *
    * Only work for STDOUT, STDIN, and STDERR
     */
    if (fd > 2) {
        return -1;
    }

    while (*ptr && (i < len)) {
        if (*ptr == '\n') {
            HAL_UART_SerialOutChar(pUart, '\r');
        }
        HAL_UART_SerialOutChar(pUart, *ptr);

        i++;
        ptr++;
    }

    return i;
}
#else
int fputc(int ch, FILE *f)
{
    if (ch == '\n') {
        HAL_UART_SerialOutChar(pUart, '\r');
    }

    HAL_UART_SerialOutChar(pUart, (char)ch);

    return 0;
}
#endif

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

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* The priority higher than 0x80 is non-secure interrupt. */
    GIC_AMP_IRQ_CFG_ROUTE(TIMER0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER1_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER2_IRQn, 0xd0, CPU_GET_AFFINITY(2, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER3_IRQn, 0xd0, CPU_GET_AFFINITY(3, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(0, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(0, 0),
    .irqsCfg = &irqsConfig[0],
};

static int timer_int_count = 0;
static uint32_t latency_sum = 0;
struct TIMER_REG *timer = NULL;
static bool desc_timer = true;
static int fixed_spend = 0;
static uint32_t latency_max = 0;
static struct TIMER_REG *g_timer[4] = { TIMER0, TIMER1, TIMER2, TIMER3 };
static uint32_t g_timer_irq[4] = { TIMER0_IRQn, TIMER1_IRQn, TIMER2_IRQn, TIMER3_IRQn };

void timer_isr(int vector, void *param)
{
    uint32_t count, cpu_id;
    uint32_t latency;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    count = (uint32_t)HAL_TIMER_GetCount(timer);
    if (desc_timer) {
        count = 24000000 - count;
    }
    if (count > fixed_spend) {
        count -= fixed_spend;
    }
    latency = count * 41;
    printf("count=%d\n", count);
    printf("cpu_id=%d: latency=%dns(count=%d)\n", cpu_id, latency, count);
    timer_int_count++;
    latency_sum += latency;
    latency_max = latency_max > latency ? latency_max : latency;
    if (timer_int_count == 100) {
        printf("cpu_id=%d: latency avg=%d,max=%d\n", cpu_id, latency_sum / timer_int_count, latency_max);
        timer_int_count = 0;
        latency_sum = 0;
        latency_max = 0;
        HAL_TIMER_ClrInt(timer);
        HAL_GIC_EndOfInterrupt(g_timer_irq[cpu_id]);
        HAL_TIMER_Stop_IT(timer);
    }

    HAL_TIMER_ClrInt(timer);
    HAL_GIC_EndOfInterrupt(g_timer_irq[cpu_id]);
}

static void timer_test(void)
{
    uint64_t start, end;
    uint32_t count, cpu_id;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();

    start = HAL_GetSysTimerCount();
    HAL_CPUDelayUs(1000000);
    end = HAL_GetSysTimerCount();
    count = (uint32_t)(end - start);
    printf("systimer 1s count: %ld(%lld, %lld)\n", count, start, end);

    printf("\n\ncpu_id=%ld: test internal irq\n", cpu_id);
    timer = g_timer[cpu_id];
    desc_timer = false;
    HAL_TIMER_Init(timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(timer, 2000000000);
    HAL_TIMER_Start(timer);
    start = HAL_TIMER_GetCount(timer);
    HAL_CPUDelayUs(1000000);
    end = HAL_TIMER_GetCount(timer);
    count = (uint32_t)(end - start);
    fixed_spend = start;
    printf("cpu_id=%ld: internal timer 1s count: %ld(%lld, %lld), fixed_spend=%d\n",
           cpu_id, count, start, end, fixed_spend);
    HAL_TIMER_Stop(timer);

    HAL_IRQ_HANDLER_SetIRQHandler(g_timer_irq[cpu_id], timer_isr, NULL);
    HAL_GIC_Enable(g_timer_irq[cpu_id]);
    HAL_TIMER_Init(timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(timer, 24000000);
    HAL_TIMER_Start_IT(timer);
}

void main(void)
{
    uint32_t ownerID;

    struct HAL_UART_CONFIG hal_uart_config = {
        .baudRate = UART_BR_1500000,
        .dataBit = UART_DATA_8B,
        .stopBit = UART_ONE_STOPBIT,
        .parity = UART_PARITY_DISABLE,
    };

    /* HAL BASE Init */
    HAL_Init();

    /* BSP Init */
    BSP_Init();

    HAL_GIC_Init(&irqConfig);

    /* UART Init */
    HAL_IOMUX_Uart4M0Config();
    HAL_UART_Init(&g_uart4Dev, &hal_uart_config);

    /* SPINLOCK Init */
#ifdef HAL_IPC_MODULE_ENABLED
    ownerID = HAL_CPU_TOPOLOGY_GetCurrentCpuId() << 1 | 1;
    HAL_SPINLOCK_Init(ownerID);
#endif

    printf("Hello RK3308 Bare-metal using RK_HAL!\n");
    /* spinlock_test(); */
    /* timer_test(); */

    /* Unity Test */
    /* test_main(); */

    while (1) {
        ;
    }
}

void _start(void)
{
    main();
}
