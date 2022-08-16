/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/
//#define TEST_DEMO

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* TODO: Config the irqs here. */

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

/********************* Private Variable Definition ***************************/

static struct UART_REG *pUart = UART2;    // UART2 or UART4, selected depend on hardware board

/********************* Private Function Definition ***************************/

static void HAL_IOMUX_Uart2M0Config(void)
{
    /* UART2 M0 RX-0D0 TX-0D1 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK0,
                         GPIO_PIN_D0 |
                         GPIO_PIN_D1,
                         PIN_CONFIG_MUX_FUNC1);
}

static void HAL_IOMUX_Uart4M1Config(void)
{
    /* UART4 M1 RX-3B1 TX-3B2 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK3,
                         GPIO_PIN_B1 |
                         GPIO_PIN_B2,
                         PIN_CONFIG_MUX_FUNC4);
    HAL_PINCTRL_IOFuncSelForUART4(IOFUNC_SEL_M1);
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

void main(void)
{
#ifdef HAL_SPINLOCK_MODULE_ENABLED
    uint32_t ownerID;
#endif
    uint32_t cpu_id, irq;

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

    /* CPU1(main core) init UART*/
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 1) {
        if (UART2 == pUart) {
            HAL_IOMUX_Uart2M0Config();
            HAL_UART_Init(&g_uart2Dev, &hal_uart_config);
        } else if (UART4 == pUart) {
            HAL_IOMUX_Uart4M1Config();
            HAL_UART_Init(&g_uart4Dev, &hal_uart_config);
        }
    }

    /* SPINLOCK Init */
#ifdef HAL_SPINLOCK_MODULE_ENABLED
    ownerID = HAL_CPU_TOPOLOGY_GetCurrentCpuId() << 1 | 1;
    HAL_SPINLOCK_Init(ownerID);
#endif

    /* CPU Off Support */
    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    irq = AMP_CPUOFF_REQ_IRQ(cpu_id);
    HAL_IRQ_HANDLER_SetIRQHandler(irq, HAL_SMCCC_SIP_AmpCpuOffIrqHandler, NULL);
    HAL_GIC_Enable(irq);

    printf("\n");
    printf("****************************************\n");
    printf("  Hello RK3568 Bare-metal using RK_HAL! \n");
    printf("       Rockchip Electronics Co.Ltd      \n");
    printf("              CPI_ID(%d)                \n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("****************************************\n");
    printf(" CPU(%d) Initial OK!\n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("\n");

#ifdef TEST_DEMO
    test_demo();
#endif

    while (1) {
        ;
        asm volatile ("wfi");
        ;
    }
}

void _start(void)
{
    main();
}
