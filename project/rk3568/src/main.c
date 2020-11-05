/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

static struct UART_REG *pUart = UART2;

static void UART2_IOMUX_Init(void)
{
    /* UART2 M0 RX-0D0 TX-0D1 */
    WRITE_REG_MASK_WE(PMU_GRF->GPIO0D_IOMUX_L,
                      PMU_GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_MASK |
                      PMU_GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_MASK,
                      1 << PMU_GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT |
                      1 << PMU_GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT);
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
    UART2_IOMUX_Init();
    HAL_UART_Init(&g_uart2Dev, &hal_uart_config);
    printf("Hello RK3568 Bare-metal using RK_HAL!\n");

    while (1) {
        ;
    }
}

int Main(void)
{
    main();

    return 0;
}