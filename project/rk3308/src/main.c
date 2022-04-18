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

static struct UART_REG *pUart = UART4;

static void HAL_IOMUX_Uart2M0Config(void)
{
    /* UART2 M0 RX-0D0 TX-0D1 */
}

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

void main(void)
{
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

    /* UART Init */
    HAL_IOMUX_Uart4M0Config();
    //HAL_UART_Init(&g_uart4Dev, &hal_uart_config);

    printf("Hello RK3308 Bare-metal using RK_HAL!\n");

    /* Unity Test */
    /* test_main(); */

    while (1) {
        ;
    }
}

int _start(void)
{
    main();

    return 0;
}
