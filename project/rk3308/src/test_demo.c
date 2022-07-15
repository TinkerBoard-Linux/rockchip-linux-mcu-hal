/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"

/********************* Private MACRO Definition ******************************/
//#define SOFTRST_TEST
//#define SOFTIRQ_TEST
//#define FAULTDBG_TEST
//#define TIMER_TEST
//#define SPINLOCK_TEST
//#define TSADC_TEST
//#define GPIO_TEST
//#define PWM_TEST
//#define UART_TEST
//#define I2STDM_TEST
//#define DMA_LINK_LIST_TEST
//#define PERF_TEST
//#define IPC_TEST
//#define UNITY_TEST

/********************* Private Structure Definition **************************/

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

#ifdef SOFTIRQ_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(0, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(0, 0),
    .irqsCfg = &irqsConfig[0],
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/************************************************/
/*                                              */
/*                 HW Borad config              */
/*                                              */
/************************************************/

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

/************************************************/
/*                                              */
/*                  UART_TEST                   */
/*                                              */
/************************************************/
#ifdef UART_TEST
static struct UART_REG *pUart = UART4;      // UART2 or UART4, selected depend on hardware board
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

/************************************************/
/*                                              */
/*                 SOFTRST_TEST                 */
/*                                              */
/************************************************/
#ifdef SOFTRST_TEST
typedef enum {
    SOFT_SRST_DIRECT = 0,
    SOFT_SRST_MASKROM,
    SOFT_SRST_LOADER,
} st_RstType;

/* system reset test*/
void softrst_test(st_RstType mode)
{
    if (mode == SOFT_SRST_MASKROM) {
        /* Reset to maskrom */
        BSP_SetMaskRomFlag();
    } else if (mode == SOFT_SRST_LOADER) {
        /* Reset to Loader */
        BSP_SetLoaderFlag();
    } else {
        /* Direct reboot system */
    }

    HAL_CRU_SetGlbSrst(GLB_SRST_FST);
    while (1) {
        ;
    }
}
#endif

/************************************************/
/*                                              */
/*                SOFTIRQ_TEST                  */
/*                                              */
/************************************************/
#ifdef SOFTIRQ_TEST
static void soft_isr(int vector, void *param)
{
    printf("soft_isr, vector = %d\n", vector);
    HAL_GIC_EndOfInterrupt(vector);
}

static void softirq_test(void)
{
    HAL_IRQ_HANDLER_SetIRQHandler(RSVD0_IRQn, soft_isr, NULL);
    HAL_GIC_Enable(RSVD0_IRQn);

    HAL_GIC_SetPending(RSVD0_IRQn);
}
#endif

/************************************************/
/*                                              */
/*                FAULTDBG_TEST                 */
/*                                              */
/************************************************/
#ifdef FAULTDBG_TEST
static void fault_dbg_test(void)
{
    // If system fault happend, use "addr2line" command to debug
    // Such as follows cpu0 fault

    // This is an example for accessing invalid address
    // if fault happend, log output as followed:
    /*
        abort mode:
        pc : 02607684  lr : 02607674 cpsr: 600e0013
        sp : 02eff7e8  ip : 0260e5d0  fp : 00000000
        r10: 00000560  r9 : 1f58cdf8  r8 : 1f5ce540
        r7 : 00000004  r6 : 1ffefaf4  r5 : 1f5cd500  r4 : 02eff7e8
        r3 : aaaaaaaa  r2 : 90000000  r1 : 0000000a  r0 : 00000000

        stack:
        0x02eff7e8: 0x0016e360  0x00020008  0x00000000  0x026001b0
        0x02eff7f8: 0x00000000  0x02600318

        Show more call stack info by run: addr2line -e hal0.elf -a -f 02607684 02607674 026001b0 02600318
    */
    // use command to find errors:
    // cd hal/
    // addr2line -e project/rk3308/GCC/hal0.elf -a -f 02607684 02607674 026001b0 02600318
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        volatile uint32_t *p_addr = (uint32_t *)0x90000000;
        *p_addr = 0xaaaaaaaa;
    }
}
#endif

/************************************************/
/*                                              */
/*                SPINLOCK_TEST                 */
/*                                              */
/************************************************/
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

/************************************************/
/*                                              */
/*                  TIMER_TEST                  */
/*                                              */
/************************************************/
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

