/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"

/********************* Private MACRO Definition ******************************/
//#define TEST_DEMO

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* Config the irqs here. */
    // todo...

    GIC_AMP_IRQ_CFG_ROUTE(AMP0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(AMP1_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(AMP2_IRQn, 0xd0, CPU_GET_AFFINITY(2, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(AMP3_IRQn, 0xd0, CPU_GET_AFFINITY(3, 0)),

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

/********************* Private Variable Definition ***************************/

static struct UART_REG *pUart = UART4;      // UART2 or UART4, selected depend on hardware board

/********************* Private Function Definition ***************************/
static void HAL_IOMUX_Uart2M1Config(void)
{
    /* UART2 M1 RX-4D2 TX-4D3 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK4,
                         GPIO_PIN_D2 |
                         GPIO_PIN_D3,
                         PIN_CONFIG_MUX_FUNC2);
}

static void HAL_IOMUX_Uart4M0Config(void)
{
    /* UART4 M0 RX-4B0 TX-4B1 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK4,
                         GPIO_PIN_B0 |
                         GPIO_PIN_B1,
                         PIN_CONFIG_MUX_FUNC1);
}

static void HAL_IODOMAIN_Config(void)
{
    /* VCC IO 2 voltage select 1v8 */
    GRF->SOC_CON0 = (1 << GRF_SOC_CON0_IO_VSEL2_SHIFT) |
                    (GRF_SOC_CON0_IO_VSEL2_MASK << 16);
}

/********************* Public Function Definition ****************************/

#ifdef __GNUC__
int _write(int fd, char *ptr, int len);
#else
int fputc(int ch, FILE *f);
#endif

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

static char printf_buf[512];
int rk_printf(const char *fmt, ...)
{
    va_list args;
    uint64_t cnt64;
    uint32_t cpu_id, n, sec, ms, us;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();

    // SYS_TIMER is 24MHz
    cnt64 = HAL_GetSysTimerCount();
    us = (uint32_t)((cnt64 / (PLL_INPUT_OSC_RATE / 1000000)) % 1000);
    ms = (uint32_t)((cnt64 / (PLL_INPUT_OSC_RATE / 1000)) % 1000);
    sec = (uint32_t)(cnt64 / PLL_INPUT_OSC_RATE);
    n = snprintf(printf_buf, 512, "[(%d)%d.%d.%d]", cpu_id, sec, ms, us);

    va_start(args, fmt);
    vsnprintf(printf_buf + n, 512 - n, fmt, args);
    va_end(args);

    HAL_SPINLOCK_Lock(RK_PRINTF_SPINLOCK_ID);
    printf("%s", printf_buf);
    HAL_SPINLOCK_Unlock(RK_PRINTF_SPINLOCK_ID);

    return 0;
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

#ifdef TEST_DEMO
    TEST_DEMO_GIC_Init();
#else
    /* Interrupt Init */
    HAL_GIC_Init(&irqConfig);
#endif

    /* IO Domain Init */
    HAL_IODOMAIN_Config();

    /* CPU1(main core) init UART*/
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 1) {
        if (UART2 == pUart) {
            HAL_IOMUX_Uart2M1Config();
            HAL_UART_Init(&g_uart2Dev, &hal_uart_config);
        } else if (UART4 == pUart) {
            HAL_IOMUX_Uart4M0Config();
            HAL_UART_Init(&g_uart4Dev, &hal_uart_config);
        }
    }

    /* SPINLOCK Init */
#ifdef HAL_SPINLOCK_MODULE_ENABLED
    ownerID = HAL_CPU_TOPOLOGY_GetCurrentCpuId() << 1 | 1;
    HAL_SPINLOCK_Init(ownerID);
#endif

    /* RPMsg Init */
    rpmsg_init();

    printf("\n");
    printf("****************************************\n");
    printf("  Hello RK3308 Bare-metal using RK_HAL! \n");
    printf("   Fuzhou Rockchip Electronics Co.Ltd   \n");
    printf("              CPI_ID(%d)                \n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("****************************************\n");
    rk_printf(" CPU(%d) Initial OK!\n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("\n");

#ifdef TEST_DEMO
    test_demo();
#endif

    while (1) {
        /* TODO: Message loop */

        /* Enter cpu idle when no message */
        HAL_CPU_EnterIdle();
    }
}

void _start(void)
{
    main();
}
