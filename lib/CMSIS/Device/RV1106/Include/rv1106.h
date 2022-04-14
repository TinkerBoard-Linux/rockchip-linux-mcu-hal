/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2022 Rockchip Electronics Co., Ltd.
 */

#ifndef __RV1106_H
#define __RV1106_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* COREGRF Register Structure Define */
struct COREGRF_REG {
    __IO uint32_t PVTPLL_CON0_L;                      /* Address Offset: 0x0000 */
    __IO uint32_t PVTPLL_CON0_H;                      /* Address Offset: 0x0004 */
    __IO uint32_t PVTPLL_CON[3];                      /* Address Offset: 0x0008 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t PVTPLL_OSC_CNT;                     /* Address Offset: 0x0018 */
    __IO uint32_t PVTPLL_OSC_CNT_AVG;                 /* Address Offset: 0x001C */
         uint32_t RESERVED0020;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_PERI_ADDR_START;              /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_PERI_ADDR_END;                /* Address Offset: 0x0028 */
    __IO uint32_t MCU_CACHE_MISC;                     /* Address Offset: 0x002C */
    __IO uint32_t MCU_CACHE_STATUS;                   /* Address Offset: 0x0030 */
    __IO uint32_t CPU_STATUS;                         /* Address Offset: 0x0034 */
    __IO uint32_t CPU_CON0;                           /* Address Offset: 0x0038 */
    __IO uint32_t CORE_MEMCFG_UHDSPRA;                /* Address Offset: 0x003C */
};
/* PMUCRU Register Structure Define */
struct PMUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t PMUCLKSEL_CON[8];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0320[312];                  /* Address Offset: 0x0320 */
    __IO uint32_t PMUGATE_CON[3];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t PMUSOFTRST_CON[3];                  /* Address Offset: 0x0A00 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t APLL_CON[5];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
    __IO uint32_t CPLL_CON[5];                        /* Address Offset: 0x0020 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __IO uint32_t DPLL_CON[5];                        /* Address Offset: 0x0040 */
         uint32_t RESERVED0054[3];                    /* Address Offset: 0x0054 */
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0060 */
         uint32_t RESERVED0074[51];                   /* Address Offset: 0x0074 */
    __IO uint32_t SSGTBL0_3;                          /* Address Offset: 0x0140 */
    __IO uint32_t SSGTBL4_7;                          /* Address Offset: 0x0144 */
    __IO uint32_t SSGTBL8_11;                         /* Address Offset: 0x0148 */
    __IO uint32_t SSGTBL12_15;                        /* Address Offset: 0x014C */
    __IO uint32_t SSGTBL16_19;                        /* Address Offset: 0x0150 */
    __IO uint32_t SSGTBL20_23;                        /* Address Offset: 0x0154 */
    __IO uint32_t SSGTBL24_27;                        /* Address Offset: 0x0158 */
    __IO uint32_t SSGTBL28_31;                        /* Address Offset: 0x015C */
    __IO uint32_t SSGTBL32_35;                        /* Address Offset: 0x0160 */
    __IO uint32_t SSGTBL36_39;                        /* Address Offset: 0x0164 */
    __IO uint32_t SSGTBL40_43;                        /* Address Offset: 0x0168 */
    __IO uint32_t SSGTBL44_47;                        /* Address Offset: 0x016C */
    __IO uint32_t SSGTBL48_51;                        /* Address Offset: 0x0170 */
    __IO uint32_t SSGTBL52_55;                        /* Address Offset: 0x0174 */
    __IO uint32_t SSGTBL56_59;                        /* Address Offset: 0x0178 */
    __IO uint32_t SSGTBL60_63;                        /* Address Offset: 0x017C */
    __IO uint32_t SSGTBL64_67;                        /* Address Offset: 0x0180 */
    __IO uint32_t SSGTBL68_71;                        /* Address Offset: 0x0184 */
    __IO uint32_t SSGTBL72_75;                        /* Address Offset: 0x0188 */
    __IO uint32_t SSGTBL76_79;                        /* Address Offset: 0x018C */
    __IO uint32_t SSGTBL80_83;                        /* Address Offset: 0x0190 */
    __IO uint32_t SSGTBL84_87;                        /* Address Offset: 0x0194 */
    __IO uint32_t SSGTBL88_91;                        /* Address Offset: 0x0198 */
    __IO uint32_t SSGTBL92_95;                        /* Address Offset: 0x019C */
    __IO uint32_t SSGTBL96_99;                        /* Address Offset: 0x01A0 */
    __IO uint32_t SSGTBL100_103;                      /* Address Offset: 0x01A4 */
    __IO uint32_t SSGTBL104_107;                      /* Address Offset: 0x01A8 */
    __IO uint32_t SSGTBL108_111;                      /* Address Offset: 0x01AC */
    __IO uint32_t SSGTBL112_115;                      /* Address Offset: 0x01B0 */
    __IO uint32_t SSGTBL116_119;                      /* Address Offset: 0x01B4 */
    __IO uint32_t SSGTBL120_123;                      /* Address Offset: 0x01B8 */
    __IO uint32_t SSGTBL124_127;                      /* Address Offset: 0x01BC */
         uint32_t RESERVED01C0[48];                   /* Address Offset: 0x01C0 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t CRU_CLKSEL_CON[34];                 /* Address Offset: 0x0300 */
         uint32_t RESERVED0388[286];                  /* Address Offset: 0x0388 */
    __IO uint32_t CRU_CLKGATE_CON[4];                 /* Address Offset: 0x0800 */
         uint32_t RESERVED0810[126];                  /* Address Offset: 0x0810 */
    __IO uint32_t CRU_SOFTRST_CON[1];                 /* Address Offset: 0x0A08 */
         uint32_t RESERVED0A0C[125];                  /* Address Offset: 0x0A0C */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x0C00 */
    __IO uint32_t GLB_RST_ST;                         /* Address Offset: 0x0C04 */
    __IO uint32_t GLB_SRST_FST;                       /* Address Offset: 0x0C08 */
    __IO uint32_t GLB_SRST_SND;                       /* Address Offset: 0x0C0C */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x0C10 */
    __IO uint32_t SDIO_CON[2];                        /* Address Offset: 0x0C14 */
    __IO uint32_t SDMMC_CON[2];                       /* Address Offset: 0x0C1C */
    __IO uint32_t EMMC_CON[2];                        /* Address Offset: 0x0C24 */
};
/* PERICRU Register Structure Define */
struct PERICRU_REG {
         uint32_t RESERVED0000[193];                  /* Address Offset: 0x0000 */
    __IO uint32_t PERICLKSEL_CON[11];                 /* Address Offset: 0x0304 */
         uint32_t RESERVED0330[308];                  /* Address Offset: 0x0330 */
    __IO uint32_t PERIGATE_CON[8];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED0820[120];                  /* Address Offset: 0x0820 */
    __IO uint32_t PERISOFTRST_CON[8];                 /* Address Offset: 0x0A00 */
};
/* VICRU Register Structure Define */
struct VICRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VICLKSEL_CON[4];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t VIGATE_CON[3];                      /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t VISOFTRST_CON[3];                   /* Address Offset: 0x0A00 */
};
/* NPUCRU Register Structure Define */
struct NPUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t NPUCLKSEL_CON[1];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t NPUGATE_CON[2];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t NPUSOFTRST_CON[1];                  /* Address Offset: 0x0A00 */
};
/* CORECRU Register Structure Define */
struct CORECRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t CORECLKSEL_CON[5];                  /* Address Offset: 0x0300 */
         uint32_t RESERVED0314[315];                  /* Address Offset: 0x0314 */
    __IO uint32_t COREGATE_CON[2];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t CORESOFTRST_CON[2];                 /* Address Offset: 0x0A00 */
         uint32_t RESERVED0A08[190];                  /* Address Offset: 0x0A08 */
    __IO uint32_t AUTOCS_CORE_SRC_CON[2];             /* Address Offset: 0x0D00 */
};
/* VEPUCRU Register Structure Define */
struct VEPUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VEPUCLKSEL_CON[2];                  /* Address Offset: 0x0300 */
         uint32_t RESERVED0308[318];                  /* Address Offset: 0x0308 */
    __IO uint32_t VEPUGATE_CON[3];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t VEPUSOFTRST_CON[2];                 /* Address Offset: 0x0A00 */
};
/* VOCRU Register Structure Define */
struct VOCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VOCLKSEL_CON[4];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t VOGATE_CON[4];                      /* Address Offset: 0x0800 */
         uint32_t RESERVED0810[124];                  /* Address Offset: 0x0810 */
    __IO uint32_t VOSOFTRST_CON[4];                   /* Address Offset: 0x0A00 */
};
/* DDRCRU Register Structure Define */
struct DDRCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t DDRCLKSEL_CON[1];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t DDRGATE_CON[2];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t DDRSOFTRST_CON[2];                  /* Address Offset: 0x0A00 */
};
/* SUBDDRCRU Register Structure Define */
struct SUBDDRCRU_REG {
         uint32_t RESERVED0000[160];                  /* Address Offset: 0x0000 */
    __IO uint32_t SUBDDRMODE_CON00;                   /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t SUBDDRCLKSEL_CON[1];                /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t SUBDDRGATE_CON[1];                  /* Address Offset: 0x0800 */
         uint32_t RESERVED0804[127];                  /* Address Offset: 0x0804 */
    __IO uint32_t SUBDDRSOFTRST_CON[1];               /* Address Offset: 0x0A00 */
};
/* UART Register Structure Define */
struct UART_REG {
    union {
        __I  uint32_t RBR;                                /* Address Offset: 0x0000 */
        __IO uint32_t DLL;                                /* Address Offset: 0x0000 */
        __O  uint32_t THR;                                /* Address Offset: 0x0000 */
    };
    union {
        __IO uint32_t DLH;                                /* Address Offset: 0x0004 */
        __IO uint32_t IER;                                /* Address Offset: 0x0004 */
    };
    union {
        __O  uint32_t FCR;                                /* Address Offset: 0x0008 */
        __I  uint32_t IIR;                                /* Address Offset: 0x0008 */
    };
    __IO uint32_t LCR;                                /* Address Offset: 0x000C */
    __IO uint32_t MCR;                                /* Address Offset: 0x0010 */
    __I  uint32_t LSR;                                /* Address Offset: 0x0014 */
    __I  uint32_t MSR;                                /* Address Offset: 0x0018 */
    __IO uint32_t SCR;                                /* Address Offset: 0x001C */
         uint32_t RESERVED0020[4];                    /* Address Offset: 0x0020 */
    union {
        __I  uint32_t SRBR;                               /* Address Offset: 0x0030 */
        __O  uint32_t STHR;                               /* Address Offset: 0x0030 */
    };
         uint32_t RESERVED0034[15];                   /* Address Offset: 0x0034 */
    __IO uint32_t FAR;                                /* Address Offset: 0x0070 */
    __I  uint32_t TFR;                                /* Address Offset: 0x0074 */
    __O  uint32_t RFW;                                /* Address Offset: 0x0078 */
    __I  uint32_t USR;                                /* Address Offset: 0x007C */
    __I  uint32_t TFL;                                /* Address Offset: 0x0080 */
    __I  uint32_t RFL;                                /* Address Offset: 0x0084 */
    __O  uint32_t SRR;                                /* Address Offset: 0x0088 */
    __IO uint32_t SRTS;                               /* Address Offset: 0x008C */
    __IO uint32_t SBCR;                               /* Address Offset: 0x0090 */
    __IO uint32_t SDMAM;                              /* Address Offset: 0x0094 */
    __IO uint32_t SFE;                                /* Address Offset: 0x0098 */
    __IO uint32_t SRT;                                /* Address Offset: 0x009C */
    __IO uint32_t STET;                               /* Address Offset: 0x00A0 */
    __IO uint32_t HTX;                                /* Address Offset: 0x00A4 */
    __O  uint32_t DMASA;                              /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC[18];                   /* Address Offset: 0x00AC */
    __I  uint32_t CPR;                                /* Address Offset: 0x00F4 */
    __I  uint32_t UCV;                                /* Address Offset: 0x00F8 */
    __I  uint32_t CTR;                                /* Address Offset: 0x00FC */
};
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __I  uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __I  uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __I  uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __I  uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __I  uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __I  uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define COREGRF_BASE                   0xFF040000U /* COREGRF base address */
#define PMUCRU_BASE                    0xFF3A0000U /* PMUCRU base address */
#define CRU_BASE                       0xFF3B0000U /* CRU base address */
#define PERICRU_BASE                   0xFF3B2000U /* PERICRU base address */
#define VICRU_BASE                     0xFF3B4000U /* VICRU base address */
#define NPUCRU_BASE                    0xFF3B6000U /* NPUCRU base address */
#define CORECRU_BASE                   0xFF3B8000U /* CORECRU base address */
#define VEPUCRU_BASE                   0xFF3BA000U /* VEPUCRU base address */
#define VOCRU_BASE                     0xFF3BC000U /* VOCRU base address */
#define DDRCRU_BASE                    0xFF3BE000U /* DDRCRU base address */
#define SUBDDRCRU_BASE                 0xFF3BF000U /* SUBDDRCRU base address */
#define UART0_BASE                     0xFF4A0000U /* UART0 base address */
#define UART1_BASE                     0xFF4B0000U /* UART1 base address */
#define UART2_BASE                     0xFF4C0000U /* UART2 base address */
#define UART3_BASE                     0xFF4D0000U /* UART3 base address */
#define UART4_BASE                     0xFF4E0000U /* UART4 base address */
#define UART5_BASE                     0xFF4F0000U /* UART5 base address */
#define ICACHE_BASE                    0xFF640000U /* ICACHE base address */
#define DCACHE_BASE                    0xFF640000U /* DCACHE base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define COREGRF             ((struct COREGRF_REG *) COREGRF_BASE)
#define PMUCRU              ((struct PMUCRU_REG *) PMUCRU_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define PERICRU             ((struct PERICRU_REG *) PERICRU_BASE)
#define VICRU               ((struct VICRU_REG *) VICRU_BASE)
#define NPUCRU              ((struct NPUCRU_REG *) NPUCRU_BASE)
#define CORECRU             ((struct CORECRU_REG *) CORECRU_BASE)
#define VEPUCRU             ((struct VEPUCRU_REG *) VEPUCRU_BASE)
#define VOCRU               ((struct VOCRU_REG *) VOCRU_BASE)
#define DDRCRU              ((struct DDRCRU_REG *) DDRCRU_BASE)
#define SUBDDRCRU           ((struct SUBDDRCRU_REG *) SUBDDRCRU_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define UART3               ((struct UART_REG *) UART3_BASE)
#define UART4               ((struct UART_REG *) UART4_BASE)
#define UART5               ((struct UART_REG *) UART5_BASE)
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)

