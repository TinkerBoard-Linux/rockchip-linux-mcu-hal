/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/
//#define TEST_DEMO

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/
static struct UART_REG *pUart = UART0;

#ifdef __GNUC__
__USED int _write(int fd, char *ptr, int len)
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

#ifdef RKMCU_RK3576_PMU
__USED int _read(void)
{
    return -1;
}

__USED int _sbrk(void)
{
    return -1;
}

__USED int _close(void)
{
    return -1;
}

__USED int _fstat(void)
{
    return -1;
}

__USED int _isatty(void)
{
    return -1;
}

__USED int _lseek(void)
{
    return -1;
}

__USED int _exit(void)
{
    return -1;
}

__USED int _kill(void)
{
    return -1;
}

__USED int _getpid(void)
{
    return -1;
}
#endif

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

int main(void)
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
    HAL_UART_Init(&g_uart0Dev, &hal_uart_config);

    printf("Hello RK3562 mcu\n");

#ifdef TEST_DEMO
    test_demo();
#endif

    while (1) {
        ;
    }
}

int entry(void)
{
    return main();
}