/************************************************/
/*                                              */
/*                 TSADC_TEST                   */
/*                                              */
/************************************************/
#ifdef TSADC_TEST
static void tsadc_test(void)
{
    HAL_CRU_ClkSetFreq(CLK_TSADC, 50000);
    HAL_TSADC_Enable_AUTO(0, 0, 0);
    printf("GET TEMP %d!\n", HAL_TSADC_GetTemperature_AUTO(0));
}
#endif

/************************************************/
/*                                              */
/*                  GPIO_TEST                   */
/*                                              */
/************************************************/
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

/************************************************/
/*                                              */
/*                  PWM_TEST                    */
/*                                              */
/************************************************/
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

/************************************************/
/*                                              */
/*                I2STDM_TEST                   */
/*                                              */
/************************************************/
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

/************************************************/
/*                                              */
/*            DMA_LINK_LIST_TEST                */
/*                                              */
/************************************************/
#ifdef DMA_LINK_LIST_TEST
#define DMA_SIZE         64
#define DMA_TEST_CHANNEL 0
#define XFER_LIST_SIZE   128
__ALIGNED(64) uint8_t src[DMA_SIZE * 2] = { 0 };
__ALIGNED(64) uint8_t dst[DMA_SIZE * 2] = { 0 };
HAL_LIST_HEAD(pxfer_link_list);

static void HAL_PL330_Handler(uint32_t irq, void *args)
{
    struct HAL_PL330_DEV *pl330 = (struct HAL_PL330_DEV *)args;
    uint32_t irqStatus;

    irqStatus = HAL_PL330_IrqHandler(pl330);
    if (irqStatus & (1 << DMA_TEST_CHANNEL)) {
        if (pl330->chans[DMA_TEST_CHANNEL].desc.callback) {
            pl330->chans[DMA_TEST_CHANNEL].desc.callback(&pl330->chans[DMA_TEST_CHANNEL]);
        }

        if (pl330->chans[DMA_TEST_CHANNEL].pdesc->callback) {
            pl330->chans[DMA_TEST_CHANNEL].pdesc->callback(&pl330->chans[DMA_TEST_CHANNEL]);
        }
    }
}

static void MEMCPY_Callback(void *cparam)
{
    struct PL330_CHAN *pchan = cparam;
    uint32_t ret;
    int i;

    for (i = 0; i < DMA_SIZE * 2; i++) {
        if (src[i] != dst[i]) {
            printf("DMA transfor error, src[%d] is %x, dst[%d] is %x\n",
                   i, src[i], i, dst[i]);
            break;
        }
    }
    ret = HAL_PL330_Stop(pchan);
    if (ret) {
        printf("Stop DMA fail\n");

        return;
    }

    ret = HAL_PL330_ReleaseChannel(pchan);
    if (ret) {
        printf("Release DMA fail\n");

        return;
    }
}

static void xferdata_init(struct PL330_XFER_SPEC_LIST *xfer_list)
{
    struct PL330_XFER_SPEC_LIST *xfer_list_after = xfer_list;
    struct PL330_XFER_SPEC_LIST *xfer_list_befor = xfer_list;

    xfer_list_after->xfer.srcAddr = src;
    xfer_list_after->xfer.dstAddr = dst;
    xfer_list_after->xfer.length = DMA_SIZE;
    HAL_LIST_InsertAfter(&pxfer_link_list, &xfer_list_after->node);
    xfer_list_after += sizeof(struct PL330_XFER_SPEC_LIST);
    xfer_list_after->xfer.srcAddr = src + DMA_SIZE;
    xfer_list_after->xfer.dstAddr = dst + DMA_SIZE;
    xfer_list_after->xfer.length = DMA_SIZE;
    HAL_LIST_InsertAfter(&xfer_list_befor->node, &xfer_list_after->node);
}