#define IS_COREGRF_INSTANCE(instance) ((instance) == COREGRF)
#define IS_PMUCRU_INSTANCE(instance) ((instance) == PMUCRU)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_PERICRU_INSTANCE(instance) ((instance) == PERICRU)
#define IS_VICRU_INSTANCE(instance) ((instance) == VICRU)
#define IS_NPUCRU_INSTANCE(instance) ((instance) == NPUCRU)
#define IS_CORECRU_INSTANCE(instance) ((instance) == CORECRU)
#define IS_VEPUCRU_INSTANCE(instance) ((instance) == VEPUCRU)
#define IS_VOCRU_INSTANCE(instance) ((instance) == VOCRU)
#define IS_DDRCRU_INSTANCE(instance) ((instance) == DDRCRU)
#define IS_SUBDDRCRU_INSTANCE(instance) ((instance) == SUBDDRCRU)
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2) || ((instance) == UART3) || ((instance) == UART4) || ((instance) == UART5))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/****************************************COREGRF*****************************************/
/* PVTPLL_CON0_L */
#define COREGRF_PVTPLL_CON0_L_OFFSET                       (0x0U)
#define COREGRF_PVTPLL_CON0_L_START_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON0_L_START_MASK                   (0x1U << COREGRF_PVTPLL_CON0_L_START_SHIFT)                  /* 0x00000001 */
#define COREGRF_PVTPLL_CON0_L_OSC_EN_SHIFT                 (1U)
#define COREGRF_PVTPLL_CON0_L_OSC_EN_MASK                  (0x1U << COREGRF_PVTPLL_CON0_L_OSC_EN_SHIFT)                 /* 0x00000002 */
#define COREGRF_PVTPLL_CON0_L_OUT_POLAR_SHIFT              (2U)
#define COREGRF_PVTPLL_CON0_L_OUT_POLAR_MASK               (0x1U << COREGRF_PVTPLL_CON0_L_OUT_POLAR_SHIFT)              /* 0x00000004 */
#define COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_SHIFT           (8U)
#define COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_MASK            (0x7U << COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_SHIFT)           /* 0x00000700 */
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_SHIFT            (11U)
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_MASK             (0x3U << COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_SHIFT)            /* 0x00001800 */
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_SHIFT            (13U)
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_MASK             (0x3U << COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_SHIFT)            /* 0x00006000 */
#define COREGRF_PVTPLL_CON0_L_BYPASS_SHIFT                 (15U)
#define COREGRF_PVTPLL_CON0_L_BYPASS_MASK                  (0x1U << COREGRF_PVTPLL_CON0_L_BYPASS_SHIFT)                 /* 0x00008000 */
/* PVTPLL_CON0_H */
#define COREGRF_PVTPLL_CON0_H_OFFSET                       (0x4U)
#define COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_SHIFT        (0U)
#define COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_MASK         (0x7FU << COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_SHIFT)       /* 0x0000007F */
/* PVTPLL_CON1 */
#define COREGRF_PVTPLL_CON1_OFFSET                         (0x8U)
#define COREGRF_PVTPLL_CON1_CAL_CNT_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON1_CAL_CNT_MASK                   (0xFFFFFFFFU << COREGRF_PVTPLL_CON1_CAL_CNT_SHIFT)           /* 0xFFFFFFFF */
/* PVTPLL_CON2 */
#define COREGRF_PVTPLL_CON2_OFFSET                         (0xCU)
#define COREGRF_PVTPLL_CON2_THRESHOLD_SHIFT                (0U)
#define COREGRF_PVTPLL_CON2_THRESHOLD_MASK                 (0xFFFFU << COREGRF_PVTPLL_CON2_THRESHOLD_SHIFT)             /* 0x0000FFFF */
#define COREGRF_PVTPLL_CON2_CKG_VAL_SHIFT                  (16U)
#define COREGRF_PVTPLL_CON2_CKG_VAL_MASK                   (0xFFFFU << COREGRF_PVTPLL_CON2_CKG_VAL_SHIFT)               /* 0xFFFF0000 */
/* PVTPLL_CON3 */
#define COREGRF_PVTPLL_CON3_OFFSET                         (0x10U)
#define COREGRF_PVTPLL_CON3_REF_CNT_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON3_REF_CNT_MASK                   (0xFFFFFFFFU << COREGRF_PVTPLL_CON3_REF_CNT_SHIFT)           /* 0xFFFFFFFF */
/* PVTPLL_OSC_CNT */
#define COREGRF_PVTPLL_OSC_CNT_OFFSET                      (0x18U)
#define COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_SHIFT       (0U)
#define COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_MASK        (0xFFFFFFFFU << COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_SHIFT) /* 0xFFFFFFFF */
/* PVTPLL_OSC_CNT_AVG */
#define COREGRF_PVTPLL_OSC_CNT_AVG_OFFSET                  (0x1CU)
#define COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_SHIFT (0U)
#define COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_MASK (0x1U << COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_SHIFT) /* 0x00000001 */
/* CACHE_PERI_ADDR_START */
#define COREGRF_CACHE_PERI_ADDR_START_OFFSET               (0x24U)
#define COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_SHIFT (0U)
#define COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_MASK (0xFFFFFU << COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_SHIFT) /* 0x000FFFFF */
/* CACHE_PERI_ADDR_END */
#define COREGRF_CACHE_PERI_ADDR_END_OFFSET                 (0x28U)
#define COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_SHIFT (0U)
#define COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_MASK (0xFFFFFU << COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_SHIFT) /* 0x000FFFFF */
/* MCU_CACHE_MISC */
#define COREGRF_MCU_CACHE_MISC_OFFSET                      (0x2CU)
#define COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_SHIFT       (0U)
#define COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_MASK        (0x1U << COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_SHIFT)       /* 0x00000001 */
#define COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_SHIFT     (1U)
#define COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_MASK      (0x3U << COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_SHIFT)     /* 0x00000006 */
#define COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_SHIFT         (3U)
#define COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_MASK          (0x1U << COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_SHIFT)         /* 0x00000008 */
/* MCU_CACHE_STATUS */
#define COREGRF_MCU_CACHE_STATUS_OFFSET                    (0x30U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_SHIFT          (0U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_MASK           (0x1U << COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_SHIFT)          /* 0x00000001 */
#define COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_SHIFT     (1U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_MASK      (0x1U << COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_SHIFT)     /* 0x00000002 */
#define COREGRF_MCU_CACHE_STATUS_WFI_HALTED_SHIFT          (2U)
#define COREGRF_MCU_CACHE_STATUS_WFI_HALTED_MASK           (0x1U << COREGRF_MCU_CACHE_STATUS_WFI_HALTED_SHIFT)          /* 0x00000004 */
#define COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_SHIFT       (3U)
#define COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_MASK        (0x1U << COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_SHIFT)       /* 0x00000008 */
/* CPU_STATUS */
#define COREGRF_CPU_STATUS_OFFSET                          (0x34U)
#define COREGRF_CPU_STATUS_STANDBYWFE_SHIFT                (0U)
#define COREGRF_CPU_STATUS_STANDBYWFE_MASK                 (0x1U << COREGRF_CPU_STATUS_STANDBYWFE_SHIFT)                /* 0x00000001 */
#define COREGRF_CPU_STATUS_STANDBYWFI_SHIFT                (1U)
#define COREGRF_CPU_STATUS_STANDBYWFI_MASK                 (0x1U << COREGRF_CPU_STATUS_STANDBYWFI_SHIFT)                /* 0x00000002 */
#define COREGRF_CPU_STATUS_SMPNAMP_SHIFT                   (2U)
#define COREGRF_CPU_STATUS_SMPNAMP_MASK                    (0x1U << COREGRF_CPU_STATUS_SMPNAMP_SHIFT)                   /* 0x00000004 */
#define COREGRF_CPU_STATUS_STANDBYWFIL2_SHIFT              (3U)
#define COREGRF_CPU_STATUS_STANDBYWFIL2_MASK               (0x1U << COREGRF_CPU_STATUS_STANDBYWFIL2_SHIFT)              /* 0x00000008 */
#define COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_SHIFT        (4U)
#define COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_MASK         (0x1U << COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_SHIFT)        /* 0x00000010 */
#define COREGRF_CPU_STATUS_JTAGTOP_SHIFT                   (5U)
#define COREGRF_CPU_STATUS_JTAGTOP_MASK                    (0x1U << COREGRF_CPU_STATUS_JTAGTOP_SHIFT)                   /* 0x00000020 */
#define COREGRF_CPU_STATUS_JTAGNSW_SHIFT                   (6U)
#define COREGRF_CPU_STATUS_JTAGNSW_MASK                    (0x1U << COREGRF_CPU_STATUS_JTAGNSW_SHIFT)                   /* 0x00000040 */
/* CPU_CON0 */
#define COREGRF_CPU_CON0_OFFSET                            (0x38U)
#define COREGRF_CPU_CON0_VINITHI_SHIFT                     (0U)
#define COREGRF_CPU_CON0_VINITHI_MASK                      (0x1U << COREGRF_CPU_CON0_VINITHI_SHIFT)                     /* 0x00000001 */
#define COREGRF_CPU_CON0_CFGEND_SHIFT                      (1U)
#define COREGRF_CPU_CON0_CFGEND_MASK                       (0x1U << COREGRF_CPU_CON0_CFGEND_SHIFT)                      /* 0x00000002 */
#define COREGRF_CPU_CON0_CFGTE_SHIFT                       (2U)
#define COREGRF_CPU_CON0_CFGTE_MASK                        (0x1U << COREGRF_CPU_CON0_CFGTE_SHIFT)                       /* 0x00000004 */
#define COREGRF_CPU_CON0_L1RSTDISABLE_SHIFT                (7U)
#define COREGRF_CPU_CON0_L1RSTDISABLE_MASK                 (0x1U << COREGRF_CPU_CON0_L1RSTDISABLE_SHIFT)                /* 0x00000080 */
#define COREGRF_CPU_CON0_L2RSTDISABLE_SHIFT                (8U)
#define COREGRF_CPU_CON0_L2RSTDISABLE_MASK                 (0x1U << COREGRF_CPU_CON0_L2RSTDISABLE_SHIFT)                /* 0x00000100 */
#define COREGRF_CPU_CON0_EVENTI_SHIFT                      (9U)
#define COREGRF_CPU_CON0_EVENTI_MASK                       (0x1U << COREGRF_CPU_CON0_EVENTI_SHIFT)                      /* 0x00000200 */
#define COREGRF_CPU_CON0_DBGROMADDRV_SHIFT                 (10U)
#define COREGRF_CPU_CON0_DBGROMADDRV_MASK                  (0x1U << COREGRF_CPU_CON0_DBGROMADDRV_SHIFT)                 /* 0x00000400 */
#define COREGRF_CPU_CON0_DBGSELFADDRV_SHIFT                (11U)
#define COREGRF_CPU_CON0_DBGSELFADDRV_MASK                 (0x1U << COREGRF_CPU_CON0_DBGSELFADDRV_SHIFT)                /* 0x00000800 */
#define COREGRF_CPU_CON0_EVENTO_CLR_SHIFT                  (12U)
#define COREGRF_CPU_CON0_EVENTO_CLR_MASK                   (0x1U << COREGRF_CPU_CON0_EVENTO_CLR_SHIFT)                  /* 0x00001000 */
#define COREGRF_CPU_CON0_SRST_WFIEN_SHIFT                  (13U)
#define COREGRF_CPU_CON0_SRST_WFIEN_MASK                   (0x1U << COREGRF_CPU_CON0_SRST_WFIEN_SHIFT)                  /* 0x00002000 */
#define COREGRF_CPU_CON0_PO_SRST_WFIEN_SHIFT               (14U)
#define COREGRF_CPU_CON0_PO_SRST_WFIEN_MASK                (0x1U << COREGRF_CPU_CON0_PO_SRST_WFIEN_SHIFT)               /* 0x00004000 */
#define COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_SHIFT          (15U)
#define COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_MASK           (0x1U << COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_SHIFT)          /* 0x00008000 */
/* CORE_MEMCFG_UHDSPRA */
#define COREGRF_CORE_MEMCFG_UHDSPRA_OFFSET                 (0x3CU)
#define COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_SHIFT            (0U)
#define COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_MASK             (0x3U << COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_SHIFT)            /* 0x00000003 */
#define COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_SHIFT            (2U)
#define COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_MASK             (0x3U << COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_SHIFT)            /* 0x0000000C */
/*****************************************PMUCRU*****************************************/
/* PMUCLKSEL_CON00 */
#define PMUCRU_PMUCLKSEL_CON00_OFFSET                      (0x300U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_SHIFT (0U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_MASK (0x7U << PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_SHIFT) /* 0x00000007 */
#define PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_SHIFT     (3U)
#define PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_MASK      (0x1U << PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_SHIFT)     /* 0x00000008 */
#define PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_SHIFT     (4U)
#define PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_MASK      (0x3U << PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_SHIFT)     /* 0x00000030 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_SHIFT          (6U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_MASK           (0x3U << PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_SHIFT)          /* 0x000000C0 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_SHIFT   (8U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_MASK    (0x1FU << PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_SHIFT)  /* 0x00001F00 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_SHIFT   (13U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_MASK    (0x3U << PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_SHIFT)   /* 0x00006000 */
#define PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_SHIFT   (15U)
#define PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_MASK    (0x1U << PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_SHIFT)   /* 0x00008000 */
/* PMUCLKSEL_CON01 */
#define PMUCRU_PMUCLKSEL_CON01_OFFSET                      (0x304U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_MASK       (0x1FU << PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_SHIFT)     /* 0x0000001F */
/* PMUCLKSEL_CON06 */
#define PMUCRU_PMUCLKSEL_CON06_OFFSET                      (0x318U)
#define PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_MASK       (0xFFFFFFFFU << PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* PMUCLKSEL_CON07 */
#define PMUCRU_PMUCLKSEL_CON07_OFFSET                      (0x31CU)
#define PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_MASK       (0x3U << PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_SHIFT)      /* 0x00000003 */
#define PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_SHIFT      (2U)
#define PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_MASK       (0x1U << PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_SHIFT)      /* 0x00000004 */
/* PMUGATE_CON00 */
#define PMUCRU_PMUGATE_CON00_OFFSET                        (0x800U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_SHIFT        (1U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_SHIFT)        /* 0x00000002 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_SHIFT        (2U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_SHIFT)        /* 0x00000004 */
#define PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_SHIFT            (3U)
#define PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_MASK             (0x1U << PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_SHIFT)            /* 0x00000008 */
#define PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_SHIFT             (4U)
#define PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_SHIFT)             /* 0x00000010 */
#define PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_SHIFT      (5U)
#define PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_SHIFT)      /* 0x00000020 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_SHIFT         (6U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_SHIFT)         /* 0x00000040 */
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_SHIFT         (7U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_SHIFT)         /* 0x00000080 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_SHIFT        (8U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_SHIFT)        /* 0x00000100 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_SHIFT          (9U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_SHIFT)          /* 0x00000200 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_SHIFT      (13U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_SHIFT)      /* 0x00002000 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_SHIFT     (14U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_SHIFT)     /* 0x00004000 */
#define PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_SHIFT (15U)
#define PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_MASK (0x1U << PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_SHIFT) /* 0x00008000 */
/* PMUGATE_CON01 */
#define PMUCRU_PMUGATE_CON01_OFFSET                        (0x804U)
#define PMUCRU_PMUGATE_CON01_CLK_PMU_EN_SHIFT              (0U)
#define PMUCRU_PMUGATE_CON01_CLK_PMU_EN_MASK               (0x1U << PMUCRU_PMUGATE_CON01_CLK_PMU_EN_SHIFT)              /* 0x00000001 */
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_SHIFT             (1U)
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_SHIFT)             /* 0x00000002 */
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_SHIFT       (2U)
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_MASK        (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_SHIFT)       /* 0x00000004 */
#define PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_SHIFT      (3U)
#define PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_SHIFT)      /* 0x00000008 */
#define PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_SHIFT         (4U)
#define PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_SHIFT)         /* 0x00000010 */
#define PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_SHIFT        (5U)
#define PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_SHIFT)        /* 0x00000020 */
#define PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_SHIFT         (14U)
#define PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_SHIFT)         /* 0x00004000 */
#define PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_SHIFT    (15U)
#define PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_SHIFT)    /* 0x00008000 */
/* PMUGATE_CON02 */
#define PMUCRU_PMUGATE_CON02_OFFSET                        (0x808U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_SHIFT    (0U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_SHIFT)    /* 0x00000001 */
#define PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_SHIFT     (1U)
#define PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_SHIFT)     /* 0x00000002 */
#define PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_SHIFT (2U)
#define PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_SHIFT) /* 0x00000004 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_SHIFT         (3U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_SHIFT)         /* 0x00000008 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_SHIFT         (4U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_SHIFT)         /* 0x00000010 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_SHIFT         (5U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_SHIFT)         /* 0x00000020 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_SHIFT        (6U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_SHIFT)        /* 0x00000040 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_SHIFT         (8U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_SHIFT)         /* 0x00000100 */
#define PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_SHIFT         (9U)
#define PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_SHIFT)         /* 0x00000200 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_SHIFT     (10U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_SHIFT)     /* 0x00000400 */
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_SHIFT (11U)
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_MASK (0x1U << PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_SHIFT) /* 0x00000800 */
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_SHIFT (12U)
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_SHIFT) /* 0x00001000 */
#define PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_SHIFT           (13U)
#define PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_SHIFT)           /* 0x00002000 */
/* PMUSOFTRST_CON00 */
#define PMUCRU_PMUSOFTRST_CON00_OFFSET                     (0xA00U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_SHIFT         (3U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_MASK          (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_SHIFT)         /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_SHIFT          (4U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_MASK           (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_SHIFT)          /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_SHIFT      (6U)
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_SHIFT)      /* 0x00000040 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_SHIFT      (7U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_SHIFT)      /* 0x00000080 */
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_SHIFT     (8U)
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_SHIFT)     /* 0x00000100 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_SHIFT       (9U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_SHIFT)       /* 0x00000200 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_SHIFT (10U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_SHIFT) /* 0x00000400 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_SHIFT   (11U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_MASK    (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_SHIFT)   /* 0x00000800 */
#define PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_SHIFT  (12U)
#define PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_SHIFT)  /* 0x00001000 */
/* PMUSOFTRST_CON01 */
#define PMUCRU_PMUSOFTRST_CON01_OFFSET                     (0xA04U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_SHIFT    (2U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_MASK     (0x1U << PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_SHIFT)    /* 0x00000004 */
#define PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_SHIFT   (3U)
#define PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_MASK    (0x1U << PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_SHIFT)   /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_SHIFT      (4U)
#define PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_SHIFT)      /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_SHIFT     (5U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_SHIFT)     /* 0x00000020 */
#define PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_SHIFT (15U)
#define PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_SHIFT) /* 0x00008000 */
/* PMUSOFTRST_CON02 */
#define PMUCRU_PMUSOFTRST_CON02_OFFSET                     (0xA08U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_SHIFT (0U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_SHIFT) /* 0x00000001 */
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_SHIFT  (1U)
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_SHIFT)  /* 0x00000002 */
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_SHIFT (2U)
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_MASK (0x1U << PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_SHIFT) /* 0x00000004 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_SHIFT      (3U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_SHIFT)      /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_SHIFT      (4U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_SHIFT)      /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_SHIFT      (5U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_SHIFT)      /* 0x00000020 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_SHIFT     (6U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_SHIFT)     /* 0x00000040 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_SHIFT (7U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_MASK (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_SHIFT) /* 0x00000080 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_SHIFT      (8U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_SHIFT)      /* 0x00000100 */
#define PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_SHIFT      (9U)
#define PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_SHIFT)      /* 0x00000200 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_SHIFT  (10U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_SHIFT)  /* 0x00000400 */
/******************************************CRU*******************************************/
/* APLL_CON0 */
#define CRU_APLL_CON0_OFFSET                               (0x0U)
#define CRU_APLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_APLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_APLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_APLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_APLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_APLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_APLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_APLL_CON0_BYPASS_MASK                          (0x1U << CRU_APLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* APLL_CON1 */
#define CRU_APLL_CON1_OFFSET                               (0x4U)
#define CRU_APLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_APLL_CON1_REFDIV_MASK                          (0x3FU << CRU_APLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_APLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_APLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_APLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_APLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_APLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_APLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_APLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_APLL_CON1_DSMPD_MASK                           (0x1U << CRU_APLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_APLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_APLL_CON1_PLLPD0_MASK                          (0x1U << CRU_APLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_APLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_APLL_CON1_PLLPD1_MASK                          (0x1U << CRU_APLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_APLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_APLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_APLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* APLL_CON2 */
#define CRU_APLL_CON2_OFFSET                               (0x8U)
#define CRU_APLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_APLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_APLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_APLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_APLL_CON2_DACPD_MASK                           (0x1U << CRU_APLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_APLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_APLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_APLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_APLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_APLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_APLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_APLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_APLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_APLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* APLL_CON3 */
#define CRU_APLL_CON3_OFFSET                               (0xCU)
#define CRU_APLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_APLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_APLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_APLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_APLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_APLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_APLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_APLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_APLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_APLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_APLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_APLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_APLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_APLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_APLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_APLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_APLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_APLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* APLL_CON4 */
#define CRU_APLL_CON4_OFFSET                               (0x10U)
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x20U)
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x24U)
#define CRU_CPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_CPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_CPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_CPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_CPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_CPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_CPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_CPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_CPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_CPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_CPLL_CON1_DSMPD_MASK                           (0x1U << CRU_CPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_CPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_CPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_CPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_CPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_CPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_CPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_CPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_CPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_CPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* CPLL_CON2 */
#define CRU_CPLL_CON2_OFFSET                               (0x28U)
#define CRU_CPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_CPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_CPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_CPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_CPLL_CON2_DACPD_MASK                           (0x1U << CRU_CPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_CPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_CPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_CPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_CPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_CPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_CPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_CPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_CPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_CPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* CPLL_CON3 */
#define CRU_CPLL_CON3_OFFSET                               (0x2CU)
#define CRU_CPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_CPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_CPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_CPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_CPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_CPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_CPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_CPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_CPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_CPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_CPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_CPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_CPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_CPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_CPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* CPLL_CON4 */
#define CRU_CPLL_CON4_OFFSET                               (0x30U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* DPLL_CON0 */
#define CRU_DPLL_CON0_OFFSET                               (0x40U)
#define CRU_DPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_DPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_DPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_DPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_DPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_DPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_DPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_DPLL_CON0_BYPASS_MASK                          (0x1U << CRU_DPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* DPLL_CON1 */
#define CRU_DPLL_CON1_OFFSET                               (0x44U)
#define CRU_DPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_DPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_DPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_DPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_DPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_DPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_DPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_DPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_DPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_DPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_DPLL_CON1_DSMPD_MASK                           (0x1U << CRU_DPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_DPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_DPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_DPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_DPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_DPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_DPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_DPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_DPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_DPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* DPLL_CON2 */
#define CRU_DPLL_CON2_OFFSET                               (0x48U)
#define CRU_DPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_DPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_DPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_DPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_DPLL_CON2_DACPD_MASK                           (0x1U << CRU_DPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_DPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_DPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_DPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_DPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_DPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_DPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_DPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_DPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_DPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* DPLL_CON3 */
#define CRU_DPLL_CON3_OFFSET                               (0x4CU)
#define CRU_DPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_DPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_DPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_DPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_DPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_DPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_DPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_DPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_DPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_DPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_DPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_DPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_DPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_DPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_DPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* DPLL_CON4 */
#define CRU_DPLL_CON4_OFFSET                               (0x50U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* GPLL_CON0 */
#define CRU_GPLL_CON0_OFFSET                               (0x60U)
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_OFFSET                               (0x64U)
#define CRU_GPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_GPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_GPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_GPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_GPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_GPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_GPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_GPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_GPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_GPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_GPLL_CON1_DSMPD_MASK                           (0x1U << CRU_GPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_GPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_GPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_GPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_GPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_GPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_GPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_GPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* GPLL_CON2 */
#define CRU_GPLL_CON2_OFFSET                               (0x68U)
#define CRU_GPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_GPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_GPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_GPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_GPLL_CON2_DACPD_MASK                           (0x1U << CRU_GPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_GPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_GPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_GPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_GPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* GPLL_CON3 */
#define CRU_GPLL_CON3_OFFSET                               (0x6CU)
#define CRU_GPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_GPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_GPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_GPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_GPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_GPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_GPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_GPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* GPLL_CON4 */
#define CRU_GPLL_CON4_OFFSET                               (0x70U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* SSGTBL0_3 */
#define CRU_SSGTBL0_3_OFFSET                               (0x140U)
#define CRU_SSGTBL0_3_SSGTBL0_3_SHIFT                      (0U)
#define CRU_SSGTBL0_3_SSGTBL0_3_MASK                       (0xFFFFFFFFU << CRU_SSGTBL0_3_SSGTBL0_3_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL4_7 */
#define CRU_SSGTBL4_7_OFFSET                               (0x144U)
#define CRU_SSGTBL4_7_SSGTBL4_7_SHIFT                      (0U)
#define CRU_SSGTBL4_7_SSGTBL4_7_MASK                       (0xFFFFFFFFU << CRU_SSGTBL4_7_SSGTBL4_7_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL8_11 */
#define CRU_SSGTBL8_11_OFFSET                              (0x148U)
#define CRU_SSGTBL8_11_SSGTBL8_11_SHIFT                    (0U)
#define CRU_SSGTBL8_11_SSGTBL8_11_MASK                     (0xFFFFFFFFU << CRU_SSGTBL8_11_SSGTBL8_11_SHIFT)             /* 0xFFFFFFFF */
/* SSGTBL12_15 */
#define CRU_SSGTBL12_15_OFFSET                             (0x14CU)
#define CRU_SSGTBL12_15_SSGTBL12_15_SHIFT                  (0U)
#define CRU_SSGTBL12_15_SSGTBL12_15_MASK                   (0xFFFFFFFFU << CRU_SSGTBL12_15_SSGTBL12_15_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL16_19 */
#define CRU_SSGTBL16_19_OFFSET                             (0x150U)
#define CRU_SSGTBL16_19_SSGTBL16_19_SHIFT                  (0U)
#define CRU_SSGTBL16_19_SSGTBL16_19_MASK                   (0xFFFFFFFFU << CRU_SSGTBL16_19_SSGTBL16_19_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL20_23 */
#define CRU_SSGTBL20_23_OFFSET                             (0x154U)
#define CRU_SSGTBL20_23_SSGTBL20_23_SHIFT                  (0U)
#define CRU_SSGTBL20_23_SSGTBL20_23_MASK                   (0xFFFFFFFFU << CRU_SSGTBL20_23_SSGTBL20_23_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL24_27 */
#define CRU_SSGTBL24_27_OFFSET                             (0x158U)
#define CRU_SSGTBL24_27_SSGTBL24_27_SHIFT                  (0U)
#define CRU_SSGTBL24_27_SSGTBL24_27_MASK                   (0xFFFFFFFFU << CRU_SSGTBL24_27_SSGTBL24_27_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL28_31 */
#define CRU_SSGTBL28_31_OFFSET                             (0x15CU)
#define CRU_SSGTBL28_31_SSGTBL28_31_SHIFT                  (0U)
#define CRU_SSGTBL28_31_SSGTBL28_31_MASK                   (0xFFFFFFFFU << CRU_SSGTBL28_31_SSGTBL28_31_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL32_35 */
#define CRU_SSGTBL32_35_OFFSET                             (0x160U)
#define CRU_SSGTBL32_35_SSGTBL32_35_SHIFT                  (0U)
#define CRU_SSGTBL32_35_SSGTBL32_35_MASK                   (0xFFFFFFFFU << CRU_SSGTBL32_35_SSGTBL32_35_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL36_39 */
#define CRU_SSGTBL36_39_OFFSET                             (0x164U)
#define CRU_SSGTBL36_39_SSGTBL36_39_SHIFT                  (0U)
#define CRU_SSGTBL36_39_SSGTBL36_39_MASK                   (0xFFFFFFFFU << CRU_SSGTBL36_39_SSGTBL36_39_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL40_43 */
#define CRU_SSGTBL40_43_OFFSET                             (0x168U)
#define CRU_SSGTBL40_43_SSGTBL40_43_SHIFT                  (0U)
#define CRU_SSGTBL40_43_SSGTBL40_43_MASK                   (0xFFFFFFFFU << CRU_SSGTBL40_43_SSGTBL40_43_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL44_47 */
#define CRU_SSGTBL44_47_OFFSET                             (0x16CU)
#define CRU_SSGTBL44_47_SSGTBL44_47_SHIFT                  (0U)
#define CRU_SSGTBL44_47_SSGTBL44_47_MASK                   (0xFFFFFFFFU << CRU_SSGTBL44_47_SSGTBL44_47_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL48_51 */
#define CRU_SSGTBL48_51_OFFSET                             (0x170U)
#define CRU_SSGTBL48_51_SSGTBL48_51_SHIFT                  (0U)
#define CRU_SSGTBL48_51_SSGTBL48_51_MASK                   (0xFFFFFFFFU << CRU_SSGTBL48_51_SSGTBL48_51_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL52_55 */
#define CRU_SSGTBL52_55_OFFSET                             (0x174U)
#define CRU_SSGTBL52_55_SSGTBL52_55_SHIFT                  (0U)
#define CRU_SSGTBL52_55_SSGTBL52_55_MASK                   (0xFFFFFFFFU << CRU_SSGTBL52_55_SSGTBL52_55_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL56_59 */
#define CRU_SSGTBL56_59_OFFSET                             (0x178U)
#define CRU_SSGTBL56_59_SSGTBL56_59_SHIFT                  (0U)
#define CRU_SSGTBL56_59_SSGTBL56_59_MASK                   (0xFFFFFFFFU << CRU_SSGTBL56_59_SSGTBL56_59_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL60_63 */
#define CRU_SSGTBL60_63_OFFSET                             (0x17CU)
#define CRU_SSGTBL60_63_SSGTBL60_63_SHIFT                  (0U)
#define CRU_SSGTBL60_63_SSGTBL60_63_MASK                   (0xFFFFFFFFU << CRU_SSGTBL60_63_SSGTBL60_63_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL64_67 */
#define CRU_SSGTBL64_67_OFFSET                             (0x180U)
#define CRU_SSGTBL64_67_SSGTBL64_67_SHIFT                  (0U)
#define CRU_SSGTBL64_67_SSGTBL64_67_MASK                   (0xFFFFFFFFU << CRU_SSGTBL64_67_SSGTBL64_67_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL68_71 */
#define CRU_SSGTBL68_71_OFFSET                             (0x184U)
#define CRU_SSGTBL68_71_SSGTBL68_71_SHIFT                  (0U)
#define CRU_SSGTBL68_71_SSGTBL68_71_MASK                   (0xFFFFFFFFU << CRU_SSGTBL68_71_SSGTBL68_71_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL72_75 */
#define CRU_SSGTBL72_75_OFFSET                             (0x188U)
#define CRU_SSGTBL72_75_SSGTBL72_75_SHIFT                  (0U)
#define CRU_SSGTBL72_75_SSGTBL72_75_MASK                   (0xFFFFFFFFU << CRU_SSGTBL72_75_SSGTBL72_75_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL76_79 */
#define CRU_SSGTBL76_79_OFFSET                             (0x18CU)
#define CRU_SSGTBL76_79_SSGTBL76_79_SHIFT                  (0U)
#define CRU_SSGTBL76_79_SSGTBL76_79_MASK                   (0xFFFFFFFFU << CRU_SSGTBL76_79_SSGTBL76_79_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL80_83 */
#define CRU_SSGTBL80_83_OFFSET                             (0x190U)
#define CRU_SSGTBL80_83_SSGTBL80_83_SHIFT                  (0U)
#define CRU_SSGTBL80_83_SSGTBL80_83_MASK                   (0xFFFFFFFFU << CRU_SSGTBL80_83_SSGTBL80_83_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL84_87 */
#define CRU_SSGTBL84_87_OFFSET                             (0x194U)
#define CRU_SSGTBL84_87_SSGTBL84_87_SHIFT                  (0U)
#define CRU_SSGTBL84_87_SSGTBL84_87_MASK                   (0xFFFFFFFFU << CRU_SSGTBL84_87_SSGTBL84_87_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL88_91 */
#define CRU_SSGTBL88_91_OFFSET                             (0x198U)
#define CRU_SSGTBL88_91_SSGTBL88_91_SHIFT                  (0U)
#define CRU_SSGTBL88_91_SSGTBL88_91_MASK                   (0xFFFFFFFFU << CRU_SSGTBL88_91_SSGTBL88_91_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL92_95 */
#define CRU_SSGTBL92_95_OFFSET                             (0x19CU)
#define CRU_SSGTBL92_95_SSGTBL92_95_SHIFT                  (0U)
#define CRU_SSGTBL92_95_SSGTBL92_95_MASK                   (0xFFFFFFFFU << CRU_SSGTBL92_95_SSGTBL92_95_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL96_99 */
#define CRU_SSGTBL96_99_OFFSET                             (0x1A0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_SHIFT                  (0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_MASK                   (0xFFFFFFFFU << CRU_SSGTBL96_99_SSGTBL96_99_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL100_103 */
#define CRU_SSGTBL100_103_OFFSET                           (0x1A4U)
#define CRU_SSGTBL100_103_SSGTBL100_103_SHIFT              (0U)
#define CRU_SSGTBL100_103_SSGTBL100_103_MASK               (0xFFFFFFFFU << CRU_SSGTBL100_103_SSGTBL100_103_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL104_107 */
#define CRU_SSGTBL104_107_OFFSET                           (0x1A8U)
#define CRU_SSGTBL104_107_SSGTBL104_107_SHIFT              (0U)
#define CRU_SSGTBL104_107_SSGTBL104_107_MASK               (0xFFFFFFFFU << CRU_SSGTBL104_107_SSGTBL104_107_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL108_111 */
#define CRU_SSGTBL108_111_OFFSET                           (0x1ACU)
#define CRU_SSGTBL108_111_SSGTBL108_111_SHIFT              (0U)
#define CRU_SSGTBL108_111_SSGTBL108_111_MASK               (0xFFFFFFFFU << CRU_SSGTBL108_111_SSGTBL108_111_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL112_115 */
#define CRU_SSGTBL112_115_OFFSET                           (0x1B0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_SHIFT              (0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_MASK               (0xFFFFFFFFU << CRU_SSGTBL112_115_SSGTBL112_115_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL116_119 */
#define CRU_SSGTBL116_119_OFFSET                           (0x1B4U)
#define CRU_SSGTBL116_119_SSGTBL116_119_SHIFT              (0U)
#define CRU_SSGTBL116_119_SSGTBL116_119_MASK               (0xFFFFFFFFU << CRU_SSGTBL116_119_SSGTBL116_119_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL120_123 */
#define CRU_SSGTBL120_123_OFFSET                           (0x1B8U)
#define CRU_SSGTBL120_123_SSGTBL120_123_SHIFT              (0U)
#define CRU_SSGTBL120_123_SSGTBL120_123_MASK               (0xFFFFFFFFU << CRU_SSGTBL120_123_SSGTBL120_123_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL124_127 */
#define CRU_SSGTBL124_127_OFFSET                           (0x1BCU)
#define CRU_SSGTBL124_127_SSGTBL124_127_SHIFT              (0U)
#define CRU_SSGTBL124_127_SSGTBL124_127_MASK               (0xFFFFFFFFU << CRU_SSGTBL124_127_SSGTBL124_127_SHIFT)       /* 0xFFFFFFFF */
/* MODE_CON00 */
#define CRU_MODE_CON00_OFFSET                              (0x280U)
#define CRU_MODE_CON00_CLK_APLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON00_CLK_APLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_APLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT                 (2U)
#define CRU_MODE_CON00_CLK_CPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT)                 /* 0x0000000C */
#define CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON00_CLK_GPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)                 /* 0x00000030 */
/* CLKSEL_CON00 */
#define CRU_CLKSEL_CON00_OFFSET                            (0x300U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_MASK       (0x1FU << CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_SHIFT)     /* 0x0000001F */
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_SHIFT      (5U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_MASK       (0x1U << CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_SHIFT)      /* 0x00000020 */
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON01 */
#define CRU_CLKSEL_CON01_OFFSET                            (0x304U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON02 */
#define CRU_CLKSEL_CON02_OFFSET                            (0x308U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON03 */
#define CRU_CLKSEL_CON03_OFFSET                            (0x30CU)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_OFFSET                            (0x310U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_OFFSET                            (0x314U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_SHIFT)           /* 0x00000020 */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_OFFSET                            (0x318U)
#define CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON07 */
#define CRU_CLKSEL_CON07_OFFSET                            (0x31CU)
#define CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_OFFSET                            (0x320U)
#define CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_OFFSET                            (0x324U)
#define CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_OFFSET                            (0x328U)
#define CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_OFFSET                            (0x32CU)
#define CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_OFFSET                            (0x330U)
#define CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_OFFSET                            (0x334U)
#define CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_OFFSET                            (0x338U)
#define CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_OFFSET                            (0x33CU)
#define CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_OFFSET                            (0x340U)
#define CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_OFFSET                            (0x344U)
#define CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT     (2U)
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT)    /* 0x0000007C */
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT     (7U)
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT)     /* 0x00000080 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_OFFSET                            (0x348U)
#define CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_OFFSET                            (0x34CU)
#define CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_MASK (0x3U << CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_SHIFT) /* 0x00000003 */
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT     (2U)
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT)    /* 0x0000007C */
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT     (7U)
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT)     /* 0x00000080 */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_OFFSET                            (0x350U)
#define CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_OFFSET                            (0x354U)
#define CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_MASK (0x3U << CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_SHIFT) /* 0x00000003 */
#define CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_SHIFT        (2U)
#define CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_SHIFT)        /* 0x0000000C */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_OFFSET                            (0x35CU)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_SHIFT            (3U)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_MASK             (0x1FU << CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_SHIFT)           /* 0x000000F8 */
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_SHIFT            (8U)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_MASK             (0x1U << CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_SHIFT)            /* 0x00000100 */
#define CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_SHIFT        (9U)
#define CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_MASK         (0x1FU << CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_SHIFT)       /* 0x00003E00 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_OFFSET                            (0x360U)
#define CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_MASK         (0x1FU << CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_SHIFT)           /* 0x00000060 */
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_SHIFT    (7U)
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_MASK     (0x1FU << CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_SHIFT)   /* 0x00000F80 */
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_SHIFT    (12U)
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_MASK     (0x3U << CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_SHIFT)    /* 0x00003000 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_OFFSET                            (0x364U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_MASK        (0x1FU << CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_MASK        (0x1U << CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_SHIFT)       /* 0x00000080 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_OFFSET                            (0x368U)
#define CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_OFFSET                            (0x36CU)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_MASK        (0x3U << CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_MASK        (0x1FU << CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_MASK        (0x1U << CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_SHIFT)       /* 0x00000080 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_OFFSET                            (0x370U)
#define CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_OFFSET                            (0x374U)
#define CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_MASK        (0x3U << CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_SHIFT        (2U)
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_MASK         (0x1FU << CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_SHIFT)       /* 0x0000007C */
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_MASK         (0x1U << CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_SHIFT)        /* 0x00000080 */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_OFFSET                            (0x378U)
#define CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_OFFSET                            (0x37CU)
#define CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_SHIFT)        /* 0x00000003 */
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_SHIFT        (2U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_MASK         (0x1FU << CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_SHIFT)       /* 0x0000007C */
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_MASK         (0x1U << CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_SHIFT)        /* 0x00000080 */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_OFFSET                            (0x380U)
#define CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_OFFSET                            (0x384U)
#define CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_SHIFT)        /* 0x00000003 */
/* GATE_CON00 */
#define CRU_GATE_CON00_OFFSET                              (0x800U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT         (1U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_MASK          (0x1U << CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT)         /* 0x00000002 */
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT        (2U)
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT)        /* 0x00000004 */
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT        (3U)
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT)        /* 0x00000008 */
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT        (4U)
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT)        /* 0x00000010 */
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT        (5U)
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT)        /* 0x00000020 */
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT        (6U)
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT)        /* 0x00000040 */
#define CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_SHIFT        (7U)
#define CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_SHIFT)        /* 0x00000080 */
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT        (8U)
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT)        /* 0x00000100 */
#define CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_SHIFT        (9U)
#define CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_SHIFT)        /* 0x00000200 */
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT        (10U)
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT)        /* 0x00000400 */
#define CRU_GATE_CON00_CLK_UART0_EN_SHIFT                  (11U)
#define CRU_GATE_CON00_CLK_UART0_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_UART0_EN_SHIFT)                  /* 0x00000800 */
#define CRU_GATE_CON00_CLK_UART0_FRAC_EN_SHIFT             (12U)
#define CRU_GATE_CON00_CLK_UART0_FRAC_EN_MASK              (0x1U << CRU_GATE_CON00_CLK_UART0_FRAC_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON00_SCLK_UART0_EN_SHIFT                 (13U)
#define CRU_GATE_CON00_SCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON00_SCLK_UART0_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON00_CLK_UART1_EN_SHIFT                  (14U)
#define CRU_GATE_CON00_CLK_UART1_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_UART1_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON00_CLK_UART1_FRAC_EN_SHIFT             (15U)
#define CRU_GATE_CON00_CLK_UART1_FRAC_EN_MASK              (0x1U << CRU_GATE_CON00_CLK_UART1_FRAC_EN_SHIFT)             /* 0x00008000 */
/* GATE_CON01 */
#define CRU_GATE_CON01_OFFSET                              (0x804U)
#define CRU_GATE_CON01_SCLK_UART1_EN_SHIFT                 (0U)
#define CRU_GATE_CON01_SCLK_UART1_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART1_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON01_CLK_UART2_EN_SHIFT                  (1U)
#define CRU_GATE_CON01_CLK_UART2_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART2_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON01_CLK_UART2_FRAC_EN_SHIFT             (2U)
#define CRU_GATE_CON01_CLK_UART2_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART2_FRAC_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON01_SCLK_UART2_EN_SHIFT                 (3U)
#define CRU_GATE_CON01_SCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART2_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON01_CLK_UART3_EN_SHIFT                  (4U)
#define CRU_GATE_CON01_CLK_UART3_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART3_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON01_CLK_UART3_FRAC_EN_SHIFT             (5U)
#define CRU_GATE_CON01_CLK_UART3_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART3_FRAC_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON01_SCLK_UART3_EN_SHIFT                 (6U)
#define CRU_GATE_CON01_SCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART3_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON01_CLK_UART4_EN_SHIFT                  (7U)
#define CRU_GATE_CON01_CLK_UART4_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART4_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON01_CLK_UART4_FRAC_EN_SHIFT             (8U)
#define CRU_GATE_CON01_CLK_UART4_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART4_FRAC_EN_SHIFT)             /* 0x00000100 */
#define CRU_GATE_CON01_SCLK_UART4_EN_SHIFT                 (9U)
#define CRU_GATE_CON01_SCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART4_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON01_CLK_UART5_EN_SHIFT                  (10U)
#define CRU_GATE_CON01_CLK_UART5_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART5_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON01_CLK_UART5_FRAC_EN_SHIFT             (11U)
#define CRU_GATE_CON01_CLK_UART5_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART5_FRAC_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON01_SCLK_UART5_EN_SHIFT                 (12U)
#define CRU_GATE_CON01_SCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART5_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_SHIFT            (13U)
#define CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_MASK             (0x1U << CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_SHIFT)            /* 0x00002000 */
#define CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_SHIFT       (14U)
#define CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_MASK        (0x1U << CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_SHIFT)       /* 0x00004000 */
#define CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_SHIFT       (15U)
#define CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_MASK        (0x1U << CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_SHIFT)       /* 0x00008000 */
/* GATE_CON02 */
#define CRU_GATE_CON02_OFFSET                              (0x808U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_SHIFT            (0U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_MASK             (0x1U << CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_SHIFT       (1U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_MASK        (0x1U << CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_SHIFT)       /* 0x00000002 */
#define CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_SHIFT           (2U)
#define CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_MASK            (0x1U << CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON02_DCLK_VOP_SRC_EN_SHIFT               (6U)
#define CRU_GATE_CON02_DCLK_VOP_SRC_EN_MASK                (0x1U << CRU_GATE_CON02_DCLK_VOP_SRC_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_SHIFT           (7U)
#define CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_MASK            (0x1U << CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_SHIFT           (8U)
#define CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_MASK            (0x1U << CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_SHIFT)           /* 0x00000100 */
#define CRU_GATE_CON02_PCLK_TOP_ROOT_EN_SHIFT              (9U)
#define CRU_GATE_CON02_PCLK_TOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON02_PCLK_TOP_ROOT_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON02_PCLK_CRU_EN_SHIFT                   (10U)
#define CRU_GATE_CON02_PCLK_CRU_EN_MASK                    (0x1U << CRU_GATE_CON02_PCLK_CRU_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON02_PCLK_CRU_BIU_EN_SHIFT               (11U)
#define CRU_GATE_CON02_PCLK_CRU_BIU_EN_MASK                (0x1U << CRU_GATE_CON02_PCLK_CRU_BIU_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT                (12U)
#define CRU_GATE_CON02_CLK_TESTOUT_EN_MASK                 (0x1U << CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT)                /* 0x00001000 */
#define CRU_GATE_CON02_CLK_APLLTEST_EN_SHIFT               (13U)
#define CRU_GATE_CON02_CLK_APLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_APLLTEST_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON02_CLK_DPLLTEST_EN_SHIFT               (14U)
#define CRU_GATE_CON02_CLK_DPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_DPLLTEST_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON02_CLK_CPLLTEST_EN_SHIFT               (15U)
#define CRU_GATE_CON02_CLK_CPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_CPLLTEST_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON03 */
#define CRU_GATE_CON03_OFFSET                              (0x80CU)
#define CRU_GATE_CON03_CLK_GPLLTEST_EN_SHIFT               (0U)
#define CRU_GATE_CON03_CLK_GPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON03_CLK_GPLLTEST_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_SHIFT          (4U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_SHIFT         (5U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_MASK          (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_SHIFT)         /* 0x00000020 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_SHIFT          (6U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_SHIFT)          /* 0x00000040 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_SHIFT          (7U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_SHIFT         (8U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_MASK          (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_SHIFT)         /* 0x00000100 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_SHIFT          (9U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_SHIFT           (10U)
#define CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_SHIFT          (11U)
#define CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_SHIFT           (12U)
#define CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_SHIFT           (13U)
#define CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_SHIFT          (14U)
#define CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_SHIFT)          /* 0x00004000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_SHIFT           (15U)
#define CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_OFFSET                           (0xA08U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_SHIFT        (7U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_MASK         (0x1U << CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_SHIFT        (8U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_MASK         (0x1U << CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_SHIFT)        /* 0x00000100 */
#define CRU_SOFTRST_CON02_PRESETN_CRU_SHIFT                (10U)
#define CRU_SOFTRST_CON02_PRESETN_CRU_MASK                 (0x1U << CRU_SOFTRST_CON02_PRESETN_CRU_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON02_PRESETN_CRU_BIU_SHIFT            (11U)
#define CRU_SOFTRST_CON02_PRESETN_CRU_BIU_MASK             (0x1U << CRU_SOFTRST_CON02_PRESETN_CRU_BIU_SHIFT)            /* 0x00000800 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0xC00U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
#define CRU_GLB_CNT_TH_RESERVED_SHIFT                      (16U)
#define CRU_GLB_CNT_TH_RESERVED_MASK                       (0xFFFFU << CRU_GLB_CNT_TH_RESERVED_SHIFT)                   /* 0xFFFF0000 */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_OFFSET                              (0xC04U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT                (0U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT)                /* 0x00000001 */
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT                (1U)
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT)                /* 0x00000002 */
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT          (2U)
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000004 */
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT          (3U)
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000008 */
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT            (4U)
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT)            /* 0x00000010 */
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT            (5U)
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT)            /* 0x00000020 */
#define CRU_GLB_RST_ST_GLBRST_WDT_RST_SHIFT                (6U)
#define CRU_GLB_RST_ST_GLBRST_WDT_RST_MASK                 (0x1U << CRU_GLB_RST_ST_GLBRST_WDT_RST_SHIFT)                /* 0x00000040 */
#define CRU_GLB_RST_ST_WDT_SRC_ST_SHIFT                    (11U)
#define CRU_GLB_RST_ST_WDT_SRC_ST_MASK                     (0x1U << CRU_GLB_RST_ST_WDT_SRC_ST_SHIFT)                    /* 0x00000800 */
/* GLB_SRST_FST */
#define CRU_GLB_SRST_FST_OFFSET                            (0xC08U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT                (0U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_MASK                 (0xFFFFU << CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT)             /* 0x0000FFFF */
/* GLB_SRST_SND */
#define CRU_GLB_SRST_SND_OFFSET                            (0xC0CU)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT                (0U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_MASK                 (0xFFFFU << CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT)             /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0xC10U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT          (0U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_MASK           (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT)          /* 0x00000001 */
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_SHIFT            (1U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_MASK             (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_SHIFT)            /* 0x00000002 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT            (2U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT)            /* 0x00000004 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT              (3U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT)              /* 0x00000008 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT                   (6U)
#define CRU_GLB_RST_CON_CRU_WDT_EN_MASK                    (0x1U << CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT                  (11U)
#define CRU_GLB_RST_CON_CRU_WDT_CON_MASK                   (0x1U << CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT)                  /* 0x00000800 */
/* SDIO_CON0 */
#define CRU_SDIO_CON0_OFFSET                               (0xC14U)
#define CRU_SDIO_CON0_SDIO_CON0_SHIFT                      (0U)
#define CRU_SDIO_CON0_SDIO_CON0_MASK                       (0xFFFFU << CRU_SDIO_CON0_SDIO_CON0_SHIFT)                   /* 0x0000FFFF */
/* SDIO_CON1 */
#define CRU_SDIO_CON1_OFFSET                               (0xC18U)
#define CRU_SDIO_CON1_SDIO_CON0_SHIFT                      (0U)
#define CRU_SDIO_CON1_SDIO_CON0_MASK                       (0xFFFFU << CRU_SDIO_CON1_SDIO_CON0_SHIFT)                   /* 0x0000FFFF */
/* SDMMC_CON0 */
#define CRU_SDMMC_CON0_OFFSET                              (0xC1CU)
#define CRU_SDMMC_CON0_INIT_STATE_SHIFT                    (0U)
#define CRU_SDMMC_CON0_INIT_STATE_MASK                     (0x1U << CRU_SDMMC_CON0_INIT_STATE_SHIFT)                    /* 0x00000001 */
#define CRU_SDMMC_CON0_DRV_DEGREE_SHIFT                    (1U)
#define CRU_SDMMC_CON0_DRV_DEGREE_MASK                     (0x3U << CRU_SDMMC_CON0_DRV_DEGREE_SHIFT)                    /* 0x00000006 */
#define CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT                  (3U)
#define CRU_SDMMC_CON0_DRV_DELAYNUM_MASK                   (0xFFU << CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT)                 /* 0x000007F8 */
#define CRU_SDMMC_CON0_DRV_SEL_SHIFT                       (11U)
#define CRU_SDMMC_CON0_DRV_SEL_MASK                        (0x1U << CRU_SDMMC_CON0_DRV_SEL_SHIFT)                       /* 0x00000800 */
/* SDMMC_CON1 */
#define CRU_SDMMC_CON1_OFFSET                              (0xC20U)
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT                 (0U)
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_MASK                  (0x3U << CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT)                 /* 0x00000003 */
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT               (2U)
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_MASK                (0xFFU << CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT)              /* 0x000003FC */
#define CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT                    (10U)
#define CRU_SDMMC_CON1_SAMPLE_SEL_MASK                     (0x1U << CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT)                    /* 0x00000400 */
/* EMMC_CON0 */
#define CRU_EMMC_CON0_OFFSET                               (0xC24U)
#define CRU_EMMC_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_EMMC_CON0_INIT_STATE_MASK                      (0x1U << CRU_EMMC_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_EMMC_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_EMMC_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON0_DRV_SEL_MASK                         (0x1U << CRU_EMMC_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON1 */
#define CRU_EMMC_CON1_OFFSET                               (0xC28U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT                  (0U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_MASK                   (0x3U << CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT)                  /* 0x00000003 */
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT                (2U)
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_MASK                 (0xFFU << CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT)               /* 0x000003FC */
#define CRU_EMMC_CON1_SAMPLE_SEL_SHIFT                     (10U)
#define CRU_EMMC_CON1_SAMPLE_SEL_MASK                      (0x1U << CRU_EMMC_CON1_SAMPLE_SEL_SHIFT)                     /* 0x00000400 */
/****************************************PERICRU*****************************************/
/* PERICLKSEL_CON01 */
#define PERICRU_PERICLKSEL_CON01_OFFSET                    (0x304U)
#define PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_SHIFT  (0U)
#define PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_SHIFT)  /* 0x00000003 */
#define PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_SHIFT  (2U)
#define PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_SHIFT)  /* 0x0000000C */
#define PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_SHIFT  (4U)
#define PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_SHIFT)  /* 0x00000030 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_SHIFT        (8U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_SHIFT)        /* 0x00000300 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_SHIFT        (12U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_SHIFT)        /* 0x00003000 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_SHIFT        (14U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_SHIFT)        /* 0x0000C000 */
/* PERICLKSEL_CON02 */
#define PERICRU_PERICLKSEL_CON02_OFFSET                    (0x308U)
#define PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_SHIFT        (0U)
#define PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_SHIFT)        /* 0x00000003 */
/* PERICLKSEL_CON05 */
#define PERICRU_PERICLKSEL_CON05_OFFSET                    (0x314U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_SHIFT (0U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_MASK (0x1FU << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_SHIFT) /* 0x0000001F */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_SHIFT (5U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_MASK (0x7U << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_SHIFT) /* 0x000000E0 */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_SHIFT (8U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_MASK (0x1FU << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_SHIFT) /* 0x00001F00 */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_SHIFT (13U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_MASK (0x7U << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_SHIFT) /* 0x0000E000 */
/* PERICLKSEL_CON06 */
#define PERICRU_PERICLKSEL_CON06_OFFSET                    (0x318U)
#define PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_SHIFT      (0U)
#define PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_MASK       (0x7U << PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_SHIFT)      /* 0x00000007 */
#define PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_SHIFT        (3U)
#define PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_SHIFT)        /* 0x00000018 */
#define PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_SHIFT (5U)
#define PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_MASK  (0x3U << PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_SHIFT) /* 0x00000060 */
#define PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_SHIFT  (7U)
#define PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_SHIFT)  /* 0x00000180 */
#define PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_SHIFT   (9U)
#define PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_SHIFT)   /* 0x00000600 */
#define PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_SHIFT   (11U)
#define PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_SHIFT)   /* 0x00001800 */
/* PERICLKSEL_CON07 */
#define PERICRU_PERICLKSEL_CON07_OFFSET                    (0x31CU)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_MASK    (0x3FU << PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_SHIFT)  /* 0x0000003F */
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_SHIFT   (6U)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_MASK    (0x1U << PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_SHIFT)   /* 0x00000040 */
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_SHIFT        (7U)
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_MASK         (0x1FU << PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_SHIFT)       /* 0x00000F80 */
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_SHIFT        (12U)
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_SHIFT)        /* 0x00003000 */
#define PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_SHIFT      (14U)
#define PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_MASK       (0x3U << PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_SHIFT)      /* 0x0000C000 */
/* PERICLKSEL_CON08 */
#define PERICRU_PERICLKSEL_CON08_OFFSET                    (0x320U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_SHIFT  (0U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_MASK   (0xFFU << PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_SHIFT) /* 0x000000FF */
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_SHIFT  (8U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_MASK   (0xFFU << PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_SHIFT) /* 0x0000FF00 */
/* PERICLKSEL_CON09 */
#define PERICRU_PERICLKSEL_CON09_OFFSET                    (0x324U)
#define PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_SHIFT)   /* 0x00000003 */
/* PERICLKSEL_CON11 */
#define PERICRU_PERICLKSEL_CON11_OFFSET                    (0x32CU)
#define PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_SHIFT)   /* 0x00000003 */
/* PERIGATE_CON00 */
#define PERICRU_PERIGATE_CON00_OFFSET                      (0x800U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_SHIFT     (0U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_SHIFT)     /* 0x00000001 */
#define PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_SHIFT     (1U)
#define PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_SHIFT)     /* 0x00000002 */
#define PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_SHIFT     (3U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_SHIFT)     /* 0x00000008 */
#define PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_SHIFT      (4U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_SHIFT)      /* 0x00000010 */
#define PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_SHIFT      (5U)
#define PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_SHIFT)      /* 0x00000020 */
#define PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_SHIFT      (6U)
#define PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_SHIFT)      /* 0x00000040 */
#define PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_SHIFT       (7U)
#define PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_MASK        (0x1U << PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_SHIFT)       /* 0x00000080 */
#define PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_SHIFT         (8U)
#define PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_SHIFT)         /* 0x00000100 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_SHIFT         (9U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_SHIFT)         /* 0x00000200 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_SHIFT         (12U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_SHIFT)         /* 0x00001000 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_SHIFT         (13U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_SHIFT)         /* 0x00002000 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_SHIFT        (15U)
#define PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_MASK         (0x1U << PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_SHIFT)        /* 0x00008000 */
/* PERIGATE_CON01 */
#define PERICRU_PERIGATE_CON01_OFFSET                      (0x804U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_SHIFT        (0U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_SHIFT)        /* 0x00000001 */
#define PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_SHIFT        (2U)
#define PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_SHIFT)        /* 0x00000004 */
#define PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_SHIFT         (4U)
#define PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_MASK          (0x1U << PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_SHIFT)         /* 0x00000010 */
#define PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_SHIFT         (5U)
#define PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_MASK          (0x1U << PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_SHIFT)         /* 0x00000020 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_SHIFT          (6U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_SHIFT)          /* 0x00000040 */
#define PERICRU_PERIGATE_CON01_CLK_I2C0_EN_SHIFT           (7U)
#define PERICRU_PERIGATE_CON01_CLK_I2C0_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C0_EN_SHIFT)           /* 0x00000080 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_SHIFT          (10U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_SHIFT)          /* 0x00000400 */
#define PERICRU_PERIGATE_CON01_CLK_I2C2_EN_SHIFT           (11U)
#define PERICRU_PERIGATE_CON01_CLK_I2C2_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C2_EN_SHIFT)           /* 0x00000800 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_SHIFT          (12U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_SHIFT)          /* 0x00001000 */
#define PERICRU_PERIGATE_CON01_CLK_I2C3_EN_SHIFT           (13U)
#define PERICRU_PERIGATE_CON01_CLK_I2C3_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C3_EN_SHIFT)           /* 0x00002000 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_SHIFT          (14U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_SHIFT)          /* 0x00004000 */
#define PERICRU_PERIGATE_CON01_CLK_I2C4_EN_SHIFT           (15U)
#define PERICRU_PERIGATE_CON01_CLK_I2C4_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C4_EN_SHIFT)           /* 0x00008000 */
/* PERIGATE_CON02 */
#define PERICRU_PERIGATE_CON02_OFFSET                      (0x808U)
#define PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_SHIFT         (0U)
#define PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_SHIFT)         /* 0x00000001 */
#define PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_MASK         (0x1U << PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_SHIFT      (2U)
#define PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_MASK       (0x1U << PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_SHIFT)      /* 0x00000004 */
#define PERICRU_PERIGATE_CON02_PCLK_UART2_EN_SHIFT         (3U)
#define PERICRU_PERIGATE_CON02_PCLK_UART2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART2_EN_SHIFT)         /* 0x00000008 */
#define PERICRU_PERIGATE_CON02_SCLK_UART2_EN_SHIFT         (6U)
#define PERICRU_PERIGATE_CON02_SCLK_UART2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART2_EN_SHIFT)         /* 0x00000040 */
#define PERICRU_PERIGATE_CON02_PCLK_UART3_EN_SHIFT         (7U)
#define PERICRU_PERIGATE_CON02_PCLK_UART3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART3_EN_SHIFT)         /* 0x00000080 */
#define PERICRU_PERIGATE_CON02_SCLK_UART3_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON02_SCLK_UART3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART3_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON02_PCLK_UART4_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON02_PCLK_UART4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART4_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON02_SCLK_UART4_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON02_SCLK_UART4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART4_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON02_PCLK_UART5_EN_SHIFT         (15U)
#define PERICRU_PERIGATE_CON02_PCLK_UART5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART5_EN_SHIFT)         /* 0x00008000 */
/* PERIGATE_CON03 */
#define PERICRU_PERIGATE_CON03_OFFSET                      (0x80CU)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_SHIFT (0U)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_MASK (0x1U << PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_SHIFT) /* 0x00000001 */
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_SHIFT (1U)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_MASK (0x1U << PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_SHIFT) /* 0x00000002 */
#define PERICRU_PERIGATE_CON03_SCLK_UART5_EN_SHIFT         (2U)
#define PERICRU_PERIGATE_CON03_SCLK_UART5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON03_SCLK_UART5_EN_SHIFT)         /* 0x00000004 */
#define PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON03_CLK_SARADC_EN_SHIFT         (4U)
#define PERICRU_PERIGATE_CON03_CLK_SARADC_EN_MASK          (0x1U << PERICRU_PERIGATE_CON03_CLK_SARADC_EN_SHIFT)         /* 0x00000010 */
#define PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_SHIFT          (6U)
#define PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_MASK           (0x1U << PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_SHIFT)          /* 0x00000040 */
#define PERICRU_PERIGATE_CON03_CLK_SPI1_EN_SHIFT           (7U)
#define PERICRU_PERIGATE_CON03_CLK_SPI1_EN_MASK            (0x1U << PERICRU_PERIGATE_CON03_CLK_SPI1_EN_SHIFT)           /* 0x00000080 */
#define PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_SHIFT       (8U)
#define PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_MASK        (0x1U << PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_SHIFT)       /* 0x00000100 */
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_SHIFT       (9U)
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_MASK        (0x1U << PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_SHIFT)       /* 0x00000200 */
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_SHIFT        (10U)
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_SHIFT)        /* 0x00000400 */
#define PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_SHIFT    (11U)
#define PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_MASK     (0x1U << PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_SHIFT)    /* 0x00000800 */
#define PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_SHIFT     (12U)
#define PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_MASK      (0x1U << PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_SHIFT)     /* 0x00001000 */
#define PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_SHIFT        (13U)
#define PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_SHIFT)        /* 0x00002000 */
#define PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_SHIFT        (14U)
#define PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_SHIFT)        /* 0x00004000 */
#define PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_SHIFT     (15U)
#define PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_SHIFT)     /* 0x00008000 */
/* PERIGATE_CON04 */
#define PERICRU_PERIGATE_CON04_OFFSET                      (0x810U)
#define PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_SHIFT      (0U)
#define PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_SHIFT)      /* 0x00000001 */
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_SHIFT (1U)
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_SHIFT) /* 0x00000002 */
#define PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_SHIFT      (3U)
#define PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_SHIFT)      /* 0x00000008 */
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_SHIFT (4U)
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_SHIFT) /* 0x00000010 */
#define PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_SHIFT      (5U)
#define PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_SHIFT)      /* 0x00000020 */
#define PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_SHIFT      (6U)
#define PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_SHIFT)      /* 0x00000040 */
#define PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_SHIFT        (7U)
#define PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_MASK         (0x1U << PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_SHIFT)        /* 0x00000080 */
#define PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_SHIFT     (8U)
#define PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_MASK      (0x1U << PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_SHIFT)     /* 0x00000100 */
#define PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_SHIFT    (9U)
#define PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_MASK     (0x1U << PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_SHIFT)    /* 0x00000200 */
#define PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_SHIFT       (10U)
#define PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_MASK        (0x1U << PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_SHIFT)       /* 0x00000400 */
#define PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_SHIFT (11U)
#define PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_MASK  (0x1U << PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_SHIFT) /* 0x00000800 */
#define PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_SHIFT      (12U)
#define PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_SHIFT)      /* 0x00001000 */
#define PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_SHIFT          (13U)
#define PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_MASK           (0x1U << PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_SHIFT)          /* 0x00002000 */
#define PERICRU_PERIGATE_CON04_HCLK_SFC_EN_SHIFT           (14U)
#define PERICRU_PERIGATE_CON04_HCLK_SFC_EN_MASK            (0x1U << PERICRU_PERIGATE_CON04_HCLK_SFC_EN_SHIFT)           /* 0x00004000 */
/* PERIGATE_CON05 */
#define PERICRU_PERIGATE_CON05_OFFSET                      (0x814U)
#define PERICRU_PERIGATE_CON05_SCLK_SFC_EN_SHIFT           (0U)
#define PERICRU_PERIGATE_CON05_SCLK_SFC_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_SCLK_SFC_EN_SHIFT)           /* 0x00000001 */
#define PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_MASK         (0x1U << PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_MASK      (0x1U << PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_SHIFT          (8U)
#define PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_MASK           (0x1U << PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_SHIFT)          /* 0x00000100 */
#define PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_SHIFT         (9U)
#define PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_SHIFT)         /* 0x00000200 */
#define PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_SHIFT     (12U)
#define PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_MASK      (0x1U << PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_SHIFT)     /* 0x00001000 */
#define PERICRU_PERIGATE_CON05_HCLK_SAI_EN_SHIFT           (13U)
#define PERICRU_PERIGATE_CON05_HCLK_SAI_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_HCLK_SAI_EN_SHIFT)           /* 0x00002000 */
#define PERICRU_PERIGATE_CON05_MCLK_SAI_EN_SHIFT           (14U)
#define PERICRU_PERIGATE_CON05_MCLK_SAI_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_MCLK_SAI_EN_SHIFT)           /* 0x00004000 */
#define PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_SHIFT   (15U)
#define PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_MASK    (0x1U << PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_SHIFT)   /* 0x00008000 */
/* PERIGATE_CON06 */
#define PERICRU_PERIGATE_CON06_OFFSET                      (0x818U)
#define PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_SHIFT          (0U)
#define PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_MASK           (0x1U << PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_SHIFT)          /* 0x00000001 */
#define PERICRU_PERIGATE_CON06_MCLK_DSM_EN_SHIFT           (1U)
#define PERICRU_PERIGATE_CON06_MCLK_DSM_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_MCLK_DSM_EN_SHIFT)           /* 0x00000002 */
#define PERICRU_PERIGATE_CON06_PCLK_DSM_EN_SHIFT           (2U)
#define PERICRU_PERIGATE_CON06_PCLK_DSM_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_PCLK_DSM_EN_SHIFT)           /* 0x00000004 */
#define PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_MASK         (0x1U << PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_SHIFT     (4U)
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_MASK      (0x1U << PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_SHIFT)     /* 0x00000010 */
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_SHIFT     (5U)
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_MASK      (0x1U << PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_SHIFT)     /* 0x00000020 */
#define PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT   (6U)
#define PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_MASK    (0x1U << PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT)   /* 0x00000040 */
#define PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_SHIFT       (7U)
#define PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_MASK        (0x1U << PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_SHIFT)       /* 0x00000080 */
#define PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_SHIFT      (8U)
#define PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_MASK       (0x1U << PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_SHIFT)      /* 0x00000100 */
#define PERICRU_PERIGATE_CON06_HCLK_IVE_EN_SHIFT           (9U)
#define PERICRU_PERIGATE_CON06_HCLK_IVE_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_HCLK_IVE_EN_SHIFT)           /* 0x00000200 */
#define PERICRU_PERIGATE_CON06_ACLK_IVE_EN_SHIFT           (10U)
#define PERICRU_PERIGATE_CON06_ACLK_IVE_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_ACLK_IVE_EN_SHIFT)           /* 0x00000400 */
#define PERICRU_PERIGATE_CON06_PCLK_UART0_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON06_PCLK_UART0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_PCLK_UART0_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON06_SCLK_UART0_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON06_SCLK_UART0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_SCLK_UART0_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON06_PCLK_UART1_EN_SHIFT         (15U)
#define PERICRU_PERIGATE_CON06_PCLK_UART1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_PCLK_UART1_EN_SHIFT)         /* 0x00008000 */
/* PERIGATE_CON07 */
#define PERICRU_PERIGATE_CON07_OFFSET                      (0x81CU)
#define PERICRU_PERIGATE_CON07_SCLK_UART1_EN_SHIFT         (2U)
#define PERICRU_PERIGATE_CON07_SCLK_UART1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON07_SCLK_UART1_EN_SHIFT)         /* 0x00000004 */
#define PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_SHIFT     (3U)
#define PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_SHIFT)     /* 0x00000008 */
#define PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_SHIFT      (4U)
#define PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_SHIFT)      /* 0x00000010 */
#define PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_SHIFT (5U)
#define PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_SHIFT) /* 0x00000020 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_SHIFT (6U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_SHIFT) /* 0x00000040 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_SHIFT (7U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_SHIFT) /* 0x00000080 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_SHIFT (8U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_SHIFT) /* 0x00000100 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_SHIFT (9U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_MASK  (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_SHIFT) /* 0x00000200 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_SHIFT (10U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_MASK  (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_SHIFT) /* 0x00000400 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_SHIFT (11U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_SHIFT) /* 0x00000800 */
/* PERISOFTRST_CON00 */
#define PERICRU_PERISOFTRST_CON00_OFFSET                   (0xA00U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_SHIFT   (4U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_SHIFT)   /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_SHIFT   (5U)
#define PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_SHIFT)   /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_SHIFT   (6U)
#define PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_SHIFT)   /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_SHIFT    (7U)
#define PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_MASK     (0x1U << PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_SHIFT)    /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_SHIFT      (8U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_SHIFT)      /* 0x00000100 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_SHIFT      (9U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_SHIFT)      /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_SHIFT      (12U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_SHIFT)      /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_SHIFT      (13U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_SHIFT)      /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_SHIFT     (15U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_MASK      (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_SHIFT)     /* 0x00008000 */
/* PERISOFTRST_CON01 */
#define PERICRU_PERISOFTRST_CON01_OFFSET                   (0xA04U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_SHIFT     (0U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_SHIFT)     /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_SHIFT     (2U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_SHIFT)     /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_SHIFT      (4U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_MASK       (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_SHIFT)      /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_SHIFT      (5U)
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_MASK       (0x1U << PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_SHIFT)      /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_SHIFT       (6U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_SHIFT)       /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C0_SHIFT        (7U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C0_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C0_SHIFT)        /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_SHIFT       (10U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_SHIFT)       /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C2_SHIFT        (11U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C2_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C2_SHIFT)        /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_SHIFT       (12U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_SHIFT)       /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C3_SHIFT        (13U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C3_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C3_SHIFT)        /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_SHIFT       (14U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_SHIFT)       /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C4_SHIFT        (15U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C4_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C4_SHIFT)        /* 0x00008000 */
/* PERISOFTRST_CON02 */
#define PERICRU_PERISOFTRST_CON02_OFFSET                   (0xA08U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_SHIFT      (0U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_SHIFT)      /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_MASK      (0x1U << PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_SHIFT   (2U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_MASK    (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_SHIFT)   /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART2_SHIFT      (3U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART2_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART2_SHIFT)      /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART2_SHIFT      (6U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART2_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART2_SHIFT)      /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART3_SHIFT      (7U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART3_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART3_SHIFT)      /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART3_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART3_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART3_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART4_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART4_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART4_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART4_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART5_SHIFT      (15U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART5_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART5_SHIFT)      /* 0x00008000 */
/* PERISOFTRST_CON03 */
#define PERICRU_PERISOFTRST_CON03_OFFSET                   (0xA0CU)
#define PERICRU_PERISOFTRST_CON03_SRESETN_UART5_SHIFT      (2U)
#define PERICRU_PERISOFTRST_CON03_SRESETN_UART5_MASK       (0x1U << PERICRU_PERISOFTRST_CON03_SRESETN_UART5_SHIFT)      /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_SHIFT      (4U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_MASK       (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SARADC_SHIFT)      /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_SHIFT  (5U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_SHIFT)  /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_SHIFT       (6U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_MASK        (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_SHIFT)       /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SPI1_SHIFT        (7U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SPI1_MASK         (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SPI1_SHIFT)        /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_SHIFT    (9U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_MASK     (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_SHIFT)    /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_SHIFT     (10U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_SHIFT)     /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_SHIFT (11U)
#define PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_MASK  (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_SHIFT) /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_SHIFT  (12U)
#define PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_SHIFT)  /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_SHIFT     (13U)
#define PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_SHIFT)     /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_SHIFT     (14U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_SHIFT)     /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_SHIFT  (15U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_SHIFT)  /* 0x00008000 */
/* PERISOFTRST_CON04 */
#define PERICRU_PERISOFTRST_CON04_OFFSET                   (0xA10U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_SHIFT   (0U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_SHIFT)   /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_SHIFT  (2U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_SHIFT)  /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_SHIFT   (3U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_SHIFT)   /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_SHIFT   (5U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_SHIFT)   /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_SHIFT   (6U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_SHIFT)   /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_SHIFT     (7U)
#define PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_MASK      (0x1U << PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_SHIFT)     /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_SHIFT    (10U)
#define PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_MASK     (0x1U << PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_SHIFT)    /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_SHIFT       (13U)
#define PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_MASK        (0x1U << PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_SHIFT)       /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON04_HRESETN_SFC_SHIFT        (14U)
#define PERICRU_PERISOFTRST_CON04_HRESETN_SFC_MASK         (0x1U << PERICRU_PERISOFTRST_CON04_HRESETN_SFC_SHIFT)        /* 0x00004000 */
/* PERISOFTRST_CON05 */
#define PERICRU_PERISOFTRST_CON05_OFFSET                   (0xA14U)
#define PERICRU_PERISOFTRST_CON05_SRESETN_SFC_SHIFT        (0U)
#define PERICRU_PERISOFTRST_CON05_SRESETN_SFC_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_SRESETN_SFC_SHIFT)        /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_MASK      (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_SHIFT  (2U)
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_SHIFT)  /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_SHIFT  (3U)
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_SHIFT)  /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_SHIFT       (8U)
#define PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_MASK        (0x1U << PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_SHIFT)       /* 0x00000100 */
#define PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_SHIFT      (9U)
#define PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_SHIFT)      /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_SHIFT  (12U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_SHIFT)  /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON05_HRESETN_SAI_SHIFT        (13U)
#define PERICRU_PERISOFTRST_CON05_HRESETN_SAI_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_HRESETN_SAI_SHIFT)        /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON05_MRESETN_SAI_SHIFT        (14U)
#define PERICRU_PERISOFTRST_CON05_MRESETN_SAI_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_MRESETN_SAI_SHIFT)        /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT (15U)
#define PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_MASK (0x1U << PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT) /* 0x00008000 */
/* PERISOFTRST_CON06 */
#define PERICRU_PERISOFTRST_CON06_OFFSET                   (0xA18U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_SHIFT       (0U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_MASK        (0x1U << PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_SHIFT)       /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON06_MRESETN_DSM_SHIFT        (1U)
#define PERICRU_PERISOFTRST_CON06_MRESETN_DSM_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_MRESETN_DSM_SHIFT)        /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_DSM_SHIFT        (2U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_DSM_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_DSM_SHIFT)        /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_MASK      (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_SHIFT (6U)
#define PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_MASK (0x1U << PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_SHIFT) /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_SHIFT    (7U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_MASK     (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_SHIFT)    /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON06_HRESETN_IVE_SHIFT        (9U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_IVE_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_HRESETN_IVE_SHIFT)        /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON06_ARESETN_IVE_SHIFT        (10U)
#define PERICRU_PERISOFTRST_CON06_ARESETN_IVE_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_ARESETN_IVE_SHIFT)        /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART0_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART0_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_UART0_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON06_SRESETN_UART0_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON06_SRESETN_UART0_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_SRESETN_UART0_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART1_SHIFT      (15U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART1_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_UART1_SHIFT)      /* 0x00008000 */
/* PERISOFTRST_CON07 */
#define PERICRU_PERISOFTRST_CON07_OFFSET                   (0xA1CU)
#define PERICRU_PERISOFTRST_CON07_SRESETN_UART1_SHIFT      (2U)
#define PERICRU_PERISOFTRST_CON07_SRESETN_UART1_MASK       (0x1U << PERICRU_PERISOFTRST_CON07_SRESETN_UART1_SHIFT)      /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_SHIFT  (3U)
#define PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_SHIFT)  /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_SHIFT   (4U)
#define PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_SHIFT)   /* 0x00000010 */
/*****************************************VICRU******************************************/
/* VICLKSEL_CON00 */
#define VICRU_VICLKSEL_CON00_OFFSET                        (0x300U)
#define VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_SHIFT        (0U)
#define VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_SHIFT        (2U)
#define VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_SHIFT)        /* 0x0000000C */
#define VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_SHIFT        (4U)
#define VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_SHIFT)        /* 0x00000030 */
#define VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_SHIFT    (6U)
#define VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_MASK     (0x1U << VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_SHIFT)    /* 0x00000040 */
#define VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_SHIFT     (7U)
#define VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_MASK      (0x3U << VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_SHIFT)     /* 0x00000180 */
#define VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_SHIFT          (9U)
#define VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_MASK           (0x3U << VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_SHIFT)          /* 0x00000600 */
/* VICLKSEL_CON01 */
#define VICRU_VICLKSEL_CON01_OFFSET                        (0x304U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_SHIFT      (8U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_MASK       (0x3FU << VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_SHIFT)     /* 0x00003F00 */
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_SHIFT      (14U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_MASK       (0x1U << VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_SHIFT)      /* 0x00004000 */
/* VICLKSEL_CON02 */
#define VICRU_VICLKSEL_CON02_OFFSET                        (0x308U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_SHIFT (1U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_MASK (0x1FU << VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_SHIFT) /* 0x0000003E */
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_SHIFT (6U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_MASK (0x7U << VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_SHIFT) /* 0x000001C0 */
/* VICLKSEL_CON03 */
#define VICRU_VICLKSEL_CON03_OFFSET                        (0x30CU)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_SHIFT (0U)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_MASK (0x1FU << VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_SHIFT) /* 0x0000001F */
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_SHIFT (5U)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_MASK (0x7U << VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_SHIFT) /* 0x000000E0 */
/* VIGATE_CON00 */
#define VICRU_VIGATE_CON00_OFFSET                          (0x800U)
#define VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_SHIFT           (0U)
#define VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_SHIFT)           /* 0x00000001 */
#define VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_SHIFT           (1U)
#define VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_SHIFT)           /* 0x00000002 */
#define VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_SHIFT           (2U)
#define VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_SHIFT)           /* 0x00000004 */
#define VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_SHIFT       (3U)
#define VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_MASK        (0x1U << VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_SHIFT)       /* 0x00000008 */
#define VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_SHIFT            (4U)
#define VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_SHIFT)            /* 0x00000010 */
#define VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_SHIFT            (5U)
#define VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_SHIFT)            /* 0x00000020 */
#define VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_SHIFT            (6U)
#define VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_SHIFT)            /* 0x00000040 */
#define VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_SHIFT            (7U)
#define VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_MASK             (0x1U << VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_SHIFT)            /* 0x00000080 */
#define VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_SHIFT            (8U)
#define VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_MASK             (0x1U << VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_SHIFT)            /* 0x00000100 */
#define VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_SHIFT        (9U)
#define VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_MASK         (0x1U << VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_SHIFT)        /* 0x00000200 */
#define VICRU_VIGATE_CON00_DCLK_VICAP_EN_SHIFT             (10U)
#define VICRU_VIGATE_CON00_DCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_DCLK_VICAP_EN_SHIFT)             /* 0x00000400 */
#define VICRU_VIGATE_CON00_PCLK_VICAP_EN_SHIFT             (11U)
#define VICRU_VIGATE_CON00_PCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_PCLK_VICAP_EN_SHIFT)             /* 0x00000800 */
#define VICRU_VIGATE_CON00_ACLK_VICAP_EN_SHIFT             (12U)
#define VICRU_VIGATE_CON00_ACLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_ACLK_VICAP_EN_SHIFT)             /* 0x00001000 */
#define VICRU_VIGATE_CON00_HCLK_VICAP_EN_SHIFT             (13U)
#define VICRU_VIGATE_CON00_HCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_HCLK_VICAP_EN_SHIFT)             /* 0x00002000 */
#define VICRU_VIGATE_CON00_I0CLK_VICAP_EN_SHIFT            (14U)
#define VICRU_VIGATE_CON00_I0CLK_VICAP_EN_MASK             (0x1U << VICRU_VIGATE_CON00_I0CLK_VICAP_EN_SHIFT)            /* 0x00004000 */
#define VICRU_VIGATE_CON00_I1CLK_VICAP_EN_SHIFT            (15U)
#define VICRU_VIGATE_CON00_I1CLK_VICAP_EN_MASK             (0x1U << VICRU_VIGATE_CON00_I1CLK_VICAP_EN_SHIFT)            /* 0x00008000 */
/* VIGATE_CON01 */
#define VICRU_VIGATE_CON01_OFFSET                          (0x804U)
#define VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_SHIFT          (0U)
#define VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_SHIFT)          /* 0x00000001 */
#define VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_SHIFT          (1U)
#define VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_SHIFT)          /* 0x00000002 */
#define VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_SHIFT          (2U)
#define VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_SHIFT)          /* 0x00000004 */
#define VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_SHIFT          (3U)
#define VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_MASK           (0x1U << VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_SHIFT)          /* 0x00000008 */
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_SHIFT      (4U)
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_MASK       (0x1U << VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_SHIFT)      /* 0x00000010 */
#define VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_SHIFT          (5U)
#define VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_MASK           (0x1U << VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_SHIFT)          /* 0x00000020 */
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_SHIFT      (6U)
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_MASK       (0x1U << VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_SHIFT)      /* 0x00000040 */
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_SHIFT   (7U)
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_MASK    (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_SHIFT)   /* 0x00000080 */
#define VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_SHIFT   (8U)
#define VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_MASK    (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_SHIFT)   /* 0x00000100 */
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_SHIFT  (9U)
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_MASK   (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_SHIFT)  /* 0x00000200 */
#define VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_SHIFT (10U)
#define VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_MASK (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_SHIFT) /* 0x00000400 */
#define VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_SHIFT         (11U)
#define VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_MASK          (0x1U << VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_SHIFT)         /* 0x00000800 */
#define VICRU_VIGATE_CON01_HCLK_SDMMC_EN_SHIFT             (12U)
#define VICRU_VIGATE_CON01_HCLK_SDMMC_EN_MASK              (0x1U << VICRU_VIGATE_CON01_HCLK_SDMMC_EN_SHIFT)             /* 0x00001000 */
#define VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_SHIFT     (13U)
#define VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_MASK      (0x1U << VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_SHIFT)     /* 0x00002000 */
#define VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_SHIFT        (14U)
#define VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_MASK         (0x1U << VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_SHIFT)        /* 0x00004000 */
#define VICRU_VIGATE_CON01_PCLK_GPIO3_EN_SHIFT             (15U)
#define VICRU_VIGATE_CON01_PCLK_GPIO3_EN_MASK              (0x1U << VICRU_VIGATE_CON01_PCLK_GPIO3_EN_SHIFT)             /* 0x00008000 */
/* VIGATE_CON02 */
#define VICRU_VIGATE_CON02_OFFSET                          (0x808U)
#define VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_SHIFT            (0U)
#define VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_MASK             (0x1U << VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_SHIFT)            /* 0x00000001 */
#define VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_SHIFT            (1U)
#define VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_SHIFT)            /* 0x00000002 */
#define VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_SHIFT            (2U)
#define VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_SHIFT)            /* 0x00000004 */
#define VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_SHIFT           (3U)
#define VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_MASK            (0x1U << VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_SHIFT)           /* 0x00000008 */
#define VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_SHIFT            (4U)
#define VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_SHIFT)            /* 0x00000010 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_SHIFT       (5U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_MASK        (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_SHIFT)       /* 0x00000020 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_SHIFT        (6U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_MASK         (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_SHIFT)        /* 0x00000040 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_SHIFT        (7U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_MASK         (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_SHIFT)        /* 0x00000080 */
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_SHIFT  (10U)
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_MASK   (0x1U << VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_SHIFT)  /* 0x00000400 */
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_SHIFT  (11U)
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_MASK   (0x1U << VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_SHIFT)  /* 0x00000800 */
/* VISOFTRST_CON00 */
#define VICRU_VISOFTRST_CON00_OFFSET                       (0xA00U)
#define VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_SHIFT         (4U)
#define VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_SHIFT)         /* 0x00000010 */
#define VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_SHIFT         (5U)
#define VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_SHIFT)         /* 0x00000020 */
#define VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_SHIFT         (6U)
#define VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_SHIFT)         /* 0x00000040 */
#define VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_SHIFT     (9U)
#define VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_MASK      (0x1U << VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_SHIFT)     /* 0x00000200 */
#define VICRU_VISOFTRST_CON00_DRESETN_VICAP_SHIFT          (10U)
#define VICRU_VISOFTRST_CON00_DRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_DRESETN_VICAP_SHIFT)          /* 0x00000400 */
#define VICRU_VISOFTRST_CON00_PRESETN_VICAP_SHIFT          (11U)
#define VICRU_VISOFTRST_CON00_PRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_PRESETN_VICAP_SHIFT)          /* 0x00000800 */
#define VICRU_VISOFTRST_CON00_ARESETN_VICAP_SHIFT          (12U)
#define VICRU_VISOFTRST_CON00_ARESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_ARESETN_VICAP_SHIFT)          /* 0x00001000 */
#define VICRU_VISOFTRST_CON00_HRESETN_VICAP_SHIFT          (13U)
#define VICRU_VISOFTRST_CON00_HRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_HRESETN_VICAP_SHIFT)          /* 0x00002000 */
#define VICRU_VISOFTRST_CON00_I0RESETN_VICAP_SHIFT         (14U)
#define VICRU_VISOFTRST_CON00_I0RESETN_VICAP_MASK          (0x1U << VICRU_VISOFTRST_CON00_I0RESETN_VICAP_SHIFT)         /* 0x00004000 */
#define VICRU_VISOFTRST_CON00_I1RESETN_VICAP_SHIFT         (15U)
#define VICRU_VISOFTRST_CON00_I1RESETN_VICAP_MASK          (0x1U << VICRU_VISOFTRST_CON00_I1RESETN_VICAP_SHIFT)         /* 0x00008000 */
/* VISOFTRST_CON01 */
#define VICRU_VISOFTRST_CON01_OFFSET                       (0xA04U)
#define VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_SHIFT       (0U)
#define VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_SHIFT)       /* 0x00000001 */
#define VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_SHIFT       (1U)
#define VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_SHIFT)       /* 0x00000002 */
#define VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_SHIFT       (2U)
#define VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_SHIFT)       /* 0x00000004 */
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_SHIFT       (4U)
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_MASK        (0x1U << VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_SHIFT)       /* 0x00000010 */
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_SHIFT       (6U)
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_MASK        (0x1U << VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_SHIFT)       /* 0x00000040 */
#define VICRU_VISOFTRST_CON01_HRESETN_SDMMC_SHIFT          (12U)
#define VICRU_VISOFTRST_CON01_HRESETN_SDMMC_MASK           (0x1U << VICRU_VISOFTRST_CON01_HRESETN_SDMMC_SHIFT)          /* 0x00001000 */
#define VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_SHIFT  (13U)
#define VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_MASK   (0x1U << VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_SHIFT)  /* 0x00002000 */
#define VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_SHIFT     (14U)
#define VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_MASK      (0x1U << VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_SHIFT)     /* 0x00004000 */
#define VICRU_VISOFTRST_CON01_PRESETN_GPIO3_SHIFT          (15U)
#define VICRU_VISOFTRST_CON01_PRESETN_GPIO3_MASK           (0x1U << VICRU_VISOFTRST_CON01_PRESETN_GPIO3_SHIFT)          /* 0x00008000 */
/* VISOFTRST_CON02 */
#define VICRU_VISOFTRST_CON02_OFFSET                       (0xA08U)
#define VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_SHIFT         (0U)
#define VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_MASK          (0x1U << VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_SHIFT)         /* 0x00000001 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_SHIFT         (1U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_SHIFT)         /* 0x00000002 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_SHIFT         (2U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_SHIFT)         /* 0x00000004 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_SHIFT        (3U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_MASK         (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_SHIFT)        /* 0x00000008 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_SHIFT         (4U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_SHIFT)         /* 0x00000010 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_SHIFT    (5U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_MASK     (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_SHIFT)    /* 0x00000020 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_SHIFT     (7U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_MASK      (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_SHIFT)     /* 0x00000080 */
/*****************************************NPUCRU*****************************************/
/* NPUCLKSEL_CON00 */
#define NPUCRU_NPUCLKSEL_CON00_OFFSET                      (0x300U)
#define NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_SHIFT     (0U)
#define NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_SHIFT)     /* 0x00000003 */
#define NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_SHIFT     (2U)
#define NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_SHIFT)     /* 0x0000000C */
#define NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_SHIFT     (4U)
#define NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_SHIFT)     /* 0x00000030 */
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_SHIFT (6U)
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_MASK (0x1FU << NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_SHIFT) /* 0x000007C0 */
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_SHIFT (11U)
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_MASK (0x3U << NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_SHIFT) /* 0x00001800 */
/* NPUGATE_CON00 */
#define NPUCRU_NPUGATE_CON00_OFFSET                        (0x800U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_SHIFT        (0U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_SHIFT)        /* 0x00000001 */
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_SHIFT        (1U)
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_SHIFT)        /* 0x00000002 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_SHIFT        (2U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_SHIFT)        /* 0x00000004 */
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_SHIFT         (3U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_SHIFT)         /* 0x00000008 */
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_SHIFT         (4U)
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_SHIFT)         /* 0x00000010 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_SHIFT         (5U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_SHIFT)         /* 0x00000020 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_SHIFT         (6U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_SHIFT)         /* 0x00000040 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_SHIFT        (7U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_SHIFT)        /* 0x00000080 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_SHIFT         (8U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_SHIFT)         /* 0x00000100 */
#define NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_SHIFT            (9U)
#define NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_MASK             (0x1U << NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_SHIFT)            /* 0x00000200 */
#define NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_SHIFT            (10U)
#define NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_MASK             (0x1U << NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_SHIFT)            /* 0x00000400 */
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_SHIFT    (11U)
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_MASK     (0x1U << NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_SHIFT)    /* 0x00000800 */
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_SHIFT    (12U)
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_MASK     (0x1U << NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_SHIFT)    /* 0x00001000 */
#define NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_SHIFT (15U)
#define NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_SHIFT) /* 0x00008000 */
/* NPUGATE_CON01 */
#define NPUCRU_NPUGATE_CON01_OFFSET                        (0x804U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_SHIFT (0U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_SHIFT) /* 0x00000001 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_SHIFT (1U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_SHIFT) /* 0x00000002 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_SHIFT (2U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_SHIFT) /* 0x00000004 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_SHIFT (3U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_SHIFT) /* 0x00000008 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_SHIFT (4U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_SHIFT) /* 0x00000010 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_SHIFT (9U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_SHIFT) /* 0x00000200 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_SHIFT (10U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_SHIFT) /* 0x00000400 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_SHIFT (11U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_SHIFT) /* 0x00000800 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_SHIFT (12U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_SHIFT) /* 0x00001000 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_SHIFT (13U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_SHIFT) /* 0x00002000 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_SHIFT (14U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_SHIFT) /* 0x00004000 */
#define NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_SHIFT      (15U)
#define NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_MASK       (0x1U << NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_SHIFT)      /* 0x00008000 */
/* NPUSOFTRST_CON00 */
#define NPUCRU_NPUSOFTRST_CON00_OFFSET                     (0xA00U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_SHIFT      (3U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_SHIFT)      /* 0x00000008 */
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_SHIFT      (4U)
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_SHIFT)      /* 0x00000010 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_SHIFT      (5U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_SHIFT)      /* 0x00000020 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_SHIFT      (6U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_SHIFT)      /* 0x00000040 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_SHIFT     (7U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_MASK      (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_SHIFT)     /* 0x00000080 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_SHIFT      (8U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_SHIFT)      /* 0x00000100 */
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_SHIFT         (9U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_MASK          (0x1U << NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_SHIFT)         /* 0x00000200 */
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_SHIFT         (10U)
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_MASK          (0x1U << NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_SHIFT)         /* 0x00000400 */
/****************************************CORECRU*****************************************/
/* CORECLKSEL_CON00 */
#define CORECRU_CORECLKSEL_CON00_OFFSET                    (0x300U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_SHIFT    (5U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_MASK     (0x3U << CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_SHIFT)    /* 0x00000060 */
#define CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_SHIFT (7U)
#define CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_MASK  (0x1FU << CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_SHIFT) /* 0x00000F80 */
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_SHIFT (12U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_MASK (0x1U << CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_SHIFT) /* 0x00001000 */
/* CORECLKSEL_CON01 */
#define CORECRU_CORECLKSEL_CON01_OFFSET                    (0x304U)
#define CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_SHIFT        (0U)
#define CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_MASK         (0x1FU << CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_SHIFT)       /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_SHIFT (6U)
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_SHIFT) /* 0x000007C0 */
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_SHIFT (11U)
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_SHIFT) /* 0x0000F800 */
/* CORECLKSEL_CON02 */
#define CORECRU_CORECLKSEL_CON02_OFFSET                    (0x308U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_SHIFT    (0U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_MASK     (0x1FU << CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_SHIFT)   /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_SHIFT    (5U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_MASK     (0x1U << CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_SHIFT)    /* 0x00000020 */
/* CORECLKSEL_CON03 */
#define CORECRU_CORECLKSEL_CON03_OFFSET                    (0x30CU)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_SHIFT (5U)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_MASK (0x1U << CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_SHIFT) /* 0x00000020 */
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_SHIFT    (6U)
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_MASK     (0x1FU << CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_SHIFT)   /* 0x000007C0 */
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_SHIFT    (11U)
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_MASK     (0x1U << CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_SHIFT)    /* 0x00000800 */
/* CORECLKSEL_CON04 */
#define CORECRU_CORECLKSEL_CON04_OFFSET                    (0x310U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_SHIFT (5U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_MASK (0x3U << CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_SHIFT) /* 0x00000060 */
/* COREGATE_CON00 */
#define CORECRU_COREGATE_CON00_OFFSET                      (0x800U)
#define CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_SHIFT  (0U)
#define CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_MASK   (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_SHIFT)  /* 0x00000001 */
#define CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_SHIFT       (1U)
#define CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_SHIFT)       /* 0x00000002 */
#define CORECRU_COREGATE_CON00_CLK_CORE_EN_SHIFT           (2U)
#define CORECRU_COREGATE_CON00_CLK_CORE_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_EN_SHIFT)           /* 0x00000004 */
#define CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_SHIFT    (5U)
#define CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_MASK     (0x1U << CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_SHIFT)    /* 0x00000020 */
#define CORECRU_COREGATE_CON00_PCLK_DBG_EN_SHIFT           (6U)
#define CORECRU_COREGATE_CON00_PCLK_DBG_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_PCLK_DBG_EN_SHIFT)           /* 0x00000040 */
#define CORECRU_COREGATE_CON00_SWCLKTCK_EN_SHIFT           (8U)
#define CORECRU_COREGATE_CON00_SWCLKTCK_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_SWCLKTCK_EN_SHIFT)           /* 0x00000100 */
#define CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_SHIFT    (9U)
#define CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_MASK     (0x1U << CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_SHIFT)    /* 0x00000200 */
#define CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_SHIFT      (10U)
#define CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_SHIFT)      /* 0x00000400 */
#define CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_SHIFT      (11U)
#define CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_SHIFT)      /* 0x00000800 */
#define CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_SHIFT       (12U)
#define CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_SHIFT)       /* 0x00001000 */
#define CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_SHIFT       (13U)
#define CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_SHIFT)       /* 0x00002000 */
#define CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_SHIFT      (14U)
#define CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_SHIFT)      /* 0x00004000 */
#define CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_SHIFT     (15U)
#define CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_MASK      (0x1U << CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_SHIFT)     /* 0x00008000 */
/* COREGATE_CON01 */
#define CORECRU_COREGATE_CON01_OFFSET                      (0x804U)
#define CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_SHIFT (0U)
#define CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_MASK (0x1U << CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_SHIFT) /* 0x00000001 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_SHIFT       (1U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_MASK        (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_SHIFT)       /* 0x00000002 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_SHIFT   (5U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_SHIFT)   /* 0x00000020 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_SHIFT   (6U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_SHIFT)   /* 0x00000040 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_SHIFT  (7U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_MASK   (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_SHIFT)  /* 0x00000080 */
#define CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_SHIFT       (8U)
#define CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_MASK        (0x1U << CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_SHIFT)       /* 0x00000100 */
#define CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_SHIFT        (9U)
#define CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_MASK         (0x1U << CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_SHIFT)        /* 0x00000200 */
#define CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_SHIFT      (10U)
#define CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_MASK       (0x1U << CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_SHIFT)      /* 0x00000400 */
#define CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_SHIFT     (11U)
#define CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_MASK      (0x1U << CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_SHIFT)     /* 0x00000800 */
#define CORECRU_COREGATE_CON01_HCLK_CACHE_EN_SHIFT         (12U)
#define CORECRU_COREGATE_CON01_HCLK_CACHE_EN_MASK          (0x1U << CORECRU_COREGATE_CON01_HCLK_CACHE_EN_SHIFT)         /* 0x00001000 */
#define CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_SHIFT   (13U)
#define CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_SHIFT)   /* 0x00002000 */
/* CORESOFTRST_CON00 */
#define CORECRU_CORESOFTRST_CON00_OFFSET                   (0xA00U)
#define CORECRU_CORESOFTRST_CON00_NCOREPORESET_SHIFT       (1U)
#define CORECRU_CORESOFTRST_CON00_NCOREPORESET_MASK        (0x1U << CORECRU_CORESOFTRST_CON00_NCOREPORESET_SHIFT)       /* 0x00000002 */
#define CORECRU_CORESOFTRST_CON00_NCORESET_SHIFT           (2U)
#define CORECRU_CORESOFTRST_CON00_NCORESET_MASK            (0x1U << CORECRU_CORESOFTRST_CON00_NCORESET_SHIFT)           /* 0x00000004 */
#define CORECRU_CORESOFTRST_CON00_NDBGRESET_SHIFT          (3U)
#define CORECRU_CORESOFTRST_CON00_NDBGRESET_MASK           (0x1U << CORECRU_CORESOFTRST_CON00_NDBGRESET_SHIFT)          /* 0x00000008 */
#define CORECRU_CORESOFTRST_CON00_NL2RESET_SHIFT           (4U)
#define CORECRU_CORESOFTRST_CON00_NL2RESET_MASK            (0x1U << CORECRU_CORESOFTRST_CON00_NL2RESET_SHIFT)           /* 0x00000010 */
#define CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_SHIFT (5U)
#define CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_MASK  (0x1U << CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_SHIFT) /* 0x00000020 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_DBG_SHIFT        (6U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_DBG_MASK         (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_DBG_SHIFT)        /* 0x00000040 */
#define CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_SHIFT      (7U)
#define CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_MASK       (0x1U << CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_SHIFT)      /* 0x00000080 */
#define CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_SHIFT       (8U)
#define CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_MASK        (0x1U << CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_SHIFT)       /* 0x00000100 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_SHIFT   (11U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_MASK    (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_SHIFT)   /* 0x00000800 */
#define CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_SHIFT    (12U)
#define CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_MASK     (0x1U << CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_SHIFT)    /* 0x00001000 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_SHIFT    (13U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_MASK     (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_SHIFT)    /* 0x00002000 */
#define CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_SHIFT   (14U)
#define CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_MASK    (0x1U << CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_SHIFT)   /* 0x00004000 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_SHIFT  (15U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_MASK   (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_SHIFT)  /* 0x00008000 */
/* CORESOFTRST_CON01 */
#define CORECRU_CORESOFTRST_CON01_OFFSET                   (0xA04U)
#define CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_SHIFT (0U)
#define CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_SHIFT) /* 0x00000001 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_SHIFT    (1U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_MASK     (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_SHIFT)    /* 0x00000002 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_SHIFT (2U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_SHIFT) /* 0x00000004 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_SHIFT (3U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_SHIFT) /* 0x00000008 */
#define CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_SHIFT (4U)
#define CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_MASK (0x1U << CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_SHIFT) /* 0x00000010 */
#define CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_SHIFT     (5U)
#define CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_MASK      (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_SHIFT)     /* 0x00000020 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_SHIFT    (8U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_MASK     (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_SHIFT)    /* 0x00000100 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_SHIFT     (9U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_MASK      (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_SHIFT)     /* 0x00000200 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_SHIFT   (10U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_MASK    (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_SHIFT)   /* 0x00000400 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_SHIFT  (11U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_MASK   (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_SHIFT)  /* 0x00000800 */
#define CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_SHIFT      (12U)
#define CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_MASK       (0x1U << CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_SHIFT)      /* 0x00001000 */
/* AUTOCS_CORE_SRC_CON0 */
#define CORECRU_AUTOCS_CORE_SRC_CON0_OFFSET                (0xD00U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_SHIFT (0U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_MASK (0xFFFFU << CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_SHIFT) /* 0x0000FFFF */
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_SHIFT (16U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_MASK (0xFFFFU << CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CORE_SRC_CON1 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_OFFSET                (0xD04U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_SHIFT (0U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_MASK (0xFFFU << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_SHIFT) /* 0x00000FFF */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_SHIFT (12U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_MASK (0x1U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_SHIFT (13U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_MASK (0x1U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_SHIFT (14U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_MASK (0x3U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/****************************************VEPUCRU*****************************************/
/* VEPUCLKSEL_CON00 */
#define VEPUCRU_VEPUCLKSEL_CON00_OFFSET                    (0x300U)
#define VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_SHIFT  (0U)
#define VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_SHIFT)  /* 0x00000003 */
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_SHIFT (2U)
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_SHIFT) /* 0x0000000C */
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_SHIFT  (4U)
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_SHIFT)  /* 0x00000030 */
#define VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_SHIFT  (6U)
#define VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_SHIFT)  /* 0x000000C0 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_SHIFT   (8U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_MASK    (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_SHIFT)   /* 0x00000300 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_SHIFT (10U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_SHIFT) /* 0x00000C00 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_SHIFT        (12U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_MASK         (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_SHIFT)        /* 0x00003000 */
/* VEPUCLKSEL_CON01 */
#define VEPUCRU_VEPUCLKSEL_CON01_OFFSET                    (0x304U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_SHIFT (0U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_MASK (0x1FU << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_SHIFT) /* 0x0000001F */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_SHIFT (5U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_SHIFT) /* 0x00000060 */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_SHIFT (7U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_MASK (0x1FU << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_SHIFT) /* 0x00000F80 */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_SHIFT (12U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_SHIFT) /* 0x00003000 */
/* VEPUGATE_CON00 */
#define VEPUCRU_VEPUGATE_CON00_OFFSET                      (0x800U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_SHIFT     (0U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_SHIFT (1U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_SHIFT) /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_SHIFT     (2U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_SHIFT     (3U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_SHIFT      (4U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_SHIFT)      /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_SHIFT      (5U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_SHIFT)      /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_SHIFT  (6U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_MASK   (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_SHIFT)  /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_SHIFT      (7U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_SHIFT)      /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_SHIFT          (8U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_SHIFT)          /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_SHIFT          (9U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_SHIFT)          /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_SHIFT      (10U)
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_SHIFT)      /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_SHIFT       (11U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_SHIFT)       /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_SHIFT       (12U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_SHIFT)       /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_SHIFT    (14U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_MASK     (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_SHIFT)    /* 0x00004000 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_SHIFT         (15U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_MASK          (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_SHIFT)         /* 0x00008000 */
/* VEPUGATE_CON01 */
#define VEPUCRU_VEPUGATE_CON01_OFFSET                      (0x804U)
#define VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_SHIFT        (0U)
#define VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_MASK         (0x1U << VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_SHIFT)        /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_SHIFT      (1U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_SHIFT)      /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_SHIFT          (2U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_SHIFT)          /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_SHIFT           (3U)
#define VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_MASK            (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_SHIFT)           /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_SHIFT       (4U)
#define VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_SHIFT)       /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_SHIFT      (5U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_SHIFT)      /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_SHIFT     (6U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_SHIFT)     /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_SHIFT      (7U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_SHIFT)      /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_SHIFT  (8U)
#define VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_MASK   (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_SHIFT)  /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_SHIFT (9U)
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_SHIFT) /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_SHIFT (10U)
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_SHIFT) /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_SHIFT (11U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_SHIFT) /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_SHIFT (12U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_SHIFT) /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_SHIFT (14U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_SHIFT) /* 0x00004000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_SHIFT (15U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_SHIFT) /* 0x00008000 */
/* VEPUGATE_CON02 */
#define VEPUCRU_VEPUGATE_CON02_OFFSET                      (0x808U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_SHIFT (0U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_SHIFT) /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_SHIFT (1U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_SHIFT) /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_SHIFT (2U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_SHIFT) /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_SHIFT (3U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_SHIFT) /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_SHIFT (4U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_SHIFT) /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_SHIFT (5U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_SHIFT) /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_SHIFT (6U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_SHIFT) /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_SHIFT (7U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_SHIFT) /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_SHIFT (8U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_SHIFT) /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_SHIFT (9U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_SHIFT) /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_SHIFT (10U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_SHIFT) /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_SHIFT (11U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_SHIFT) /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_SHIFT (12U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_SHIFT) /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_SHIFT (14U)
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_SHIFT) /* 0x00004000 */
/* VEPUSOFTRST_CON00 */
#define VEPUCRU_VEPUSOFTRST_CON00_OFFSET                   (0xA00U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_SHIFT   (4U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_SHIFT)   /* 0x00000010 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_SHIFT   (5U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_SHIFT)   /* 0x00000020 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_SHIFT (6U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_SHIFT) /* 0x00000040 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_SHIFT   (7U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_SHIFT)   /* 0x00000080 */
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_SHIFT       (8U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_SHIFT)       /* 0x00000100 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_SHIFT       (9U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_SHIFT)       /* 0x00000200 */
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_SHIFT   (10U)
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_SHIFT)   /* 0x00000400 */
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_SHIFT    (11U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_MASK     (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_SHIFT)    /* 0x00000800 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_SHIFT    (12U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_MASK     (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_SHIFT)    /* 0x00001000 */
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_SHIFT (13U)
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_SHIFT (14U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_MASK  (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_SHIFT) /* 0x00004000 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_SHIFT      (15U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_MASK       (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_SHIFT)      /* 0x00008000 */
/* VEPUSOFTRST_CON01 */
#define VEPUCRU_VEPUSOFTRST_CON01_OFFSET                   (0xA04U)
#define VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_SHIFT     (0U)
#define VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_MASK      (0x1U << VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_SHIFT)     /* 0x00000001 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_SHIFT   (1U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_SHIFT)   /* 0x00000002 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_SHIFT       (2U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_SHIFT)       /* 0x00000004 */
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_SHIFT        (3U)
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_MASK         (0x1U << VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_SHIFT)        /* 0x00000008 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_SHIFT   (5U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_SHIFT)   /* 0x00000020 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_SHIFT  (6U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_MASK   (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_SHIFT)  /* 0x00000040 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_SHIFT   (7U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_SHIFT)   /* 0x00000080 */
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_SHIFT (8U)
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_SHIFT) /* 0x00000100 */
/*****************************************VOCRU******************************************/
/* VOCLKSEL_CON00 */
#define VOCRU_VOCLKSEL_CON00_OFFSET                        (0x300U)
#define VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_SHIFT        (0U)
#define VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_SHIFT        (2U)
#define VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_SHIFT)        /* 0x0000000C */
#define VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_SHIFT        (4U)
#define VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_SHIFT)        /* 0x00000030 */
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_SHIFT    (6U)
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_MASK     (0x1FU << VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_SHIFT)   /* 0x000007C0 */
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_SHIFT    (11U)
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_MASK     (0x7U << VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_SHIFT)    /* 0x00003800 */
/* VOCLKSEL_CON01 */
#define VOCRU_VOCLKSEL_CON01_OFFSET                        (0x304U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_SHIFT    (0U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_MASK     (0x1FU << VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_SHIFT)   /* 0x0000001F */
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_SHIFT    (5U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_MASK     (0x7U << VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_SHIFT)    /* 0x000000E0 */
#define VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_SHIFT      (8U)
#define VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_MASK       (0x3U << VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_SHIFT)      /* 0x00000300 */
#define VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_SHIFT       (10U)
#define VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_MASK        (0x3U << VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_SHIFT)       /* 0x00000C00 */
#define VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_SHIFT       (12U)
#define VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_MASK        (0x3U << VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_SHIFT)       /* 0x00003000 */
/* VOCLKSEL_CON02 */
#define VOCRU_VOCLKSEL_CON02_OFFSET                        (0x308U)
#define VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_SHIFT  (1U)
#define VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_MASK   (0x3FU << VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_SHIFT) /* 0x0000007E */
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_SHIFT       (7U)
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_MASK        (0x3FU << VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_SHIFT)      /* 0x00001F80 */
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_SHIFT       (13U)
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_MASK        (0x1U << VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_SHIFT)       /* 0x00002000 */
/* VOCLKSEL_CON03 */
#define VOCRU_VOCLKSEL_CON03_OFFSET                        (0x30CU)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_SHIFT           (0U)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_MASK            (0x1FU << VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_SHIFT)          /* 0x0000001F */
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_SHIFT      (5U)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_MASK       (0x1FU << VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_SHIFT)     /* 0x000003E0 */
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_SHIFT    (10U)
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_MASK     (0x7U << VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_SHIFT)    /* 0x00001C00 */
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_SHIFT     (13U)
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_MASK      (0x7U << VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_SHIFT)     /* 0x0000E000 */
/* VOGATE_CON00 */
#define VOCRU_VOGATE_CON00_OFFSET                          (0x800U)
#define VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_SHIFT           (0U)
#define VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_SHIFT)           /* 0x00000001 */
#define VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_SHIFT           (1U)
#define VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_SHIFT)           /* 0x00000002 */
#define VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_SHIFT           (2U)
#define VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_SHIFT)           /* 0x00000004 */
#define VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_SHIFT            (3U)
#define VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_SHIFT)            /* 0x00000008 */
#define VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_SHIFT            (4U)
#define VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_SHIFT)            /* 0x00000010 */
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_SHIFT       (5U)
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_MASK        (0x1U << VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_SHIFT)       /* 0x00000020 */
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_SHIFT       (6U)
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_MASK        (0x1U << VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_SHIFT)       /* 0x00000040 */
#define VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_SHIFT             (7U)
#define VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_MASK              (0x1U << VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_SHIFT)             /* 0x00000080 */
#define VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_SHIFT             (8U)
#define VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_MASK              (0x1U << VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_SHIFT)             /* 0x00000100 */
#define VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_SHIFT         (9U)
#define VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_MASK          (0x1U << VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_SHIFT)         /* 0x00000200 */
#define VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_SHIFT            (10U)
#define VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_SHIFT)            /* 0x00000400 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_SHIFT          (11U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_MASK           (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_SHIFT)          /* 0x00000800 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_SHIFT           (12U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_SHIFT)           /* 0x00001000 */
#define VOCRU_VOGATE_CON00_HCLK_VOP_EN_SHIFT               (13U)
#define VOCRU_VOGATE_CON00_HCLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_HCLK_VOP_EN_SHIFT)               /* 0x00002000 */
#define VOCRU_VOGATE_CON00_DCLK_VOP_EN_SHIFT               (14U)
#define VOCRU_VOGATE_CON00_DCLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_DCLK_VOP_EN_SHIFT)               /* 0x00004000 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_EN_SHIFT               (15U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_EN_SHIFT)               /* 0x00008000 */
/* VOGATE_CON01 */
#define VOCRU_VOGATE_CON01_OFFSET                          (0x804U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_SHIFT      (0U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_MASK       (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_SHIFT)      /* 0x00000001 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_SHIFT     (1U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_SHIFT)     /* 0x00000002 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_SHIFT     (2U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_SHIFT)     /* 0x00000004 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_SHIFT     (3U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_SHIFT)     /* 0x00000008 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_SHIFT          (4U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_MASK           (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_SHIFT)          /* 0x00000010 */
#define VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_SHIFT           (6U)
#define VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_SHIFT)           /* 0x00000040 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_SHIFT           (7U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_SHIFT)           /* 0x00000080 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_EN_SHIFT               (8U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_EN_MASK                (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_EN_SHIFT)               /* 0x00000100 */
#define VOCRU_VOGATE_CON01_PCLK_MAC_EN_SHIFT               (9U)
#define VOCRU_VOGATE_CON01_PCLK_MAC_EN_MASK                (0x1U << VOCRU_VOGATE_CON01_PCLK_MAC_EN_SHIFT)               /* 0x00000200 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_SHIFT     (11U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_SHIFT)     /* 0x00000800 */
#define VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_SHIFT           (12U)
#define VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_SHIFT)           /* 0x00001000 */
#define VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_SHIFT            (13U)
#define VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_MASK             (0x1U << VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_SHIFT)            /* 0x00002000 */
#define VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_SHIFT          (14U)
#define VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_MASK           (0x1U << VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_SHIFT)          /* 0x00004000 */
#define VOCRU_VOGATE_CON01_HCLK_SDIO_EN_SHIFT              (15U)
#define VOCRU_VOGATE_CON01_HCLK_SDIO_EN_MASK               (0x1U << VOCRU_VOGATE_CON01_HCLK_SDIO_EN_SHIFT)              /* 0x00008000 */
/* VOGATE_CON02 */
#define VOCRU_VOGATE_CON02_OFFSET                          (0x808U)
#define VOCRU_VOGATE_CON02_PCLK_TSADC_EN_SHIFT             (0U)
#define VOCRU_VOGATE_CON02_PCLK_TSADC_EN_MASK              (0x1U << VOCRU_VOGATE_CON02_PCLK_TSADC_EN_SHIFT)             /* 0x00000001 */
#define VOCRU_VOGATE_CON02_CLK_TSADC_EN_SHIFT              (1U)
#define VOCRU_VOGATE_CON02_CLK_TSADC_EN_MASK               (0x1U << VOCRU_VOGATE_CON02_CLK_TSADC_EN_SHIFT)              /* 0x00000002 */
#define VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_SHIFT         (2U)
#define VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_MASK          (0x1U << VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_SHIFT)         /* 0x00000004 */
#define VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_SHIFT           (3U)
#define VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_MASK            (0x1U << VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_SHIFT)           /* 0x00000008 */
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_SHIFT       (5U)
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_MASK        (0x1U << VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_SHIFT)       /* 0x00000020 */
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_SHIFT       (6U)
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_MASK        (0x1U << VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_SHIFT)       /* 0x00000040 */
#define VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_SHIFT            (7U)
#define VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_MASK             (0x1U << VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_SHIFT)            /* 0x00000080 */
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_SHIFT        (9U)
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_MASK         (0x1U << VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_SHIFT)        /* 0x00000200 */
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_SHIFT        (10U)
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_MASK         (0x1U << VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_SHIFT)        /* 0x00000400 */
#define VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_SHIFT           (11U)
#define VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_MASK            (0x1U << VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_SHIFT)           /* 0x00000800 */
#define VOCRU_VOGATE_CON02_CLK_MACPHY_EN_SHIFT             (13U)
#define VOCRU_VOGATE_CON02_CLK_MACPHY_EN_MASK              (0x1U << VOCRU_VOGATE_CON02_CLK_MACPHY_EN_SHIFT)             /* 0x00002000 */
#define VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_SHIFT          (14U)
#define VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_MASK           (0x1U << VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_SHIFT)          /* 0x00004000 */
#define VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_SHIFT            (15U)
#define VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_MASK             (0x1U << VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_SHIFT)            /* 0x00008000 */
/* VOGATE_CON03 */
#define VOCRU_VOGATE_CON03_OFFSET                          (0x80CU)
#define VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_SHIFT             (0U)
#define VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_MASK              (0x1U << VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_SHIFT)             /* 0x00000001 */
#define VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_SHIFT            (1U)
#define VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_MASK             (0x1U << VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_SHIFT)            /* 0x00000002 */
#define VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_SHIFT            (2U)
#define VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_MASK             (0x1U << VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_SHIFT)            /* 0x00000004 */
/* VOSOFTRST_CON00 */
#define VOCRU_VOSOFTRST_CON00_OFFSET                       (0xA00U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_SHIFT         (3U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_SHIFT)         /* 0x00000008 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_SHIFT         (4U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_SHIFT)         /* 0x00000010 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_SHIFT          (7U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_MASK           (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_SHIFT)          /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_SHIFT          (8U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_MASK           (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_SHIFT)          /* 0x00000100 */
#define VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_SHIFT      (9U)
#define VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_MASK       (0x1U << VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_SHIFT)      /* 0x00000200 */
#define VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_SHIFT         (10U)
#define VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_SHIFT)         /* 0x00000400 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_SHIFT        (12U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_SHIFT)        /* 0x00001000 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_VOP_SHIFT            (13U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_VOP_SHIFT)            /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON00_DRESETN_VOP_SHIFT            (14U)
#define VOCRU_VOSOFTRST_CON00_DRESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_DRESETN_VOP_SHIFT)            /* 0x00004000 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_SHIFT            (15U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VOP_SHIFT)            /* 0x00008000 */
/* VOSOFTRST_CON01 */
#define VOCRU_VOSOFTRST_CON01_OFFSET                       (0xA04U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_SHIFT        (6U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_SHIFT)        /* 0x00000040 */
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_SHIFT        (7U)
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_SHIFT)        /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_SHIFT            (8U)
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_MASK             (0x1U << VOCRU_VOSOFTRST_CON01_ARESETN_MAC_SHIFT)            /* 0x00000100 */
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_SHIFT        (12U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_SHIFT)        /* 0x00001000 */
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_SHIFT         (13U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_MASK          (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_SHIFT)         /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_SHIFT           (15U)
#define VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_MASK            (0x1U << VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_SHIFT)           /* 0x00008000 */
/* VOSOFTRST_CON02 */
#define VOCRU_VOSOFTRST_CON02_OFFSET                       (0xA08U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_SHIFT          (0U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_MASK           (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_SHIFT)          /* 0x00000001 */
#define VOCRU_VOSOFTRST_CON02_RESETN_TSADC_SHIFT           (1U)
#define VOCRU_VOSOFTRST_CON02_RESETN_TSADC_MASK            (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_TSADC_SHIFT)           /* 0x00000002 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_SHIFT        (3U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_MASK         (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_SHIFT)        /* 0x00000008 */
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_SHIFT    (5U)
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_MASK     (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_SHIFT)    /* 0x00000020 */
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_SHIFT    (6U)
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_MASK     (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_SHIFT)    /* 0x00000040 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_SHIFT         (7U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_MASK          (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_SHIFT)         /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_SHIFT     (9U)
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_MASK      (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_SHIFT)     /* 0x00000200 */
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_SHIFT     (10U)
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_MASK      (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_SHIFT)     /* 0x00000400 */
#define VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_SHIFT        (11U)
#define VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_MASK         (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_SHIFT)        /* 0x00000800 */
#define VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_SHIFT          (13U)
#define VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_MASK           (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_SHIFT)          /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_SHIFT       (14U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_MASK        (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_SHIFT)       /* 0x00004000 */
#define VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_SHIFT         (15U)
#define VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_MASK          (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_SHIFT)         /* 0x00008000 */
/* VOSOFTRST_CON03 */
#define VOCRU_VOSOFTRST_CON03_OFFSET                       (0xA0CU)
#define VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_SHIFT          (0U)
#define VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_MASK           (0x1U << VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_SHIFT)          /* 0x00000001 */
#define VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_SHIFT         (1U)
#define VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_MASK          (0x1U << VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_SHIFT)         /* 0x00000002 */
#define VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_SHIFT         (2U)
#define VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_MASK          (0x1U << VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_SHIFT)         /* 0x00000004 */
/*****************************************DDRCRU*****************************************/
/* DDRCLKSEL_CON00 */
#define DDRCRU_DDRCLKSEL_CON00_OFFSET                      (0x300U)
#define DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_SHIFT     (0U)
#define DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_MASK      (0x3U << DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_SHIFT)     /* 0x00000003 */
#define DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_SHIFT     (8U)
#define DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_MASK      (0x3U << DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_SHIFT)     /* 0x00000300 */
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_SHIFT (10U)
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_MASK (0x1FU << DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_SHIFT) /* 0x00007C00 */
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_SHIFT (15U)
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_MASK (0x1U << DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_SHIFT) /* 0x00008000 */
/* DDRGATE_CON00 */
#define DDRCRU_DDRGATE_CON00_OFFSET                        (0x800U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_SHIFT        (0U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_SHIFT)        /* 0x00000001 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_SHIFT         (2U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_SHIFT)         /* 0x00000004 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_SHIFT            (5U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_MASK             (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_SHIFT)            /* 0x00000020 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_SHIFT          (7U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_MASK           (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_SHIFT)          /* 0x00000080 */
#define DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_SHIFT     (8U)
#define DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_MASK      (0x1U << DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_SHIFT)     /* 0x00000100 */
#define DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_SHIFT         (11U)
#define DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_SHIFT)         /* 0x00000800 */
#define DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_SHIFT        (12U)
#define DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_SHIFT)        /* 0x00001000 */
#define DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_SHIFT        (13U)
#define DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_SHIFT)        /* 0x00002000 */
#define DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_SHIFT        (14U)
#define DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_SHIFT)        /* 0x00004000 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_SHIFT         (15U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_SHIFT)         /* 0x00008000 */
/* DDRGATE_CON01 */
#define DDRCRU_DDRGATE_CON01_OFFSET                        (0x804U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_SHIFT         (0U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_SHIFT)         /* 0x00000001 */
#define DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_SHIFT      (1U)
#define DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_MASK       (0x1U << DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_SHIFT)      /* 0x00000002 */
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_SHIFT        (2U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_SHIFT)        /* 0x00000004 */
#define DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_SHIFT          (3U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_MASK           (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_SHIFT)          /* 0x00000008 */
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_SHIFT (5U)
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_MASK (0x1U << DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_SHIFT) /* 0x00000020 */
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_SHIFT (6U)
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_MASK (0x1U << DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_SHIFT) /* 0x00000040 */
/* DDRSOFTRST_CON00 */
#define DDRCRU_DDRSOFTRST_CON00_OFFSET                     (0xA00U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_SHIFT      (2U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_SHIFT)      /* 0x00000004 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_SHIFT         (5U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_MASK          (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_SHIFT)         /* 0x00000020 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_SHIFT       (7U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_MASK        (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_SHIFT)       /* 0x00000080 */
#define DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_SHIFT  (8U)
#define DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_MASK   (0x1U << DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_SHIFT)  /* 0x00000100 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_SHIFT      (11U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_SHIFT)      /* 0x00000800 */
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_SHIFT     (13U)
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_SHIFT)     /* 0x00002000 */
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_SHIFT     (14U)
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_SHIFT)     /* 0x00004000 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_SHIFT      (15U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_SHIFT)      /* 0x00008000 */
/* DDRSOFTRST_CON01 */
#define DDRCRU_DDRSOFTRST_CON01_OFFSET                     (0xA04U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_SHIFT      (0U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_SHIFT)      /* 0x00000001 */
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_SHIFT     (2U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_SHIFT)     /* 0x00000004 */
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_SHIFT       (3U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_MASK        (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_SHIFT)       /* 0x00000008 */
/***************************************SUBDDRCRU****************************************/
/* SUBDDRMODE_CON00 */
#define SUBDDRCRU_SUBDDRMODE_CON00_OFFSET                  (0x280U)
#define SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_SHIFT     (0U)
#define SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_MASK      (0x3U << SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_SHIFT)     /* 0x00000003 */
/* SUBDDRCLKSEL_CON00 */
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_OFFSET                (0x300U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_SHIFT (0U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_MASK (0x1FU << SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_SHIFT) /* 0x0000001F */
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_SHIFT (5U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_MASK (0x1U << SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_SHIFT) /* 0x00000020 */
/* SUBDDRGATE_CON00 */
#define SUBDDRCRU_SUBDDRGATE_CON00_OFFSET                  (0x800U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_SHIFT   (0U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_MASK    (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_SHIFT)   /* 0x00000001 */
#define SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_SHIFT      (1U)
#define SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_MASK       (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_SHIFT)      /* 0x00000002 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_SHIFT (2U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_MASK (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_SHIFT) /* 0x00000004 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_SHIFT  (3U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_MASK   (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_SHIFT)  /* 0x00000008 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_SHIFT     (4U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_MASK      (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_SHIFT)     /* 0x00000010 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_SHIFT    (5U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_MASK     (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_SHIFT)    /* 0x00000020 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_SHIFT    (6U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_MASK     (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_SHIFT)    /* 0x00000040 */
/* SUBDDRSOFTRST_CON00 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_OFFSET               (0xA00U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_SHIFT (0U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_MASK (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_SHIFT) /* 0x00000001 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_SHIFT   (1U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_MASK    (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_SHIFT)   /* 0x00000002 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_SHIFT (3U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_MASK (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_SHIFT) /* 0x00000008 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_SHIFT  (4U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_MASK   (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_SHIFT)  /* 0x00000010 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_SHIFT (5U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_MASK  (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_SHIFT) /* 0x00000020 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_SHIFT (6U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_MASK  (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_SHIFT) /* 0x00000040 */
/******************************************UART******************************************/
/* RBR */
#define UART_RBR_OFFSET                                    (0x0U)
#define UART_RBR                                           (0x0U)
#define UART_RBR_DATA_INPUT_SHIFT                          (0U)
#define UART_RBR_DATA_INPUT_MASK                           (0xFFU << UART_RBR_DATA_INPUT_SHIFT)                         /* 0x000000FF */
/* DLL */
#define UART_DLL_OFFSET                                    (0x0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT                 (0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_MASK                  (0xFFU << UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT)                /* 0x000000FF */
/* THR */
#define UART_THR_OFFSET                                    (0x0U)
#define UART_THR_DATA_OUTPUT_SHIFT                         (0U)
#define UART_THR_DATA_OUTPUT_MASK                          (0xFFU << UART_THR_DATA_OUTPUT_SHIFT)                        /* 0x000000FF */
/* DLH */
#define UART_DLH_OFFSET                                    (0x4U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT                 (0U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_MASK                  (0xFFU << UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT)                /* 0x000000FF */
/* IER */
#define UART_IER_OFFSET                                    (0x4U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT       (0U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_MASK        (0x1U << UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT)       /* 0x00000001 */
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT             (1U)
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_MASK              (0x1U << UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT)             /* 0x00000002 */
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT          (2U)
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_MASK           (0x1U << UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT)          /* 0x00000004 */
#define UART_IER_MODEM_STATUS_INT_EN_SHIFT                 (3U)
#define UART_IER_MODEM_STATUS_INT_EN_MASK                  (0x1U << UART_IER_MODEM_STATUS_INT_EN_SHIFT)                 /* 0x00000008 */
#define UART_IER_PROG_THRE_INT_EN_SHIFT                    (7U)
#define UART_IER_PROG_THRE_INT_EN_MASK                     (0x1U << UART_IER_PROG_THRE_INT_EN_SHIFT)                    /* 0x00000080 */
/* FCR */
#define UART_FCR_OFFSET                                    (0x8U)
#define UART_FCR_FIFO_EN_SHIFT                             (0U)
#define UART_FCR_FIFO_EN_MASK                              (0x1U << UART_FCR_FIFO_EN_SHIFT)                             /* 0x00000001 */
#define UART_FCR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_FCR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_FCR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_FCR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_FCR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_FCR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
#define UART_FCR_DMA_MODE_SHIFT                            (3U)
#define UART_FCR_DMA_MODE_MASK                             (0x1U << UART_FCR_DMA_MODE_SHIFT)                            /* 0x00000008 */
#define UART_FCR_TX_EMPTY_TRIGGER_SHIFT                    (4U)
#define UART_FCR_TX_EMPTY_TRIGGER_MASK                     (0x3U << UART_FCR_TX_EMPTY_TRIGGER_SHIFT)                    /* 0x00000030 */
#define UART_FCR_RCVR_TRIGGER_SHIFT                        (6U)
#define UART_FCR_RCVR_TRIGGER_MASK                         (0x3U << UART_FCR_RCVR_TRIGGER_SHIFT)                        /* 0x000000C0 */
/* IIR */
#define UART_IIR_OFFSET                                    (0x8U)
#define UART_IIR                                           (0x1U)
#define UART_IIR_INT_ID_SHIFT                              (0U)
#define UART_IIR_INT_ID_MASK                               (0xFU << UART_IIR_INT_ID_SHIFT)                              /* 0x0000000F */
#define UART_IIR_FIFOS_EN_SHIFT                            (6U)
#define UART_IIR_FIFOS_EN_MASK                             (0x3U << UART_IIR_FIFOS_EN_SHIFT)                            /* 0x000000C0 */
/* LCR */
#define UART_LCR_OFFSET                                    (0xCU)
#define UART_LCR_DATA_LENGTH_SEL_SHIFT                     (0U)
#define UART_LCR_DATA_LENGTH_SEL_MASK                      (0x3U << UART_LCR_DATA_LENGTH_SEL_SHIFT)                     /* 0x00000003 */
#define UART_LCR_STOP_BITS_NUM_SHIFT                       (2U)
#define UART_LCR_STOP_BITS_NUM_MASK                        (0x1U << UART_LCR_STOP_BITS_NUM_SHIFT)                       /* 0x00000004 */
#define UART_LCR_PARITY_EN_SHIFT                           (3U)
#define UART_LCR_PARITY_EN_MASK                            (0x1U << UART_LCR_PARITY_EN_SHIFT)                           /* 0x00000008 */
#define UART_LCR_EVEN_PARITY_SEL_SHIFT                     (4U)
#define UART_LCR_EVEN_PARITY_SEL_MASK                      (0x1U << UART_LCR_EVEN_PARITY_SEL_SHIFT)                     /* 0x00000010 */
#define UART_LCR_BREAK_CTRL_SHIFT                          (6U)
#define UART_LCR_BREAK_CTRL_MASK                           (0x1U << UART_LCR_BREAK_CTRL_SHIFT)                          /* 0x00000040 */
#define UART_LCR_DIV_LAT_ACCESS_SHIFT                      (7U)
#define UART_LCR_DIV_LAT_ACCESS_MASK                       (0x1U << UART_LCR_DIV_LAT_ACCESS_SHIFT)                      /* 0x00000080 */
/* MCR */
#define UART_MCR_OFFSET                                    (0x10U)
#define UART_MCR_DATA_TERMINAL_READY_SHIFT                 (0U)
#define UART_MCR_DATA_TERMINAL_READY_MASK                  (0x1U << UART_MCR_DATA_TERMINAL_READY_SHIFT)                 /* 0x00000001 */
#define UART_MCR_REQ_TO_SEND_SHIFT                         (1U)
#define UART_MCR_REQ_TO_SEND_MASK                          (0x1U << UART_MCR_REQ_TO_SEND_SHIFT)                         /* 0x00000002 */
#define UART_MCR_OUT1_SHIFT                                (2U)
#define UART_MCR_OUT1_MASK                                 (0x1U << UART_MCR_OUT1_SHIFT)                                /* 0x00000004 */
#define UART_MCR_OUT2_SHIFT                                (3U)
#define UART_MCR_OUT2_MASK                                 (0x1U << UART_MCR_OUT2_SHIFT)                                /* 0x00000008 */
#define UART_MCR_LOOPBACK_SHIFT                            (4U)
#define UART_MCR_LOOPBACK_MASK                             (0x1U << UART_MCR_LOOPBACK_SHIFT)                            /* 0x00000010 */
#define UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT                   (5U)
#define UART_MCR_AUTO_FLOW_CTRL_EN_MASK                    (0x1U << UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT)                   /* 0x00000020 */
#define UART_MCR_SIR_MODE_EN_SHIFT                         (6U)
#define UART_MCR_SIR_MODE_EN_MASK                          (0x1U << UART_MCR_SIR_MODE_EN_SHIFT)                         /* 0x00000040 */
/* LSR */
#define UART_LSR_OFFSET                                    (0x14U)
#define UART_LSR                                           (0x60U)
#define UART_LSR_DATA_READY_SHIFT                          (0U)
#define UART_LSR_DATA_READY_MASK                           (0x1U << UART_LSR_DATA_READY_SHIFT)                          /* 0x00000001 */
#define UART_LSR_OVERRUN_ERROR_SHIFT                       (1U)
#define UART_LSR_OVERRUN_ERROR_MASK                        (0x1U << UART_LSR_OVERRUN_ERROR_SHIFT)                       /* 0x00000002 */
#define UART_LSR_PARITY_EROR_SHIFT                         (2U)
#define UART_LSR_PARITY_EROR_MASK                          (0x1U << UART_LSR_PARITY_EROR_SHIFT)                         /* 0x00000004 */
#define UART_LSR_FRAMING_ERROR_SHIFT                       (3U)
#define UART_LSR_FRAMING_ERROR_MASK                        (0x1U << UART_LSR_FRAMING_ERROR_SHIFT)                       /* 0x00000008 */
#define UART_LSR_BREAK_INT_SHIFT                           (4U)
#define UART_LSR_BREAK_INT_MASK                            (0x1U << UART_LSR_BREAK_INT_SHIFT)                           /* 0x00000010 */
#define UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT                (5U)
#define UART_LSR_TRANS_HOLD_REG_EMPTY_MASK                 (0x1U << UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT)                /* 0x00000020 */
#define UART_LSR_TRANS_EMPTY_SHIFT                         (6U)
#define UART_LSR_TRANS_EMPTY_MASK                          (0x1U << UART_LSR_TRANS_EMPTY_SHIFT)                         /* 0x00000040 */
#define UART_LSR_RECEIVER_FIFO_ERROR_SHIFT                 (7U)
#define UART_LSR_RECEIVER_FIFO_ERROR_MASK                  (0x1U << UART_LSR_RECEIVER_FIFO_ERROR_SHIFT)                 /* 0x00000080 */
/* MSR */
#define UART_MSR_OFFSET                                    (0x18U)
#define UART_MSR                                           (0x0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT                 (0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_MASK                  (0x1U << UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT)                 /* 0x00000001 */
#define UART_MSR_DELTA_DATA_SET_READY_SHIFT                (1U)
#define UART_MSR_DELTA_DATA_SET_READY_MASK                 (0x1U << UART_MSR_DELTA_DATA_SET_READY_SHIFT)                /* 0x00000002 */
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT        (2U)
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_MASK         (0x1U << UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT)        /* 0x00000004 */
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT           (3U)
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_MASK            (0x1U << UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT)           /* 0x00000008 */
#define UART_MSR_CLEAR_TO_SEND_SHIFT                       (4U)
#define UART_MSR_CLEAR_TO_SEND_MASK                        (0x1U << UART_MSR_CLEAR_TO_SEND_SHIFT)                       /* 0x00000010 */
#define UART_MSR_DATA_SET_READY_SHIFT                      (5U)
#define UART_MSR_DATA_SET_READY_MASK                       (0x1U << UART_MSR_DATA_SET_READY_SHIFT)                      /* 0x00000020 */
#define UART_MSR_RING_INDICATOR_SHIFT                      (6U)
#define UART_MSR_RING_INDICATOR_MASK                       (0x1U << UART_MSR_RING_INDICATOR_SHIFT)                      /* 0x00000040 */
#define UART_MSR_DATA_CARRIOR_DETECT_SHIFT                 (7U)
#define UART_MSR_DATA_CARRIOR_DETECT_MASK                  (0x1U << UART_MSR_DATA_CARRIOR_DETECT_SHIFT)                 /* 0x00000080 */
/* SCR */
#define UART_SCR_OFFSET                                    (0x1CU)
#define UART_SCR_TEMP_STORE_SPACE_SHIFT                    (0U)
#define UART_SCR_TEMP_STORE_SPACE_MASK                     (0xFFU << UART_SCR_TEMP_STORE_SPACE_SHIFT)                   /* 0x000000FF */
/* SRBR */
#define UART_SRBR_OFFSET                                   (0x30U)
#define UART_SRBR                                          (0x0U)
#define UART_SRBR_SHADOW_RBR_SHIFT                         (0U)
#define UART_SRBR_SHADOW_RBR_MASK                          (0xFFU << UART_SRBR_SHADOW_RBR_SHIFT)                        /* 0x000000FF */
/* STHR */
#define UART_STHR_OFFSET                                   (0x30U)
#define UART_STHR_SHADOW_THR_SHIFT                         (0U)
#define UART_STHR_SHADOW_THR_MASK                          (0xFFU << UART_STHR_SHADOW_THR_SHIFT)                        /* 0x000000FF */
/* FAR */
#define UART_FAR_OFFSET                                    (0x70U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT                 (0U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_MASK                  (0x1U << UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT)                 /* 0x00000001 */
/* TFR */
#define UART_TFR_OFFSET                                    (0x74U)
#define UART_TFR                                           (0x0U)
#define UART_TFR_TRANS_FIFO_READ_SHIFT                     (0U)
#define UART_TFR_TRANS_FIFO_READ_MASK                      (0xFFU << UART_TFR_TRANS_FIFO_READ_SHIFT)                    /* 0x000000FF */
/* RFW */
#define UART_RFW_OFFSET                                    (0x78U)
#define UART_RFW_RECEIVE_FIFO_WRITE_SHIFT                  (0U)
#define UART_RFW_RECEIVE_FIFO_WRITE_MASK                   (0xFFU << UART_RFW_RECEIVE_FIFO_WRITE_SHIFT)                 /* 0x000000FF */
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT           (8U)
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_MASK            (0x1U << UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT)           /* 0x00000100 */
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT          (9U)
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_MASK           (0x1U << UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT)          /* 0x00000200 */
/* USR */
#define UART_USR_OFFSET                                    (0x7CU)
#define UART_USR                                           (0x6U)
#define UART_USR_UART_BUSY_SHIFT                           (0U)
#define UART_USR_UART_BUSY_MASK                            (0x1U << UART_USR_UART_BUSY_SHIFT)                           /* 0x00000001 */
#define UART_USR_TRANS_FIFO_NOT_FULL_SHIFT                 (1U)
#define UART_USR_TRANS_FIFO_NOT_FULL_MASK                  (0x1U << UART_USR_TRANS_FIFO_NOT_FULL_SHIFT)                 /* 0x00000002 */
#define UART_USR_TRASN_FIFO_EMPTY_SHIFT                    (2U)
#define UART_USR_TRASN_FIFO_EMPTY_MASK                     (0x1U << UART_USR_TRASN_FIFO_EMPTY_SHIFT)                    /* 0x00000004 */
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT              (3U)
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_MASK               (0x1U << UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT)              /* 0x00000008 */
#define UART_USR_RECEIVE_FIFO_FULL_SHIFT                   (4U)
#define UART_USR_RECEIVE_FIFO_FULL_MASK                    (0x1U << UART_USR_RECEIVE_FIFO_FULL_SHIFT)                   /* 0x00000010 */
/* TFL */
#define UART_TFL_OFFSET                                    (0x80U)
#define UART_TFL                                           (0x0U)
#define UART_TFL_TRANS_FIFO_LEVEL_SHIFT                    (0U)
#define UART_TFL_TRANS_FIFO_LEVEL_MASK                     (0x3FU << UART_TFL_TRANS_FIFO_LEVEL_SHIFT)                   /* 0x0000003F */
/* RFL */
#define UART_RFL_OFFSET                                    (0x84U)
#define UART_RFL                                           (0x0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT                  (0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_MASK                   (0x3FU << UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT)                 /* 0x0000003F */
/* SRR */
#define UART_SRR_OFFSET                                    (0x88U)
#define UART_SRR_UART_RESET_SHIFT                          (0U)
#define UART_SRR_UART_RESET_MASK                           (0x1U << UART_SRR_UART_RESET_SHIFT)                          /* 0x00000001 */
#define UART_SRR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_SRR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_SRR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_SRR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_SRR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_SRR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
/* SRTS */
#define UART_SRTS_OFFSET                                   (0x8CU)
#define UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT                 (0U)
#define UART_SRTS_SHADOW_REQ_TO_SEND_MASK                  (0x1U << UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT)                 /* 0x00000001 */
/* SBCR */
#define UART_SBCR_OFFSET                                   (0x90U)
#define UART_SBCR_SHADOW_BREAK_CTRL_SHIFT                  (0U)
#define UART_SBCR_SHADOW_BREAK_CTRL_MASK                   (0x1U << UART_SBCR_SHADOW_BREAK_CTRL_SHIFT)                  /* 0x00000001 */
/* SDMAM */
#define UART_SDMAM_OFFSET                                  (0x94U)
#define UART_SDMAM_SHADOW_DMA_MODE_SHIFT                   (0U)
#define UART_SDMAM_SHADOW_DMA_MODE_MASK                    (0x1U << UART_SDMAM_SHADOW_DMA_MODE_SHIFT)                   /* 0x00000001 */
/* SFE */
#define UART_SFE_OFFSET                                    (0x98U)
#define UART_SFE_SHADOW_FIFO_EN_SHIFT                      (0U)
#define UART_SFE_SHADOW_FIFO_EN_MASK                       (0x1U << UART_SFE_SHADOW_FIFO_EN_SHIFT)                      /* 0x00000001 */
/* SRT */
#define UART_SRT_OFFSET                                    (0x9CU)
#define UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT                 (0U)
#define UART_SRT_SHADOW_RCVR_TRIGGER_MASK                  (0x3U << UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT)                 /* 0x00000003 */
/* STET */
#define UART_STET_OFFSET                                   (0xA0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT            (0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_MASK             (0x3U << UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT)            /* 0x00000003 */
/* HTX */
#define UART_HTX_OFFSET                                    (0xA4U)
#define UART_HTX_HALT_TX_EN_SHIFT                          (0U)
#define UART_HTX_HALT_TX_EN_MASK                           (0x1U << UART_HTX_HALT_TX_EN_SHIFT)                          /* 0x00000001 */
/* DMASA */
#define UART_DMASA_OFFSET                                  (0xA8U)
#define UART_DMASA_DMA_SOFTWARE_ACK_SHIFT                  (0U)
#define UART_DMASA_DMA_SOFTWARE_ACK_MASK                   (0x1U << UART_DMASA_DMA_SOFTWARE_ACK_SHIFT)                  /* 0x00000001 */
/* CPR */
#define UART_CPR_OFFSET                                    (0xF4U)
#define UART_CPR                                           (0x0U)
#define UART_CPR_APB_DATA_WIDTH_SHIFT                      (0U)
#define UART_CPR_APB_DATA_WIDTH_MASK                       (0x3U << UART_CPR_APB_DATA_WIDTH_SHIFT)                      /* 0x00000003 */
#define UART_CPR_AFCE_MODE_SHIFT                           (4U)
#define UART_CPR_AFCE_MODE_MASK                            (0x1U << UART_CPR_AFCE_MODE_SHIFT)                           /* 0x00000010 */
#define UART_CPR_THRE_MODE_SHIFT                           (5U)
#define UART_CPR_THRE_MODE_MASK                            (0x1U << UART_CPR_THRE_MODE_SHIFT)                           /* 0x00000020 */
#define UART_CPR_SIR_MODE_SHIFT                            (6U)
#define UART_CPR_SIR_MODE_MASK                             (0x1U << UART_CPR_SIR_MODE_SHIFT)                            /* 0x00000040 */
#define UART_CPR_SIR_LP_MODE_SHIFT                         (7U)
#define UART_CPR_SIR_LP_MODE_MASK                          (0x1U << UART_CPR_SIR_LP_MODE_SHIFT)                         /* 0x00000080 */
#define UART_CPR_NEW_FEAT_SHIFT                            (8U)
#define UART_CPR_NEW_FEAT_MASK                             (0x1U << UART_CPR_NEW_FEAT_SHIFT)                            /* 0x00000100 */
#define UART_CPR_FIFO_ACCESS_SHIFT                         (9U)
#define UART_CPR_FIFO_ACCESS_MASK                          (0x1U << UART_CPR_FIFO_ACCESS_SHIFT)                         /* 0x00000200 */
#define UART_CPR_FIFO_STAT_SHIFT                           (10U)
#define UART_CPR_FIFO_STAT_MASK                            (0x1U << UART_CPR_FIFO_STAT_SHIFT)                           /* 0x00000400 */
#define UART_CPR_SHADOW_SHIFT                              (11U)
#define UART_CPR_SHADOW_MASK                               (0x1U << UART_CPR_SHADOW_SHIFT)                              /* 0x00000800 */
#define UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT             (12U)
#define UART_CPR_UART_ADD_ENCODED_PARAMS_MASK              (0x1U << UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT)             /* 0x00001000 */
#define UART_CPR_DMA_EXTRA_SHIFT                           (13U)
#define UART_CPR_DMA_EXTRA_MASK                            (0x1U << UART_CPR_DMA_EXTRA_SHIFT)                           /* 0x00002000 */
#define UART_CPR_FIFO_MODE_SHIFT                           (16U)
#define UART_CPR_FIFO_MODE_MASK                            (0xFFU << UART_CPR_FIFO_MODE_SHIFT)                          /* 0x00FF0000 */
/* UCV */
#define UART_UCV_OFFSET                                    (0xF8U)
#define UART_UCV                                           (0x330372AU)
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_OFFSET                                    (0xFCU)
#define UART_CTR                                           (0x44570110U)
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
/*****************************************ICACHE*****************************************/
/* CACHE_CTRL */
#define ICACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << ICACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define ICACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define ICACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define ICACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define ICACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define ICACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define ICACHE_CACHE_ERR_HADDR                             (0x0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define ICACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define ICACHE_CACHE_STATUS                                (0x0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define ICACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define ICACHE_PMU_RD_NUM_CNT                              (0x0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define ICACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define ICACHE_PMU_WR_NUM_CNT                              (0x0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define ICACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define ICACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define ICACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define ICACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define ICACHE_PMU_STB_RD_HIT_CNT                          (0x0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define ICACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define ICACHE_PMU_RD_HIT_CNT                              (0x0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define ICACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define ICACHE_PMU_WR_HIT_CNT                              (0x0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define ICACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define ICACHE_PMU_RD_LAT_CNT                              (0x0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define ICACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define ICACHE_PMU_WR_LAT_CNT                              (0x0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_OFFSET                             (0xF0U)
#define ICACHE_REVISION                                    (0x100U)
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/*****************************************DCACHE*****************************************/
/* CACHE_CTRL */
#define DCACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << DCACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define DCACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define DCACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define DCACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define DCACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define DCACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define DCACHE_CACHE_ERR_HADDR                             (0x0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define DCACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define DCACHE_CACHE_STATUS                                (0x0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define DCACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define DCACHE_PMU_RD_NUM_CNT                              (0x0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define DCACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define DCACHE_PMU_WR_NUM_CNT                              (0x0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define DCACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define DCACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define DCACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define DCACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define DCACHE_PMU_STB_RD_HIT_CNT                          (0x0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define DCACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define DCACHE_PMU_RD_HIT_CNT                              (0x0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define DCACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define DCACHE_PMU_WR_HIT_CNT                              (0x0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define DCACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define DCACHE_PMU_RD_LAT_CNT                              (0x0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define DCACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define DCACHE_PMU_WR_LAT_CNT                              (0x0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_OFFSET                             (0xF0U)
#define DCACHE_REVISION                                    (0x100U)
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/* TOP CRU */
/********Name=CRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_REF_PVTPLL_0 39U
#define SRST_REF_PVTPLL_1 40U
#define SRST_P_CRU        42U
#define SRST_P_CRU_BIU    43U

/********Name=GATE_CON00,Offset=0x800********/
#define CLK_MATRIX_50M_SRC_GATE  1U
#define CLK_MATRIX_100M_SRC_GATE 2U
#define CLK_MATRIX_150M_SRC_GATE 3U
#define CLK_MATRIX_200M_SRC_GATE 4U
#define CLK_MATRIX_250M_SRC_GATE 5U
#define CLK_MATRIX_300M_SRC_GATE 6U
#define CLK_MATRIX_339M_SRC_GATE 7U
#define CLK_MATRIX_400M_SRC_GATE 8U
#define CLK_MATRIX_450M_SRC_GATE 9U
#define CLK_MATRIX_500M_SRC_GATE 10U
#define CLK_UART0_GATE           11U
#define CLK_UART0_FRAC_GATE      12U
#define SCLK_UART0_GATE          13U
#define CLK_UART1_GATE           14U
#define CLK_UART1_FRAC_GATE      15U
/********Name=GATE_CON01,Offset=0x804********/
#define SCLK_UART1_GATE           16U
#define CLK_UART2_GATE            17U
#define CLK_UART2_FRAC_GATE       18U
#define SCLK_UART2_GATE           19U
#define CLK_UART3_GATE            20U
#define CLK_UART3_FRAC_GATE       21U
#define SCLK_UART3_GATE           22U
#define CLK_UART4_GATE            23U
#define CLK_UART4_FRAC_GATE       24U
#define SCLK_UART4_GATE           25U
#define CLK_UART5_GATE            26U
#define CLK_UART5_FRAC_GATE       27U
#define SCLK_UART5_GATE           28U
#define CLK_I2S0_8CH_TX_GATE      29U
#define CLK_I2S0_8CH_FRAC_TX_GATE 30U
#define MCLK_I2S0_8CH_TX_SRC_GATE 31U
/********Name=GATE_CON02,Offset=0x808********/
#define CLK_I2S0_8CH_RX_GATE      32U
#define CLK_I2S0_8CH_FRAC_RX_GATE 33U
#define MCLK_I2S0_8CH_RX_GATE     34U
#define DCLK_VOP_SRC_GATE         38U
#define CLK_REF_PVTPLL_0_GATE     39U
#define CLK_REF_PVTPLL_1_GATE     40U
#define PCLK_TOP_ROOT_GATE        41U
#define PCLK_CRU_GATE             42U
#define PCLK_CRU_BIU_GATE         43U
#define CLK_TESTOUT_GATE          44U
#define CLK_APLLTEST_GATE         45U
#define CLK_DPLLTEST_GATE         46U
#define CLK_CPLLTEST_GATE         47U
/********Name=GATE_CON03,Offset=0x80C********/
#define CLK_GPLLTEST_GATE       48U
#define CLK_REF_MIPI0_SRC_GATE  52U
#define CLK_REF_MIPI0_FRAC_GATE 53U
#define CLK_REF_MIPI0_OUT_GATE  54U
#define CLK_REF_MIPI1_SRC_GATE  55U
#define CLK_REF_MIPI1_FRAC_GATE 56U
#define CLK_REF_MIPI1_OUT_GATE  57U
#define CLK_VICAP_M0_SRC_GATE   58U
#define CLK_VICAP_M0_FRAC_GATE  59U
#define CLK_VICAP_M0_OUT_GATE   60U
#define CLK_VICAP_M1_SRC_GATE   61U
#define CLK_VICAP_M1_FRAC_GATE  62U
#define CLK_VICAP_M1_OUT_GATE   63U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_50M_SRC_DIV  0x05000000U
#define CLK_MATRIX_100M_SRC_DIV 0x05060000U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_MATRIX_150M_SRC_DIV 0x05000001U
#define CLK_MATRIX_200M_SRC_DIV 0x05060001U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_MATRIX_250M_SRC_DIV 0x05000002U
#define CLK_MATRIX_300M_SRC_DIV 0x05060002U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_MATRIX_339M_SRC_DIV 0x05000003U
#define CLK_MATRIX_400M_SRC_DIV 0x05060003U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_MATRIX_450M_SRC_DIV 0x05000004U
#define CLK_MATRIX_500M_SRC_DIV 0x05060004U
/********Name=CRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_UART0_SRC_DIV 0x05000005U
/********Name=CRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_UART0_FRAC_DIV 0x20000006U
/********Name=CRU_CLKSEL_CON07,Offset=0x31C********/
#define CLK_UART1_SRC_DIV 0x05020007U
/********Name=CRU_CLKSEL_CON08,Offset=0x320********/
#define CLK_UART1_FRAC_DIV 0x20000008U
/********Name=CRU_CLKSEL_CON09,Offset=0x324********/
#define CLK_UART2_SRC_DIV 0x05020009U
/********Name=CRU_CLKSEL_CON10,Offset=0x328********/
#define CLK_UART2_FRAC_DIV 0x2000000AU
/********Name=CRU_CLKSEL_CON11,Offset=0x32C********/
#define CLK_UART3_SRC_DIV 0x0502000BU
/********Name=CRU_CLKSEL_CON12,Offset=0x330********/
#define CLK_UART3_FRAC_DIV 0x2000000CU
/********Name=CRU_CLKSEL_CON13,Offset=0x334********/
#define CLK_UART4_SRC_DIV 0x0502000DU
/********Name=CRU_CLKSEL_CON14,Offset=0x338********/
#define CLK_UART4_FRAC_DIV 0x2000000EU
/********Name=CRU_CLKSEL_CON15,Offset=0x33C********/
#define CLK_UART5_SRC_DIV 0x0502000FU
/********Name=CRU_CLKSEL_CON16,Offset=0x340********/
#define CLK_UART5_FRAC_DIV 0x20000010U
/********Name=CRU_CLKSEL_CON17,Offset=0x344********/
#define CLK_I2S0_8CH_TX_SRC_DIV 0x05020011U
/********Name=CRU_CLKSEL_CON18,Offset=0x348********/
#define CLK_I2S0_8CH_TX_FRAC_DIV 0x20000012U
/********Name=CRU_CLKSEL_CON19,Offset=0x34C********/
#define CLK_I2S0_8CH_RX_SRC_DIV 0x05020013U
/********Name=CRU_CLKSEL_CON20,Offset=0x350********/
#define CLK_I2S0_8CH_RX_FRAC_DIV 0x20000014U
/********Name=CRU_CLKSEL_CON21,Offset=0x354********/
/********Name=CRU_CLKSEL_CON23,Offset=0x35C********/
#define DCLK_VOP_SRC_DIV     0x05030017U
#define CLK_REF_PVTPLL_0_DIV 0x05090017U
/********Name=CRU_CLKSEL_CON24,Offset=0x360********/
#define CLK_REF_PVTPLL_1_DIV     0x05000018U
#define CLK_TESTOUT_TOP2VEPU_DIV 0x05070018U
/********Name=CRU_CLKSEL_CON25,Offset=0x364********/
#define CLK_REF_MIPI0_SRC_DIV 0x05020019U
/********Name=CRU_CLKSEL_CON26,Offset=0x368********/
#define CLK_REF_MIPI0_FRAC_DIV 0x2000001AU
/********Name=CRU_CLKSEL_CON27,Offset=0x36C********/
#define CLK_REF_MIPI1_SRC_DIV 0x0502001BU
/********Name=CRU_CLKSEL_CON28,Offset=0x370********/
#define CLK_REF_MIPI1_FRAC_DIV 0x2000001CU
/********Name=CRU_CLKSEL_CON29,Offset=0x374********/
#define CLK_VICAP_M0_SRC_DIV 0x0502001DU
/********Name=CRU_CLKSEL_CON30,Offset=0x378********/
#define CLK_VICAP_M0_FRAC_DIV 0x2000001EU
/********Name=CRU_CLKSEL_CON31,Offset=0x37C********/
#define CLK_VICAP_M1_SRC_DIV 0x0502001FU
/********Name=CRU_CLKSEL_CON32,Offset=0x380********/
#define CLK_VICAP_M1_FRAC_DIV 0x20000020U
/********Name=CRU_CLKSEL_CON33,Offset=0x384********/

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_50M_SRC_SEL               0x01050000U
#define CLK_MATRIX_50M_SRC_SEL_CLK_CPLL_MUX  0U
#define CLK_MATRIX_100M_SRC_SEL              0x010B0000U
#define CLK_MATRIX_100M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_MATRIX_150M_SRC_SEL              0x01050001U
#define CLK_MATRIX_150M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_200M_SRC_SEL              0x010B0001U
#define CLK_MATRIX_200M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_MATRIX_250M_SRC_SEL              0x01050002U
#define CLK_MATRIX_250M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_300M_SRC_SEL              0x010B0002U
#define CLK_MATRIX_300M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_MATRIX_339M_SRC_SEL              0x01050003U
#define CLK_MATRIX_339M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_400M_SRC_SEL              0x010B0003U
#define CLK_MATRIX_400M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_MATRIX_450M_SRC_SEL              0x01050004U
#define CLK_MATRIX_450M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_500M_SRC_SEL              0x010B0004U
#define CLK_MATRIX_500M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_UART0_SRC_SEL              0x01050005U
#define CLK_UART0_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON06,Offset=0x318********/
/********Name=CRU_CLKSEL_CON07,Offset=0x31C********/
#define SCLK_UART0_SRC_SEL               0x02000007U
#define SCLK_UART0_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART1_SRC_SEL                0x01070007U
#define CLK_UART1_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON08,Offset=0x320********/
/********Name=CRU_CLKSEL_CON09,Offset=0x324********/
#define SCLK_UART1_SRC_SEL               0x02000009U
#define SCLK_UART1_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART2_SRC_SEL                0x01070009U
#define CLK_UART2_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON10,Offset=0x328********/
/********Name=CRU_CLKSEL_CON11,Offset=0x32C********/
#define SCLK_UART2_SRC_SEL               0x0200000BU
#define SCLK_UART2_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART3_SRC_SEL                0x0107000BU
#define CLK_UART3_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON12,Offset=0x330********/
/********Name=CRU_CLKSEL_CON13,Offset=0x334********/
#define SCLK_UART3_SRC_SEL               0x0200000DU
#define SCLK_UART3_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART4_SRC_SEL                0x0107000DU
#define CLK_UART4_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON14,Offset=0x338********/
/********Name=CRU_CLKSEL_CON15,Offset=0x33C********/
#define SCLK_UART4_SRC_SEL               0x0200000FU
#define SCLK_UART4_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART5_SRC_SEL                0x0107000FU
#define CLK_UART5_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON16,Offset=0x340********/
/********Name=CRU_CLKSEL_CON17,Offset=0x344********/
#define SCLK_UART5_SRC_SEL                   0x02000011U
#define SCLK_UART5_SRC_SEL_XIN_OSC0_FUNC     0U
#define CLK_I2S0_8CH_TX_SRC_SEL              0x01070011U
#define CLK_I2S0_8CH_TX_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON18,Offset=0x348********/
/********Name=CRU_CLKSEL_CON19,Offset=0x34C********/
#define MCLK_I2S0_8CH_TX_SRC_PERI_SEL               0x02000013U
#define MCLK_I2S0_8CH_TX_SRC_PERI_SEL_XIN_OSC0_HALF 0U
#define CLK_I2S0_8CH_RX_SRC_SEL                     0x01070013U
#define CLK_I2S0_8CH_RX_SRC_SEL_CLK_CPLL_MUX        0U
/********Name=CRU_CLKSEL_CON20,Offset=0x350********/
/********Name=CRU_CLKSEL_CON21,Offset=0x354********/
#define MCLK_I2S0_8CH_RX_SRC_PERI_SEL               0x02000015U
#define MCLK_I2S0_8CH_RX_SRC_PERI_SEL_XIN_OSC0_HALF 0U
#define I2S0_8CH_MCLKOUT_SEL                        0x02020015U
#define I2S0_8CH_MCLKOUT_SEL_XIN_OSC0_HALF          0U
/********Name=CRU_CLKSEL_CON23,Offset=0x35C********/
#define DCLK_VOP_SRC_SEL              0x01080017U
#define DCLK_VOP_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON24,Offset=0x360********/
#define PCLK_TOP_ROOT_SEL                      0x02050018U
#define PCLK_TOP_ROOT_SEL_XIN_OSC0_FUNC        0U
#define CLK_TESTOUT_TOP2VEPU_SEL               0x020C0018U
#define CLK_TESTOUT_TOP2VEPU_SEL_PCLK_TOP_ROOT 0U
/********Name=CRU_CLKSEL_CON25,Offset=0x364********/
#define CLK_REF_MIPI0_SRC_SEL              0x01070019U
#define CLK_REF_MIPI0_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON26,Offset=0x368********/
/********Name=CRU_CLKSEL_CON27,Offset=0x36C********/
#define CLK_REF_MIPI0_OUT_SEL               0x0200001BU
#define CLK_REF_MIPI0_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_REF_MIPI1_SRC_SEL               0x0107001BU
#define CLK_REF_MIPI1_SRC_SEL_CLK_CPLL_MUX  0U
/********Name=CRU_CLKSEL_CON28,Offset=0x370********/
/********Name=CRU_CLKSEL_CON29,Offset=0x374********/
#define CLK_REF_MIPI1_OUT_SEL               0x0200001DU
#define CLK_REF_MIPI1_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_VICAP_M0_SRC_SEL                0x0107001DU
#define CLK_VICAP_M0_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON30,Offset=0x378********/
/********Name=CRU_CLKSEL_CON31,Offset=0x37C********/
#define CLK_VICAP_M0_OUT_SEL               0x0200001FU
#define CLK_VICAP_M0_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_VICAP_M1_SRC_SEL               0x0107001FU
#define CLK_VICAP_M1_SRC_SEL_CLK_CPLL_MUX  0U
/********Name=CRU_CLKSEL_CON32,Offset=0x380********/
/********Name=CRU_CLKSEL_CON33,Offset=0x384********/
#define CLK_VICAP_M1_OUT_SEL               0x02000021U
#define CLK_VICAP_M1_OUT_SEL_XIN_OSC0_FUNC 0U

/*CORE CRU */
#define CORECRU_GATE_SOFT_BANK (0x5U << 24)
#define CORECRU_SEL_BANK       (0x5U << 5)
/********Name=CORECRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_NCOREPORESET (1U | CORECRU_GATE_SOFT_BANK)
#define SRST_NCORESET     (2U | CORECRU_GATE_SOFT_BANK)
#define SRST_NDBGRESET    (3U | CORECRU_GATE_SOFT_BANK)
#define SRST_NL2RESET     (4U | CORECRU_GATE_SOFT_BANK)
#define SRST_A_M_CORE_BIU (5U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_DBG        (6U | CORECRU_GATE_SOFT_BANK)
#define SRST_POT_DBG      (7U | CORECRU_GATE_SOFT_BANK)
#define SRST_NT_DBG       (8U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_GRF   (11U | CORECRU_GATE_SOFT_BANK)
#define SRST_H_CPU_BIU    (12U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CPU_BIU    (13U | CORECRU_GATE_SOFT_BANK)
#define SRST_PVTM_CORE    (14U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_PVTM_CORE  (15U | CORECRU_GATE_SOFT_BANK)
/********Name=CORECRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_REF_PVTPLL_CORE (16U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU        (17U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU_PWRUP  (18U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU_CPU    (19U | CORECRU_GATE_SOFT_BANK)
#define SRST_T_CORE_MCU_CPU  (20U | CORECRU_GATE_SOFT_BANK)
#define SRST_MCU_BIU         (21U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_MAILBOX       (24U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_INTMUX        (25U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_CRU      (26U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_SGRF     (27U | CORECRU_GATE_SOFT_BANK)
#define SRST_H_CACHE         (28U | CORECRU_GATE_SOFT_BANK)

/********Name=COREGATE_CON00,Offset=0x800********/
#define CLK_CORE_GPLL_SRC_GATE (0U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_SRC_GATE      (1U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_GATE          (2U | CORECRU_GATE_SOFT_BANK)
#define ACLK_M_CORE_BIU_GATE   (5U | CORECRU_GATE_SOFT_BANK)
#define PCLK_DBG_GATE          (6U | CORECRU_GATE_SOFT_BANK)
#define SWCLKTCK_GATE          (8U | CORECRU_GATE_SOFT_BANK)
#define CLK_SCANHS_CORE_GATE   (9U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CPU_ROOT_GATE     (10U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_GRF_GATE     (11U | CORECRU_GATE_SOFT_BANK)
#define HCLK_CPU_BIU_GATE      (12U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CPU_BIU_GATE      (13U | CORECRU_GATE_SOFT_BANK)
#define CLK_PVTM_CORE_GATE     (14U | CORECRU_GATE_SOFT_BANK)
#define PCLK_PVTM_CORE_GATE    (15U | CORECRU_GATE_SOFT_BANK)
/********Name=COREGATE_CON01,Offset=0x804********/
#define CLK_REF_PVTPLL_CORE_GATE (16U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_GATE        (17U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_BIU_GATE    (21U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_RTC_GATE    (22U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_JTAG_GATE   (23U | CORECRU_GATE_SOFT_BANK)
#define PCLK_MAILBOX_GATE        (24U | CORECRU_GATE_SOFT_BANK)
#define PCLK_INTMUX_GATE         (25U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_CRU_GATE       (26U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_SGRF_GATE      (27U | CORECRU_GATE_SOFT_BANK)
#define HCLK_CACHE_GATE          (28U | CORECRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_CORE_GATE    (29U | CORECRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_GPLL_SRC_DIV 0x05000000U
#define ACLK_M_CORE_BIU_DIV   0x05070000U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define PCLK_DBG_DIV              0x05000001U
#define CLK_SCANHS_ACLKM_CORE_DIV 0x05060001U
#define CLK_SCANHS_PCLK_DBG_DIV   0x050B0001U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define HCLK_CPU_BIU_DIV 0x05000002U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_REF_PVTPLL_CORE_DIV 0x05000003U
#define CLK_CORE_MCU_DIV        0x05060003U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_TESTOUT_CORE2VI_DIV 0x05000004U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_SRC_SEL                        0x02050000U
#define CLK_CORE_SRC_SEL_CLK_CORE_GPLL_SRC      0U
#define CLK_CORE_PVTPLL_SRC_SEL                 0x010C0000U
#define CLK_CORE_PVTPLL_SRC_SEL_CLK_CORE_PVTPLL 0U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define HCLK_CPU_BIU_SEL               0x01050002U
#define HCLK_CPU_BIU_SEL_XIN_OSC0_FUNC 0U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_REF_PVTPLL_CORE_SEL          0x01050003U
#define CLK_REF_PVTPLL_CORE_SEL_CLK_CORE 0U
#define CLK_CORE_MCU_SEL                 0x010B0003U
#define CLK_CORE_MCU_SEL_XIN_OSC0_FUNC   0U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_TESTOUT_CORE2VI_SEL              0x02050004U
#define CLK_TESTOUT_CORE2VI_SEL_HCLK_CPU_BIU 0U

/* DDR CRU */
#define DDRCRU_GATE_SOFT_BANK (0x8U << 24)
/********Name=DDRCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_DDR_BIU    (2U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRC       (5U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRMON     (7U | DDRCRU_GATE_SOFT_BANK)
#define SRST_TIMER_DDRMON (8U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DFICTRL    (11U | DDRCRU_GATE_SOFT_BANK)
#define SRST_A_SYS_SHRM   (13U | DDRCRU_GATE_SOFT_BANK)
#define SRST_A_SHRM_NIU   (14U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDR_GRF    (15U | DDRCRU_GATE_SOFT_BANK)
/********Name=DDRCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_DDR_CRU  (16U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDR_HWLP (18U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRPHY   (19U | DDRCRU_GATE_SOFT_BANK)

/********Name=DDRGATE_CON00,Offset=0x800********/
#define PCLK_DDR_ROOT_GATE    (0U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_BIU_GATE     (2U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRC_GATE        (5U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRMON_GATE      (7U | DDRCRU_GATE_SOFT_BANK)
#define CLK_TIMER_DDRMON_GATE (8U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DFICTRL_GATE     (11U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_DDR_ROOT_GATE    (12U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_SYS_SHRM_GATE    (13U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_SHRM_NIU_GATE    (14U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_GRF_GATE     (15U | DDRCRU_GATE_SOFT_BANK)
/********Name=DDRGATE_CON01,Offset=0x804********/
#define PCLK_DDR_CRU_GATE    (16U | DDRCRU_GATE_SOFT_BANK)
#define CLK_DDR_TESTOUT_GATE (17U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_HWLP_GATE   (18U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRPHY_GATE     (19U | DDRCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_DDR2PERI_DIV 0x050A0000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define PCLK_DDR_ROOT_SEL                      0x02000000U
#define PCLK_DDR_ROOT_SEL_XIN_OSC0_FUNC        0U
#define ACLK_DDR_ROOT_SEL                      0x02080000U
#define ACLK_DDR_ROOT_SEL_XIN_OSC0_FUNC        0U
#define CLK_TESTOUT_DDR2PERI_SEL               0x010F0000U
#define CLK_TESTOUT_DDR2PERI_SEL_CLK_CORE_DDRC 0U

/* SUBDDR CRU */
#define SUBDDRCRU_GATE_SOFT_BANK (0x9U << 24)
/********Name=CRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_MSCH_BIU  (0U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_A_DDRC    (1U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_CORE_DDRC (3U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DDRMON    (4U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DFICTRL   (5U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DDR_PHY   (6U | SUBDDRCRU_GATE_SOFT_BANK)

/********Name=GATE_CON00,Offset=0x800********/
#define CLK_MSCH_BIU_GATE      (0U | SUBDDRCRU_GATE_SOFT_BANK)
#define ACLK_DDRC_GATE         (1U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_CORE_DDRC_SRC_GATE (2U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_CORE_DDRC_GATE     (3U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DDRMON_GATE        (4U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DFICTRL_GATE       (5U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DDR_PHY_GATE       (6U | SUBDDRCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_DDRC_SRC_DIV 0x05000000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_DDRC_SRC_SEL                     0x01050000U
#define CLK_CORE_DDRC_SRC_SEL_CLK_MATRIX_300M_SRC 0U

/* NPU CRU */
#define NPUCRU_GATE_SOFT_BANK (0x4U << 24)
#define NPUCRU_SEL_BANK       (0x4U << 5)
/********Name=NPUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_NPU_BIU  (3U | NPUCRU_GATE_SOFT_BANK)
#define SRST_A_NPU_BIU  (4U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_BIU  (5U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_CRU  (6U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_SGRF (7U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_GRF  (8U | NPUCRU_GATE_SOFT_BANK)
#define SRST_H_RKNN     (9U | NPUCRU_GATE_SOFT_BANK)
#define SRST_A_RKNN     (10U | NPUCRU_GATE_SOFT_BANK)

/********Name=NPUGATE_CON00,Offset=0x800********/
#define HCLK_NPU_ROOT_GATE         (0U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_NPU_ROOT_GATE         (1U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_ROOT_GATE         (2U | NPUCRU_GATE_SOFT_BANK)
#define HCLK_NPU_BIU_GATE          (3U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_NPU_BIU_GATE          (4U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_BIU_GATE          (5U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_CRU_GATE          (6U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_SGRF_GATE         (7U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_GRF_GATE          (8U | NPUCRU_GATE_SOFT_BANK)
#define HCLK_RKNN_GATE             (9U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_RKNN_GATE             (10U | NPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_0_I2VI_GATE     (11U | NPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_1_I2VI_GATE     (12U | NPUCRU_GATE_SOFT_BANK)
#define CLK_MATRIX_50M_SRC2VI_GATE (15U | NPUCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_NPU2VI_DIV 0x05060000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_NPU_ROOT_SEL                    0x02000000U
#define HCLK_NPU_ROOT_SEL_XIN_OSC0_FUNC      0U
#define ACLK_NPU_ROOT_SEL                    0x02020000U
#define ACLK_NPU_ROOT_SEL_CLK_PVTPLL_1       0U
#define PCLK_NPU_ROOT_SEL                    0x02040000U
#define PCLK_NPU_ROOT_SEL_XIN_OSC0_FUNC      0U
#define CLK_TESTOUT_NPU2VI_SEL               0x020B0000U
#define CLK_TESTOUT_NPU2VI_SEL_PCLK_NPU_ROOT 0U

/* PERI CRU */
#define PERICRU_GATE_SOFT_BANK (0x2U << 24)
#define PERICRU_SEL_BANK       (0x2U << 5)
/********Name=PERICRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_PERI_BIU (4U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_PERI_BIU (5U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_PERI_BIU (6U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_BOOTROM  (7U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_TIMER    (8U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER0     (9U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER1     (10U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER2     (11U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER3     (12U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER4     (13U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER5     (14U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_STIMER   (15U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_STIMER0  (16U | PERICRU_GATE_SOFT_BANK)
#define SRST_STIMER1  (17U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_WDT_NS (18U | PERICRU_GATE_SOFT_BANK)
#define SRST_T_WDT_NS (19U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_WDT_S  (20U | PERICRU_GATE_SOFT_BANK)
#define SRST_T_WDT_S  (21U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C0   (22U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C0     (23U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C2   (26U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C2     (27U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C3   (28U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C3     (29U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C4   (30U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C4     (31U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_GPIO4    (32U | PERICRU_GATE_SOFT_BANK)
#define SRST_DB_GPIO4   (33U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_IOC (34U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART2    (35U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART2    (38U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART3    (39U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART3    (42U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART4    (43U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART4    (46U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART5    (47U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON03,Offset=0xA0C********/
#define SRST_S_UART5     (50U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_SARADC    (51U | PERICRU_GATE_SOFT_BANK)
#define SRST_SARADC      (52U | PERICRU_GATE_SOFT_BANK)
#define SRST_SARADC_PHY  (53U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_SPI1      (54U | PERICRU_GATE_SOFT_BANK)
#define SRST_SPI1        (55U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_TRNG_NS   (57U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_TRNG_S    (58U | PERICRU_GATE_SOFT_BANK)
#define SRST_CORE_CRYPTO (59U | PERICRU_GATE_SOFT_BANK)
#define SRST_PKA_CRYPTO  (60U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_CRYPTO    (61U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_CRYPTO    (62U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM1_PERI (63U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON04,Offset=0xA10********/
#define SRST_PWM1_PERI   (64U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM2_PERI (66U | PERICRU_GATE_SOFT_BANK)
#define SRST_PWM2_PERI   (67U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_GRF  (69U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_CRU  (70U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_USBOTG    (71U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_BUS_BIU   (74U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_EMMC      (77U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_SFC       (78U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON05,Offset=0xA14********/
#define SRST_S_SFC         (80U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_USBPHY      (81U | PERICRU_GATE_SOFT_BANK)
#define SRST_USBPHY_POR    (82U | PERICRU_GATE_SOFT_BANK)
#define SRST_USBPHY_OTG    (83U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_DMAC        (88U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_DECOM       (89U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DECOM       (90U | PERICRU_GATE_SOFT_BANK)
#define SRST_D_DECOM       (91U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_SGRF   (92U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_SAI         (93U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_SAI         (94U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_I2S0_8CH_TX (95U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON06,Offset=0xA18********/
#define SRST_H_I2S0        (96U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_DSM         (97U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DSM         (98U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_ACODEC      (99U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_I2S0_8CH_RX (102U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DFT2APB     (103U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_IVE         (105U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_IVE         (106U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART0       (107U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART0       (110U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART1       (111U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON07,Offset=0xA1C********/
#define SRST_S_UART1     (114U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM0_PERI (115U | PERICRU_GATE_SOFT_BANK)
#define SRST_PWM0_PERI   (116U | PERICRU_GATE_SOFT_BANK)

/********Name=PERIGATE_CON00,Offset=0x800********/
#define PCLK_PERI_ROOT_GATE (0U | PERICRU_GATE_SOFT_BANK)
#define ACLK_PERI_ROOT_GATE (1U | PERICRU_GATE_SOFT_BANK)
#define HCLK_PERI_ROOT_GATE (2U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER_ROOT_GATE (3U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_BIU_GATE  (4U | PERICRU_GATE_SOFT_BANK)
#define ACLK_PERI_BIU_GATE  (5U | PERICRU_GATE_SOFT_BANK)
#define HCLK_PERI_BIU_GATE  (6U | PERICRU_GATE_SOFT_BANK)
#define HCLK_BOOTROM_GATE   (7U | PERICRU_GATE_SOFT_BANK)
#define PCLK_TIMER_GATE     (8U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER0_GATE     (9U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER1_GATE     (10U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER2_GATE     (11U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER3_GATE     (12U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER4_GATE     (13U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER5_GATE     (14U | PERICRU_GATE_SOFT_BANK)
#define PCLK_STIMER_GATE    (15U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON01,Offset=0x804********/
#define CLK_STIMER0_GATE (16U | PERICRU_GATE_SOFT_BANK)
#define CLK_STIMER1_GATE (17U | PERICRU_GATE_SOFT_BANK)
#define PCLK_WDT_NS_GATE (18U | PERICRU_GATE_SOFT_BANK)
#define TCLK_WDT_NS_GATE (19U | PERICRU_GATE_SOFT_BANK)
#define PCLK_WDT_S_GATE  (20U | PERICRU_GATE_SOFT_BANK)
#define TCLK_WDT_S_GATE  (21U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C0_GATE   (22U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C0_GATE    (23U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C2_GATE   (26U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C2_GATE    (27U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C3_GATE   (28U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C3_GATE    (29U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C4_GATE   (30U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C4_GATE    (31U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON02,Offset=0x808********/
#define PCLK_GPIO4_GATE    (32U | PERICRU_GATE_SOFT_BANK)
#define DBCLK_GPIO4_GATE   (33U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_IOC_GATE (34U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART2_GATE    (35U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART3_GATE    (39U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART4_GATE    (43U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART5_GATE    (47U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON03,Offset=0x80C********/
#define CLK_TESTOUT_PERI2VI_0_GATE (48U | PERICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_PERI2VI_1_GATE (49U | PERICRU_GATE_SOFT_BANK)
#define PCLK_SARADC_GATE           (51U | PERICRU_GATE_SOFT_BANK)
#define CLK_SARADC_GATE            (52U | PERICRU_GATE_SOFT_BANK)
#define PCLK_SPI1_GATE             (54U | PERICRU_GATE_SOFT_BANK)
#define CLK_SPI1_GATE              (55U | PERICRU_GATE_SOFT_BANK)
#define SCLK_IN_SPI1_GATE          (56U | PERICRU_GATE_SOFT_BANK)
#define HCLK_TRNG_NS_GATE          (57U | PERICRU_GATE_SOFT_BANK)
#define HCLK_TRNG_S_GATE           (58U | PERICRU_GATE_SOFT_BANK)
#define CLK_CORE_CRYPTO_GATE       (59U | PERICRU_GATE_SOFT_BANK)
#define CLK_PKA_CRYPTO_GATE        (60U | PERICRU_GATE_SOFT_BANK)
#define ACLK_CRYPTO_GATE           (61U | PERICRU_GATE_SOFT_BANK)
#define HCLK_CRYPTO_GATE           (62U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PWM1_PERI_GATE        (63U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON04,Offset=0x810********/
#define CLK_PWM1_PERI_GATE         (64U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM1_PERI_GATE (65U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PWM2_PERI_GATE        (66U | PERICRU_GATE_SOFT_BANK)
#define CLK_PWM2_PERI_GATE         (67U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM2_PERI_GATE (68U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_GRF_GATE         (69U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_CRU_GATE         (70U | PERICRU_GATE_SOFT_BANK)
#define ACLK_USBOTG_GATE           (71U | PERICRU_GATE_SOFT_BANK)
#define CLK_REF_USBOTG_GATE        (72U | PERICRU_GATE_SOFT_BANK)
#define CLK_UTMI_USBOTG_GATE       (73U | PERICRU_GATE_SOFT_BANK)
#define ACLK_BUS_BIU_GATE          (74U | PERICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_USB_GATE    (75U | PERICRU_GATE_SOFT_BANK)
#define CCLK_SRC_EMMC_GATE         (76U | PERICRU_GATE_SOFT_BANK)
#define HCLK_EMMC_GATE             (77U | PERICRU_GATE_SOFT_BANK)
#define HCLK_SFC_GATE              (78U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON05,Offset=0x814********/
#define SCLK_SFC_GATE       (80U | PERICRU_GATE_SOFT_BANK)
#define PCLK_USBPHY_GATE    (81U | PERICRU_GATE_SOFT_BANK)
#define CLK_REF_USBPHY_GATE (82U | PERICRU_GATE_SOFT_BANK)
#define ACLK_DMAC_GATE      (88U | PERICRU_GATE_SOFT_BANK)
#define ACLK_DECOM_GATE     (89U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DECOM_GATE     (90U | PERICRU_GATE_SOFT_BANK)
#define DCLK_DECOM_GATE     (91U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_SGRF_GATE (92U | PERICRU_GATE_SOFT_BANK)
#define HCLK_SAI_GATE       (93U | PERICRU_GATE_SOFT_BANK)
#define MCLK_SAI_GATE       (94U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON06,Offset=0x818********/
#define HCLK_I2S0_GATE      (96U | PERICRU_GATE_SOFT_BANK)
#define MCLK_DSM_GATE       (97U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DSM_GATE       (98U | PERICRU_GATE_SOFT_BANK)
#define PCLK_ACODEC_GATE    (99U | PERICRU_GATE_SOFT_BANK)
#define MCLK_ACODEC_TX_GATE (100U | PERICRU_GATE_SOFT_BANK)
#define MCLK_ACODEC_RX_GATE (101U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DFT2APB_GATE   (103U | PERICRU_GATE_SOFT_BANK)
#define ACLK_BUS_ROOT_GATE  (104U | PERICRU_GATE_SOFT_BANK)
#define HCLK_IVE_GATE       (105U | PERICRU_GATE_SOFT_BANK)
#define ACLK_IVE_GATE       (106U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART0_GATE     (107U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART1_GATE     (111U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON07,Offset=0x81C********/
#define PCLK_PWM0_PERI_GATE        (115U | PERICRU_GATE_SOFT_BANK)
#define CLK_PWM0_PERI_GATE         (116U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM0_PERI_GATE (117U | PERICRU_GATE_SOFT_BANK)

/********Name=PERICRU_CLKSEL_CON01,Offset=0x304********/
/********Name=PERICRU_CLKSEL_CON02,Offset=0x308********/
/********Name=PERICRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_TESTOUT_PERI2VI_0_DIV 0x05000005U
#define CLK_TESTOUT_PERI2VI_1_DIV 0x05080005U
/********Name=PERICRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_SARADC_DIV 0x03000006U
/********Name=PERICRU_CLKSEL_CON07,Offset=0x31C********/
#define CCLK_SRC_EMMC_DIV 0x06000007U
#define SCLK_SFC_DIV      0x05070007U
/********Name=PERICRU_CLKSEL_CON08,Offset=0x320********/
#define MCLK_ACODEC_TX_DIV 0x08000008U
#define MCLK_ACODEC_RX_DIV 0x08080008U
/********Name=PERICRU_CLKSEL_CON09,Offset=0x324********/
/********Name=PERICRU_CLKSEL_CON11,Offset=0x32C********/

/********Name=PERICRU_CLKSEL_CON01,Offset=0x304********/
#define PCLK_PERI_ROOT_SEL               0x02000001U
#define PCLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define ACLK_PERI_ROOT_SEL               0x02020001U
#define ACLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define HCLK_PERI_ROOT_SEL               0x02040001U
#define HCLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define CLK_I2C0_SEL                     0x02080001U
#define CLK_I2C0_SEL_XIN_OSC0_FUNC       0U
#define CLK_I2C2_SEL                     0x020C0001U
#define CLK_I2C2_SEL_XIN_OSC0_FUNC       0U
#define CLK_I2C3_SEL                     0x020E0001U
#define CLK_I2C3_SEL_XIN_OSC0_FUNC       0U
/********Name=PERICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_I2C4_SEL               0x02000002U
#define CLK_I2C4_SEL_XIN_OSC0_FUNC 0U
/********Name=PERICRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_TESTOUT_PERI2VI_0_SEL                      0x03050005U
#define CLK_TESTOUT_PERI2VI_0_SEL_CLK_TESTOUT_DDR2PERI 0U
#define CLK_TESTOUT_PERI2VI_1_SEL                      0x030D0005U
#define CLK_TESTOUT_PERI2VI_1_SEL_MCLK_I2S0_8CH_TX     0U
/********Name=PERICRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_SPI1_SEL                      0x02030006U
#define CLK_SPI1_SEL_XIN_OSC0_FUNC        0U
#define CLK_CORE_CRYPTO_SEL               0x02050006U
#define CLK_CORE_CRYPTO_SEL_XIN_OSC0_FUNC 0U
#define CLK_PKA_CRYPTO_SEL                0x02070006U
#define CLK_PKA_CRYPTO_SEL_XIN_OSC0_FUNC  0U
#define CLK_PWM1_PERI_SEL                 0x02090006U
#define CLK_PWM1_PERI_SEL_XIN_OSC0_FUNC   0U
#define CLK_PWM2_PERI_SEL                 0x020B0006U
#define CLK_PWM2_PERI_SEL_XIN_OSC0_FUNC   0U
/********Name=PERICRU_CLKSEL_CON07,Offset=0x31C********/
#define CCLK_SRC_EMMC_SEL               0x01060007U
#define CCLK_SRC_EMMC_SEL_XIN_OSC0_FUNC 0U
#define SCLK_SFC_SEL                    0x020C0007U
#define SCLK_SFC_SEL_XIN_OSC0_FUNC      0U
#define DCLK_DECOM_SEL                  0x020E0007U
#define DCLK_DECOM_SEL_XIN_OSC0_FUNC    0U
/********Name=PERICRU_CLKSEL_CON08,Offset=0x320********/
/********Name=PERICRU_CLKSEL_CON09,Offset=0x324********/
#define ACLK_BUS_ROOT_SEL               0x02000009U
#define ACLK_BUS_ROOT_SEL_XIN_OSC0_FUNC 0U
/********Name=PERICRU_CLKSEL_CON11,Offset=0x32C********/
#define CLK_PWM0_PERI_SEL               0x0200000BU
#define CLK_PWM0_PERI_SEL_XIN_OSC0_FUNC 0U

/* PMU CRU */
#define PMUCRU_GATE_SOFT_BANK (0x1U << 24)
#define PMUCRU_SEL_BANK       (0x1U << 5)
/********Name=PMUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_I2C1        (3U | PMUCRU_GATE_SOFT_BANK)
#define SRST_I2C1          (4U | PMUCRU_GATE_SOFT_BANK)
#define SRST_H_PMU_BIU     (6U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_BIU     (7U | PMUCRU_GATE_SOFT_BANK)
#define SRST_H_PMU_SRAM    (8U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU       (9U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU_PWRUP (10U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU_CPU   (11U | PMUCRU_GATE_SOFT_BANK)
#define SRST_T_PMU_MCU_CPU (12U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_PMU_GPIO0   (18U | PMUCRU_GATE_SOFT_BANK)
#define SRST_DB_PMU_GPIO0  (19U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PVTM_PMU      (20U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PVTM_PMU    (21U | PMUCRU_GATE_SOFT_BANK)
#define SRST_DDR_FAIL_SAFE (31U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUCRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_PMU_HP_TIMER   (32U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_HP_TIMER     (33U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_32K_HP_TIMER (34U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_IOC        (35U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_CRU        (36U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_GRF        (37U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_SGRF       (38U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_SGRF_REMAP (39U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_WDT        (40U | PMUCRU_GATE_SOFT_BANK)
#define SRST_T_PMU_WDT        (41U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_MAILBOX    (42U | PMUCRU_GATE_SOFT_BANK)

/********Name=PMUGATE_CON00,Offset=0x800********/
#define PCLK_PMU_ROOT_GATE          (1U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_ROOT_GATE          (2U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_I2C1_GATE              (3U | PMUCRU_GATE_SOFT_BANK)
#define CLK_I2C1_GATE               (4U | PMUCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_PMU_GATE        (5U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_BIU_GATE           (6U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_BIU_GATE           (7U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_SRAM_GATE          (8U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_GATE            (9U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_RTC_GATE        (13U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_JTAG_GATE       (14U | PMUCRU_GATE_SOFT_BANK)
#define CLK_SCANHS_CLK_PMU_MCU_GATE (15U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUGATE_CON01,Offset=0x804********/
#define CLK_PMU_GATE           (16U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GATE          (17U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GPIO0_GATE    (18U | PMUCRU_GATE_SOFT_BANK)
#define DBCLK_PMU_GPIO0_GATE   (19U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PVTM_PMU_GATE      (20U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PVTM_PMU_GATE     (21U | PMUCRU_GATE_SOFT_BANK)
#define XIN_OSC0_DIV_GATE      (30U | PMUCRU_GATE_SOFT_BANK)
#define CLK_DDR_FAIL_SAFE_GATE (31U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUGATE_CON02,Offset=0x808********/
#define PCLK_PMU_HP_TIMER_GATE        (32U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_HP_TIMER_GATE         (33U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_32K_HP_TIMER_GATE     (34U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_IOC_GATE             (35U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_CRU_GATE             (36U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GRF_GATE             (37U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_SGRF_GATE            (38U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_WDT_GATE             (40U | PMUCRU_GATE_SOFT_BANK)
#define TCLK_PMU_WDT_GATE             (41U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_MAILBOX_GATE         (42U | PMUCRU_GATE_SOFT_BANK)
#define OCC_SCANCLK_PMU_MCU_JTAG_GATE (43U | PMUCRU_GATE_SOFT_BANK)
#define OCC_SCANCLK_PMU_GPIO_GATE     (44U | PMUCRU_GATE_SOFT_BANK)
#define CLK_REFOUT_GATE               (45U | PMUCRU_GATE_SOFT_BANK)

/********Name=PMUCRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_100M_PMUSRC_DIV 0x03000000U
#define CLK_TESTOUT_PMU_DIV        0x05080000U
/********Name=PMUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_PVTM_PMU_DIV 0x05000001U
/********Name=PMUCRU_CLKSEL_CON06,Offset=0x318********/
#define XIN_OSC0_DIV_DIV 0x20000006U
/********Name=PMUCRU_CLKSEL_CON07,Offset=0x31C********/

/********Name=PMUCRU_CLKSEL_CON00,Offset=0x300********/
#define PCLK_PMU_ROOT_SEL                0x01030000U
#define PCLK_PMU_ROOT_SEL_XIN_OSC0_FUNC  0U
#define HCLK_PMU_ROOT_SEL                0x02040000U
#define HCLK_PMU_ROOT_SEL_XIN_OSC0_FUNC  0U
#define CLK_I2C1_SEL                     0x02060000U
#define CLK_I2C1_SEL_CLK_DEEPSLOW        0U
#define CLK_TESTOUT_PMU_SEL              0x020D0000U
#define CLK_TESTOUT_PMU_SEL_XIN_OSC0_DIV 0U
#define DBCLK_PMU_GPIO0_SEL              0x010F0000U
#define DBCLK_PMU_GPIO0_SEL_CLK_DEEPSLOW 0U
/********Name=PMUCRU_CLKSEL_CON01,Offset=0x304********/
/********Name=PMUCRU_CLKSEL_CON06,Offset=0x318********/
/********Name=PMUCRU_CLKSEL_CON07,Offset=0x31C********/
#define CLK_DEEPSLOW_SEL              0x02000007U
#define CLK_DEEPSLOW_SEL_CLK_PVTM_32K 0U
#define TCLK_PMU_WDT_SEL              0x01020007U
#define TCLK_PMU_WDT_SEL_CLK_DEEPSLOW 0U

/* VEPU CRU */
#define VEPUCRU_GATE_SOFT_BANK (0x6U << 24)
#define VEPUCRU_SEL_BANK       (0x6U << 5)
/********Name=VEPUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_VEPU_BIU     (4U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_BIU     (5U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_COM_BIU (6U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_BIU     (7U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_H_VEPU         (8U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU         (9U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_CORE_VEPU      (10U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_H_VEPU_PP      (11U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_PP      (12U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_CORE_VEPU_DVBM (13U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VICAP_VEPU   (14U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_GPIO1        (15U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_DB_GPIO1      (16U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_IOC    (17U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_SPI0        (18U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_SPI0          (19U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_CRU    (21U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_SGRF   (22U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_GRF    (23U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_UART_DETN_FLT (24U | VEPUCRU_GATE_SOFT_BANK)

/********Name=VEPUGATE_CON00,Offset=0x800********/
#define HCLK_VEPU_ROOT_GATE     (0U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_COM_ROOT_GATE (1U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_ROOT_GATE     (2U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_ROOT_GATE     (3U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_BIU_GATE      (4U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_BIU_GATE      (5U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_COM_BIU_GATE  (6U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_BIU_GATE      (7U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_GATE          (8U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_GATE          (9U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_CORE_VEPU_GATE      (10U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_PP_GATE       (11U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_PP_GATE       (12U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_CORE_VEPU_DVBM_GATE (13U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VICAP_VEPU_GATE    (14U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_GPIO1_GATE         (15U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUGATE_CON01,Offset=0x804********/
#define DBCLK_GPIO1_GATE        (16U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_IOC_GATE      (17U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_SPI0_GATE          (18U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_SPI0_GATE           (19U | VEPUCRU_GATE_SOFT_BANK)
#define SCLK_IN_SPI0_GATE       (20U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_CRU_GATE      (21U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_SGRF_GATE     (22U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_GRF_GATE      (23U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_UART_DETN_FLT_GATE  (24U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_0_I2NPU_GATE (25U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_1_I2NPU_GATE (26U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUGATE_CON02,Offset=0x808********/
#define CLK_TESTOUT_VEPU_0_GATE (45U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VEPU_1_GATE (46U | VEPUCRU_GATE_SOFT_BANK)

/********Name=VEPUCRU_CLKSEL_CON00,Offset=0x300********/
/********Name=VEPUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VEPU2VO_0_DIV 0x05000001U
#define CLK_TESTOUT_VEPU2VO_1_DIV 0x05070001U

/********Name=VEPUCRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_VEPU_ROOT_SEL                   0x02000000U
#define HCLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define ACLK_VEPU_COM_ROOT_SEL               0x02020000U
#define ACLK_VEPU_COM_ROOT_SEL_XIN_OSC0_FUNC 0U
#define ACLK_VEPU_ROOT_SEL                   0x02040000U
#define ACLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VEPU_ROOT_SEL                   0x02060000U
#define PCLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define CLK_CORE_VEPU_SEL                    0x02080000U
#define CLK_CORE_VEPU_SEL_CLK_PVTPLL_1       0U
#define CLK_CORE_VEPU_DVBM_SEL               0x020A0000U
#define CLK_CORE_VEPU_DVBM_SEL_XIN_OSC0_FUNC 0U
#define CLK_SPI0_SEL                         0x020C0000U
#define CLK_SPI0_SEL_XIN_OSC0_FUNC           0U
/********Name=VEPUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VEPU2VO_0_SEL                      0x02050001U
#define CLK_TESTOUT_VEPU2VO_0_SEL_PCLK_VEPU_ROOT       0U
#define CLK_TESTOUT_VEPU2VO_1_SEL                      0x020C0001U
#define CLK_TESTOUT_VEPU2VO_1_SEL_CLK_TESTOUT_TOP2VEPU 0U

/* VI CRU */
#define VICRU_GATE_SOFT_BANK (0x3U << 24)
#define VICRU_SEL_BANK       (0x3U << 5)
/********Name=VICRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_VI_BIU    (4U | VICRU_GATE_SOFT_BANK)
#define SRST_A_VI_BIU    (5U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_BIU    (6U | VICRU_GATE_SOFT_BANK)
#define SRST_CORE_ISP3P2 (9U | VICRU_GATE_SOFT_BANK)
#define SRST_D_VICAP     (10U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VICAP     (11U | VICRU_GATE_SOFT_BANK)
#define SRST_A_VICAP     (12U | VICRU_GATE_SOFT_BANK)
#define SRST_H_VICAP     (13U | VICRU_GATE_SOFT_BANK)
#define SRST_I0_VICAP    (14U | VICRU_GATE_SOFT_BANK)
#define SRST_I1_VICAP    (15U | VICRU_GATE_SOFT_BANK)
/********Name=VICRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_RX0P_VICAP     (16U | VICRU_GATE_SOFT_BANK)
#define SRST_RX1P_VICAP     (17U | VICRU_GATE_SOFT_BANK)
#define SRST_ISP0_VICAP     (18U | VICRU_GATE_SOFT_BANK)
#define SRST_P_CSIHOST0     (20U | VICRU_GATE_SOFT_BANK)
#define SRST_P_CSIHOST1     (22U | VICRU_GATE_SOFT_BANK)
#define SRST_H_SDMMC        (28U | VICRU_GATE_SOFT_BANK)
#define SRST_SDMMC_DETN_FLT (29U | VICRU_GATE_SOFT_BANK)
#define SRST_P_MIPICSIPHY   (30U | VICRU_GATE_SOFT_BANK)
#define SRST_P_GPIO3        (31U | VICRU_GATE_SOFT_BANK)
/********Name=VICRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_DB_GPIO3      (32U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_IOC      (33U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_GRF      (34U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_SGRF     (35U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_CRU      (36U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_RTC_TEST (37U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_RTC_NIU  (39U | VICRU_GATE_SOFT_BANK)

/********Name=VIGATE_CON00,Offset=0x800********/
#define HCLK_VI_ROOT_GATE     (0U | VICRU_GATE_SOFT_BANK)
#define ACLK_VI_ROOT_GATE     (1U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_ROOT_GATE     (2U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_ROOT_GATE (3U | VICRU_GATE_SOFT_BANK)
#define HCLK_VI_BIU_GATE      (4U | VICRU_GATE_SOFT_BANK)
#define ACLK_VI_BIU_GATE      (5U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_BIU_GATE      (6U | VICRU_GATE_SOFT_BANK)
#define HCLK_ISP3P2_GATE      (7U | VICRU_GATE_SOFT_BANK)
#define ACLK_ISP3P2_GATE      (8U | VICRU_GATE_SOFT_BANK)
#define CLK_CORE_ISP3P2_GATE  (9U | VICRU_GATE_SOFT_BANK)
#define DCLK_VICAP_GATE       (10U | VICRU_GATE_SOFT_BANK)
#define PCLK_VICAP_GATE       (11U | VICRU_GATE_SOFT_BANK)
#define ACLK_VICAP_GATE       (12U | VICRU_GATE_SOFT_BANK)
#define HCLK_VICAP_GATE       (13U | VICRU_GATE_SOFT_BANK)
#define I0CLK_VICAP_GATE      (14U | VICRU_GATE_SOFT_BANK)
#define I1CLK_VICAP_GATE      (15U | VICRU_GATE_SOFT_BANK)
/********Name=VIGATE_CON01,Offset=0x804********/
#define RX0PCLK_VICAP_GATE             (16U | VICRU_GATE_SOFT_BANK)
#define RX1PCLK_VICAP_GATE             (17U | VICRU_GATE_SOFT_BANK)
#define ISP0CLK_VICAP_GATE             (18U | VICRU_GATE_SOFT_BANK)
#define PCLK_CSIHOST0_GATE             (19U | VICRU_GATE_SOFT_BANK)
#define CLK_RXBYTECLKHS_0_GATE         (20U | VICRU_GATE_SOFT_BANK)
#define PCLK_CSIHOST1_GATE             (21U | VICRU_GATE_SOFT_BANK)
#define CLK_RXBYTECLKHS_1_GATE         (22U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_VICAP_GATE      (23U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_DCLK_VICAP_GATE      (24U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_ISP3P2_GATE     (25U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_CLK_CORE_ISP3P2_GATE (26U | VICRU_GATE_SOFT_BANK)
#define CCLK_SRC_SDMMC_GATE            (27U | VICRU_GATE_SOFT_BANK)
#define HCLK_SDMMC_GATE                (28U | VICRU_GATE_SOFT_BANK)
#define CLK_SDMMC_DETN_FLT_GATE        (29U | VICRU_GATE_SOFT_BANK)
#define PCLK_MIPICSIPHY_GATE           (30U | VICRU_GATE_SOFT_BANK)
#define PCLK_GPIO3_GATE                (31U | VICRU_GATE_SOFT_BANK)
/********Name=VIGATE_CON02,Offset=0x808********/
#define DBCLK_GPIO3_GATE           (32U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_IOC_GATE           (33U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_GRF_GATE           (34U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_SGRF_GATE          (35U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_CRU_GATE           (36U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_TEST_GATE      (37U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_PHY_GATE       (38U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_NIU_GATE       (39U | VICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VI2PERI_0_GATE (42U | VICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VI2PERI_1_GATE (43U | VICRU_GATE_SOFT_BANK)

/********Name=VICRU_CLKSEL_CON00,Offset=0x300********/
/********Name=VICRU_CLKSEL_CON01,Offset=0x304********/
#define CCLK_SRC_SDMMC_DIV 0x06080001U
/********Name=VICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_TESTOUT_VI2PERI_0_DIV 0x05010002U
/********Name=VICRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TESTOUT_VI2PERI_1_DIV 0x05000003U

/********Name=VICRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_VI_ROOT_SEL                   0x02000000U
#define HCLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define ACLK_VI_ROOT_SEL                   0x02020000U
#define ACLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VI_ROOT_SEL                   0x02040000U
#define PCLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VI_RTC_ROOT_SEL               0x01060000U
#define PCLK_VI_RTC_ROOT_SEL_XIN_OSC0_FUNC 0U
#define CLK_CORE_ISP3P2_SEL                0x02070000U
#define CLK_CORE_ISP3P2_SEL_CLK_PVTPLL_1   0U
#define DCLK_VICAP_SEL                     0x02090000U
#define DCLK_VICAP_SEL_XIN_OSC0_FUNC       0U
/********Name=VICRU_CLKSEL_CON01,Offset=0x304********/
#define CCLK_SRC_SDMMC_SEL               0x010E0001U
#define CCLK_SRC_SDMMC_SEL_XIN_OSC0_FUNC 0U
/********Name=VICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_TESTOUT_VI2PERI_0_SEL            0x03060002U
#define CLK_TESTOUT_VI2PERI_0_SEL_DCLK_VICAP 0U
/********Name=VICRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TESTOUT_VI2PERI_1_SEL                    0x03050003U
#define CLK_TESTOUT_VI2PERI_1_SEL_CLK_TESTOUT_NPU2VI 0U

/* VO CRU */
#define VOCRU_GATE_SOFT_BANK (0x7U << 24)
#define VOCRU_SEL_BANK       (0x7U << 5)
/********Name=VOCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_A_VO_BIU   (3U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_VO_BIU   (4U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_RGA2E    (7U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_RGA2E    (8U | VOCRU_GATE_SOFT_BANK)
#define SRST_CORE_RGA2E (9U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_GRF   (10U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_VOP_BIU  (12U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_VOP      (13U | VOCRU_GATE_SOFT_BANK)
#define SRST_D_VOP      (14U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_VOP      (15U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_MAC_BIU (22U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_MAC_BIU (23U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_MAC     (24U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_SGRF (28U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_CRU  (29U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_SDIO    (31U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_TSADC      (32U | VOCRU_GATE_SOFT_BANK)
#define SRST_TSADC        (33U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTPC_NS    (35U | VOCRU_GATE_SOFT_BANK)
#define SRST_SBPI_OTPC_NS (37U | VOCRU_GATE_SOFT_BANK)
#define SRST_USER_OTPC_NS (38U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTPC_S     (39U | VOCRU_GATE_SOFT_BANK)
#define SRST_SBPI_OTPC_S  (41U | VOCRU_GATE_SOFT_BANK)
#define SRST_USER_OTPC_S  (42U | VOCRU_GATE_SOFT_BANK)
#define SRST_OTPC_ARB     (43U | VOCRU_GATE_SOFT_BANK)
#define SRST_MACPHY       (45U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTP_MASK   (46U | VOCRU_GATE_SOFT_BANK)
#define SRST_PMC_OTP      (47U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON03,Offset=0xA0C********/
#define SRST_P_GPIO2  (48U | VOCRU_GATE_SOFT_BANK)
#define SRST_DB_GPIO2 (49U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_IOC (50U | VOCRU_GATE_SOFT_BANK)

/********Name=VOGATE_CON00,Offset=0x800********/
#define ACLK_VO_ROOT_GATE     (0U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VO_ROOT_GATE     (1U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_ROOT_GATE     (2U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VO_BIU_GATE      (3U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VO_BIU_GATE      (4U | VOCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VO_0_GATE (5U | VOCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VO_1_GATE (6U | VOCRU_GATE_SOFT_BANK)
#define HCLK_RGA2E_GATE       (7U | VOCRU_GATE_SOFT_BANK)
#define ACLK_RGA2E_GATE       (8U | VOCRU_GATE_SOFT_BANK)
#define CLK_CORE_RGA2E_GATE   (9U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_GRF_GATE      (10U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_ROOT_GATE    (11U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_BIU_GATE     (12U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VOP_GATE         (13U | VOCRU_GATE_SOFT_BANK)
#define DCLK_VOP_GATE         (14U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_GATE         (15U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON01,Offset=0x804********/
#define MBIST_CLK_MAC_PHY_GATE  (16U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_VOP_GATE (17U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_RGA_GATE (18U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_CCLK_RGA_GATE (19U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_ROOT_GATE      (20U | VOCRU_GATE_SOFT_BANK)
#define PCLK_MAC_BIU_GATE       (22U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_BIU_GATE       (23U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_GATE           (24U | VOCRU_GATE_SOFT_BANK)
#define PCLK_MAC_GATE           (25U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_SGRF_GATE       (28U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_CRU_GATE        (29U | VOCRU_GATE_SOFT_BANK)
#define CCLK_SRC_SDIO_GATE      (30U | VOCRU_GATE_SOFT_BANK)
#define HCLK_SDIO_GATE          (31U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON02,Offset=0x808********/
#define PCLK_TSADC_GATE       (32U | VOCRU_GATE_SOFT_BANK)
#define CLK_TSADC_GATE        (33U | VOCRU_GATE_SOFT_BANK)
#define CLK_TSADC_TSEN_GATE   (34U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTPC_NS_GATE     (35U | VOCRU_GATE_SOFT_BANK)
#define CLK_SBPI_OTPC_NS_GATE (37U | VOCRU_GATE_SOFT_BANK)
#define CLK_USER_OTPC_NS_GATE (38U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTPC_S_GATE      (39U | VOCRU_GATE_SOFT_BANK)
#define CLK_SBPI_OTPC_S_GATE  (41U | VOCRU_GATE_SOFT_BANK)
#define CLK_USER_OTPC_S_GATE  (42U | VOCRU_GATE_SOFT_BANK)
#define CLK_OTPC_ARB_GATE     (43U | VOCRU_GATE_SOFT_BANK)
#define CLK_MACPHY_GATE       (45U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTP_MASK_GATE    (46U | VOCRU_GATE_SOFT_BANK)
#define CLK_PMC_OTP_GATE      (47U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON03,Offset=0x80C********/
#define PCLK_GPIO2_GATE  (48U | VOCRU_GATE_SOFT_BANK)
#define DBCLK_GPIO2_GATE (49U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_IOC_GATE (50U | VOCRU_GATE_SOFT_BANK)

/********Name=VOCRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_VO_0_DIV 0x05060000U
/********Name=VOCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VO_1_DIV 0x05000001U
/********Name=VOCRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_GMAC0_TX_50M_O_DIV 0x06010002U
#define CCLK_SRC_SDIO_DIV      0x06070002U
/********Name=VOCRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TSADC_DIV        0x05000003U
#define CLK_TSADC_TSEN_DIV   0x05050003U
#define CLK_USER_OTPC_NS_DIV 0x030A0003U
#define CLK_USER_OTPC_S_DIV  0x030D0003U

/********Name=VOCRU_CLKSEL_CON00,Offset=0x300********/
#define ACLK_VO_ROOT_SEL                   0x02000000U
#define ACLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define HCLK_VO_ROOT_SEL                   0x02020000U
#define HCLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VO_ROOT_SEL                   0x02040000U
#define PCLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define CLK_TESTOUT_VO_0_SEL               0x030B0000U
#define CLK_TESTOUT_VO_0_SEL_ACLK_VOP_ROOT 0U
/********Name=VOCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VO_1_SEL             0x03050001U
#define CLK_TESTOUT_VO_1_SEL_DCLK_VOP    0U
#define CLK_CORE_RGA2E_SEL               0x02080001U
#define CLK_CORE_RGA2E_SEL_XIN_OSC0_FUNC 0U
#define ACLK_VOP_ROOT_SEL                0x020A0001U
#define ACLK_VOP_ROOT_SEL_XIN_OSC0_FUNC  0U
#define ACLK_MAC_ROOT_SEL                0x020C0001U
#define ACLK_MAC_ROOT_SEL_XIN_OSC0_FUNC  0U
/********Name=VOCRU_CLKSEL_CON02,Offset=0x308********/
#define CCLK_SRC_SDIO_SEL               0x010D0002U
#define CCLK_SRC_SDIO_SEL_XIN_OSC0_FUNC 0U
/********Name=VOCRU_CLKSEL_CON03,Offset=0x30C********/
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RV1106_H */
