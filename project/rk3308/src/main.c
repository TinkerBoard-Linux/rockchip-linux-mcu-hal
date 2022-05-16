/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"

/********************* Private MACRO Definition ******************************/
//#define UNITY_TEST
//#define SPINLOCK_TEST
//#define TIMER_TEST
//#define TSADC_TEST
//#define PWM_TEST
//#define GPIO_TEST
//#define UART_TEST
//#define I2STDM_TEST
//#define PERF_TEST

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

#ifdef __GNUC__
int _write(int fd, char *ptr, int len);
#else
int fputc(int ch, FILE *f);
#endif

static struct UART_REG *pUart = UART2;      // UART2 or UART4, selected depend on hardware board

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

#ifdef HAL_I2C_MODULE_ENABLED
static void HAL_IOMUX_I2C1M0Config(void)
{
    /* I2C1 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK0,
                         GPIO_PIN_B3 |
                         GPIO_PIN_B4,
                         PIN_CONFIG_MUX_FUNC1);
}
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

int rk_printf(const char *fmt, ...)
{
    va_list args;
    uint64_t cnt64;
    uint32_t sec, ms, us;

    HAL_SPINLOCK_Lock(RK_PRINTF_SPINLOCK_ID);

    // SYS_TIMER is 24MHz
    cnt64 = HAL_GetSysTimerCount();
    us = (uint32_t)((cnt64 / (PLL_INPUT_OSC_RATE / 1000000)) % 1000);
    ms = (uint32_t)((cnt64 / (PLL_INPUT_OSC_RATE / 1000)) % 1000);
    sec = (uint32_t)(cnt64 / PLL_INPUT_OSC_RATE);
    printf("[%d.%03d.%03d]", sec, ms, us);

    va_start(args, fmt);

    vprintf(fmt, args);

    va_end(args);

    //printf("\n");

    HAL_SPINLOCK_Unlock(RK_PRINTF_SPINLOCK_ID);

    return 0;
}

#ifdef UART_TEST
void uart_test(void)
{
    uint8_t buf[2];
    uint8_t input, cnt = 0;

    // must input 16 chars to exit the test
    for (input = 0; input < 16; input++) {
        while (1) {
            cnt = HAL_UART_SerialIn(pUart, buf, 1);
            if (cnt > 0) {
                break;
            }
        }
        buf[1] = 0;
        HAL_UART_SerialOutChar(pUart, (char)buf[0]);
    }
}
#endif

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

#ifdef GPIO_TEST
static void gpio_isr(int vector, void *param)
{
    printf("Enter GPIO IRQHander!\n");
    HAL_GPIO_IRQHandler(GPIO0, GPIO_BANK0);
    printf("Leave GPIO IRQHandler!\n");
}

static HAL_Status c4_call_back(eGPIO_bankId bank, uint32_t pin, void *args)
{
    printf("GPIO callback!\n");

    return HAL_OK;
}

static void gpio_test(void)
{
    uint32_t level;

    /* Test GPIO output */
    HAL_GPIO_SetPinDirection(GPIO0, GPIO_PIN_C4, GPIO_OUT);
    level = HAL_GPIO_GetPinLevel(GPIO0, GPIO_PIN_C4);
    printf("test_gpio level = %ld\n", level);
    HAL_DelayMs(5000);
    if (level == GPIO_HIGH) {
        HAL_GPIO_SetPinLevel(GPIO0, GPIO_PIN_C4, GPIO_LOW);
    } else {
        HAL_GPIO_SetPinLevel(GPIO0, GPIO_PIN_C4, GPIO_HIGH);
    }
    level = HAL_GPIO_GetPinLevel(GPIO0, GPIO_PIN_C4);
    printf("test_gpio level = %ld\n", level);
    HAL_DelayMs(5000);

    /* Test GPIO input */
    HAL_GPIO_SetPinDirection(GPIO0, GPIO_PIN_C4, GPIO_IN);
    HAL_IRQ_HANDLER_SetIRQHandler(GPIO0_IRQn, gpio_isr, NULL);
    HAL_IRQ_HANDLER_SetGpioIRQHandler(GPIO_BANK0, GPIO_PIN_C4, c4_call_back, NULL);
    HAL_GIC_Enable(GPIO0_IRQn);
    HAL_GPIO_SetIntType(GPIO0, GPIO_PIN_C4, GPIO_INT_TYPE_EDGE_RISING);
    HAL_GPIO_EnableIRQ(GPIO0, GPIO_PIN_C4);
}
#endif

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* The priority higher than 0x80 is non-secure interrupt. */

