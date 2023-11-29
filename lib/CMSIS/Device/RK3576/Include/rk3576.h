/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __RK3576_H
#define __RK3576_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
    __IO uint32_t RAM_DEBUG;                          /* Address Offset: 0x0010 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
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
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
    __IO uint32_t RAM_DEBUG;                          /* Address Offset: 0x0010 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
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
/* GPIO0_IOC Register Structure Define */
struct GPIO0_IOC_REG {
    __IO uint32_t GPIO0A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t GPIO0A_DS_L;                        /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0A_DS_H;                        /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0B_DS_L;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t GPIO0A_PULL;                        /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0B_PULL_L;                      /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0A_IE;                          /* Address Offset: 0x0028 */
    __IO uint32_t GPIO0B_IE_L;                        /* Address Offset: 0x002C */
    __IO uint32_t GPIO0A_SMT;                         /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_SMT_L;                       /* Address Offset: 0x0034 */
         uint32_t RESERVED0038[2034];                 /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0B_IOMUX_SEL_H;                 /* Address Offset: 0x2000 */
    __IO uint32_t GPIO0C_IOMUX_SEL_L;                 /* Address Offset: 0x2004 */
    __IO uint32_t GPIO0C_IOMUX_SEL_H;                 /* Address Offset: 0x2008 */
    __IO uint32_t GPIO0D_IOMUX_SEL_L;                 /* Address Offset: 0x200C */
    __IO uint32_t GPIO0D_IOMUX_SEL_H;                 /* Address Offset: 0x2010 */
    __IO uint32_t GPIO0B_DS_H;                        /* Address Offset: 0x2014 */
    __IO uint32_t GPIO0C_DS_L;                        /* Address Offset: 0x2018 */
    __IO uint32_t GPIO0C_DS_H;                        /* Address Offset: 0x201C */
    __IO uint32_t GPIO0D_DS_L;                        /* Address Offset: 0x2020 */
    __IO uint32_t GPIO0D_DS_H;                        /* Address Offset: 0x2024 */
    __IO uint32_t GPIO0B_PULL_H;                      /* Address Offset: 0x2028 */
    __IO uint32_t GPIO0C_PULL;                        /* Address Offset: 0x202C */
    __IO uint32_t GPIO0D_PULL;                        /* Address Offset: 0x2030 */
    __IO uint32_t GPIO0B_IE_H;                        /* Address Offset: 0x2034 */
    __IO uint32_t GPIO0C_IE;                          /* Address Offset: 0x2038 */
    __IO uint32_t GPIO0D_IE;                          /* Address Offset: 0x203C */
    __IO uint32_t GPIO0B_SMT_H;                       /* Address Offset: 0x2040 */
    __IO uint32_t GPIO0C_SMT;                         /* Address Offset: 0x2044 */
    __IO uint32_t GPIO0D_SMT;                         /* Address Offset: 0x2048 */
};
/* GPIO1_IOC Register Structure Define */
struct GPIO1_IOC_REG {
         uint32_t RESERVED0000[4104];                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO1A_IOMUX_SEL_L;                 /* Address Offset: 0x4020 */
    __IO uint32_t GPIO1A_IOMUX_SEL_H;                 /* Address Offset: 0x4024 */
    __IO uint32_t GPIO1B_IOMUX_SEL_L;                 /* Address Offset: 0x4028 */
    __IO uint32_t GPIO1B_IOMUX_SEL_H;                 /* Address Offset: 0x402C */
    __IO uint32_t GPIO1C_IOMUX_SEL_L;                 /* Address Offset: 0x4030 */
    __IO uint32_t GPIO1C_IOMUX_SEL_H;                 /* Address Offset: 0x4034 */
    __IO uint32_t GPIO1D_IOMUX_SEL_L;                 /* Address Offset: 0x4038 */
    __IO uint32_t GPIO1D_IOMUX_SEL_H;                 /* Address Offset: 0x403C */
         uint32_t RESERVED4040[2040];                 /* Address Offset: 0x4040 */
    __IO uint32_t GPIO1A_DS_L;                        /* Address Offset: 0x6020 */
    __IO uint32_t GPIO1A_DS_H;                        /* Address Offset: 0x6024 */
    __IO uint32_t GPIO1B_DS_L;                        /* Address Offset: 0x6028 */
    __IO uint32_t GPIO1B_DS_H;                        /* Address Offset: 0x602C */
    __IO uint32_t GPIO1C_DS_L;                        /* Address Offset: 0x6030 */
    __IO uint32_t GPIO1C_DS_H;                        /* Address Offset: 0x6034 */
    __IO uint32_t GPIO1D_DS_L;                        /* Address Offset: 0x6038 */
    __IO uint32_t GPIO1D_DS_H;                        /* Address Offset: 0x603C */
         uint32_t RESERVED6040[52];                   /* Address Offset: 0x6040 */
    __IO uint32_t GPIO1A_PULL;                        /* Address Offset: 0x6110 */
    __IO uint32_t GPIO1B_PULL;                        /* Address Offset: 0x6114 */
    __IO uint32_t GPIO1C_PULL;                        /* Address Offset: 0x6118 */
    __IO uint32_t GPIO1D_PULL;                        /* Address Offset: 0x611C */
         uint32_t RESERVED6120[24];                   /* Address Offset: 0x6120 */
    __IO uint32_t GPIO1A_IE;                          /* Address Offset: 0x6180 */
    __IO uint32_t GPIO1B_IE;                          /* Address Offset: 0x6184 */
    __IO uint32_t GPIO1C_IE;                          /* Address Offset: 0x6188 */
    __IO uint32_t GPIO1D_IE;                          /* Address Offset: 0x618C */
         uint32_t RESERVED6190[32];                   /* Address Offset: 0x6190 */
    __IO uint32_t GPIO1A_SMT;                         /* Address Offset: 0x6210 */
    __IO uint32_t GPIO1B_SMT;                         /* Address Offset: 0x6214 */
    __IO uint32_t GPIO1C_SMT;                         /* Address Offset: 0x6218 */
    __IO uint32_t GPIO1D_SMT;                         /* Address Offset: 0x621C */
};
/* GPIO2_IOC Register Structure Define */
struct GPIO2_IOC_REG {
         uint32_t RESERVED0000[4112];                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO2A_IOMUX_SEL_L;                 /* Address Offset: 0x4040 */
    __IO uint32_t GPIO2A_IOMUX_SEL_H;                 /* Address Offset: 0x4044 */
    __IO uint32_t GPIO2B_IOMUX_SEL_L;                 /* Address Offset: 0x4048 */
    __IO uint32_t GPIO2B_IOMUX_SEL_H;                 /* Address Offset: 0x404C */
    __IO uint32_t GPIO2C_IOMUX_SEL_L;                 /* Address Offset: 0x4050 */
    __IO uint32_t GPIO2C_IOMUX_SEL_H;                 /* Address Offset: 0x4054 */
    __IO uint32_t GPIO2D_IOMUX_SEL_L;                 /* Address Offset: 0x4058 */
    __IO uint32_t GPIO2D_IOMUX_SEL_H;                 /* Address Offset: 0x405C */
         uint32_t RESERVED4060[2040];                 /* Address Offset: 0x4060 */
    __IO uint32_t GPIO2A_DS_L;                        /* Address Offset: 0x6040 */
    __IO uint32_t GPIO2A_DS_H;                        /* Address Offset: 0x6044 */
    __IO uint32_t GPIO2B_DS_L;                        /* Address Offset: 0x6048 */
    __IO uint32_t GPIO2B_DS_H;                        /* Address Offset: 0x604C */
    __IO uint32_t GPIO2C_DS_L;                        /* Address Offset: 0x6050 */
    __IO uint32_t GPIO2C_DS_H;                        /* Address Offset: 0x6054 */
    __IO uint32_t GPIO2D_DS_L;                        /* Address Offset: 0x6058 */
    __IO uint32_t GPIO2D_DS_H;                        /* Address Offset: 0x605C */
         uint32_t RESERVED6060[48];                   /* Address Offset: 0x6060 */
    __IO uint32_t GPIO2A_PULL;                        /* Address Offset: 0x6120 */
    __IO uint32_t GPIO2B_PULL;                        /* Address Offset: 0x6124 */
    __IO uint32_t GPIO2C_PULL;                        /* Address Offset: 0x6128 */
    __IO uint32_t GPIO2D_PULL;                        /* Address Offset: 0x612C */
         uint32_t RESERVED6130[24];                   /* Address Offset: 0x6130 */
    __IO uint32_t GPIO2A_IE;                          /* Address Offset: 0x6190 */
    __IO uint32_t GPIO2B_IE;                          /* Address Offset: 0x6194 */
    __IO uint32_t GPIO2C_IE;                          /* Address Offset: 0x6198 */
    __IO uint32_t GPIO2D_IE;                          /* Address Offset: 0x619C */
         uint32_t RESERVED61A0[32];                   /* Address Offset: 0x61A0 */
    __IO uint32_t GPIO2A_SMT;                         /* Address Offset: 0x6220 */
    __IO uint32_t GPIO2B_SMT;                         /* Address Offset: 0x6224 */
    __IO uint32_t GPIO2C_SMT;                         /* Address Offset: 0x6228 */
    __IO uint32_t GPIO2D_SMT;                         /* Address Offset: 0x622C */
};
/* GPIO3_IOC Register Structure Define */
struct GPIO3_IOC_REG {
         uint32_t RESERVED0000[4120];                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO3A_IOMUX_SEL_L;                 /* Address Offset: 0x4060 */
    __IO uint32_t GPIO3A_IOMUX_SEL_H;                 /* Address Offset: 0x4064 */
    __IO uint32_t GPIO3B_IOMUX_SEL_L;                 /* Address Offset: 0x4068 */
    __IO uint32_t GPIO3B_IOMUX_SEL_H;                 /* Address Offset: 0x406C */
    __IO uint32_t GPIO3C_IOMUX_SEL_L;                 /* Address Offset: 0x4070 */
    __IO uint32_t GPIO3C_IOMUX_SEL_H;                 /* Address Offset: 0x4074 */
    __IO uint32_t GPIO3D_IOMUX_SEL_L;                 /* Address Offset: 0x4078 */
    __IO uint32_t GPIO3D_IOMUX_SEL_H;                 /* Address Offset: 0x407C */
         uint32_t RESERVED4080[2040];                 /* Address Offset: 0x4080 */
    __IO uint32_t GPIO3A_DS_L;                        /* Address Offset: 0x6060 */
    __IO uint32_t GPIO3A_DS_H;                        /* Address Offset: 0x6064 */
    __IO uint32_t GPIO3B_DS_L;                        /* Address Offset: 0x6068 */
    __IO uint32_t GPIO3B_DS_H;                        /* Address Offset: 0x606C */
    __IO uint32_t GPIO3C_DS_L;                        /* Address Offset: 0x6070 */
    __IO uint32_t GPIO3C_DS_H;                        /* Address Offset: 0x6074 */
    __IO uint32_t GPIO3D_DS_L;                        /* Address Offset: 0x6078 */
    __IO uint32_t GPIO3D_DS_H;                        /* Address Offset: 0x607C */
         uint32_t RESERVED6080[44];                   /* Address Offset: 0x6080 */
    __IO uint32_t GPIO3A_PULL;                        /* Address Offset: 0x6130 */
    __IO uint32_t GPIO3B_PULL;                        /* Address Offset: 0x6134 */
    __IO uint32_t GPIO3C_PULL;                        /* Address Offset: 0x6138 */
    __IO uint32_t GPIO3D_PULL;                        /* Address Offset: 0x613C */
         uint32_t RESERVED6140[24];                   /* Address Offset: 0x6140 */
    __IO uint32_t GPIO3A_IE;                          /* Address Offset: 0x61A0 */
    __IO uint32_t GPIO3B_IE;                          /* Address Offset: 0x61A4 */
    __IO uint32_t GPIO3C_IE;                          /* Address Offset: 0x61A8 */
    __IO uint32_t GPIO3D_IE;                          /* Address Offset: 0x61AC */
         uint32_t RESERVED61B0[32];                   /* Address Offset: 0x61B0 */
    __IO uint32_t GPIO3A_SMT;                         /* Address Offset: 0x6230 */
    __IO uint32_t GPIO3B_SMT;                         /* Address Offset: 0x6234 */
    __IO uint32_t GPIO3C_SMT;                         /* Address Offset: 0x6238 */
    __IO uint32_t GPIO3D_SMT;                         /* Address Offset: 0x623C */
};
/* GPIO4_IOC Register Structure Define */
struct GPIO4_IOC_REG {
         uint32_t RESERVED0000[4128];                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO4A_IOMUX_SEL_L;                 /* Address Offset: 0x4080 */
    __IO uint32_t GPIO4A_IOMUX_SEL_H;                 /* Address Offset: 0x4084 */
    __IO uint32_t GPIO4B_IOMUX_SEL_L;                 /* Address Offset: 0x4088 */
    __IO uint32_t GPIO4B_IOMUX_SEL_H;                 /* Address Offset: 0x408C */
         uint32_t RESERVED4090[2044];                 /* Address Offset: 0x4090 */
    __IO uint32_t GPIO4A_DS_L;                        /* Address Offset: 0x6080 */
    __IO uint32_t GPIO4A_DS_H;                        /* Address Offset: 0x6084 */
    __IO uint32_t GPIO4B_DS_L;                        /* Address Offset: 0x6088 */
    __IO uint32_t GPIO4B_DS_H;                        /* Address Offset: 0x608C */
         uint32_t RESERVED6090[44];                   /* Address Offset: 0x6090 */
    __IO uint32_t GPIO4A_PULL;                        /* Address Offset: 0x6140 */
    __IO uint32_t GPIO4B_PULL;                        /* Address Offset: 0x6144 */
         uint32_t RESERVED6148[26];                   /* Address Offset: 0x6148 */
    __IO uint32_t GPIO4A_IE;                          /* Address Offset: 0x61B0 */
    __IO uint32_t GPIO4B_IE;                          /* Address Offset: 0x61B4 */
         uint32_t RESERVED61B8[34];                   /* Address Offset: 0x61B8 */
    __IO uint32_t GPIO4A_SMT;                         /* Address Offset: 0x6240 */
    __IO uint32_t GPIO4B_SMT;                         /* Address Offset: 0x6244 */
         uint32_t RESERVED6248[3986];                 /* Address Offset: 0x6248 */
    __IO uint32_t GPIO4C_DS_L;                        /* Address Offset: 0xA090 */
    __IO uint32_t GPIO4C_DS_H;                        /* Address Offset: 0xA094 */
    __IO uint32_t GPIO4D_DS_L;                        /* Address Offset: 0xA098 */
         uint32_t RESERVEDA09C[43];                   /* Address Offset: 0xA09C */
    __IO uint32_t GPIO4C_PULL;                        /* Address Offset: 0xA148 */
    __IO uint32_t GPIO4D_PULL;                        /* Address Offset: 0xA14C */
         uint32_t RESERVEDA150[26];                   /* Address Offset: 0xA150 */
    __IO uint32_t GPIO4C_IE;                          /* Address Offset: 0xA1B8 */
    __IO uint32_t GPIO4D_IE;                          /* Address Offset: 0xA1BC */
         uint32_t RESERVEDA1C0[34];                   /* Address Offset: 0xA1C0 */
    __IO uint32_t GPIO4C_SMT;                         /* Address Offset: 0xA248 */
    __IO uint32_t GPIO4D_SMT;                         /* Address Offset: 0xA24C */
         uint32_t RESERVEDA250[80];                   /* Address Offset: 0xA250 */
    __IO uint32_t GPIO4C_IOMUX_SEL_L;                 /* Address Offset: 0xA390 */
    __IO uint32_t GPIO4C_IOMUX_SEL_H;                 /* Address Offset: 0xA394 */
    __IO uint32_t GPIO4D_IOMUX_SEL_L;                 /* Address Offset: 0xA398 */
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
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __I  uint32_t INT_STATUS;                         /* Address Offset: 0x0050 */
         uint32_t RESERVED0054;                       /* Address Offset: 0x0054 */
    __I  uint32_t INT_RAWSTATUS;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED005C;                       /* Address Offset: 0x005C */
    __IO uint32_t PORT_EOI_L;                         /* Address Offset: 0x0060 */
    __IO uint32_t PORT_EOI_H;                         /* Address Offset: 0x0064 */
         uint32_t RESERVED0068[2];                    /* Address Offset: 0x0068 */
    __I  uint32_t EXT_PORT;                           /* Address Offset: 0x0070 */
         uint32_t RESERVED0074;                       /* Address Offset: 0x0074 */
    __I  uint32_t VER_ID;                             /* Address Offset: 0x0078 */
         uint32_t RESERVED007C;                       /* Address Offset: 0x007C */
    __IO uint32_t STORE_ST_L;                         /* Address Offset: 0x0080 */
    __IO uint32_t STORE_ST_H;                         /* Address Offset: 0x0084 */
         uint32_t RESERVED0088[30];                   /* Address Offset: 0x0088 */
    __IO uint32_t GPIO_REG_GROUP_L;                   /* Address Offset: 0x0100 */
    __IO uint32_t GPIO_REG_GROUP_H ;                  /* Address Offset: 0x0104 */
    __IO uint32_t GPIO_VIRTUAL_EN;                    /* Address Offset: 0x0108 */
         uint32_t RESERVED010C;                       /* Address Offset: 0x010C */
    __IO uint32_t GPIO_REG_GROUP1_L;                  /* Address Offset: 0x0110 */
    __IO uint32_t GPIO_REG_GROUP1_H;                  /* Address Offset: 0x0114 */
    __IO uint32_t GPIO_REG_GROUP2_L;                  /* Address Offset: 0x0118 */
    __IO uint32_t GPIO_REG_GROUP2_H;                  /* Address Offset: 0x011C */
    __IO uint32_t GPIO_REG_GROUP3_L;                  /* Address Offset: 0x0120 */
    __IO uint32_t GPIO_REG_GROUP3_H;                  /* Address Offset: 0x0124 */
};
/* TIMER Register Structure Define */
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __I  uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
};
/* INTMUX Register Structure Define */
struct INTMUX_REG {
    __IO uint32_t INT_ENABLE_GROUP[16];               /* Address Offset: 0x0000 */
         uint32_t RESERVED0040[16];                   /* Address Offset: 0x0040 */
    __IO uint32_t INT_FLAG_GROUP[16];                 /* Address Offset: 0x0080 */
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#ifdef HAL_MCU_CORE
#define MCU_OFFSET                      0x20000000U
#else
#define MCU_OFFSET                      0U
#endif

#define DCACHE_BASE                    (0x23810000U + MCU_OFFSET) /* DCACHE base address */
#define ICACHE_BASE                    (0x23810000U + MCU_OFFSET) /* ICACHE base address */
#define GPIO0_IOC_BASE                 (0x26040000U + MCU_OFFSET) /* GPIO0_IOC base address */
#define GPIO1_IOC_BASE                 (0x26040000U + MCU_OFFSET) /* GPIO1_IOC base address */
#define GPIO2_IOC_BASE                 (0x26040000U + MCU_OFFSET) /* GPIO2_IOC base address */
#define GPIO3_IOC_BASE                 (0x26040000U + MCU_OFFSET) /* GPIO3_IOC base address */
#define GPIO4_IOC_BASE                 (0x26040000U + MCU_OFFSET) /* GPIO4_IOC base address */
#define UART1_BASE                     (0x27310000U + MCU_OFFSET) /* UART1 base address */
#define GPIO0_BASE                     (0x27320000U + MCU_OFFSET) /* GPIO0 base address */
#define TIMER0_BASE                    (0x2ACC0000U + MCU_OFFSET) /* TIMER0 base address */
#define TIMER1_BASE                    (0x2ACC1000U + MCU_OFFSET) /* TIMER1 base address */
#define TIMER2_BASE                    (0x2ACC2000U + MCU_OFFSET) /* TIMER2 base address */
#define TIMER3_BASE                    (0x2ACC3000U + MCU_OFFSET) /* TIMER3 base address */
#define TIMER4_BASE                    (0x2ACC4000U + MCU_OFFSET) /* TIMER4 base address */
#define TIMER5_BASE                    (0x2ACC5000U + MCU_OFFSET) /* TIMER5 base address */
#define TIMER6_BASE                    (0x2ACD0000U + MCU_OFFSET) /* TIMER6 base address */
#define TIMER7_BASE                    (0x2ACD1000U + MCU_OFFSET) /* TIMER7 base address */
#define TIMER8_BASE                    (0x2ACD2000U + MCU_OFFSET) /* TIMER8 base address */
#define TIMER9_BASE                    (0x2ACD3000U + MCU_OFFSET) /* TIMER9 base address */
#define TIMER10_BASE                   (0x2ACD4000U + MCU_OFFSET) /* TIMER10 base address */
#define TIMER11_BASE                   (0x2ACD5000U + MCU_OFFSET) /* TIMER11 base address */
#define UART0_BASE                     (0x2AD40000U + MCU_OFFSET) /* UART0 base address */
#define UART2_BASE                     (0x2AD50000U + MCU_OFFSET) /* UART2 base address */
#define UART3_BASE                     (0x2AD60000U + MCU_OFFSET) /* UART3 base address */
#define UART4_BASE                     (0x2AD70000U + MCU_OFFSET) /* UART4 base address */
#define UART5_BASE                     (0x2AD80000U + MCU_OFFSET) /* UART5 base address */
#define UART6_BASE                     (0x2AD90000U + MCU_OFFSET) /* UART6 base address */
#define UART7_BASE                     (0x2ADA0000U + MCU_OFFSET) /* UART7 base address */
#define UART8_BASE                     (0x2ADB0000U + MCU_OFFSET) /* UART8 base address */
#define UART9_BASE                     (0x2ADC0000U + MCU_OFFSET) /* UART9 base address */
#define GPIO1_BASE                     (0x2AE10000U + MCU_OFFSET) /* GPIO1 base address */
#define GPIO2_BASE                     (0x2AE20000U + MCU_OFFSET) /* GPIO2 base address */
#define GPIO3_BASE                     (0x2AE30000U + MCU_OFFSET) /* GPIO3 base address */
#define GPIO4_BASE                     (0x2AE40000U + MCU_OFFSET) /* GPIO4 base address */
#define INTMUX_BASE                    (0x2AEC0000U + MCU_OFFSET) /* INTMUX base address */
#define UART10_BASE                    (0x2AFC0000U + MCU_OFFSET) /* UART10 base address */
#define UART11_BASE                    (0x2AFD0000U + MCU_OFFSET) /* UART11 base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define GPIO0_IOC           ((struct GPIO0_IOC_REG *) GPIO0_IOC_BASE)
#define GPIO1_IOC           ((struct GPIO1_IOC_REG *) GPIO1_IOC_BASE)
#define GPIO2_IOC           ((struct GPIO2_IOC_REG *) GPIO2_IOC_BASE)
#define GPIO3_IOC           ((struct GPIO3_IOC_REG *) GPIO3_IOC_BASE)
#define GPIO4_IOC           ((struct GPIO4_IOC_REG *) GPIO4_IOC_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER0_BASE)
#define TIMER1              ((struct TIMER_REG *) TIMER1_BASE)
#define TIMER2              ((struct TIMER_REG *) TIMER2_BASE)
#define TIMER3              ((struct TIMER_REG *) TIMER3_BASE)
#define TIMER4              ((struct TIMER_REG *) TIMER4_BASE)
#define TIMER5              ((struct TIMER_REG *) TIMER5_BASE)
#define TIMER6              ((struct TIMER_REG *) TIMER6_BASE)
#define TIMER7              ((struct TIMER_REG *) TIMER7_BASE)
#define TIMER8              ((struct TIMER_REG *) TIMER8_BASE)
#define TIMER9              ((struct TIMER_REG *) TIMER9_BASE)
#define TIMER10             ((struct TIMER_REG *) TIMER10_BASE)
#define TIMER11             ((struct TIMER_REG *) TIMER11_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define UART3               ((struct UART_REG *) UART3_BASE)
#define UART4               ((struct UART_REG *) UART4_BASE)
#define UART5               ((struct UART_REG *) UART5_BASE)
#define UART6               ((struct UART_REG *) UART6_BASE)
#define UART7               ((struct UART_REG *) UART7_BASE)
#define UART8               ((struct UART_REG *) UART8_BASE)
#define UART9               ((struct UART_REG *) UART9_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define GPIO2               ((struct GPIO_REG *) GPIO2_BASE)
#define GPIO3               ((struct GPIO_REG *) GPIO3_BASE)
#define GPIO4               ((struct GPIO_REG *) GPIO4_BASE)
#define INTMUX              ((struct INTMUX_REG *) INTMUX_BASE)
#define UART10              ((struct UART_REG *) UART10_BASE)
#define UART11              ((struct UART_REG *) UART11_BASE)

#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_GPIO0_IOC_INSTANCE(instance) ((instance) == GPIO0_IOC)
#define IS_GPIO1_IOC_INSTANCE(instance) ((instance) == GPIO1_IOC)
#define IS_GPIO2_IOC_INSTANCE(instance) ((instance) == GPIO2_IOC)
#define IS_GPIO3_IOC_INSTANCE(instance) ((instance) == GPIO3_IOC)
#define IS_GPIO4_IOC_INSTANCE(instance) ((instance) == GPIO4_IOC)
#define IS_INTMUX_INSTANCE(instance) ((instance) == INTMUX)
#define IS_UART_INSTANCE(instance) (((instance) == UART1) || ((instance) == UART0) || ((instance) == UART2) || ((instance) == UART3) || ((instance) == UART4) || ((instance) == UART5) || ((instance) == UART6) || ((instance) == UART7) || ((instance) == UART8) || ((instance) == UART9) || ((instance) == UART10) || ((instance) == UART11))
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1) || ((instance) == GPIO2) || ((instance) == GPIO3) || ((instance) == GPIO4))
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1) || ((instance) == TIMER2) || ((instance) == TIMER3) || ((instance) == TIMER4) || ((instance) == TIMER5) || ((instance) == TIMER6) || ((instance) == TIMER7) || ((instance) == TIMER8) || ((instance) == TIMER9) || ((instance) == TIMER10) || ((instance) == TIMER11))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
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
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)  /* 0x07FFFFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0xFFFFFFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* RAM_DEBUG */
#define DCACHE_RAM_DEBUG_OFFSET                            (0x10U)
#define DCACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT                (0U)
#define DCACHE_RAM_DEBUG_RAM_DEBUG_EN_MASK                 (0x1U << DCACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT)                /* 0x00000001 */
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
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
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
#define DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_OFFSET                             (0xF0U)
#define DCACHE_REVISION                                    (0x100U)
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
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
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)  /* 0x07FFFFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0xFFFFFFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* RAM_DEBUG */
#define ICACHE_RAM_DEBUG_OFFSET                            (0x10U)
#define ICACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT                (0U)
#define ICACHE_RAM_DEBUG_RAM_DEBUG_EN_MASK                 (0x1U << ICACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT)                /* 0x00000001 */
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
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
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
#define ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_OFFSET                             (0xF0U)
#define ICACHE_REVISION                                    (0x100U)
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/***************************************GPIO0_IOC****************************************/
/* GPIO0A_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_OFFSET                (0x0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0A_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_OFFSET                (0x4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0B_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_OFFSET                (0x8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0B_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_OFFSET                (0x2000U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0C_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_OFFSET                (0x2004U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0C_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_OFFSET                (0x2008U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_OFFSET                (0x200CU)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_H_OFFSET                (0x2010U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_MASK      (0xFU << GPIO0_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT)     /* 0x000000F0 */
/* GPIO0A_DS_L */
#define GPIO0_IOC_GPIO0A_DS_L_OFFSET                       (0x10U)
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A0_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A0_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_L_GPIO0A0_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A1_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A1_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_L_GPIO0A1_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A2_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A2_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_L_GPIO0A2_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A3_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0A_DS_L_GPIO0A3_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_L_GPIO0A3_DS_SHIFT)             /* 0x00007000 */
/* GPIO0A_DS_H */
#define GPIO0_IOC_GPIO0A_DS_H_OFFSET                       (0x14U)
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A4_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A4_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_H_GPIO0A4_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A5_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A5_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_H_GPIO0A5_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A6_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A6_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_H_GPIO0A6_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A7_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0A_DS_H_GPIO0A7_DS_MASK              (0x7U << GPIO0_IOC_GPIO0A_DS_H_GPIO0A7_DS_SHIFT)             /* 0x00007000 */
/* GPIO0B_DS_L */
#define GPIO0_IOC_GPIO0B_DS_L_OFFSET                       (0x18U)
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B0_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B0_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_L_GPIO0B0_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B1_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B1_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_L_GPIO0B1_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B2_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B2_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_L_GPIO0B2_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B3_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0B_DS_L_GPIO0B3_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_L_GPIO0B3_DS_SHIFT)             /* 0x00007000 */
/* GPIO0B_DS_H */
#define GPIO0_IOC_GPIO0B_DS_H_OFFSET                       (0x2014U)
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B4_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B4_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_H_GPIO0B4_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B5_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B5_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_H_GPIO0B5_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B6_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B6_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_H_GPIO0B6_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B7_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0B_DS_H_GPIO0B7_DS_MASK              (0x7U << GPIO0_IOC_GPIO0B_DS_H_GPIO0B7_DS_SHIFT)             /* 0x00007000 */
/* GPIO0C_DS_L */
#define GPIO0_IOC_GPIO0C_DS_L_OFFSET                       (0x2018U)
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C0_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C0_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_L_GPIO0C0_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C1_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C1_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_L_GPIO0C1_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C2_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C2_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_L_GPIO0C2_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C3_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0C_DS_L_GPIO0C3_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_L_GPIO0C3_DS_SHIFT)             /* 0x00007000 */
/* GPIO0C_DS_H */
#define GPIO0_IOC_GPIO0C_DS_H_OFFSET                       (0x201CU)
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C4_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C4_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_H_GPIO0C4_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C5_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C5_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_H_GPIO0C5_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C6_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C6_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_H_GPIO0C6_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C7_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0C_DS_H_GPIO0C7_DS_MASK              (0x7U << GPIO0_IOC_GPIO0C_DS_H_GPIO0C7_DS_SHIFT)             /* 0x00007000 */
/* GPIO0D_DS_L */
#define GPIO0_IOC_GPIO0D_DS_L_OFFSET                       (0x2020U)
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D0_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D0_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_L_GPIO0D0_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D1_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D1_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_L_GPIO0D1_DS_SHIFT)             /* 0x00000070 */
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D2_DS_SHIFT             (8U)
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D2_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_L_GPIO0D2_DS_SHIFT)             /* 0x00000700 */
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D3_DS_SHIFT             (12U)
#define GPIO0_IOC_GPIO0D_DS_L_GPIO0D3_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_L_GPIO0D3_DS_SHIFT)             /* 0x00007000 */
/* GPIO0D_DS_H */
#define GPIO0_IOC_GPIO0D_DS_H_OFFSET                       (0x2024U)
#define GPIO0_IOC_GPIO0D_DS_H_GPIO0D4_DS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0D_DS_H_GPIO0D4_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_H_GPIO0D4_DS_SHIFT)             /* 0x00000007 */
#define GPIO0_IOC_GPIO0D_DS_H_GPIO0D5_DS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0D_DS_H_GPIO0D5_DS_MASK              (0x7U << GPIO0_IOC_GPIO0D_DS_H_GPIO0D5_DS_SHIFT)             /* 0x00000070 */
/* GPIO0A_PULL */
#define GPIO0_IOC_GPIO0A_PULL_OFFSET                       (0x20U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A0_PULL_SHIFT           (0U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A0_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A1_PULL_SHIFT           (2U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A1_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A2_PULL_SHIFT           (4U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A2_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A3_PULL_SHIFT           (6U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A3_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A4_PULL_SHIFT           (8U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A4_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A5_PULL_SHIFT           (10U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A5_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A6_PULL_SHIFT           (12U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A6_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A7_PULL_SHIFT           (14U)
#define GPIO0_IOC_GPIO0A_PULL_GPIO0A7_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0A_PULL_GPIO0A7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO0B_PULL_L */
#define GPIO0_IOC_GPIO0B_PULL_L_OFFSET                     (0x24U)
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B0_PULL_SHIFT         (0U)
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B0_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_L_GPIO0B0_PULL_SHIFT)         /* 0x00000003 */
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B1_PULL_SHIFT         (2U)
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B1_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_L_GPIO0B1_PULL_SHIFT)         /* 0x0000000C */
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B2_PULL_SHIFT         (4U)
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B2_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_L_GPIO0B2_PULL_SHIFT)         /* 0x00000030 */
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B3_PULL_SHIFT         (6U)
#define GPIO0_IOC_GPIO0B_PULL_L_GPIO0B3_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_L_GPIO0B3_PULL_SHIFT)         /* 0x000000C0 */
/* GPIO0B_PULL_H */
#define GPIO0_IOC_GPIO0B_PULL_H_OFFSET                     (0x2028U)
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B4_PULL_SHIFT         (8U)
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B4_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_H_GPIO0B4_PULL_SHIFT)         /* 0x00000300 */
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B5_PULL_SHIFT         (10U)
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B5_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_H_GPIO0B5_PULL_SHIFT)         /* 0x00000C00 */
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B6_PULL_SHIFT         (12U)
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B6_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_H_GPIO0B6_PULL_SHIFT)         /* 0x00003000 */
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B7_PULL_SHIFT         (14U)
#define GPIO0_IOC_GPIO0B_PULL_H_GPIO0B7_PULL_MASK          (0x3U << GPIO0_IOC_GPIO0B_PULL_H_GPIO0B7_PULL_SHIFT)         /* 0x0000C000 */
/* GPIO0C_PULL */
#define GPIO0_IOC_GPIO0C_PULL_OFFSET                       (0x202CU)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C0_PULL_SHIFT           (0U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C0_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C1_PULL_SHIFT           (2U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C1_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C2_PULL_SHIFT           (4U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C2_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C3_PULL_SHIFT           (6U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C3_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C4_PULL_SHIFT           (8U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C4_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C5_PULL_SHIFT           (10U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C5_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C6_PULL_SHIFT           (12U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C6_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C7_PULL_SHIFT           (14U)
#define GPIO0_IOC_GPIO0C_PULL_GPIO0C7_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0C_PULL_GPIO0C7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO0D_PULL */
#define GPIO0_IOC_GPIO0D_PULL_OFFSET                       (0x2030U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D0_PULL_SHIFT           (0U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D0_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D1_PULL_SHIFT           (2U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D1_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D2_PULL_SHIFT           (4U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D2_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D3_PULL_SHIFT           (6U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D3_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D4_PULL_SHIFT           (8U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D4_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D5_PULL_SHIFT           (10U)
#define GPIO0_IOC_GPIO0D_PULL_GPIO0D5_PULL_MASK            (0x3U << GPIO0_IOC_GPIO0D_PULL_GPIO0D5_PULL_SHIFT)           /* 0x00000C00 */
/* GPIO0A_IE */
#define GPIO0_IOC_GPIO0A_IE_OFFSET                         (0x28U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT               (1U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT               (3U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT               (5U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT               (7U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO0B_IE_L */
#define GPIO0_IOC_GPIO0B_IE_L_OFFSET                       (0x2CU)
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B0_IE_SHIFT             (0U)
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B0_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_L_GPIO0B0_IE_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B1_IE_SHIFT             (1U)
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B1_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_L_GPIO0B1_IE_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B2_IE_SHIFT             (2U)
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B2_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_L_GPIO0B2_IE_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B3_IE_SHIFT             (3U)
#define GPIO0_IOC_GPIO0B_IE_L_GPIO0B3_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_L_GPIO0B3_IE_SHIFT)             /* 0x00000008 */
/* GPIO0B_IE_H */
#define GPIO0_IOC_GPIO0B_IE_H_OFFSET                       (0x2034U)
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B4_IE_SHIFT             (4U)
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B4_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_H_GPIO0B4_IE_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B5_IE_SHIFT             (5U)
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B5_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_H_GPIO0B5_IE_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B6_IE_SHIFT             (6U)
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B6_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_H_GPIO0B6_IE_SHIFT)             /* 0x00000040 */
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B7_IE_SHIFT             (7U)
#define GPIO0_IOC_GPIO0B_IE_H_GPIO0B7_IE_MASK              (0x1U << GPIO0_IOC_GPIO0B_IE_H_GPIO0B7_IE_SHIFT)             /* 0x00000080 */
/* GPIO0C_IE */
#define GPIO0_IOC_GPIO0C_IE_OFFSET                         (0x2038U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT               (1U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT               (3U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT               (5U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT               (7U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_MASK                (0x1U << GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO0D_IE */
#define GPIO0_IOC_GPIO0D_IE_OFFSET                         (0x203CU)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT               (1U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D2_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D2_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D3_IE_SHIFT               (3U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D3_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D3_IE_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D4_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D4_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D4_IE_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D5_IE_SHIFT               (5U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D5_IE_MASK                (0x1U << GPIO0_IOC_GPIO0D_IE_GPIO0D5_IE_SHIFT)               /* 0x00000020 */
/* GPIO0A_SMT */
#define GPIO0_IOC_GPIO0A_SMT_OFFSET                        (0x30U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A0_SMT_SHIFT             (0U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A0_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A1_SMT_SHIFT             (1U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A1_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A2_SMT_SHIFT             (2U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A2_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A3_SMT_SHIFT             (3U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A3_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A4_SMT_SHIFT             (4U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A4_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A5_SMT_SHIFT             (5U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A5_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A6_SMT_SHIFT             (6U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A6_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A7_SMT_SHIFT             (7U)
#define GPIO0_IOC_GPIO0A_SMT_GPIO0A7_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0A_SMT_GPIO0A7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO0B_SMT_L */
#define GPIO0_IOC_GPIO0B_SMT_L_OFFSET                      (0x34U)
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B0_SMT_SHIFT           (0U)
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B0_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_L_GPIO0B0_SMT_SHIFT)           /* 0x00000001 */
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B1_SMT_SHIFT           (1U)
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B1_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_L_GPIO0B1_SMT_SHIFT)           /* 0x00000002 */
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B2_SMT_SHIFT           (2U)
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B2_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_L_GPIO0B2_SMT_SHIFT)           /* 0x00000004 */
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B3_SMT_SHIFT           (3U)
#define GPIO0_IOC_GPIO0B_SMT_L_GPIO0B3_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_L_GPIO0B3_SMT_SHIFT)           /* 0x00000008 */
/* GPIO0B_SMT_H */
#define GPIO0_IOC_GPIO0B_SMT_H_OFFSET                      (0x2040U)
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B4_SMT_SHIFT           (4U)
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B4_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_H_GPIO0B4_SMT_SHIFT)           /* 0x00000010 */
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B5_SMT_SHIFT           (5U)
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B5_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_H_GPIO0B5_SMT_SHIFT)           /* 0x00000020 */
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B6_SMT_SHIFT           (6U)
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B6_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_H_GPIO0B6_SMT_SHIFT)           /* 0x00000040 */
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B7_SMT_SHIFT           (7U)
#define GPIO0_IOC_GPIO0B_SMT_H_GPIO0B7_SMT_MASK            (0x1U << GPIO0_IOC_GPIO0B_SMT_H_GPIO0B7_SMT_SHIFT)           /* 0x00000080 */
/* GPIO0C_SMT */
#define GPIO0_IOC_GPIO0C_SMT_OFFSET                        (0x2044U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C0_SMT_SHIFT             (0U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C0_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C1_SMT_SHIFT             (1U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C1_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C2_SMT_SHIFT             (2U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C2_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C3_SMT_SHIFT             (3U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C3_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C4_SMT_SHIFT             (4U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C4_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C5_SMT_SHIFT             (5U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C5_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C6_SMT_SHIFT             (6U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C6_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C7_SMT_SHIFT             (7U)
#define GPIO0_IOC_GPIO0C_SMT_GPIO0C7_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0C_SMT_GPIO0C7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO0D_SMT */
#define GPIO0_IOC_GPIO0D_SMT_OFFSET                        (0x2048U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D0_SMT_SHIFT             (0U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D0_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D1_SMT_SHIFT             (1U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D1_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D2_SMT_SHIFT             (2U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D2_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D3_SMT_SHIFT             (3U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D3_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D4_SMT_SHIFT             (4U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D4_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D5_SMT_SHIFT             (5U)
#define GPIO0_IOC_GPIO0D_SMT_GPIO0D5_SMT_MASK              (0x1U << GPIO0_IOC_GPIO0D_SMT_GPIO0D5_SMT_SHIFT)             /* 0x00000020 */
/***************************************GPIO1_IOC****************************************/
/* GPIO1A_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_OFFSET                (0x4020U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1A_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_OFFSET                (0x4024U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1B_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_OFFSET                (0x4028U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1B_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_OFFSET                (0x402CU)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1C_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_OFFSET                (0x4030U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1C_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_OFFSET                (0x4034U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1D_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_OFFSET                (0x4038U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO1D_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_OFFSET                (0x403CU)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_MASK      (0xFU << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT)     /* 0x000000F0 */
/* GPIO1A_DS_L */
#define GPIO1_IOC_GPIO1A_DS_L_OFFSET                       (0x6020U)
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A0_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A0_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_L_GPIO1A0_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A1_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A1_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_L_GPIO1A1_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A2_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A2_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_L_GPIO1A2_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A3_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1A_DS_L_GPIO1A3_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_L_GPIO1A3_DS_SHIFT)             /* 0x00007000 */
/* GPIO1A_DS_H */
#define GPIO1_IOC_GPIO1A_DS_H_OFFSET                       (0x6024U)
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A4_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A4_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_H_GPIO1A4_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A5_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A5_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_H_GPIO1A5_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A6_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A6_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_H_GPIO1A6_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A7_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1A_DS_H_GPIO1A7_DS_MASK              (0x7U << GPIO1_IOC_GPIO1A_DS_H_GPIO1A7_DS_SHIFT)             /* 0x00007000 */
/* GPIO1B_DS_L */
#define GPIO1_IOC_GPIO1B_DS_L_OFFSET                       (0x6028U)
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B0_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B0_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_L_GPIO1B0_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B1_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B1_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_L_GPIO1B1_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B2_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B2_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_L_GPIO1B2_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B3_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1B_DS_L_GPIO1B3_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_L_GPIO1B3_DS_SHIFT)             /* 0x00007000 */
/* GPIO1B_DS_H */
#define GPIO1_IOC_GPIO1B_DS_H_OFFSET                       (0x602CU)
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B4_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B4_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_H_GPIO1B4_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B5_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B5_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_H_GPIO1B5_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B6_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B6_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_H_GPIO1B6_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B7_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1B_DS_H_GPIO1B7_DS_MASK              (0x7U << GPIO1_IOC_GPIO1B_DS_H_GPIO1B7_DS_SHIFT)             /* 0x00007000 */
/* GPIO1C_DS_L */
#define GPIO1_IOC_GPIO1C_DS_L_OFFSET                       (0x6030U)
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C0_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C0_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_L_GPIO1C0_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C1_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C1_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_L_GPIO1C1_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C2_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C2_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_L_GPIO1C2_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C3_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1C_DS_L_GPIO1C3_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_L_GPIO1C3_DS_SHIFT)             /* 0x00007000 */
/* GPIO1C_DS_H */
#define GPIO1_IOC_GPIO1C_DS_H_OFFSET                       (0x6034U)
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C4_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C4_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_H_GPIO1C4_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C5_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C5_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_H_GPIO1C5_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C6_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C6_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_H_GPIO1C6_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C7_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1C_DS_H_GPIO1C7_DS_MASK              (0x7U << GPIO1_IOC_GPIO1C_DS_H_GPIO1C7_DS_SHIFT)             /* 0x00007000 */
/* GPIO1D_DS_L */
#define GPIO1_IOC_GPIO1D_DS_L_OFFSET                       (0x6038U)
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D0_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D0_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_L_GPIO1D0_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D1_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D1_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_L_GPIO1D1_DS_SHIFT)             /* 0x00000070 */
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D2_DS_SHIFT             (8U)
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D2_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_L_GPIO1D2_DS_SHIFT)             /* 0x00000700 */
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D3_DS_SHIFT             (12U)
#define GPIO1_IOC_GPIO1D_DS_L_GPIO1D3_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_L_GPIO1D3_DS_SHIFT)             /* 0x00007000 */
/* GPIO1D_DS_H */
#define GPIO1_IOC_GPIO1D_DS_H_OFFSET                       (0x603CU)
#define GPIO1_IOC_GPIO1D_DS_H_GPIO1D4_DS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1D_DS_H_GPIO1D4_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_H_GPIO1D4_DS_SHIFT)             /* 0x00000007 */
#define GPIO1_IOC_GPIO1D_DS_H_GPIO1D5_DS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1D_DS_H_GPIO1D5_DS_MASK              (0x7U << GPIO1_IOC_GPIO1D_DS_H_GPIO1D5_DS_SHIFT)             /* 0x00000070 */
/* GPIO1A_PULL */
#define GPIO1_IOC_GPIO1A_PULL_OFFSET                       (0x6110U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A0_PULL_SHIFT           (0U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A0_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A1_PULL_SHIFT           (2U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A1_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A2_PULL_SHIFT           (4U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A2_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A3_PULL_SHIFT           (6U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A3_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A4_PULL_SHIFT           (8U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A4_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A5_PULL_SHIFT           (10U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A5_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A6_PULL_SHIFT           (12U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A6_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A7_PULL_SHIFT           (14U)
#define GPIO1_IOC_GPIO1A_PULL_GPIO1A7_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1A_PULL_GPIO1A7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO1B_PULL */
#define GPIO1_IOC_GPIO1B_PULL_OFFSET                       (0x6114U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B0_PULL_SHIFT           (0U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B0_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B1_PULL_SHIFT           (2U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B1_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B2_PULL_SHIFT           (4U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B2_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B3_PULL_SHIFT           (6U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B3_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B4_PULL_SHIFT           (8U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B4_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B5_PULL_SHIFT           (10U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B5_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B6_PULL_SHIFT           (12U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B6_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B7_PULL_SHIFT           (14U)
#define GPIO1_IOC_GPIO1B_PULL_GPIO1B7_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1B_PULL_GPIO1B7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO1C_PULL */
#define GPIO1_IOC_GPIO1C_PULL_OFFSET                       (0x6118U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C0_PULL_SHIFT           (0U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C0_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C1_PULL_SHIFT           (2U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C1_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C2_PULL_SHIFT           (4U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C2_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C3_PULL_SHIFT           (6U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C3_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C4_PULL_SHIFT           (8U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C4_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C5_PULL_SHIFT           (10U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C5_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C6_PULL_SHIFT           (12U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C6_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C7_PULL_SHIFT           (14U)
#define GPIO1_IOC_GPIO1C_PULL_GPIO1C7_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1C_PULL_GPIO1C7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO1D_PULL */
#define GPIO1_IOC_GPIO1D_PULL_OFFSET                       (0x611CU)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D0_PULL_SHIFT           (0U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D0_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D1_PULL_SHIFT           (2U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D1_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D2_PULL_SHIFT           (4U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D2_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D3_PULL_SHIFT           (6U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D3_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D4_PULL_SHIFT           (8U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D4_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D5_PULL_SHIFT           (10U)
#define GPIO1_IOC_GPIO1D_PULL_GPIO1D5_PULL_MASK            (0x3U << GPIO1_IOC_GPIO1D_PULL_GPIO1D5_PULL_SHIFT)           /* 0x00000C00 */
/* GPIO1A_IE */
#define GPIO1_IOC_GPIO1A_IE_OFFSET                         (0x6180U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_SHIFT               (5U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_SHIFT               (7U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO1B_IE */
#define GPIO1_IOC_GPIO1B_IE_OFFSET                         (0x6184U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_SHIFT               (5U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_SHIFT               (7U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_SHIFT)               /* 0x00000080 */
/* GPIO1C_IE */
#define GPIO1_IOC_GPIO1C_IE_OFFSET                         (0x6188U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT               (5U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT               (7U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO1D_IE */
#define GPIO1_IOC_GPIO1D_IE_OFFSET                         (0x618CU)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_SHIFT               (5U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_SHIFT)               /* 0x00000020 */
/* GPIO1A_SMT */
#define GPIO1_IOC_GPIO1A_SMT_OFFSET                        (0x6210U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A0_SMT_SHIFT             (0U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A0_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A1_SMT_SHIFT             (1U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A1_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A2_SMT_SHIFT             (2U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A2_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A3_SMT_SHIFT             (3U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A3_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A4_SMT_SHIFT             (4U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A4_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A5_SMT_SHIFT             (5U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A5_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A6_SMT_SHIFT             (6U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A6_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A7_SMT_SHIFT             (7U)
#define GPIO1_IOC_GPIO1A_SMT_GPIO1A7_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1A_SMT_GPIO1A7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO1B_SMT */
#define GPIO1_IOC_GPIO1B_SMT_OFFSET                        (0x6214U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B0_SMT_SHIFT             (0U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B0_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B1_SMT_SHIFT             (1U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B1_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B2_SMT_SHIFT             (2U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B2_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B3_SMT_SHIFT             (3U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B3_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B4_SMT_SHIFT             (4U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B4_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B5_SMT_SHIFT             (5U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B5_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B6_SMT_SHIFT             (6U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B6_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B7_SMT_SHIFT             (7U)
#define GPIO1_IOC_GPIO1B_SMT_GPIO1B7_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1B_SMT_GPIO1B7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO1C_SMT */
#define GPIO1_IOC_GPIO1C_SMT_OFFSET                        (0x6218U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C0_SMT_SHIFT             (0U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C0_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C1_SMT_SHIFT             (1U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C1_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C2_SMT_SHIFT             (2U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C2_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C3_SMT_SHIFT             (3U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C3_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C4_SMT_SHIFT             (4U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C4_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C5_SMT_SHIFT             (5U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C5_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C6_SMT_SHIFT             (6U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C6_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C7_SMT_SHIFT             (7U)
#define GPIO1_IOC_GPIO1C_SMT_GPIO1C7_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1C_SMT_GPIO1C7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO1D_SMT */
#define GPIO1_IOC_GPIO1D_SMT_OFFSET                        (0x621CU)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D0_SMT_SHIFT             (0U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D0_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D1_SMT_SHIFT             (1U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D1_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D2_SMT_SHIFT             (2U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D2_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D3_SMT_SHIFT             (3U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D3_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D4_SMT_SHIFT             (4U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D4_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D5_SMT_SHIFT             (5U)
#define GPIO1_IOC_GPIO1D_SMT_GPIO1D5_SMT_MASK              (0x1U << GPIO1_IOC_GPIO1D_SMT_GPIO1D5_SMT_SHIFT)             /* 0x00000020 */
/***************************************GPIO2_IOC****************************************/
/* GPIO2A_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_OFFSET                (0x4040U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2A_IOMUX_SEL_H */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_OFFSET                (0x4044U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2B_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_OFFSET                (0x4048U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2B_IOMUX_SEL_H */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_OFFSET                (0x404CU)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2C_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_OFFSET                (0x4050U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2C_IOMUX_SEL_H */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_OFFSET                (0x4054U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C6_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C6_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C7_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C7_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2D_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_OFFSET                (0x4058U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2D_IOMUX_SEL_H */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_OFFSET                (0x405CU)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_MASK      (0xFU << GPIO2_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO2A_DS_L */
#define GPIO2_IOC_GPIO2A_DS_L_OFFSET                       (0x6040U)
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A0_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A0_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_L_GPIO2A0_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A1_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A1_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_L_GPIO2A1_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A2_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A2_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_L_GPIO2A2_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A3_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2A_DS_L_GPIO2A3_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_L_GPIO2A3_DS_SHIFT)             /* 0x00007000 */
/* GPIO2A_DS_H */
#define GPIO2_IOC_GPIO2A_DS_H_OFFSET                       (0x6044U)
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A4_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A4_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_H_GPIO2A4_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A5_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A5_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_H_GPIO2A5_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A6_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A6_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_H_GPIO2A6_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A7_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2A_DS_H_GPIO2A7_DS_MASK              (0x7U << GPIO2_IOC_GPIO2A_DS_H_GPIO2A7_DS_SHIFT)             /* 0x00007000 */
/* GPIO2B_DS_L */
#define GPIO2_IOC_GPIO2B_DS_L_OFFSET                       (0x6048U)
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B0_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B0_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_L_GPIO2B0_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B1_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B1_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_L_GPIO2B1_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B2_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B2_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_L_GPIO2B2_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B3_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2B_DS_L_GPIO2B3_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_L_GPIO2B3_DS_SHIFT)             /* 0x00007000 */
/* GPIO2B_DS_H */
#define GPIO2_IOC_GPIO2B_DS_H_OFFSET                       (0x604CU)
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B4_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B4_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_H_GPIO2B4_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B5_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B5_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_H_GPIO2B5_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B6_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B6_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_H_GPIO2B6_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B7_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2B_DS_H_GPIO2B7_DS_MASK              (0x7U << GPIO2_IOC_GPIO2B_DS_H_GPIO2B7_DS_SHIFT)             /* 0x00007000 */
/* GPIO2C_DS_L */
#define GPIO2_IOC_GPIO2C_DS_L_OFFSET                       (0x6050U)
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C0_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C0_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_L_GPIO2C0_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C1_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C1_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_L_GPIO2C1_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C2_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C2_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_L_GPIO2C2_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C3_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2C_DS_L_GPIO2C3_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_L_GPIO2C3_DS_SHIFT)             /* 0x00007000 */
/* GPIO2C_DS_H */
#define GPIO2_IOC_GPIO2C_DS_H_OFFSET                       (0x6054U)
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C4_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C4_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_H_GPIO2C4_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C5_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C5_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_H_GPIO2C5_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C6_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C6_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_H_GPIO2C6_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C7_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2C_DS_H_GPIO2C7_DS_MASK              (0x7U << GPIO2_IOC_GPIO2C_DS_H_GPIO2C7_DS_SHIFT)             /* 0x00007000 */
/* GPIO2D_DS_L */
#define GPIO2_IOC_GPIO2D_DS_L_OFFSET                       (0x6058U)
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D0_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D0_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_L_GPIO2D0_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D1_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D1_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_L_GPIO2D1_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D2_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D2_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_L_GPIO2D2_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D3_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2D_DS_L_GPIO2D3_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_L_GPIO2D3_DS_SHIFT)             /* 0x00007000 */
/* GPIO2D_DS_H */
#define GPIO2_IOC_GPIO2D_DS_H_OFFSET                       (0x605CU)
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D4_DS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D4_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_H_GPIO2D4_DS_SHIFT)             /* 0x00000007 */
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D5_DS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D5_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_H_GPIO2D5_DS_SHIFT)             /* 0x00000070 */
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D6_DS_SHIFT             (8U)
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D6_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_H_GPIO2D6_DS_SHIFT)             /* 0x00000700 */
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D7_DS_SHIFT             (12U)
#define GPIO2_IOC_GPIO2D_DS_H_GPIO2D7_DS_MASK              (0x7U << GPIO2_IOC_GPIO2D_DS_H_GPIO2D7_DS_SHIFT)             /* 0x00007000 */
/* GPIO2A_PULL */
#define GPIO2_IOC_GPIO2A_PULL_OFFSET                       (0x6120U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A0_PULL_SHIFT           (0U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A0_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A1_PULL_SHIFT           (2U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A1_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A2_PULL_SHIFT           (4U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A2_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A3_PULL_SHIFT           (6U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A3_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A4_PULL_SHIFT           (8U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A4_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A5_PULL_SHIFT           (10U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A5_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A6_PULL_SHIFT           (12U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A6_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A7_PULL_SHIFT           (14U)
#define GPIO2_IOC_GPIO2A_PULL_GPIO2A7_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2A_PULL_GPIO2A7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO2B_PULL */
#define GPIO2_IOC_GPIO2B_PULL_OFFSET                       (0x6124U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B0_PULL_SHIFT           (0U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B0_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B1_PULL_SHIFT           (2U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B1_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B2_PULL_SHIFT           (4U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B2_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B3_PULL_SHIFT           (6U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B3_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B4_PULL_SHIFT           (8U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B4_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B5_PULL_SHIFT           (10U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B5_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B6_PULL_SHIFT           (12U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B6_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B7_PULL_SHIFT           (14U)
#define GPIO2_IOC_GPIO2B_PULL_GPIO2B7_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2B_PULL_GPIO2B7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO2C_PULL */
#define GPIO2_IOC_GPIO2C_PULL_OFFSET                       (0x6128U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C0_PULL_SHIFT           (0U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C0_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C1_PULL_SHIFT           (2U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C1_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C2_PULL_SHIFT           (4U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C2_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C3_PULL_SHIFT           (6U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C3_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C4_PULL_SHIFT           (8U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C4_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C5_PULL_SHIFT           (10U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C5_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C6_PULL_SHIFT           (12U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C6_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C7_PULL_SHIFT           (14U)
#define GPIO2_IOC_GPIO2C_PULL_GPIO2C7_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2C_PULL_GPIO2C7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO2D_PULL */
#define GPIO2_IOC_GPIO2D_PULL_OFFSET                       (0x612CU)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D0_PULL_SHIFT           (0U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D0_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D1_PULL_SHIFT           (2U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D1_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D2_PULL_SHIFT           (4U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D2_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D3_PULL_SHIFT           (6U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D3_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D4_PULL_SHIFT           (8U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D4_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D5_PULL_SHIFT           (10U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D5_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D6_PULL_SHIFT           (12U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D6_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D7_PULL_SHIFT           (14U)
#define GPIO2_IOC_GPIO2D_PULL_GPIO2D7_PULL_MASK            (0x3U << GPIO2_IOC_GPIO2D_PULL_GPIO2D7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO2A_IE */
#define GPIO2_IOC_GPIO2A_IE_OFFSET                         (0x6190U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_SHIFT               (3U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_SHIFT               (4U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_SHIFT               (5U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_SHIFT               (6U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_SHIFT               (7U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO2B_IE */
#define GPIO2_IOC_GPIO2B_IE_OFFSET                         (0x6194U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B2_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B2_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B2_IE_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B3_IE_SHIFT               (3U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B3_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B3_IE_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B4_IE_SHIFT               (4U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B4_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B4_IE_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B5_IE_SHIFT               (5U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B5_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B5_IE_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B6_IE_SHIFT               (6U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B6_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B6_IE_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B7_IE_SHIFT               (7U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B7_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B7_IE_SHIFT)               /* 0x00000080 */
/* GPIO2C_IE */
#define GPIO2_IOC_GPIO2C_IE_OFFSET                         (0x6198U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C2_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C2_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C3_IE_SHIFT               (3U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C3_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C4_IE_SHIFT               (4U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C4_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C5_IE_SHIFT               (5U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C5_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C6_IE_SHIFT               (6U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C6_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2C_IE_GPIO2C7_IE_SHIFT               (7U)
#define GPIO2_IOC_GPIO2C_IE_GPIO2C7_IE_MASK                (0x1U << GPIO2_IOC_GPIO2C_IE_GPIO2C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO2D_IE */
#define GPIO2_IOC_GPIO2D_IE_OFFSET                         (0x619CU)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D2_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D2_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D3_IE_SHIFT               (3U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D3_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D3_IE_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D4_IE_SHIFT               (4U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D4_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D4_IE_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D5_IE_SHIFT               (5U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D5_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D5_IE_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D6_IE_SHIFT               (6U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D6_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D6_IE_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2D_IE_GPIO2D7_IE_SHIFT               (7U)
#define GPIO2_IOC_GPIO2D_IE_GPIO2D7_IE_MASK                (0x1U << GPIO2_IOC_GPIO2D_IE_GPIO2D7_IE_SHIFT)               /* 0x00000080 */
/* GPIO2A_SMT */
#define GPIO2_IOC_GPIO2A_SMT_OFFSET                        (0x6220U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A0_SMT_SHIFT             (0U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A0_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A1_SMT_SHIFT             (1U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A1_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A2_SMT_SHIFT             (2U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A2_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A3_SMT_SHIFT             (3U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A3_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A4_SMT_SHIFT             (4U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A4_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A5_SMT_SHIFT             (5U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A5_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A6_SMT_SHIFT             (6U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A6_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A7_SMT_SHIFT             (7U)
#define GPIO2_IOC_GPIO2A_SMT_GPIO2A7_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2A_SMT_GPIO2A7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO2B_SMT */
#define GPIO2_IOC_GPIO2B_SMT_OFFSET                        (0x6224U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B0_SMT_SHIFT             (0U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B0_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B1_SMT_SHIFT             (1U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B1_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B2_SMT_SHIFT             (2U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B2_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B3_SMT_SHIFT             (3U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B3_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B4_SMT_SHIFT             (4U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B4_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B5_SMT_SHIFT             (5U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B5_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B6_SMT_SHIFT             (6U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B6_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B7_SMT_SHIFT             (7U)
#define GPIO2_IOC_GPIO2B_SMT_GPIO2B7_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2B_SMT_GPIO2B7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO2C_SMT */
#define GPIO2_IOC_GPIO2C_SMT_OFFSET                        (0x6228U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C0_SMT_SHIFT             (0U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C0_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C1_SMT_SHIFT             (1U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C1_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C2_SMT_SHIFT             (2U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C2_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C3_SMT_SHIFT             (3U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C3_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C4_SMT_SHIFT             (4U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C4_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C5_SMT_SHIFT             (5U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C5_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C6_SMT_SHIFT             (6U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C6_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C7_SMT_SHIFT             (7U)
#define GPIO2_IOC_GPIO2C_SMT_GPIO2C7_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2C_SMT_GPIO2C7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO2D_SMT */
#define GPIO2_IOC_GPIO2D_SMT_OFFSET                        (0x622CU)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D0_SMT_SHIFT             (0U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D0_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D1_SMT_SHIFT             (1U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D1_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D2_SMT_SHIFT             (2U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D2_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D3_SMT_SHIFT             (3U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D3_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D4_SMT_SHIFT             (4U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D4_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D5_SMT_SHIFT             (5U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D5_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D6_SMT_SHIFT             (6U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D6_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D7_SMT_SHIFT             (7U)
#define GPIO2_IOC_GPIO2D_SMT_GPIO2D7_SMT_MASK              (0x1U << GPIO2_IOC_GPIO2D_SMT_GPIO2D7_SMT_SHIFT)             /* 0x00000080 */
/***************************************GPIO3_IOC****************************************/
/* GPIO3A_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_OFFSET                (0x4060U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3A_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_OFFSET                (0x4064U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3B_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_OFFSET                (0x4068U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3B_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_OFFSET                (0x406CU)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3C_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_OFFSET                (0x4070U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3C_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_OFFSET                (0x4074U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3D_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_OFFSET                (0x4078U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3D_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_OFFSET                (0x407CU)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_MASK      (0xFU << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO3A_DS_L */
#define GPIO3_IOC_GPIO3A_DS_L_OFFSET                       (0x6060U)
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A0_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A0_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_L_GPIO3A0_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A1_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A1_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_L_GPIO3A1_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A2_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A2_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_L_GPIO3A2_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A3_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3A_DS_L_GPIO3A3_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_L_GPIO3A3_DS_SHIFT)             /* 0x00007000 */
/* GPIO3A_DS_H */
#define GPIO3_IOC_GPIO3A_DS_H_OFFSET                       (0x6064U)
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A4_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A4_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_H_GPIO3A4_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A5_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A5_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_H_GPIO3A5_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A6_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A6_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_H_GPIO3A6_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A7_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3A_DS_H_GPIO3A7_DS_MASK              (0x7U << GPIO3_IOC_GPIO3A_DS_H_GPIO3A7_DS_SHIFT)             /* 0x00007000 */
/* GPIO3B_DS_L */
#define GPIO3_IOC_GPIO3B_DS_L_OFFSET                       (0x6068U)
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B0_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B0_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_L_GPIO3B0_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B1_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B1_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_L_GPIO3B1_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B2_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B2_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_L_GPIO3B2_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B3_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3B_DS_L_GPIO3B3_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_L_GPIO3B3_DS_SHIFT)             /* 0x00007000 */
/* GPIO3B_DS_H */
#define GPIO3_IOC_GPIO3B_DS_H_OFFSET                       (0x606CU)
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B4_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B4_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_H_GPIO3B4_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B5_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B5_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_H_GPIO3B5_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B6_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B6_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_H_GPIO3B6_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B7_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3B_DS_H_GPIO3B7_DS_MASK              (0x7U << GPIO3_IOC_GPIO3B_DS_H_GPIO3B7_DS_SHIFT)             /* 0x00007000 */
/* GPIO3C_DS_L */
#define GPIO3_IOC_GPIO3C_DS_L_OFFSET                       (0x6070U)
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C0_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C0_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_L_GPIO3C0_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C1_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C1_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_L_GPIO3C1_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C2_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C2_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_L_GPIO3C2_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C3_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3C_DS_L_GPIO3C3_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_L_GPIO3C3_DS_SHIFT)             /* 0x00007000 */
/* GPIO3C_DS_H */
#define GPIO3_IOC_GPIO3C_DS_H_OFFSET                       (0x6074U)
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C4_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C4_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_H_GPIO3C4_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C5_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C5_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_H_GPIO3C5_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C6_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C6_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_H_GPIO3C6_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C7_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3C_DS_H_GPIO3C7_DS_MASK              (0x7U << GPIO3_IOC_GPIO3C_DS_H_GPIO3C7_DS_SHIFT)             /* 0x00007000 */
/* GPIO3D_DS_L */
#define GPIO3_IOC_GPIO3D_DS_L_OFFSET                       (0x6078U)
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D0_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D0_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_L_GPIO3D0_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D1_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D1_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_L_GPIO3D1_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D2_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D2_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_L_GPIO3D2_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D3_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3D_DS_L_GPIO3D3_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_L_GPIO3D3_DS_SHIFT)             /* 0x00007000 */
/* GPIO3D_DS_H */
#define GPIO3_IOC_GPIO3D_DS_H_OFFSET                       (0x607CU)
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D4_DS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D4_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_H_GPIO3D4_DS_SHIFT)             /* 0x00000007 */
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D5_DS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D5_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_H_GPIO3D5_DS_SHIFT)             /* 0x00000070 */
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D6_DS_SHIFT             (8U)
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D6_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_H_GPIO3D6_DS_SHIFT)             /* 0x00000700 */
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D7_DS_SHIFT             (12U)
#define GPIO3_IOC_GPIO3D_DS_H_GPIO3D7_DS_MASK              (0x7U << GPIO3_IOC_GPIO3D_DS_H_GPIO3D7_DS_SHIFT)             /* 0x00007000 */
/* GPIO3A_PULL */
#define GPIO3_IOC_GPIO3A_PULL_OFFSET                       (0x6130U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A0_PULL_SHIFT           (0U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A0_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A1_PULL_SHIFT           (2U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A1_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A2_PULL_SHIFT           (4U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A2_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A3_PULL_SHIFT           (6U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A3_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A4_PULL_SHIFT           (8U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A4_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A5_PULL_SHIFT           (10U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A5_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A6_PULL_SHIFT           (12U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A6_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A7_PULL_SHIFT           (14U)
#define GPIO3_IOC_GPIO3A_PULL_GPIO3A7_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3A_PULL_GPIO3A7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO3B_PULL */
#define GPIO3_IOC_GPIO3B_PULL_OFFSET                       (0x6134U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B0_PULL_SHIFT           (0U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B0_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B1_PULL_SHIFT           (2U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B1_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B2_PULL_SHIFT           (4U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B2_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B3_PULL_SHIFT           (6U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B3_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B4_PULL_SHIFT           (8U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B4_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B5_PULL_SHIFT           (10U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B5_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B6_PULL_SHIFT           (12U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B6_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B7_PULL_SHIFT           (14U)
#define GPIO3_IOC_GPIO3B_PULL_GPIO3B7_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3B_PULL_GPIO3B7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO3C_PULL */
#define GPIO3_IOC_GPIO3C_PULL_OFFSET                       (0x6138U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C0_PULL_SHIFT           (0U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C0_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C1_PULL_SHIFT           (2U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C1_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C2_PULL_SHIFT           (4U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C2_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C3_PULL_SHIFT           (6U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C3_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C4_PULL_SHIFT           (8U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C4_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C5_PULL_SHIFT           (10U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C5_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C6_PULL_SHIFT           (12U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C6_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C7_PULL_SHIFT           (14U)
#define GPIO3_IOC_GPIO3C_PULL_GPIO3C7_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3C_PULL_GPIO3C7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO3D_PULL */
#define GPIO3_IOC_GPIO3D_PULL_OFFSET                       (0x613CU)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D0_PULL_SHIFT           (0U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D0_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D1_PULL_SHIFT           (2U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D1_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D2_PULL_SHIFT           (4U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D2_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D3_PULL_SHIFT           (6U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D3_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D4_PULL_SHIFT           (8U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D4_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D5_PULL_SHIFT           (10U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D5_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D6_PULL_SHIFT           (12U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D6_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D7_PULL_SHIFT           (14U)
#define GPIO3_IOC_GPIO3D_PULL_GPIO3D7_PULL_MASK            (0x3U << GPIO3_IOC_GPIO3D_PULL_GPIO3D7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO3A_IE */
#define GPIO3_IOC_GPIO3A_IE_OFFSET                         (0x61A0U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3B_IE */
#define GPIO3_IOC_GPIO3B_IE_OFFSET                         (0x61A4U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3C_IE */
#define GPIO3_IOC_GPIO3C_IE_OFFSET                         (0x61A8U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3D_IE */
#define GPIO3_IOC_GPIO3D_IE_OFFSET                         (0x61ACU)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3A_SMT */
#define GPIO3_IOC_GPIO3A_SMT_OFFSET                        (0x6230U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A0_SMT_SHIFT             (0U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A0_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A1_SMT_SHIFT             (1U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A1_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A2_SMT_SHIFT             (2U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A2_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A3_SMT_SHIFT             (3U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A3_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A4_SMT_SHIFT             (4U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A4_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A5_SMT_SHIFT             (5U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A5_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A6_SMT_SHIFT             (6U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A6_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A7_SMT_SHIFT             (7U)
#define GPIO3_IOC_GPIO3A_SMT_GPIO3A7_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3A_SMT_GPIO3A7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO3B_SMT */
#define GPIO3_IOC_GPIO3B_SMT_OFFSET                        (0x6234U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B0_SMT_SHIFT             (0U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B0_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B1_SMT_SHIFT             (1U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B1_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B2_SMT_SHIFT             (2U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B2_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B3_SMT_SHIFT             (3U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B3_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B4_SMT_SHIFT             (4U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B4_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B5_SMT_SHIFT             (5U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B5_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B6_SMT_SHIFT             (6U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B6_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B7_SMT_SHIFT             (7U)
#define GPIO3_IOC_GPIO3B_SMT_GPIO3B7_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3B_SMT_GPIO3B7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO3C_SMT */
#define GPIO3_IOC_GPIO3C_SMT_OFFSET                        (0x6238U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C0_SMT_SHIFT             (0U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C0_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C1_SMT_SHIFT             (1U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C1_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C2_SMT_SHIFT             (2U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C2_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C3_SMT_SHIFT             (3U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C3_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C4_SMT_SHIFT             (4U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C4_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C5_SMT_SHIFT             (5U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C5_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C6_SMT_SHIFT             (6U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C6_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C7_SMT_SHIFT             (7U)
#define GPIO3_IOC_GPIO3C_SMT_GPIO3C7_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3C_SMT_GPIO3C7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO3D_SMT */
#define GPIO3_IOC_GPIO3D_SMT_OFFSET                        (0x623CU)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D0_SMT_SHIFT             (0U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D0_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D1_SMT_SHIFT             (1U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D1_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D2_SMT_SHIFT             (2U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D2_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D3_SMT_SHIFT             (3U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D3_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D4_SMT_SHIFT             (4U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D4_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D5_SMT_SHIFT             (5U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D5_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D6_SMT_SHIFT             (6U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D6_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D7_SMT_SHIFT             (7U)
#define GPIO3_IOC_GPIO3D_SMT_GPIO3D7_SMT_MASK              (0x1U << GPIO3_IOC_GPIO3D_SMT_GPIO3D7_SMT_SHIFT)             /* 0x00000080 */
/***************************************GPIO4_IOC****************************************/
/* GPIO4A_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_OFFSET                (0x4080U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO4A_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_OFFSET                (0x4084U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO4B_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_OFFSET                (0x4088U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO4B_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_OFFSET                (0x408CU)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT)     /* 0x000000F0 */
/* GPIO4C_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_OFFSET                (0xA390U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO4C_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_OFFSET                (0xA394U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_SHIFT)     /* 0x000000F0 */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_SHIFT)     /* 0x00000F00 */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C7_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C7_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C7_SEL_SHIFT)     /* 0x0000F000 */
/* GPIO4D_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_OFFSET                (0xA398U)
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_SHIFT)     /* 0x0000000F */
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_MASK      (0xFU << GPIO4_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_SHIFT)     /* 0x000000F0 */
/* GPIO4A_DS_L */
#define GPIO4_IOC_GPIO4A_DS_L_OFFSET                       (0x6080U)
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A0_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A0_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_L_GPIO4A0_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A1_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A1_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_L_GPIO4A1_DS_SHIFT)             /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A2_DS_SHIFT             (8U)
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A2_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_L_GPIO4A2_DS_SHIFT)             /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A3_DS_SHIFT             (12U)
#define GPIO4_IOC_GPIO4A_DS_L_GPIO4A3_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_L_GPIO4A3_DS_SHIFT)             /* 0x00007000 */
/* GPIO4A_DS_H */
#define GPIO4_IOC_GPIO4A_DS_H_OFFSET                       (0x6084U)
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A4_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A4_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_H_GPIO4A4_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A5_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A5_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_H_GPIO4A5_DS_SHIFT)             /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A6_DS_SHIFT             (8U)
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A6_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_H_GPIO4A6_DS_SHIFT)             /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A7_DS_SHIFT             (12U)
#define GPIO4_IOC_GPIO4A_DS_H_GPIO4A7_DS_MASK              (0x7U << GPIO4_IOC_GPIO4A_DS_H_GPIO4A7_DS_SHIFT)             /* 0x00007000 */
/* GPIO4B_DS_L */
#define GPIO4_IOC_GPIO4B_DS_L_OFFSET                       (0x6088U)
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B0_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B0_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_L_GPIO4B0_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B1_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B1_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_L_GPIO4B1_DS_SHIFT)             /* 0x00000070 */
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B2_DS_SHIFT             (8U)
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B2_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_L_GPIO4B2_DS_SHIFT)             /* 0x00000700 */
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B3_DS_SHIFT             (12U)
#define GPIO4_IOC_GPIO4B_DS_L_GPIO4B3_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_L_GPIO4B3_DS_SHIFT)             /* 0x00007000 */
/* GPIO4B_DS_H */
#define GPIO4_IOC_GPIO4B_DS_H_OFFSET                       (0x608CU)
#define GPIO4_IOC_GPIO4B_DS_H_GPIO4B4_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4B_DS_H_GPIO4B4_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_H_GPIO4B4_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4B_DS_H_GPIO4B5_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4B_DS_H_GPIO4B5_DS_MASK              (0x7U << GPIO4_IOC_GPIO4B_DS_H_GPIO4B5_DS_SHIFT)             /* 0x00000070 */
/* GPIO4C_DS_L */
#define GPIO4_IOC_GPIO4C_DS_L_OFFSET                       (0xA090U)
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C0_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C0_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_L_GPIO4C0_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C1_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C1_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_L_GPIO4C1_DS_SHIFT)             /* 0x00000070 */
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C2_DS_SHIFT             (8U)
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C2_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_L_GPIO4C2_DS_SHIFT)             /* 0x00000700 */
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C3_DS_SHIFT             (12U)
#define GPIO4_IOC_GPIO4C_DS_L_GPIO4C3_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_L_GPIO4C3_DS_SHIFT)             /* 0x00007000 */
/* GPIO4C_DS_H */
#define GPIO4_IOC_GPIO4C_DS_H_OFFSET                       (0xA094U)
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C4_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C4_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_H_GPIO4C4_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C5_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C5_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_H_GPIO4C5_DS_SHIFT)             /* 0x00000070 */
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C6_DS_SHIFT             (8U)
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C6_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_H_GPIO4C6_DS_SHIFT)             /* 0x00000700 */
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C7_DS_SHIFT             (12U)
#define GPIO4_IOC_GPIO4C_DS_H_GPIO4C7_DS_MASK              (0x7U << GPIO4_IOC_GPIO4C_DS_H_GPIO4C7_DS_SHIFT)             /* 0x00007000 */
/* GPIO4D_DS_L */
#define GPIO4_IOC_GPIO4D_DS_L_OFFSET                       (0xA098U)
#define GPIO4_IOC_GPIO4D_DS_L_GPIO4D0_DS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4D_DS_L_GPIO4D0_DS_MASK              (0x7U << GPIO4_IOC_GPIO4D_DS_L_GPIO4D0_DS_SHIFT)             /* 0x00000007 */
#define GPIO4_IOC_GPIO4D_DS_L_GPIO4D1_DS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4D_DS_L_GPIO4D1_DS_MASK              (0x7U << GPIO4_IOC_GPIO4D_DS_L_GPIO4D1_DS_SHIFT)             /* 0x00000070 */
/* GPIO4A_PULL */
#define GPIO4_IOC_GPIO4A_PULL_OFFSET                       (0x6140U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A0_PULL_SHIFT           (0U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A0_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A1_PULL_SHIFT           (2U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A1_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A2_PULL_SHIFT           (4U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A2_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A3_PULL_SHIFT           (6U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A3_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A4_PULL_SHIFT           (8U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A4_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A5_PULL_SHIFT           (10U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A5_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A6_PULL_SHIFT           (12U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A6_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A7_PULL_SHIFT           (14U)
#define GPIO4_IOC_GPIO4A_PULL_GPIO4A7_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4A_PULL_GPIO4A7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO4B_PULL */
#define GPIO4_IOC_GPIO4B_PULL_OFFSET                       (0x6144U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B0_PULL_SHIFT           (0U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B0_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B1_PULL_SHIFT           (2U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B1_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B2_PULL_SHIFT           (4U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B2_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B3_PULL_SHIFT           (6U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B3_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B4_PULL_SHIFT           (8U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B4_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B5_PULL_SHIFT           (10U)
#define GPIO4_IOC_GPIO4B_PULL_GPIO4B5_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4B_PULL_GPIO4B5_PULL_SHIFT)           /* 0x00000C00 */
/* GPIO4C_PULL */
#define GPIO4_IOC_GPIO4C_PULL_OFFSET                       (0xA148U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C0_PULL_SHIFT           (0U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C0_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C1_PULL_SHIFT           (2U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C1_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C1_PULL_SHIFT)           /* 0x0000000C */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C2_PULL_SHIFT           (4U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C2_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C2_PULL_SHIFT)           /* 0x00000030 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C3_PULL_SHIFT           (6U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C3_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C3_PULL_SHIFT)           /* 0x000000C0 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C4_PULL_SHIFT           (8U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C4_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C4_PULL_SHIFT)           /* 0x00000300 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C5_PULL_SHIFT           (10U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C5_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C5_PULL_SHIFT)           /* 0x00000C00 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C6_PULL_SHIFT           (12U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C6_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C6_PULL_SHIFT)           /* 0x00003000 */
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C7_PULL_SHIFT           (14U)
#define GPIO4_IOC_GPIO4C_PULL_GPIO4C7_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4C_PULL_GPIO4C7_PULL_SHIFT)           /* 0x0000C000 */
/* GPIO4D_PULL */
#define GPIO4_IOC_GPIO4D_PULL_OFFSET                       (0xA14CU)
#define GPIO4_IOC_GPIO4D_PULL_GPIO4D0_PULL_SHIFT           (0U)
#define GPIO4_IOC_GPIO4D_PULL_GPIO4D0_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4D_PULL_GPIO4D0_PULL_SHIFT)           /* 0x00000003 */
#define GPIO4_IOC_GPIO4D_PULL_GPIO4D1_PULL_SHIFT           (2U)
#define GPIO4_IOC_GPIO4D_PULL_GPIO4D1_PULL_MASK            (0x3U << GPIO4_IOC_GPIO4D_PULL_GPIO4D1_PULL_SHIFT)           /* 0x0000000C */
/* GPIO4A_IE */
#define GPIO4_IOC_GPIO4A_IE_OFFSET                         (0x61B0U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT               (3U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT               (5U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT               (6U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT               (7U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO4B_IE */
#define GPIO4_IOC_GPIO4B_IE_OFFSET                         (0x61B4U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_SHIFT               (3U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_SHIFT               (5U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_SHIFT)               /* 0x00000020 */
/* GPIO4C_IE */
#define GPIO4_IOC_GPIO4C_IE_OFFSET                         (0xA1B8U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C2_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C2_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C3_IE_SHIFT               (3U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C3_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C4_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C4_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C5_IE_SHIFT               (5U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C5_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C6_IE_SHIFT               (6U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C6_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_GPIO4C_IE_GPIO4C7_IE_SHIFT               (7U)
#define GPIO4_IOC_GPIO4C_IE_GPIO4C7_IE_MASK                (0x1U << GPIO4_IOC_GPIO4C_IE_GPIO4C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO4D_IE */
#define GPIO4_IOC_GPIO4D_IE_OFFSET                         (0xA1BCU)
#define GPIO4_IOC_GPIO4D_IE_GPIO4D0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4D_IE_GPIO4D0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4D_IE_GPIO4D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4D_IE_GPIO4D1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4D_IE_GPIO4D1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4D_IE_GPIO4D1_IE_SHIFT)               /* 0x00000002 */
/* GPIO4A_SMT */
#define GPIO4_IOC_GPIO4A_SMT_OFFSET                        (0x6240U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A0_SMT_SHIFT             (0U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A0_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A1_SMT_SHIFT             (1U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A1_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A2_SMT_SHIFT             (2U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A2_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A3_SMT_SHIFT             (3U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A3_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A4_SMT_SHIFT             (4U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A4_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A5_SMT_SHIFT             (5U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A5_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A6_SMT_SHIFT             (6U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A6_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A7_SMT_SHIFT             (7U)
#define GPIO4_IOC_GPIO4A_SMT_GPIO4A7_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4A_SMT_GPIO4A7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO4B_SMT */
#define GPIO4_IOC_GPIO4B_SMT_OFFSET                        (0x6244U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B0_SMT_SHIFT             (0U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B0_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B1_SMT_SHIFT             (1U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B1_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B2_SMT_SHIFT             (2U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B2_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B3_SMT_SHIFT             (3U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B3_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B4_SMT_SHIFT             (4U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B4_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B5_SMT_SHIFT             (5U)
#define GPIO4_IOC_GPIO4B_SMT_GPIO4B5_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4B_SMT_GPIO4B5_SMT_SHIFT)             /* 0x00000020 */
/* GPIO4C_SMT */
#define GPIO4_IOC_GPIO4C_SMT_OFFSET                        (0xA248U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C0_SMT_SHIFT             (0U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C0_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C1_SMT_SHIFT             (1U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C1_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C1_SMT_SHIFT)             /* 0x00000002 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C2_SMT_SHIFT             (2U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C2_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C2_SMT_SHIFT)             /* 0x00000004 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C3_SMT_SHIFT             (3U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C3_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C3_SMT_SHIFT)             /* 0x00000008 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C4_SMT_SHIFT             (4U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C4_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C4_SMT_SHIFT)             /* 0x00000010 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C5_SMT_SHIFT             (5U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C5_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C5_SMT_SHIFT)             /* 0x00000020 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C6_SMT_SHIFT             (6U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C6_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C6_SMT_SHIFT)             /* 0x00000040 */
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C7_SMT_SHIFT             (7U)
#define GPIO4_IOC_GPIO4C_SMT_GPIO4C7_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4C_SMT_GPIO4C7_SMT_SHIFT)             /* 0x00000080 */
/* GPIO4D_SMT */
#define GPIO4_IOC_GPIO4D_SMT_OFFSET                        (0xA24CU)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_SHIFT             (0U)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_SHIFT             (1U)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_SHIFT)             /* 0x00000002 */
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
#define UART_LCR_STICK_PARITY_SHIFT                        (5U)
#define UART_LCR_STICK_PARITY_MASK                         (0x1U << UART_LCR_STICK_PARITY_SHIFT)                        /* 0x00000020 */
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
#define UART_LSR_PARITY_ERROR_SHIFT                        (2U)
#define UART_LSR_PARITY_ERROR_MASK                         (0x1U << UART_LSR_PARITY_ERROR_SHIFT)                        /* 0x00000004 */
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
#define UART_CPR                                           (0x43FF2U)
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
#define UART_UCV                                           (0x3430322AU)
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_OFFSET                                    (0xFCU)
#define UART_CTR                                           (0x44570110U)
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
/******************************************GPIO******************************************/
/* SWPORT_DR_L */
#define GPIO_SWPORT_DR_L_OFFSET                            (0x0U)
#define GPIO_SWPORT_DR_L_SWPORT_DR_LOW_SHIFT               (0U)
#define GPIO_SWPORT_DR_L_SWPORT_DR_LOW_MASK                (0xFFFFU << GPIO_SWPORT_DR_L_SWPORT_DR_LOW_SHIFT)            /* 0x0000FFFF */
/* SWPORT_DR_H */
#define GPIO_SWPORT_DR_H_OFFSET                            (0x4U)
#define GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_SHIFT              (0U)
#define GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_MASK               (0xFFFFU << GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_SHIFT)           /* 0x0000FFFF */
/* SWPORT_DDR_L */
#define GPIO_SWPORT_DDR_L_OFFSET                           (0x8U)
#define GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_SHIFT             (0U)
#define GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_MASK              (0xFFFFU << GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_SHIFT)          /* 0x0000FFFF */
/* SWPORT_DDR_H */
#define GPIO_SWPORT_DDR_H_OFFSET                           (0xCU)
#define GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_SHIFT            (0U)
#define GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_MASK             (0xFFFFU << GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_SHIFT)         /* 0x0000FFFF */
/* INT_EN_L */
#define GPIO_INT_EN_L_OFFSET                               (0x10U)
#define GPIO_INT_EN_L_INT_EN_LOW_SHIFT                     (0U)
#define GPIO_INT_EN_L_INT_EN_LOW_MASK                      (0xFFFFU << GPIO_INT_EN_L_INT_EN_LOW_SHIFT)                  /* 0x0000FFFF */
/* INT_EN_H */
#define GPIO_INT_EN_H_OFFSET                               (0x14U)
#define GPIO_INT_EN_H_INT_EN_HIGH_SHIFT                    (0U)
#define GPIO_INT_EN_H_INT_EN_HIGH_MASK                     (0xFFFFU << GPIO_INT_EN_H_INT_EN_HIGH_SHIFT)                 /* 0x0000FFFF */
/* INT_MASK_L */
#define GPIO_INT_MASK_L_OFFSET                             (0x18U)
#define GPIO_INT_MASK_L_INT_MASK_LOW_SHIFT                 (0U)
#define GPIO_INT_MASK_L_INT_MASK_LOW_MASK                  (0xFFFFU << GPIO_INT_MASK_L_INT_MASK_LOW_SHIFT)              /* 0x0000FFFF */
/* INT_MASK_H */
#define GPIO_INT_MASK_H_OFFSET                             (0x1CU)
#define GPIO_INT_MASK_H_INT_MASK_HIGH_SHIFT                (0U)
#define GPIO_INT_MASK_H_INT_MASK_HIGH_MASK                 (0xFFFFU << GPIO_INT_MASK_H_INT_MASK_HIGH_SHIFT)             /* 0x0000FFFF */
/* INT_TYPE_L */
#define GPIO_INT_TYPE_L_OFFSET                             (0x20U)
#define GPIO_INT_TYPE_L_INT_TYPE_LOW_SHIFT                 (0U)
#define GPIO_INT_TYPE_L_INT_TYPE_LOW_MASK                  (0xFFFFU << GPIO_INT_TYPE_L_INT_TYPE_LOW_SHIFT)              /* 0x0000FFFF */
/* INT_TYPE_H */
#define GPIO_INT_TYPE_H_OFFSET                             (0x24U)
#define GPIO_INT_TYPE_H_INT_TYPE_HIGH_SHIFT                (0U)
#define GPIO_INT_TYPE_H_INT_TYPE_HIGH_MASK                 (0xFFFFU << GPIO_INT_TYPE_H_INT_TYPE_HIGH_SHIFT)             /* 0x0000FFFF */
/* INT_POLARITY_L */
#define GPIO_INT_POLARITY_L_OFFSET                         (0x28U)
#define GPIO_INT_POLARITY_L_INT_POLARITY_LOW_SHIFT         (0U)
#define GPIO_INT_POLARITY_L_INT_POLARITY_LOW_MASK          (0xFFFFU << GPIO_INT_POLARITY_L_INT_POLARITY_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_POLARITY_H */
#define GPIO_INT_POLARITY_H_OFFSET                         (0x2CU)
#define GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_SHIFT        (0U)
#define GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_MASK         (0xFFFFU << GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_SHIFT)     /* 0x0000FFFF */
/* INT_BOTHEDGE_L */
#define GPIO_INT_BOTHEDGE_L_OFFSET                         (0x30U)
#define GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_SHIFT         (0U)
#define GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_MASK          (0xFFFFU << GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_BOTHEDGE_H */
#define GPIO_INT_BOTHEDGE_H_OFFSET                         (0x34U)
#define GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_SHIFT        (0U)
#define GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_MASK         (0xFFFFU << GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_SHIFT)     /* 0x0000FFFF */
/* DEBOUNCE_L */
#define GPIO_DEBOUNCE_L_OFFSET                             (0x38U)
#define GPIO_DEBOUNCE_L_DEBOUNCE_LOW_SHIFT                 (0U)
#define GPIO_DEBOUNCE_L_DEBOUNCE_LOW_MASK                  (0xFFFFU << GPIO_DEBOUNCE_L_DEBOUNCE_LOW_SHIFT)              /* 0x0000FFFF */
/* DEBOUNCE_H */
#define GPIO_DEBOUNCE_H_OFFSET                             (0x3CU)
#define GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_SHIFT                (0U)
#define GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_MASK                 (0xFFFFU << GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_SHIFT)             /* 0x0000FFFF */
/* DBCLK_DIV_EN_L */
#define GPIO_DBCLK_DIV_EN_L_OFFSET                         (0x40U)
#define GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_SHIFT         (0U)
#define GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_MASK          (0xFFFFU << GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_SHIFT)      /* 0x0000FFFF */
/* DBCLK_DIV_EN_H */
#define GPIO_DBCLK_DIV_EN_H_OFFSET                         (0x44U)
#define GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_SHIFT        (0U)
#define GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_MASK         (0xFFFFU << GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_SHIFT)     /* 0x0000FFFF */
/* DBCLK_DIV_CON */
#define GPIO_DBCLK_DIV_CON_OFFSET                          (0x48U)
#define GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_SHIFT             (0U)
#define GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_MASK              (0xFFFFFFU << GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_SHIFT)        /* 0x00FFFFFF */
/* INT_STATUS */
#define GPIO_INT_STATUS_OFFSET                             (0x50U)
#define GPIO_INT_STATUS                                    (0x0U)
#define GPIO_INT_STATUS_INT_STATUS_SHIFT                   (0U)
#define GPIO_INT_STATUS_INT_STATUS_MASK                    (0xFFFFFFFFU << GPIO_INT_STATUS_INT_STATUS_SHIFT)            /* 0xFFFFFFFF */
/* INT_RAWSTATUS */
#define GPIO_INT_RAWSTATUS_OFFSET                          (0x58U)
#define GPIO_INT_RAWSTATUS                                 (0x0U)
#define GPIO_INT_RAWSTATUS_INT_RAWSTATUS_SHIFT             (0U)
#define GPIO_INT_RAWSTATUS_INT_RAWSTATUS_MASK              (0xFFFFFFFFU << GPIO_INT_RAWSTATUS_INT_RAWSTATUS_SHIFT)      /* 0xFFFFFFFF */
/* PORT_EOI_L */
#define GPIO_PORT_EOI_L_OFFSET                             (0x60U)
#define GPIO_PORT_EOI_L_PORT_EOI_LOW_SHIFT                 (0U)
#define GPIO_PORT_EOI_L_PORT_EOI_LOW_MASK                  (0xFFFFU << GPIO_PORT_EOI_L_PORT_EOI_LOW_SHIFT)              /* 0x0000FFFF */
/* PORT_EOI_H */
#define GPIO_PORT_EOI_H_OFFSET                             (0x64U)
#define GPIO_PORT_EOI_H_PORT_EOI_HIGH_SHIFT                (0U)
#define GPIO_PORT_EOI_H_PORT_EOI_HIGH_MASK                 (0xFFFFU << GPIO_PORT_EOI_H_PORT_EOI_HIGH_SHIFT)             /* 0x0000FFFF */
/* EXT_PORT */
#define GPIO_EXT_PORT_OFFSET                               (0x70U)
#define GPIO_EXT_PORT                                      (0x0U)
#define GPIO_EXT_PORT_EXT_PORT_SHIFT                       (0U)
#define GPIO_EXT_PORT_EXT_PORT_MASK                        (0xFFFFFFFFU << GPIO_EXT_PORT_EXT_PORT_SHIFT)                /* 0xFFFFFFFF */
/* VER_ID */
#define GPIO_VER_ID_OFFSET                                 (0x78U)
#define GPIO_VER_ID                                        (0x10219C8U)
#define GPIO_VER_ID_VER_ID_SHIFT                           (0U)
#define GPIO_VER_ID_VER_ID_MASK                            (0xFFFFFFFFU << GPIO_VER_ID_VER_ID_SHIFT)                    /* 0xFFFFFFFF */
/* STORE_ST_L */
#define GPIO_STORE_ST_L_OFFSET                             (0x80U)
#define GPIO_STORE_ST_L_STORE_ST_L_SHIFT                   (0U)
#define GPIO_STORE_ST_L_STORE_ST_L_MASK                    (0xFFFFU << GPIO_STORE_ST_L_STORE_ST_L_SHIFT)                /* 0x0000FFFF */
/* STORE_ST_H */
#define GPIO_STORE_ST_H_OFFSET                             (0x84U)
#define GPIO_STORE_ST_H_STORE_ST_H_SHIFT                   (0U)
#define GPIO_STORE_ST_H_STORE_ST_H_MASK                    (0xFFFFU << GPIO_STORE_ST_H_STORE_ST_H_SHIFT)                /* 0x0000FFFF */
/* GPIO_REG_GROUP_L */
#define GPIO_GPIO_REG_GROUP_L_OFFSET                       (0x100U)
#define GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_SHIFT     (0U)
#define GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_MASK      (0xFFFFU << GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_SHIFT)  /* 0x0000FFFF */
/* GPIO_REG_GROUP_H  */
#define GPIO_GPIO_REG_GROUP_H_OFFSET                       (0x104U)
#define GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_SHIFT    (0U)
#define GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_MASK     (0xFFFFU << GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_SHIFT) /* 0x0000FFFF */
/* GPIO_VIRTUAL_EN */
#define GPIO_GPIO_VIRTUAL_EN_OFFSET                        (0x108U)
#define GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_SHIFT         (0U)
#define GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_MASK          (0x1U << GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_SHIFT)         /* 0x00000001 */
/* GPIO_REG_GROUP1_L */
#define GPIO_GPIO_REG_GROUP1_L_OFFSET                      (0x110U)
#define GPIO_GPIO_REG_GROUP1_L_GPIO_REG_GROUP1_LOW_SHIFT   (0U)
#define GPIO_GPIO_REG_GROUP1_L_GPIO_REG_GROUP1_LOW_MASK    (0xFFFFU << GPIO_GPIO_REG_GROUP1_L_GPIO_REG_GROUP1_LOW_SHIFT) /* 0x0000FFFF */
/* GPIO_REG_GROUP1_H */
#define GPIO_GPIO_REG_GROUP1_H_OFFSET                      (0x114U)
#define GPIO_GPIO_REG_GROUP1_H_GPIO_REG_GROUP1_HIGH_SHIFT  (0U)
#define GPIO_GPIO_REG_GROUP1_H_GPIO_REG_GROUP1_HIGH_MASK   (0xFFFFU << GPIO_GPIO_REG_GROUP1_H_GPIO_REG_GROUP1_HIGH_SHIFT) /* 0x0000FFFF */
/* GPIO_REG_GROUP2_L */
#define GPIO_GPIO_REG_GROUP2_L_OFFSET                      (0x118U)
#define GPIO_GPIO_REG_GROUP2_L_GPIO_REG_GROUP2_LOW_SHIFT   (0U)
#define GPIO_GPIO_REG_GROUP2_L_GPIO_REG_GROUP2_LOW_MASK    (0xFFFFU << GPIO_GPIO_REG_GROUP2_L_GPIO_REG_GROUP2_LOW_SHIFT) /* 0x0000FFFF */
/* GPIO_REG_GROUP2_H */
#define GPIO_GPIO_REG_GROUP2_H_OFFSET                      (0x11CU)
#define GPIO_GPIO_REG_GROUP2_H_GPIO_REG_GROUP2_HIGH_SHIFT  (0U)
#define GPIO_GPIO_REG_GROUP2_H_GPIO_REG_GROUP2_HIGH_MASK   (0xFFFFU << GPIO_GPIO_REG_GROUP2_H_GPIO_REG_GROUP2_HIGH_SHIFT) /* 0x0000FFFF */
/* GPIO_REG_GROUP3_L */
#define GPIO_GPIO_REG_GROUP3_L_OFFSET                      (0x120U)
#define GPIO_GPIO_REG_GROUP3_L_GPIO_REG_GROUP3_LOW_SHIFT   (0U)
#define GPIO_GPIO_REG_GROUP3_L_GPIO_REG_GROUP3_LOW_MASK    (0xFFFFU << GPIO_GPIO_REG_GROUP3_L_GPIO_REG_GROUP3_LOW_SHIFT) /* 0x0000FFFF */
/* GPIO_REG_GROUP3_H */
#define GPIO_GPIO_REG_GROUP3_H_OFFSET                      (0x124U)
#define GPIO_GPIO_REG_GROUP3_H_GPIO_REG_GROUP3_HIGH_SHIFT  (0U)
#define GPIO_GPIO_REG_GROUP3_H_GPIO_REG_GROUP3_HIGH_MASK   (0xFFFFU << GPIO_GPIO_REG_GROUP3_H_GPIO_REG_GROUP3_HIGH_SHIFT) /* 0x0000FFFF */
/*****************************************TIMER******************************************/
/* LOAD_COUNT0 */
#define TIMER_LOAD_COUNT0_OFFSET                           (0x0U)
#define TIMER_LOAD_COUNT0_COUNT0_SHIFT                     (0U)
#define TIMER_LOAD_COUNT0_COUNT0_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT0_COUNT0_SHIFT)              /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_LOAD_COUNT1_OFFSET                           (0x4U)
#define TIMER_LOAD_COUNT1_COUNT1_SHIFT                     (0U)
#define TIMER_LOAD_COUNT1_COUNT1_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT1_COUNT1_SHIFT)              /* 0xFFFFFFFF */
/* CURRENT_VALUE0 */
#define TIMER_CURRENT_VALUE0_OFFSET                        (0x8U)
#define TIMER_CURRENT_VALUE0                               (0x0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT          (0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT)   /* 0xFFFFFFFF */
/* CURRENT_VALUE1 */
#define TIMER_CURRENT_VALUE1_OFFSET                        (0xCU)
#define TIMER_CURRENT_VALUE1                               (0x0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT          (0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT)   /* 0xFFFFFFFF */
/* CONTROLREG */
#define TIMER_CONTROLREG_OFFSET                            (0x10U)
#define TIMER_CONTROLREG_TIMER_ENABLE_SHIFT                (0U)
#define TIMER_CONTROLREG_TIMER_ENABLE_MASK                 (0x1U << TIMER_CONTROLREG_TIMER_ENABLE_SHIFT)                /* 0x00000001 */
#define TIMER_CONTROLREG_TIMER_MODE_SHIFT                  (1U)
#define TIMER_CONTROLREG_TIMER_MODE_MASK                   (0x1U << TIMER_CONTROLREG_TIMER_MODE_SHIFT)                  /* 0x00000002 */
#define TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT              (2U)
#define TIMER_CONTROLREG_TIMER_INT_MASK_MASK               (0x1U << TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT)              /* 0x00000004 */
/* INTSTATUS */
#define TIMER_INTSTATUS_OFFSET                             (0x18U)
#define TIMER_INTSTATUS_INT_PD_SHIFT                       (0U)
#define TIMER_INTSTATUS_INT_PD_MASK                        (0x1U << TIMER_INTSTATUS_INT_PD_SHIFT)                       /* 0x00000001 */
/*****************************************INTMUX*****************************************/
/* INT_ENABLE_GROUP0 */
#define INTMUX_INT_ENABLE_GROUP0_OFFSET                    (0x0U)
#define INTMUX_INT_ENABLE_GROUP0_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP0_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP0_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP1 */
#define INTMUX_INT_ENABLE_GROUP1_OFFSET                    (0x4U)
#define INTMUX_INT_ENABLE_GROUP1_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP1_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP1_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP2 */
#define INTMUX_INT_ENABLE_GROUP2_OFFSET                    (0x8U)
#define INTMUX_INT_ENABLE_GROUP2_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP2_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP2_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP3 */
#define INTMUX_INT_ENABLE_GROUP3_OFFSET                    (0xCU)
#define INTMUX_INT_ENABLE_GROUP3_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP3_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP3_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP4 */
#define INTMUX_INT_ENABLE_GROUP4_OFFSET                    (0x10U)
#define INTMUX_INT_ENABLE_GROUP4_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP4_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP4_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP5 */
#define INTMUX_INT_ENABLE_GROUP5_OFFSET                    (0x14U)
#define INTMUX_INT_ENABLE_GROUP5_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP5_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP5_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP6 */
#define INTMUX_INT_ENABLE_GROUP6_OFFSET                    (0x18U)
#define INTMUX_INT_ENABLE_GROUP6_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP6_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP6_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP7 */
#define INTMUX_INT_ENABLE_GROUP7_OFFSET                    (0x1CU)
#define INTMUX_INT_ENABLE_GROUP7_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP7_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP7_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP8 */
#define INTMUX_INT_ENABLE_GROUP8_OFFSET                    (0x20U)
#define INTMUX_INT_ENABLE_GROUP8_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP8_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP8_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP9 */
#define INTMUX_INT_ENABLE_GROUP9_OFFSET                    (0x24U)
#define INTMUX_INT_ENABLE_GROUP9_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP9_ENABLE_MASK               (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP9_ENABLE_SHIFT)       /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP10 */
#define INTMUX_INT_ENABLE_GROUP10_OFFSET                   (0x28U)
#define INTMUX_INT_ENABLE_GROUP10_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP10_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP10_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP11 */
#define INTMUX_INT_ENABLE_GROUP11_OFFSET                   (0x2CU)
#define INTMUX_INT_ENABLE_GROUP11_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP11_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP11_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP12 */
#define INTMUX_INT_ENABLE_GROUP12_OFFSET                   (0x30U)
#define INTMUX_INT_ENABLE_GROUP12_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP12_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP12_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP13 */
#define INTMUX_INT_ENABLE_GROUP13_OFFSET                   (0x34U)
#define INTMUX_INT_ENABLE_GROUP13_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP13_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP13_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP14 */
#define INTMUX_INT_ENABLE_GROUP14_OFFSET                   (0x38U)
#define INTMUX_INT_ENABLE_GROUP14_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP14_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP14_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_ENABLE_GROUP15 */
#define INTMUX_INT_ENABLE_GROUP15_OFFSET                   (0x3CU)
#define INTMUX_INT_ENABLE_GROUP15_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP15_ENABLE_MASK              (0xFFFFFFFFU << INTMUX_INT_ENABLE_GROUP15_ENABLE_SHIFT)      /* 0xFFFFFFFF */
/* INT_FLAG_GROUP0 */
#define INTMUX_INT_FLAG_GROUP0_OFFSET                      (0x80U)
#define INTMUX_INT_FLAG_GROUP0                             (0x0U)
#define INTMUX_INT_FLAG_GROUP0_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP0_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP0_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP1 */
#define INTMUX_INT_FLAG_GROUP1_OFFSET                      (0x84U)
#define INTMUX_INT_FLAG_GROUP1                             (0x0U)
#define INTMUX_INT_FLAG_GROUP1_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP1_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP1_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP2 */
#define INTMUX_INT_FLAG_GROUP2_OFFSET                      (0x88U)
#define INTMUX_INT_FLAG_GROUP2                             (0x0U)
#define INTMUX_INT_FLAG_GROUP2_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP2_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP2_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP3 */
#define INTMUX_INT_FLAG_GROUP3_OFFSET                      (0x8CU)
#define INTMUX_INT_FLAG_GROUP3                             (0x0U)
#define INTMUX_INT_FLAG_GROUP3_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP3_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP3_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP4 */
#define INTMUX_INT_FLAG_GROUP4_OFFSET                      (0x90U)
#define INTMUX_INT_FLAG_GROUP4                             (0x0U)
#define INTMUX_INT_FLAG_GROUP4_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP4_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP4_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP5 */
#define INTMUX_INT_FLAG_GROUP5_OFFSET                      (0x94U)
#define INTMUX_INT_FLAG_GROUP5                             (0x0U)
#define INTMUX_INT_FLAG_GROUP5_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP5_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP5_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP6 */
#define INTMUX_INT_FLAG_GROUP6_OFFSET                      (0x98U)
#define INTMUX_INT_FLAG_GROUP6                             (0x0U)
#define INTMUX_INT_FLAG_GROUP6_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP6_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP6_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP7 */
#define INTMUX_INT_FLAG_GROUP7_OFFSET                      (0x9CU)
#define INTMUX_INT_FLAG_GROUP7                             (0x0U)
#define INTMUX_INT_FLAG_GROUP7_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP7_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP7_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP8 */
#define INTMUX_INT_FLAG_GROUP8_OFFSET                      (0xA0U)
#define INTMUX_INT_FLAG_GROUP8                             (0x0U)
#define INTMUX_INT_FLAG_GROUP8_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP8_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP8_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP9 */
#define INTMUX_INT_FLAG_GROUP9_OFFSET                      (0xA4U)
#define INTMUX_INT_FLAG_GROUP9                             (0x0U)
#define INTMUX_INT_FLAG_GROUP9_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP9_FLAG_MASK                   (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP9_FLAG_SHIFT)           /* 0xFFFFFFFF */
/* INT_FLAG_GROUP10 */
#define INTMUX_INT_FLAG_GROUP10_OFFSET                     (0xA8U)
#define INTMUX_INT_FLAG_GROUP10                            (0x0U)
#define INTMUX_INT_FLAG_GROUP10_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP10_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP10_FLAG_SHIFT)          /* 0xFFFFFFFF */
/* INT_FLAG_GROUP11 */
#define INTMUX_INT_FLAG_GROUP11_OFFSET                     (0xACU)
#define INTMUX_INT_FLAG_GROUP11                            (0x0U)
#define INTMUX_INT_FLAG_GROUP11_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP11_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP11_FLAG_SHIFT)          /* 0xFFFFFFFF */
/* INT_FLAG_GROUP12 */
#define INTMUX_INT_FLAG_GROUP12_OFFSET                     (0xB0U)
#define INTMUX_INT_FLAG_GROUP12                            (0x0U)
#define INTMUX_INT_FLAG_GROUP12_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP12_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP12_FLAG_SHIFT)          /* 0xFFFFFFFF */
/* INT_FLAG_GROUP13 */
#define INTMUX_INT_FLAG_GROUP13_OFFSET                     (0xB4U)
#define INTMUX_INT_FLAG_GROUP13                            (0x0U)
#define INTMUX_INT_FLAG_GROUP13_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP13_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP13_FLAG_SHIFT)          /* 0xFFFFFFFF */
/* INT_FLAG_GROUP14 */
#define INTMUX_INT_FLAG_GROUP14_OFFSET                     (0xB8U)
#define INTMUX_INT_FLAG_GROUP14                            (0x0U)
#define INTMUX_INT_FLAG_GROUP14_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP14_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP14_FLAG_SHIFT)          /* 0xFFFFFFFF */
/* INT_FLAG_GROUP15 */
#define INTMUX_INT_FLAG_GROUP15_OFFSET                     (0xBCU)
#define INTMUX_INT_FLAG_GROUP15                            (0x0U)
#define INTMUX_INT_FLAG_GROUP15_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP15_FLAG_MASK                  (0xFFFFFFFFU << INTMUX_INT_FLAG_GROUP15_FLAG_SHIFT)          /* 0xFFFFFFFF */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RK3576_H */