static void dmalinklist_test(void)
{
    __ALIGNED(64) uint8_t buf[PL330_CHAN_BUF_LEN] = { 0 };
    __ALIGNED(64) static uint8_t pxferList[XFER_LIST_SIZE] = { 0 };
    __ALIGNED(64) static uint8_t pdesc[XFER_LIST_SIZE * 2] = { 0 };
    uint32_t timeout = 1000;
    struct PL330_CHAN *pchan;
    int ret, i;

#ifdef DMA0_BASE
    struct HAL_PL330_DEV *pl330 = &g_pl330Dev0;
#else
    struct HAL_PL330_DEV *pl330 = &g_pl330Dev;
#endif

    ret = HAL_PL330_Init(pl330);
    if (ret) {
        printf("HAL_PL330_Init fail!\n");

        return;
    }

    for (i = 0; i < DMA_SIZE * 2; i++) {
        src[i] = i;
    }

    HAL_IRQ_HANDLER_SetIRQHandler(pl330->irq[0], HAL_PL330_Handler, pl330);
    HAL_IRQ_HANDLER_SetIRQHandler(pl330->irq[1], HAL_PL330_Handler, pl330);
    HAL_GIC_Enable(pl330->irq[0]);
    HAL_GIC_Enable(pl330->irq[1]);
    pchan = HAL_PL330_RequestChannel(pl330, (DMA_REQ_Type)DMA_TEST_CHANNEL);
    if (!pchan) {
        printf("Can not find used channel!\n");

        return;
    }

    HAL_PL330_SetMcBuf(pchan, buf);
    xferdata_init(pxferList);
    ret = HAL_PL330_PrepDmaLinkList(pchan, pxferList,
                                    pdesc, DMA_MEM_TO_MEM,
                                    MEMCPY_Callback, pchan);
    ret = HAL_PL330_Start(pchan);
    if (ret) {
        printf("Start dma fail\n");
    }

    while (timeout--) {
        if (pl330->pReg->INTEN & (1 << DMA_TEST_CHANNEL) == 0) {
            break;
        }

        HAL_DelayUs(10);
    }

    if (!timeout) {
        printf("Wait DMA finish timeout\n");

        return;
    }

    ret = HAL_PL330_DeInit(pl330);
    if (ret) {
        printf("DeInit DMA fail\n");

        return;
    }

    printf("dmalinklist_test OK!\n");
}
#endif

/************************************************/
/*                                              */
/*                  PERF_TEST                   */
/*                                              */
/************************************************/
#ifdef PERF_TEST
void config_freq(void)
{
    HAL_CRU_ClkSetFreq(PLL_APLL, 1008000000);
    HAL_SystemCoreClockUpdate(1008000000, HAL_SYSTICK_CLKSRC_EXT);
}

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

/************************************************/
/*                                              */
/*                  IPC_TEST                    */
/*                                              */
/************************************************/
#ifdef IPC_TEST

void multi_cpu_cowork_test(void)
{
    uint32_t curr_cpu_id;

    while (1) {
        HAL_SPINLOCK_Lock(share_t.spinlock_id);        // Use spinlock to protect share mem

        curr_cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();

        // an example for access share memory
        share_t.flag = curr_cpu_id;     // current cpu id as a flag for example
        share_t.data[0]++;              // muti-cpu can access data buffer

        printf("CPU(%d) lockID = %d, flag = %d, data = %d\n", curr_cpu_id, share_t.spinlock_id, share_t.flag, share_t.data[0]);

        if (curr_cpu_id == 0) {
            printf("\n");
        }

        HAL_SPINLOCK_Unlock(share_t.spinlock_id);      // Use spinlock to protect share mem
        HAL_DelayMs(500);
    }
}

#endif

/********************* Public Function Definition ****************************/

void TEST_DEMO_GIC_Init(void)
{
    HAL_GIC_Init(&irqConfig);
}

void test_demo(void)
{
#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#ifdef SOFTIRQ_TEST
    softirq_test();
#endif

#ifdef FAULTDBG_TEST
    fault_dbg_test();
#endif

#ifdef SOFTRST_TEST
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        softrst_test(SOFT_SRST_DIRECT);
    }
#endif

#ifdef TIMER_TEST
    timer_test();
#endif

#ifdef TSADC_TEST
    tsadc_test();
#endif

#ifdef GPIO_TEST
    gpio_test();
#endif

#ifdef PWM_TEST
    pwm_test();
#endif

#ifdef UART_TEST
    uart_test();
#endif

#ifdef I2STDM_TEST
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        i2stdm0_demo();
    }
#endif

#ifdef DMA_LINK_LIST_TEST
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
        dmalinklist_test();
    }
#endif

#ifdef PERF_TEST
    perf_test();
#endif

#ifdef IPC_TEST
    multi_cpu_cowork_test();
#endif

#ifdef UNITY_TEST
    /* Unity Test */
    if (HAL_CPU_TOPOLOGY_GetCurrentCpuId() == 0) {
#ifdef HAL_I2C_MODULE_ENABLED
        HAL_IOMUX_I2C1M0Config();
#endif
        test_main();
    }
#endif
}