#ifdef TIMER_TEST
    GIC_AMP_IRQ_CFG_ROUTE(TIMER0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER1_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER2_IRQn, 0xd0, CPU_GET_AFFINITY(2, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER3_IRQn, 0xd0, CPU_GET_AFFINITY(3, 0)),
#endif

#ifdef GPIO_TEST
    GIC_AMP_IRQ_CFG_ROUTE(GPIO0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(0, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(0, 0),
    .irqsCfg = &irqsConfig[0],
};

#ifdef TIMER_TEST
static int timer_int_count = 0;
static uint32_t latency_sum = 0;
struct TIMER_REG *timer = NULL;
static bool desc_timer = true;
static int fixed_spend = 0;
static uint32_t latency_max = 0;
static struct TIMER_REG *g_timer[4] = { TIMER0, TIMER1, TIMER2, TIMER3 };
static uint32_t g_timer_irq[4] = { TIMER0_IRQn, TIMER1_IRQn, TIMER2_IRQn, TIMER3_IRQn };

static void timer_isr(int vector, void *param)
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
#endif

void config_freq(void)
{
    HAL_CRU_ClkSetFreq(PLL_APLL, 1008000000);
    HAL_SystemCoreClockUpdate(1008000000, HAL_SYSTICK_CLKSRC_EXT);
}

#ifdef PERF_TEST
uint32_t g_sum = 0;
static void perf_test(void)
{
    uint32_t cpu_id, loop = 1000, size = 4 * 1024 * 1024;
    uint32_t *ptr;
    uint64_t start, end;
    double time_s;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    if (cpu_id == 0) {
        coremark_main();
        config_freq();
        coremark_main();

        ptr = (uint32_t *)malloc(size);
        if (ptr) {
            start = HAL_GetSysTimerCount();
            for (int i = 0; i < loop; i++) {
                memset(ptr, i, size);
            }
            end = HAL_GetSysTimerCount();
            time_s = ((end - start) * 1.0) / PLL_INPUT_OSC_RATE;
            printf("memset bw=%.2fMB/s, time_s=%.2f\n", (size * loop) / time_s / 1000000, time_s);

            for (int i = 0; i < size / sizeof(uint32_t); i++) {
                g_sum += ptr[i];
            }
            printf("sum=%d\n", g_sum);
            free(ptr);
        }
    }
}
#endif

#ifdef TSADC_TEST
static void tsadc_test(void)
{
    HAL_CRU_ClkSetFreq(CLK_TSADC, 50000);
    HAL_TSADC_Enable_AUTO(0, 0, 0);
    printf("GET TEMP %d!\n", HAL_TSADC_GetTemperature_AUTO(0));
}
#endif

#ifdef PWM_TEST
static uint32_t hal_pwm0_clk = 100000000;
static struct HAL_PWM_CONFIG hal_channel0_handle, hal_channel1_handle;
struct HAL_PWM_CONFIG hal_channel0_config = {
    .channel = 0,
    .periodNS = 100000,
    .dutyNS = 40000,
    .polarity = true,
};

struct HAL_PWM_CONFIG hal_channel1_config = {
    .channel = 1,
    .periodNS = 100000,
    .dutyNS = 20000,
    .polarity = false,
};

static void HAL_IOMUX_PWM0_Channel0Config(void)
{
    /* PWM0 chanel0-0B5 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK0,
                         GPIO_PIN_B5,
                         PIN_CONFIG_MUX_FUNC1);
}

static void HAL_IOMUX_PWM0_Channel1Config(void)
{
    /* PWM0 chanel1-0B6 */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK0,
                         GPIO_PIN_B6,
                         PIN_CONFIG_MUX_FUNC1);
}

static void pwm_test(void)
{
    HAL_IOMUX_PWM0_Channel0Config();
    HAL_IOMUX_PWM0_Channel1Config();

    HAL_CRU_ClkSetFreq(g_pwm0Dev.clkID, hal_pwm0_clk);

    HAL_PWM_Init(&hal_channel0_handle, g_pwm0Dev.pReg, hal_pwm0_clk);
    HAL_PWM_Init(&hal_channel1_handle, g_pwm0Dev.pReg, hal_pwm0_clk);
    HAL_PWM_SetConfig(&hal_channel0_handle,
                      hal_channel0_config.channel,
                      &hal_channel0_config);
    HAL_PWM_SetConfig(&hal_channel1_handle,
                      hal_channel1_config.channel,
                      &hal_channel1_config);

    HAL_PWM_Enable(&hal_channel0_handle, hal_channel0_config.channel, HAL_PWM_CONTINUOUS);
    HAL_PWM_Enable(&hal_channel1_handle, hal_channel1_config.channel, HAL_PWM_CONTINUOUS);
}
#endif

#ifdef I2STDM_TEST
void i2stdm0_demo(void)
{
    struct AUDIO_PARAMS params;
    struct AUDIO_INIT_CONFIG config;

    printf("zzz---i2stdm0_demo\n");
    params.channels = AUDIO_CHANNELS_2;
    params.sampleBits = AUDIO_SAMPLEBITS_16;
    params.sampleRate = AUDIO_SAMPLERATE_48000;
    /* iomux init */
    HAL_PINCTRL_SetIOMUX(GPIO_BANK2,
                         GPIO_PIN_A7 |
                         GPIO_PIN_A6 |
                         GPIO_PIN_A5 |
                         GPIO_PIN_A4 |
                         GPIO_PIN_B0 |
                         GPIO_PIN_B0 |
                         GPIO_PIN_B1 |
                         GPIO_PIN_B2 |
                         GPIO_PIN_B3 |
                         GPIO_PIN_B4 |
                         GPIO_PIN_B5 |
                         GPIO_PIN_B6 |
                         GPIO_PIN_B7 |
                         GPIO_PIN_C0,
                         PIN_CONFIG_MUX_FUNC1);

    config.master = HAL_TRUE;
    config.clkInvert = HAL_FALSE;
    config.format = AUDIO_FMT_I2S;
    config.trcmMode = TRCM_NONE;
    config.pdmMode = PDM_NORMAL_MODE;
    config.txMap = 0;
    config.rxMap = 0;
    HAL_I2STDM_Init(&g_i2sTdm0Dev, &config);
    /* clk init */
    HAL_CRU_ClkEnable(g_i2sTdm0Dev.mclkTxGate);
    HAL_CRU_ClkEnable(g_i2sTdm0Dev.mclkRxGate);
    HAL_CRU_ClkEnable(g_i2sTdm0Dev.hclk);
    HAL_CRU_ClkSetFreq(g_i2sTdm0Dev.mclkTx, AUDIO_SAMPLERATE_48000 * 256);
    HAL_I2STDM_Config(&g_i2sTdm0Dev, AUDIO_STREAM_PLAYBACK, &params);
    HAL_I2STDM_TxRxEnable(&g_i2sTdm0Dev, AUDIO_STREAM_PLAYBACK, 1);
}
#endif

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

    /* Interrupt Init */
    HAL_GIC_Init(&irqConfig);

    /* IO Domain Init */
    HAL_IODOMAIN_Config();

    /* UART Init */
    if (UART2 == pUart) {
        HAL_IOMUX_Uart2M1Config();
        HAL_UART_Init(&g_uart2Dev, &hal_uart_config);
    } else if (UART4 == pUart) {
        HAL_IOMUX_Uart4M0Config();
        HAL_UART_Init(&g_uart4Dev, &hal_uart_config);
    }

#ifdef HAL_I2C_MODULE_ENABLED
    HAL_IOMUX_I2C1M0Config();
#endif

    /* SPINLOCK Init */
#ifdef HAL_SPINLOCK_MODULE_ENABLED
    ownerID = HAL_CPU_TOPOLOGY_GetCurrentCpuId() << 1 | 1;
    HAL_SPINLOCK_Init(ownerID);
#endif

    printf("\n");
    printf("****************************************\n");
    printf("  Hello RK3308 Bare-metal using RK_HAL! \n");
    printf("   Fuzhou Rockchip Electronics Co.Ltd   \n");
    printf("              CPI_ID(%d)                \n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("****************************************\n");
    rk_printf(" CPU(%d) Initial OK!\n", HAL_CPU_TOPOLOGY_GetCurrentCpuId());
    printf("\n");

#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#ifdef TIMER_TEST
    timer_test();
#endif

#ifdef TSADC_TEST
    tsadc_test();
#endif

#ifdef PWM_TEST
    pwm_test();
#endif

#ifdef GPIO_TEST
    gpio_test();
#endif

#ifdef UART_TEST
    uart_test();
#endif

#ifdef I2STDM_TEST
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        i2stdm0_demo();
    }
#endif

#ifdef PERF_TEST
    perf_test();
#endif

#ifdef UNITY_TEST
    /* Unity Test */
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        test_main();
    }
#endif

    while (1) {
        ;
    }
}

void _start(void)
{
    main();
}
