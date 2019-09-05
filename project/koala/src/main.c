/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"
#include "hal_base.h"
#include "unity_runner.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

static struct UART_REG *pUart = UART0;

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
}
#endif

void UART_IRQHandler(void)
{
    HAL_UART_HandleIrq(pUart);
}

#define DUMP_CLK(NAME, ID, RATE) \
    { .name = NAME, .clkId = ID, .initRate = RATE, }

struct CLK_DUMP {
    const char *name;
    uint32_t clkId;
    uint32_t initRate;
};

static const struct CLK_DUMP s_clkInits[] =
{
    DUMP_CLK("PLL_GPLL", PLL_GPLL, 104000000),
    DUMP_CLK("HCLK_MCU", HCLK_MCU, 104000000),
    DUMP_CLK("PCLK_MCU", PCLK_MCU, 26000000),
    DUMP_CLK("CLK_BT52M", CLK_BT52M, 52000000),
    DUMP_CLK("HCLK_BT", HCLK_BT, 104000000),
    DUMP_CLK("PCLK_PMU", PCLK_PMU, 26000000),
    DUMP_CLK("CLK_SFC", CLK_SFC, 104000000),
    DUMP_CLK("PLL_CPLL", PLL_CPLL, 240000000),
    DUMP_CLK("CLK_DSP", CLK_DSP, 120000000),
};

void ClkInit(const struct CLK_DUMP *clkInits, int clkInitNum, bool clkDump)
{
    int i;

    for (i = 0; i < clkInitNum; i++) {
        if (clkInits[i].initRate) {
            HAL_CRU_ClkSetFreq(clkInits[i].clkId, clkInits[i].initRate);
        }
        if (clkDump)
            HAL_DBG("%s: %s = %ld\n", __func__, clkInits[i].name, HAL_CRU_ClkGetFreq(clkInits[i].clkId));
    }
}

int main(void)
{
    struct HAL_UART_CONFIG hal_uart_config = {
        .baudRate = UART_BR_115200,
        .dataBit = UART_DATA_8B,
        .stopBit = UART_ONE_STOPBIT,
        .parity = UART_PARITY_DISABLE,
    };

    /* HAL BASE Init */
    HAL_Init();

    /* System tick init */
#ifdef HAL_SYSTICK_MODULE_ENABLED
    HAL_NVIC_SetIRQHandler(SysTick_IRQn, HAL_SYSTICK_IRQHandler);
    HAL_SetTickFreq(HAL_TICK_FREQ_1KHZ);
    HAL_SYSTICK_Init();
#endif

    /* BSP Init */
    BSP_Init();

    ClkInit(s_clkInits, HAL_ARRAY_SIZE(s_clkInits), 0);

    /* UART Init */
    HAL_NVIC_SetIRQHandler(UART0_IRQn, UART_IRQHandler);
    HAL_NVIC_EnableIRQ(UART0_IRQn);

    HAL_UART_Init(&g_uart0Dev, &hal_uart_config);

    /* Unity Test  */
    test_main();

    while (1)
        ;

    return 0;
}

int Main(void)
{
    return main();
}
