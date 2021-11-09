/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity_runner.h"

/********************* Private MACRO Definition ******************************/
#define LEVEL0_CPU0_GPIO_BITS (0) /* GPIO_PIN_A0 | GPIO_PIN_A1 */
#define LEVEL0_CPU1_GPIO_BITS (0)
#define LEVEL0_CPU2_GPIO_BITS (0)
#define LEVEL0_CPU3_GPIO_BITS (0)

#define LEVEL1_CPU0_GPIO_BITS (0)
#define LEVEL1_CPU1_GPIO_BITS (0)
#define LEVEL1_CPU2_GPIO_BITS (0)
#define LEVEL1_CPU3_GPIO_BITS (0)

#define LEVEL2_CPU0_GPIO_BITS (0)
#define LEVEL2_CPU1_GPIO_BITS (0)
#define LEVEL2_CPU2_GPIO_BITS (0)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/
static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    GIC_AMP_IRQ_CFG(0, 0),
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

static const struct GPIO_IRQ_GROUP_CFG gpioIrqCfg[GPIO_BANK_NUM] = {
    [GPIO_BANK0] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK0, GPIO0_IRQn, GPIO0),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
    [GPIO_BANK1] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK1, GPIO1_IRQn, GPIO1),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
    [GPIO_BANK2] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK2, GPIO2_IRQn, GPIO2),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
        .prioGroup[0] = {
            .cpuGroup = { LEVEL0_CPU0_GPIO_BITS, LEVEL0_CPU1_GPIO_BITS,
                          LEVEL0_CPU2_GPIO_BITS, LEVEL0_CPU3_GPIO_BITS },
            .GIRQId = { RSVD_IRQn(39), GPIO2_IRQn,
                        RSVD_IRQn(40), RSVD_IRQn(41) },
            .prio = 0x80,
        },

        .prioGroup[1] = {
            .cpuGroup = { LEVEL1_CPU0_GPIO_BITS, LEVEL1_CPU1_GPIO_BITS,
                          LEVEL1_CPU2_GPIO_BITS, LEVEL1_CPU3_GPIO_BITS },
            .GIRQId = { RSVD_IRQn(42), RSVD_IRQn(43),
                        RSVD_IRQn(44), RSVD_IRQn(45) },
            .prio = 0x90,
        },

        .prioGroup[2] = {
            .cpuGroup = { LEVEL2_CPU0_GPIO_BITS, LEVEL2_CPU1_GPIO_BITS,
                          LEVEL2_CPU2_GPIO_BITS, 0 },
            .GIRQId = { RSVD_IRQn(46), RSVD_IRQn(47),
                        RSVD_IRQn(48), RSVD_IRQn(49) },
            .prio = 0xa0,
        },
    },
    [GPIO_BANK3] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK3, GPIO3_IRQn, GPIO3),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
};
/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

static struct UART_REG *pUart = UART2;

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

    /* UART Init */
    HAL_IOMUX_Uart2M0Config();
    HAL_UART_Init(&g_uart2Dev, &hal_uart_config);
    HAL_GIC_Init(&irqConfig);
    HAL_GPIO_IRQ_GROUP_Init(CPU_GET_AFFINITY(1, 0),
                            gpioIrqCfg,
                            HAL_IRQ_HANDLER_GetGpioIrqGroupOps());
    printf("Hello RK3568 Bare-metal using RK_HAL!\n");

    /* Unity Test */
    /* test_main(); */

    while (1) {
        ;
    }
}

int Main(void)
{
    main();

    return 0;
}
