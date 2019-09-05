/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "bsp.h"
#include "hal_base.h"
#include "unity_runner.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

#define DUMP_CLK(NAME, ID, RATE) \
    { .name = NAME, .clkId = ID, .initRate = RATE, }

struct CLK_DUMP {
    const char *name;
    uint32_t clkId;
    uint32_t initRate;
};

/********************* Private Variable Definition ***************************/

static struct UART_REG *pUart = UART0;

static const struct CLK_DUMP s_clkInits[] =
{
    DUMP_CLK("SCLK_SHRM", SCLK_SHRM, 10 * MHZ),
    DUMP_CLK("PCLK_SHRM", PCLK_SHRM, 10 * MHZ),
    DUMP_CLK("PCLK_ALIVE", PCLK_ALIVE, 10 * MHZ),
    DUMP_CLK("HCLK_ALIVE", HCLK_ALIVE, 10 * MHZ),
    DUMP_CLK("HCLK_M4", HCLK_M4, 10 * MHZ),
    DUMP_CLK("ACLK_LOGIC", ACLK_LOGIC, 10 * MHZ),
    DUMP_CLK("HCLK_LOGIC", HCLK_LOGIC, 10 * MHZ),
    DUMP_CLK("PCLK_LOGIC", PCLK_LOGIC, 10 * MHZ),
    DUMP_CLK("CLK_SPI1", CLK_SPI1, 5 * MHZ),
    DUMP_CLK("PLL_GPLL", PLL_GPLL, 1188 * MHZ),
    DUMP_CLK("PLL_CPLL", PLL_CPLL, 1000 * MHZ),
    DUMP_CLK("HCLK_M4", HCLK_M4, 300 * MHZ),
    DUMP_CLK("ACLK_DSP", ACLK_DSP, 400 * MHZ),
    DUMP_CLK("ACLK_LOGIC", ACLK_LOGIC, 300 * MHZ),
    DUMP_CLK("HCLK_LOGIC", HCLK_LOGIC, 150 * MHZ),
    DUMP_CLK("PCLK_LOGIC", PCLK_LOGIC, 150 * MHZ),
    DUMP_CLK("SCLK_SHRM", SCLK_SHRM, 300 * MHZ),
    DUMP_CLK("PCLK_SHRM", PCLK_SHRM, 100 * MHZ),
    DUMP_CLK("PCLK_ALIVE", PCLK_ALIVE, 100 * MHZ),
    DUMP_CLK("HCLK_ALIVE", HCLK_ALIVE, 100 * MHZ),
    DUMP_CLK("CLK_SPI1", CLK_SPI1, 50 * MHZ),
};

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

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

void ClkInit(const struct CLK_DUMP *clkInits, int clkInitNum, bool clkDump)
{
    int32_t i;

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

    ClkInit(s_clkInits, HAL_ARRAY_SIZE(s_clkInits), 0);

    /* BSP Init */
    BSP_Init();

    /* UART Init */
    HAL_NVIC_SetIRQHandler(UART0_IRQn, UART_IRQHandler);
    HAL_NVIC_EnableIRQ(UART0_IRQn);

    HAL_UART_Init(&g_uart0Dev, &hal_uart_config);

    while (1) {
        HAL_DelayMs(1000);
        printf("h");
    }

    /* Unity Test  */
    test_main();

    while (1)
        ;

    return 0;
}

int _start(void)
{
    main();

    return 0;
}
