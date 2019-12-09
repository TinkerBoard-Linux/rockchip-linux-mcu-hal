/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef __PISCES_H
#define __PISCES_H
#ifdef __cplusplus
  extern "C" {
#endif

/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0[4];                       /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED1;                          /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED3[33];                      /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0[4];                       /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED1;                          /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED3[33];                      /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0000 */
    uint32_t RESERVED1[3];                    /* Address Offset: 0x0014 */
    __IO uint32_t CPLL_CON[3];                        /* Address Offset: 0x0020 */
    uint32_t RESERVED2[5];                    /* Address Offset: 0x002C */
    __IO uint32_t SPLL_CON[4];                        /* Address Offset: 0x0040 */
    uint32_t RESERVED3[4];                    /* Address Offset: 0x0050 */
    __IO uint32_t CRU_MODE_CON00;                     /* Address Offset: 0x0060 */
    uint32_t RESERVED4[7];                    /* Address Offset: 0x0064 */
    __IO uint32_t CRU_CLKSEL_CON[50];                   /* Address Offset: 0x0080 */
    uint32_t RESERVED5[14];                    /* Address Offset: 0x0064 */
    __IO uint32_t CRU_CLKGATE_CON[15];                    /* Address Offset: 0x0180 */
    uint32_t RESERVED6[17];                    /* Address Offset: 0x0064 */
    __IO uint32_t CRU_SOFTRST_CON[15];                 /* Address Offset: 0x0200 */
    uint32_t RESERVED7[49];                    /* Address Offset: 0x0064 */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x0300 */
    __IO uint32_t CRU_GLBRST_ST;                      /* Address Offset: 0x0304 */
    __IO uint32_t GLB_SRST_FST_VALUE;                 /* Address Offset: 0x0308 */
    __IO uint32_t GLB_SRST_SND_VALUE;                 /* Address Offset: 0x030C */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x0310 */
    uint32_t RESERVED8[3];                    /* Address Offset: 0x0314 */
    uint32_t RESERVED9[2];                    /* Address Offset: 0x0328 */
    __IO uint32_t DCG_CON[2][8];                      /* Address Offset: 0x0330 */
    uint32_t RESERVED10[36];                   /* Address Offset: 0x0370 */
    __IO uint32_t AS_CON[5][2];                       /* Address Offset: 0x0400 */
};
/* GRF Register Structure Define */
struct GRF_REG {
    __IO uint32_t GPIO0A_IOMUX_L;                     /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_H;                     /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_L;                     /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0B_IOMUX_H;                     /* Address Offset: 0x000C */
    __IO uint32_t GPIO0C_IOMUX_L;                     /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0C_IOMUX_H;                     /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0D_IOMUX_L;                     /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0D_IOMUX_H;                     /* Address Offset: 0x001C */
    __IO uint32_t GPIO1A_IOMUX_L;                     /* Address Offset: 0x0020 */
    __IO uint32_t GPIO1A_IOMUX_H;                     /* Address Offset: 0x0024 */
    __IO uint32_t GPIO1B_IOMUX_L;                     /* Address Offset: 0x0028 */
    __IO uint32_t GPIO1B_IOMUX_H;                     /* Address Offset: 0x002C */
         uint32_t RESERVED0030[4];                    /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0L_SR;                          /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0H_SR;                          /* Address Offset: 0x0044 */
    __IO uint32_t GPIO1L_SR;                          /* Address Offset: 0x0048 */
         uint32_t RESERVED004C[13];                   /* Address Offset: 0x004C */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0080 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0084 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0088 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x008C */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x0090 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x0094 */
         uint32_t RESERVED0098[10];                   /* Address Offset: 0x0098 */
    __IO uint32_t GPIO0A_E;                           /* Address Offset: 0x00C0 */
    __IO uint32_t GPIO0B_E;                           /* Address Offset: 0x00C4 */
    __IO uint32_t GPIO0C_E;                           /* Address Offset: 0x00C8 */
    __IO uint32_t GPIO0D_E;                           /* Address Offset: 0x00CC */
    __IO uint32_t GPIO1A_E;                           /* Address Offset: 0x00D0 */
    __IO uint32_t GPIO1B_E;                           /* Address Offset: 0x00D4 */
         uint32_t RESERVED00D8[6];                    /* Address Offset: 0x00D8 */
    __I  uint32_t CHIP_VERSION_ID;                    /* Address Offset: 0x00F0 */
    __I  uint32_t CHIP_IDL;                           /* Address Offset: 0x00F4 */
    __I  uint32_t CHIP_IDH;                           /* Address Offset: 0x00F8 */
         uint32_t RESERVED00FC;                       /* Address Offset: 0x00FC */
    __IO uint32_t SOC_CON0;                           /* Address Offset: 0x0100 */
    __IO uint32_t SOC_CON1;                           /* Address Offset: 0x0104 */
    __IO uint32_t SOC_CON2;                           /* Address Offset: 0x0108 */
    __IO uint32_t SOC_CON3;                           /* Address Offset: 0x010C */
    __IO uint32_t SOC_CON4;                           /* Address Offset: 0x0110 */
    __IO uint32_t SOC_CON5;                           /* Address Offset: 0x0114 */
         uint32_t RESERVED0118[10];                   /* Address Offset: 0x0118 */
    __I  uint32_t SOC_STATUS0;                        /* Address Offset: 0x0140 */
    __I  uint32_t SOC_STATUS1;                        /* Address Offset: 0x0144 */
         uint32_t RESERVED0148[6];                    /* Address Offset: 0x0148 */
    __IO uint32_t DSP_CON0;                           /* Address Offset: 0x0160 */
    __IO uint32_t DSP_CON1;                           /* Address Offset: 0x0164 */
    __IO uint32_t DSP_CON2;                           /* Address Offset: 0x0168 */
         uint32_t RESERVED016C;                       /* Address Offset: 0x016C */
    __I  uint32_t DSP_STAT0;                          /* Address Offset: 0x0170 */
    __I  uint32_t DSP_STAT1;                          /* Address Offset: 0x0174 */
         uint32_t RESERVED0178[18];                   /* Address Offset: 0x0178 */
    __IO uint32_t FW_CON0;                            /* Address Offset: 0x01C0 */
    __IO uint32_t FW_CON1;                            /* Address Offset: 0x01C4 */
    __IO uint32_t FW_CON2;                            /* Address Offset: 0x01C8 */
         uint32_t RESERVED01CC[13];                   /* Address Offset: 0x01CC */
    __IO uint32_t MCU_CON0;                           /* Address Offset: 0x0200 */
    __IO uint32_t MCU_CON1;                           /* Address Offset: 0x0204 */
    __IO uint32_t MCU_CON2;                           /* Address Offset: 0x0208 */
    __IO uint32_t MCU_CON3;                           /* Address Offset: 0x020C */
         uint32_t RESERVED0210[4];                    /* Address Offset: 0x0210 */
    __I  uint32_t MCU_STAT0;                          /* Address Offset: 0x0220 */
         uint32_t RESERVED0224[7];                    /* Address Offset: 0x0224 */
    __IO uint32_t DSI_CON0;                           /* Address Offset: 0x0240 */
    __IO uint32_t DSI_CON1;                           /* Address Offset: 0x0244 */
    __IO uint32_t DSI_CON2;                           /* Address Offset: 0x0248 */
    __IO uint32_t DSI_CON3;                           /* Address Offset: 0x024C */
    __IO uint32_t DSI_CON4;                           /* Address Offset: 0x0250 */
    __IO uint32_t DSI_CON5;                           /* Address Offset: 0x0254 */
    __IO uint32_t DSI_CON6;                           /* Address Offset: 0x0258 */
    __IO uint32_t DSI_CON7;                           /* Address Offset: 0x025C */
    __IO uint32_t DSI_CON8;                           /* Address Offset: 0x0260 */
    __IO uint32_t DSI_CON9;                           /* Address Offset: 0x0264 */
    __IO uint32_t DSI_CON10;                          /* Address Offset: 0x0268 */
    __IO uint32_t DSI_CON11;                          /* Address Offset: 0x026C */
    __IO uint32_t DSI_CON12;                          /* Address Offset: 0x0270 */
    __IO uint32_t DSI_CON13;                          /* Address Offset: 0x0274 */
    __IO uint32_t DSI_CON14;                          /* Address Offset: 0x0278 */
    __IO uint32_t DSI_CON15;                          /* Address Offset: 0x027C */
    __IO uint32_t DSI_CON16;                          /* Address Offset: 0x0280 */
    __IO uint32_t DSI_CON17;                          /* Address Offset: 0x0284 */
    __IO uint32_t DSI_CON18;                          /* Address Offset: 0x0288 */
    __IO uint32_t DSI_CON19;                          /* Address Offset: 0x028C */
    __IO uint32_t DSI_CON20;                          /* Address Offset: 0x0290 */
    __IO uint32_t DSI_CON21;                          /* Address Offset: 0x0294 */
    __IO uint32_t DSI_CON22;                          /* Address Offset: 0x0298 */
    __IO uint32_t DSI_CON23;                          /* Address Offset: 0x029C */
    __IO uint32_t DSI_CON24;                          /* Address Offset: 0x02A0 */
    __IO uint32_t DSI_CON25;                          /* Address Offset: 0x02A4 */
    __IO uint32_t DSI_CON26;                          /* Address Offset: 0x02A8 */
    __IO uint32_t DSI_CON27;                          /* Address Offset: 0x02AC */
    __IO uint32_t DSI_CON28;                          /* Address Offset: 0x02B0 */
    __IO uint32_t DSI_CON29;                          /* Address Offset: 0x02B4 */
         uint32_t RESERVED02B8[2];                    /* Address Offset: 0x02B8 */
    __I  uint32_t DSI_STATUS0;                        /* Address Offset: 0x02C0 */
    __I  uint32_t DSI_STATUS1;                        /* Address Offset: 0x02C4 */
    __I  uint32_t DSI_STATUS2;                        /* Address Offset: 0x02C8 */
    __I  uint32_t DSI_STATUS3;                        /* Address Offset: 0x02CC */
    __I  uint32_t DSI_STATUS4;                        /* Address Offset: 0x02D0 */
    __I  uint32_t DSI_STATUS5;                        /* Address Offset: 0x02D4 */
    __I  uint32_t DSI_STATUS6;                        /* Address Offset: 0x02D8 */
    __I  uint32_t DSI_STATUS7;                        /* Address Offset: 0x02DC */
    __I  uint32_t DSI_STATUS8;                        /* Address Offset: 0x02E0 */
         uint32_t RESERVED02E4[7];                    /* Address Offset: 0x02E4 */
    __IO uint32_t MEM_CON0;                           /* Address Offset: 0x0300 */
    __IO uint32_t MEM_CON1;                           /* Address Offset: 0x0304 */
    __IO uint32_t MEM_CON2;                           /* Address Offset: 0x0308 */
    __IO uint32_t MEM_CON3;                           /* Address Offset: 0x030C */
    __IO uint32_t MEM_CON4;                           /* Address Offset: 0x0310 */
    __IO uint32_t MEM_CON5;                           /* Address Offset: 0x0314 */
    __IO uint32_t MEM_CON6;                           /* Address Offset: 0x0318 */
         uint32_t RESERVED031C[25];                   /* Address Offset: 0x031C */
    __IO uint32_t DMAC_CON0;                          /* Address Offset: 0x0380 */
    __IO uint32_t DMAC_CON1;                          /* Address Offset: 0x0384 */
    __IO uint32_t DMAC_CON2;                          /* Address Offset: 0x0388 */
    __IO uint32_t DMAC_CON3;                          /* Address Offset: 0x038C */
    __IO uint32_t DMAC_CON4;                          /* Address Offset: 0x0390 */
    __IO uint32_t DMAC_CON5;                          /* Address Offset: 0x0394 */
    __IO uint32_t DMAC_CON6;                          /* Address Offset: 0x0398 */
         uint32_t RESERVED039C[9];                    /* Address Offset: 0x039C */
    __IO uint32_t FAST_BOOT_EN;                       /* Address Offset: 0x03C0 */
    __IO uint32_t FAST_BOOT_ADDR;                     /* Address Offset: 0x03C4 */
         uint32_t RESERVED03C8[14];                   /* Address Offset: 0x03C8 */
    __IO uint32_t OS_REG0;                            /* Address Offset: 0x0400 */
    __IO uint32_t OS_REG1;                            /* Address Offset: 0x0404 */
    __IO uint32_t OS_REG2;                            /* Address Offset: 0x0408 */
    __IO uint32_t OS_REG3;                            /* Address Offset: 0x040C */
    __IO uint32_t OS_REG4;                            /* Address Offset: 0x0410 */
    __IO uint32_t OS_REG5;                            /* Address Offset: 0x0414 */
    __IO uint32_t OS_REG6;                            /* Address Offset: 0x0418 */
    __IO uint32_t OS_REG7;                            /* Address Offset: 0x041C */
         uint32_t RESERVED0420[696];                  /* Address Offset: 0x0420 */
};
/* MBOX Register Structure Define */
#define MBOX_CNT             2
#define MBOX_CHAN_CNT        4
struct MBOX_CMD_DAT {
    __IO uint32_t CMD;
    __IO uint32_t DATA;
};
struct MBOX_REG {
    __IO uint32_t A2B_INTEN;                          /* Address Offset: 0x0000 */
    __IO uint32_t A2B_STATUS;                         /* Address Offset: 0x0004 */
    struct MBOX_CMD_DAT A2B[MBOX_CHAN_CNT];           /* Address Offset: 0x0008 */
    __IO uint32_t B2A_INTEN;                          /* Address Offset: 0x0028 */
    __IO uint32_t B2A_STATUS;                         /* Address Offset: 0x002C */
    struct MBOX_CMD_DAT B2A[MBOX_CHAN_CNT];           /* Address Offset: 0x0030 */
         uint32_t RESERVED0[44];                      /* Address Offset: 0x0050 */
    __IO uint32_t ATOMIC_LOCK[32];                    /* Address Offset: 0x0100 */
};
/* PMU Register Structure Define */
struct PMU_REG {
    __IO uint32_t WAKEUP_CFG[4];                      /* Address Offset: 0x0000 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0010 */
    __IO uint32_t WAKEUP_CFG6;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED1[5];                       /* Address Offset: 0x001C */
    __IO uint32_t PWRDN_CON;                          /* Address Offset: 0x0030 */
    __I  uint32_t PWRDN_ST;                           /* Address Offset: 0x0034 */
    __IO uint32_t PLL_CON;                            /* Address Offset: 0x0038 */
    __IO uint32_t PWRMODE_CON;                        /* Address Offset: 0x003C */
    __IO uint32_t SFT_CON;                            /* Address Offset: 0x0040 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0044 */
    __IO uint32_t LDO_CON[3];                         /* Address Offset: 0x0050 */
    __I  uint32_t LDO_STAT;                           /* Address Offset: 0x005C */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0060 */
    __O  uint32_t INT_ST;                             /* Address Offset: 0x0064 */
    __IO uint32_t PWRMODE_GPIO_POS_INT_CON;           /* Address Offset: 0x0068 */
    __IO uint32_t PWRMODE_GPIO_NEG_INT_CON;           /* Address Offset: 0x006C */
    __IO uint32_t DSP_GPIO_POS_INT_CON;               /* Address Offset: 0x0070 */
    __IO uint32_t DSP_GPIO_NEG_INT_CON;               /* Address Offset: 0x0074 */
    __O  uint32_t PWRMODE_GPIO_POS_INT_ST;            /* Address Offset: 0x0078 */
    __O  uint32_t PWRMODE_GPIO_NEG_INT_ST;            /* Address Offset: 0x007C */
    __O  uint32_t DSP_GPIO_POS_INT_ST;                /* Address Offset: 0x0080 */
    __O  uint32_t DSP_GPIO_NEG_INT_ST;                /* Address Offset: 0x0084 */
    __IO uint32_t PWRDN_INTEN;                        /* Address Offset: 0x0088 */
    __O  uint32_t PWRDN_INT_STATUS;                   /* Address Offset: 0x008C */
    __O  uint32_t WAKEUP_STATUS;                      /* Address Offset: 0x0090 */
         uint32_t RESERVED3[3];                       /* Address Offset: 0x0094 */
    __IO uint32_t BUS_CLR;                            /* Address Offset: 0x00A0 */
    __IO uint32_t BUS_IDLE_REQ;                       /* Address Offset: 0x00A4 */
    __I  uint32_t BUS_IDLE_ST;                        /* Address Offset: 0x00A8 */
    __I  uint32_t BUS_IDLE_ACK;                       /* Address Offset: 0x00AC */
    __I  uint32_t POWER_ST;                           /* Address Offset: 0x00B0 */
    __I  uint32_t CORE_PWR_ST;                        /* Address Offset: 0x00B4 */
         uint32_t RESERVED4;                          /* Address Offset: 0x00B8 */
    __IO uint32_t PLLLOCK_CNT;                        /* Address Offset: 0x00BC */
    __IO uint32_t PWRMODE_TIMEOUT_CNT;                /* Address Offset: 0x00C0 */
    __IO uint32_t NOC_AUTO_ENA;                       /* Address Offset: 0x00C4 */
         uint32_t RESERVED5[2];                       /* Address Offset: 0x00C8 */
    __IO uint32_t DSPAPM_CON;                         /* Address Offset: 0x00D0 */
         uint32_t RESERVED6;                          /* Address Offset: 0x00D4 */
    __IO uint32_t DSP_LDO_ADJ_CNT;                    /* Address Offset: 0x00D8 */
    __IO uint32_t DSP_TIMEOUT_CNT;                    /* Address Offset: 0x00DC */
    __IO uint32_t PWRMODE_LDO_ADJ_CNT;                /* Address Offset: 0x00E0 */
    __IO uint32_t SHRM_CON0;                          /* Address Offset: 0x00E4 */
    __IO uint32_t DSPTCM_CON[2];                      /* Address Offset: 0x00E8 */
    __IO uint32_t SYS_REG[4];                         /* Address Offset: 0x00F0 */
    __IO uint32_t SHRM_CON1;                          /* Address Offset: 0x0100 */
    __IO uint32_t DSPTCM_CON1[2];                     /* Address Offset: 0x0104 */
};
/* SHAREMEM Register Structure Define */
struct SHAREMEM_REG {
    __IO uint32_t RRA_SLT_LO;                         /* Address Offset: 0x0000 */
    __IO uint32_t RRA_SLT_HI;                         /* Address Offset: 0x0004 */
    __IO uint32_t RRA_WEIGHT_LO;                      /* Address Offset: 0x0008 */
    __IO uint32_t RRA_WEIGHT_HI;                      /* Address Offset: 0x000C */
    __IO uint32_t RRA_SLT_PRI;                        /* Address Offset: 0x0010 */
         uint32_t RESERVED0[3];                       /* Address Offset: 0x0014 */
    __IO uint32_t CTRL;                               /* Address Offset: 0x0020 */
    __IO uint32_t STATUS;                             /* Address Offset: 0x0024 */
};
/* DMA Register Structure Define */
struct DMA_CHANNEL_STATUS {
    __I  uint32_t CSR;
    __I  uint32_t CPC;
};
struct DMA_CHANNEL_CONFIG {
    __I  uint32_t SAR;
    __I  uint32_t DAR;
    __I  uint32_t CCR;
    __I  uint32_t LC0;
    __I  uint32_t LC1;
         uint32_t PADDING[3];
};
struct DMA_REG {
    __I  uint32_t DSR;                                /* Address Offset: 0x0000 */
    __I  uint32_t DPC;                                /* Address Offset: 0x0004 */
         uint32_t RESERVED0[6];                       /* Address Offset: 0x0008 */
    __IO uint32_t INTEN;                              /* Address Offset: 0x0020 */
    __I  uint32_t EVENT_RIS;                          /* Address Offset: 0x0024 */
    __I  uint32_t INTMIS;                             /* Address Offset: 0x0028 */
    __O  uint32_t INTCLR;                             /* Address Offset: 0x002C */
    __I  uint32_t FSRD;                               /* Address Offset: 0x0030 */
    __I  uint32_t FSRC;                               /* Address Offset: 0x0034 */
    __IO uint32_t FTRD;                               /* Address Offset: 0x0038 */
         uint32_t RESERVED1;                          /* Address Offset: 0x003C */
    __IO uint32_t FTR[6];                             /* Address Offset: 0x0040 */
         uint32_t RESERVED2[42];                      /* Address Offset: 0x0058 */
    struct DMA_CHANNEL_STATUS CHAN_STS[6];            /* Address Offset: 0x0100 */
         uint32_t RESERVED3[180];                     /* Address Offset: 0x0130 */
    struct DMA_CHANNEL_CONFIG CHAN_CFG[6];            /* Address Offset: 0x0400 */
         uint32_t RESERVED9[528];                     /* Address Offset: 0x04C0 */
    __I  uint32_t DBGSTATUS;                          /* Address Offset: 0x0D00 */
    __O  uint32_t DBGCMD;                             /* Address Offset: 0x0D04 */
    __IO uint32_t DBGINST[2];                         /* Address Offset: 0x0D08 */
         uint32_t RESERVED10[60];                     /* Address Offset: 0x0D10 */
    __IO uint32_t CR[5];                              /* Address Offset: 0x0E00 */
    __I  uint32_t CRDN;                               /* Address Offset: 0x0E14 */
         uint32_t RESERVED11[26];                     /* Address Offset: 0x0E18 */
    __IO uint32_t WD;                                 /* Address Offset: 0x0E80 */
};
/* DSI Register Structure Define */
struct DSI_REG {
    __I  uint32_t VERSION;                            /* Address Offset: 0x0000 */
    __IO uint32_t PWR_UP;                             /* Address Offset: 0x0004 */
    __IO uint32_t CLKMGR_CFG;                         /* Address Offset: 0x0008 */
    __IO uint32_t DPI_VCID;                           /* Address Offset: 0x000C */
    __IO uint32_t DPI_COLOR_CODING;                   /* Address Offset: 0x0010 */
    __IO uint32_t DPI_CFG_POL;                        /* Address Offset: 0x0014 */
    __IO uint32_t DPI_LP_CMD_TIM;                     /* Address Offset: 0x0018 */
         uint32_t RESERVED001C[4];                    /* Address Offset: 0x001C */
    __IO uint32_t PCKHDL_CFG;                         /* Address Offset: 0x002C */
    __IO uint32_t GEN_VCID;                           /* Address Offset: 0x0030 */
    __IO uint32_t MODE_CFG;                           /* Address Offset: 0x0034 */
    __IO uint32_t VID_MODE_CFG;                       /* Address Offset: 0x0038 */
    __IO uint32_t VID_PKT_SIZE;                       /* Address Offset: 0x003C */
    __IO uint32_t VID_NUM_CHUNKS;                     /* Address Offset: 0x0040 */
    __IO uint32_t VID_NULL_SIZE;                      /* Address Offset: 0x0044 */
    __IO uint32_t VID_HSA_TIME;                       /* Address Offset: 0x0048 */
    __IO uint32_t VID_HBP_TIME;                       /* Address Offset: 0x004C */
    __IO uint32_t VID_HLINE_TIME;                     /* Address Offset: 0x0050 */
    __IO uint32_t VID_VSA_LINES;                      /* Address Offset: 0x0054 */
    __IO uint32_t VID_VBP_LINES;                      /* Address Offset: 0x0058 */
    __IO uint32_t VID_VFP_LINES;                      /* Address Offset: 0x005C */
    __IO uint32_t VID_VACTIVE_LINES;                  /* Address Offset: 0x0060 */
    __IO uint32_t EDPI_CMD_SIZE;                      /* Address Offset: 0x0064 */
    __IO uint32_t CMD_MODE_CFG;                       /* Address Offset: 0x0068 */
    __IO uint32_t GEN_HDR;                            /* Address Offset: 0x006C */
    __IO uint32_t GEN_PLD_DATA;                       /* Address Offset: 0x0070 */
    __I  uint32_t CMD_PKT_STATUS;                     /* Address Offset: 0x0074 */
    __IO uint32_t TO_CNT_CFG;                         /* Address Offset: 0x0078 */
    __IO uint32_t HS_RD_TO_CNT;                       /* Address Offset: 0x007C */
    __IO uint32_t LP_RD_TO_CNT;                       /* Address Offset: 0x0080 */
    __IO uint32_t HS_WR_TO_CNT;                       /* Address Offset: 0x0084 */
    __IO uint32_t LP_WR_TO_CNT;                       /* Address Offset: 0x0088 */
    __IO uint32_t BTA_TO_CNT;                         /* Address Offset: 0x008C */
    __IO uint32_t SDF_3D;                             /* Address Offset: 0x0090 */
    __IO uint32_t LPCLK_CTRL;                         /* Address Offset: 0x0094 */
    __IO uint32_t PHY_TMR_LPCLK_CFG;                  /* Address Offset: 0x0098 */
    __IO uint32_t PHY_TMR_CFG;                        /* Address Offset: 0x009C */
    __IO uint32_t PHY_RSTZ;                           /* Address Offset: 0x00A0 */
    __IO uint32_t PHY_IF_CFG;                         /* Address Offset: 0x00A4 */
         uint32_t RESERVED00A8[2];                    /* Address Offset: 0x00A8 */
    __I  uint32_t PHY_STATUS;                         /* Address Offset: 0x00B0 */
         uint32_t RESERVED00B4[2];                    /* Address Offset: 0x00B4 */
    __I  uint32_t INT_ST0;                            /* Address Offset: 0x00BC */
    __I  uint32_t INT_ST1;                            /* Address Offset: 0x00C0 */
    __IO uint32_t INT_MSK0;                           /* Address Offset: 0x00C4 */
    __IO uint32_t INT_MSK1;                           /* Address Offset: 0x00C8 */
         uint32_t RESERVED00CC[3];                    /* Address Offset: 0x00CC */
    __O  uint32_t INT_FORCE0;                         /* Address Offset: 0x00D8 */
    __O  uint32_t INT_FORCE1;                         /* Address Offset: 0x00DC */
         uint32_t RESERVED00E0[8];                    /* Address Offset: 0x00E0 */
    __IO uint32_t VID_SHADOW_CTRL;                    /* Address Offset: 0x0100 */
         uint32_t RESERVED0104[2];                    /* Address Offset: 0x0104 */
    __I  uint32_t DPI_VCID_ACT;                       /* Address Offset: 0x010C */
    __I  uint32_t DPI_COLOR_CODING_ACT;               /* Address Offset: 0x0110 */
         uint32_t RESERVED0114;                       /* Address Offset: 0x0114 */
    __I  uint32_t DPI_LP_CMD_TIM_ACT;                 /* Address Offset: 0x0118 */
         uint32_t RESERVED011C[7];                    /* Address Offset: 0x011C */
    __I  uint32_t VID_MODE_CFG_ACT;                   /* Address Offset: 0x0138 */
    __I  uint32_t VID_PKT_SIZE_ACT;                   /* Address Offset: 0x013C */
    __I  uint32_t VID_NUM_CHUNKS_ACT;                 /* Address Offset: 0x0140 */
    __I  uint32_t VID_NULL_SIZE_ACT;                  /* Address Offset: 0x0144 */
    __I  uint32_t VID_HSA_TIME_ACT;                   /* Address Offset: 0x0148 */
    __I  uint32_t VID_HBP_TIME_ACT;                   /* Address Offset: 0x014C */
    __I  uint32_t VID_HLINE_TIME_ACT;                 /* Address Offset: 0x0150 */
    __I  uint32_t VID_VSA_LINES_ACT;                  /* Address Offset: 0x0154 */
    __I  uint32_t VID_VBP_LINES_ACT;                  /* Address Offset: 0x0158 */
    __I  uint32_t VID_VFP_LINES_ACT;                  /* Address Offset: 0x015C */
    __I  uint32_t VID_VACTIVE_LINES_ACT;              /* Address Offset: 0x0160 */
         uint32_t RESERVED0164[11];                   /* Address Offset: 0x0164 */
    __IO uint32_t SDF_3D_ACT;                         /* Address Offset: 0x0190 */
};
/* UART Register Structure Define */
struct UART_REG {
    union {
        __I uint32_t RBR;                             /* Address Offset: 0x0000 */
        __O uint32_t THR;                             /* Address Offset: 0x0000 */
        __IO uint32_t DLL;                            /* Address Offset: 0x0000 */
    };

    union {
        __IO uint32_t DLH;                            /* Address Offset: 0x0004 */
        __IO uint32_t IER;                            /* Address Offset: 0x0004 */
    };

    union {
        __I  uint32_t IIR;                            /* Address Offset: 0x0008 */
        __O  uint32_t FCR;                            /* Address Offset: 0x0008 */
    };

    __IO uint32_t LCR;                                /* Address Offset: 0x000C */
    __IO uint32_t MCR;                                /* Address Offset: 0x0010 */
    __I  uint32_t LSR;                                /* Address Offset: 0x0014 */
    __I  uint32_t MSR;                                /* Address Offset: 0x0018 */
    __IO uint32_t SCR;                                /* Address Offset: 0x001C */
         uint32_t RESERVED0020[4];                    /* Address Offset: 0x0020 */

    union {
        __I  uint32_t SRBR;                           /* Address Offset: 0x0030 */
        __I  uint32_t STHR;                           /* Address Offset: 0x0030 */
    };
         uint32_t RESERVED0034[15];                   /* Address Offset: 0x0034 */

    __IO uint32_t FAR;                                /* Address Offset: 0x0070 */
    __I  uint32_t TFR;                                /* Address Offset: 0x0074 */
    __O  uint32_t RFW;                                /* Address Offset: 0x0078 */
    __I  uint32_t USR;                                /* Address Offset: 0x007C */
    __IO uint32_t TFL;                                /* Address Offset: 0x0080 */
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
/* TIMER Register Structure Define */
#define TIMER_CHAN_CNT   6
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __I  uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __O  uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
};
/* WDT Register Structure Define */
struct WDT_REG {
    __IO uint32_t CR;                             /* Address Offset: 0x0000 */
    __IO uint32_t TORR;                           /* Address Offset: 0x0004 */
    __I  uint32_t CCVR;                           /* Address Offset: 0x0008 */
    __O  uint32_t CRR;                            /* Address Offset: 0x000C */
    __I  uint32_t STAT;                           /* Address Offset: 0x0010 */
    __I  uint32_t EOI;                            /* Address Offset: 0x0014 */
};
/* I2C Register Structure Define */
struct I2C_REG {
    __IO uint32_t CON;                                /* Address Offset: 0x0000 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0004 */
    __IO uint32_t MRXADDR;                            /* Address Offset: 0x0008 */
    __IO uint32_t MRXRADDR;                           /* Address Offset: 0x000C */
    __IO uint32_t MTXCNT;                             /* Address Offset: 0x0010 */
    __IO uint32_t MRXCNT;                             /* Address Offset: 0x0014 */
    __IO uint32_t IEN;                                /* Address Offset: 0x0018 */
    __IO uint32_t IPD;                                /* Address Offset: 0x001C */
    __I  uint32_t FCNT;                               /* Address Offset: 0x0020 */
    __IO uint32_t SCL_OE_DB;                          /* Address Offset: 0x0024 */
         uint32_t RESERVED0[54];                      /* Address Offset: 0x0028 */
    __IO uint32_t TXDATA[8];                          /* Address Offset: 0x0100 */
         uint32_t RESERVED1[56];                      /* Address Offset: 0x0120 */
    __IO uint32_t RXDATA[8];                          /* Address Offset: 0x0200 */
    __I  uint32_t ST;                                 /* Address Offset: 0x0220 */
    __IO uint32_t DBGCTRL;                            /* Address Offset: 0x0224 */
};
/* SPI2APB Register Structure Define */
struct SPI2APB_REG {
    __IO uint32_t CTRL0;                              /* Address Offset: 0x0000 */
         uint32_t RESERVED0[8];                       /* Address Offset: 0x0004 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
         uint32_t RESERVED1;                          /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
         uint32_t RESERVED2;                          /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
         uint32_t RESERVED3[3];                       /* Address Offset: 0x003C */
    __IO uint32_t VERSION;                            /* Address Offset: 0x0048 */
         uint32_t RESERVED4;                          /* Address Offset: 0x004C */
    __IO uint32_t QUICK_REG[3];                       /* Address Offset: 0x0050 */
};
/* SPI Register Structure Define */
struct SPI_REG {
    __IO uint32_t CTRLR[2];                           /* Address Offset: 0x0000 */
    __IO uint32_t ENR;                                /* Address Offset: 0x0008 */
    __IO uint32_t SER;                                /* Address Offset: 0x000C */
    __IO uint32_t BAUDR;                              /* Address Offset: 0x0010 */
    __IO uint32_t TXFTLR;                             /* Address Offset: 0x0014 */
    __IO uint32_t RXFTLR;                             /* Address Offset: 0x0018 */
    __I  uint32_t TXFLR;                              /* Address Offset: 0x001C */
    __I  uint32_t RXFLR;                              /* Address Offset: 0x0020 */
    __IO uint32_t SR;                                 /* Address Offset: 0x0024 */
    __IO uint32_t IPR;                                /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
    __IO uint32_t ISR;                                /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
    __IO uint32_t DMACR;                              /* Address Offset: 0x003C */
    __IO uint32_t DMATDLR;                            /* Address Offset: 0x0040 */
    __IO uint32_t DMARDLR;                            /* Address Offset: 0x0044 */
         uint32_t RESERVED0;                          /* Address Offset: 0x0048 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t BYPASS;                             /* Address Offset: 0x0050 */
         uint32_t RESERVED1[235];                     /* Address Offset: 0x0054 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED2[255];                     /* Address Offset: 0x0404 */
    __IO uint32_t RXDR;                               /* Address Offset: 0x0800 */
};
/* GPIO Register Structure Define */
struct GPIO_REG {
    __IO uint32_t SWPORT_DR_L;                        /* Address Offset: 0x0000 */
    __IO uint32_t SWPORT_DR_H;                        /* Address Offset: 0x0004 */
    __IO uint32_t SWPORT_DDR_L;                       /* Address Offset: 0x0008 */
    __IO uint32_t SWPORT_DDR_H;                       /* Address Offset: 0x000C */
    __IO uint32_t INT_EN_L;                           /* Address Offset: 0x0010 */
    __IO uint32_t INT_EN_H;                           /* Address Offset: 0x0014 */
    __IO uint32_t INT_MASK_L;                         /* Address Offset: 0x0018 */
    __IO uint32_t INT_MASK_H;                         /* Address Offset: 0x001C */
    __IO uint32_t INT_TYPE_L;                         /* Address Offset: 0x0020 */
    __IO uint32_t INT_TYPE_H;                         /* Address Offset: 0x0024 */
    __IO uint32_t INT_POLARITY_L;                     /* Address Offset: 0x0028 */
    __IO uint32_t INT_POLARITY_H;                     /* Address Offset: 0x002C */
    __IO uint32_t INT_BOTHEDGE_L;                     /* Address Offset: 0x0030 */
    __IO uint32_t INT_BOTHEDGE_H;                     /* Address Offset: 0x0034 */
    __IO uint32_t DEBOUNCE_L;                         /* Address Offset: 0x0038 */
    __IO uint32_t DEBOUNCE_H;                         /* Address Offset: 0x003C */
    __IO uint32_t DBCLK_DIV_EN_L;                     /* Address Offset: 0x0040 */
    __IO uint32_t DBCLK_DIV_EN_H;                     /* Address Offset: 0x0044 */
    __IO uint32_t DBCLK_DIV_CON;                      /* Address Offset: 0x0048 */
         uint32_t RESERVED0;                          /* Address Offset: 0x004C */
    __I  uint32_t INT_STATUS;                         /* Address Offset: 0x0050 */
         uint32_t RESERVED1;                          /* Address Offset: 0x0054 */
    __I  uint32_t INT_RAWSTATUS;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED2;                          /* Address Offset: 0x005C */
    __O  uint32_t PORT_EOI_L;                         /* Address Offset: 0x0060 */
    __O  uint32_t PORT_EOI_H;                         /* Address Offset: 0x0064 */
         uint32_t RESERVED3[2];                       /* Address Offset: 0x0068 */
    __I  uint32_t EXT_PORT;                           /* Address Offset: 0x0070 */
         uint32_t RESERVED4;                          /* Address Offset: 0x0074 */
    __I  uint32_t VER_ID;                             /* Address Offset: 0x0078 */
};
/* PDM Register Structure Define */
struct PDM_REG {
    __IO uint32_t SYSCONFIG;                          /* Address Offset: 0x0000 */
    __IO uint32_t CTRL[2];                            /* Address Offset: 0x0004 */
    __IO uint32_t CLK_CTRL;                           /* Address Offset: 0x000C */
    __IO uint32_t HPF_CTRL;                           /* Address Offset: 0x0010 */
    __IO uint32_t FIFO_CTRL;                          /* Address Offset: 0x0014 */
    __IO uint32_t DMA_CTRL;                           /* Address Offset: 0x0018 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x001C */
    __O  uint32_t INT_CLR;                            /* Address Offset: 0x0020 */
    __I  uint32_t INT_ST;                             /* Address Offset: 0x0024 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0028 */
    __I  uint32_t RXFIFO_DATA_REG;                    /* Address Offset: 0x0030 */
    __I  uint32_t DATA0R_REG;                         /* Address Offset: 0x0034 */
    __I  uint32_t DATA0L_REG;                         /* Address Offset: 0x0038 */
    __I  uint32_t DATA1R_REG;                         /* Address Offset: 0x003C */
    __I  uint32_t DATA1L_REG;                         /* Address Offset: 0x0040 */
    __I  uint32_t DATA2R_REG;                         /* Address Offset: 0x0044 */
    __I  uint32_t DATA2L_REG;                         /* Address Offset: 0x0048 */
    __I  uint32_t DATA3R_REG;                         /* Address Offset: 0x004C */
    __I  uint32_t DATA3L_REG;                         /* Address Offset: 0x0050 */
    __I  uint32_t DATA_VALID;                         /* Address Offset: 0x0054 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0058 */
         uint32_t RESERVED1[233];                     /* Address Offset: 0x005C */
    __I  uint32_t INCR_RXDR;                          /* Address Offset: 0x0400 */
};
/* I2STDM Register Structure Define */
struct I2STDM_REG {
    __IO uint32_t TXCR;                               /* Address Offset: 0x0000 */
    __IO uint32_t RXCR;                               /* Address Offset: 0x0004 */
    __IO uint32_t CKR;                                /* Address Offset: 0x0008 */
    __IO uint32_t TXFIFOLR;                           /* Address Offset: 0x000C */
    __IO uint32_t DMACR;                              /* Address Offset: 0x0010 */
    __IO uint32_t INTCR;                              /* Address Offset: 0x0014 */
    __IO uint32_t INTSR;                              /* Address Offset: 0x0018 */
    __IO uint32_t XFER;                               /* Address Offset: 0x001C */
    __IO uint32_t CLR;                                /* Address Offset: 0x0020 */
    __IO uint32_t TXDR;                               /* Address Offset: 0x0024 */
    __IO uint32_t RXDR;                               /* Address Offset: 0x0028 */
    __IO uint32_t RXFIFOLR;                           /* Address Offset: 0x002C */
    __IO uint32_t TDM_TXCTRL;                         /* Address Offset: 0x0030 */
    __IO uint32_t TDM_RXCTRL;                         /* Address Offset: 0x0034 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0038 */
    __IO uint32_t VERSION;                            /* Address Offset: 0x003C */
};
/* VAD Register Structure Define */
struct VAD_REG {
    __IO uint32_t CONTROL;                            /* Address Offset: 0x0000 */
    __IO uint32_t VS_ADDR;                            /* Address Offset: 0x0004 */
         uint32_t RESERVED0008[17];                   /* Address Offset: 0x0008 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t RAM_START_ADDR;                     /* Address Offset: 0x0050 */
    __IO uint32_t RAM_END_ADDR;                       /* Address Offset: 0x0054 */
    __IO uint32_t RAM_CUR_ADDR;                       /* Address Offset: 0x0058 */
    __IO uint32_t DET_CON[6];                         /* Address Offset: 0x005C */
    __IO uint32_t INT;                                /* Address Offset: 0x0074 */
    __IO uint32_t AUX_CON0;                           /* Address Offset: 0x0078 */
    __I  uint32_t SAMPLE_CNT;                         /* Address Offset: 0x007C */
    __IO uint32_t RAM_START_ADDR_BUS;                 /* Address Offset: 0x0080 */
    __IO uint32_t RAM_END_ADDR_BUS;                   /* Address Offset: 0x0084 */
    __IO uint32_t RAM_CUR_ADDR_BUS;                   /* Address Offset: 0x0088 */
    __IO uint32_t AUX_CON1;                           /* Address Offset: 0x008C */
         uint32_t RESERVED0090[28];                   /* Address Offset: 0x0090 */
    __IO uint32_t NOISE_FIRST_DATA;                   /* Address Offset: 0x0100 */
         uint32_t RESERVED0104[126];                  /* Address Offset: 0x0104 */
    __IO uint32_t NOISE_LAST_DATA;                    /* Address Offset: 0x02FC */
};
/* VOP Register Structure Define */
struct VOP_REG {
    __IO uint32_t REG_CFG_DONE;                       /* Address Offset: 0x0000 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0004 */
    __IO uint32_t DSP_BG;                             /* Address Offset: 0x0008 */
    __IO uint32_t MCU;                                /* Address Offset: 0x000C */
    __IO uint32_t SYS_CTRL0;                          /* Address Offset: 0x0010 */
    __IO uint32_t SYS_CTRL1;                          /* Address Offset: 0x0014 */
    __IO uint32_t SYS_CTRL2;                          /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t DSP_CTRL0;                          /* Address Offset: 0x0020 */
    __IO uint32_t DSP_CTRL1;                          /* Address Offset: 0x0024 */
    __IO uint32_t DSP_CTRL2;                          /* Address Offset: 0x0028 */
    __IO uint32_t VOP_STATUS;                         /* Address Offset: 0x002C */
    __IO uint32_t LINE_FLAG;                          /* Address Offset: 0x0030 */
    __IO uint32_t INTR_EN;                            /* Address Offset: 0x0034 */
    __IO uint32_t INTR_CLEAR;                         /* Address Offset: 0x0038 */
    __IO uint32_t INTR_STATUS;                        /* Address Offset: 0x003C */
    __IO uint32_t WIN0_CTRL0;                         /* Address Offset: 0x0040 */
    __IO uint32_t WIN0_CTRL1;                         /* Address Offset: 0x0044 */
    __IO uint32_t WIN0_VIR;                           /* Address Offset: 0x0048 */
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __IO uint32_t WIN0_YRGB_MST;                      /* Address Offset: 0x0050 */
    __IO uint32_t WIN0_DSP_INFO;                      /* Address Offset: 0x0054 */
    __IO uint32_t WIN0_DSP_ST;                        /* Address Offset: 0x0058 */
    __IO uint32_t WIN0_COLOR_KEY;                     /* Address Offset: 0x005C */
         uint32_t RESERVED0060[3];                    /* Address Offset: 0x0060 */
    __IO uint32_t WIN0_ALPHA_CTRL;                    /* Address Offset: 0x006C */
    __IO uint32_t WIN0_CBCR_MST;                      /* Address Offset: 0x0070 */
    __IO uint32_t WIN0_YRGB_MST_RAW;                  /* Address Offset: 0x0074 */
    __IO uint32_t WIN0_CBCR_MST_RAW;                  /* Address Offset: 0x0078 */
    __IO uint32_t WIN0_LOOP_OFFSET;                   /* Address Offset: 0x007C */
    __IO uint32_t WIN1_CTRL0;                         /* Address Offset: 0x0080 */
    __IO uint32_t WIN1_CTRL1;                         /* Address Offset: 0x0084 */
    __IO uint32_t WIN1_VIR;                           /* Address Offset: 0x0088 */
         uint32_t RESERVED008C;                       /* Address Offset: 0x008C */
    __IO uint32_t WIN1_YRGB_MST;                      /* Address Offset: 0x0090 */
    __IO uint32_t WIN1_DSP_INFO;                      /* Address Offset: 0x0094 */
    __IO uint32_t WIN1_DSP_ST;                        /* Address Offset: 0x0098 */
    __IO uint32_t WIN1_COLOR_KEY;                     /* Address Offset: 0x009C */
         uint32_t RESERVED00A0[3];                    /* Address Offset: 0x00A0 */
    __IO uint32_t WIN1_ALPHA_CTRL;                    /* Address Offset: 0x00AC */
    __IO uint32_t WIN1_CBCR_MST;                      /* Address Offset: 0x00B0 */
    __IO uint32_t WIN1_YRGB_MST_RAW;                  /* Address Offset: 0x00B4 */
    __IO uint32_t WIN1_CBCR_MST_RAW;                  /* Address Offset: 0x00B8 */
    __IO uint32_t WIN1_LOOP_OFFSET;                   /* Address Offset: 0x00BC */
    __IO uint32_t WIN2_CTRL0;                         /* Address Offset: 0x00C0 */
    __IO uint32_t WIN2_CTRL1;                         /* Address Offset: 0x00C4 */
    __IO uint32_t WIN2_VIR;                           /* Address Offset: 0x00C8 */
         uint32_t RESERVED00CC;                       /* Address Offset: 0x00CC */
    __IO uint32_t WIN2_YRGB_MST;                      /* Address Offset: 0x00D0 */
    __IO uint32_t WIN2_DSP_INFO;                      /* Address Offset: 0x00D4 */
    __IO uint32_t WIN2_DSP_ST;                        /* Address Offset: 0x00D8 */
    __IO uint32_t WIN2_COLOR_KEY;                     /* Address Offset: 0x00DC */
         uint32_t RESERVED00E0[3];                    /* Address Offset: 0x00E0 */
    __IO uint32_t WIN2_ALPHA_CTRL;                    /* Address Offset: 0x00EC */
    __IO uint32_t WIN2_CBCR_MST;                      /* Address Offset: 0x00F0 */
    __IO uint32_t WIN2_YRGB_MST_RAW;                  /* Address Offset: 0x00F4 */
    __IO uint32_t WIN2_CBCR_MST_RAW;                  /* Address Offset: 0x00F8 */
    __IO uint32_t WIN2_LOOP_OFFSET;                   /* Address Offset: 0x00FC */
    __IO uint32_t DSP_HTOTAL_HS_END;                  /* Address Offset: 0x0100 */
    __IO uint32_t DSP_HACT_ST_END;                    /* Address Offset: 0x0104 */
    __IO uint32_t DSP_VTOTAL_VS_END;                  /* Address Offset: 0x0108 */
    __IO uint32_t DSP_VACT_ST_END;                    /* Address Offset: 0x010C */
    __IO uint32_t DSP_VS_ST_END_F1;                   /* Address Offset: 0x0110 */
    __IO uint32_t DSP_VACT_ST_END_F1;                 /* Address Offset: 0x0114 */
    __IO uint32_t PRE_HTOTAL_HS_END;                  /* Address Offset: 0x0118 */
    __IO uint32_t PRE_HACT_ST_END;                    /* Address Offset: 0x011C */
    __IO uint32_t PRE_VTOTAL_VS_END;                  /* Address Offset: 0x0120 */
    __IO uint32_t PRE_VACT_ST_END;                    /* Address Offset: 0x0124 */
         uint32_t RESERVED0128[14];                   /* Address Offset: 0x0128 */
    __IO uint32_t BCSH_CTRL;                          /* Address Offset: 0x0160 */
    __IO uint32_t BCSH_COL_BAR;                       /* Address Offset: 0x0164 */
    __IO uint32_t BCSH_BCS;                           /* Address Offset: 0x0168 */
    __IO uint32_t BCSH_H;                             /* Address Offset: 0x016C */
    __IO uint32_t GAMMA_COE_WORD0;                    /* Address Offset: 0x0170 */
    __IO uint32_t GAMMA_COE_WORD1;                    /* Address Offset: 0x0174 */
    __IO uint32_t GAMMA_COE_WORD2;                    /* Address Offset: 0x0178 */
    __IO uint32_t GAMMA_COE_WORD3;                    /* Address Offset: 0x017C */
    __IO uint32_t POST_CTRL;                          /* Address Offset: 0x0180 */
    __IO uint32_t COLOR_MATRIX_COE0;                  /* Address Offset: 0x0184 */
    __IO uint32_t COLOR_MATRIX_COE1;                  /* Address Offset: 0x0188 */
    __IO uint32_t COLOR_MATRIX_COE2;                  /* Address Offset: 0x018C */
    __IO uint32_t MCU_WRITE_DATA;                     /* Address Offset: 0x0190 */
         uint32_t RESERVED0194[23];                   /* Address Offset: 0x0194 */
    __I  uint32_t DBG_REG_SCAN_LINE;                  /* Address Offset: 0x01F0 */
    __IO uint32_t BLANKING_VALUE;                     /* Address Offset: 0x01F4 */
    __I  uint32_t FLAG_REG_FRM_VALID;                 /* Address Offset: 0x01F8 */
    __O  uint32_t FLAG_REG;                           /* Address Offset: 0x01FC */
    __IO uint32_t WIN0_BPP_LUT[256];                  /* Address Offset: 0x0200 */
    __IO uint32_t WIN1_BPP_LUT[256];                  /* Address Offset: 0x0600 */
    __IO uint32_t DSC_SYS_CTRL0_IMD;                  /* Address Offset: 0x0A00 */
    __IO uint32_t DSC_SYS_CTRL1;                      /* Address Offset: 0x0A04 */
    __IO uint32_t DSC_SYS_CTRL2;                      /* Address Offset: 0x0A08 */
    __IO uint32_t DSC_SYS_CTRL3;                      /* Address Offset: 0x0A0C */
    __IO uint32_t DSC_CFG[21];                        /* Address Offset: 0x0A10 */
         uint32_t RESERVED0A64[3];                    /* Address Offset: 0x0A64 */
    __IO uint32_t DSC_INT_EN;                         /* Address Offset: 0x0A70 */
    __IO uint32_t DSC_INT_CLR;                        /* Address Offset: 0x0A74 */
    __IO uint32_t DSC_INT_STATUS;                     /* Address Offset: 0x0A78 */
         uint32_t RESERVED0A7C;                       /* Address Offset: 0x0A7C */
    __I  uint32_t DSC_DBG_STATUS0;                    /* Address Offset: 0x0A80 */
    __I  uint32_t DSC_DBG_STATUS1;                    /* Address Offset: 0x0A84 */
    __IO uint32_t DSC_DBG_STATUS2;                    /* Address Offset: 0x0A88 */
};
/* ACDCDIG Register Structure Define */
struct ACDCDIG_REG {
    __IO uint32_t VUCTL;                              /* Address Offset: 0x0000 */
    __IO uint32_t VUCTIME;                            /* Address Offset: 0x0004 */
    __IO uint32_t DIGEN;                              /* Address Offset: 0x0008 */
    __IO uint32_t CLKCTRL;                            /* Address Offset: 0x000C */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0010 */
    __IO uint32_t REFCFG;                             /* Address Offset: 0x0014 */
    __IO uint32_t ADCCFG0;                            /* Address Offset: 0x0018 */
    __IO uint32_t ADCCFG1;                            /* Address Offset: 0x001C */
    __IO uint32_t ADCCFG2;                            /* Address Offset: 0x0020 */
    __IO uint32_t ADCCFG3;                            /* Address Offset: 0x0024 */
    __IO uint32_t ADCVOLL;                            /* Address Offset: 0x0028 */
    __IO uint32_t ADCVOLR;                            /* Address Offset: 0x002C */
    __IO uint32_t ALC0;                               /* Address Offset: 0x0030 */
    __IO uint32_t ALC1;                               /* Address Offset: 0x0034 */
    __IO uint32_t ALC2;                               /* Address Offset: 0x0038 */
    __IO uint32_t ADCNG;                              /* Address Offset: 0x003C */
    __IO uint32_t HPFCTRL;                            /* Address Offset: 0x0040 */
    __I  uint32_t ADCRVOLL;                           /* Address Offset: 0x0044 */
    __I  uint32_t ADCRVOLR;                           /* Address Offset: 0x0048 */
    __IO uint32_t PGACFG;                             /* Address Offset: 0x004C */
    __IO uint32_t PGAGAINL;                           /* Address Offset: 0x0050 */
    __IO uint32_t PGAGAINR;                           /* Address Offset: 0x0054 */
    __IO uint32_t LILMT1;                             /* Address Offset: 0x0058 */
    __IO uint32_t LILMT2;                             /* Address Offset: 0x005C */
    __IO uint32_t LILMTNG1;                           /* Address Offset: 0x0060 */
    __I  uint32_t LILMTNG2;                           /* Address Offset: 0x0064 */
    __IO uint32_t PDMCTRL;                            /* Address Offset: 0x0068 */
    __IO uint32_t I2SCKM;                             /* Address Offset: 0x006C */
    __IO uint32_t I2SDIV;                             /* Address Offset: 0x0070 */
    __IO uint32_t I2STXCR0;                           /* Address Offset: 0x0074 */
    __IO uint32_t I2STXCR1;                           /* Address Offset: 0x0078 */
    __IO uint32_t I2STXCR2;                           /* Address Offset: 0x007C */
    __IO uint32_t I2STXCMD;                           /* Address Offset: 0x0080 */
    __I  uint32_t VERSION;                            /* Address Offset: 0x0084 */
};
#endif /* __ASSEMBLY__ */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define DSP_ITCM_BASE       0x30000000U /* DSP itcm base address */
#define DSP_ITCM_END        0x3000ffffU /* DSP itcm end address */
#define DSP_DTCM_BASE       0x30200000U /* DSP dtcm base address */
#define DSP_DTCM_END        0x3027ffffU /* DSP dtcm end address */
#define ICACHE_BASE         0x40000000U /* ICACHE base address */
#define DCACHE_BASE         0x40004000U /* DCACHE base address */
#define INTC0_BASE          0x40010000U /* INTC0(DSP) base address */
#define INTC1_BASE          0x40020000U /* INTC1(AP) base address */
#define CRU_BASE            0x40050000U /* CRU base address */
#define GRF_BASE            0x400B0000U /* GRF base address */
#define MBOX0_BASE          0x40100000U /* MBOX0 base address */
#define MBOX1_BASE          0x40110000U /* MBOX1 base address */
#define MBOX2_BASE          0x40120000U /* MBOX2 base address */
#define PMU_BASE            0x40130000U /* PMU base address */
#define SHAREMEM_BASE       0x40160000U /* SHAREMEM base address */
#define DMA_BASE            0x401C0000U /* DMA base address */
#define ACDCDIG_BASE        0x40300000U /* ACDCDIG base address */
#define DSI_BASE            0x41110000U /* DSI base address */
#define UART0_BASE          0x40800000U /* UART0 base address */
#define UART1_BASE          0x40810000U /* UART1 base address */
#define TIMER_BASE          0x40900000U /* TIMER base address */
#define WDT_BASE            0x40A00000U /* WDT base address */
#define I2C0_BASE           0x40B00000U /* I2C0 base address */
#define I2C1_BASE           0x40B10000U /* I2C1 base address */
#define I2C2_BASE           0x40B20000U /* I2C2 base address */
#define SPI2APB_BASE        0x40C00000U /* SPI2APB base address */
#define SPI1_BASE           0x40C10000U /* SPI1 base address */
#define GPIO0_BASE          0x40D00000U /* GPIO0 base address */
#define GPIO1_BASE          0x40D10000U /* GPIO1 base address */
#define PDM0_BASE           0x41000000U /* PDM0 base address */
#define I2STDM0_BASE        0x41010000U /* I2STDM0 base address */
#define VAD_BASE            0x41020000U /* VAD base address */
#define VOP_BASE            0x41100000U /* VOP base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define GRF                 ((struct GRF_REG *) GRF_BASE)
#define MBOX0               ((struct MBOX_REG *) MBOX0_BASE)
#define MBOX1               ((struct MBOX_REG *) MBOX1_BASE)
#define MBOX2               ((struct MBOX_REG *) MBOX2_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define SHAREMEM            ((struct SHAREMEM_REG *) SHAREMEM_BASE)
#define DMA                 ((struct DMA_REG *) DMA_BASE)
#define DSI                 ((struct DSI_REG *) DSI_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER_BASE)
#define TIMER1              ((struct TIMER_REG *) (TIMER_BASE + 0x20))
#define TIMER2              ((struct TIMER_REG *) (TIMER_BASE + 0x40))
#define TIMER3              ((struct TIMER_REG *) (TIMER_BASE + 0x60))
#define TIMER4              ((struct TIMER_REG *) (TIMER_BASE + 0x80))
#define TIMER5              ((struct TIMER_REG *) (TIMER_BASE + 0xA0))
#define WDT                 ((struct WDT_REG *) WDT_BASE)
#define I2C0                ((struct I2C_REG *) I2C0_BASE)
#define I2C1                ((struct I2C_REG *) I2C1_BASE)
#define I2C2                ((struct I2C_REG *) I2C2_BASE)
#define SPI2APB             ((struct SPI2APB_REG *) SPI2APB_BASE)
#define SPI1                ((struct SPI_REG *) SPI1_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define PDM0                ((struct PDM_REG *) PDM0_BASE)
#define I2STDM0             ((struct I2STDM_REG *) I2STDM0_BASE)
#define VAD                 ((struct VAD_REG *) VAD_BASE)
#define VOP                 ((struct VOP_REG *) VOP_BASE)
#define ACDCDIG             ((struct ACDCDIG_REG *) ACDCDIG_BASE)

#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_GRF_INSTANCE(instance) ((instance) == GRF)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_SHAREMEM_INSTANCE(instance) ((instance) == SHAREMEM)
#define IS_DMA_INSTANCE(instance) ((instance) == DMA)
#define IS_DSI_INSTANCE(instance) ((instance) == DSI)
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1))
#define IS_WDT_INSTANCE(instance) ((instance) == WDT)
#define IS_SPI2APB_INSTANCE(instance) ((instance) == SPI2APB)
#define IS_PDM_INSTANCE(instance) ((instance) == PDM0)
#define IS_VAD_INSTANCE(instance) ((instance) == VAD)
#define IS_VOP_INSTANCE(instance) ((instance) == VOP)
#define IS_ACDCDIG_INSTANCE(instance) ((instance) == ACDCDIG)
#define IS_MBOX_INSTANCE(instance) (((instance) == MBOX0) || ((instance) == MBOX1) || ((instance) == MBOX2))
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1) || ((instance) == TIMER2) || ((instance) == TIMER3) || ((instance) == TIMER4) || ((instance) == TIMER5))
#define IS_I2C_INSTANCE(instance) (((instance) == I2C0) || ((instance) == I2C1) || ((instance) == I2C2))
#define IS_SPI_INSTANCE(instance) ((instance) == SPI1)
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1))
#define IS_I2STDM_INSTANCE(instance) ((instance) == I2STDM0)
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/*****************************************ICACHE*****************************************/
/* CACHE_CTRL */
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
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00010000 */
/* CACHE_MAINTAIN0 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/*****************************************DCACHE*****************************************/
/* CACHE_CTRL */
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
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00010000 */
/* CACHE_MAINTAIN0 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */

/* CACHE LINE SIZE */
#define CACHE_LINE_SHIFT                (5U)
#define CACHE_LINE_SIZE                 (0x1U << CACHE_LINE_SHIFT)
#define CACHE_LINE_ADDR_MASK            (0xFFFFFFFFU << CACHE_LINE_SHIFT)
#define CACHE_M_CLEAN                   0x0U
#define CACHE_M_INVALID                 0x2U
#define CACHE_M_CLEAN_INVALID           0x4U
#define CACHE_M_INVALID_ALL             0x6U

/* ICACHE ADDR TO DCACHE ADDR */
#define SRAM_IADDR_START                                   (0x04000000U)
#define SRAM_SIZE                                          (0x00100000U)
#define SRAM_IADDR_TO_DADDR_OFFSET                         (0x1c000000U)


#define CACHE_REVISION                  (0x00000100U)
/******************************************CRU*******************************************/
/* GPLL_CON0 */
#define CRU_GPLL_CON0_OFFSET                               (0x0)
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_OFFSET                               (0x4)
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
#define CRU_GPLL_CON2_OFFSET                               (0x8)
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
#define CRU_GPLL_CON3_OFFSET                               (0xC)
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
#define CRU_GPLL_CON4_OFFSET                               (0x10)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x20)
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x24)
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
#define CRU_CPLL_CON2_OFFSET                               (0x28)
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
/* SPLL_CON0 */
#define CRU_SPLL_CON0_OFFSET                               (0x40)
#define CRU_SPLL_CON0_CLKOD_SHIFT                          (0U)
#define CRU_SPLL_CON0_CLKOD_MASK                           (0xFU << CRU_SPLL_CON0_CLKOD_SHIFT)                          /* 0x0000000F */
#define CRU_SPLL_CON0_CLKR_SHIFT                           (8U)
#define CRU_SPLL_CON0_CLKR_MASK                            (0x3FU << CRU_SPLL_CON0_CLKR_SHIFT)                          /* 0x00003F00 */
#define CRU_SPLL_CON0_CLKOD_MASK_SHIFT                     (16U)
#define CRU_SPLL_CON0_CLKOD_MASK_MASK                      (0xFU << CRU_SPLL_CON0_CLKOD_MASK_SHIFT)                     /* 0x000F0000 */
#define CRU_SPLL_CON0_CLKR_MASK_SHIFT                      (24U)
#define CRU_SPLL_CON0_CLKR_MASK_MASK                       (0x3FU << CRU_SPLL_CON0_CLKR_MASK_SHIFT)                     /* 0x3F000000 */
/* SPLL_CON1 */
#define CRU_SPLL_CON1_OFFSET                               (0x44)
#define CRU_SPLL_CON1_CLKF_SHIFT                           (0U)
#define CRU_SPLL_CON1_CLKF_MASK                            (0x1FFFU << CRU_SPLL_CON1_CLKF_SHIFT)                        /* 0x00001FFF */
#define CRU_SPLL_CON1_CLKF_MASK_SHIFT                      (16U)
#define CRU_SPLL_CON1_CLKF_MASK_MASK                       (0x1FFFU << CRU_SPLL_CON1_CLKF_MASK_SHIFT)                   /* 0x1FFF0000 */
/* SPLL_CON2 */
#define CRU_SPLL_CON2_OFFSET                               (0x48)
#define CRU_SPLL_CON2_BWADJ_SHIFT                          (0U)
#define CRU_SPLL_CON2_BWADJ_MASK                           (0xFFFU << CRU_SPLL_CON2_BWADJ_SHIFT)                        /* 0x00000FFF */
#define CRU_SPLL_CON2_BWADJ_MASK_SHIFT                     (16U)
#define CRU_SPLL_CON2_BWADJ_MASK_MASK                      (0xFFFU << CRU_SPLL_CON2_BWADJ_MASK_SHIFT)                   /* 0x0FFF0000 */
/* SPLL_CON3 */
#define CRU_SPLL_CON3_OFFSET                               (0x4C)
#define CRU_SPLL_CON3_BYPASS_SHIFT                         (0U)
#define CRU_SPLL_CON3_BYPASS_MASK                          (0x1U << CRU_SPLL_CON3_BYPASS_SHIFT)                         /* 0x00000001 */
#define CRU_SPLL_CON3_POWER_DOWN_SHIFT                     (1U)
#define CRU_SPLL_CON3_POWER_DOWN_MASK                      (0x1U << CRU_SPLL_CON3_POWER_DOWN_SHIFT)                     /* 0x00000002 */
#define CRU_SPLL_CON3_FASTEN_SHIFT                         (2U)
#define CRU_SPLL_CON3_FASTEN_MASK                          (0x1U << CRU_SPLL_CON3_FASTEN_SHIFT)                         /* 0x00000004 */
#define CRU_SPLL_CON3_ENSAT_SHIFT                          (3U)
#define CRU_SPLL_CON3_ENSAT_MASK                           (0x1U << CRU_SPLL_CON3_ENSAT_SHIFT)                          /* 0x00000008 */
#define CRU_SPLL_CON3_TEST_SHIFT                           (4U)
#define CRU_SPLL_CON3_TEST_MASK                            (0x1U << CRU_SPLL_CON3_TEST_SHIFT)                           /* 0x00000010 */
#define CRU_SPLL_CON3_RESET_SHIFT                          (5U)
#define CRU_SPLL_CON3_RESET_MASK                           (0x1U << CRU_SPLL_CON3_RESET_SHIFT)                          /* 0x00000020 */
#define CRU_SPLL_CON3_LOCK_OUT_DISALBE_SHIFT               (6U)
#define CRU_SPLL_CON3_LOCK_OUT_DISALBE_MASK                (0x1U << CRU_SPLL_CON3_LOCK_OUT_DISALBE_SHIFT)               /* 0x00000040 */
#define CRU_SPLL_CON3_BYPASS_MASK_SHIFT                    (16U)
#define CRU_SPLL_CON3_BYPASS_MASK_MASK                     (0x1U << CRU_SPLL_CON3_BYPASS_MASK_SHIFT)                    /* 0x00010000 */
#define CRU_SPLL_CON3_POWER_DOWN_MASK_SHIFT                (17U)
#define CRU_SPLL_CON3_POWER_DOWN_MASK_MASK                 (0x1U << CRU_SPLL_CON3_POWER_DOWN_MASK_SHIFT)                /* 0x00020000 */
#define CRU_SPLL_CON3_FASTEN_MASK_SHIFT                    (18U)
#define CRU_SPLL_CON3_FASTEN_MASK_MASK                     (0x1U << CRU_SPLL_CON3_FASTEN_MASK_SHIFT)                    /* 0x00040000 */
#define CRU_SPLL_CON3_ENSAT_MASK_SHIFT                     (19U)
#define CRU_SPLL_CON3_ENSAT_MASK_MASK                      (0x1U << CRU_SPLL_CON3_ENSAT_MASK_SHIFT)                     /* 0x00080000 */
#define CRU_SPLL_CON3_TEST_MASK_SHIFT                      (20U)
#define CRU_SPLL_CON3_TEST_MASK_MASK                       (0x1U << CRU_SPLL_CON3_TEST_MASK_SHIFT)                      /* 0x00100000 */
#define CRU_SPLL_CON3_RESET_MASK_SHIFT                     (21U)
#define CRU_SPLL_CON3_RESET_MASK_MASK                      (0x1U << CRU_SPLL_CON3_RESET_MASK_SHIFT)                     /* 0x00200000 */
#define CRU_SPLL_CON3_LOCK_OUT_DISABLE_MASK_SHIFT          (22U)
#define CRU_SPLL_CON3_LOCK_OUT_DISABLE_MASK_MASK           (0x1U << CRU_SPLL_CON3_LOCK_OUT_DISABLE_MASK_SHIFT)          /* 0x00400000 */
/* CRU_MODE_CON00 */
#define CRU_CRU_MODE_CON00_OFFSET                          (0x60)
#define CRU_CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT             (0U)
#define CRU_CRU_MODE_CON00_CLK_GPLL_MODE_MASK              (0x3U << CRU_CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)             /* 0x00000003 */
#define CRU_CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT             (2U)
#define CRU_CRU_MODE_CON00_CLK_CPLL_MODE_MASK              (0x3U << CRU_CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT)             /* 0x0000000C */
/* CRU_CLKSEL_CON00 */
#define CRU_CRU_CLKSEL_CON00_OFFSET                        (0x80)
#define CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_DIV_MASK           (0x3FU << CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_DIV_SHIFT)         /* 0x0000003F */
#define CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_SEL_SHIFT          (6U)
#define CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_SEL_MASK           (0x3U << CRU_CRU_CLKSEL_CON00_ACLK_DSP_S_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CRU_CLKSEL_CON00_PCLK_DSP_DIV_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON00_PCLK_DSP_DIV_MASK             (0x3FU << CRU_CRU_CLKSEL_CON00_PCLK_DSP_DIV_SHIFT)           /* 0x00003F00 */
/* CRU_CLKSEL_CON02 */
#define CRU_CRU_CLKSEL_CON02_OFFSET                        (0x88)
#define CRU_CRU_CLKSEL_CON02_SCLK_SHRM_DIV_SHIFT           (0U)
#define CRU_CRU_CLKSEL_CON02_SCLK_SHRM_DIV_MASK            (0xFU << CRU_CRU_CLKSEL_CON02_SCLK_SHRM_DIV_SHIFT)           /* 0x0000000F */
#define CRU_CRU_CLKSEL_CON02_SCLK_SHRM_SEL_SHIFT           (4U)
#define CRU_CRU_CLKSEL_CON02_SCLK_SHRM_SEL_MASK            (0x1U << CRU_CRU_CLKSEL_CON02_SCLK_SHRM_SEL_SHIFT)           /* 0x00000010 */
#define CRU_CRU_CLKSEL_CON02_PCLK_SHRM_DIV_SHIFT           (8U)
#define CRU_CRU_CLKSEL_CON02_PCLK_SHRM_DIV_MASK            (0x1FU << CRU_CRU_CLKSEL_CON02_PCLK_SHRM_DIV_SHIFT)          /* 0x00001F00 */
/* CRU_CLKSEL_CON03 */
#define CRU_CRU_CLKSEL_CON03_OFFSET                        (0x8C)
#define CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_DIV_SHIFT       (0U)
#define CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_DIV_MASK        (0x1FU << CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_SEL_SHIFT       (5U)
#define CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_SEL_MASK        (0x1U << CRU_CRU_CLKSEL_CON03_CLK_UART0_SRC_SEL_SHIFT)       /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON03_SCLK_UART0_SEL_SHIFT          (6U)
#define CRU_CRU_CLKSEL_CON03_SCLK_UART0_SEL_MASK           (0x3U << CRU_CRU_CLKSEL_CON03_SCLK_UART0_SEL_SHIFT)          /* 0x000000C0 */
/* CRU_CLKSEL_CON04 */
#define CRU_CRU_CLKSEL_CON04_OFFSET                        (0x90)
#define CRU_CRU_CLKSEL_CON04_CLK_UART0_FRAC_DIV_SHIFT      (0U)
#define CRU_CRU_CLKSEL_CON04_CLK_UART0_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON04_CLK_UART0_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON05 */
#define CRU_CRU_CLKSEL_CON05_OFFSET                        (0x94)
#define CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_DIV_SHIFT       (0U)
#define CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_DIV_MASK        (0x1FU << CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_SEL_SHIFT       (5U)
#define CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_SEL_MASK        (0x1U << CRU_CRU_CLKSEL_CON05_CLK_UART1_SRC_SEL_SHIFT)       /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON05_SCLK_UART1_SEL_SHIFT          (6U)
#define CRU_CRU_CLKSEL_CON05_SCLK_UART1_SEL_MASK           (0x3U << CRU_CRU_CLKSEL_CON05_SCLK_UART1_SEL_SHIFT)          /* 0x000000C0 */
/* CRU_CLKSEL_CON06 */
#define CRU_CRU_CLKSEL_CON06_OFFSET                        (0x98)
#define CRU_CRU_CLKSEL_CON06_CLK_UART1_FRAC_DIV_SHIFT      (0U)
#define CRU_CRU_CLKSEL_CON06_CLK_UART1_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON06_CLK_UART1_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON07 */
#define CRU_CRU_CLKSEL_CON07_OFFSET                        (0x9C)
#define CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_DIV_SHIFT       (0U)
#define CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_DIV_MASK        (0x1FU << CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_SEL_SHIFT       (5U)
#define CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_SEL_MASK        (0x1U << CRU_CRU_CLKSEL_CON07_CLK_UART2_SRC_SEL_SHIFT)       /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON07_SCLK_UART2_SEL_SHIFT          (6U)
#define CRU_CRU_CLKSEL_CON07_SCLK_UART2_SEL_MASK           (0x3U << CRU_CRU_CLKSEL_CON07_SCLK_UART2_SEL_SHIFT)          /* 0x000000C0 */
/* CRU_CLKSEL_CON08 */
#define CRU_CRU_CLKSEL_CON08_OFFSET                        (0xA0)
#define CRU_CRU_CLKSEL_CON08_CLK_UART2_FRAC_DIV_SHIFT      (0U)
#define CRU_CRU_CLKSEL_CON08_CLK_UART2_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON08_CLK_UART2_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON13 */
#define CRU_CRU_CLKSEL_CON13_OFFSET                        (0xB4)
#define CRU_CRU_CLKSEL_CON13_CLK_I2C0_DIV_SHIFT            (0U)
#define CRU_CRU_CLKSEL_CON13_CLK_I2C0_DIV_MASK             (0xFU << CRU_CRU_CLKSEL_CON13_CLK_I2C0_DIV_SHIFT)            /* 0x0000000F */
#define CRU_CRU_CLKSEL_CON13_CLK_I2C1_DIV_SHIFT            (4U)
#define CRU_CRU_CLKSEL_CON13_CLK_I2C1_DIV_MASK             (0xFU << CRU_CRU_CLKSEL_CON13_CLK_I2C1_DIV_SHIFT)            /* 0x000000F0 */
#define CRU_CRU_CLKSEL_CON13_CLK_I2C2_DIV_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON13_CLK_I2C2_DIV_MASK             (0xFU << CRU_CRU_CLKSEL_CON13_CLK_I2C2_DIV_SHIFT)            /* 0x00000F00 */
/* CRU_CLKSEL_CON14 */
#define CRU_CRU_CLKSEL_CON14_OFFSET                        (0xB8)
#define CRU_CRU_CLKSEL_CON14_MCLK_PDM0_DIV_SHIFT           (0U)
#define CRU_CRU_CLKSEL_CON14_MCLK_PDM0_DIV_MASK            (0x1FU << CRU_CRU_CLKSEL_CON14_MCLK_PDM0_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON14_MCLK_PDM0_SEL_SHIFT           (7U)
#define CRU_CRU_CLKSEL_CON14_MCLK_PDM0_SEL_MASK            (0x1U << CRU_CRU_CLKSEL_CON14_MCLK_PDM0_SEL_SHIFT)           /* 0x00000080 */
#define CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_DIV_SHIFT          (8U)
#define CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_SEL_SHIFT          (15U)
#define CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON14_HCLK_AUDIO_SEL_SHIFT)          /* 0x00008000 */
/* CRU_CLKSEL_CON15 */
#define CRU_CRU_CLKSEL_CON15_OFFSET                        (0xBC)
#define CRU_CRU_CLKSEL_CON15_MCLK_PDM0_OUT_DIV_SHIFT       (0U)
#define CRU_CRU_CLKSEL_CON15_MCLK_PDM0_OUT_DIV_MASK        (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON15_MCLK_PDM0_OUT_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON16 */
#define CRU_CRU_CLKSEL_CON16_OFFSET                        (0xC0)
#define CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_DIV_MASK       (0x1FU << CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_DIV_SHIFT)     /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_SEL_SHIFT      (5U)
#define CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_SEL_MASK       (0x1U << CRU_CRU_CLKSEL_CON16_CLK_I2S8CH_SRC_SEL_SHIFT)      /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON16_MCLK_I2S8CH_SEL_SHIFT         (6U)
#define CRU_CRU_CLKSEL_CON16_MCLK_I2S8CH_SEL_MASK          (0x3U << CRU_CRU_CLKSEL_CON16_MCLK_I2S8CH_SEL_SHIFT)         /* 0x000000C0 */
#define CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_DIV_SHIFT          (8U)
#define CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_SEL_SHIFT          (14U)
#define CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON16_PCLK_AUDIO_SEL_SHIFT)          /* 0x00004000 */
#define CRU_CRU_CLKSEL_CON16_I2S_MCLKOUT_SEL_SHIFT         (15U)
#define CRU_CRU_CLKSEL_CON16_I2S_MCLKOUT_SEL_MASK          (0x1U << CRU_CRU_CLKSEL_CON16_I2S_MCLKOUT_SEL_SHIFT)         /* 0x00008000 */
/* CRU_CLKSEL_CON17 */
#define CRU_CRU_CLKSEL_CON17_OFFSET                        (0xC4)
#define CRU_CRU_CLKSEL_CON17_CLK_I2S8CH_FRAC_DIV_SHIFT     (0U)
#define CRU_CRU_CLKSEL_CON17_CLK_I2S8CH_FRAC_DIV_MASK      (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON17_CLK_I2S8CH_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON18 */
#define CRU_CRU_CLKSEL_CON18_OFFSET                        (0xC8)
#define CRU_CRU_CLKSEL_CON18_ACLK_DMAC_DIV_SHIFT           (0U)
#define CRU_CRU_CLKSEL_CON18_ACLK_DMAC_DIV_MASK            (0x1FU << CRU_CRU_CLKSEL_CON18_ACLK_DMAC_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON18_ACLK_DMAC_SEL_SHIFT           (7U)
#define CRU_CRU_CLKSEL_CON18_ACLK_DMAC_SEL_MASK            (0x1U << CRU_CRU_CLKSEL_CON18_ACLK_DMAC_SEL_SHIFT)           /* 0x00000080 */
/* CRU_CLKSEL_CON19 */
#define CRU_CRU_CLKSEL_CON19_OFFSET                        (0xCC)
#define CRU_CRU_CLKSEL_CON19_ACLK_VOP_DIV_SHIFT            (0U)
#define CRU_CRU_CLKSEL_CON19_ACLK_VOP_DIV_MASK             (0x1FU << CRU_CRU_CLKSEL_CON19_ACLK_VOP_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON19_ACLK_VOP_SEL_SHIFT            (7U)
#define CRU_CRU_CLKSEL_CON19_ACLK_VOP_SEL_MASK             (0x1U << CRU_CRU_CLKSEL_CON19_ACLK_VOP_SEL_SHIFT)            /* 0x00000080 */
/* CRU_CLKSEL_CON20 */
#define CRU_CRU_CLKSEL_CON20_OFFSET                        (0xD0)
#define CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_SEL_SHIFT          (7U)
#define CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON20_DCLK_VOP_S_SEL_SHIFT)          /* 0x00000080 */
/* CRU_CLKSEL_CON22 */
#define CRU_CRU_CLKSEL_CON22_OFFSET                        (0xD8)
#define CRU_CRU_CLKSEL_CON22_OCC_SCAN_CLK_DPHYLANBYTE_SEL_SHIFT (6U)
#define CRU_CRU_CLKSEL_CON22_OCC_SCAN_CLK_DPHYLANBYTE_SEL_MASK (0x3U << CRU_CRU_CLKSEL_CON22_OCC_SCAN_CLK_DPHYLANBYTE_SEL_SHIFT) /* 0x000000C0 */
/* CRU_CLKSEL_CON23 */
#define CRU_CRU_CLKSEL_CON23_OFFSET                        (0xDC)
#define CRU_CRU_CLKSEL_CON23_OCC_SCAN_CLK_DPHYLANBYTE_DIV_SHIFT (0U)
#define CRU_CRU_CLKSEL_CON23_OCC_SCAN_CLK_DPHYLANBYTE_DIV_MASK (0xFFU << CRU_CRU_CLKSEL_CON23_OCC_SCAN_CLK_DPHYLANBYTE_DIV_SHIFT) /* 0x000000FF */
/* CRU_CLKSEL_CON24 */
#define CRU_CRU_CLKSEL_CON24_OFFSET                        (0xE0)
#define CRU_CRU_CLKSEL_CON24_CLK_GPIO_DB0_DIV_SHIFT        (0U)
#define CRU_CRU_CLKSEL_CON24_CLK_GPIO_DB0_DIV_MASK         (0x3FFU << CRU_CRU_CLKSEL_CON24_CLK_GPIO_DB0_DIV_SHIFT)      /* 0x000003FF */
/* CRU_CLKSEL_CON25 */
#define CRU_CRU_CLKSEL_CON25_OFFSET                        (0xE4)
#define CRU_CRU_CLKSEL_CON25_CLK_GPIO_DB1_DIV_SHIFT        (0U)
#define CRU_CRU_CLKSEL_CON25_CLK_GPIO_DB1_DIV_MASK         (0x3FFU << CRU_CRU_CLKSEL_CON25_CLK_GPIO_DB1_DIV_SHIFT)      /* 0x000003FF */
/* CRU_CLKSEL_CON27 */
#define CRU_CRU_CLKSEL_CON27_OFFSET                        (0xEC)
#define CRU_CRU_CLKSEL_CON27_PCLK_ALIVE_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON27_PCLK_ALIVE_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON27_PCLK_ALIVE_DIV_SHIFT)         /* 0x0000001F */
/* CRU_CLKSEL_CON28 */
#define CRU_CRU_CLKSEL_CON28_OFFSET                        (0xF0)
#define CRU_CRU_CLKSEL_CON28_HCLK_ALIVE_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON28_HCLK_ALIVE_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON28_HCLK_ALIVE_DIV_SHIFT)         /* 0x0000001F */
/* CRU_CLKSEL_CON30 */
#define CRU_CRU_CLKSEL_CON30_OFFSET                        (0xF8)
#define CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_DIV_SHIFT         (0U)
#define CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_DIV_MASK          (0xFFU << CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_DIV_SHIFT)        /* 0x000000FF */
#define CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_SEL_SHIFT         (8U)
#define CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_SEL_MASK          (0xFU << CRU_CRU_CLKSEL_CON30_CLK_TESTOUT_SEL_SHIFT)         /* 0x00000F00 */
/* CRU_CLKSEL_CON31 */
#define CRU_CRU_CLKSEL_CON31_OFFSET                        (0xFC)
#define CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_DIV_SHIFT        (0U)
#define CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_DIV_MASK         (0x1FU << CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_SEL_SHIFT        (5U)
#define CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_SEL_MASK         (0x1U << CRU_CRU_CLKSEL_CON31_CLK_PDM_SAMP_SEL_SHIFT)        /* 0x00000020 */
/* CRU_CLKSEL_CON33 */
#define CRU_CRU_CLKSEL_CON33_OFFSET                        (0x104)
#define CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_SHIFT             (0U)
#define CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK              (0x1FU << CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON33_HCLK_M4_SEL_SHIFT             (7U)
#define CRU_CRU_CLKSEL_CON33_HCLK_M4_SEL_MASK              (0x1U << CRU_CRU_CLKSEL_CON33_HCLK_M4_SEL_SHIFT)             /* 0x00000080 */
#define CRU_CRU_CLKSEL_CON33_CLK_SPI1_DIV_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON33_CLK_SPI1_DIV_MASK             (0x1FU << CRU_CRU_CLKSEL_CON33_CLK_SPI1_DIV_SHIFT)           /* 0x00001F00 */
/* CRU_CLKSEL_CON34 */
#define CRU_CRU_CLKSEL_CON34_OFFSET                        (0x108)
#define CRU_CRU_CLKSEL_CON34_CLK_SPI2_DIV_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON34_CLK_SPI2_DIV_MASK             (0x1FU << CRU_CRU_CLKSEL_CON34_CLK_SPI2_DIV_SHIFT)           /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON34_SCLK_SFC_SEL_SHIFT            (14U)
#define CRU_CRU_CLKSEL_CON34_SCLK_SFC_SEL_MASK             (0x1U << CRU_CRU_CLKSEL_CON34_SCLK_SFC_SEL_SHIFT)            /* 0x00004000 */
/* CRU_CLKSEL_CON35 */
#define CRU_CRU_CLKSEL_CON35_OFFSET                        (0x10C)
#define CRU_CRU_CLKSEL_CON35_SCLK_SFC_DIV_SHIFT            (0U)
#define CRU_CRU_CLKSEL_CON35_SCLK_SFC_DIV_MASK             (0xFFU << CRU_CRU_CLKSEL_CON35_SCLK_SFC_DIV_SHIFT)           /* 0x000000FF */
#define CRU_CRU_CLKSEL_CON35_CLK_SDIO_DIV_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON35_CLK_SDIO_DIV_MASK             (0xFFU << CRU_CRU_CLKSEL_CON35_CLK_SDIO_DIV_SHIFT)           /* 0x0000FF00 */
/* CRU_CLKSEL_CON36 */
#define CRU_CRU_CLKSEL_CON36_OFFSET                        (0x110)
#define CRU_CRU_CLKSEL_CON36_CLK_SDIO_SEL_SHIFT            (8U)
#define CRU_CRU_CLKSEL_CON36_CLK_SDIO_SEL_MASK             (0x3U << CRU_CRU_CLKSEL_CON36_CLK_SDIO_SEL_SHIFT)            /* 0x00000300 */
#define CRU_CRU_CLKSEL_CON36_PCLK_CIF_SRC_SEL_SHIFT        (12U)
#define CRU_CRU_CLKSEL_CON36_PCLK_CIF_SRC_SEL_MASK         (0x1U << CRU_CRU_CLKSEL_CON36_PCLK_CIF_SRC_SEL_SHIFT)        /* 0x00001000 */
/* CRU_CLKSEL_CON37 */
#define CRU_CRU_CLKSEL_CON37_OFFSET                        (0x114)
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_DF_DIV_SHIFT       (0U)
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_DF_DIV_MASK        (0x1FU << CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_DF_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SEL_SHIFT          (5U)
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SEL_SHIFT)          /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SRC_SEL_SHIFT      (6U)
#define CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SRC_SEL_MASK       (0x1U << CRU_CRU_CLKSEL_CON37_CLK_AUDPWM_SRC_SEL_SHIFT)      /* 0x00000040 */
#define CRU_CRU_CLKSEL_CON37_I2S1_MCLKOUT_SEL_SHIFT        (7U)
#define CRU_CRU_CLKSEL_CON37_I2S1_MCLKOUT_SEL_MASK         (0x1U << CRU_CRU_CLKSEL_CON37_I2S1_MCLKOUT_SEL_SHIFT)        /* 0x00000080 */
#define CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_DIV_SHIFT    (8U)
#define CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_DIV_MASK     (0x1FU << CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_DIV_SHIFT)   /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_SEL_SHIFT    (13U)
#define CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_SEL_MASK     (0x1U << CRU_CRU_CLKSEL_CON37_CLK_I2S1_8CH_SRC_SEL_SHIFT)    /* 0x00002000 */
#define CRU_CRU_CLKSEL_CON37_MCLK_I2S1_8CH_SEL_SHIFT       (14U)
#define CRU_CRU_CLKSEL_CON37_MCLK_I2S1_8CH_SEL_MASK        (0x3U << CRU_CRU_CLKSEL_CON37_MCLK_I2S1_8CH_SEL_SHIFT)       /* 0x0000C000 */
/* CRU_CLKSEL_CON38 */
#define CRU_CRU_CLKSEL_CON38_OFFSET                        (0x118)
#define CRU_CRU_CLKSEL_CON38_CLK_I2S1_8CH_FRAC_DIV_SHIFT   (0U)
#define CRU_CRU_CLKSEL_CON38_CLK_I2S1_8CH_FRAC_DIV_MASK    (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON38_CLK_I2S1_8CH_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON39 */
#define CRU_CRU_CLKSEL_CON39_OFFSET                        (0x11C)
#define CRU_CRU_CLKSEL_CON39_CLK_PWM_DIV_SHIFT             (0U)
#define CRU_CRU_CLKSEL_CON39_CLK_PWM_DIV_MASK              (0x1FU << CRU_CRU_CLKSEL_CON39_CLK_PWM_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON39_CLK_PWM_SEL_SHIFT             (5U)
#define CRU_CRU_CLKSEL_CON39_CLK_PWM_SEL_MASK              (0x1U << CRU_CRU_CLKSEL_CON39_CLK_PWM_SEL_SHIFT)             /* 0x00000020 */
#define CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_DIV_SHIFT          (8U)
#define CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_SEL_SHIFT          (15U)
#define CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON39_HCLK_LOGIC_SEL_SHIFT)          /* 0x00008000 */
/* CRU_CLKSEL_CON40 */
#define CRU_CRU_CLKSEL_CON40_OFFSET                        (0x120)
#define CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_SEL_SHIFT          (7U)
#define CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON40_PCLK_LOGIC_SEL_SHIFT)          /* 0x00000080 */
#define CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_DIV_SHIFT          (8U)
#define CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_SEL_SHIFT          (15U)
#define CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_SEL_MASK           (0x1U << CRU_CRU_CLKSEL_CON40_ACLK_LOGIC_SEL_SHIFT)          /* 0x00008000 */
/* CRU_CLKSEL_CON41 */
#define CRU_CRU_CLKSEL_CON41_OFFSET                        (0x124)
#define CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_DIV_SHIFT          (0U)
#define CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_DIV_MASK           (0x1FU << CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_SEL_SHIFT          (6U)
#define CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_SEL_MASK           (0x3U << CRU_CRU_CLKSEL_CON41_CLK_CIFOUT_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_FRAC_SEL_SHIFT (8U)
#define CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_FRAC_SEL_MASK (0x1U << CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_FRAC_SEL_SHIFT) /* 0x00000100 */
#define CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_SEL_SHIFT     (9U)
#define CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_SEL_MASK      (0x1U << CRU_CRU_CLKSEL_CON41_CLK_USB2PHY_REF_SEL_SHIFT)     /* 0x00000200 */
#define CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_FRAC_SEL_SHIFT   (10U)
#define CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_FRAC_SEL_MASK    (0x1U << CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_FRAC_SEL_SHIFT)   /* 0x00000400 */
#define CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_SEL_SHIFT        (11U)
#define CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_SEL_MASK         (0x1U << CRU_CRU_CLKSEL_CON41_CLK_DPHY_REF_SEL_SHIFT)        /* 0x00000800 */
/* CRU_CLKSEL_CON42 */
#define CRU_CRU_CLKSEL_CON42_OFFSET                        (0x128)
#define CRU_CRU_CLKSEL_CON42_CLK_AUDPWM_FRAC_DIV_SHIFT     (0U)
#define CRU_CRU_CLKSEL_CON42_CLK_AUDPWM_FRAC_DIV_MASK      (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON42_CLK_AUDPWM_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON43 */
#define CRU_CRU_CLKSEL_CON43_OFFSET                        (0x12C)
#define CRU_CRU_CLKSEL_CON43_CLK_USB2PHY_REF_FRAC_DIV_SHIFT (0U)
#define CRU_CRU_CLKSEL_CON43_CLK_USB2PHY_REF_FRAC_DIV_MASK (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON43_CLK_USB2PHY_REF_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON44 */
#define CRU_CRU_CLKSEL_CON44_OFFSET                        (0x130)
#define CRU_CRU_CLKSEL_CON44_CLK_DPHY_REF_FRAC_DIV_SHIFT   (0U)
#define CRU_CRU_CLKSEL_CON44_CLK_DPHY_REF_FRAC_DIV_MASK    (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON44_CLK_DPHY_REF_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_CLKSEL_CON46 */
#define CRU_CRU_CLKSEL_CON46_OFFSET                        (0x138)
#define CRU_CRU_CLKSEL_CON46_SCLK_SFC1_SEL_SHIFT           (14U)
#define CRU_CRU_CLKSEL_CON46_SCLK_SFC1_SEL_MASK            (0x1U << CRU_CRU_CLKSEL_CON46_SCLK_SFC1_SEL_SHIFT)           /* 0x00004000 */
/* CRU_CLKSEL_CON47 */
#define CRU_CRU_CLKSEL_CON47_OFFSET                        (0x13C)
#define CRU_CRU_CLKSEL_CON47_SCLK_SFC1_DIV_SHIFT           (0U)
#define CRU_CRU_CLKSEL_CON47_SCLK_SFC1_DIV_MASK            (0xFFU << CRU_CRU_CLKSEL_CON47_SCLK_SFC1_DIV_SHIFT)          /* 0x000000FF */
/* CRU_CLKSEL_CON49 */
#define CRU_CRU_CLKSEL_CON49_OFFSET                        (0x144)
#define CRU_CRU_CLKSEL_CON49_XIN_OSC0_DIV_DIV_SHIFT        (0U)
#define CRU_CRU_CLKSEL_CON49_XIN_OSC0_DIV_DIV_MASK         (0xFFFFFFFFU << CRU_CRU_CLKSEL_CON49_XIN_OSC0_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CRU_GATE_CON00 */
#define CRU_CRU_GATE_CON00_OFFSET                          (0x180)
#define CRU_CRU_GATE_CON00_ACLK_DSP_EN_SHIFT               (0U)
#define CRU_CRU_GATE_CON00_ACLK_DSP_EN_MASK                (0x1U << CRU_CRU_GATE_CON00_ACLK_DSP_EN_SHIFT)               /* 0x00000001 */
#define CRU_CRU_GATE_CON00_ACLK_DSP_NIU_EN_SHIFT           (2U)
#define CRU_CRU_GATE_CON00_ACLK_DSP_NIU_EN_MASK            (0x1U << CRU_CRU_GATE_CON00_ACLK_DSP_NIU_EN_SHIFT)           /* 0x00000004 */
#define CRU_CRU_GATE_CON00_PCLK_DSP_EN_SHIFT               (3U)
#define CRU_CRU_GATE_CON00_PCLK_DSP_EN_MASK                (0x1U << CRU_CRU_GATE_CON00_PCLK_DSP_EN_SHIFT)               /* 0x00000008 */
#define CRU_CRU_GATE_CON00_PCLK_DSP_NIU_EN_SHIFT           (4U)
#define CRU_CRU_GATE_CON00_PCLK_DSP_NIU_EN_MASK            (0x1U << CRU_CRU_GATE_CON00_PCLK_DSP_NIU_EN_SHIFT)           /* 0x00000010 */
#define CRU_CRU_GATE_CON00_PCLK_DSP_GRF_EN_SHIFT           (5U)
#define CRU_CRU_GATE_CON00_PCLK_DSP_GRF_EN_MASK            (0x1U << CRU_CRU_GATE_CON00_PCLK_DSP_GRF_EN_SHIFT)           /* 0x00000020 */
#define CRU_CRU_GATE_CON00_PCLK_WDT1_EN_SHIFT              (6U)
#define CRU_CRU_GATE_CON00_PCLK_WDT1_EN_MASK               (0x1U << CRU_CRU_GATE_CON00_PCLK_WDT1_EN_SHIFT)              /* 0x00000040 */
#define CRU_CRU_GATE_CON00_ACLK_DSP_S_EN_SHIFT             (7U)
#define CRU_CRU_GATE_CON00_ACLK_DSP_S_EN_MASK              (0x1U << CRU_CRU_GATE_CON00_ACLK_DSP_S_EN_SHIFT)             /* 0x00000080 */
/* CRU_GATE_CON01 */
#define CRU_CRU_GATE_CON01_OFFSET                          (0x184)
#define CRU_CRU_GATE_CON01_SCLK_SHRM_EN_SHIFT              (0U)
#define CRU_CRU_GATE_CON01_SCLK_SHRM_EN_MASK               (0x1U << CRU_CRU_GATE_CON01_SCLK_SHRM_EN_SHIFT)              /* 0x00000001 */
#define CRU_CRU_GATE_CON01_ACLK_SHRM_NIU_EN_SHIFT          (1U)
#define CRU_CRU_GATE_CON01_ACLK_SHRM_NIU_EN_MASK           (0x1U << CRU_CRU_GATE_CON01_ACLK_SHRM_NIU_EN_SHIFT)          /* 0x00000002 */
#define CRU_CRU_GATE_CON01_PCLK_SHRM_EN_SHIFT              (2U)
#define CRU_CRU_GATE_CON01_PCLK_SHRM_EN_MASK               (0x1U << CRU_CRU_GATE_CON01_PCLK_SHRM_EN_SHIFT)              /* 0x00000004 */
#define CRU_CRU_GATE_CON01_PCLK_SHRM_NIU_EN_SHIFT          (3U)
#define CRU_CRU_GATE_CON01_PCLK_SHRM_NIU_EN_MASK           (0x1U << CRU_CRU_GATE_CON01_PCLK_SHRM_NIU_EN_SHIFT)          /* 0x00000008 */
/* CRU_GATE_CON02 */
#define CRU_CRU_GATE_CON02_OFFSET                          (0x188)
#define CRU_CRU_GATE_CON02_PCLK_UART0_EN_SHIFT             (0U)
#define CRU_CRU_GATE_CON02_PCLK_UART0_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_PCLK_UART0_EN_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GATE_CON02_PCLK_UART1_EN_SHIFT             (1U)
#define CRU_CRU_GATE_CON02_PCLK_UART1_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_PCLK_UART1_EN_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GATE_CON02_PCLK_UART2_EN_SHIFT             (2U)
#define CRU_CRU_GATE_CON02_PCLK_UART2_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_PCLK_UART2_EN_SHIFT)             /* 0x00000004 */
#define CRU_CRU_GATE_CON02_CLK_UART0_EN_SHIFT              (3U)
#define CRU_CRU_GATE_CON02_CLK_UART0_EN_MASK               (0x1U << CRU_CRU_GATE_CON02_CLK_UART0_EN_SHIFT)              /* 0x00000008 */
#define CRU_CRU_GATE_CON02_CLK_UART0_FRAC_EN_SHIFT         (4U)
#define CRU_CRU_GATE_CON02_CLK_UART0_FRAC_EN_MASK          (0x1U << CRU_CRU_GATE_CON02_CLK_UART0_FRAC_EN_SHIFT)         /* 0x00000010 */
#define CRU_CRU_GATE_CON02_SCLK_UART0_EN_SHIFT             (6U)
#define CRU_CRU_GATE_CON02_SCLK_UART0_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_SCLK_UART0_EN_SHIFT)             /* 0x00000040 */
#define CRU_CRU_GATE_CON02_CLK_UART1_EN_SHIFT              (7U)
#define CRU_CRU_GATE_CON02_CLK_UART1_EN_MASK               (0x1U << CRU_CRU_GATE_CON02_CLK_UART1_EN_SHIFT)              /* 0x00000080 */
#define CRU_CRU_GATE_CON02_CLK_UART1_FRAC_EN_SHIFT         (8U)
#define CRU_CRU_GATE_CON02_CLK_UART1_FRAC_EN_MASK          (0x1U << CRU_CRU_GATE_CON02_CLK_UART1_FRAC_EN_SHIFT)         /* 0x00000100 */
#define CRU_CRU_GATE_CON02_SCLK_UART1_EN_SHIFT             (10U)
#define CRU_CRU_GATE_CON02_SCLK_UART1_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_SCLK_UART1_EN_SHIFT)             /* 0x00000400 */
#define CRU_CRU_GATE_CON02_CLK_UART2_EN_SHIFT              (11U)
#define CRU_CRU_GATE_CON02_CLK_UART2_EN_MASK               (0x1U << CRU_CRU_GATE_CON02_CLK_UART2_EN_SHIFT)              /* 0x00000800 */
#define CRU_CRU_GATE_CON02_CLK_UART2_FRAC_EN_SHIFT         (12U)
#define CRU_CRU_GATE_CON02_CLK_UART2_FRAC_EN_MASK          (0x1U << CRU_CRU_GATE_CON02_CLK_UART2_FRAC_EN_SHIFT)         /* 0x00001000 */
#define CRU_CRU_GATE_CON02_SCLK_UART2_EN_SHIFT             (14U)
#define CRU_CRU_GATE_CON02_SCLK_UART2_EN_MASK              (0x1U << CRU_CRU_GATE_CON02_SCLK_UART2_EN_SHIFT)             /* 0x00004000 */
/* CRU_GATE_CON04 */
#define CRU_CRU_GATE_CON04_OFFSET                          (0x190)
#define CRU_CRU_GATE_CON04_PCLK_TIMER_EN_SHIFT             (0U)
#define CRU_CRU_GATE_CON04_PCLK_TIMER_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_PCLK_TIMER_EN_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GATE_CON04_CLK_TIMER0_EN_SHIFT             (1U)
#define CRU_CRU_GATE_CON04_CLK_TIMER0_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER0_EN_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GATE_CON04_CLK_TIMER1_EN_SHIFT             (2U)
#define CRU_CRU_GATE_CON04_CLK_TIMER1_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER1_EN_SHIFT)             /* 0x00000004 */
#define CRU_CRU_GATE_CON04_CLK_TIMER2_EN_SHIFT             (3U)
#define CRU_CRU_GATE_CON04_CLK_TIMER2_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER2_EN_SHIFT)             /* 0x00000008 */
#define CRU_CRU_GATE_CON04_CLK_TIMER3_EN_SHIFT             (4U)
#define CRU_CRU_GATE_CON04_CLK_TIMER3_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER3_EN_SHIFT)             /* 0x00000010 */
#define CRU_CRU_GATE_CON04_CLK_TIMER4_EN_SHIFT             (5U)
#define CRU_CRU_GATE_CON04_CLK_TIMER4_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER4_EN_SHIFT)             /* 0x00000020 */
#define CRU_CRU_GATE_CON04_CLK_TIMER5_EN_SHIFT             (6U)
#define CRU_CRU_GATE_CON04_CLK_TIMER5_EN_MASK              (0x1U << CRU_CRU_GATE_CON04_CLK_TIMER5_EN_SHIFT)             /* 0x00000040 */
/* CRU_GATE_CON05 */
#define CRU_CRU_GATE_CON05_OFFSET                          (0x194)
#define CRU_CRU_GATE_CON05_PCLK_I2C2APB_NIU_EN_SHIFT       (0U)
#define CRU_CRU_GATE_CON05_PCLK_I2C2APB_NIU_EN_MASK        (0x1U << CRU_CRU_GATE_CON05_PCLK_I2C2APB_NIU_EN_SHIFT)       /* 0x00000001 */
#define CRU_CRU_GATE_CON05_PCLK_I2C0_EN_SHIFT              (1U)
#define CRU_CRU_GATE_CON05_PCLK_I2C0_EN_MASK               (0x1U << CRU_CRU_GATE_CON05_PCLK_I2C0_EN_SHIFT)              /* 0x00000002 */
#define CRU_CRU_GATE_CON05_PCLK_I2C1_EN_SHIFT              (2U)
#define CRU_CRU_GATE_CON05_PCLK_I2C1_EN_MASK               (0x1U << CRU_CRU_GATE_CON05_PCLK_I2C1_EN_SHIFT)              /* 0x00000004 */
#define CRU_CRU_GATE_CON05_PCLK_I2C2_EN_SHIFT              (3U)
#define CRU_CRU_GATE_CON05_PCLK_I2C2_EN_MASK               (0x1U << CRU_CRU_GATE_CON05_PCLK_I2C2_EN_SHIFT)              /* 0x00000008 */
#define CRU_CRU_GATE_CON05_PCLK_I2C2APB_EN_SHIFT           (4U)
#define CRU_CRU_GATE_CON05_PCLK_I2C2APB_EN_MASK            (0x1U << CRU_CRU_GATE_CON05_PCLK_I2C2APB_EN_SHIFT)           /* 0x00000010 */
#define CRU_CRU_GATE_CON05_CLK_I2C0_EN_SHIFT               (5U)
#define CRU_CRU_GATE_CON05_CLK_I2C0_EN_MASK                (0x1U << CRU_CRU_GATE_CON05_CLK_I2C0_EN_SHIFT)               /* 0x00000020 */
#define CRU_CRU_GATE_CON05_CLK_I2C1_EN_SHIFT               (6U)
#define CRU_CRU_GATE_CON05_CLK_I2C1_EN_MASK                (0x1U << CRU_CRU_GATE_CON05_CLK_I2C1_EN_SHIFT)               /* 0x00000040 */
#define CRU_CRU_GATE_CON05_CLK_I2C2_EN_SHIFT               (7U)
#define CRU_CRU_GATE_CON05_CLK_I2C2_EN_MASK                (0x1U << CRU_CRU_GATE_CON05_CLK_I2C2_EN_SHIFT)               /* 0x00000080 */
#define CRU_CRU_GATE_CON05_PCLK_ACDC_DIG_EN_SHIFT          (14U)
#define CRU_CRU_GATE_CON05_PCLK_ACDC_DIG_EN_MASK           (0x1U << CRU_CRU_GATE_CON05_PCLK_ACDC_DIG_EN_SHIFT)          /* 0x00004000 */
#define CRU_CRU_GATE_CON05_ACLK_DMAC_CORE_EN_SHIFT         (15U)
#define CRU_CRU_GATE_CON05_ACLK_DMAC_CORE_EN_MASK          (0x1U << CRU_CRU_GATE_CON05_ACLK_DMAC_CORE_EN_SHIFT)         /* 0x00008000 */
/* CRU_GATE_CON06 */
#define CRU_CRU_GATE_CON06_OFFSET                          (0x198)
#define CRU_CRU_GATE_CON06_HCLK_PDM0_EN_SHIFT              (0U)
#define CRU_CRU_GATE_CON06_HCLK_PDM0_EN_MASK               (0x1U << CRU_CRU_GATE_CON06_HCLK_PDM0_EN_SHIFT)              /* 0x00000001 */
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_EN_SHIFT             (1U)
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_EN_MASK              (0x1U << CRU_CRU_GATE_CON06_HCLK_AUDIO_EN_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GATE_CON06_HCLK_I2S_8CH_EN_SHIFT           (2U)
#define CRU_CRU_GATE_CON06_HCLK_I2S_8CH_EN_MASK            (0x1U << CRU_CRU_GATE_CON06_HCLK_I2S_8CH_EN_SHIFT)           /* 0x00000004 */
#define CRU_CRU_GATE_CON06_HCLK_VAD_EN_SHIFT               (3U)
#define CRU_CRU_GATE_CON06_HCLK_VAD_EN_MASK                (0x1U << CRU_CRU_GATE_CON06_HCLK_VAD_EN_SHIFT)               /* 0x00000008 */
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_NIU_EN_SHIFT         (4U)
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON06_HCLK_AUDIO_NIU_EN_SHIFT)         /* 0x00000010 */
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_AHB_ARB_EN_SHIFT     (5U)
#define CRU_CRU_GATE_CON06_HCLK_AUDIO_AHB_ARB_EN_MASK      (0x1U << CRU_CRU_GATE_CON06_HCLK_AUDIO_AHB_ARB_EN_SHIFT)     /* 0x00000020 */
#define CRU_CRU_GATE_CON06_PCLK_AUDIO_NIU_EN_SHIFT         (6U)
#define CRU_CRU_GATE_CON06_PCLK_AUDIO_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON06_PCLK_AUDIO_NIU_EN_SHIFT)         /* 0x00000040 */
#define CRU_CRU_GATE_CON06_MCLK_PDM0_EN_SHIFT              (7U)
#define CRU_CRU_GATE_CON06_MCLK_PDM0_EN_MASK               (0x1U << CRU_CRU_GATE_CON06_MCLK_PDM0_EN_SHIFT)              /* 0x00000080 */
#define CRU_CRU_GATE_CON06_MCLK_PDM0_OUT_EN_SHIFT          (8U)
#define CRU_CRU_GATE_CON06_MCLK_PDM0_OUT_EN_MASK           (0x1U << CRU_CRU_GATE_CON06_MCLK_PDM0_OUT_EN_SHIFT)          /* 0x00000100 */
#define CRU_CRU_GATE_CON06_PCLK_AUDIO_EN_SHIFT             (9U)
#define CRU_CRU_GATE_CON06_PCLK_AUDIO_EN_MASK              (0x1U << CRU_CRU_GATE_CON06_PCLK_AUDIO_EN_SHIFT)             /* 0x00000200 */
#define CRU_CRU_GATE_CON06_CLK_I2S8CH_EN_SHIFT             (10U)
#define CRU_CRU_GATE_CON06_CLK_I2S8CH_EN_MASK              (0x1U << CRU_CRU_GATE_CON06_CLK_I2S8CH_EN_SHIFT)             /* 0x00000400 */
#define CRU_CRU_GATE_CON06_CLK_I2S8CH_FRAC_EN_SHIFT        (11U)
#define CRU_CRU_GATE_CON06_CLK_I2S8CH_FRAC_EN_MASK         (0x1U << CRU_CRU_GATE_CON06_CLK_I2S8CH_FRAC_EN_SHIFT)        /* 0x00000800 */
#define CRU_CRU_GATE_CON06_MCLK_I2S8CH_EN_SHIFT            (12U)
#define CRU_CRU_GATE_CON06_MCLK_I2S8CH_EN_MASK             (0x1U << CRU_CRU_GATE_CON06_MCLK_I2S8CH_EN_SHIFT)            /* 0x00001000 */
#define CRU_CRU_GATE_CON06_I2S_MCLKOUT_EN_SHIFT            (13U)
#define CRU_CRU_GATE_CON06_I2S_MCLKOUT_EN_MASK             (0x1U << CRU_CRU_GATE_CON06_I2S_MCLKOUT_EN_SHIFT)            /* 0x00002000 */
#define CRU_CRU_GATE_CON06_ACLK_DMAC_EN_SHIFT              (14U)
#define CRU_CRU_GATE_CON06_ACLK_DMAC_EN_MASK               (0x1U << CRU_CRU_GATE_CON06_ACLK_DMAC_EN_SHIFT)              /* 0x00004000 */
#define CRU_CRU_GATE_CON06_ACLK_DMAC_NIU_EN_SHIFT          (15U)
#define CRU_CRU_GATE_CON06_ACLK_DMAC_NIU_EN_MASK           (0x1U << CRU_CRU_GATE_CON06_ACLK_DMAC_NIU_EN_SHIFT)          /* 0x00008000 */
/* CRU_GATE_CON07 */
#define CRU_CRU_GATE_CON07_OFFSET                          (0x19C)
#define CRU_CRU_GATE_CON07_ACLK_VOP_EN_SHIFT               (0U)
#define CRU_CRU_GATE_CON07_ACLK_VOP_EN_MASK                (0x1U << CRU_CRU_GATE_CON07_ACLK_VOP_EN_SHIFT)               /* 0x00000001 */
#define CRU_CRU_GATE_CON07_DCLK_VOP_S_EN_SHIFT             (2U)
#define CRU_CRU_GATE_CON07_DCLK_VOP_S_EN_MASK              (0x1U << CRU_CRU_GATE_CON07_DCLK_VOP_S_EN_SHIFT)             /* 0x00000004 */
#define CRU_CRU_GATE_CON07_ACLK_VOP_NIU_EN_SHIFT           (3U)
#define CRU_CRU_GATE_CON07_ACLK_VOP_NIU_EN_MASK            (0x1U << CRU_CRU_GATE_CON07_ACLK_VOP_NIU_EN_SHIFT)           /* 0x00000008 */
#define CRU_CRU_GATE_CON07_DCLK_VOP_EN_SHIFT               (4U)
#define CRU_CRU_GATE_CON07_DCLK_VOP_EN_MASK                (0x1U << CRU_CRU_GATE_CON07_DCLK_VOP_EN_SHIFT)               /* 0x00000010 */
#define CRU_CRU_GATE_CON07_DCLK_MIPIDSI_HOST_EN_SHIFT      (5U)
#define CRU_CRU_GATE_CON07_DCLK_MIPIDSI_HOST_EN_MASK       (0x1U << CRU_CRU_GATE_CON07_DCLK_MIPIDSI_HOST_EN_SHIFT)      /* 0x00000020 */
#define CRU_CRU_GATE_CON07_OCC_SCAN_CLK_DPHYLANBYTE_EN_SHIFT (8U)
#define CRU_CRU_GATE_CON07_OCC_SCAN_CLK_DPHYLANBYTE_EN_MASK (0x1U << CRU_CRU_GATE_CON07_OCC_SCAN_CLK_DPHYLANBYTE_EN_SHIFT) /* 0x00000100 */
/* CRU_GATE_CON08 */
#define CRU_CRU_GATE_CON08_OFFSET                          (0x1A0)
#define CRU_CRU_GATE_CON08_PCLK_GPIO0_EN_SHIFT             (0U)
#define CRU_CRU_GATE_CON08_PCLK_GPIO0_EN_MASK              (0x1U << CRU_CRU_GATE_CON08_PCLK_GPIO0_EN_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GATE_CON08_PCLK_GPIO1_EN_SHIFT             (1U)
#define CRU_CRU_GATE_CON08_PCLK_GPIO1_EN_MASK              (0x1U << CRU_CRU_GATE_CON08_PCLK_GPIO1_EN_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GATE_CON08_CLK_GPIO_DB0_EN_SHIFT           (3U)
#define CRU_CRU_GATE_CON08_CLK_GPIO_DB0_EN_MASK            (0x1U << CRU_CRU_GATE_CON08_CLK_GPIO_DB0_EN_SHIFT)           /* 0x00000008 */
#define CRU_CRU_GATE_CON08_CLK_GPIO_DB1_EN_SHIFT           (4U)
#define CRU_CRU_GATE_CON08_CLK_GPIO_DB1_EN_MASK            (0x1U << CRU_CRU_GATE_CON08_CLK_GPIO_DB1_EN_SHIFT)           /* 0x00000010 */
/* CRU_GATE_CON09 */
#define CRU_CRU_GATE_CON09_OFFSET                          (0x1A4)
#define CRU_CRU_GATE_CON09_PCLK_ALIVE_EN_SHIFT             (0U)
#define CRU_CRU_GATE_CON09_PCLK_ALIVE_EN_MASK              (0x1U << CRU_CRU_GATE_CON09_PCLK_ALIVE_EN_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GATE_CON09_HCLK_ALIVE_EN_SHIFT             (1U)
#define CRU_CRU_GATE_CON09_HCLK_ALIVE_EN_MASK              (0x1U << CRU_CRU_GATE_CON09_HCLK_ALIVE_EN_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GATE_CON09_HCLK_ALIVE_NIU_EN_SHIFT         (2U)
#define CRU_CRU_GATE_CON09_HCLK_ALIVE_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON09_HCLK_ALIVE_NIU_EN_SHIFT)         /* 0x00000004 */
#define CRU_CRU_GATE_CON09_HCLK_ALIVEAHB_ARB_EN_SHIFT      (3U)
#define CRU_CRU_GATE_CON09_HCLK_ALIVEAHB_ARB_EN_MASK       (0x1U << CRU_CRU_GATE_CON09_HCLK_ALIVEAHB_ARB_EN_SHIFT)      /* 0x00000008 */
#define CRU_CRU_GATE_CON09_HCLK_INTC0_EN_SHIFT             (4U)
#define CRU_CRU_GATE_CON09_HCLK_INTC0_EN_MASK              (0x1U << CRU_CRU_GATE_CON09_HCLK_INTC0_EN_SHIFT)             /* 0x00000010 */
#define CRU_CRU_GATE_CON09_HCLK_INTC1_EN_SHIFT             (5U)
#define CRU_CRU_GATE_CON09_HCLK_INTC1_EN_MASK              (0x1U << CRU_CRU_GATE_CON09_HCLK_INTC1_EN_SHIFT)             /* 0x00000020 */
#define CRU_CRU_GATE_CON09_PCLK_CRU_EN_SHIFT               (8U)
#define CRU_CRU_GATE_CON09_PCLK_CRU_EN_MASK                (0x1U << CRU_CRU_GATE_CON09_PCLK_CRU_EN_SHIFT)               /* 0x00000100 */
#define CRU_CRU_GATE_CON09_PCLK_ALIVE_NIU_EN_SHIFT         (9U)
#define CRU_CRU_GATE_CON09_PCLK_ALIVE_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON09_PCLK_ALIVE_NIU_EN_SHIFT)         /* 0x00000200 */
#define CRU_CRU_GATE_CON09_PCLK_PMU_EN_SHIFT               (10U)
#define CRU_CRU_GATE_CON09_PCLK_PMU_EN_MASK                (0x1U << CRU_CRU_GATE_CON09_PCLK_PMU_EN_SHIFT)               /* 0x00000400 */
#define CRU_CRU_GATE_CON09_PCLK_GRF_EN_SHIFT               (11U)
#define CRU_CRU_GATE_CON09_PCLK_GRF_EN_MASK                (0x1U << CRU_CRU_GATE_CON09_PCLK_GRF_EN_SHIFT)               /* 0x00000800 */
#define CRU_CRU_GATE_CON09_CLK_PMU_EN_SHIFT                (12U)
#define CRU_CRU_GATE_CON09_CLK_PMU_EN_MASK                 (0x1U << CRU_CRU_GATE_CON09_CLK_PMU_EN_SHIFT)                /* 0x00001000 */
#define CRU_CRU_GATE_CON09_CLK_TESTOUT_EN_SHIFT            (13U)
#define CRU_CRU_GATE_CON09_CLK_TESTOUT_EN_MASK             (0x1U << CRU_CRU_GATE_CON09_CLK_TESTOUT_EN_SHIFT)            /* 0x00002000 */
#define CRU_CRU_GATE_CON09_CLK_PVTM_EN_SHIFT               (14U)
#define CRU_CRU_GATE_CON09_CLK_PVTM_EN_MASK                (0x1U << CRU_CRU_GATE_CON09_CLK_PVTM_EN_SHIFT)               /* 0x00004000 */
#define CRU_CRU_GATE_CON09_CLK_PDM_SAMP_EN_SHIFT           (15U)
#define CRU_CRU_GATE_CON09_CLK_PDM_SAMP_EN_MASK            (0x1U << CRU_CRU_GATE_CON09_CLK_PDM_SAMP_EN_SHIFT)           /* 0x00008000 */
/* CRU_GATE_CON10 */
#define CRU_CRU_GATE_CON10_OFFSET                          (0x1A8)
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS0_EN_SHIFT         (0U)
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS0_EN_MASK          (0x1U << CRU_CRU_GATE_CON10_CLK_MEMSUBSYS0_EN_SHIFT)         /* 0x00000001 */
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS1_EN_SHIFT         (1U)
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS1_EN_MASK          (0x1U << CRU_CRU_GATE_CON10_CLK_MEMSUBSYS1_EN_SHIFT)         /* 0x00000002 */
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS2_EN_SHIFT         (2U)
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS2_EN_MASK          (0x1U << CRU_CRU_GATE_CON10_CLK_MEMSUBSYS2_EN_SHIFT)         /* 0x00000004 */
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS3_EN_SHIFT         (3U)
#define CRU_CRU_GATE_CON10_CLK_MEMSUBSYS3_EN_MASK          (0x1U << CRU_CRU_GATE_CON10_CLK_MEMSUBSYS3_EN_SHIFT)         /* 0x00000008 */
#define CRU_CRU_GATE_CON10_ACLK_MEMSUBSYS_EN_SHIFT         (4U)
#define CRU_CRU_GATE_CON10_ACLK_MEMSUBSYS_EN_MASK          (0x1U << CRU_CRU_GATE_CON10_ACLK_MEMSUBSYS_EN_SHIFT)         /* 0x00000010 */
/* CRU_GATE_CON11 */
#define CRU_CRU_GATE_CON11_OFFSET                          (0x1AC)
#define CRU_CRU_GATE_CON11_ACLK_LOGIC_EN_SHIFT             (0U)
#define CRU_CRU_GATE_CON11_ACLK_LOGIC_EN_MASK              (0x1U << CRU_CRU_GATE_CON11_ACLK_LOGIC_EN_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GATE_CON11_ACLK_LOGIC_NIU_EN_SHIFT         (1U)
#define CRU_CRU_GATE_CON11_ACLK_LOGIC_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON11_ACLK_LOGIC_NIU_EN_SHIFT)         /* 0x00000002 */
#define CRU_CRU_GATE_CON11_HCLK_LOGIC_EN_SHIFT             (2U)
#define CRU_CRU_GATE_CON11_HCLK_LOGIC_EN_MASK              (0x1U << CRU_CRU_GATE_CON11_HCLK_LOGIC_EN_SHIFT)             /* 0x00000004 */
#define CRU_CRU_GATE_CON11_PCLK_LOGIC_EN_SHIFT             (3U)
#define CRU_CRU_GATE_CON11_PCLK_LOGIC_EN_MASK              (0x1U << CRU_CRU_GATE_CON11_PCLK_LOGIC_EN_SHIFT)             /* 0x00000008 */
#define CRU_CRU_GATE_CON11_PCLK_SPI2APB_NIU_EN_SHIFT       (4U)
#define CRU_CRU_GATE_CON11_PCLK_SPI2APB_NIU_EN_MASK        (0x1U << CRU_CRU_GATE_CON11_PCLK_SPI2APB_NIU_EN_SHIFT)       /* 0x00000010 */
#define CRU_CRU_GATE_CON11_PCLK_PWM_EN_SHIFT               (5U)
#define CRU_CRU_GATE_CON11_PCLK_PWM_EN_MASK                (0x1U << CRU_CRU_GATE_CON11_PCLK_PWM_EN_SHIFT)               /* 0x00000020 */
#define CRU_CRU_GATE_CON11_PCLK_SPI1_EN_SHIFT              (6U)
#define CRU_CRU_GATE_CON11_PCLK_SPI1_EN_MASK               (0x1U << CRU_CRU_GATE_CON11_PCLK_SPI1_EN_SHIFT)              /* 0x00000040 */
#define CRU_CRU_GATE_CON11_PCLK_SPI2_EN_SHIFT              (7U)
#define CRU_CRU_GATE_CON11_PCLK_SPI2_EN_MASK               (0x1U << CRU_CRU_GATE_CON11_PCLK_SPI2_EN_SHIFT)              /* 0x00000080 */
#define CRU_CRU_GATE_CON11_PCLK_SPI2APB_EN_SHIFT           (8U)
#define CRU_CRU_GATE_CON11_PCLK_SPI2APB_EN_MASK            (0x1U << CRU_CRU_GATE_CON11_PCLK_SPI2APB_EN_SHIFT)           /* 0x00000100 */
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX0_EN_SHIFT          (9U)
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX0_EN_MASK           (0x1U << CRU_CRU_GATE_CON11_PCLK_MAILBOX0_EN_SHIFT)          /* 0x00000200 */
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX1_EN_SHIFT          (10U)
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX1_EN_MASK           (0x1U << CRU_CRU_GATE_CON11_PCLK_MAILBOX1_EN_SHIFT)          /* 0x00000400 */
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX2_EN_SHIFT          (11U)
#define CRU_CRU_GATE_CON11_PCLK_MAILBOX2_EN_MASK           (0x1U << CRU_CRU_GATE_CON11_PCLK_MAILBOX2_EN_SHIFT)          /* 0x00000800 */
#define CRU_CRU_GATE_CON11_PCLK_WDT0_EN_SHIFT              (12U)
#define CRU_CRU_GATE_CON11_PCLK_WDT0_EN_MASK               (0x1U << CRU_CRU_GATE_CON11_PCLK_WDT0_EN_SHIFT)              /* 0x00001000 */
#define CRU_CRU_GATE_CON11_PCLK_MIPIDSI_HOST_EN_SHIFT      (13U)
#define CRU_CRU_GATE_CON11_PCLK_MIPIDSI_HOST_EN_MASK       (0x1U << CRU_CRU_GATE_CON11_PCLK_MIPIDSI_HOST_EN_SHIFT)      /* 0x00002000 */
#define CRU_CRU_GATE_CON11_PCLK_CIF_EN_SHIFT               (14U)
#define CRU_CRU_GATE_CON11_PCLK_CIF_EN_MASK                (0x1U << CRU_CRU_GATE_CON11_PCLK_CIF_EN_SHIFT)               /* 0x00004000 */
#define CRU_CRU_GATE_CON11_PCLK_LOGIC_NIU_EN_SHIFT         (15U)
#define CRU_CRU_GATE_CON11_PCLK_LOGIC_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON11_PCLK_LOGIC_NIU_EN_SHIFT)         /* 0x00008000 */
/* CRU_GATE_CON12 */
#define CRU_CRU_GATE_CON12_OFFSET                          (0x1B0)
#define CRU_CRU_GATE_CON12_HCLK_M4_EN_SHIFT                (0U)
#define CRU_CRU_GATE_CON12_HCLK_M4_EN_MASK                 (0x1U << CRU_CRU_GATE_CON12_HCLK_M4_EN_SHIFT)                /* 0x00000001 */
#define CRU_CRU_GATE_CON12_HCLK_USB2CTRL_EN_SHIFT          (1U)
#define CRU_CRU_GATE_CON12_HCLK_USB2CTRL_EN_MASK           (0x1U << CRU_CRU_GATE_CON12_HCLK_USB2CTRL_EN_SHIFT)          /* 0x00000002 */
#define CRU_CRU_GATE_CON12_HCLK_USB2_NIU_EN_SHIFT          (2U)
#define CRU_CRU_GATE_CON12_HCLK_USB2_NIU_EN_MASK           (0x1U << CRU_CRU_GATE_CON12_HCLK_USB2_NIU_EN_SHIFT)          /* 0x00000004 */
#define CRU_CRU_GATE_CON12_HCLK_BOOTROM_EN_SHIFT           (3U)
#define CRU_CRU_GATE_CON12_HCLK_BOOTROM_EN_MASK            (0x1U << CRU_CRU_GATE_CON12_HCLK_BOOTROM_EN_SHIFT)           /* 0x00000008 */
#define CRU_CRU_GATE_CON12_HCLK_VOP_EN_SHIFT               (4U)
#define CRU_CRU_GATE_CON12_HCLK_VOP_EN_MASK                (0x1U << CRU_CRU_GATE_CON12_HCLK_VOP_EN_SHIFT)               /* 0x00000010 */
#define CRU_CRU_GATE_CON12_HCLK_AUDPWM_EN_SHIFT            (5U)
#define CRU_CRU_GATE_CON12_HCLK_AUDPWM_EN_MASK             (0x1U << CRU_CRU_GATE_CON12_HCLK_AUDPWM_EN_SHIFT)            /* 0x00000020 */
#define CRU_CRU_GATE_CON12_HCLK_CIF_EN_SHIFT               (6U)
#define CRU_CRU_GATE_CON12_HCLK_CIF_EN_MASK                (0x1U << CRU_CRU_GATE_CON12_HCLK_CIF_EN_SHIFT)               /* 0x00000040 */
#define CRU_CRU_GATE_CON12_HCLK_LOGIC_NIU_EN_SHIFT         (7U)
#define CRU_CRU_GATE_CON12_HCLK_LOGIC_NIU_EN_MASK          (0x1U << CRU_CRU_GATE_CON12_HCLK_LOGIC_NIU_EN_SHIFT)         /* 0x00000080 */
#define CRU_CRU_GATE_CON12_HCLK_SFC_EN_SHIFT               (8U)
#define CRU_CRU_GATE_CON12_HCLK_SFC_EN_MASK                (0x1U << CRU_CRU_GATE_CON12_HCLK_SFC_EN_SHIFT)               /* 0x00000100 */
#define CRU_CRU_GATE_CON12_HCLK_XIP_SFC_EN_SHIFT           (9U)
#define CRU_CRU_GATE_CON12_HCLK_XIP_SFC_EN_MASK            (0x1U << CRU_CRU_GATE_CON12_HCLK_XIP_SFC_EN_SHIFT)           /* 0x00000200 */
#define CRU_CRU_GATE_CON12_HCLK_SDIO_EN_SHIFT              (10U)
#define CRU_CRU_GATE_CON12_HCLK_SDIO_EN_MASK               (0x1U << CRU_CRU_GATE_CON12_HCLK_SDIO_EN_SHIFT)              /* 0x00000400 */
#define CRU_CRU_GATE_CON12_HCLK_LOGIC_AHB_ARB_EN_SHIFT     (11U)
#define CRU_CRU_GATE_CON12_HCLK_LOGIC_AHB_ARB_EN_MASK      (0x1U << CRU_CRU_GATE_CON12_HCLK_LOGIC_AHB_ARB_EN_SHIFT)     /* 0x00000800 */
#define CRU_CRU_GATE_CON12_HCLK_I2S1_8CH_EN_SHIFT          (12U)
#define CRU_CRU_GATE_CON12_HCLK_I2S1_8CH_EN_MASK           (0x1U << CRU_CRU_GATE_CON12_HCLK_I2S1_8CH_EN_SHIFT)          /* 0x00001000 */
#define CRU_CRU_GATE_CON12_HCLK_CM4_NIU_EN_SHIFT           (13U)
#define CRU_CRU_GATE_CON12_HCLK_CM4_NIU_EN_MASK            (0x1U << CRU_CRU_GATE_CON12_HCLK_CM4_NIU_EN_SHIFT)           /* 0x00002000 */
#define CRU_CRU_GATE_CON12_HCLK_CM4_CORE_EN_SHIFT          (14U)
#define CRU_CRU_GATE_CON12_HCLK_CM4_CORE_EN_MASK           (0x1U << CRU_CRU_GATE_CON12_HCLK_CM4_CORE_EN_SHIFT)          /* 0x00004000 */
#define CRU_CRU_GATE_CON12_CLK_CIFOUT_EN_SHIFT             (15U)
#define CRU_CRU_GATE_CON12_CLK_CIFOUT_EN_MASK              (0x1U << CRU_CRU_GATE_CON12_CLK_CIFOUT_EN_SHIFT)             /* 0x00008000 */
/* CRU_GATE_CON13 */
#define CRU_CRU_GATE_CON13_OFFSET                          (0x1B4)
#define CRU_CRU_GATE_CON13_CLK_SPI1_EN_SHIFT               (0U)
#define CRU_CRU_GATE_CON13_CLK_SPI1_EN_MASK                (0x1U << CRU_CRU_GATE_CON13_CLK_SPI1_EN_SHIFT)               /* 0x00000001 */
#define CRU_CRU_GATE_CON13_CLK_SPI2_EN_SHIFT               (1U)
#define CRU_CRU_GATE_CON13_CLK_SPI2_EN_MASK                (0x1U << CRU_CRU_GATE_CON13_CLK_SPI2_EN_SHIFT)               /* 0x00000002 */
#define CRU_CRU_GATE_CON13_SCLK_SFC_EN_SHIFT               (4U)
#define CRU_CRU_GATE_CON13_SCLK_SFC_EN_MASK                (0x1U << CRU_CRU_GATE_CON13_SCLK_SFC_EN_SHIFT)               /* 0x00000010 */
#define CRU_CRU_GATE_CON13_HCLK_SFC1_EN_SHIFT              (5U)
#define CRU_CRU_GATE_CON13_HCLK_SFC1_EN_MASK               (0x1U << CRU_CRU_GATE_CON13_HCLK_SFC1_EN_SHIFT)              /* 0x00000020 */
#define CRU_CRU_GATE_CON13_HCLK_XIP_SFC1_EN_SHIFT          (6U)
#define CRU_CRU_GATE_CON13_HCLK_XIP_SFC1_EN_MASK           (0x1U << CRU_CRU_GATE_CON13_HCLK_XIP_SFC1_EN_SHIFT)          /* 0x00000040 */
#define CRU_CRU_GATE_CON13_CLK_SDIO_EN_SHIFT               (8U)
#define CRU_CRU_GATE_CON13_CLK_SDIO_EN_MASK                (0x1U << CRU_CRU_GATE_CON13_CLK_SDIO_EN_SHIFT)               /* 0x00000100 */
#define CRU_CRU_GATE_CON13_CLK_I2S1_8CH_EN_SHIFT           (9U)
#define CRU_CRU_GATE_CON13_CLK_I2S1_8CH_EN_MASK            (0x1U << CRU_CRU_GATE_CON13_CLK_I2S1_8CH_EN_SHIFT)           /* 0x00000200 */
#define CRU_CRU_GATE_CON13_CLK_I2S1_8CH_FRAC_EN_SHIFT      (10U)
#define CRU_CRU_GATE_CON13_CLK_I2S1_8CH_FRAC_EN_MASK       (0x1U << CRU_CRU_GATE_CON13_CLK_I2S1_8CH_FRAC_EN_SHIFT)      /* 0x00000400 */
#define CRU_CRU_GATE_CON13_MCLK_I2S1_8CH_EN_SHIFT          (11U)
#define CRU_CRU_GATE_CON13_MCLK_I2S1_8CH_EN_MASK           (0x1U << CRU_CRU_GATE_CON13_MCLK_I2S1_8CH_EN_SHIFT)          /* 0x00000800 */
#define CRU_CRU_GATE_CON13_I2S1_MCLKOUT_EN_SHIFT           (12U)
#define CRU_CRU_GATE_CON13_I2S1_MCLKOUT_EN_MASK            (0x1U << CRU_CRU_GATE_CON13_I2S1_MCLKOUT_EN_SHIFT)           /* 0x00001000 */
#define CRU_CRU_GATE_CON13_CLK_PWM_EN_SHIFT                (13U)
#define CRU_CRU_GATE_CON13_CLK_PWM_EN_MASK                 (0x1U << CRU_CRU_GATE_CON13_CLK_PWM_EN_SHIFT)                /* 0x00002000 */
#define CRU_CRU_GATE_CON13_CLK_AUDPWM_DF_EN_SHIFT          (14U)
#define CRU_CRU_GATE_CON13_CLK_AUDPWM_DF_EN_MASK           (0x1U << CRU_CRU_GATE_CON13_CLK_AUDPWM_DF_EN_SHIFT)          /* 0x00004000 */
#define CRU_CRU_GATE_CON13_ACLK_CIF_EN_SHIFT               (15U)
#define CRU_CRU_GATE_CON13_ACLK_CIF_EN_MASK                (0x1U << CRU_CRU_GATE_CON13_ACLK_CIF_EN_SHIFT)               /* 0x00008000 */
/* CRU_GATE_CON14 */
#define CRU_CRU_GATE_CON14_OFFSET                          (0x1B8)
#define CRU_CRU_GATE_CON14_CLK_AUDPWM_FRAC_EN_SHIFT        (0U)
#define CRU_CRU_GATE_CON14_CLK_AUDPWM_FRAC_EN_MASK         (0x1U << CRU_CRU_GATE_CON14_CLK_AUDPWM_FRAC_EN_SHIFT)        /* 0x00000001 */
#define CRU_CRU_GATE_CON14_ACLK_CIF_NIU_EN_SHIFT           (1U)
#define CRU_CRU_GATE_CON14_ACLK_CIF_NIU_EN_MASK            (0x1U << CRU_CRU_GATE_CON14_ACLK_CIF_NIU_EN_SHIFT)           /* 0x00000002 */
#define CRU_CRU_GATE_CON14_SCLK_SFC1_EN_SHIFT              (4U)
#define CRU_CRU_GATE_CON14_SCLK_SFC1_EN_MASK               (0x1U << CRU_CRU_GATE_CON14_SCLK_SFC1_EN_SHIFT)              /* 0x00000010 */
#define CRU_CRU_GATE_CON14_CLK_USB2_ADP_EN_SHIFT           (5U)
#define CRU_CRU_GATE_CON14_CLK_USB2_ADP_EN_MASK            (0x1U << CRU_CRU_GATE_CON14_CLK_USB2_ADP_EN_SHIFT)           /* 0x00000020 */
#define CRU_CRU_GATE_CON14_CLK_USB2PHY_REF_FRAC_EN_SHIFT   (6U)
#define CRU_CRU_GATE_CON14_CLK_USB2PHY_REF_FRAC_EN_MASK    (0x1U << CRU_CRU_GATE_CON14_CLK_USB2PHY_REF_FRAC_EN_SHIFT)   /* 0x00000040 */
#define CRU_CRU_GATE_CON14_CLK_DPHY_REF_FRAC_EN_SHIFT      (7U)
#define CRU_CRU_GATE_CON14_CLK_DPHY_REF_FRAC_EN_MASK       (0x1U << CRU_CRU_GATE_CON14_CLK_DPHY_REF_FRAC_EN_SHIFT)      /* 0x00000080 */
#define CRU_CRU_GATE_CON14_STCLK_M4_EN_SHIFT               (8U)
#define CRU_CRU_GATE_CON14_STCLK_M4_EN_MASK                (0x1U << CRU_CRU_GATE_CON14_STCLK_M4_EN_SHIFT)               /* 0x00000100 */
#define CRU_CRU_GATE_CON14_CLK_KEY_EN_SHIFT                (9U)
#define CRU_CRU_GATE_CON14_CLK_KEY_EN_MASK                 (0x1U << CRU_CRU_GATE_CON14_CLK_KEY_EN_SHIFT)                /* 0x00000200 */
#define CRU_CRU_GATE_CON14_PCLK_KEY_EN_SHIFT               (10U)
#define CRU_CRU_GATE_CON14_PCLK_KEY_EN_MASK                (0x1U << CRU_CRU_GATE_CON14_PCLK_KEY_EN_SHIFT)               /* 0x00000400 */
#define CRU_CRU_GATE_CON14_CLK_USB2CTRL_EN_SHIFT           (13U)
#define CRU_CRU_GATE_CON14_CLK_USB2CTRL_EN_MASK            (0x1U << CRU_CRU_GATE_CON14_CLK_USB2CTRL_EN_SHIFT)           /* 0x00002000 */
#define CRU_CRU_GATE_CON14_CLK_BT32K_EN_SHIFT              (15U)
#define CRU_CRU_GATE_CON14_CLK_BT32K_EN_MASK               (0x1U << CRU_CRU_GATE_CON14_CLK_BT32K_EN_SHIFT)              /* 0x00008000 */
/* CRU_SOFTRST_CON00 */
#define CRU_CRU_SOFTRST_CON00_OFFSET                       (0x200)
#define CRU_CRU_SOFTRST_CON00_DRESETN_DSP_SHIFT            (0U)
#define CRU_CRU_SOFTRST_CON00_DRESETN_DSP_MASK             (0x1U << CRU_CRU_SOFTRST_CON00_DRESETN_DSP_SHIFT)            /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON00_BRESETN_DSP_SHIFT            (1U)
#define CRU_CRU_SOFTRST_CON00_BRESETN_DSP_MASK             (0x1U << CRU_CRU_SOFTRST_CON00_BRESETN_DSP_SHIFT)            /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON00_ARESETN_DSP_NIU_SHIFT        (2U)
#define CRU_CRU_SOFTRST_CON00_ARESETN_DSP_NIU_MASK         (0x1U << CRU_CRU_SOFTRST_CON00_ARESETN_DSP_NIU_SHIFT)        /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON00_PRESETN_DSP_NIU_SHIFT        (4U)
#define CRU_CRU_SOFTRST_CON00_PRESETN_DSP_NIU_MASK         (0x1U << CRU_CRU_SOFTRST_CON00_PRESETN_DSP_NIU_SHIFT)        /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON00_PRESETN_DSP_GRF_SHIFT        (5U)
#define CRU_CRU_SOFTRST_CON00_PRESETN_DSP_GRF_MASK         (0x1U << CRU_CRU_SOFTRST_CON00_PRESETN_DSP_GRF_SHIFT)        /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON00_PRESETN_WDT1_SHIFT           (6U)
#define CRU_CRU_SOFTRST_CON00_PRESETN_WDT1_MASK            (0x1U << CRU_CRU_SOFTRST_CON00_PRESETN_WDT1_SHIFT)           /* 0x00000040 */
/* CRU_SOFTRST_CON01 */
#define CRU_CRU_SOFTRST_CON01_OFFSET                       (0x204)
#define CRU_CRU_SOFTRST_CON01_SRESETN_SHRM_SHIFT           (0U)
#define CRU_CRU_SOFTRST_CON01_SRESETN_SHRM_MASK            (0x1U << CRU_CRU_SOFTRST_CON01_SRESETN_SHRM_SHIFT)           /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON01_ARESETN_SHRM_NIU_SHIFT       (1U)
#define CRU_CRU_SOFTRST_CON01_ARESETN_SHRM_NIU_MASK        (0x1U << CRU_CRU_SOFTRST_CON01_ARESETN_SHRM_NIU_SHIFT)       /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_SHIFT           (2U)
#define CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_MASK            (0x1U << CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_SHIFT)           /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_NIU_SHIFT       (3U)
#define CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_NIU_MASK        (0x1U << CRU_CRU_SOFTRST_CON01_PRESETN_SHRM_NIU_SHIFT)       /* 0x00000008 */
/* CRU_SOFTRST_CON02 */
#define CRU_CRU_SOFTRST_CON02_OFFSET                       (0x208)
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART0_SHIFT          (0U)
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART0_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_PRESETN_UART0_SHIFT)          /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART1_SHIFT          (1U)
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART1_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_PRESETN_UART1_SHIFT)          /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART2_SHIFT          (3U)
#define CRU_CRU_SOFTRST_CON02_PRESETN_UART2_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_PRESETN_UART2_SHIFT)          /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART0_SHIFT          (6U)
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART0_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_SRESETN_UART0_SHIFT)          /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART1_SHIFT          (9U)
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART1_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_SRESETN_UART1_SHIFT)          /* 0x00000200 */
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART2_SHIFT          (14U)
#define CRU_CRU_SOFTRST_CON02_SRESETN_UART2_MASK           (0x1U << CRU_CRU_SOFTRST_CON02_SRESETN_UART2_SHIFT)          /* 0x00004000 */
/* CRU_SOFTRST_CON04 */
#define CRU_CRU_SOFTRST_CON04_OFFSET                       (0x210)
#define CRU_CRU_SOFTRST_CON04_PRESETN_TIMER_SHIFT          (0U)
#define CRU_CRU_SOFTRST_CON04_PRESETN_TIMER_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_PRESETN_TIMER_SHIFT)          /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER0_SHIFT          (1U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER0_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER0_SHIFT)          /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER1_SHIFT          (2U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER1_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER1_SHIFT)          /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER2_SHIFT          (3U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER2_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER2_SHIFT)          /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER3_SHIFT          (4U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER3_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER3_SHIFT)          /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER4_SHIFT          (5U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER4_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER4_SHIFT)          /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER5_SHIFT          (6U)
#define CRU_CRU_SOFTRST_CON04_RESETN_TIMER5_MASK           (0x1U << CRU_CRU_SOFTRST_CON04_RESETN_TIMER5_SHIFT)          /* 0x00000040 */
/* CRU_SOFTRST_CON05 */
#define CRU_CRU_SOFTRST_CON05_OFFSET                       (0x214)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_NIU_SHIFT    (0U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_NIU_MASK     (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_NIU_SHIFT)    /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C0_SHIFT           (1U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C0_MASK            (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_I2C0_SHIFT)           /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C1_SHIFT           (2U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C1_MASK            (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_I2C1_SHIFT)           /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2_SHIFT           (3U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2_MASK            (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_I2C2_SHIFT)           /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_SHIFT        (4U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_MASK         (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_I2C2APB_SHIFT)        /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT            (5U)
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C0_MASK             (0x1U << CRU_CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT)            /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C1_SHIFT            (6U)
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C1_MASK             (0x1U << CRU_CRU_SOFTRST_CON05_RESETN_I2C1_SHIFT)            /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C2_SHIFT            (7U)
#define CRU_CRU_SOFTRST_CON05_RESETN_I2C2_MASK             (0x1U << CRU_CRU_SOFTRST_CON05_RESETN_I2C2_SHIFT)            /* 0x00000080 */
#define CRU_CRU_SOFTRST_CON05_RESETN_CODEC_I2S_OUT_SHIFT   (12U)
#define CRU_CRU_SOFTRST_CON05_RESETN_CODEC_I2S_OUT_MASK    (0x1U << CRU_CRU_SOFTRST_CON05_RESETN_CODEC_I2S_OUT_SHIFT)   /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON05_PRESETN_ACDC_DIG_SHIFT       (14U)
#define CRU_CRU_SOFTRST_CON05_PRESETN_ACDC_DIG_MASK        (0x1U << CRU_CRU_SOFTRST_CON05_PRESETN_ACDC_DIG_SHIFT)       /* 0x00004000 */
#define CRU_CRU_SOFTRST_CON05_ARESETN_DMAC_CORE_SHIFT      (15U)
#define CRU_CRU_SOFTRST_CON05_ARESETN_DMAC_CORE_MASK       (0x1U << CRU_CRU_SOFTRST_CON05_ARESETN_DMAC_CORE_SHIFT)      /* 0x00008000 */
/* CRU_SOFTRST_CON06 */
#define CRU_CRU_SOFTRST_CON06_OFFSET                       (0x218)
#define CRU_CRU_SOFTRST_CON06_HRESETN_PDM0_SHIFT           (0U)
#define CRU_CRU_SOFTRST_CON06_HRESETN_PDM0_MASK            (0x1U << CRU_CRU_SOFTRST_CON06_HRESETN_PDM0_SHIFT)           /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON06_HRESETN_I2S_8CH_SHIFT        (2U)
#define CRU_CRU_SOFTRST_CON06_HRESETN_I2S_8CH_MASK         (0x1U << CRU_CRU_SOFTRST_CON06_HRESETN_I2S_8CH_SHIFT)        /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON06_HRESETN_VAD_SHIFT            (3U)
#define CRU_CRU_SOFTRST_CON06_HRESETN_VAD_MASK             (0x1U << CRU_CRU_SOFTRST_CON06_HRESETN_VAD_SHIFT)            /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_NIU_SHIFT      (4U)
#define CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_NIU_SHIFT)      /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_AHB_ARB_SHIFT  (5U)
#define CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_AHB_ARB_MASK   (0x1U << CRU_CRU_SOFTRST_CON06_HRESETN_AUDIO_AHB_ARB_SHIFT)  /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON06_PRESETN_AUDIO_NIU_SHIFT      (6U)
#define CRU_CRU_SOFTRST_CON06_PRESETN_AUDIO_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON06_PRESETN_AUDIO_NIU_SHIFT)      /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON06_MRESETN_PDM0_SHIFT           (7U)
#define CRU_CRU_SOFTRST_CON06_MRESETN_PDM0_MASK            (0x1U << CRU_CRU_SOFTRST_CON06_MRESETN_PDM0_SHIFT)           /* 0x00000080 */
#define CRU_CRU_SOFTRST_CON06_MRESETN_I2S8CH_SHIFT         (12U)
#define CRU_CRU_SOFTRST_CON06_MRESETN_I2S8CH_MASK          (0x1U << CRU_CRU_SOFTRST_CON06_MRESETN_I2S8CH_SHIFT)         /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON06_ARESETN_DMAC_NIU_SHIFT       (15U)
#define CRU_CRU_SOFTRST_CON06_ARESETN_DMAC_NIU_MASK        (0x1U << CRU_CRU_SOFTRST_CON06_ARESETN_DMAC_NIU_SHIFT)       /* 0x00008000 */
/* CRU_SOFTRST_CON07 */
#define CRU_CRU_SOFTRST_CON07_OFFSET                       (0x21C)
#define CRU_CRU_SOFTRST_CON07_ARESETN_VOP_SHIFT            (0U)
#define CRU_CRU_SOFTRST_CON07_ARESETN_VOP_MASK             (0x1U << CRU_CRU_SOFTRST_CON07_ARESETN_VOP_SHIFT)            /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON07_DRESETN_VOP_S_SHIFT          (2U)
#define CRU_CRU_SOFTRST_CON07_DRESETN_VOP_S_MASK           (0x1U << CRU_CRU_SOFTRST_CON07_DRESETN_VOP_S_SHIFT)          /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON07_ARESETN_VOP_NIU_SHIFT        (3U)
#define CRU_CRU_SOFTRST_CON07_ARESETN_VOP_NIU_MASK         (0x1U << CRU_CRU_SOFTRST_CON07_ARESETN_VOP_NIU_SHIFT)        /* 0x00000008 */
/* CRU_SOFTRST_CON08 */
#define CRU_CRU_SOFTRST_CON08_OFFSET                       (0x220)
#define CRU_CRU_SOFTRST_CON08_PRESETN_GPIO0_SHIFT          (0U)
#define CRU_CRU_SOFTRST_CON08_PRESETN_GPIO0_MASK           (0x1U << CRU_CRU_SOFTRST_CON08_PRESETN_GPIO0_SHIFT)          /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON08_PRESETN_GPIO1_SHIFT          (1U)
#define CRU_CRU_SOFTRST_CON08_PRESETN_GPIO1_MASK           (0x1U << CRU_CRU_SOFTRST_CON08_PRESETN_GPIO1_SHIFT)          /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB0_SHIFT        (3U)
#define CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB0_MASK         (0x1U << CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB0_SHIFT)        /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB1_SHIFT        (4U)
#define CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB1_MASK         (0x1U << CRU_CRU_SOFTRST_CON08_RESETN_GPIO_DB1_SHIFT)        /* 0x00000010 */
/* CRU_SOFTRST_CON09 */
#define CRU_CRU_SOFTRST_CON09_OFFSET                       (0x224)
#define CRU_CRU_SOFTRST_CON09_HRESETN_ALIVE_NIU_SHIFT      (2U)
#define CRU_CRU_SOFTRST_CON09_HRESETN_ALIVE_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON09_HRESETN_ALIVE_NIU_SHIFT)      /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON09_HRESETN_ALIVEAHB_ARB_SHIFT   (3U)
#define CRU_CRU_SOFTRST_CON09_HRESETN_ALIVEAHB_ARB_MASK    (0x1U << CRU_CRU_SOFTRST_CON09_HRESETN_ALIVEAHB_ARB_SHIFT)   /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON09_HRESETN_INTC0_SHIFT          (4U)
#define CRU_CRU_SOFTRST_CON09_HRESETN_INTC0_MASK           (0x1U << CRU_CRU_SOFTRST_CON09_HRESETN_INTC0_SHIFT)          /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON09_HRESETN_INTC1_SHIFT          (5U)
#define CRU_CRU_SOFTRST_CON09_HRESETN_INTC1_MASK           (0x1U << CRU_CRU_SOFTRST_CON09_HRESETN_INTC1_SHIFT)          /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON09_PRESETN_CRU_SHIFT            (8U)
#define CRU_CRU_SOFTRST_CON09_PRESETN_CRU_MASK             (0x1U << CRU_CRU_SOFTRST_CON09_PRESETN_CRU_SHIFT)            /* 0x00000100 */
#define CRU_CRU_SOFTRST_CON09_PRESETN_ALIVE_NIU_SHIFT      (9U)
#define CRU_CRU_SOFTRST_CON09_PRESETN_ALIVE_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON09_PRESETN_ALIVE_NIU_SHIFT)      /* 0x00000200 */
#define CRU_CRU_SOFTRST_CON09_PRESETN_PMU_SHIFT            (10U)
#define CRU_CRU_SOFTRST_CON09_PRESETN_PMU_MASK             (0x1U << CRU_CRU_SOFTRST_CON09_PRESETN_PMU_SHIFT)            /* 0x00000400 */
#define CRU_CRU_SOFTRST_CON09_PRESETN_GRF_SHIFT            (11U)
#define CRU_CRU_SOFTRST_CON09_PRESETN_GRF_MASK             (0x1U << CRU_CRU_SOFTRST_CON09_PRESETN_GRF_SHIFT)            /* 0x00000800 */
#define CRU_CRU_SOFTRST_CON09_RESETN_PMU_SHIFT             (12U)
#define CRU_CRU_SOFTRST_CON09_RESETN_PMU_MASK              (0x1U << CRU_CRU_SOFTRST_CON09_RESETN_PMU_SHIFT)             /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON09_RESETN_PVTM_SHIFT            (14U)
#define CRU_CRU_SOFTRST_CON09_RESETN_PVTM_MASK             (0x1U << CRU_CRU_SOFTRST_CON09_RESETN_PVTM_SHIFT)            /* 0x00004000 */
#define CRU_CRU_SOFTRST_CON09_RESETN_PDM_SAMP_SHIFT        (15U)
#define CRU_CRU_SOFTRST_CON09_RESETN_PDM_SAMP_MASK         (0x1U << CRU_CRU_SOFTRST_CON09_RESETN_PDM_SAMP_SHIFT)        /* 0x00008000 */
/* CRU_SOFTRST_CON11 */
#define CRU_CRU_SOFTRST_CON11_OFFSET                       (0x22C)
#define CRU_CRU_SOFTRST_CON11_ARESETN_LOGIC_NIU_SHIFT      (1U)
#define CRU_CRU_SOFTRST_CON11_ARESETN_LOGIC_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON11_ARESETN_LOGIC_NIU_SHIFT)      /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_NIU_SHIFT    (4U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_NIU_MASK     (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_NIU_SHIFT)    /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_PWM_SHIFT            (5U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_PWM_MASK             (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_PWM_SHIFT)            /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI1_SHIFT           (6U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI1_MASK            (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_SPI1_SHIFT)           /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2_SHIFT           (7U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2_MASK            (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_SPI2_SHIFT)           /* 0x00000080 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_SHIFT        (8U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_MASK         (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_SPI2APB_SHIFT)        /* 0x00000100 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX0_SHIFT       (9U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX0_MASK        (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX0_SHIFT)       /* 0x00000200 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX1_SHIFT       (10U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX1_MASK        (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX1_SHIFT)       /* 0x00000400 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX2_SHIFT       (11U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX2_MASK        (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_MAILBOX2_SHIFT)       /* 0x00000800 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_WDT0_SHIFT           (12U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_WDT0_MASK            (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_WDT0_SHIFT)           /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_MIPIDSI_HOST_SHIFT   (13U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_MIPIDSI_HOST_MASK    (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_MIPIDSI_HOST_SHIFT)   /* 0x00002000 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_CIF_SHIFT            (14U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_CIF_MASK             (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_CIF_SHIFT)            /* 0x00004000 */
#define CRU_CRU_SOFTRST_CON11_PRESETN_LOGIC_NIU_SHIFT      (15U)
#define CRU_CRU_SOFTRST_CON11_PRESETN_LOGIC_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON11_PRESETN_LOGIC_NIU_SHIFT)      /* 0x00008000 */
/* CRU_SOFTRST_CON12 */
#define CRU_CRU_SOFTRST_CON12_OFFSET                       (0x230)
#define CRU_CRU_SOFTRST_CON12_HRESETN_USB2CTRL_SHIFT       (1U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_USB2CTRL_MASK        (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_USB2CTRL_SHIFT)       /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_USB2_NIU_SHIFT       (2U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_USB2_NIU_MASK        (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_USB2_NIU_SHIFT)       /* 0x00000004 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_BOOTROM_SHIFT        (3U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_BOOTROM_MASK         (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_BOOTROM_SHIFT)        /* 0x00000008 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_VOP_SHIFT            (4U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_VOP_MASK             (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_VOP_SHIFT)            /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_AUDPWM_SHIFT         (5U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_AUDPWM_MASK          (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_AUDPWM_SHIFT)         /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_CIF_SHIFT            (6U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_CIF_MASK             (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_CIF_SHIFT)            /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_NIU_SHIFT      (7U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_NIU_MASK       (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_NIU_SHIFT)      /* 0x00000080 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_SFC_SHIFT            (8U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_SFC_MASK             (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_SFC_SHIFT)            /* 0x00000100 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_XIP_SFC_SHIFT        (9U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_XIP_SFC_MASK         (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_XIP_SFC_SHIFT)        /* 0x00000200 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_SDIO_SHIFT           (10U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_SDIO_MASK            (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_SDIO_SHIFT)           /* 0x00000400 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_AHB_ARB_SHIFT  (11U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_AHB_ARB_MASK   (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_LOGIC_AHB_ARB_SHIFT)  /* 0x00000800 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_I2S1_8CH_SHIFT       (12U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_I2S1_8CH_MASK        (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_I2S1_8CH_SHIFT)       /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_CM4_NIU_SHIFT        (13U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_CM4_NIU_MASK         (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_CM4_NIU_SHIFT)        /* 0x00002000 */
#define CRU_CRU_SOFTRST_CON12_HRESETN_CM4_CORE_SHIFT       (14U)
#define CRU_CRU_SOFTRST_CON12_HRESETN_CM4_CORE_MASK        (0x1U << CRU_CRU_SOFTRST_CON12_HRESETN_CM4_CORE_SHIFT)       /* 0x00004000 */
/* CRU_SOFTRST_CON13 */
#define CRU_CRU_SOFTRST_CON13_OFFSET                       (0x234)
#define CRU_CRU_SOFTRST_CON13_RESETN_SPI1_SHIFT            (0U)
#define CRU_CRU_SOFTRST_CON13_RESETN_SPI1_MASK             (0x1U << CRU_CRU_SOFTRST_CON13_RESETN_SPI1_SHIFT)            /* 0x00000001 */
#define CRU_CRU_SOFTRST_CON13_RESETN_SPI2_SHIFT            (1U)
#define CRU_CRU_SOFTRST_CON13_RESETN_SPI2_MASK             (0x1U << CRU_CRU_SOFTRST_CON13_RESETN_SPI2_SHIFT)            /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON13_SRESETN_SFC_SHIFT            (4U)
#define CRU_CRU_SOFTRST_CON13_SRESETN_SFC_MASK             (0x1U << CRU_CRU_SOFTRST_CON13_SRESETN_SFC_SHIFT)            /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON13_HRESETN_SFC1_SHIFT           (5U)
#define CRU_CRU_SOFTRST_CON13_HRESETN_SFC1_MASK            (0x1U << CRU_CRU_SOFTRST_CON13_HRESETN_SFC1_SHIFT)           /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON13_HRESETN_XIP_SFC1_SHIFT       (6U)
#define CRU_CRU_SOFTRST_CON13_HRESETN_XIP_SFC1_MASK        (0x1U << CRU_CRU_SOFTRST_CON13_HRESETN_XIP_SFC1_SHIFT)       /* 0x00000040 */
#define CRU_CRU_SOFTRST_CON13_RESETN_SDIO_SHIFT            (8U)
#define CRU_CRU_SOFTRST_CON13_RESETN_SDIO_MASK             (0x1U << CRU_CRU_SOFTRST_CON13_RESETN_SDIO_SHIFT)            /* 0x00000100 */
#define CRU_CRU_SOFTRST_CON13_MRESETN_I2S1_8CH_SHIFT       (11U)
#define CRU_CRU_SOFTRST_CON13_MRESETN_I2S1_8CH_MASK        (0x1U << CRU_CRU_SOFTRST_CON13_MRESETN_I2S1_8CH_SHIFT)       /* 0x00000800 */
#define CRU_CRU_SOFTRST_CON13_RESETN_PWM_SHIFT             (13U)
#define CRU_CRU_SOFTRST_CON13_RESETN_PWM_MASK              (0x1U << CRU_CRU_SOFTRST_CON13_RESETN_PWM_SHIFT)             /* 0x00002000 */
#define CRU_CRU_SOFTRST_CON13_RESETN_AUDPWM_SHIFT          (14U)
#define CRU_CRU_SOFTRST_CON13_RESETN_AUDPWM_MASK           (0x1U << CRU_CRU_SOFTRST_CON13_RESETN_AUDPWM_SHIFT)          /* 0x00004000 */
#define CRU_CRU_SOFTRST_CON13_ARESETN_CIF_SHIFT            (15U)
#define CRU_CRU_SOFTRST_CON13_ARESETN_CIF_MASK             (0x1U << CRU_CRU_SOFTRST_CON13_ARESETN_CIF_SHIFT)            /* 0x00008000 */
/* CRU_SOFTRST_CON14 */
#define CRU_CRU_SOFTRST_CON14_OFFSET                       (0x238)
#define CRU_CRU_SOFTRST_CON14_ARESETN_CIF_NIU_SHIFT        (1U)
#define CRU_CRU_SOFTRST_CON14_ARESETN_CIF_NIU_MASK         (0x1U << CRU_CRU_SOFTRST_CON14_ARESETN_CIF_NIU_SHIFT)        /* 0x00000002 */
#define CRU_CRU_SOFTRST_CON14_SRESETN_SFC1_SHIFT           (4U)
#define CRU_CRU_SOFTRST_CON14_SRESETN_SFC1_MASK            (0x1U << CRU_CRU_SOFTRST_CON14_SRESETN_SFC1_SHIFT)           /* 0x00000010 */
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2_ADP_SHIFT        (5U)
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2_ADP_MASK         (0x1U << CRU_CRU_SOFTRST_CON14_RESETN_USB2_ADP_SHIFT)        /* 0x00000020 */
#define CRU_CRU_SOFTRST_CON14_RESETN_KEY_SHIFT             (9U)
#define CRU_CRU_SOFTRST_CON14_RESETN_KEY_MASK              (0x1U << CRU_CRU_SOFTRST_CON14_RESETN_KEY_SHIFT)             /* 0x00000200 */
#define CRU_CRU_SOFTRST_CON14_PRESETN_KEY_SHIFT            (10U)
#define CRU_CRU_SOFTRST_CON14_PRESETN_KEY_MASK             (0x1U << CRU_CRU_SOFTRST_CON14_PRESETN_KEY_SHIFT)            /* 0x00000400 */
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYUTMI_SHIFT     (12U)
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYUTMI_MASK      (0x1U << CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYUTMI_SHIFT)     /* 0x00001000 */
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2CTRL_SHIFT        (13U)
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2CTRL_MASK         (0x1U << CRU_CRU_SOFTRST_CON14_RESETN_USB2CTRL_SHIFT)        /* 0x00002000 */
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYPO_SHIFT       (14U)
#define CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYPO_MASK        (0x1U << CRU_CRU_SOFTRST_CON14_RESETN_USB2PHYPO_SHIFT)       /* 0x00004000 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0x300)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
/* CRU_GLBRST_ST */
#define CRU_CRU_GLBRST_ST_OFFSET                           (0x304)
#define CRU_CRU_GLBRST_ST_FST_GLB_RST_ST_SHIFT             (0U)
#define CRU_CRU_GLBRST_ST_FST_GLB_RST_ST_MASK              (0x1U << CRU_CRU_GLBRST_ST_FST_GLB_RST_ST_SHIFT)             /* 0x00000001 */
#define CRU_CRU_GLBRST_ST_SND_GLB_RST_ST_SHIFT             (1U)
#define CRU_CRU_GLBRST_ST_SND_GLB_RST_ST_MASK              (0x1U << CRU_CRU_GLBRST_ST_SND_GLB_RST_ST_SHIFT)             /* 0x00000002 */
#define CRU_CRU_GLBRST_ST_FST_GLB_WDT_RST_ST_SHIFT         (4U)
#define CRU_CRU_GLBRST_ST_FST_GLB_WDT_RST_ST_MASK          (0x1U << CRU_CRU_GLBRST_ST_FST_GLB_WDT_RST_ST_SHIFT)         /* 0x00000010 */
#define CRU_CRU_GLBRST_ST_SND_GLB_WDT_RST_ST_SHIFT         (5U)
#define CRU_CRU_GLBRST_ST_SND_GLB_WDT_RST_ST_MASK          (0x1U << CRU_CRU_GLBRST_ST_SND_GLB_WDT_RST_ST_SHIFT)         /* 0x00000020 */
#define CRU_CRU_GLBRST_ST_WDT0_GLBRST_SHIFT                (6U)
#define CRU_CRU_GLBRST_ST_WDT0_GLBRST_MASK                 (0x1U << CRU_CRU_GLBRST_ST_WDT0_GLBRST_SHIFT)                /* 0x00000040 */
#define CRU_CRU_GLBRST_ST_WDT1_GLBRST_SHIFT                (7U)
#define CRU_CRU_GLBRST_ST_WDT1_GLBRST_MASK                 (0x1U << CRU_CRU_GLBRST_ST_WDT1_GLBRST_SHIFT)                /* 0x00000080 */
#define CRU_CRU_GLBRST_ST_WDT2_GLBRST_SHIFT                (8U)
#define CRU_CRU_GLBRST_ST_WDT2_GLBRST_MASK                 (0x1U << CRU_CRU_GLBRST_ST_WDT2_GLBRST_SHIFT)                /* 0x00000100 */
#define CRU_CRU_GLBRST_ST_WDT3_GLBRST_SHIFT                (9U)
#define CRU_CRU_GLBRST_ST_WDT3_GLBRST_MASK                 (0x1U << CRU_CRU_GLBRST_ST_WDT3_GLBRST_SHIFT)                /* 0x00000200 */
/* GLB_SRST_FST_VALUE */
#define CRU_GLB_SRST_FST_VALUE_OFFSET                      (0x308)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_SHIFT          (0U)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_MASK           (0xFFFFU << CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_SHIFT)       /* 0x0000FFFF */
/* GLB_SRST_SND_VALUE */
#define CRU_GLB_SRST_SND_VALUE_OFFSET                      (0x30C)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_SHIFT          (0U)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_MASK           (0xFFFFU << CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_SHIFT)       /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0x310)
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT             (7U)
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT)             /* 0x00000080 */
#define CRU_GLB_RST_CON_WDT0_GLBRST_EN_SHIFT               (8U)
#define CRU_GLB_RST_CON_WDT0_GLBRST_EN_MASK                (0x1U << CRU_GLB_RST_CON_WDT0_GLBRST_EN_SHIFT)               /* 0x00000100 */
#define CRU_GLB_RST_CON_WDT1_GLBRST_EN_SHIFT               (9U)
#define CRU_GLB_RST_CON_WDT1_GLBRST_EN_MASK                (0x1U << CRU_GLB_RST_CON_WDT1_GLBRST_EN_SHIFT)               /* 0x00000200 */
#define CRU_GLB_RST_CON_WDT2_GLBRST_EN_SHIFT               (10U)
#define CRU_GLB_RST_CON_WDT2_GLBRST_EN_MASK                (0x1U << CRU_GLB_RST_CON_WDT2_GLBRST_EN_SHIFT)               /* 0x00000400 */
#define CRU_GLB_RST_CON_WDT3_GLBRST_EN_SHIFT               (11U)
#define CRU_GLB_RST_CON_WDT3_GLBRST_EN_MASK                (0x1U << CRU_GLB_RST_CON_WDT3_GLBRST_EN_SHIFT)               /* 0x00000800 */
#define CRU_GLB_RST_CON_WDT0_FST_GLBRST_EN_SHIFT           (12U)
#define CRU_GLB_RST_CON_WDT0_FST_GLBRST_EN_MASK            (0x1U << CRU_GLB_RST_CON_WDT0_FST_GLBRST_EN_SHIFT)           /* 0x00001000 */
#define CRU_GLB_RST_CON_WDT1_FST_GLBRST_EN_SHIFT           (13U)
#define CRU_GLB_RST_CON_WDT1_FST_GLBRST_EN_MASK            (0x1U << CRU_GLB_RST_CON_WDT1_FST_GLBRST_EN_SHIFT)           /* 0x00002000 */
#define CRU_GLB_RST_CON_WDT2_FST_GLBRST_EN_SHIFT           (14U)
#define CRU_GLB_RST_CON_WDT2_FST_GLBRST_EN_MASK            (0x1U << CRU_GLB_RST_CON_WDT2_FST_GLBRST_EN_SHIFT)           /* 0x00004000 */
#define CRU_GLB_RST_CON_WDT3_FST_GLBRST_EN_SHIFT           (15U)
#define CRU_GLB_RST_CON_WDT3_FST_GLBRST_EN_MASK            (0x1U << CRU_GLB_RST_CON_WDT3_FST_GLBRST_EN_SHIFT)           /* 0x00008000 */
/* CRU_SDIO_CON0 */
#define CRU_CRU_SDIO_CON0_OFFSET                           (0x320)
#define CRU_CRU_SDIO_CON0_SDIO_CON0_SHIFT                  (0U)
#define CRU_CRU_SDIO_CON0_SDIO_CON0_MASK                   (0xFFFFU << CRU_CRU_SDIO_CON0_SDIO_CON0_SHIFT)               /* 0x0000FFFF */
/* CRU_SDIO_CON1 */
#define CRU_CRU_SDIO_CON1_OFFSET                           (0x324)
#define CRU_CRU_SDIO_CON1_SDIO_CON1_SHIFT                  (0U)
#define CRU_CRU_SDIO_CON1_SDIO_CON1_MASK                   (0xFFFFU << CRU_CRU_SDIO_CON1_SDIO_CON1_SHIFT)               /* 0x0000FFFF */
/* DCG0_CON0 */
#define CRU_DCG0_CON0_OFFSET                               (0x330)
#define CRU_DCG0_CON0_CFG_PERIOD_SHIFT                     (0U)
#define CRU_DCG0_CON0_CFG_PERIOD_MASK                      (0xFFFFFFFFU << CRU_DCG0_CON0_CFG_PERIOD_SHIFT)              /* 0xFFFFFFFF */
/* DCG0_CON1 */
#define CRU_DCG0_CON1_OFFSET                               (0x334)
#define CRU_DCG0_CON1_CFG_CNT_SHIFT                        (0U)
#define CRU_DCG0_CON1_CFG_CNT_MASK                         (0xFFFFFFFFU << CRU_DCG0_CON1_CFG_CNT_SHIFT)                 /* 0xFFFFFFFF */
/* DCG0_CON2 */
#define CRU_DCG0_CON2_OFFSET                               (0x338)
#define CRU_DCG0_CON2_CFG_PERIOD_SHIFT                     (0U)
#define CRU_DCG0_CON2_CFG_PERIOD_MASK                      (0xFFFFFFFFU << CRU_DCG0_CON2_CFG_PERIOD_SHIFT)              /* 0xFFFFFFFF */
/* DCG0_CON3 */
#define CRU_DCG0_CON3_OFFSET                               (0x33C)
#define CRU_DCG0_CON3_CFG_CNT_SHIFT                        (0U)
#define CRU_DCG0_CON3_CFG_CNT_MASK                         (0xFFFFFFFFU << CRU_DCG0_CON3_CFG_CNT_SHIFT)                 /* 0xFFFFFFFF */
/* DCG0_CON4 */
#define CRU_DCG0_CON4_OFFSET                               (0x340)
#define CRU_DCG0_CON4_CFG_STEP1_SHIFT                      (0U)
#define CRU_DCG0_CON4_CFG_STEP1_MASK                       (0x7FU << CRU_DCG0_CON4_CFG_STEP1_SHIFT)                     /* 0x0000007F */
#define CRU_DCG0_CON4_CFG_STEP2_SHIFT                      (8U)
#define CRU_DCG0_CON4_CFG_STEP2_MASK                       (0x7FU << CRU_DCG0_CON4_CFG_STEP2_SHIFT)                     /* 0x00007F00 */
#define CRU_DCG0_CON4_CFG_EN_SHIFT                         (15U)
#define CRU_DCG0_CON4_CFG_EN_MASK                          (0x1U << CRU_DCG0_CON4_CFG_EN_SHIFT)                         /* 0x00008000 */
/* DCG0_CON5 */
#define CRU_DCG0_CON5_OFFSET                               (0x344)
#define CRU_DCG0_CON5_CFG_LMT_SHIFT                        (0U)
#define CRU_DCG0_CON5_CFG_LMT_MASK                         (0x7FU << CRU_DCG0_CON5_CFG_LMT_SHIFT)                       /* 0x0000007F */
/* DCG0_CON6 */
#define CRU_DCG0_CON6_OFFSET                               (0x348)
/* DCG0_CON7 */
#define CRU_DCG0_CON7_OFFSET                               (0x34C)
/* DCG1_CON0 */
#define CRU_DCG1_CON0_OFFSET                               (0x350)
#define CRU_DCG1_CON0_CFG_PERIOD_SHIFT                     (0U)
#define CRU_DCG1_CON0_CFG_PERIOD_MASK                      (0xFFFFFFFFU << CRU_DCG1_CON0_CFG_PERIOD_SHIFT)              /* 0xFFFFFFFF */
/* DCG1_CON1 */
#define CRU_DCG1_CON1_OFFSET                               (0x354)
#define CRU_DCG1_CON1_CFG_CNT_SHIFT                        (0U)
#define CRU_DCG1_CON1_CFG_CNT_MASK                         (0xFFFFFFFFU << CRU_DCG1_CON1_CFG_CNT_SHIFT)                 /* 0xFFFFFFFF */
/* DCG1_CON2 */
#define CRU_DCG1_CON2_OFFSET                               (0x358)
#define CRU_DCG1_CON2_CFG_PERIOD_SHIFT                     (0U)
#define CRU_DCG1_CON2_CFG_PERIOD_MASK                      (0xFFFFFFFFU << CRU_DCG1_CON2_CFG_PERIOD_SHIFT)              /* 0xFFFFFFFF */
/* DCG1_CON3 */
#define CRU_DCG1_CON3_OFFSET                               (0x35C)
#define CRU_DCG1_CON3_CFG_CNT_SHIFT                        (0U)
#define CRU_DCG1_CON3_CFG_CNT_MASK                         (0xFFFFFFFFU << CRU_DCG1_CON3_CFG_CNT_SHIFT)                 /* 0xFFFFFFFF */
/* DCG1_CON4 */
#define CRU_DCG1_CON4_OFFSET                               (0x360)
#define CRU_DCG1_CON4_CFG_STEP1_SHIFT                      (0U)
#define CRU_DCG1_CON4_CFG_STEP1_MASK                       (0x7FU << CRU_DCG1_CON4_CFG_STEP1_SHIFT)                     /* 0x0000007F */
#define CRU_DCG1_CON4_CFG_STEP2_SHIFT                      (8U)
#define CRU_DCG1_CON4_CFG_STEP2_MASK                       (0x7FU << CRU_DCG1_CON4_CFG_STEP2_SHIFT)                     /* 0x00007F00 */
#define CRU_DCG1_CON4_CFG_EN_SHIFT                         (15U)
#define CRU_DCG1_CON4_CFG_EN_MASK                          (0x1U << CRU_DCG1_CON4_CFG_EN_SHIFT)                         /* 0x00008000 */
/* DCG1_CON5 */
#define CRU_DCG1_CON5_OFFSET                               (0x364)
#define CRU_DCG1_CON5_CFG_LMT_SHIFT                        (0U)
#define CRU_DCG1_CON5_CFG_LMT_MASK                         (0x7FU << CRU_DCG1_CON5_CFG_LMT_SHIFT)                       /* 0x0000007F */
/* DCG1_CON6 */
#define CRU_DCG1_CON6_OFFSET                               (0x368)
/* DCG1_CON7 */
#define CRU_DCG1_CON7_OFFSET                               (0x36C)
/* AS0_CON0 */
#define CRU_AS0_CON0_OFFSET                                (0x400)
#define CRU_AS0_CON0_CNT_TH_SHIFT                          (0U)
#define CRU_AS0_CON0_CNT_TH_MASK                           (0xFFFFU << CRU_AS0_CON0_CNT_TH_SHIFT)                       /* 0x0000FFFF */
#define CRU_AS0_CON0_WAIT_TH_SHIFT                         (16U)
#define CRU_AS0_CON0_WAIT_TH_MASK                          (0xFFFFU << CRU_AS0_CON0_WAIT_TH_SHIFT)                      /* 0xFFFF0000 */
/* AS0_CON1 */
#define CRU_AS0_CON1_OFFSET                                (0x404)
#define CRU_AS0_CON1_AS_CTRL_SHIFT                         (0U)
#define CRU_AS0_CON1_AS_CTRL_MASK                          (0xFFFU << CRU_AS0_CON1_AS_CTRL_SHIFT)                       /* 0x00000FFF */
#define CRU_AS0_CON1_AS_EN_SHIFT                           (12U)
#define CRU_AS0_CON1_AS_EN_MASK                            (0x1U << CRU_AS0_CON1_AS_EN_SHIFT)                           /* 0x00001000 */
#define CRU_AS0_CON1_ASS_EN_SHIFT                          (13U)
#define CRU_AS0_CON1_ASS_EN_MASK                           (0x1U << CRU_AS0_CON1_ASS_EN_SHIFT)                          /* 0x00002000 */
#define CRU_AS0_CON1_AS_CFG_SHIFT                          (14U)
#define CRU_AS0_CON1_AS_CFG_MASK                           (0x3U << CRU_AS0_CON1_AS_CFG_SHIFT)                          /* 0x0000C000 */
/* AS1_CON0 */
#define CRU_AS1_CON0_OFFSET                                (0x408)
#define CRU_AS1_CON0_CNT_TH_SHIFT                          (0U)
#define CRU_AS1_CON0_CNT_TH_MASK                           (0xFFFFU << CRU_AS1_CON0_CNT_TH_SHIFT)                       /* 0x0000FFFF */
#define CRU_AS1_CON0_WAIT_TH_SHIFT                         (16U)
#define CRU_AS1_CON0_WAIT_TH_MASK                          (0xFFFFU << CRU_AS1_CON0_WAIT_TH_SHIFT)                      /* 0xFFFF0000 */
/* AS1_CON1 */
#define CRU_AS1_CON1_OFFSET                                (0x40C)
#define CRU_AS1_CON1_AS_CTRL_SHIFT                         (0U)
#define CRU_AS1_CON1_AS_CTRL_MASK                          (0xFFFU << CRU_AS1_CON1_AS_CTRL_SHIFT)                       /* 0x00000FFF */
#define CRU_AS1_CON1_AS_EN_SHIFT                           (12U)
#define CRU_AS1_CON1_AS_EN_MASK                            (0x1U << CRU_AS1_CON1_AS_EN_SHIFT)                           /* 0x00001000 */
#define CRU_AS1_CON1_ASS_EN_SHIFT                          (13U)
#define CRU_AS1_CON1_ASS_EN_MASK                           (0x1U << CRU_AS1_CON1_ASS_EN_SHIFT)                          /* 0x00002000 */
#define CRU_AS1_CON1_AS_CFG_SHIFT                          (14U)
#define CRU_AS1_CON1_AS_CFG_MASK                           (0x3U << CRU_AS1_CON1_AS_CFG_SHIFT)                          /* 0x0000C000 */
/* AS2_CON0 */
#define CRU_AS2_CON0_OFFSET                                (0x410)
#define CRU_AS2_CON0_CNT_TH_SHIFT                          (0U)
#define CRU_AS2_CON0_CNT_TH_MASK                           (0xFFFFU << CRU_AS2_CON0_CNT_TH_SHIFT)                       /* 0x0000FFFF */
#define CRU_AS2_CON0_WAIT_TH_SHIFT                         (16U)
#define CRU_AS2_CON0_WAIT_TH_MASK                          (0xFFFFU << CRU_AS2_CON0_WAIT_TH_SHIFT)                      /* 0xFFFF0000 */
/* AS2_CON1 */
#define CRU_AS2_CON1_OFFSET                                (0x414)
#define CRU_AS2_CON1_AS_EN_SHIFT                           (12U)
#define CRU_AS2_CON1_AS_EN_MASK                            (0x1U << CRU_AS2_CON1_AS_EN_SHIFT)                           /* 0x00001000 */
#define CRU_AS2_CON1_ASS_EN_SHIFT                          (13U)
#define CRU_AS2_CON1_ASS_EN_MASK                           (0x1U << CRU_AS2_CON1_ASS_EN_SHIFT)                          /* 0x00002000 */
#define CRU_AS2_CON1_AS_CFG_SHIFT                          (14U)
#define CRU_AS2_CON1_AS_CFG_MASK                           (0x3U << CRU_AS2_CON1_AS_CFG_SHIFT)                          /* 0x0000C000 */
/* AS3_CON0 */
#define CRU_AS3_CON0_OFFSET                                (0x418)
#define CRU_AS3_CON0_CNT_TH_SHIFT                          (0U)
#define CRU_AS3_CON0_CNT_TH_MASK                           (0xFFFFU << CRU_AS3_CON0_CNT_TH_SHIFT)                       /* 0x0000FFFF */
#define CRU_AS3_CON0_WAIT_TH_SHIFT                         (16U)
#define CRU_AS3_CON0_WAIT_TH_MASK                          (0xFFFFU << CRU_AS3_CON0_WAIT_TH_SHIFT)                      /* 0xFFFF0000 */
/* AS3_CON1 */
#define CRU_AS3_CON1_OFFSET                                (0x41C)
#define CRU_AS3_CON1_AS_CTRL_SHIFT                         (0U)
#define CRU_AS3_CON1_AS_CTRL_MASK                          (0xFFFU << CRU_AS3_CON1_AS_CTRL_SHIFT)                       /* 0x00000FFF */
#define CRU_AS3_CON1_AS_EN_SHIFT                           (12U)
#define CRU_AS3_CON1_AS_EN_MASK                            (0x1U << CRU_AS3_CON1_AS_EN_SHIFT)                           /* 0x00001000 */
#define CRU_AS3_CON1_ASS_EN_SHIFT                          (13U)
#define CRU_AS3_CON1_ASS_EN_MASK                           (0x1U << CRU_AS3_CON1_ASS_EN_SHIFT)                          /* 0x00002000 */
#define CRU_AS3_CON1_AS_CFG_SHIFT                          (14U)
#define CRU_AS3_CON1_AS_CFG_MASK                           (0x3U << CRU_AS3_CON1_AS_CFG_SHIFT)                          /* 0x0000C000 */
/* AS4_CON0 */
#define CRU_AS4_CON0_OFFSET                                (0x420)
#define CRU_AS4_CON0_CNT_TH_SHIFT                          (0U)
#define CRU_AS4_CON0_CNT_TH_MASK                           (0xFFFFU << CRU_AS4_CON0_CNT_TH_SHIFT)                       /* 0x0000FFFF */
#define CRU_AS4_CON0_WAIT_TH_SHIFT                         (16U)
#define CRU_AS4_CON0_WAIT_TH_MASK                          (0xFFFFU << CRU_AS4_CON0_WAIT_TH_SHIFT)                      /* 0xFFFF0000 */
/* AS4_CON1 */
#define CRU_AS4_CON1_OFFSET                                (0x424)
#define CRU_AS4_CON1_AS_CTRL_SHIFT                         (0U)
#define CRU_AS4_CON1_AS_CTRL_MASK                          (0xFFFU << CRU_AS4_CON1_AS_CTRL_SHIFT)                       /* 0x00000FFF */
#define CRU_AS4_CON1_AS_EN_SHIFT                           (12U)
#define CRU_AS4_CON1_AS_EN_MASK                            (0x1U << CRU_AS4_CON1_AS_EN_SHIFT)                           /* 0x00001000 */
#define CRU_AS4_CON1_ASS_EN_SHIFT                          (13U)
#define CRU_AS4_CON1_ASS_EN_MASK                           (0x1U << CRU_AS4_CON1_ASS_EN_SHIFT)                          /* 0x00002000 */
#define CRU_AS4_CON1_AS_CFG_SHIFT                          (14U)
#define CRU_AS4_CON1_AS_CFG_MASK                           (0x3U << CRU_AS4_CON1_AS_CFG_SHIFT)                          /* 0x0000C000 */
/******************************************GRF*******************************************/
/* GPIO0A_IOMUX_L */
#define GRF_GPIO0A_IOMUX_L_OFFSET                          (0x0)
#define GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT               (0U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT               (4U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT               (8U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT               (12U)
#define GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0A_IOMUX_H */
#define GRF_GPIO0A_IOMUX_H_OFFSET                          (0x4)
#define GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT               (0U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT               (4U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT               (8U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT               (12U)
#define GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_MASK                (0x7U << GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0B_IOMUX_L */
#define GRF_GPIO0B_IOMUX_L_OFFSET                          (0x8)
#define GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT               (0U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT               (4U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT               (8U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT               (12U)
#define GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0B_IOMUX_H */
#define GRF_GPIO0B_IOMUX_H_OFFSET                          (0xC)
#define GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT               (0U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT               (4U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT               (8U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT               (12U)
#define GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_MASK                (0x7U << GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0C_IOMUX_L */
#define GRF_GPIO0C_IOMUX_L_OFFSET                          (0x10)
#define GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT               (0U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT               (4U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT               (8U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT               (12U)
#define GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0C_IOMUX_H */
#define GRF_GPIO0C_IOMUX_H_OFFSET                          (0x14)
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT               (0U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT               (4U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT               (8U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_MASK                (0x3U << GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT)               /* 0x00000300 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT               (12U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_MASK                (0x3U << GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT)               /* 0x00003000 */
/* GPIO0D_IOMUX_L */
#define GRF_GPIO0D_IOMUX_L_OFFSET                          (0x18)
#define GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_MASK                (0x3U << GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT)               /* 0x00000003 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT               (12U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0D_IOMUX_H */
#define GRF_GPIO0D_IOMUX_H_OFFSET                          (0x1C)
#define GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_SHIFT               (12U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1A_IOMUX_L */
#define GRF_GPIO1A_IOMUX_L_OFFSET                          (0x20)
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT               (8U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT               (12U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1A_IOMUX_H */
#define GRF_GPIO1A_IOMUX_H_OFFSET                          (0x24)
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT               (8U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_MASK                (0x3U << GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT)               /* 0x00000300 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT               (12U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1B_IOMUX_L */
#define GRF_GPIO1B_IOMUX_L_OFFSET                          (0x28)
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT               (0U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT               (4U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT               (8U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT)               /* 0x00000700 */
/* GPIO1B_IOMUX_H */
#define GRF_GPIO1B_IOMUX_H_OFFSET                          (0x2C)
/* GPIO0L_SR */
#define GRF_GPIO0L_SR_OFFSET                               (0x40)
#define GRF_GPIO0L_SR_GPIO0A_SR_SHIFT                      (0U)
#define GRF_GPIO0L_SR_GPIO0A_SR_MASK                       (0xFFU << GRF_GPIO0L_SR_GPIO0A_SR_SHIFT)                     /* 0x000000FF */
#define GRF_GPIO0L_SR_GPIO0B_SR_SHIFT                      (8U)
#define GRF_GPIO0L_SR_GPIO0B_SR_MASK                       (0xFFU << GRF_GPIO0L_SR_GPIO0B_SR_SHIFT)                     /* 0x0000FF00 */
/* GPIO0H_SR */
#define GRF_GPIO0H_SR_OFFSET                               (0x44)
#define GRF_GPIO0H_SR_GPIO0C_SR_SHIFT                      (0U)
#define GRF_GPIO0H_SR_GPIO0C_SR_MASK                       (0x7FU << GRF_GPIO0H_SR_GPIO0C_SR_SHIFT)                     /* 0x0000007F */
#define GRF_GPIO0H_SR_GPIO0D_SR_SHIFT                      (8U)
#define GRF_GPIO0H_SR_GPIO0D_SR_MASK                       (0xFU << GRF_GPIO0H_SR_GPIO0D_SR_SHIFT)                      /* 0x00000F00 */
/* GPIO1L_SR */
#define GRF_GPIO1L_SR_OFFSET                               (0x48)
#define GRF_GPIO1L_SR_GPIO1A_SR_SHIFT                      (0U)
#define GRF_GPIO1L_SR_GPIO1A_SR_MASK                       (0xFFU << GRF_GPIO1L_SR_GPIO1A_SR_SHIFT)                     /* 0x000000FF */
#define GRF_GPIO1L_SR_GPIO1B_SR_SHIFT                      (8U)
#define GRF_GPIO1L_SR_GPIO1B_SR_MASK                       (0xFFU << GRF_GPIO1L_SR_GPIO1B_SR_SHIFT)                     /* 0x0000FF00 */
/* GPIO0A_P */
#define GRF_GPIO0A_P_OFFSET                                (0x80)
#define GRF_GPIO0A_P_GPIO0A_P_SHIFT                        (0U)
#define GRF_GPIO0A_P_GPIO0A_P_MASK                         (0xFFFFU << GRF_GPIO0A_P_GPIO0A_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO0B_P */
#define GRF_GPIO0B_P_OFFSET                                (0x84)
#define GRF_GPIO0B_P_GPIO0B_P_SHIFT                        (0U)
#define GRF_GPIO0B_P_GPIO0B_P_MASK                         (0xFFFFU << GRF_GPIO0B_P_GPIO0B_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO0C_P */
#define GRF_GPIO0C_P_OFFSET                                (0x88)
#define GRF_GPIO0C_P_GPIO0C_P_SHIFT                        (0U)
#define GRF_GPIO0C_P_GPIO0C_P_MASK                         (0xFFFFU << GRF_GPIO0C_P_GPIO0C_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO0D_P */
#define GRF_GPIO0D_P_OFFSET                                (0x8C)
#define GRF_GPIO0D_P_GPIO0D_P_SHIFT                        (0U)
#define GRF_GPIO0D_P_GPIO0D_P_MASK                         (0xFFFFU << GRF_GPIO0D_P_GPIO0D_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO1A_P */
#define GRF_GPIO1A_P_OFFSET                                (0x90)
#define GRF_GPIO1A_P_GPIO1A_P_SHIFT                        (0U)
#define GRF_GPIO1A_P_GPIO1A_P_MASK                         (0xFFFFU << GRF_GPIO1A_P_GPIO1A_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO1B_P */
#define GRF_GPIO1B_P_OFFSET                                (0x94)
#define GRF_GPIO1B_P_GPIO1B_P_SHIFT                        (0U)
#define GRF_GPIO1B_P_GPIO1B_P_MASK                         (0xFFFFU << GRF_GPIO1B_P_GPIO1B_P_SHIFT)                     /* 0x0000FFFF */
/* GPIO0A_E */
#define GRF_GPIO0A_E_OFFSET                                (0xC0)
#define GRF_GPIO0A_E_GPIO0A_E_SHIFT                        (0U)
#define GRF_GPIO0A_E_GPIO0A_E_MASK                         (0xFFFFU << GRF_GPIO0A_E_GPIO0A_E_SHIFT)                     /* 0x0000FFFF */
/* GPIO0B_E */
#define GRF_GPIO0B_E_OFFSET                                (0xC4)
#define GRF_GPIO0B_E_GPIO0B_E_SHIFT                        (0U)
#define GRF_GPIO0B_E_GPIO0B_E_MASK                         (0xFFFFU << GRF_GPIO0B_E_GPIO0B_E_SHIFT)                     /* 0x0000FFFF */
/* GPIO0C_E */
#define GRF_GPIO0C_E_OFFSET                                (0xC8)
#define GRF_GPIO0C_E_GPIO0C_E_SHIFT                        (0U)
#define GRF_GPIO0C_E_GPIO0C_E_MASK                         (0xFFFFU << GRF_GPIO0C_E_GPIO0C_E_SHIFT)                     /* 0x0000FFFF */
/* GPIO0D_E */
#define GRF_GPIO0D_E_OFFSET                                (0xCC)
#define GRF_GPIO0D_E_GPIO0D_E_SHIFT                        (0U)
#define GRF_GPIO0D_E_GPIO0D_E_MASK                         (0xFFFFU << GRF_GPIO0D_E_GPIO0D_E_SHIFT)                     /* 0x0000FFFF */
/* GPIO1A_E */
#define GRF_GPIO1A_E_OFFSET                                (0xD0)
#define GRF_GPIO1A_E_GPIO1A_E_SHIFT                        (0U)
#define GRF_GPIO1A_E_GPIO1A_E_MASK                         (0xFFFFU << GRF_GPIO1A_E_GPIO1A_E_SHIFT)                     /* 0x0000FFFF */
/* GPIO1B_E */
#define GRF_GPIO1B_E_OFFSET                                (0xD4)
#define GRF_GPIO1B_E_GPIO1B_E_SHIFT                        (0U)
#define GRF_GPIO1B_E_GPIO1B_E_MASK                         (0xFFFFU << GRF_GPIO1B_E_GPIO1B_E_SHIFT)                     /* 0x0000FFFF */
/* CHIP_VERSION_ID */
#define GRF_CHIP_VERSION_ID_OFFSET                         (0xF0)
#define GRF_CHIP_VERSION_ID_CHIP_VERSION_ID_SHIFT          (0U)
#define GRF_CHIP_VERSION_ID_CHIP_VERSION_ID_MASK           (0xFFFFFFFFU << GRF_CHIP_VERSION_ID_CHIP_VERSION_ID_SHIFT)   /* 0xFFFFFFFF */
/* CHIP_IDL */
#define GRF_CHIP_IDL_OFFSET                                (0xF4)
#define GRF_CHIP_IDL_CHIP_IDL_SHIFT                        (0U)
#define GRF_CHIP_IDL_CHIP_IDL_MASK                         (0xFFFFFFFFU << GRF_CHIP_IDL_CHIP_IDL_SHIFT)                 /* 0xFFFFFFFF */
/* CHIP_IDH */
#define GRF_CHIP_IDH_OFFSET                                (0xF8)
#define GRF_CHIP_IDH_CHIP_IDH_SHIFT                        (0U)
#define GRF_CHIP_IDH_CHIP_IDH_MASK                         (0xFFFFFFFFU << GRF_CHIP_IDH_CHIP_IDH_SHIFT)                 /* 0xFFFFFFFF */
/* SOC_CON0 */
#define GRF_SOC_CON0_OFFSET                                (0x100)
#define GRF_SOC_CON0_I2C_FLT_F_SHIFT                       (0U)
#define GRF_SOC_CON0_I2C_FLT_F_MASK                        (0xFU << GRF_SOC_CON0_I2C_FLT_F_SHIFT)                       /* 0x0000000F */
#define GRF_SOC_CON0_I2C_FLT_R_SHIFT                       (4U)
#define GRF_SOC_CON0_I2C_FLT_R_MASK                        (0xFU << GRF_SOC_CON0_I2C_FLT_R_SHIFT)                       /* 0x000000F0 */
#define GRF_SOC_CON0_UART0_RTS_SEL_SHIFT                   (8U)
#define GRF_SOC_CON0_UART0_RTS_SEL_MASK                    (0x1U << GRF_SOC_CON0_UART0_RTS_SEL_SHIFT)                   /* 0x00000100 */
#define GRF_SOC_CON0_UART0_CTS_SEL_SHIFT                   (9U)
#define GRF_SOC_CON0_UART0_CTS_SEL_MASK                    (0x1U << GRF_SOC_CON0_UART0_CTS_SEL_SHIFT)                   /* 0x00000200 */
#define GRF_SOC_CON0_VOP_TE_SEL_SHIFT                      (14U)
#define GRF_SOC_CON0_VOP_TE_SEL_MASK                       (0x3U << GRF_SOC_CON0_VOP_TE_SEL_SHIFT)                      /* 0x0000C000 */
/* SOC_CON1 */
#define GRF_SOC_CON1_OFFSET                                (0x104)
#define GRF_SOC_CON1_TOP_FWD_DSP_PWRDISCTARGPWRSTALL_SHIFT (0U)
#define GRF_SOC_CON1_TOP_FWD_DSP_PWRDISCTARGPWRSTALL_MASK  (0x1U << GRF_SOC_CON1_TOP_FWD_DSP_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000001 */
#define GRF_SOC_CON1_DSP_FWD_TOP_PWRDISCTARGPWRSTALL_SHIFT (1U)
#define GRF_SOC_CON1_DSP_FWD_TOP_PWRDISCTARGPWRSTALL_MASK  (0x1U << GRF_SOC_CON1_DSP_FWD_TOP_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000002 */
#define GRF_SOC_CON1_TOP_FWD_SHRM0_PWRDISCTARGPWRSTALL_SHIFT (2U)
#define GRF_SOC_CON1_TOP_FWD_SHRM0_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_TOP_FWD_SHRM0_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000004 */
#define GRF_SOC_CON1_TOP_FWD_SHRM1_PWRDISCTARGPWRSTALL_SHIFT (3U)
#define GRF_SOC_CON1_TOP_FWD_SHRM1_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_TOP_FWD_SHRM1_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000008 */
#define GRF_SOC_CON1_TOP_FWD_SHRM2_PWRDISCTARGPWRSTALL_SHIFT (4U)
#define GRF_SOC_CON1_TOP_FWD_SHRM2_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_TOP_FWD_SHRM2_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000010 */
#define GRF_SOC_CON1_TOP_FWD_AUDIO_PWRDISCTARGPWRSTALL_SHIFT (5U)
#define GRF_SOC_CON1_TOP_FWD_AUDIO_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_TOP_FWD_AUDIO_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000020 */
#define GRF_SOC_CON1_TOP_FWD_ALIVE_PWRDISCTARGPWRSTALL_SHIFT (6U)
#define GRF_SOC_CON1_TOP_FWD_ALIVE_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_TOP_FWD_ALIVE_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000040 */
#define GRF_SOC_CON1_AUDIO_FWD_TOP_PWRDISCTARGPWRSTALL_SHIFT (7U)
#define GRF_SOC_CON1_AUDIO_FWD_TOP_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_AUDIO_FWD_TOP_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000080 */
#define GRF_SOC_CON1_AUDIO_FWD_DSP_PWRDISCTARGPWRSTALL_SHIFT (8U)
#define GRF_SOC_CON1_AUDIO_FWD_DSP_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_AUDIO_FWD_DSP_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000100 */
#define GRF_SOC_CON1_DSP_FWD_ALIVE_PWRDISCTARGPWRSTALL_SHIFT (9U)
#define GRF_SOC_CON1_DSP_FWD_ALIVE_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_DSP_FWD_ALIVE_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000200 */
#define GRF_SOC_CON1_DSP_FWD_AUDIO_PWRDISCTARGPWRSTALL_SHIFT (10U)
#define GRF_SOC_CON1_DSP_FWD_AUDIO_PWRDISCTARGPWRSTALL_MASK (0x1U << GRF_SOC_CON1_DSP_FWD_AUDIO_PWRDISCTARGPWRSTALL_SHIFT) /* 0x00000400 */
#define GRF_SOC_CON1_DSISHUTDN_SHIFT                       (12U)
#define GRF_SOC_CON1_DSISHUTDN_MASK                        (0x1U << GRF_SOC_CON1_DSISHUTDN_SHIFT)                       /* 0x00001000 */
#define GRF_SOC_CON1_DSICOLORM_SHIFT                       (13U)
#define GRF_SOC_CON1_DSICOLORM_MASK                        (0x1U << GRF_SOC_CON1_DSICOLORM_SHIFT)                       /* 0x00002000 */
#define GRF_SOC_CON1_DSIUPDATECFG_SHIFT                    (14U)
#define GRF_SOC_CON1_DSIUPDATECFG_MASK                     (0x1U << GRF_SOC_CON1_DSIUPDATECFG_SHIFT)                    /* 0x00004000 */
#define GRF_SOC_CON1_PHYLOCK_SHIFT                         (15U)
#define GRF_SOC_CON1_PHYLOCK_MASK                          (0x1U << GRF_SOC_CON1_PHYLOCK_SHIFT)                         /* 0x00008000 */
/* SOC_CON2 */
#define GRF_SOC_CON2_OFFSET                                (0x108)
#define GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_EN_SHIFT         (0U)
#define GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_EN_MASK          (0x1U << GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_EN_SHIFT)         /* 0x00000001 */
#define GRF_SOC_CON2_GRF_CON_I2S_BYPASS_MST_SHIFT          (1U)
#define GRF_SOC_CON2_GRF_CON_I2S_BYPASS_MST_MASK           (0x1U << GRF_SOC_CON2_GRF_CON_I2S_BYPASS_MST_SHIFT)          /* 0x00000002 */
#define GRF_SOC_CON2_GRF_CON_CODEC_SEL_SHIFT               (2U)
#define GRF_SOC_CON2_GRF_CON_CODEC_SEL_MASK                (0x1U << GRF_SOC_CON2_GRF_CON_CODEC_SEL_SHIFT)               /* 0x00000004 */
#define GRF_SOC_CON2_GRF_CON_I2S_LRCK_MUX_SHIFT            (3U)
#define GRF_SOC_CON2_GRF_CON_I2S_LRCK_MUX_MASK             (0x1U << GRF_SOC_CON2_GRF_CON_I2S_LRCK_MUX_SHIFT)            /* 0x00000008 */
#define GRF_SOC_CON2_GRF_CON_I2S_SCLK_MUX_SHIFT            (4U)
#define GRF_SOC_CON2_GRF_CON_I2S_SCLK_MUX_MASK             (0x1U << GRF_SOC_CON2_GRF_CON_I2S_SCLK_MUX_SHIFT)            /* 0x00000010 */
#define GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_SRC_SHIFT         (5U)
#define GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_SRC_MASK          (0x1U << GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_SRC_SHIFT)         /* 0x00000020 */
#define GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_OUT_EN_SHIFT      (6U)
#define GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_OUT_EN_MASK       (0x1U << GRF_SOC_CON2_GRF_CON_I2S_IN_MCLK_OUT_EN_SHIFT)      /* 0x00000040 */
#define GRF_SOC_CON2_GRF_CON_I2S_OUT_MCLK_OUT_EN_SHIFT     (7U)
#define GRF_SOC_CON2_GRF_CON_I2S_OUT_MCLK_OUT_EN_MASK      (0x1U << GRF_SOC_CON2_GRF_CON_I2S_OUT_MCLK_OUT_EN_SHIFT)     /* 0x00000080 */
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK0_BY_CLK_SEL_SHIFT  (8U)
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK0_BY_CLK_SEL_MASK   (0x1U << GRF_SOC_CON2_GRF_CON_PDM_IN_CLK0_BY_CLK_SEL_SHIFT)  /* 0x00000100 */
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK1_BY_CLK_SEL_SHIFT  (9U)
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK1_BY_CLK_SEL_MASK   (0x1U << GRF_SOC_CON2_GRF_CON_PDM_IN_CLK1_BY_CLK_SEL_SHIFT)  /* 0x00000200 */
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK_BY_CLK_CRU_SEL_SHIFT (10U)
#define GRF_SOC_CON2_GRF_CON_PDM_IN_CLK_BY_CLK_CRU_SEL_MASK (0x1U << GRF_SOC_CON2_GRF_CON_PDM_IN_CLK_BY_CLK_CRU_SEL_SHIFT) /* 0x00000400 */
#define GRF_SOC_CON2_GRF_CON_PDM_OUT_CLK_OE_SHIFT          (11U)
#define GRF_SOC_CON2_GRF_CON_PDM_OUT_CLK_OE_MASK           (0x1U << GRF_SOC_CON2_GRF_CON_PDM_OUT_CLK_OE_SHIFT)          /* 0x00000800 */
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_EN_SHIFT             (12U)
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_EN_MASK              (0x1U << GRF_SOC_CON2_GRF_CON_PDM_COMB_EN_SHIFT)             /* 0x00001000 */
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_LR_SEL_SHIFT         (13U)
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_LR_SEL_MASK          (0x1U << GRF_SOC_CON2_GRF_CON_PDM_COMB_LR_SEL_SHIFT)         /* 0x00002000 */
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_BY_CLK_SEL_SHIFT     (14U)
#define GRF_SOC_CON2_GRF_CON_PDM_COMB_BY_CLK_SEL_MASK      (0x1U << GRF_SOC_CON2_GRF_CON_PDM_COMB_BY_CLK_SEL_SHIFT)     /* 0x00004000 */
#define GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_CTRL_SEL_SHIFT   (15U)
#define GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_CTRL_SEL_MASK    (0x1U << GRF_SOC_CON2_GRF_CON_AUDIO_BYPASS_CTRL_SEL_SHIFT)   /* 0x00008000 */
/* SOC_CON3 */
#define GRF_SOC_CON3_OFFSET                                (0x10C)
#define GRF_SOC_CON3_GRF_CON_MIPI_SWITCH_EN_PRO_BYP_SHIFT  (12U)
#define GRF_SOC_CON3_GRF_CON_MIPI_SWITCH_EN_PRO_BYP_MASK   (0x1U << GRF_SOC_CON3_GRF_CON_MIPI_SWITCH_EN_PRO_BYP_SHIFT)  /* 0x00001000 */
/* SOC_CON4 */
#define GRF_SOC_CON4_OFFSET                                (0x110)
#define GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_SHIFT        (0U)
#define GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_MASK         (0x1U << GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_SHIFT)        /* 0x00000001 */
#define GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_SHIFT     (1U)
#define GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_MASK      (0x1U << GRF_SOC_CON4_GRF_CON_LCD_RESET_TE_BYPASS_SHIFT)     /* 0x00000002 */
#define GRF_SOC_CON4_GRF_CON_LCD_RESETN_SHIFT              (2U)
#define GRF_SOC_CON4_GRF_CON_LCD_RESETN_MASK               (0x1U << GRF_SOC_CON4_GRF_CON_LCD_RESETN_SHIFT)              /* 0x00000004 */
#define GRF_SOC_CON4_GRF_CON_LDO_OUT_PWR_EN_SHIFT          (3U)
#define GRF_SOC_CON4_GRF_CON_LDO_OUT_PWR_EN_MASK           (0x1U << GRF_SOC_CON4_GRF_CON_LDO_OUT_PWR_EN_SHIFT)          /* 0x00000008 */
#define GRF_SOC_CON4_GRF_CON_TP_RESETN_SHIFT               (4U)
#define GRF_SOC_CON4_GRF_CON_TP_RESETN_MASK                (0x1U << GRF_SOC_CON4_GRF_CON_TP_RESETN_SHIFT)               /* 0x00000010 */
#define GRF_SOC_CON4_GRF_CON_CLK_OUT_EN_SHIFT              (5U)
#define GRF_SOC_CON4_GRF_CON_CLK_OUT_EN_MASK               (0x1U << GRF_SOC_CON4_GRF_CON_CLK_OUT_EN_SHIFT)              /* 0x00000020 */
#define GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_SEL_SHIFT    (6U)
#define GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_SEL_MASK     (0x1U << GRF_SOC_CON4_GRF_CON_MIPI_SWITCH_CTRL_SEL_SHIFT)    /* 0x00000040 */
#define GRF_SOC_CON4_GRF_CON_I2S_BYPASS_PROC_EN_SHIFT      (7U)
#define GRF_SOC_CON4_GRF_CON_I2S_BYPASS_PROC_EN_MASK       (0x1U << GRF_SOC_CON4_GRF_CON_I2S_BYPASS_PROC_EN_SHIFT)      /* 0x00000080 */
/* SOC_CON5 */
#define GRF_SOC_CON5_OFFSET                                (0x114)
#define GRF_SOC_CON5_GRF_CON_I2CMST0_IOMUX_SEL_SHIFT       (0U)
#define GRF_SOC_CON5_GRF_CON_I2CMST0_IOMUX_SEL_MASK        (0x3U << GRF_SOC_CON5_GRF_CON_I2CMST0_IOMUX_SEL_SHIFT)       /* 0x00000003 */
#define GRF_SOC_CON5_GRF_CON_I2CMST1_IOMUX_SEL_SHIFT       (2U)
#define GRF_SOC_CON5_GRF_CON_I2CMST1_IOMUX_SEL_MASK        (0x3U << GRF_SOC_CON5_GRF_CON_I2CMST1_IOMUX_SEL_SHIFT)       /* 0x0000000C */
#define GRF_SOC_CON5_GRF_CON_I2CMST2_IOMUX_SEL_SHIFT       (4U)
#define GRF_SOC_CON5_GRF_CON_I2CMST2_IOMUX_SEL_MASK        (0x3U << GRF_SOC_CON5_GRF_CON_I2CMST2_IOMUX_SEL_SHIFT)       /* 0x00000030 */
#define GRF_SOC_CON5_GRF_CON_UART1_IOMUX_SEL_SHIFT         (7U)
#define GRF_SOC_CON5_GRF_CON_UART1_IOMUX_SEL_MASK          (0x3U << GRF_SOC_CON5_GRF_CON_UART1_IOMUX_SEL_SHIFT)         /* 0x00000180 */
#define GRF_SOC_CON5_GRF_CON_SPIMST1_IOMUX_SEL_SHIFT       (9U)
#define GRF_SOC_CON5_GRF_CON_SPIMST1_IOMUX_SEL_MASK        (0x1U << GRF_SOC_CON5_GRF_CON_SPIMST1_IOMUX_SEL_SHIFT)       /* 0x00000200 */
/* SOC_STATUS0 */
#define GRF_SOC_STATUS0_OFFSET                             (0x140)
#define GRF_SOC_STATUS0_DSP_FWD_TOP_PWRDISCTARGPWRACTIVE_SHIFT (0U)
#define GRF_SOC_STATUS0_DSP_FWD_TOP_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_DSP_FWD_TOP_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000001 */
#define GRF_SOC_STATUS0_TOP_FWD_DSP_PWRDISCTARGPWRACTIVE_SHIFT (1U)
#define GRF_SOC_STATUS0_TOP_FWD_DSP_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_DSP_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000002 */
#define GRF_SOC_STATUS0_TOP_FWD_SHRM0_PWRDISCTARGPWRACTIVE_SHIFT (2U)
#define GRF_SOC_STATUS0_TOP_FWD_SHRM0_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_SHRM0_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000004 */
#define GRF_SOC_STATUS0_TOP_FWD_SHRM1_PWRDISCTARGPWRACTIVE_SHIFT (3U)
#define GRF_SOC_STATUS0_TOP_FWD_SHRM1_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_SHRM1_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000008 */
#define GRF_SOC_STATUS0_TOP_FWD_SHRM2_PWRDISCTARGPWRACTIVE_SHIFT (4U)
#define GRF_SOC_STATUS0_TOP_FWD_SHRM2_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_SHRM2_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000010 */
#define GRF_SOC_STATUS0_TOP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_SHIFT (5U)
#define GRF_SOC_STATUS0_TOP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000020 */
#define GRF_SOC_STATUS0_TOP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_SHIFT (6U)
#define GRF_SOC_STATUS0_TOP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_TOP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000040 */
#define GRF_SOC_STATUS0_AUDIO_FWD_TOP_PWRDISCTARGPWRACTIVE_SHIFT (7U)
#define GRF_SOC_STATUS0_AUDIO_FWD_TOP_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_AUDIO_FWD_TOP_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000080 */
#define GRF_SOC_STATUS0_AUDIO_FWD_DSP_PWRDISCTARGPWRACTIVE_SHIFT (8U)
#define GRF_SOC_STATUS0_AUDIO_FWD_DSP_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_AUDIO_FWD_DSP_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000100 */
#define GRF_SOC_STATUS0_DSP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_SHIFT (9U)
#define GRF_SOC_STATUS0_DSP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_DSP_FWD_ALIVE_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000200 */
#define GRF_SOC_STATUS0_DSP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_SHIFT (10U)
#define GRF_SOC_STATUS0_DSP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_MASK (0x1U << GRF_SOC_STATUS0_DSP_FWD_AUDIO_PWRDISCTARGPWRACTIVE_SHIFT) /* 0x00000400 */
/* SOC_STATUS1 */
#define GRF_SOC_STATUS1_OFFSET                             (0x144)
#define GRF_SOC_STATUS1_IO_LCD_IN_TE_SHIFT                 (0U)
#define GRF_SOC_STATUS1_IO_LCD_IN_TE_MASK                  (0x1U << GRF_SOC_STATUS1_IO_LCD_IN_TE_SHIFT)                 /* 0x00000001 */
#define GRF_SOC_STATUS1_IO_LCD_IN_RESETN_SHIFT             (1U)
#define GRF_SOC_STATUS1_IO_LCD_IN_RESETN_MASK              (0x1U << GRF_SOC_STATUS1_IO_LCD_IN_RESETN_SHIFT)             /* 0x00000002 */
#define GRF_SOC_STATUS1_TP_INT_SHIFT                       (2U)
#define GRF_SOC_STATUS1_TP_INT_MASK                        (0x1U << GRF_SOC_STATUS1_TP_INT_SHIFT)                       /* 0x00000004 */
#define GRF_SOC_STATUS1_CLK_SRC_SEL_SHIFT                  (3U)
#define GRF_SOC_STATUS1_CLK_SRC_SEL_MASK                   (0x1U << GRF_SOC_STATUS1_CLK_SRC_SEL_SHIFT)                  /* 0x00000008 */
#define GRF_SOC_STATUS1_BOOT_DEVICE_SEL_SHIFT              (6U)
#define GRF_SOC_STATUS1_BOOT_DEVICE_SEL_MASK               (0x1U << GRF_SOC_STATUS1_BOOT_DEVICE_SEL_SHIFT)              /* 0x00000040 */
#define GRF_SOC_STATUS1_AP_WAKEUP_OLPC_SHIFT               (7U)
#define GRF_SOC_STATUS1_AP_WAKEUP_OLPC_MASK                (0x1U << GRF_SOC_STATUS1_AP_WAKEUP_OLPC_SHIFT)               /* 0x00000080 */
#define GRF_SOC_STATUS1_AUDIO_BYPASS_EN_POST_SHIFT         (8U)
#define GRF_SOC_STATUS1_AUDIO_BYPASS_EN_POST_MASK          (0x1U << GRF_SOC_STATUS1_AUDIO_BYPASS_EN_POST_SHIFT)         /* 0x00000100 */
/* DSP_CON0 */
#define GRF_DSP_CON0_OFFSET                                (0x160)
#define GRF_DSP_CON0_OCDHALTONRESET_SHIFT                  (0U)
#define GRF_DSP_CON0_OCDHALTONRESET_MASK                   (0x1U << GRF_DSP_CON0_OCDHALTONRESET_SHIFT)                  /* 0x00000001 */
#define GRF_DSP_CON0_BREAKIN_SHIFT                         (1U)
#define GRF_DSP_CON0_BREAKIN_MASK                          (0x1U << GRF_DSP_CON0_BREAKIN_SHIFT)                         /* 0x00000002 */
#define GRF_DSP_CON0_BREAKOUTACK_SHIFT                     (2U)
#define GRF_DSP_CON0_BREAKOUTACK_MASK                      (0x1U << GRF_DSP_CON0_BREAKOUTACK_SHIFT)                     /* 0x00000004 */
#define GRF_DSP_CON0_STATVECTORSEL_SHIFT                   (4U)
#define GRF_DSP_CON0_STATVECTORSEL_MASK                    (0x1U << GRF_DSP_CON0_STATVECTORSEL_SHIFT)                   /* 0x00000010 */
#define GRF_DSP_CON0_RUNSTALL_SHIFT                        (5U)
#define GRF_DSP_CON0_RUNSTALL_MASK                         (0x1U << GRF_DSP_CON0_RUNSTALL_SHIFT)                        /* 0x00000020 */
/* DSP_CON1 */
#define GRF_DSP_CON1_OFFSET                                (0x164)
#define GRF_DSP_CON1_ALTRESETVEC_SHIFT                     (0U)
#define GRF_DSP_CON1_ALTRESETVEC_MASK                      (0xFFFFFFFFU << GRF_DSP_CON1_ALTRESETVEC_SHIFT)              /* 0xFFFFFFFF */
/* DSP_CON2 */
#define GRF_DSP_CON2_OFFSET                                (0x168)
#define GRF_DSP_CON2_ICACHE_MEM_AUTO_GATING_EN_SHIFT       (0U)
#define GRF_DSP_CON2_ICACHE_MEM_AUTO_GATING_EN_MASK        (0x1U << GRF_DSP_CON2_ICACHE_MEM_AUTO_GATING_EN_SHIFT)       /* 0x00000001 */
#define GRF_DSP_CON2_ITAG_MEM_AUTO_GATING_EN_SHIFT         (1U)
#define GRF_DSP_CON2_ITAG_MEM_AUTO_GATING_EN_MASK          (0x1U << GRF_DSP_CON2_ITAG_MEM_AUTO_GATING_EN_SHIFT)         /* 0x00000002 */
#define GRF_DSP_CON2_DCACHE_MEM_AUTO_GATING_EN_SHIFT       (2U)
#define GRF_DSP_CON2_DCACHE_MEM_AUTO_GATING_EN_MASK        (0x1U << GRF_DSP_CON2_DCACHE_MEM_AUTO_GATING_EN_SHIFT)       /* 0x00000004 */
#define GRF_DSP_CON2_DTAG_MEM_AUTO_GATING_EN_SHIFT         (3U)
#define GRF_DSP_CON2_DTAG_MEM_AUTO_GATING_EN_MASK          (0x1U << GRF_DSP_CON2_DTAG_MEM_AUTO_GATING_EN_SHIFT)         /* 0x00000008 */
#define GRF_DSP_CON2_PREFETCH_RAM_AUTO_GATING_EN_SHIFT     (4U)
#define GRF_DSP_CON2_PREFETCH_RAM_AUTO_GATING_EN_MASK      (0x1U << GRF_DSP_CON2_PREFETCH_RAM_AUTO_GATING_EN_SHIFT)     /* 0x00000010 */
#define GRF_DSP_CON2_DTCM_MEM_AUTO_GATING_EN_SHIFT         (5U)
#define GRF_DSP_CON2_DTCM_MEM_AUTO_GATING_EN_MASK          (0x1U << GRF_DSP_CON2_DTCM_MEM_AUTO_GATING_EN_SHIFT)         /* 0x00000020 */
#define GRF_DSP_CON2_ITCM_MEM_AUTO_GATING_EN_SHIFT         (6U)
#define GRF_DSP_CON2_ITCM_MEM_AUTO_GATING_EN_MASK          (0x1U << GRF_DSP_CON2_ITCM_MEM_AUTO_GATING_EN_SHIFT)         /* 0x00000040 */
#define GRF_DSP_CON2_VAD_DTCM_SPACE_SEL_SHIFT              (8U)
#define GRF_DSP_CON2_VAD_DTCM_SPACE_SEL_MASK               (0x3U << GRF_DSP_CON2_VAD_DTCM_SPACE_SEL_SHIFT)              /* 0x00000300 */
/* DSP_STAT0 */
#define GRF_DSP_STAT0_OFFSET                               (0x170)
#define GRF_DSP_STAT0_XOCDMODE_SHIFT                       (0U)
#define GRF_DSP_STAT0_XOCDMODE_MASK                        (0x1U << GRF_DSP_STAT0_XOCDMODE_SHIFT)                       /* 0x00000001 */
#define GRF_DSP_STAT0_DEBUGMODE_SHIFT                      (1U)
#define GRF_DSP_STAT0_DEBUGMODE_MASK                       (0x1U << GRF_DSP_STAT0_DEBUGMODE_SHIFT)                      /* 0x00000002 */
#define GRF_DSP_STAT0_BREAKINACK_SHIFT                     (2U)
#define GRF_DSP_STAT0_BREAKINACK_MASK                      (0x1U << GRF_DSP_STAT0_BREAKINACK_SHIFT)                     /* 0x00000004 */
#define GRF_DSP_STAT0_BREAKOUT_SHIFT                       (3U)
#define GRF_DSP_STAT0_BREAKOUT_MASK                        (0x1U << GRF_DSP_STAT0_BREAKOUT_SHIFT)                       /* 0x00000008 */
#define GRF_DSP_STAT0_DOUBLEEXCEPTIONERROR_SHIFT           (4U)
#define GRF_DSP_STAT0_DOUBLEEXCEPTIONERROR_MASK            (0x1U << GRF_DSP_STAT0_DOUBLEEXCEPTIONERROR_SHIFT)           /* 0x00000010 */
#define GRF_DSP_STAT0_PFATALERROR_SHIFT                    (5U)
#define GRF_DSP_STAT0_PFATALERROR_MASK                     (0x1U << GRF_DSP_STAT0_PFATALERROR_SHIFT)                    /* 0x00000020 */
#define GRF_DSP_STAT0_PFAULTINFOVALID_SHIFT                (6U)
#define GRF_DSP_STAT0_PFAULTINFOVALID_MASK                 (0x1U << GRF_DSP_STAT0_PFAULTINFOVALID_SHIFT)                /* 0x00000040 */
#define GRF_DSP_STAT0_PWAITMODE_SHIFT                      (7U)
#define GRF_DSP_STAT0_PWAITMODE_MASK                       (0x1U << GRF_DSP_STAT0_PWAITMODE_SHIFT)                      /* 0x00000080 */
#define GRF_DSP_STAT0_IRAM0LOADSTORE_SHIFT                 (8U)
#define GRF_DSP_STAT0_IRAM0LOADSTORE_MASK                  (0x1U << GRF_DSP_STAT0_IRAM0LOADSTORE_SHIFT)                 /* 0x00000100 */
/* DSP_STAT1 */
#define GRF_DSP_STAT1_OFFSET                               (0x174)
#define GRF_DSP_STAT1_PFAULTINFO_SHIFT                     (0U)
#define GRF_DSP_STAT1_PFAULTINFO_MASK                      (0xFFFFFFFFU << GRF_DSP_STAT1_PFAULTINFO_SHIFT)              /* 0xFFFFFFFF */
/* FW_CON0 */
#define GRF_FW_CON0_OFFSET                                 (0x1C0)
#define GRF_FW_CON0_FWBYPASS_SHIFT                         (0U)
#define GRF_FW_CON0_FWBYPASS_MASK                          (0x1U << GRF_FW_CON0_FWBYPASS_SHIFT)                         /* 0x00000001 */
#define GRF_FW_CON0_MEMEN_SHIFT                            (1U)
#define GRF_FW_CON0_MEMEN_MASK                             (0x1U << GRF_FW_CON0_MEMEN_SHIFT)                            /* 0x00000002 */
#define GRF_FW_CON0_MBOXEN_SHIFT                           (2U)
#define GRF_FW_CON0_MBOXEN_MASK                            (0x1U << GRF_FW_CON0_MBOXEN_SHIFT)                           /* 0x00000004 */
/* FW_CON1 */
#define GRF_FW_CON1_OFFSET                                 (0x1C4)
#define GRF_FW_CON1_MEM_BASE_ADDRESS_SHIFT                 (0U)
#define GRF_FW_CON1_MEM_BASE_ADDRESS_MASK                  (0xFFFFFFFFU << GRF_FW_CON1_MEM_BASE_ADDRESS_SHIFT)          /* 0xFFFFFFFF */
/* FW_CON2 */
#define GRF_FW_CON2_OFFSET                                 (0x1C8)
#define GRF_FW_CON2_MEM_TOP_ADDRESS_SHIFT                  (0U)
#define GRF_FW_CON2_MEM_TOP_ADDRESS_MASK                   (0xFFFFFFFFU << GRF_FW_CON2_MEM_TOP_ADDRESS_SHIFT)           /* 0xFFFFFFFF */
/* MCU_CON0 */
#define GRF_MCU_CON0_OFFSET                                (0x200)
#define GRF_MCU_CON0_M4_RXEV_SHIFT                         (0U)
#define GRF_MCU_CON0_M4_RXEV_MASK                          (0x1U << GRF_MCU_CON0_M4_RXEV_SHIFT)                         /* 0x00000001 */
#define GRF_MCU_CON0_M4_NMI_SHIFT                          (1U)
#define GRF_MCU_CON0_M4_NMI_MASK                           (0x1U << GRF_MCU_CON0_M4_NMI_SHIFT)                          /* 0x00000002 */
#define GRF_MCU_CON0_M4_EDBGRQ_SHIFT                       (2U)
#define GRF_MCU_CON0_M4_EDBGRQ_MASK                        (0x1U << GRF_MCU_CON0_M4_EDBGRQ_SHIFT)                       /* 0x00000004 */
#define GRF_MCU_CON0_M4_DBGRESTART_SHIFT                   (3U)
#define GRF_MCU_CON0_M4_DBGRESTART_MASK                    (0x1U << GRF_MCU_CON0_M4_DBGRESTART_SHIFT)                   /* 0x00000008 */
#define GRF_MCU_CON0_M4_DBGEN_SHIFT                        (4U)
#define GRF_MCU_CON0_M4_DBGEN_MASK                         (0x1U << GRF_MCU_CON0_M4_DBGEN_SHIFT)                        /* 0x00000010 */
#define GRF_MCU_CON0_M4_PMU_ENABLE_SHIFT                   (5U)
#define GRF_MCU_CON0_M4_PMU_ENABLE_MASK                    (0x1U << GRF_MCU_CON0_M4_PMU_ENABLE_SHIFT)                   /* 0x00000020 */
#define GRF_MCU_CON0_M4_MPU_DISABLE_SHIFT                  (6U)
#define GRF_MCU_CON0_M4_MPU_DISABLE_MASK                   (0x1U << GRF_MCU_CON0_M4_MPU_DISABLE_SHIFT)                  /* 0x00000040 */
#define GRF_MCU_CON0_M4_FPU_DISABLE_SHIFT                  (7U)
#define GRF_MCU_CON0_M4_FPU_DISABLE_MASK                   (0x1U << GRF_MCU_CON0_M4_FPU_DISABLE_SHIFT)                  /* 0x00000080 */
#define GRF_MCU_CON0_M4_DAP_FIXMASTER_SHIFT                (8U)
#define GRF_MCU_CON0_M4_DAP_FIXMASTER_MASK                 (0x1U << GRF_MCU_CON0_M4_DAP_FIXMASTER_SHIFT)                /* 0x00000100 */
#define GRF_MCU_CON0_M4_DAP_DCACHE_SHIFT                   (9U)
#define GRF_MCU_CON0_M4_DAP_DCACHE_MASK                    (0x1U << GRF_MCU_CON0_M4_DAP_DCACHE_SHIFT)                   /* 0x00000200 */
#define GRF_MCU_CON0_M4_SLEEP_DELAY_SHIFT                  (10U)
#define GRF_MCU_CON0_M4_SLEEP_DELAY_MASK                   (0x1U << GRF_MCU_CON0_M4_SLEEP_DELAY_SHIFT)                  /* 0x00000400 */
/* MCU_CON1 */
#define GRF_MCU_CON1_OFFSET                                (0x204)
#define GRF_MCU_CON1_M4_TENMS_SHIFT                        (0U)
#define GRF_MCU_CON1_M4_TENMS_MASK                         (0xFFFFFFU << GRF_MCU_CON1_M4_TENMS_SHIFT)                   /* 0x00FFFFFF */
#define GRF_MCU_CON1_M4_SKEW_SHIFT                         (24U)
#define GRF_MCU_CON1_M4_SKEW_MASK                          (0x1U << GRF_MCU_CON1_M4_SKEW_SHIFT)                         /* 0x01000000 */
/* MCU_CON2 */
#define GRF_MCU_CON2_OFFSET                                (0x208)
#define GRF_MCU_CON2_M4_MEM_OFFSET_SHIFT                   (0U)
#define GRF_MCU_CON2_M4_MEM_OFFSET_MASK                    (0xFFFFFFFFU << GRF_MCU_CON2_M4_MEM_OFFSET_SHIFT)            /* 0xFFFFFFFF */
/* MCU_CON3 */
#define GRF_MCU_CON3_OFFSET                                (0x20C)
#define GRF_MCU_CON3_M4_FLASH_OFFSET_SHIFT                 (0U)
#define GRF_MCU_CON3_M4_FLASH_OFFSET_MASK                  (0xFFFFFFFFU << GRF_MCU_CON3_M4_FLASH_OFFSET_SHIFT)          /* 0xFFFFFFFF */
/* MCU_STAT0 */
#define GRF_MCU_STAT0_OFFSET                               (0x220)
#define GRF_MCU_STAT0_M4_SLEEPING_SHIFT                    (0U)
#define GRF_MCU_STAT0_M4_SLEEPING_MASK                     (0x1U << GRF_MCU_STAT0_M4_SLEEPING_SHIFT)                    /* 0x00000001 */
#define GRF_MCU_STAT0_M4_SLEEPDEEP_SHIFT                   (1U)
#define GRF_MCU_STAT0_M4_SLEEPDEEP_MASK                    (0x1U << GRF_MCU_STAT0_M4_SLEEPDEEP_SHIFT)                   /* 0x00000002 */
#define GRF_MCU_STAT0_M4_HALTED_SHIFT                      (2U)
#define GRF_MCU_STAT0_M4_HALTED_MASK                       (0x1U << GRF_MCU_STAT0_M4_HALTED_SHIFT)                      /* 0x00000004 */
#define GRF_MCU_STAT0_M4_DBGRESTARTED_SHIFT                (3U)
#define GRF_MCU_STAT0_M4_DBGRESTARTED_MASK                 (0x1U << GRF_MCU_STAT0_M4_DBGRESTARTED_SHIFT)                /* 0x00000008 */
#define GRF_MCU_STAT0_M4_GATEHCLK_SHIFT                    (4U)
#define GRF_MCU_STAT0_M4_GATEHCLK_MASK                     (0x1U << GRF_MCU_STAT0_M4_GATEHCLK_SHIFT)                    /* 0x00000010 */
#define GRF_MCU_STAT0_M4_LOCKUP_SHIFT                      (5U)
#define GRF_MCU_STAT0_M4_LOCKUP_MASK                       (0x1U << GRF_MCU_STAT0_M4_LOCKUP_SHIFT)                      /* 0x00000020 */
#define GRF_MCU_STAT0_M4_CURRPRI_SHIFT                     (8U)
#define GRF_MCU_STAT0_M4_CURRPRI_MASK                      (0xFFU << GRF_MCU_STAT0_M4_CURRPRI_SHIFT)                    /* 0x0000FF00 */
#define GRF_MCU_STAT0_M4_FPIXC_SHIFT                       (16U)
#define GRF_MCU_STAT0_M4_FPIXC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPIXC_SHIFT)                       /* 0x00010000 */
#define GRF_MCU_STAT0_M4_FPOFC_SHIFT                       (17U)
#define GRF_MCU_STAT0_M4_FPOFC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPOFC_SHIFT)                       /* 0x00020000 */
#define GRF_MCU_STAT0_M4_FPUFC_SHIFT                       (18U)
#define GRF_MCU_STAT0_M4_FPUFC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPUFC_SHIFT)                       /* 0x00040000 */
#define GRF_MCU_STAT0_M4_FPIOC_SHIFT                       (19U)
#define GRF_MCU_STAT0_M4_FPIOC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPIOC_SHIFT)                       /* 0x00080000 */
#define GRF_MCU_STAT0_M4_FPDZC_SHIFT                       (20U)
#define GRF_MCU_STAT0_M4_FPDZC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPDZC_SHIFT)                       /* 0x00100000 */
#define GRF_MCU_STAT0_M4_FPIDC_SHIFT                       (21U)
#define GRF_MCU_STAT0_M4_FPIDC_MASK                        (0x1U << GRF_MCU_STAT0_M4_FPIDC_SHIFT)                       /* 0x00200000 */
/* DSI_CON0 */
#define GRF_DSI_CON0_OFFSET                                (0x240)
#define GRF_DSI_CON0_DPHY_PHYRSTZ_SHIFT                    (0U)
#define GRF_DSI_CON0_DPHY_PHYRSTZ_MASK                     (0x1U << GRF_DSI_CON0_DPHY_PHYRSTZ_SHIFT)                    /* 0x00000001 */
#define GRF_DSI_CON0_DPHY_PLL_CLK_SEL_SHIFT                (2U)
#define GRF_DSI_CON0_DPHY_PLL_CLK_SEL_MASK                 (0x3FFU << GRF_DSI_CON0_DPHY_PLL_CLK_SEL_SHIFT)              /* 0x00000FFC */
#define GRF_DSI_CON0_DPHY_REFCLK_IN_SEL_SHIFT              (12U)
#define GRF_DSI_CON0_DPHY_REFCLK_IN_SEL_MASK               (0x7U << GRF_DSI_CON0_DPHY_REFCLK_IN_SEL_SHIFT)              /* 0x00007000 */
/* DSI_CON1 */
#define GRF_DSI_CON1_OFFSET                                (0x244)
#define GRF_DSI_CON1_DPHY_TXSKEWCALHS_SHIFT                (0U)
#define GRF_DSI_CON1_DPHY_TXSKEWCALHS_MASK                 (0xFU << GRF_DSI_CON1_DPHY_TXSKEWCALHS_SHIFT)                /* 0x0000000F */
#define GRF_DSI_CON1_DPHY_FORCETXSTOPMODE_SHIFT            (4U)
#define GRF_DSI_CON1_DPHY_FORCETXSTOPMODE_MASK             (0xFU << GRF_DSI_CON1_DPHY_FORCETXSTOPMODE_SHIFT)            /* 0x000000F0 */
#define GRF_DSI_CON1_DPHY_TURNDISABLE0_SHIFT               (8U)
#define GRF_DSI_CON1_DPHY_TURNDISABLE0_MASK                (0x1U << GRF_DSI_CON1_DPHY_TURNDISABLE0_SHIFT)               /* 0x00000100 */
#define GRF_DSI_CON1_DPHY_FORCERXMODE0_SHIFT               (9U)
#define GRF_DSI_CON1_DPHY_FORCERXMODE0_MASK                (0x1U << GRF_DSI_CON1_DPHY_FORCERXMODE0_SHIFT)               /* 0x00000200 */
#define GRF_DSI_CON1_DPHY_TXONLY_SHIFT                     (10U)
#define GRF_DSI_CON1_DPHY_TXONLY_MASK                      (0x1U << GRF_DSI_CON1_DPHY_TXONLY_SHIFT)                     /* 0x00000400 */
#define GRF_DSI_CON1_DPHY_DEBUG_SEL_SHIFT                  (11U)
#define GRF_DSI_CON1_DPHY_DEBUG_SEL_MASK                   (0x1FU << GRF_DSI_CON1_DPHY_DEBUG_SEL_SHIFT)                 /* 0x0000F800 */
/* DSI_CON2 */
#define GRF_DSI_CON2_OFFSET                                (0x248)
#define GRF_DSI_CON2_DPHY_LANE_SWAP0_SHIFT                 (0U)
#define GRF_DSI_CON2_DPHY_LANE_SWAP0_MASK                  (0x7U << GRF_DSI_CON2_DPHY_LANE_SWAP0_SHIFT)                 /* 0x00000007 */
#define GRF_DSI_CON2_DPHY_LANE_SWAP1_SHIFT                 (3U)
#define GRF_DSI_CON2_DPHY_LANE_SWAP1_MASK                  (0x7U << GRF_DSI_CON2_DPHY_LANE_SWAP1_SHIFT)                 /* 0x00000038 */
#define GRF_DSI_CON2_DPHY_LANE_SWAP2_SHIFT                 (6U)
#define GRF_DSI_CON2_DPHY_LANE_SWAP2_MASK                  (0x7U << GRF_DSI_CON2_DPHY_LANE_SWAP2_SHIFT)                 /* 0x000001C0 */
#define GRF_DSI_CON2_DPHY_LANE_SWAP3_SHIFT                 (9U)
#define GRF_DSI_CON2_DPHY_LANE_SWAP3_MASK                  (0x7U << GRF_DSI_CON2_DPHY_LANE_SWAP3_SHIFT)                 /* 0x00000E00 */
#define GRF_DSI_CON2_DPHY_LANE_SWAP_CLK_SHIFT              (12U)
#define GRF_DSI_CON2_DPHY_LANE_SWAP_CLK_MASK               (0x7U << GRF_DSI_CON2_DPHY_LANE_SWAP_CLK_SHIFT)              /* 0x00007000 */
/* DSI_CON3 */
#define GRF_DSI_CON3_OFFSET                                (0x24C)
#define GRF_DSI_CON3_DPHY_XCFGI_D0_SHIFT                   (0U)
#define GRF_DSI_CON3_DPHY_XCFGI_D0_MASK                    (0xFFFFFFFFU << GRF_DSI_CON3_DPHY_XCFGI_D0_SHIFT)            /* 0xFFFFFFFF */
/* DSI_CON4 */
#define GRF_DSI_CON4_OFFSET                                (0x250)
#define GRF_DSI_CON4_DPHY_XCFGI_D0_SHIFT                   (0U)
#define GRF_DSI_CON4_DPHY_XCFGI_D0_MASK                    (0xFFFFFFFFU << GRF_DSI_CON4_DPHY_XCFGI_D0_SHIFT)            /* 0xFFFFFFFF */
/* DSI_CON5 */
#define GRF_DSI_CON5_OFFSET                                (0x254)
#define GRF_DSI_CON5_DPHY_XCFGI_D0_SHIFT                   (0U)
#define GRF_DSI_CON5_DPHY_XCFGI_D0_MASK                    (0xFFFFFFU << GRF_DSI_CON5_DPHY_XCFGI_D0_SHIFT)              /* 0x00FFFFFF */
/* DSI_CON6 */
#define GRF_DSI_CON6_OFFSET                                (0x258)
#define GRF_DSI_CON6_DPHY_XCFGI_D1_SHIFT                   (0U)
#define GRF_DSI_CON6_DPHY_XCFGI_D1_MASK                    (0xFFFFFFFFU << GRF_DSI_CON6_DPHY_XCFGI_D1_SHIFT)            /* 0xFFFFFFFF */
/* DSI_CON7 */
#define GRF_DSI_CON7_OFFSET                                (0x25C)
#define GRF_DSI_CON7_DPHY_XCFGI_D1_SHIFT                   (0U)
#define GRF_DSI_CON7_DPHY_XCFGI_D1_MASK                    (0xFFFFFFFFU << GRF_DSI_CON7_DPHY_XCFGI_D1_SHIFT)            /* 0xFFFFFFFF */
/* DSI_CON8 */
#define GRF_DSI_CON8_OFFSET                                (0x260)
#define GRF_DSI_CON8_DPHY_XCFGI_D1_SHIFT                   (0U)
#define GRF_DSI_CON8_DPHY_XCFGI_D1_MASK                    (0xFFFFFFU << GRF_DSI_CON8_DPHY_XCFGI_D1_SHIFT)              /* 0x00FFFFFF */
/* DSI_CON9 */
#define GRF_DSI_CON9_OFFSET                                (0x264)
#define GRF_DSI_CON9_DPHY_XCFGI_D2_SHIFT                   (0U)
#define GRF_DSI_CON9_DPHY_XCFGI_D2_MASK                    (0xFFFFFFFFU << GRF_DSI_CON9_DPHY_XCFGI_D2_SHIFT)            /* 0xFFFFFFFF */
/* DSI_CON10 */
#define GRF_DSI_CON10_OFFSET                               (0x268)
#define GRF_DSI_CON10_DPHY_XCFGI_D2_SHIFT                  (0U)
#define GRF_DSI_CON10_DPHY_XCFGI_D2_MASK                   (0xFFFFFFFFU << GRF_DSI_CON10_DPHY_XCFGI_D2_SHIFT)           /* 0xFFFFFFFF */
/* DSI_CON11 */
#define GRF_DSI_CON11_OFFSET                               (0x26C)
#define GRF_DSI_CON11_DPHY_XCFGI_D2_SHIFT                  (0U)
#define GRF_DSI_CON11_DPHY_XCFGI_D2_MASK                   (0xFFFFFFU << GRF_DSI_CON11_DPHY_XCFGI_D2_SHIFT)             /* 0x00FFFFFF */
/* DSI_CON12 */
#define GRF_DSI_CON12_OFFSET                               (0x270)
#define GRF_DSI_CON12_DPHY_XCFGI_D3_SHIFT                  (0U)
#define GRF_DSI_CON12_DPHY_XCFGI_D3_MASK                   (0xFFFFFFFFU << GRF_DSI_CON12_DPHY_XCFGI_D3_SHIFT)           /* 0xFFFFFFFF */
/* DSI_CON13 */
#define GRF_DSI_CON13_OFFSET                               (0x274)
#define GRF_DSI_CON13_DPHY_XCFGI_D3_SHIFT                  (0U)
#define GRF_DSI_CON13_DPHY_XCFGI_D3_MASK                   (0xFFFFFFFFU << GRF_DSI_CON13_DPHY_XCFGI_D3_SHIFT)           /* 0xFFFFFFFF */
/* DSI_CON14 */
#define GRF_DSI_CON14_OFFSET                               (0x278)
#define GRF_DSI_CON14_DPHY_XCFGI_D3_SHIFT                  (0U)
#define GRF_DSI_CON14_DPHY_XCFGI_D3_MASK                   (0xFFFFFFU << GRF_DSI_CON14_DPHY_XCFGI_D3_SHIFT)             /* 0x00FFFFFF */
/* DSI_CON15 */
#define GRF_DSI_CON15_OFFSET                               (0x27C)
#define GRF_DSI_CON15_DPHY_XCFGI_CLK_SHIFT                 (0U)
#define GRF_DSI_CON15_DPHY_XCFGI_CLK_MASK                  (0xFFFFFFFFU << GRF_DSI_CON15_DPHY_XCFGI_CLK_SHIFT)          /* 0xFFFFFFFF */
/* DSI_CON16 */
#define GRF_DSI_CON16_OFFSET                               (0x280)
#define GRF_DSI_CON16_DPHY_XCFGI_CLK_SHIFT                 (0U)
#define GRF_DSI_CON16_DPHY_XCFGI_CLK_MASK                  (0xFFFFFFFFU << GRF_DSI_CON16_DPHY_XCFGI_CLK_SHIFT)          /* 0xFFFFFFFF */
/* DSI_CON17 */
#define GRF_DSI_CON17_OFFSET                               (0x284)
#define GRF_DSI_CON17_DPHY_XCFGI_CLK_SHIFT                 (0U)
#define GRF_DSI_CON17_DPHY_XCFGI_CLK_MASK                  (0xFFFFFFU << GRF_DSI_CON17_DPHY_XCFGI_CLK_SHIFT)            /* 0x00FFFFFF */
/* DSI_CON18 */
#define GRF_DSI_CON18_OFFSET                               (0x288)
#define GRF_DSI_CON18_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON18_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON18_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON19 */
#define GRF_DSI_CON19_OFFSET                               (0x28C)
#define GRF_DSI_CON19_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON19_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON19_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON20 */
#define GRF_DSI_CON20_OFFSET                               (0x290)
#define GRF_DSI_CON20_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON20_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON20_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON21 */
#define GRF_DSI_CON21_OFFSET                               (0x294)
#define GRF_DSI_CON21_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON21_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON21_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON22 */
#define GRF_DSI_CON22_OFFSET                               (0x298)
#define GRF_DSI_CON22_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON22_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON22_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON23 */
#define GRF_DSI_CON23_OFFSET                               (0x29C)
#define GRF_DSI_CON23_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON23_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON23_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON24 */
#define GRF_DSI_CON24_OFFSET                               (0x2A0)
#define GRF_DSI_CON24_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON24_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON24_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON25 */
#define GRF_DSI_CON25_OFFSET                               (0x2A4)
#define GRF_DSI_CON25_DPHY_XCFGI_GLOBAL_SHIFT              (0U)
#define GRF_DSI_CON25_DPHY_XCFGI_GLOBAL_MASK               (0xFFFFFFFFU << GRF_DSI_CON25_DPHY_XCFGI_GLOBAL_SHIFT)       /* 0xFFFFFFFF */
/* DSI_CON26 */
#define GRF_DSI_CON26_OFFSET                               (0x2A8)
#define GRF_DSI_CON26_DPHY_FORCE_ODTCAL_SEL_SHIFT          (0U)
#define GRF_DSI_CON26_DPHY_FORCE_ODTCAL_SEL_MASK           (0xFFFU << GRF_DSI_CON26_DPHY_FORCE_ODTCAL_SEL_SHIFT)        /* 0x00000FFF */
/* DSI_CON27 */
#define GRF_DSI_CON27_OFFSET                               (0x2AC)
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_0_SHIFT          (0U)
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_0_MASK           (0xFU << GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_0_SHIFT)          /* 0x0000000F */
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_1_SHIFT          (4U)
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_1_MASK           (0xFU << GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_1_SHIFT)          /* 0x000000F0 */
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_2_SHIFT          (8U)
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_2_MASK           (0xFU << GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_2_SHIFT)          /* 0x00000F00 */
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_3_SHIFT          (12U)
#define GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_3_MASK           (0xFU << GRF_DSI_CON27_DPHY_EXT_ODTCAL_SEL_3_SHIFT)          /* 0x0000F000 */
/* DSI_CON28 */
#define GRF_DSI_CON28_OFFSET                               (0x2B0)
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_4_SHIFT          (0U)
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_4_MASK           (0xFU << GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_4_SHIFT)          /* 0x0000000F */
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_5_SHIFT          (4U)
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_5_MASK           (0xFU << GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_5_SHIFT)          /* 0x000000F0 */
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_6_SHIFT          (8U)
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_6_MASK           (0xFU << GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_6_SHIFT)          /* 0x00000F00 */
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_7_SHIFT          (12U)
#define GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_7_MASK           (0xFU << GRF_DSI_CON28_DPHY_EXT_ODTCAL_SEL_7_SHIFT)          /* 0x0000F000 */
/* DSI_CON29 */
#define GRF_DSI_CON29_OFFSET                               (0x2B4)
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_8_SHIFT          (0U)
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_8_MASK           (0xFU << GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_8_SHIFT)          /* 0x0000000F */
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_9_SHIFT          (4U)
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_9_MASK           (0xFU << GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_9_SHIFT)          /* 0x000000F0 */
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_10_SHIFT         (8U)
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_10_MASK          (0xFU << GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_10_SHIFT)         /* 0x00000F00 */
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_11_SHIFT         (12U)
#define GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_11_MASK          (0xFU << GRF_DSI_CON29_DPHY_EXT_ODTCAL_SEL_11_SHIFT)         /* 0x0000F000 */
/* DSI_STATUS0 */
#define GRF_DSI_STATUS0_OFFSET                             (0x2C0)
#define GRF_DSI_STATUS0_DPHY_PHYULPSACTIVENOTCLK_SHIFT     (0U)
#define GRF_DSI_STATUS0_DPHY_PHYULPSACTIVENOTCLK_MASK      (0x1U << GRF_DSI_STATUS0_DPHY_PHYULPSACTIVENOTCLK_SHIFT)     /* 0x00000001 */
#define GRF_DSI_STATUS0_DPHY_PHYSTOPSTATECLKLANE_SHIFT     (1U)
#define GRF_DSI_STATUS0_DPHY_PHYSTOPSTATECLKLANE_MASK      (0x1U << GRF_DSI_STATUS0_DPHY_PHYSTOPSTATECLKLANE_SHIFT)     /* 0x00000002 */
#define GRF_DSI_STATUS0_DPHY_STOPSTATE_SHIFT               (2U)
#define GRF_DSI_STATUS0_DPHY_STOPSTATE_MASK                (0xFU << GRF_DSI_STATUS0_DPHY_STOPSTATE_SHIFT)               /* 0x0000003C */
#define GRF_DSI_STATUS0_DPHY_ULPSACTIVENOT_SHIFT           (6U)
#define GRF_DSI_STATUS0_DPHY_ULPSACTIVENOT_MASK            (0xFU << GRF_DSI_STATUS0_DPHY_ULPSACTIVENOT_SHIFT)           /* 0x000003C0 */
#define GRF_DSI_STATUS0_DPHY_ERRESC_0_SHIFT                (10U)
#define GRF_DSI_STATUS0_DPHY_ERRESC_0_MASK                 (0x1U << GRF_DSI_STATUS0_DPHY_ERRESC_0_SHIFT)                /* 0x00000400 */
#define GRF_DSI_STATUS0_DPHY_ERRSYNCESC_0_SHIFT            (11U)
#define GRF_DSI_STATUS0_DPHY_ERRSYNCESC_0_MASK             (0x1U << GRF_DSI_STATUS0_DPHY_ERRSYNCESC_0_SHIFT)            /* 0x00000800 */
#define GRF_DSI_STATUS0_DPHY_ERRCONTROL_0_SHIFT            (12U)
#define GRF_DSI_STATUS0_DPHY_ERRCONTROL_0_MASK             (0x1U << GRF_DSI_STATUS0_DPHY_ERRCONTROL_0_SHIFT)            /* 0x00001000 */
#define GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP0_0_SHIFT      (13U)
#define GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP0_0_MASK       (0x1U << GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP0_0_SHIFT)      /* 0x00002000 */
#define GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP1_0_SHIFT      (14U)
#define GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP1_0_MASK       (0x1U << GRF_DSI_STATUS0_DPHY_ERRCONTENTIONLP1_0_SHIFT)      /* 0x00004000 */
/* DSI_STATUS1 */
#define GRF_DSI_STATUS1_OFFSET                             (0x2C4)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_0_SHIFT         (0U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_0_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_0_SHIFT)         /* 0x0000000F */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_1_SHIFT         (4U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_1_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_1_SHIFT)         /* 0x000000F0 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_2_SHIFT         (8U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_2_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_2_SHIFT)         /* 0x00000F00 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_3_SHIFT         (12U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_3_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_3_SHIFT)         /* 0x0000F000 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_4_SHIFT         (16U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_4_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_4_SHIFT)         /* 0x000F0000 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_5_SHIFT         (20U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_5_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_5_SHIFT)         /* 0x00F00000 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_6_SHIFT         (24U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_6_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_6_SHIFT)         /* 0x0F000000 */
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_7_SHIFT         (28U)
#define GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_7_MASK          (0xFU << GRF_DSI_STATUS1_DPHY_DA_ODTCAL_SEL_7_SHIFT)         /* 0xF0000000 */
/* DSI_STATUS2 */
#define GRF_DSI_STATUS2_OFFSET                             (0x2C8)
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_8_SHIFT         (0U)
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_8_MASK          (0xFU << GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_8_SHIFT)         /* 0x0000000F */
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_9_SHIFT         (4U)
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_9_MASK          (0xFU << GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_9_SHIFT)         /* 0x000000F0 */
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_10_SHIFT        (8U)
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_10_MASK         (0xFU << GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_10_SHIFT)        /* 0x00000F00 */
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_11_SHIFT        (12U)
#define GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_11_MASK         (0xFU << GRF_DSI_STATUS2_DPHY_DA_ODTCAL_SEL_11_SHIFT)        /* 0x0000F000 */
/* DSI_STATUS3 */
#define GRF_DSI_STATUS3_OFFSET                             (0x2CC)
#define GRF_DSI_STATUS3_DPHY_DEBUG_PORT_SHIFT              (0U)
#define GRF_DSI_STATUS3_DPHY_DEBUG_PORT_MASK               (0xFFFFFFFFU << GRF_DSI_STATUS3_DPHY_DEBUG_PORT_SHIFT)       /* 0xFFFFFFFF */
/* DSI_STATUS4 */
#define GRF_DSI_STATUS4_OFFSET                             (0x2D0)
#define GRF_DSI_STATUS4_DPHY_XCFGO_SHIFT                   (0U)
#define GRF_DSI_STATUS4_DPHY_XCFGO_MASK                    (0xFFFFFFFFU << GRF_DSI_STATUS4_DPHY_XCFGO_SHIFT)            /* 0xFFFFFFFF */
/* DSI_STATUS5 */
#define GRF_DSI_STATUS5_OFFSET                             (0x2D4)
#define GRF_DSI_STATUS5_DPHY_XCFGO_SHIFT                   (0U)
#define GRF_DSI_STATUS5_DPHY_XCFGO_MASK                    (0xFFFFFFFFU << GRF_DSI_STATUS5_DPHY_XCFGO_SHIFT)            /* 0xFFFFFFFF */
/* DSI_STATUS6 */
#define GRF_DSI_STATUS6_OFFSET                             (0x2D8)
#define GRF_DSI_STATUS6_DPHY_XCFGO_SHIFT                   (0U)
#define GRF_DSI_STATUS6_DPHY_XCFGO_MASK                    (0x3FFFU << GRF_DSI_STATUS6_DPHY_XCFGO_SHIFT)                /* 0x00003FFF */
/* DSI_STATUS7 */
#define GRF_DSI_STATUS7_OFFSET                             (0x2DC)
#define GRF_DSI_STATUS7_DPHY_MPOSV_SHIFT                   (0U)
#define GRF_DSI_STATUS7_DPHY_MPOSV_MASK                    (0xFFFFFFFFU << GRF_DSI_STATUS7_DPHY_MPOSV_SHIFT)            /* 0xFFFFFFFF */
/* DSI_STATUS8 */
#define GRF_DSI_STATUS8_OFFSET                             (0x2E0)
#define GRF_DSI_STATUS8_DPHY_MPOSV_SHIFT                   (0U)
#define GRF_DSI_STATUS8_DPHY_MPOSV_MASK                    (0x3FFU << GRF_DSI_STATUS8_DPHY_MPOSV_SHIFT)                 /* 0x000003FF */
/* MEM_CON0 */
#define GRF_MEM_CON0_OFFSET                                (0x300)
#define GRF_MEM_CON0_PDM_MEM_EMA_SHIFT                     (0U)
#define GRF_MEM_CON0_PDM_MEM_EMA_MASK                      (0x7U << GRF_MEM_CON0_PDM_MEM_EMA_SHIFT)                     /* 0x00000007 */
#define GRF_MEM_CON0_PDM_MEM_EMAW_SHIFT                    (3U)
#define GRF_MEM_CON0_PDM_MEM_EMAW_MASK                     (0x3U << GRF_MEM_CON0_PDM_MEM_EMAW_SHIFT)                    /* 0x00000018 */
#define GRF_MEM_CON0_M4_MEM_EMA_SHIFT                      (5U)
#define GRF_MEM_CON0_M4_MEM_EMA_MASK                       (0x7U << GRF_MEM_CON0_M4_MEM_EMA_SHIFT)                      /* 0x000000E0 */
#define GRF_MEM_CON0_M4_MEM_EMAW_SHIFT                     (8U)
#define GRF_MEM_CON0_M4_MEM_EMAW_MASK                      (0x3U << GRF_MEM_CON0_M4_MEM_EMAW_SHIFT)                     /* 0x00000300 */
#define GRF_MEM_CON0_SHRM_MEM_EMA_SHIFT                    (10U)
#define GRF_MEM_CON0_SHRM_MEM_EMA_MASK                     (0x7U << GRF_MEM_CON0_SHRM_MEM_EMA_SHIFT)                    /* 0x00001C00 */
#define GRF_MEM_CON0_SHRM_MEM_EMAW_SHIFT                   (13U)
#define GRF_MEM_CON0_SHRM_MEM_EMAW_MASK                    (0x3U << GRF_MEM_CON0_SHRM_MEM_EMAW_SHIFT)                   /* 0x00006000 */
#define GRF_MEM_CON0_SHRM_MEM_EMAS_SHIFT                   (15U)
#define GRF_MEM_CON0_SHRM_MEM_EMAS_MASK                    (0x1U << GRF_MEM_CON0_SHRM_MEM_EMAS_SHIFT)                   /* 0x00008000 */
/* MEM_CON1 */
#define GRF_MEM_CON1_OFFSET                                (0x304)
#define GRF_MEM_CON1_VOP_DP_EMAA_SHIFT                     (0U)
#define GRF_MEM_CON1_VOP_DP_EMAA_MASK                      (0x7U << GRF_MEM_CON1_VOP_DP_EMAA_SHIFT)                     /* 0x00000007 */
#define GRF_MEM_CON1_VOP_DP_EMASA_SHIFT                    (3U)
#define GRF_MEM_CON1_VOP_DP_EMASA_MASK                     (0x1U << GRF_MEM_CON1_VOP_DP_EMASA_SHIFT)                    /* 0x00000008 */
#define GRF_MEM_CON1_VOP_DP_EMAB_SHIFT                     (4U)
#define GRF_MEM_CON1_VOP_DP_EMAB_MASK                      (0x7U << GRF_MEM_CON1_VOP_DP_EMAB_SHIFT)                     /* 0x00000070 */
#define GRF_MEM_CON1_VOP_SP_EMA_SHIFT                      (7U)
#define GRF_MEM_CON1_VOP_SP_EMA_MASK                       (0x7U << GRF_MEM_CON1_VOP_SP_EMA_SHIFT)                      /* 0x00000380 */
#define GRF_MEM_CON1_VOP_SP_EMAW_SHIFT                     (10U)
#define GRF_MEM_CON1_VOP_SP_EMAW_MASK                      (0x3U << GRF_MEM_CON1_VOP_SP_EMAW_SHIFT)                     /* 0x00000C00 */
#define GRF_MEM_CON1_VOP_SP_EMAS_SHIFT                     (12U)
#define GRF_MEM_CON1_VOP_SP_EMAS_MASK                      (0x1U << GRF_MEM_CON1_VOP_SP_EMAS_SHIFT)                     /* 0x00001000 */
/* MEM_CON2 */
#define GRF_MEM_CON2_OFFSET                                (0x308)
#define GRF_MEM_CON2_DSIHOST_MEM_EMAA_SHIFT                (0U)
#define GRF_MEM_CON2_DSIHOST_MEM_EMAA_MASK                 (0x7U << GRF_MEM_CON2_DSIHOST_MEM_EMAA_SHIFT)                /* 0x00000007 */
#define GRF_MEM_CON2_DSIHOST_MEM_EMASA_SHIFT               (3U)
#define GRF_MEM_CON2_DSIHOST_MEM_EMASA_MASK                (0x1U << GRF_MEM_CON2_DSIHOST_MEM_EMASA_SHIFT)               /* 0x00000008 */
#define GRF_MEM_CON2_DSIHOST_MEM_EMAB_SHIFT                (4U)
#define GRF_MEM_CON2_DSIHOST_MEM_EMAB_MASK                 (0x7U << GRF_MEM_CON2_DSIHOST_MEM_EMAB_SHIFT)                /* 0x00000070 */
#define GRF_MEM_CON2_VAD_MEM_EMA_SHIFT                     (7U)
#define GRF_MEM_CON2_VAD_MEM_EMA_MASK                      (0x7U << GRF_MEM_CON2_VAD_MEM_EMA_SHIFT)                     /* 0x00000380 */
#define GRF_MEM_CON2_VAD_MEM_EMAW_SHIFT                    (10U)
#define GRF_MEM_CON2_VAD_MEM_EMAW_MASK                     (0x3U << GRF_MEM_CON2_VAD_MEM_EMAW_SHIFT)                    /* 0x00000C00 */
#define GRF_MEM_CON2_ROM_EMA_SHIFT                         (12U)
#define GRF_MEM_CON2_ROM_EMA_MASK                          (0x7U << GRF_MEM_CON2_ROM_EMA_SHIFT)                         /* 0x00007000 */
/* MEM_CON3 */
#define GRF_MEM_CON3_OFFSET                                (0x30C)
#define GRF_MEM_CON3_DSPTCM_MEM_EMA_SHIFT                  (6U)
#define GRF_MEM_CON3_DSPTCM_MEM_EMA_MASK                   (0x7U << GRF_MEM_CON3_DSPTCM_MEM_EMA_SHIFT)                  /* 0x000001C0 */
#define GRF_MEM_CON3_DSPTCM_MEM_EMAW_SHIFT                 (9U)
#define GRF_MEM_CON3_DSPTCM_MEM_EMAW_MASK                  (0x3U << GRF_MEM_CON3_DSPTCM_MEM_EMAW_SHIFT)                 /* 0x00000600 */
#define GRF_MEM_CON3_DSPCACHE_MEM_EMA_SHIFT                (11U)
#define GRF_MEM_CON3_DSPCACHE_MEM_EMA_MASK                 (0x7U << GRF_MEM_CON3_DSPCACHE_MEM_EMA_SHIFT)                /* 0x00003800 */
#define GRF_MEM_CON3_DSPCACHE_MEM_EMAW_SHIFT               (14U)
#define GRF_MEM_CON3_DSPCACHE_MEM_EMAW_MASK                (0x3U << GRF_MEM_CON3_DSPCACHE_MEM_EMAW_SHIFT)               /* 0x0000C000 */
/* MEM_CON4 */
#define GRF_MEM_CON4_OFFSET                                (0x310)
/* MEM_CON5 */
#define GRF_MEM_CON5_OFFSET                                (0x314)
#define GRF_MEM_CON5_VOP_DPRA_EMA_SHIFT                    (5U)
#define GRF_MEM_CON5_VOP_DPRA_EMA_MASK                     (0x7U << GRF_MEM_CON5_VOP_DPRA_EMA_SHIFT)                    /* 0x000000E0 */
#define GRF_MEM_CON5_VOP_DPRA_EMAW_SHIFT                   (8U)
#define GRF_MEM_CON5_VOP_DPRA_EMAW_MASK                    (0x3U << GRF_MEM_CON5_VOP_DPRA_EMAW_SHIFT)                   /* 0x00000300 */
#define GRF_MEM_CON5_VOP_DPRA_EMAS_SHIFT                   (10U)
#define GRF_MEM_CON5_VOP_DPRA_EMAS_MASK                    (0x1U << GRF_MEM_CON5_VOP_DPRA_EMAS_SHIFT)                   /* 0x00000400 */
#define GRF_MEM_CON5_VOP_DPRA_EMAP_SHIFT                   (11U)
#define GRF_MEM_CON5_VOP_DPRA_EMAP_MASK                    (0x1U << GRF_MEM_CON5_VOP_DPRA_EMAP_SHIFT)                   /* 0x00000800 */
/* MEM_CON6 */
#define GRF_MEM_CON6_OFFSET                                (0x318)
#define GRF_MEM_CON6_ACODEC_SP_EMA_SHIFT                   (0U)
#define GRF_MEM_CON6_ACODEC_SP_EMA_MASK                    (0x7U << GRF_MEM_CON6_ACODEC_SP_EMA_SHIFT)                   /* 0x00000007 */
#define GRF_MEM_CON6_ACODEC_SP_EMAW_SHIFT                  (3U)
#define GRF_MEM_CON6_ACODEC_SP_EMAW_MASK                   (0x3U << GRF_MEM_CON6_ACODEC_SP_EMAW_SHIFT)                  /* 0x00000018 */
/* DMAC_CON0 */
#define GRF_DMAC_CON0_OFFSET                               (0x380)
/* DMAC_CON1 */
#define GRF_DMAC_CON1_OFFSET                               (0x384)
/* DMAC_CON2 */
#define GRF_DMAC_CON2_OFFSET                               (0x388)
/* DMAC_CON3 */
#define GRF_DMAC_CON3_OFFSET                               (0x38C)
/* DMAC_CON4 */
#define GRF_DMAC_CON4_OFFSET                               (0x390)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0TX_SHIFT (0U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0TX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0TX_SHIFT) /* 0x00000001 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0RX_SHIFT (1U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0RX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART0RX_SHIFT) /* 0x00000002 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1TX_SHIFT (2U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1TX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1TX_SHIFT) /* 0x00000004 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1RX_SHIFT (3U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1RX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_UART1RX_SHIFT) /* 0x00000008 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2STX_SHIFT (6U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2STX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2STX_SHIFT) /* 0x00000040 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2SRX_SHIFT (7U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2SRX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_I2SRX_SHIFT) /* 0x00000080 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_PDM_SHIFT (10U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_PDM_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_PDM_SHIFT) /* 0x00000400 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1TX_SHIFT (11U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1TX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1TX_SHIFT) /* 0x00000800 */
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1RX_SHIFT (12U)
#define GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1RX_MASK (0x1U << GRF_DMAC_CON4_GRF_CON_DMAC_REQ_MODIFY_DIS_SPI1RX_SHIFT) /* 0x00001000 */
/* DMAC_CON5 */
#define GRF_DMAC_CON5_OFFSET                               (0x394)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_TX_SHIFT       (0U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_TX_MASK        (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_TX_SHIFT)       /* 0x00000003 */
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_RX_SHIFT       (2U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_RX_MASK        (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART0_RX_SHIFT)       /* 0x0000000C */
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_TX_SHIFT       (4U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_TX_MASK        (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_TX_SHIFT)       /* 0x00000030 */
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_RX_SHIFT       (6U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_RX_MASK        (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_UART1_RX_SHIFT)       /* 0x000000C0 */
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_TX_SHIFT         (12U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_TX_MASK          (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_TX_SHIFT)         /* 0x00003000 */
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_RX_SHIFT         (14U)
#define GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_RX_MASK          (0x3U << GRF_DMAC_CON5_GRF_DRTYPE_DMAC_I2S_RX_SHIFT)         /* 0x0000C000 */
/* DMAC_CON6 */
#define GRF_DMAC_CON6_OFFSET                               (0x398)
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_PDM_SHIFT            (4U)
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_PDM_MASK             (0x3U << GRF_DMAC_CON6_GRF_DRTYPE_DMAC_PDM_SHIFT)            /* 0x00000030 */
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_TX_SHIFT        (6U)
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_TX_MASK         (0x3U << GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_TX_SHIFT)        /* 0x000000C0 */
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_RX_SHIFT        (8U)
#define GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_RX_MASK         (0x3U << GRF_DMAC_CON6_GRF_DRTYPE_DMAC_SPI1_RX_SHIFT)        /* 0x00000300 */
/* FAST_BOOT_EN */
#define GRF_FAST_BOOT_EN_OFFSET                            (0x3C0)
#define GRF_FAST_BOOT_EN_GRF_CON_FAST_BOOT_EN_SHIFT        (0U)
#define GRF_FAST_BOOT_EN_GRF_CON_FAST_BOOT_EN_MASK         (0x1U << GRF_FAST_BOOT_EN_GRF_CON_FAST_BOOT_EN_SHIFT)        /* 0x00000001 */
/* FAST_BOOT_ADDR */
#define GRF_FAST_BOOT_ADDR_OFFSET                          (0x3C4)
#define GRF_FAST_BOOT_ADDR_GRF_CON_FAST_BOOT_ADDR_SHIFT    (0U)
#define GRF_FAST_BOOT_ADDR_GRF_CON_FAST_BOOT_ADDR_MASK     (0xFFFFFFFFU << GRF_FAST_BOOT_ADDR_GRF_CON_FAST_BOOT_ADDR_SHIFT) /* 0xFFFFFFFF */
/* OS_REG0 */
#define GRF_OS_REG0_OFFSET                                 (0x400)
#define GRF_OS_REG0_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG0_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG0_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG1 */
#define GRF_OS_REG1_OFFSET                                 (0x404)
#define GRF_OS_REG1_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG1_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG1_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG2 */
#define GRF_OS_REG2_OFFSET                                 (0x408)
#define GRF_OS_REG2_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG2_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG2_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG3 */
#define GRF_OS_REG3_OFFSET                                 (0x40C)
#define GRF_OS_REG3_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG3_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG3_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG4 */
#define GRF_OS_REG4_OFFSET                                 (0x410)
#define GRF_OS_REG4_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG4_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG4_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG5 */
#define GRF_OS_REG5_OFFSET                                 (0x414)
#define GRF_OS_REG5_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG5_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG5_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG6 */
#define GRF_OS_REG6_OFFSET                                 (0x418)
#define GRF_OS_REG6_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG6_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG6_OS_REG_SHIFT)                    /* 0xFFFFFFFF */
/* OS_REG7 */
#define GRF_OS_REG7_OFFSET                                 (0x41C)
#define GRF_OS_REG7_OS_REG_SHIFT                           (0U)
#define GRF_OS_REG7_OS_REG_MASK                            (0xFFFFFFFFU << GRF_OS_REG7_OS_REG_SHIFT)                    /* 0xFFFFFFFF */

#define GPIO_VER_ID                                        (0x01000C2BU)
/******************************************MBOX******************************************/
/* A2B_INTEN */
#define MBOX_A2B_INTEN_INT0_SHIFT                          (0U)
#define MBOX_A2B_INTEN_INT0_MASK                           (0x1U << MBOX_A2B_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_A2B_INTEN_INT1_SHIFT                          (1U)
#define MBOX_A2B_INTEN_INT1_MASK                           (0x1U << MBOX_A2B_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_A2B_INTEN_INT2_SHIFT                          (2U)
#define MBOX_A2B_INTEN_INT2_MASK                           (0x1U << MBOX_A2B_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_A2B_INTEN_INT3_SHIFT                          (3U)
#define MBOX_A2B_INTEN_INT3_MASK                           (0x1U << MBOX_A2B_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* A2B_STATUS */
#define MBOX_A2B_STATUS_INT0_SHIFT                         (0U)
#define MBOX_A2B_STATUS_INT0_MASK                          (0x1U << MBOX_A2B_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_A2B_STATUS_INT1_SHIFT                         (1U)
#define MBOX_A2B_STATUS_INT1_MASK                          (0x1U << MBOX_A2B_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_A2B_STATUS_INT2_SHIFT                         (2U)
#define MBOX_A2B_STATUS_INT2_MASK                          (0x1U << MBOX_A2B_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_A2B_STATUS_INT3_SHIFT                         (3U)
#define MBOX_A2B_STATUS_INT3_MASK                          (0x1U << MBOX_A2B_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* A2B_CMD_0 */
#define MBOX_A2B_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_0 */
#define MBOX_A2B_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_1 */
#define MBOX_A2B_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_1 */
#define MBOX_A2B_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_2 */
#define MBOX_A2B_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_2 */
#define MBOX_A2B_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_3 */
#define MBOX_A2B_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_3 */
#define MBOX_A2B_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_INTEN */
#define MBOX_B2A_INTEN_INT0_SHIFT                          (0U)
#define MBOX_B2A_INTEN_INT0_MASK                           (0x1U << MBOX_B2A_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_B2A_INTEN_INT1_SHIFT                          (1U)
#define MBOX_B2A_INTEN_INT1_MASK                           (0x1U << MBOX_B2A_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_B2A_INTEN_INT2_SHIFT                          (2U)
#define MBOX_B2A_INTEN_INT2_MASK                           (0x1U << MBOX_B2A_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_B2A_INTEN_INT3_SHIFT                          (3U)
#define MBOX_B2A_INTEN_INT3_MASK                           (0x1U << MBOX_B2A_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* B2A_STATUS */
#define MBOX_B2A_STATUS_INT0_SHIFT                         (0U)
#define MBOX_B2A_STATUS_INT0_MASK                          (0x1U << MBOX_B2A_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_B2A_STATUS_INT1_SHIFT                         (1U)
#define MBOX_B2A_STATUS_INT1_MASK                          (0x1U << MBOX_B2A_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_B2A_STATUS_INT2_SHIFT                         (2U)
#define MBOX_B2A_STATUS_INT2_MASK                          (0x1U << MBOX_B2A_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_B2A_STATUS_INT3_SHIFT                         (3U)
#define MBOX_B2A_STATUS_INT3_MASK                          (0x1U << MBOX_B2A_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* B2A_CMD_0 */
#define MBOX_B2A_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_0 */
#define MBOX_B2A_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_1 */
#define MBOX_B2A_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_1 */
#define MBOX_B2A_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_2 */
#define MBOX_B2A_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_2 */
#define MBOX_B2A_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_3 */
#define MBOX_B2A_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_3 */
#define MBOX_B2A_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* ATOMIC_LOCK_00 */
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_MASK            (0x1U << MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_01 */
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_MASK            (0x1U << MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_02 */
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_MASK            (0x1U << MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_03 */
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_MASK            (0x1U << MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_04 */
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_MASK            (0x1U << MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_05 */
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_MASK            (0x1U << MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_06 */
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_MASK            (0x1U << MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_07 */
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_MASK            (0x1U << MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_08 */
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_MASK            (0x1U << MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_09 */
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_MASK            (0x1U << MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_10 */
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_MASK            (0x1U << MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_11 */
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_MASK            (0x1U << MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_12 */
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_MASK            (0x1U << MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_13 */
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_MASK            (0x1U << MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_14 */
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_MASK            (0x1U << MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_15 */
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_MASK            (0x1U << MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_16 */
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_MASK            (0x1U << MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_17 */
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_MASK            (0x1U << MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_18 */
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_MASK            (0x1U << MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_19 */
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_MASK            (0x1U << MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_20 */
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_MASK            (0x1U << MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_21 */
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_MASK            (0x1U << MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_22 */
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_MASK            (0x1U << MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_23 */
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_MASK            (0x1U << MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_24 */
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_MASK            (0x1U << MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_25 */
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_MASK            (0x1U << MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_26 */
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_MASK            (0x1U << MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_27 */
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_MASK            (0x1U << MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_28 */
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_MASK            (0x1U << MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_29 */
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_MASK            (0x1U << MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_30 */
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_MASK            (0x1U << MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_31 */
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_MASK            (0x1U << MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT)           /* 0x00000001 */
/******************************************PMU*******************************************/
/* WAKEUP_CFG0 */
#define PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG0_GPIO0D_POSEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG0_GPIO1B_POSEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG1 */
#define PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG1_GPIO0D_NEGEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG1_GPIO1B_NEGEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG2 */
#define PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG2_GPIO0D_POSEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG2_GPIO1B_POSEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG3 */
#define PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_SHIFT            (0U)
#define PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG3_GPIO0D_NEGEDGE_EN_SHIFT)           /* 0x000000FF */
#define PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_SHIFT            (8U)
#define PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_MASK             (0xFFU << PMU_WAKEUP_CFG3_GPIO1B_NEGEDGE_EN_SHIFT)           /* 0x0000FF00 */
/* WAKEUP_CFG6 */
#define PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_SHIFT        (0U)
#define PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_MASK         (0x1U << PMU_WAKEUP_CFG6_PWRMODE_INT_WAKEUP_EN_SHIFT)        /* 0x00000001 */
#define PMU_WAKEUP_CFG6_GPIO_INT_EN_SHIFT                  (1U)
#define PMU_WAKEUP_CFG6_GPIO_INT_EN_MASK                   (0x1U << PMU_WAKEUP_CFG6_GPIO_INT_EN_SHIFT)                  /* 0x00000002 */
#define PMU_WAKEUP_CFG6_TIMEOUT_EN_SHIFT                   (2U)
#define PMU_WAKEUP_CFG6_TIMEOUT_EN_MASK                    (0x1U << PMU_WAKEUP_CFG6_TIMEOUT_EN_SHIFT)                   /* 0x00000004 */
#define PMU_WAKEUP_CFG6_TIMER_EN_SHIFT                     (3U)
#define PMU_WAKEUP_CFG6_TIMER_EN_MASK                      (0x1U << PMU_WAKEUP_CFG6_TIMER_EN_SHIFT)                     /* 0x00000008 */
#define PMU_WAKEUP_CFG6_VAD_EN_SHIFT                       (4U)
#define PMU_WAKEUP_CFG6_VAD_EN_MASK                        (0x1U << PMU_WAKEUP_CFG6_VAD_EN_SHIFT)                       /* 0x00000010 */
#define PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_SHIFT       (5U)
#define PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_MASK        (0x1U << PMU_WAKEUP_CFG6_PWRMODE_WAKEUP_SFT_INT_SHIFT)       /* 0x00000020 */
/* PWRDN_CON */
#define PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_SHIFT               (0U)
#define PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_MASK                (0x1U << PMU_PWRDN_CON_PD_DSP_PWRDWN_EN_SHIFT)               /* 0x00000001 */
#define PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_SHIFT             (1U)
#define PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_MASK              (0x1U << PMU_PWRDN_CON_PD_LOGIC_PWRDWN_EN_SHIFT)             /* 0x00000002 */
#define PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_SHIFT              (2U)
#define PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_MASK               (0x1U << PMU_PWRDN_CON_PD_SHRM_PWRDWN_EN_SHIFT)              /* 0x00000004 */
#define PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_SHIFT             (3U)
#define PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_MASK              (0x1U << PMU_PWRDN_CON_PD_AUDIO_PWRDWN_EN_SHIFT)             /* 0x00000008 */
/* PWRDN_ST */
#define PMU_PWRDN_ST_PD_DSP_PWR_STAT_SHIFT                 (0U)
#define PMU_PWRDN_ST_PD_DSP_PWR_STAT_MASK                  (0x1U << PMU_PWRDN_ST_PD_DSP_PWR_STAT_SHIFT)                 /* 0x00000001 */
#define PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_SHIFT               (1U)
#define PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_MASK                (0x1U << PMU_PWRDN_ST_PD_LOGIC_PWR_STAT_SHIFT)               /* 0x00000002 */
#define PMU_PWRDN_ST_PD_SHRM_PWR_STAT_SHIFT                (2U)
#define PMU_PWRDN_ST_PD_SHRM_PWR_STAT_MASK                 (0x1U << PMU_PWRDN_ST_PD_SHRM_PWR_STAT_SHIFT)                /* 0x00000004 */
#define PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_SHIFT               (3U)
#define PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_MASK                (0x1U << PMU_PWRDN_ST_PD_AUDIO_PWR_STAT_SHIFT)               /* 0x00000008 */
#define PMU_PWRDN_ST_SHAREMEM_PWR_STAT_SHIFT               (4U)
#define PMU_PWRDN_ST_SHAREMEM_PWR_STAT_MASK                (0xFU << PMU_PWRDN_ST_SHAREMEM_PWR_STAT_SHIFT)               /* 0x000000F0 */
/* PLL_CON */
#define PMU_PLL_CON_PLL_PD_CFG_SHIFT                       (0U)
#define PMU_PLL_CON_PLL_PD_CFG_MASK                        (0x7U << PMU_PLL_CON_PLL_PD_CFG_SHIFT)                       /* 0x00000007 */
#define PMU_PLL_CON_SFT_PLL_PD_SHIFT                       (3U)
#define PMU_PLL_CON_SFT_PLL_PD_MASK                        (0x7U << PMU_PLL_CON_SFT_PLL_PD_SHIFT)                       /* 0x00000038 */
/* PWRMODE_CON */
#define PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT                (0U)
#define PMU_PWRMODE_CON_POWER_MODE_EN_MASK                 (0x1U << PMU_PWRMODE_CON_POWER_MODE_EN_SHIFT)                /* 0x00000001 */
#define PMU_PWRMODE_CON_PMU_USE_LF_SHIFT                   (2U)
#define PMU_PWRMODE_CON_PMU_USE_LF_MASK                    (0x1U << PMU_PWRMODE_CON_PMU_USE_LF_SHIFT)                   /* 0x00000004 */
#define PMU_PWRMODE_CON_PLL_PD_EN_SHIFT                    (3U)
#define PMU_PWRMODE_CON_PLL_PD_EN_MASK                     (0x1U << PMU_PWRMODE_CON_PLL_PD_EN_SHIFT)                    /* 0x00000008 */
#define PMU_PWRMODE_CON_LOGIC_PD_EN_SHIFT                  (4U)
#define PMU_PWRMODE_CON_LOGIC_PD_EN_MASK                   (0x1U << PMU_PWRMODE_CON_LOGIC_PD_EN_SHIFT)                  /* 0x00000010 */
#define PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_SHIFT           (5U)
#define PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_MASK            (0x1U << PMU_PWRMODE_CON_PWRMODE_LDO_ADJ_EN_SHIFT)           /* 0x00000020 */
#define PMU_PWRMODE_CON_BYPASS_PLL_LOCK_SHIFT              (6U)
#define PMU_PWRMODE_CON_BYPASS_PLL_LOCK_MASK               (0x1U << PMU_PWRMODE_CON_BYPASS_PLL_LOCK_SHIFT)              /* 0x00000040 */
#define PMU_PWRMODE_CON_BYPASS_HF_EN_SHIFT                 (7U)
#define PMU_PWRMODE_CON_BYPASS_HF_EN_MASK                  (0x1U << PMU_PWRMODE_CON_BYPASS_HF_EN_SHIFT)                 /* 0x00000080 */
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_SHIFT       (8U)
#define PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_MASK        (0x1U << PMU_PWRMODE_CON_GLOBAL_INT_DISABLE_CFG_SHIFT)       /* 0x00000100 */
#define PMU_PWRMODE_CON_SHRM_PD_EN_SHIFT                   (9U)
#define PMU_PWRMODE_CON_SHRM_PD_EN_MASK                    (0x1U << PMU_PWRMODE_CON_SHRM_PD_EN_SHIFT)                   /* 0x00000200 */
#define PMU_PWRMODE_CON_SHRM_MEM_RETPD_EN_SHIFT            (10U)
#define PMU_PWRMODE_CON_SHRM_MEM_RETPD_EN_MASK             (0x1U << PMU_PWRMODE_CON_SHRM_MEM_RETPD_EN_SHIFT)            /* 0x00000400 */
#define PMU_PWRMODE_CON_PLLPD_WAIT_EN_SHIFT                (11U)
#define PMU_PWRMODE_CON_PLLPD_WAIT_EN_MASK                 (0x1U << PMU_PWRMODE_CON_PLLPD_WAIT_EN_SHIFT)                /* 0x00000800 */
/* SFT_CON */
#define PMU_SFT_CON_PMU_LF_ENA_CFG_SHIFT                   (1U)
#define PMU_SFT_CON_PMU_LF_ENA_CFG_MASK                    (0x1U << PMU_SFT_CON_PMU_LF_ENA_CFG_SHIFT)                   /* 0x00000002 */
#define PMU_SFT_CON_PMU_LF_MODE_CFG_SHIFT                  (2U)
#define PMU_SFT_CON_PMU_LF_MODE_CFG_MASK                   (0x1U << PMU_SFT_CON_PMU_LF_MODE_CFG_SHIFT)                  /* 0x00000004 */
#define PMU_SFT_CON_PWRMODE_EN_SFT_SHIFT                   (3U)
#define PMU_SFT_CON_PWRMODE_EN_SFT_MASK                    (0x1U << PMU_SFT_CON_PWRMODE_EN_SFT_SHIFT)                   /* 0x00000008 */
/* LDO_CON0 */
#define PMU_LDO_CON0_LDO_AUDIO_EN_SHIFT                    (1U)
#define PMU_LDO_CON0_LDO_AUDIO_EN_MASK                     (0x1U << PMU_LDO_CON0_LDO_AUDIO_EN_SHIFT)                    /* 0x00000002 */
#define PMU_LDO_CON0_LDO_AUDIO_SFT_SHIFT                   (2U)
#define PMU_LDO_CON0_LDO_AUDIO_SFT_MASK                    (0x3U << PMU_LDO_CON0_LDO_AUDIO_SFT_SHIFT)                   /* 0x0000000C */
#define PMU_LDO_CON0_LDO_BGADJ_SHIFT                       (4U)
#define PMU_LDO_CON0_LDO_BGADJ_MASK                        (0x7U << PMU_LDO_CON0_LDO_BGADJ_SHIFT)                       /* 0x00000070 */
#define PMU_LDO_CON0_LDO_REFADJ_SHIFT                      (8U)
#define PMU_LDO_CON0_LDO_REFADJ_MASK                       (0xFU << PMU_LDO_CON0_LDO_REFADJ_SHIFT)                      /* 0x00000F00 */
/* LDO_CON1 */
#define PMU_LDO_CON1_MCU_LDOCORE_SFT_SHIFT                 (0U)
#define PMU_LDO_CON1_MCU_LDOCORE_SFT_MASK                  (0x7U << PMU_LDO_CON1_MCU_LDOCORE_SFT_SHIFT)                 /* 0x00000007 */
#define PMU_LDO_CON1_PWRMODE_LDOCORE_ADJ_SHIFT             (4U)
#define PMU_LDO_CON1_PWRMODE_LDOCORE_ADJ_MASK              (0x7U << PMU_LDO_CON1_PWRMODE_LDOCORE_ADJ_SHIFT)             /* 0x00000070 */
#define PMU_LDO_CON1_MCU_LDOMIPI_SFT_SHIFT                 (8U)
#define PMU_LDO_CON1_MCU_LDOMIPI_SFT_MASK                  (0x7U << PMU_LDO_CON1_MCU_LDOMIPI_SFT_SHIFT)                 /* 0x00000700 */
#define PMU_LDO_CON1_PWRMODE_LDOMIPI_ADJ_SHIFT             (12U)
#define PMU_LDO_CON1_PWRMODE_LDOMIPI_ADJ_MASK              (0x7U << PMU_LDO_CON1_PWRMODE_LDOMIPI_ADJ_SHIFT)             /* 0x00007000 */
/* LDO_CON2 */
#define PMU_LDO_CON2_DSP_LDOCORE_SFT_SHIFT                 (0U)
#define PMU_LDO_CON2_DSP_LDOCORE_SFT_MASK                  (0x7U << PMU_LDO_CON2_DSP_LDOCORE_SFT_SHIFT)                 /* 0x00000007 */
#define PMU_LDO_CON2_DSPAPM_LDOCORE_ADJ_SHIFT              (4U)
#define PMU_LDO_CON2_DSPAPM_LDOCORE_ADJ_MASK               (0x7U << PMU_LDO_CON2_DSPAPM_LDOCORE_ADJ_SHIFT)              /* 0x00000070 */
#define PMU_LDO_CON2_DSP_LDOMIPI_SFT_SHIFT                 (8U)
#define PMU_LDO_CON2_DSP_LDOMIPI_SFT_MASK                  (0x7U << PMU_LDO_CON2_DSP_LDOMIPI_SFT_SHIFT)                 /* 0x00000700 */
#define PMU_LDO_CON2_DSPAPM_LDOMIPI_ADJ_SHIFT              (12U)
#define PMU_LDO_CON2_DSPAPM_LDOMIPI_ADJ_MASK               (0x7U << PMU_LDO_CON2_DSPAPM_LDOMIPI_ADJ_SHIFT)              /* 0x00007000 */
/* LDO_STAT */
#define PMU_LDO_STAT_LDO_CORE_ADJ_SHIFT                    (0U)
#define PMU_LDO_STAT_LDO_CORE_ADJ_MASK                     (0x7U << PMU_LDO_STAT_LDO_CORE_ADJ_SHIFT)                    /* 0x00000007 */
#define PMU_LDO_STAT_LDO_MIPI_ADJ_SHIFT                    (4U)
#define PMU_LDO_STAT_LDO_MIPI_ADJ_MASK                     (0x7U << PMU_LDO_STAT_LDO_MIPI_ADJ_SHIFT)                    /* 0x00000070 */
/* INT_CON */
#define PMU_INT_CON_PMU_INT_EN_SHIFT                       (0U)
#define PMU_INT_CON_PMU_INT_EN_MASK                        (0x1U << PMU_INT_CON_PMU_INT_EN_SHIFT)                       /* 0x00000001 */
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT            (1U)
#define PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_MASK             (0x1U << PMU_INT_CON_PWRMODE_WAKEUP_INT_EN_SHIFT)            /* 0x00000002 */
#define PMU_INT_CON_DSP_WAKEUP_INT_EN_SHIFT                (2U)
#define PMU_INT_CON_DSP_WAKEUP_INT_EN_MASK                 (0x1U << PMU_INT_CON_DSP_WAKEUP_INT_EN_SHIFT)                /* 0x00000004 */
/* INT_ST */
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT             (0U)
#define PMU_INT_ST_PWRMODE_WAKEUP_STATUS_MASK              (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_STATUS_SHIFT)             /* 0x00000001 */
#define PMU_INT_ST_DSP_WAKEUP_STATUS_SHIFT                 (1U)
#define PMU_INT_ST_DSP_WAKEUP_STATUS_MASK                  (0x1U << PMU_INT_ST_DSP_WAKEUP_STATUS_SHIFT)                 /* 0x00000002 */
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_SHIFT    (2U)
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_MASK     (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_GPIO_POS_STATUS_SHIFT)    /* 0x00000004 */
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_SHIFT    (3U)
#define PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_MASK     (0x1U << PMU_INT_ST_PWRMODE_WAKEUP_GPIO_NEG_STATUS_SHIFT)    /* 0x00000008 */
#define PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_SHIFT        (4U)
#define PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_MASK         (0x1U << PMU_INT_ST_DSP_WAKEUP_GPIO_POS_STATUS_SHIFT)        /* 0x00000010 */
#define PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_SHIFT        (5U)
#define PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_MASK         (0x1U << PMU_INT_ST_DSP_WAKEUP_GPIO_NEG_STATUS_SHIFT)        /* 0x00000020 */
/* PWRMODE_GPIO_POS_INT_CON */
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_SHIFT (0U)
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO0D_POS_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_SHIFT (8U)
#define PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_CON_PWRMODE_GPIO1B_POS_INT_EN_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_NEG_INT_CON */
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_SHIFT (0U)
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO0D_NEG_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_SHIFT (8U)
#define PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_CON_PWRMODE_GPIO1B_NEG_INT_EN_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_POS_INT_CON */
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_SHIFT (0U)
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO0D_POS_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_SHIFT (8U)
#define PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_CON_DSP_GPIO1B_POS_INT_EN_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_NEG_INT_CON */
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_SHIFT (0U)
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO0D_NEG_INT_EN_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_SHIFT (8U)
#define PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_CON_DSP_GPIO1B_NEG_INT_EN_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_POS_INT_ST */
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_SHIFT (0U)
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO0D_POS_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_SHIFT (8U)
#define PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_POS_INT_ST_PWRMODE_GPIO1B_POS_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* PWRMODE_GPIO_NEG_INT_ST */
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_SHIFT (0U)
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO0D_NEG_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_SHIFT (8U)
#define PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_MASK (0xFFU << PMU_PWRMODE_GPIO_NEG_INT_ST_PWRMODE_GPIO1B_NEG_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_POS_INT_ST */
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_SHIFT (0U)
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO0D_POS_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_SHIFT (8U)
#define PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_POS_INT_ST_DSP_GPIO1B_POS_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* DSP_GPIO_NEG_INT_ST */
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_SHIFT (0U)
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO0D_NEG_INT_STATUS_SHIFT) /* 0x000000FF */
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_SHIFT (8U)
#define PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_MASK (0xFFU << PMU_DSP_GPIO_NEG_INT_ST_DSP_GPIO1B_NEG_INT_STATUS_SHIFT) /* 0x0000FF00 */
/* PWRDN_INTEN */
#define PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_SHIFT     (0U)
#define PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_MASK      (0x1U << PMU_PWRDN_INTEN_PD_DSP_PWR_SWITCH_INT_EN_SHIFT)     /* 0x00000001 */
#define PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_SHIFT   (1U)
#define PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_MASK    (0x1U << PMU_PWRDN_INTEN_PD_LOGIC_PWR_SWITCH_INT_EN_SHIFT)   /* 0x00000002 */
#define PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_SHIFT    (2U)
#define PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_MASK     (0x1U << PMU_PWRDN_INTEN_PD_SHRM_PWR_SWITCH_INT_EN_SHIFT)    /* 0x00000004 */
#define PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_SHIFT   (3U)
#define PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_MASK    (0x1U << PMU_PWRDN_INTEN_PD_AUDIO_PWR_SWITCH_INT_EN_SHIFT)   /* 0x00000008 */
/* PWRDN_INT_STATUS */
#define PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_SHIFT           (0U)
#define PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_MASK            (0x1U << PMU_PWRDN_INT_STATUS_PD_DSP_PD_SWT_SHIFT)           /* 0x00000001 */
#define PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_SHIFT         (1U)
#define PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_MASK          (0x1U << PMU_PWRDN_INT_STATUS_PD_LOGIC_PD_SWT_SHIFT)         /* 0x00000002 */
#define PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_SHIFT          (2U)
#define PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_MASK           (0x1U << PMU_PWRDN_INT_STATUS_PD_SHRM_PD_SWT_SHIFT)          /* 0x00000004 */
#define PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_SHIFT         (3U)
#define PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_MASK          (0x1U << PMU_PWRDN_INT_STATUS_PD_AUDIO_PD_SWT_SHIFT)         /* 0x00000008 */
/* WAKEUP_STATUS */
#define PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_SHIFT  (0U)
#define PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_WAKEUP_PWRMODE_INT_STATUS_SHIFT)  /* 0x00000001 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_SHIFT (1U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_GPIO_INT_STATUS_SHIFT) /* 0x00000002 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_SHIFT (2U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMEOUT_STATUS_SHIFT) /* 0x00000004 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_SHIFT (3U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_DSP_SFT_STATUS_SHIFT) /* 0x00000008 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_SHIFT (4U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_MASK (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_TIMER_STATUS_SHIFT) /* 0x00000010 */
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_SHIFT  (5U)
#define PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_PWRMODE_WAKEUP_VAD_STATUS_SHIFT)  /* 0x00000020 */
#define PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_SHIFT      (6U)
#define PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_WAKEUP_DSP_INT_STATUS_SHIFT)      /* 0x00000040 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_SHIFT (7U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_MASK  (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_GPIO_INT_STATUS_SHIFT) /* 0x00000080 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_SHIFT  (8U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_MASK   (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMEOUT_STATUS_SHIFT)  /* 0x00000100 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_SHIFT      (9U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_SFT_STATUS_SHIFT)      /* 0x00000200 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_SHIFT    (10U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_MASK     (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_TIMER_STATUS_SHIFT)    /* 0x00000400 */
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_SHIFT      (11U)
#define PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_MASK       (0x1U << PMU_WAKEUP_STATUS_DSP_WAKEUP_VAD_STATUS_SHIFT)      /* 0x00000800 */
/* BUS_CLR */
#define PMU_BUS_CLR_CLR_DSP_SHIFT                          (0U)
#define PMU_BUS_CLR_CLR_DSP_MASK                           (0x1U << PMU_BUS_CLR_CLR_DSP_SHIFT)                          /* 0x00000001 */
#define PMU_BUS_CLR_CLR_LOGIC_SHIFT                        (1U)
#define PMU_BUS_CLR_CLR_LOGIC_MASK                         (0x1U << PMU_BUS_CLR_CLR_LOGIC_SHIFT)                        /* 0x00000002 */
#define PMU_BUS_CLR_CLR_SHRM_SHIFT                         (2U)
#define PMU_BUS_CLR_CLR_SHRM_MASK                          (0x1U << PMU_BUS_CLR_CLR_SHRM_SHIFT)                         /* 0x00000004 */
#define PMU_BUS_CLR_CLR_AUDIO_SHIFT                        (3U)
#define PMU_BUS_CLR_CLR_AUDIO_MASK                         (0x1U << PMU_BUS_CLR_CLR_AUDIO_SHIFT)                        /* 0x00000008 */
/* BUS_IDLE_REQ */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_SHIFT                (0U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_MASK                 (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_DSP_SHIFT)                /* 0x00000001 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_SHIFT              (1U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_MASK               (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_LOGIC_SHIFT)              /* 0x00000002 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_SHIFT               (2U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_MASK                (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_SHRM_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_SHIFT              (3U)
#define PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_MASK               (0x1U << PMU_BUS_IDLE_REQ_IDLE_REQ_AUDIO_SHIFT)              /* 0x00000008 */
/* BUS_IDLE_ST */
#define PMU_BUS_IDLE_ST_IDLE_DSP_SHIFT                     (0U)
#define PMU_BUS_IDLE_ST_IDLE_DSP_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_DSP_SHIFT)                     /* 0x00000001 */
#define PMU_BUS_IDLE_ST_IDLE_LOGIC_SHIFT                   (1U)
#define PMU_BUS_IDLE_ST_IDLE_LOGIC_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_LOGIC_SHIFT)                   /* 0x00000002 */
#define PMU_BUS_IDLE_ST_IDLE_SHRM_SHIFT                    (2U)
#define PMU_BUS_IDLE_ST_IDLE_SHRM_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_SHRM_SHIFT)                    /* 0x00000004 */
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT                   (3U)
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT)                   /* 0x00000008 */
/* BUS_IDLE_ACK */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_SHIFT                (0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_DSP_SHIFT)                /* 0x00000001 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_SHIFT              (1U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_LOGIC_SHIFT)              /* 0x00000002 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_SHIFT               (2U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_SHRM_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT              (3U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT)              /* 0x00000008 */
/* POWER_ST */
#define PMU_POWER_ST_PWRMODE_POWER_STATE_SHIFT             (0U)
#define PMU_POWER_ST_PWRMODE_POWER_STATE_MASK              (0x1FU << PMU_POWER_ST_PWRMODE_POWER_STATE_SHIFT)            /* 0x0000001F */
#define PMU_POWER_ST_DSP_POWER_STATE_SHIFT                 (5U)
#define PMU_POWER_ST_DSP_POWER_STATE_MASK                  (0xFU << PMU_POWER_ST_DSP_POWER_STATE_SHIFT)                 /* 0x000001E0 */
/* CORE_PWR_ST */
#define PMU_CORE_PWR_ST_STANDBYWFI_CM4_SHIFT               (0U)
#define PMU_CORE_PWR_ST_STANDBYWFI_CM4_MASK                (0x1U << PMU_CORE_PWR_ST_STANDBYWFI_CM4_SHIFT)               /* 0x00000001 */
#define PMU_CORE_PWR_ST_STANDBYWFI_DSP_SHIFT               (1U)
#define PMU_CORE_PWR_ST_STANDBYWFI_DSP_MASK                (0x1U << PMU_CORE_PWR_ST_STANDBYWFI_DSP_SHIFT)               /* 0x00000002 */
/* PLLLOCK_CNT */
#define PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_SHIFT              (0U)
#define PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_MASK               (0xFFFFFU << PMU_PLLLOCK_CNT_PMU_PLLLOCK_CNT_SHIFT)          /* 0x000FFFFF */
/* PWRMODE_TIMEOUT_CNT */
#define PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_SHIFT (0U)
#define PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_MASK (0xFFFFFFFFU << PMU_PWRMODE_TIMEOUT_CNT_PWRMODE_TIMEOUT_COUNT_SHIFT) /* 0xFFFFFFFF */
/* NOC_AUTO_ENA */
#define PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_SHIFT          (0U)
#define PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_MASK           (0x1U << PMU_NOC_AUTO_ENA_DSP_GATING_DISABLE_SHIFT)          /* 0x00000001 */
#define PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_SHIFT        (1U)
#define PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_MASK         (0x1U << PMU_NOC_AUTO_ENA_LOGIC_GATING_DISABLE_SHIFT)        /* 0x00000002 */
#define PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_SHIFT         (2U)
#define PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_MASK          (0x1U << PMU_NOC_AUTO_ENA_SHRM_GATING_DISABLE_SHIFT)         /* 0x00000004 */
#define PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_SHIFT        (3U)
#define PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_MASK         (0x1U << PMU_NOC_AUTO_ENA_AUDIO_GATING_DISABLE_SHIFT)        /* 0x00000008 */
/* DSPAPM_CON */
#define PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_SHIFT           (0U)
#define PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_MASK            (0x1U << PMU_DSPAPM_CON_PD_DSP_WFI_PWRDN_EN_SHIFT)           /* 0x00000001 */
#define PMU_DSPAPM_CON_PD_DSP_IDLE_EN_SHIFT                (1U)
#define PMU_DSPAPM_CON_PD_DSP_IDLE_EN_MASK                 (0x1U << PMU_DSPAPM_CON_PD_DSP_IDLE_EN_SHIFT)                /* 0x00000002 */
#define PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_SHIFT             (2U)
#define PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_MASK              (0x1U << PMU_DSPAPM_CON_PD_DSP_LDO_ADJ_EN_SHIFT)             /* 0x00000004 */
#define PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_SHIFT    (3U)
#define PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_MASK     (0x1U << PMU_DSPAPM_CON_GLOBAL_INT_DISABLE_DSP_CFG_SHIFT)    /* 0x00000008 */
#define PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_SHIFT          (4U)
#define PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_MASK           (0x1U << PMU_DSPAPM_CON_PD_DSP_INT_WAKEUP_EN_SHIFT)          /* 0x00000010 */
#define PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_SHIFT     (5U)
#define PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_MASK      (0x1U << PMU_DSPAPM_CON_PD_DSP_GPIO_INT_WAKEUP_EN_SHIFT)     /* 0x00000020 */
#define PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_SHIFT      (6U)
#define PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_MASK       (0x1U << PMU_DSPAPM_CON_PD_DSP_TIMEOUT_WAKEUP_EN_SHIFT)      /* 0x00000040 */
#define PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_SHIFT        (7U)
#define PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_MASK         (0x1U << PMU_DSPAPM_CON_PD_DSP_TIMER_WAKEUP_EN_SHIFT)        /* 0x00000080 */
#define PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_SHIFT          (8U)
#define PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_MASK           (0x1U << PMU_DSPAPM_CON_PD_DSP_VAD_WAKEUP_EN_SHIFT)          /* 0x00000100 */
#define PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_SHIFT             (9U)
#define PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_MASK              (0x1U << PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_SHIFT)             /* 0x00000200 */
#define PMU_DSPAPM_CON_PD_DSP_TCM_RETPD_EN_SHIFT           (10U)
#define PMU_DSPAPM_CON_PD_DSP_TCM_RETPD_EN_MASK            (0x1U << PMU_DSPAPM_CON_PD_DSP_TCM_RETPD_EN_SHIFT)           /* 0x00000400 */
/* DSP_LDO_ADJ_CNT */
#define PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_SHIFT          (0U)
#define PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_MASK           (0xFFFFFU << PMU_DSP_LDO_ADJ_CNT_DSP_LDO_ADJ_CNT_SHIFT)      /* 0x000FFFFF */
/* DSP_TIMEOUT_CNT */
#define PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_SHIFT        (0U)
#define PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_MASK         (0xFFFFFFFFU << PMU_DSP_TIMEOUT_CNT_DSP_TIMEOUT_COUNT_SHIFT) /* 0xFFFFFFFF */
/* PWRMODE_LDO_ADJ_CNT */
#define PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_SHIFT  (0U)
#define PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_MASK   (0xFFFFFU << PMU_PWRMODE_LDO_ADJ_CNT_PWRMODE_LDO_ADJ_CNT_SHIFT) /* 0x000FFFFF */
/* SHRM_CON0 */
#define PMU_SHRM_CON0_SHAREMEM_PWRDWN_EN_SFT_SHIFT         (0U)
#define PMU_SHRM_CON0_SHAREMEM_PWRDWN_EN_SFT_MASK          (0xFU << PMU_SHRM_CON0_SHAREMEM_PWRDWN_EN_SFT_SHIFT)         /* 0x0000000F */
#define PMU_SHRM_CON0_SHAREMEM_RET1N_SFT_SHIFT             (4U)
#define PMU_SHRM_CON0_SHAREMEM_RET1N_SFT_MASK              (0xFU << PMU_SHRM_CON0_SHAREMEM_RET1N_SFT_SHIFT)             /* 0x000000F0 */
#define PMU_SHRM_CON0_SHAREMEM_RET2N_SFT_SHIFT             (8U)
#define PMU_SHRM_CON0_SHAREMEM_RET2N_SFT_MASK              (0xFU << PMU_SHRM_CON0_SHAREMEM_RET2N_SFT_SHIFT)             /* 0x00000F00 */
/* DSPTCM_CON0 */
#define PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_SHIFT             (0U)
#define PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_MASK              (0xFFU << PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_SHIFT)            /* 0x000000FF */
#define PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_SHIFT            (8U)
#define PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_MASK             (0xFFU << PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_SHIFT)           /* 0x0000FF00 */
/* DSPTCM_CON1 */
#define PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_SHIFT            (0U)
#define PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_MASK             (0xFFU << PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_SHIFT)           /* 0x000000FF */
#define PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_SHIFT             (8U)
#define PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_MASK              (0x1U << PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_SHIFT)             /* 0x00000100 */
#define PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_SHIFT            (9U)
#define PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_MASK             (0x1U << PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_SHIFT)            /* 0x00000200 */
#define PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_SHIFT            (10U)
#define PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_MASK             (0x1U << PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_SHIFT)            /* 0x00000400 */
/* SYS_REG0 */
#define PMU_SYS_REG0_PMU_SYS_REG0_SHIFT                    (0U)
#define PMU_SYS_REG0_PMU_SYS_REG0_MASK                     (0xFFFFFFFFU << PMU_SYS_REG0_PMU_SYS_REG0_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG1 */
#define PMU_SYS_REG1_PMU_SYS_REG1_SHIFT                    (0U)
#define PMU_SYS_REG1_PMU_SYS_REG1_MASK                     (0xFFFFFFFFU << PMU_SYS_REG1_PMU_SYS_REG1_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG2 */
#define PMU_SYS_REG2_PMU_SYS_REG2_SHIFT                    (0U)
#define PMU_SYS_REG2_PMU_SYS_REG2_MASK                     (0xFFFFFFFFU << PMU_SYS_REG2_PMU_SYS_REG2_SHIFT)             /* 0xFFFFFFFF */
/* SYS_REG3 */
#define PMU_SYS_REG3_PMU_SYS_REG3_SHIFT                    (0U)
#define PMU_SYS_REG3_PMU_SYS_REG3_MASK                     (0xFFFFFFFFU << PMU_SYS_REG3_PMU_SYS_REG3_SHIFT)             /* 0xFFFFFFFF */
/* SHRM_CON1 */
#define PMU_SHRM_CON1_PWRMODE_SHRM_PWRDWN_EN_SHIFT         (0U)
#define PMU_SHRM_CON1_PWRMODE_SHRM_PWRDWN_EN_MASK          (0xFU << PMU_SHRM_CON1_PWRMODE_SHRM_PWRDWN_EN_SHIFT)         /* 0x0000000F */
#define PMU_SHRM_CON1_PWRMODE_SHRM_RET1N_SHIFT             (4U)
#define PMU_SHRM_CON1_PWRMODE_SHRM_RET1N_MASK              (0xFU << PMU_SHRM_CON1_PWRMODE_SHRM_RET1N_SHIFT)             /* 0x000000F0 */
#define PMU_SHRM_CON1_PWRMODE_SHRM_RET2N_SHIFT             (8U)
#define PMU_SHRM_CON1_PWRMODE_SHRM_RET2N_MASK              (0xFU << PMU_SHRM_CON1_PWRMODE_SHRM_RET2N_SHIFT)             /* 0x00000F00 */
/* DSPTCM_CON2 */
#define PMU_DSPTCM_CON2_DSPAPM_DTCM_PGEN_SHIFT             (0U)
#define PMU_DSPTCM_CON2_DSPAPM_DTCM_PGEN_MASK              (0xFFU << PMU_DSPTCM_CON2_DSPAPM_DTCM_PGEN_SHIFT)            /* 0x000000FF */
#define PMU_DSPTCM_CON2_DSPAPM_DTCM_RET1N_SHIFT            (8U)
#define PMU_DSPTCM_CON2_DSPAPM_DTCM_RET1N_MASK             (0xFFU << PMU_DSPTCM_CON2_DSPAPM_DTCM_RET1N_SHIFT)           /* 0x0000FF00 */
/* DSPTCM_CON3 */
#define PMU_DSPTCM_CON3_DSPAPM_DTCM_RET2N_SHIFT            (0U)
#define PMU_DSPTCM_CON3_DSPAPM_DTCM_RET2N_MASK             (0xFFU << PMU_DSPTCM_CON3_DSPAPM_DTCM_RET2N_SHIFT)           /* 0x000000FF */
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_PGEN_SHIFT             (8U)
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_PGEN_MASK              (0x1U << PMU_DSPTCM_CON3_DSPAPM_ITCM_PGEN_SHIFT)             /* 0x00000100 */
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_RET1N_SHIFT            (9U)
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_RET1N_MASK             (0x1U << PMU_DSPTCM_CON3_DSPAPM_ITCM_RET1N_SHIFT)            /* 0x00000200 */
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_RET2N_SHIFT            (10U)
#define PMU_DSPTCM_CON3_DSPAPM_ITCM_RET2N_MASK             (0x1U << PMU_DSPTCM_CON3_DSPAPM_ITCM_RET2N_SHIFT)            /* 0x00000400 */

#ifndef __ASSEMBLY__
typedef enum PD_Id {
    PD_DSP              = 0x80000000U,
    PD_LOGIC            = 0x80011111U,
    PD_SHRM             = 0x80022222U,
    PD_AUDIO            = 0x80033333U,
} ePD_Id;
#endif

/****************************************SHAREMEM****************************************/
/* RRA_SLT_LO */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT0_SHIFT                (0U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT0_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT0_SHIFT)                /* 0x0000000F */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT1_SHIFT                (4U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT1_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT1_SHIFT)                /* 0x000000F0 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT2_SHIFT                (8U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT2_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT2_SHIFT)                /* 0x00000F00 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT3_SHIFT                (12U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT3_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT3_SHIFT)                /* 0x0000F000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT4_SHIFT                (16U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT4_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT4_SHIFT)                /* 0x000F0000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT5_SHIFT                (20U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT5_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT5_SHIFT)                /* 0x00F00000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT6_SHIFT                (24U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT6_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT6_SHIFT)                /* 0x0F000000 */
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT7_SHIFT                (28U)
#define SHAREMEM_RRA_SLT_LO_REQ_SLOT7_MASK                 (0xFU << SHAREMEM_RRA_SLT_LO_REQ_SLOT7_SHIFT)                /* 0xF0000000 */
/* RRA_SLT_HI */
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT8_SHIFT                (0U)
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT8_MASK                 (0xFU << SHAREMEM_RRA_SLT_HI_REQ_SLOT8_SHIFT)                /* 0x0000000F */
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT9_SHIFT                (4U)
#define SHAREMEM_RRA_SLT_HI_REQ_SLOT9_MASK                 (0xFU << SHAREMEM_RRA_SLT_HI_REQ_SLOT9_SHIFT)                /* 0x000000F0 */
/* RRA_WEIGHT_LO */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_SHIFT        (0U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0RD_SHIFT)        /* 0x00000007 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_SHIFT        (4U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS0WR_SHIFT)        /* 0x00000070 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_SHIFT        (8U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1RD_SHIFT)        /* 0x00000700 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_SHIFT        (12U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS1WR_SHIFT)        /* 0x00007000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_SHIFT        (16U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2RD_SHIFT)        /* 0x00070000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_SHIFT        (20U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS2WR_SHIFT)        /* 0x00700000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_SHIFT        (24U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3RD_SHIFT)        /* 0x07000000 */
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_SHIFT        (28U)
#define SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_LO_WEIGHT_AXIS3WR_SHIFT)        /* 0x70000000 */
/* RRA_WEIGHT_HI */
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_SHIFT        (0U)
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4RD_SHIFT)        /* 0x00000007 */
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_SHIFT        (4U)
#define SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_MASK         (0x7U << SHAREMEM_RRA_WEIGHT_HI_WEIGHT_AXIS4WR_SHIFT)        /* 0x00000070 */
/* RRA_SLT_PRI */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_SHIFT   (0U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION1_SHIFT)   /* 0x0000000F */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_SHIFT   (4U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION2_SHIFT)   /* 0x000000F0 */
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_SHIFT   (8U)
#define SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_MASK    (0xFU << SHAREMEM_RRA_SLT_PRI_RRA_FIRSTSLOT_REGION3_SHIFT)   /* 0x00000F00 */
/* CTRL */
#define SHAREMEM_CTRL_CFG_LOAD_EN_SHIFT                    (0U)
#define SHAREMEM_CTRL_CFG_LOAD_EN_MASK                     (0x1U << SHAREMEM_CTRL_CFG_LOAD_EN_SHIFT)                    /* 0x00000001 */
#define SHAREMEM_CTRL_FREE_RUN_MODE_SHIFT                  (1U)
#define SHAREMEM_CTRL_FREE_RUN_MODE_MASK                   (0x1U << SHAREMEM_CTRL_FREE_RUN_MODE_SHIFT)                  /* 0x00000002 */
#define SHAREMEM_CTRL_ADDR_ROUND_EN_SHIFT                  (2U)
#define SHAREMEM_CTRL_ADDR_ROUND_EN_MASK                   (0x1FU << SHAREMEM_CTRL_ADDR_ROUND_EN_SHIFT)                 /* 0x0000007C */
/* STATUS */
#define SHAREMEM_STATUS_AXISLV_ACTIVE_SHIFT                (0U)
#define SHAREMEM_STATUS_AXISLV_ACTIVE_MASK                 (0x1FU << SHAREMEM_STATUS_AXISLV_ACTIVE_SHIFT)               /* 0x0000001F */
#define SHAREMEM_STATUS_AXISLV_RRESPERR_SHIFT              (8U)
#define SHAREMEM_STATUS_AXISLV_RRESPERR_MASK               (0x1FU << SHAREMEM_STATUS_AXISLV_RRESPERR_SHIFT)             /* 0x00001F00 */
#define SHAREMEM_STATUS_AXISLV_WRESPERR_SHIFT              (16U)
#define SHAREMEM_STATUS_AXISLV_WRESPERR_MASK               (0x1FU << SHAREMEM_STATUS_AXISLV_WRESPERR_SHIFT)             /* 0x001F0000 */
#define SHAREMEM_STATUS_AXISLV_ADDR_ROUND_SHIFT            (24U)
#define SHAREMEM_STATUS_AXISLV_ADDR_ROUND_MASK             (0x1FU << SHAREMEM_STATUS_AXISLV_ADDR_ROUND_SHIFT)           /* 0x1F000000 */
/******************************************DMA*******************************************/
/* DSR */
#define DMA_DSR_FIELD0000_SHIFT                            (0U)
#define DMA_DSR_FIELD0000_MASK                             (0xFU << DMA_DSR_FIELD0000_SHIFT)                            /* 0x0000000F */
#define DMA_DSR_FIELD0002_SHIFT                            (4U)
#define DMA_DSR_FIELD0002_MASK                             (0x1FU << DMA_DSR_FIELD0002_SHIFT)                           /* 0x000001F0 */
#define DMA_DSR_FIELD0001_SHIFT                            (9U)
#define DMA_DSR_FIELD0001_MASK                             (0x1U << DMA_DSR_FIELD0001_SHIFT)                            /* 0x00000200 */
/* DPC */
#define DMA_DPC_FIELD0000_SHIFT                            (0U)
#define DMA_DPC_FIELD0000_MASK                             (0xFFFFFFFFU << DMA_DPC_FIELD0000_SHIFT)                     /* 0xFFFFFFFF */
/* INTEN */
#define DMA_INTEN_FIELD0000_SHIFT                          (0U)
#define DMA_INTEN_FIELD0000_MASK                           (0xFFFFFFFFU << DMA_INTEN_FIELD0000_SHIFT)                   /* 0xFFFFFFFF */
/* EVENT_RIS */
#define DMA_EVENT_RIS_FIELD0000_SHIFT                      (0U)
#define DMA_EVENT_RIS_FIELD0000_MASK                       (0xFFFFFFFFU << DMA_EVENT_RIS_FIELD0000_SHIFT)               /* 0xFFFFFFFF */
/* INTMIS */
#define DMA_INTMIS_FIELD0000_SHIFT                         (0U)
#define DMA_INTMIS_FIELD0000_MASK                          (0xFFFFFFFFU << DMA_INTMIS_FIELD0000_SHIFT)                  /* 0xFFFFFFFF */
/* INTCLR */
#define DMA_INTCLR_FIELD0000_SHIFT                         (0U)
#define DMA_INTCLR_FIELD0000_MASK                          (0xFFFFFFFFU << DMA_INTCLR_FIELD0000_SHIFT)                  /* 0xFFFFFFFF */
/* FSRD */
#define DMA_FSRD_FIELD0000_SHIFT                           (0U)
#define DMA_FSRD_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_FSRD_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* FSRC */
#define DMA_FSRC_FIELD0000_SHIFT                           (0U)
#define DMA_FSRC_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_FSRC_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* FTRD */
#define DMA_FTRD_FIELD0000_SHIFT                           (0U)
#define DMA_FTRD_FIELD0000_MASK                            (0x1U << DMA_FTRD_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTRD_FIELD0005_SHIFT                           (1U)
#define DMA_FTRD_FIELD0005_MASK                            (0x1U << DMA_FTRD_FIELD0005_SHIFT)                           /* 0x00000002 */
#define DMA_FTRD_FIELD0004_SHIFT                           (4U)
#define DMA_FTRD_FIELD0004_MASK                            (0x1U << DMA_FTRD_FIELD0004_SHIFT)                           /* 0x00000010 */
#define DMA_FTRD_FIELD0003_SHIFT                           (5U)
#define DMA_FTRD_FIELD0003_MASK                            (0x1U << DMA_FTRD_FIELD0003_SHIFT)                           /* 0x00000020 */
#define DMA_FTRD_FIELD0002_SHIFT                           (16U)
#define DMA_FTRD_FIELD0002_MASK                            (0x1U << DMA_FTRD_FIELD0002_SHIFT)                           /* 0x00010000 */
#define DMA_FTRD_FIELD0001_SHIFT                           (30U)
#define DMA_FTRD_FIELD0001_MASK                            (0x1U << DMA_FTRD_FIELD0001_SHIFT)                           /* 0x40000000 */
/* FTR0 */
#define DMA_FTR0_FIELD0000_SHIFT                           (0U)
#define DMA_FTR0_FIELD0000_MASK                            (0x1U << DMA_FTR0_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR0_FIELD0011_SHIFT                           (1U)
#define DMA_FTR0_FIELD0011_MASK                            (0x1U << DMA_FTR0_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR0_FIELD0010_SHIFT                           (5U)
#define DMA_FTR0_FIELD0010_MASK                            (0x1U << DMA_FTR0_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR0_FIELD0009_SHIFT                           (6U)
#define DMA_FTR0_FIELD0009_MASK                            (0x1U << DMA_FTR0_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR0_FIELD0008_SHIFT                           (7U)
#define DMA_FTR0_FIELD0008_MASK                            (0x1U << DMA_FTR0_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR0_FIELD0007_SHIFT                           (12U)
#define DMA_FTR0_FIELD0007_MASK                            (0x1U << DMA_FTR0_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR0_FIELD0006_SHIFT                           (13U)
#define DMA_FTR0_FIELD0006_MASK                            (0x1U << DMA_FTR0_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR0_FIELD0005_SHIFT                           (16U)
#define DMA_FTR0_FIELD0005_MASK                            (0x1U << DMA_FTR0_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR0_FIELD0004_SHIFT                           (17U)
#define DMA_FTR0_FIELD0004_MASK                            (0x1U << DMA_FTR0_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR0_FIELD0003_SHIFT                           (18U)
#define DMA_FTR0_FIELD0003_MASK                            (0x1U << DMA_FTR0_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR0_FIELD0002_SHIFT                           (30U)
#define DMA_FTR0_FIELD0002_MASK                            (0x1U << DMA_FTR0_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR0_FIELD0001_SHIFT                           (31U)
#define DMA_FTR0_FIELD0001_MASK                            (0x1U << DMA_FTR0_FIELD0001_SHIFT)                           /* 0x80000000 */
/* FTR1 */
#define DMA_FTR1_FIELD0000_SHIFT                           (0U)
#define DMA_FTR1_FIELD0000_MASK                            (0x1U << DMA_FTR1_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR1_FIELD0011_SHIFT                           (1U)
#define DMA_FTR1_FIELD0011_MASK                            (0x1U << DMA_FTR1_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR1_FIELD0010_SHIFT                           (5U)
#define DMA_FTR1_FIELD0010_MASK                            (0x1U << DMA_FTR1_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR1_FIELD0009_SHIFT                           (6U)
#define DMA_FTR1_FIELD0009_MASK                            (0x1U << DMA_FTR1_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR1_FIELD0008_SHIFT                           (7U)
#define DMA_FTR1_FIELD0008_MASK                            (0x1U << DMA_FTR1_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR1_FIELD0007_SHIFT                           (12U)
#define DMA_FTR1_FIELD0007_MASK                            (0x1U << DMA_FTR1_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR1_FIELD0006_SHIFT                           (13U)
#define DMA_FTR1_FIELD0006_MASK                            (0x1U << DMA_FTR1_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR1_FIELD0005_SHIFT                           (16U)
#define DMA_FTR1_FIELD0005_MASK                            (0x1U << DMA_FTR1_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR1_FIELD0004_SHIFT                           (17U)
#define DMA_FTR1_FIELD0004_MASK                            (0x1U << DMA_FTR1_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR1_FIELD0003_SHIFT                           (18U)
#define DMA_FTR1_FIELD0003_MASK                            (0x1U << DMA_FTR1_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR1_FIELD0002_SHIFT                           (30U)
#define DMA_FTR1_FIELD0002_MASK                            (0x1U << DMA_FTR1_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR1_FIELD0001_SHIFT                           (31U)
#define DMA_FTR1_FIELD0001_MASK                            (0x1U << DMA_FTR1_FIELD0001_SHIFT)                           /* 0x80000000 */
/* FTR2 */
#define DMA_FTR2_FIELD0000_SHIFT                           (0U)
#define DMA_FTR2_FIELD0000_MASK                            (0x1U << DMA_FTR2_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR2_FIELD0011_SHIFT                           (1U)
#define DMA_FTR2_FIELD0011_MASK                            (0x1U << DMA_FTR2_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR2_FIELD0010_SHIFT                           (5U)
#define DMA_FTR2_FIELD0010_MASK                            (0x1U << DMA_FTR2_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR2_FIELD0009_SHIFT                           (6U)
#define DMA_FTR2_FIELD0009_MASK                            (0x1U << DMA_FTR2_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR2_FIELD0008_SHIFT                           (7U)
#define DMA_FTR2_FIELD0008_MASK                            (0x1U << DMA_FTR2_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR2_FIELD0007_SHIFT                           (12U)
#define DMA_FTR2_FIELD0007_MASK                            (0x1U << DMA_FTR2_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR2_FIELD0006_SHIFT                           (13U)
#define DMA_FTR2_FIELD0006_MASK                            (0x1U << DMA_FTR2_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR2_FIELD0005_SHIFT                           (16U)
#define DMA_FTR2_FIELD0005_MASK                            (0x1U << DMA_FTR2_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR2_FIELD0004_SHIFT                           (17U)
#define DMA_FTR2_FIELD0004_MASK                            (0x1U << DMA_FTR2_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR2_FIELD0003_SHIFT                           (18U)
#define DMA_FTR2_FIELD0003_MASK                            (0x1U << DMA_FTR2_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR2_FIELD0002_SHIFT                           (30U)
#define DMA_FTR2_FIELD0002_MASK                            (0x1U << DMA_FTR2_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR2_FIELD0001_SHIFT                           (31U)
#define DMA_FTR2_FIELD0001_MASK                            (0x1U << DMA_FTR2_FIELD0001_SHIFT)                           /* 0x80000000 */
/* FTR3 */
#define DMA_FTR3_FIELD0000_SHIFT                           (0U)
#define DMA_FTR3_FIELD0000_MASK                            (0x1U << DMA_FTR3_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR3_FIELD0011_SHIFT                           (1U)
#define DMA_FTR3_FIELD0011_MASK                            (0x1U << DMA_FTR3_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR3_FIELD0010_SHIFT                           (5U)
#define DMA_FTR3_FIELD0010_MASK                            (0x1U << DMA_FTR3_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR3_FIELD0009_SHIFT                           (6U)
#define DMA_FTR3_FIELD0009_MASK                            (0x1U << DMA_FTR3_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR3_FIELD0008_SHIFT                           (7U)
#define DMA_FTR3_FIELD0008_MASK                            (0x1U << DMA_FTR3_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR3_FIELD0007_SHIFT                           (12U)
#define DMA_FTR3_FIELD0007_MASK                            (0x1U << DMA_FTR3_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR3_FIELD0006_SHIFT                           (13U)
#define DMA_FTR3_FIELD0006_MASK                            (0x1U << DMA_FTR3_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR3_FIELD0005_SHIFT                           (16U)
#define DMA_FTR3_FIELD0005_MASK                            (0x1U << DMA_FTR3_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR3_FIELD0004_SHIFT                           (17U)
#define DMA_FTR3_FIELD0004_MASK                            (0x1U << DMA_FTR3_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR3_FIELD0003_SHIFT                           (18U)
#define DMA_FTR3_FIELD0003_MASK                            (0x1U << DMA_FTR3_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR3_FIELD0002_SHIFT                           (30U)
#define DMA_FTR3_FIELD0002_MASK                            (0x1U << DMA_FTR3_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR3_FIELD0001_SHIFT                           (31U)
#define DMA_FTR3_FIELD0001_MASK                            (0x1U << DMA_FTR3_FIELD0001_SHIFT)                           /* 0x80000000 */
/* FTR4 */
#define DMA_FTR4_FIELD0000_SHIFT                           (0U)
#define DMA_FTR4_FIELD0000_MASK                            (0x1U << DMA_FTR4_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR4_FIELD0011_SHIFT                           (1U)
#define DMA_FTR4_FIELD0011_MASK                            (0x1U << DMA_FTR4_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR4_FIELD0010_SHIFT                           (5U)
#define DMA_FTR4_FIELD0010_MASK                            (0x1U << DMA_FTR4_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR4_FIELD0009_SHIFT                           (6U)
#define DMA_FTR4_FIELD0009_MASK                            (0x1U << DMA_FTR4_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR4_FIELD0008_SHIFT                           (7U)
#define DMA_FTR4_FIELD0008_MASK                            (0x1U << DMA_FTR4_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR4_FIELD0007_SHIFT                           (12U)
#define DMA_FTR4_FIELD0007_MASK                            (0x1U << DMA_FTR4_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR4_FIELD0006_SHIFT                           (13U)
#define DMA_FTR4_FIELD0006_MASK                            (0x1U << DMA_FTR4_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR4_FIELD0005_SHIFT                           (16U)
#define DMA_FTR4_FIELD0005_MASK                            (0x1U << DMA_FTR4_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR4_FIELD0004_SHIFT                           (17U)
#define DMA_FTR4_FIELD0004_MASK                            (0x1U << DMA_FTR4_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR4_FIELD0003_SHIFT                           (18U)
#define DMA_FTR4_FIELD0003_MASK                            (0x1U << DMA_FTR4_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR4_FIELD0002_SHIFT                           (30U)
#define DMA_FTR4_FIELD0002_MASK                            (0x1U << DMA_FTR4_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR4_FIELD0001_SHIFT                           (31U)
#define DMA_FTR4_FIELD0001_MASK                            (0x1U << DMA_FTR4_FIELD0001_SHIFT)                           /* 0x80000000 */
/* FTR5 */
#define DMA_FTR5_FIELD0000_SHIFT                           (0U)
#define DMA_FTR5_FIELD0000_MASK                            (0x1U << DMA_FTR5_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_FTR5_FIELD0011_SHIFT                           (1U)
#define DMA_FTR5_FIELD0011_MASK                            (0x1U << DMA_FTR5_FIELD0011_SHIFT)                           /* 0x00000002 */
#define DMA_FTR5_FIELD0010_SHIFT                           (5U)
#define DMA_FTR5_FIELD0010_MASK                            (0x1U << DMA_FTR5_FIELD0010_SHIFT)                           /* 0x00000020 */
#define DMA_FTR5_FIELD0009_SHIFT                           (6U)
#define DMA_FTR5_FIELD0009_MASK                            (0x1U << DMA_FTR5_FIELD0009_SHIFT)                           /* 0x00000040 */
#define DMA_FTR5_FIELD0008_SHIFT                           (7U)
#define DMA_FTR5_FIELD0008_MASK                            (0x1U << DMA_FTR5_FIELD0008_SHIFT)                           /* 0x00000080 */
#define DMA_FTR5_FIELD0007_SHIFT                           (12U)
#define DMA_FTR5_FIELD0007_MASK                            (0x1U << DMA_FTR5_FIELD0007_SHIFT)                           /* 0x00001000 */
#define DMA_FTR5_FIELD0006_SHIFT                           (13U)
#define DMA_FTR5_FIELD0006_MASK                            (0x1U << DMA_FTR5_FIELD0006_SHIFT)                           /* 0x00002000 */
#define DMA_FTR5_FIELD0005_SHIFT                           (16U)
#define DMA_FTR5_FIELD0005_MASK                            (0x1U << DMA_FTR5_FIELD0005_SHIFT)                           /* 0x00010000 */
#define DMA_FTR5_FIELD0004_SHIFT                           (17U)
#define DMA_FTR5_FIELD0004_MASK                            (0x1U << DMA_FTR5_FIELD0004_SHIFT)                           /* 0x00020000 */
#define DMA_FTR5_FIELD0003_SHIFT                           (18U)
#define DMA_FTR5_FIELD0003_MASK                            (0x1U << DMA_FTR5_FIELD0003_SHIFT)                           /* 0x00040000 */
#define DMA_FTR5_FIELD0002_SHIFT                           (30U)
#define DMA_FTR5_FIELD0002_MASK                            (0x1U << DMA_FTR5_FIELD0002_SHIFT)                           /* 0x40000000 */
#define DMA_FTR5_FIELD0001_SHIFT                           (31U)
#define DMA_FTR5_FIELD0001_MASK                            (0x1U << DMA_FTR5_FIELD0001_SHIFT)                           /* 0x80000000 */
/* CSR0 */
#define DMA_CSR0_FIELD0000_SHIFT                           (0U)
#define DMA_CSR0_FIELD0000_MASK                            (0xFU << DMA_CSR0_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR0_FIELD0004_SHIFT                           (4U)
#define DMA_CSR0_FIELD0004_MASK                            (0x1FU << DMA_CSR0_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR0_FIELD0003_SHIFT                           (14U)
#define DMA_CSR0_FIELD0003_MASK                            (0x1U << DMA_CSR0_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR0_FIELD0002_SHIFT                           (15U)
#define DMA_CSR0_FIELD0002_MASK                            (0x1U << DMA_CSR0_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR0_FIELD0001_SHIFT                           (21U)
#define DMA_CSR0_FIELD0001_MASK                            (0x1U << DMA_CSR0_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC0 */
#define DMA_CPC0_FIELD0000_SHIFT                           (0U)
#define DMA_CPC0_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC0_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CSR1 */
#define DMA_CSR1_FIELD0000_SHIFT                           (0U)
#define DMA_CSR1_FIELD0000_MASK                            (0xFU << DMA_CSR1_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR1_FIELD0004_SHIFT                           (4U)
#define DMA_CSR1_FIELD0004_MASK                            (0x1FU << DMA_CSR1_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR1_FIELD0003_SHIFT                           (14U)
#define DMA_CSR1_FIELD0003_MASK                            (0x1U << DMA_CSR1_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR1_FIELD0002_SHIFT                           (15U)
#define DMA_CSR1_FIELD0002_MASK                            (0x1U << DMA_CSR1_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR1_FIELD0001_SHIFT                           (21U)
#define DMA_CSR1_FIELD0001_MASK                            (0x1U << DMA_CSR1_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC1 */
#define DMA_CPC1_FIELD0000_SHIFT                           (0U)
#define DMA_CPC1_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC1_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CSR2 */
#define DMA_CSR2_FIELD0000_SHIFT                           (0U)
#define DMA_CSR2_FIELD0000_MASK                            (0xFU << DMA_CSR2_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR2_FIELD0004_SHIFT                           (4U)
#define DMA_CSR2_FIELD0004_MASK                            (0x1FU << DMA_CSR2_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR2_FIELD0003_SHIFT                           (14U)
#define DMA_CSR2_FIELD0003_MASK                            (0x1U << DMA_CSR2_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR2_FIELD0002_SHIFT                           (15U)
#define DMA_CSR2_FIELD0002_MASK                            (0x1U << DMA_CSR2_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR2_FIELD0001_SHIFT                           (21U)
#define DMA_CSR2_FIELD0001_MASK                            (0x1U << DMA_CSR2_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC2 */
#define DMA_CPC2_FIELD0000_SHIFT                           (0U)
#define DMA_CPC2_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC2_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CSR3 */
#define DMA_CSR3_FIELD0000_SHIFT                           (0U)
#define DMA_CSR3_FIELD0000_MASK                            (0xFU << DMA_CSR3_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR3_FIELD0004_SHIFT                           (4U)
#define DMA_CSR3_FIELD0004_MASK                            (0x1FU << DMA_CSR3_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR3_FIELD0003_SHIFT                           (14U)
#define DMA_CSR3_FIELD0003_MASK                            (0x1U << DMA_CSR3_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR3_FIELD0002_SHIFT                           (15U)
#define DMA_CSR3_FIELD0002_MASK                            (0x1U << DMA_CSR3_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR3_FIELD0001_SHIFT                           (21U)
#define DMA_CSR3_FIELD0001_MASK                            (0x1U << DMA_CSR3_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC3 */
#define DMA_CPC3_FIELD0000_SHIFT                           (0U)
#define DMA_CPC3_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC3_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CSR4 */
#define DMA_CSR4_FIELD0000_SHIFT                           (0U)
#define DMA_CSR4_FIELD0000_MASK                            (0xFU << DMA_CSR4_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR4_FIELD0004_SHIFT                           (4U)
#define DMA_CSR4_FIELD0004_MASK                            (0x1FU << DMA_CSR4_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR4_FIELD0003_SHIFT                           (14U)
#define DMA_CSR4_FIELD0003_MASK                            (0x1U << DMA_CSR4_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR4_FIELD0002_SHIFT                           (15U)
#define DMA_CSR4_FIELD0002_MASK                            (0x1U << DMA_CSR4_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR4_FIELD0001_SHIFT                           (21U)
#define DMA_CSR4_FIELD0001_MASK                            (0x1U << DMA_CSR4_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC4 */
#define DMA_CPC4_FIELD0000_SHIFT                           (0U)
#define DMA_CPC4_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC4_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CSR5 */
#define DMA_CSR5_FIELD0000_SHIFT                           (0U)
#define DMA_CSR5_FIELD0000_MASK                            (0xFU << DMA_CSR5_FIELD0000_SHIFT)                           /* 0x0000000F */
#define DMA_CSR5_FIELD0004_SHIFT                           (4U)
#define DMA_CSR5_FIELD0004_MASK                            (0x1FU << DMA_CSR5_FIELD0004_SHIFT)                          /* 0x000001F0 */
#define DMA_CSR5_FIELD0003_SHIFT                           (14U)
#define DMA_CSR5_FIELD0003_MASK                            (0x1U << DMA_CSR5_FIELD0003_SHIFT)                           /* 0x00004000 */
#define DMA_CSR5_FIELD0002_SHIFT                           (15U)
#define DMA_CSR5_FIELD0002_MASK                            (0x1U << DMA_CSR5_FIELD0002_SHIFT)                           /* 0x00008000 */
#define DMA_CSR5_FIELD0001_SHIFT                           (21U)
#define DMA_CSR5_FIELD0001_MASK                            (0x1U << DMA_CSR5_FIELD0001_SHIFT)                           /* 0x00200000 */
/* CPC5 */
#define DMA_CPC5_FIELD0000_SHIFT                           (0U)
#define DMA_CPC5_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_CPC5_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* SAR0 */
#define DMA_SAR0_FIELD0000_SHIFT                           (0U)
#define DMA_SAR0_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR0_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR0 */
#define DMA_DAR0_FIELD0000_SHIFT                           (0U)
#define DMA_DAR0_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR0_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR0 */
#define DMA_CCR0_FIELD0000_SHIFT                           (0U)
#define DMA_CCR0_FIELD0000_MASK                            (0x1U << DMA_CCR0_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR0_FIELD0009_SHIFT                           (1U)
#define DMA_CCR0_FIELD0009_MASK                            (0x7U << DMA_CCR0_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR0_FIELD0008_SHIFT                           (4U)
#define DMA_CCR0_FIELD0008_MASK                            (0xFU << DMA_CCR0_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR0_FIELD0007_SHIFT                           (8U)
#define DMA_CCR0_FIELD0007_MASK                            (0x7U << DMA_CCR0_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR0_FIELD0006_SHIFT                           (11U)
#define DMA_CCR0_FIELD0006_MASK                            (0x7U << DMA_CCR0_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR0_FIELD0005_SHIFT                           (14U)
#define DMA_CCR0_FIELD0005_MASK                            (0x1U << DMA_CCR0_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR0_FIELD0004_SHIFT                           (15U)
#define DMA_CCR0_FIELD0004_MASK                            (0x7U << DMA_CCR0_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR0_FIELD0003_SHIFT                           (18U)
#define DMA_CCR0_FIELD0003_MASK                            (0xFU << DMA_CCR0_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR0_FIELD0002_SHIFT                           (22U)
#define DMA_CCR0_FIELD0002_MASK                            (0x7U << DMA_CCR0_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR0_FIELD0001_SHIFT                           (25U)
#define DMA_CCR0_FIELD0001_MASK                            (0x7U << DMA_CCR0_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_0 */
#define DMA_LC0_0_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_0_FIELD0000_MASK                           (0xFFU << DMA_LC0_0_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_0 */
#define DMA_LC1_0_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_0_FIELD0000_MASK                           (0xFFU << DMA_LC1_0_FIELD0000_SHIFT)                         /* 0x000000FF */
/* SAR1 */
#define DMA_SAR1_FIELD0000_SHIFT                           (0U)
#define DMA_SAR1_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR1_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR1 */
#define DMA_DAR1_FIELD0000_SHIFT                           (0U)
#define DMA_DAR1_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR1_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR1 */
#define DMA_CCR1_FIELD0000_SHIFT                           (0U)
#define DMA_CCR1_FIELD0000_MASK                            (0x1U << DMA_CCR1_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR1_FIELD0009_SHIFT                           (1U)
#define DMA_CCR1_FIELD0009_MASK                            (0x7U << DMA_CCR1_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR1_FIELD0008_SHIFT                           (4U)
#define DMA_CCR1_FIELD0008_MASK                            (0xFU << DMA_CCR1_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR1_FIELD0007_SHIFT                           (8U)
#define DMA_CCR1_FIELD0007_MASK                            (0x7U << DMA_CCR1_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR1_FIELD0006_SHIFT                           (11U)
#define DMA_CCR1_FIELD0006_MASK                            (0x7U << DMA_CCR1_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR1_FIELD0005_SHIFT                           (14U)
#define DMA_CCR1_FIELD0005_MASK                            (0x1U << DMA_CCR1_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR1_FIELD0004_SHIFT                           (15U)
#define DMA_CCR1_FIELD0004_MASK                            (0x7U << DMA_CCR1_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR1_FIELD0003_SHIFT                           (18U)
#define DMA_CCR1_FIELD0003_MASK                            (0xFU << DMA_CCR1_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR1_FIELD0002_SHIFT                           (22U)
#define DMA_CCR1_FIELD0002_MASK                            (0x7U << DMA_CCR1_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR1_FIELD0001_SHIFT                           (25U)
#define DMA_CCR1_FIELD0001_MASK                            (0x7U << DMA_CCR1_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_1 */
#define DMA_LC0_1_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_1_FIELD0000_MASK                           (0xFFU << DMA_LC0_1_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_1 */
#define DMA_LC1_1_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_1_FIELD0000_MASK                           (0xFFU << DMA_LC1_1_FIELD0000_SHIFT)                         /* 0x000000FF */
/* SAR2 */
#define DMA_SAR2_FIELD0000_SHIFT                           (0U)
#define DMA_SAR2_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR2_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR2 */
#define DMA_DAR2_FIELD0000_SHIFT                           (0U)
#define DMA_DAR2_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR2_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR2 */
#define DMA_CCR2_FIELD0000_SHIFT                           (0U)
#define DMA_CCR2_FIELD0000_MASK                            (0x1U << DMA_CCR2_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR2_FIELD0009_SHIFT                           (1U)
#define DMA_CCR2_FIELD0009_MASK                            (0x7U << DMA_CCR2_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR2_FIELD0008_SHIFT                           (4U)
#define DMA_CCR2_FIELD0008_MASK                            (0xFU << DMA_CCR2_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR2_FIELD0007_SHIFT                           (8U)
#define DMA_CCR2_FIELD0007_MASK                            (0x7U << DMA_CCR2_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR2_FIELD0006_SHIFT                           (11U)
#define DMA_CCR2_FIELD0006_MASK                            (0x7U << DMA_CCR2_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR2_FIELD0005_SHIFT                           (14U)
#define DMA_CCR2_FIELD0005_MASK                            (0x1U << DMA_CCR2_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR2_FIELD0004_SHIFT                           (15U)
#define DMA_CCR2_FIELD0004_MASK                            (0x7U << DMA_CCR2_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR2_FIELD0003_SHIFT                           (18U)
#define DMA_CCR2_FIELD0003_MASK                            (0xFU << DMA_CCR2_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR2_FIELD0002_SHIFT                           (22U)
#define DMA_CCR2_FIELD0002_MASK                            (0x7U << DMA_CCR2_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR2_FIELD0001_SHIFT                           (25U)
#define DMA_CCR2_FIELD0001_MASK                            (0x7U << DMA_CCR2_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_2 */
#define DMA_LC0_2_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_2_FIELD0000_MASK                           (0xFFU << DMA_LC0_2_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_2 */
#define DMA_LC1_2_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_2_FIELD0000_MASK                           (0xFFU << DMA_LC1_2_FIELD0000_SHIFT)                         /* 0x000000FF */
/* SAR3 */
#define DMA_SAR3_FIELD0000_SHIFT                           (0U)
#define DMA_SAR3_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR3_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR3 */
#define DMA_DAR3_FIELD0000_SHIFT                           (0U)
#define DMA_DAR3_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR3_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR3 */
#define DMA_CCR3_FIELD0000_SHIFT                           (0U)
#define DMA_CCR3_FIELD0000_MASK                            (0x1U << DMA_CCR3_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR3_FIELD0009_SHIFT                           (1U)
#define DMA_CCR3_FIELD0009_MASK                            (0x7U << DMA_CCR3_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR3_FIELD0008_SHIFT                           (4U)
#define DMA_CCR3_FIELD0008_MASK                            (0xFU << DMA_CCR3_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR3_FIELD0007_SHIFT                           (8U)
#define DMA_CCR3_FIELD0007_MASK                            (0x7U << DMA_CCR3_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR3_FIELD0006_SHIFT                           (11U)
#define DMA_CCR3_FIELD0006_MASK                            (0x7U << DMA_CCR3_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR3_FIELD0005_SHIFT                           (14U)
#define DMA_CCR3_FIELD0005_MASK                            (0x1U << DMA_CCR3_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR3_FIELD0004_SHIFT                           (15U)
#define DMA_CCR3_FIELD0004_MASK                            (0x7U << DMA_CCR3_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR3_FIELD0003_SHIFT                           (18U)
#define DMA_CCR3_FIELD0003_MASK                            (0xFU << DMA_CCR3_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR3_FIELD0002_SHIFT                           (22U)
#define DMA_CCR3_FIELD0002_MASK                            (0x7U << DMA_CCR3_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR3_FIELD0001_SHIFT                           (25U)
#define DMA_CCR3_FIELD0001_MASK                            (0x7U << DMA_CCR3_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_3 */
#define DMA_LC0_3_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_3_FIELD0000_MASK                           (0xFFU << DMA_LC0_3_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_3 */
#define DMA_LC1_3_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_3_FIELD0000_MASK                           (0xFFU << DMA_LC1_3_FIELD0000_SHIFT)                         /* 0x000000FF */
/* SAR4 */
#define DMA_SAR4_FIELD0000_SHIFT                           (0U)
#define DMA_SAR4_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR4_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR4 */
#define DMA_DAR4_FIELD0000_SHIFT                           (0U)
#define DMA_DAR4_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR4_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR4 */
#define DMA_CCR4_FIELD0000_SHIFT                           (0U)
#define DMA_CCR4_FIELD0000_MASK                            (0x1U << DMA_CCR4_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR4_FIELD0009_SHIFT                           (1U)
#define DMA_CCR4_FIELD0009_MASK                            (0x7U << DMA_CCR4_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR4_FIELD0008_SHIFT                           (4U)
#define DMA_CCR4_FIELD0008_MASK                            (0xFU << DMA_CCR4_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR4_FIELD0007_SHIFT                           (8U)
#define DMA_CCR4_FIELD0007_MASK                            (0x7U << DMA_CCR4_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR4_FIELD0006_SHIFT                           (11U)
#define DMA_CCR4_FIELD0006_MASK                            (0x7U << DMA_CCR4_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR4_FIELD0005_SHIFT                           (14U)
#define DMA_CCR4_FIELD0005_MASK                            (0x1U << DMA_CCR4_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR4_FIELD0004_SHIFT                           (15U)
#define DMA_CCR4_FIELD0004_MASK                            (0x7U << DMA_CCR4_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR4_FIELD0003_SHIFT                           (18U)
#define DMA_CCR4_FIELD0003_MASK                            (0xFU << DMA_CCR4_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR4_FIELD0002_SHIFT                           (22U)
#define DMA_CCR4_FIELD0002_MASK                            (0x7U << DMA_CCR4_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR4_FIELD0001_SHIFT                           (25U)
#define DMA_CCR4_FIELD0001_MASK                            (0x7U << DMA_CCR4_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_4 */
#define DMA_LC0_4_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_4_FIELD0000_MASK                           (0xFFU << DMA_LC0_4_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_4 */
#define DMA_LC1_4_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_4_FIELD0000_MASK                           (0xFFU << DMA_LC1_4_FIELD0000_SHIFT)                         /* 0x000000FF */
/* SAR5 */
#define DMA_SAR5_FIELD0000_SHIFT                           (0U)
#define DMA_SAR5_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_SAR5_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* DAR5 */
#define DMA_DAR5_FIELD0000_SHIFT                           (0U)
#define DMA_DAR5_FIELD0000_MASK                            (0xFFFFFFFFU << DMA_DAR5_FIELD0000_SHIFT)                    /* 0xFFFFFFFF */
/* CCR5 */
#define DMA_CCR5_FIELD0000_SHIFT                           (0U)
#define DMA_CCR5_FIELD0000_MASK                            (0x1U << DMA_CCR5_FIELD0000_SHIFT)                           /* 0x00000001 */
#define DMA_CCR5_FIELD0009_SHIFT                           (1U)
#define DMA_CCR5_FIELD0009_MASK                            (0x7U << DMA_CCR5_FIELD0009_SHIFT)                           /* 0x0000000E */
#define DMA_CCR5_FIELD0008_SHIFT                           (4U)
#define DMA_CCR5_FIELD0008_MASK                            (0xFU << DMA_CCR5_FIELD0008_SHIFT)                           /* 0x000000F0 */
#define DMA_CCR5_FIELD0007_SHIFT                           (8U)
#define DMA_CCR5_FIELD0007_MASK                            (0x7U << DMA_CCR5_FIELD0007_SHIFT)                           /* 0x00000700 */
#define DMA_CCR5_FIELD0006_SHIFT                           (11U)
#define DMA_CCR5_FIELD0006_MASK                            (0x7U << DMA_CCR5_FIELD0006_SHIFT)                           /* 0x00003800 */
#define DMA_CCR5_FIELD0005_SHIFT                           (14U)
#define DMA_CCR5_FIELD0005_MASK                            (0x1U << DMA_CCR5_FIELD0005_SHIFT)                           /* 0x00004000 */
#define DMA_CCR5_FIELD0004_SHIFT                           (15U)
#define DMA_CCR5_FIELD0004_MASK                            (0x7U << DMA_CCR5_FIELD0004_SHIFT)                           /* 0x00038000 */
#define DMA_CCR5_FIELD0003_SHIFT                           (18U)
#define DMA_CCR5_FIELD0003_MASK                            (0xFU << DMA_CCR5_FIELD0003_SHIFT)                           /* 0x003C0000 */
#define DMA_CCR5_FIELD0002_SHIFT                           (22U)
#define DMA_CCR5_FIELD0002_MASK                            (0x7U << DMA_CCR5_FIELD0002_SHIFT)                           /* 0x01C00000 */
#define DMA_CCR5_FIELD0001_SHIFT                           (25U)
#define DMA_CCR5_FIELD0001_MASK                            (0x7U << DMA_CCR5_FIELD0001_SHIFT)                           /* 0x0E000000 */
/* LC0_5 */
#define DMA_LC0_5_FIELD0000_SHIFT                          (0U)
#define DMA_LC0_5_FIELD0000_MASK                           (0xFFU << DMA_LC0_5_FIELD0000_SHIFT)                         /* 0x000000FF */
/* LC1_5 */
#define DMA_LC1_5_FIELD0000_SHIFT                          (0U)
#define DMA_LC1_5_FIELD0000_MASK                           (0xFFU << DMA_LC1_5_FIELD0000_SHIFT)                         /* 0x000000FF */
/* DBGSTATUS */
#define DMA_DBGSTATUS_FIELD0000_SHIFT                      (0U)
#define DMA_DBGSTATUS_FIELD0000_MASK                       (0x3U << DMA_DBGSTATUS_FIELD0000_SHIFT)                      /* 0x00000003 */
/* DBGCMD */
#define DMA_DBGCMD_FIELD0000_SHIFT                         (0U)
#define DMA_DBGCMD_FIELD0000_MASK                          (0x3U << DMA_DBGCMD_FIELD0000_SHIFT)                         /* 0x00000003 */
/* DBGINST0 */
#define DMA_DBGINST0_FIELD0000_SHIFT                       (0U)
#define DMA_DBGINST0_FIELD0000_MASK                        (0x1U << DMA_DBGINST0_FIELD0000_SHIFT)                       /* 0x00000001 */
#define DMA_DBGINST0_FIELD0003_SHIFT                       (8U)
#define DMA_DBGINST0_FIELD0003_MASK                        (0x7U << DMA_DBGINST0_FIELD0003_SHIFT)                       /* 0x00000700 */
#define DMA_DBGINST0_FIELD0002_SHIFT                       (16U)
#define DMA_DBGINST0_FIELD0002_MASK                        (0xFFU << DMA_DBGINST0_FIELD0002_SHIFT)                      /* 0x00FF0000 */
#define DMA_DBGINST0_FIELD0001_SHIFT                       (24U)
#define DMA_DBGINST0_FIELD0001_MASK                        (0xFFU << DMA_DBGINST0_FIELD0001_SHIFT)                      /* 0xFF000000 */
/* DBGINST1 */
#define DMA_DBGINST1_FIELD0000_SHIFT                       (0U)
#define DMA_DBGINST1_FIELD0000_MASK                        (0xFFU << DMA_DBGINST1_FIELD0000_SHIFT)                      /* 0x000000FF */
#define DMA_DBGINST1_FIELD0003_SHIFT                       (8U)
#define DMA_DBGINST1_FIELD0003_MASK                        (0xFFU << DMA_DBGINST1_FIELD0003_SHIFT)                      /* 0x0000FF00 */
#define DMA_DBGINST1_FIELD0002_SHIFT                       (16U)
#define DMA_DBGINST1_FIELD0002_MASK                        (0xFFU << DMA_DBGINST1_FIELD0002_SHIFT)                      /* 0x00FF0000 */
#define DMA_DBGINST1_FIELD0001_SHIFT                       (24U)
#define DMA_DBGINST1_FIELD0001_MASK                        (0xFFU << DMA_DBGINST1_FIELD0001_SHIFT)                      /* 0xFF000000 */
/* CR0 */
#define DMA_CR0_FIELD0000_SHIFT                            (0U)
#define DMA_CR0_FIELD0000_MASK                             (0x1U << DMA_CR0_FIELD0000_SHIFT)                            /* 0x00000001 */
#define DMA_CR0_FIELD0005_SHIFT                            (1U)
#define DMA_CR0_FIELD0005_MASK                             (0x1U << DMA_CR0_FIELD0005_SHIFT)                            /* 0x00000002 */
#define DMA_CR0_FIELD0004_SHIFT                            (2U)
#define DMA_CR0_FIELD0004_MASK                             (0x1U << DMA_CR0_FIELD0004_SHIFT)                            /* 0x00000004 */
#define DMA_CR0_FIELD0003_SHIFT                            (4U)
#define DMA_CR0_FIELD0003_MASK                             (0x7U << DMA_CR0_FIELD0003_SHIFT)                            /* 0x00000070 */
#define DMA_CR0_FIELD0002_SHIFT                            (12U)
#define DMA_CR0_FIELD0002_MASK                             (0x1FU << DMA_CR0_FIELD0002_SHIFT)                           /* 0x0001F000 */
#define DMA_CR0_FIELD0001_SHIFT                            (17U)
#define DMA_CR0_FIELD0001_MASK                             (0x1FU << DMA_CR0_FIELD0001_SHIFT)                           /* 0x003E0000 */
/* CR1 */
#define DMA_CR1_FIELD0000_SHIFT                            (0U)
#define DMA_CR1_FIELD0000_MASK                             (0x7U << DMA_CR1_FIELD0000_SHIFT)                            /* 0x00000007 */
#define DMA_CR1_FIELD0001_SHIFT                            (4U)
#define DMA_CR1_FIELD0001_MASK                             (0xFU << DMA_CR1_FIELD0001_SHIFT)                            /* 0x000000F0 */
/* CR2 */
#define DMA_CR2_FIELD0000_SHIFT                            (0U)
#define DMA_CR2_FIELD0000_MASK                             (0xFFFFFFFFU << DMA_CR2_FIELD0000_SHIFT)                     /* 0xFFFFFFFF */
/* CR3 */
#define DMA_CR3_FIELD0000_SHIFT                            (0U)
#define DMA_CR3_FIELD0000_MASK                             (0xFFFFFFFFU << DMA_CR3_FIELD0000_SHIFT)                     /* 0xFFFFFFFF */
/* CR4 */
#define DMA_CR4_FIELD0000_SHIFT                            (0U)
#define DMA_CR4_FIELD0000_MASK                             (0xFFFFFFFFU << DMA_CR4_FIELD0000_SHIFT)                     /* 0xFFFFFFFF */
/* CRDN */
#define DMA_CRDN_FIELD0000_SHIFT                           (0U)
#define DMA_CRDN_FIELD0000_MASK                            (0x7U << DMA_CRDN_FIELD0000_SHIFT)                           /* 0x00000007 */
#define DMA_CRDN_FIELD0005_SHIFT                           (4U)
#define DMA_CRDN_FIELD0005_MASK                            (0x7U << DMA_CRDN_FIELD0005_SHIFT)                           /* 0x00000070 */
#define DMA_CRDN_FIELD0004_SHIFT                           (8U)
#define DMA_CRDN_FIELD0004_MASK                            (0xFU << DMA_CRDN_FIELD0004_SHIFT)                           /* 0x00000F00 */
#define DMA_CRDN_FIELD0003_SHIFT                           (12U)
#define DMA_CRDN_FIELD0003_MASK                            (0x7U << DMA_CRDN_FIELD0003_SHIFT)                           /* 0x00007000 */
#define DMA_CRDN_FIELD0002_SHIFT                           (16U)
#define DMA_CRDN_FIELD0002_MASK                            (0xFU << DMA_CRDN_FIELD0002_SHIFT)                           /* 0x000F0000 */
#define DMA_CRDN_FIELD0001_SHIFT                           (20U)
#define DMA_CRDN_FIELD0001_MASK                            (0x3FFU << DMA_CRDN_FIELD0001_SHIFT)                         /* 0x3FF00000 */
/* WD */
#define DMA_WD_FIELD0000_SHIFT                             (0U)
#define DMA_WD_FIELD0000_MASK                              (0x1U << DMA_WD_FIELD0000_SHIFT)                             /* 0x00000001 */
/******************************************DSI*******************************************/
/* VERSION */
#define DSI_VERSION_OFFSET                                 (0x0)
#define DSI_VERSION_VERSION_SHIFT                          (0U)
#define DSI_VERSION_VERSION_MASK                           (0xFFFFFFFFU << DSI_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* PWR_UP */
#define DSI_PWR_UP_OFFSET                                  (0x4)
#define DSI_PWR_UP_SHUTDOWNZ_SHIFT                         (0U)
#define DSI_PWR_UP_SHUTDOWNZ_MASK                          (0x1U << DSI_PWR_UP_SHUTDOWNZ_SHIFT)                         /* 0x00000001 */
/* CLKMGR_CFG */
#define DSI_CLKMGR_CFG_OFFSET                              (0x8)
#define DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_SHIFT           (0U)
#define DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_MASK            (0xFFU << DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_SHIFT)          /* 0x000000FF */
#define DSI_CLKMGR_CFG_TO_CLK_DIVISION_SHIFT               (8U)
#define DSI_CLKMGR_CFG_TO_CLK_DIVISION_MASK                (0xFFU << DSI_CLKMGR_CFG_TO_CLK_DIVISION_SHIFT)              /* 0x0000FF00 */
/* DPI_VCID */
#define DSI_DPI_VCID_OFFSET                                (0xC)
#define DSI_DPI_VCID_DPI_VCID_SHIFT                        (0U)
#define DSI_DPI_VCID_DPI_VCID_MASK                         (0x3U << DSI_DPI_VCID_DPI_VCID_SHIFT)                        /* 0x00000003 */
/* DPI_COLOR_CODING */
#define DSI_DPI_COLOR_CODING_OFFSET                        (0x10)
#define DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_SHIFT        (0U)
#define DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_MASK         (0xFU << DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_SHIFT)        /* 0x0000000F */
#define DSI_DPI_COLOR_CODING_LOOSELY18_EN_SHIFT            (8U)
#define DSI_DPI_COLOR_CODING_LOOSELY18_EN_MASK             (0x1U << DSI_DPI_COLOR_CODING_LOOSELY18_EN_SHIFT)            /* 0x00000100 */
/* DPI_CFG_POL */
#define DSI_DPI_CFG_POL_OFFSET                             (0x14)
#define DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_SHIFT            (0U)
#define DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_MASK             (0x1U << DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_SHIFT)            /* 0x00000001 */
#define DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_SHIFT             (1U)
#define DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_MASK              (0x1U << DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_SHIFT)             /* 0x00000002 */
#define DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_SHIFT             (2U)
#define DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_MASK              (0x1U << DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_SHIFT)             /* 0x00000004 */
#define DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_SHIFT             (3U)
#define DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_MASK              (0x1U << DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_SHIFT)             /* 0x00000008 */
#define DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_SHIFT            (4U)
#define DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_MASK             (0x1U << DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_SHIFT)            /* 0x00000010 */
/* DPI_LP_CMD_TIM */
#define DSI_DPI_LP_CMD_TIM_OFFSET                          (0x18)
#define DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_SHIFT         (0U)
#define DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_MASK          (0xFFU << DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_SHIFT)        /* 0x000000FF */
#define DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_SHIFT        (16U)
#define DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_MASK         (0xFFU << DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_SHIFT)       /* 0x00FF0000 */
/* PCKHDL_CFG */
#define DSI_PCKHDL_CFG_OFFSET                              (0x2C)
#define DSI_PCKHDL_CFG_EOTP_TX_EN_SHIFT                    (0U)
#define DSI_PCKHDL_CFG_EOTP_TX_EN_MASK                     (0x1U << DSI_PCKHDL_CFG_EOTP_TX_EN_SHIFT)                    /* 0x00000001 */
#define DSI_PCKHDL_CFG_EOTP_RX_EN_SHIFT                    (1U)
#define DSI_PCKHDL_CFG_EOTP_RX_EN_MASK                     (0x1U << DSI_PCKHDL_CFG_EOTP_RX_EN_SHIFT)                    /* 0x00000002 */
#define DSI_PCKHDL_CFG_BTA_EN_SHIFT                        (2U)
#define DSI_PCKHDL_CFG_BTA_EN_MASK                         (0x1U << DSI_PCKHDL_CFG_BTA_EN_SHIFT)                        /* 0x00000004 */
#define DSI_PCKHDL_CFG_ECC_RX_EN_SHIFT                     (3U)
#define DSI_PCKHDL_CFG_ECC_RX_EN_MASK                      (0x1U << DSI_PCKHDL_CFG_ECC_RX_EN_SHIFT)                     /* 0x00000008 */
#define DSI_PCKHDL_CFG_CRC_RX_EN_SHIFT                     (4U)
#define DSI_PCKHDL_CFG_CRC_RX_EN_MASK                      (0x1U << DSI_PCKHDL_CFG_CRC_RX_EN_SHIFT)                     /* 0x00000010 */
/* GEN_VCID */
#define DSI_GEN_VCID_OFFSET                                (0x30)
#define DSI_GEN_VCID_GEN_VCID_RX_SHIFT                     (0U)
#define DSI_GEN_VCID_GEN_VCID_RX_MASK                      (0x3U << DSI_GEN_VCID_GEN_VCID_RX_SHIFT)                     /* 0x00000003 */
/* MODE_CFG */
#define DSI_MODE_CFG_OFFSET                                (0x34)
#define DSI_MODE_CFG_CMD_VIDEO_MODE_SHIFT                  (0U)
#define DSI_MODE_CFG_CMD_VIDEO_MODE_MASK                   (0x1U << DSI_MODE_CFG_CMD_VIDEO_MODE_SHIFT)                  /* 0x00000001 */
/* VID_MODE_CFG */
#define DSI_VID_MODE_CFG_OFFSET                            (0x38)
#define DSI_VID_MODE_CFG_VID_MODE_TYPE_SHIFT               (0U)
#define DSI_VID_MODE_CFG_VID_MODE_TYPE_MASK                (0x3U << DSI_VID_MODE_CFG_VID_MODE_TYPE_SHIFT)               /* 0x00000003 */
#define DSI_VID_MODE_CFG_LP_VSA_EN_SHIFT                   (8U)
#define DSI_VID_MODE_CFG_LP_VSA_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_VSA_EN_SHIFT)                   /* 0x00000100 */
#define DSI_VID_MODE_CFG_LP_VBP_EN_SHIFT                   (9U)
#define DSI_VID_MODE_CFG_LP_VBP_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_VBP_EN_SHIFT)                   /* 0x00000200 */
#define DSI_VID_MODE_CFG_LP_VFP_EN_SHIFT                   (10U)
#define DSI_VID_MODE_CFG_LP_VFP_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_VFP_EN_SHIFT)                   /* 0x00000400 */
#define DSI_VID_MODE_CFG_LP_VACT_EN_SHIFT                  (11U)
#define DSI_VID_MODE_CFG_LP_VACT_EN_MASK                   (0x1U << DSI_VID_MODE_CFG_LP_VACT_EN_SHIFT)                  /* 0x00000800 */
#define DSI_VID_MODE_CFG_LP_HBP_EN_SHIFT                   (12U)
#define DSI_VID_MODE_CFG_LP_HBP_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_HBP_EN_SHIFT)                   /* 0x00001000 */
#define DSI_VID_MODE_CFG_LP_HFP_EN_SHIFT                   (13U)
#define DSI_VID_MODE_CFG_LP_HFP_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_HFP_EN_SHIFT)                   /* 0x00002000 */
#define DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_SHIFT            (14U)
#define DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_MASK             (0x1U << DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_SHIFT)            /* 0x00004000 */
#define DSI_VID_MODE_CFG_LP_CMD_EN_SHIFT                   (15U)
#define DSI_VID_MODE_CFG_LP_CMD_EN_MASK                    (0x1U << DSI_VID_MODE_CFG_LP_CMD_EN_SHIFT)                   /* 0x00008000 */
#define DSI_VID_MODE_CFG_VGP_EN_SHIFT                      (16U)
#define DSI_VID_MODE_CFG_VGP_EN_MASK                       (0x1U << DSI_VID_MODE_CFG_VGP_EN_SHIFT)                      /* 0x00010000 */
#define DSI_VID_MODE_CFG_VGP_MODE_SHIFT                    (20U)
#define DSI_VID_MODE_CFG_VGP_MODE_MASK                     (0x1U << DSI_VID_MODE_CFG_VGP_MODE_SHIFT)                    /* 0x00100000 */
#define DSI_VID_MODE_CFG_VGP_ORIENTATION_SHIFT             (24U)
#define DSI_VID_MODE_CFG_VGP_ORIENTATION_MASK              (0x1U << DSI_VID_MODE_CFG_VGP_ORIENTATION_SHIFT)             /* 0x01000000 */
/* VID_PKT_SIZE */
#define DSI_VID_PKT_SIZE_OFFSET                            (0x3C)
#define DSI_VID_PKT_SIZE_VID_PKT_SIZE_SHIFT                (0U)
#define DSI_VID_PKT_SIZE_VID_PKT_SIZE_MASK                 (0x3FFFU << DSI_VID_PKT_SIZE_VID_PKT_SIZE_SHIFT)             /* 0x00003FFF */
/* VID_NUM_CHUNKS */
#define DSI_VID_NUM_CHUNKS_OFFSET                          (0x40)
#define DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_SHIFT            (0U)
#define DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_MASK             (0x1FFFU << DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_SHIFT)         /* 0x00001FFF */
/* VID_NULL_SIZE */
#define DSI_VID_NULL_SIZE_OFFSET                           (0x44)
#define DSI_VID_NULL_SIZE_VID_NULL_SIZE_SHIFT              (0U)
#define DSI_VID_NULL_SIZE_VID_NULL_SIZE_MASK               (0x1FFFU << DSI_VID_NULL_SIZE_VID_NULL_SIZE_SHIFT)           /* 0x00001FFF */
/* VID_HSA_TIME */
#define DSI_VID_HSA_TIME_OFFSET                            (0x48)
#define DSI_VID_HSA_TIME_VID_HSA_TIME_SHIFT                (0U)
#define DSI_VID_HSA_TIME_VID_HSA_TIME_MASK                 (0xFFFU << DSI_VID_HSA_TIME_VID_HSA_TIME_SHIFT)              /* 0x00000FFF */
/* VID_HBP_TIME */
#define DSI_VID_HBP_TIME_OFFSET                            (0x4C)
#define DSI_VID_HBP_TIME_VID_HBP_TIME_SHIFT                (0U)
#define DSI_VID_HBP_TIME_VID_HBP_TIME_MASK                 (0xFFFU << DSI_VID_HBP_TIME_VID_HBP_TIME_SHIFT)              /* 0x00000FFF */
/* VID_HLINE_TIME */
#define DSI_VID_HLINE_TIME_OFFSET                          (0x50)
#define DSI_VID_HLINE_TIME_VID_HLINE_TIME_SHIFT            (0U)
#define DSI_VID_HLINE_TIME_VID_HLINE_TIME_MASK             (0x7FFFU << DSI_VID_HLINE_TIME_VID_HLINE_TIME_SHIFT)         /* 0x00007FFF */
/* VID_VSA_LINES */
#define DSI_VID_VSA_LINES_OFFSET                           (0x54)
#define DSI_VID_VSA_LINES_VSA_LINES_SHIFT                  (0U)
#define DSI_VID_VSA_LINES_VSA_LINES_MASK                   (0x3FFU << DSI_VID_VSA_LINES_VSA_LINES_SHIFT)                /* 0x000003FF */
/* VID_VBP_LINES */
#define DSI_VID_VBP_LINES_OFFSET                           (0x58)
#define DSI_VID_VBP_LINES_VBP_LINE_SHIFT                   (0U)
#define DSI_VID_VBP_LINES_VBP_LINE_MASK                    (0x3FFU << DSI_VID_VBP_LINES_VBP_LINE_SHIFT)                 /* 0x000003FF */
/* VID_VFP_LINES */
#define DSI_VID_VFP_LINES_OFFSET                           (0x5C)
#define DSI_VID_VFP_LINES_VFP_LINES_SHIFT                  (0U)
#define DSI_VID_VFP_LINES_VFP_LINES_MASK                   (0x3FFU << DSI_VID_VFP_LINES_VFP_LINES_SHIFT)                /* 0x000003FF */
/* VID_VACTIVE_LINES */
#define DSI_VID_VACTIVE_LINES_OFFSET                       (0x60)
#define DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_SHIFT         (0U)
#define DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_MASK          (0x3FFFU << DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_SHIFT)      /* 0x00003FFF */
/* EDPI_CMD_SIZE */
#define DSI_EDPI_CMD_SIZE_OFFSET                           (0x64)
#define DSI_EDPI_CMD_SIZE_EDPI_ALLOWED_CMD_SIZE_SHIFT      (0U)
#define DSI_EDPI_CMD_SIZE_EDPI_ALLOWED_CMD_SIZE_MASK       (0xFFFFU << DSI_EDPI_CMD_SIZE_EDPI_ALLOWED_CMD_SIZE_SHIFT)   /* 0x0000FFFF */
/* CMD_MODE_CFG */
#define DSI_CMD_MODE_CFG_OFFSET                            (0x68)
#define DSI_CMD_MODE_CFG_TEAR_FX_EN_SHIFT                  (0U)
#define DSI_CMD_MODE_CFG_TEAR_FX_EN_MASK                   (0x1U << DSI_CMD_MODE_CFG_TEAR_FX_EN_SHIFT)                  /* 0x00000001 */
#define DSI_CMD_MODE_CFG_ACK_RQST_EN_SHIFT                 (1U)
#define DSI_CMD_MODE_CFG_ACK_RQST_EN_MASK                  (0x1U << DSI_CMD_MODE_CFG_ACK_RQST_EN_SHIFT)                 /* 0x00000002 */
#define DSI_CMD_MODE_CFG_GEN_SW_0P_TX_SHIFT                (8U)
#define DSI_CMD_MODE_CFG_GEN_SW_0P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SW_0P_TX_SHIFT)                /* 0x00000100 */
#define DSI_CMD_MODE_CFG_GEN_SW_1P_TX_SHIFT                (9U)
#define DSI_CMD_MODE_CFG_GEN_SW_1P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SW_1P_TX_SHIFT)                /* 0x00000200 */
#define DSI_CMD_MODE_CFG_GEN_SW_2P_TX_SHIFT                (10U)
#define DSI_CMD_MODE_CFG_GEN_SW_2P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SW_2P_TX_SHIFT)                /* 0x00000400 */
#define DSI_CMD_MODE_CFG_GEN_SR_0P_TX_SHIFT                (11U)
#define DSI_CMD_MODE_CFG_GEN_SR_0P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SR_0P_TX_SHIFT)                /* 0x00000800 */
#define DSI_CMD_MODE_CFG_GEN_SR_1P_TX_SHIFT                (12U)
#define DSI_CMD_MODE_CFG_GEN_SR_1P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SR_1P_TX_SHIFT)                /* 0x00001000 */
#define DSI_CMD_MODE_CFG_GEN_SR_2P_TX_SHIFT                (13U)
#define DSI_CMD_MODE_CFG_GEN_SR_2P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_GEN_SR_2P_TX_SHIFT)                /* 0x00002000 */
#define DSI_CMD_MODE_CFG_GEN_LW_TX_SHIFT                   (14U)
#define DSI_CMD_MODE_CFG_GEN_LW_TX_MASK                    (0x1U << DSI_CMD_MODE_CFG_GEN_LW_TX_SHIFT)                   /* 0x00004000 */
#define DSI_CMD_MODE_CFG_DCS_SW_0P_TX_SHIFT                (16U)
#define DSI_CMD_MODE_CFG_DCS_SW_0P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_DCS_SW_0P_TX_SHIFT)                /* 0x00010000 */
#define DSI_CMD_MODE_CFG_DCS_SW_1P_TX_SHIFT                (17U)
#define DSI_CMD_MODE_CFG_DCS_SW_1P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_DCS_SW_1P_TX_SHIFT)                /* 0x00020000 */
#define DSI_CMD_MODE_CFG_DCS_SR_0P_TX_SHIFT                (18U)
#define DSI_CMD_MODE_CFG_DCS_SR_0P_TX_MASK                 (0x1U << DSI_CMD_MODE_CFG_DCS_SR_0P_TX_SHIFT)                /* 0x00040000 */
#define DSI_CMD_MODE_CFG_DCS_LW_TX_SHIFT                   (19U)
#define DSI_CMD_MODE_CFG_DCS_LW_TX_MASK                    (0x1U << DSI_CMD_MODE_CFG_DCS_LW_TX_SHIFT)                   /* 0x00080000 */
#define DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_SHIFT             (24U)
#define DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_MASK              (0x1U << DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_SHIFT)             /* 0x01000000 */
/* GEN_HDR */
#define DSI_GEN_HDR_OFFSET                                 (0x6C)
#define DSI_GEN_HDR_GEN_DT_SHIFT                           (0U)
#define DSI_GEN_HDR_GEN_DT_MASK                            (0x3FU << DSI_GEN_HDR_GEN_DT_SHIFT)                          /* 0x0000003F */
#define DSI_GEN_HDR_GEN_VC_SHIFT                           (6U)
#define DSI_GEN_HDR_GEN_VC_MASK                            (0x3U << DSI_GEN_HDR_GEN_VC_SHIFT)                           /* 0x000000C0 */
#define DSI_GEN_HDR_GEN_WC_LSBYTE_SHIFT                    (8U)
#define DSI_GEN_HDR_GEN_WC_LSBYTE_MASK                     (0xFFU << DSI_GEN_HDR_GEN_WC_LSBYTE_SHIFT)                   /* 0x0000FF00 */
#define DSI_GEN_HDR_GEM_WC_MSBYTE_SHIFT                    (16U)
#define DSI_GEN_HDR_GEM_WC_MSBYTE_MASK                     (0xFFU << DSI_GEN_HDR_GEM_WC_MSBYTE_SHIFT)                   /* 0x00FF0000 */
/* GEN_PLD_DATA */
#define DSI_GEN_PLD_DATA_OFFSET                            (0x70)
#define DSI_GEN_PLD_DATA_GEN_PLD_B1_SHIFT                  (0U)
#define DSI_GEN_PLD_DATA_GEN_PLD_B1_MASK                   (0xFFU << DSI_GEN_PLD_DATA_GEN_PLD_B1_SHIFT)                 /* 0x000000FF */
#define DSI_GEN_PLD_DATA_GEN_PLD_B2_SHIFT                  (8U)
#define DSI_GEN_PLD_DATA_GEN_PLD_B2_MASK                   (0xFFU << DSI_GEN_PLD_DATA_GEN_PLD_B2_SHIFT)                 /* 0x0000FF00 */
#define DSI_GEN_PLD_DATA_GEN_PLD_B3_SHIFT                  (16U)
#define DSI_GEN_PLD_DATA_GEN_PLD_B3_MASK                   (0xFFU << DSI_GEN_PLD_DATA_GEN_PLD_B3_SHIFT)                 /* 0x00FF0000 */
#define DSI_GEN_PLD_DATA_GEN_PLD_B4_SHIFT                  (24U)
#define DSI_GEN_PLD_DATA_GEN_PLD_B4_MASK                   (0xFFU << DSI_GEN_PLD_DATA_GEN_PLD_B4_SHIFT)                 /* 0xFF000000 */
/* CMD_PKT_STATUS */
#define DSI_CMD_PKT_STATUS_OFFSET                          (0x74)
#define DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_SHIFT             (0U)
#define DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_MASK              (0x1U << DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_SHIFT)             /* 0x00000001 */
#define DSI_CMD_PKT_STATUS_GEN_CMD_FULL_SHIFT              (1U)
#define DSI_CMD_PKT_STATUS_GEN_CMD_FULL_MASK               (0x1U << DSI_CMD_PKT_STATUS_GEN_CMD_FULL_SHIFT)              /* 0x00000002 */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_SHIFT           (2U)
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_MASK            (0x1U << DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_SHIFT)           /* 0x00000004 */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_SHIFT            (3U)
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_MASK             (0x1U << DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_SHIFT)            /* 0x00000008 */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_SHIFT           (4U)
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_MASK            (0x1U << DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_SHIFT)           /* 0x00000010 */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_SHIFT            (5U)
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_MASK             (0x1U << DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_SHIFT)            /* 0x00000020 */
#define DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_SHIFT           (6U)
#define DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_MASK            (0x1U << DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_SHIFT)           /* 0x00000040 */
#define DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY_SHIFT             (8U)
#define DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY_MASK              (0x1U << DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY_SHIFT)             /* 0x00000100 */
#define DSI_CMD_PKT_STATUS_DBI_CMD_FULL_SHIFT              (9U)
#define DSI_CMD_PKT_STATUS_DBI_CMD_FULL_MASK               (0x1U << DSI_CMD_PKT_STATUS_DBI_CMD_FULL_SHIFT)              /* 0x00000200 */
#define DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY_SHIFT           (10U)
#define DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY_MASK            (0x1U << DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY_SHIFT)           /* 0x00000400 */
#define DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL_SHIFT            (11U)
#define DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL_MASK             (0x1U << DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL_SHIFT)            /* 0x00000800 */
#define DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY_SHIFT           (12U)
#define DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY_MASK            (0x1U << DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY_SHIFT)           /* 0x00001000 */
#define DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL_SHIFT            (13U)
#define DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL_MASK             (0x1U << DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL_SHIFT)            /* 0x00002000 */
#define DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY_SHIFT           (14U)
#define DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY_MASK            (0x1U << DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY_SHIFT)           /* 0x00004000 */
/* TO_CNT_CFG */
#define DSI_TO_CNT_CFG_OFFSET                              (0x78)
#define DSI_TO_CNT_CFG_LPRX_TO_CNT_SHIFT                   (0U)
#define DSI_TO_CNT_CFG_LPRX_TO_CNT_MASK                    (0xFFFFU << DSI_TO_CNT_CFG_LPRX_TO_CNT_SHIFT)                /* 0x0000FFFF */
#define DSI_TO_CNT_CFG_HSTX_TO_CNT_SHIFT                   (16U)
#define DSI_TO_CNT_CFG_HSTX_TO_CNT_MASK                    (0xFFFFU << DSI_TO_CNT_CFG_HSTX_TO_CNT_SHIFT)                /* 0xFFFF0000 */
/* HS_RD_TO_CNT */
#define DSI_HS_RD_TO_CNT_OFFSET                            (0x7C)
#define DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_SHIFT                (0U)
#define DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_MASK                 (0xFFFFU << DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_SHIFT)             /* 0x0000FFFF */
/* LP_RD_TO_CNT */
#define DSI_LP_RD_TO_CNT_OFFSET                            (0x80)
#define DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_SHIFT                (0U)
#define DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_MASK                 (0xFFFFU << DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_SHIFT)             /* 0x0000FFFF */
/* HS_WR_TO_CNT */
#define DSI_HS_WR_TO_CNT_OFFSET                            (0x84)
#define DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_SHIFT                (0U)
#define DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_MASK                 (0xFFFFU << DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_SHIFT)             /* 0x0000FFFF */
#define DSI_HS_WR_TO_CNT_PRESP_TO_MODE_SHIFT               (24U)
#define DSI_HS_WR_TO_CNT_PRESP_TO_MODE_MASK                (0x1U << DSI_HS_WR_TO_CNT_PRESP_TO_MODE_SHIFT)               /* 0x01000000 */
/* LP_WR_TO_CNT */
#define DSI_LP_WR_TO_CNT_OFFSET                            (0x88)
#define DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_SHIFT                (0U)
#define DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_MASK                 (0xFFFFU << DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_SHIFT)             /* 0x0000FFFF */
/* BTA_TO_CNT */
#define DSI_BTA_TO_CNT_OFFSET                              (0x8C)
#define DSI_BTA_TO_CNT_BTA_TO_CNT_SHIFT                    (0U)
#define DSI_BTA_TO_CNT_BTA_TO_CNT_MASK                     (0xFFFFU << DSI_BTA_TO_CNT_BTA_TO_CNT_SHIFT)                 /* 0x0000FFFF */
/* SDF_3D */
#define DSI_SDF_3D_OFFSET                                  (0x90)
#define DSI_SDF_3D_MODE_3D_SHIFT                           (0U)
#define DSI_SDF_3D_MODE_3D_MASK                            (0x3U << DSI_SDF_3D_MODE_3D_SHIFT)                           /* 0x00000003 */
#define DSI_SDF_3D_FORMAT_3D_SHIFT                         (2U)
#define DSI_SDF_3D_FORMAT_3D_MASK                          (0x3U << DSI_SDF_3D_FORMAT_3D_SHIFT)                         /* 0x0000000C */
#define DSI_SDF_3D_SECOND_VSYNC_SHIFT                      (4U)
#define DSI_SDF_3D_SECOND_VSYNC_MASK                       (0x1U << DSI_SDF_3D_SECOND_VSYNC_SHIFT)                      /* 0x00000010 */
#define DSI_SDF_3D_RIGHT_FIRST_SHIFT                       (5U)
#define DSI_SDF_3D_RIGHT_FIRST_MASK                        (0x1U << DSI_SDF_3D_RIGHT_FIRST_SHIFT)                       /* 0x00000020 */
#define DSI_SDF_3D_SEND_3D_CFG_SHIFT                       (16U)
#define DSI_SDF_3D_SEND_3D_CFG_MASK                        (0x1U << DSI_SDF_3D_SEND_3D_CFG_SHIFT)                       /* 0x00010000 */
/* LPCLK_CTRL */
#define DSI_LPCLK_CTRL_OFFSET                              (0x94)
#define DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_SHIFT            (0U)
#define DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_MASK             (0x1U << DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_SHIFT)            /* 0x00000001 */
#define DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_SHIFT             (1U)
#define DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_MASK              (0x1U << DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_SHIFT)             /* 0x00000002 */
/* PHY_TMR_LPCLK_CFG */
#define DSI_PHY_TMR_LPCLK_CFG_OFFSET                       (0x98)
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_SHIFT      (0U)
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_MASK       (0x3FFU << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_SHIFT)    /* 0x000003FF */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_SHIFT      (16U)
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_MASK       (0x3FFU << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_SHIFT)    /* 0x03FF0000 */
/* PHY_TMR_CFG */
#define DSI_PHY_TMR_CFG_OFFSET                             (0x9C)
#define DSI_PHY_TMR_CFG_MAX_RD_TIME_SHIFT                  (0U)
#define DSI_PHY_TMR_CFG_MAX_RD_TIME_MASK                   (0x7FFFU << DSI_PHY_TMR_CFG_MAX_RD_TIME_SHIFT)               /* 0x00007FFF */
#define DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_SHIFT               (16U)
#define DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_MASK                (0xFFU << DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_SHIFT)              /* 0x00FF0000 */
#define DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_SHIFT               (24U)
#define DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_MASK                (0xFFU << DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_SHIFT)              /* 0xFF000000 */
/* PHY_RSTZ */
#define DSI_PHY_RSTZ_OFFSET                                (0xA0)
#define DSI_PHY_RSTZ_PHY_SHUTDOWNZ_SHIFT                   (0U)
#define DSI_PHY_RSTZ_PHY_SHUTDOWNZ_MASK                    (0x1U << DSI_PHY_RSTZ_PHY_SHUTDOWNZ_SHIFT)                   /* 0x00000001 */
#define DSI_PHY_RSTZ_PHY_RSTZ_SHIFT                        (1U)
#define DSI_PHY_RSTZ_PHY_RSTZ_MASK                         (0x1U << DSI_PHY_RSTZ_PHY_RSTZ_SHIFT)                        /* 0x00000002 */
#define DSI_PHY_RSTZ_PHY_ENABLECLK_SHIFT                   (2U)
#define DSI_PHY_RSTZ_PHY_ENABLECLK_MASK                    (0x1U << DSI_PHY_RSTZ_PHY_ENABLECLK_SHIFT)                   /* 0x00000004 */
#define DSI_PHY_RSTZ_PHY_FORCEPLL_SHIFT                    (3U)
#define DSI_PHY_RSTZ_PHY_FORCEPLL_MASK                     (0x1U << DSI_PHY_RSTZ_PHY_FORCEPLL_SHIFT)                    /* 0x00000008 */
/* PHY_IF_CFG */
#define DSI_PHY_IF_CFG_OFFSET                              (0xA4)
#define DSI_PHY_IF_CFG_N_LANES_SHIFT                       (0U)
#define DSI_PHY_IF_CFG_N_LANES_MASK                        (0x3U << DSI_PHY_IF_CFG_N_LANES_SHIFT)                       /* 0x00000003 */
#define DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_SHIFT            (8U)
#define DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_MASK             (0xFFU << DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_SHIFT)           /* 0x0000FF00 */
/* PHY_STATUS */
#define DSI_PHY_STATUS_OFFSET                              (0xB0)
#define DSI_PHY_STATUS_PHY_LOCK_SHIFT                      (0U)
#define DSI_PHY_STATUS_PHY_LOCK_MASK                       (0x1U << DSI_PHY_STATUS_PHY_LOCK_SHIFT)                      /* 0x00000001 */
#define DSI_PHY_STATUS_PHY_DIRECTION_SHIFT                 (1U)
#define DSI_PHY_STATUS_PHY_DIRECTION_MASK                  (0x1U << DSI_PHY_STATUS_PHY_DIRECTION_SHIFT)                 /* 0x00000002 */
#define DSI_PHY_STATUS_HPY_STOPSTATECLKLANE_SHIFT          (2U)
#define DSI_PHY_STATUS_HPY_STOPSTATECLKLANE_MASK           (0x1U << DSI_PHY_STATUS_HPY_STOPSTATECLKLANE_SHIFT)          /* 0x00000004 */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_SHIFT          (3U)
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_MASK           (0x1U << DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_SHIFT)          /* 0x00000008 */
#define DSI_PHY_STATUS_PHY_STOPSTATE0LANE_SHIFT            (4U)
#define DSI_PHY_STATUS_PHY_STOPSTATE0LANE_MASK             (0x1U << DSI_PHY_STATUS_PHY_STOPSTATE0LANE_SHIFT)            /* 0x00000010 */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_SHIFT        (5U)
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_MASK         (0x1U << DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_SHIFT)        /* 0x00000020 */
#define DSI_PHY_STATUS_PHY_RXULPSESC0LANE_SHIFT            (6U)
#define DSI_PHY_STATUS_PHY_RXULPSESC0LANE_MASK             (0x1U << DSI_PHY_STATUS_PHY_RXULPSESC0LANE_SHIFT)            /* 0x00000040 */
#define DSI_PHY_STATUS_PHY_STOPSTATE1LANE_SHIFT            (7U)
#define DSI_PHY_STATUS_PHY_STOPSTATE1LANE_MASK             (0x1U << DSI_PHY_STATUS_PHY_STOPSTATE1LANE_SHIFT)            /* 0x00000080 */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_SHIFT        (8U)
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_MASK         (0x1U << DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_SHIFT)        /* 0x00000100 */
#define DSI_PHY_STATUS_PHY_STOPSTATE2LANE_SHIFT            (9U)
#define DSI_PHY_STATUS_PHY_STOPSTATE2LANE_MASK             (0x1U << DSI_PHY_STATUS_PHY_STOPSTATE2LANE_SHIFT)            /* 0x00000200 */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT2LANE_SHIFT        (10U)
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT2LANE_MASK         (0x1U << DSI_PHY_STATUS_PHY_ULPSACTIVENOT2LANE_SHIFT)        /* 0x00000400 */
#define DSI_PHY_STATUS_PHY_STOPSTATELANE_SHIFT             (11U)
#define DSI_PHY_STATUS_PHY_STOPSTATELANE_MASK              (0x1U << DSI_PHY_STATUS_PHY_STOPSTATELANE_SHIFT)             /* 0x00000800 */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT3LANE_SHIFT        (12U)
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT3LANE_MASK         (0x1U << DSI_PHY_STATUS_PHY_ULPSACTIVENOT3LANE_SHIFT)        /* 0x00001000 */
/* INT_ST0 */
#define DSI_INT_ST0_OFFSET                                 (0xBC)
#define DSI_INT_ST0_ACK_WITH_ERR_0_SHIFT                   (0U)
#define DSI_INT_ST0_ACK_WITH_ERR_0_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_0_SHIFT)                   /* 0x00000001 */
#define DSI_INT_ST0_ACK_WITH_ERR_1_SHIFT                   (1U)
#define DSI_INT_ST0_ACK_WITH_ERR_1_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_1_SHIFT)                   /* 0x00000002 */
#define DSI_INT_ST0_ACK_WITH_ERR_2_SHIFT                   (2U)
#define DSI_INT_ST0_ACK_WITH_ERR_2_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_2_SHIFT)                   /* 0x00000004 */
#define DSI_INT_ST0_ACK_WITH_ERR_3_SHIFT                   (3U)
#define DSI_INT_ST0_ACK_WITH_ERR_3_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_3_SHIFT)                   /* 0x00000008 */
#define DSI_INT_ST0_ACK_WITH_ERR_4_SHIFT                   (4U)
#define DSI_INT_ST0_ACK_WITH_ERR_4_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_4_SHIFT)                   /* 0x00000010 */
#define DSI_INT_ST0_ACK_WITH_ERR_5_SHIFT                   (5U)
#define DSI_INT_ST0_ACK_WITH_ERR_5_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_5_SHIFT)                   /* 0x00000020 */
#define DSI_INT_ST0_ACK_WITH_ERR_6_SHIFT                   (6U)
#define DSI_INT_ST0_ACK_WITH_ERR_6_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_6_SHIFT)                   /* 0x00000040 */
#define DSI_INT_ST0_ACK_WITH_ERR_7_SHIFT                   (7U)
#define DSI_INT_ST0_ACK_WITH_ERR_7_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_7_SHIFT)                   /* 0x00000080 */
#define DSI_INT_ST0_ACK_WITH_ERR_8_SHIFT                   (8U)
#define DSI_INT_ST0_ACK_WITH_ERR_8_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_8_SHIFT)                   /* 0x00000100 */
#define DSI_INT_ST0_ACK_WITH_ERR_9_SHIFT                   (9U)
#define DSI_INT_ST0_ACK_WITH_ERR_9_MASK                    (0x1U << DSI_INT_ST0_ACK_WITH_ERR_9_SHIFT)                   /* 0x00000200 */
#define DSI_INT_ST0_ACK_WITH_ERR_10_SHIFT                  (10U)
#define DSI_INT_ST0_ACK_WITH_ERR_10_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_10_SHIFT)                  /* 0x00000400 */
#define DSI_INT_ST0_ACK_WITH_ERR_11_SHIFT                  (11U)
#define DSI_INT_ST0_ACK_WITH_ERR_11_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_11_SHIFT)                  /* 0x00000800 */
#define DSI_INT_ST0_ACK_WITH_ERR_12_SHIFT                  (12U)
#define DSI_INT_ST0_ACK_WITH_ERR_12_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_12_SHIFT)                  /* 0x00001000 */
#define DSI_INT_ST0_ACK_WITH_ERR_13_SHIFT                  (13U)
#define DSI_INT_ST0_ACK_WITH_ERR_13_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_13_SHIFT)                  /* 0x00002000 */
#define DSI_INT_ST0_ACK_WITH_ERR_14_SHIFT                  (14U)
#define DSI_INT_ST0_ACK_WITH_ERR_14_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_14_SHIFT)                  /* 0x00004000 */
#define DSI_INT_ST0_ACK_WITH_ERR_15_SHIFT                  (15U)
#define DSI_INT_ST0_ACK_WITH_ERR_15_MASK                   (0x1U << DSI_INT_ST0_ACK_WITH_ERR_15_SHIFT)                  /* 0x00008000 */
#define DSI_INT_ST0_DPHY_ERRORS_0_SHIFT                    (16U)
#define DSI_INT_ST0_DPHY_ERRORS_0_MASK                     (0x1U << DSI_INT_ST0_DPHY_ERRORS_0_SHIFT)                    /* 0x00010000 */
#define DSI_INT_ST0_DPHY_ERRORS_1_SHIFT                    (17U)
#define DSI_INT_ST0_DPHY_ERRORS_1_MASK                     (0x1U << DSI_INT_ST0_DPHY_ERRORS_1_SHIFT)                    /* 0x00020000 */
#define DSI_INT_ST0_DPHY_ERRORS_2_SHIFT                    (18U)
#define DSI_INT_ST0_DPHY_ERRORS_2_MASK                     (0x1U << DSI_INT_ST0_DPHY_ERRORS_2_SHIFT)                    /* 0x00040000 */
#define DSI_INT_ST0_DPHY_ERRORS_3_SHIFT                    (19U)
#define DSI_INT_ST0_DPHY_ERRORS_3_MASK                     (0x1U << DSI_INT_ST0_DPHY_ERRORS_3_SHIFT)                    /* 0x00080000 */
#define DSI_INT_ST0_DPHY_ERRORS_4_SHIFT                    (20U)
#define DSI_INT_ST0_DPHY_ERRORS_4_MASK                     (0x1U << DSI_INT_ST0_DPHY_ERRORS_4_SHIFT)                    /* 0x00100000 */
/* INT_ST1 */
#define DSI_INT_ST1_OFFSET                                 (0xC0)
#define DSI_INT_ST1_TO_HS_TX_SHIFT                         (0U)
#define DSI_INT_ST1_TO_HS_TX_MASK                          (0x1U << DSI_INT_ST1_TO_HS_TX_SHIFT)                         /* 0x00000001 */
#define DSI_INT_ST1_TO_LP_RX_SHIFT                         (1U)
#define DSI_INT_ST1_TO_LP_RX_MASK                          (0x1U << DSI_INT_ST1_TO_LP_RX_SHIFT)                         /* 0x00000002 */
#define DSI_INT_ST1_ECC_SINGLE_ERR_SHIFT                   (2U)
#define DSI_INT_ST1_ECC_SINGLE_ERR_MASK                    (0x1U << DSI_INT_ST1_ECC_SINGLE_ERR_SHIFT)                   /* 0x00000004 */
#define DSI_INT_ST1_ECC_MULTI_ERR_SHIFT                    (3U)
#define DSI_INT_ST1_ECC_MULTI_ERR_MASK                     (0x1U << DSI_INT_ST1_ECC_MULTI_ERR_SHIFT)                    /* 0x00000008 */
#define DSI_INT_ST1_CRC_ERR_SHIFT                          (4U)
#define DSI_INT_ST1_CRC_ERR_MASK                           (0x1U << DSI_INT_ST1_CRC_ERR_SHIFT)                          /* 0x00000010 */
#define DSI_INT_ST1_PKT_SIZE_ERR_SHIFT                     (5U)
#define DSI_INT_ST1_PKT_SIZE_ERR_MASK                      (0x1U << DSI_INT_ST1_PKT_SIZE_ERR_SHIFT)                     /* 0x00000020 */
#define DSI_INT_ST1_EOPT_ERR_SHIFT                         (6U)
#define DSI_INT_ST1_EOPT_ERR_MASK                          (0x1U << DSI_INT_ST1_EOPT_ERR_SHIFT)                         /* 0x00000040 */
#define DSI_INT_ST1_DPI_PLD_WR_ERR_SHIFT                   (7U)
#define DSI_INT_ST1_DPI_PLD_WR_ERR_MASK                    (0x1U << DSI_INT_ST1_DPI_PLD_WR_ERR_SHIFT)                   /* 0x00000080 */
#define DSI_INT_ST1_GEN_CMD_WR_ERR_SHIFT                   (8U)
#define DSI_INT_ST1_GEN_CMD_WR_ERR_MASK                    (0x1U << DSI_INT_ST1_GEN_CMD_WR_ERR_SHIFT)                   /* 0x00000100 */
#define DSI_INT_ST1_GEN_PLD_WR_ERR_SHIFT                   (9U)
#define DSI_INT_ST1_GEN_PLD_WR_ERR_MASK                    (0x1U << DSI_INT_ST1_GEN_PLD_WR_ERR_SHIFT)                   /* 0x00000200 */
#define DSI_INT_ST1_GEN_PLD_SEND_ERR_SHIFT                 (10U)
#define DSI_INT_ST1_GEN_PLD_SEND_ERR_MASK                  (0x1U << DSI_INT_ST1_GEN_PLD_SEND_ERR_SHIFT)                 /* 0x00000400 */
#define DSI_INT_ST1_GEN_PLD_RD_ERR_SHIFT                   (11U)
#define DSI_INT_ST1_GEN_PLD_RD_ERR_MASK                    (0x1U << DSI_INT_ST1_GEN_PLD_RD_ERR_SHIFT)                   /* 0x00000800 */
#define DSI_INT_ST1_GEN_PLD_RECEV_ERR_SHIFT                (12U)
#define DSI_INT_ST1_GEN_PLD_RECEV_ERR_MASK                 (0x1U << DSI_INT_ST1_GEN_PLD_RECEV_ERR_SHIFT)                /* 0x00001000 */
#define DSI_INT_ST1_DBI_CMD_WR_ERR_SHIFT                   (13U)
#define DSI_INT_ST1_DBI_CMD_WR_ERR_MASK                    (0x1U << DSI_INT_ST1_DBI_CMD_WR_ERR_SHIFT)                   /* 0x00002000 */
#define DSI_INT_ST1_DBI_PLD_WR_ERR_SHIFT                   (14U)
#define DSI_INT_ST1_DBI_PLD_WR_ERR_MASK                    (0x1U << DSI_INT_ST1_DBI_PLD_WR_ERR_SHIFT)                   /* 0x00004000 */
#define DSI_INT_ST1_DBI_PLD_RD_ERR_SHIFT                   (15U)
#define DSI_INT_ST1_DBI_PLD_RD_ERR_MASK                    (0x1U << DSI_INT_ST1_DBI_PLD_RD_ERR_SHIFT)                   /* 0x00008000 */
#define DSI_INT_ST1_DBI_PLD_RECV_ERR_SHIFT                 (16U)
#define DSI_INT_ST1_DBI_PLD_RECV_ERR_MASK                  (0x1U << DSI_INT_ST1_DBI_PLD_RECV_ERR_SHIFT)                 /* 0x00010000 */
#define DSI_INT_ST1_DBI_ILEGAL_COMM_ERR_SHIFT              (17U)
#define DSI_INT_ST1_DBI_ILEGAL_COMM_ERR_MASK               (0x1U << DSI_INT_ST1_DBI_ILEGAL_COMM_ERR_SHIFT)              /* 0x00020000 */
/* INT_MSK0 */
#define DSI_INT_MSK0_OFFSET                                (0xC4)
#define DSI_INT_MSK0_ACK_WITH_ERR_0_SHIFT                  (0U)
#define DSI_INT_MSK0_ACK_WITH_ERR_0_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_0_SHIFT)                  /* 0x00000001 */
#define DSI_INT_MSK0_ACK_WITH_ERR_1_SHIFT                  (1U)
#define DSI_INT_MSK0_ACK_WITH_ERR_1_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_1_SHIFT)                  /* 0x00000002 */
#define DSI_INT_MSK0_ACK_WITH_ERR_2_SHIFT                  (2U)
#define DSI_INT_MSK0_ACK_WITH_ERR_2_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_2_SHIFT)                  /* 0x00000004 */
#define DSI_INT_MSK0_ACK_WITH_ERR_3_SHIFT                  (3U)
#define DSI_INT_MSK0_ACK_WITH_ERR_3_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_3_SHIFT)                  /* 0x00000008 */
#define DSI_INT_MSK0_ACK_WITH_ERR_4_SHIFT                  (4U)
#define DSI_INT_MSK0_ACK_WITH_ERR_4_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_4_SHIFT)                  /* 0x00000010 */
#define DSI_INT_MSK0_ACK_WITH_ERR_5_SHIFT                  (5U)
#define DSI_INT_MSK0_ACK_WITH_ERR_5_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_5_SHIFT)                  /* 0x00000020 */
#define DSI_INT_MSK0_ACK_WITH_ERR_6_SHIFT                  (6U)
#define DSI_INT_MSK0_ACK_WITH_ERR_6_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_6_SHIFT)                  /* 0x00000040 */
#define DSI_INT_MSK0_ACK_WITH_ERR_7_SHIFT                  (7U)
#define DSI_INT_MSK0_ACK_WITH_ERR_7_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_7_SHIFT)                  /* 0x00000080 */
#define DSI_INT_MSK0_ACK_WITH_ERR_8_SHIFT                  (8U)
#define DSI_INT_MSK0_ACK_WITH_ERR_8_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_8_SHIFT)                  /* 0x00000100 */
#define DSI_INT_MSK0_ACK_WITH_ERR_9_SHIFT                  (9U)
#define DSI_INT_MSK0_ACK_WITH_ERR_9_MASK                   (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_9_SHIFT)                  /* 0x00000200 */
#define DSI_INT_MSK0_ACK_WITH_ERR_10_SHIFT                 (10U)
#define DSI_INT_MSK0_ACK_WITH_ERR_10_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_10_SHIFT)                 /* 0x00000400 */
#define DSI_INT_MSK0_ACK_WITH_ERR_11_SHIFT                 (11U)
#define DSI_INT_MSK0_ACK_WITH_ERR_11_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_11_SHIFT)                 /* 0x00000800 */
#define DSI_INT_MSK0_ACK_WITH_ERR_12_SHIFT                 (12U)
#define DSI_INT_MSK0_ACK_WITH_ERR_12_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_12_SHIFT)                 /* 0x00001000 */
#define DSI_INT_MSK0_ACK_WITH_ERR_13_SHIFT                 (13U)
#define DSI_INT_MSK0_ACK_WITH_ERR_13_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_13_SHIFT)                 /* 0x00002000 */
#define DSI_INT_MSK0_ACK_WITH_ERR_14_SHIFT                 (14U)
#define DSI_INT_MSK0_ACK_WITH_ERR_14_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_14_SHIFT)                 /* 0x00004000 */
#define DSI_INT_MSK0_ACK_WITH_ERR_15_SHIFT                 (15U)
#define DSI_INT_MSK0_ACK_WITH_ERR_15_MASK                  (0x1U << DSI_INT_MSK0_ACK_WITH_ERR_15_SHIFT)                 /* 0x00008000 */
#define DSI_INT_MSK0_DPHY_ERRORS_0_SHIFT                   (16U)
#define DSI_INT_MSK0_DPHY_ERRORS_0_MASK                    (0x1U << DSI_INT_MSK0_DPHY_ERRORS_0_SHIFT)                   /* 0x00010000 */
#define DSI_INT_MSK0_DPHY_ERRORS_1_SHIFT                   (17U)
#define DSI_INT_MSK0_DPHY_ERRORS_1_MASK                    (0x1U << DSI_INT_MSK0_DPHY_ERRORS_1_SHIFT)                   /* 0x00020000 */
#define DSI_INT_MSK0_DPHY_ERRORS_2_SHIFT                   (18U)
#define DSI_INT_MSK0_DPHY_ERRORS_2_MASK                    (0x1U << DSI_INT_MSK0_DPHY_ERRORS_2_SHIFT)                   /* 0x00040000 */
#define DSI_INT_MSK0_DPHY_ERRORS_3_SHIFT                   (19U)
#define DSI_INT_MSK0_DPHY_ERRORS_3_MASK                    (0x1U << DSI_INT_MSK0_DPHY_ERRORS_3_SHIFT)                   /* 0x00080000 */
#define DSI_INT_MSK0_DPHY_ERRORS_4_SHIFT                   (20U)
#define DSI_INT_MSK0_DPHY_ERRORS_4_MASK                    (0x1U << DSI_INT_MSK0_DPHY_ERRORS_4_SHIFT)                   /* 0x00100000 */
/* INT_MSK1 */
#define DSI_INT_MSK1_OFFSET                                (0xC8)
#define DSI_INT_MSK1_TO_HS_TX_SHIFT                        (0U)
#define DSI_INT_MSK1_TO_HS_TX_MASK                         (0x1U << DSI_INT_MSK1_TO_HS_TX_SHIFT)                        /* 0x00000001 */
#define DSI_INT_MSK1_TO_LP_RX_SHIFT                        (1U)
#define DSI_INT_MSK1_TO_LP_RX_MASK                         (0x1U << DSI_INT_MSK1_TO_LP_RX_SHIFT)                        /* 0x00000002 */
#define DSI_INT_MSK1_ECC_SINGLE_ERR_SHIFT                  (2U)
#define DSI_INT_MSK1_ECC_SINGLE_ERR_MASK                   (0x1U << DSI_INT_MSK1_ECC_SINGLE_ERR_SHIFT)                  /* 0x00000004 */
#define DSI_INT_MSK1_ECC_MILTI_ERR_SHIFT                   (3U)
#define DSI_INT_MSK1_ECC_MILTI_ERR_MASK                    (0x1U << DSI_INT_MSK1_ECC_MILTI_ERR_SHIFT)                   /* 0x00000008 */
#define DSI_INT_MSK1_CRC_ERR_SHIFT                         (4U)
#define DSI_INT_MSK1_CRC_ERR_MASK                          (0x1U << DSI_INT_MSK1_CRC_ERR_SHIFT)                         /* 0x00000010 */
#define DSI_INT_MSK1_PKT_SIZE_ERR_SHIFT                    (5U)
#define DSI_INT_MSK1_PKT_SIZE_ERR_MASK                     (0x1U << DSI_INT_MSK1_PKT_SIZE_ERR_SHIFT)                    /* 0x00000020 */
#define DSI_INT_MSK1_EOPT_ERR_SHIFT                        (6U)
#define DSI_INT_MSK1_EOPT_ERR_MASK                         (0x1U << DSI_INT_MSK1_EOPT_ERR_SHIFT)                        /* 0x00000040 */
#define DSI_INT_MSK1_DPI_PLD_WR_ERR_SHIFT                  (7U)
#define DSI_INT_MSK1_DPI_PLD_WR_ERR_MASK                   (0x1U << DSI_INT_MSK1_DPI_PLD_WR_ERR_SHIFT)                  /* 0x00000080 */
#define DSI_INT_MSK1_GEN_CMD_WR_ERR_SHIFT                  (8U)
#define DSI_INT_MSK1_GEN_CMD_WR_ERR_MASK                   (0x1U << DSI_INT_MSK1_GEN_CMD_WR_ERR_SHIFT)                  /* 0x00000100 */
#define DSI_INT_MSK1_GEN_PLD_WR_ERR_SHIFT                  (9U)
#define DSI_INT_MSK1_GEN_PLD_WR_ERR_MASK                   (0x1U << DSI_INT_MSK1_GEN_PLD_WR_ERR_SHIFT)                  /* 0x00000200 */
#define DSI_INT_MSK1_GEN_PLD_SEND_ERR_SHIFT                (10U)
#define DSI_INT_MSK1_GEN_PLD_SEND_ERR_MASK                 (0x1U << DSI_INT_MSK1_GEN_PLD_SEND_ERR_SHIFT)                /* 0x00000400 */
#define DSI_INT_MSK1_GEN_PLD_RD_ERR_SHIFT                  (11U)
#define DSI_INT_MSK1_GEN_PLD_RD_ERR_MASK                   (0x1U << DSI_INT_MSK1_GEN_PLD_RD_ERR_SHIFT)                  /* 0x00000800 */
#define DSI_INT_MSK1_GEN_PLD_REVEV_ERR_SHIFT               (12U)
#define DSI_INT_MSK1_GEN_PLD_REVEV_ERR_MASK                (0x1U << DSI_INT_MSK1_GEN_PLD_REVEV_ERR_SHIFT)               /* 0x00001000 */
#define DSI_INT_MSK1_DBI_CMD_WR_ERR_SHIFT                  (13U)
#define DSI_INT_MSK1_DBI_CMD_WR_ERR_MASK                   (0x1U << DSI_INT_MSK1_DBI_CMD_WR_ERR_SHIFT)                  /* 0x00002000 */
#define DSI_INT_MSK1_DBI_PLD_WR_ERR_SHIFT                  (14U)
#define DSI_INT_MSK1_DBI_PLD_WR_ERR_MASK                   (0x1U << DSI_INT_MSK1_DBI_PLD_WR_ERR_SHIFT)                  /* 0x00004000 */
#define DSI_INT_MSK1_DBI_PLD_RD_ERR_SHIFT                  (15U)
#define DSI_INT_MSK1_DBI_PLD_RD_ERR_MASK                   (0x1U << DSI_INT_MSK1_DBI_PLD_RD_ERR_SHIFT)                  /* 0x00008000 */
#define DSI_INT_MSK1_DBI_PLD_RECV_ERR_SHIFT                (16U)
#define DSI_INT_MSK1_DBI_PLD_RECV_ERR_MASK                 (0x1U << DSI_INT_MSK1_DBI_PLD_RECV_ERR_SHIFT)                /* 0x00010000 */
#define DSI_INT_MSK1_DBI_ILEGAL_COMM_ERR_SHIFT             (17U)
#define DSI_INT_MSK1_DBI_ILEGAL_COMM_ERR_MASK              (0x1U << DSI_INT_MSK1_DBI_ILEGAL_COMM_ERR_SHIFT)             /* 0x00020000 */
/* INT_FORCE0 */
#define DSI_INT_FORCE0_OFFSET                              (0xD8)
#define DSI_INT_FORCE0_ACK_WITH_ERR_0_SHIFT                (0U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_0_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_0_SHIFT)                /* 0x00000001 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_1_SHIFT                (1U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_1_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_1_SHIFT)                /* 0x00000002 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_2_SHIFT                (2U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_2_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_2_SHIFT)                /* 0x00000004 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_3_SHIFT                (3U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_3_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_3_SHIFT)                /* 0x00000008 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_4_SHIFT                (4U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_4_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_4_SHIFT)                /* 0x00000010 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_5_SHIFT                (5U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_5_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_5_SHIFT)                /* 0x00000020 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_6_SHIFT                (6U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_6_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_6_SHIFT)                /* 0x00000040 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_7_SHIFT                (7U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_7_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_7_SHIFT)                /* 0x00000080 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_8_SHIFT                (8U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_8_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_8_SHIFT)                /* 0x00000100 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_9_SHIFT                (9U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_9_MASK                 (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_9_SHIFT)                /* 0x00000200 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_10_SHIFT               (10U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_10_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_10_SHIFT)               /* 0x00000400 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_11_SHIFT               (11U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_11_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_11_SHIFT)               /* 0x00000800 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_12_SHIFT               (12U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_12_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_12_SHIFT)               /* 0x00001000 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_13_SHIFT               (13U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_13_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_13_SHIFT)               /* 0x00002000 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_14_SHIFT               (14U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_14_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_14_SHIFT)               /* 0x00004000 */
#define DSI_INT_FORCE0_ACK_WITH_ERR_15_SHIFT               (15U)
#define DSI_INT_FORCE0_ACK_WITH_ERR_15_MASK                (0x1U << DSI_INT_FORCE0_ACK_WITH_ERR_15_SHIFT)               /* 0x00008000 */
#define DSI_INT_FORCE0_DPHY_ERRORS_0_SHIFT                 (16U)
#define DSI_INT_FORCE0_DPHY_ERRORS_0_MASK                  (0x1U << DSI_INT_FORCE0_DPHY_ERRORS_0_SHIFT)                 /* 0x00010000 */
#define DSI_INT_FORCE0_DPHY_ERRORS_1_SHIFT                 (17U)
#define DSI_INT_FORCE0_DPHY_ERRORS_1_MASK                  (0x1U << DSI_INT_FORCE0_DPHY_ERRORS_1_SHIFT)                 /* 0x00020000 */
#define DSI_INT_FORCE0_DPHY_ERRORS_2_SHIFT                 (18U)
#define DSI_INT_FORCE0_DPHY_ERRORS_2_MASK                  (0x1U << DSI_INT_FORCE0_DPHY_ERRORS_2_SHIFT)                 /* 0x00040000 */
#define DSI_INT_FORCE0_DPHY_ERRORS_3_SHIFT                 (19U)
#define DSI_INT_FORCE0_DPHY_ERRORS_3_MASK                  (0x1U << DSI_INT_FORCE0_DPHY_ERRORS_3_SHIFT)                 /* 0x00080000 */
#define DSI_INT_FORCE0_DPHY_ERRORS_4_SHIFT                 (20U)
#define DSI_INT_FORCE0_DPHY_ERRORS_4_MASK                  (0x1U << DSI_INT_FORCE0_DPHY_ERRORS_4_SHIFT)                 /* 0x00100000 */
/* INT_FORCE1 */
#define DSI_INT_FORCE1_OFFSET                              (0xDC)
#define DSI_INT_FORCE1_TO_HS_TX_SHIFT                      (0U)
#define DSI_INT_FORCE1_TO_HS_TX_MASK                       (0x1U << DSI_INT_FORCE1_TO_HS_TX_SHIFT)                      /* 0x00000001 */
#define DSI_INT_FORCE1_TO_LP_RX_SHIFT                      (1U)
#define DSI_INT_FORCE1_TO_LP_RX_MASK                       (0x1U << DSI_INT_FORCE1_TO_LP_RX_SHIFT)                      /* 0x00000002 */
#define DSI_INT_FORCE1_ECC_SINGLE_ERR_SHIFT                (2U)
#define DSI_INT_FORCE1_ECC_SINGLE_ERR_MASK                 (0x1U << DSI_INT_FORCE1_ECC_SINGLE_ERR_SHIFT)                /* 0x00000004 */
#define DSI_INT_FORCE1_ECC_MILTI_ERR_SHIFT                 (3U)
#define DSI_INT_FORCE1_ECC_MILTI_ERR_MASK                  (0x1U << DSI_INT_FORCE1_ECC_MILTI_ERR_SHIFT)                 /* 0x00000008 */
#define DSI_INT_FORCE1_CRC_ERR_OR_RESERVED_SHIFT           (4U)
#define DSI_INT_FORCE1_CRC_ERR_OR_RESERVED_MASK            (0x1U << DSI_INT_FORCE1_CRC_ERR_OR_RESERVED_SHIFT)           /* 0x00000010 */
#define DSI_INT_FORCE1_PKT_SIZE_ERR_SHIFT                  (5U)
#define DSI_INT_FORCE1_PKT_SIZE_ERR_MASK                   (0x1U << DSI_INT_FORCE1_PKT_SIZE_ERR_SHIFT)                  /* 0x00000020 */
#define DSI_INT_FORCE1_EOPT_ERR_SHIFT                      (6U)
#define DSI_INT_FORCE1_EOPT_ERR_MASK                       (0x1U << DSI_INT_FORCE1_EOPT_ERR_SHIFT)                      /* 0x00000040 */
#define DSI_INT_FORCE1_DPI_PLD_WR_ERR_OR_RESERVED_SHIFT    (7U)
#define DSI_INT_FORCE1_DPI_PLD_WR_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_DPI_PLD_WR_ERR_OR_RESERVED_SHIFT)    /* 0x00000080 */
#define DSI_INT_FORCE1_GEN_CMD_WR_ERR_OR_RESERVED_SHIFT    (8U)
#define DSI_INT_FORCE1_GEN_CMD_WR_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_GEN_CMD_WR_ERR_OR_RESERVED_SHIFT)    /* 0x00000100 */
#define DSI_INT_FORCE1_GEN_PLD_WR_EN_OR_RESERVED_SHIFT     (9U)
#define DSI_INT_FORCE1_GEN_PLD_WR_EN_OR_RESERVED_MASK      (0x1U << DSI_INT_FORCE1_GEN_PLD_WR_EN_OR_RESERVED_SHIFT)     /* 0x00000200 */
#define DSI_INT_FORCE1_GEN_PLD_SEND_ERR_OR_RESERVE_SHIFT   (10U)
#define DSI_INT_FORCE1_GEN_PLD_SEND_ERR_OR_RESERVE_MASK    (0x1U << DSI_INT_FORCE1_GEN_PLD_SEND_ERR_OR_RESERVE_SHIFT)   /* 0x00000400 */
#define DSI_INT_FORCE1_GEN_PLD_RD_ERR_OR_RESERVED_SHIFT    (11U)
#define DSI_INT_FORCE1_GEN_PLD_RD_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_GEN_PLD_RD_ERR_OR_RESERVED_SHIFT)    /* 0x00000800 */
#define DSI_INT_FORCE1_GEN_PLD_RECEV_ERR_OR_RESERVED_SHIFT (12U)
#define DSI_INT_FORCE1_GEN_PLD_RECEV_ERR_OR_RESERVED_MASK  (0x1U << DSI_INT_FORCE1_GEN_PLD_RECEV_ERR_OR_RESERVED_SHIFT) /* 0x00001000 */
#define DSI_INT_FORCE1_DBI_CMD_WR_ERR_OR_RESERVED_SHIFT    (13U)
#define DSI_INT_FORCE1_DBI_CMD_WR_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_DBI_CMD_WR_ERR_OR_RESERVED_SHIFT)    /* 0x00002000 */
#define DSI_INT_FORCE1_DBI_PLD_WR_ERR_OR_RESERVED_SHIFT    (14U)
#define DSI_INT_FORCE1_DBI_PLD_WR_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_DBI_PLD_WR_ERR_OR_RESERVED_SHIFT)    /* 0x00004000 */
#define DSI_INT_FORCE1_DBI_PLD_RD_ERR_OR_RESERVED_SHIFT    (15U)
#define DSI_INT_FORCE1_DBI_PLD_RD_ERR_OR_RESERVED_MASK     (0x1U << DSI_INT_FORCE1_DBI_PLD_RD_ERR_OR_RESERVED_SHIFT)    /* 0x00008000 */
#define DSI_INT_FORCE1_DBI_PLD_RECV_ERR_OR_RESERVED_SHIFT  (16U)
#define DSI_INT_FORCE1_DBI_PLD_RECV_ERR_OR_RESERVED_MASK   (0x1U << DSI_INT_FORCE1_DBI_PLD_RECV_ERR_OR_RESERVED_SHIFT)  /* 0x00010000 */
#define DSI_INT_FORCE1_DBI_ILEGAL_COMM_ERR_OR_RESERVED_SHIFT (17U)
#define DSI_INT_FORCE1_DBI_ILEGAL_COMM_ERR_OR_RESERVED_MASK (0x1U << DSI_INT_FORCE1_DBI_ILEGAL_COMM_ERR_OR_RESERVED_SHIFT) /* 0x00020000 */
/* VID_SHADOW_CTRL */
#define DSI_VID_SHADOW_CTRL_OFFSET                         (0x100)
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_SHIFT            (0U)
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_MASK             (0x1U << DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_SHIFT)            /* 0x00000001 */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_SHIFT           (8U)
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_MASK            (0x1U << DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_SHIFT)           /* 0x00000100 */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_SHIFT       (16U)
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_MASK        (0x1U << DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_SHIFT)       /* 0x00010000 */
/* DPI_VCID_ACT */
#define DSI_DPI_VCID_ACT_OFFSET                            (0x10C)
#define DSI_DPI_VCID_ACT_DPI_VCID_SHIFT                    (0U)
#define DSI_DPI_VCID_ACT_DPI_VCID_MASK                     (0x3U << DSI_DPI_VCID_ACT_DPI_VCID_SHIFT)                    /* 0x00000003 */
/* DPI_COLOR_CODING_ACT */
#define DSI_DPI_COLOR_CODING_ACT_OFFSET                    (0x110)
#define DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_SHIFT    (0U)
#define DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_MASK     (0xFU << DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_SHIFT)    /* 0x0000000F */
#define DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_SHIFT        (8U)
#define DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_MASK         (0x1U << DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_SHIFT)        /* 0x00000100 */
/* DPI_LP_CMD_TIM_ACT */
#define DSI_DPI_LP_CMD_TIM_ACT_OFFSET                      (0x118)
#define DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_SHIFT     (0U)
#define DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_MASK      (0xFFU << DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_SHIFT)    /* 0x000000FF */
#define DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_SHIFT    (16U)
#define DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_MASK     (0xFFU << DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_SHIFT)   /* 0x00FF0000 */
/* VID_MODE_CFG_ACT */
#define DSI_VID_MODE_CFG_ACT_OFFSET                        (0x138)
#define DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_SHIFT           (0U)
#define DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_MASK            (0x3U << DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_SHIFT)           /* 0x00000003 */
#define DSI_VID_MODE_CFG_ACT_LP_VSA_EN_SHIFT               (8U)
#define DSI_VID_MODE_CFG_ACT_LP_VSA_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_VSA_EN_SHIFT)               /* 0x00000100 */
#define DSI_VID_MODE_CFG_ACT_LP_VBP_EN_SHIFT               (9U)
#define DSI_VID_MODE_CFG_ACT_LP_VBP_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_VBP_EN_SHIFT)               /* 0x00000200 */
#define DSI_VID_MODE_CFG_ACT_LP_VFP_EN_SHIFT               (10U)
#define DSI_VID_MODE_CFG_ACT_LP_VFP_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_VFP_EN_SHIFT)               /* 0x00000400 */
#define DSI_VID_MODE_CFG_ACT_LP_VACT_EN_SHIFT              (11U)
#define DSI_VID_MODE_CFG_ACT_LP_VACT_EN_MASK               (0x1U << DSI_VID_MODE_CFG_ACT_LP_VACT_EN_SHIFT)              /* 0x00000800 */
#define DSI_VID_MODE_CFG_ACT_LP_HBP_EN_SHIFT               (12U)
#define DSI_VID_MODE_CFG_ACT_LP_HBP_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_HBP_EN_SHIFT)               /* 0x00001000 */
#define DSI_VID_MODE_CFG_ACT_LP_HFP_EN_SHIFT               (13U)
#define DSI_VID_MODE_CFG_ACT_LP_HFP_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_HFP_EN_SHIFT)               /* 0x00002000 */
#define DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_SHIFT        (14U)
#define DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_MASK         (0x1U << DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_SHIFT)        /* 0x00004000 */
#define DSI_VID_MODE_CFG_ACT_LP_CMD_EN_SHIFT               (15U)
#define DSI_VID_MODE_CFG_ACT_LP_CMD_EN_MASK                (0x1U << DSI_VID_MODE_CFG_ACT_LP_CMD_EN_SHIFT)               /* 0x00008000 */
/* VID_PKT_SIZE_ACT */
#define DSI_VID_PKT_SIZE_ACT_OFFSET                        (0x13C)
#define DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_SHIFT            (0U)
#define DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_MASK             (0x3FFFU << DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_SHIFT)         /* 0x00003FFF */
/* VID_NUM_CHUNKS_ACT */
#define DSI_VID_NUM_CHUNKS_ACT_OFFSET                      (0x140)
#define DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_SHIFT        (0U)
#define DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_MASK         (0x1FFFU << DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_SHIFT)     /* 0x00001FFF */
/* VID_NULL_SIZE_ACT */
#define DSI_VID_NULL_SIZE_ACT_OFFSET                       (0x144)
#define DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_SHIFT          (0U)
#define DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_MASK           (0x1FFFU << DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_SHIFT)       /* 0x00001FFF */
/* VID_HSA_TIME_ACT */
#define DSI_VID_HSA_TIME_ACT_OFFSET                        (0x148)
#define DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_SHIFT            (0U)
#define DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_MASK             (0xFFFU << DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_SHIFT)          /* 0x00000FFF */
/* VID_HBP_TIME_ACT */
#define DSI_VID_HBP_TIME_ACT_OFFSET                        (0x14C)
#define DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_SHIFT            (0U)
#define DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_MASK             (0xFFFU << DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_SHIFT)          /* 0x00000FFF */
/* VID_HLINE_TIME_ACT */
#define DSI_VID_HLINE_TIME_ACT_OFFSET                      (0x150)
#define DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_SHIFT        (0U)
#define DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_MASK         (0x7FFFU << DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_SHIFT)     /* 0x00007FFF */
/* VID_VSA_LINES_ACT */
#define DSI_VID_VSA_LINES_ACT_OFFSET                       (0x154)
#define DSI_VID_VSA_LINES_ACT_VSA_LINES_SHIFT              (0U)
#define DSI_VID_VSA_LINES_ACT_VSA_LINES_MASK               (0x3FFU << DSI_VID_VSA_LINES_ACT_VSA_LINES_SHIFT)            /* 0x000003FF */
/* VID_VBP_LINES_ACT */
#define DSI_VID_VBP_LINES_ACT_OFFSET                       (0x158)
#define DSI_VID_VBP_LINES_ACT_VBP_LINES_SHIFT              (0U)
#define DSI_VID_VBP_LINES_ACT_VBP_LINES_MASK               (0x3FFU << DSI_VID_VBP_LINES_ACT_VBP_LINES_SHIFT)            /* 0x000003FF */
/* VID_VFP_LINES_ACT */
#define DSI_VID_VFP_LINES_ACT_OFFSET                       (0x15C)
#define DSI_VID_VFP_LINES_ACT_VFP_LINES_SHIFT              (0U)
#define DSI_VID_VFP_LINES_ACT_VFP_LINES_MASK               (0x3FFU << DSI_VID_VFP_LINES_ACT_VFP_LINES_SHIFT)            /* 0x000003FF */
/* VID_VACTIVE_LINES_ACT */
#define DSI_VID_VACTIVE_LINES_ACT_OFFSET                   (0x160)
#define DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_SHIFT     (0U)
#define DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_MASK      (0x3FFFU << DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_SHIFT)  /* 0x00003FFF */
/* SDF_3D_ACT */
#define DSI_SDF_3D_ACT_OFFSET                              (0x190)
#define DSI_SDF_3D_ACT_MODE_3D_SHIFT                       (0U)
#define DSI_SDF_3D_ACT_MODE_3D_MASK                        (0x3U << DSI_SDF_3D_ACT_MODE_3D_SHIFT)                       /* 0x00000003 */
#define DSI_SDF_3D_ACT_FORMAT_3D_SHIFT                     (2U)
#define DSI_SDF_3D_ACT_FORMAT_3D_MASK                      (0x3U << DSI_SDF_3D_ACT_FORMAT_3D_SHIFT)                     /* 0x0000000C */
#define DSI_SDF_3D_ACT_SECOND_VSYNC_SHIFT                  (4U)
#define DSI_SDF_3D_ACT_SECOND_VSYNC_MASK                   (0x1U << DSI_SDF_3D_ACT_SECOND_VSYNC_SHIFT)                  /* 0x00000010 */
#define DSI_SDF_3D_ACT_RIGHT_FIRST_SHIFT                   (5U)
#define DSI_SDF_3D_ACT_RIGHT_FIRST_MASK                    (0x1U << DSI_SDF_3D_ACT_RIGHT_FIRST_SHIFT)                   /* 0x00000020 */
#define DSI_SDF_3D_ACT_SEND_3D_CFG_SHIFT                   (16U)
#define DSI_SDF_3D_ACT_SEND_3D_CFG_MASK                    (0x1U << DSI_SDF_3D_ACT_SEND_3D_CFG_SHIFT)                   /* 0x00010000 */
/*****************************************TIMER******************************************/
/* LOAD_COUNT0 */
#define TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_SHIFT          (0U)
#define TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_MASK           (0xFFFFFFFFU << TIMER_LOAD_COUNT0_TIMER_LOAD_COUNT0_SHIFT)   /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_SHIFT          (0U)
#define TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_MASK           (0xFFFFFFFFU << TIMER_LOAD_COUNT1_TIMER_LOAD_COUNT1_SHIFT)   /* 0xFFFFFFFF */
/* CURRENT_VALUE0 */
#define TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_SHIFT    (0U)
#define TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_MASK     (0xFFFFFFFFU << TIMER_CURRENT_VALUE0_TIMER_CURRENT_VALUE0_SHIFT) /* 0xFFFFFFFF */
/* CURRENT_VALUE1 */
#define TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_SHIFT     (0U)
#define TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_MASK      (0xFFFFFFFFU << TIMER_CURRENT_VALUE1_TIMER_CURRENT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* CONTROLREG */
#define TIMER_CONTROLREG_TIMER_ENABLE_SHIFT                (0U)
#define TIMER_CONTROLREG_TIMER_ENABLE_MASK                 (0x1U << TIMER_CONTROLREG_TIMER_ENABLE_SHIFT)                /* 0x00000001 */
#define TIMER_CONTROLREG_TIMER_MODE_SHIFT                  (1U)
#define TIMER_CONTROLREG_TIMER_MODE_MASK                   (0x1U << TIMER_CONTROLREG_TIMER_MODE_SHIFT)                  /* 0x00000002 */
#define TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT              (2U)
#define TIMER_CONTROLREG_TIMER_INT_MASK_MASK               (0x1U << TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT)              /* 0x00000004 */
/* INTSTATUS */
#define TIMER_INTSTATUS_INTSTATUS_SHIFT                    (0U)
#define TIMER_INTSTATUS_INTSTATUS_MASK                     (0x1U << TIMER_INTSTATUS_INTSTATUS_SHIFT)                    /* 0x00000001 */
/******************************************WDT*******************************************/
/* WDT_CR */
#define WDT_CR_WDT_EN_SHIFT                            (0U)
#define WDT_CR_WDT_EN_MASK                             (0x1U << WDT_CR_WDT_EN_SHIFT)                            /* 0x00000001 */
#define WDT_CR_RESP_MODE_SHIFT                         (1U)
#define WDT_CR_RESP_MODE_MASK                          (0x1U << WDT_CR_RESP_MODE_SHIFT)                         /* 0x00000002 */
#define WDT_CR_RST_PLUSE_LENTH_SHIFT                   (2U)
#define WDT_CR_RST_PLUSE_LENTH_MASK                    (0x3U << WDT_CR_RST_PLUSE_LENTH_SHIFT)                   /* 0x0000000C */
/* WDT_TORR */
#define WDT_TORR_TIMEOUT_PERIOD_SHIFT                  (0U)
#define WDT_TORR_TIMEOUT_PERIOD_MASK                   (0xFU << WDT_TORR_TIMEOUT_PERIOD_SHIFT)                  /* 0x0000000F */
/* WDT_CCVR */
#define WDT_CCVR_CUR_CNT_SHIFT                         (0U)
#define WDT_CCVR_CUR_CNT_MASK                          (0xFFFFFFFFU << WDT_CCVR_CUR_CNT_SHIFT)                  /* 0xFFFFFFFF */
/* WDT_CRR */
#define WDT_CRR_CNT_RESTART_SHIFT                      (0U)
#define WDT_CRR_CNT_RESTART_MASK                       (0xFFU << WDT_CRR_CNT_RESTART_SHIFT)                     /* 0x000000FF */
/* WDT_STAT */
#define WDT_STAT_WDT_STATUS_SHIFT                      (0U)
#define WDT_STAT_WDT_STATUS_MASK                       (0x1U << WDT_STAT_WDT_STATUS_SHIFT)                      /* 0x00000001 */
/* WDT_EOI */
#define WDT_EOI_WDT_INT_CLR_SHIFT                      (0U)
#define WDT_EOI_WDT_INT_CLR_MASK                       (0x1U << WDT_EOI_WDT_INT_CLR_SHIFT)                      /* 0x00000001 */
/******************************************I2C*******************************************/
/* CON */
#define I2C_CON_I2C_EN_SHIFT                               (0U)
#define I2C_CON_I2C_EN_MASK                                (0x1U << I2C_CON_I2C_EN_SHIFT)                               /* 0x00000001 */
#define I2C_CON_I2C_MODE_SHIFT                             (1U)
#define I2C_CON_I2C_MODE_MASK                              (0x3U << I2C_CON_I2C_MODE_SHIFT)                             /* 0x00000006 */
#define I2C_CON_START_SHIFT                                (3U)
#define I2C_CON_START_MASK                                 (0x1U << I2C_CON_START_SHIFT)                                /* 0x00000008 */
#define I2C_CON_STOP_SHIFT                                 (4U)
#define I2C_CON_STOP_MASK                                  (0x1U << I2C_CON_STOP_SHIFT)                                 /* 0x00000010 */
#define I2C_CON_ACK_SHIFT                                  (5U)
#define I2C_CON_ACK_MASK                                   (0x1U << I2C_CON_ACK_SHIFT)                                  /* 0x00000020 */
#define I2C_CON_ACT2NAK_SHIFT                              (6U)
#define I2C_CON_ACT2NAK_MASK                               (0x1U << I2C_CON_ACT2NAK_SHIFT)                              /* 0x00000040 */
#define I2C_CON_DATA_UPD_ST_SHIFT                          (8U)
#define I2C_CON_DATA_UPD_ST_MASK                           (0x7U << I2C_CON_DATA_UPD_ST_SHIFT)                          /* 0x00000700 */
#define I2C_CON_START_SETUP_SHIFT                          (12U)
#define I2C_CON_START_SETUP_MASK                           (0x3U << I2C_CON_START_SETUP_SHIFT)                          /* 0x00003000 */
#define I2C_CON_STOP_SETUP_SHIFT                           (14U)
#define I2C_CON_STOP_SETUP_MASK                            (0x3U << I2C_CON_STOP_SETUP_SHIFT)                           /* 0x0000C000 */
#define I2C_CON_VERSION_SHIFT                              (16U)
#define I2C_CON_VERSION_MASK                               (0xFFFFU << I2C_CON_VERSION_SHIFT)                           /* 0xFFFF0000 */
/* CLKDIV */
#define I2C_CLKDIV_CLKDIVL_SHIFT                           (0U)
#define I2C_CLKDIV_CLKDIVL_MASK                            (0xFFFFU << I2C_CLKDIV_CLKDIVL_SHIFT)                        /* 0x0000FFFF */
#define I2C_CLKDIV_CLKDIVH_SHIFT                           (16U)
#define I2C_CLKDIV_CLKDIVH_MASK                            (0xFFFFU << I2C_CLKDIV_CLKDIVH_SHIFT)                        /* 0xFFFF0000 */
/* MRXADDR */
#define I2C_MRXADDR_SADDR_SHIFT                            (0U)
#define I2C_MRXADDR_SADDR_MASK                             (0xFFFFFFU << I2C_MRXADDR_SADDR_SHIFT)                       /* 0x00FFFFFF */
#define I2C_MRXADDR_ADDLVLD_SHIFT                          (24U)
#define I2C_MRXADDR_ADDLVLD_MASK                           (0x1U << I2C_MRXADDR_ADDLVLD_SHIFT)                          /* 0x01000000 */
#define I2C_MRXADDR_ADDMVLD_SHIFT                          (25U)
#define I2C_MRXADDR_ADDMVLD_MASK                           (0x1U << I2C_MRXADDR_ADDMVLD_SHIFT)                          /* 0x02000000 */
#define I2C_MRXADDR_ADDHVLD_SHIFT                          (26U)
#define I2C_MRXADDR_ADDHVLD_MASK                           (0x1U << I2C_MRXADDR_ADDHVLD_SHIFT)                          /* 0x04000000 */
/* MRXRADDR */
#define I2C_MRXRADDR_SRADDR_SHIFT                          (0U)
#define I2C_MRXRADDR_SRADDR_MASK                           (0xFFFFFFU << I2C_MRXRADDR_SRADDR_SHIFT)                     /* 0x00FFFFFF */
#define I2C_MRXRADDR_SRADDLVLD_SHIFT                       (24U)
#define I2C_MRXRADDR_SRADDLVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDLVLD_SHIFT)                       /* 0x01000000 */
#define I2C_MRXRADDR_SRADDMVLD_SHIFT                       (25U)
#define I2C_MRXRADDR_SRADDMVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDMVLD_SHIFT)                       /* 0x02000000 */
#define I2C_MRXRADDR_SRADDHVLD_SHIFT                       (26U)
#define I2C_MRXRADDR_SRADDHVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDHVLD_SHIFT)                       /* 0x04000000 */
/* MTXCNT */
#define I2C_MTXCNT_MTXCNT_SHIFT                            (0U)
#define I2C_MTXCNT_MTXCNT_MASK                             (0x3FU << I2C_MTXCNT_MTXCNT_SHIFT)                           /* 0x0000003F */
/* MRXCNT */
#define I2C_MRXCNT_MRXCNT_SHIFT                            (0U)
#define I2C_MRXCNT_MRXCNT_MASK                             (0x3FU << I2C_MRXCNT_MRXCNT_SHIFT)                           /* 0x0000003F */
/* IEN */
#define I2C_IEN_BTFIEN_SHIFT                               (0U)
#define I2C_IEN_BTFIEN_MASK                                (0x1U << I2C_IEN_BTFIEN_SHIFT)                               /* 0x00000001 */
#define I2C_IEN_BRFIEN_SHIFT                               (1U)
#define I2C_IEN_BRFIEN_MASK                                (0x1U << I2C_IEN_BRFIEN_SHIFT)                               /* 0x00000002 */
#define I2C_IEN_MBTFIEN_SHIFT                              (2U)
#define I2C_IEN_MBTFIEN_MASK                               (0x1U << I2C_IEN_MBTFIEN_SHIFT)                              /* 0x00000004 */
#define I2C_IEN_MBRFIEN_SHIFT                              (3U)
#define I2C_IEN_MBRFIEN_MASK                               (0x1U << I2C_IEN_MBRFIEN_SHIFT)                              /* 0x00000008 */
#define I2C_IEN_STARTIEN_SHIFT                             (4U)
#define I2C_IEN_STARTIEN_MASK                              (0x1U << I2C_IEN_STARTIEN_SHIFT)                             /* 0x00000010 */
#define I2C_IEN_STOPIEN_SHIFT                              (5U)
#define I2C_IEN_STOPIEN_MASK                               (0x1U << I2C_IEN_STOPIEN_SHIFT)                              /* 0x00000020 */
#define I2C_IEN_NAKRCVIEN_SHIFT                            (6U)
#define I2C_IEN_NAKRCVIEN_MASK                             (0x1U << I2C_IEN_NAKRCVIEN_SHIFT)                            /* 0x00000040 */
#define I2C_IEN_SLAVEHDSCLEN_SHIFT                         (7U)
#define I2C_IEN_SLAVEHDSCLEN_MASK                          (0x1U << I2C_IEN_SLAVEHDSCLEN_SHIFT)                         /* 0x00000080 */
/* IPD */
#define I2C_IPD_BTFIPD_SHIFT                               (0U)
#define I2C_IPD_BTFIPD_MASK                                (0x1U << I2C_IPD_BTFIPD_SHIFT)                               /* 0x00000001 */
#define I2C_IPD_BRFIPD_SHIFT                               (1U)
#define I2C_IPD_BRFIPD_MASK                                (0x1U << I2C_IPD_BRFIPD_SHIFT)                               /* 0x00000002 */
#define I2C_IPD_MBTFIPD_SHIFT                              (2U)
#define I2C_IPD_MBTFIPD_MASK                               (0x1U << I2C_IPD_MBTFIPD_SHIFT)                              /* 0x00000004 */
#define I2C_IPD_MBRFIPD_SHIFT                              (3U)
#define I2C_IPD_MBRFIPD_MASK                               (0x1U << I2C_IPD_MBRFIPD_SHIFT)                              /* 0x00000008 */
#define I2C_IPD_STARTIPD_SHIFT                             (4U)
#define I2C_IPD_STARTIPD_MASK                              (0x1U << I2C_IPD_STARTIPD_SHIFT)                             /* 0x00000010 */
#define I2C_IPD_STOPIPD_SHIFT                              (5U)
#define I2C_IPD_STOPIPD_MASK                               (0x1U << I2C_IPD_STOPIPD_SHIFT)                              /* 0x00000020 */
#define I2C_IPD_NAKRCVIPD_SHIFT                            (6U)
#define I2C_IPD_NAKRCVIPD_MASK                             (0x1U << I2C_IPD_NAKRCVIPD_SHIFT)                            /* 0x00000040 */
#define I2C_IPD_SLAVEHDSCLIPD_SHIFT                        (7U)
#define I2C_IPD_SLAVEHDSCLIPD_MASK                         (0x1U << I2C_IPD_SLAVEHDSCLIPD_SHIFT)                        /* 0x00000080 */
/* FCNT */
#define I2C_FCNT_FCNT_SHIFT                                (0U)
#define I2C_FCNT_FCNT_MASK                                 (0x3FU << I2C_FCNT_FCNT_SHIFT)                               /* 0x0000003F */
/* SCL_OE_DB */
#define I2C_SCL_OE_DB_SCL_OE_DB_SHIFT                      (0U)
#define I2C_SCL_OE_DB_SCL_OE_DB_MASK                       (0xFFU << I2C_SCL_OE_DB_SCL_OE_DB_SHIFT)                     /* 0x000000FF */
/* TXDATA0 */
#define I2C_TXDATA0_TXDATA0_SHIFT                          (0U)
#define I2C_TXDATA0_TXDATA0_MASK                           (0xFFFFFFFFU << I2C_TXDATA0_TXDATA0_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA1 */
#define I2C_TXDATA1_TXDATA1_SHIFT                          (0U)
#define I2C_TXDATA1_TXDATA1_MASK                           (0xFFFFFFFFU << I2C_TXDATA1_TXDATA1_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA2 */
#define I2C_TXDATA2_TXDATA2_SHIFT                          (0U)
#define I2C_TXDATA2_TXDATA2_MASK                           (0xFFFFFFFFU << I2C_TXDATA2_TXDATA2_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA3 */
#define I2C_TXDATA3_TXDATA3_SHIFT                          (0U)
#define I2C_TXDATA3_TXDATA3_MASK                           (0xFFFFFFFFU << I2C_TXDATA3_TXDATA3_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA4 */
#define I2C_TXDATA4_TXDATA4_SHIFT                          (0U)
#define I2C_TXDATA4_TXDATA4_MASK                           (0xFFFFFFFFU << I2C_TXDATA4_TXDATA4_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA5 */
#define I2C_TXDATA5_TXDATA5_SHIFT                          (0U)
#define I2C_TXDATA5_TXDATA5_MASK                           (0xFFFFFFFFU << I2C_TXDATA5_TXDATA5_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA6 */
#define I2C_TXDATA6_TXDATA6_SHIFT                          (0U)
#define I2C_TXDATA6_TXDATA6_MASK                           (0xFFFFFFFFU << I2C_TXDATA6_TXDATA6_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA7 */
#define I2C_TXDATA7_TXDATA7_SHIFT                          (0U)
#define I2C_TXDATA7_TXDATA7_MASK                           (0xFFFFFFFFU << I2C_TXDATA7_TXDATA7_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA0 */
#define I2C_RXDATA0_RXDATA0_SHIFT                          (0U)
#define I2C_RXDATA0_RXDATA0_MASK                           (0xFFFFFFFFU << I2C_RXDATA0_RXDATA0_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA1 */
#define I2C_RXDATA1_RXDATA1_SHIFT                          (0U)
#define I2C_RXDATA1_RXDATA1_MASK                           (0xFFFFFFFFU << I2C_RXDATA1_RXDATA1_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA2 */
#define I2C_RXDATA2_RXDATA2_SHIFT                          (0U)
#define I2C_RXDATA2_RXDATA2_MASK                           (0xFFFFFFFFU << I2C_RXDATA2_RXDATA2_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA3 */
#define I2C_RXDATA3_RXDATA3_SHIFT                          (0U)
#define I2C_RXDATA3_RXDATA3_MASK                           (0xFFFFFFFFU << I2C_RXDATA3_RXDATA3_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA4 */
#define I2C_RXDATA4_RXDATA4_SHIFT                          (0U)
#define I2C_RXDATA4_RXDATA4_MASK                           (0xFFFFFFFFU << I2C_RXDATA4_RXDATA4_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA5 */
#define I2C_RXDATA5_RXDATA5_SHIFT                          (0U)
#define I2C_RXDATA5_RXDATA5_MASK                           (0xFFFFFFFFU << I2C_RXDATA5_RXDATA5_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA6 */
#define I2C_RXDATA6_RXDATA6_SHIFT                          (0U)
#define I2C_RXDATA6_RXDATA6_MASK                           (0xFFFFFFFFU << I2C_RXDATA6_RXDATA6_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA7 */
#define I2C_RXDATA7_RXDATA7_SHIFT                          (0U)
#define I2C_RXDATA7_RXDATA7_MASK                           (0xFFFFFFFFU << I2C_RXDATA7_RXDATA7_SHIFT)                   /* 0xFFFFFFFF */
/* ST */
#define I2C_ST_SDA_ST_SHIFT                                (0U)
#define I2C_ST_SDA_ST_MASK                                 (0x1U << I2C_ST_SDA_ST_SHIFT)                                /* 0x00000001 */
#define I2C_ST_SCL_ST_SHIFT                                (1U)
#define I2C_ST_SCL_ST_MASK                                 (0x1U << I2C_ST_SCL_ST_SHIFT)                                /* 0x00000002 */
/* DBGCTRL */
#define I2C_DBGCTRL_FLT_F_SHIFT                            (0U)
#define I2C_DBGCTRL_FLT_F_MASK                             (0xFU << I2C_DBGCTRL_FLT_F_SHIFT)                            /* 0x0000000F */
#define I2C_DBGCTRL_FLT_R_SHIFT                            (4U)
#define I2C_DBGCTRL_FLT_R_MASK                             (0xFU << I2C_DBGCTRL_FLT_R_SHIFT)                            /* 0x000000F0 */
#define I2C_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT                  (8U)
#define I2C_DBGCTRL_SLV_HOLD_SCL_TH_MASK                   (0xFU << I2C_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT)                  /* 0x00000F00 */
#define I2C_DBGCTRL_FLT_EN_SHIFT                           (12U)
#define I2C_DBGCTRL_FLT_EN_MASK                            (0x1U << I2C_DBGCTRL_FLT_EN_SHIFT)                           /* 0x00001000 */
#define I2C_DBGCTRL_NAK_RELEASE_SCL_SHIFT                  (13U)
#define I2C_DBGCTRL_NAK_RELEASE_SCL_MASK                   (0x1U << I2C_DBGCTRL_NAK_RELEASE_SCL_SHIFT)                  /* 0x00002000 */
#define I2C_DBGCTRL_H0_CHECK_SCL_SHIFT                     (14U)
#define I2C_DBGCTRL_H0_CHECK_SCL_MASK                      (0x1U << I2C_DBGCTRL_H0_CHECK_SCL_SHIFT)                     /* 0x00004000 */
/****************************************SPI2APB*****************************************/
/* CTRL0 */
#define SPI2APB_CTRL0_FBM_SHIFT                            (0U)
#define SPI2APB_CTRL0_FBM_MASK                             (0x1U << SPI2APB_CTRL0_FBM_SHIFT)                            /* 0x00000001 */
#define SPI2APB_CTRL0_EM_SHIFT                             (1U)
#define SPI2APB_CTRL0_EM_MASK                              (0x1U << SPI2APB_CTRL0_EM_SHIFT)                             /* 0x00000002 */
#define SPI2APB_CTRL0_RXCP_SHIFT                           (2U)
#define SPI2APB_CTRL0_RXCP_MASK                            (0x1U << SPI2APB_CTRL0_RXCP_SHIFT)                           /* 0x00000004 */
#define SPI2APB_CTRL0_TXCP_SHIFT                           (3U)
#define SPI2APB_CTRL0_TXCP_MASK                            (0x1U << SPI2APB_CTRL0_TXCP_SHIFT)                           /* 0x00000008 */
/* SR */
#define SPI2APB_SR_BSF_SHIFT                               (0U)
#define SPI2APB_SR_BSF_MASK                                (0x1U << SPI2APB_SR_BSF_SHIFT)                               /* 0x00000001 */
#define SPI2APB_SR_TFF_SHIFT                               (1U)
#define SPI2APB_SR_TFF_MASK                                (0x1U << SPI2APB_SR_TFF_SHIFT)                               /* 0x00000002 */
#define SPI2APB_SR_TFE_SHIFT                               (2U)
#define SPI2APB_SR_TFE_MASK                                (0x1U << SPI2APB_SR_TFE_SHIFT)                               /* 0x00000004 */
#define SPI2APB_SR_RFF_SHIFT                               (3U)
#define SPI2APB_SR_RFF_MASK                                (0x1U << SPI2APB_SR_RFF_SHIFT)                               /* 0x00000008 */
#define SPI2APB_SR_RFE_SHIFT                               (4U)
#define SPI2APB_SR_RFE_MASK                                (0x1U << SPI2APB_SR_RFE_SHIFT)                               /* 0x00000010 */
/* IMR */
#define SPI2APB_IMR_QWIM_SHIFT                             (0U)
#define SPI2APB_IMR_QWIM_MASK                              (0x1U << SPI2APB_IMR_QWIM_SHIFT)                             /* 0x00000001 */
/* RISR */
#define SPI2APB_RISR_QWRIS_SHIFT                           (0U)
#define SPI2APB_RISR_QWRIS_MASK                            (0x1U << SPI2APB_RISR_QWRIS_SHIFT)                           /* 0x00000001 */
/* ICR */
#define SPI2APB_ICR_CQWI_SHIFT                             (0U)
#define SPI2APB_ICR_CQWI_MASK                              (0x1U << SPI2APB_ICR_CQWI_SHIFT)                             /* 0x00000001 */
/* VERSION */
#define SPI2APB_VERSION_VERSION_SHIFT                      (0U)
#define SPI2APB_VERSION_VERSION_MASK                       (0xFFFFFFFFU << SPI2APB_VERSION_VERSION_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG0 */
#define SPI2APB_QUICK_REG0_QWV0_SHIFT                      (0U)
#define SPI2APB_QUICK_REG0_QWV0_MASK                       (0xFFFFFFFFU << SPI2APB_QUICK_REG0_QWV0_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG1 */
#define SPI2APB_QUICK_REG1_QWV1_SHIFT                      (0U)
#define SPI2APB_QUICK_REG1_QWV1_MASK                       (0xFFFFFFFFU << SPI2APB_QUICK_REG1_QWV1_SHIFT)               /* 0xFFFFFFFF */
/* QUICK_REG2 */
#define SPI2APB_QUICK_REG2_QRV_SHIFT                       (0U)
#define SPI2APB_QUICK_REG2_QRV_MASK                        (0xFFFFFFFFU << SPI2APB_QUICK_REG2_QRV_SHIFT)                /* 0xFFFFFFFF */
/******************************************SPI*******************************************/
/* CTRLR0 */
#define SPI_CTRLR0_DFS_SHIFT                               (0U)
#define SPI_CTRLR0_DFS_MASK                                (0x3U << SPI_CTRLR0_DFS_SHIFT)                               /* 0x00000003 */
#define SPI_CTRLR0_CFS_SHIFT                               (2U)
#define SPI_CTRLR0_CFS_MASK                                (0xFU << SPI_CTRLR0_CFS_SHIFT)                               /* 0x0000003C */
#define SPI_CTRLR0_SCPH_SHIFT                              (6U)
#define SPI_CTRLR0_SCPH_MASK                               (0x1U << SPI_CTRLR0_SCPH_SHIFT)                              /* 0x00000040 */
#define SPI_CTRLR0_SCPOL_SHIFT                             (7U)
#define SPI_CTRLR0_SCPOL_MASK                              (0x1U << SPI_CTRLR0_SCPOL_SHIFT)                             /* 0x00000080 */
#define SPI_CTRLR0_CSM_SHIFT                               (8U)
#define SPI_CTRLR0_CSM_MASK                                (0x3U << SPI_CTRLR0_CSM_SHIFT)                               /* 0x00000300 */
#define SPI_CTRLR0_SSD_SHIFT                               (10U)
#define SPI_CTRLR0_SSD_MASK                                (0x1U << SPI_CTRLR0_SSD_SHIFT)                               /* 0x00000400 */
#define SPI_CTRLR0_EM_SHIFT                                (11U)
#define SPI_CTRLR0_EM_MASK                                 (0x1U << SPI_CTRLR0_EM_SHIFT)                                /* 0x00000800 */
#define SPI_CTRLR0_FBM_SHIFT                               (12U)
#define SPI_CTRLR0_FBM_MASK                                (0x1U << SPI_CTRLR0_FBM_SHIFT)                               /* 0x00001000 */
#define SPI_CTRLR0_BHT_SHIFT                               (13U)
#define SPI_CTRLR0_BHT_MASK                                (0x1U << SPI_CTRLR0_BHT_SHIFT)                               /* 0x00002000 */
#define SPI_CTRLR0_RSD_SHIFT                               (14U)
#define SPI_CTRLR0_RSD_MASK                                (0x3U << SPI_CTRLR0_RSD_SHIFT)                               /* 0x0000C000 */
#define SPI_CTRLR0_FRF_SHIFT                               (16U)
#define SPI_CTRLR0_FRF_MASK                                (0x3U << SPI_CTRLR0_FRF_SHIFT)                               /* 0x00030000 */
#define SPI_CTRLR0_XFM_SHIFT                               (18U)
#define SPI_CTRLR0_XFM_MASK                                (0x3U << SPI_CTRLR0_XFM_SHIFT)                               /* 0x000C0000 */
#define SPI_CTRLR0_OPM_SHIFT                               (20U)
#define SPI_CTRLR0_OPM_MASK                                (0x1U << SPI_CTRLR0_OPM_SHIFT)                               /* 0x00100000 */
#define SPI_CTRLR0_MTM_SHIFT                               (21U)
#define SPI_CTRLR0_MTM_MASK                                (0x1U << SPI_CTRLR0_MTM_SHIFT)                               /* 0x00200000 */
#define SPI_CTRLR0_SOI_SHIFT                               (23U)
#define SPI_CTRLR0_SOI_MASK                                (0x3U << SPI_CTRLR0_SOI_SHIFT)                               /* 0x01800000 */
#define SPI_CTRLR0_LBK_SHIFT                               (25U)
#define SPI_CTRLR0_LBK_MASK                                (0x1U << SPI_CTRLR0_LBK_SHIFT)                               /* 0x02000000 */
/* CTRLR1 */
#define SPI_CTRLR1_NDM_SHIFT                               (0U)
#define SPI_CTRLR1_NDM_MASK                                (0xFFFFFFFFU << SPI_CTRLR1_NDM_SHIFT)                        /* 0xFFFFFFFF */
/* ENR */
#define SPI_ENR_ENR_SHIFT                                  (0U)
#define SPI_ENR_ENR_MASK                                   (0x1U << SPI_ENR_ENR_SHIFT)                                  /* 0x00000001 */
/* SER */
#define SPI_SER_SER_SHIFT                                  (0U)
#define SPI_SER_SER_MASK                                   (0x3U << SPI_SER_SER_SHIFT)                                  /* 0x00000003 */
/* BAUDR */
#define SPI_BAUDR_BAUDR_SHIFT                              (0U)
#define SPI_BAUDR_BAUDR_MASK                               (0xFFFFU << SPI_BAUDR_BAUDR_SHIFT)                           /* 0x0000FFFF */
/* TXFTLR */
#define SPI_TXFTLR_TXFTLR_SHIFT                            (0U)
#define SPI_TXFTLR_TXFTLR_MASK                             (0x3FU << SPI_TXFTLR_TXFTLR_SHIFT)                           /* 0x0000003F */
/* RXFTLR */
#define SPI_RXFTLR_RXFTLR_SHIFT                            (0U)
#define SPI_RXFTLR_RXFTLR_MASK                             (0x3FU << SPI_RXFTLR_RXFTLR_SHIFT)                           /* 0x0000003F */
/* TXFLR */
#define SPI_TXFLR_TXFLR_SHIFT                              (0U)
#define SPI_TXFLR_TXFLR_MASK                               (0x7FU << SPI_TXFLR_TXFLR_SHIFT)                             /* 0x0000007F */
/* RXFLR */
#define SPI_RXFLR_RXFLR_SHIFT                              (0U)
#define SPI_RXFLR_RXFLR_MASK                               (0x7FU << SPI_RXFLR_RXFLR_SHIFT)                             /* 0x0000007F */
/* SR */
#define SPI_SR_BSF_SHIFT                                   (0U)
#define SPI_SR_BSF_MASK                                    (0x1U << SPI_SR_BSF_SHIFT)                                   /* 0x00000001 */
#define SPI_SR_TFF_SHIFT                                   (1U)
#define SPI_SR_TFF_MASK                                    (0x1U << SPI_SR_TFF_SHIFT)                                   /* 0x00000002 */
#define SPI_SR_TFE_SHIFT                                   (2U)
#define SPI_SR_TFE_MASK                                    (0x1U << SPI_SR_TFE_SHIFT)                                   /* 0x00000004 */
#define SPI_SR_RFE_SHIFT                                   (3U)
#define SPI_SR_RFE_MASK                                    (0x1U << SPI_SR_RFE_SHIFT)                                   /* 0x00000008 */
#define SPI_SR_RFF_SHIFT                                   (4U)
#define SPI_SR_RFF_MASK                                    (0x1U << SPI_SR_RFF_SHIFT)                                   /* 0x00000010 */
#define SPI_SR_STB_SHIFT                                   (5U)
#define SPI_SR_STB_MASK                                    (0x1U << SPI_SR_STB_SHIFT)                                   /* 0x00000020 */
#define SPI_SR_SSI_SHIFT                                   (6U)
#define SPI_SR_SSI_MASK                                    (0x1U << SPI_SR_SSI_SHIFT)                                   /* 0x00000040 */
/* IPR */
#define SPI_IPR_IPR_SHIFT                                  (0U)
#define SPI_IPR_IPR_MASK                                   (0x1U << SPI_IPR_IPR_SHIFT)                                  /* 0x00000001 */
/* IMR */
#define SPI_IMR_TFEIM_SHIFT                                (0U)
#define SPI_IMR_TFEIM_MASK                                 (0x1U << SPI_IMR_TFEIM_SHIFT)                                /* 0x00000001 */
#define SPI_IMR_TFOIM_SHIFT                                (1U)
#define SPI_IMR_TFOIM_MASK                                 (0x1U << SPI_IMR_TFOIM_SHIFT)                                /* 0x00000002 */
#define SPI_IMR_RFUIM_SHIFT                                (2U)
#define SPI_IMR_RFUIM_MASK                                 (0x1U << SPI_IMR_RFUIM_SHIFT)                                /* 0x00000004 */
#define SPI_IMR_RFOIM_SHIFT                                (3U)
#define SPI_IMR_RFOIM_MASK                                 (0x1U << SPI_IMR_RFOIM_SHIFT)                                /* 0x00000008 */
#define SPI_IMR_RFFIM_SHIFT                                (4U)
#define SPI_IMR_RFFIM_MASK                                 (0x1U << SPI_IMR_RFFIM_SHIFT)                                /* 0x00000010 */
#define SPI_IMR_TOIM_SHIFT                                 (5U)
#define SPI_IMR_TOIM_MASK                                  (0x1U << SPI_IMR_TOIM_SHIFT)                                 /* 0x00000020 */
#define SPI_IMR_SSPIM_SHIFT                                (6U)
#define SPI_IMR_SSPIM_MASK                                 (0x1U << SPI_IMR_SSPIM_SHIFT)                                /* 0x00000040 */
#define SPI_IMR_TXFIM_SHIFT                                (7U)
#define SPI_IMR_TXFIM_MASK                                 (0x1U << SPI_IMR_TXFIM_SHIFT)                                /* 0x00000080 */
/* ISR */
#define SPI_ISR_TFEIS_SHIFT                                (0U)
#define SPI_ISR_TFEIS_MASK                                 (0x1U << SPI_ISR_TFEIS_SHIFT)                                /* 0x00000001 */
#define SPI_ISR_TFOIS_SHIFT                                (1U)
#define SPI_ISR_TFOIS_MASK                                 (0x1U << SPI_ISR_TFOIS_SHIFT)                                /* 0x00000002 */
#define SPI_ISR_RFUIS_SHIFT                                (2U)
#define SPI_ISR_RFUIS_MASK                                 (0x1U << SPI_ISR_RFUIS_SHIFT)                                /* 0x00000004 */
#define SPI_ISR_RFOIS_SHIFT                                (3U)
#define SPI_ISR_RFOIS_MASK                                 (0x1U << SPI_ISR_RFOIS_SHIFT)                                /* 0x00000008 */
#define SPI_ISR_RFFIS_SHIFT                                (4U)
#define SPI_ISR_RFFIS_MASK                                 (0x1U << SPI_ISR_RFFIS_SHIFT)                                /* 0x00000010 */
#define SPI_ISR_TOIS_SHIFT                                 (5U)
#define SPI_ISR_TOIS_MASK                                  (0x1U << SPI_ISR_TOIS_SHIFT)                                 /* 0x00000020 */
#define SPI_ISR_SSPIS_SHIFT                                (6U)
#define SPI_ISR_SSPIS_MASK                                 (0x1U << SPI_ISR_SSPIS_SHIFT)                                /* 0x00000040 */
#define SPI_ISR_TXFIS_SHIFT                                (7U)
#define SPI_ISR_TXFIS_MASK                                 (0x1U << SPI_ISR_TXFIS_SHIFT)                                /* 0x00000080 */
/* RISR */
#define SPI_RISR_TFERIS_SHIFT                              (0U)
#define SPI_RISR_TFERIS_MASK                               (0x1U << SPI_RISR_TFERIS_SHIFT)                              /* 0x00000001 */
#define SPI_RISR_TFORIS_SHIFT                              (1U)
#define SPI_RISR_TFORIS_MASK                               (0x1U << SPI_RISR_TFORIS_SHIFT)                              /* 0x00000002 */
#define SPI_RISR_RFURIS_SHIFT                              (2U)
#define SPI_RISR_RFURIS_MASK                               (0x1U << SPI_RISR_RFURIS_SHIFT)                              /* 0x00000004 */
#define SPI_RISR_RFORIS_SHIFT                              (3U)
#define SPI_RISR_RFORIS_MASK                               (0x1U << SPI_RISR_RFORIS_SHIFT)                              /* 0x00000008 */
#define SPI_RISR_RFFRIS_SHIFT                              (4U)
#define SPI_RISR_RFFRIS_MASK                               (0x1U << SPI_RISR_RFFRIS_SHIFT)                              /* 0x00000010 */
#define SPI_RISR_TORIS_SHIFT                               (5U)
#define SPI_RISR_TORIS_MASK                                (0x1U << SPI_RISR_TORIS_SHIFT)                               /* 0x00000020 */
#define SPI_RISR_SSPRIS_SHIFT                              (6U)
#define SPI_RISR_SSPRIS_MASK                               (0x1U << SPI_RISR_SSPRIS_SHIFT)                              /* 0x00000040 */
#define SPI_RISR_TXFRIS_SHIFT                              (7U)
#define SPI_RISR_TXFRIS_MASK                               (0x1U << SPI_RISR_TXFRIS_SHIFT)                              /* 0x00000080 */
/* ICR */
#define SPI_ICR_CCI_SHIFT                                  (0U)
#define SPI_ICR_CCI_MASK                                   (0x1U << SPI_ICR_CCI_SHIFT)                                  /* 0x00000001 */
#define SPI_ICR_CRFUI_SHIFT                                (1U)
#define SPI_ICR_CRFUI_MASK                                 (0x1U << SPI_ICR_CRFUI_SHIFT)                                /* 0x00000002 */
#define SPI_ICR_CRFOI_SHIFT                                (2U)
#define SPI_ICR_CRFOI_MASK                                 (0x1U << SPI_ICR_CRFOI_SHIFT)                                /* 0x00000004 */
#define SPI_ICR_CTFOI_SHIFT                                (3U)
#define SPI_ICR_CTFOI_MASK                                 (0x1U << SPI_ICR_CTFOI_SHIFT)                                /* 0x00000008 */
#define SPI_ICR_CTOI_SHIFT                                 (4U)
#define SPI_ICR_CTOI_MASK                                  (0x1U << SPI_ICR_CTOI_SHIFT)                                 /* 0x00000010 */
#define SPI_ICR_CSSPI_SHIFT                                (5U)
#define SPI_ICR_CSSPI_MASK                                 (0x1U << SPI_ICR_CSSPI_SHIFT)                                /* 0x00000020 */
#define SPI_ICR_CTXFI_SHIFT                                (6U)
#define SPI_ICR_CTXFI_MASK                                 (0x1U << SPI_ICR_CTXFI_SHIFT)                                /* 0x00000040 */
/* DMACR */
#define SPI_DMACR_RDE_SHIFT                                (0U)
#define SPI_DMACR_RDE_MASK                                 (0x1U << SPI_DMACR_RDE_SHIFT)                                /* 0x00000001 */
#define SPI_DMACR_TDE_SHIFT                                (1U)
#define SPI_DMACR_TDE_MASK                                 (0x1U << SPI_DMACR_TDE_SHIFT)                                /* 0x00000002 */
/* DMATDLR */
#define SPI_DMATDLR_TDL_SHIFT                              (0U)
#define SPI_DMATDLR_TDL_MASK                               (0x3FU << SPI_DMATDLR_TDL_SHIFT)                             /* 0x0000003F */
/* DMARDLR */
#define SPI_DMARDLR_RDL_SHIFT                              (0U)
#define SPI_DMARDLR_RDL_MASK                               (0x3FU << SPI_DMARDLR_RDL_SHIFT)                             /* 0x0000003F */
/* TIMEOUT */
#define SPI_TIMEOUT_TOV_SHIFT                              (0U)
#define SPI_TIMEOUT_TOV_MASK                               (0xFFFFU << SPI_TIMEOUT_TOV_SHIFT)                           /* 0x0000FFFF */
#define SPI_TIMEOUT_TOE_SHIFT                              (16U)
#define SPI_TIMEOUT_TOE_MASK                               (0x1U << SPI_TIMEOUT_TOE_SHIFT)                              /* 0x00010000 */
/* BYPASS */
#define SPI_BYPASS_BYEN_SHIFT                              (0U)
#define SPI_BYPASS_BYEN_MASK                               (0x1U << SPI_BYPASS_BYEN_SHIFT)                              /* 0x00000001 */
#define SPI_BYPASS_FBM_SHIFT                               (1U)
#define SPI_BYPASS_FBM_MASK                                (0x1U << SPI_BYPASS_FBM_SHIFT)                               /* 0x00000002 */
#define SPI_BYPASS_END_SHIFT                               (2U)
#define SPI_BYPASS_END_MASK                                (0x1U << SPI_BYPASS_END_SHIFT)                               /* 0x00000004 */
#define SPI_BYPASS_RXCP_SHIFT                              (3U)
#define SPI_BYPASS_RXCP_MASK                               (0x1U << SPI_BYPASS_RXCP_SHIFT)                              /* 0x00000008 */
#define SPI_BYPASS_TXCP_SHIFT                              (4U)
#define SPI_BYPASS_TXCP_MASK                               (0x1U << SPI_BYPASS_TXCP_SHIFT)                              /* 0x00000010 */
/* TXDR */
#define SPI_TXDR_TXDR_SHIFT                                (0U)
#define SPI_TXDR_TXDR_MASK                                 (0xFFFFU << SPI_TXDR_TXDR_SHIFT)                             /* 0x0000FFFF */
/* RXDR */
#define SPI_RXDR_RXDR_SHIFT                                (0U)
#define SPI_RXDR_RXDR_MASK                                 (0xFFFFU << SPI_RXDR_RXDR_SHIFT)                             /* 0x0000FFFF */
/******************************************GPIO******************************************/
/* SWPORT_DR_L */
#define GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT          (0U)
#define GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_MASK           (0xFFFFU << GPIO_SWPORT_DR_L_GPIO_SWPORT_DR_LOW_SHIFT)       /* 0x0000FFFF */
/* SWPORT_DR_H */
#define GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT         (0U)
#define GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_MASK          (0xFFFFU << GPIO_SWPORT_DR_H_GPIO_SWPORT_DR_HIGH_SHIFT)      /* 0x0000FFFF */
/* SWPORT_DDR_L */
#define GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT        (0U)
#define GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_MASK         (0xFFFFU << GPIO_SWPORT_DDR_L_GPIO_SWPORT_DDR_LOW_SHIFT)     /* 0x0000FFFF */
/* SWPORT_DDR_H */
#define GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT       (0U)
#define GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_MASK        (0xFFFFU << GPIO_SWPORT_DDR_H_GPIO_SWPORT_DDR_HIGH_SHIFT)    /* 0x0000FFFF */
/* INT_EN_L */
#define GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT                (0U)
#define GPIO_INT_EN_L_GPIO_INT_EN_LOW_MASK                 (0xFFFFU << GPIO_INT_EN_L_GPIO_INT_EN_LOW_SHIFT)             /* 0x0000FFFF */
/* INT_EN_H */
#define GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT               (0U)
#define GPIO_INT_EN_H_GPIO_INT_EN_HIGH_MASK                (0xFFFFU << GPIO_INT_EN_H_GPIO_INT_EN_HIGH_SHIFT)            /* 0x0000FFFF */
/* INT_MASK_L */
#define GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT            (0U)
#define GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_MASK             (0xFFFFU << GPIO_INT_MASK_L_GPIO_INT_MASK_LOW_SHIFT)         /* 0x0000FFFF */
/* INT_MASK_H */
#define GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT           (0U)
#define GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_MASK            (0xFFFFU << GPIO_INT_MASK_H_GPIO_INT_MASK_HIGH_SHIFT)        /* 0x0000FFFF */
/* INT_TYPE_L */
#define GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT            (0U)
#define GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_MASK             (0xFFFFU << GPIO_INT_TYPE_L_GPIO_INT_TYPE_LOW_SHIFT)         /* 0x0000FFFF */
/* INT_TYPE_H */
#define GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT           (0U)
#define GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_MASK            (0xFFFFU << GPIO_INT_TYPE_H_GPIO_INT_TYPE_HIGH_SHIFT)        /* 0x0000FFFF */
/* INT_POLARITY_L */
#define GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT    (0U)
#define GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_MASK     (0xFFFFU << GPIO_INT_POLARITY_L_GPIO_INT_POLARITY_LOW_SHIFT) /* 0x0000FFFF */
/* INT_POLARITY_H */
#define GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT   (0U)
#define GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_MASK    (0xFFFFU << GPIO_INT_POLARITY_H_GPIO_INT_POLARITY_HIGH_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_L */
#define GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT    (0U)
#define GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_MASK     (0xFFFFU << GPIO_INT_BOTHEDGE_L_GPIO_INT_BOTHEDGE_LOW_SHIFT) /* 0x0000FFFF */
/* INT_BOTHEDGE_H */
#define GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT   (0U)
#define GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_MASK    (0xFFFFU << GPIO_INT_BOTHEDGE_H_GPIO_INT_BOTHEDGE_HIGH_SHIFT) /* 0x0000FFFF */
/* DEBOUNCE_L */
#define GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT            (0U)
#define GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_MASK             (0xFFFFU << GPIO_DEBOUNCE_L_GPIO_DEBOUNCE_LOW_SHIFT)         /* 0x0000FFFF */
/* DEBOUNCE_H */
#define GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT           (0U)
#define GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_MASK            (0xFFFFU << GPIO_DEBOUNCE_H_GPIO_DEBOUNCE_HIGH_SHIFT)        /* 0x0000FFFF */
/* DBCLK_DIV_EN_L */
#define GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT    (0U)
#define GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_MASK     (0xFFFFU << GPIO_DBCLK_DIV_EN_L_GPIO_DBCLK_DIV_EN_LOW_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_EN_H */
#define GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT   (0U)
#define GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_MASK    (0xFFFFU << GPIO_DBCLK_DIV_EN_H_GPIO_DBCLK_DIV_EN_HIGH_SHIFT) /* 0x0000FFFF */
/* DBCLK_DIV_CON */
#define GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT        (0U)
#define GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_MASK         (0xFFFFFFU << GPIO_DBCLK_DIV_CON_GPIO_DBCLK_DIV_CON_SHIFT)   /* 0x00FFFFFF */
/* INT_STATUS */
#define GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT              (0U)
#define GPIO_INT_STATUS_GPIO_INT_STATUS_MASK               (0xFFFFFFFFU << GPIO_INT_STATUS_GPIO_INT_STATUS_SHIFT)       /* 0xFFFFFFFF */
/* INT_RAWSTATUS */
#define GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT        (0U)
#define GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_MASK         (0xFFFFFFFFU << GPIO_INT_RAWSTATUS_GPIO_INT_RAWSTATUS_SHIFT) /* 0xFFFFFFFF */
/* PORT_EOI_L */
#define GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT            (0U)
#define GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_MASK             (0xFFFFU << GPIO_PORT_EOI_L_GPIO_PORT_EOI_LOW_SHIFT)         /* 0x0000FFFF */
/* PORT_EOI_H */
#define GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT           (0U)
#define GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_MASK            (0xFFFFU << GPIO_PORT_EOI_H_GPIO_PORT_EOI_HIGH_SHIFT)        /* 0x0000FFFF */
/* EXT_PORT */
#define GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT                  (0U)
#define GPIO_EXT_PORT_GPIO_EXT_PORT_MASK                   (0xFFFFFFFFU << GPIO_EXT_PORT_GPIO_EXT_PORT_SHIFT)           /* 0xFFFFFFFF */
/* VER_ID */
#define GPIO_VER_ID_GPIO_VER_ID_SHIFT                      (0U)
#define GPIO_VER_ID_GPIO_VER_ID_MASK                       (0xFFFFFFFFU << GPIO_VER_ID_GPIO_VER_ID_SHIFT)               /* 0xFFFFFFFF */
/******************************************PDM*******************************************/
/* SYSCONFIG */
#define PDM_SYSCONFIG_RX_CLR_SHIFT                         (0U)
#define PDM_SYSCONFIG_RX_CLR_MASK                          (0x1U << PDM_SYSCONFIG_RX_CLR_SHIFT)                         /* 0x00000001 */
#define PDM_SYSCONFIG_RX_START_SHIFT                       (2U)
#define PDM_SYSCONFIG_RX_START_MASK                        (0x1U << PDM_SYSCONFIG_RX_START_SHIFT)                       /* 0x00000004 */
/* CTRL0 */
#define PDM_CTRL0_DATA_VLD_WIDTH_SHIFT                     (0U)
#define PDM_CTRL0_DATA_VLD_WIDTH_MASK                      (0x1FU << PDM_CTRL0_DATA_VLD_WIDTH_SHIFT)                    /* 0x0000001F */
#define PDM_CTRL0_SAMPLE_RATE_SEL_SHIFT                    (5U)
#define PDM_CTRL0_SAMPLE_RATE_SEL_MASK                     (0x7U << PDM_CTRL0_SAMPLE_RATE_SEL_SHIFT)                    /* 0x000000E0 */
#define PDM_CTRL0_INT_DIV_CON_SHIFT                        (8U)
#define PDM_CTRL0_INT_DIV_CON_MASK                         (0xFFU << PDM_CTRL0_INT_DIV_CON_SHIFT)                       /* 0x0000FF00 */
#define PDM_CTRL0_SIG_SCALE_MODE_SHIFT                     (24U)
#define PDM_CTRL0_SIG_SCALE_MODE_MASK                      (0x1U << PDM_CTRL0_SIG_SCALE_MODE_SHIFT)                     /* 0x01000000 */
#define PDM_CTRL0_FILTER_GATE_EN_SHIFT                     (25U)
#define PDM_CTRL0_FILTER_GATE_EN_MASK                      (0x1U << PDM_CTRL0_FILTER_GATE_EN_SHIFT)                     /* 0x02000000 */
#define PDM_CTRL0_HWT_EN_SHIFT                             (26U)
#define PDM_CTRL0_HWT_EN_MASK                              (0x1U << PDM_CTRL0_HWT_EN_SHIFT)                             /* 0x04000000 */
#define PDM_CTRL0_PATH0_EN_SHIFT                           (27U)
#define PDM_CTRL0_PATH0_EN_MASK                            (0x1U << PDM_CTRL0_PATH0_EN_SHIFT)                           /* 0x08000000 */
#define PDM_CTRL0_PATH1_EN_SHIFT                           (28U)
#define PDM_CTRL0_PATH1_EN_MASK                            (0x1U << PDM_CTRL0_PATH1_EN_SHIFT)                           /* 0x10000000 */
#define PDM_CTRL0_PATH2_EN_SHIFT                           (29U)
#define PDM_CTRL0_PATH2_EN_MASK                            (0x1U << PDM_CTRL0_PATH2_EN_SHIFT)                           /* 0x20000000 */
#define PDM_CTRL0_PATH3_EN_SHIFT                           (30U)
#define PDM_CTRL0_PATH3_EN_MASK                            (0x1U << PDM_CTRL0_PATH3_EN_SHIFT)                           /* 0x40000000 */
#define PDM_CTRL0_SJM_SEL_SHIFT                            (31U)
#define PDM_CTRL0_SJM_SEL_MASK                             (0x1U << PDM_CTRL0_SJM_SEL_SHIFT)                            /* 0x80000000 */
/* CTRL1 */
#define PDM_CTRL1_FRAC_DIV_DENOMONATOR_SHIFT               (0U)
#define PDM_CTRL1_FRAC_DIV_DENOMONATOR_MASK                (0xFFFFU << PDM_CTRL1_FRAC_DIV_DENOMONATOR_SHIFT)            /* 0x0000FFFF */
#define PDM_CTRL1_FRAC_DIV_NUMERATOR_SHIFT                 (16U)
#define PDM_CTRL1_FRAC_DIV_NUMERATOR_MASK                  (0xFFFFU << PDM_CTRL1_FRAC_DIV_NUMERATOR_SHIFT)              /* 0xFFFF0000 */
/* CLK_CTRL */
#define PDM_CLK_CTRL_CIC_DS_RATIO_SHIFT                    (0U)
#define PDM_CLK_CTRL_CIC_DS_RATIO_MASK                     (0x3U << PDM_CLK_CTRL_CIC_DS_RATIO_SHIFT)                    /* 0x00000003 */
#define PDM_CLK_CTRL_FIR_COM_BPS_SHIFT                     (2U)
#define PDM_CLK_CTRL_FIR_COM_BPS_MASK                      (0x1U << PDM_CLK_CTRL_FIR_COM_BPS_SHIFT)                     /* 0x00000004 */
#define PDM_CLK_CTRL_LR_CH_EX_SHIFT                        (3U)
#define PDM_CLK_CTRL_LR_CH_EX_MASK                         (0x1U << PDM_CLK_CTRL_LR_CH_EX_SHIFT)                        /* 0x00000008 */
#define PDM_CLK_CTRL_DIV_TYPE_SEL_SHIFT                    (4U)
#define PDM_CLK_CTRL_DIV_TYPE_SEL_MASK                     (0x1U << PDM_CLK_CTRL_DIV_TYPE_SEL_SHIFT)                    /* 0x00000010 */
#define PDM_CLK_CTRL_PDM_CLK_EN_SHIFT                      (5U)
#define PDM_CLK_CTRL_PDM_CLK_EN_MASK                       (0x1U << PDM_CLK_CTRL_PDM_CLK_EN_SHIFT)                      /* 0x00000020 */
/* HPF_CTRL */
#define PDM_HPF_CTRL_HPF_CF_SHIFT                          (0U)
#define PDM_HPF_CTRL_HPF_CF_MASK                           (0x3U << PDM_HPF_CTRL_HPF_CF_SHIFT)                          /* 0x00000003 */
#define PDM_HPF_CTRL_HPFRE_SHIFT                           (2U)
#define PDM_HPF_CTRL_HPFRE_MASK                            (0x1U << PDM_HPF_CTRL_HPFRE_SHIFT)                           /* 0x00000004 */
#define PDM_HPF_CTRL_HPFLE_SHIFT                           (3U)
#define PDM_HPF_CTRL_HPFLE_MASK                            (0x1U << PDM_HPF_CTRL_HPFLE_SHIFT)                           /* 0x00000008 */
/* FIFO_CTRL */
#define PDM_FIFO_CTRL_RFL_SHIFT                            (0U)
#define PDM_FIFO_CTRL_RFL_MASK                             (0xFFU << PDM_FIFO_CTRL_RFL_SHIFT)                           /* 0x000000FF */
#define PDM_FIFO_CTRL_RFT_SHIFT                            (8U)
#define PDM_FIFO_CTRL_RFT_MASK                             (0x7FU << PDM_FIFO_CTRL_RFT_SHIFT)                           /* 0x00007F00 */
/* DMA_CTRL */
#define PDM_DMA_CTRL_RDL_SHIFT                             (0U)
#define PDM_DMA_CTRL_RDL_MASK                              (0x7FU << PDM_DMA_CTRL_RDL_SHIFT)                            /* 0x0000007F */
#define PDM_DMA_CTRL_RDE_SHIFT                             (8U)
#define PDM_DMA_CTRL_RDE_MASK                              (0x1U << PDM_DMA_CTRL_RDE_SHIFT)                             /* 0x00000100 */
/* INT_EN */
#define PDM_INT_EN_RXTIE_SHIFT                             (0U)
#define PDM_INT_EN_RXTIE_MASK                              (0x1U << PDM_INT_EN_RXTIE_SHIFT)                             /* 0x00000001 */
#define PDM_INT_EN_RXOIE_SHIFT                             (1U)
#define PDM_INT_EN_RXOIE_MASK                              (0x1U << PDM_INT_EN_RXOIE_SHIFT)                             /* 0x00000002 */
/* INT_CLR */
#define PDM_INT_CLR_RXOIC_SHIFT                            (1U)
#define PDM_INT_CLR_RXOIC_MASK                             (0x1U << PDM_INT_CLR_RXOIC_SHIFT)                            /* 0x00000002 */
/* INT_ST */
#define PDM_INT_ST_RXFI_SHIFT                              (0U)
#define PDM_INT_ST_RXFI_MASK                               (0x1U << PDM_INT_ST_RXFI_SHIFT)                              /* 0x00000001 */
#define PDM_INT_ST_RXOI_SHIFT                              (1U)
#define PDM_INT_ST_RXOI_MASK                               (0x1U << PDM_INT_ST_RXOI_SHIFT)                              /* 0x00000002 */
/* RXFIFO_DATA_REG */
#define PDM_RXFIFO_DATA_REG_RXDR_SHIFT                     (0U)
#define PDM_RXFIFO_DATA_REG_RXDR_MASK                      (0xFFFFFFFFU << PDM_RXFIFO_DATA_REG_RXDR_SHIFT)              /* 0xFFFFFFFF */
/* DATA0R_REG */
#define PDM_DATA0R_REG_DATA0R_SHIFT                        (0U)
#define PDM_DATA0R_REG_DATA0R_MASK                         (0xFFFFFFFFU << PDM_DATA0R_REG_DATA0R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA0L_REG */
#define PDM_DATA0L_REG_DATA0L_SHIFT                        (0U)
#define PDM_DATA0L_REG_DATA0L_MASK                         (0xFFFFFFFFU << PDM_DATA0L_REG_DATA0L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA1R_REG */
#define PDM_DATA1R_REG_DATA1R_SHIFT                        (0U)
#define PDM_DATA1R_REG_DATA1R_MASK                         (0x1U << PDM_DATA1R_REG_DATA1R_SHIFT)                        /* 0x00000001 */
/* DATA1L_REG */
#define PDM_DATA1L_REG_DATA1L_SHIFT                        (0U)
#define PDM_DATA1L_REG_DATA1L_MASK                         (0xFFFFFFFFU << PDM_DATA1L_REG_DATA1L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA2R_REG */
#define PDM_DATA2R_REG_DATA2R_SHIFT                        (0U)
#define PDM_DATA2R_REG_DATA2R_MASK                         (0xFFFFFFFFU << PDM_DATA2R_REG_DATA2R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA2L_REG */
#define PDM_DATA2L_REG_DATA2L_SHIFT                        (0U)
#define PDM_DATA2L_REG_DATA2L_MASK                         (0xFFFFFFFFU << PDM_DATA2L_REG_DATA2L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA3R_REG */
#define PDM_DATA3R_REG_DATA3R_SHIFT                        (0U)
#define PDM_DATA3R_REG_DATA3R_MASK                         (0xFFFFFFFFU << PDM_DATA3R_REG_DATA3R_SHIFT)                 /* 0xFFFFFFFF */
/* DATA3L_REG */
#define PDM_DATA3L_REG_DATA3L_SHIFT                        (0U)
#define PDM_DATA3L_REG_DATA3L_MASK                         (0xFFFFFFFFU << PDM_DATA3L_REG_DATA3L_SHIFT)                 /* 0xFFFFFFFF */
/* DATA_VALID */
#define PDM_DATA_VALID_PATH3_VLD_SHIFT                     (0U)
#define PDM_DATA_VALID_PATH3_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH3_VLD_SHIFT)                     /* 0x00000001 */
#define PDM_DATA_VALID_PATH2_VLD_SHIFT                     (1U)
#define PDM_DATA_VALID_PATH2_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH2_VLD_SHIFT)                     /* 0x00000002 */
#define PDM_DATA_VALID_PATH1_VLD_SHIFT                     (2U)
#define PDM_DATA_VALID_PATH1_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH1_VLD_SHIFT)                     /* 0x00000004 */
#define PDM_DATA_VALID_PATH0_VLD_SHIFT                     (3U)
#define PDM_DATA_VALID_PATH0_VLD_MASK                      (0x1U << PDM_DATA_VALID_PATH0_VLD_SHIFT)                     /* 0x00000008 */
/* VERSION */
#define PDM_VERSION_VERSION_SHIFT                          (0U)
#define PDM_VERSION_VERSION_MASK                           (0xFFFFFFFFU << PDM_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* INCR_RXDR */
#define PDM_INCR_RXDR_RECEIVE_FIFO_DATA_SHIFT              (0U)
#define PDM_INCR_RXDR_RECEIVE_FIFO_DATA_MASK               (0xFFFFFFFFU << PDM_INCR_RXDR_RECEIVE_FIFO_DATA_SHIFT)       /* 0xFFFFFFFF */
/******************************************I2STDM*******************************************/
/* TXCR */
#define I2STDM_TXCR_VDW_SHIFT                                 (0U)
#define I2STDM_TXCR_VDW_MASK                                  (0x1FU << I2STDM_TXCR_VDW_SHIFT)                                /* 0x0000001F */
#define I2STDM_TXCR_TFS_SHIFT                                 (5U)
#define I2STDM_TXCR_TFS_MASK                                  (0x3U << I2STDM_TXCR_TFS_SHIFT)                                 /* 0x00000060 */
#define I2STDM_TXCR_PBM_SHIFT                                 (7U)
#define I2STDM_TXCR_PBM_MASK                                  (0x3U << I2STDM_TXCR_PBM_SHIFT)                                 /* 0x00000180 */
#define I2STDM_TXCR_IBM_SHIFT                                 (9U)
#define I2STDM_TXCR_IBM_MASK                                  (0x3U << I2STDM_TXCR_IBM_SHIFT)                                 /* 0x00000600 */
#define I2STDM_TXCR_FBM_SHIFT                                 (11U)
#define I2STDM_TXCR_FBM_MASK                                  (0x1U << I2STDM_TXCR_FBM_SHIFT)                                 /* 0x00000800 */
#define I2STDM_TXCR_SJM_SHIFT                                 (12U)
#define I2STDM_TXCR_SJM_MASK                                  (0x1U << I2STDM_TXCR_SJM_SHIFT)                                 /* 0x00001000 */
#define I2STDM_TXCR_HWT_SHIFT                                 (14U)
#define I2STDM_TXCR_HWT_MASK                                  (0x1U << I2STDM_TXCR_HWT_SHIFT)                                 /* 0x00004000 */
#define I2STDM_TXCR_TCSR_SHIFT                                (15U)
#define I2STDM_TXCR_TCSR_MASK                                 (0x3U << I2STDM_TXCR_TCSR_SHIFT)                                /* 0x00018000 */
#define I2STDM_TXCR_RCNT_SHIFT                                (17U)
#define I2STDM_TXCR_RCNT_MASK                                 (0x3FU << I2STDM_TXCR_RCNT_SHIFT)                               /* 0x007E0000 */
#define I2STDM_TXCR_TX_PATH_SELECT0_SHIFT                     (23U)
#define I2STDM_TXCR_TX_PATH_SELECT0_MASK                      (0x3U << I2STDM_TXCR_TX_PATH_SELECT0_SHIFT)                     /* 0x01800000 */
#define I2STDM_TXCR_TX_PATH_SELECT1_SHIFT                     (25U)
#define I2STDM_TXCR_TX_PATH_SELECT1_MASK                      (0x3U << I2STDM_TXCR_TX_PATH_SELECT1_SHIFT)                     /* 0x06000000 */
#define I2STDM_TXCR_TX_PATH_SELECT2_SHIFT                     (27U)
#define I2STDM_TXCR_TX_PATH_SELECT2_MASK                      (0x3U << I2STDM_TXCR_TX_PATH_SELECT2_SHIFT)                     /* 0x18000000 */
#define I2STDM_TXCR_TX_PATH_SELECT3_SHIFT                     (29U)
#define I2STDM_TXCR_TX_PATH_SELECT3_MASK                      (0x3U << I2STDM_TXCR_TX_PATH_SELECT3_SHIFT)                     /* 0x60000000 */
/* RXCR */
#define I2STDM_RXCR_VDW_SHIFT                                 (0U)
#define I2STDM_RXCR_VDW_MASK                                  (0x1FU << I2STDM_RXCR_VDW_SHIFT)                                /* 0x0000001F */
#define I2STDM_RXCR_TFS_SHIFT                                 (5U)
#define I2STDM_RXCR_TFS_MASK                                  (0x3U << I2STDM_RXCR_TFS_SHIFT)                                 /* 0x00000060 */
#define I2STDM_RXCR_PBM_SHIFT                                 (7U)
#define I2STDM_RXCR_PBM_MASK                                  (0x3U << I2STDM_RXCR_PBM_SHIFT)                                 /* 0x00000180 */
#define I2STDM_RXCR_IBM_SHIFT                                 (9U)
#define I2STDM_RXCR_IBM_MASK                                  (0x3U << I2STDM_RXCR_IBM_SHIFT)                                 /* 0x00000600 */
#define I2STDM_RXCR_FBM_SHIFT                                 (11U)
#define I2STDM_RXCR_FBM_MASK                                  (0x1U << I2STDM_RXCR_FBM_SHIFT)                                 /* 0x00000800 */
#define I2STDM_RXCR_SJM_SHIFT                                 (12U)
#define I2STDM_RXCR_SJM_MASK                                  (0x1U << I2STDM_RXCR_SJM_SHIFT)                                 /* 0x00001000 */
#define I2STDM_RXCR_HWT_SHIFT                                 (14U)
#define I2STDM_RXCR_HWT_MASK                                  (0x1U << I2STDM_RXCR_HWT_SHIFT)                                 /* 0x00004000 */
#define I2STDM_RXCR_RCSR_SHIFT                                (15U)
#define I2STDM_RXCR_RCSR_MASK                                 (0x3U << I2STDM_RXCR_RCSR_SHIFT)                                /* 0x00018000 */
#define I2STDM_RXCR_RX_PATH_SELECT0_SHIFT                     (17U)
#define I2STDM_RXCR_RX_PATH_SELECT0_MASK                      (0x3U << I2STDM_RXCR_RX_PATH_SELECT0_SHIFT)                     /* 0x00060000 */
#define I2STDM_RXCR_RX_PATH_SELECT1_SHIFT                     (19U)
#define I2STDM_RXCR_RX_PATH_SELECT1_MASK                      (0x3U << I2STDM_RXCR_RX_PATH_SELECT1_SHIFT)                     /* 0x00180000 */
#define I2STDM_RXCR_RX_PATH_SELECT2_SHIFT                     (21U)
#define I2STDM_RXCR_RX_PATH_SELECT2_MASK                      (0x3U << I2STDM_RXCR_RX_PATH_SELECT2_SHIFT)                     /* 0x00600000 */
#define I2STDM_RXCR_RX_PATH_SELECT3_SHIFT                     (23U)
#define I2STDM_RXCR_RX_PATH_SELECT3_MASK                      (0x3U << I2STDM_RXCR_RX_PATH_SELECT3_SHIFT)                     /* 0x01800000 */
/* CKR */
#define I2STDM_CKR_TSD_SHIFT                                  (0U)
#define I2STDM_CKR_TSD_MASK                                   (0xFFU << I2STDM_CKR_TSD_SHIFT)                                 /* 0x000000FF */
#define I2STDM_CKR_RSD_SHIFT                                  (8U)
#define I2STDM_CKR_RSD_MASK                                   (0xFFU << I2STDM_CKR_RSD_SHIFT)                                 /* 0x0000FF00 */
#define I2STDM_CKR_TLP_SHIFT                                  (24U)
#define I2STDM_CKR_TLP_MASK                                   (0x1U << I2STDM_CKR_TLP_SHIFT)                                  /* 0x01000000 */
#define I2STDM_CKR_RLP_SHIFT                                  (25U)
#define I2STDM_CKR_RLP_MASK                                   (0x1U << I2STDM_CKR_RLP_SHIFT)                                  /* 0x02000000 */
#define I2STDM_CKR_CKP_SHIFT                                  (26U)
#define I2STDM_CKR_CKP_MASK                                   (0x1U << I2STDM_CKR_CKP_SHIFT)                                  /* 0x04000000 */
#define I2STDM_CKR_MSS_SHIFT                                  (27U)
#define I2STDM_CKR_MSS_MASK                                   (0x1U << I2STDM_CKR_MSS_SHIFT)                                  /* 0x08000000 */
#define I2STDM_CKR_LRCK_COMMON_SHIFT                          (28U)
#define I2STDM_CKR_LRCK_COMMON_MASK                           (0x3U << I2STDM_CKR_LRCK_COMMON_SHIFT)                          /* 0x30000000 */
/* TXFIFOLR */
#define I2STDM_TXFIFOLR_TFL0_SHIFT                            (0U)
#define I2STDM_TXFIFOLR_TFL0_MASK                             (0x3FU << I2STDM_TXFIFOLR_TFL0_SHIFT)                           /* 0x0000003F */
#define I2STDM_TXFIFOLR_TFL1_SHIFT                            (6U)
#define I2STDM_TXFIFOLR_TFL1_MASK                             (0x3FU << I2STDM_TXFIFOLR_TFL1_SHIFT)                           /* 0x00000FC0 */
#define I2STDM_TXFIFOLR_TFL2_SHIFT                            (12U)
#define I2STDM_TXFIFOLR_TFL2_MASK                             (0x3FU << I2STDM_TXFIFOLR_TFL2_SHIFT)                           /* 0x0003F000 */
#define I2STDM_TXFIFOLR_TFL3_SHIFT                            (18U)
#define I2STDM_TXFIFOLR_TFL3_MASK                             (0x3FU << I2STDM_TXFIFOLR_TFL3_SHIFT)                           /* 0x00FC0000 */
/* DMACR */
#define I2STDM_DMACR_TDL_SHIFT                                (0U)
#define I2STDM_DMACR_TDL_MASK                                 (0x1FU << I2STDM_DMACR_TDL_SHIFT)                               /* 0x0000001F */
#define I2STDM_DMACR_TDE_SHIFT                                (8U)
#define I2STDM_DMACR_TDE_MASK                                 (0x1U << I2STDM_DMACR_TDE_SHIFT)                                /* 0x00000100 */
#define I2STDM_DMACR_RDL_SHIFT                                (16U)
#define I2STDM_DMACR_RDL_MASK                                 (0x1FU << I2STDM_DMACR_RDL_SHIFT)                               /* 0x001F0000 */
#define I2STDM_DMACR_RDE_SHIFT                                (24U)
#define I2STDM_DMACR_RDE_MASK                                 (0x1U << I2STDM_DMACR_RDE_SHIFT)                                /* 0x01000000 */
/* INTCR */
#define I2STDM_INTCR_TXEIE_SHIFT                              (0U)
#define I2STDM_INTCR_TXEIE_MASK                               (0x1U << I2STDM_INTCR_TXEIE_SHIFT)                              /* 0x00000001 */
#define I2STDM_INTCR_TXUIE_SHIFT                              (1U)
#define I2STDM_INTCR_TXUIE_MASK                               (0x1U << I2STDM_INTCR_TXUIE_SHIFT)                              /* 0x00000002 */
#define I2STDM_INTCR_TXUIC_SHIFT                              (2U)
#define I2STDM_INTCR_TXUIC_MASK                               (0x1U << I2STDM_INTCR_TXUIC_SHIFT)                              /* 0x00000004 */
#define I2STDM_INTCR_TFT_SHIFT                                (4U)
#define I2STDM_INTCR_TFT_MASK                                 (0x1FU << I2STDM_INTCR_TFT_SHIFT)                               /* 0x000001F0 */
#define I2STDM_INTCR_RXFIE_SHIFT                              (16U)
#define I2STDM_INTCR_RXFIE_MASK                               (0x1U << I2STDM_INTCR_RXFIE_SHIFT)                              /* 0x00010000 */
#define I2STDM_INTCR_RXOIE_SHIFT                              (17U)
#define I2STDM_INTCR_RXOIE_MASK                               (0x1U << I2STDM_INTCR_RXOIE_SHIFT)                              /* 0x00020000 */
#define I2STDM_INTCR_RXOIC_SHIFT                              (18U)
#define I2STDM_INTCR_RXOIC_MASK                               (0x1U << I2STDM_INTCR_RXOIC_SHIFT)                              /* 0x00040000 */
#define I2STDM_INTCR_RFT_SHIFT                                (20U)
#define I2STDM_INTCR_RFT_MASK                                 (0x1FU << I2STDM_INTCR_RFT_SHIFT)                               /* 0x01F00000 */
/* INTSR */
#define I2STDM_INTSR_TXEI_SHIFT                               (0U)
#define I2STDM_INTSR_TXEI_MASK                                (0x1U << I2STDM_INTSR_TXEI_SHIFT)                               /* 0x00000001 */
#define I2STDM_INTSR_TXUI_SHIFT                               (1U)
#define I2STDM_INTSR_TXUI_MASK                                (0x1U << I2STDM_INTSR_TXUI_SHIFT)                               /* 0x00000002 */
#define I2STDM_INTSR_RXFI_SHIFT                               (16U)
#define I2STDM_INTSR_RXFI_MASK                                (0x1U << I2STDM_INTSR_RXFI_SHIFT)                               /* 0x00010000 */
#define I2STDM_INTSR_RXOI_SHIFT                               (17U)
#define I2STDM_INTSR_RXOI_MASK                                (0x1U << I2STDM_INTSR_RXOI_SHIFT)                               /* 0x00020000 */
/* XFER */
#define I2STDM_XFER_TXS_SHIFT                                 (0U)
#define I2STDM_XFER_TXS_MASK                                  (0x1U << I2STDM_XFER_TXS_SHIFT)                                 /* 0x00000001 */
#define I2STDM_XFER_RXS_SHIFT                                 (1U)
#define I2STDM_XFER_RXS_MASK                                  (0x1U << I2STDM_XFER_RXS_SHIFT)                                 /* 0x00000002 */
/* CLR */
#define I2STDM_CLR_TXC_SHIFT                                  (0U)
#define I2STDM_CLR_TXC_MASK                                   (0x1U << I2STDM_CLR_TXC_SHIFT)                                  /* 0x00000001 */
#define I2STDM_CLR_RXC_SHIFT                                  (1U)
#define I2STDM_CLR_RXC_MASK                                   (0x1U << I2STDM_CLR_RXC_SHIFT)                                  /* 0x00000002 */
/* TXDR */
#define I2STDM_TXDR_TXDR_SHIFT                                (0U)
#define I2STDM_TXDR_TXDR_MASK                                 (0xFFFFFFFFU << I2STDM_TXDR_TXDR_SHIFT)                         /* 0xFFFFFFFF */
/* RXDR */
#define I2STDM_RXDR_RXDR_SHIFT                                (0U)
#define I2STDM_RXDR_RXDR_MASK                                 (0xFFFFFFFFU << I2STDM_RXDR_RXDR_SHIFT)                         /* 0xFFFFFFFF */
/* RXFIFOLR */
#define I2STDM_RXFIFOLR_RFL0_SHIFT                            (0U)
#define I2STDM_RXFIFOLR_RFL0_MASK                             (0x3FU << I2STDM_RXFIFOLR_RFL0_SHIFT)                           /* 0x0000003F */
#define I2STDM_RXFIFOLR_RFL1_SHIFT                            (6U)
#define I2STDM_RXFIFOLR_RFL1_MASK                             (0x3FU << I2STDM_RXFIFOLR_RFL1_SHIFT)                           /* 0x00000FC0 */
#define I2STDM_RXFIFOLR_RFL2_SHIFT                            (12U)
#define I2STDM_RXFIFOLR_RFL2_MASK                             (0x3FU << I2STDM_RXFIFOLR_RFL2_SHIFT)                           /* 0x0003F000 */
#define I2STDM_RXFIFOLR_RFL3_SHIFT                            (18U)
#define I2STDM_RXFIFOLR_RFL3_MASK                             (0x3FU << I2STDM_RXFIFOLR_RFL3_SHIFT)                           /* 0x00FC0000 */
/* TDM_TXCTRL */
#define I2STDM_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_SHIFT            (0U)
#define I2STDM_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_MASK             (0x1FFU << I2STDM_TDM_TXCTRL_TDM_TX_FRAME_WIDTH_SHIFT)          /* 0x000001FF */
#define I2STDM_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_SHIFT         (9U)
#define I2STDM_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_MASK          (0x1FU << I2STDM_TDM_TXCTRL_TDM_TX_SLOT_BIT_WIDTH_SHIFT)        /* 0x00003E00 */
#define I2STDM_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_SHIFT             (14U)
#define I2STDM_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_MASK              (0x7U << I2STDM_TDM_TXCTRL_TDM_TX_SHIFT_CTRL_SHIFT)             /* 0x0001C000 */
#define I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_SHIFT       (17U)
#define I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_MASK        (0x1U << I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL0_SHIFT)       /* 0x00020000 */
#define I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_SHIFT       (18U)
#define I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_MASK        (0x7U << I2STDM_TDM_TXCTRL_TX_TDM_FSYNC_WIDTH_SEL1_SHIFT)       /* 0x001C0000 */
/* TDM_RXCTRL */
#define I2STDM_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_SHIFT            (0U)
#define I2STDM_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_MASK             (0x1FFU << I2STDM_TDM_RXCTRL_TDM_RX_FRAME_WIDTH_SHIFT)          /* 0x000001FF */
#define I2STDM_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_SHIFT         (9U)
#define I2STDM_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_MASK          (0x1FU << I2STDM_TDM_RXCTRL_TDM_RX_SLOT_BIT_WIDTH_SHIFT)        /* 0x00003E00 */
#define I2STDM_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_SHIFT             (14U)
#define I2STDM_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_MASK              (0x7U << I2STDM_TDM_RXCTRL_TDM_RX_SHIFT_CTRL_SHIFT)             /* 0x0001C000 */
#define I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_SHIFT       (17U)
#define I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_MASK        (0x1U << I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL0_SHIFT)       /* 0x00020000 */
#define I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_SHIFT       (18U)
#define I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_MASK        (0x7U << I2STDM_TDM_RXCTRL_RX_TDM_FSYNC_WIDTH_SEL1_SHIFT)       /* 0x001C0000 */
/* CLKDIV */
#define I2STDM_CLKDIV_TX_MDIV_SHIFT                           (0U)
#define I2STDM_CLKDIV_TX_MDIV_MASK                            (0xFFU << I2STDM_CLKDIV_TX_MDIV_SHIFT)                          /* 0x000000FF */
#define I2STDM_CLKDIV_RX_MDIV_SHIFT                           (8U)
#define I2STDM_CLKDIV_RX_MDIV_MASK                            (0xFFU << I2STDM_CLKDIV_RX_MDIV_SHIFT)                          /* 0x0000FF00 */
/* VERSION */
#define I2STDM_VERSION_I2S_VERSION_SHIFT                      (0U)
#define I2STDM_VERSION_I2S_VERSION_MASK                       (0xFFFFFFFFU << I2STDM_VERSION_I2S_VERSION_SHIFT)               /* 0xFFFFFFFF */
/******************************************VAD*******************************************/
/* CONTROL */
#define VAD_CONTROL_OFFSET                                 (0x0)
#define VAD_CONTROL_VAD_EN_SHIFT                           (0U)
#define VAD_CONTROL_VAD_EN_MASK                            (0x1U << VAD_CONTROL_VAD_EN_SHIFT)                           /* 0x00000001 */
#define VAD_CONTROL_SOURCE_SELECT_SHIFT                    (1U)
#define VAD_CONTROL_SOURCE_SELECT_MASK                     (0x7U << VAD_CONTROL_SOURCE_SELECT_SHIFT)                    /* 0x0000000E */
#define VAD_CONTROL_SOURCE_BURST_SHIFT                     (4U)
#define VAD_CONTROL_SOURCE_BURST_MASK                      (0x7U << VAD_CONTROL_SOURCE_BURST_SHIFT)                     /* 0x00000070 */
#define VAD_CONTROL_SOURCE_BURST_NUM_SHIFT                 (7U)
#define VAD_CONTROL_SOURCE_BURST_NUM_MASK                  (0x7U << VAD_CONTROL_SOURCE_BURST_NUM_SHIFT)                 /* 0x00000380 */
#define VAD_CONTROL_INCR_LENGTH_SHIFT                      (10U)
#define VAD_CONTROL_INCR_LENGTH_MASK                       (0xFU << VAD_CONTROL_INCR_LENGTH_SHIFT)                      /* 0x00003C00 */
#define VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT                (14U)
#define VAD_CONTROL_SOURCE_FIXADDR_EN_MASK                 (0x1U << VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT)                /* 0x00004000 */
#define VAD_CONTROL_VAD_MODE_SHIFT                         (20U)
#define VAD_CONTROL_VAD_MODE_MASK                          (0x3U << VAD_CONTROL_VAD_MODE_SHIFT)                         /* 0x00300000 */
#define VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT                (23U)
#define VAD_CONTROL_VOICE_CHANNEL_NUM_MASK                 (0x7U << VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT)                /* 0x03800000 */
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT           (26U)
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_MASK            (0x1U << VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT)           /* 0x04000000 */
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT           (27U)
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_MASK            (0x1U << VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT)           /* 0x08000000 */
#define VAD_CONTROL_VOICE_24BIT_SAT_SHIFT                  (28U)
#define VAD_CONTROL_VOICE_24BIT_SAT_MASK                   (0x1U << VAD_CONTROL_VOICE_24BIT_SAT_SHIFT)                  /* 0x10000000 */
#define VAD_CONTROL_VAD_DET_CHANNEL_SHIFT                  (29U)
#define VAD_CONTROL_VAD_DET_CHANNEL_MASK                   (0x7U << VAD_CONTROL_VAD_DET_CHANNEL_SHIFT)                  /* 0xE0000000 */
/* VS_ADDR */
#define VAD_VS_ADDR_OFFSET                                 (0x4)
#define VAD_VS_ADDR_VS_ADDR_SHIFT                          (0U)
#define VAD_VS_ADDR_VS_ADDR_MASK                           (0xFFFFFFFFU << VAD_VS_ADDR_VS_ADDR_SHIFT)                   /* 0xFFFFFFFF */
/* TIMEOUT */
#define VAD_TIMEOUT_OFFSET                                 (0x4C)
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT                 (0U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_MASK                  (0xFFFFFU << VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT)             /* 0x000FFFFF */
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT                 (20U)
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_MASK                  (0x3FFU << VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT)               /* 0x3FF00000 */
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT                  (30U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT)                  /* 0x40000000 */
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT                  (31U)
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT)                  /* 0x80000000 */
/* RAM_START_ADDR */
#define VAD_RAM_START_ADDR_OFFSET                          (0x50)
#define VAD_RAM_START_ADDR_RAM_START_ADDR_SHIFT            (0U)
#define VAD_RAM_START_ADDR_RAM_START_ADDR_MASK             (0xFFFFFFFFU << VAD_RAM_START_ADDR_RAM_START_ADDR_SHIFT)     /* 0xFFFFFFFF */
/* RAM_END_ADDR */
#define VAD_RAM_END_ADDR_OFFSET                            (0x54)
#define VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT                (0U)
#define VAD_RAM_END_ADDR_RAM_END_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* RAM_CUR_ADDR */
#define VAD_RAM_CUR_ADDR_OFFSET                            (0x58)
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT                (0U)
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* DET_CON0 */
#define VAD_DET_CON0_OFFSET                                (0x5C)
#define VAD_DET_CON0_GAIN_SHIFT                            (0U)
#define VAD_DET_CON0_GAIN_MASK                             (0xFFFU << VAD_DET_CON0_GAIN_SHIFT)                          /* 0x00000FFF */
#define VAD_DET_CON0_NOISE_LEVEL_SHIFT                     (12U)
#define VAD_DET_CON0_NOISE_LEVEL_MASK                      (0x7U << VAD_DET_CON0_NOISE_LEVEL_SHIFT)                     /* 0x00007000 */
#define VAD_DET_CON0_VAD_CON_THD_SHIFT                     (16U)
#define VAD_DET_CON0_VAD_CON_THD_MASK                      (0xFFU << VAD_DET_CON0_VAD_CON_THD_SHIFT)                    /* 0x00FF0000 */
#define VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT                 (24U)
#define VAD_DET_CON0_DIS_VAD_CON_THD_MASK                  (0xFU << VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT)                 /* 0x0F000000 */
#define VAD_DET_CON0_VAD_THD_MODE_SHIFT                    (28U)
#define VAD_DET_CON0_VAD_THD_MODE_MASK                     (0x3U << VAD_DET_CON0_VAD_THD_MODE_SHIFT)                    /* 0x30000000 */
/* DET_CON1 */
#define VAD_DET_CON1_OFFSET                                (0x60)
#define VAD_DET_CON1_SOUND_THD_SHIFT                       (0U)
#define VAD_DET_CON1_SOUND_THD_MASK                        (0xFFFFU << VAD_DET_CON1_SOUND_THD_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT                (16U)
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_MASK                 (0x3FFU << VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT)              /* 0x03FF0000 */
#define VAD_DET_CON1_CLEAN_IIR_EN_SHIFT                    (26U)
#define VAD_DET_CON1_CLEAN_IIR_EN_MASK                     (0x1U << VAD_DET_CON1_CLEAN_IIR_EN_SHIFT)                    /* 0x04000000 */
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT              (28U)
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_MASK               (0x1U << VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT)              /* 0x10000000 */
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT            (29U)
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_MASK             (0x1U << VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT)            /* 0x20000000 */
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT             (30U)
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_MASK              (0x1U << VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT)             /* 0x40000000 */
/* DET_CON2 */
#define VAD_DET_CON2_OFFSET                                (0x64)
#define VAD_DET_CON2_NOISE_FRM_NUM_SHIFT                   (0U)
#define VAD_DET_CON2_NOISE_FRM_NUM_MASK                    (0x7FU << VAD_DET_CON2_NOISE_FRM_NUM_SHIFT)                  /* 0x0000007F */
#define VAD_DET_CON2_NOISE_ALPHA_SHIFT                     (8U)
#define VAD_DET_CON2_NOISE_ALPHA_MASK                      (0xFFU << VAD_DET_CON2_NOISE_ALPHA_SHIFT)                    /* 0x0000FF00 */
#define VAD_DET_CON2_IIR_ANUM_0_SHIFT                      (16U)
#define VAD_DET_CON2_IIR_ANUM_0_MASK                       (0xFFFFU << VAD_DET_CON2_IIR_ANUM_0_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON3 */
#define VAD_DET_CON3_OFFSET                                (0x68)
#define VAD_DET_CON3_IIR_ANUM_1_SHIFT                      (0U)
#define VAD_DET_CON3_IIR_ANUM_1_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON3_IIR_ANUM_2_SHIFT                      (16U)
#define VAD_DET_CON3_IIR_ANUM_2_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON4 */
#define VAD_DET_CON4_OFFSET                                (0x6C)
#define VAD_DET_CON4_IIR_ADEN_1_SHIFT                      (0U)
#define VAD_DET_CON4_IIR_ADEN_1_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON4_IIR_ADEN_2_SHIFT                      (16U)
#define VAD_DET_CON4_IIR_ADEN_2_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON5 */
#define VAD_DET_CON5_OFFSET                                (0x70)
#define VAD_DET_CON5_NOISE_ABS_SHIFT                       (0U)
#define VAD_DET_CON5_NOISE_ABS_MASK                        (0xFFFFU << VAD_DET_CON5_NOISE_ABS_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON5_IIR_RESULT_SHIFT                      (16U)
#define VAD_DET_CON5_IIR_RESULT_MASK                       (0xFFFFU << VAD_DET_CON5_IIR_RESULT_SHIFT)                   /* 0xFFFF0000 */
/* INT */
#define VAD_INT_OFFSET                                     (0x74)
#define VAD_INT_VAD_DET_INT_EN_SHIFT                       (0U)
#define VAD_INT_VAD_DET_INT_EN_MASK                        (0x1U << VAD_INT_VAD_DET_INT_EN_SHIFT)                       /* 0x00000001 */
#define VAD_INT_ERROR_INT_EN_SHIFT                         (1U)
#define VAD_INT_ERROR_INT_EN_MASK                          (0x1U << VAD_INT_ERROR_INT_EN_SHIFT)                         /* 0x00000002 */
#define VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT                  (2U)
#define VAD_INT_IDLE_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000004 */
#define VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT                  (3U)
#define VAD_INT_WORK_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000008 */
#define VAD_INT_VAD_DET_INT_SHIFT                          (4U)
#define VAD_INT_VAD_DET_INT_MASK                           (0x1U << VAD_INT_VAD_DET_INT_SHIFT)                          /* 0x00000010 */
#define VAD_INT_ERROR_INT_SHIFT                            (5U)
#define VAD_INT_ERROR_INT_MASK                             (0x1U << VAD_INT_ERROR_INT_SHIFT)                            /* 0x00000020 */
#define VAD_INT_IDLE_TIMEOUT_INT_SHIFT                     (6U)
#define VAD_INT_IDLE_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_IDLE_TIMEOUT_INT_SHIFT)                     /* 0x00000040 */
#define VAD_INT_WORK_TIMEOUT_INT_SHIFT                     (7U)
#define VAD_INT_WORK_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_WORK_TIMEOUT_INT_SHIFT)                     /* 0x00000080 */
#define VAD_INT_RAMP_LOOP_FLAG_SHIFT                       (8U)
#define VAD_INT_RAMP_LOOP_FLAG_MASK                        (0x1U << VAD_INT_RAMP_LOOP_FLAG_SHIFT)                       /* 0x00000100 */
#define VAD_INT_VAD_IDLE_SHIFT                             (9U)
#define VAD_INT_VAD_IDLE_MASK                              (0x1U << VAD_INT_VAD_IDLE_SHIFT)                             /* 0x00000200 */
#define VAD_INT_VAD_DATA_TRANS_INT_EN_SHIFT                (10U)
#define VAD_INT_VAD_DATA_TRANS_INT_EN_MASK                 (0x1U << VAD_INT_VAD_DATA_TRANS_INT_EN_SHIFT)                /* 0x00000400 */
#define VAD_INT_VAD_DATA_TRANS_INT_SHIFT                   (11U)
#define VAD_INT_VAD_DATA_TRANS_INT_MASK                    (0x1U << VAD_INT_VAD_DATA_TRANS_INT_SHIFT)                   /* 0x00000800 */
#define VAD_INT_RAMP_LOOP_FLAG_BUS_SHIFT                   (12U)
#define VAD_INT_RAMP_LOOP_FLAG_BUS_MASK                    (0x1U << VAD_INT_RAMP_LOOP_FLAG_BUS_SHIFT)                   /* 0x00001000 */
/* AUX_CON0 */
#define VAD_AUX_CON0_OFFSET                                (0x78)
#define VAD_AUX_CON0_BUS_WRITE_EN_SHIFT                    (0U)
#define VAD_AUX_CON0_BUS_WRITE_EN_MASK                     (0x1U << VAD_AUX_CON0_BUS_WRITE_EN_SHIFT)                    /* 0x00000001 */
#define VAD_AUX_CON0_DIS_RAM_ITF_SHIFT                     (1U)
#define VAD_AUX_CON0_DIS_RAM_ITF_MASK                      (0x1U << VAD_AUX_CON0_DIS_RAM_ITF_SHIFT)                     /* 0x00000002 */
#define VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_SHIFT          (2U)
#define VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_MASK           (0x1U << VAD_AUX_CON0_DATA_TRANS_TRIG_INT_EN_SHIFT)          /* 0x00000004 */
#define VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_SHIFT            (4U)
#define VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_MASK             (0xFFU << VAD_AUX_CON0_DATA_TRANS_KBYTE_THD_SHIFT)           /* 0x00000FF0 */
#define VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_SHIFT             (12U)
#define VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_MASK              (0x1U << VAD_AUX_CON0_BUS_WRITE_ADDR_MODE_SHIFT)             /* 0x00001000 */
#define VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_SHIFT      (13U)
#define VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_MASK       (0x1U << VAD_AUX_CON0_BUS_WRITE_REWORK_ADDR_MODE_SHIFT)      /* 0x00002000 */
#define VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_SHIFT      (14U)
#define VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_MASK       (0x1U << VAD_AUX_CON0_RAM_WRITE_REWORK_ADDR_MODE_SHIFT)      /* 0x00004000 */
#define VAD_AUX_CON0_INT_TRIG_VALID_THD_SHIFT              (16U)
#define VAD_AUX_CON0_INT_TRIG_VALID_THD_MASK               (0xFFFU << VAD_AUX_CON0_INT_TRIG_VALID_THD_SHIFT)            /* 0x0FFF0000 */
#define VAD_AUX_CON0_INT_TRIG_CTRL_EN_SHIFT                (28U)
#define VAD_AUX_CON0_INT_TRIG_CTRL_EN_MASK                 (0x1U << VAD_AUX_CON0_INT_TRIG_CTRL_EN_SHIFT)                /* 0x10000000 */
#define VAD_AUX_CON0_SAMPLE_CNT_EN_SHIFT                   (29U)
#define VAD_AUX_CON0_SAMPLE_CNT_EN_MASK                    (0x1U << VAD_AUX_CON0_SAMPLE_CNT_EN_SHIFT)                   /* 0x20000000 */
/* SAMPLE_CNT */
#define VAD_SAMPLE_CNT_OFFSET                              (0x7C)
#define VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT                    (0U)
#define VAD_SAMPLE_CNT_SAMPLE_CNT_MASK                     (0xFFFFFFFFU << VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT)             /* 0xFFFFFFFF */
/* RAM_START_ADDR_BUS */
#define VAD_RAM_START_ADDR_BUS_OFFSET                      (0x80)
#define VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_SHIFT    (0U)
#define VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_MASK     (0xFFFFFFFFU << VAD_RAM_START_ADDR_BUS_RAM_START_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* RAM_END_ADDR_BUS */
#define VAD_RAM_END_ADDR_BUS_OFFSET                        (0x84)
#define VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_SHIFT      (0U)
#define VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_MASK       (0xFFFFFFFFU << VAD_RAM_END_ADDR_BUS_RAM_BEGIN_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* RAM_CUR_ADDR_BUS */
#define VAD_RAM_CUR_ADDR_BUS_OFFSET                        (0x88)
#define VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_SHIFT        (0U)
#define VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_MASK         (0xFFFFFFFFU << VAD_RAM_CUR_ADDR_BUS_RAM_CUR_ADDR_BUS_SHIFT) /* 0xFFFFFFFF */
/* AUX_CON1 */
#define VAD_AUX_CON1_OFFSET                                (0x8C)
#define VAD_AUX_CON1_DATA_TRANS_WORD_THD_SHIFT             (0U)
#define VAD_AUX_CON1_DATA_TRANS_WORD_THD_MASK              (0xFFFFU << VAD_AUX_CON1_DATA_TRANS_WORD_THD_SHIFT)          /* 0x0000FFFF */
#define VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_SHIFT         (16U)
#define VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_MASK          (0x1U << VAD_AUX_CON1_DATA_TRANS_INT_MODE_SEL_SHIFT)         /* 0x00010000 */
/* NOISE_FIRST_DATA */
#define VAD_NOISE_FIRST_DATA_OFFSET                        (0x100)
#define VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_SHIFT        (0U)
#define VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_MASK         (0xFFFFU << VAD_NOISE_FIRST_DATA_NOISE_FIRST_DATA_SHIFT)     /* 0x0000FFFF */
/* NOISE_LAST_DATA */
#define VAD_NOISE_LAST_DATA_OFFSET                         (0x2FC)
#define VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_SHIFT          (0U)
#define VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_MASK           (0xFFFFU << VAD_NOISE_LAST_DATA_NOISE_LAST_DATA_SHIFT)       /* 0x0000FFFF */
/******************************************VOP*******************************************/
/* REG_CFG_DONE */
#define VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT          (0U)
#define VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_MASK           (0x1U << VOP_REG_CFG_DONE_REG_LOAD_GLOBAL_EN_SHIFT)          /* 0x00000001 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN0_EN_SHIFT            (1U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN0_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN0_EN_SHIFT)            /* 0x00000002 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_SHIFT            (2U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN1_EN_SHIFT)            /* 0x00000004 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_SHIFT            (3U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN2_EN_SHIFT)            /* 0x00000008 */
#define VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_SHIFT            (4U)
#define VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_MASK             (0x1U << VOP_REG_CFG_DONE_REG_LOAD_WIN3_EN_SHIFT)            /* 0x00000010 */
#define VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_SHIFT             (5U)
#define VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_MASK              (0x1U << VOP_REG_CFG_DONE_REG_LOAD_SYS_EN_SHIFT)             /* 0x00000020 */
/* VERSION */
#define VOP_VERSION_BUILD_SHIFT                            (0U)
#define VOP_VERSION_BUILD_MASK                             (0xFFFFU << VOP_VERSION_BUILD_SHIFT)                         /* 0x0000FFFF */
#define VOP_VERSION_MINOR_SHIFT                            (16U)
#define VOP_VERSION_MINOR_MASK                             (0xFFU << VOP_VERSION_MINOR_SHIFT)                           /* 0x00FF0000 */
#define VOP_VERSION_MAJOR_SHIFT                            (24U)
#define VOP_VERSION_MAJOR_MASK                             (0xFFU << VOP_VERSION_MAJOR_SHIFT)                           /* 0xFF000000 */
/* DSP_BG */
#define VOP_DSP_BG_DSP_BG_BLUE_SHIFT                       (0U)
#define VOP_DSP_BG_DSP_BG_BLUE_MASK                        (0xFFU << VOP_DSP_BG_DSP_BG_BLUE_SHIFT)                      /* 0x000000FF */
#define VOP_DSP_BG_DSP_BG_GREEN_SHIFT                      (8U)
#define VOP_DSP_BG_DSP_BG_GREEN_MASK                       (0xFFU << VOP_DSP_BG_DSP_BG_GREEN_SHIFT)                     /* 0x0000FF00 */
#define VOP_DSP_BG_DSP_BG_RED_SHIFT                        (16U)
#define VOP_DSP_BG_DSP_BG_RED_MASK                         (0xFFU << VOP_DSP_BG_DSP_BG_RED_SHIFT)                       /* 0x00FF0000 */
/* MCU */
#define VOP_MCU_MCU_PIX_TOTAL_SHIFT                        (0U)
#define VOP_MCU_MCU_PIX_TOTAL_MASK                         (0x3FU << VOP_MCU_MCU_PIX_TOTAL_SHIFT)                       /* 0x0000003F */
#define VOP_MCU_MCU_CS_PST_SHIFT                           (6U)
#define VOP_MCU_MCU_CS_PST_MASK                            (0xFU << VOP_MCU_MCU_CS_PST_SHIFT)                           /* 0x000003C0 */
#define VOP_MCU_MCU_CS_PEND_SHIFT                          (10U)
#define VOP_MCU_MCU_CS_PEND_MASK                           (0x3FU << VOP_MCU_MCU_CS_PEND_SHIFT)                         /* 0x0000FC00 */
#define VOP_MCU_MCU_RW_PST_SHIFT                           (16U)
#define VOP_MCU_MCU_RW_PST_MASK                            (0xFU << VOP_MCU_MCU_RW_PST_SHIFT)                           /* 0x000F0000 */
#define VOP_MCU_MCU_RW_PEND_SHIFT                          (20U)
#define VOP_MCU_MCU_RW_PEND_MASK                           (0x3FU << VOP_MCU_MCU_RW_PEND_SHIFT)                         /* 0x03F00000 */
#define VOP_MCU_MCU_CLK_SEL_SHIFT                          (26U)
#define VOP_MCU_MCU_CLK_SEL_MASK                           (0x1U << VOP_MCU_MCU_CLK_SEL_SHIFT)                          /* 0x04000000 */
#define VOP_MCU_MCU_HOLD_MODE_SHIFT                        (27U)
#define VOP_MCU_MCU_HOLD_MODE_MASK                         (0x1U << VOP_MCU_MCU_HOLD_MODE_SHIFT)                        /* 0x08000000 */
#define VOP_MCU_MCU_FRAME_ST_SHIFT                         (28U)
#define VOP_MCU_MCU_FRAME_ST_MASK                          (0x1U << VOP_MCU_MCU_FRAME_ST_SHIFT)                         /* 0x10000000 */
#define VOP_MCU_MCU_RS_SHIFT                               (29U)
#define VOP_MCU_MCU_RS_MASK                                (0x1U << VOP_MCU_MCU_RS_SHIFT)                               /* 0x20000000 */
#define VOP_MCU_MCU_BYPASS_SHIFT                           (30U)
#define VOP_MCU_MCU_BYPASS_MASK                            (0x1U << VOP_MCU_MCU_BYPASS_SHIFT)                           /* 0x40000000 */
#define VOP_MCU_MCU_TYPE_SHIFT                             (31U)
#define VOP_MCU_MCU_TYPE_MASK                              (0x1U << VOP_MCU_MCU_TYPE_SHIFT)                             /* 0x80000000 */
/* SYS_CTRL0 */
#define VOP_SYS_CTRL0_RESERVED_SHIFT                       (0U)
#define VOP_SYS_CTRL0_RESERVED_MASK                        (0xFFFFFFFFU << VOP_SYS_CTRL0_RESERVED_SHIFT)                /* 0xFFFFFFFF */
/* SYS_CTRL1 */
#define VOP_SYS_CTRL1_SW_NOC_QOS_EN_SHIFT                  (0U)
#define VOP_SYS_CTRL1_SW_NOC_QOS_EN_MASK                   (0x1U << VOP_SYS_CTRL1_SW_NOC_QOS_EN_SHIFT)                  /* 0x00000001 */
#define VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_SHIFT               (1U)
#define VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_MASK                (0x3U << VOP_SYS_CTRL1_SW_NOC_QOS_VALUE_SHIFT)               /* 0x00000006 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_EN_SHIFT                (4U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_EN_MASK                 (0x1U << VOP_SYS_CTRL1_SW_NOC_HURRY_EN_SHIFT)                /* 0x00000010 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_SHIFT             (5U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_MASK              (0x3U << VOP_SYS_CTRL1_SW_NOC_HURRY_VALUE_SHIFT)             /* 0x00000060 */
#define VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_SHIFT         (8U)
#define VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_MASK          (0xFU << VOP_SYS_CTRL1_SW_NOC_HURRY_THRESHOLD_SHIFT)         /* 0x00000F00 */
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_SHIFT         (12U)
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_MASK          (0x1U << VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_EN_SHIFT)         /* 0x00001000 */
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_SHIFT        (16U)
#define VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_MASK         (0x1FU << VOP_SYS_CTRL1_SW_AXI_MAX_OUTSTAND_NUM_SHIFT)       /* 0x001F0000 */
/* SYS_CTRL2 */
#define VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_SHIFT             (0U)
#define VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_MASK              (0x1U << VOP_SYS_CTRL2_IMD_AUTO_GATING_EN_SHIFT)             /* 0x00000001 */
#define VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_SHIFT             (1U)
#define VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_MASK              (0x1U << VOP_SYS_CTRL2_IMD_VOP_STANDBY_EN_SHIFT)             /* 0x00000002 */
#define VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_SHIFT               (2U)
#define VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_MASK                (0x1U << VOP_SYS_CTRL2_IMD_VOP_DMA_STOP_SHIFT)               /* 0x00000004 */
#define VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_SHIFT               (3U)
#define VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_MASK                (0x1U << VOP_SYS_CTRL2_IMD_DSP_OUT_ZERO_SHIFT)               /* 0x00000008 */
#define VOP_SYS_CTRL2_IMD_YUV_CLIP_SHIFT                   (4U)
#define VOP_SYS_CTRL2_IMD_YUV_CLIP_MASK                    (0x1U << VOP_SYS_CTRL2_IMD_YUV_CLIP_SHIFT)                   /* 0x00000010 */
#define VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_SHIFT          (6U)
#define VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_MASK           (0x1U << VOP_SYS_CTRL2_IMD_DSP_DATA_OUT_MODE_SHIFT)          /* 0x00000040 */
#define VOP_SYS_CTRL2_SW_IO_PAD_CLK_SEL_SHIFT              (7U)
#define VOP_SYS_CTRL2_SW_IO_PAD_CLK_SEL_MASK               (0x1U << VOP_SYS_CTRL2_SW_IO_PAD_CLK_SEL_SHIFT)              /* 0x00000080 */
#define VOP_SYS_CTRL2_IMD_EDPI_TE_EN_SHIFT                 (9U)
#define VOP_SYS_CTRL2_IMD_EDPI_TE_EN_MASK                  (0x1U << VOP_SYS_CTRL2_IMD_EDPI_TE_EN_SHIFT)                 /* 0x00000200 */
#define VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_SHIFT             (10U)
#define VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_MASK              (0x1U << VOP_SYS_CTRL2_IMD_EDPI_CTRL_MODE_SHIFT)             /* 0x00000400 */
#define VOP_SYS_CTRL2_IMD_EDPI_WMS_FS_SHIFT                (11U)
#define VOP_SYS_CTRL2_IMD_EDPI_WMS_FS_MASK                 (0x1U << VOP_SYS_CTRL2_IMD_EDPI_WMS_FS_SHIFT)                /* 0x00000800 */
#define VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_SHIFT             (12U)
#define VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_MASK              (0x1U << VOP_SYS_CTRL2_IMD_DSP_TIMING_IMD_SHIFT)             /* 0x00001000 */
#define VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_SHIFT          (13U)
#define VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_MASK           (0x1U << VOP_SYS_CTRL2_IMD_GLOBAL_REGDONE_EN_SHIFT)          /* 0x00002000 */
#define VOP_SYS_CTRL2_FS_ADDR_MASK_EN_SHIFT                (14U)
#define VOP_SYS_CTRL2_FS_ADDR_MASK_EN_MASK                 (0x1U << VOP_SYS_CTRL2_FS_ADDR_MASK_EN_SHIFT)                /* 0x00004000 */
#define VOP_SYS_CTRL2_DCF_IDLE_EN_SHIFT                    (15U)
#define VOP_SYS_CTRL2_DCF_IDLE_EN_MASK                     (0x1U << VOP_SYS_CTRL2_DCF_IDLE_EN_SHIFT)                    /* 0x00008000 */
#define VOP_SYS_CTRL2_POST_EMPTY_HOLD_EN_SHIFT             (27U)
#define VOP_SYS_CTRL2_POST_EMPTY_HOLD_EN_MASK              (0x1U << VOP_SYS_CTRL2_POST_EMPTY_HOLD_EN_SHIFT)             /* 0x08000000 */
#define VOP_SYS_CTRL2_DSC_EN_SHIFT                         (28U)
#define VOP_SYS_CTRL2_DSC_EN_MASK                          (0x1U << VOP_SYS_CTRL2_DSC_EN_SHIFT)                         /* 0x10000000 */
#define VOP_SYS_CTRL2_DSC_BYPASS_EN_SHIFT                  (29U)
#define VOP_SYS_CTRL2_DSC_BYPASS_EN_MASK                   (0x1U << VOP_SYS_CTRL2_DSC_BYPASS_EN_SHIFT)                  /* 0x20000000 */
#define VOP_SYS_CTRL2_DPHY_FRM_SWITCH_EN_SHIFT             (30U)
#define VOP_SYS_CTRL2_DPHY_FRM_SWITCH_EN_MASK              (0x1U << VOP_SYS_CTRL2_DPHY_FRM_SWITCH_EN_SHIFT)             /* 0x40000000 */
#define VOP_SYS_CTRL2_IMD_EDPI_WMS_MODE_SHIFT              (31U)
#define VOP_SYS_CTRL2_IMD_EDPI_WMS_MODE_MASK               (0x1U << VOP_SYS_CTRL2_IMD_EDPI_WMS_MODE_SHIFT)              /* 0x80000000 */
/* DSP_CTRL0 */
#define VOP_DSP_CTRL0_RGB_DCLK_EN_SHIFT                    (0U)
#define VOP_DSP_CTRL0_RGB_DCLK_EN_MASK                     (0x1U << VOP_DSP_CTRL0_RGB_DCLK_EN_SHIFT)                    /* 0x00000001 */
#define VOP_DSP_CTRL0_RGB_DCLK_POL_SHIFT                   (1U)
#define VOP_DSP_CTRL0_RGB_DCLK_POL_MASK                    (0x1U << VOP_DSP_CTRL0_RGB_DCLK_POL_SHIFT)                   /* 0x00000002 */
#define VOP_DSP_CTRL0_RGB_HSYNC_POL_SHIFT                  (2U)
#define VOP_DSP_CTRL0_RGB_HSYNC_POL_MASK                   (0x1U << VOP_DSP_CTRL0_RGB_HSYNC_POL_SHIFT)                  /* 0x00000004 */
#define VOP_DSP_CTRL0_RGB_VSYNC_POL_SHIFT                  (3U)
#define VOP_DSP_CTRL0_RGB_VSYNC_POL_MASK                   (0x1U << VOP_DSP_CTRL0_RGB_VSYNC_POL_SHIFT)                  /* 0x00000008 */
#define VOP_DSP_CTRL0_RGB_DEN_POL_SHIFT                    (4U)
#define VOP_DSP_CTRL0_RGB_DEN_POL_MASK                     (0x1U << VOP_DSP_CTRL0_RGB_DEN_POL_SHIFT)                    /* 0x00000010 */
#define VOP_DSP_CTRL0_MIPI_DCLK_EN_SHIFT                   (24U)
#define VOP_DSP_CTRL0_MIPI_DCLK_EN_MASK                    (0x1U << VOP_DSP_CTRL0_MIPI_DCLK_EN_SHIFT)                   /* 0x01000000 */
#define VOP_DSP_CTRL0_MIPI_DCLK_POL_SHIFT                  (25U)
#define VOP_DSP_CTRL0_MIPI_DCLK_POL_MASK                   (0x1U << VOP_DSP_CTRL0_MIPI_DCLK_POL_SHIFT)                  /* 0x02000000 */
#define VOP_DSP_CTRL0_MIPI_HSYNC_POL_SHIFT                 (26U)
#define VOP_DSP_CTRL0_MIPI_HSYNC_POL_MASK                  (0x1U << VOP_DSP_CTRL0_MIPI_HSYNC_POL_SHIFT)                 /* 0x04000000 */
#define VOP_DSP_CTRL0_MIPI_VSYNC_POL_SHIFT                 (27U)
#define VOP_DSP_CTRL0_MIPI_VSYNC_POL_MASK                  (0x1U << VOP_DSP_CTRL0_MIPI_VSYNC_POL_SHIFT)                 /* 0x08000000 */
#define VOP_DSP_CTRL0_MIPI_DEN_POL_SHIFT                   (28U)
#define VOP_DSP_CTRL0_MIPI_DEN_POL_MASK                    (0x1U << VOP_DSP_CTRL0_MIPI_DEN_POL_SHIFT)                   /* 0x10000000 */
/* DSP_CTRL1 */
#define VOP_DSP_CTRL1_RESERVED_SHIFT                       (0U)
#define VOP_DSP_CTRL1_RESERVED_MASK                        (0xFFFFFFFFU << VOP_DSP_CTRL1_RESERVED_SHIFT)                /* 0xFFFFFFFF */
/* DSP_CTRL2 */
#define VOP_DSP_CTRL2_DITHER_UP_SHIFT                      (2U)
#define VOP_DSP_CTRL2_DITHER_UP_MASK                       (0x1U << VOP_DSP_CTRL2_DITHER_UP_SHIFT)                      /* 0x00000004 */
#define VOP_DSP_CTRL2_SW_OVERLAY_MODE_SHIFT                (4U)
#define VOP_DSP_CTRL2_SW_OVERLAY_MODE_MASK                 (0x1U << VOP_DSP_CTRL2_SW_OVERLAY_MODE_SHIFT)                /* 0x00000010 */
#define VOP_DSP_CTRL2_DSP_LUT_EN_SHIFT                     (5U)
#define VOP_DSP_CTRL2_DSP_LUT_EN_MASK                      (0x1U << VOP_DSP_CTRL2_DSP_LUT_EN_SHIFT)                     /* 0x00000020 */
#define VOP_DSP_CTRL2_DITHER_DOWN_MODE_SHIFT               (6U)
#define VOP_DSP_CTRL2_DITHER_DOWN_MODE_MASK                (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_MODE_SHIFT)               /* 0x00000040 */
#define VOP_DSP_CTRL2_DITHER_DOWN_SEL_SHIFT                (7U)
#define VOP_DSP_CTRL2_DITHER_DOWN_SEL_MASK                 (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_SEL_SHIFT)                /* 0x00000080 */
#define VOP_DSP_CTRL2_DITHER_DOWN_SHIFT                    (8U)
#define VOP_DSP_CTRL2_DITHER_DOWN_MASK                     (0x1U << VOP_DSP_CTRL2_DITHER_DOWN_SHIFT)                    /* 0x00000100 */
#define VOP_DSP_CTRL2_DSP_BG_SWAP_SHIFT                    (9U)
#define VOP_DSP_CTRL2_DSP_BG_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_BG_SWAP_SHIFT)                    /* 0x00000200 */
#define VOP_DSP_CTRL2_DSP_RB_SWAP_SHIFT                    (11U)
#define VOP_DSP_CTRL2_DSP_RB_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_RB_SWAP_SHIFT)                    /* 0x00000800 */
#define VOP_DSP_CTRL2_DSP_RG_SWAP_SHIFT                    (12U)
#define VOP_DSP_CTRL2_DSP_RG_SWAP_MASK                     (0x1U << VOP_DSP_CTRL2_DSP_RG_SWAP_SHIFT)                    /* 0x00001000 */
#define VOP_DSP_CTRL2_DSP_BLANK_EN_SHIFT                   (14U)
#define VOP_DSP_CTRL2_DSP_BLANK_EN_MASK                    (0x1U << VOP_DSP_CTRL2_DSP_BLANK_EN_SHIFT)                   /* 0x00004000 */
#define VOP_DSP_CTRL2_DSP_BLACK_EN_SHIFT                   (15U)
#define VOP_DSP_CTRL2_DSP_BLACK_EN_MASK                    (0x1U << VOP_DSP_CTRL2_DSP_BLACK_EN_SHIFT)                   /* 0x00008000 */
#define VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT                   (16U)
#define VOP_DSP_CTRL2_DSP_OUT_MODE_MASK                    (0xFU << VOP_DSP_CTRL2_DSP_OUT_MODE_SHIFT)                   /* 0x000F0000 */
#define VOP_DSP_CTRL2_DSP_LAYER1_SEL_SHIFT                 (22U)
#define VOP_DSP_CTRL2_DSP_LAYER1_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER1_SEL_SHIFT)                 /* 0x00C00000 */
#define VOP_DSP_CTRL2_DSP_LAYER2_SEL_SHIFT                 (24U)
#define VOP_DSP_CTRL2_DSP_LAYER2_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER2_SEL_SHIFT)                 /* 0x03000000 */
#define VOP_DSP_CTRL2_DSP_LAYER3_SEL_SHIFT                 (26U)
#define VOP_DSP_CTRL2_DSP_LAYER3_SEL_MASK                  (0x3U << VOP_DSP_CTRL2_DSP_LAYER3_SEL_SHIFT)                 /* 0x0C000000 */
/* VOP_STATUS */
#define VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_SHIFT    (0U)
#define VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_MASK     (0x1U << VOP_VOP_STATUS_DSP_BLANKING_EN_ASYNC_AFF2_SHIFT)    /* 0x00000001 */
#define VOP_VOP_STATUS_DPHY_SWITCH_STATUS_SHIFT            (1U)
#define VOP_VOP_STATUS_DPHY_SWITCH_STATUS_MASK             (0x1U << VOP_VOP_STATUS_DPHY_SWITCH_STATUS_SHIFT)            /* 0x00000002 */
#define VOP_VOP_STATUS_INT_RAW_DMA_FINISH_SHIFT            (2U)
#define VOP_VOP_STATUS_INT_RAW_DMA_FINISH_MASK             (0x1U << VOP_VOP_STATUS_INT_RAW_DMA_FINISH_SHIFT)            /* 0x00000004 */
#define VOP_VOP_STATUS_DMA_STOP_VALID_SHIFT                (4U)
#define VOP_VOP_STATUS_DMA_STOP_VALID_MASK                 (0x1U << VOP_VOP_STATUS_DMA_STOP_VALID_SHIFT)                /* 0x00000010 */
#define VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_SHIFT           (8U)
#define VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_MASK            (0x1U << VOP_VOP_STATUS_INTR_DMA_FINISH_MUX_SHIFT)           /* 0x00000100 */
#define VOP_VOP_STATUS_INTR_LINE_FLAG0_MUX_SHIFT           (9U)
#define VOP_VOP_STATUS_INTR_LINE_FLAG0_MUX_MASK            (0x1U << VOP_VOP_STATUS_INTR_LINE_FLAG0_MUX_SHIFT)           /* 0x00000200 */
#define VOP_VOP_STATUS_INTR_LINE_FLAG1_MUX_SHIFT           (10U)
#define VOP_VOP_STATUS_INTR_LINE_FLAG1_MUX_MASK            (0x1U << VOP_VOP_STATUS_INTR_LINE_FLAG1_MUX_SHIFT)           /* 0x00000400 */
/* LINE_FLAG */
#define VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_SHIFT             (0U)
#define VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_MASK              (0xFFFU << VOP_LINE_FLAG_DSP_LINE_FLAG0_NUM_SHIFT)           /* 0x00000FFF */
#define VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_SHIFT             (16U)
#define VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_MASK              (0xFFFU << VOP_LINE_FLAG_DSP_LINE_FLAG1_NUM_SHIFT)           /* 0x0FFF0000 */
/* INTR_EN */
#define VOP_INTR_EN_FS0_INTR_EN_SHIFT                      (0U)
#define VOP_INTR_EN_FS0_INTR_EN_MASK                       (0x1U << VOP_INTR_EN_FS0_INTR_EN_SHIFT)                      /* 0x00000001 */
#define VOP_INTR_EN_FS1_INTR_EN_SHIFT                      (1U)
#define VOP_INTR_EN_FS1_INTR_EN_MASK                       (0x1U << VOP_INTR_EN_FS1_INTR_EN_SHIFT)                      /* 0x00000002 */
#define VOP_INTR_EN_ADDR_SAME_INTR_EN_SHIFT                (2U)
#define VOP_INTR_EN_ADDR_SAME_INTR_EN_MASK                 (0x1U << VOP_INTR_EN_ADDR_SAME_INTR_EN_SHIFT)                /* 0x00000004 */
#define VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT               (3U)
#define VOP_INTR_EN_LINE_FLAG0_INTR_EN_MASK                (0x1U << VOP_INTR_EN_LINE_FLAG0_INTR_EN_SHIFT)               /* 0x00000008 */
#define VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT               (4U)
#define VOP_INTR_EN_LINE_FLAG1_INTR_EN_MASK                (0x1U << VOP_INTR_EN_LINE_FLAG1_INTR_EN_SHIFT)               /* 0x00000010 */
#define VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT                (5U)
#define VOP_INTR_EN_BUS_ERROR_INTR_EN_MASK                 (0x1U << VOP_INTR_EN_BUS_ERROR_INTR_EN_SHIFT)                /* 0x00000020 */
#define VOP_INTR_EN_WIN0_EMPTY_INTR_EN_SHIFT               (7U)
#define VOP_INTR_EN_WIN0_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN0_EMPTY_INTR_EN_SHIFT)               /* 0x00000080 */
#define VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT               (8U)
#define VOP_INTR_EN_WIN1_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN1_EMPTY_INTR_EN_SHIFT)               /* 0x00000100 */
#define VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT               (9U)
#define VOP_INTR_EN_WIN2_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_WIN2_EMPTY_INTR_EN_SHIFT)               /* 0x00000200 */
#define VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_SHIFT           (10U)
#define VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_MASK            (0x1U << VOP_INTR_EN_DSP_HOLD_VALID_INTR_EN_SHIFT)           /* 0x00000400 */
#define VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_SHIFT              (11U)
#define VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_MASK               (0x1U << VOP_INTR_EN_DMA_FRM_FSH_INTR_EN_SHIFT)              /* 0x00000800 */
#define VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT               (12U)
#define VOP_INTR_EN_POST_EMPTY_INTR_EN_MASK                (0x1U << VOP_INTR_EN_POST_EMPTY_INTR_EN_SHIFT)               /* 0x00001000 */
#define VOP_INTR_EN_POST_LB_ALMOST_FULL_INTR_EN_SHIFT      (13U)
#define VOP_INTR_EN_POST_LB_ALMOST_FULL_INTR_EN_MASK       (0x1U << VOP_INTR_EN_POST_LB_ALMOST_FULL_INTR_EN_SHIFT)      /* 0x00002000 */
#define VOP_INTR_EN_POST_LB_ALMOST_EMPTY_INTR_EN_SHIFT     (14U)
#define VOP_INTR_EN_POST_LB_ALMOST_EMPTY_INTR_EN_MASK      (0x1U << VOP_INTR_EN_POST_LB_ALMOST_EMPTY_INTR_EN_SHIFT)     /* 0x00004000 */
/* INTR_CLEAR */
#define VOP_INTR_CLEAR_FS0_INTR_CLR_SHIFT                  (0U)
#define VOP_INTR_CLEAR_FS0_INTR_CLR_MASK                   (0x1U << VOP_INTR_CLEAR_FS0_INTR_CLR_SHIFT)                  /* 0x00000001 */
#define VOP_INTR_CLEAR_FS1_INTR_CLR_SHIFT                  (1U)
#define VOP_INTR_CLEAR_FS1_INTR_CLR_MASK                   (0x1U << VOP_INTR_CLEAR_FS1_INTR_CLR_SHIFT)                  /* 0x00000002 */
#define VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_SHIFT            (2U)
#define VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_MASK             (0x1U << VOP_INTR_CLEAR_ADDR_SAME_INTR_CLR_SHIFT)            /* 0x00000004 */
#define VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_SHIFT           (3U)
#define VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_LINE_FLAG0_INTR_CLR_SHIFT)           /* 0x00000008 */
#define VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_SHIFT           (4U)
#define VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_LINE_FLAG1_INTR_CLR_SHIFT)           /* 0x00000010 */
#define VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_SHIFT            (5U)
#define VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_MASK             (0x1U << VOP_INTR_CLEAR_BUS_ERROR_INTR_CLR_SHIFT)            /* 0x00000020 */
#define VOP_INTR_CLEAR_WIN0_EMPTY_INTR_CLR_SHIFT           (7U)
#define VOP_INTR_CLEAR_WIN0_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN0_EMPTY_INTR_CLR_SHIFT)           /* 0x00000080 */
#define VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_SHIFT           (8U)
#define VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN1_EMPTY_INTR_CLR_SHIFT)           /* 0x00000100 */
#define VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_SHIFT           (9U)
#define VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_WIN2_EMPTY_INTR_CLR_SHIFT)           /* 0x00000200 */
#define VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_SHIFT       (10U)
#define VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_MASK        (0x1U << VOP_INTR_CLEAR_DSP_HOLD_VALID_INTR_CLR_SHIFT)       /* 0x00000400 */
#define VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_SHIFT          (11U)
#define VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_MASK           (0x1U << VOP_INTR_CLEAR_DMA_FRM_FSH_INTR_CLR_SHIFT)          /* 0x00000800 */
#define VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_SHIFT           (12U)
#define VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_MASK            (0x1U << VOP_INTR_CLEAR_POST_EMPTY_INTR_CLR_SHIFT)           /* 0x00001000 */
#define VOP_INTR_CLEAR_POST_LB_ALMOST_FULL_INTR_CLR_SHIFT  (13U)
#define VOP_INTR_CLEAR_POST_LB_ALMOST_FULL_INTR_CLR_MASK   (0x1U << VOP_INTR_CLEAR_POST_LB_ALMOST_FULL_INTR_CLR_SHIFT)  /* 0x00002000 */
#define VOP_INTR_CLEAR_POST_LB_ALMOST_EMPTY_INTR_CLR_SHIFT (14U)
#define VOP_INTR_CLEAR_POST_LB_ALMOST_EMPTY_INTR_CLR_MASK  (0x1U << VOP_INTR_CLEAR_POST_LB_ALMOST_EMPTY_INTR_CLR_SHIFT) /* 0x00004000 */
/* INTR_STATUS */
#define VOP_INTR_STATUS_FS0_INTR_STS_SHIFT                 (0U)
#define VOP_INTR_STATUS_FS0_INTR_STS_MASK                  (0x1U << VOP_INTR_STATUS_FS0_INTR_STS_SHIFT)                 /* 0x00000001 */
#define VOP_INTR_STATUS_FS1_INTR_STS_SHIFT                 (1U)
#define VOP_INTR_STATUS_FS1_INTR_STS_MASK                  (0x1U << VOP_INTR_STATUS_FS1_INTR_STS_SHIFT)                 /* 0x00000002 */
#define VOP_INTR_STATUS_ADDR_SAME_INTR_STS_SHIFT           (2U)
#define VOP_INTR_STATUS_ADDR_SAME_INTR_STS_MASK            (0x1U << VOP_INTR_STATUS_ADDR_SAME_INTR_STS_SHIFT)           /* 0x00000004 */
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_SHIFT          (3U)
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_LINE_FLAG0_INTR_STS_SHIFT)          /* 0x00000008 */
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_SHIFT          (4U)
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_LINE_FLAG1_INTR_STS_SHIFT)          /* 0x00000010 */
#define VOP_INTR_STATUS_BUS_ERROR_INTR_STS_SHIFT           (5U)
#define VOP_INTR_STATUS_BUS_ERROR_INTR_STS_MASK            (0x1U << VOP_INTR_STATUS_BUS_ERROR_INTR_STS_SHIFT)           /* 0x00000020 */
#define VOP_INTR_STATUS_WIN0_EMPTY_INTR_STS_SHIFT          (7U)
#define VOP_INTR_STATUS_WIN0_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN0_EMPTY_INTR_STS_SHIFT)          /* 0x00000080 */
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_SHIFT          (8U)
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN1_EMPTY_INTR_STS_SHIFT)          /* 0x00000100 */
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_SHIFT          (9U)
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_WIN2_EMPTY_INTR_STS_SHIFT)          /* 0x00000200 */
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_SHIFT      (10U)
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_MASK       (0x1U << VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_STS_SHIFT)      /* 0x00000400 */
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_SHIFT         (11U)
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_MASK          (0x1U << VOP_INTR_STATUS_DMA_FRM_FSH_INTR_STS_SHIFT)         /* 0x00000800 */
#define VOP_INTR_STATUS_POST_EMPTY_INTR_STS_SHIFT          (12U)
#define VOP_INTR_STATUS_POST_EMPTY_INTR_STS_MASK           (0x1U << VOP_INTR_STATUS_POST_EMPTY_INTR_STS_SHIFT)          /* 0x00001000 */
#define VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_SHIFT     (13U)
#define VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_MASK      (0x1U << VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_SHIFT)     /* 0x00002000 */
#define VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_STS_SHIFT (14U)
#define VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_STS_MASK (0x1U << VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_STS_SHIFT) /* 0x00004000 */
#define VOP_INTR_STATUS_FS0_INTR_RAW_STS_SHIFT             (16U)
#define VOP_INTR_STATUS_FS0_INTR_RAW_STS_MASK              (0x1U << VOP_INTR_STATUS_FS0_INTR_RAW_STS_SHIFT)             /* 0x00010000 */
#define VOP_INTR_STATUS_FS1_INTR_RAW_STS_SHIFT             (17U)
#define VOP_INTR_STATUS_FS1_INTR_RAW_STS_MASK              (0x1U << VOP_INTR_STATUS_FS1_INTR_RAW_STS_SHIFT)             /* 0x00020000 */
#define VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_SHIFT       (18U)
#define VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_MASK        (0x1U << VOP_INTR_STATUS_ADDR_SAME_INTR_RAW_STS_SHIFT)       /* 0x00040000 */
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_SHIFT      (19U)
#define VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_LINE_FLAG0_INTR_RAW_STS_SHIFT)      /* 0x00080000 */
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_SHIFT      (20U)
#define VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_LINE_FLAG1_INTR_RAW_STS_SHIFT)      /* 0x00100000 */
#define VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_SHIFT       (21U)
#define VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_MASK        (0x1U << VOP_INTR_STATUS_BUS_ERROR_INTR_RAW_STS_SHIFT)       /* 0x00200000 */
#define VOP_INTR_STATUS_WIN0_EMPTY_INTR_RAW_STS_SHIFT      (23U)
#define VOP_INTR_STATUS_WIN0_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN0_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x00800000 */
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_SHIFT      (24U)
#define VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN1_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x01000000 */
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_SHIFT      (25U)
#define VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_MASK       (0x1U << VOP_INTR_STATUS_WIN2_EMPTY_INTR_RAW_STS_SHIFT)      /* 0x02000000 */
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_SHIFT  (26U)
#define VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_MASK   (0x1U << VOP_INTR_STATUS_DSP_HOLD_VALID_INTR_RAW_STS_SHIFT)  /* 0x04000000 */
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_SHIFT     (27U)
#define VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_MASK      (0x1U << VOP_INTR_STATUS_DMA_FRM_FSH_INTR_RAW_STS_SHIFT)     /* 0x08000000 */
#define VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_SHIFT          (28U)
#define VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_MASK           (0x1U << VOP_INTR_STATUS_POST_EMPTY_INTR_RAW_SHIFT)          /* 0x10000000 */
#define VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_RAW_SHIFT (29U)
#define VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_RAW_MASK  (0x1U << VOP_INTR_STATUS_POST_LB_ALMOST_FULL_INTR_RAW_SHIFT) /* 0x20000000 */
#define VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_RAW_STS_SHIFT (30U)
#define VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_RAW_STS_MASK (0x1U << VOP_INTR_STATUS_POST_LB_ALMOST_EMPTY_INTR_RAW_STS_SHIFT) /* 0x40000000 */
/* WIN0_CTRL0 */
#define VOP_WIN0_CTRL0_WIN0_EN_SHIFT                       (0U)
#define VOP_WIN0_CTRL0_WIN0_EN_MASK                        (0x1U << VOP_WIN0_CTRL0_WIN0_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN0_CTRL0_WIN0_LUT_EN_SHIFT                   (1U)
#define VOP_WIN0_CTRL0_WIN0_LUT_EN_MASK                    (0x1U << VOP_WIN0_CTRL0_WIN0_LUT_EN_SHIFT)
#define VOP_WIN0_CTRL0_WIN0_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN0_CTRL0_WIN0_DATA_FMT_MASK                  (0xFU << VOP_WIN0_CTRL0_WIN0_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN0_CTRL0_WIN0_BPP_SWAP_SHIFT                 (8U)
#define VOP_WIN0_CTRL0_WIN0_BPP_SWAP_MASK                  (0x1U << VOP_WIN0_CTRL0_WIN0_BPP_SWAP_SHIFT)                 /* 0x00000100 */
#define VOP_WIN0_CTRL0_WIN0_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN0_CTRL0_WIN0_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN0_CTRL0_WIN0_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_SHIFT              (10U)
#define VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN0_CTRL0_WIN0_YUV_4BIT_EN_SHIFT)              /* 0x00000400 */
#define VOP_WIN0_CTRL0_WIN0_BPP_EN_SHIFT                   (11U)
#define VOP_WIN0_CTRL0_WIN0_BPP_EN_MASK                    (0x1U << VOP_WIN0_CTRL0_WIN0_BPP_EN_SHIFT)                   /* 0x00000800 */
#define VOP_WIN0_CTRL0_WIN0_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN0_CTRL0_WIN0_RB_SWAP_MASK                   (0x1U << VOP_WIN0_CTRL0_WIN0_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN0_CTRL0_WIN0_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN0_CTRL0_WIN0_ALPHA_SWAP_MASK                (0x1U << VOP_WIN0_CTRL0_WIN0_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN0_CTRL0_WIN0_ENDIAN_SWAP_SHIFT              (14U)
#define VOP_WIN0_CTRL0_WIN0_ENDIAN_SWAP_MASK               (0x1U << VOP_WIN0_CTRL0_WIN0_ENDIAN_SWAP_SHIFT)              /* 0x00004000 */
#define VOP_WIN0_CTRL0_WIN0_UV_SWAP_SHIFT                  (15U)
#define VOP_WIN0_CTRL0_WIN0_UV_SWAP_MASK                   (0x1U << VOP_WIN0_CTRL0_WIN0_UV_SWAP_SHIFT)                  /* 0x00008000 */
#define VOP_WIN0_CTRL0_WIN0_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN0_CTRL0_WIN0_R2Y_EN_MASK                    (0x1U << VOP_WIN0_CTRL0_WIN0_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN0_CTRL0_WIN0_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN0_CTRL0_WIN0_Y2R_EN_MASK                    (0x1U << VOP_WIN0_CTRL0_WIN0_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN0_CTRL0_WIN0_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN0_CTRL0_WIN0_CSC_MODE_MASK                  (0x3U << VOP_WIN0_CTRL0_WIN0_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN0_CTRL1 */
#define VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN0_CTRL1_WIN0_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN0_CTRL1_WIN0_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN0_CTRL1_WIN0_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN0_CTRL1_WIN0_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN0_CTRL1_WIN0_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN0_CTRL1_SW_WIN0_YRGB_RID_SHIFT              (8U)
#define VOP_WIN0_CTRL1_SW_WIN0_YRGB_RID_MASK               (0xFU << VOP_WIN0_CTRL1_SW_WIN0_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN0_CTRL1_SW_WIN0_CBCR_RID_SHIFT              (12U)
#define VOP_WIN0_CTRL1_SW_WIN0_CBCR_RID_MASK               (0xFU << VOP_WIN0_CTRL1_SW_WIN0_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN0_VIR */
#define VOP_WIN0_VIR_WIN0_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN0_VIR_WIN0_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN0_VIR_WIN0_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN0_VIR_WIN0_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN0_VIR_WIN0_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN0_VIR_WIN0_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN0_YRGB_MST */
#define VOP_WIN0_YRGB_MST_WIN0_YRGB_MST_SHIFT              (0U)
#define VOP_WIN0_YRGB_MST_WIN0_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN0_YRGB_MST_WIN0_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN0_DSP_INFO */
#define VOP_WIN0_DSP_INFO_DSP_WIN0_WIDTH_SHIFT             (0U)
#define VOP_WIN0_DSP_INFO_DSP_WIN0_WIDTH_MASK              (0x1FFFU << VOP_WIN0_DSP_INFO_DSP_WIN0_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN0_DSP_INFO_DSP_WIN0_HEIGHT_SHIFT            (16U)
#define VOP_WIN0_DSP_INFO_DSP_WIN0_HEIGHT_MASK             (0x1FFFU << VOP_WIN0_DSP_INFO_DSP_WIN0_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN0_DSP_ST */
#define VOP_WIN0_DSP_ST_DSP_WIN0_XST_SHIFT                 (0U)
#define VOP_WIN0_DSP_ST_DSP_WIN0_XST_MASK                  (0x1FFFU << VOP_WIN0_DSP_ST_DSP_WIN0_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN0_DSP_ST_DSP_WIN0_YST_SHIFT                 (16U)
#define VOP_WIN0_DSP_ST_DSP_WIN0_YST_MASK                  (0x1FFFU << VOP_WIN0_DSP_ST_DSP_WIN0_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN0_COLOR_KEY */
#define VOP_WIN0_COLOR_KEY_WIN0_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN0_COLOR_KEY_WIN0_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN0_COLOR_KEY_WIN0_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN0_COLOR_KEY_WIN0_KEY_EN_SHIFT               (24U)
#define VOP_WIN0_COLOR_KEY_WIN0_KEY_EN_MASK                (0x1U << VOP_WIN0_COLOR_KEY_WIN0_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN0_ALPHA_CTRL */
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_EN_MASK             (0x1U << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_MODE_MASK           (0x1U << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN0_ALPHA_CTRL_WIN0_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN0_CBCR_MST */
#define VOP_WIN0_CBCR_MST_WIN0_CBCR_MST_SHIFT              (0U)
#define VOP_WIN0_CBCR_MST_WIN0_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN0_CBCR_MST_WIN0_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN0_YRGB_MST_RAW */
#define VOP_WIN0_YRGB_MST_RAW_WIN0_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN0_YRGB_MST_RAW_WIN0_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN0_YRGB_MST_RAW_WIN0_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN0_CBCR_MST_RAW */
#define VOP_WIN0_CBCR_MST_RAW_WIN0_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN0_CBCR_MST_RAW_WIN0_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN0_CBCR_MST_RAW_WIN0_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN0_LOOP_OFFSET */
#define VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_EN_MASK            (0x1U << VOP_WIN0_LOOP_OFFSET_WIN0_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_EN_MASK            (0x1U << VOP_WIN0_LOOP_OFFSET_WIN0_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* WIN1_CTRL0 */
#define VOP_WIN1_CTRL0_WIN1_EN_SHIFT                       (0U)
#define VOP_WIN1_CTRL0_WIN1_EN_MASK                        (0x1U << VOP_WIN1_CTRL0_WIN1_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN1_CTRL0_WIN1_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN1_CTRL0_WIN1_DATA_FMT_MASK                  (0xFU << VOP_WIN1_CTRL0_WIN1_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN1_CTRL0_WIN1_BPP_SWAP_SHIFT                 (8U)
#define VOP_WIN1_CTRL0_WIN1_BPP_SWAP_MASK                  (0x1U << VOP_WIN1_CTRL0_WIN1_BPP_SWAP_SHIFT)                 /* 0x00000100 */
#define VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN1_CTRL0_WIN1_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_SHIFT              (10U)
#define VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN1_CTRL0_WIN1_YUV_4BIT_EN_SHIFT)              /* 0x00000400 */
#define VOP_WIN1_CTRL0_WIN1_BPP_EN_SHIFT                   (11U)
#define VOP_WIN1_CTRL0_WIN1_BPP_EN_MASK                    (0x1U << VOP_WIN1_CTRL0_WIN1_BPP_EN_SHIFT)                   /* 0x00000800 */
#define VOP_WIN1_CTRL0_WIN1_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN1_CTRL0_WIN1_RB_SWAP_MASK                   (0x1U << VOP_WIN1_CTRL0_WIN1_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_MASK                (0x1U << VOP_WIN1_CTRL0_WIN1_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN1_CTRL0_WIN1_ENDIAN_SWAP_SHIFT              (14U)
#define VOP_WIN1_CTRL0_WIN1_ENDIAN_SWAP_MASK               (0x1U << VOP_WIN1_CTRL0_WIN1_ENDIAN_SWAP_SHIFT)              /* 0x00004000 */
#define VOP_WIN1_CTRL0_WIN1_UV_SWAP_SHIFT                  (15U)
#define VOP_WIN1_CTRL0_WIN1_UV_SWAP_MASK                   (0x1U << VOP_WIN1_CTRL0_WIN1_UV_SWAP_SHIFT)                  /* 0x00008000 */
#define VOP_WIN1_CTRL0_WIN1_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN1_CTRL0_WIN1_R2Y_EN_MASK                    (0x1U << VOP_WIN1_CTRL0_WIN1_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN1_CTRL0_WIN1_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN1_CTRL0_WIN1_Y2R_EN_MASK                    (0x1U << VOP_WIN1_CTRL0_WIN1_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN1_CTRL0_WIN1_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN1_CTRL0_WIN1_CSC_MODE_MASK                  (0x3U << VOP_WIN1_CTRL0_WIN1_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN1_CTRL1 */
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN1_CTRL1_WIN1_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN1_CTRL1_WIN1_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN1_CTRL1_WIN1_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_SHIFT              (8U)
#define VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_MASK               (0xFU << VOP_WIN1_CTRL1_SW_WIN1_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_SHIFT              (12U)
#define VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_MASK               (0xFU << VOP_WIN1_CTRL1_SW_WIN1_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN1_VIR */
#define VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN1_VIR_WIN1_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN1_VIR_WIN1_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN1_YRGB_MST */
#define VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_SHIFT              (0U)
#define VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN1_YRGB_MST_WIN1_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN1_DSP_INFO */
#define VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_SHIFT             (0U)
#define VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_MASK              (0x1FFFU << VOP_WIN1_DSP_INFO_DSP_WIN1_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_SHIFT            (16U)
#define VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_MASK             (0x1FFFU << VOP_WIN1_DSP_INFO_DSP_WIN1_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN1_DSP_ST */
#define VOP_WIN1_DSP_ST_DSP_WIN1_XST_SHIFT                 (0U)
#define VOP_WIN1_DSP_ST_DSP_WIN1_XST_MASK                  (0x1FFFU << VOP_WIN1_DSP_ST_DSP_WIN1_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN1_DSP_ST_DSP_WIN1_YST_SHIFT                 (16U)
#define VOP_WIN1_DSP_ST_DSP_WIN1_YST_MASK                  (0x1FFFU << VOP_WIN1_DSP_ST_DSP_WIN1_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN1_COLOR_KEY */
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN1_COLOR_KEY_WIN1_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_SHIFT               (24U)
#define VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_MASK                (0x1U << VOP_WIN1_COLOR_KEY_WIN1_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN1_ALPHA_CTRL */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_MASK             (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_MASK           (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN1_ALPHA_CTRL_WIN1_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN1_CBCR_MST */
#define VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_SHIFT              (0U)
#define VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN1_CBCR_MST_WIN1_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN1_YRGB_MST_RAW */
#define VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN1_YRGB_MST_RAW_WIN1_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN1_CBCR_MST_RAW */
#define VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN1_CBCR_MST_RAW_WIN1_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN1_LOOP_OFFSET */
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_MASK            (0x1U << VOP_WIN1_LOOP_OFFSET_WIN1_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_MASK            (0x1U << VOP_WIN1_LOOP_OFFSET_WIN1_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* WIN2_CTRL0 */
#define VOP_WIN2_CTRL0_WIN2_EN_SHIFT                       (0U)
#define VOP_WIN2_CTRL0_WIN2_EN_MASK                        (0x1U << VOP_WIN2_CTRL0_WIN2_EN_SHIFT)                       /* 0x00000001 */
#define VOP_WIN2_CTRL0_WIN2_DATA_FMT_SHIFT                 (4U)
#define VOP_WIN2_CTRL0_WIN2_DATA_FMT_MASK                  (0xFU << VOP_WIN2_CTRL0_WIN2_DATA_FMT_SHIFT)                 /* 0x000000F0 */
#define VOP_WIN2_CTRL0_WIN2_BPP_SWAP_SHIFT                 (8U)
#define VOP_WIN2_CTRL0_WIN2_BPP_SWAP_MASK                  (0x1U << VOP_WIN2_CTRL0_WIN2_BPP_SWAP_SHIFT)                 /* 0x00000100 */
#define VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_SHIFT           (9U)
#define VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_MASK            (0x1U << VOP_WIN2_CTRL0_WIN2_NO_OUTSTANDING_SHIFT)           /* 0x00000200 */
#define VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_SHIFT              (10U)
#define VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_MASK               (0x1U << VOP_WIN2_CTRL0_WIN2_YUV_4BIT_EN_SHIFT)              /* 0x00000400 */
#define VOP_WIN2_CTRL0_WIN2_RB_SWAP_SHIFT                  (12U)
#define VOP_WIN2_CTRL0_WIN2_RB_SWAP_MASK                   (0x1U << VOP_WIN2_CTRL0_WIN2_RB_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_SHIFT               (13U)
#define VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_MASK                (0x1U << VOP_WIN2_CTRL0_WIN2_ALPHA_SWAP_SHIFT)               /* 0x00002000 */
#define VOP_WIN2_CTRL0_WIN2_ENDIAN_SWAP_SHIFT              (14U)
#define VOP_WIN2_CTRL0_WIN2_ENDIAN_SWAP_MASK               (0x1U << VOP_WIN2_CTRL0_WIN2_ENDIAN_SWAP_SHIFT)              /* 0x00004000 */
#define VOP_WIN2_CTRL0_WIN2_UV_SWAP_SHIFT                  (15U)
#define VOP_WIN2_CTRL0_WIN2_UV_SWAP_MASK                   (0x1U << VOP_WIN2_CTRL0_WIN2_UV_SWAP_SHIFT)                  /* 0x00008000 */
#define VOP_WIN2_CTRL0_WIN2_R2Y_EN_SHIFT                   (16U)
#define VOP_WIN2_CTRL0_WIN2_R2Y_EN_MASK                    (0x1U << VOP_WIN2_CTRL0_WIN2_R2Y_EN_SHIFT)                   /* 0x00010000 */
#define VOP_WIN2_CTRL0_WIN2_Y2R_EN_SHIFT                   (17U)
#define VOP_WIN2_CTRL0_WIN2_Y2R_EN_MASK                    (0x1U << VOP_WIN2_CTRL0_WIN2_Y2R_EN_SHIFT)                   /* 0x00020000 */
#define VOP_WIN2_CTRL0_WIN2_CSC_MODE_SHIFT                 (18U)
#define VOP_WIN2_CTRL0_WIN2_CSC_MODE_MASK                  (0x3U << VOP_WIN2_CTRL0_WIN2_CSC_MODE_SHIFT)                 /* 0x000C0000 */
/* WIN2_CTRL1 */
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_SHIFT           (0U)
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_MASK            (0x1U << VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_EN_SHIFT)           /* 0x00000001 */
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_SHIFT           (1U)
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_MASK            (0x1U << VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_EN_SHIFT)           /* 0x00000002 */
#define VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_SHIFT         (2U)
#define VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_MASK          (0x3U << VOP_WIN2_CTRL1_WIN2_DMA_BURST_LENGTH_SHIFT)         /* 0x0000000C */
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_SHIFT          (4U)
#define VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_MASK           (0x3U << VOP_WIN2_CTRL1_WIN2_YRGB_GATHER_NUM_SHIFT)          /* 0x00000030 */
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_SHIFT          (6U)
#define VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_MASK           (0x3U << VOP_WIN2_CTRL1_WIN2_CBCR_GATHER_NUM_SHIFT)          /* 0x000000C0 */
#define VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_SHIFT              (8U)
#define VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_MASK               (0xFU << VOP_WIN2_CTRL1_SW_WIN2_YRGB_RID_SHIFT)              /* 0x00000F00 */
#define VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_SHIFT              (12U)
#define VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_MASK               (0xFU << VOP_WIN2_CTRL1_SW_WIN2_CBCR_RID_SHIFT)              /* 0x0000F000 */
/* WIN2_VIR */
#define VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_SHIFT            (0U)
#define VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN2_VIR_WIN2_YRGB_VIR_STRIDE_SHIFT)         /* 0x0000FFFF */
#define VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_SHIFT            (16U)
#define VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_MASK             (0xFFFFU << VOP_WIN2_VIR_WIN2_CBCR_VIR_STRIDE_SHIFT)         /* 0xFFFF0000 */
/* WIN2_YRGB_MST */
#define VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_SHIFT              (0U)
#define VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_MASK               (0xFFFFFFFFU << VOP_WIN2_YRGB_MST_WIN2_YRGB_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN2_DSP_INFO */
#define VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_SHIFT             (0U)
#define VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_MASK              (0x1FFFU << VOP_WIN2_DSP_INFO_DSP_WIN2_WIDTH_SHIFT)          /* 0x00001FFF */
#define VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_SHIFT            (16U)
#define VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_MASK             (0x1FFFU << VOP_WIN2_DSP_INFO_DSP_WIN2_HEIGHT_SHIFT)         /* 0x1FFF0000 */
/* WIN2_DSP_ST */
#define VOP_WIN2_DSP_ST_DSP_WIN2_XST_SHIFT                 (0U)
#define VOP_WIN2_DSP_ST_DSP_WIN2_XST_MASK                  (0x1FFFU << VOP_WIN2_DSP_ST_DSP_WIN2_XST_SHIFT)              /* 0x00001FFF */
#define VOP_WIN2_DSP_ST_DSP_WIN2_YST_SHIFT                 (16U)
#define VOP_WIN2_DSP_ST_DSP_WIN2_YST_MASK                  (0x1FFFU << VOP_WIN2_DSP_ST_DSP_WIN2_YST_SHIFT)              /* 0x1FFF0000 */
/* WIN2_COLOR_KEY */
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_SHIFT            (0U)
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_MASK             (0xFFFFFFU << VOP_WIN2_COLOR_KEY_WIN2_KEY_COLOR_SHIFT)       /* 0x00FFFFFF */
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_SHIFT               (24U)
#define VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_MASK                (0x1U << VOP_WIN2_COLOR_KEY_WIN2_KEY_EN_SHIFT)               /* 0x01000000 */
/* WIN2_ALPHA_CTRL */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_SHIFT            (0U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_MASK             (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_EN_SHIFT)            /* 0x00000001 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_SHIFT          (1U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_MASK           (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_MODE_SHIFT)          /* 0x00000002 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_SHIFT       (2U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_MASK        (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_PRE_MUL_SHIFT)       /* 0x00000004 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_SHIFT      (3U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_MASK       (0x1U << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_SAT_MODE_SHIFT)      /* 0x00000008 */
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_SHIFT         (4U)
#define VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_MASK          (0xFFU << VOP_WIN2_ALPHA_CTRL_WIN2_ALPHA_VALUE_SHIFT)        /* 0x00000FF0 */
/* WIN2_CBCR_MST */
#define VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_SHIFT              (0U)
#define VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_MASK               (0xFFFFFFFFU << VOP_WIN2_CBCR_MST_WIN2_CBCR_MST_SHIFT)       /* 0xFFFFFFFF */
/* WIN2_YRGB_MST_RAW */
#define VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_SHIFT      (0U)
#define VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN2_YRGB_MST_RAW_WIN2_YRGB_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN2_CBCR_MST_RAW */
#define VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_SHIFT      (0U)
#define VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_MASK       (0xFFFFFFFFU << VOP_WIN2_CBCR_MST_RAW_WIN2_CBCR_MST_RAW_SHIFT) /* 0xFFFFFFFF */
/* WIN2_LOOP_OFFSET */
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_SHIFT       (0U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_OFFSET_SHIFT)    /* 0x00001FFF */
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_SHIFT           (15U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_MASK            (0x1U << VOP_WIN2_LOOP_OFFSET_WIN2_XLOOP_EN_SHIFT)           /* 0x00008000 */
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_SHIFT       (16U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_MASK        (0x1FFFU << VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_OFFSET_SHIFT)    /* 0x1FFF0000 */
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_SHIFT           (31U)
#define VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_MASK            (0x1U << VOP_WIN2_LOOP_OFFSET_WIN2_YLOOP_EN_SHIFT)           /* 0x80000000 */
/* DSP_HTOTAL_HS_END */
#define VOP_DSP_HTOTAL_HS_END_DSP_HS_END_SHIFT             (0U)
#define VOP_DSP_HTOTAL_HS_END_DSP_HS_END_MASK              (0xFFFU << VOP_DSP_HTOTAL_HS_END_DSP_HS_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_SHIFT             (16U)
#define VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_MASK              (0xFFFU << VOP_DSP_HTOTAL_HS_END_DSP_HTOTAL_SHIFT)           /* 0x0FFF0000 */
/* DSP_HACT_ST_END */
#define VOP_DSP_HACT_ST_END_DSP_HACT_END_SHIFT             (0U)
#define VOP_DSP_HACT_ST_END_DSP_HACT_END_MASK              (0xFFFU << VOP_DSP_HACT_ST_END_DSP_HACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_HACT_ST_END_DSP_HACT_ST_SHIFT              (16U)
#define VOP_DSP_HACT_ST_END_DSP_HACT_ST_MASK               (0xFFFU << VOP_DSP_HACT_ST_END_DSP_HACT_ST_SHIFT)            /* 0x0FFF0000 */
/* DSP_VTOTAL_VS_END */
#define VOP_DSP_VTOTAL_VS_END_DSP_VS_END_SHIFT             (0U)
#define VOP_DSP_VTOTAL_VS_END_DSP_VS_END_MASK              (0xFFFU << VOP_DSP_VTOTAL_VS_END_DSP_VS_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_SHIFT             (16U)
#define VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_MASK              (0xFFFU << VOP_DSP_VTOTAL_VS_END_DSP_VTOTAL_SHIFT)           /* 0x0FFF0000 */
/* DSP_VACT_ST_END */
#define VOP_DSP_VACT_ST_END_DSP_VACT_END_SHIFT             (0U)
#define VOP_DSP_VACT_ST_END_DSP_VACT_END_MASK              (0xFFFU << VOP_DSP_VACT_ST_END_DSP_VACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_DSP_VACT_ST_END_DSP_VACT_ST_SHIFT              (16U)
#define VOP_DSP_VACT_ST_END_DSP_VACT_ST_MASK               (0xFFFU << VOP_DSP_VACT_ST_END_DSP_VACT_ST_SHIFT)            /* 0x0FFF0000 */
/* DSP_VS_ST_END_F1 */
#define VOP_DSP_VS_ST_END_F1_DSP_VS_END_F1_SHIFT           (0U)
#define VOP_DSP_VS_ST_END_F1_DSP_VS_END_F1_MASK            (0xFFFU << VOP_DSP_VS_ST_END_F1_DSP_VS_END_F1_SHIFT)         /* 0x00000FFF */
#define VOP_DSP_VS_ST_END_F1_DSP_VS_ST_F1_SHIFT            (16U)
#define VOP_DSP_VS_ST_END_F1_DSP_VS_ST_F1_MASK             (0xFFFU << VOP_DSP_VS_ST_END_F1_DSP_VS_ST_F1_SHIFT)          /* 0x0FFF0000 */
/* DSP_VACT_ST_END_F1 */
#define VOP_DSP_VACT_ST_END_F1_DSP_VACT_END_F1_SHIFT       (0U)
#define VOP_DSP_VACT_ST_END_F1_DSP_VACT_END_F1_MASK        (0xFFFU << VOP_DSP_VACT_ST_END_F1_DSP_VACT_END_F1_SHIFT)     /* 0x00000FFF */
#define VOP_DSP_VACT_ST_END_F1_DSP_VACT_ST_F1_SHIFT        (16U)
#define VOP_DSP_VACT_ST_END_F1_DSP_VACT_ST_F1_MASK         (0xFFFU << VOP_DSP_VACT_ST_END_F1_DSP_VACT_ST_F1_SHIFT)      /* 0x0FFF0000 */
/* PRE_HTOTAL_HS_END */
#define VOP_PRE_HTOTAL_HS_END_DSP_HS_END_SHIFT             (0U)
#define VOP_PRE_HTOTAL_HS_END_DSP_HS_END_MASK              (0xFFFU << VOP_PRE_HTOTAL_HS_END_DSP_HS_END_SHIFT)           /* 0x00000FFF */
#define VOP_PRE_HTOTAL_HS_END_DSP_HTOTAL_SHIFT             (16U)
#define VOP_PRE_HTOTAL_HS_END_DSP_HTOTAL_MASK              (0xFFFU << VOP_PRE_HTOTAL_HS_END_DSP_HTOTAL_SHIFT)           /* 0x0FFF0000 */
/* PRE_HACT_ST_END */
#define VOP_PRE_HACT_ST_END_DSP_HACT_END_SHIFT             (0U)
#define VOP_PRE_HACT_ST_END_DSP_HACT_END_MASK              (0xFFFU << VOP_PRE_HACT_ST_END_DSP_HACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_PRE_HACT_ST_END_DSP_HACT_ST_SHIFT              (16U)
#define VOP_PRE_HACT_ST_END_DSP_HACT_ST_MASK               (0xFFFU << VOP_PRE_HACT_ST_END_DSP_HACT_ST_SHIFT)            /* 0x0FFF0000 */
/* PRE_VTOTAL_VS_END */
#define VOP_PRE_VTOTAL_VS_END_DSP_VS_END_SHIFT             (0U)
#define VOP_PRE_VTOTAL_VS_END_DSP_VS_END_MASK              (0xFFFU << VOP_PRE_VTOTAL_VS_END_DSP_VS_END_SHIFT)           /* 0x00000FFF */
#define VOP_PRE_VTOTAL_VS_END_DSP_VTOTAL_SHIFT             (16U)
#define VOP_PRE_VTOTAL_VS_END_DSP_VTOTAL_MASK              (0xFFFU << VOP_PRE_VTOTAL_VS_END_DSP_VTOTAL_SHIFT)           /* 0x0FFF0000 */
/* PRE_VACT_ST_END */
#define VOP_PRE_VACT_ST_END_DSP_VACT_END_SHIFT             (0U)
#define VOP_PRE_VACT_ST_END_DSP_VACT_END_MASK              (0xFFFU << VOP_PRE_VACT_ST_END_DSP_VACT_END_SHIFT)           /* 0x00000FFF */
#define VOP_PRE_VACT_ST_END_DSP_VACT_ST_SHIFT              (16U)
#define VOP_PRE_VACT_ST_END_DSP_VACT_ST_MASK               (0xFFFU << VOP_PRE_VACT_ST_END_DSP_VACT_ST_SHIFT)            /* 0x0FFF0000 */
/* BCSH_CTRL */
#define VOP_BCSH_CTRL_BCSH_EN_SHIFT                        (0U)
#define VOP_BCSH_CTRL_BCSH_EN_MASK                         (0x1U << VOP_BCSH_CTRL_BCSH_EN_SHIFT)                        /* 0x00000001 */
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_SHIFT           (1U)
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_MASK            (0x1U << VOP_BCSH_CTRL_SW_BCSH_R2Y_CSC_MODE_SHIFT)           /* 0x00000002 */
#define VOP_BCSH_CTRL_VIDEO_MODE_SHIFT                     (2U)
#define VOP_BCSH_CTRL_VIDEO_MODE_MASK                      (0x3U << VOP_BCSH_CTRL_VIDEO_MODE_SHIFT)                     /* 0x0000000C */
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_SHIFT           (4U)
#define VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_MASK            (0x3U << VOP_BCSH_CTRL_SW_BCSH_Y2R_CSC_MODE_SHIFT)           /* 0x00000030 */
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT                 (7U)
#define VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_MASK                  (0x1U << VOP_BCSH_CTRL_SW_BCSH_R2Y_EN_SHIFT)                 /* 0x00000080 */
/* BCSH_COL_BAR */
#define VOP_BCSH_COL_BAR_COLOR_BAR_Y_SHIFT                 (0U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_Y_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_Y_SHIFT)                /* 0x000000FF */
#define VOP_BCSH_COL_BAR_COLOR_BAR_U_SHIFT                 (8U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_U_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_U_SHIFT)                /* 0x0000FF00 */
#define VOP_BCSH_COL_BAR_COLOR_BAR_V_SHIFT                 (16U)
#define VOP_BCSH_COL_BAR_COLOR_BAR_V_MASK                  (0xFFU << VOP_BCSH_COL_BAR_COLOR_BAR_V_SHIFT)                /* 0x00FF0000 */
/* BCSH_BCS */
#define VOP_BCSH_BCS_BRIGHTNESS_SHIFT                      (0U)
#define VOP_BCSH_BCS_BRIGHTNESS_MASK                       (0x7FU << VOP_BCSH_BCS_BRIGHTNESS_SHIFT)                     /* 0x0000007F */
#define VOP_BCSH_BCS_CONTRAST_SHIFT                        (8U)
#define VOP_BCSH_BCS_CONTRAST_MASK                         (0x1FFU << VOP_BCSH_BCS_CONTRAST_SHIFT)                      /* 0x0001FF00 */
#define VOP_BCSH_BCS_SAT_CON_SHIFT                         (20U)
#define VOP_BCSH_BCS_SAT_CON_MASK                          (0x3FFU << VOP_BCSH_BCS_SAT_CON_SHIFT)                       /* 0x3FF00000 */
/* BCSH_H */
#define VOP_BCSH_H_SIN_HUE_SHIFT                           (0U)
#define VOP_BCSH_H_SIN_HUE_MASK                            (0x1FFU << VOP_BCSH_H_SIN_HUE_SHIFT)                         /* 0x000001FF */
#define VOP_BCSH_H_COS_HUE_SHIFT                           (16U)
#define VOP_BCSH_H_COS_HUE_MASK                            (0x1FFU << VOP_BCSH_H_COS_HUE_SHIFT)                         /* 0x01FF0000 */
/* GAMMA_COE_WORD0 */
#define VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD0_GAMMA_COE_WORD0_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD1 */
#define VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD1_GAMMA_COE_WORD1_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD2 */
#define VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD2_GAMMA_COE_WORD2_SHIFT)   /* 0xFFFFFFFF */
/* GAMMA_COE_WORD3 */
#define VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_SHIFT          (0U)
#define VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_MASK           (0xFFFFFFFFU << VOP_GAMMA_COE_WORD3_GAMMA_COE_WORD3_SHIFT)   /* 0xFFFFFFFF */
/* POST_CTRL */
#define VOP_POST_CTRL_Y_GAMMA_EN_SHIFT                     (0U)
#define VOP_POST_CTRL_Y_GAMMA_EN_MASK                      (0x1U << VOP_POST_CTRL_Y_GAMMA_EN_SHIFT)                     /* 0x00000001 */
#define VOP_POST_CTRL_POST_SCL_EN_SHIFT                    (4U)
#define VOP_POST_CTRL_POST_SCL_EN_MASK                     (0x1U << VOP_POST_CTRL_POST_SCL_EN_SHIFT)                    /* 0x00000010 */
#define VOP_POST_CTRL_POST_SCL_HMODE_SHIFT                 (8U)
#define VOP_POST_CTRL_POST_SCL_HMODE_MASK                  (0x3U << VOP_POST_CTRL_POST_SCL_HMODE_SHIFT)                 /* 0x00000300 */
#define VOP_POST_CTRL_POST_SCL_VMODE_SHIFT                 (10U)
#define VOP_POST_CTRL_POST_SCL_VMODE_MASK                  (0x3U << VOP_POST_CTRL_POST_SCL_VMODE_SHIFT)                 /* 0x00000C00 */
#define VOP_POST_CTRL_POST_CSC_EN_SHIFT                    (12U)
#define VOP_POST_CTRL_POST_CSC_EN_MASK                     (0x1U << VOP_POST_CTRL_POST_CSC_EN_SHIFT)                    /* 0x00001000 */
#define VOP_POST_CTRL_POST_CSC_MODE_SHIFT                  (14U)
#define VOP_POST_CTRL_POST_CSC_MODE_MASK                   (0x3U << VOP_POST_CTRL_POST_CSC_MODE_SHIFT)                  /* 0x0000C000 */
#define VOP_POST_CTRL_COLOR_MATRIX_EN_SHIFT                (16U)
#define VOP_POST_CTRL_COLOR_MATRIX_EN_MASK                 (0x1U << VOP_POST_CTRL_COLOR_MATRIX_EN_SHIFT)                /* 0x00010000 */
#define VOP_POST_CTRL_CLIP_EN_SHIFT                        (20U)
#define VOP_POST_CTRL_CLIP_EN_MASK                         (0x1U << VOP_POST_CTRL_CLIP_EN_SHIFT)                        /* 0x00100000 */
#define VOP_POST_CTRL_Y_THRES_SHIFT                        (24U)
#define VOP_POST_CTRL_Y_THRES_MASK                         (0xFFU << VOP_POST_CTRL_Y_THRES_SHIFT)                       /* 0xFF000000 */
/* COLOR_MATRIX_COE0 */
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE00_SHIFT     (0U)
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE00_MASK      (0xFFU << VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE00_SHIFT)    /* 0x000000FF */
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE01_SHIFT     (8U)
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE01_MASK      (0xFFU << VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE01_SHIFT)    /* 0x0000FF00 */
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE02_SHIFT     (16U)
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE02_MASK      (0xFFU << VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_COE02_SHIFT)    /* 0x00FF0000 */
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_OFFSET0_SHIFT   (24U)
#define VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_OFFSET0_MASK    (0xFFU << VOP_COLOR_MATRIX_COE0_COLOR_MATRIX_OFFSET0_SHIFT)  /* 0xFF000000 */
/* COLOR_MATRIX_COE1 */
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE10_SHIFT     (0U)
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE10_MASK      (0xFFU << VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE10_SHIFT)    /* 0x000000FF */
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE11_SHIFT     (8U)
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE11_MASK      (0xFFU << VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE11_SHIFT)    /* 0x0000FF00 */
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE12_SHIFT     (16U)
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE12_MASK      (0xFFU << VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_COE12_SHIFT)    /* 0x00FF0000 */
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_OFFSET1_SHIFT   (24U)
#define VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_OFFSET1_MASK    (0xFFU << VOP_COLOR_MATRIX_COE1_COLOR_MATRIX_OFFSET1_SHIFT)  /* 0xFF000000 */
/* COLOR_MATRIX_COE2 */
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE20_SHIFT     (0U)
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE20_MASK      (0xFFU << VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE20_SHIFT)    /* 0x000000FF */
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE21_SHIFT     (8U)
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE21_MASK      (0xFFU << VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE21_SHIFT)    /* 0x0000FF00 */
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE22_SHIFT     (16U)
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE22_MASK      (0xFFU << VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_COE22_SHIFT)    /* 0x00FF0000 */
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_OFFSET2_SHIFT   (24U)
#define VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_OFFSET2_MASK    (0xFFU << VOP_COLOR_MATRIX_COE2_COLOR_MATRIX_OFFSET2_SHIFT)  /* 0xFF000000 */
/* MCU_WRITE_DATA */
#define VOP_MCU_WRITE_DATA_FIELD0000_SHIFT                 (0U)
#define VOP_MCU_WRITE_DATA_FIELD0000_MASK                  (0x1U << VOP_MCU_WRITE_DATA_FIELD0000_SHIFT)                 /* 0x00000001 */
/* DBG_REG_SCAN_LINE */
#define VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_SHIFT          (0U)
#define VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_MASK           (0xFFFU << VOP_DBG_REG_SCAN_LINE_SCAN_LINE_NUM_SHIFT)        /* 0x00000FFF */
/* BLANKING_VALUE */
#define VOP_BLANKING_VALUE_SW_BLANKING_VALUE_SHIFT         (0U)
#define VOP_BLANKING_VALUE_SW_BLANKING_VALUE_MASK          (0xFFFFFFU << VOP_BLANKING_VALUE_SW_BLANKING_VALUE_SHIFT)    /* 0x00FFFFFF */
#define VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_SHIFT  (24U)
#define VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_MASK   (0x1U << VOP_BLANKING_VALUE_BLANKING_VALUE_CONFIG_EN_SHIFT)  /* 0x01000000 */
/* FLAG_REG_FRM_VALID */
#define VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_SHIFT    (0U)
#define VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_MASK     (0xFFFFFFFFU << VOP_FLAG_REG_FRM_VALID_FLAG_REG_FRM_VALID_SHIFT) /* 0xFFFFFFFF */
/* FLAG_REG */
#define VOP_FLAG_REG_FLAG_REG_SHIFT                        (0U)
#define VOP_FLAG_REG_FLAG_REG_MASK                         (0xFFFFFFFFU << VOP_FLAG_REG_FLAG_REG_SHIFT)                 /* 0xFFFFFFFF */
/* WIN0_BPP_LUT */
#define VOP_WIN0_BPP_LUT_FIELD0000_SHIFT                   (0U)
#define VOP_WIN0_BPP_LUT_FIELD0000_MASK                    (0x1U << VOP_WIN0_BPP_LUT_FIELD0000_SHIFT)                   /* 0x00000001 */
/* WIN1_BPP_LUT */
#define VOP_WIN1_BPP_LUT_FIELD0000_SHIFT                   (0U)
#define VOP_WIN1_BPP_LUT_FIELD0000_MASK                    (0x1U << VOP_WIN1_BPP_LUT_FIELD0000_SHIFT)                   /* 0x00000001 */
/* DSC_SYS_CTRL0_IMD */
#define VOP_DSC_SYS_CTRL0_IMD_DSC_CONFIG_EN_SHIFT          (0U)
#define VOP_DSC_SYS_CTRL0_IMD_DSC_CONFIG_EN_MASK           (0x1U << VOP_DSC_SYS_CTRL0_IMD_DSC_CONFIG_EN_SHIFT)          /* 0x00000001 */
#define VOP_DSC_SYS_CTRL0_IMD_DSC_IMD_CONFIG_EN_SHIFT      (4U)
#define VOP_DSC_SYS_CTRL0_IMD_DSC_IMD_CONFIG_EN_MASK       (0x1U << VOP_DSC_SYS_CTRL0_IMD_DSC_IMD_CONFIG_EN_SHIFT)      /* 0x00000010 */
#define VOP_DSC_SYS_CTRL0_IMD_DSC_MEM_GATING_EN_SHIFT      (8U)
#define VOP_DSC_SYS_CTRL0_IMD_DSC_MEM_GATING_EN_MASK       (0x1U << VOP_DSC_SYS_CTRL0_IMD_DSC_MEM_GATING_EN_SHIFT)      /* 0x00000100 */
#define VOP_DSC_SYS_CTRL0_IMD_DSC_SOFT_RST_SHIFT           (12U)
#define VOP_DSC_SYS_CTRL0_IMD_DSC_SOFT_RST_MASK            (0x1U << VOP_DSC_SYS_CTRL0_IMD_DSC_SOFT_RST_SHIFT)           /* 0x00001000 */
/* DSC_SYS_CTRL1 */
#define VOP_DSC_SYS_CTRL1_DSI_HALT_EN_SHIFT                (0U)
#define VOP_DSC_SYS_CTRL1_DSI_HALT_EN_MASK                 (0x1U << VOP_DSC_SYS_CTRL1_DSI_HALT_EN_SHIFT)                /* 0x00000001 */
#define VOP_DSC_SYS_CTRL1_DSC_REQ_OUT_EN_SHIFT             (1U)
#define VOP_DSC_SYS_CTRL1_DSC_REQ_OUT_EN_MASK              (0x1U << VOP_DSC_SYS_CTRL1_DSC_REQ_OUT_EN_SHIFT)             /* 0x00000002 */
#define VOP_DSC_SYS_CTRL1_DSC_MUTIPLEX_EOC_EN_SHIFT        (2U)
#define VOP_DSC_SYS_CTRL1_DSC_MUTIPLEX_EOC_EN_MASK         (0x1U << VOP_DSC_SYS_CTRL1_DSC_MUTIPLEX_EOC_EN_SHIFT)        /* 0x00000004 */
#define VOP_DSC_SYS_CTRL1_DSC_VIDEO_MODE_SHIFT             (3U)
#define VOP_DSC_SYS_CTRL1_DSC_VIDEO_MODE_MASK              (0x1U << VOP_DSC_SYS_CTRL1_DSC_VIDEO_MODE_SHIFT)             /* 0x00000008 */
#define VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_VALUE_SHIFT   (4U)
#define VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_VALUE_MASK    (0x1U << VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_VALUE_SHIFT)   /* 0x00000010 */
#define VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_MODE_SHIFT    (5U)
#define VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_MODE_MASK     (0x1U << VOP_DSC_SYS_CTRL1_DSC_ICH_RST_MANUAL_MODE_SHIFT)    /* 0x00000020 */
#define VOP_DSC_SYS_CTRL1_DSC_ICH_DISABLE_SHIFT            (6U)
#define VOP_DSC_SYS_CTRL1_DSC_ICH_DISABLE_MASK             (0x1U << VOP_DSC_SYS_CTRL1_DSC_ICH_DISABLE_SHIFT)            /* 0x00000040 */
#define VOP_DSC_SYS_CTRL1_DSC_FULL_ICH_ERR_PRECISION_SHIFT (7U)
#define VOP_DSC_SYS_CTRL1_DSC_FULL_ICH_ERR_PRECISION_MASK  (0x1U << VOP_DSC_SYS_CTRL1_DSC_FULL_ICH_ERR_PRECISION_SHIFT) /* 0x00000080 */
#define VOP_DSC_SYS_CTRL1_DSC_INT_CLR_TRIG_SHIFT           (8U)
#define VOP_DSC_SYS_CTRL1_DSC_INT_CLR_TRIG_MASK            (0x1U << VOP_DSC_SYS_CTRL1_DSC_INT_CLR_TRIG_SHIFT)           /* 0x00000100 */
#define VOP_DSC_SYS_CTRL1_WORD_SWAP_SHIFT                  (12U)
#define VOP_DSC_SYS_CTRL1_WORD_SWAP_MASK                   (0x1U << VOP_DSC_SYS_CTRL1_WORD_SWAP_SHIFT)                  /* 0x00001000 */
#define VOP_DSC_SYS_CTRL1_HI_LO_BYTE_SWAP_SHIFT            (13U)
#define VOP_DSC_SYS_CTRL1_HI_LO_BYTE_SWAP_MASK             (0x1U << VOP_DSC_SYS_CTRL1_HI_LO_BYTE_SWAP_SHIFT)            /* 0x00002000 */
#define VOP_DSC_SYS_CTRL1_DSC_OUTPUT_DELAY_PERI_SHIFT      (16U)
#define VOP_DSC_SYS_CTRL1_DSC_OUTPUT_DELAY_PERI_MASK       (0xFFFFU << VOP_DSC_SYS_CTRL1_DSC_OUTPUT_DELAY_PERI_SHIFT)   /* 0xFFFF0000 */
/* DSC_SYS_CTRL2 */
#define VOP_DSC_SYS_CTRL2_DSC_INITIAL_LINES_SHIFT          (0U)
#define VOP_DSC_SYS_CTRL2_DSC_INITIAL_LINES_MASK           (0xFFU << VOP_DSC_SYS_CTRL2_DSC_INITIAL_LINES_SHIFT)         /* 0x000000FF */
#define VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_EN_SHIFT        (8U)
#define VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_EN_MASK         (0x1U << VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_EN_SHIFT)        /* 0x00000100 */
#define VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_INIT_SHIFT      (16U)
#define VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_INIT_MASK       (0xFFFFU << VOP_DSC_SYS_CTRL2_DSC_OUTPUT_DELAY_INIT_SHIFT)   /* 0xFFFF0000 */
/* DSC_SYS_CTRL3 */
#define VOP_DSC_SYS_CTRL3_DSC_OB_MAX_ADDR_SHIFT            (0U)
#define VOP_DSC_SYS_CTRL3_DSC_OB_MAX_ADDR_MASK             (0x3FFFU << VOP_DSC_SYS_CTRL3_DSC_OB_MAX_ADDR_SHIFT)         /* 0x00003FFF */
/* DSC_CFG0 */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET0_SHIFT               (0U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET0_MASK                (0x3FU << VOP_DSC_CFG0_RANGE_BPG_OFFSET0_SHIFT)              /* 0x0000003F */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET1_SHIFT               (6U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET1_MASK                (0x3FU << VOP_DSC_CFG0_RANGE_BPG_OFFSET1_SHIFT)              /* 0x00000FC0 */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET2_SHIFT               (12U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET2_MASK                (0x3FU << VOP_DSC_CFG0_RANGE_BPG_OFFSET2_SHIFT)              /* 0x0003F000 */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET3_SHIFT               (18U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET3_MASK                (0x3FU << VOP_DSC_CFG0_RANGE_BPG_OFFSET3_SHIFT)              /* 0x00FC0000 */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET4_SHIFT               (24U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET4_MASK                (0x3FU << VOP_DSC_CFG0_RANGE_BPG_OFFSET4_SHIFT)              /* 0x3F000000 */
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET5_LO_SHIFT            (30U)
#define VOP_DSC_CFG0_RANGE_BPG_OFFSET5_LO_MASK             (0x3U << VOP_DSC_CFG0_RANGE_BPG_OFFSET5_LO_SHIFT)            /* 0xC0000000 */
/* DSC_CFG1 */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET5_HI_SHIFT            (0U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET5_HI_MASK             (0xFU << VOP_DSC_CFG1_RANGE_BPG_OFFSET5_HI_SHIFT)            /* 0x0000000F */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET6_SHIFT               (4U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET6_MASK                (0x3FU << VOP_DSC_CFG1_RANGE_BPG_OFFSET6_SHIFT)              /* 0x000003F0 */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET7_SHIFT               (10U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET7_MASK                (0x3FU << VOP_DSC_CFG1_RANGE_BPG_OFFSET7_SHIFT)              /* 0x0000FC00 */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET8_SHIFT               (16U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET8_MASK                (0x3FU << VOP_DSC_CFG1_RANGE_BPG_OFFSET8_SHIFT)              /* 0x003F0000 */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET9_SHIFT               (22U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET9_MASK                (0x3FU << VOP_DSC_CFG1_RANGE_BPG_OFFSET9_SHIFT)              /* 0x0FC00000 */
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET10_LO_SHIFT           (28U)
#define VOP_DSC_CFG1_RANGE_BPG_OFFSET10_LO_MASK            (0xFU << VOP_DSC_CFG1_RANGE_BPG_OFFSET10_LO_SHIFT)           /* 0xF0000000 */
/* DSC_CFG2 */
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET10_HI_SHIFT           (0U)
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET10_HI_MASK            (0x3U << VOP_DSC_CFG2_RANGE_BPG_OFFSET10_HI_SHIFT)           /* 0x00000003 */
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET11_SHIFT              (2U)
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET11_MASK               (0x3FU << VOP_DSC_CFG2_RANGE_BPG_OFFSET11_SHIFT)             /* 0x000000FC */
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET12_SHIFT              (8U)
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET12_MASK               (0x3FU << VOP_DSC_CFG2_RANGE_BPG_OFFSET12_SHIFT)             /* 0x00003F00 */
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET13_SHIFT              (14U)
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET13_MASK               (0x3FU << VOP_DSC_CFG2_RANGE_BPG_OFFSET13_SHIFT)             /* 0x000FC000 */
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET14_SHIFT              (20U)
#define VOP_DSC_CFG2_RANGE_BPG_OFFSET14_MASK               (0x3FU << VOP_DSC_CFG2_RANGE_BPG_OFFSET14_SHIFT)             /* 0x03F00000 */
#define VOP_DSC_CFG2_FIELD0000_SHIFT                       (26U)
#define VOP_DSC_CFG2_FIELD0000_MASK                        (0x1FU << VOP_DSC_CFG2_FIELD0000_SHIFT)                      /* 0x7C000000 */
#define VOP_DSC_CFG2_FIELD0001_SHIFT                       (31U)
#define VOP_DSC_CFG2_FIELD0001_MASK                        (0x1U << VOP_DSC_CFG2_FIELD0001_SHIFT)                       /* 0x80000000 */
/* DSC_CFG3 */
#define VOP_DSC_CFG3_RANGE_MAX_QP0_SHIFT                   (0U)
#define VOP_DSC_CFG3_RANGE_MAX_QP0_MASK                    (0xFU << VOP_DSC_CFG3_RANGE_MAX_QP0_SHIFT)                   /* 0x0000000F */
#define VOP_DSC_CFG3_RANGE_MAX_QP1_SHIFT                   (4U)
#define VOP_DSC_CFG3_RANGE_MAX_QP1_MASK                    (0x1FU << VOP_DSC_CFG3_RANGE_MAX_QP1_SHIFT)                  /* 0x000001F0 */
#define VOP_DSC_CFG3_RANGE_MAX_QP2_SHIFT                   (9U)
#define VOP_DSC_CFG3_RANGE_MAX_QP2_MASK                    (0x1FU << VOP_DSC_CFG3_RANGE_MAX_QP2_SHIFT)                  /* 0x00003E00 */
#define VOP_DSC_CFG3_RANGE_MAX_QP3_SHIFT                   (14U)
#define VOP_DSC_CFG3_RANGE_MAX_QP3_MASK                    (0x1FU << VOP_DSC_CFG3_RANGE_MAX_QP3_SHIFT)                  /* 0x0007C000 */
#define VOP_DSC_CFG3_RANGE_MAX_QP4_SHIFT                   (19U)
#define VOP_DSC_CFG3_RANGE_MAX_QP4_MASK                    (0x1FU << VOP_DSC_CFG3_RANGE_MAX_QP4_SHIFT)                  /* 0x00F80000 */
#define VOP_DSC_CFG3_RANGE_MAX_QP5_SHIFT                   (24U)
#define VOP_DSC_CFG3_RANGE_MAX_QP5_MASK                    (0x1FU << VOP_DSC_CFG3_RANGE_MAX_QP5_SHIFT)                  /* 0x1F000000 */
#define VOP_DSC_CFG3_RANGE_MAX_QP6_LO_SHIFT                (29U)
#define VOP_DSC_CFG3_RANGE_MAX_QP6_LO_MASK                 (0x7U << VOP_DSC_CFG3_RANGE_MAX_QP6_LO_SHIFT)                /* 0xE0000000 */
/* DSC_CFG4 */
#define VOP_DSC_CFG4_RANGE_MAX_QP6_HI_SHIFT                (0U)
#define VOP_DSC_CFG4_RANGE_MAX_QP6_HI_MASK                 (0x3U << VOP_DSC_CFG4_RANGE_MAX_QP6_HI_SHIFT)                /* 0x00000003 */
#define VOP_DSC_CFG4_RANGE_MAX_QP7_SHIFT                   (2U)
#define VOP_DSC_CFG4_RANGE_MAX_QP7_MASK                    (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP7_SHIFT)                  /* 0x0000007C */
#define VOP_DSC_CFG4_RANGE_MAX_QP8_SHIFT                   (7U)
#define VOP_DSC_CFG4_RANGE_MAX_QP8_MASK                    (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP8_SHIFT)                  /* 0x00000F80 */
#define VOP_DSC_CFG4_RANGE_MAX_QP9_SHIFT                   (12U)
#define VOP_DSC_CFG4_RANGE_MAX_QP9_MASK                    (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP9_SHIFT)                  /* 0x0001F000 */
#define VOP_DSC_CFG4_RANGE_MAX_QP10_SHIFT                  (17U)
#define VOP_DSC_CFG4_RANGE_MAX_QP10_MASK                   (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP10_SHIFT)                 /* 0x003E0000 */
#define VOP_DSC_CFG4_RANGE_MAX_QP11_SHIFT                  (22U)
#define VOP_DSC_CFG4_RANGE_MAX_QP11_MASK                   (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP11_SHIFT)                 /* 0x07C00000 */
#define VOP_DSC_CFG4_RANGE_MAX_QP12_LO_SHIFT               (27U)
#define VOP_DSC_CFG4_RANGE_MAX_QP12_LO_MASK                (0x1FU << VOP_DSC_CFG4_RANGE_MAX_QP12_LO_SHIFT)              /* 0xF8000000 */
/* DSC_CFG5 */
#define VOP_DSC_CFG5_RANGE_MAX_QP13_SHIFT                  (0U)
#define VOP_DSC_CFG5_RANGE_MAX_QP13_MASK                   (0x1FU << VOP_DSC_CFG5_RANGE_MAX_QP13_SHIFT)                 /* 0x0000001F */
#define VOP_DSC_CFG5_RANGE_MAX_QP14_SHIFT                  (5U)
#define VOP_DSC_CFG5_RANGE_MAX_QP14_MASK                   (0x1FU << VOP_DSC_CFG5_RANGE_MAX_QP14_SHIFT)                 /* 0x000003E0 */
#define VOP_DSC_CFG5_RANGE_MIN_QP0_SHIFT                   (10U)
#define VOP_DSC_CFG5_RANGE_MIN_QP0_MASK                    (0x1FU << VOP_DSC_CFG5_RANGE_MIN_QP0_SHIFT)                  /* 0x00007C00 */
#define VOP_DSC_CFG5_RANGE_MIN_QP1_SHIFT                   (15U)
#define VOP_DSC_CFG5_RANGE_MIN_QP1_MASK                    (0x1FU << VOP_DSC_CFG5_RANGE_MIN_QP1_SHIFT)                  /* 0x000F8000 */
#define VOP_DSC_CFG5_RANGE_MIN_QP2_SHIFT                   (20U)
#define VOP_DSC_CFG5_RANGE_MIN_QP2_MASK                    (0x1FU << VOP_DSC_CFG5_RANGE_MIN_QP2_SHIFT)                  /* 0x01F00000 */
#define VOP_DSC_CFG5_RANGE_MIN_QP3_SHIFT                   (25U)
#define VOP_DSC_CFG5_RANGE_MIN_QP3_MASK                    (0x1FU << VOP_DSC_CFG5_RANGE_MIN_QP3_SHIFT)                  /* 0x3E000000 */
#define VOP_DSC_CFG5_RANGE_MIN_QP4_LO_SHIFT                (30U)
#define VOP_DSC_CFG5_RANGE_MIN_QP4_LO_MASK                 (0x3U << VOP_DSC_CFG5_RANGE_MIN_QP4_LO_SHIFT)                /* 0xC0000000 */
/* DSC_CFG6 */
#define VOP_DSC_CFG6_RANGE_MIN_QP4_HI_SHIFT                (0U)
#define VOP_DSC_CFG6_RANGE_MIN_QP4_HI_MASK                 (0x7U << VOP_DSC_CFG6_RANGE_MIN_QP4_HI_SHIFT)                /* 0x00000007 */
#define VOP_DSC_CFG6_RANGE_MIN_QP5_SHIFT                   (3U)
#define VOP_DSC_CFG6_RANGE_MIN_QP5_MASK                    (0x1FU << VOP_DSC_CFG6_RANGE_MIN_QP5_SHIFT)                  /* 0x000000F8 */
#define VOP_DSC_CFG6_RANGE_MIN_QP6_SHIFT                   (8U)
#define VOP_DSC_CFG6_RANGE_MIN_QP6_MASK                    (0x1FU << VOP_DSC_CFG6_RANGE_MIN_QP6_SHIFT)                  /* 0x00001F00 */
#define VOP_DSC_CFG6_RANGE_MIN_QP7_SHIFT                   (13U)
#define VOP_DSC_CFG6_RANGE_MIN_QP7_MASK                    (0x1FU << VOP_DSC_CFG6_RANGE_MIN_QP7_SHIFT)                  /* 0x0003E000 */
#define VOP_DSC_CFG6_RANGE_MIN_QP8_SHIFT                   (18U)
#define VOP_DSC_CFG6_RANGE_MIN_QP8_MASK                    (0x1FU << VOP_DSC_CFG6_RANGE_MIN_QP8_SHIFT)                  /* 0x007C0000 */
#define VOP_DSC_CFG6_RANGE_MIN_QP9_SHIFT                   (23U)
#define VOP_DSC_CFG6_RANGE_MIN_QP9_MASK                    (0x1FU << VOP_DSC_CFG6_RANGE_MIN_QP9_SHIFT)                  /* 0x0F800000 */
#define VOP_DSC_CFG6_RANGE_MIN_QP10_SHIFT                  (28U)
#define VOP_DSC_CFG6_RANGE_MIN_QP10_MASK                   (0xFU << VOP_DSC_CFG6_RANGE_MIN_QP10_SHIFT)                  /* 0xF0000000 */
/* DSC_CFG7 */
#define VOP_DSC_CFG7_RANGE_MIN_QP11_SHIFT                  (0U)
#define VOP_DSC_CFG7_RANGE_MIN_QP11_MASK                   (0x1U << VOP_DSC_CFG7_RANGE_MIN_QP11_SHIFT)                  /* 0x00000001 */
#define VOP_DSC_CFG7_RANGE_MIN_QP12_SHIFT                  (1U)
#define VOP_DSC_CFG7_RANGE_MIN_QP12_MASK                   (0x1FU << VOP_DSC_CFG7_RANGE_MIN_QP12_SHIFT)                 /* 0x0000003E */
#define VOP_DSC_CFG7_RANGE_MIN_QP13_SHIFT                  (6U)
#define VOP_DSC_CFG7_RANGE_MIN_QP13_MASK                   (0x1FU << VOP_DSC_CFG7_RANGE_MIN_QP13_SHIFT)                 /* 0x000007C0 */
#define VOP_DSC_CFG7_RANGE_MIN_QP14_SHIFT                  (11U)
#define VOP_DSC_CFG7_RANGE_MIN_QP14_MASK                   (0x1FU << VOP_DSC_CFG7_RANGE_MIN_QP14_SHIFT)                 /* 0x0000F800 */
#define VOP_DSC_CFG7_RC_BUF_THRESH0_SHIFT                  (16U)
#define VOP_DSC_CFG7_RC_BUF_THRESH0_MASK                   (0xFFU << VOP_DSC_CFG7_RC_BUF_THRESH0_SHIFT)                 /* 0x00FF0000 */
#define VOP_DSC_CFG7_RC_BUF_THRESH1_SHIFT                  (24U)
#define VOP_DSC_CFG7_RC_BUF_THRESH1_MASK                   (0xFFU << VOP_DSC_CFG7_RC_BUF_THRESH1_SHIFT)                 /* 0xFF000000 */
/* DSC_CFG8 */
#define VOP_DSC_CFG8_RC_BUF_THRESH2_SHIFT                  (0U)
#define VOP_DSC_CFG8_RC_BUF_THRESH2_MASK                   (0xFFU << VOP_DSC_CFG8_RC_BUF_THRESH2_SHIFT)                 /* 0x000000FF */
#define VOP_DSC_CFG8_RC_BUF_THRESH3_SHIFT                  (8U)
#define VOP_DSC_CFG8_RC_BUF_THRESH3_MASK                   (0xFFU << VOP_DSC_CFG8_RC_BUF_THRESH3_SHIFT)                 /* 0x0000FF00 */
#define VOP_DSC_CFG8_RC_BUF_THRESH4_SHIFT                  (16U)
#define VOP_DSC_CFG8_RC_BUF_THRESH4_MASK                   (0xFFU << VOP_DSC_CFG8_RC_BUF_THRESH4_SHIFT)                 /* 0x00FF0000 */
#define VOP_DSC_CFG8_RC_BUF_THRESH5_SHIFT                  (24U)
#define VOP_DSC_CFG8_RC_BUF_THRESH5_MASK                   (0xFFU << VOP_DSC_CFG8_RC_BUF_THRESH5_SHIFT)                 /* 0xFF000000 */
/* DSC_CFG9 */
#define VOP_DSC_CFG9_RC_BUF_THRESH6_SHIFT                  (0U)
#define VOP_DSC_CFG9_RC_BUF_THRESH6_MASK                   (0xFFU << VOP_DSC_CFG9_RC_BUF_THRESH6_SHIFT)                 /* 0x000000FF */
#define VOP_DSC_CFG9_RC_BUF_THRESH7_SHIFT                  (8U)
#define VOP_DSC_CFG9_RC_BUF_THRESH7_MASK                   (0xFFU << VOP_DSC_CFG9_RC_BUF_THRESH7_SHIFT)                 /* 0x0000FF00 */
#define VOP_DSC_CFG9_RC_BUF_THRESH8_SHIFT                  (16U)
#define VOP_DSC_CFG9_RC_BUF_THRESH8_MASK                   (0xFFU << VOP_DSC_CFG9_RC_BUF_THRESH8_SHIFT)                 /* 0x00FF0000 */
#define VOP_DSC_CFG9_RC_BUF_THRESH9_SHIFT                  (24U)
#define VOP_DSC_CFG9_RC_BUF_THRESH9_MASK                   (0xFFU << VOP_DSC_CFG9_RC_BUF_THRESH9_SHIFT)                 /* 0xFF000000 */
/* DSC_CFG10 */
#define VOP_DSC_CFG10_RC_BUF_THRESH10_SHIFT                (0U)
#define VOP_DSC_CFG10_RC_BUF_THRESH10_MASK                 (0xFFU << VOP_DSC_CFG10_RC_BUF_THRESH10_SHIFT)               /* 0x000000FF */
#define VOP_DSC_CFG10_RC_BUF_THRESH11_SHIFT                (8U)
#define VOP_DSC_CFG10_RC_BUF_THRESH11_MASK                 (0xFFU << VOP_DSC_CFG10_RC_BUF_THRESH11_SHIFT)               /* 0x0000FF00 */
#define VOP_DSC_CFG10_RC_BUF_THRESH12_SHIFT                (16U)
#define VOP_DSC_CFG10_RC_BUF_THRESH12_MASK                 (0xFFU << VOP_DSC_CFG10_RC_BUF_THRESH12_SHIFT)               /* 0x00FF0000 */
#define VOP_DSC_CFG10_RC_BUF_THRESH13_SHIFT                (24U)
#define VOP_DSC_CFG10_RC_BUF_THRESH13_MASK                 (0xFFU << VOP_DSC_CFG10_RC_BUF_THRESH13_SHIFT)               /* 0xFF000000 */
/* DSC_CFG11 */
#define VOP_DSC_CFG11_RC_TGT_OFFSET_LO_SHIFT               (0U)
#define VOP_DSC_CFG11_RC_TGT_OFFSET_LO_MASK                (0xFU << VOP_DSC_CFG11_RC_TGT_OFFSET_LO_SHIFT)               /* 0x0000000F */
#define VOP_DSC_CFG11_RC_TGT_OFFSET_HI_SHIFT               (4U)
#define VOP_DSC_CFG11_RC_TGT_OFFSET_HI_MASK                (0xFU << VOP_DSC_CFG11_RC_TGT_OFFSET_HI_SHIFT)               /* 0x000000F0 */
#define VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT1_SHIFT           (8U)
#define VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT1_MASK            (0x1FU << VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT1_SHIFT)          /* 0x00001F00 */
#define VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT0_SHIFT           (13U)
#define VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT0_MASK            (0x1FU << VOP_DSC_CFG11_RC_QUANT_INCR_LIMIT0_SHIFT)          /* 0x0003E000 */
#define VOP_DSC_CFG11_RC_EDGE_FACTOR_SHIFT                 (18U)
#define VOP_DSC_CFG11_RC_EDGE_FACTOR_MASK                  (0xFU << VOP_DSC_CFG11_RC_EDGE_FACTOR_SHIFT)                 /* 0x003C0000 */
#define VOP_DSC_CFG11_RC_MODEL_SIZE_LO_SHIFT               (22U)
#define VOP_DSC_CFG11_RC_MODEL_SIZE_LO_MASK                (0x3FFU << VOP_DSC_CFG11_RC_MODEL_SIZE_LO_SHIFT)             /* 0xFFC00000 */
/* DSC_CFG12 */
#define VOP_DSC_CFG12_RC_MODEL_SIZE_HI_SHIFT               (0U)
#define VOP_DSC_CFG12_RC_MODEL_SIZE_HI_MASK                (0x3FU << VOP_DSC_CFG12_RC_MODEL_SIZE_HI_SHIFT)              /* 0x0000003F */
#define VOP_DSC_CFG12_FLATNESS_DET_THRESH_SHIFT            (6U)
#define VOP_DSC_CFG12_FLATNESS_DET_THRESH_MASK             (0xFFU << VOP_DSC_CFG12_FLATNESS_DET_THRESH_SHIFT)           /* 0x00003FC0 */
#define VOP_DSC_CFG12_FLATNESS_MAX_QP_SHIFT                (14U)
#define VOP_DSC_CFG12_FLATNESS_MAX_QP_MASK                 (0x1FU << VOP_DSC_CFG12_FLATNESS_MAX_QP_SHIFT)               /* 0x0007C000 */
#define VOP_DSC_CFG12_FLATNESS_MIN_QP_SHIFT                (19U)
#define VOP_DSC_CFG12_FLATNESS_MIN_QP_MASK                 (0x1FU << VOP_DSC_CFG12_FLATNESS_MIN_QP_SHIFT)               /* 0x00F80000 */
#define VOP_DSC_CFG12_FINAL_OFFSET_LO_SHIFT                (24U)
#define VOP_DSC_CFG12_FINAL_OFFSET_LO_MASK                 (0xFFU << VOP_DSC_CFG12_FINAL_OFFSET_LO_SHIFT)               /* 0xFF000000 */
/* DSC_CFG13 */
#define VOP_DSC_CFG13_FINAL_OFFSET_HI_SHIFT                (0U)
#define VOP_DSC_CFG13_FINAL_OFFSET_HI_MASK                 (0xFFU << VOP_DSC_CFG13_FINAL_OFFSET_HI_SHIFT)               /* 0x000000FF */
#define VOP_DSC_CFG13_INITIAL_OFFSET_SHIFT                 (8U)
#define VOP_DSC_CFG13_INITIAL_OFFSET_MASK                  (0xFFFFU << VOP_DSC_CFG13_INITIAL_OFFSET_SHIFT)              /* 0x00FFFF00 */
#define VOP_DSC_CFG13_SLICE_BPG_OFFSET_LO_SHIFT            (24U)
#define VOP_DSC_CFG13_SLICE_BPG_OFFSET_LO_MASK             (0xFFU << VOP_DSC_CFG13_SLICE_BPG_OFFSET_LO_SHIFT)           /* 0xFF000000 */
/* DSC_CFG14 */
#define VOP_DSC_CFG14_SLICE_BPG_OFFSET_HI_SHIFT            (0U)
#define VOP_DSC_CFG14_SLICE_BPG_OFFSET_HI_MASK             (0xFFU << VOP_DSC_CFG14_SLICE_BPG_OFFSET_HI_SHIFT)           /* 0x000000FF */
#define VOP_DSC_CFG14_NFL_BPG_OFFSET_SHIFT                 (8U)
#define VOP_DSC_CFG14_NFL_BPG_OFFSET_MASK                  (0xFFFFU << VOP_DSC_CFG14_NFL_BPG_OFFSET_SHIFT)              /* 0x00FFFF00 */
#define VOP_DSC_CFG14_FIRST_LINE_BPG_OFFSET_SHIFT          (24U)
#define VOP_DSC_CFG14_FIRST_LINE_BPG_OFFSET_MASK           (0x1FU << VOP_DSC_CFG14_FIRST_LINE_BPG_OFFSET_SHIFT)         /* 0x1F000000 */
#define VOP_DSC_CFG14_SCALE_DECREMENT_INTERVAL_LO_SHIFT    (29U)
#define VOP_DSC_CFG14_SCALE_DECREMENT_INTERVAL_LO_MASK     (0x7U << VOP_DSC_CFG14_SCALE_DECREMENT_INTERVAL_LO_SHIFT)    /* 0xE0000000 */
/* DSC_CFG15 */
#define VOP_DSC_CFG15_SCALE_DECREMENT_INTERVAL_HI_SHIFT    (0U)
#define VOP_DSC_CFG15_SCALE_DECREMENT_INTERVAL_HI_MASK     (0x1FFU << VOP_DSC_CFG15_SCALE_DECREMENT_INTERVAL_HI_SHIFT)  /* 0x000001FF */
#define VOP_DSC_CFG15_SCALE_INCREMENT_INTERVAL_SHIFT       (9U)
#define VOP_DSC_CFG15_SCALE_INCREMENT_INTERVAL_MASK        (0xFFFFU << VOP_DSC_CFG15_SCALE_INCREMENT_INTERVAL_SHIFT)    /* 0x01FFFE00 */
#define VOP_DSC_CFG15_INITIAL_SCALE_VALUE_SHIFT            (25U)
#define VOP_DSC_CFG15_INITIAL_SCALE_VALUE_MASK             (0x3FU << VOP_DSC_CFG15_INITIAL_SCALE_VALUE_SHIFT)           /* 0x7E000000 */
#define VOP_DSC_CFG15_INITIAL_DEC_DELAY_LO_SHIFT           (31U)
#define VOP_DSC_CFG15_INITIAL_DEC_DELAY_LO_MASK            (0x1U << VOP_DSC_CFG15_INITIAL_DEC_DELAY_LO_SHIFT)           /* 0x80000000 */
/* DSC_CFG16 */
#define VOP_DSC_CFG16_INITIAL_DEC_DELAY_HI_SHIFT           (0U)
#define VOP_DSC_CFG16_INITIAL_DEC_DELAY_HI_MASK            (0x7FFFU << VOP_DSC_CFG16_INITIAL_DEC_DELAY_HI_SHIFT)        /* 0x00007FFF */
#define VOP_DSC_CFG16_INITIAL_XMIT_DELAY_SHIFT             (15U)
#define VOP_DSC_CFG16_INITIAL_XMIT_DELAY_MASK              (0x3FFU << VOP_DSC_CFG16_INITIAL_XMIT_DELAY_SHIFT)           /* 0x01FF8000 */
#define VOP_DSC_CFG16_CHUNK_SIZE_LO_SHIFT                  (25U)
#define VOP_DSC_CFG16_CHUNK_SIZE_LO_MASK                   (0x7FU << VOP_DSC_CFG16_CHUNK_SIZE_LO_SHIFT)                 /* 0xFE000000 */
/* DSC_CFG17 */
#define VOP_DSC_CFG17_CHUNK_SIZE_HI_SHIFT                  (0U)
#define VOP_DSC_CFG17_CHUNK_SIZE_HI_MASK                   (0x1FFU << VOP_DSC_CFG17_CHUNK_SIZE_HI_SHIFT)                /* 0x000001FF */
#define VOP_DSC_CFG17_SLICE_HEIGHT_SHIFT                   (9U)
#define VOP_DSC_CFG17_SLICE_HEIGHT_MASK                    (0xFFFFU << VOP_DSC_CFG17_SLICE_HEIGHT_SHIFT)                /* 0x01FFFE00 */
#define VOP_DSC_CFG17_SLICE_WIDTH_LO_SHIFT                 (25U)
#define VOP_DSC_CFG17_SLICE_WIDTH_LO_MASK                  (0x7FU << VOP_DSC_CFG17_SLICE_WIDTH_LO_SHIFT)                /* 0xFE000000 */
/* DSC_CFG18 */
#define VOP_DSC_CFG18_SLICE_WIDTH_HI_SHIFT                 (0U)
#define VOP_DSC_CFG18_SLICE_WIDTH_HI_MASK                  (0x1FFU << VOP_DSC_CFG18_SLICE_WIDTH_HI_SHIFT)               /* 0x000001FF */
#define VOP_DSC_CFG18_PICTURE_HEIGHT_SHIFT                 (9U)
#define VOP_DSC_CFG18_PICTURE_HEIGHT_MASK                  (0xFFFFU << VOP_DSC_CFG18_PICTURE_HEIGHT_SHIFT)              /* 0x01FFFE00 */
#define VOP_DSC_CFG18_PICTURE_WIDTH_LO_SHIFT               (25U)
#define VOP_DSC_CFG18_PICTURE_WIDTH_LO_MASK                (0x7FU << VOP_DSC_CFG18_PICTURE_WIDTH_LO_SHIFT)              /* 0xFE000000 */
/* DSC_CFG19 */
#define VOP_DSC_CFG19_PICTURE_WIDTH_HI_SHIFT               (0U)
#define VOP_DSC_CFG19_PICTURE_WIDTH_HI_MASK                (0x1FFU << VOP_DSC_CFG19_PICTURE_WIDTH_HI_SHIFT)             /* 0x000001FF */
#define VOP_DSC_CFG19_DSC_VERSION_MINOR_SHIFT              (9U)
#define VOP_DSC_CFG19_DSC_VERSION_MINOR_MASK               (0xFU << VOP_DSC_CFG19_DSC_VERSION_MINOR_SHIFT)              /* 0x00001E00 */
#define VOP_DSC_CFG19_BITS_PER_PIXEL_SHIFT                 (13U)
#define VOP_DSC_CFG19_BITS_PER_PIXEL_MASK                  (0x3FFU << VOP_DSC_CFG19_BITS_PER_PIXEL_SHIFT)               /* 0x007FE000 */
#define VOP_DSC_CFG19_BLOCK_PRED_ENABLE_SHIFT              (23U)
#define VOP_DSC_CFG19_BLOCK_PRED_ENABLE_MASK               (0x1U << VOP_DSC_CFG19_BLOCK_PRED_ENABLE_SHIFT)              /* 0x00800000 */
#define VOP_DSC_CFG19_LINEBUF_DEPTH_SHIFT                  (24U)
#define VOP_DSC_CFG19_LINEBUF_DEPTH_MASK                   (0xFU << VOP_DSC_CFG19_LINEBUF_DEPTH_SHIFT)                  /* 0x0F000000 */
#define VOP_DSC_CFG19_ENABLE_422_SHIFT                     (28U)
#define VOP_DSC_CFG19_ENABLE_422_MASK                      (0x1U << VOP_DSC_CFG19_ENABLE_422_SHIFT)                     /* 0x10000000 */
#define VOP_DSC_CFG19_CONVERT_RGB_SHIFT                    (29U)
#define VOP_DSC_CFG19_CONVERT_RGB_MASK                     (0x1U << VOP_DSC_CFG19_CONVERT_RGB_SHIFT)                    /* 0x20000000 */
#define VOP_DSC_CFG19_BITS_PER_COMPONENT_LO_SHIFT          (30U)
#define VOP_DSC_CFG19_BITS_PER_COMPONENT_LO_MASK           (0x3U << VOP_DSC_CFG19_BITS_PER_COMPONENT_LO_SHIFT)          /* 0xC0000000 */
/* DSC_CFG20 */
#define VOP_DSC_CFG20_BITS_PER_COMPONENT_HI_SHIFT          (0U)
#define VOP_DSC_CFG20_BITS_PER_COMPONENT_HI_MASK           (0x3U << VOP_DSC_CFG20_BITS_PER_COMPONENT_HI_SHIFT)          /* 0x00000003 */
/* DSC_INT_EN */
#define VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_1_SHIFT       (0U)
#define VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_1_MASK        (0x1U << VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_1_SHIFT)       /* 0x00000001 */
#define VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_0_SHIFT       (1U)
#define VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_0_MASK        (0x1U << VOP_DSC_INT_EN_OUT_BUFF_FULL_CONTEXT_0_SHIFT)       /* 0x00000002 */
#define VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT      (2U)
#define VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_1_MASK       (0x1U << VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT)      /* 0x00000004 */
#define VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT      (3U)
#define VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_0_MASK       (0x1U << VOP_DSC_INT_EN_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT)      /* 0x00000008 */
#define VOP_DSC_INT_EN_FRAME_DONE_SHIFT                    (4U)
#define VOP_DSC_INT_EN_FRAME_DONE_MASK                     (0x1U << VOP_DSC_INT_EN_FRAME_DONE_SHIFT)                    /* 0x00000010 */
#define VOP_DSC_INT_EN_FRAME_STARTED_SHIFT                 (5U)
#define VOP_DSC_INT_EN_FRAME_STARTED_MASK                  (0x1U << VOP_DSC_INT_EN_FRAME_STARTED_SHIFT)                 /* 0x00000020 */
#define VOP_DSC_INT_EN_CE_SHIFT                            (6U)
#define VOP_DSC_INT_EN_CE_MASK                             (0x1U << VOP_DSC_INT_EN_CE_SHIFT)                            /* 0x00000040 */
#define VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT (7U)
#define VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_MASK (0x1U << VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT) /* 0x00000080 */
#define VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT (8U)
#define VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_MASK (0x1U << VOP_DSC_INT_EN_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT) /* 0x00000100 */
#define VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_1_SHIFT        (9U)
#define VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_1_MASK         (0x1U << VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_1_SHIFT)        /* 0x00000200 */
#define VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_0_SHIFT        (10U)
#define VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_0_MASK         (0x1U << VOP_DSC_INT_EN_DSC_UNDERFLOW_CONTEX_0_SHIFT)        /* 0x00000400 */
/* DSC_INT_CLR */
#define VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_1_SHIFT      (0U)
#define VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_1_MASK       (0x1U << VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_1_SHIFT)      /* 0x00000001 */
#define VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_0_SHIFT      (1U)
#define VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_0_MASK       (0x1U << VOP_DSC_INT_CLR_OUT_BUFF_FULL_CONTEXT_0_SHIFT)      /* 0x00000002 */
#define VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT     (2U)
#define VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_1_MASK      (0x1U << VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT)     /* 0x00000004 */
#define VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT     (3U)
#define VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_0_MASK      (0x1U << VOP_DSC_INT_CLR_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT)     /* 0x00000008 */
#define VOP_DSC_INT_CLR_FRAME_DONE_SHIFT                   (4U)
#define VOP_DSC_INT_CLR_FRAME_DONE_MASK                    (0x1U << VOP_DSC_INT_CLR_FRAME_DONE_SHIFT)                   /* 0x00000010 */
#define VOP_DSC_INT_CLR_FRAME_STARTED_SHIFT                (5U)
#define VOP_DSC_INT_CLR_FRAME_STARTED_MASK                 (0x1U << VOP_DSC_INT_CLR_FRAME_STARTED_SHIFT)                /* 0x00000020 */
#define VOP_DSC_INT_CLR_CE_SHIFT                           (6U)
#define VOP_DSC_INT_CLR_CE_MASK                            (0x1U << VOP_DSC_INT_CLR_CE_SHIFT)                           /* 0x00000040 */
#define VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT (7U)
#define VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_MASK (0x1U << VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT) /* 0x00000080 */
#define VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT (8U)
#define VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_MASK (0x1U << VOP_DSC_INT_CLR_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT) /* 0x00000100 */
#define VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_1_SHIFT       (9U)
#define VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_1_MASK        (0x1U << VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_1_SHIFT)       /* 0x00000200 */
#define VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_0_SHIFT       (10U)
#define VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_0_MASK        (0x1U << VOP_DSC_INT_CLR_DSC_UNDERFLOW_CONTEX_0_SHIFT)       /* 0x00000400 */
/* DSC_INT_STATUS */
#define VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_1_SHIFT   (0U)
#define VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_1_MASK    (0x1U << VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_1_SHIFT)   /* 0x00000001 */
#define VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_0_SHIFT   (1U)
#define VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_0_MASK    (0x1U << VOP_DSC_INT_STATUS_OUT_BUFF_FULL_CONTEXT_0_SHIFT)   /* 0x00000002 */
#define VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT  (2U)
#define VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_1_MASK   (0x1U << VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT)  /* 0x00000004 */
#define VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT  (3U)
#define VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_0_MASK   (0x1U << VOP_DSC_INT_STATUS_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT)  /* 0x00000008 */
#define VOP_DSC_INT_STATUS_FRAME_DONE_SHIFT                (4U)
#define VOP_DSC_INT_STATUS_FRAME_DONE_MASK                 (0x1U << VOP_DSC_INT_STATUS_FRAME_DONE_SHIFT)                /* 0x00000010 */
#define VOP_DSC_INT_STATUS_FRAME_STARTED_SHIFT             (5U)
#define VOP_DSC_INT_STATUS_FRAME_STARTED_MASK              (0x1U << VOP_DSC_INT_STATUS_FRAME_STARTED_SHIFT)             /* 0x00000020 */
#define VOP_DSC_INT_STATUS_CE_SHIFT                        (6U)
#define VOP_DSC_INT_STATUS_CE_MASK                         (0x1U << VOP_DSC_INT_STATUS_CE_SHIFT)                        /* 0x00000040 */
#define VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT (7U)
#define VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_MASK (0x1U << VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_1_SHIFT) /* 0x00000080 */
#define VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT (8U)
#define VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_MASK (0x1U << VOP_DSC_INT_STATUS_RC_MODEL_BUFFER_FULLNESS_OVERFLOW_CONTEXT_0_SHIFT) /* 0x00000100 */
#define VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_1_SHIFT    (9U)
#define VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_1_MASK     (0x1U << VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_1_SHIFT)    /* 0x00000200 */
#define VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_0_SHIFT    (10U)
#define VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_0_MASK     (0x1U << VOP_DSC_INT_STATUS_DSC_UNDERFLOW_CONTEX_0_SHIFT)    /* 0x00000400 */
/* DSC_DBG_STATUS0 */
#define VOP_DSC_DBG_STATUS0_SLICE_COUNT_OUT_SHIFT          (0U)
#define VOP_DSC_DBG_STATUS0_SLICE_COUNT_OUT_MASK           (0xFFFFU << VOP_DSC_DBG_STATUS0_SLICE_COUNT_OUT_SHIFT)       /* 0x0000FFFF */
#define VOP_DSC_DBG_STATUS0_SLICE_LINE_COUNT_OUT_SHIFT     (16U)
#define VOP_DSC_DBG_STATUS0_SLICE_LINE_COUNT_OUT_MASK      (0xFFFFU << VOP_DSC_DBG_STATUS0_SLICE_LINE_COUNT_OUT_SHIFT)  /* 0xFFFF0000 */
/* DSC_DBG_STATUS1 */
#define VOP_DSC_DBG_STATUS1_SLICE_COUNT_ENCODED_SHIFT      (0U)
#define VOP_DSC_DBG_STATUS1_SLICE_COUNT_ENCODED_MASK       (0xFFFFU << VOP_DSC_DBG_STATUS1_SLICE_COUNT_ENCODED_SHIFT)   /* 0x0000FFFF */
#define VOP_DSC_DBG_STATUS1_SLICE_LINE_COUNT_ENCODED_SHIFT (16U)
#define VOP_DSC_DBG_STATUS1_SLICE_LINE_COUNT_ENCODED_MASK  (0xFFFFU << VOP_DSC_DBG_STATUS1_SLICE_LINE_COUNT_ENCODED_SHIFT) /* 0xFFFF0000 */
/* DSC_DBG_STATUS2 */
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_1_SHIFT  (0U)
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_1_MASK   (0x1U << VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_1_SHIFT)  /* 0x00000001 */
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_0_SHIFT  (1U)
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_0_MASK   (0x1U << VOP_DSC_DBG_STATUS2_OUT_BUFF_FULL_CONTEXT_0_SHIFT)  /* 0x00000002 */
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT (2U)
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_1_MASK  (0x1U << VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_1_SHIFT) /* 0x00000004 */
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT (3U)
#define VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_0_MASK  (0x1U << VOP_DSC_DBG_STATUS2_OUT_BUFF_EMPTY_CONTEXT_0_SHIFT) /* 0x00000008 */
#define VOP_DSC_DBG_STATUS2_FRAME_DONE_SHIFT               (4U)
#define VOP_DSC_DBG_STATUS2_FRAME_DONE_MASK                (0x1U << VOP_DSC_DBG_STATUS2_FRAME_DONE_SHIFT)               /* 0x00000010 */
#define VOP_DSC_DBG_STATUS2_FRAME_STARTED_SHIFT            (5U)
#define VOP_DSC_DBG_STATUS2_FRAME_STARTED_MASK             (0x1U << VOP_DSC_DBG_STATUS2_FRAME_STARTED_SHIFT)            /* 0x00000020 */
#define VOP_DSC_DBG_STATUS2_CE_SHIFT                       (6U)
#define VOP_DSC_DBG_STATUS2_CE_MASK                        (0x1U << VOP_DSC_DBG_STATUS2_CE_SHIFT)                       /* 0x00000040 */
/****************************************ACDCDIG*****************************************/
/* VUCTL */
#define ACDCDIG_VUCTL_OFFSET                               (0x0U)
#define ACDCDIG_VUCTL_ADCZDT_SHIFT                         (0U)
#define ACDCDIG_VUCTL_ADCZDT_MASK                          (0x1U << ACDCDIG_VUCTL_ADCZDT_SHIFT)                         /* 0x00000001 */
#define ACDCDIG_VUCTL_ADCFADE_SHIFT                        (1U)
#define ACDCDIG_VUCTL_ADCFADE_MASK                         (0x1U << ACDCDIG_VUCTL_ADCFADE_SHIFT)                        /* 0x00000002 */
#define ACDCDIG_VUCTL_ADC_BYPS_SHIFT                       (2U)
#define ACDCDIG_VUCTL_ADC_BYPS_MASK                        (0x1U << ACDCDIG_VUCTL_ADC_BYPS_SHIFT)                       /* 0x00000004 */
/* VUCTIME */
#define ACDCDIG_VUCTIME_OFFSET                             (0x4U)
#define ACDCDIG_VUCTIME_VUCT_SHIFT                         (0U)
#define ACDCDIG_VUCTIME_VUCT_MASK                          (0xFFU << ACDCDIG_VUCTIME_VUCT_SHIFT)                        /* 0x000000FF */
/* DIGEN */
#define ACDCDIG_DIGEN_OFFSET                               (0x8U)
#define ACDCDIG_DIGEN_I2STX_EN_SHIFT                       (0U)
#define ACDCDIG_DIGEN_I2STX_EN_MASK                        (0x1U << ACDCDIG_DIGEN_I2STX_EN_SHIFT)                       /* 0x00000001 */
#define ACDCDIG_DIGEN_ADC_EN_SHIFT                         (1U)
#define ACDCDIG_DIGEN_ADC_EN_MASK                          (0x1U << ACDCDIG_DIGEN_ADC_EN_SHIFT)                         /* 0x00000002 */
/* CLKCTRL */
#define ACDCDIG_CLKCTRL_OFFSET                             (0xCU)
#define ACDCDIG_CLKCTRL_FILTER_GATE_EN_SHIFT               (2U)
#define ACDCDIG_CLKCTRL_FILTER_GATE_EN_MASK                (0x1U << ACDCDIG_CLKCTRL_FILTER_GATE_EN_SHIFT)               /* 0x00000004 */
#define ACDCDIG_CLKCTRL_CKE_BCLK_SHIFT                     (3U)
#define ACDCDIG_CLKCTRL_CKE_BCLK_MASK                      (0x1U << ACDCDIG_CLKCTRL_CKE_BCLK_SHIFT)                     /* 0x00000008 */
#define ACDCDIG_CLKCTRL_I2STX_CKE_SHIFT                    (4U)
#define ACDCDIG_CLKCTRL_I2STX_CKE_MASK                     (0x1U << ACDCDIG_CLKCTRL_I2STX_CKE_SHIFT)                    /* 0x00000010 */
#define ACDCDIG_CLKCTRL_ADC_CKE_SHIFT                      (5U)
#define ACDCDIG_CLKCTRL_ADC_CKE_MASK                       (0x1U << ACDCDIG_CLKCTRL_ADC_CKE_SHIFT)                      /* 0x00000020 */
#define ACDCDIG_CLKCTRL_CIC_DS_RATIO_SHIFT                 (6U)
#define ACDCDIG_CLKCTRL_CIC_DS_RATIO_MASK                  (0x3U << ACDCDIG_CLKCTRL_CIC_DS_RATIO_SHIFT)                 /* 0x000000C0 */
/* CLKDIV */
#define ACDCDIG_CLKDIV_OFFSET                              (0x10U)
#define ACDCDIG_CLKDIV_INT_DIV_CON_SHIFT                   (0U)
#define ACDCDIG_CLKDIV_INT_DIV_CON_MASK                    (0xFU << ACDCDIG_CLKDIV_INT_DIV_CON_SHIFT)                   /* 0x0000000F */
/* REFCFG */
#define ACDCDIG_REFCFG_OFFSET                              (0x14U)
#define ACDCDIG_REFCFG_REF_TOP_TRIM_SHIFT                  (0U)
#define ACDCDIG_REFCFG_REF_TOP_TRIM_MASK                   (0xFU << ACDCDIG_REFCFG_REF_TOP_TRIM_SHIFT)                  /* 0x0000000F */
#define ACDCDIG_REFCFG_REF_ANA_TRIM_SHIFT                  (4U)
#define ACDCDIG_REFCFG_REF_ANA_TRIM_MASK                   (0x3U << ACDCDIG_REFCFG_REF_ANA_TRIM_SHIFT)                  /* 0x00000030 */
#define ACDCDIG_REFCFG_REF_TOP_PWD_SHIFT                   (6U)
#define ACDCDIG_REFCFG_REF_TOP_PWD_MASK                    (0x1U << ACDCDIG_REFCFG_REF_TOP_PWD_SHIFT)                   /* 0x00000040 */
/* ADCCFG0 */
#define ACDCDIG_ADCCFG0_OFFSET                             (0x18U)
#define ACDCDIG_ADCCFG0_ADC_DITH_SEL_SHIFT                 (0U)
#define ACDCDIG_ADCCFG0_ADC_DITH_SEL_MASK                  (0x7U << ACDCDIG_ADCCFG0_ADC_DITH_SEL_SHIFT)                 /* 0x00000007 */
#define ACDCDIG_ADCCFG0_ADC_DITH_EN_SHIFT                  (3U)
#define ACDCDIG_ADCCFG0_ADC_DITH_EN_MASK                   (0x1U << ACDCDIG_ADCCFG0_ADC_DITH_EN_SHIFT)                  /* 0x00000008 */
#define ACDCDIG_ADCCFG0_ADC_CHOP_CLK_SEL_SHIFT             (4U)
#define ACDCDIG_ADCCFG0_ADC_CHOP_CLK_SEL_MASK              (0x1U << ACDCDIG_ADCCFG0_ADC_CHOP_CLK_SEL_SHIFT)             /* 0x00000010 */
#define ACDCDIG_ADCCFG0_ADC_CHOP_EN_SHIFT                  (5U)
#define ACDCDIG_ADCCFG0_ADC_CHOP_EN_MASK                   (0x1U << ACDCDIG_ADCCFG0_ADC_CHOP_EN_SHIFT)                  /* 0x00000020 */
#define ACDCDIG_ADCCFG0_ADC_PWD_R_SHIFT                    (6U)
#define ACDCDIG_ADCCFG0_ADC_PWD_R_MASK                     (0x1U << ACDCDIG_ADCCFG0_ADC_PWD_R_SHIFT)                    /* 0x00000040 */
#define ACDCDIG_ADCCFG0_ADC_PWD_L_SHIFT                    (7U)
#define ACDCDIG_ADCCFG0_ADC_PWD_L_MASK                     (0x1U << ACDCDIG_ADCCFG0_ADC_PWD_L_SHIFT)                    /* 0x00000080 */
/* ADCCFG1 */
#define ACDCDIG_ADCCFG1_OFFSET                             (0x1CU)
#define ACDCDIG_ADCCFG1_ADC_BOOST_VAGOP_SHIFT              (0U)
#define ACDCDIG_ADCCFG1_ADC_BOOST_VAGOP_MASK               (0x1U << ACDCDIG_ADCCFG1_ADC_BOOST_VAGOP_SHIFT)              /* 0x00000001 */
#define ACDCDIG_ADCCFG1_ADC_BOOST_OPAMP_SHIFT              (1U)
#define ACDCDIG_ADCCFG1_ADC_BOOST_OPAMP_MASK               (0x1U << ACDCDIG_ADCCFG1_ADC_BOOST_OPAMP_SHIFT)              /* 0x00000002 */
#define ACDCDIG_ADCCFG1_ADC_ATTN_OPBIAS_SHIFT              (2U)
#define ACDCDIG_ADCCFG1_ADC_ATTN_OPBIAS_MASK               (0x1U << ACDCDIG_ADCCFG1_ADC_ATTN_OPBIAS_SHIFT)              /* 0x00000004 */
#define ACDCDIG_ADCCFG1_ADC_ATTN_ALLIBIAS_SHIFT            (3U)
#define ACDCDIG_ADCCFG1_ADC_ATTN_ALLIBIAS_MASK             (0x1U << ACDCDIG_ADCCFG1_ADC_ATTN_ALLIBIAS_SHIFT)            /* 0x00000008 */
/* ADCCFG2 */
#define ACDCDIG_ADCCFG2_OFFSET                             (0x20U)
#define ACDCDIG_ADCCFG2_CT_ADC_BOOST_SHIFT                 (0U)
#define ACDCDIG_ADCCFG2_CT_ADC_BOOST_MASK                  (0x1U << ACDCDIG_ADCCFG2_CT_ADC_BOOST_SHIFT)                 /* 0x00000001 */
#define ACDCDIG_ADCCFG2_CT_ADC_ATTN_SHIFT                  (1U)
#define ACDCDIG_ADCCFG2_CT_ADC_ATTN_MASK                   (0x1U << ACDCDIG_ADCCFG2_CT_ADC_ATTN_SHIFT)                  /* 0x00000002 */
#define ACDCDIG_ADCCFG2_CT_ADC_ATTN_OP_SHIFT               (2U)
#define ACDCDIG_ADCCFG2_CT_ADC_ATTN_OP_MASK                (0x1U << ACDCDIG_ADCCFG2_CT_ADC_ATTN_OP_SHIFT)               /* 0x00000004 */
#define ACDCDIG_ADCCFG2_ADC_OUT_SEL_SHIFT                  (3U)
#define ACDCDIG_ADCCFG2_ADC_OUT_SEL_MASK                   (0x1U << ACDCDIG_ADCCFG2_ADC_OUT_SEL_SHIFT)                  /* 0x00000008 */
#define ACDCDIG_ADCCFG2_CT_ADC_ZERO_SHIFT                  (4U)
#define ACDCDIG_ADCCFG2_CT_ADC_ZERO_MASK                   (0x1U << ACDCDIG_ADCCFG2_CT_ADC_ZERO_SHIFT)                  /* 0x00000010 */
#define ACDCDIG_ADCCFG2_CT_ADC_PWD_SHIFT                   (5U)
#define ACDCDIG_ADCCFG2_CT_ADC_PWD_MASK                    (0x1U << ACDCDIG_ADCCFG2_CT_ADC_PWD_SHIFT)                   /* 0x00000020 */
/* ADCCFG3 */
#define ACDCDIG_ADCCFG3_OFFSET                             (0x24U)
#define ACDCDIG_ADCCFG3_FIR_COM_BPS_SHIFT                  (0U)
#define ACDCDIG_ADCCFG3_FIR_COM_BPS_MASK                   (0x1U << ACDCDIG_ADCCFG3_FIR_COM_BPS_SHIFT)                  /* 0x00000001 */
#define ACDCDIG_ADCCFG3_SIG_SCALE_MODE_SHIFT               (1U)
#define ACDCDIG_ADCCFG3_SIG_SCALE_MODE_MASK                (0x1U << ACDCDIG_ADCCFG3_SIG_SCALE_MODE_SHIFT)               /* 0x00000002 */
#define ACDCDIG_ADCCFG3_ADCSRT_SHIFT                       (2U)
#define ACDCDIG_ADCCFG3_ADCSRT_MASK                        (0x7U << ACDCDIG_ADCCFG3_ADCSRT_SHIFT)                       /* 0x0000001C */
/* ADCVOLL */
#define ACDCDIG_ADCVOLL_OFFSET                             (0x28U)
#define ACDCDIG_ADCVOLL_ADCLV_SHIFT                        (0U)
#define ACDCDIG_ADCVOLL_ADCLV_MASK                         (0xFFU << ACDCDIG_ADCVOLL_ADCLV_SHIFT)                       /* 0x000000FF */
/* ADCVOLR */
#define ACDCDIG_ADCVOLR_OFFSET                             (0x2CU)
#define ACDCDIG_ADCVOLR_ADCRV_SHIFT                        (0U)
#define ACDCDIG_ADCVOLR_ADCRV_MASK                         (0xFFU << ACDCDIG_ADCVOLR_ADCRV_SHIFT)                       /* 0x000000FF */
/* ALC0 */
#define ACDCDIG_ALC0_OFFSET                                (0x30U)
#define ACDCDIG_ALC0_ADCRV_GAIN_POL_SHIFT                  (4U)
#define ACDCDIG_ALC0_ADCRV_GAIN_POL_MASK                   (0x1U << ACDCDIG_ALC0_ADCRV_GAIN_POL_SHIFT)                  /* 0x00000010 */
#define ACDCDIG_ALC0_ADCLV_GAIN_POL_SHIFT                  (5U)
#define ACDCDIG_ALC0_ADCLV_GAIN_POL_MASK                   (0x1U << ACDCDIG_ALC0_ADCLV_GAIN_POL_SHIFT)                  /* 0x00000020 */
#define ACDCDIG_ALC0_ALCR_SHIFT                            (6U)
#define ACDCDIG_ALC0_ALCR_MASK                             (0x1U << ACDCDIG_ALC0_ALCR_SHIFT)                            /* 0x00000040 */
#define ACDCDIG_ALC0_ALCL_SHIFT                            (7U)
#define ACDCDIG_ALC0_ALCL_MASK                             (0x1U << ACDCDIG_ALC0_ALCL_SHIFT)                            /* 0x00000080 */
/* ALC1 */
#define ACDCDIG_ALC1_OFFSET                                (0x34U)
#define ACDCDIG_ALC1_ALCRRATE_SHIFT                        (0U)
#define ACDCDIG_ALC1_ALCRRATE_MASK                         (0xFU << ACDCDIG_ALC1_ALCRRATE_SHIFT)                        /* 0x0000000F */
#define ACDCDIG_ALC1_ALCARATE_SHIFT                        (4U)
#define ACDCDIG_ALC1_ALCARATE_MASK                         (0xFU << ACDCDIG_ALC1_ALCARATE_SHIFT)                        /* 0x000000F0 */
/* ALC2 */
#define ACDCDIG_ALC2_OFFSET                                (0x38U)
#define ACDCDIG_ALC2_ALCMIN_SHIFT                          (0U)
#define ACDCDIG_ALC2_ALCMIN_MASK                           (0x7U << ACDCDIG_ALC2_ALCMIN_SHIFT)                          /* 0x00000007 */
#define ACDCDIG_ALC2_ALCMAX_SHIFT                          (4U)
#define ACDCDIG_ALC2_ALCMAX_MASK                           (0x7U << ACDCDIG_ALC2_ALCMAX_SHIFT)                          /* 0x00000070 */
#define ACDCDIG_ALC2_NGVALID_SHIFT                         (7U)
#define ACDCDIG_ALC2_NGVALID_MASK                          (0x1U << ACDCDIG_ALC2_NGVALID_SHIFT)                         /* 0x00000080 */
/* ADCNG */
#define ACDCDIG_ADCNG_OFFSET                               (0x3CU)
#define ACDCDIG_ADCNG_NGDLY_SHIFT                          (0U)
#define ACDCDIG_ADCNG_NGDLY_MASK                           (0x3U << ACDCDIG_ADCNG_NGDLY_SHIFT)                          /* 0x00000003 */
#define ACDCDIG_ADCNG_NGGATE_SHIFT                         (2U)
#define ACDCDIG_ADCNG_NGGATE_MASK                          (0x7U << ACDCDIG_ADCNG_NGGATE_SHIFT)                         /* 0x0000001C */
#define ACDCDIG_ADCNG_NGBOOST_SHIFT                        (5U)
#define ACDCDIG_ADCNG_NGBOOST_MASK                         (0x1U << ACDCDIG_ADCNG_NGBOOST_SHIFT)                        /* 0x00000020 */
#define ACDCDIG_ADCNG_NGEN_SHIFT                           (6U)
#define ACDCDIG_ADCNG_NGEN_MASK                            (0x1U << ACDCDIG_ADCNG_NGEN_SHIFT)                           /* 0x00000040 */
#define ACDCDIG_ADCNG_NGCHL_SHIFT                          (7U)
#define ACDCDIG_ADCNG_NGCHL_MASK                           (0x1U << ACDCDIG_ADCNG_NGCHL_SHIFT)                          /* 0x00000080 */
/* HPFCTRL */
#define ACDCDIG_HPFCTRL_OFFSET                             (0x40U)
#define ACDCDIG_HPFCTRL_HPFCF_SHIFT                        (4U)
#define ACDCDIG_HPFCTRL_HPFCF_MASK                         (0x3U << ACDCDIG_HPFCTRL_HPFCF_SHIFT)                        /* 0x00000030 */
#define ACDCDIG_HPFCTRL_HPFRE_SHIFT                        (6U)
#define ACDCDIG_HPFCTRL_HPFRE_MASK                         (0x1U << ACDCDIG_HPFCTRL_HPFRE_SHIFT)                        /* 0x00000040 */
#define ACDCDIG_HPFCTRL_HPFLE_SHIFT                        (7U)
#define ACDCDIG_HPFCTRL_HPFLE_MASK                         (0x1U << ACDCDIG_HPFCTRL_HPFLE_SHIFT)                        /* 0x00000080 */
/* ADCRVOLL */
#define ACDCDIG_ADCRVOLL_OFFSET                            (0x44U)
#define ACDCDIG_ADCRVOLL                                   (0x0U)
#define ACDCDIG_ADCRVOLL_ADCRLV_SHIFT                      (0U)
#define ACDCDIG_ADCRVOLL_ADCRLV_MASK                       (0x1U << ACDCDIG_ADCRVOLL_ADCRLV_SHIFT)                      /* 0x00000001 */
/* ADCRVOLR */
#define ACDCDIG_ADCRVOLR_OFFSET                            (0x48U)
#define ACDCDIG_ADCRVOLR                                   (0x0U)
#define ACDCDIG_ADCRVOLR_ADCRRV_SHIFT                      (0U)
#define ACDCDIG_ADCRVOLR_ADCRRV_MASK                       (0x1U << ACDCDIG_ADCRVOLR_ADCRRV_SHIFT)                      /* 0x00000001 */
/* PGACFG */
#define ACDCDIG_PGACFG_OFFSET                              (0x4CU)
#define ACDCDIG_PGACFG_PGA_R_DEC_SHIFT                     (0U)
#define ACDCDIG_PGACFG_PGA_R_DEC_MASK                      (0x3U << ACDCDIG_PGACFG_PGA_R_DEC_SHIFT)                     /* 0x00000003 */
#define ACDCDIG_PGACFG_PGA_L_DEC_SHIFT                     (2U)
#define ACDCDIG_PGACFG_PGA_L_DEC_MASK                      (0x3U << ACDCDIG_PGACFG_PGA_L_DEC_SHIFT)                     /* 0x0000000C */
#define ACDCDIG_PGACFG_PGA_R_PD_SHIFT                      (4U)
#define ACDCDIG_PGACFG_PGA_R_PD_MASK                       (0x1U << ACDCDIG_PGACFG_PGA_R_PD_SHIFT)                      /* 0x00000010 */
#define ACDCDIG_PGACFG_PGA_L_PD_SHIFT                      (5U)
#define ACDCDIG_PGACFG_PGA_L_PD_MASK                       (0x1U << ACDCDIG_PGACFG_PGA_L_PD_SHIFT)                      /* 0x00000020 */
#define ACDCDIG_PGACFG_PGA_CHOP_EN_SHIFT                   (6U)
#define ACDCDIG_PGACFG_PGA_CHOP_EN_MASK                    (0x1U << ACDCDIG_PGACFG_PGA_CHOP_EN_SHIFT)                   /* 0x00000040 */
/* PGAGAINL */
#define ACDCDIG_PGAGAINL_OFFSET                            (0x50U)
#define ACDCDIG_PGAGAINL_PGA_GAIN_L_SHIFT                  (0U)
#define ACDCDIG_PGAGAINL_PGA_GAIN_L_MASK                   (0x1FU << ACDCDIG_PGAGAINL_PGA_GAIN_L_SHIFT)                 /* 0x0000001F */
/* PGAGAINR */
#define ACDCDIG_PGAGAINR_OFFSET                            (0x54U)
#define ACDCDIG_PGAGAINR_PGA_GAIN_R_SHIFT                  (0U)
#define ACDCDIG_PGAGAINR_PGA_GAIN_R_MASK                   (0x1FU << ACDCDIG_PGAGAINR_PGA_GAIN_R_SHIFT)                 /* 0x0000001F */
/* LILMT1 */
#define ACDCDIG_LILMT1_OFFSET                              (0x58U)
#define ACDCDIG_LILMT1_MIN_LILMT_SHIFT                     (0U)
#define ACDCDIG_LILMT1_MIN_LILMT_MASK                      (0x7U << ACDCDIG_LILMT1_MIN_LILMT_SHIFT)                     /* 0x00000007 */
#define ACDCDIG_LILMT1_MAX_LILMT_SHIFT                     (4U)
#define ACDCDIG_LILMT1_MAX_LILMT_MASK                      (0x7U << ACDCDIG_LILMT1_MAX_LILMT_SHIFT)                     /* 0x00000070 */
#define ACDCDIG_LILMT1_LMT_EN_SHIFT                        (7U)
#define ACDCDIG_LILMT1_LMT_EN_MASK                         (0x1U << ACDCDIG_LILMT1_LMT_EN_SHIFT)                        /* 0x00000080 */
/* LILMT2 */
#define ACDCDIG_LILMT2_OFFSET                              (0x5CU)
#define ACDCDIG_LILMT2_RLS_RATE_SHIFT                      (0U)
#define ACDCDIG_LILMT2_RLS_RATE_MASK                       (0xFU << ACDCDIG_LILMT2_RLS_RATE_SHIFT)                      /* 0x0000000F */
#define ACDCDIG_LILMT2_ATK_RATE_SHIFT                      (4U)
#define ACDCDIG_LILMT2_ATK_RATE_MASK                       (0xFU << ACDCDIG_LILMT2_ATK_RATE_SHIFT)                      /* 0x000000F0 */
/* LILMTNG1 */
#define ACDCDIG_LILMTNG1_OFFSET                            (0x60U)
#define ACDCDIG_LILMTNG1_NGDLY_LI_SHIFT                    (0U)
#define ACDCDIG_LILMTNG1_NGDLY_LI_MASK                     (0x3U << ACDCDIG_LILMTNG1_NGDLY_LI_SHIFT)                    /* 0x00000003 */
#define ACDCDIG_LILMTNG1_NGGATE_LI_SHIFT                   (2U)
#define ACDCDIG_LILMTNG1_NGGATE_LI_MASK                    (0x7U << ACDCDIG_LILMTNG1_NGGATE_LI_SHIFT)                   /* 0x0000001C */
#define ACDCDIG_LILMTNG1_NGBOOST_LI_SHIFT                  (5U)
#define ACDCDIG_LILMTNG1_NGBOOST_LI_MASK                   (0x1U << ACDCDIG_LILMTNG1_NGBOOST_LI_SHIFT)                  /* 0x00000020 */
#define ACDCDIG_LILMTNG1_NGEN_LI_SHIFT                     (6U)
#define ACDCDIG_LILMTNG1_NGEN_LI_MASK                      (0x1U << ACDCDIG_LILMTNG1_NGEN_LI_SHIFT)                     /* 0x00000040 */
#define ACDCDIG_LILMTNG1_NGCHL_LI_SHIFT                    (7U)
#define ACDCDIG_LILMTNG1_NGCHL_LI_MASK                     (0x1U << ACDCDIG_LILMTNG1_NGCHL_LI_SHIFT)                    /* 0x00000080 */
/* LILMTNG2 */
#define ACDCDIG_LILMTNG2_OFFSET                            (0x64U)
#define ACDCDIG_LILMTNG2                                   (0x0U)
#define ACDCDIG_LILMTNG2_NGVALID_LI_SHIFT                  (0U)
#define ACDCDIG_LILMTNG2_NGVALID_LI_MASK                   (0x1U << ACDCDIG_LILMTNG2_NGVALID_LI_SHIFT)                  /* 0x00000001 */
/* PDMCTRL */
#define ACDCDIG_PDMCTRL_OFFSET                             (0x68U)
#define ACDCDIG_PDMCTRL_PDM_LR_SEL_SHIFT                   (0U)
#define ACDCDIG_PDMCTRL_PDM_LR_SEL_MASK                    (0x1U << ACDCDIG_PDMCTRL_PDM_LR_SEL_SHIFT)                   /* 0x00000001 */
#define ACDCDIG_PDMCTRL_PDM_MODE_SHIFT                     (1U)
#define ACDCDIG_PDMCTRL_PDM_MODE_MASK                      (0x1U << ACDCDIG_PDMCTRL_PDM_MODE_SHIFT)                     /* 0x00000002 */
#define ACDCDIG_PDMCTRL_PDM_EN_SHIFT                       (2U)
#define ACDCDIG_PDMCTRL_PDM_EN_MASK                        (0x1U << ACDCDIG_PDMCTRL_PDM_EN_SHIFT)                       /* 0x00000004 */
/* I2SCKM */
#define ACDCDIG_I2SCKM_OFFSET                              (0x6CU)
#define ACDCDIG_I2SCKM_I2SMST_SHIFT                        (0U)
#define ACDCDIG_I2SCKM_I2SMST_MASK                         (0x1U << ACDCDIG_I2SCKM_I2SMST_SHIFT)                        /* 0x00000001 */
#define ACDCDIG_I2SCKM_SCK_P_SHIFT                         (1U)
#define ACDCDIG_I2SCKM_SCK_P_MASK                          (0x1U << ACDCDIG_I2SCKM_SCK_P_SHIFT)                         /* 0x00000002 */
/* I2SDIV */
#define ACDCDIG_I2SDIV_OFFSET                              (0x70U)
#define ACDCDIG_I2SDIV_SCKDIV_SHIFT                        (0U)
#define ACDCDIG_I2SDIV_SCKDIV_MASK                         (0xFFU << ACDCDIG_I2SDIV_SCKDIV_SHIFT)                       /* 0x000000FF */
/* I2STXCR0 */
#define ACDCDIG_I2STXCR0_OFFSET                            (0x74U)
#define ACDCDIG_I2STXCR0_TXRL_P_SHIFT                      (0U)
#define ACDCDIG_I2STXCR0_TXRL_P_MASK                       (0x1U << ACDCDIG_I2STXCR0_TXRL_P_SHIFT)                      /* 0x00000001 */
#define ACDCDIG_I2STXCR0_SCKDTX_SHIFT                      (1U)
#define ACDCDIG_I2STXCR0_SCKDTX_MASK                       (0x3U << ACDCDIG_I2STXCR0_SCKDTX_SHIFT)                      /* 0x00000006 */
/* I2STXCR1 */
#define ACDCDIG_I2STXCR1_OFFSET                            (0x78U)
#define ACDCDIG_I2STXCR1_LSB_SHIFT                         (0U)
#define ACDCDIG_I2STXCR1_LSB_MASK                          (0x1U << ACDCDIG_I2STXCR1_LSB_SHIFT)                         /* 0x00000001 */
#define ACDCDIG_I2STXCR1_EXRL_SHIFT                        (1U)
#define ACDCDIG_I2STXCR1_EXRL_MASK                         (0x1U << ACDCDIG_I2STXCR1_EXRL_SHIFT)                        /* 0x00000002 */
#define ACDCDIG_I2STXCR1_IBM_SHIFT                         (2U)
#define ACDCDIG_I2STXCR1_IBM_MASK                          (0x3U << ACDCDIG_I2STXCR1_IBM_SHIFT)                         /* 0x0000000C */
#define ACDCDIG_I2STXCR1_PBM_SHIFT                         (4U)
#define ACDCDIG_I2STXCR1_PBM_MASK                          (0x3U << ACDCDIG_I2STXCR1_PBM_SHIFT)                         /* 0x00000030 */
#define ACDCDIG_I2STXCR1_TFS_SHIFT                         (6U)
#define ACDCDIG_I2STXCR1_TFS_MASK                          (0x1U << ACDCDIG_I2STXCR1_TFS_SHIFT)                         /* 0x00000040 */
/* I2STXCR2 */
#define ACDCDIG_I2STXCR2_OFFSET                            (0x7CU)
#define ACDCDIG_I2STXCR2_VDW_SHIFT                         (0U)
#define ACDCDIG_I2STXCR2_VDW_MASK                          (0x1FU << ACDCDIG_I2STXCR2_VDW_SHIFT)                        /* 0x0000001F */
/* I2STXCMD */
#define ACDCDIG_I2STXCMD_OFFSET                            (0x80U)
#define ACDCDIG_I2STXCMD_RCNT_SHIFT                        (0U)
#define ACDCDIG_I2STXCMD_RCNT_MASK                         (0x3FU << ACDCDIG_I2STXCMD_RCNT_SHIFT)                       /* 0x0000003F */
#define ACDCDIG_I2STXCMD_TXC_SHIFT                         (6U)
#define ACDCDIG_I2STXCMD_TXC_MASK                          (0x1U << ACDCDIG_I2STXCMD_TXC_SHIFT)                         /* 0x00000040 */
#define ACDCDIG_I2STXCMD_TXS_SHIFT                         (7U)
#define ACDCDIG_I2STXCMD_TXS_MASK                          (0x1U << ACDCDIG_I2STXCMD_TXS_SHIFT)                         /* 0x00000080 */
/* VERSION */
#define ACDCDIG_VERSION_OFFSET                             (0x84U)
#define ACDCDIG_VERSION                                    (0x1U)
#define ACDCDIG_VERSION_VER_SHIFT                          (0U)
#define ACDCDIG_VERSION_VER_MASK                           (0xFFU << ACDCDIG_VERSION_VER_SHIFT)                         /* 0x000000FF */


/********Name=SOFTRST_CON00,Offset=0x200********/
#define SRST_D_DSP     0
#define SRST_B_DSP     1
#define SRST_A_DSP_NIU 2
#define SRST_P_DSP_NIU 4
#define SRST_P_DSP_GRF 5
#define SRST_P_WDT1    6
/********Name=SOFTRST_CON01,Offset=0x204********/
#define SRST_S_SHRM     16
#define SRST_A_SHRM_NIU 17
#define SRST_P_SHRM     18
#define SRST_P_SHRM_NIU 19
/********Name=SOFTRST_CON02,Offset=0x208********/
#define SRST_P_UART0 32
#define SRST_P_UART1 33
#define SRST_S_UART0 38
#define SRST_S_UART1 41
/********Name=SOFTRST_CON04,Offset=0x210********/
#define SRST_P_TIMER 64
#define SRST_TIMER0  65
#define SRST_TIMER1  66
#define SRST_TIMER2  67
#define SRST_TIMER3  68
#define SRST_TIMER4  69
#define SRST_TIMER5  70
/********Name=SOFTRST_CON05,Offset=0x214********/
#define SRST_P_I2C2APB_NIU 80
#define SRST_P_I2C0        81
#define SRST_P_I2C1        82
#define SRST_P_I2C2        83
#define SRST_P_I2C2APB     84
#define SRST_I2C0          85
#define SRST_I2C1          86
#define SRST_I2C2          87
#define SRST_CODEC_I2S_OUT 92
#define SRST_P_ACDC_DIG    94
#define SRST_A_DMAC_CORE   95
/********Name=SOFTRST_CON06,Offset=0x218********/
#define SRST_H_PDM0          96
#define SRST_H_I2S_8CH       98
#define SRST_H_VAD           99
#define SRST_H_AUDIO_NIU     100
#define SRST_H_AUDIO_AHB_ARB 101
#define SRST_P_AUDIO_NIU     102
#define SRST_M_PDM0          103
#define SRST_M_I2S8CH        108
#define SRST_A_DMAC_NIU      111
/********Name=SOFTRST_CON07,Offset=0x21C********/
#define SRST_A_VOP     112
#define SRST_D_VOP_S   114
#define SRST_A_VOP_NIU 115
/********Name=SOFTRST_CON08,Offset=0x220********/
#define SRST_P_GPIO0  128
#define SRST_P_GPIO1  129
#define SRST_GPIO_DB0 131
#define SRST_GPIO_DB1 132
/********Name=SOFTRST_CON09,Offset=0x224********/
#define SRST_H_ALIVE_NIU    146
#define SRST_H_ALIVEAHB_ARB 147
#define SRST_H_INTC0        148
#define SRST_H_INTC1        149
#define SRST_P_CRU          152
#define SRST_P_ALIVE_NIU    153
#define SRST_P_PMU          154
#define SRST_P_GRF          155
#define SRST_PMU            156
#define SRST_PDM_SAMP       159
/********Name=SOFTRST_CON11,Offset=0x22C********/
#define SRST_A_LOGIC_NIU    177
#define SRST_P_SPI2APB_NIU  180
#define SRST_P_SPI1         182
#define SRST_P_SPI2APB      184
#define SRST_P_MAILBOX0     185
#define SRST_P_MAILBOX1     186
#define SRST_P_MAILBOX2     187
#define SRST_P_WDT0         188
#define SRST_P_MIPIDSI_HOST 189
#define SRST_P_LOGIC_NIU    191
/********Name=SOFTRST_CON12,Offset=0x230********/
#define SRST_H_BOOTROM       195
#define SRST_H_VOP           196
#define SRST_H_LOGIC_NIU     199
#define SRST_H_LOGIC_AHB_ARB 203
#define SRST_H_CM4_NIU       205
#define SRST_H_CM4_CORE      206
/********Name=SOFTRST_CON13,Offset=0x234********/
#define SRST_SPI1 208

/********Name=CLKGATE_CON00,Offset=0x180********/
#define ACLK_DSP_GATE     0
#define ACLK_DSP_NIU_GATE 2
#define PCLK_DSP_GATE     3
#define PCLK_DSP_NIU_GATE 4
#define PCLK_DSP_GRF_GATE 5
#define PCLK_WDT1_GATE    6
#define ACLK_DSP_S_GATE   7
/********Name=CLKGATE_CON01,Offset=0x184********/
#define SCLK_SHRM_GATE     16
#define ACLK_SHRM_NIU_GATE 17
#define PCLK_SHRM_GATE     18
#define PCLK_SHRM_NIU_GATE 19
/********Name=CLKGATE_CON02,Offset=0x188********/
#define PCLK_UART0_GATE     32
#define PCLK_UART1_GATE     33
#define CLK_UART0_GATE      35
#define CLK_UART0_FRAC_GATE 36
#define CLK_UART0_NP5_GATE  37
#define SCLK_UART0_GATE     38
#define CLK_UART1_GATE      39
#define CLK_UART1_FRAC_GATE 40
#define CLK_UART1_NP5_GATE  41
#define SCLK_UART1_GATE     42
/********Name=CLKGATE_CON04,Offset=0x190********/
#define PCLK_TIMER_GATE 64
#define CLK_TIMER0_GATE 65
#define CLK_TIMER1_GATE 66
#define CLK_TIMER2_GATE 67
#define CLK_TIMER3_GATE 68
#define CLK_TIMER4_GATE 69
#define CLK_TIMER5_GATE 70
/********Name=CLKGATE_CON05,Offset=0x194********/
#define PCLK_I2C2APB_NIU_GATE 80
#define PCLK_I2C0_GATE        81
#define PCLK_I2C1_GATE        82
#define PCLK_I2C2_GATE        83
#define PCLK_I2C2APB_GATE     84
#define CLK_I2C0_GATE         85
#define CLK_I2C1_GATE         86
#define CLK_I2C2_GATE         87
#define PCLK_ACDC_DIG_GATE    94
#define ACLK_DMAC_CORE_GATE   95
/********Name=CLKGATE_CON06,Offset=0x198********/
#define HCLK_PDM0_GATE          96
#define HCLK_AUDIO_GATE         97
#define HCLK_I2S_8CH_GATE       98
#define HCLK_VAD_GATE           99
#define HCLK_AUDIO_NIU_GATE     100
#define HCLK_AUDIO_AHB_ARB_GATE 101
#define PCLK_AUDIO_NIU_GATE     102
#define MCLK_PDM0_GATE          103
#define MCLK_PDM0_OUT_GATE      104
#define PCLK_AUDIO_GATE         105
#define CLK_I2S8CH_GATE         106
#define CLK_I2S8CH_FRAC_GATE    107
#define MCLK_I2S8CH_GATE        108
#define I2S_MCLKOUT_GATE        109
#define ACLK_DMAC_GATE          110
#define ACLK_DMAC_NIU_GATE      111
/********Name=CLKGATE_CON07,Offset=0x19C********/
#define ACLK_VOP_GATE                 112
#define DCLK_VOP_S_GATE               114
#define ACLK_VOP_NIU_GATE             115
#define DCLK_VOP_GATE                 116
#define DCLK_MIPIDSI_HOST_GATE        117
#define OCC_SCAN_CLK_DPHYLANBYTE_GATE 120
/********Name=CLKGATE_CON08,Offset=0x1A0********/
#define PCLK_GPIO0_GATE   128
#define PCLK_GPIO1_GATE   129
#define CLK_GPIO_DB0_GATE 131
#define CLK_GPIO_DB1_GATE 132
/********Name=CLKGATE_CON09,Offset=0x1A4********/
#define PCLK_ALIVE_GATE        144
#define HCLK_ALIVE_GATE        145
#define HCLK_ALIVE_NIU_GATE    146
#define HCLK_ALIVEAHB_ARB_GATE 147
#define HCLK_INTC0_GATE        148
#define HCLK_INTC1_GATE        149
#define PCLK_CRU_GATE          152
#define PCLK_ALIVE_NIU_GATE    153
#define PCLK_PMU_GATE          154
#define PCLK_GRF_GATE          155
#define CLK_PMU_GATE           156
#define CLK_TESTOUT_GATE       157
#define CLK_PDM_SAMP_GATE      159
/********Name=CLKGATE_CON10,Offset=0x1A8********/
#define CLK_MEMSUBSYS0_GATE 160
#define CLK_MEMSUBSYS1_GATE 161
#define CLK_MEMSUBSYS2_GATE 162
#define CLK_MEMSUBSYS3_GATE 163
#define ACLK_MEMSUBSYS_GATE 164
/********Name=CLKGATE_CON11,Offset=0x1AC********/
#define ACLK_LOGIC_GATE        176
#define ACLK_LOGIC_NIU_GATE    177
#define HCLK_LOGIC_GATE        178
#define PCLK_LOGIC_GATE        179
#define PCLK_SPI2APB_NIU_GATE  180
#define PCLK_SPI1_GATE         182
#define PCLK_SPI2APB_GATE      184
#define PCLK_MAILBOX0_GATE     185
#define PCLK_MAILBOX1_GATE     186
#define PCLK_MAILBOX2_GATE     187
#define PCLK_WDT0_GATE         188
#define PCLK_MIPIDSI_HOST_GATE 189
#define PCLK_LOGIC_NIU_GATE    191
/********Name=CLKGATE_CON12,Offset=0x1B0********/
#define HCLK_M4_GATE            192
#define HCLK_BOOTROM_GATE       195
#define HCLK_VOP_GATE           196
#define HCLK_LOGIC_NIU_GATE     199
#define HCLK_LOGIC_AHB_ARB_GATE 203
#define HCLK_CM4_NIU_GATE       205
#define HCLK_CM4_CORE_GATE      206
/********Name=CLKGATE_CON13,Offset=0x1B4********/
#define CLK_SPI1_GATE 208

/********Name=CLKSEL_CON00,Offset=0x80********/
#define ACLK_DSP_S_DIV 0x06000000
#define PCLK_DSP_DIV   0x06080000
/********Name=CLKSEL_CON02,Offset=0x88********/
#define SCLK_SHRM_DIV 0x04000002
#define PCLK_SHRM_DIV 0x05080002
/********Name=CLKSEL_CON03,Offset=0x8C********/
#define CLK_UART0_SRC_DIV 0x05000003
/********Name=CLKSEL_CON04,Offset=0x90********/
#define CLK_UART0_FRAC_DIV 0x20000004
/********Name=CLKSEL_CON05,Offset=0x94********/
#define CLK_UART1_SRC_DIV 0x05000005
/********Name=CLKSEL_CON06,Offset=0x98********/
#define CLK_UART1_FRAC_DIV 0x20000006
/********Name=CLKSEL_CON07,Offset=0x9C********/
/********Name=CLKSEL_CON08,Offset=0xA0********/
/********Name=CLKSEL_CON10,Offset=0xA8********/
/********Name=CLKSEL_CON11,Offset=0xAC********/
/********Name=CLKSEL_CON12,Offset=0xB0********/
/********Name=CLKSEL_CON13,Offset=0xB4********/
#define CLK_I2C0_DIV 0x0400000D
#define CLK_I2C1_DIV 0x0404000D
#define CLK_I2C2_DIV 0x0408000D
/********Name=CLKSEL_CON14,Offset=0xB8********/
#define MCLK_PDM0_DIV  0x0500000E
#define HCLK_AUDIO_DIV 0x0508000E
/********Name=CLKSEL_CON15,Offset=0xBC********/
#define MCLK_PDM0_OUT_DIV 0x2000000F
/********Name=CLKSEL_CON16,Offset=0xC0********/
#define CLK_I2S8CH_SRC_DIV 0x05000010
#define PCLK_AUDIO_DIV     0x05080010
/********Name=CLKSEL_CON17,Offset=0xC4********/
#define CLK_I2S8CH_FRAC_DIV 0x20000011
/********Name=CLKSEL_CON18,Offset=0xC8********/
#define ACLK_DMAC_DIV 0x05000012
/********Name=CLKSEL_CON19,Offset=0xCC********/
#define ACLK_VOP_DIV 0x05000013
/********Name=CLKSEL_CON20,Offset=0xD0********/
#define DCLK_VOP_S_DIV 0x05000014
/********Name=CLKSEL_CON22,Offset=0xD8********/
/********Name=CLKSEL_CON23,Offset=0xDC********/
#define OCC_SCAN_CLK_DPHYLANBYTE_DIV 0x08000017
/********Name=CLKSEL_CON24,Offset=0xE0********/
#define CLK_GPIO_DB0_DIV 0x0A000018
/********Name=CLKSEL_CON25,Offset=0xE4********/
#define CLK_GPIO_DB1_DIV 0x0A000019
/********Name=CLKSEL_CON27,Offset=0xEC********/
#define PCLK_ALIVE_DIV 0x0500001B
/********Name=CLKSEL_CON28,Offset=0xF0********/
#define HCLK_ALIVE_DIV 0x0500001C
/********Name=CLKSEL_CON29,Offset=0xF4********/
/********Name=CLKSEL_CON30,Offset=0xF8********/
#define CLK_TESTOUT_DIV 0x0800001E
/********Name=CLKSEL_CON31,Offset=0xFC********/
#define CLK_PDM_SAMP_DIV 0x0500001F
/********Name=CLKSEL_CON33,Offset=0x104********/
#define HCLK_M4_DIV  0x05000021
#define CLK_SPI1_DIV 0x05080021
/********Name=CLKSEL_CON34,Offset=0x108********/
/********Name=CLKSEL_CON35,Offset=0x10C********/
/********Name=CLKSEL_CON36,Offset=0x110********/
/********Name=CLKSEL_CON37,Offset=0x114********/
/********Name=CLKSEL_CON38,Offset=0x118********/
/********Name=CLKSEL_CON39,Offset=0x11C********/
#define HCLK_LOGIC_DIV 0x05080027
/********Name=CLKSEL_CON40,Offset=0x120********/
#define PCLK_LOGIC_DIV 0x05000028
#define ACLK_LOGIC_DIV 0x05080028
/********Name=CLKSEL_CON41,Offset=0x124********/
/********Name=CLKSEL_CON49,Offset=0x144********/
#define XIN_OSC0_DIV 0x20000031

/********Name=CLKSEL_CON00,Offset=0x80********/
#define ACLK_DSP_S_SEL               0x02060000
#define ACLK_DSP_S_SEL_CLK_GPLL_MUX  0
#define ACLK_DSP_S_SEL_CLK_CPLL_MUX  1
#define ACLK_DSP_S_SEL_XIN_OSC0_FUNC 2
/********Name=CLKSEL_CON02,Offset=0x88********/
#define SCLK_SHRM_SEL              0x01040002
#define SCLK_SHRM_SEL_CLK_GPLL_MUX 0
#define SCLK_SHRM_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON03,Offset=0x8C********/
#define CLK_UART0_SRC_SEL              0x01050003
#define CLK_UART0_SRC_SEL_CLK_GPLL_MUX 0
#define CLK_UART0_SRC_SEL_CLK_CPLL_MUX 1
#define SCLK_UART0_SEL                 0x02060003
#define SCLK_UART0_SEL_CLK_UART0_SRC   0
#define SCLK_UART0_SEL_CLK_UART0_FRAC  1
#define SCLK_UART0_SEL_XIN_OSC0_FUNC   2
/********Name=CLKSEL_CON04,Offset=0x90********/
/********Name=CLKSEL_CON05,Offset=0x94********/
#define CLK_UART1_SRC_SEL              0x01050005
#define CLK_UART1_SRC_SEL_CLK_GPLL_MUX 0
#define CLK_UART1_SRC_SEL_CLK_CPLL_MUX 1
#define SCLK_UART1_SEL                 0x02060005
#define SCLK_UART1_SEL_CLK_UART1_SRC   0
#define SCLK_UART1_SEL_CLK_UART1_FRAC  1
#define SCLK_UART1_SEL_XIN_OSC0_FUNC   2
/********Name=CLKSEL_CON06,Offset=0x98********/
/********Name=CLKSEL_CON07,Offset=0x9C********/
/********Name=CLKSEL_CON08,Offset=0xA0********/
/********Name=CLKSEL_CON10,Offset=0xA8********/
/********Name=CLKSEL_CON11,Offset=0xAC********/
/********Name=CLKSEL_CON12,Offset=0xB0********/
/********Name=CLKSEL_CON13,Offset=0xB4********/
/********Name=CLKSEL_CON14,Offset=0xB8********/
#define MCLK_PDM0_SEL               0x0107000E
#define MCLK_PDM0_SEL_CLK_GPLL_MUX  0
#define MCLK_PDM0_SEL_CLK_CPLL_MUX  1
#define HCLK_AUDIO_SEL              0x010F000E
#define HCLK_AUDIO_SEL_CLK_GPLL_MUX 0
#define HCLK_AUDIO_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON15,Offset=0xBC********/
/********Name=CLKSEL_CON16,Offset=0xC0********/
#define CLK_I2S8CH_SRC_SEL               0x01050010
#define CLK_I2S8CH_SRC_SEL_CLK_GPLL_MUX  0
#define CLK_I2S8CH_SRC_SEL_CLK_CPLL_MUX  1
#define MCLK_I2S8CH_SEL                  0x02060010
#define MCLK_I2S8CH_SEL_CLK_I2S8CH_SRC   0
#define MCLK_I2S8CH_SEL_CLK_I2S8CH_FRAC  1
#define MCLK_I2S8CH_SEL_I2S_MCLKIN       2
#define MCLK_I2S8CH_SEL_XIN_OSC0_HALF    3
#define PCLK_AUDIO_SEL                   0x010E0010
#define PCLK_AUDIO_SEL_CLK_GPLL_MUX      0
#define PCLK_AUDIO_SEL_CLK_CPLL_MUX      1
#define I2S_MCLKOUT_SEL                  0x010F0010
#define I2S_MCLKOUT_SEL_MCLK_I2S8CH_NDFT 0
#define I2S_MCLKOUT_SEL_XIN_OSC0_HALF    1
/********Name=CLKSEL_CON17,Offset=0xC4********/
/********Name=CLKSEL_CON18,Offset=0xC8********/
#define ACLK_DMAC_SEL              0x01070012
#define ACLK_DMAC_SEL_CLK_GPLL_MUX 0
#define ACLK_DMAC_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON19,Offset=0xCC********/
#define ACLK_VOP_SEL              0x01070013
#define ACLK_VOP_SEL_CLK_GPLL_MUX 0
#define ACLK_VOP_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON20,Offset=0xD0********/
#define DCLK_VOP_S_SEL              0x01070014
#define DCLK_VOP_S_SEL_CLK_GPLL_MUX 0
#define DCLK_VOP_S_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON22,Offset=0xD8********/
#define OCC_SCAN_CLK_DPHYLANBYTE_SEL               0x02060016
#define OCC_SCAN_CLK_DPHYLANBYTE_SEL_CLK_GPLL_MUX  0
#define OCC_SCAN_CLK_DPHYLANBYTE_SEL_CLK_CPLL_MUX  1
#define OCC_SCAN_CLK_DPHYLANBYTE_SEL_XIN_OSC0_FUNC 2
/********Name=CLKSEL_CON23,Offset=0xDC********/
/********Name=CLKSEL_CON24,Offset=0xE0********/
/********Name=CLKSEL_CON25,Offset=0xE4********/
/********Name=CLKSEL_CON26,Offset=0xE8********/
/********Name=CLKSEL_CON27,Offset=0xEC********/
/********Name=CLKSEL_CON28,Offset=0xF0********/
/********Name=CLKSEL_CON29,Offset=0xF4********/
/********Name=CLKSEL_CON30,Offset=0xF8********/
#define CLK_TESTOUT_SEL              0x0408001E
#define CLK_TESTOUT_SEL_CLK_GPLL_MUX 0
#define CLK_TESTOUT_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON31,Offset=0xFC********/
#define CLK_PDM_SAMP_SEL              0x0105001F
#define CLK_PDM_SAMP_SEL_CLK_GPLL_MUX 0
#define CLK_PDM_SAMP_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON33,Offset=0x104********/
#define HCLK_M4_SEL              0x01070021
#define HCLK_M4_SEL_CLK_GPLL_MUX 0
#define HCLK_M4_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON34,Offset=0x108********/
/********Name=CLKSEL_CON35,Offset=0x10C********/
/********Name=CLKSEL_CON36,Offset=0x110********/
/********Name=CLKSEL_CON37,Offset=0x114********/
/********Name=CLKSEL_CON38,Offset=0x118********/
/********Name=CLKSEL_CON39,Offset=0x11C********/
#define HCLK_LOGIC_SEL              0x010F0027
#define HCLK_LOGIC_SEL_CLK_GPLL_MUX 0
#define HCLK_LOGIC_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON40,Offset=0x120********/
#define PCLK_LOGIC_SEL              0x01070028
#define PCLK_LOGIC_SEL_CLK_GPLL_MUX 0
#define PCLK_LOGIC_SEL_CLK_CPLL_MUX 1
#define ACLK_LOGIC_SEL              0x010F0028
#define ACLK_LOGIC_SEL_CLK_GPLL_MUX 0
#define ACLK_LOGIC_SEL_CLK_CPLL_MUX 1
/********Name=CLKSEL_CON41,Offset=0x124********/
#define CLK_DPHY_REF_FRAC_SEL                    0x010A0029
#define CLK_DPHY_REF_FRAC_SEL_CLK_GPLL_MUX       0
#define CLK_DPHY_REF_FRAC_SEL_CLK_CPLL_MUX       1
#define CLK_DPHY_REF_SEL                         0x010B0029
#define CLK_DPHY_REF_SEL_XIN_OSC0_FUNC           0
#define CLK_DPHY_REF_SEL_CLK_DPHY_REF_FRAC       1
/********Name=CLKSEL_CON44,Offset=0x130********/
#define CLK_DPHY_REF_FRAC_DIV 0x2000002C

#define CLK(mux, div) \
    ((mux & 0x0F0F00FFU) | ((div & 0xFFU) << 8) | ((div & 0xFFFF0000U) << 4))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    PLL_GPLL = 0U,
    PLL_CPLL,
    ACLK_DSP                 = CLK(ACLK_DSP_S_SEL, ACLK_DSP_S_DIV),
    PCLK_DSP                 = CLK(0, PCLK_DSP_DIV),
    SCLK_SHRM                = CLK(SCLK_SHRM_SEL, SCLK_SHRM_DIV),
    PCLK_SHRM                = CLK(0, PCLK_SHRM_DIV),
    CLK_UART0_SRC            = CLK(CLK_UART0_SRC_SEL, CLK_UART0_SRC_DIV),
    CLK_UART0_FRAC           = CLK(0, CLK_UART0_FRAC_DIV),
    CLK_UART0                = CLK(SCLK_UART0_SEL, 0),
    CLK_UART1_SRC            = CLK(CLK_UART1_SRC_SEL, CLK_UART1_SRC_DIV),
    CLK_UART1_FRAC           = CLK(0, CLK_UART1_FRAC_DIV),
    CLK_UART1                = CLK(SCLK_UART1_SEL, 0),
    CLK_I2C0                 = CLK(0, CLK_I2C0_DIV),
    CLK_I2C1                 = CLK(0, CLK_I2C1_DIV),
    CLK_I2C2                 = CLK(0, CLK_I2C2_DIV),
    MCLK_PDM0                = CLK(MCLK_PDM0_SEL, MCLK_PDM0_DIV),
    HCLK_AUDIO               = CLK(HCLK_AUDIO_SEL, HCLK_AUDIO_DIV),
    CLK_I2S8CH_SRC           = CLK(CLK_I2S8CH_SRC_SEL, CLK_I2S8CH_SRC_DIV),
    CLK_I2S8CH_FRAC          = CLK(0, CLK_I2S8CH_FRAC_DIV),
    MCLK_I2S8CH              = CLK(MCLK_I2S8CH_SEL, 0),
    I2S_MCLKOUT              = CLK(I2S_MCLKOUT_SEL, 0),
    ACLK_DMAC                = CLK(ACLK_DMAC_SEL, ACLK_DMAC_DIV),
    PCLK_AUDIO               = CLK(PCLK_AUDIO_SEL, PCLK_AUDIO_DIV),
    ACLK_VOP                 = CLK(ACLK_VOP_SEL, ACLK_VOP_DIV),
    DCLK_VOP_S               = CLK(DCLK_VOP_S_SEL, DCLK_VOP_S_DIV),
    OCC_SCAN_CLK_DPHYLANBYTE = CLK(OCC_SCAN_CLK_DPHYLANBYTE_SEL, OCC_SCAN_CLK_DPHYLANBYTE_DIV),
    CLK_GPIO_DBG0            = CLK(0, CLK_GPIO_DB0_DIV),
    CLK_GPIO_DBG1            = CLK(0, CLK_GPIO_DB1_DIV),
    PCLK_ALIVE               = CLK(0, PCLK_ALIVE_DIV),
    HCLK_ALIVE               = CLK(0, HCLK_ALIVE_DIV),
    CLK_TESTOUT              = CLK(CLK_TESTOUT_SEL, CLK_TESTOUT_DIV),
    CLK_PDM_SAMP             = CLK(CLK_PDM_SAMP_SEL, CLK_PDM_SAMP_DIV),
    HCLK_M4                  = CLK(HCLK_M4_SEL, HCLK_M4_DIV),
    CLK_SPI1                 = CLK(0, CLK_SPI1_DIV),
    HCLK_LOGIC               = CLK(HCLK_LOGIC_SEL, HCLK_LOGIC_DIV),
    PCLK_LOGIC               = CLK(PCLK_LOGIC_SEL, PCLK_LOGIC_DIV),
    ACLK_LOGIC               = CLK(ACLK_LOGIC_SEL, ACLK_LOGIC_DIV),
    CLK_32K                  = CLK(0, XIN_OSC0_DIV),
    CLK_DPHY_REF_FRAC        = CLK(CLK_DPHY_REF_FRAC_SEL, CLK_DPHY_REF_FRAC_DIV),
    CLK_DPHY_REF             = CLK(CLK_DPHY_REF_SEL, 0),
} eCLOCK_Name;
#endif /* __ASSEMBLY__ */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __PISCES_H */
