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
         uint32_t RESERVEDA098[44];                   /* Address Offset: 0xA098 */
    __IO uint32_t GPIO4C_PULL;                        /* Address Offset: 0xA148 */
         uint32_t RESERVEDA14C[27];                   /* Address Offset: 0xA14C */
    __IO uint32_t GPIO4C_IE;                          /* Address Offset: 0xA1B8 */
         uint32_t RESERVEDA1BC[35];                   /* Address Offset: 0xA1BC */
    __IO uint32_t GPIO4C_SMT;                         /* Address Offset: 0xA248 */
         uint32_t RESERVEDA24C[81];                   /* Address Offset: 0xA24C */
    __IO uint32_t GPIO4C_IOMUX_SEL_L;                 /* Address Offset: 0xA390 */
    __IO uint32_t GPIO4C_IOMUX_SEL_H;                 /* Address Offset: 0xA394 */
         uint32_t RESERVEDA398[832];                  /* Address Offset: 0xA398 */
    __IO uint32_t GPIO4D_DS_L;                        /* Address Offset: 0xB098 */
         uint32_t RESERVEDB09C[44];                   /* Address Offset: 0xB09C */
    __IO uint32_t GPIO4D_PULL;                        /* Address Offset: 0xB14C */
         uint32_t RESERVEDB150[27];                   /* Address Offset: 0xB150 */
    __IO uint32_t GPIO4D_IE;                          /* Address Offset: 0xB1BC */
         uint32_t RESERVEDB1C0[35];                   /* Address Offset: 0xB1C0 */
    __IO uint32_t GPIO4D_SMT;                         /* Address Offset: 0xB24C */
         uint32_t RESERVEDB250[82];                   /* Address Offset: 0xB250 */
    __IO uint32_t GPIO4D_IOMUX_SEL_L;                 /* Address Offset: 0xB398 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t BPLL_CON0;                          /* Address Offset: 0x0000 */
    __IO uint32_t BPLL_CON1;                          /* Address Offset: 0x0004 */
         uint32_t RESERVED0008[2];                    /* Address Offset: 0x0008 */
    __IO uint32_t BPLL_CON4;                          /* Address Offset: 0x0010 */
    __IO uint32_t BPLL_CON5;                          /* Address Offset: 0x0014 */
    __IO uint32_t BPLL_CON6;                          /* Address Offset: 0x0018 */
         uint32_t RESERVED001C[81];                   /* Address Offset: 0x001C */
    __IO uint32_t VPLL_CON0;                          /* Address Offset: 0x0160 */
    __IO uint32_t VPLL_CON1;                          /* Address Offset: 0x0164 */
    __IO uint32_t VPLL_CON2;                          /* Address Offset: 0x0168 */
    __IO uint32_t VPLL_CON3;                          /* Address Offset: 0x016C */
    __IO uint32_t VPLL_CON4;                          /* Address Offset: 0x0170 */
    __IO uint32_t VPLL_CON5;                          /* Address Offset: 0x0174 */
    __IO uint32_t VPLL_CON6;                          /* Address Offset: 0x0178 */
         uint32_t RESERVED017C;                       /* Address Offset: 0x017C */
    __IO uint32_t AUPLL_CON0;                         /* Address Offset: 0x0180 */
    __IO uint32_t AUPLL_CON1;                         /* Address Offset: 0x0184 */
    __IO uint32_t AUPLL_CON2;                         /* Address Offset: 0x0188 */
    __IO uint32_t AUPLL_CON3;                         /* Address Offset: 0x018C */
    __IO uint32_t AUPLL_CON4;                         /* Address Offset: 0x0190 */
    __IO uint32_t AUPLL_CON5;                         /* Address Offset: 0x0194 */
    __IO uint32_t AUPLL_CON6;                         /* Address Offset: 0x0198 */
         uint32_t RESERVED019C;                       /* Address Offset: 0x019C */
    __IO uint32_t CPLL_CON0;                          /* Address Offset: 0x01A0 */
    __IO uint32_t CPLL_CON1;                          /* Address Offset: 0x01A4 */
    __IO uint32_t CPLL_CON2;                          /* Address Offset: 0x01A8 */
    __IO uint32_t CPLL_CON3;                          /* Address Offset: 0x01AC */
    __IO uint32_t CPLL_CON4;                          /* Address Offset: 0x01B0 */
    __IO uint32_t CPLL_CON5;                          /* Address Offset: 0x01B4 */
    __IO uint32_t CPLL_CON6;                          /* Address Offset: 0x01B8 */
         uint32_t RESERVED01BC;                       /* Address Offset: 0x01BC */
    __IO uint32_t GPLL_CON0;                          /* Address Offset: 0x01C0 */
    __IO uint32_t GPLL_CON1;                          /* Address Offset: 0x01C4 */
    __IO uint32_t GPLL_CON2;                          /* Address Offset: 0x01C8 */
    __IO uint32_t GPLL_CON3;                          /* Address Offset: 0x01CC */
    __IO uint32_t GPLL_CON4;                          /* Address Offset: 0x01D0 */
    __IO uint32_t GPLL_CON5;                          /* Address Offset: 0x01D4 */
    __IO uint32_t GPLL_CON6;                          /* Address Offset: 0x01D8 */
         uint32_t RESERVED01DC[41];                   /* Address Offset: 0x01DC */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
    __IO uint32_t CLKSEL_CON01;                       /* Address Offset: 0x0304 */
    __IO uint32_t CLKSEL_CON02;                       /* Address Offset: 0x0308 */
    __IO uint32_t CLKSEL_CON03;                       /* Address Offset: 0x030C */
    __IO uint32_t CLKSEL_CON04;                       /* Address Offset: 0x0310 */
    __IO uint32_t CLKSEL_CON05;                       /* Address Offset: 0x0314 */
    __IO uint32_t CLKSEL_CON06;                       /* Address Offset: 0x0318 */
         uint32_t RESERVED031C;                       /* Address Offset: 0x031C */
    __IO uint32_t CLKSEL_CON08;                       /* Address Offset: 0x0320 */
    __IO uint32_t CLKSEL_CON09;                       /* Address Offset: 0x0324 */
    __IO uint32_t CLKSEL_CON10;                       /* Address Offset: 0x0328 */
    __IO uint32_t CLKSEL_CON11;                       /* Address Offset: 0x032C */
    __IO uint32_t CLKSEL_CON12;                       /* Address Offset: 0x0330 */
    __IO uint32_t CLKSEL_CON13;                       /* Address Offset: 0x0334 */
    __IO uint32_t CLKSEL_CON14;                       /* Address Offset: 0x0338 */
    __IO uint32_t CLKSEL_CON15;                       /* Address Offset: 0x033C */
    __IO uint32_t CLKSEL_CON16;                       /* Address Offset: 0x0340 */
    __IO uint32_t CLKSEL_CON17;                       /* Address Offset: 0x0344 */
    __IO uint32_t CLKSEL_CON18;                       /* Address Offset: 0x0348 */
    __IO uint32_t CLKSEL_CON19;                       /* Address Offset: 0x034C */
         uint32_t RESERVED0350;                       /* Address Offset: 0x0350 */
    __IO uint32_t CLKSEL_CON21;                       /* Address Offset: 0x0354 */
    __IO uint32_t CLKSEL_CON22;                       /* Address Offset: 0x0358 */
    __IO uint32_t CLKSEL_CON23;                       /* Address Offset: 0x035C */
    __IO uint32_t CLKSEL_CON24;                       /* Address Offset: 0x0360 */
    __IO uint32_t CLKSEL_CON25;                       /* Address Offset: 0x0364 */
    __IO uint32_t CLKSEL_CON26;                       /* Address Offset: 0x0368 */
    __IO uint32_t CLKSEL_CON27;                       /* Address Offset: 0x036C */
    __IO uint32_t CLKSEL_CON28;                       /* Address Offset: 0x0370 */
    __IO uint32_t CLKSEL_CON29;                       /* Address Offset: 0x0374 */
    __IO uint32_t CLKSEL_CON30;                       /* Address Offset: 0x0378 */
    __IO uint32_t CLKSEL_CON31;                       /* Address Offset: 0x037C */
    __IO uint32_t CLKSEL_CON32;                       /* Address Offset: 0x0380 */
    __IO uint32_t CLKSEL_CON33;                       /* Address Offset: 0x0384 */
    __IO uint32_t CLKSEL_CON34;                       /* Address Offset: 0x0388 */
    __IO uint32_t CLKSEL_CON35;                       /* Address Offset: 0x038C */
    __IO uint32_t CLKSEL_CON36;                       /* Address Offset: 0x0390 */
    __IO uint32_t CLKSEL_CON37;                       /* Address Offset: 0x0394 */
    __IO uint32_t CLKSEL_CON38;                       /* Address Offset: 0x0398 */
    __IO uint32_t CLKSEL_CON39;                       /* Address Offset: 0x039C */
    __IO uint32_t CLKSEL_CON40;                       /* Address Offset: 0x03A0 */
    __IO uint32_t CLKSEL_CON41;                       /* Address Offset: 0x03A4 */
    __IO uint32_t CLKSEL_CON42;                       /* Address Offset: 0x03A8 */
    __IO uint32_t CLKSEL_CON43;                       /* Address Offset: 0x03AC */
    __IO uint32_t CLKSEL_CON44;                       /* Address Offset: 0x03B0 */
    __IO uint32_t CLKSEL_CON45;                       /* Address Offset: 0x03B4 */
    __IO uint32_t CLKSEL_CON46;                       /* Address Offset: 0x03B8 */
    __IO uint32_t CLKSEL_CON47;                       /* Address Offset: 0x03BC */
    __IO uint32_t CLKSEL_CON48;                       /* Address Offset: 0x03C0 */
    __IO uint32_t CLKSEL_CON49;                       /* Address Offset: 0x03C4 */
    __IO uint32_t CLKSEL_CON50;                       /* Address Offset: 0x03C8 */
    __IO uint32_t CLKSEL_CON51;                       /* Address Offset: 0x03CC */
    __IO uint32_t CLKSEL_CON52;                       /* Address Offset: 0x03D0 */
    __IO uint32_t CLKSEL_CON53;                       /* Address Offset: 0x03D4 */
         uint32_t RESERVED03D8;                       /* Address Offset: 0x03D8 */
    __IO uint32_t CLKSEL_CON55;                       /* Address Offset: 0x03DC */
    __IO uint32_t CLKSEL_CON56;                       /* Address Offset: 0x03E0 */
    __IO uint32_t CLKSEL_CON57;                       /* Address Offset: 0x03E4 */
    __IO uint32_t CLKSEL_CON58;                       /* Address Offset: 0x03E8 */
    __IO uint32_t CLKSEL_CON59;                       /* Address Offset: 0x03EC */
    __IO uint32_t CLKSEL_CON60;                       /* Address Offset: 0x03F0 */
    __IO uint32_t CLKSEL_CON61;                       /* Address Offset: 0x03F4 */
    __IO uint32_t CLKSEL_CON62;                       /* Address Offset: 0x03F8 */
    __IO uint32_t CLKSEL_CON63;                       /* Address Offset: 0x03FC */
    __IO uint32_t CLKSEL_CON64;                       /* Address Offset: 0x0400 */
    __IO uint32_t CLKSEL_CON65;                       /* Address Offset: 0x0404 */
    __IO uint32_t CLKSEL_CON66;                       /* Address Offset: 0x0408 */
    __IO uint32_t CLKSEL_CON67;                       /* Address Offset: 0x040C */
    __IO uint32_t CLKSEL_CON68;                       /* Address Offset: 0x0410 */
    __IO uint32_t CLKSEL_CON69;                       /* Address Offset: 0x0414 */
    __IO uint32_t CLKSEL_CON70;                       /* Address Offset: 0x0418 */
    __IO uint32_t CLKSEL_CON71;                       /* Address Offset: 0x041C */
    __IO uint32_t CLKSEL_CON72;                       /* Address Offset: 0x0420 */
    __IO uint32_t CLKSEL_CON73;                       /* Address Offset: 0x0424 */
    __IO uint32_t CLKSEL_CON74;                       /* Address Offset: 0x0428 */
    __IO uint32_t CLKSEL_CON75;                       /* Address Offset: 0x042C */
    __IO uint32_t CLKSEL_CON76;                       /* Address Offset: 0x0430 */
    __IO uint32_t CLKSEL_CON77;                       /* Address Offset: 0x0434 */
    __IO uint32_t CLKSEL_CON78;                       /* Address Offset: 0x0438 */
         uint32_t RESERVED043C;                       /* Address Offset: 0x043C */
    __IO uint32_t CLKSEL_CON80;                       /* Address Offset: 0x0440 */
         uint32_t RESERVED0444;                       /* Address Offset: 0x0444 */
    __IO uint32_t CLKSEL_CON82;                       /* Address Offset: 0x0448 */
         uint32_t RESERVED044C[3];                    /* Address Offset: 0x044C */
    __IO uint32_t CLKSEL_CON86;                       /* Address Offset: 0x0458 */
    __IO uint32_t CLKSEL_CON87;                       /* Address Offset: 0x045C */
    __IO uint32_t CLKSEL_CON88;                       /* Address Offset: 0x0460 */
    __IO uint32_t CLKSEL_CON89;                       /* Address Offset: 0x0464 */
    __IO uint32_t CLKSEL_CON90;                       /* Address Offset: 0x0468 */
         uint32_t RESERVED046C;                       /* Address Offset: 0x046C */
    __IO uint32_t CLKSEL_CON92;                       /* Address Offset: 0x0470 */
    __IO uint32_t CLKSEL_CON93;                       /* Address Offset: 0x0474 */
         uint32_t RESERVED0478[9];                    /* Address Offset: 0x0478 */
    __IO uint32_t CLKSEL_CON103;                      /* Address Offset: 0x049C */
    __IO uint32_t CLKSEL_CON104;                      /* Address Offset: 0x04A0 */
    __IO uint32_t CLKSEL_CON105;                      /* Address Offset: 0x04A4 */
    __IO uint32_t CLKSEL_CON106;                      /* Address Offset: 0x04A8 */
    __IO uint32_t CLKSEL_CON107;                      /* Address Offset: 0x04AC */
    __IO uint32_t CLKSEL_CON108;                      /* Address Offset: 0x04B0 */
         uint32_t RESERVED04B4;                       /* Address Offset: 0x04B4 */
    __IO uint32_t CLKSEL_CON110;                      /* Address Offset: 0x04B8 */
    __IO uint32_t CLKSEL_CON111;                      /* Address Offset: 0x04BC */
         uint32_t RESERVED04C0[3];                    /* Address Offset: 0x04C0 */
    __IO uint32_t CLKSEL_CON115;                      /* Address Offset: 0x04CC */
         uint32_t RESERVED04D0[2];                    /* Address Offset: 0x04D0 */
    __IO uint32_t CLKSEL_CON118;                      /* Address Offset: 0x04D8 */
    __IO uint32_t CLKSEL_CON119;                      /* Address Offset: 0x04DC */
    __IO uint32_t CLKSEL_CON120;                      /* Address Offset: 0x04E0 */
    __IO uint32_t CLKSEL_CON121;                      /* Address Offset: 0x04E4 */
    __IO uint32_t CLKSEL_CON122;                      /* Address Offset: 0x04E8 */
    __IO uint32_t CLKSEL_CON123;                      /* Address Offset: 0x04EC */
    __IO uint32_t CLKSEL_CON124;                      /* Address Offset: 0x04F0 */
         uint32_t RESERVED04F4[3];                    /* Address Offset: 0x04F4 */
    __IO uint32_t CLKSEL_CON128;                      /* Address Offset: 0x0500 */
    __IO uint32_t CLKSEL_CON129;                      /* Address Offset: 0x0504 */
    __IO uint32_t CLKSEL_CON130;                      /* Address Offset: 0x0508 */
         uint32_t RESERVED050C[13];                   /* Address Offset: 0x050C */
    __IO uint32_t CLKSEL_CON144;                      /* Address Offset: 0x0540 */
    __IO uint32_t CLKSEL_CON145;                      /* Address Offset: 0x0544 */
    __IO uint32_t CLKSEL_CON146;                      /* Address Offset: 0x0548 */
    __IO uint32_t CLKSEL_CON147;                      /* Address Offset: 0x054C */
         uint32_t RESERVED0550;                       /* Address Offset: 0x0550 */
    __IO uint32_t CLKSEL_CON149;                      /* Address Offset: 0x0554 */
         uint32_t RESERVED0558;                       /* Address Offset: 0x0558 */
    __IO uint32_t CLKSEL_CON151;                      /* Address Offset: 0x055C */
    __IO uint32_t CLKSEL_CON152;                      /* Address Offset: 0x0560 */
         uint32_t RESERVED0564;                       /* Address Offset: 0x0564 */
    __IO uint32_t CLKSEL_CON154;                      /* Address Offset: 0x0568 */
    __IO uint32_t CLKSEL_CON155;                      /* Address Offset: 0x056C */
    __IO uint32_t CLKSEL_CON156;                      /* Address Offset: 0x0570 */
    __IO uint32_t CLKSEL_CON157;                      /* Address Offset: 0x0574 */
    __IO uint32_t CLKSEL_CON158;                      /* Address Offset: 0x0578 */
    __IO uint32_t CLKSEL_CON159;                      /* Address Offset: 0x057C */
    __IO uint32_t CLKSEL_CON160;                      /* Address Offset: 0x0580 */
    __IO uint32_t CLKSEL_CON161;                      /* Address Offset: 0x0584 */
    __IO uint32_t CLKSEL_CON162;                      /* Address Offset: 0x0588 */
    __IO uint32_t CLKSEL_CON163;                      /* Address Offset: 0x058C */
    __IO uint32_t CLKSEL_CON164;                      /* Address Offset: 0x0590 */
    __IO uint32_t CLKSEL_CON165;                      /* Address Offset: 0x0594 */
    __IO uint32_t CLKSEL_CON166;                      /* Address Offset: 0x0598 */
    __IO uint32_t CLKSEL_CON167;                      /* Address Offset: 0x059C */
    __IO uint32_t CLKSEL_CON168;                      /* Address Offset: 0x05A0 */
         uint32_t RESERVED05A4[9];                    /* Address Offset: 0x05A4 */
    __IO uint32_t CLKSEL_CON178;                      /* Address Offset: 0x05C8 */
         uint32_t RESERVED05CC;                       /* Address Offset: 0x05CC */
    __IO uint32_t CLKSEL_CON180;                      /* Address Offset: 0x05D0 */
         uint32_t RESERVED05D4[139];                  /* Address Offset: 0x05D4 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
    __IO uint32_t GATE_CON02;                         /* Address Offset: 0x0808 */
    __IO uint32_t GATE_CON03;                         /* Address Offset: 0x080C */
    __IO uint32_t GATE_CON04;                         /* Address Offset: 0x0810 */
    __IO uint32_t GATE_CON05;                         /* Address Offset: 0x0814 */
    __IO uint32_t GATE_CON06;                         /* Address Offset: 0x0818 */
    __IO uint32_t GATE_CON07;                         /* Address Offset: 0x081C */
    __IO uint32_t GATE_CON08;                         /* Address Offset: 0x0820 */
    __IO uint32_t GATE_CON09;                         /* Address Offset: 0x0824 */
    __IO uint32_t GATE_CON10;                         /* Address Offset: 0x0828 */
    __IO uint32_t GATE_CON11;                         /* Address Offset: 0x082C */
    __IO uint32_t GATE_CON12;                         /* Address Offset: 0x0830 */
    __IO uint32_t GATE_CON13;                         /* Address Offset: 0x0834 */
    __IO uint32_t GATE_CON14;                         /* Address Offset: 0x0838 */
    __IO uint32_t GATE_CON15;                         /* Address Offset: 0x083C */
    __IO uint32_t GATE_CON16;                         /* Address Offset: 0x0840 */
    __IO uint32_t GATE_CON17;                         /* Address Offset: 0x0844 */
    __IO uint32_t GATE_CON18;                         /* Address Offset: 0x0848 */
    __IO uint32_t GATE_CON19;                         /* Address Offset: 0x084C */
    __IO uint32_t GATE_CON20;                         /* Address Offset: 0x0850 */
    __IO uint32_t GATE_CON21;                         /* Address Offset: 0x0854 */
    __IO uint32_t GATE_CON22;                         /* Address Offset: 0x0858 */
    __IO uint32_t GATE_CON23;                         /* Address Offset: 0x085C */
         uint32_t RESERVED0860;                       /* Address Offset: 0x0860 */
    __IO uint32_t GATE_CON25;                         /* Address Offset: 0x0864 */
    __IO uint32_t GATE_CON26;                         /* Address Offset: 0x0868 */
    __IO uint32_t GATE_CON27;                         /* Address Offset: 0x086C */
    __IO uint32_t GATE_CON28;                         /* Address Offset: 0x0870 */
    __IO uint32_t GATE_CON29;                         /* Address Offset: 0x0874 */
         uint32_t RESERVED0878;                       /* Address Offset: 0x0878 */
    __IO uint32_t GATE_CON31;                         /* Address Offset: 0x087C */
    __IO uint32_t GATE_CON32;                         /* Address Offset: 0x0880 */
    __IO uint32_t GATE_CON33;                         /* Address Offset: 0x0884 */
    __IO uint32_t GATE_CON34;                         /* Address Offset: 0x0888 */
    __IO uint32_t GATE_CON35;                         /* Address Offset: 0x088C */
    __IO uint32_t GATE_CON36;                         /* Address Offset: 0x0890 */
    __IO uint32_t GATE_CON37;                         /* Address Offset: 0x0894 */
    __IO uint32_t GATE_CON38;                         /* Address Offset: 0x0898 */
    __IO uint32_t GATE_CON39;                         /* Address Offset: 0x089C */
    __IO uint32_t GATE_CON40;                         /* Address Offset: 0x08A0 */
         uint32_t RESERVED08A4;                       /* Address Offset: 0x08A4 */
    __IO uint32_t GATE_CON42;                         /* Address Offset: 0x08A8 */
    __IO uint32_t GATE_CON43;                         /* Address Offset: 0x08AC */
         uint32_t RESERVED08B0;                       /* Address Offset: 0x08B0 */
    __IO uint32_t GATE_CON45;                         /* Address Offset: 0x08B4 */
         uint32_t RESERVED08B8;                       /* Address Offset: 0x08B8 */
    __IO uint32_t GATE_CON47;                         /* Address Offset: 0x08BC */
    __IO uint32_t GATE_CON48;                         /* Address Offset: 0x08C0 */
    __IO uint32_t GATE_CON49;                         /* Address Offset: 0x08C4 */
    __IO uint32_t GATE_CON50;                         /* Address Offset: 0x08C8 */
    __IO uint32_t GATE_CON51;                         /* Address Offset: 0x08CC */
         uint32_t RESERVED08D0;                       /* Address Offset: 0x08D0 */
    __IO uint32_t GATE_CON53;                         /* Address Offset: 0x08D4 */
    __IO uint32_t GATE_CON54;                         /* Address Offset: 0x08D8 */
         uint32_t RESERVED08DC[4];                    /* Address Offset: 0x08DC */
    __IO uint32_t GATE_CON59;                         /* Address Offset: 0x08EC */
         uint32_t RESERVED08F0;                       /* Address Offset: 0x08F0 */
    __IO uint32_t GATE_CON61;                         /* Address Offset: 0x08F4 */
    __IO uint32_t GATE_CON62;                         /* Address Offset: 0x08F8 */
    __IO uint32_t GATE_CON63;                         /* Address Offset: 0x08FC */
    __IO uint32_t GATE_CON64;                         /* Address Offset: 0x0900 */
    __IO uint32_t GATE_CON65;                         /* Address Offset: 0x0904 */
    __IO uint32_t GATE_CON66;                         /* Address Offset: 0x0908 */
    __IO uint32_t GATE_CON67;                         /* Address Offset: 0x090C */
    __IO uint32_t GATE_CON68;                         /* Address Offset: 0x0910 */
    __IO uint32_t GATE_CON69;                         /* Address Offset: 0x0914 */
         uint32_t RESERVED0918[2];                    /* Address Offset: 0x0918 */
    __IO uint32_t GATE_CON72;                         /* Address Offset: 0x0920 */
         uint32_t RESERVED0924[5];                    /* Address Offset: 0x0924 */
    __IO uint32_t GATE_CON78;                         /* Address Offset: 0x0938 */
    __IO uint32_t GATE_CON79;                         /* Address Offset: 0x093C */
         uint32_t RESERVED0940[49];                   /* Address Offset: 0x0940 */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
    __IO uint32_t SOFTRST_CON02;                      /* Address Offset: 0x0A08 */
         uint32_t RESERVED0A0C[3];                    /* Address Offset: 0x0A0C */
    __IO uint32_t SOFTRST_CON06;                      /* Address Offset: 0x0A18 */
    __IO uint32_t SOFTRST_CON07;                      /* Address Offset: 0x0A1C */
    __IO uint32_t SOFTRST_CON08;                      /* Address Offset: 0x0A20 */
    __IO uint32_t SOFTRST_CON09;                      /* Address Offset: 0x0A24 */
         uint32_t RESERVED0A28;                       /* Address Offset: 0x0A28 */
    __IO uint32_t SOFTRST_CON11;                      /* Address Offset: 0x0A2C */
    __IO uint32_t SOFTRST_CON12;                      /* Address Offset: 0x0A30 */
    __IO uint32_t SOFTRST_CON13;                      /* Address Offset: 0x0A34 */
    __IO uint32_t SOFTRST_CON14;                      /* Address Offset: 0x0A38 */
    __IO uint32_t SOFTRST_CON15;                      /* Address Offset: 0x0A3C */
    __IO uint32_t SOFTRST_CON16;                      /* Address Offset: 0x0A40 */
    __IO uint32_t SOFTRST_CON17;                      /* Address Offset: 0x0A44 */
    __IO uint32_t SOFTRST_CON18;                      /* Address Offset: 0x0A48 */
    __IO uint32_t SOFTRST_CON19;                      /* Address Offset: 0x0A4C */
    __IO uint32_t SOFTRST_CON20;                      /* Address Offset: 0x0A50 */
    __IO uint32_t SOFTRST_CON21;                      /* Address Offset: 0x0A54 */
    __IO uint32_t SOFTRST_CON22;                      /* Address Offset: 0x0A58 */
    __IO uint32_t SOFTRST_CON23;                      /* Address Offset: 0x0A5C */
         uint32_t RESERVED0A60;                       /* Address Offset: 0x0A60 */
    __IO uint32_t SOFTRST_CON25;                      /* Address Offset: 0x0A64 */
    __IO uint32_t SOFTRST_CON26;                      /* Address Offset: 0x0A68 */
    __IO uint32_t SOFTRST_CON27;                      /* Address Offset: 0x0A6C */
    __IO uint32_t SOFTRST_CON28;                      /* Address Offset: 0x0A70 */
    __IO uint32_t SOFTRST_CON29;                      /* Address Offset: 0x0A74 */
         uint32_t RESERVED0A78;                       /* Address Offset: 0x0A78 */
    __IO uint32_t SOFTRST_CON31;                      /* Address Offset: 0x0A7C */
    __IO uint32_t SOFTRST_CON32;                      /* Address Offset: 0x0A80 */
    __IO uint32_t SOFTRST_CON33;                      /* Address Offset: 0x0A84 */
    __IO uint32_t SOFTRST_CON34;                      /* Address Offset: 0x0A88 */
    __IO uint32_t SOFTRST_CON35;                      /* Address Offset: 0x0A8C */
    __IO uint32_t SOFTRST_CON36;                      /* Address Offset: 0x0A90 */
    __IO uint32_t SOFTRST_CON37;                      /* Address Offset: 0x0A94 */
         uint32_t RESERVED0A98[2];                    /* Address Offset: 0x0A98 */
    __IO uint32_t SOFTRST_CON40;                      /* Address Offset: 0x0AA0 */
         uint32_t RESERVED0AA4;                       /* Address Offset: 0x0AA4 */
    __IO uint32_t SOFTRST_CON42;                      /* Address Offset: 0x0AA8 */
    __IO uint32_t SOFTRST_CON43;                      /* Address Offset: 0x0AAC */
         uint32_t RESERVED0AB0;                       /* Address Offset: 0x0AB0 */
    __IO uint32_t SOFTRST_CON45;                      /* Address Offset: 0x0AB4 */
         uint32_t RESERVED0AB8;                       /* Address Offset: 0x0AB8 */
    __IO uint32_t SOFTRST_CON47;                      /* Address Offset: 0x0ABC */
    __IO uint32_t SOFTRST_CON48;                      /* Address Offset: 0x0AC0 */
    __IO uint32_t SOFTRST_CON49;                      /* Address Offset: 0x0AC4 */
    __IO uint32_t SOFTRST_CON50;                      /* Address Offset: 0x0AC8 */
    __IO uint32_t SOFTRST_CON51;                      /* Address Offset: 0x0ACC */
         uint32_t RESERVED0AD0;                       /* Address Offset: 0x0AD0 */
    __IO uint32_t SOFTRST_CON53;                      /* Address Offset: 0x0AD4 */
    __IO uint32_t SOFTRST_CON54;                      /* Address Offset: 0x0AD8 */
         uint32_t RESERVED0ADC[4];                    /* Address Offset: 0x0ADC */
    __IO uint32_t SOFTRST_CON59;                      /* Address Offset: 0x0AEC */
         uint32_t RESERVED0AF0;                       /* Address Offset: 0x0AF0 */
    __IO uint32_t SOFTRST_CON61;                      /* Address Offset: 0x0AF4 */
    __IO uint32_t SOFTRST_CON62;                      /* Address Offset: 0x0AF8 */
    __IO uint32_t SOFTRST_CON63;                      /* Address Offset: 0x0AFC */
    __IO uint32_t SOFTRST_CON64;                      /* Address Offset: 0x0B00 */
    __IO uint32_t SOFTRST_CON65;                      /* Address Offset: 0x0B04 */
    __IO uint32_t SOFTRST_CON66;                      /* Address Offset: 0x0B08 */
    __IO uint32_t SOFTRST_CON67;                      /* Address Offset: 0x0B0C */
    __IO uint32_t SOFTRST_CON68;                      /* Address Offset: 0x0B10 */
    __IO uint32_t SOFTRST_CON69;                      /* Address Offset: 0x0B14 */
         uint32_t RESERVED0B18[2];                    /* Address Offset: 0x0B18 */
    __IO uint32_t SOFTRST_CON72;                      /* Address Offset: 0x0B20 */
         uint32_t RESERVED0B24[2];                    /* Address Offset: 0x0B24 */
    __IO uint32_t SOFTRST_CON75;                      /* Address Offset: 0x0B2C */
         uint32_t RESERVED0B30[2];                    /* Address Offset: 0x0B30 */
    __IO uint32_t SOFTRST_CON78;                      /* Address Offset: 0x0B38 */
    __IO uint32_t SOFTRST_CON79;                      /* Address Offset: 0x0B3C */
         uint32_t RESERVED0B40[48];                   /* Address Offset: 0x0B40 */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x0C00 */
    __IO uint32_t GLBRST_ST;                          /* Address Offset: 0x0C04 */
    __IO uint32_t GLB_SRST_FST_VALUE;                 /* Address Offset: 0x0C08 */
    __IO uint32_t GLB_SRST_SND_VALUE;                 /* Address Offset: 0x0C0C */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x0C10 */
    __IO uint32_t GLBRST_ST_NCLR;                     /* Address Offset: 0x0C14 */
         uint32_t RESERVED0C18[12];                   /* Address Offset: 0x0C18 */
    __IO uint32_t CRU_NON_SECURE_GATING_CON00;        /* Address Offset: 0x0C48 */
         uint32_t RESERVED0C4C[22];                   /* Address Offset: 0x0C4C */
    __IO uint32_t QCHANNEL_CON01;                     /* Address Offset: 0x0CA4 */
         uint32_t RESERVED0CA8[6];                    /* Address Offset: 0x0CA8 */
    __IO uint32_t SMOTH_DIVFREE_CON00;                /* Address Offset: 0x0CC0 */
    __IO uint32_t SMOTH_DIVFREE_CON01;                /* Address Offset: 0x0CC4 */
    __IO uint32_t SMOTH_DIVFREE_CON02;                /* Address Offset: 0x0CC8 */
         uint32_t RESERVED0CCC[2];                    /* Address Offset: 0x0CCC */
    __IO uint32_t FRACDIV_HIGH16BIT_CON00;            /* Address Offset: 0x0CD4 */
    __IO uint32_t FRACDIV_HIGH16BIT_CON01;            /* Address Offset: 0x0CD8 */
    __IO uint32_t FRACDIV_HIGH16BIT_CON02;            /* Address Offset: 0x0CDC */
    __IO uint32_t FRACDIV_HIGH16BIT_CON03;            /* Address Offset: 0x0CE0 */
         uint32_t RESERVED0CE4[11];                   /* Address Offset: 0x0CE4 */
    __IO uint32_t AUTOCS_HCLK_TOP_BIU_CON0;           /* Address Offset: 0x0D10 */
    __IO uint32_t AUTOCS_HCLK_TOP_BIU_CON1;           /* Address Offset: 0x0D14 */
         uint32_t RESERVED0D18[2];                    /* Address Offset: 0x0D18 */
    __IO uint32_t AUTOCS_ACLK_BUS_ROOT_CON0;          /* Address Offset: 0x0D20 */
    __IO uint32_t AUTOCS_ACLK_BUS_ROOT_CON1;          /* Address Offset: 0x0D24 */
    __IO uint32_t AUTOCS_PCLK_BUS_ROOT_CON0;          /* Address Offset: 0x0D28 */
    __IO uint32_t AUTOCS_PCLK_BUS_ROOT_CON1;          /* Address Offset: 0x0D2C */
         uint32_t RESERVED0D30[2];                    /* Address Offset: 0x0D30 */
    __IO uint32_t AUTOCS_HCLK_RKNN_ROOT_CON0;         /* Address Offset: 0x0D38 */
    __IO uint32_t AUTOCS_HCLK_RKNN_ROOT_CON1;         /* Address Offset: 0x0D3C */
    __IO uint32_t AUTOCS_ACLK_NVM_ROOT_CON0;          /* Address Offset: 0x0D40 */
    __IO uint32_t AUTOCS_ACLK_NVM_ROOT_CON1;          /* Address Offset: 0x0D44 */
    __IO uint32_t AUTOCS_ACLK_PHP_ROOT_CON0;          /* Address Offset: 0x0D48 */
    __IO uint32_t AUTOCS_ACLK_PHP_ROOT_CON1;          /* Address Offset: 0x0D4C */
    __IO uint32_t AUTOCS_ACLK_RKVDEC_ROOT_CON0;       /* Address Offset: 0x0D50 */
    __IO uint32_t AUTOCS_ACLK_RKVDEC_ROOT_CON1;       /* Address Offset: 0x0D54 */
         uint32_t RESERVED0D58[4];                    /* Address Offset: 0x0D58 */
    __IO uint32_t AUTOCS_ACLK_USB_ROOT_CON0;          /* Address Offset: 0x0D68 */
    __IO uint32_t AUTOCS_ACLK_USB_ROOT_CON1;          /* Address Offset: 0x0D6C */
    __IO uint32_t AUTOCS_ACLK_VPU_ROOT_CON0;          /* Address Offset: 0x0D70 */
    __IO uint32_t AUTOCS_ACLK_VPU_ROOT_CON1;          /* Address Offset: 0x0D74 */
    __IO uint32_t AUTOCS_ACLK_VPU_LOW_ROOT_CON0;      /* Address Offset: 0x0D78 */
    __IO uint32_t AUTOCS_ACLK_VPU_LOW_ROOT_CON1;      /* Address Offset: 0x0D7C */
    __IO uint32_t AUTOCS_ACLK_JPEG_ROOT_CON0;         /* Address Offset: 0x0D80 */
    __IO uint32_t AUTOCS_ACLK_JPEG_ROOT_CON1;         /* Address Offset: 0x0D84 */
    __IO uint32_t AUTOCS_ACLK_VEPU0_ROOT_CON0;        /* Address Offset: 0x0D88 */
    __IO uint32_t AUTOCS_ACLK_VEPU0_ROOT_CON1;        /* Address Offset: 0x0D8C */
         uint32_t RESERVED0D90[2];                    /* Address Offset: 0x0D90 */
    __IO uint32_t AUTOCS_ACLK_VI_ROOT_CON0;           /* Address Offset: 0x0D98 */
    __IO uint32_t AUTOCS_ACLK_VI_ROOT_CON1;           /* Address Offset: 0x0D9C */
    __IO uint32_t AUTOCS_ACLK_VOP_ROOT_CON0;          /* Address Offset: 0x0DA0 */
    __IO uint32_t AUTOCS_ACLK_VOP_ROOT_CON1;          /* Address Offset: 0x0DA4 */
         uint32_t RESERVED0DA8[2];                    /* Address Offset: 0x0DA8 */
    __IO uint32_t AUTOCS_ACLK_VPU_MID_ROOT_CON0;      /* Address Offset: 0x0DB0 */
    __IO uint32_t AUTOCS_ACLK_VPU_MID_ROOT_CON1;      /* Address Offset: 0x0DB4 */
    __IO uint32_t AUTOCS_ACLK_TOP_BIU_CON0;           /* Address Offset: 0x0DB8 */
    __IO uint32_t AUTOCS_ACLK_TOP_BIU_CON1;           /* Address Offset: 0x0DBC */
         uint32_t RESERVED0DC0[10];                   /* Address Offset: 0x0DC0 */
    __IO uint32_t AUTOCS_ACLK_CENTER_ROOT_CON0;       /* Address Offset: 0x0DE8 */
    __IO uint32_t AUTOCS_ACLK_CENTER_ROOT_CON1;       /* Address Offset: 0x0DEC */
    __IO uint32_t AUTOCS_ACLK_CENTER_LOW_ROOT_CON0;   /* Address Offset: 0x0DF0 */
    __IO uint32_t AUTOCS_ACLK_CENTER_LOW_ROOT_CON1;   /* Address Offset: 0x0DF4 */
         uint32_t RESERVED0DF8[8];                    /* Address Offset: 0x0DF8 */
    __IO uint32_t AUTOCS_HCLK_BUS_CM0_ROOT_CON0;      /* Address Offset: 0x0E18 */
    __IO uint32_t AUTOCS_HCLK_BUS_CM0_ROOT_CON1;      /* Address Offset: 0x0E1C */
    __IO uint32_t AUTOCS_PCLK_NPUTOP_ROOT_CON0;       /* Address Offset: 0x0E20 */
    __IO uint32_t AUTOCS_PCLK_NPUTOP_ROOT_CON1;       /* Address Offset: 0x0E24 */
    __IO uint32_t AUTOCS_HCLK_NPU_CM0_ROOT_CON0;      /* Address Offset: 0x0E28 */
    __IO uint32_t AUTOCS_HCLK_NPU_CM0_ROOT_CON1;      /* Address Offset: 0x0E2C */
    __IO uint32_t AUTOCS_HCLK_NVM_ROOT_CON0;          /* Address Offset: 0x0E30 */
    __IO uint32_t AUTOCS_HCLK_NVM_ROOT_CON1;          /* Address Offset: 0x0E34 */
    __IO uint32_t AUTOCS_PCLK_PHP_ROOT_CON0;          /* Address Offset: 0x0E38 */
    __IO uint32_t AUTOCS_PCLK_PHP_ROOT_CON1;          /* Address Offset: 0x0E3C */
         uint32_t RESERVED0E40[2];                    /* Address Offset: 0x0E40 */
    __IO uint32_t AUTOCS_HCLK_RKVDEC_ROOT_CON0;       /* Address Offset: 0x0E48 */
    __IO uint32_t AUTOCS_HCLK_RKVDEC_ROOT_CON1;       /* Address Offset: 0x0E4C */
         uint32_t RESERVED0E50[2];                    /* Address Offset: 0x0E50 */
    __IO uint32_t AUTOCS_PCLK_TOP_ROOT_CON0;          /* Address Offset: 0x0E58 */
    __IO uint32_t AUTOCS_PCLK_TOP_ROOT_CON1;          /* Address Offset: 0x0E5C */
         uint32_t RESERVED0E60[4];                    /* Address Offset: 0x0E60 */
    __IO uint32_t AUTOCS_PCLK_USB_ROOT_CON0;          /* Address Offset: 0x0E70 */
    __IO uint32_t AUTOCS_PCLK_USB_ROOT_CON1;          /* Address Offset: 0x0E74 */
    __IO uint32_t AUTOCS_HCLK_VPU_ROOT_CON0;          /* Address Offset: 0x0E78 */
    __IO uint32_t AUTOCS_HCLK_VPU_ROOT_CON1;          /* Address Offset: 0x0E7C */
    __IO uint32_t AUTOCS_HCLK_VEPU0_ROOT_CON0;        /* Address Offset: 0x0E80 */
    __IO uint32_t AUTOCS_HCLK_VEPU0_ROOT_CON1;        /* Address Offset: 0x0E84 */
         uint32_t RESERVED0E88[2];                    /* Address Offset: 0x0E88 */
    __IO uint32_t AUTOCS_HCLK_VI_ROOT_CON0;           /* Address Offset: 0x0E90 */
    __IO uint32_t AUTOCS_HCLK_VI_ROOT_CON1;           /* Address Offset: 0x0E94 */
    __IO uint32_t AUTOCS_PCLK_VI_ROOT_CON0;           /* Address Offset: 0x0E98 */
    __IO uint32_t AUTOCS_PCLK_VI_ROOT_CON1;           /* Address Offset: 0x0E9C */
         uint32_t RESERVED0EA0[2];                    /* Address Offset: 0x0EA0 */
    __IO uint32_t AUTOCS_HCLK_VOP_ROOT_CON0;          /* Address Offset: 0x0EA8 */
    __IO uint32_t AUTOCS_HCLK_VOP_ROOT_CON1;          /* Address Offset: 0x0EAC */
    __IO uint32_t AUTOCS_PCLK_VOP_ROOT_CON0;          /* Address Offset: 0x0EB0 */
    __IO uint32_t AUTOCS_PCLK_VOP_ROOT_CON1;          /* Address Offset: 0x0EB4 */
    __IO uint32_t AUTOCS_HCLK_VO0_ROOT_CON0;          /* Address Offset: 0x0EB8 */
    __IO uint32_t AUTOCS_HCLK_VO0_ROOT_CON1;          /* Address Offset: 0x0EBC */
         uint32_t RESERVED0EC0[8];                    /* Address Offset: 0x0EC0 */
    __IO uint32_t AUTOCS_ACLK_TOP_MID_BIU_CON0;       /* Address Offset: 0x0EE0 */
    __IO uint32_t AUTOCS_ACLK_TOP_MID_BIU_CON1;       /* Address Offset: 0x0EE4 */
    __IO uint32_t AUTOCS_PCLK_VO1_ROOT_CON0;          /* Address Offset: 0x0EE8 */
    __IO uint32_t AUTOCS_PCLK_VO1_ROOT_CON1;          /* Address Offset: 0x0EEC */
    __IO uint32_t AUTOCS_HCLK_VO1_ROOT_CON0;          /* Address Offset: 0x0EF0 */
    __IO uint32_t AUTOCS_HCLK_VO1_ROOT_CON1;          /* Address Offset: 0x0EF4 */
         uint32_t RESERVED0EF8[2];                    /* Address Offset: 0x0EF8 */
    __IO uint32_t AUTOCS_HCLK_DDR_ROOT_CON0;          /* Address Offset: 0x0F00 */
    __IO uint32_t AUTOCS_HCLK_DDR_ROOT_CON1;          /* Address Offset: 0x0F04 */
    __IO uint32_t AUTOCS_PCLK_CENTER_ROOT_CON0;       /* Address Offset: 0x0F08 */
    __IO uint32_t AUTOCS_PCLK_CENTER_ROOT_CON1;       /* Address Offset: 0x0F0C */
    __IO uint32_t AUTOCS_ACLK_DDR_ROOT_CON0;          /* Address Offset: 0x0F10 */
    __IO uint32_t AUTOCS_ACLK_DDR_ROOT_CON1;          /* Address Offset: 0x0F14 */
    __IO uint32_t AUTOCS_ACLK_VO1_ROOT_CON0;          /* Address Offset: 0x0F18 */
    __IO uint32_t AUTOCS_ACLK_VO1_ROOT_CON1;          /* Address Offset: 0x0F1C */
    __IO uint32_t AUTOCS_HCLK_CENTER_ROOT_CON0;       /* Address Offset: 0x0F20 */
    __IO uint32_t AUTOCS_HCLK_CENTER_ROOT_CON1;       /* Address Offset: 0x0F24 */
         uint32_t RESERVED0F28[2];                    /* Address Offset: 0x0F28 */
    __IO uint32_t AUTOCS_CLK_GPU_INNER_CON0;          /* Address Offset: 0x0F30 */
    __IO uint32_t AUTOCS_CLK_GPU_INNER_CON1;          /* Address Offset: 0x0F34 */
         uint32_t RESERVED0F38[2];                    /* Address Offset: 0x0F38 */
    __IO uint32_t AUTOCS_HCLK_AUDIO_ROOT_CON0;        /* Address Offset: 0x0F40 */
    __IO uint32_t AUTOCS_HCLK_AUDIO_ROOT_CON1;        /* Address Offset: 0x0F44 */
         uint32_t RESERVED0F48[2];                    /* Address Offset: 0x0F48 */
    __IO uint32_t AUTOCS_PCLK_DDR_ROOT_CON0;          /* Address Offset: 0x0F50 */
    __IO uint32_t AUTOCS_PCLK_DDR_ROOT_CON1;          /* Address Offset: 0x0F54 */
    __IO uint32_t AUTOCS_CLK_ISP0_CORE_ROOT_CON0;     /* Address Offset: 0x0F58 */
    __IO uint32_t AUTOCS_CLK_ISP0_CORE_ROOT_CON1;     /* Address Offset: 0x0F5C */
    __IO uint32_t AUTOCS_CLK_VEPU0_CORE_ROOT_CON0;    /* Address Offset: 0x0F60 */
    __IO uint32_t AUTOCS_CLK_VEPU0_CORE_ROOT_CON1;    /* Address Offset: 0x0F64 */
    __IO uint32_t AUTOCS_ACLK_VEPU1_ROOT_CON0;        /* Address Offset: 0x0F68 */
    __IO uint32_t AUTOCS_ACLK_VEPU1_ROOT_CON1;        /* Address Offset: 0x0F6C */
    __IO uint32_t AUTOCS_HCLK_VEPU1_ROOT_CON0;        /* Address Offset: 0x0F70 */
    __IO uint32_t AUTOCS_HCLK_VEPU1_ROOT_CON1;        /* Address Offset: 0x0F74 */
    __IO uint32_t AUTOCS_CLK_VEPU1_CORE_ROOT_CON0;    /* Address Offset: 0x0F78 */
    __IO uint32_t AUTOCS_CLK_VEPU1_CORE_ROOT_CON1;    /* Address Offset: 0x0F7C */
};
/* PHPTOPCRU Register Structure Define */
struct PHPTOPCRU_REG {
         uint32_t RESERVED0000[128];                  /* Address Offset: 0x0000 */
    __IO uint32_t PPLL_CON0;                          /* Address Offset: 0x0200 */
    __IO uint32_t PPLL_CON1;                          /* Address Offset: 0x0204 */
    __IO uint32_t PPLL_CON2;                          /* Address Offset: 0x0208 */
    __IO uint32_t PPLL_CON3;                          /* Address Offset: 0x020C */
    __IO uint32_t PPLL_CON4;                          /* Address Offset: 0x0210 */
    __IO uint32_t PPLL_CON5;                          /* Address Offset: 0x0214 */
    __IO uint32_t PPLL_CON6;                          /* Address Offset: 0x0218 */
         uint32_t RESERVED021C[57];                   /* Address Offset: 0x021C */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
    __IO uint32_t CLKSEL_CON01;                       /* Address Offset: 0x0304 */
         uint32_t RESERVED0308[318];                  /* Address Offset: 0x0308 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
};
/* SECURECRU Register Structure Define */
struct SECURECRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
         uint32_t RESERVED0804[127];                  /* Address Offset: 0x0804 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
         uint32_t RESERVED0A04[193];                  /* Address Offset: 0x0A04 */
    __IO uint32_t AUTOCS_HCLK_SECURE_NS_ROOT_CON0;    /* Address Offset: 0x0D08 */
    __IO uint32_t AUTOCS_HCLK_SECURE_NS_ROOT_CON1;    /* Address Offset: 0x0D0C */
         uint32_t RESERVED0D10[52];                   /* Address Offset: 0x0D10 */
    __IO uint32_t AUTOCS_PCLK_SECURE_NS_ROOT_CON0;    /* Address Offset: 0x0DE0 */
    __IO uint32_t AUTOCS_PCLK_SECURE_NS_ROOT_CON1;    /* Address Offset: 0x0DE4 */
         uint32_t RESERVED0DE8[3206];                 /* Address Offset: 0x0DE8 */
    __IO uint32_t CLKSEL_CON10;                       /* Address Offset: 0x4000 */
    __IO uint32_t CLKSEL_CON11;                       /* Address Offset: 0x4004 */
         uint32_t RESERVED4008[2];                    /* Address Offset: 0x4008 */
    __IO uint32_t CLKSEL_CON14;                       /* Address Offset: 0x4010 */
         uint32_t RESERVED4014;                       /* Address Offset: 0x4014 */
    __IO uint32_t CLKSEL_CON16;                       /* Address Offset: 0x4018 */
         uint32_t RESERVED401C[3];                    /* Address Offset: 0x401C */
    __IO uint32_t GATE_CON10;                         /* Address Offset: 0x4028 */
    __IO uint32_t GATE_CON11;                         /* Address Offset: 0x402C */
    __IO uint32_t GATE_CON12;                         /* Address Offset: 0x4030 */
    __IO uint32_t GATE_CON13;                         /* Address Offset: 0x4034 */
    __IO uint32_t GATE_CON14;                         /* Address Offset: 0x4038 */
    __IO uint32_t GATE_CON15;                         /* Address Offset: 0x403C */
         uint32_t RESERVED4040[4];                    /* Address Offset: 0x4040 */
    __IO uint32_t SOFTRST_CON10;                      /* Address Offset: 0x4050 */
    __IO uint32_t SOFTRST_CON11;                      /* Address Offset: 0x4054 */
    __IO uint32_t SOFTRST_CON12;                      /* Address Offset: 0x4058 */
    __IO uint32_t SOFTRST_CON13;                      /* Address Offset: 0x405C */
    __IO uint32_t SOFTRST_CON14;                      /* Address Offset: 0x4060 */
    __IO uint32_t SOFTRST_CON15;                      /* Address Offset: 0x4064 */
         uint32_t RESERVED4068[110];                  /* Address Offset: 0x4068 */
    __IO uint32_t SPLL_CON0;                          /* Address Offset: 0x4220 */
    __IO uint32_t SPLL_CON1;                          /* Address Offset: 0x4224 */
         uint32_t RESERVED4228[2];                    /* Address Offset: 0x4228 */
    __IO uint32_t SPLL_CON4;                          /* Address Offset: 0x4230 */
    __IO uint32_t SPLL_CON5;                          /* Address Offset: 0x4234 */
    __IO uint32_t SPLL_CON6;                          /* Address Offset: 0x4238 */
         uint32_t RESERVED423C[17];                   /* Address Offset: 0x423C */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x4280 */
         uint32_t RESERVED4284[675];                  /* Address Offset: 0x4284 */
    __IO uint32_t AUTOCS_ACLK_SECURE_S_ROOT_CON0;     /* Address Offset: 0x4D10 */
    __IO uint32_t AUTOCS_ACLK_SECURE_S_ROOT_CON1;     /* Address Offset: 0x4D14 */
    __IO uint32_t AUTOCS_HCLK_SECURE_S_ROOT_CON0;     /* Address Offset: 0x4D18 */
    __IO uint32_t AUTOCS_HCLK_SECURE_S_ROOT_CON1;     /* Address Offset: 0x4D1C */
    __IO uint32_t AUTOCS_PCLK_SECURE_S_ROOT_CON0;     /* Address Offset: 0x4D20 */
    __IO uint32_t AUTOCS_PCLK_SECURE_S_ROOT_CON1;     /* Address Offset: 0x4D24 */
};
/* PMU1CRU Register Structure Define */
struct PMU1CRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[2];                    /* Address Offset: 0x0304 */
    __IO uint32_t CLKSEL_CON03;                       /* Address Offset: 0x030C */
    __IO uint32_t CLKSEL_CON04;                       /* Address Offset: 0x0310 */
    __IO uint32_t CLKSEL_CON05;                       /* Address Offset: 0x0314 */
    __IO uint32_t CLKSEL_CON06;                       /* Address Offset: 0x0318 */
         uint32_t RESERVED031C;                       /* Address Offset: 0x031C */
    __IO uint32_t CLKSEL_CON08;                       /* Address Offset: 0x0320 */
         uint32_t RESERVED0324[2];                    /* Address Offset: 0x0324 */
    __IO uint32_t CLKSEL_CON11;                       /* Address Offset: 0x032C */
         uint32_t RESERVED0330[8];                    /* Address Offset: 0x0330 */
    __IO uint32_t CLKSEL_CON20;                       /* Address Offset: 0x0350 */
    __IO uint32_t CLKSEL_CON21;                       /* Address Offset: 0x0354 */
         uint32_t RESERVED0358[298];                  /* Address Offset: 0x0358 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
    __IO uint32_t GATE_CON02;                         /* Address Offset: 0x0808 */
    __IO uint32_t GATE_CON03;                         /* Address Offset: 0x080C */
    __IO uint32_t GATE_CON04;                         /* Address Offset: 0x0810 */
    __IO uint32_t GATE_CON05;                         /* Address Offset: 0x0814 */
    __IO uint32_t GATE_CON06;                         /* Address Offset: 0x0818 */
    __IO uint32_t GATE_CON07;                         /* Address Offset: 0x081C */
         uint32_t RESERVED0820[120];                  /* Address Offset: 0x0820 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
    __IO uint32_t SOFTRST_CON02;                      /* Address Offset: 0x0A08 */
    __IO uint32_t SOFTRST_CON03;                      /* Address Offset: 0x0A0C */
    __IO uint32_t SOFTRST_CON04;                      /* Address Offset: 0x0A10 */
    __IO uint32_t SOFTRST_CON05;                      /* Address Offset: 0x0A14 */
    __IO uint32_t SOFTRST_CON06;                      /* Address Offset: 0x0A18 */
    __IO uint32_t SOFTRST_CON07;                      /* Address Offset: 0x0A1C */
         uint32_t RESERVED0A20[56];                   /* Address Offset: 0x0A20 */
    __IO uint32_t AUTOCS_PCLK_PMU0_ROOT_SRC_CON0;     /* Address Offset: 0x0B00 */
    __IO uint32_t AUTOCS_PCLK_PMU0_ROOT_SRC_CON1;     /* Address Offset: 0x0B04 */
    __IO uint32_t AUTOCS_HCLK_PMU1_ROOT_SRC_CON0;     /* Address Offset: 0x0B08 */
    __IO uint32_t AUTOCS_HCLK_PMU1_ROOT_SRC_CON1;     /* Address Offset: 0x0B0C */
    __IO uint32_t AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0;  /* Address Offset: 0x0B10 */
    __IO uint32_t AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1;  /* Address Offset: 0x0B14 */
         uint32_t RESERVED0B18[10];                   /* Address Offset: 0x0B18 */
    __IO uint32_t DEEPSLOW_DETECT_CON;                /* Address Offset: 0x0B40 */
    __IO uint32_t DEEPSLOW_DETECT_ST;                 /* Address Offset: 0x0B44 */
         uint32_t RESERVED0B48[3374];                 /* Address Offset: 0x0B48 */
    __IO uint32_t CLKSEL_CON30;                       /* Address Offset: 0x4000 */
         uint32_t RESERVED4004;                       /* Address Offset: 0x4004 */
    __IO uint32_t CLKSEL_CON32;                       /* Address Offset: 0x4008 */
         uint32_t RESERVED400C[7];                    /* Address Offset: 0x400C */
    __IO uint32_t GATE_CON10;                         /* Address Offset: 0x4028 */
         uint32_t RESERVED402C;                       /* Address Offset: 0x402C */
    __IO uint32_t GATE_CON12;                         /* Address Offset: 0x4030 */
         uint32_t RESERVED4034[7];                    /* Address Offset: 0x4034 */
    __IO uint32_t SOFTRST_CON10;                      /* Address Offset: 0x4050 */
         uint32_t RESERVED4054;                       /* Address Offset: 0x4054 */
    __IO uint32_t SOFTRST_CON12;                      /* Address Offset: 0x4058 */
};
/* DDR0CRU Register Structure Define */
struct DDR0CRU_REG {
    __IO uint32_t D0APLL_CON0;                        /* Address Offset: 0x0000 */
    __IO uint32_t D0APLL_CON1;                        /* Address Offset: 0x0004 */
    __IO uint32_t D0APLL_CON2;                        /* Address Offset: 0x0008 */
    __IO uint32_t D0APLL_CON3;                        /* Address Offset: 0x000C */
    __IO uint32_t D0APLL_CON4;                        /* Address Offset: 0x0010 */
    __IO uint32_t D0APLL_CON5;                        /* Address Offset: 0x0014 */
    __IO uint32_t D0APLL_CON6;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t D0BPLL_CON0;                        /* Address Offset: 0x0020 */
    __IO uint32_t D0BPLL_CON1;                        /* Address Offset: 0x0024 */
    __IO uint32_t D0BPLL_CON2;                        /* Address Offset: 0x0028 */
    __IO uint32_t D0BPLL_CON3;                        /* Address Offset: 0x002C */
    __IO uint32_t D0BPLL_CON4;                        /* Address Offset: 0x0030 */
    __IO uint32_t D0BPLL_CON5;                        /* Address Offset: 0x0034 */
    __IO uint32_t D0BPLL_CON6;                        /* Address Offset: 0x0038 */
         uint32_t RESERVED003C[177];                  /* Address Offset: 0x003C */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
         uint32_t RESERVED0804[127];                  /* Address Offset: 0x0804 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
};
/* DDR1CRU Register Structure Define */
struct DDR1CRU_REG {
    __IO uint32_t D1APLL_CON0;                        /* Address Offset: 0x0000 */
    __IO uint32_t D1APLL_CON1;                        /* Address Offset: 0x0004 */
    __IO uint32_t D1APLL_CON2;                        /* Address Offset: 0x0008 */
    __IO uint32_t D1APLL_CON3;                        /* Address Offset: 0x000C */
    __IO uint32_t D1APLL_CON4;                        /* Address Offset: 0x0010 */
    __IO uint32_t D1APLL_CON5;                        /* Address Offset: 0x0014 */
    __IO uint32_t D1APLL_CON6;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t D1BPLL_CON0;                        /* Address Offset: 0x0020 */
    __IO uint32_t D1BPLL_CON1;                        /* Address Offset: 0x0024 */
    __IO uint32_t D1BPLL_CON2;                        /* Address Offset: 0x0028 */
    __IO uint32_t D1BPLL_CON3;                        /* Address Offset: 0x002C */
    __IO uint32_t D1BPLL_CON4;                        /* Address Offset: 0x0030 */
    __IO uint32_t D1BPLL_CON5;                        /* Address Offset: 0x0034 */
    __IO uint32_t D1BPLL_CON6;                        /* Address Offset: 0x0038 */
         uint32_t RESERVED003C[177];                  /* Address Offset: 0x003C */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
         uint32_t RESERVED0804[127];                  /* Address Offset: 0x0804 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
};
/* BIGCORECRU Register Structure Define */
struct BIGCORECRU_REG {
         uint32_t RESERVED0000[160];                  /* Address Offset: 0x0000 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
    __IO uint32_t CLKSEL_CON01;                       /* Address Offset: 0x0304 */
    __IO uint32_t CLKSEL_CON02;                       /* Address Offset: 0x0308 */
    __IO uint32_t CLKSEL_CON03;                       /* Address Offset: 0x030C */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
         uint32_t RESERVED0A08;                       /* Address Offset: 0x0A08 */
    __IO uint32_t SOFTRST_CON03;                      /* Address Offset: 0x0A0C */
         uint32_t RESERVED0A10[172];                  /* Address Offset: 0x0A10 */
    __IO uint32_t SMOTH_DIVFREE_CON00;                /* Address Offset: 0x0CC0 */
         uint32_t RESERVED0CC4[153];                  /* Address Offset: 0x0CC4 */
    __IO uint32_t AUTOCS_CLK_BIGCORE_SRC_CON0;        /* Address Offset: 0x0F28 */
    __IO uint32_t AUTOCS_CLK_BIGCORE_SRC_CON1;        /* Address Offset: 0x0F2C */
};
/* LITCORECRU Register Structure Define */
struct LITCORECRU_REG {
         uint32_t RESERVED0000[160];                  /* Address Offset: 0x0000 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t CLKSEL_CON00;                       /* Address Offset: 0x0300 */
    __IO uint32_t CLKSEL_CON01;                       /* Address Offset: 0x0304 */
    __IO uint32_t CLKSEL_CON02;                       /* Address Offset: 0x0308 */
    __IO uint32_t CLKSEL_CON03;                       /* Address Offset: 0x030C */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t GATE_CON00;                         /* Address Offset: 0x0800 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t SOFTRST_CON00;                      /* Address Offset: 0x0A00 */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
         uint32_t RESERVED0A08;                       /* Address Offset: 0x0A08 */
    __IO uint32_t SOFTRST_CON03;                      /* Address Offset: 0x0A0C */
         uint32_t RESERVED0A10[172];                  /* Address Offset: 0x0A10 */
    __IO uint32_t SMOTH_DIVFREE_CON00;                /* Address Offset: 0x0CC0 */
         uint32_t RESERVED0CC4[157];                  /* Address Offset: 0x0CC4 */
    __IO uint32_t AUTOCS_CLK_LITCORE_SRC_CON0;        /* Address Offset: 0x0F38 */
    __IO uint32_t AUTOCS_CLK_LITCORE_SRC_CON1;        /* Address Offset: 0x0F3C */
};
/* CCICRU Register Structure Define */
struct CCICRU_REG {
         uint32_t RESERVED0000[16];                   /* Address Offset: 0x0000 */
    __IO uint32_t LPLL_CON0;                          /* Address Offset: 0x0040 */
    __IO uint32_t LPLL_CON1;                          /* Address Offset: 0x0044 */
         uint32_t RESERVED0048[2];                    /* Address Offset: 0x0048 */
    __IO uint32_t LPLL_CON4;                          /* Address Offset: 0x0050 */
    __IO uint32_t LPLL_CON5;                          /* Address Offset: 0x0054 */
    __IO uint32_t LPLL_CON6;                          /* Address Offset: 0x0058 */
         uint32_t RESERVED005C[173];                  /* Address Offset: 0x005C */
    __IO uint32_t CLKSEL_CON04;                       /* Address Offset: 0x0310 */
         uint32_t RESERVED0314[316];                  /* Address Offset: 0x0314 */
    __IO uint32_t GATE_CON01;                         /* Address Offset: 0x0804 */
    __IO uint32_t GATE_CON02;                         /* Address Offset: 0x0808 */
         uint32_t RESERVED080C[126];                  /* Address Offset: 0x080C */
    __IO uint32_t SOFTRST_CON01;                      /* Address Offset: 0x0A04 */
    __IO uint32_t SOFTRST_CON02;                      /* Address Offset: 0x0A08 */
         uint32_t RESERVED0A0C[145];                  /* Address Offset: 0x0A0C */
    __IO uint32_t AUTOCS_CTRL_BIGCORE_EXTRA_CCI;      /* Address Offset: 0x0C50 */
    __IO uint32_t AUTOCS_CTRL_LITCORE_EXTRA_CCI;      /* Address Offset: 0x0C54 */
    __IO uint32_t AUTOCS_CTRL_CCI2CORE;               /* Address Offset: 0x0C58 */
         uint32_t RESERVED0C5C[41];                   /* Address Offset: 0x0C5C */
    __IO uint32_t AUTOCS_ACLK_CCI_ROOT_CON0;          /* Address Offset: 0x0D00 */
    __IO uint32_t AUTOCS_ACLK_CCI_ROOT_CON1;          /* Address Offset: 0x0D04 */
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
#define CRU_BASE                       (0x27200000U + MCU_OFFSET) /* CRU base address */
#define PHPTOPCRU_BASE                 (0x27208000U + MCU_OFFSET) /* PHPTOPCRU base address */
#define SECURECRU_BASE                 (0x27210000U + MCU_OFFSET) /* SECURECRU base address */
#define PMU1CRU_BASE                   (0x27220000U + MCU_OFFSET) /* PMU1CRU base address */
#define DDR0CRU_BASE                   (0x27228000U + MCU_OFFSET) /* DDR0CRU base address */
#define DDR1CRU_BASE                   (0x27230000U + MCU_OFFSET) /* DDR1CRU base address */
#define BIGCORECRU_BASE                (0x27238000U + MCU_OFFSET) /* BIGCORECRU base address */
#define LITCORECRU_BASE                (0x27240000U + MCU_OFFSET) /* LITCORECRU base address */
#define CCICRU_BASE                    (0x27248000U + MCU_OFFSET) /* CCICRU base address */
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
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define PHPTOPCRU           ((struct PHPTOPCRU_REG *) PHPTOPCRU_BASE)
#define SECURECRU           ((struct SECURECRU_REG *) SECURECRU_BASE)
#define PMU1CRU             ((struct PMU1CRU_REG *) PMU1CRU_BASE)
#define DDR0CRU             ((struct DDR0CRU_REG *) DDR0CRU_BASE)
#define DDR1CRU             ((struct DDR1CRU_REG *) DDR1CRU_BASE)
#define BIGCORECRU          ((struct BIGCORECRU_REG *) BIGCORECRU_BASE)
#define LITCORECRU          ((struct LITCORECRU_REG *) LITCORECRU_BASE)
#define CCICRU              ((struct CCICRU_REG *) CCICRU_BASE)
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
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_PHPTOPCRU_INSTANCE(instance) ((instance) == PHPTOPCRU)
#define IS_SECURECRU_INSTANCE(instance) ((instance) == SECURECRU)
#define IS_PMU1CRU_INSTANCE(instance) ((instance) == PMU1CRU)
#define IS_DDR0CRU_INSTANCE(instance) ((instance) == DDR0CRU)
#define IS_DDR1CRU_INSTANCE(instance) ((instance) == DDR1CRU)
#define IS_BIGCORECRU_INSTANCE(instance) ((instance) == BIGCORECRU)
#define IS_LITCORECRU_INSTANCE(instance) ((instance) == LITCORECRU)
#define IS_CCICRU_INSTANCE(instance) ((instance) == CCICRU)
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
#define GPIO4_IOC_GPIO4D_IOMUX_SEL_L_OFFSET                (0xB398U)
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
#define GPIO4_IOC_GPIO4D_DS_L_OFFSET                       (0xB098U)
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
#define GPIO4_IOC_GPIO4D_PULL_OFFSET                       (0xB14CU)
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
#define GPIO4_IOC_GPIO4D_IE_OFFSET                         (0xB1BCU)
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
#define GPIO4_IOC_GPIO4D_SMT_OFFSET                        (0xB24CU)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_SHIFT             (0U)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4D_SMT_GPIO4D0_SMT_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_SHIFT             (1U)
#define GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_MASK              (0x1U << GPIO4_IOC_GPIO4D_SMT_GPIO4D1_SMT_SHIFT)             /* 0x00000002 */
/******************************************CRU*******************************************/
/* BPLL_CON0 */
#define CRU_BPLL_CON0_OFFSET                               (0x0U)
#define CRU_BPLL_CON0_BPLL_M_SHIFT                         (0U)
#define CRU_BPLL_CON0_BPLL_M_MASK                          (0x3FFU << CRU_BPLL_CON0_BPLL_M_SHIFT)                       /* 0x000003FF */
#define CRU_BPLL_CON0_BPLL_BP_SHIFT                        (15U)
#define CRU_BPLL_CON0_BPLL_BP_MASK                         (0x1U << CRU_BPLL_CON0_BPLL_BP_SHIFT)                        /* 0x00008000 */
/* BPLL_CON1 */
#define CRU_BPLL_CON1_OFFSET                               (0x4U)
#define CRU_BPLL_CON1_BPLL_P_SHIFT                         (0U)
#define CRU_BPLL_CON1_BPLL_P_MASK                          (0x3FU << CRU_BPLL_CON1_BPLL_P_SHIFT)                        /* 0x0000003F */
#define CRU_BPLL_CON1_BPLL_S_SHIFT                         (6U)
#define CRU_BPLL_CON1_BPLL_S_MASK                          (0x7U << CRU_BPLL_CON1_BPLL_S_SHIFT)                         /* 0x000001C0 */
#define CRU_BPLL_CON1_BPLL_RESETB_SHIFT                    (13U)
#define CRU_BPLL_CON1_BPLL_RESETB_MASK                     (0x1U << CRU_BPLL_CON1_BPLL_RESETB_SHIFT)                    /* 0x00002000 */
/* BPLL_CON4 */
#define CRU_BPLL_CON4_OFFSET                               (0x10U)
#define CRU_BPLL_CON4_BPLL_ICP_SHIFT                       (1U)
#define CRU_BPLL_CON4_BPLL_ICP_MASK                        (0x3U << CRU_BPLL_CON4_BPLL_ICP_SHIFT)                       /* 0x00000006 */
#define CRU_BPLL_CON4_BPLL_AFC_ENB_SHIFT                   (3U)
#define CRU_BPLL_CON4_BPLL_AFC_ENB_MASK                    (0x1U << CRU_BPLL_CON4_BPLL_AFC_ENB_SHIFT)                   /* 0x00000008 */
#define CRU_BPLL_CON4_BPLL_EXTAFC_SHIFT                    (4U)
#define CRU_BPLL_CON4_BPLL_EXTAFC_MASK                     (0x1FU << CRU_BPLL_CON4_BPLL_EXTAFC_SHIFT)                   /* 0x000001F0 */
#define CRU_BPLL_CON4_BPLL_FEED_EN_SHIFT                   (14U)
#define CRU_BPLL_CON4_BPLL_FEED_EN_MASK                    (0x1U << CRU_BPLL_CON4_BPLL_FEED_EN_SHIFT)                   /* 0x00004000 */
#define CRU_BPLL_CON4_BPLL_FSEL_SHIFT                      (15U)
#define CRU_BPLL_CON4_BPLL_FSEL_MASK                       (0x1U << CRU_BPLL_CON4_BPLL_FSEL_SHIFT)                      /* 0x00008000 */
/* BPLL_CON5 */
#define CRU_BPLL_CON5_OFFSET                               (0x14U)
#define CRU_BPLL_CON5_BPLL_FOUT_MASK_SHIFT                 (0U)
#define CRU_BPLL_CON5_BPLL_FOUT_MASK_MASK                  (0x1U << CRU_BPLL_CON5_BPLL_FOUT_MASK_SHIFT)                 /* 0x00000001 */
#define CRU_BPLL_CON5_BPLL_LOCK_CON_IN_SHIFT               (5U)
#define CRU_BPLL_CON5_BPLL_LOCK_CON_IN_MASK                (0x3U << CRU_BPLL_CON5_BPLL_LOCK_CON_IN_SHIFT)               /* 0x00000060 */
#define CRU_BPLL_CON5_BPLL_LOCK_CON_OUT_SHIFT              (7U)
#define CRU_BPLL_CON5_BPLL_LOCK_CON_OUT_MASK               (0x3U << CRU_BPLL_CON5_BPLL_LOCK_CON_OUT_SHIFT)              /* 0x00000180 */
#define CRU_BPLL_CON5_BPLL_LOCK_CON_DLY_SHIFT              (9U)
#define CRU_BPLL_CON5_BPLL_LOCK_CON_DLY_MASK               (0x3U << CRU_BPLL_CON5_BPLL_LOCK_CON_DLY_SHIFT)              /* 0x00000600 */
/* BPLL_CON6 */
#define CRU_BPLL_CON6_OFFSET                               (0x18U)
#define CRU_BPLL_CON6_BPLL_AFC_CODE_SHIFT                  (10U)
#define CRU_BPLL_CON6_BPLL_AFC_CODE_MASK                   (0x1FU << CRU_BPLL_CON6_BPLL_AFC_CODE_SHIFT)                 /* 0x00007C00 */
#define CRU_BPLL_CON6_BPLL_LOCK_SHIFT                      (15U)
#define CRU_BPLL_CON6_BPLL_LOCK_MASK                       (0x1U << CRU_BPLL_CON6_BPLL_LOCK_SHIFT)                      /* 0x00008000 */
/* VPLL_CON0 */
#define CRU_VPLL_CON0_OFFSET                               (0x160U)
#define CRU_VPLL_CON0_VPLL_M_SHIFT                         (0U)
#define CRU_VPLL_CON0_VPLL_M_MASK                          (0x3FFU << CRU_VPLL_CON0_VPLL_M_SHIFT)                       /* 0x000003FF */
#define CRU_VPLL_CON0_VPLL_BP_SHIFT                        (15U)
#define CRU_VPLL_CON0_VPLL_BP_MASK                         (0x1U << CRU_VPLL_CON0_VPLL_BP_SHIFT)                        /* 0x00008000 */
/* VPLL_CON1 */
#define CRU_VPLL_CON1_OFFSET                               (0x164U)
#define CRU_VPLL_CON1_VPLL_P_SHIFT                         (0U)
#define CRU_VPLL_CON1_VPLL_P_MASK                          (0x3FU << CRU_VPLL_CON1_VPLL_P_SHIFT)                        /* 0x0000003F */
#define CRU_VPLL_CON1_VPLL_S_SHIFT                         (6U)
#define CRU_VPLL_CON1_VPLL_S_MASK                          (0x7U << CRU_VPLL_CON1_VPLL_S_SHIFT)                         /* 0x000001C0 */
#define CRU_VPLL_CON1_VPLL_RESETB_SHIFT                    (13U)
#define CRU_VPLL_CON1_VPLL_RESETB_MASK                     (0x1U << CRU_VPLL_CON1_VPLL_RESETB_SHIFT)                    /* 0x00002000 */
/* VPLL_CON2 */
#define CRU_VPLL_CON2_OFFSET                               (0x168U)
#define CRU_VPLL_CON2_VPLL_K_SHIFT                         (0U)
#define CRU_VPLL_CON2_VPLL_K_MASK                          (0xFFFFU << CRU_VPLL_CON2_VPLL_K_SHIFT)                      /* 0x0000FFFF */
/* VPLL_CON3 */
#define CRU_VPLL_CON3_OFFSET                               (0x16CU)
#define CRU_VPLL_CON3_VPLL_MFR_SHIFT                       (0U)
#define CRU_VPLL_CON3_VPLL_MFR_MASK                        (0xFFU << CRU_VPLL_CON3_VPLL_MFR_SHIFT)                      /* 0x000000FF */
#define CRU_VPLL_CON3_VPLL_MRR_SHIFT                       (8U)
#define CRU_VPLL_CON3_VPLL_MRR_MASK                        (0x3FU << CRU_VPLL_CON3_VPLL_MRR_SHIFT)                      /* 0x00003F00 */
#define CRU_VPLL_CON3_VPLL_SEL_PF_SHIFT                    (14U)
#define CRU_VPLL_CON3_VPLL_SEL_PF_MASK                     (0x3U << CRU_VPLL_CON3_VPLL_SEL_PF_SHIFT)                    /* 0x0000C000 */
/* VPLL_CON4 */
#define CRU_VPLL_CON4_OFFSET                               (0x170U)
#define CRU_VPLL_CON4_VPLL_SSCG_EN_SHIFT                   (0U)
#define CRU_VPLL_CON4_VPLL_SSCG_EN_MASK                    (0x1U << CRU_VPLL_CON4_VPLL_SSCG_EN_SHIFT)                   /* 0x00000001 */
#define CRU_VPLL_CON4_VPLL_AFC_ENB_SHIFT                   (3U)
#define CRU_VPLL_CON4_VPLL_AFC_ENB_MASK                    (0x1U << CRU_VPLL_CON4_VPLL_AFC_ENB_SHIFT)                   /* 0x00000008 */
#define CRU_VPLL_CON4_VPLL_EXTAFC_SHIFT                    (4U)
#define CRU_VPLL_CON4_VPLL_EXTAFC_MASK                     (0x1FU << CRU_VPLL_CON4_VPLL_EXTAFC_SHIFT)                   /* 0x000001F0 */
#define CRU_VPLL_CON4_VPLL_FEED_EN_SHIFT                   (14U)
#define CRU_VPLL_CON4_VPLL_FEED_EN_MASK                    (0x1U << CRU_VPLL_CON4_VPLL_FEED_EN_SHIFT)                   /* 0x00004000 */
#define CRU_VPLL_CON4_VPLL_FSEL_SHIFT                      (15U)
#define CRU_VPLL_CON4_VPLL_FSEL_MASK                       (0x1U << CRU_VPLL_CON4_VPLL_FSEL_SHIFT)                      /* 0x00008000 */
/* VPLL_CON5 */
#define CRU_VPLL_CON5_OFFSET                               (0x174U)
#define CRU_VPLL_CON5_VPLL_FOUT_MASK_SHIFT                 (0U)
#define CRU_VPLL_CON5_VPLL_FOUT_MASK_MASK                  (0x1U << CRU_VPLL_CON5_VPLL_FOUT_MASK_SHIFT)                 /* 0x00000001 */
/* VPLL_CON6 */
#define CRU_VPLL_CON6_OFFSET                               (0x178U)
#define CRU_VPLL_CON6_VPLL_AFC_CODE_SHIFT                  (10U)
#define CRU_VPLL_CON6_VPLL_AFC_CODE_MASK                   (0x1FU << CRU_VPLL_CON6_VPLL_AFC_CODE_SHIFT)                 /* 0x00007C00 */
#define CRU_VPLL_CON6_VPLL_LOCK_SHIFT                      (15U)
#define CRU_VPLL_CON6_VPLL_LOCK_MASK                       (0x1U << CRU_VPLL_CON6_VPLL_LOCK_SHIFT)                      /* 0x00008000 */
/* AUPLL_CON0 */
#define CRU_AUPLL_CON0_OFFSET                              (0x180U)
#define CRU_AUPLL_CON0_AUPLL_M_SHIFT                       (0U)
#define CRU_AUPLL_CON0_AUPLL_M_MASK                        (0x3FFU << CRU_AUPLL_CON0_AUPLL_M_SHIFT)                     /* 0x000003FF */
#define CRU_AUPLL_CON0_AUPLL_BP_SHIFT                      (15U)
#define CRU_AUPLL_CON0_AUPLL_BP_MASK                       (0x1U << CRU_AUPLL_CON0_AUPLL_BP_SHIFT)                      /* 0x00008000 */
/* AUPLL_CON1 */
#define CRU_AUPLL_CON1_OFFSET                              (0x184U)
#define CRU_AUPLL_CON1_AUPLL_P_SHIFT                       (0U)
#define CRU_AUPLL_CON1_AUPLL_P_MASK                        (0x3FU << CRU_AUPLL_CON1_AUPLL_P_SHIFT)                      /* 0x0000003F */
#define CRU_AUPLL_CON1_AUPLL_S_SHIFT                       (6U)
#define CRU_AUPLL_CON1_AUPLL_S_MASK                        (0x7U << CRU_AUPLL_CON1_AUPLL_S_SHIFT)                       /* 0x000001C0 */
#define CRU_AUPLL_CON1_AUPLL_RESETB_SHIFT                  (13U)
#define CRU_AUPLL_CON1_AUPLL_RESETB_MASK                   (0x1U << CRU_AUPLL_CON1_AUPLL_RESETB_SHIFT)                  /* 0x00002000 */
/* AUPLL_CON2 */
#define CRU_AUPLL_CON2_OFFSET                              (0x188U)
#define CRU_AUPLL_CON2_AUPLL_K_SHIFT                       (0U)
#define CRU_AUPLL_CON2_AUPLL_K_MASK                        (0xFFFFU << CRU_AUPLL_CON2_AUPLL_K_SHIFT)                    /* 0x0000FFFF */
/* AUPLL_CON3 */
#define CRU_AUPLL_CON3_OFFSET                              (0x18CU)
#define CRU_AUPLL_CON3_AUPLL_MFR_SHIFT                     (0U)
#define CRU_AUPLL_CON3_AUPLL_MFR_MASK                      (0xFFU << CRU_AUPLL_CON3_AUPLL_MFR_SHIFT)                    /* 0x000000FF */
#define CRU_AUPLL_CON3_AUPLL_MRR_SHIFT                     (8U)
#define CRU_AUPLL_CON3_AUPLL_MRR_MASK                      (0x3FU << CRU_AUPLL_CON3_AUPLL_MRR_SHIFT)                    /* 0x00003F00 */
#define CRU_AUPLL_CON3_AUPLL_SEL_PF_SHIFT                  (14U)
#define CRU_AUPLL_CON3_AUPLL_SEL_PF_MASK                   (0x3U << CRU_AUPLL_CON3_AUPLL_SEL_PF_SHIFT)                  /* 0x0000C000 */
/* AUPLL_CON4 */
#define CRU_AUPLL_CON4_OFFSET                              (0x190U)
#define CRU_AUPLL_CON4_AUPLL_SSCG_EN_SHIFT                 (0U)
#define CRU_AUPLL_CON4_AUPLL_SSCG_EN_MASK                  (0x1U << CRU_AUPLL_CON4_AUPLL_SSCG_EN_SHIFT)                 /* 0x00000001 */
#define CRU_AUPLL_CON4_AUPLL_AFC_ENB_SHIFT                 (3U)
#define CRU_AUPLL_CON4_AUPLL_AFC_ENB_MASK                  (0x1U << CRU_AUPLL_CON4_AUPLL_AFC_ENB_SHIFT)                 /* 0x00000008 */
#define CRU_AUPLL_CON4_AUPLL_EXTAFC_SHIFT                  (4U)
#define CRU_AUPLL_CON4_AUPLL_EXTAFC_MASK                   (0x1FU << CRU_AUPLL_CON4_AUPLL_EXTAFC_SHIFT)                 /* 0x000001F0 */
#define CRU_AUPLL_CON4_AUPLL_FEED_EN_SHIFT                 (14U)
#define CRU_AUPLL_CON4_AUPLL_FEED_EN_MASK                  (0x1U << CRU_AUPLL_CON4_AUPLL_FEED_EN_SHIFT)                 /* 0x00004000 */
#define CRU_AUPLL_CON4_AUPLL_FSEL_SHIFT                    (15U)
#define CRU_AUPLL_CON4_AUPLL_FSEL_MASK                     (0x1U << CRU_AUPLL_CON4_AUPLL_FSEL_SHIFT)                    /* 0x00008000 */
/* AUPLL_CON5 */
#define CRU_AUPLL_CON5_OFFSET                              (0x194U)
#define CRU_AUPLL_CON5_AUPLL_FOUT_MASK_SHIFT               (0U)
#define CRU_AUPLL_CON5_AUPLL_FOUT_MASK_MASK                (0x1U << CRU_AUPLL_CON5_AUPLL_FOUT_MASK_SHIFT)               /* 0x00000001 */
/* AUPLL_CON6 */
#define CRU_AUPLL_CON6_OFFSET                              (0x198U)
#define CRU_AUPLL_CON6_AUPLL_AFC_CODE_SHIFT                (10U)
#define CRU_AUPLL_CON6_AUPLL_AFC_CODE_MASK                 (0x1FU << CRU_AUPLL_CON6_AUPLL_AFC_CODE_SHIFT)               /* 0x00007C00 */
#define CRU_AUPLL_CON6_AUPLL_LOCK_SHIFT                    (15U)
#define CRU_AUPLL_CON6_AUPLL_LOCK_MASK                     (0x1U << CRU_AUPLL_CON6_AUPLL_LOCK_SHIFT)                    /* 0x00008000 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x1A0U)
#define CRU_CPLL_CON0_CPLL_M_SHIFT                         (0U)
#define CRU_CPLL_CON0_CPLL_M_MASK                          (0x3FFU << CRU_CPLL_CON0_CPLL_M_SHIFT)                       /* 0x000003FF */
#define CRU_CPLL_CON0_CPLL_BP_SHIFT                        (15U)
#define CRU_CPLL_CON0_CPLL_BP_MASK                         (0x1U << CRU_CPLL_CON0_CPLL_BP_SHIFT)                        /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x1A4U)
#define CRU_CPLL_CON1_CPLL_P_SHIFT                         (0U)
#define CRU_CPLL_CON1_CPLL_P_MASK                          (0x3FU << CRU_CPLL_CON1_CPLL_P_SHIFT)                        /* 0x0000003F */
#define CRU_CPLL_CON1_CPLL_S_SHIFT                         (6U)
#define CRU_CPLL_CON1_CPLL_S_MASK                          (0x7U << CRU_CPLL_CON1_CPLL_S_SHIFT)                         /* 0x000001C0 */
#define CRU_CPLL_CON1_CPLL_RESETB_SHIFT                    (13U)
#define CRU_CPLL_CON1_CPLL_RESETB_MASK                     (0x1U << CRU_CPLL_CON1_CPLL_RESETB_SHIFT)                    /* 0x00002000 */
/* CPLL_CON2 */
#define CRU_CPLL_CON2_OFFSET                               (0x1A8U)
#define CRU_CPLL_CON2_CPLL_K_SHIFT                         (0U)
#define CRU_CPLL_CON2_CPLL_K_MASK                          (0xFFFFU << CRU_CPLL_CON2_CPLL_K_SHIFT)                      /* 0x0000FFFF */
/* CPLL_CON3 */
#define CRU_CPLL_CON3_OFFSET                               (0x1ACU)
#define CRU_CPLL_CON3_CPLL_MFR_SHIFT                       (0U)
#define CRU_CPLL_CON3_CPLL_MFR_MASK                        (0xFFU << CRU_CPLL_CON3_CPLL_MFR_SHIFT)                      /* 0x000000FF */
#define CRU_CPLL_CON3_CPLL_MRR_SHIFT                       (8U)
#define CRU_CPLL_CON3_CPLL_MRR_MASK                        (0x3FU << CRU_CPLL_CON3_CPLL_MRR_SHIFT)                      /* 0x00003F00 */
#define CRU_CPLL_CON3_CPLL_SEL_PF_SHIFT                    (14U)
#define CRU_CPLL_CON3_CPLL_SEL_PF_MASK                     (0x3U << CRU_CPLL_CON3_CPLL_SEL_PF_SHIFT)                    /* 0x0000C000 */
/* CPLL_CON4 */
#define CRU_CPLL_CON4_OFFSET                               (0x1B0U)
#define CRU_CPLL_CON4_CPLL_SSCG_EN_SHIFT                   (0U)
#define CRU_CPLL_CON4_CPLL_SSCG_EN_MASK                    (0x1U << CRU_CPLL_CON4_CPLL_SSCG_EN_SHIFT)                   /* 0x00000001 */
#define CRU_CPLL_CON4_CPLL_AFC_ENB_SHIFT                   (3U)
#define CRU_CPLL_CON4_CPLL_AFC_ENB_MASK                    (0x1U << CRU_CPLL_CON4_CPLL_AFC_ENB_SHIFT)                   /* 0x00000008 */
#define CRU_CPLL_CON4_CPLL_EXTAFC_SHIFT                    (4U)
#define CRU_CPLL_CON4_CPLL_EXTAFC_MASK                     (0x1FU << CRU_CPLL_CON4_CPLL_EXTAFC_SHIFT)                   /* 0x000001F0 */
#define CRU_CPLL_CON4_CPLL_FEED_EN_SHIFT                   (14U)
#define CRU_CPLL_CON4_CPLL_FEED_EN_MASK                    (0x1U << CRU_CPLL_CON4_CPLL_FEED_EN_SHIFT)                   /* 0x00004000 */
#define CRU_CPLL_CON4_CPLL_FSEL_SHIFT                      (15U)
#define CRU_CPLL_CON4_CPLL_FSEL_MASK                       (0x1U << CRU_CPLL_CON4_CPLL_FSEL_SHIFT)                      /* 0x00008000 */
/* CPLL_CON5 */
#define CRU_CPLL_CON5_OFFSET                               (0x1B4U)
#define CRU_CPLL_CON5_CPLL_FOUT_MASK_SHIFT                 (0U)
#define CRU_CPLL_CON5_CPLL_FOUT_MASK_MASK                  (0x1U << CRU_CPLL_CON5_CPLL_FOUT_MASK_SHIFT)                 /* 0x00000001 */
/* CPLL_CON6 */
#define CRU_CPLL_CON6_OFFSET                               (0x1B8U)
#define CRU_CPLL_CON6_CPLL_AFC_CODE_SHIFT                  (10U)
#define CRU_CPLL_CON6_CPLL_AFC_CODE_MASK                   (0x1FU << CRU_CPLL_CON6_CPLL_AFC_CODE_SHIFT)                 /* 0x00007C00 */
#define CRU_CPLL_CON6_CPLL_LOCK_SHIFT                      (15U)
#define CRU_CPLL_CON6_CPLL_LOCK_MASK                       (0x1U << CRU_CPLL_CON6_CPLL_LOCK_SHIFT)                      /* 0x00008000 */
/* GPLL_CON0 */
#define CRU_GPLL_CON0_OFFSET                               (0x1C0U)
#define CRU_GPLL_CON0_GPLL_M_SHIFT                         (0U)
#define CRU_GPLL_CON0_GPLL_M_MASK                          (0x3FFU << CRU_GPLL_CON0_GPLL_M_SHIFT)                       /* 0x000003FF */
#define CRU_GPLL_CON0_GPLL_BP_SHIFT                        (15U)
#define CRU_GPLL_CON0_GPLL_BP_MASK                         (0x1U << CRU_GPLL_CON0_GPLL_BP_SHIFT)                        /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_OFFSET                               (0x1C4U)
#define CRU_GPLL_CON1_GPLL_P_SHIFT                         (0U)
#define CRU_GPLL_CON1_GPLL_P_MASK                          (0x3FU << CRU_GPLL_CON1_GPLL_P_SHIFT)                        /* 0x0000003F */
#define CRU_GPLL_CON1_GPLL_S_SHIFT                         (6U)
#define CRU_GPLL_CON1_GPLL_S_MASK                          (0x7U << CRU_GPLL_CON1_GPLL_S_SHIFT)                         /* 0x000001C0 */
#define CRU_GPLL_CON1_GPLL_RESETB_SHIFT                    (13U)
#define CRU_GPLL_CON1_GPLL_RESETB_MASK                     (0x1U << CRU_GPLL_CON1_GPLL_RESETB_SHIFT)                    /* 0x00002000 */
/* GPLL_CON2 */
#define CRU_GPLL_CON2_OFFSET                               (0x1C8U)
#define CRU_GPLL_CON2_GPLL_K_SHIFT                         (0U)
#define CRU_GPLL_CON2_GPLL_K_MASK                          (0xFFFFU << CRU_GPLL_CON2_GPLL_K_SHIFT)                      /* 0x0000FFFF */
/* GPLL_CON3 */
#define CRU_GPLL_CON3_OFFSET                               (0x1CCU)
#define CRU_GPLL_CON3_GPLL_MFR_SHIFT                       (0U)
#define CRU_GPLL_CON3_GPLL_MFR_MASK                        (0xFFU << CRU_GPLL_CON3_GPLL_MFR_SHIFT)                      /* 0x000000FF */
#define CRU_GPLL_CON3_GPLL_MRR_SHIFT                       (8U)
#define CRU_GPLL_CON3_GPLL_MRR_MASK                        (0x3FU << CRU_GPLL_CON3_GPLL_MRR_SHIFT)                      /* 0x00003F00 */
#define CRU_GPLL_CON3_GPLL_SEL_PF_SHIFT                    (14U)
#define CRU_GPLL_CON3_GPLL_SEL_PF_MASK                     (0x3U << CRU_GPLL_CON3_GPLL_SEL_PF_SHIFT)                    /* 0x0000C000 */
/* GPLL_CON4 */
#define CRU_GPLL_CON4_OFFSET                               (0x1D0U)
#define CRU_GPLL_CON4_GPLL_SSCG_EN_SHIFT                   (0U)
#define CRU_GPLL_CON4_GPLL_SSCG_EN_MASK                    (0x1U << CRU_GPLL_CON4_GPLL_SSCG_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GPLL_CON4_GPLL_AFC_ENB_SHIFT                   (3U)
#define CRU_GPLL_CON4_GPLL_AFC_ENB_MASK                    (0x1U << CRU_GPLL_CON4_GPLL_AFC_ENB_SHIFT)                   /* 0x00000008 */
#define CRU_GPLL_CON4_GPLL_EXTAFC_SHIFT                    (4U)
#define CRU_GPLL_CON4_GPLL_EXTAFC_MASK                     (0x1FU << CRU_GPLL_CON4_GPLL_EXTAFC_SHIFT)                   /* 0x000001F0 */
#define CRU_GPLL_CON4_GPLL_FEED_EN_SHIFT                   (14U)
#define CRU_GPLL_CON4_GPLL_FEED_EN_MASK                    (0x1U << CRU_GPLL_CON4_GPLL_FEED_EN_SHIFT)                   /* 0x00004000 */
#define CRU_GPLL_CON4_GPLL_FSEL_SHIFT                      (15U)
#define CRU_GPLL_CON4_GPLL_FSEL_MASK                       (0x1U << CRU_GPLL_CON4_GPLL_FSEL_SHIFT)                      /* 0x00008000 */
/* GPLL_CON5 */
#define CRU_GPLL_CON5_OFFSET                               (0x1D4U)
#define CRU_GPLL_CON5_GPLL_FOUT_MASK_SHIFT                 (0U)
#define CRU_GPLL_CON5_GPLL_FOUT_MASK_MASK                  (0x1U << CRU_GPLL_CON5_GPLL_FOUT_MASK_SHIFT)                 /* 0x00000001 */
/* GPLL_CON6 */
#define CRU_GPLL_CON6_OFFSET                               (0x1D8U)
#define CRU_GPLL_CON6_GPLL_AFC_CODE_SHIFT                  (10U)
#define CRU_GPLL_CON6_GPLL_AFC_CODE_MASK                   (0x1FU << CRU_GPLL_CON6_GPLL_AFC_CODE_SHIFT)                 /* 0x00007C00 */
#define CRU_GPLL_CON6_GPLL_LOCK_SHIFT                      (15U)
#define CRU_GPLL_CON6_GPLL_LOCK_MASK                       (0x1U << CRU_GPLL_CON6_GPLL_LOCK_SHIFT)                      /* 0x00008000 */
/* MODE_CON00 */
#define CRU_MODE_CON00_OFFSET                              (0x280U)
#define CRU_MODE_CON00_CLK_BPLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON00_CLK_BPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_BPLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT                 (2U)
#define CRU_MODE_CON00_CLK_GPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)                 /* 0x0000000C */
#define CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON00_CLK_VPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT)                 /* 0x00000030 */
#define CRU_MODE_CON00_CLK_AUPLL_MODE_SHIFT                (6U)
#define CRU_MODE_CON00_CLK_AUPLL_MODE_MASK                 (0x3U << CRU_MODE_CON00_CLK_AUPLL_MODE_SHIFT)                /* 0x000000C0 */
#define CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT                 (8U)
#define CRU_MODE_CON00_CLK_CPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT)                 /* 0x00000300 */
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
#define CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON03_CLK_MATRIX_350M_SRC_SEL_SHIFT)     /* 0x00000060 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT     (7U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT)    /* 0x00000F80 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT     (12U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT)     /* 0x00001000 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_OFFSET                            (0x310U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_OFFSET                            (0x314U)
#define CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON05_CLK_MATRIX_600M_SRC_SEL_SHIFT)     /* 0x00000020 */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_OFFSET                            (0x318U)
#define CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_SEL_MASK      (0x7U << CRU_CLKSEL_CON06_CLK_MATRIX_700M_SRC_SEL_SHIFT)     /* 0x000000E0 */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_OFFSET                            (0x320U)
#define CRU_CLKSEL_CON08_PCLK_TOP_ROOT_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON08_PCLK_TOP_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON08_PCLK_TOP_ROOT_SEL_SHIFT)           /* 0x00000180 */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_OFFSET                            (0x324U)
#define CRU_CLKSEL_CON09_ACLK_TOP_BIU_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON09_ACLK_TOP_BIU_DIV_MASK             (0x1FU << CRU_CLKSEL_CON09_ACLK_TOP_BIU_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON09_ACLK_TOP_BIU_SEL_SHIFT            (5U)
#define CRU_CLKSEL_CON09_ACLK_TOP_BIU_SEL_MASK             (0x3U << CRU_CLKSEL_CON09_ACLK_TOP_BIU_SEL_SHIFT)            /* 0x00000060 */
#define CRU_CLKSEL_CON09_CLK_LPLL_SRC_DIV_SHIFT            (7U)
#define CRU_CLKSEL_CON09_CLK_LPLL_SRC_DIV_MASK             (0x1FU << CRU_CLKSEL_CON09_CLK_LPLL_SRC_DIV_SHIFT)           /* 0x00000F80 */
#define CRU_CLKSEL_CON09_CLK_LPLL_SRC_SEL_SHIFT            (12U)
#define CRU_CLKSEL_CON09_CLK_LPLL_SRC_SEL_MASK             (0x1U << CRU_CLKSEL_CON09_CLK_LPLL_SRC_SEL_SHIFT)            /* 0x00001000 */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_OFFSET                            (0x328U)
#define CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_DIV_MASK         (0x1FU << CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_SEL_SHIFT        (5U)
#define CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_SEL_MASK         (0x1U << CRU_CLKSEL_CON10_ACLK_TOP_MID_BIU_SEL_SHIFT)        /* 0x00000020 */
#define CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_DIV_SHIFT    (6U)
#define CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_DIV_MASK     (0x1FU << CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_DIV_SHIFT)   /* 0x000007C0 */
#define CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_SEL_SHIFT    (11U)
#define CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_SEL_MASK     (0x7U << CRU_CLKSEL_CON10_ACLK_SECURE_HIGH_BIU_SEL_SHIFT)    /* 0x00003800 */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_OFFSET                            (0x32CU)
#define CRU_CLKSEL_CON11_CLK_BPLL_SRC_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON11_CLK_BPLL_SRC_DIV_MASK             (0x1FU << CRU_CLKSEL_CON11_CLK_BPLL_SRC_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON11_CLK_BPLL_SRC_SEL_SHIFT            (5U)
#define CRU_CLKSEL_CON11_CLK_BPLL_SRC_SEL_MASK             (0x1U << CRU_CLKSEL_CON11_CLK_BPLL_SRC_SEL_SHIFT)            /* 0x00000020 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_OFFSET                            (0x330U)
#define CRU_CLKSEL_CON12_CLK_MATRIX_AUDIO_FRAC_0_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON12_CLK_MATRIX_AUDIO_FRAC_0_DIV_MASK  (0xFFFFFFFFU << CRU_CLKSEL_CON12_CLK_MATRIX_AUDIO_FRAC_0_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_OFFSET                            (0x334U)
#define CRU_CLKSEL_CON13_CLK_MATRIX_AUDIO_FRAC_0_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON13_CLK_MATRIX_AUDIO_FRAC_0_SEL_MASK  (0x3U << CRU_CLKSEL_CON13_CLK_MATRIX_AUDIO_FRAC_0_SEL_SHIFT) /* 0x00000003 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_OFFSET                            (0x338U)
#define CRU_CLKSEL_CON14_CLK_MATRIX_AUDIO_FRAC_1_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON14_CLK_MATRIX_AUDIO_FRAC_1_DIV_MASK  (0xFFFFFFFFU << CRU_CLKSEL_CON14_CLK_MATRIX_AUDIO_FRAC_1_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_OFFSET                            (0x33CU)
#define CRU_CLKSEL_CON15_CLK_MATRIX_AUDIO_FRAC_1_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON15_CLK_MATRIX_AUDIO_FRAC_1_SEL_MASK  (0x3U << CRU_CLKSEL_CON15_CLK_MATRIX_AUDIO_FRAC_1_SEL_SHIFT) /* 0x00000003 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_OFFSET                            (0x340U)
#define CRU_CLKSEL_CON16_CLK_MATRIX_AUDIO_FRAC_2_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON16_CLK_MATRIX_AUDIO_FRAC_2_DIV_MASK  (0xFFFFFFFFU << CRU_CLKSEL_CON16_CLK_MATRIX_AUDIO_FRAC_2_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_OFFSET                            (0x344U)
#define CRU_CLKSEL_CON17_CLK_MATRIX_AUDIO_FRAC_2_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON17_CLK_MATRIX_AUDIO_FRAC_2_SEL_MASK  (0x3U << CRU_CLKSEL_CON17_CLK_MATRIX_AUDIO_FRAC_2_SEL_SHIFT) /* 0x00000003 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_OFFSET                            (0x348U)
#define CRU_CLKSEL_CON18_CLK_MATRIX_AUDIO_FRAC_3_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON18_CLK_MATRIX_AUDIO_FRAC_3_DIV_MASK  (0xFFFFFFFFU << CRU_CLKSEL_CON18_CLK_MATRIX_AUDIO_FRAC_3_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_OFFSET                            (0x34CU)
#define CRU_CLKSEL_CON19_CLK_MATRIX_AUDIO_FRAC_3_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON19_CLK_MATRIX_AUDIO_FRAC_3_SEL_MASK  (0x3U << CRU_CLKSEL_CON19_CLK_MATRIX_AUDIO_FRAC_3_SEL_SHIFT) /* 0x00000003 */
#define CRU_CLKSEL_CON19_HCLK_TOP_BIU_SEL_SHIFT            (2U)
#define CRU_CLKSEL_CON19_HCLK_TOP_BIU_SEL_MASK             (0x3U << CRU_CLKSEL_CON19_HCLK_TOP_BIU_SEL_SHIFT)            /* 0x0000000C */
#define CRU_CLKSEL_CON19_HCLK_VO0VOP_CHANNEL_BIU_SEL_SHIFT (6U)
#define CRU_CLKSEL_CON19_HCLK_VO0VOP_CHANNEL_BIU_SEL_MASK  (0x3U << CRU_CLKSEL_CON19_HCLK_VO0VOP_CHANNEL_BIU_SEL_SHIFT) /* 0x000000C0 */
#define CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_DIV_SHIFT (8U)
#define CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_DIV_MASK  (0xFU << CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_DIV_SHIFT) /* 0x00000F00 */
#define CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_SEL_SHIFT (12U)
#define CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_SEL_MASK  (0x3U << CRU_CLKSEL_CON19_ACLK_VO0VOP_CHANNEL_BIU_SEL_SHIFT) /* 0x00003000 */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_OFFSET                            (0x354U)
#define CRU_CLKSEL_CON21_CLK_MATRIX_UART_FRAC_0_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON21_CLK_MATRIX_UART_FRAC_0_DIV_MASK   (0xFFFFFFFFU << CRU_CLKSEL_CON21_CLK_MATRIX_UART_FRAC_0_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON22 */
#define CRU_CLKSEL_CON22_OFFSET                            (0x358U)
#define CRU_CLKSEL_CON22_CLK_MATRIX_UART_FRAC_0_SEL_SHIFT  (0U)
#define CRU_CLKSEL_CON22_CLK_MATRIX_UART_FRAC_0_SEL_MASK   (0x3U << CRU_CLKSEL_CON22_CLK_MATRIX_UART_FRAC_0_SEL_SHIFT)  /* 0x00000003 */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_OFFSET                            (0x35CU)
#define CRU_CLKSEL_CON23_CLK_MATRIX_UART_FRAC_1_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON23_CLK_MATRIX_UART_FRAC_1_DIV_MASK   (0xFFFFFFFFU << CRU_CLKSEL_CON23_CLK_MATRIX_UART_FRAC_1_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_OFFSET                            (0x360U)
#define CRU_CLKSEL_CON24_CLK_MATRIX_UART_FRAC_1_SEL_SHIFT  (0U)
#define CRU_CLKSEL_CON24_CLK_MATRIX_UART_FRAC_1_SEL_MASK   (0x3U << CRU_CLKSEL_CON24_CLK_MATRIX_UART_FRAC_1_SEL_SHIFT)  /* 0x00000003 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_OFFSET                            (0x364U)
#define CRU_CLKSEL_CON25_CLK_MATRIX_UART_FRAC_2_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON25_CLK_MATRIX_UART_FRAC_2_DIV_MASK   (0xFFFFFFFFU << CRU_CLKSEL_CON25_CLK_MATRIX_UART_FRAC_2_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_OFFSET                            (0x368U)
#define CRU_CLKSEL_CON26_CLK_MATRIX_UART_FRAC_2_SEL_SHIFT  (0U)
#define CRU_CLKSEL_CON26_CLK_MATRIX_UART_FRAC_2_SEL_MASK   (0x3U << CRU_CLKSEL_CON26_CLK_MATRIX_UART_FRAC_2_SEL_SHIFT)  /* 0x00000003 */
#define CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_DIV_SHIFT         (2U)
#define CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_DIV_MASK          (0x3FU << CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_DIV_SHIFT)        /* 0x000000FC */
#define CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_SEL_MASK          (0x7U << CRU_CLKSEL_CON26_CLK_TESTOUT_TOP_SEL_SHIFT)         /* 0x00000700 */
#define CRU_CLKSEL_CON26_CLK_TESTOUT_SEL_SHIFT             (11U)
#define CRU_CLKSEL_CON26_CLK_TESTOUT_SEL_MASK              (0x7U << CRU_CLKSEL_CON26_CLK_TESTOUT_SEL_SHIFT)             /* 0x00003800 */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_OFFSET                            (0x36CU)
#define CRU_CLKSEL_CON27_CLK_TESTOUT_GRP0_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON27_CLK_TESTOUT_GRP0_SEL_MASK         (0x7U << CRU_CLKSEL_CON27_CLK_TESTOUT_GRP0_SEL_SHIFT)        /* 0x00000007 */
#define CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_DIV_SHIFT       (5U)
#define CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_DIV_MASK        (0xFFU << CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_DIV_SHIFT)      /* 0x00001FE0 */
#define CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_SEL_SHIFT       (13U)
#define CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_SEL_MASK        (0x7U << CRU_CLKSEL_CON27_CLK_UART1_SRC_TOP_SEL_SHIFT)       /* 0x0000E000 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_OFFSET                            (0x370U)
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_0_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_0_DIV_MASK   (0x1FU << CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_0_DIV_SHIFT) /* 0x0000001F */
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_1_DIV_SHIFT  (5U)
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_1_DIV_MASK   (0x1FU << CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_1_DIV_SHIFT) /* 0x000003E0 */
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_2_DIV_SHIFT  (10U)
#define CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_2_DIV_MASK   (0x1FU << CRU_CLKSEL_CON28_CLK_MATRIX_AUDIO_INT_2_DIV_SHIFT) /* 0x00007C00 */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_OFFSET                            (0x374U)
#define CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_DIV_MASK         (0x1FFU << CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_DIV_SHIFT)      /* 0x000001FF */
#define CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_SEL_SHIFT        (9U)
#define CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_SEL_MASK         (0x7U << CRU_CLKSEL_CON29_CLK_PDM0_SRC_TOP_SEL_SHIFT)        /* 0x00000E00 */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_OFFSET                            (0x378U)
#define CRU_CLKSEL_CON30_CLK_MATRIX_GMAC0_125M_SRC_DIV_SHIFT (10U)
#define CRU_CLKSEL_CON30_CLK_MATRIX_GMAC0_125M_SRC_DIV_MASK (0x1FU << CRU_CLKSEL_CON30_CLK_MATRIX_GMAC0_125M_SRC_DIV_SHIFT) /* 0x00007C00 */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_OFFSET                            (0x37CU)
#define CRU_CLKSEL_CON31_CLK_MATRIX_GMAC1_125M_SRC_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON31_CLK_MATRIX_GMAC1_125M_SRC_DIV_MASK (0x1FU << CRU_CLKSEL_CON31_CLK_MATRIX_GMAC1_125M_SRC_DIV_SHIFT) /* 0x0000001F */
#define CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_DIV_SHIFT         (5U)
#define CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_DIV_MASK          (0x1FU << CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_DIV_SHIFT)        /* 0x000003E0 */
#define CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_SEL_SHIFT         (10U)
#define CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_SEL_MASK          (0x3U << CRU_CLKSEL_CON31_LCLK_ASRC_SRC_0_SEL_SHIFT)         /* 0x00000C00 */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_OFFSET                            (0x380U)
#define CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_DIV_MASK          (0x1FU << CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_SEL_SHIFT         (5U)
#define CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_SEL_MASK          (0x3U << CRU_CLKSEL_CON32_LCLK_ASRC_SRC_1_SEL_SHIFT)         /* 0x00000060 */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_OFFSET                            (0x384U)
#define CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_DIV_MASK         (0xFFU << CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_DIV_SHIFT)       /* 0x000000FF */
#define CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_SEL_MASK         (0x7U << CRU_CLKSEL_CON33_REF_CLK0_OUT_PLL_SEL_SHIFT)        /* 0x00000700 */
/* CLKSEL_CON34 */
#define CRU_CLKSEL_CON34_OFFSET                            (0x388U)
#define CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_DIV_MASK         (0xFFU << CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_DIV_SHIFT)       /* 0x000000FF */
#define CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_SEL_MASK         (0x7U << CRU_CLKSEL_CON34_REF_CLK1_OUT_PLL_SEL_SHIFT)        /* 0x00000700 */
/* CLKSEL_CON35 */
#define CRU_CLKSEL_CON35_OFFSET                            (0x38CU)
#define CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_DIV_MASK         (0xFFU << CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_DIV_SHIFT)       /* 0x000000FF */
#define CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_SEL_MASK         (0x7U << CRU_CLKSEL_CON35_REF_CLK2_OUT_PLL_SEL_SHIFT)        /* 0x00000700 */
/* CLKSEL_CON36 */
#define CRU_CLKSEL_CON36_OFFSET                            (0x390U)
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_DIV_MASK     (0x7FU << CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_DIV_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_SEL_SHIFT    (7U)
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_SEL_MASK     (0x1U << CRU_CLKSEL_CON36_REFCLKO25M_GMAC0_OUT_SEL_SHIFT)    /* 0x00000080 */
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_DIV_SHIFT    (8U)
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_DIV_MASK     (0x7FU << CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_DIV_SHIFT)   /* 0x00007F00 */
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_SEL_SHIFT    (15U)
#define CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_SEL_MASK     (0x1U << CRU_CLKSEL_CON36_REFCLKO25M_GMAC1_OUT_SEL_SHIFT)    /* 0x00008000 */
/* CLKSEL_CON37 */
#define CRU_CLKSEL_CON37_OFFSET                            (0x394U)
#define CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_DIV_MASK           (0xFFU << CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_DIV_SHIFT)         /* 0x000000FF */
#define CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_SEL_MASK           (0x3U << CRU_CLKSEL_CON37_CLK_CIFOUT_OUT_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON37_CLK_BISRINTF_PLLSRC_DIV_SHIFT     (10U)
#define CRU_CLKSEL_CON37_CLK_BISRINTF_PLLSRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON37_CLK_BISRINTF_PLLSRC_DIV_SHIFT)    /* 0x00007C00 */
/* CLKSEL_CON38 */
#define CRU_CLKSEL_CON38_OFFSET                            (0x398U)
#define CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_DIV_SHIFT   (0U)
#define CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_DIV_MASK    (0xFFU << CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_DIV_SHIFT)  /* 0x000000FF */
#define CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_SEL_SHIFT   (8U)
#define CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_SEL_MASK    (0x3U << CRU_CLKSEL_CON38_CLK_MIPI_CAMERAOUT_M0_SEL_SHIFT)   /* 0x00000300 */
/* CLKSEL_CON39 */
#define CRU_CLKSEL_CON39_OFFSET                            (0x39CU)
#define CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_DIV_SHIFT   (0U)
#define CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_DIV_MASK    (0xFFU << CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_DIV_SHIFT)  /* 0x000000FF */
#define CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_SEL_SHIFT   (8U)
#define CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_SEL_MASK    (0x3U << CRU_CLKSEL_CON39_CLK_MIPI_CAMERAOUT_M1_SEL_SHIFT)   /* 0x00000300 */
/* CLKSEL_CON40 */
#define CRU_CLKSEL_CON40_OFFSET                            (0x3A0U)
#define CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_DIV_SHIFT   (0U)
#define CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_DIV_MASK    (0xFFU << CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_DIV_SHIFT)  /* 0x000000FF */
#define CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_SEL_SHIFT   (8U)
#define CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_SEL_MASK    (0x3U << CRU_CLKSEL_CON40_CLK_MIPI_CAMERAOUT_M2_SEL_SHIFT)   /* 0x00000300 */
#define CRU_CLKSEL_CON40_XIN_OSC0_FUNC_MUX_SEL_SHIFT       (10U)
#define CRU_CLKSEL_CON40_XIN_OSC0_FUNC_MUX_SEL_MASK        (0x1U << CRU_CLKSEL_CON40_XIN_OSC0_FUNC_MUX_SEL_SHIFT)       /* 0x00000400 */
/* CLKSEL_CON41 */
#define CRU_CLKSEL_CON41_OFFSET                            (0x3A4U)
#define CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_DIV_MASK        (0x1FU << CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_SEL_MASK        (0x7U << CRU_CLKSEL_CON41_MCLK_PDM0_SRC_TOP_SEL_SHIFT)       /* 0x00000380 */
/* CLKSEL_CON42 */
#define CRU_CLKSEL_CON42_OFFSET                            (0x3A8U)
#define CRU_CLKSEL_CON42_HCLK_AUDIO_ROOT_SEL_SHIFT         (0U)
#define CRU_CLKSEL_CON42_HCLK_AUDIO_ROOT_SEL_MASK          (0x3U << CRU_CLKSEL_CON42_HCLK_AUDIO_ROOT_SEL_SHIFT)         /* 0x00000003 */
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_DIV_SHIFT          (2U)
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_DIV_MASK           (0x1FU << CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_DIV_SHIFT)         /* 0x0000007C */
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_SEL_MASK           (0x3U << CRU_CLKSEL_CON42_CLK_ASRC_2CH_0_SEL_SHIFT)          /* 0x00000180 */
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_DIV_SHIFT          (9U)
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_DIV_MASK           (0x1FU << CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_DIV_SHIFT)         /* 0x00003E00 */
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_SEL_SHIFT          (14U)
#define CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_SEL_MASK           (0x3U << CRU_CLKSEL_CON42_CLK_ASRC_2CH_1_SEL_SHIFT)          /* 0x0000C000 */
/* CLKSEL_CON43 */
#define CRU_CLKSEL_CON43_OFFSET                            (0x3ACU)
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_DIV_MASK           (0x1FU << CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_SEL_MASK           (0x3U << CRU_CLKSEL_CON43_CLK_ASRC_4CH_0_SEL_SHIFT)          /* 0x00000060 */
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_DIV_SHIFT          (7U)
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_DIV_MASK           (0x1FU << CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_DIV_SHIFT)         /* 0x00000F80 */
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_SEL_SHIFT          (12U)
#define CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_SEL_MASK           (0x3U << CRU_CLKSEL_CON43_CLK_ASRC_4CH_1_SEL_SHIFT)          /* 0x00003000 */
/* CLKSEL_CON44 */
#define CRU_CLKSEL_CON44_OFFSET                            (0x3B0U)
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_DIV_MASK        (0xFFU << CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_DIV_SHIFT)      /* 0x000000FF */
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_SEL_MASK        (0x7U << CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SRC_SEL_SHIFT)       /* 0x00000700 */
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SEL_SHIFT           (11U)
#define CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SEL_MASK            (0x3U << CRU_CLKSEL_CON44_MCLK_SAI0_8CH_SEL_SHIFT)           /* 0x00001800 */
/* CLKSEL_CON45 */
#define CRU_CLKSEL_CON45_OFFSET                            (0x3B4U)
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX0_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX0_DIV_MASK            (0x1FU << CRU_CLKSEL_CON45_MCLK_SPDIFRX0_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX0_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX0_SEL_MASK            (0x3U << CRU_CLKSEL_CON45_MCLK_SPDIFRX0_SEL_SHIFT)           /* 0x00000060 */
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX1_DIV_SHIFT           (7U)
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX1_DIV_MASK            (0x1FU << CRU_CLKSEL_CON45_MCLK_SPDIFRX1_DIV_SHIFT)          /* 0x00000F80 */
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX1_SEL_SHIFT           (12U)
#define CRU_CLKSEL_CON45_MCLK_SPDIFRX1_SEL_MASK            (0x3U << CRU_CLKSEL_CON45_MCLK_SPDIFRX1_SEL_SHIFT)           /* 0x00003000 */
/* CLKSEL_CON46 */
#define CRU_CLKSEL_CON46_OFFSET                            (0x3B8U)
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_DIV_MASK        (0xFFU << CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_DIV_SHIFT)      /* 0x000000FF */
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_SEL_MASK        (0x7U << CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SRC_SEL_SHIFT)       /* 0x00000700 */
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SEL_SHIFT           (11U)
#define CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SEL_MASK            (0x1U << CRU_CLKSEL_CON46_MCLK_SAI1_8CH_SEL_SHIFT)           /* 0x00000800 */
/* CLKSEL_CON47 */
#define CRU_CLKSEL_CON47_OFFSET                            (0x3BCU)
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_DIV_MASK        (0xFFU << CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_DIV_SHIFT)      /* 0x000000FF */
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_SEL_MASK        (0x7U << CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SRC_SEL_SHIFT)       /* 0x00000700 */
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SEL_SHIFT           (11U)
#define CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SEL_MASK            (0x3U << CRU_CLKSEL_CON47_MCLK_SAI2_2CH_SEL_SHIFT)           /* 0x00001800 */
/* CLKSEL_CON48 */
#define CRU_CLKSEL_CON48_OFFSET                            (0x3C0U)
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_DIV_MASK        (0xFFU << CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_DIV_SHIFT)      /* 0x000000FF */
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_SEL_MASK        (0x7U << CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SRC_SEL_SHIFT)       /* 0x00000700 */
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SEL_SHIFT           (11U)
#define CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SEL_MASK            (0x3U << CRU_CLKSEL_CON48_MCLK_SAI3_2CH_SEL_SHIFT)           /* 0x00001800 */
/* CLKSEL_CON49 */
#define CRU_CLKSEL_CON49_OFFSET                            (0x3C4U)
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_DIV_MASK        (0xFFU << CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_DIV_SHIFT)      /* 0x000000FF */
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_SEL_MASK        (0x7U << CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SRC_SEL_SHIFT)       /* 0x00000700 */
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SEL_SHIFT           (11U)
#define CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SEL_MASK            (0x3U << CRU_CLKSEL_CON49_MCLK_SAI4_2CH_SEL_SHIFT)           /* 0x00001800 */
/* CLKSEL_CON50 */
#define CRU_CLKSEL_CON50_OFFSET                            (0x3C8U)
#define CRU_CLKSEL_CON50_CLK_PDM1_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON50_CLK_PDM1_DIV_MASK                 (0x1FFU << CRU_CLKSEL_CON50_CLK_PDM1_DIV_SHIFT)              /* 0x000001FF */
#define CRU_CLKSEL_CON50_CLK_PDM1_SEL_SHIFT                (9U)
#define CRU_CLKSEL_CON50_CLK_PDM1_SEL_MASK                 (0x7U << CRU_CLKSEL_CON50_CLK_PDM1_SEL_SHIFT)                /* 0x00000E00 */
/* CLKSEL_CON51 */
#define CRU_CLKSEL_CON51_OFFSET                            (0x3CCU)
#define CRU_CLKSEL_CON51_MCLK_PDM1_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON51_MCLK_PDM1_DIV_MASK                (0x1FU << CRU_CLKSEL_CON51_MCLK_PDM1_DIV_SHIFT)              /* 0x0000001F */
#define CRU_CLKSEL_CON51_MCLK_PDM1_SEL_SHIFT               (5U)
#define CRU_CLKSEL_CON51_MCLK_PDM1_SEL_MASK                (0x7U << CRU_CLKSEL_CON51_MCLK_PDM1_SEL_SHIFT)               /* 0x000000E0 */
/* CLKSEL_CON52 */
#define CRU_CLKSEL_CON52_OFFSET                            (0x3D0U)
#define CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_DIV_MASK           (0xFFU << CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_DIV_SHIFT)         /* 0x000000FF */
#define CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_SEL_MASK           (0x7U << CRU_CLKSEL_CON52_MCLK_SPDIF_TX0_SEL_SHIFT)          /* 0x00000700 */
/* CLKSEL_CON53 */
#define CRU_CLKSEL_CON53_OFFSET                            (0x3D4U)
#define CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_DIV_MASK           (0xFFU << CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_DIV_SHIFT)         /* 0x000000FF */
#define CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_SEL_MASK           (0x7U << CRU_CLKSEL_CON53_MCLK_SPDIF_TX1_SEL_SHIFT)          /* 0x00000700 */
/* CLKSEL_CON55 */
#define CRU_CLKSEL_CON55_OFFSET                            (0x3DCU)
#define CRU_CLKSEL_CON55_HCLK_BUS_ROOT_SEL_SHIFT           (0U)
#define CRU_CLKSEL_CON55_HCLK_BUS_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON55_HCLK_BUS_ROOT_SEL_SHIFT)           /* 0x00000003 */
#define CRU_CLKSEL_CON55_PCLK_BUS_ROOT_SEL_SHIFT           (2U)
#define CRU_CLKSEL_CON55_PCLK_BUS_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON55_PCLK_BUS_ROOT_SEL_SHIFT)           /* 0x0000000C */
#define CRU_CLKSEL_CON55_ACLK_BUS_ROOT_DIV_SHIFT           (4U)
#define CRU_CLKSEL_CON55_ACLK_BUS_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON55_ACLK_BUS_ROOT_DIV_SHIFT)          /* 0x000001F0 */
#define CRU_CLKSEL_CON55_ACLK_BUS_ROOT_SEL_SHIFT           (9U)
#define CRU_CLKSEL_CON55_ACLK_BUS_ROOT_SEL_MASK            (0x1U << CRU_CLKSEL_CON55_ACLK_BUS_ROOT_SEL_SHIFT)           /* 0x00000200 */
/* CLKSEL_CON56 */
#define CRU_CLKSEL_CON56_OFFSET                            (0x3E0U)
#define CRU_CLKSEL_CON56_CLK_CAN0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON56_CLK_CAN0_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON56_CLK_CAN0_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON56_CLK_CAN0_SEL_SHIFT                (5U)
#define CRU_CLKSEL_CON56_CLK_CAN0_SEL_MASK                 (0x3U << CRU_CLKSEL_CON56_CLK_CAN0_SEL_SHIFT)                /* 0x00000060 */
#define CRU_CLKSEL_CON56_CLK_CAN1_DIV_SHIFT                (7U)
#define CRU_CLKSEL_CON56_CLK_CAN1_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON56_CLK_CAN1_DIV_SHIFT)               /* 0x00000F80 */
#define CRU_CLKSEL_CON56_CLK_CAN1_SEL_SHIFT                (12U)
#define CRU_CLKSEL_CON56_CLK_CAN1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON56_CLK_CAN1_SEL_SHIFT)                /* 0x00003000 */
/* CLKSEL_CON57 */
#define CRU_CLKSEL_CON57_OFFSET                            (0x3E4U)
#define CRU_CLKSEL_CON57_CLK_I2C1_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON57_CLK_I2C1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C1_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON57_CLK_I2C2_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON57_CLK_I2C2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C2_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON57_CLK_I2C3_SEL_SHIFT                (4U)
#define CRU_CLKSEL_CON57_CLK_I2C3_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C3_SEL_SHIFT)                /* 0x00000030 */
#define CRU_CLKSEL_CON57_CLK_I2C4_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON57_CLK_I2C4_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C4_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON57_CLK_I2C5_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON57_CLK_I2C5_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C5_SEL_SHIFT)                /* 0x00000300 */
#define CRU_CLKSEL_CON57_CLK_I2C6_SEL_SHIFT                (10U)
#define CRU_CLKSEL_CON57_CLK_I2C6_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C6_SEL_SHIFT)                /* 0x00000C00 */
#define CRU_CLKSEL_CON57_CLK_I2C7_SEL_SHIFT                (12U)
#define CRU_CLKSEL_CON57_CLK_I2C7_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C7_SEL_SHIFT)                /* 0x00003000 */
#define CRU_CLKSEL_CON57_CLK_I2C8_SEL_SHIFT                (14U)
#define CRU_CLKSEL_CON57_CLK_I2C8_SEL_MASK                 (0x3U << CRU_CLKSEL_CON57_CLK_I2C8_SEL_SHIFT)                /* 0x0000C000 */
/* CLKSEL_CON58 */
#define CRU_CLKSEL_CON58_OFFSET                            (0x3E8U)
#define CRU_CLKSEL_CON58_CLK_I2C9_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON58_CLK_I2C9_SEL_MASK                 (0x3U << CRU_CLKSEL_CON58_CLK_I2C9_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON58_CLK_SARADC_DIV_SHIFT              (4U)
#define CRU_CLKSEL_CON58_CLK_SARADC_DIV_MASK               (0xFFU << CRU_CLKSEL_CON58_CLK_SARADC_DIV_SHIFT)             /* 0x00000FF0 */
#define CRU_CLKSEL_CON58_CLK_SARADC_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON58_CLK_SARADC_SEL_MASK               (0x1U << CRU_CLKSEL_CON58_CLK_SARADC_SEL_SHIFT)              /* 0x00001000 */
/* CLKSEL_CON59 */
#define CRU_CLKSEL_CON59_OFFSET                            (0x3ECU)
#define CRU_CLKSEL_CON59_CLK_TSADC_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON59_CLK_TSADC_DIV_MASK                (0xFFU << CRU_CLKSEL_CON59_CLK_TSADC_DIV_SHIFT)              /* 0x000000FF */
/* CLKSEL_CON60 */
#define CRU_CLKSEL_CON60_OFFSET                            (0x3F0U)
#define CRU_CLKSEL_CON60_SCLK_UART0_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON60_SCLK_UART0_DIV_MASK               (0xFFU << CRU_CLKSEL_CON60_SCLK_UART0_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON60_SCLK_UART0_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON60_SCLK_UART0_SEL_MASK               (0x7U << CRU_CLKSEL_CON60_SCLK_UART0_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON61 */
#define CRU_CLKSEL_CON61_OFFSET                            (0x3F4U)
#define CRU_CLKSEL_CON61_SCLK_UART2_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON61_SCLK_UART2_DIV_MASK               (0xFFU << CRU_CLKSEL_CON61_SCLK_UART2_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON61_SCLK_UART2_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON61_SCLK_UART2_SEL_MASK               (0x7U << CRU_CLKSEL_CON61_SCLK_UART2_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON62 */
#define CRU_CLKSEL_CON62_OFFSET                            (0x3F8U)
#define CRU_CLKSEL_CON62_SCLK_UART3_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON62_SCLK_UART3_DIV_MASK               (0xFFU << CRU_CLKSEL_CON62_SCLK_UART3_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON62_SCLK_UART3_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON62_SCLK_UART3_SEL_MASK               (0x7U << CRU_CLKSEL_CON62_SCLK_UART3_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON63 */
#define CRU_CLKSEL_CON63_OFFSET                            (0x3FCU)
#define CRU_CLKSEL_CON63_SCLK_UART4_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON63_SCLK_UART4_DIV_MASK               (0xFFU << CRU_CLKSEL_CON63_SCLK_UART4_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON63_SCLK_UART4_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON63_SCLK_UART4_SEL_MASK               (0x7U << CRU_CLKSEL_CON63_SCLK_UART4_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON64 */
#define CRU_CLKSEL_CON64_OFFSET                            (0x400U)
#define CRU_CLKSEL_CON64_SCLK_UART5_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON64_SCLK_UART5_DIV_MASK               (0xFFU << CRU_CLKSEL_CON64_SCLK_UART5_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON64_SCLK_UART5_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON64_SCLK_UART5_SEL_MASK               (0x7U << CRU_CLKSEL_CON64_SCLK_UART5_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON65 */
#define CRU_CLKSEL_CON65_OFFSET                            (0x404U)
#define CRU_CLKSEL_CON65_SCLK_UART6_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON65_SCLK_UART6_DIV_MASK               (0xFFU << CRU_CLKSEL_CON65_SCLK_UART6_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON65_SCLK_UART6_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON65_SCLK_UART6_SEL_MASK               (0x7U << CRU_CLKSEL_CON65_SCLK_UART6_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON66 */
#define CRU_CLKSEL_CON66_OFFSET                            (0x408U)
#define CRU_CLKSEL_CON66_SCLK_UART7_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON66_SCLK_UART7_DIV_MASK               (0xFFU << CRU_CLKSEL_CON66_SCLK_UART7_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON66_SCLK_UART7_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON66_SCLK_UART7_SEL_MASK               (0x7U << CRU_CLKSEL_CON66_SCLK_UART7_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON67 */
#define CRU_CLKSEL_CON67_OFFSET                            (0x40CU)
#define CRU_CLKSEL_CON67_SCLK_UART8_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON67_SCLK_UART8_DIV_MASK               (0xFFU << CRU_CLKSEL_CON67_SCLK_UART8_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON67_SCLK_UART8_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON67_SCLK_UART8_SEL_MASK               (0x7U << CRU_CLKSEL_CON67_SCLK_UART8_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON68 */
#define CRU_CLKSEL_CON68_OFFSET                            (0x410U)
#define CRU_CLKSEL_CON68_SCLK_UART9_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON68_SCLK_UART9_DIV_MASK               (0xFFU << CRU_CLKSEL_CON68_SCLK_UART9_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON68_SCLK_UART9_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON68_SCLK_UART9_SEL_MASK               (0x7U << CRU_CLKSEL_CON68_SCLK_UART9_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON69 */
#define CRU_CLKSEL_CON69_OFFSET                            (0x414U)
#define CRU_CLKSEL_CON69_SCLK_UART10_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON69_SCLK_UART10_DIV_MASK              (0xFFU << CRU_CLKSEL_CON69_SCLK_UART10_DIV_SHIFT)            /* 0x000000FF */
#define CRU_CLKSEL_CON69_SCLK_UART10_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON69_SCLK_UART10_SEL_MASK              (0x7U << CRU_CLKSEL_CON69_SCLK_UART10_SEL_SHIFT)             /* 0x00000700 */
/* CLKSEL_CON70 */
#define CRU_CLKSEL_CON70_OFFSET                            (0x418U)
#define CRU_CLKSEL_CON70_SCLK_UART11_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON70_SCLK_UART11_DIV_MASK              (0xFFU << CRU_CLKSEL_CON70_SCLK_UART11_DIV_SHIFT)            /* 0x000000FF */
#define CRU_CLKSEL_CON70_SCLK_UART11_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON70_SCLK_UART11_SEL_MASK              (0x7U << CRU_CLKSEL_CON70_SCLK_UART11_SEL_SHIFT)             /* 0x00000700 */
#define CRU_CLKSEL_CON70_CLK_SPI0_SEL_SHIFT                (13U)
#define CRU_CLKSEL_CON70_CLK_SPI0_SEL_MASK                 (0x3U << CRU_CLKSEL_CON70_CLK_SPI0_SEL_SHIFT)                /* 0x00006000 */
/* CLKSEL_CON71 */
#define CRU_CLKSEL_CON71_OFFSET                            (0x41CU)
#define CRU_CLKSEL_CON71_CLK_SPI1_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON71_CLK_SPI1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON71_CLK_SPI1_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON71_CLK_SPI2_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON71_CLK_SPI2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON71_CLK_SPI2_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON71_CLK_SPI3_SEL_SHIFT                (4U)
#define CRU_CLKSEL_CON71_CLK_SPI3_SEL_MASK                 (0x3U << CRU_CLKSEL_CON71_CLK_SPI3_SEL_SHIFT)                /* 0x00000030 */
#define CRU_CLKSEL_CON71_CLK_SPI4_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON71_CLK_SPI4_SEL_MASK                 (0x3U << CRU_CLKSEL_CON71_CLK_SPI4_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON71_CLK_PWM1_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON71_CLK_PWM1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON71_CLK_PWM1_SEL_SHIFT)                /* 0x00000300 */
#define CRU_CLKSEL_CON71_CLK_TIMER0_ROOT_SEL_SHIFT         (14U)
#define CRU_CLKSEL_CON71_CLK_TIMER0_ROOT_SEL_MASK          (0x1U << CRU_CLKSEL_CON71_CLK_TIMER0_ROOT_SEL_SHIFT)         /* 0x00004000 */
/* CLKSEL_CON72 */
#define CRU_CLKSEL_CON72_OFFSET                            (0x420U)
#define CRU_CLKSEL_CON72_DCLK_DECOM_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON72_DCLK_DECOM_DIV_MASK               (0x1FU << CRU_CLKSEL_CON72_DCLK_DECOM_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON72_DCLK_DECOM_SEL_SHIFT              (5U)
#define CRU_CLKSEL_CON72_DCLK_DECOM_SEL_MASK               (0x1U << CRU_CLKSEL_CON72_DCLK_DECOM_SEL_SHIFT)              /* 0x00000020 */
#define CRU_CLKSEL_CON72_CLK_TIMER1_ROOT_SEL_SHIFT         (6U)
#define CRU_CLKSEL_CON72_CLK_TIMER1_ROOT_SEL_MASK          (0x1U << CRU_CLKSEL_CON72_CLK_TIMER1_ROOT_SEL_SHIFT)         /* 0x00000040 */
#define CRU_CLKSEL_CON72_CLK_TIMER7_DIV_SHIFT              (7U)
#define CRU_CLKSEL_CON72_CLK_TIMER7_DIV_MASK               (0x1FU << CRU_CLKSEL_CON72_CLK_TIMER7_DIV_SHIFT)             /* 0x00000F80 */
#define CRU_CLKSEL_CON72_CLK_TIMER7_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON72_CLK_TIMER7_SEL_MASK               (0x3U << CRU_CLKSEL_CON72_CLK_TIMER7_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON73 */
#define CRU_CLKSEL_CON73_OFFSET                            (0x424U)
#define CRU_CLKSEL_CON73_CLK_TIMER8_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON73_CLK_TIMER8_DIV_MASK               (0x1FU << CRU_CLKSEL_CON73_CLK_TIMER8_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON73_CLK_TIMER8_SEL_SHIFT              (5U)
#define CRU_CLKSEL_CON73_CLK_TIMER8_SEL_MASK               (0x3U << CRU_CLKSEL_CON73_CLK_TIMER8_SEL_SHIFT)              /* 0x00000060 */
#define CRU_CLKSEL_CON73_HCLK_BUS_CM0_ROOT_SEL_SHIFT       (13U)
#define CRU_CLKSEL_CON73_HCLK_BUS_CM0_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON73_HCLK_BUS_CM0_ROOT_SEL_SHIFT)       /* 0x00006000 */
/* CLKSEL_CON74 */
#define CRU_CLKSEL_CON74_OFFSET                            (0x428U)
#define CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_DIV_MASK          (0x1FU << CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_SEL_SHIFT         (5U)
#define CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_SEL_MASK          (0x1U << CRU_CLKSEL_CON74_CLK_BUS_CM0_RTC_SEL_SHIFT)         /* 0x00000020 */
#define CRU_CLKSEL_CON74_CLK_PWM2_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON74_CLK_PWM2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON74_CLK_PWM2_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON74_CLK_FREQ_PWM1_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON74_CLK_FREQ_PWM1_SEL_MASK            (0x7U << CRU_CLKSEL_CON74_CLK_FREQ_PWM1_SEL_SHIFT)           /* 0x00000700 */
#define CRU_CLKSEL_CON74_CLK_COUNTER_PWM1_SEL_SHIFT        (11U)
#define CRU_CLKSEL_CON74_CLK_COUNTER_PWM1_SEL_MASK         (0x7U << CRU_CLKSEL_CON74_CLK_COUNTER_PWM1_SEL_SHIFT)        /* 0x00003800 */
/* CLKSEL_CON75 */
#define CRU_CLKSEL_CON75_OFFSET                            (0x42CU)
#define CRU_CLKSEL_CON75_SAI_SCLKIN_FREQ_SEL_SHIFT         (0U)
#define CRU_CLKSEL_CON75_SAI_SCLKIN_FREQ_SEL_MASK          (0x7U << CRU_CLKSEL_CON75_SAI_SCLKIN_FREQ_SEL_SHIFT)         /* 0x00000007 */
#define CRU_CLKSEL_CON75_SAI_SCLKIN_COUNTER_SEL_SHIFT      (3U)
#define CRU_CLKSEL_CON75_SAI_SCLKIN_COUNTER_SEL_MASK       (0x7U << CRU_CLKSEL_CON75_SAI_SCLKIN_COUNTER_SEL_SHIFT)      /* 0x00000038 */
/* CLKSEL_CON76 */
#define CRU_CLKSEL_CON76_OFFSET                            (0x430U)
#define CRU_CLKSEL_CON76_PCLK_DDR_ROOT_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON76_PCLK_DDR_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON76_PCLK_DDR_ROOT_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON76_PCLK_DDR_ROOT_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON76_PCLK_DDR_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON76_PCLK_DDR_ROOT_SEL_SHIFT)           /* 0x00000060 */
#define CRU_CLKSEL_CON76_ACLK_DDR_ROOT_DIV_SHIFT           (7U)
#define CRU_CLKSEL_CON76_ACLK_DDR_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON76_ACLK_DDR_ROOT_DIV_SHIFT)          /* 0x00000F80 */
#define CRU_CLKSEL_CON76_ACLK_DDR_ROOT_SEL_SHIFT           (12U)
#define CRU_CLKSEL_CON76_ACLK_DDR_ROOT_SEL_MASK            (0x1U << CRU_CLKSEL_CON76_ACLK_DDR_ROOT_SEL_SHIFT)           /* 0x00001000 */
/* CLKSEL_CON77 */
#define CRU_CLKSEL_CON77_OFFSET                            (0x434U)
#define CRU_CLKSEL_CON77_HCLK_DDR_ROOT_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON77_HCLK_DDR_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON77_HCLK_DDR_ROOT_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON77_HCLK_DDR_ROOT_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON77_HCLK_DDR_ROOT_SEL_MASK            (0x1U << CRU_CLKSEL_CON77_HCLK_DDR_ROOT_SEL_SHIFT)           /* 0x00000020 */
#define CRU_CLKSEL_CON77_CLK_DDR_TIMER_ROOT_SEL_SHIFT      (6U)
#define CRU_CLKSEL_CON77_CLK_DDR_TIMER_ROOT_SEL_MASK       (0x1U << CRU_CLKSEL_CON77_CLK_DDR_TIMER_ROOT_SEL_SHIFT)      /* 0x00000040 */
#define CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_DIV_SHIFT         (7U)
#define CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_DIV_MASK          (0x1FU << CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_DIV_SHIFT)        /* 0x00000F80 */
#define CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_SEL_SHIFT         (12U)
#define CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_SEL_MASK          (0x1U << CRU_CLKSEL_CON77_CLK_DDR_CM0_RTC_SEL_SHIFT)         /* 0x00001000 */
/* CLKSEL_CON78 */
#define CRU_CLKSEL_CON78_OFFSET                            (0x438U)
#define CRU_CLKSEL_CON78_CLK_I3C0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON78_CLK_I3C0_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON78_CLK_I3C0_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON78_CLK_I3C0_SEL_SHIFT                (5U)
#define CRU_CLKSEL_CON78_CLK_I3C0_SEL_MASK                 (0x3U << CRU_CLKSEL_CON78_CLK_I3C0_SEL_SHIFT)                /* 0x00000060 */
#define CRU_CLKSEL_CON78_CLK_I3C1_DIV_SHIFT                (7U)
#define CRU_CLKSEL_CON78_CLK_I3C1_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON78_CLK_I3C1_DIV_SHIFT)               /* 0x00000F80 */
#define CRU_CLKSEL_CON78_CLK_I3C1_SEL_SHIFT                (12U)
#define CRU_CLKSEL_CON78_CLK_I3C1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON78_CLK_I3C1_SEL_SHIFT)                /* 0x00003000 */
/* CLKSEL_CON80 */
#define CRU_CLKSEL_CON80_OFFSET                            (0x440U)
#define CRU_CLKSEL_CON80_MBIST_CLK_ACLK_RKNN0_SEL_SHIFT    (0U)
#define CRU_CLKSEL_CON80_MBIST_CLK_ACLK_RKNN0_SEL_MASK     (0x1U << CRU_CLKSEL_CON80_MBIST_CLK_ACLK_RKNN0_SEL_SHIFT)    /* 0x00000001 */
/* CLKSEL_CON82 */
#define CRU_CLKSEL_CON82_OFFSET                            (0x448U)
#define CRU_CLKSEL_CON82_MBIST_CLK_ACLK_RKNN1_SEL_SHIFT    (0U)
#define CRU_CLKSEL_CON82_MBIST_CLK_ACLK_RKNN1_SEL_MASK     (0x1U << CRU_CLKSEL_CON82_MBIST_CLK_ACLK_RKNN1_SEL_SHIFT)    /* 0x00000001 */
/* CLKSEL_CON86 */
#define CRU_CLKSEL_CON86_OFFSET                            (0x458U)
#define CRU_CLKSEL_CON86_HCLK_RKNN_ROOT_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON86_HCLK_RKNN_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON86_HCLK_RKNN_ROOT_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_DIV_SHIFT     (2U)
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_DIV_MASK      (0x1FU << CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_DIV_SHIFT)    /* 0x0000007C */
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_SEL_SHIFT     (7U)
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_SEL_MASK      (0x3U << CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SRC_T_SEL_SHIFT)     /* 0x00000180 */
#define CRU_CLKSEL_CON86_CLK_NPU_PVTPLL_SRC_SEL_SHIFT      (9U)
#define CRU_CLKSEL_CON86_CLK_NPU_PVTPLL_SRC_SEL_MASK       (0x1U << CRU_CLKSEL_CON86_CLK_NPU_PVTPLL_SRC_SEL_SHIFT)      /* 0x00000200 */
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_DIV_SHIFT           (10U)
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_DIV_MASK            (0x1FU << CRU_CLKSEL_CON86_CLK_RKNN_DSU0_DIV_SHIFT)          /* 0x00007C00 */
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SEL_SHIFT           (15U)
#define CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SEL_MASK            (0x1U << CRU_CLKSEL_CON86_CLK_RKNN_DSU0_SEL_SHIFT)           /* 0x00008000 */
/* CLKSEL_CON87 */
#define CRU_CLKSEL_CON87_OFFSET                            (0x45CU)
#define CRU_CLKSEL_CON87_PCLK_NPUTOP_ROOT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON87_PCLK_NPUTOP_ROOT_SEL_MASK         (0x3U << CRU_CLKSEL_CON87_PCLK_NPUTOP_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define CRU_CLKSEL_CON87_CLK_NPUTIMER_ROOT_SEL_SHIFT       (2U)
#define CRU_CLKSEL_CON87_CLK_NPUTIMER_ROOT_SEL_MASK        (0x1U << CRU_CLKSEL_CON87_CLK_NPUTIMER_ROOT_SEL_SHIFT)       /* 0x00000004 */
#define CRU_CLKSEL_CON87_HCLK_NPU_CM0_ROOT_SEL_SHIFT       (3U)
#define CRU_CLKSEL_CON87_HCLK_NPU_CM0_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON87_HCLK_NPU_CM0_ROOT_SEL_SHIFT)       /* 0x00000018 */
#define CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_DIV_SHIFT         (5U)
#define CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_DIV_MASK          (0x1FU << CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_DIV_SHIFT)        /* 0x000003E0 */
#define CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_SEL_SHIFT         (10U)
#define CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_SEL_MASK          (0x1U << CRU_CLKSEL_CON87_CLK_NPU_CM0_RTC_SEL_SHIFT)         /* 0x00000400 */
#define CRU_CLKSEL_CON87_MBIST_CLK_ACLK_RKNNTOP_SEL_SHIFT  (11U)
#define CRU_CLKSEL_CON87_MBIST_CLK_ACLK_RKNNTOP_SEL_MASK   (0x1U << CRU_CLKSEL_CON87_MBIST_CLK_ACLK_RKNNTOP_SEL_SHIFT)  /* 0x00000800 */
/* CLKSEL_CON88 */
#define CRU_CLKSEL_CON88_OFFSET                            (0x460U)
#define CRU_CLKSEL_CON88_HCLK_NVM_ROOT_SEL_SHIFT           (0U)
#define CRU_CLKSEL_CON88_HCLK_NVM_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON88_HCLK_NVM_ROOT_SEL_SHIFT)           /* 0x00000003 */
#define CRU_CLKSEL_CON88_ACLK_NVM_ROOT_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON88_ACLK_NVM_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON88_ACLK_NVM_ROOT_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON88_ACLK_NVM_ROOT_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON88_ACLK_NVM_ROOT_SEL_MASK            (0x1U << CRU_CLKSEL_CON88_ACLK_NVM_ROOT_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON89 */
#define CRU_CLKSEL_CON89_OFFSET                            (0x464U)
#define CRU_CLKSEL_CON89_SCLK_FSPI_X2_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON89_SCLK_FSPI_X2_DIV_MASK             (0x3FU << CRU_CLKSEL_CON89_SCLK_FSPI_X2_DIV_SHIFT)           /* 0x0000003F */
#define CRU_CLKSEL_CON89_SCLK_FSPI_X2_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON89_SCLK_FSPI_X2_SEL_MASK             (0x3U << CRU_CLKSEL_CON89_SCLK_FSPI_X2_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON89_CCLK_SRC_EMMC_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON89_CCLK_SRC_EMMC_DIV_MASK            (0x3FU << CRU_CLKSEL_CON89_CCLK_SRC_EMMC_DIV_SHIFT)          /* 0x00003F00 */
#define CRU_CLKSEL_CON89_CCLK_SRC_EMMC_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON89_CCLK_SRC_EMMC_SEL_MASK            (0x3U << CRU_CLKSEL_CON89_CCLK_SRC_EMMC_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON90 */
#define CRU_CLKSEL_CON90_OFFSET                            (0x468U)
#define CRU_CLKSEL_CON90_BCLK_EMMC_SEL_SHIFT               (0U)
#define CRU_CLKSEL_CON90_BCLK_EMMC_SEL_MASK                (0x3U << CRU_CLKSEL_CON90_BCLK_EMMC_SEL_SHIFT)               /* 0x00000003 */
/* CLKSEL_CON92 */
#define CRU_CLKSEL_CON92_OFFSET                            (0x470U)
#define CRU_CLKSEL_CON92_PCLK_PHP_ROOT_SEL_SHIFT           (0U)
#define CRU_CLKSEL_CON92_PCLK_PHP_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON92_PCLK_PHP_ROOT_SEL_SHIFT)           /* 0x00000003 */
#define CRU_CLKSEL_CON92_ACLK_PHP_ROOT_DIV_SHIFT           (4U)
#define CRU_CLKSEL_CON92_ACLK_PHP_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON92_ACLK_PHP_ROOT_DIV_SHIFT)          /* 0x000001F0 */
#define CRU_CLKSEL_CON92_ACLK_PHP_ROOT_SEL_SHIFT           (9U)
#define CRU_CLKSEL_CON92_ACLK_PHP_ROOT_SEL_MASK            (0x1U << CRU_CLKSEL_CON92_ACLK_PHP_ROOT_SEL_SHIFT)           /* 0x00000200 */
/* CLKSEL_CON93 */
#define CRU_CLKSEL_CON93_OFFSET                            (0x474U)
#define CRU_CLKSEL_CON93_CLK_RXOOB0_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON93_CLK_RXOOB0_DIV_MASK               (0x7FU << CRU_CLKSEL_CON93_CLK_RXOOB0_DIV_SHIFT)             /* 0x0000007F */
#define CRU_CLKSEL_CON93_CLK_RXOOB0_SEL_SHIFT              (7U)
#define CRU_CLKSEL_CON93_CLK_RXOOB0_SEL_MASK               (0x1U << CRU_CLKSEL_CON93_CLK_RXOOB0_SEL_SHIFT)              /* 0x00000080 */
#define CRU_CLKSEL_CON93_CLK_RXOOB1_DIV_SHIFT              (8U)
#define CRU_CLKSEL_CON93_CLK_RXOOB1_DIV_MASK               (0x7FU << CRU_CLKSEL_CON93_CLK_RXOOB1_DIV_SHIFT)             /* 0x00007F00 */
#define CRU_CLKSEL_CON93_CLK_RXOOB1_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON93_CLK_RXOOB1_SEL_MASK               (0x1U << CRU_CLKSEL_CON93_CLK_RXOOB1_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON103 */
#define CRU_CLKSEL_CON103_OFFSET                           (0x49CU)
#define CRU_CLKSEL_CON103_HCLK_SDGMAC_ROOT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON103_HCLK_SDGMAC_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON103_HCLK_SDGMAC_ROOT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_DIV_MASK        (0x1FU << CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_SEL_MASK        (0x1U << CRU_CLKSEL_CON103_ACLK_SDGMAC_ROOT_SEL_SHIFT)       /* 0x00000080 */
#define CRU_CLKSEL_CON103_PCLK_SDGMAC_ROOT_SEL_SHIFT       (8U)
#define CRU_CLKSEL_CON103_PCLK_SDGMAC_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON103_PCLK_SDGMAC_ROOT_SEL_SHIFT)       /* 0x00000300 */
/* CLKSEL_CON104 */
#define CRU_CLKSEL_CON104_OFFSET                           (0x4A0U)
#define CRU_CLKSEL_CON104_CCLK_SRC_SDIO_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON104_CCLK_SRC_SDIO_DIV_MASK           (0x3FU << CRU_CLKSEL_CON104_CCLK_SRC_SDIO_DIV_SHIFT)         /* 0x0000003F */
#define CRU_CLKSEL_CON104_CCLK_SRC_SDIO_SEL_SHIFT          (6U)
#define CRU_CLKSEL_CON104_CCLK_SRC_SDIO_SEL_MASK           (0x3U << CRU_CLKSEL_CON104_CCLK_SRC_SDIO_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_DIV_SHIFT  (8U)
#define CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_DIV_MASK   (0x1FU << CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_DIV_SHIFT) /* 0x00001F00 */
#define CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_SEL_SHIFT  (13U)
#define CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_SEL_MASK   (0x3U << CRU_CLKSEL_CON104_CLK_GMAC1_PTP_REF_SRC_SEL_SHIFT)  /* 0x00006000 */
/* CLKSEL_CON105 */
#define CRU_CLKSEL_CON105_OFFSET                           (0x4A4U)
#define CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_DIV_MASK   (0x1FU << CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_DIV_SHIFT) /* 0x0000001F */
#define CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_SEL_SHIFT  (5U)
#define CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_SEL_MASK   (0x3U << CRU_CLKSEL_CON105_CLK_GMAC0_PTP_REF_SRC_SEL_SHIFT)  /* 0x00000060 */
#define CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_DIV_SHIFT        (7U)
#define CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_DIV_MASK         (0x3FU << CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_DIV_SHIFT)       /* 0x00001F80 */
#define CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_SEL_SHIFT        (13U)
#define CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_SEL_MASK         (0x3U << CRU_CLKSEL_CON105_CCLK_SRC_SDMMC0_SEL_SHIFT)        /* 0x00006000 */
/* CLKSEL_CON106 */
#define CRU_CLKSEL_CON106_OFFSET                           (0x4A8U)
#define CRU_CLKSEL_CON106_SCLK_FSPI1_X2_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON106_SCLK_FSPI1_X2_DIV_MASK           (0x3FU << CRU_CLKSEL_CON106_SCLK_FSPI1_X2_DIV_SHIFT)         /* 0x0000003F */
#define CRU_CLKSEL_CON106_SCLK_FSPI1_X2_SEL_SHIFT          (6U)
#define CRU_CLKSEL_CON106_SCLK_FSPI1_X2_SEL_MASK           (0x3U << CRU_CLKSEL_CON106_SCLK_FSPI1_X2_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_DIV_MASK          (0x1FU << CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_DIV_SHIFT)        /* 0x00001F00 */
#define CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_SEL_SHIFT         (13U)
#define CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_SEL_MASK          (0x1U << CRU_CLKSEL_CON106_ACLK_DSMC_ROOT_SEL_SHIFT)         /* 0x00002000 */
/* CLKSEL_CON107 */
#define CRU_CLKSEL_CON107_OFFSET                           (0x4ACU)
#define CRU_CLKSEL_CON107_CLK_DSMC_SYS_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON107_CLK_DSMC_SYS_DIV_MASK            (0x1FU << CRU_CLKSEL_CON107_CLK_DSMC_SYS_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON107_CLK_DSMC_SYS_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON107_CLK_DSMC_SYS_SEL_MASK            (0x1U << CRU_CLKSEL_CON107_CLK_DSMC_SYS_SEL_SHIFT)           /* 0x00000020 */
#define CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_DIV_SHIFT         (6U)
#define CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_DIV_MASK          (0x1FU << CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_DIV_SHIFT)        /* 0x000007C0 */
#define CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_SEL_SHIFT         (11U)
#define CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_SEL_MASK          (0x3U << CRU_CLKSEL_CON107_CLK_FLEXBUS_TX_SEL_SHIFT)         /* 0x00001800 */
/* CLKSEL_CON108 */
#define CRU_CLKSEL_CON108_OFFSET                           (0x4B0U)
#define CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_DIV_MASK          (0x1FU << CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_SEL_SHIFT         (5U)
#define CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_SEL_MASK          (0x3U << CRU_CLKSEL_CON108_CLK_FLEXBUS_RX_SEL_SHIFT)         /* 0x00000060 */
/* CLKSEL_CON110 */
#define CRU_CLKSEL_CON110_OFFSET                           (0x4B8U)
#define CRU_CLKSEL_CON110_HCLK_RKVDEC_ROOT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON110_HCLK_RKVDEC_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON110_HCLK_RKVDEC_ROOT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_DIV_SHIFT   (2U)
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_DIV_MASK    (0x1FU << CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_DIV_SHIFT)  /* 0x0000007C */
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_SEL_SHIFT   (7U)
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_SEL_MASK    (0x3U << CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_PRE_SEL_SHIFT)   /* 0x00000180 */
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_DIV_SHIFT   (9U)
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_DIV_MASK    (0x1FU << CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_DIV_SHIFT)  /* 0x00003E00 */
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_SEL_SHIFT   (14U)
#define CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_SEL_MASK    (0x3U << CRU_CLKSEL_CON110_ACLK_RKVDEC_ROOT_BAK_SEL_SHIFT)   /* 0x0000C000 */
/* CLKSEL_CON111 */
#define CRU_CLKSEL_CON111_OFFSET                           (0x4BCU)
#define CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_DIV_MASK      (0x1FU << CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_SEL_MASK      (0x3U << CRU_CLKSEL_CON111_CLK_RKVDEC_HEVC_CA_SEL_SHIFT)     /* 0x00000060 */
/* CLKSEL_CON115 */
#define CRU_CLKSEL_CON115_OFFSET                           (0x4CCU)
#define CRU_CLKSEL_CON115_ACLK_UFS_ROOT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON115_ACLK_UFS_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON115_ACLK_UFS_ROOT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON115_ACLK_UFS_ROOT_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON115_ACLK_UFS_ROOT_SEL_MASK           (0x1U << CRU_CLKSEL_CON115_ACLK_UFS_ROOT_SEL_SHIFT)          /* 0x00000020 */
#define CRU_CLKSEL_CON115_ACLK_USB_ROOT_DIV_SHIFT          (6U)
#define CRU_CLKSEL_CON115_ACLK_USB_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON115_ACLK_USB_ROOT_DIV_SHIFT)         /* 0x000007C0 */
#define CRU_CLKSEL_CON115_ACLK_USB_ROOT_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON115_ACLK_USB_ROOT_SEL_MASK           (0x1U << CRU_CLKSEL_CON115_ACLK_USB_ROOT_SEL_SHIFT)          /* 0x00000800 */
#define CRU_CLKSEL_CON115_PCLK_USB_ROOT_SEL_SHIFT          (12U)
#define CRU_CLKSEL_CON115_PCLK_USB_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON115_PCLK_USB_ROOT_SEL_SHIFT)          /* 0x00003000 */
/* CLKSEL_CON118 */
#define CRU_CLKSEL_CON118_OFFSET                           (0x4D8U)
#define CRU_CLKSEL_CON118_ACLK_VPU_ROOT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON118_ACLK_VPU_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON118_ACLK_VPU_ROOT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON118_ACLK_VPU_ROOT_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON118_ACLK_VPU_ROOT_SEL_MASK           (0x7U << CRU_CLKSEL_CON118_ACLK_VPU_ROOT_SEL_SHIFT)          /* 0x000000E0 */
#define CRU_CLKSEL_CON118_ACLK_VPU_MID_ROOT_SEL_SHIFT      (8U)
#define CRU_CLKSEL_CON118_ACLK_VPU_MID_ROOT_SEL_MASK       (0x3U << CRU_CLKSEL_CON118_ACLK_VPU_MID_ROOT_SEL_SHIFT)      /* 0x00000300 */
#define CRU_CLKSEL_CON118_HCLK_VPU_ROOT_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON118_HCLK_VPU_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON118_HCLK_VPU_ROOT_SEL_SHIFT)          /* 0x00000C00 */
/* CLKSEL_CON119 */
#define CRU_CLKSEL_CON119_OFFSET                           (0x4DCU)
#define CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_DIV_MASK          (0x1FU << CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_SEL_SHIFT         (5U)
#define CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_SEL_MASK          (0x3U << CRU_CLKSEL_CON119_ACLK_JPEG_ROOT_SEL_SHIFT)         /* 0x00000060 */
#define CRU_CLKSEL_CON119_ACLK_VPU_LOW_ROOT_SEL_SHIFT      (7U)
#define CRU_CLKSEL_CON119_ACLK_VPU_LOW_ROOT_SEL_MASK       (0x3U << CRU_CLKSEL_CON119_ACLK_VPU_LOW_ROOT_SEL_SHIFT)      /* 0x00000180 */
/* CLKSEL_CON120 */
#define CRU_CLKSEL_CON120_OFFSET                           (0x4E0U)
#define CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_DIV_MASK        (0x1FU << CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_SEL_SHIFT       (5U)
#define CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_SEL_MASK        (0x7U << CRU_CLKSEL_CON120_CLK_CORE_RGA2E_0_SEL_SHIFT)       /* 0x000000E0 */
#define CRU_CLKSEL_CON120_CLK_CORE_VDPP_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON120_CLK_CORE_VDPP_DIV_MASK           (0x1FU << CRU_CLKSEL_CON120_CLK_CORE_VDPP_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON120_CLK_CORE_VDPP_SEL_SHIFT          (13U)
#define CRU_CLKSEL_CON120_CLK_CORE_VDPP_SEL_MASK           (0x1U << CRU_CLKSEL_CON120_CLK_CORE_VDPP_SEL_SHIFT)          /* 0x00002000 */
/* CLKSEL_CON121 */
#define CRU_CLKSEL_CON121_OFFSET                           (0x4E4U)
#define CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_DIV_MASK        (0x1FU << CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_SEL_SHIFT       (5U)
#define CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_SEL_MASK        (0x7U << CRU_CLKSEL_CON121_CLK_CORE_RGA2E_1_SEL_SHIFT)       /* 0x000000E0 */
/* CLKSEL_CON122 */
#define CRU_CLKSEL_CON122_OFFSET                           (0x4E8U)
#define CRU_CLKSEL_CON122_DCLK_EBC_FRAC_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON122_DCLK_EBC_FRAC_SRC_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON122_DCLK_EBC_FRAC_SRC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON123 */
#define CRU_CLKSEL_CON123_OFFSET                           (0x4ECU)
#define CRU_CLKSEL_CON123_DCLK_EBC_FRAC_SRC_SEL_SHIFT      (0U)
#define CRU_CLKSEL_CON123_DCLK_EBC_FRAC_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON123_DCLK_EBC_FRAC_SRC_SEL_SHIFT)      /* 0x00000007 */
#define CRU_CLKSEL_CON123_DCLK_EBC_DIV_SHIFT               (3U)
#define CRU_CLKSEL_CON123_DCLK_EBC_DIV_MASK                (0x1FFU << CRU_CLKSEL_CON123_DCLK_EBC_DIV_SHIFT)             /* 0x00000FF8 */
#define CRU_CLKSEL_CON123_DCLK_EBC_SEL_SHIFT               (12U)
#define CRU_CLKSEL_CON123_DCLK_EBC_SEL_MASK                (0x7U << CRU_CLKSEL_CON123_DCLK_EBC_SEL_SHIFT)               /* 0x00007000 */
/* CLKSEL_CON124 */
#define CRU_CLKSEL_CON124_OFFSET                           (0x4F0U)
#define CRU_CLKSEL_CON124_HCLK_VEPU0_ROOT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON124_HCLK_VEPU0_ROOT_SEL_MASK         (0x3U << CRU_CLKSEL_CON124_HCLK_VEPU0_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_DIV_SHIFT        (2U)
#define CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_DIV_MASK         (0x1FU << CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_DIV_SHIFT)       /* 0x0000007C */
#define CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_SEL_MASK         (0x1U << CRU_CLKSEL_CON124_ACLK_VEPU0_ROOT_SEL_SHIFT)        /* 0x00000080 */
#define CRU_CLKSEL_CON124_CLK_VEPU0_CORE_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON124_CLK_VEPU0_CORE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON124_CLK_VEPU0_CORE_DIV_SHIFT)        /* 0x00001F00 */
#define CRU_CLKSEL_CON124_CLK_VEPU0_CORE_SEL_SHIFT         (13U)
#define CRU_CLKSEL_CON124_CLK_VEPU0_CORE_SEL_MASK          (0x7U << CRU_CLKSEL_CON124_CLK_VEPU0_CORE_SEL_SHIFT)         /* 0x0000E000 */
/* CLKSEL_CON128 */
#define CRU_CLKSEL_CON128_OFFSET                           (0x500U)
#define CRU_CLKSEL_CON128_ACLK_VI_ROOT_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON128_ACLK_VI_ROOT_DIV_MASK            (0x1FU << CRU_CLKSEL_CON128_ACLK_VI_ROOT_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON128_ACLK_VI_ROOT_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON128_ACLK_VI_ROOT_SEL_MASK            (0x7U << CRU_CLKSEL_CON128_ACLK_VI_ROOT_SEL_SHIFT)           /* 0x000000E0 */
#define CRU_CLKSEL_CON128_HCLK_VI_ROOT_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON128_HCLK_VI_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON128_HCLK_VI_ROOT_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON128_PCLK_VI_ROOT_SEL_SHIFT           (10U)
#define CRU_CLKSEL_CON128_PCLK_VI_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON128_PCLK_VI_ROOT_SEL_SHIFT)           /* 0x00000C00 */
/* CLKSEL_CON129 */
#define CRU_CLKSEL_CON129_OFFSET                           (0x504U)
#define CRU_CLKSEL_CON129_DCLK_VICAP_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON129_DCLK_VICAP_DIV_MASK              (0x1FU << CRU_CLKSEL_CON129_DCLK_VICAP_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON129_DCLK_VICAP_SEL_SHIFT             (5U)
#define CRU_CLKSEL_CON129_DCLK_VICAP_SEL_MASK              (0x1U << CRU_CLKSEL_CON129_DCLK_VICAP_SEL_SHIFT)             /* 0x00000020 */
#define CRU_CLKSEL_CON129_CLK_ISP0_CORE_DIV_SHIFT          (6U)
#define CRU_CLKSEL_CON129_CLK_ISP0_CORE_DIV_MASK           (0x1FU << CRU_CLKSEL_CON129_CLK_ISP0_CORE_DIV_SHIFT)         /* 0x000007C0 */
#define CRU_CLKSEL_CON129_CLK_ISP0_CORE_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON129_CLK_ISP0_CORE_SEL_MASK           (0x7U << CRU_CLKSEL_CON129_CLK_ISP0_CORE_SEL_SHIFT)          /* 0x00003800 */
/* CLKSEL_CON130 */
#define CRU_CLKSEL_CON130_OFFSET                           (0x508U)
#define CRU_CLKSEL_CON130_ICLK_CSIHOST01_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON130_ICLK_CSIHOST01_SEL_MASK          (0x3U << CRU_CLKSEL_CON130_ICLK_CSIHOST01_SEL_SHIFT)         /* 0x00000180 */
#define CRU_CLKSEL_CON130_CLK_ISP_PVTPLL_SRC_SEL_SHIFT     (9U)
#define CRU_CLKSEL_CON130_CLK_ISP_PVTPLL_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON130_CLK_ISP_PVTPLL_SRC_SEL_SHIFT)     /* 0x00000200 */
#define CRU_CLKSEL_CON130_ACLK_VI_ROOT_INTER_DIV_SHIFT     (10U)
#define CRU_CLKSEL_CON130_ACLK_VI_ROOT_INTER_DIV_MASK      (0x7U << CRU_CLKSEL_CON130_ACLK_VI_ROOT_INTER_DIV_SHIFT)     /* 0x00001C00 */
/* CLKSEL_CON144 */
#define CRU_CLKSEL_CON144_OFFSET                           (0x540U)
#define CRU_CLKSEL_CON144_ACLK_VOP_ROOT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON144_ACLK_VOP_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON144_ACLK_VOP_ROOT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON144_ACLK_VOP_ROOT_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON144_ACLK_VOP_ROOT_SEL_MASK           (0x7U << CRU_CLKSEL_CON144_ACLK_VOP_ROOT_SEL_SHIFT)          /* 0x000000E0 */
#define CRU_CLKSEL_CON144_HCLK_VOP_ROOT_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON144_HCLK_VOP_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON144_HCLK_VOP_ROOT_SEL_SHIFT)          /* 0x00000C00 */
#define CRU_CLKSEL_CON144_PCLK_VOP_ROOT_SEL_SHIFT          (12U)
#define CRU_CLKSEL_CON144_PCLK_VOP_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON144_PCLK_VOP_ROOT_SEL_SHIFT)          /* 0x00003000 */
/* CLKSEL_CON145 */
#define CRU_CLKSEL_CON145_OFFSET                           (0x544U)
#define CRU_CLKSEL_CON145_DCLK_VP0_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON145_DCLK_VP0_SRC_DIV_MASK            (0xFFU << CRU_CLKSEL_CON145_DCLK_VP0_SRC_DIV_SHIFT)          /* 0x000000FF */
#define CRU_CLKSEL_CON145_DCLK_VP0_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON145_DCLK_VP0_SRC_SEL_MASK            (0x7U << CRU_CLKSEL_CON145_DCLK_VP0_SRC_SEL_SHIFT)           /* 0x00000700 */
/* CLKSEL_CON146 */
#define CRU_CLKSEL_CON146_OFFSET                           (0x548U)
#define CRU_CLKSEL_CON146_DCLK_VP1_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON146_DCLK_VP1_SRC_DIV_MASK            (0xFFU << CRU_CLKSEL_CON146_DCLK_VP1_SRC_DIV_SHIFT)          /* 0x000000FF */
#define CRU_CLKSEL_CON146_DCLK_VP1_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON146_DCLK_VP1_SRC_SEL_MASK            (0x7U << CRU_CLKSEL_CON146_DCLK_VP1_SRC_SEL_SHIFT)           /* 0x00000700 */
/* CLKSEL_CON147 */
#define CRU_CLKSEL_CON147_OFFSET                           (0x54CU)
#define CRU_CLKSEL_CON147_DCLK_VP2_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON147_DCLK_VP2_SRC_DIV_MASK            (0xFFU << CRU_CLKSEL_CON147_DCLK_VP2_SRC_DIV_SHIFT)          /* 0x000000FF */
#define CRU_CLKSEL_CON147_DCLK_VP2_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON147_DCLK_VP2_SRC_SEL_MASK            (0x7U << CRU_CLKSEL_CON147_DCLK_VP2_SRC_SEL_SHIFT)           /* 0x00000700 */
#define CRU_CLKSEL_CON147_DCLK_VP0_SEL_SHIFT               (11U)
#define CRU_CLKSEL_CON147_DCLK_VP0_SEL_MASK                (0x1U << CRU_CLKSEL_CON147_DCLK_VP0_SEL_SHIFT)               /* 0x00000800 */
#define CRU_CLKSEL_CON147_DCLK_VP1_SEL_SHIFT               (12U)
#define CRU_CLKSEL_CON147_DCLK_VP1_SEL_MASK                (0x1U << CRU_CLKSEL_CON147_DCLK_VP1_SEL_SHIFT)               /* 0x00001000 */
#define CRU_CLKSEL_CON147_DCLK_VP2_SEL_SHIFT               (13U)
#define CRU_CLKSEL_CON147_DCLK_VP2_SEL_MASK                (0x1U << CRU_CLKSEL_CON147_DCLK_VP2_SEL_SHIFT)               /* 0x00002000 */
/* CLKSEL_CON149 */
#define CRU_CLKSEL_CON149_OFFSET                           (0x554U)
#define CRU_CLKSEL_CON149_ACLK_VO0_ROOT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON149_ACLK_VO0_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON149_ACLK_VO0_ROOT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON149_ACLK_VO0_ROOT_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON149_ACLK_VO0_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON149_ACLK_VO0_ROOT_SEL_SHIFT)          /* 0x00000060 */
#define CRU_CLKSEL_CON149_HCLK_VO0_ROOT_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON149_HCLK_VO0_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON149_HCLK_VO0_ROOT_SEL_SHIFT)          /* 0x00000180 */
#define CRU_CLKSEL_CON149_PCLK_VO0_ROOT_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON149_PCLK_VO0_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON149_PCLK_VO0_ROOT_SEL_SHIFT)          /* 0x00001800 */
/* CLKSEL_CON151 */
#define CRU_CLKSEL_CON151_OFFSET                           (0x55CU)
#define CRU_CLKSEL_CON151_CLK_DSIHOST0_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON151_CLK_DSIHOST0_DIV_MASK            (0x7FU << CRU_CLKSEL_CON151_CLK_DSIHOST0_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON151_CLK_DSIHOST0_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON151_CLK_DSIHOST0_SEL_MASK            (0x7U << CRU_CLKSEL_CON151_CLK_DSIHOST0_SEL_SHIFT)           /* 0x00000380 */
#define CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_DIV_SHIFT       (10U)
#define CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_DIV_MASK        (0x1FU << CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_DIV_SHIFT)      /* 0x00007C00 */
#define CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_SEL_SHIFT       (15U)
#define CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_SEL_MASK        (0x1U << CRU_CLKSEL_CON151_CLK_HDMITX0_EARC_SEL_SHIFT)       /* 0x00008000 */
/* CLKSEL_CON152 */
#define CRU_CLKSEL_CON152_OFFSET                           (0x560U)
#define CRU_CLKSEL_CON152_CLK_EDP0_200M_SEL_SHIFT          (1U)
#define CRU_CLKSEL_CON152_CLK_EDP0_200M_SEL_MASK           (0x3U << CRU_CLKSEL_CON152_CLK_EDP0_200M_SEL_SHIFT)          /* 0x00000006 */
/* CLKSEL_CON154 */
#define CRU_CLKSEL_CON154_OFFSET                           (0x568U)
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_DIV_SHIFT      (2U)
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_DIV_MASK       (0xFFU << CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_DIV_SHIFT)     /* 0x000003FC */
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_SEL_SHIFT      (10U)
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SRC_SEL_SHIFT)      /* 0x00001C00 */
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SEL_SHIFT          (13U)
#define CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON154_MCLK_SAI5_8CH_SEL_SHIFT)          /* 0x00002000 */
/* CLKSEL_CON155 */
#define CRU_CLKSEL_CON155_OFFSET                           (0x56CU)
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_DIV_MASK       (0xFFU << CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_DIV_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_SEL_SHIFT      (8U)
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SRC_SEL_SHIFT)      /* 0x00000700 */
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON155_MCLK_SAI6_8CH_SEL_SHIFT)          /* 0x00000800 */
/* CLKSEL_CON156 */
#define CRU_CLKSEL_CON156_OFFSET                           (0x570U)
#define CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_DIV_MASK          (0x1FU << CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_SEL_SHIFT         (5U)
#define CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_SEL_MASK          (0x7U << CRU_CLKSEL_CON156_MCLK_SPDIF_TX2_SEL_SHIFT)         /* 0x000000E0 */
#define CRU_CLKSEL_CON156_MCLK_SPDIFRX2_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON156_MCLK_SPDIFRX2_DIV_MASK           (0x1FU << CRU_CLKSEL_CON156_MCLK_SPDIFRX2_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON156_MCLK_SPDIFRX2_SEL_SHIFT          (13U)
#define CRU_CLKSEL_CON156_MCLK_SPDIFRX2_SEL_MASK           (0x3U << CRU_CLKSEL_CON156_MCLK_SPDIFRX2_SEL_SHIFT)          /* 0x00006000 */
/* CLKSEL_CON157 */
#define CRU_CLKSEL_CON157_OFFSET                           (0x574U)
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_DIV_MASK       (0xFFU << CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_DIV_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_SEL_SHIFT      (8U)
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SRC_SEL_SHIFT)      /* 0x00000700 */
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON157_MCLK_SAI8_8CH_SEL_SHIFT)          /* 0x00000800 */
/* CLKSEL_CON158 */
#define CRU_CLKSEL_CON158_OFFSET                           (0x578U)
#define CRU_CLKSEL_CON158_ACLK_VO1_ROOT_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON158_ACLK_VO1_ROOT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON158_ACLK_VO1_ROOT_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON158_ACLK_VO1_ROOT_SEL_SHIFT          (5U)
#define CRU_CLKSEL_CON158_ACLK_VO1_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON158_ACLK_VO1_ROOT_SEL_SHIFT)          /* 0x00000060 */
#define CRU_CLKSEL_CON158_HCLK_VO1_ROOT_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON158_HCLK_VO1_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON158_HCLK_VO1_ROOT_SEL_SHIFT)          /* 0x00000180 */
#define CRU_CLKSEL_CON158_PCLK_VO1_ROOT_SEL_SHIFT          (9U)
#define CRU_CLKSEL_CON158_PCLK_VO1_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON158_PCLK_VO1_ROOT_SEL_SHIFT)          /* 0x00000600 */
/* CLKSEL_CON159 */
#define CRU_CLKSEL_CON159_OFFSET                           (0x57CU)
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_DIV_MASK       (0xFFU << CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_DIV_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_SEL_SHIFT      (8U)
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SRC_SEL_SHIFT)      /* 0x00000700 */
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON159_MCLK_SAI7_8CH_SEL_SHIFT)          /* 0x00000800 */
/* CLKSEL_CON160 */
#define CRU_CLKSEL_CON160_OFFSET                           (0x580U)
#define CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_DIV_MASK          (0xFFU << CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_DIV_SHIFT)        /* 0x000000FF */
#define CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_SEL_MASK          (0x7U << CRU_CLKSEL_CON160_MCLK_SPDIF_TX3_SEL_SHIFT)         /* 0x00000700 */
/* CLKSEL_CON161 */
#define CRU_CLKSEL_CON161_OFFSET                           (0x584U)
#define CRU_CLKSEL_CON161_CLK_AUX16MHZ_0_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON161_CLK_AUX16MHZ_0_DIV_MASK          (0xFFU << CRU_CLKSEL_CON161_CLK_AUX16MHZ_0_DIV_SHIFT)        /* 0x000000FF */
/* CLKSEL_CON162 */
#define CRU_CLKSEL_CON162_OFFSET                           (0x588U)
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_DIV_MASK       (0xFFU << CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_DIV_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_SEL_SHIFT      (8U)
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_SEL_MASK       (0x7U << CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SRC_SEL_SHIFT)      /* 0x00000700 */
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SEL_SHIFT          (11U)
#define CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON162_MCLK_SAI9_8CH_SEL_SHIFT)          /* 0x00000800 */
/* CLKSEL_CON163 */
#define CRU_CLKSEL_CON163_OFFSET                           (0x58CU)
#define CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_DIV_MASK          (0xFFU << CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_DIV_SHIFT)        /* 0x000000FF */
#define CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_SEL_MASK          (0x7U << CRU_CLKSEL_CON163_MCLK_SPDIF_TX4_SEL_SHIFT)         /* 0x00000700 */
/* CLKSEL_CON164 */
#define CRU_CLKSEL_CON164_OFFSET                           (0x590U)
#define CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_DIV_MASK          (0xFFU << CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_DIV_SHIFT)        /* 0x000000FF */
#define CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_SEL_MASK          (0x7U << CRU_CLKSEL_CON164_MCLK_SPDIF_TX5_SEL_SHIFT)         /* 0x00000700 */
/* CLKSEL_CON165 */
#define CRU_CLKSEL_CON165_OFFSET                           (0x594U)
#define CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_DIV_MASK         (0x1FU << CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_SEL_SHIFT        (5U)
#define CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_SEL_MASK         (0x7U << CRU_CLKSEL_CON165_CLK_GPU_SRC_PRE_SEL_SHIFT)        /* 0x000000E0 */
#define CRU_CLKSEL_CON165_CLK_GPU_INNER_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON165_CLK_GPU_INNER_SEL_MASK           (0x1U << CRU_CLKSEL_CON165_CLK_GPU_INNER_SEL_SHIFT)          /* 0x00000100 */
#define CRU_CLKSEL_CON165_CLK_GPU_PVTPLL_SRC_SEL_SHIFT     (9U)
#define CRU_CLKSEL_CON165_CLK_GPU_PVTPLL_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON165_CLK_GPU_PVTPLL_SRC_SEL_SHIFT)     /* 0x00000200 */
/* CLKSEL_CON166 */
#define CRU_CLKSEL_CON166_OFFSET                           (0x598U)
#define CRU_CLKSEL_CON166_ACLK_S_GPU_BIU_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON166_ACLK_S_GPU_BIU_DIV_MASK          (0x1FU << CRU_CLKSEL_CON166_ACLK_S_GPU_BIU_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON166_ACLK_M0_GPU_BIU_DIV_SHIFT        (5U)
#define CRU_CLKSEL_CON166_ACLK_M0_GPU_BIU_DIV_MASK         (0x1FU << CRU_CLKSEL_CON166_ACLK_M0_GPU_BIU_DIV_SHIFT)       /* 0x000003E0 */
#define CRU_CLKSEL_CON166_PCLK_GPU_ROOT_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON166_PCLK_GPU_ROOT_SEL_MASK           (0x3U << CRU_CLKSEL_CON166_PCLK_GPU_ROOT_SEL_SHIFT)          /* 0x00000C00 */
/* CLKSEL_CON167 */
#define CRU_CLKSEL_CON167_OFFSET                           (0x59CU)
#define CRU_CLKSEL_CON167_ACLK_CENTER_ROOT_DIV_SHIFT       (9U)
#define CRU_CLKSEL_CON167_ACLK_CENTER_ROOT_DIV_MASK        (0x1FU << CRU_CLKSEL_CON167_ACLK_CENTER_ROOT_DIV_SHIFT)      /* 0x00003E00 */
/* CLKSEL_CON168 */
#define CRU_CLKSEL_CON168_OFFSET                           (0x5A0U)
#define CRU_CLKSEL_CON168_ACLK_CENTER_ROOT_SEL_SHIFT       (5U)
#define CRU_CLKSEL_CON168_ACLK_CENTER_ROOT_SEL_MASK        (0x7U << CRU_CLKSEL_CON168_ACLK_CENTER_ROOT_SEL_SHIFT)       /* 0x000000E0 */
#define CRU_CLKSEL_CON168_ACLK_CENTER_LOW_ROOT_SEL_SHIFT   (8U)
#define CRU_CLKSEL_CON168_ACLK_CENTER_LOW_ROOT_SEL_MASK    (0x3U << CRU_CLKSEL_CON168_ACLK_CENTER_LOW_ROOT_SEL_SHIFT)   /* 0x00000300 */
#define CRU_CLKSEL_CON168_HCLK_CENTER_ROOT_SEL_SHIFT       (10U)
#define CRU_CLKSEL_CON168_HCLK_CENTER_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON168_HCLK_CENTER_ROOT_SEL_SHIFT)       /* 0x00000C00 */
#define CRU_CLKSEL_CON168_PCLK_CENTER_ROOT_SEL_SHIFT       (12U)
#define CRU_CLKSEL_CON168_PCLK_CENTER_ROOT_SEL_MASK        (0x3U << CRU_CLKSEL_CON168_PCLK_CENTER_ROOT_SEL_SHIFT)       /* 0x00003000 */
/* CLKSEL_CON178 */
#define CRU_CLKSEL_CON178_OFFSET                           (0x5C8U)
#define CRU_CLKSEL_CON178_HCLK_VEPU1_ROOT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON178_HCLK_VEPU1_ROOT_SEL_MASK         (0x3U << CRU_CLKSEL_CON178_HCLK_VEPU1_ROOT_SEL_SHIFT)        /* 0x00000003 */
/* CLKSEL_CON180 */
#define CRU_CLKSEL_CON180_OFFSET                           (0x5D0U)
#define CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_DIV_MASK         (0x1FU << CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_SEL_SHIFT        (5U)
#define CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_SEL_MASK         (0x1U << CRU_CLKSEL_CON180_ACLK_VEPU1_ROOT_SEL_SHIFT)        /* 0x00000020 */
#define CRU_CLKSEL_CON180_CLK_VEPU1_CORE_DIV_SHIFT         (6U)
#define CRU_CLKSEL_CON180_CLK_VEPU1_CORE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON180_CLK_VEPU1_CORE_DIV_SHIFT)        /* 0x000007C0 */
#define CRU_CLKSEL_CON180_CLK_VEPU1_CORE_SEL_SHIFT         (11U)
#define CRU_CLKSEL_CON180_CLK_VEPU1_CORE_SEL_MASK          (0x7U << CRU_CLKSEL_CON180_CLK_VEPU1_CORE_SEL_SHIFT)         /* 0x00003800 */
/* GATE_CON00 */
#define CRU_GATE_CON00_OFFSET                              (0x800U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT         (0U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_MASK          (0x1U << CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT)         /* 0x00000001 */
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT        (1U)
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT)        /* 0x00000002 */
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT        (2U)
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT)        /* 0x00000004 */
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT        (3U)
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT)        /* 0x00000008 */
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT        (4U)
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT)        /* 0x00000010 */
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT        (5U)
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT)        /* 0x00000020 */
#define CRU_GATE_CON00_CLK_MATRIX_350M_SRC_EN_SHIFT        (6U)
#define CRU_GATE_CON00_CLK_MATRIX_350M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_350M_SRC_EN_SHIFT)        /* 0x00000040 */
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT        (7U)
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT)        /* 0x00000080 */
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT        (9U)
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT)        /* 0x00000200 */
#define CRU_GATE_CON00_CLK_MATRIX_600M_SRC_EN_SHIFT        (10U)
#define CRU_GATE_CON00_CLK_MATRIX_600M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_600M_SRC_EN_SHIFT)        /* 0x00000400 */
#define CRU_GATE_CON00_CLK_MATRIX_700M_SRC_EN_SHIFT        (12U)
#define CRU_GATE_CON00_CLK_MATRIX_700M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_700M_SRC_EN_SHIFT)        /* 0x00001000 */
/* GATE_CON01 */
#define CRU_GATE_CON01_OFFSET                              (0x804U)
#define CRU_GATE_CON01_PCLK_TOP_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON01_PCLK_TOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON01_PCLK_TOP_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON01_ACLK_TOP_BIU_EN_SHIFT               (3U)
#define CRU_GATE_CON01_ACLK_TOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON01_ACLK_TOP_BIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON01_CLK_LPLL_SRC_EN_SHIFT               (4U)
#define CRU_GATE_CON01_CLK_LPLL_SRC_EN_MASK                (0x1U << CRU_GATE_CON01_CLK_LPLL_SRC_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON01_PCLK_TOP_BIU_EN_SHIFT               (5U)
#define CRU_GATE_CON01_PCLK_TOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON01_PCLK_TOP_BIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON01_ACLK_LOW_TOP_ROOT_EN_SHIFT          (6U)
#define CRU_GATE_CON01_ACLK_LOW_TOP_ROOT_EN_MASK           (0x1U << CRU_GATE_CON01_ACLK_LOW_TOP_ROOT_EN_SHIFT)          /* 0x00000040 */
#define CRU_GATE_CON01_ACLK_SECURE_HIGH_BIU_EN_SHIFT       (7U)
#define CRU_GATE_CON01_ACLK_SECURE_HIGH_BIU_EN_MASK        (0x1U << CRU_GATE_CON01_ACLK_SECURE_HIGH_BIU_EN_SHIFT)       /* 0x00000080 */
#define CRU_GATE_CON01_CLK_BPLL_SRC_EN_SHIFT               (8U)
#define CRU_GATE_CON01_CLK_BPLL_SRC_EN_MASK                (0x1U << CRU_GATE_CON01_CLK_BPLL_SRC_EN_SHIFT)               /* 0x00000100 */
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_0_EN_SHIFT    (10U)
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_0_EN_MASK     (0x1U << CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_0_EN_SHIFT)    /* 0x00000400 */
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_1_EN_SHIFT    (11U)
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_1_EN_MASK     (0x1U << CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_1_EN_SHIFT)    /* 0x00000800 */
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_2_EN_SHIFT    (12U)
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_2_EN_MASK     (0x1U << CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_2_EN_SHIFT)    /* 0x00001000 */
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_3_EN_SHIFT    (13U)
#define CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_3_EN_MASK     (0x1U << CRU_GATE_CON01_CLK_MATRIX_AUDIO_FRAC_3_EN_SHIFT)    /* 0x00002000 */
#define CRU_GATE_CON01_HCLK_TOP_BIU_EN_SHIFT               (14U)
#define CRU_GATE_CON01_HCLK_TOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON01_HCLK_TOP_BIU_EN_SHIFT)               /* 0x00004000 */
/* GATE_CON02 */
#define CRU_GATE_CON02_OFFSET                              (0x808U)
#define CRU_GATE_CON02_HCLK_VO0VOP_CHANNEL_BIU_EN_SHIFT    (0U)
#define CRU_GATE_CON02_HCLK_VO0VOP_CHANNEL_BIU_EN_MASK     (0x1U << CRU_GATE_CON02_HCLK_VO0VOP_CHANNEL_BIU_EN_SHIFT)    /* 0x00000001 */
#define CRU_GATE_CON02_ACLK_VO0VOP_CHANNEL_BIU_EN_SHIFT    (1U)
#define CRU_GATE_CON02_ACLK_VO0VOP_CHANNEL_BIU_EN_MASK     (0x1U << CRU_GATE_CON02_ACLK_VO0VOP_CHANNEL_BIU_EN_SHIFT)    /* 0x00000002 */
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_0_EN_SHIFT     (5U)
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_0_EN_MASK      (0x1U << CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_0_EN_SHIFT)     /* 0x00000020 */
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_1_EN_SHIFT     (6U)
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_1_EN_MASK      (0x1U << CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_1_EN_SHIFT)     /* 0x00000040 */
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_2_EN_SHIFT     (7U)
#define CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_2_EN_MASK      (0x1U << CRU_GATE_CON02_CLK_MATRIX_UART_FRAC_2_EN_SHIFT)     /* 0x00000080 */
#define CRU_GATE_CON02_CLK_TESTOUT_TOP_EN_SHIFT            (8U)
#define CRU_GATE_CON02_CLK_TESTOUT_TOP_EN_MASK             (0x1U << CRU_GATE_CON02_CLK_TESTOUT_TOP_EN_SHIFT)            /* 0x00000100 */
#define CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT                (9U)
#define CRU_GATE_CON02_CLK_TESTOUT_EN_MASK                 (0x1U << CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON02_CLK_TESTOUT_GRP0_EN_SHIFT           (11U)
#define CRU_GATE_CON02_CLK_TESTOUT_GRP0_EN_MASK            (0x1U << CRU_GATE_CON02_CLK_TESTOUT_GRP0_EN_SHIFT)           /* 0x00000800 */
#define CRU_GATE_CON02_CLK_UART1_SRC_TOP_EN_SHIFT          (13U)
#define CRU_GATE_CON02_CLK_UART1_SRC_TOP_EN_MASK           (0x1U << CRU_GATE_CON02_CLK_UART1_SRC_TOP_EN_SHIFT)          /* 0x00002000 */
#define CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_0_EN_SHIFT     (14U)
#define CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_0_EN_MASK      (0x1U << CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_0_EN_SHIFT)     /* 0x00004000 */
#define CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_1_EN_SHIFT     (15U)
#define CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_1_EN_MASK      (0x1U << CRU_GATE_CON02_CLK_MATRIX_AUDIO_INT_1_EN_SHIFT)     /* 0x00008000 */
/* GATE_CON03 */
#define CRU_GATE_CON03_OFFSET                              (0x80CU)
#define CRU_GATE_CON03_CLK_MATRIX_AUDIO_INT_2_EN_SHIFT     (0U)
#define CRU_GATE_CON03_CLK_MATRIX_AUDIO_INT_2_EN_MASK      (0x1U << CRU_GATE_CON03_CLK_MATRIX_AUDIO_INT_2_EN_SHIFT)     /* 0x00000001 */
#define CRU_GATE_CON03_CLK_PDM0_SRC_TOP_EN_SHIFT           (2U)
#define CRU_GATE_CON03_CLK_PDM0_SRC_TOP_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_PDM0_SRC_TOP_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON03_CLK_PDM1_OUT_EN_SHIFT               (5U)
#define CRU_GATE_CON03_CLK_PDM1_OUT_EN_MASK                (0x1U << CRU_GATE_CON03_CLK_PDM1_OUT_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON03_CLK_MATRIX_GMAC0_125M_SRC_EN_SHIFT  (6U)
#define CRU_GATE_CON03_CLK_MATRIX_GMAC0_125M_SRC_EN_MASK   (0x1U << CRU_GATE_CON03_CLK_MATRIX_GMAC0_125M_SRC_EN_SHIFT)  /* 0x00000040 */
#define CRU_GATE_CON03_CLK_MATRIX_GMAC1_125M_SRC_EN_SHIFT  (7U)
#define CRU_GATE_CON03_CLK_MATRIX_GMAC1_125M_SRC_EN_MASK   (0x1U << CRU_GATE_CON03_CLK_MATRIX_GMAC1_125M_SRC_EN_SHIFT)  /* 0x00000080 */
#define CRU_GATE_CON03_LCLK_ASRC_SRC_0_EN_SHIFT            (10U)
#define CRU_GATE_CON03_LCLK_ASRC_SRC_0_EN_MASK             (0x1U << CRU_GATE_CON03_LCLK_ASRC_SRC_0_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON03_LCLK_ASRC_SRC_1_EN_SHIFT            (11U)
#define CRU_GATE_CON03_LCLK_ASRC_SRC_1_EN_MASK             (0x1U << CRU_GATE_CON03_LCLK_ASRC_SRC_1_EN_SHIFT)            /* 0x00000800 */
/* GATE_CON04 */
#define CRU_GATE_CON04_OFFSET                              (0x810U)
#define CRU_GATE_CON04_REF_CLK0_OUT_PLL_EN_SHIFT           (1U)
#define CRU_GATE_CON04_REF_CLK0_OUT_PLL_EN_MASK            (0x1U << CRU_GATE_CON04_REF_CLK0_OUT_PLL_EN_SHIFT)           /* 0x00000002 */
#define CRU_GATE_CON04_REF_CLK1_OUT_PLL_EN_SHIFT           (2U)
#define CRU_GATE_CON04_REF_CLK1_OUT_PLL_EN_MASK            (0x1U << CRU_GATE_CON04_REF_CLK1_OUT_PLL_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON04_REF_CLK2_OUT_PLL_EN_SHIFT           (3U)
#define CRU_GATE_CON04_REF_CLK2_OUT_PLL_EN_MASK            (0x1U << CRU_GATE_CON04_REF_CLK2_OUT_PLL_EN_SHIFT)           /* 0x00000008 */
/* GATE_CON05 */
#define CRU_GATE_CON05_OFFSET                              (0x814U)
#define CRU_GATE_CON05_REFCLKO25M_ETH0_OUT_EN_SHIFT        (10U)
#define CRU_GATE_CON05_REFCLKO25M_ETH0_OUT_EN_MASK         (0x1U << CRU_GATE_CON05_REFCLKO25M_ETH0_OUT_EN_SHIFT)        /* 0x00000400 */
#define CRU_GATE_CON05_REFCLKO25M_ETH1_OUT_EN_SHIFT        (11U)
#define CRU_GATE_CON05_REFCLKO25M_ETH1_OUT_EN_MASK         (0x1U << CRU_GATE_CON05_REFCLKO25M_ETH1_OUT_EN_SHIFT)        /* 0x00000800 */
#define CRU_GATE_CON05_CLK_CIFOUT_OUT_EN_SHIFT             (12U)
#define CRU_GATE_CON05_CLK_CIFOUT_OUT_EN_MASK              (0x1U << CRU_GATE_CON05_CLK_CIFOUT_OUT_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON05_CLK_GMAC0_RMII_CRU_EN_SHIFT         (13U)
#define CRU_GATE_CON05_CLK_GMAC0_RMII_CRU_EN_MASK          (0x1U << CRU_GATE_CON05_CLK_GMAC0_RMII_CRU_EN_SHIFT)         /* 0x00002000 */
#define CRU_GATE_CON05_CLK_GMAC1_RMII_CRU_EN_SHIFT         (14U)
#define CRU_GATE_CON05_CLK_GMAC1_RMII_CRU_EN_MASK          (0x1U << CRU_GATE_CON05_CLK_GMAC1_RMII_CRU_EN_SHIFT)         /* 0x00004000 */
#define CRU_GATE_CON05_CLK_OTPC_AUTO_RD_EN_SHIFT           (15U)
#define CRU_GATE_CON05_CLK_OTPC_AUTO_RD_EN_MASK            (0x1U << CRU_GATE_CON05_CLK_OTPC_AUTO_RD_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON06 */
#define CRU_GATE_CON06_OFFSET                              (0x818U)
#define CRU_GATE_CON06_CLK_OTP_PHY_EN_SHIFT                (0U)
#define CRU_GATE_CON06_CLK_OTP_PHY_EN_MASK                 (0x1U << CRU_GATE_CON06_CLK_OTP_PHY_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON06_CLK_BISRINTF_PLLSRC_EN_SHIFT        (1U)
#define CRU_GATE_CON06_CLK_BISRINTF_PLLSRC_EN_MASK         (0x1U << CRU_GATE_CON06_CLK_BISRINTF_PLLSRC_EN_SHIFT)        /* 0x00000002 */
#define CRU_GATE_CON06_CLK_BISRINTF_EN_SHIFT               (2U)
#define CRU_GATE_CON06_CLK_BISRINTF_EN_MASK                (0x1U << CRU_GATE_CON06_CLK_BISRINTF_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M0_EN_SHIFT      (3U)
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M0_EN_MASK       (0x1U << CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M0_EN_SHIFT)      /* 0x00000008 */
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M1_EN_SHIFT      (4U)
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M1_EN_MASK       (0x1U << CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M1_EN_SHIFT)      /* 0x00000010 */
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M2_EN_SHIFT      (5U)
#define CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M2_EN_MASK       (0x1U << CRU_GATE_CON06_CLK_MIPI_CAMERAOUT_M2_EN_SHIFT)      /* 0x00000020 */
#define CRU_GATE_CON06_MCLK_PDM0_SRC_TOP_EN_SHIFT          (8U)
#define CRU_GATE_CON06_MCLK_PDM0_SRC_TOP_EN_MASK           (0x1U << CRU_GATE_CON06_MCLK_PDM0_SRC_TOP_EN_SHIFT)          /* 0x00000100 */
/* GATE_CON07 */
#define CRU_GATE_CON07_OFFSET                              (0x81CU)
#define CRU_GATE_CON07_HCLK_AUDIO_ROOT_EN_SHIFT            (1U)
#define CRU_GATE_CON07_HCLK_AUDIO_ROOT_EN_MASK             (0x1U << CRU_GATE_CON07_HCLK_AUDIO_ROOT_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON07_HCLK_AUDIO_BIU_EN_SHIFT             (2U)
#define CRU_GATE_CON07_HCLK_AUDIO_BIU_EN_MASK              (0x1U << CRU_GATE_CON07_HCLK_AUDIO_BIU_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON07_HCLK_ASRC_2CH_0_EN_SHIFT            (3U)
#define CRU_GATE_CON07_HCLK_ASRC_2CH_0_EN_MASK             (0x1U << CRU_GATE_CON07_HCLK_ASRC_2CH_0_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON07_HCLK_ASRC_2CH_1_EN_SHIFT            (4U)
#define CRU_GATE_CON07_HCLK_ASRC_2CH_1_EN_MASK             (0x1U << CRU_GATE_CON07_HCLK_ASRC_2CH_1_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON07_HCLK_ASRC_4CH_0_EN_SHIFT            (5U)
#define CRU_GATE_CON07_HCLK_ASRC_4CH_0_EN_MASK             (0x1U << CRU_GATE_CON07_HCLK_ASRC_4CH_0_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON07_HCLK_ASRC_4CH_1_EN_SHIFT            (6U)
#define CRU_GATE_CON07_HCLK_ASRC_4CH_1_EN_MASK             (0x1U << CRU_GATE_CON07_HCLK_ASRC_4CH_1_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON07_CLK_ASRC_2CH_0_EN_SHIFT             (7U)
#define CRU_GATE_CON07_CLK_ASRC_2CH_0_EN_MASK              (0x1U << CRU_GATE_CON07_CLK_ASRC_2CH_0_EN_SHIFT)             /* 0x00000080 */
#define CRU_GATE_CON07_CLK_ASRC_2CH_1_EN_SHIFT             (8U)
#define CRU_GATE_CON07_CLK_ASRC_2CH_1_EN_MASK              (0x1U << CRU_GATE_CON07_CLK_ASRC_2CH_1_EN_SHIFT)             /* 0x00000100 */
#define CRU_GATE_CON07_CLK_ASRC_4CH_0_EN_SHIFT             (9U)
#define CRU_GATE_CON07_CLK_ASRC_4CH_0_EN_MASK              (0x1U << CRU_GATE_CON07_CLK_ASRC_4CH_0_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON07_CLK_ASRC_4CH_1_EN_SHIFT             (10U)
#define CRU_GATE_CON07_CLK_ASRC_4CH_1_EN_MASK              (0x1U << CRU_GATE_CON07_CLK_ASRC_4CH_1_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON07_MCLK_SAI0_8CH_SRC_EN_SHIFT          (11U)
#define CRU_GATE_CON07_MCLK_SAI0_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON07_MCLK_SAI0_8CH_SRC_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON07_MCLK_SAI0_8CH_EN_SHIFT              (12U)
#define CRU_GATE_CON07_MCLK_SAI0_8CH_EN_MASK               (0x1U << CRU_GATE_CON07_MCLK_SAI0_8CH_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON07_HCLK_SAI0_8CH_EN_SHIFT              (13U)
#define CRU_GATE_CON07_HCLK_SAI0_8CH_EN_MASK               (0x1U << CRU_GATE_CON07_HCLK_SAI0_8CH_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON07_HCLK_SPDIFRX0_EN_SHIFT              (14U)
#define CRU_GATE_CON07_HCLK_SPDIFRX0_EN_MASK               (0x1U << CRU_GATE_CON07_HCLK_SPDIFRX0_EN_SHIFT)              /* 0x00004000 */
#define CRU_GATE_CON07_MCLK_SPDIFRX0_EN_SHIFT              (15U)
#define CRU_GATE_CON07_MCLK_SPDIFRX0_EN_MASK               (0x1U << CRU_GATE_CON07_MCLK_SPDIFRX0_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON08 */
#define CRU_GATE_CON08_OFFSET                              (0x820U)
#define CRU_GATE_CON08_HCLK_SPDIFRX1_EN_SHIFT              (0U)
#define CRU_GATE_CON08_HCLK_SPDIFRX1_EN_MASK               (0x1U << CRU_GATE_CON08_HCLK_SPDIFRX1_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON08_MCLK_SPDIFRX1_EN_SHIFT              (1U)
#define CRU_GATE_CON08_MCLK_SPDIFRX1_EN_MASK               (0x1U << CRU_GATE_CON08_MCLK_SPDIFRX1_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON08_MCLK_SAI1_8CH_SRC_EN_SHIFT          (4U)
#define CRU_GATE_CON08_MCLK_SAI1_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON08_MCLK_SAI1_8CH_SRC_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON08_MCLK_SAI1_8CH_EN_SHIFT              (5U)
#define CRU_GATE_CON08_MCLK_SAI1_8CH_EN_MASK               (0x1U << CRU_GATE_CON08_MCLK_SAI1_8CH_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON08_HCLK_SAI1_8CH_EN_SHIFT              (6U)
#define CRU_GATE_CON08_HCLK_SAI1_8CH_EN_MASK               (0x1U << CRU_GATE_CON08_HCLK_SAI1_8CH_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON08_MCLK_SAI2_2CH_SRC_EN_SHIFT          (7U)
#define CRU_GATE_CON08_MCLK_SAI2_2CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON08_MCLK_SAI2_2CH_SRC_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON08_MCLK_SAI2_2CH_EN_SHIFT              (8U)
#define CRU_GATE_CON08_MCLK_SAI2_2CH_EN_MASK               (0x1U << CRU_GATE_CON08_MCLK_SAI2_2CH_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON08_HCLK_SAI2_2CH_EN_SHIFT              (10U)
#define CRU_GATE_CON08_HCLK_SAI2_2CH_EN_MASK               (0x1U << CRU_GATE_CON08_HCLK_SAI2_2CH_EN_SHIFT)              /* 0x00000400 */
#define CRU_GATE_CON08_MCLK_SAI3_2CH_SRC_EN_SHIFT          (11U)
#define CRU_GATE_CON08_MCLK_SAI3_2CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON08_MCLK_SAI3_2CH_SRC_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON08_MCLK_SAI3_2CH_EN_SHIFT              (12U)
#define CRU_GATE_CON08_MCLK_SAI3_2CH_EN_MASK               (0x1U << CRU_GATE_CON08_MCLK_SAI3_2CH_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON08_HCLK_SAI3_2CH_EN_SHIFT              (14U)
#define CRU_GATE_CON08_HCLK_SAI3_2CH_EN_MASK               (0x1U << CRU_GATE_CON08_HCLK_SAI3_2CH_EN_SHIFT)              /* 0x00004000 */
#define CRU_GATE_CON08_MCLK_SAI4_2CH_SRC_EN_SHIFT          (15U)
#define CRU_GATE_CON08_MCLK_SAI4_2CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON08_MCLK_SAI4_2CH_SRC_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON09 */
#define CRU_GATE_CON09_OFFSET                              (0x824U)
#define CRU_GATE_CON09_MCLK_SAI4_2CH_EN_SHIFT              (0U)
#define CRU_GATE_CON09_MCLK_SAI4_2CH_EN_MASK               (0x1U << CRU_GATE_CON09_MCLK_SAI4_2CH_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON09_HCLK_SAI4_2CH_EN_SHIFT              (2U)
#define CRU_GATE_CON09_HCLK_SAI4_2CH_EN_MASK               (0x1U << CRU_GATE_CON09_HCLK_SAI4_2CH_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON09_HCLK_ACDCDIG_DSM_EN_SHIFT           (3U)
#define CRU_GATE_CON09_HCLK_ACDCDIG_DSM_EN_MASK            (0x1U << CRU_GATE_CON09_HCLK_ACDCDIG_DSM_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON09_MCLK_ACDCDIG_DSM_EN_SHIFT           (4U)
#define CRU_GATE_CON09_MCLK_ACDCDIG_DSM_EN_MASK            (0x1U << CRU_GATE_CON09_MCLK_ACDCDIG_DSM_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON09_CLK_PDM1_EN_SHIFT                   (5U)
#define CRU_GATE_CON09_CLK_PDM1_EN_MASK                    (0x1U << CRU_GATE_CON09_CLK_PDM1_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON09_HCLK_PDM1_EN_SHIFT                  (7U)
#define CRU_GATE_CON09_HCLK_PDM1_EN_MASK                   (0x1U << CRU_GATE_CON09_HCLK_PDM1_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON09_MCLK_PDM1_EN_SHIFT                  (8U)
#define CRU_GATE_CON09_MCLK_PDM1_EN_MASK                   (0x1U << CRU_GATE_CON09_MCLK_PDM1_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON09_HCLK_SPDIF_TX0_EN_SHIFT             (9U)
#define CRU_GATE_CON09_HCLK_SPDIF_TX0_EN_MASK              (0x1U << CRU_GATE_CON09_HCLK_SPDIF_TX0_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON09_MCLK_SPDIF_TX0_EN_SHIFT             (10U)
#define CRU_GATE_CON09_MCLK_SPDIF_TX0_EN_MASK              (0x1U << CRU_GATE_CON09_MCLK_SPDIF_TX0_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON09_HCLK_SPDIF_TX1_EN_SHIFT             (11U)
#define CRU_GATE_CON09_HCLK_SPDIF_TX1_EN_MASK              (0x1U << CRU_GATE_CON09_HCLK_SPDIF_TX1_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON09_MCLK_SPDIF_TX1_EN_SHIFT             (12U)
#define CRU_GATE_CON09_MCLK_SPDIF_TX1_EN_MASK              (0x1U << CRU_GATE_CON09_MCLK_SPDIF_TX1_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON09_CLK_SAI1_MCLKOUT_EN_SHIFT           (13U)
#define CRU_GATE_CON09_CLK_SAI1_MCLKOUT_EN_MASK            (0x1U << CRU_GATE_CON09_CLK_SAI1_MCLKOUT_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON09_CLK_SAI2_MCLKOUT_EN_SHIFT           (14U)
#define CRU_GATE_CON09_CLK_SAI2_MCLKOUT_EN_MASK            (0x1U << CRU_GATE_CON09_CLK_SAI2_MCLKOUT_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON09_CLK_SAI3_MCLKOUT_EN_SHIFT           (15U)
#define CRU_GATE_CON09_CLK_SAI3_MCLKOUT_EN_MASK            (0x1U << CRU_GATE_CON09_CLK_SAI3_MCLKOUT_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON10 */
#define CRU_GATE_CON10_OFFSET                              (0x828U)
#define CRU_GATE_CON10_CLK_SAI4_MCLKOUT_EN_SHIFT           (0U)
#define CRU_GATE_CON10_CLK_SAI4_MCLKOUT_EN_MASK            (0x1U << CRU_GATE_CON10_CLK_SAI4_MCLKOUT_EN_SHIFT)           /* 0x00000001 */
#define CRU_GATE_CON10_CLK_SAI0_MCLKOUT_EN_SHIFT           (1U)
#define CRU_GATE_CON10_CLK_SAI0_MCLKOUT_EN_MASK            (0x1U << CRU_GATE_CON10_CLK_SAI0_MCLKOUT_EN_SHIFT)           /* 0x00000002 */
/* GATE_CON11 */
#define CRU_GATE_CON11_OFFSET                              (0x82CU)
#define CRU_GATE_CON11_HCLK_BUS_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON11_HCLK_BUS_ROOT_EN_MASK               (0x1U << CRU_GATE_CON11_HCLK_BUS_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON11_PCLK_BUS_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON11_PCLK_BUS_ROOT_EN_MASK               (0x1U << CRU_GATE_CON11_PCLK_BUS_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON11_ACLK_BUS_ROOT_EN_SHIFT              (2U)
#define CRU_GATE_CON11_ACLK_BUS_ROOT_EN_MASK               (0x1U << CRU_GATE_CON11_ACLK_BUS_ROOT_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON11_ACLK_BUS_BIU_EN_SHIFT               (3U)
#define CRU_GATE_CON11_ACLK_BUS_BIU_EN_MASK                (0x1U << CRU_GATE_CON11_ACLK_BUS_BIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON11_PCLK_BUS_BIU_EN_SHIFT               (4U)
#define CRU_GATE_CON11_PCLK_BUS_BIU_EN_MASK                (0x1U << CRU_GATE_CON11_PCLK_BUS_BIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON11_PCLK_CRU_EN_SHIFT                   (5U)
#define CRU_GATE_CON11_PCLK_CRU_EN_MASK                    (0x1U << CRU_GATE_CON11_PCLK_CRU_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON11_HCLK_CAN0_EN_SHIFT                  (6U)
#define CRU_GATE_CON11_HCLK_CAN0_EN_MASK                   (0x1U << CRU_GATE_CON11_HCLK_CAN0_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON11_CLK_CAN0_EN_SHIFT                   (7U)
#define CRU_GATE_CON11_CLK_CAN0_EN_MASK                    (0x1U << CRU_GATE_CON11_CLK_CAN0_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON11_HCLK_CAN1_EN_SHIFT                  (8U)
#define CRU_GATE_CON11_HCLK_CAN1_EN_MASK                   (0x1U << CRU_GATE_CON11_HCLK_CAN1_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON11_CLK_CAN1_EN_SHIFT                   (9U)
#define CRU_GATE_CON11_CLK_CAN1_EN_MASK                    (0x1U << CRU_GATE_CON11_CLK_CAN1_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON11_PCLK_INTMUX2BUS_EN_SHIFT            (12U)
#define CRU_GATE_CON11_PCLK_INTMUX2BUS_EN_MASK             (0x1U << CRU_GATE_CON11_PCLK_INTMUX2BUS_EN_SHIFT)            /* 0x00001000 */
#define CRU_GATE_CON11_PCLK_VCCIO_IOC_EN_SHIFT             (13U)
#define CRU_GATE_CON11_PCLK_VCCIO_IOC_EN_MASK              (0x1U << CRU_GATE_CON11_PCLK_VCCIO_IOC_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON11_HCLK_BUS_BIU_EN_SHIFT               (14U)
#define CRU_GATE_CON11_HCLK_BUS_BIU_EN_MASK                (0x1U << CRU_GATE_CON11_HCLK_BUS_BIU_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON11_CLK_KEY_SHIFT_EN_SHIFT              (15U)
#define CRU_GATE_CON11_CLK_KEY_SHIFT_EN_MASK               (0x1U << CRU_GATE_CON11_CLK_KEY_SHIFT_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON12 */
#define CRU_GATE_CON12_OFFSET                              (0x830U)
#define CRU_GATE_CON12_PCLK_I2C1_EN_SHIFT                  (0U)
#define CRU_GATE_CON12_PCLK_I2C1_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C1_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON12_PCLK_I2C2_EN_SHIFT                  (1U)
#define CRU_GATE_CON12_PCLK_I2C2_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C2_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON12_PCLK_I2C3_EN_SHIFT                  (2U)
#define CRU_GATE_CON12_PCLK_I2C3_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C3_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON12_PCLK_I2C4_EN_SHIFT                  (3U)
#define CRU_GATE_CON12_PCLK_I2C4_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C4_EN_SHIFT)                  /* 0x00000008 */
#define CRU_GATE_CON12_PCLK_I2C5_EN_SHIFT                  (4U)
#define CRU_GATE_CON12_PCLK_I2C5_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C5_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON12_PCLK_I2C6_EN_SHIFT                  (5U)
#define CRU_GATE_CON12_PCLK_I2C6_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C6_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON12_PCLK_I2C7_EN_SHIFT                  (6U)
#define CRU_GATE_CON12_PCLK_I2C7_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C7_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON12_PCLK_I2C8_EN_SHIFT                  (7U)
#define CRU_GATE_CON12_PCLK_I2C8_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C8_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON12_PCLK_I2C9_EN_SHIFT                  (8U)
#define CRU_GATE_CON12_PCLK_I2C9_EN_MASK                   (0x1U << CRU_GATE_CON12_PCLK_I2C9_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON12_PCLK_WDT_BUSMCU_EN_SHIFT            (9U)
#define CRU_GATE_CON12_PCLK_WDT_BUSMCU_EN_MASK             (0x1U << CRU_GATE_CON12_PCLK_WDT_BUSMCU_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON12_TCLK_WDT_BUSMCU_EN_SHIFT            (10U)
#define CRU_GATE_CON12_TCLK_WDT_BUSMCU_EN_MASK             (0x1U << CRU_GATE_CON12_TCLK_WDT_BUSMCU_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON12_ACLK_GIC_EN_SHIFT                   (11U)
#define CRU_GATE_CON12_ACLK_GIC_EN_MASK                    (0x1U << CRU_GATE_CON12_ACLK_GIC_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON12_CLK_I2C1_EN_SHIFT                   (12U)
#define CRU_GATE_CON12_CLK_I2C1_EN_MASK                    (0x1U << CRU_GATE_CON12_CLK_I2C1_EN_SHIFT)                   /* 0x00001000 */
#define CRU_GATE_CON12_CLK_I2C2_EN_SHIFT                   (13U)
#define CRU_GATE_CON12_CLK_I2C2_EN_MASK                    (0x1U << CRU_GATE_CON12_CLK_I2C2_EN_SHIFT)                   /* 0x00002000 */
#define CRU_GATE_CON12_CLK_I2C3_EN_SHIFT                   (14U)
#define CRU_GATE_CON12_CLK_I2C3_EN_MASK                    (0x1U << CRU_GATE_CON12_CLK_I2C3_EN_SHIFT)                   /* 0x00004000 */
#define CRU_GATE_CON12_CLK_I2C4_EN_SHIFT                   (15U)
#define CRU_GATE_CON12_CLK_I2C4_EN_MASK                    (0x1U << CRU_GATE_CON12_CLK_I2C4_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON13 */
#define CRU_GATE_CON13_OFFSET                              (0x834U)
#define CRU_GATE_CON13_CLK_I2C5_EN_SHIFT                   (0U)
#define CRU_GATE_CON13_CLK_I2C5_EN_MASK                    (0x1U << CRU_GATE_CON13_CLK_I2C5_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON13_CLK_I2C6_EN_SHIFT                   (1U)
#define CRU_GATE_CON13_CLK_I2C6_EN_MASK                    (0x1U << CRU_GATE_CON13_CLK_I2C6_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON13_CLK_I2C7_EN_SHIFT                   (2U)
#define CRU_GATE_CON13_CLK_I2C7_EN_MASK                    (0x1U << CRU_GATE_CON13_CLK_I2C7_EN_SHIFT)                   /* 0x00000004 */
#define CRU_GATE_CON13_CLK_I2C8_EN_SHIFT                   (3U)
#define CRU_GATE_CON13_CLK_I2C8_EN_MASK                    (0x1U << CRU_GATE_CON13_CLK_I2C8_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON13_CLK_I2C9_EN_SHIFT                   (4U)
#define CRU_GATE_CON13_CLK_I2C9_EN_MASK                    (0x1U << CRU_GATE_CON13_CLK_I2C9_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON13_PCLK_SARADC_EN_SHIFT                (6U)
#define CRU_GATE_CON13_PCLK_SARADC_EN_MASK                 (0x1U << CRU_GATE_CON13_PCLK_SARADC_EN_SHIFT)                /* 0x00000040 */
#define CRU_GATE_CON13_CLK_SARADC_EN_SHIFT                 (7U)
#define CRU_GATE_CON13_CLK_SARADC_EN_MASK                  (0x1U << CRU_GATE_CON13_CLK_SARADC_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON13_PCLK_TSADC_EN_SHIFT                 (8U)
#define CRU_GATE_CON13_PCLK_TSADC_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_TSADC_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON13_CLK_TSADC_EN_SHIFT                  (9U)
#define CRU_GATE_CON13_CLK_TSADC_EN_MASK                   (0x1U << CRU_GATE_CON13_CLK_TSADC_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON13_PCLK_UART0_EN_SHIFT                 (10U)
#define CRU_GATE_CON13_PCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART0_EN_SHIFT)                 /* 0x00000400 */
#define CRU_GATE_CON13_PCLK_UART2_EN_SHIFT                 (11U)
#define CRU_GATE_CON13_PCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART2_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON13_PCLK_UART3_EN_SHIFT                 (12U)
#define CRU_GATE_CON13_PCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART3_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON13_PCLK_UART4_EN_SHIFT                 (13U)
#define CRU_GATE_CON13_PCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART4_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON13_PCLK_UART5_EN_SHIFT                 (14U)
#define CRU_GATE_CON13_PCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART5_EN_SHIFT)                 /* 0x00004000 */
#define CRU_GATE_CON13_PCLK_UART6_EN_SHIFT                 (15U)
#define CRU_GATE_CON13_PCLK_UART6_EN_MASK                  (0x1U << CRU_GATE_CON13_PCLK_UART6_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON14 */
#define CRU_GATE_CON14_OFFSET                              (0x838U)
#define CRU_GATE_CON14_PCLK_UART7_EN_SHIFT                 (0U)
#define CRU_GATE_CON14_PCLK_UART7_EN_MASK                  (0x1U << CRU_GATE_CON14_PCLK_UART7_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON14_PCLK_UART8_EN_SHIFT                 (1U)
#define CRU_GATE_CON14_PCLK_UART8_EN_MASK                  (0x1U << CRU_GATE_CON14_PCLK_UART8_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON14_PCLK_UART9_EN_SHIFT                 (2U)
#define CRU_GATE_CON14_PCLK_UART9_EN_MASK                  (0x1U << CRU_GATE_CON14_PCLK_UART9_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON14_PCLK_UART10_EN_SHIFT                (3U)
#define CRU_GATE_CON14_PCLK_UART10_EN_MASK                 (0x1U << CRU_GATE_CON14_PCLK_UART10_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON14_PCLK_UART11_EN_SHIFT                (4U)
#define CRU_GATE_CON14_PCLK_UART11_EN_MASK                 (0x1U << CRU_GATE_CON14_PCLK_UART11_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON14_SCLK_UART0_EN_SHIFT                 (5U)
#define CRU_GATE_CON14_SCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON14_SCLK_UART0_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON14_SCLK_UART2_EN_SHIFT                 (6U)
#define CRU_GATE_CON14_SCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON14_SCLK_UART2_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON14_SCLK_UART3_EN_SHIFT                 (9U)
#define CRU_GATE_CON14_SCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON14_SCLK_UART3_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON14_SCLK_UART4_EN_SHIFT                 (12U)
#define CRU_GATE_CON14_SCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON14_SCLK_UART4_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON14_SCLK_UART5_EN_SHIFT                 (15U)
#define CRU_GATE_CON14_SCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON14_SCLK_UART5_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON15 */
#define CRU_GATE_CON15_OFFSET                              (0x83CU)
#define CRU_GATE_CON15_SCLK_UART6_EN_SHIFT                 (2U)
#define CRU_GATE_CON15_SCLK_UART6_EN_MASK                  (0x1U << CRU_GATE_CON15_SCLK_UART6_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON15_SCLK_UART7_EN_SHIFT                 (5U)
#define CRU_GATE_CON15_SCLK_UART7_EN_MASK                  (0x1U << CRU_GATE_CON15_SCLK_UART7_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON15_SCLK_UART8_EN_SHIFT                 (8U)
#define CRU_GATE_CON15_SCLK_UART8_EN_MASK                  (0x1U << CRU_GATE_CON15_SCLK_UART8_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON15_SCLK_UART9_EN_SHIFT                 (9U)
#define CRU_GATE_CON15_SCLK_UART9_EN_MASK                  (0x1U << CRU_GATE_CON15_SCLK_UART9_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON15_SCLK_UART10_EN_SHIFT                (10U)
#define CRU_GATE_CON15_SCLK_UART10_EN_MASK                 (0x1U << CRU_GATE_CON15_SCLK_UART10_EN_SHIFT)                /* 0x00000400 */
#define CRU_GATE_CON15_SCLK_UART11_EN_SHIFT                (11U)
#define CRU_GATE_CON15_SCLK_UART11_EN_MASK                 (0x1U << CRU_GATE_CON15_SCLK_UART11_EN_SHIFT)                /* 0x00000800 */
#define CRU_GATE_CON15_PCLK_SPI0_EN_SHIFT                  (13U)
#define CRU_GATE_CON15_PCLK_SPI0_EN_MASK                   (0x1U << CRU_GATE_CON15_PCLK_SPI0_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON15_PCLK_SPI1_EN_SHIFT                  (14U)
#define CRU_GATE_CON15_PCLK_SPI1_EN_MASK                   (0x1U << CRU_GATE_CON15_PCLK_SPI1_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON15_PCLK_SPI2_EN_SHIFT                  (15U)
#define CRU_GATE_CON15_PCLK_SPI2_EN_MASK                   (0x1U << CRU_GATE_CON15_PCLK_SPI2_EN_SHIFT)                  /* 0x00008000 */
/* GATE_CON16 */
#define CRU_GATE_CON16_OFFSET                              (0x840U)
#define CRU_GATE_CON16_PCLK_SPI3_EN_SHIFT                  (0U)
#define CRU_GATE_CON16_PCLK_SPI3_EN_MASK                   (0x1U << CRU_GATE_CON16_PCLK_SPI3_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON16_PCLK_SPI4_EN_SHIFT                  (1U)
#define CRU_GATE_CON16_PCLK_SPI4_EN_MASK                   (0x1U << CRU_GATE_CON16_PCLK_SPI4_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON16_CLK_SPI0_EN_SHIFT                   (2U)
#define CRU_GATE_CON16_CLK_SPI0_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_SPI0_EN_SHIFT)                   /* 0x00000004 */
#define CRU_GATE_CON16_CLK_SPI1_EN_SHIFT                   (3U)
#define CRU_GATE_CON16_CLK_SPI1_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_SPI1_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON16_CLK_SPI2_EN_SHIFT                   (4U)
#define CRU_GATE_CON16_CLK_SPI2_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_SPI2_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON16_CLK_SPI3_EN_SHIFT                   (5U)
#define CRU_GATE_CON16_CLK_SPI3_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_SPI3_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON16_CLK_SPI4_EN_SHIFT                   (6U)
#define CRU_GATE_CON16_CLK_SPI4_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_SPI4_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GATE_CON16_PCLK_WDT0_EN_SHIFT                  (7U)
#define CRU_GATE_CON16_PCLK_WDT0_EN_MASK                   (0x1U << CRU_GATE_CON16_PCLK_WDT0_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON16_TCLK_WDT0_EN_SHIFT                  (8U)
#define CRU_GATE_CON16_TCLK_WDT0_EN_MASK                   (0x1U << CRU_GATE_CON16_TCLK_WDT0_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON16_PCLK_SYS_GRF_EN_SHIFT               (9U)
#define CRU_GATE_CON16_PCLK_SYS_GRF_EN_MASK                (0x1U << CRU_GATE_CON16_PCLK_SYS_GRF_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON16_PCLK_PWM1_EN_SHIFT                  (10U)
#define CRU_GATE_CON16_PCLK_PWM1_EN_MASK                   (0x1U << CRU_GATE_CON16_PCLK_PWM1_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON16_CLK_PWM1_EN_SHIFT                   (11U)
#define CRU_GATE_CON16_CLK_PWM1_EN_MASK                    (0x1U << CRU_GATE_CON16_CLK_PWM1_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON16_CLK_OSC_PWM1_EN_SHIFT               (13U)
#define CRU_GATE_CON16_CLK_OSC_PWM1_EN_MASK                (0x1U << CRU_GATE_CON16_CLK_OSC_PWM1_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON16_CLK_RC_PWM1_EN_SHIFT                (15U)
#define CRU_GATE_CON16_CLK_RC_PWM1_EN_MASK                 (0x1U << CRU_GATE_CON16_CLK_RC_PWM1_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON17 */
#define CRU_GATE_CON17_OFFSET                              (0x844U)
#define CRU_GATE_CON17_PCLK_BUSTIMER0_EN_SHIFT             (3U)
#define CRU_GATE_CON17_PCLK_BUSTIMER0_EN_MASK              (0x1U << CRU_GATE_CON17_PCLK_BUSTIMER0_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON17_PCLK_BUSTIMER1_EN_SHIFT             (4U)
#define CRU_GATE_CON17_PCLK_BUSTIMER1_EN_MASK              (0x1U << CRU_GATE_CON17_PCLK_BUSTIMER1_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON17_CLK_TIMER0_ROOT_EN_SHIFT            (5U)
#define CRU_GATE_CON17_CLK_TIMER0_ROOT_EN_MASK             (0x1U << CRU_GATE_CON17_CLK_TIMER0_ROOT_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON17_CLK_TIMER0_EN_SHIFT                 (6U)
#define CRU_GATE_CON17_CLK_TIMER0_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER0_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON17_CLK_TIMER1_EN_SHIFT                 (7U)
#define CRU_GATE_CON17_CLK_TIMER1_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER1_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON17_CLK_TIMER2_EN_SHIFT                 (8U)
#define CRU_GATE_CON17_CLK_TIMER2_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER2_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON17_CLK_TIMER3_EN_SHIFT                 (9U)
#define CRU_GATE_CON17_CLK_TIMER3_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER3_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON17_CLK_TIMER4_EN_SHIFT                 (10U)
#define CRU_GATE_CON17_CLK_TIMER4_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER4_EN_SHIFT)                 /* 0x00000400 */
#define CRU_GATE_CON17_CLK_TIMER5_EN_SHIFT                 (11U)
#define CRU_GATE_CON17_CLK_TIMER5_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_TIMER5_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON17_PCLK_BUSIOC_EN_SHIFT                (12U)
#define CRU_GATE_CON17_PCLK_BUSIOC_EN_MASK                 (0x1U << CRU_GATE_CON17_PCLK_BUSIOC_EN_SHIFT)                /* 0x00001000 */
#define CRU_GATE_CON17_PCLK_MAILBOX0_EN_SHIFT              (13U)
#define CRU_GATE_CON17_PCLK_MAILBOX0_EN_MASK               (0x1U << CRU_GATE_CON17_PCLK_MAILBOX0_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON17_PCLK_GPIO1_EN_SHIFT                 (15U)
#define CRU_GATE_CON17_PCLK_GPIO1_EN_MASK                  (0x1U << CRU_GATE_CON17_PCLK_GPIO1_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON18 */
#define CRU_GATE_CON18_OFFSET                              (0x848U)
#define CRU_GATE_CON18_DBCLK_GPIO1_EN_SHIFT                (0U)
#define CRU_GATE_CON18_DBCLK_GPIO1_EN_MASK                 (0x1U << CRU_GATE_CON18_DBCLK_GPIO1_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON18_PCLK_GPIO2_EN_SHIFT                 (1U)
#define CRU_GATE_CON18_PCLK_GPIO2_EN_MASK                  (0x1U << CRU_GATE_CON18_PCLK_GPIO2_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON18_DBCLK_GPIO2_EN_SHIFT                (2U)
#define CRU_GATE_CON18_DBCLK_GPIO2_EN_MASK                 (0x1U << CRU_GATE_CON18_DBCLK_GPIO2_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON18_PCLK_GPIO3_EN_SHIFT                 (3U)
#define CRU_GATE_CON18_PCLK_GPIO3_EN_MASK                  (0x1U << CRU_GATE_CON18_PCLK_GPIO3_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON18_DBCLK_GPIO3_EN_SHIFT                (4U)
#define CRU_GATE_CON18_DBCLK_GPIO3_EN_MASK                 (0x1U << CRU_GATE_CON18_DBCLK_GPIO3_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON18_PCLK_GPIO4_EN_SHIFT                 (5U)
#define CRU_GATE_CON18_PCLK_GPIO4_EN_MASK                  (0x1U << CRU_GATE_CON18_PCLK_GPIO4_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON18_DBCLK_GPIO4_EN_SHIFT                (6U)
#define CRU_GATE_CON18_DBCLK_GPIO4_EN_MASK                 (0x1U << CRU_GATE_CON18_DBCLK_GPIO4_EN_SHIFT)                /* 0x00000040 */
#define CRU_GATE_CON18_ACLK_DECOM_EN_SHIFT                 (7U)
#define CRU_GATE_CON18_ACLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON18_ACLK_DECOM_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON18_PCLK_DECOM_EN_SHIFT                 (8U)
#define CRU_GATE_CON18_PCLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON18_PCLK_DECOM_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON18_DCLK_DECOM_EN_SHIFT                 (9U)
#define CRU_GATE_CON18_DCLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON18_DCLK_DECOM_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON18_CLK_TIMER1_ROOT_EN_SHIFT            (10U)
#define CRU_GATE_CON18_CLK_TIMER1_ROOT_EN_MASK             (0x1U << CRU_GATE_CON18_CLK_TIMER1_ROOT_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON18_CLK_TIMER6_EN_SHIFT                 (11U)
#define CRU_GATE_CON18_CLK_TIMER6_EN_MASK                  (0x1U << CRU_GATE_CON18_CLK_TIMER6_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON18_CLK_TIMER7_EN_SHIFT                 (12U)
#define CRU_GATE_CON18_CLK_TIMER7_EN_MASK                  (0x1U << CRU_GATE_CON18_CLK_TIMER7_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON18_CLK_TIMER8_EN_SHIFT                 (13U)
#define CRU_GATE_CON18_CLK_TIMER8_EN_MASK                  (0x1U << CRU_GATE_CON18_CLK_TIMER8_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON18_CLK_TIMER9_EN_SHIFT                 (14U)
#define CRU_GATE_CON18_CLK_TIMER9_EN_MASK                  (0x1U << CRU_GATE_CON18_CLK_TIMER9_EN_SHIFT)                 /* 0x00004000 */
#define CRU_GATE_CON18_CLK_TIMER10_EN_SHIFT                (15U)
#define CRU_GATE_CON18_CLK_TIMER10_EN_MASK                 (0x1U << CRU_GATE_CON18_CLK_TIMER10_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON19 */
#define CRU_GATE_CON19_OFFSET                              (0x84CU)
#define CRU_GATE_CON19_CLK_TIMER11_EN_SHIFT                (0U)
#define CRU_GATE_CON19_CLK_TIMER11_EN_MASK                 (0x1U << CRU_GATE_CON19_CLK_TIMER11_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON19_ACLK_DMAC0_EN_SHIFT                 (1U)
#define CRU_GATE_CON19_ACLK_DMAC0_EN_MASK                  (0x1U << CRU_GATE_CON19_ACLK_DMAC0_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON19_ACLK_DMAC1_EN_SHIFT                 (2U)
#define CRU_GATE_CON19_ACLK_DMAC1_EN_MASK                  (0x1U << CRU_GATE_CON19_ACLK_DMAC1_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON19_ACLK_DMAC2_EN_SHIFT                 (3U)
#define CRU_GATE_CON19_ACLK_DMAC2_EN_MASK                  (0x1U << CRU_GATE_CON19_ACLK_DMAC2_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON19_ACLK_SPINLOCK_EN_SHIFT              (4U)
#define CRU_GATE_CON19_ACLK_SPINLOCK_EN_MASK               (0x1U << CRU_GATE_CON19_ACLK_SPINLOCK_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON19_CLK_REF_PVTPLL_BUS_EN_SHIFT         (5U)
#define CRU_GATE_CON19_CLK_REF_PVTPLL_BUS_EN_MASK          (0x1U << CRU_GATE_CON19_CLK_REF_PVTPLL_BUS_EN_SHIFT)         /* 0x00000020 */
#define CRU_GATE_CON19_HCLK_I3C0_EN_SHIFT                  (7U)
#define CRU_GATE_CON19_HCLK_I3C0_EN_MASK                   (0x1U << CRU_GATE_CON19_HCLK_I3C0_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON19_HCLK_I3C1_EN_SHIFT                  (9U)
#define CRU_GATE_CON19_HCLK_I3C1_EN_MASK                   (0x1U << CRU_GATE_CON19_HCLK_I3C1_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON19_HCLK_BUS_CM0_ROOT_EN_SHIFT          (10U)
#define CRU_GATE_CON19_HCLK_BUS_CM0_ROOT_EN_MASK           (0x1U << CRU_GATE_CON19_HCLK_BUS_CM0_ROOT_EN_SHIFT)          /* 0x00000400 */
#define CRU_GATE_CON19_HCLK_BUS_CM0_BIU_EN_SHIFT           (11U)
#define CRU_GATE_CON19_HCLK_BUS_CM0_BIU_EN_MASK            (0x1U << CRU_GATE_CON19_HCLK_BUS_CM0_BIU_EN_SHIFT)           /* 0x00000800 */
#define CRU_GATE_CON19_FCLK_BUS_CM0_CORE_EN_SHIFT          (12U)
#define CRU_GATE_CON19_FCLK_BUS_CM0_CORE_EN_MASK           (0x1U << CRU_GATE_CON19_FCLK_BUS_CM0_CORE_EN_SHIFT)          /* 0x00001000 */
#define CRU_GATE_CON19_CLK_BUS_CM0_RTC_EN_SHIFT            (14U)
#define CRU_GATE_CON19_CLK_BUS_CM0_RTC_EN_MASK             (0x1U << CRU_GATE_CON19_CLK_BUS_CM0_RTC_EN_SHIFT)            /* 0x00004000 */
#define CRU_GATE_CON19_PCLK_PMU2_EN_SHIFT                  (15U)
#define CRU_GATE_CON19_PCLK_PMU2_EN_MASK                   (0x1U << CRU_GATE_CON19_PCLK_PMU2_EN_SHIFT)                  /* 0x00008000 */
/* GATE_CON20 */
#define CRU_GATE_CON20_OFFSET                              (0x850U)
#define CRU_GATE_CON20_PCLK_INTMUX2PMU_EN_SHIFT            (0U)
#define CRU_GATE_CON20_PCLK_INTMUX2PMU_EN_MASK             (0x1U << CRU_GATE_CON20_PCLK_INTMUX2PMU_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON20_PCLK_INTMUX2DDR_EN_SHIFT            (1U)
#define CRU_GATE_CON20_PCLK_INTMUX2DDR_EN_MASK             (0x1U << CRU_GATE_CON20_PCLK_INTMUX2DDR_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON20_CLK_EXTREF_TIMEOUT_BUS_EN_SHIFT     (2U)
#define CRU_GATE_CON20_CLK_EXTREF_TIMEOUT_BUS_EN_MASK      (0x1U << CRU_GATE_CON20_CLK_EXTREF_TIMEOUT_BUS_EN_SHIFT)     /* 0x00000004 */
#define CRU_GATE_CON20_PCLK_PVTPLL_BUS_EN_SHIFT            (3U)
#define CRU_GATE_CON20_PCLK_PVTPLL_BUS_EN_MASK             (0x1U << CRU_GATE_CON20_PCLK_PVTPLL_BUS_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON20_PCLK_PWM2_EN_SHIFT                  (4U)
#define CRU_GATE_CON20_PCLK_PWM2_EN_MASK                   (0x1U << CRU_GATE_CON20_PCLK_PWM2_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON20_CLK_PWM2_EN_SHIFT                   (5U)
#define CRU_GATE_CON20_CLK_PWM2_EN_MASK                    (0x1U << CRU_GATE_CON20_CLK_PWM2_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON20_CLK_RC_PWM2_EN_SHIFT                (6U)
#define CRU_GATE_CON20_CLK_RC_PWM2_EN_MASK                 (0x1U << CRU_GATE_CON20_CLK_RC_PWM2_EN_SHIFT)                /* 0x00000040 */
#define CRU_GATE_CON20_CLK_OSC_PWM2_EN_SHIFT               (7U)
#define CRU_GATE_CON20_CLK_OSC_PWM2_EN_MASK                (0x1U << CRU_GATE_CON20_CLK_OSC_PWM2_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON20_CLK_FREQ_PWM1_EN_SHIFT              (8U)
#define CRU_GATE_CON20_CLK_FREQ_PWM1_EN_MASK               (0x1U << CRU_GATE_CON20_CLK_FREQ_PWM1_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON20_CLK_COUNTER_PWM1_EN_SHIFT           (9U)
#define CRU_GATE_CON20_CLK_COUNTER_PWM1_EN_MASK            (0x1U << CRU_GATE_CON20_CLK_COUNTER_PWM1_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON20_SAI_SCLKIN_FREQ_EN_SHIFT            (10U)
#define CRU_GATE_CON20_SAI_SCLKIN_FREQ_EN_MASK             (0x1U << CRU_GATE_CON20_SAI_SCLKIN_FREQ_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON20_SAI_SCLKIN_COUNTER_EN_SHIFT         (11U)
#define CRU_GATE_CON20_SAI_SCLKIN_COUNTER_EN_MASK          (0x1U << CRU_GATE_CON20_SAI_SCLKIN_COUNTER_EN_SHIFT)         /* 0x00000800 */
#define CRU_GATE_CON20_CLK_I3C0_EN_SHIFT                   (12U)
#define CRU_GATE_CON20_CLK_I3C0_EN_MASK                    (0x1U << CRU_GATE_CON20_CLK_I3C0_EN_SHIFT)                   /* 0x00001000 */
#define CRU_GATE_CON20_CLK_I3C1_EN_SHIFT                   (13U)
#define CRU_GATE_CON20_CLK_I3C1_EN_MASK                    (0x1U << CRU_GATE_CON20_CLK_I3C1_EN_SHIFT)                   /* 0x00002000 */
/* GATE_CON21 */
#define CRU_GATE_CON21_OFFSET                              (0x854U)
#define CRU_GATE_CON21_PCLK_DDR_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON21_PCLK_DDR_ROOT_EN_MASK               (0x1U << CRU_GATE_CON21_PCLK_DDR_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON21_PCLK_DDR_MON_CH0_EN_SHIFT           (1U)
#define CRU_GATE_CON21_PCLK_DDR_MON_CH0_EN_MASK            (0x1U << CRU_GATE_CON21_PCLK_DDR_MON_CH0_EN_SHIFT)           /* 0x00000002 */
#define CRU_GATE_CON21_PCLK_DDR_BIU_EN_SHIFT               (2U)
#define CRU_GATE_CON21_PCLK_DDR_BIU_EN_MASK                (0x1U << CRU_GATE_CON21_PCLK_DDR_BIU_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON21_PCLK_DDR_UPCTL_CH0_EN_SHIFT         (3U)
#define CRU_GATE_CON21_PCLK_DDR_UPCTL_CH0_EN_MASK          (0x1U << CRU_GATE_CON21_PCLK_DDR_UPCTL_CH0_EN_SHIFT)         /* 0x00000008 */
#define CRU_GATE_CON21_TMCLK_DDR_MON_CH0_EN_SHIFT          (4U)
#define CRU_GATE_CON21_TMCLK_DDR_MON_CH0_EN_MASK           (0x1U << CRU_GATE_CON21_TMCLK_DDR_MON_CH0_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON21_ACLK_DDR_BIU_EN_SHIFT               (5U)
#define CRU_GATE_CON21_ACLK_DDR_BIU_EN_MASK                (0x1U << CRU_GATE_CON21_ACLK_DDR_BIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON21_CLK_DFI_CH0_EN_SHIFT                (6U)
#define CRU_GATE_CON21_CLK_DFI_CH0_EN_MASK                 (0x1U << CRU_GATE_CON21_CLK_DFI_CH0_EN_SHIFT)                /* 0x00000040 */
#define CRU_GATE_CON21_ACLK_DDR_ROOT_EN_SHIFT              (9U)
#define CRU_GATE_CON21_ACLK_DDR_ROOT_EN_MASK               (0x1U << CRU_GATE_CON21_ACLK_DDR_ROOT_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON21_CLK_DDR_MON_CH0_EN_SHIFT            (10U)
#define CRU_GATE_CON21_CLK_DDR_MON_CH0_EN_MASK             (0x1U << CRU_GATE_CON21_CLK_DDR_MON_CH0_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON21_PCLK_DDR_HWLP_CH0_EN_SHIFT          (13U)
#define CRU_GATE_CON21_PCLK_DDR_HWLP_CH0_EN_MASK           (0x1U << CRU_GATE_CON21_PCLK_DDR_HWLP_CH0_EN_SHIFT)          /* 0x00002000 */
#define CRU_GATE_CON21_PCLK_DDR_MON_CH1_EN_SHIFT           (14U)
#define CRU_GATE_CON21_PCLK_DDR_MON_CH1_EN_MASK            (0x1U << CRU_GATE_CON21_PCLK_DDR_MON_CH1_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON21_PCLK_DDR_HWLP_CH1_EN_SHIFT          (15U)
#define CRU_GATE_CON21_PCLK_DDR_HWLP_CH1_EN_MASK           (0x1U << CRU_GATE_CON21_PCLK_DDR_HWLP_CH1_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON22 */
#define CRU_GATE_CON22_OFFSET                              (0x858U)
#define CRU_GATE_CON22_PCLK_DDR_UPCTL_CH1_EN_SHIFT         (0U)
#define CRU_GATE_CON22_PCLK_DDR_UPCTL_CH1_EN_MASK          (0x1U << CRU_GATE_CON22_PCLK_DDR_UPCTL_CH1_EN_SHIFT)         /* 0x00000001 */
#define CRU_GATE_CON22_TMCLK_DDR_MON_CH1_EN_SHIFT          (1U)
#define CRU_GATE_CON22_TMCLK_DDR_MON_CH1_EN_MASK           (0x1U << CRU_GATE_CON22_TMCLK_DDR_MON_CH1_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON22_CLK_DFI_CH1_EN_SHIFT                (2U)
#define CRU_GATE_CON22_CLK_DFI_CH1_EN_MASK                 (0x1U << CRU_GATE_CON22_CLK_DFI_CH1_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON22_ACLK_DDR01_MSCH0_EN_SHIFT           (3U)
#define CRU_GATE_CON22_ACLK_DDR01_MSCH0_EN_MASK            (0x1U << CRU_GATE_CON22_ACLK_DDR01_MSCH0_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON22_ACLK_DDR01_MSCH1_EN_SHIFT           (4U)
#define CRU_GATE_CON22_ACLK_DDR01_MSCH1_EN_MASK            (0x1U << CRU_GATE_CON22_ACLK_DDR01_MSCH1_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON22_CLK_DDR_MON_CH1_EN_SHIFT            (6U)
#define CRU_GATE_CON22_CLK_DDR_MON_CH1_EN_MASK             (0x1U << CRU_GATE_CON22_CLK_DDR_MON_CH1_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH0_EN_SHIFT        (7U)
#define CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH0_EN_MASK         (0x1U << CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH0_EN_SHIFT)        /* 0x00000080 */
#define CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH1_EN_SHIFT        (8U)
#define CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH1_EN_MASK         (0x1U << CRU_GATE_CON22_PCLK_DDRPHY_SRC_CH1_EN_SHIFT)        /* 0x00000100 */
#define CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH0_EN_SHIFT       (9U)
#define CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH0_EN_MASK        (0x1U << CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH0_EN_SHIFT)       /* 0x00000200 */
#define CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH1_EN_SHIFT       (10U)
#define CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH1_EN_MASK        (0x1U << CRU_GATE_CON22_CLK_DDR_SCRAMBLE_CH1_EN_SHIFT)       /* 0x00000400 */
#define CRU_GATE_CON22_HCLK_DDR_ROOT_EN_SHIFT              (11U)
#define CRU_GATE_CON22_HCLK_DDR_ROOT_EN_MASK               (0x1U << CRU_GATE_CON22_HCLK_DDR_ROOT_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON22_PCLK_AHB2APB_EN_SHIFT               (12U)
#define CRU_GATE_CON22_PCLK_AHB2APB_EN_MASK                (0x1U << CRU_GATE_CON22_PCLK_AHB2APB_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON22_HCLK_AHB2APB_EN_SHIFT               (13U)
#define CRU_GATE_CON22_HCLK_AHB2APB_EN_MASK                (0x1U << CRU_GATE_CON22_HCLK_AHB2APB_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON22_HCLK_DDR_BIU_EN_SHIFT               (14U)
#define CRU_GATE_CON22_HCLK_DDR_BIU_EN_MASK                (0x1U << CRU_GATE_CON22_HCLK_DDR_BIU_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON22_FCLK_DDR_CM0_CORE_EN_SHIFT          (15U)
#define CRU_GATE_CON22_FCLK_DDR_CM0_CORE_EN_MASK           (0x1U << CRU_GATE_CON22_FCLK_DDR_CM0_CORE_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON23 */
#define CRU_GATE_CON23_OFFSET                              (0x85CU)
#define CRU_GATE_CON23_PCLK_DDR01_MSCH0_EN_SHIFT           (1U)
#define CRU_GATE_CON23_PCLK_DDR01_MSCH0_EN_MASK            (0x1U << CRU_GATE_CON23_PCLK_DDR01_MSCH0_EN_SHIFT)           /* 0x00000002 */
#define CRU_GATE_CON23_PCLK_DDR01_MSCH1_EN_SHIFT           (2U)
#define CRU_GATE_CON23_PCLK_DDR01_MSCH1_EN_MASK            (0x1U << CRU_GATE_CON23_PCLK_DDR01_MSCH1_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON23_CLK_DDR_TIMER_ROOT_EN_SHIFT         (3U)
#define CRU_GATE_CON23_CLK_DDR_TIMER_ROOT_EN_MASK          (0x1U << CRU_GATE_CON23_CLK_DDR_TIMER_ROOT_EN_SHIFT)         /* 0x00000008 */
#define CRU_GATE_CON23_CLK_DDR_TIMER0_EN_SHIFT             (4U)
#define CRU_GATE_CON23_CLK_DDR_TIMER0_EN_MASK              (0x1U << CRU_GATE_CON23_CLK_DDR_TIMER0_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON23_CLK_DDR_TIMER1_EN_SHIFT             (5U)
#define CRU_GATE_CON23_CLK_DDR_TIMER1_EN_MASK              (0x1U << CRU_GATE_CON23_CLK_DDR_TIMER1_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON23_TCLK_WDT_DDR_EN_SHIFT               (6U)
#define CRU_GATE_CON23_TCLK_WDT_DDR_EN_MASK                (0x1U << CRU_GATE_CON23_TCLK_WDT_DDR_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON23_PCLK_WDT_EN_SHIFT                   (7U)
#define CRU_GATE_CON23_PCLK_WDT_EN_MASK                    (0x1U << CRU_GATE_CON23_PCLK_WDT_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON23_PCLK_TIMER_EN_SHIFT                 (8U)
#define CRU_GATE_CON23_PCLK_TIMER_EN_MASK                  (0x1U << CRU_GATE_CON23_PCLK_TIMER_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON23_CLK_DDR_CM0_RTC_EN_SHIFT            (10U)
#define CRU_GATE_CON23_CLK_DDR_CM0_RTC_EN_MASK             (0x1U << CRU_GATE_CON23_CLK_DDR_CM0_RTC_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON23_PCLK_DDR_GRF_EN_SHIFT               (11U)
#define CRU_GATE_CON23_PCLK_DDR_GRF_EN_MASK                (0x1U << CRU_GATE_CON23_PCLK_DDR_GRF_EN_SHIFT)               /* 0x00000800 */
/* GATE_CON25 */
#define CRU_GATE_CON25_OFFSET                              (0x864U)
#define CRU_GATE_CON25_CLK_DDR_UPCTL_CH0_EN_SHIFT          (1U)
#define CRU_GATE_CON25_CLK_DDR_UPCTL_CH0_EN_MASK           (0x1U << CRU_GATE_CON25_CLK_DDR_UPCTL_CH0_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_0_CH0_EN_SHIFT       (2U)
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_0_CH0_EN_MASK        (0x1U << CRU_GATE_CON25_ACLK_DDR_UPCTL_0_CH0_EN_SHIFT)       /* 0x00000004 */
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_1_CH0_EN_SHIFT       (3U)
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_1_CH0_EN_MASK        (0x1U << CRU_GATE_CON25_ACLK_DDR_UPCTL_1_CH0_EN_SHIFT)       /* 0x00000008 */
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_2_CH0_EN_SHIFT       (4U)
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_2_CH0_EN_MASK        (0x1U << CRU_GATE_CON25_ACLK_DDR_UPCTL_2_CH0_EN_SHIFT)       /* 0x00000010 */
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_3_CH0_EN_SHIFT       (5U)
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_3_CH0_EN_MASK        (0x1U << CRU_GATE_CON25_ACLK_DDR_UPCTL_3_CH0_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_4_CH0_EN_SHIFT       (6U)
#define CRU_GATE_CON25_ACLK_DDR_UPCTL_4_CH0_EN_MASK        (0x1U << CRU_GATE_CON25_ACLK_DDR_UPCTL_4_CH0_EN_SHIFT)       /* 0x00000040 */
/* GATE_CON26 */
#define CRU_GATE_CON26_OFFSET                              (0x868U)
#define CRU_GATE_CON26_CLK_DDR_UPCTL_CH1_EN_SHIFT          (1U)
#define CRU_GATE_CON26_CLK_DDR_UPCTL_CH1_EN_MASK           (0x1U << CRU_GATE_CON26_CLK_DDR_UPCTL_CH1_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_0_CH1_EN_SHIFT       (2U)
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_0_CH1_EN_MASK        (0x1U << CRU_GATE_CON26_ACLK_DDR_UPCTL_0_CH1_EN_SHIFT)       /* 0x00000004 */
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_1_CH1_EN_SHIFT       (3U)
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_1_CH1_EN_MASK        (0x1U << CRU_GATE_CON26_ACLK_DDR_UPCTL_1_CH1_EN_SHIFT)       /* 0x00000008 */
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_2_CH1_EN_SHIFT       (4U)
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_2_CH1_EN_MASK        (0x1U << CRU_GATE_CON26_ACLK_DDR_UPCTL_2_CH1_EN_SHIFT)       /* 0x00000010 */
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_3_CH1_EN_SHIFT       (5U)
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_3_CH1_EN_MASK        (0x1U << CRU_GATE_CON26_ACLK_DDR_UPCTL_3_CH1_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_4_CH1_EN_SHIFT       (6U)
#define CRU_GATE_CON26_ACLK_DDR_UPCTL_4_CH1_EN_MASK        (0x1U << CRU_GATE_CON26_ACLK_DDR_UPCTL_4_CH1_EN_SHIFT)       /* 0x00000040 */
/* GATE_CON27 */
#define CRU_GATE_CON27_OFFSET                              (0x86CU)
#define CRU_GATE_CON27_CLK_REF_PVTPLL_DDR_EN_SHIFT         (0U)
#define CRU_GATE_CON27_CLK_REF_PVTPLL_DDR_EN_MASK          (0x1U << CRU_GATE_CON27_CLK_REF_PVTPLL_DDR_EN_SHIFT)         /* 0x00000001 */
#define CRU_GATE_CON27_PCLK_PVTPLL_DDR_EN_SHIFT            (1U)
#define CRU_GATE_CON27_PCLK_PVTPLL_DDR_EN_MASK             (0x1U << CRU_GATE_CON27_PCLK_PVTPLL_DDR_EN_SHIFT)            /* 0x00000002 */
/* GATE_CON28 */
#define CRU_GATE_CON28_OFFSET                              (0x870U)
#define CRU_GATE_CON28_ACLK_RKNN0_EN_SHIFT                 (9U)
#define CRU_GATE_CON28_ACLK_RKNN0_EN_MASK                  (0x1U << CRU_GATE_CON28_ACLK_RKNN0_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON28_ACLK_RKNN0_BIU_EN_SHIFT             (11U)
#define CRU_GATE_CON28_ACLK_RKNN0_BIU_EN_MASK              (0x1U << CRU_GATE_CON28_ACLK_RKNN0_BIU_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON28_LCLK_RKNN0_BIU_EN_SHIFT             (12U)
#define CRU_GATE_CON28_LCLK_RKNN0_BIU_EN_MASK              (0x1U << CRU_GATE_CON28_LCLK_RKNN0_BIU_EN_SHIFT)             /* 0x00001000 */
/* GATE_CON29 */
#define CRU_GATE_CON29_OFFSET                              (0x874U)
#define CRU_GATE_CON29_ACLK_RKNN1_EN_SHIFT                 (0U)
#define CRU_GATE_CON29_ACLK_RKNN1_EN_MASK                  (0x1U << CRU_GATE_CON29_ACLK_RKNN1_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON29_ACLK_RKNN1_BIU_EN_SHIFT             (2U)
#define CRU_GATE_CON29_ACLK_RKNN1_BIU_EN_MASK              (0x1U << CRU_GATE_CON29_ACLK_RKNN1_BIU_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON29_LCLK_RKNN1_BIU_EN_SHIFT             (3U)
#define CRU_GATE_CON29_LCLK_RKNN1_BIU_EN_MASK              (0x1U << CRU_GATE_CON29_LCLK_RKNN1_BIU_EN_SHIFT)             /* 0x00000008 */
/* GATE_CON31 */
#define CRU_GATE_CON31_OFFSET                              (0x87CU)
#define CRU_GATE_CON31_LCLK_NPUSUBSYS_BIU_EN_SHIFT         (1U)
#define CRU_GATE_CON31_LCLK_NPUSUBSYS_BIU_EN_MASK          (0x1U << CRU_GATE_CON31_LCLK_NPUSUBSYS_BIU_EN_SHIFT)         /* 0x00000002 */
#define CRU_GATE_CON31_HCLK_RKNN_ROOT_EN_SHIFT             (4U)
#define CRU_GATE_CON31_HCLK_RKNN_ROOT_EN_MASK              (0x1U << CRU_GATE_CON31_HCLK_RKNN_ROOT_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON31_CLK_RKNN_DSU0_DF_EN_SHIFT           (5U)
#define CRU_GATE_CON31_CLK_RKNN_DSU0_DF_EN_MASK            (0x1U << CRU_GATE_CON31_CLK_RKNN_DSU0_DF_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON31_CLK_NPU_PVTPLL_SRC_EN_SHIFT         (6U)
#define CRU_GATE_CON31_CLK_NPU_PVTPLL_SRC_EN_MASK          (0x1U << CRU_GATE_CON31_CLK_NPU_PVTPLL_SRC_EN_SHIFT)         /* 0x00000040 */
#define CRU_GATE_CON31_CLK_RKNN_DSU0_EN_SHIFT              (7U)
#define CRU_GATE_CON31_CLK_RKNN_DSU0_EN_MASK               (0x1U << CRU_GATE_CON31_CLK_RKNN_DSU0_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON31_PCLK_NPUTOP_ROOT_EN_SHIFT           (8U)
#define CRU_GATE_CON31_PCLK_NPUTOP_ROOT_EN_MASK            (0x1U << CRU_GATE_CON31_PCLK_NPUTOP_ROOT_EN_SHIFT)           /* 0x00000100 */
#define CRU_GATE_CON31_PCLK_NPUTOP_BIU_EN_SHIFT            (9U)
#define CRU_GATE_CON31_PCLK_NPUTOP_BIU_EN_MASK             (0x1U << CRU_GATE_CON31_PCLK_NPUTOP_BIU_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON31_PCLK_NPU_TIMER_EN_SHIFT             (10U)
#define CRU_GATE_CON31_PCLK_NPU_TIMER_EN_MASK              (0x1U << CRU_GATE_CON31_PCLK_NPU_TIMER_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON31_CLK_NPUTIMER_ROOT_EN_SHIFT          (11U)
#define CRU_GATE_CON31_CLK_NPUTIMER_ROOT_EN_MASK           (0x1U << CRU_GATE_CON31_CLK_NPUTIMER_ROOT_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON31_CLK_NPUTIMER0_EN_SHIFT              (12U)
#define CRU_GATE_CON31_CLK_NPUTIMER0_EN_MASK               (0x1U << CRU_GATE_CON31_CLK_NPUTIMER0_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON31_CLK_NPUTIMER1_EN_SHIFT              (13U)
#define CRU_GATE_CON31_CLK_NPUTIMER1_EN_MASK               (0x1U << CRU_GATE_CON31_CLK_NPUTIMER1_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON31_PCLK_NPU_WDT_EN_SHIFT               (14U)
#define CRU_GATE_CON31_PCLK_NPU_WDT_EN_MASK                (0x1U << CRU_GATE_CON31_PCLK_NPU_WDT_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON31_TCLK_NPU_WDT_EN_SHIFT               (15U)
#define CRU_GATE_CON31_TCLK_NPU_WDT_EN_MASK                (0x1U << CRU_GATE_CON31_TCLK_NPU_WDT_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON32 */
#define CRU_GATE_CON32_OFFSET                              (0x880U)
#define CRU_GATE_CON32_ACLK_RKNN_CBUF_EN_SHIFT             (0U)
#define CRU_GATE_CON32_ACLK_RKNN_CBUF_EN_MASK              (0x1U << CRU_GATE_CON32_ACLK_RKNN_CBUF_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON32_PCLK_NPU_GRF_EN_SHIFT               (2U)
#define CRU_GATE_CON32_PCLK_NPU_GRF_EN_MASK                (0x1U << CRU_GATE_CON32_PCLK_NPU_GRF_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON32_PCLK_PVTPLL_NPU_EN_SHIFT            (3U)
#define CRU_GATE_CON32_PCLK_PVTPLL_NPU_EN_MASK             (0x1U << CRU_GATE_CON32_PCLK_PVTPLL_NPU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON32_CLK_REF_PVTPLL_NPU_EN_SHIFT         (4U)
#define CRU_GATE_CON32_CLK_REF_PVTPLL_NPU_EN_MASK          (0x1U << CRU_GATE_CON32_CLK_REF_PVTPLL_NPU_EN_SHIFT)         /* 0x00000010 */
#define CRU_GATE_CON32_HCLK_NPU_CM0_ROOT_EN_SHIFT          (5U)
#define CRU_GATE_CON32_HCLK_NPU_CM0_ROOT_EN_MASK           (0x1U << CRU_GATE_CON32_HCLK_NPU_CM0_ROOT_EN_SHIFT)          /* 0x00000020 */
#define CRU_GATE_CON32_HCLK_NPU_CM0_BIU_EN_SHIFT           (6U)
#define CRU_GATE_CON32_HCLK_NPU_CM0_BIU_EN_MASK            (0x1U << CRU_GATE_CON32_HCLK_NPU_CM0_BIU_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON32_FCLK_NPU_CM0_CORE_EN_SHIFT          (7U)
#define CRU_GATE_CON32_FCLK_NPU_CM0_CORE_EN_MASK           (0x1U << CRU_GATE_CON32_FCLK_NPU_CM0_CORE_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON32_CLK_NPU_CM0_RTC_EN_SHIFT            (9U)
#define CRU_GATE_CON32_CLK_NPU_CM0_RTC_EN_MASK             (0x1U << CRU_GATE_CON32_CLK_NPU_CM0_RTC_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON32_ACLK_RKNNTOP_BIU_EN_SHIFT           (11U)
#define CRU_GATE_CON32_ACLK_RKNNTOP_BIU_EN_MASK            (0x1U << CRU_GATE_CON32_ACLK_RKNNTOP_BIU_EN_SHIFT)           /* 0x00000800 */
#define CRU_GATE_CON32_HCLK_RKNN_CBUF_EN_SHIFT             (12U)
#define CRU_GATE_CON32_HCLK_RKNN_CBUF_EN_MASK              (0x1U << CRU_GATE_CON32_HCLK_RKNN_CBUF_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON32_HCLK_RKNNTOP_BIU_EN_SHIFT           (13U)
#define CRU_GATE_CON32_HCLK_RKNNTOP_BIU_EN_MASK            (0x1U << CRU_GATE_CON32_HCLK_RKNNTOP_BIU_EN_SHIFT)           /* 0x00002000 */
/* GATE_CON33 */
#define CRU_GATE_CON33_OFFSET                              (0x884U)
#define CRU_GATE_CON33_HCLK_NVM_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON33_HCLK_NVM_ROOT_EN_MASK               (0x1U << CRU_GATE_CON33_HCLK_NVM_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON33_ACLK_NVM_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON33_ACLK_NVM_ROOT_EN_MASK               (0x1U << CRU_GATE_CON33_ACLK_NVM_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON33_HCLK_NVM_BIU_EN_SHIFT               (2U)
#define CRU_GATE_CON33_HCLK_NVM_BIU_EN_MASK                (0x1U << CRU_GATE_CON33_HCLK_NVM_BIU_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON33_ACLK_NVM_BIU_EN_SHIFT               (3U)
#define CRU_GATE_CON33_ACLK_NVM_BIU_EN_MASK                (0x1U << CRU_GATE_CON33_ACLK_NVM_BIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON33_SCLK_FSPI_X2_EN_SHIFT               (6U)
#define CRU_GATE_CON33_SCLK_FSPI_X2_EN_MASK                (0x1U << CRU_GATE_CON33_SCLK_FSPI_X2_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON33_HCLK_FSPI_EN_SHIFT                  (7U)
#define CRU_GATE_CON33_HCLK_FSPI_EN_MASK                   (0x1U << CRU_GATE_CON33_HCLK_FSPI_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON33_CCLK_SRC_EMMC_EN_SHIFT              (8U)
#define CRU_GATE_CON33_CCLK_SRC_EMMC_EN_MASK               (0x1U << CRU_GATE_CON33_CCLK_SRC_EMMC_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON33_HCLK_EMMC_EN_SHIFT                  (9U)
#define CRU_GATE_CON33_HCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON33_HCLK_EMMC_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON33_ACLK_EMMC_EN_SHIFT                  (10U)
#define CRU_GATE_CON33_ACLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON33_ACLK_EMMC_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON33_BCLK_EMMC_EN_SHIFT                  (11U)
#define CRU_GATE_CON33_BCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON33_BCLK_EMMC_EN_SHIFT)                  /* 0x00000800 */
#define CRU_GATE_CON33_TCLK_EMMC_EN_SHIFT                  (12U)
#define CRU_GATE_CON33_TCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON33_TCLK_EMMC_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON33_CLK_EXTREF_TIMEOUT_NVM_EN_SHIFT     (13U)
#define CRU_GATE_CON33_CLK_EXTREF_TIMEOUT_NVM_EN_MASK      (0x1U << CRU_GATE_CON33_CLK_EXTREF_TIMEOUT_NVM_EN_SHIFT)     /* 0x00002000 */
/* GATE_CON34 */
#define CRU_GATE_CON34_OFFSET                              (0x888U)
#define CRU_GATE_CON34_PCLK_PHP_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON34_PCLK_PHP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON34_PCLK_PHP_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON34_PCLK_GRF_EN_SHIFT                   (1U)
#define CRU_GATE_CON34_PCLK_GRF_EN_MASK                    (0x1U << CRU_GATE_CON34_PCLK_GRF_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON34_PCLK_PHP_BIU_EN_SHIFT               (5U)
#define CRU_GATE_CON34_PCLK_PHP_BIU_EN_MASK                (0x1U << CRU_GATE_CON34_PCLK_PHP_BIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON34_ACLK_PHP_ROOT_EN_SHIFT              (7U)
#define CRU_GATE_CON34_ACLK_PHP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON34_ACLK_PHP_ROOT_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON34_ACLK_PHP_BIU_EN_SHIFT               (9U)
#define CRU_GATE_CON34_ACLK_PHP_BIU_EN_MASK                (0x1U << CRU_GATE_CON34_ACLK_PHP_BIU_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON34_PCLK_PCIE0_EN_SHIFT                 (13U)
#define CRU_GATE_CON34_PCLK_PCIE0_EN_MASK                  (0x1U << CRU_GATE_CON34_PCLK_PCIE0_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON34_CLK_PCIE0_AUX_EN_SHIFT              (14U)
#define CRU_GATE_CON34_CLK_PCIE0_AUX_EN_MASK               (0x1U << CRU_GATE_CON34_CLK_PCIE0_AUX_EN_SHIFT)              /* 0x00004000 */
#define CRU_GATE_CON34_ACLK_PCIE0_MSTR_EN_SHIFT            (15U)
#define CRU_GATE_CON34_ACLK_PCIE0_MSTR_EN_MASK             (0x1U << CRU_GATE_CON34_ACLK_PCIE0_MSTR_EN_SHIFT)            /* 0x00008000 */
/* GATE_CON35 */
#define CRU_GATE_CON35_OFFSET                              (0x88CU)
#define CRU_GATE_CON35_ACLK_PCIE0_SLV_EN_SHIFT             (0U)
#define CRU_GATE_CON35_ACLK_PCIE0_SLV_EN_MASK              (0x1U << CRU_GATE_CON35_ACLK_PCIE0_SLV_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON35_ACLK_PCIE0_DBI_EN_SHIFT             (1U)
#define CRU_GATE_CON35_ACLK_PCIE0_DBI_EN_MASK              (0x1U << CRU_GATE_CON35_ACLK_PCIE0_DBI_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON35_ACLK_USB3OTG1_EN_SHIFT              (3U)
#define CRU_GATE_CON35_ACLK_USB3OTG1_EN_MASK               (0x1U << CRU_GATE_CON35_ACLK_USB3OTG1_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON35_CLK_REF_USB3OTG1_EN_SHIFT           (4U)
#define CRU_GATE_CON35_CLK_REF_USB3OTG1_EN_MASK            (0x1U << CRU_GATE_CON35_CLK_REF_USB3OTG1_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON35_CLK_SUSPEND_USB3OTG1_EN_SHIFT       (5U)
#define CRU_GATE_CON35_CLK_SUSPEND_USB3OTG1_EN_MASK        (0x1U << CRU_GATE_CON35_CLK_SUSPEND_USB3OTG1_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON35_ACLK_MMU0_EN_SHIFT                  (11U)
#define CRU_GATE_CON35_ACLK_MMU0_EN_MASK                   (0x1U << CRU_GATE_CON35_ACLK_MMU0_EN_SHIFT)                  /* 0x00000800 */
#define CRU_GATE_CON35_ACLK_SLV_MMU0_EN_SHIFT              (13U)
#define CRU_GATE_CON35_ACLK_SLV_MMU0_EN_MASK               (0x1U << CRU_GATE_CON35_ACLK_SLV_MMU0_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON35_ACLK_MMU1_EN_SHIFT                  (14U)
#define CRU_GATE_CON35_ACLK_MMU1_EN_MASK                   (0x1U << CRU_GATE_CON35_ACLK_MMU1_EN_SHIFT)                  /* 0x00004000 */
/* GATE_CON36 */
#define CRU_GATE_CON36_OFFSET                              (0x890U)
#define CRU_GATE_CON36_ACLK_SLV_MMU1_EN_SHIFT              (0U)
#define CRU_GATE_CON36_ACLK_SLV_MMU1_EN_MASK               (0x1U << CRU_GATE_CON36_ACLK_SLV_MMU1_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON36_CLK_EXTREF_TIMEOUT_PHP_EN_SHIFT     (2U)
#define CRU_GATE_CON36_CLK_EXTREF_TIMEOUT_PHP_EN_MASK      (0x1U << CRU_GATE_CON36_CLK_EXTREF_TIMEOUT_PHP_EN_SHIFT)     /* 0x00000004 */
#define CRU_GATE_CON36_PCLK_PCIE1_EN_SHIFT                 (7U)
#define CRU_GATE_CON36_PCLK_PCIE1_EN_MASK                  (0x1U << CRU_GATE_CON36_PCLK_PCIE1_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON36_CLK_PCIE1_AUX_EN_SHIFT              (8U)
#define CRU_GATE_CON36_CLK_PCIE1_AUX_EN_MASK               (0x1U << CRU_GATE_CON36_CLK_PCIE1_AUX_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON36_ACLK_PCIE1_MSTR_EN_SHIFT            (9U)
#define CRU_GATE_CON36_ACLK_PCIE1_MSTR_EN_MASK             (0x1U << CRU_GATE_CON36_ACLK_PCIE1_MSTR_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON36_ACLK_PCIE1_SLV_EN_SHIFT             (10U)
#define CRU_GATE_CON36_ACLK_PCIE1_SLV_EN_MASK              (0x1U << CRU_GATE_CON36_ACLK_PCIE1_SLV_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON36_ACLK_PCIE1_DBI_EN_SHIFT             (11U)
#define CRU_GATE_CON36_ACLK_PCIE1_DBI_EN_MASK              (0x1U << CRU_GATE_CON36_ACLK_PCIE1_DBI_EN_SHIFT)             /* 0x00000800 */
/* GATE_CON37 */
#define CRU_GATE_CON37_OFFSET                              (0x894U)
#define CRU_GATE_CON37_CLK_RXOOB0_EN_SHIFT                 (0U)
#define CRU_GATE_CON37_CLK_RXOOB0_EN_MASK                  (0x1U << CRU_GATE_CON37_CLK_RXOOB0_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON37_CLK_RXOOB1_EN_SHIFT                 (1U)
#define CRU_GATE_CON37_CLK_RXOOB1_EN_MASK                  (0x1U << CRU_GATE_CON37_CLK_RXOOB1_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON37_CLK_PMALIVE0_EN_SHIFT               (2U)
#define CRU_GATE_CON37_CLK_PMALIVE0_EN_MASK                (0x1U << CRU_GATE_CON37_CLK_PMALIVE0_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON37_CLK_PMALIVE1_EN_SHIFT               (3U)
#define CRU_GATE_CON37_CLK_PMALIVE1_EN_MASK                (0x1U << CRU_GATE_CON37_CLK_PMALIVE1_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON37_ACLK_SATA0_EN_SHIFT                 (4U)
#define CRU_GATE_CON37_ACLK_SATA0_EN_MASK                  (0x1U << CRU_GATE_CON37_ACLK_SATA0_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON37_ACLK_SATA1_EN_SHIFT                 (5U)
#define CRU_GATE_CON37_ACLK_SATA1_EN_MASK                  (0x1U << CRU_GATE_CON37_ACLK_SATA1_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON37_CLK_ASIC1_EN_SHIFT                  (6U)
#define CRU_GATE_CON37_CLK_ASIC1_EN_MASK                   (0x1U << CRU_GATE_CON37_CLK_ASIC1_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON37_CLK_ASIC0_EN_SHIFT                  (7U)
#define CRU_GATE_CON37_CLK_ASIC0_EN_MASK                   (0x1U << CRU_GATE_CON37_CLK_ASIC0_EN_SHIFT)                  /* 0x00000080 */
/* GATE_CON38 */
#define CRU_GATE_CON38_OFFSET                              (0x898U)
#define CRU_GATE_CON38_CLK_USB3OTG1_PIPE_PCLK_EN_SHIFT     (0U)
#define CRU_GATE_CON38_CLK_USB3OTG1_PIPE_PCLK_EN_MASK      (0x1U << CRU_GATE_CON38_CLK_USB3OTG1_PIPE_PCLK_EN_SHIFT)     /* 0x00000001 */
#define CRU_GATE_CON38_CLK_USB3OTG1_UTMI_EN_SHIFT          (1U)
#define CRU_GATE_CON38_CLK_USB3OTG1_UTMI_EN_MASK           (0x1U << CRU_GATE_CON38_CLK_USB3OTG1_UTMI_EN_SHIFT)          /* 0x00000002 */
/* GATE_CON39 */
#define CRU_GATE_CON39_OFFSET                              (0x89CU)
#define CRU_GATE_CON39_CLK_USB3OTG0_PIPE_PCLK_EN_SHIFT     (0U)
#define CRU_GATE_CON39_CLK_USB3OTG0_PIPE_PCLK_EN_MASK      (0x1U << CRU_GATE_CON39_CLK_USB3OTG0_PIPE_PCLK_EN_SHIFT)     /* 0x00000001 */
#define CRU_GATE_CON39_CLK_USB3OTG0_UTMI_EN_SHIFT          (1U)
#define CRU_GATE_CON39_CLK_USB3OTG0_UTMI_EN_MASK           (0x1U << CRU_GATE_CON39_CLK_USB3OTG0_UTMI_EN_SHIFT)          /* 0x00000002 */
/* GATE_CON40 */
#define CRU_GATE_CON40_OFFSET                              (0x8A0U)
#define CRU_GATE_CON40_PCLK_CSIDPHY1_EN_SHIFT              (2U)
#define CRU_GATE_CON40_PCLK_CSIDPHY1_EN_MASK               (0x1U << CRU_GATE_CON40_PCLK_CSIDPHY1_EN_SHIFT)              /* 0x00000004 */
/* GATE_CON42 */
#define CRU_GATE_CON42_OFFSET                              (0x8A8U)
#define CRU_GATE_CON42_HCLK_SDGMAC_ROOT_EN_SHIFT           (0U)
#define CRU_GATE_CON42_HCLK_SDGMAC_ROOT_EN_MASK            (0x1U << CRU_GATE_CON42_HCLK_SDGMAC_ROOT_EN_SHIFT)           /* 0x00000001 */
#define CRU_GATE_CON42_ACLK_SDGMAC_ROOT_EN_SHIFT           (1U)
#define CRU_GATE_CON42_ACLK_SDGMAC_ROOT_EN_MASK            (0x1U << CRU_GATE_CON42_ACLK_SDGMAC_ROOT_EN_SHIFT)           /* 0x00000002 */
#define CRU_GATE_CON42_PCLK_SDGMAC_ROOT_EN_SHIFT           (2U)
#define CRU_GATE_CON42_PCLK_SDGMAC_ROOT_EN_MASK            (0x1U << CRU_GATE_CON42_PCLK_SDGMAC_ROOT_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON42_PCLK_SDGMAC_GRF_EN_SHIFT            (3U)
#define CRU_GATE_CON42_PCLK_SDGMAC_GRF_EN_MASK             (0x1U << CRU_GATE_CON42_PCLK_SDGMAC_GRF_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON42_PCLK_SDGMAC_BIU_EN_SHIFT            (4U)
#define CRU_GATE_CON42_PCLK_SDGMAC_BIU_EN_MASK             (0x1U << CRU_GATE_CON42_PCLK_SDGMAC_BIU_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON42_ACLK_SDGMAC_BIU_EN_SHIFT            (5U)
#define CRU_GATE_CON42_ACLK_SDGMAC_BIU_EN_MASK             (0x1U << CRU_GATE_CON42_ACLK_SDGMAC_BIU_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON42_HCLK_SDGMAC_BIU_EN_SHIFT            (6U)
#define CRU_GATE_CON42_HCLK_SDGMAC_BIU_EN_MASK             (0x1U << CRU_GATE_CON42_HCLK_SDGMAC_BIU_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON42_ACLK_GMAC0_EN_SHIFT                 (7U)
#define CRU_GATE_CON42_ACLK_GMAC0_EN_MASK                  (0x1U << CRU_GATE_CON42_ACLK_GMAC0_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON42_ACLK_GMAC1_EN_SHIFT                 (8U)
#define CRU_GATE_CON42_ACLK_GMAC1_EN_MASK                  (0x1U << CRU_GATE_CON42_ACLK_GMAC1_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON42_PCLK_GMAC0_EN_SHIFT                 (9U)
#define CRU_GATE_CON42_PCLK_GMAC0_EN_MASK                  (0x1U << CRU_GATE_CON42_PCLK_GMAC0_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON42_PCLK_GMAC1_EN_SHIFT                 (10U)
#define CRU_GATE_CON42_PCLK_GMAC1_EN_MASK                  (0x1U << CRU_GATE_CON42_PCLK_GMAC1_EN_SHIFT)                 /* 0x00000400 */
#define CRU_GATE_CON42_CCLK_SRC_SDIO_EN_SHIFT              (11U)
#define CRU_GATE_CON42_CCLK_SRC_SDIO_EN_MASK               (0x1U << CRU_GATE_CON42_CCLK_SRC_SDIO_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON42_HCLK_SDIO_EN_SHIFT                  (12U)
#define CRU_GATE_CON42_HCLK_SDIO_EN_MASK                   (0x1U << CRU_GATE_CON42_HCLK_SDIO_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON42_CLK_GMAC1_PTP_REF_EN_SHIFT          (13U)
#define CRU_GATE_CON42_CLK_GMAC1_PTP_REF_EN_MASK           (0x1U << CRU_GATE_CON42_CLK_GMAC1_PTP_REF_EN_SHIFT)          /* 0x00002000 */
#define CRU_GATE_CON42_CLK_GMAC0_PTP_REF_EN_SHIFT          (14U)
#define CRU_GATE_CON42_CLK_GMAC0_PTP_REF_EN_MASK           (0x1U << CRU_GATE_CON42_CLK_GMAC0_PTP_REF_EN_SHIFT)          /* 0x00004000 */
#define CRU_GATE_CON42_CLK_GMAC1_PTP_REF_SRC_EN_SHIFT      (15U)
#define CRU_GATE_CON42_CLK_GMAC1_PTP_REF_SRC_EN_MASK       (0x1U << CRU_GATE_CON42_CLK_GMAC1_PTP_REF_SRC_EN_SHIFT)      /* 0x00008000 */
/* GATE_CON43 */
#define CRU_GATE_CON43_OFFSET                              (0x8ACU)
#define CRU_GATE_CON43_CLK_GMAC0_PTP_REF_SRC_EN_SHIFT      (0U)
#define CRU_GATE_CON43_CLK_GMAC0_PTP_REF_SRC_EN_MASK       (0x1U << CRU_GATE_CON43_CLK_GMAC0_PTP_REF_SRC_EN_SHIFT)      /* 0x00000001 */
#define CRU_GATE_CON43_CCLK_SRC_SDMMC0_EN_SHIFT            (1U)
#define CRU_GATE_CON43_CCLK_SRC_SDMMC0_EN_MASK             (0x1U << CRU_GATE_CON43_CCLK_SRC_SDMMC0_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON43_HCLK_SDMMC0_EN_SHIFT                (2U)
#define CRU_GATE_CON43_HCLK_SDMMC0_EN_MASK                 (0x1U << CRU_GATE_CON43_HCLK_SDMMC0_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON43_SCLK_FSPI1_X2_EN_SHIFT              (3U)
#define CRU_GATE_CON43_SCLK_FSPI1_X2_EN_MASK               (0x1U << CRU_GATE_CON43_SCLK_FSPI1_X2_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON43_HCLK_FSPI1_EN_SHIFT                 (4U)
#define CRU_GATE_CON43_HCLK_FSPI1_EN_MASK                  (0x1U << CRU_GATE_CON43_HCLK_FSPI1_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON43_ACLK_DSMC_ROOT_EN_SHIFT             (5U)
#define CRU_GATE_CON43_ACLK_DSMC_ROOT_EN_MASK              (0x1U << CRU_GATE_CON43_ACLK_DSMC_ROOT_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON43_ACLK_DSMC_BIU_EN_SHIFT              (6U)
#define CRU_GATE_CON43_ACLK_DSMC_BIU_EN_MASK               (0x1U << CRU_GATE_CON43_ACLK_DSMC_BIU_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON43_ACLK_DSMC_EN_SHIFT                  (7U)
#define CRU_GATE_CON43_ACLK_DSMC_EN_MASK                   (0x1U << CRU_GATE_CON43_ACLK_DSMC_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON43_PCLK_DSMC_EN_SHIFT                  (8U)
#define CRU_GATE_CON43_PCLK_DSMC_EN_MASK                   (0x1U << CRU_GATE_CON43_PCLK_DSMC_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON43_CLK_DSMC_SYS_EN_SHIFT               (9U)
#define CRU_GATE_CON43_CLK_DSMC_SYS_EN_MASK                (0x1U << CRU_GATE_CON43_CLK_DSMC_SYS_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON43_HCLK_FLEXBUS_EN_SHIFT               (10U)
#define CRU_GATE_CON43_HCLK_FLEXBUS_EN_MASK                (0x1U << CRU_GATE_CON43_HCLK_FLEXBUS_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON43_CLK_FLEXBUS_TX_EN_SHIFT             (11U)
#define CRU_GATE_CON43_CLK_FLEXBUS_TX_EN_MASK              (0x1U << CRU_GATE_CON43_CLK_FLEXBUS_TX_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON43_CLK_FLEXBUS_RX_EN_SHIFT             (12U)
#define CRU_GATE_CON43_CLK_FLEXBUS_RX_EN_MASK              (0x1U << CRU_GATE_CON43_CLK_FLEXBUS_RX_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON43_ACLK_FLEXBUS_EN_SHIFT               (13U)
#define CRU_GATE_CON43_ACLK_FLEXBUS_EN_MASK                (0x1U << CRU_GATE_CON43_ACLK_FLEXBUS_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON43_CLK_EXTREF_TIMEOUT_SDGMAC_EN_SHIFT  (14U)
#define CRU_GATE_CON43_CLK_EXTREF_TIMEOUT_SDGMAC_EN_MASK   (0x1U << CRU_GATE_CON43_CLK_EXTREF_TIMEOUT_SDGMAC_EN_SHIFT)  /* 0x00004000 */
/* GATE_CON45 */
#define CRU_GATE_CON45_OFFSET                              (0x8B4U)
#define CRU_GATE_CON45_HCLK_RKVDEC_ROOT_EN_SHIFT           (0U)
#define CRU_GATE_CON45_HCLK_RKVDEC_ROOT_EN_MASK            (0x1U << CRU_GATE_CON45_HCLK_RKVDEC_ROOT_EN_SHIFT)           /* 0x00000001 */
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_PRE_EN_SHIFT       (1U)
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_PRE_EN_MASK        (0x1U << CRU_GATE_CON45_ACLK_RKVDEC_ROOT_PRE_EN_SHIFT)       /* 0x00000002 */
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_BAK_EN_SHIFT       (2U)
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_BAK_EN_MASK        (0x1U << CRU_GATE_CON45_ACLK_RKVDEC_ROOT_BAK_EN_SHIFT)       /* 0x00000004 */
#define CRU_GATE_CON45_HCLK_RKVDEC_EN_SHIFT                (3U)
#define CRU_GATE_CON45_HCLK_RKVDEC_EN_MASK                 (0x1U << CRU_GATE_CON45_HCLK_RKVDEC_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON45_HCLK_RKVDEC_BIU_EN_SHIFT            (5U)
#define CRU_GATE_CON45_HCLK_RKVDEC_BIU_EN_MASK             (0x1U << CRU_GATE_CON45_HCLK_RKVDEC_BIU_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON45_ACLK_RKVDEC_BIU_EN_SHIFT            (6U)
#define CRU_GATE_CON45_ACLK_RKVDEC_BIU_EN_MASK             (0x1U << CRU_GATE_CON45_ACLK_RKVDEC_BIU_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_EN_SHIFT           (7U)
#define CRU_GATE_CON45_ACLK_RKVDEC_ROOT_EN_MASK            (0x1U << CRU_GATE_CON45_ACLK_RKVDEC_ROOT_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON45_CLK_RKVDEC_HEVC_CA_EN_SHIFT         (8U)
#define CRU_GATE_CON45_CLK_RKVDEC_HEVC_CA_EN_MASK          (0x1U << CRU_GATE_CON45_CLK_RKVDEC_HEVC_CA_EN_SHIFT)         /* 0x00000100 */
#define CRU_GATE_CON45_CLK_RKVDEC_CORE_EN_SHIFT            (9U)
#define CRU_GATE_CON45_CLK_RKVDEC_CORE_EN_MASK             (0x1U << CRU_GATE_CON45_CLK_RKVDEC_CORE_EN_SHIFT)            /* 0x00000200 */
/* GATE_CON47 */
#define CRU_GATE_CON47_OFFSET                              (0x8BCU)
#define CRU_GATE_CON47_ACLK_UFS_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON47_ACLK_UFS_ROOT_EN_MASK               (0x1U << CRU_GATE_CON47_ACLK_UFS_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON47_ACLK_USB_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON47_ACLK_USB_ROOT_EN_MASK               (0x1U << CRU_GATE_CON47_ACLK_USB_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON47_PCLK_USB_ROOT_EN_SHIFT              (2U)
#define CRU_GATE_CON47_PCLK_USB_ROOT_EN_MASK               (0x1U << CRU_GATE_CON47_PCLK_USB_ROOT_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON47_ACLK_USB_BIU_EN_SHIFT               (3U)
#define CRU_GATE_CON47_ACLK_USB_BIU_EN_MASK                (0x1U << CRU_GATE_CON47_ACLK_USB_BIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON47_PCLK_USBUFS_BIU_EN_SHIFT            (4U)
#define CRU_GATE_CON47_PCLK_USBUFS_BIU_EN_MASK             (0x1U << CRU_GATE_CON47_PCLK_USBUFS_BIU_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON47_ACLK_USB3OTG0_EN_SHIFT              (5U)
#define CRU_GATE_CON47_ACLK_USB3OTG0_EN_MASK               (0x1U << CRU_GATE_CON47_ACLK_USB3OTG0_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON47_CLK_REF_USB3OTG0_EN_SHIFT           (6U)
#define CRU_GATE_CON47_CLK_REF_USB3OTG0_EN_MASK            (0x1U << CRU_GATE_CON47_CLK_REF_USB3OTG0_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON47_CLK_SUSPEND_USB3OTG0_EN_SHIFT       (7U)
#define CRU_GATE_CON47_CLK_SUSPEND_USB3OTG0_EN_MASK        (0x1U << CRU_GATE_CON47_CLK_SUSPEND_USB3OTG0_EN_SHIFT)       /* 0x00000080 */
#define CRU_GATE_CON47_ACLK_UFS_BIU_EN_SHIFT               (10U)
#define CRU_GATE_CON47_ACLK_UFS_BIU_EN_MASK                (0x1U << CRU_GATE_CON47_ACLK_UFS_BIU_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON47_ACLK_MMU2_EN_SHIFT                  (12U)
#define CRU_GATE_CON47_ACLK_MMU2_EN_MASK                   (0x1U << CRU_GATE_CON47_ACLK_MMU2_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON47_ACLK_SLV_MMU2_EN_SHIFT              (13U)
#define CRU_GATE_CON47_ACLK_SLV_MMU2_EN_MASK               (0x1U << CRU_GATE_CON47_ACLK_SLV_MMU2_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON47_ACLK_UFS_SYS_EN_SHIFT               (15U)
#define CRU_GATE_CON47_ACLK_UFS_SYS_EN_MASK                (0x1U << CRU_GATE_CON47_ACLK_UFS_SYS_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON48 */
#define CRU_GATE_CON48_OFFSET                              (0x8C0U)
#define CRU_GATE_CON48_PCLK_USBUFS_GRF_EN_SHIFT            (1U)
#define CRU_GATE_CON48_PCLK_USBUFS_GRF_EN_MASK             (0x1U << CRU_GATE_CON48_PCLK_USBUFS_GRF_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON48_PCLK_UFS_GRF_EN_SHIFT               (2U)
#define CRU_GATE_CON48_PCLK_UFS_GRF_EN_MASK                (0x1U << CRU_GATE_CON48_PCLK_UFS_GRF_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON48_CLK_EXTREF_TIMEOUT_USB_EN_SHIFT     (3U)
#define CRU_GATE_CON48_CLK_EXTREF_TIMEOUT_USB_EN_MASK      (0x1U << CRU_GATE_CON48_CLK_EXTREF_TIMEOUT_USB_EN_SHIFT)     /* 0x00000008 */
/* GATE_CON49 */
#define CRU_GATE_CON49_OFFSET                              (0x8C4U)
#define CRU_GATE_CON49_ACLK_VPU_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON49_ACLK_VPU_ROOT_EN_MASK               (0x1U << CRU_GATE_CON49_ACLK_VPU_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON49_ACLK_VPU_MID_ROOT_EN_SHIFT          (1U)
#define CRU_GATE_CON49_ACLK_VPU_MID_ROOT_EN_MASK           (0x1U << CRU_GATE_CON49_ACLK_VPU_MID_ROOT_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON49_HCLK_VPU_ROOT_EN_SHIFT              (2U)
#define CRU_GATE_CON49_HCLK_VPU_ROOT_EN_MASK               (0x1U << CRU_GATE_CON49_HCLK_VPU_ROOT_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON49_ACLK_JPEG_ROOT_EN_SHIFT             (3U)
#define CRU_GATE_CON49_ACLK_JPEG_ROOT_EN_MASK              (0x1U << CRU_GATE_CON49_ACLK_JPEG_ROOT_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON49_ACLK_VPU_LOW_ROOT_EN_SHIFT          (4U)
#define CRU_GATE_CON49_ACLK_VPU_LOW_ROOT_EN_MASK           (0x1U << CRU_GATE_CON49_ACLK_VPU_LOW_ROOT_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON49_HCLK_VPU_BIU_EN_SHIFT               (6U)
#define CRU_GATE_CON49_HCLK_VPU_BIU_EN_MASK                (0x1U << CRU_GATE_CON49_HCLK_VPU_BIU_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON49_ACLK_JPEG_BIU_EN_SHIFT              (7U)
#define CRU_GATE_CON49_ACLK_JPEG_BIU_EN_MASK               (0x1U << CRU_GATE_CON49_ACLK_JPEG_BIU_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON49_ACLK_RGA_BIU_EN_SHIFT               (10U)
#define CRU_GATE_CON49_ACLK_RGA_BIU_EN_MASK                (0x1U << CRU_GATE_CON49_ACLK_RGA_BIU_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON49_ACLK_VDPP_BIU_EN_SHIFT              (11U)
#define CRU_GATE_CON49_ACLK_VDPP_BIU_EN_MASK               (0x1U << CRU_GATE_CON49_ACLK_VDPP_BIU_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON49_ACLK_EBC_BIU_EN_SHIFT               (12U)
#define CRU_GATE_CON49_ACLK_EBC_BIU_EN_MASK                (0x1U << CRU_GATE_CON49_ACLK_EBC_BIU_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON49_HCLK_RGA2E_0_EN_SHIFT               (13U)
#define CRU_GATE_CON49_HCLK_RGA2E_0_EN_MASK                (0x1U << CRU_GATE_CON49_HCLK_RGA2E_0_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON49_ACLK_RGA2E_0_EN_SHIFT               (14U)
#define CRU_GATE_CON49_ACLK_RGA2E_0_EN_MASK                (0x1U << CRU_GATE_CON49_ACLK_RGA2E_0_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON49_CLK_CORE_RGA2E_0_EN_SHIFT           (15U)
#define CRU_GATE_CON49_CLK_CORE_RGA2E_0_EN_MASK            (0x1U << CRU_GATE_CON49_CLK_CORE_RGA2E_0_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON50 */
#define CRU_GATE_CON50_OFFSET                              (0x8C8U)
#define CRU_GATE_CON50_ACLK_JPEG_EN_SHIFT                  (0U)
#define CRU_GATE_CON50_ACLK_JPEG_EN_MASK                   (0x1U << CRU_GATE_CON50_ACLK_JPEG_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON50_HCLK_JPEG_EN_SHIFT                  (1U)
#define CRU_GATE_CON50_HCLK_JPEG_EN_MASK                   (0x1U << CRU_GATE_CON50_HCLK_JPEG_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON50_HCLK_VDPP_EN_SHIFT                  (2U)
#define CRU_GATE_CON50_HCLK_VDPP_EN_MASK                   (0x1U << CRU_GATE_CON50_HCLK_VDPP_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON50_ACLK_VDPP_EN_SHIFT                  (3U)
#define CRU_GATE_CON50_ACLK_VDPP_EN_MASK                   (0x1U << CRU_GATE_CON50_ACLK_VDPP_EN_SHIFT)                  /* 0x00000008 */
#define CRU_GATE_CON50_CLK_CORE_VDPP_EN_SHIFT              (4U)
#define CRU_GATE_CON50_CLK_CORE_VDPP_EN_MASK               (0x1U << CRU_GATE_CON50_CLK_CORE_VDPP_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON50_HCLK_RGA2E_1_EN_SHIFT               (5U)
#define CRU_GATE_CON50_HCLK_RGA2E_1_EN_MASK                (0x1U << CRU_GATE_CON50_HCLK_RGA2E_1_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON50_ACLK_RGA2E_1_EN_SHIFT               (6U)
#define CRU_GATE_CON50_ACLK_RGA2E_1_EN_MASK                (0x1U << CRU_GATE_CON50_ACLK_RGA2E_1_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON50_CLK_CORE_RGA2E_1_EN_SHIFT           (7U)
#define CRU_GATE_CON50_CLK_CORE_RGA2E_1_EN_MASK            (0x1U << CRU_GATE_CON50_CLK_CORE_RGA2E_1_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON50_DCLK_EBC_FRAC_SRC_EN_SHIFT          (9U)
#define CRU_GATE_CON50_DCLK_EBC_FRAC_SRC_EN_MASK           (0x1U << CRU_GATE_CON50_DCLK_EBC_FRAC_SRC_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON50_HCLK_EBC_EN_SHIFT                   (10U)
#define CRU_GATE_CON50_HCLK_EBC_EN_MASK                    (0x1U << CRU_GATE_CON50_HCLK_EBC_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON50_ACLK_EBC_EN_SHIFT                   (11U)
#define CRU_GATE_CON50_ACLK_EBC_EN_MASK                    (0x1U << CRU_GATE_CON50_ACLK_EBC_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON50_DCLK_EBC_EN_SHIFT                   (12U)
#define CRU_GATE_CON50_DCLK_EBC_EN_MASK                    (0x1U << CRU_GATE_CON50_DCLK_EBC_EN_SHIFT)                   /* 0x00001000 */
/* GATE_CON51 */
#define CRU_GATE_CON51_OFFSET                              (0x8CCU)
#define CRU_GATE_CON51_HCLK_VEPU0_ROOT_EN_SHIFT            (0U)
#define CRU_GATE_CON51_HCLK_VEPU0_ROOT_EN_MASK             (0x1U << CRU_GATE_CON51_HCLK_VEPU0_ROOT_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON51_ACLK_VEPU0_ROOT_EN_SHIFT            (1U)
#define CRU_GATE_CON51_ACLK_VEPU0_ROOT_EN_MASK             (0x1U << CRU_GATE_CON51_ACLK_VEPU0_ROOT_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON51_HCLK_VEPU0_BIU_EN_SHIFT             (2U)
#define CRU_GATE_CON51_HCLK_VEPU0_BIU_EN_MASK              (0x1U << CRU_GATE_CON51_HCLK_VEPU0_BIU_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON51_ACLK_VEPU0_BIU_EN_SHIFT             (3U)
#define CRU_GATE_CON51_ACLK_VEPU0_BIU_EN_MASK              (0x1U << CRU_GATE_CON51_ACLK_VEPU0_BIU_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON51_HCLK_VEPU0_EN_SHIFT                 (4U)
#define CRU_GATE_CON51_HCLK_VEPU0_EN_MASK                  (0x1U << CRU_GATE_CON51_HCLK_VEPU0_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON51_ACLK_VEPU0_EN_SHIFT                 (5U)
#define CRU_GATE_CON51_ACLK_VEPU0_EN_MASK                  (0x1U << CRU_GATE_CON51_ACLK_VEPU0_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON51_CLK_VEPU0_CORE_EN_SHIFT             (6U)
#define CRU_GATE_CON51_CLK_VEPU0_CORE_EN_MASK              (0x1U << CRU_GATE_CON51_CLK_VEPU0_CORE_EN_SHIFT)             /* 0x00000040 */
/* GATE_CON53 */
#define CRU_GATE_CON53_OFFSET                              (0x8D4U)
#define CRU_GATE_CON53_ACLK_VI_ROOT_EN_SHIFT               (0U)
#define CRU_GATE_CON53_ACLK_VI_ROOT_EN_MASK                (0x1U << CRU_GATE_CON53_ACLK_VI_ROOT_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON53_HCLK_VI_ROOT_EN_SHIFT               (1U)
#define CRU_GATE_CON53_HCLK_VI_ROOT_EN_MASK                (0x1U << CRU_GATE_CON53_HCLK_VI_ROOT_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON53_PCLK_VI_ROOT_EN_SHIFT               (2U)
#define CRU_GATE_CON53_PCLK_VI_ROOT_EN_MASK                (0x1U << CRU_GATE_CON53_PCLK_VI_ROOT_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON53_ACLK_VI_BIU_EN_SHIFT                (3U)
#define CRU_GATE_CON53_ACLK_VI_BIU_EN_MASK                 (0x1U << CRU_GATE_CON53_ACLK_VI_BIU_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON53_HCLK_VI_BIU_EN_SHIFT                (4U)
#define CRU_GATE_CON53_HCLK_VI_BIU_EN_MASK                 (0x1U << CRU_GATE_CON53_HCLK_VI_BIU_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON53_PCLK_VI_BIU_EN_SHIFT                (5U)
#define CRU_GATE_CON53_PCLK_VI_BIU_EN_MASK                 (0x1U << CRU_GATE_CON53_PCLK_VI_BIU_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON53_DCLK_VICAP_EN_SHIFT                 (6U)
#define CRU_GATE_CON53_DCLK_VICAP_EN_MASK                  (0x1U << CRU_GATE_CON53_DCLK_VICAP_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON53_ACLK_VICAP_EN_SHIFT                 (7U)
#define CRU_GATE_CON53_ACLK_VICAP_EN_MASK                  (0x1U << CRU_GATE_CON53_ACLK_VICAP_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON53_HCLK_VICAP_EN_SHIFT                 (8U)
#define CRU_GATE_CON53_HCLK_VICAP_EN_MASK                  (0x1U << CRU_GATE_CON53_HCLK_VICAP_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON53_CLK_ISP0_CORE_EN_SHIFT              (9U)
#define CRU_GATE_CON53_CLK_ISP0_CORE_EN_MASK               (0x1U << CRU_GATE_CON53_CLK_ISP0_CORE_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON53_CLK_ISP0_CORE_MARVIN_EN_SHIFT       (10U)
#define CRU_GATE_CON53_CLK_ISP0_CORE_MARVIN_EN_MASK        (0x1U << CRU_GATE_CON53_CLK_ISP0_CORE_MARVIN_EN_SHIFT)       /* 0x00000400 */
#define CRU_GATE_CON53_CLK_ISP0_CORE_VICAP_EN_SHIFT        (11U)
#define CRU_GATE_CON53_CLK_ISP0_CORE_VICAP_EN_MASK         (0x1U << CRU_GATE_CON53_CLK_ISP0_CORE_VICAP_EN_SHIFT)        /* 0x00000800 */
#define CRU_GATE_CON53_ACLK_ISP0_EN_SHIFT                  (12U)
#define CRU_GATE_CON53_ACLK_ISP0_EN_MASK                   (0x1U << CRU_GATE_CON53_ACLK_ISP0_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON53_HCLK_ISP0_EN_SHIFT                  (13U)
#define CRU_GATE_CON53_HCLK_ISP0_EN_MASK                   (0x1U << CRU_GATE_CON53_HCLK_ISP0_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON53_ACLK_VPSS_EN_SHIFT                  (15U)
#define CRU_GATE_CON53_ACLK_VPSS_EN_MASK                   (0x1U << CRU_GATE_CON53_ACLK_VPSS_EN_SHIFT)                  /* 0x00008000 */
/* GATE_CON54 */
#define CRU_GATE_CON54_OFFSET                              (0x8D8U)
#define CRU_GATE_CON54_HCLK_VPSS_EN_SHIFT                  (0U)
#define CRU_GATE_CON54_HCLK_VPSS_EN_MASK                   (0x1U << CRU_GATE_CON54_HCLK_VPSS_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON54_CLK_CORE_VPSS_EN_SHIFT              (1U)
#define CRU_GATE_CON54_CLK_CORE_VPSS_EN_MASK               (0x1U << CRU_GATE_CON54_CLK_CORE_VPSS_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON54_PCLK_CSI_HOST_0_EN_SHIFT            (4U)
#define CRU_GATE_CON54_PCLK_CSI_HOST_0_EN_MASK             (0x1U << CRU_GATE_CON54_PCLK_CSI_HOST_0_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON54_PCLK_CSI_HOST_1_EN_SHIFT            (5U)
#define CRU_GATE_CON54_PCLK_CSI_HOST_1_EN_MASK             (0x1U << CRU_GATE_CON54_PCLK_CSI_HOST_1_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON54_PCLK_CSI_HOST_2_EN_SHIFT            (6U)
#define CRU_GATE_CON54_PCLK_CSI_HOST_2_EN_MASK             (0x1U << CRU_GATE_CON54_PCLK_CSI_HOST_2_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON54_PCLK_CSI_HOST_3_EN_SHIFT            (7U)
#define CRU_GATE_CON54_PCLK_CSI_HOST_3_EN_MASK             (0x1U << CRU_GATE_CON54_PCLK_CSI_HOST_3_EN_SHIFT)            /* 0x00000080 */
#define CRU_GATE_CON54_PCLK_CSI_HOST_4_EN_SHIFT            (8U)
#define CRU_GATE_CON54_PCLK_CSI_HOST_4_EN_MASK             (0x1U << CRU_GATE_CON54_PCLK_CSI_HOST_4_EN_SHIFT)            /* 0x00000100 */
#define CRU_GATE_CON54_ICLK_CSIHOST01_EN_SHIFT             (10U)
#define CRU_GATE_CON54_ICLK_CSIHOST01_EN_MASK              (0x1U << CRU_GATE_CON54_ICLK_CSIHOST01_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON54_ICLK_CSIHOST0_EN_SHIFT              (11U)
#define CRU_GATE_CON54_ICLK_CSIHOST0_EN_MASK               (0x1U << CRU_GATE_CON54_ICLK_CSIHOST0_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON54_CLK_ISP_PVTPLL_SRC_EN_SHIFT         (12U)
#define CRU_GATE_CON54_CLK_ISP_PVTPLL_SRC_EN_MASK          (0x1U << CRU_GATE_CON54_CLK_ISP_PVTPLL_SRC_EN_SHIFT)         /* 0x00001000 */
#define CRU_GATE_CON54_ACLK_VI_ROOT_INTER_EN_SHIFT         (13U)
#define CRU_GATE_CON54_ACLK_VI_ROOT_INTER_EN_MASK          (0x1U << CRU_GATE_CON54_ACLK_VI_ROOT_INTER_EN_SHIFT)         /* 0x00002000 */
/* GATE_CON59 */
#define CRU_GATE_CON59_OFFSET                              (0x8ECU)
#define CRU_GATE_CON59_CLK_VICAP_I0CLK_EN_SHIFT            (1U)
#define CRU_GATE_CON59_CLK_VICAP_I0CLK_EN_MASK             (0x1U << CRU_GATE_CON59_CLK_VICAP_I0CLK_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON59_CLK_VICAP_I1CLK_EN_SHIFT            (2U)
#define CRU_GATE_CON59_CLK_VICAP_I1CLK_EN_MASK             (0x1U << CRU_GATE_CON59_CLK_VICAP_I1CLK_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON59_CLK_VICAP_I2CLK_EN_SHIFT            (3U)
#define CRU_GATE_CON59_CLK_VICAP_I2CLK_EN_MASK             (0x1U << CRU_GATE_CON59_CLK_VICAP_I2CLK_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON59_CLK_VICAP_I3CLK_EN_SHIFT            (4U)
#define CRU_GATE_CON59_CLK_VICAP_I3CLK_EN_MASK             (0x1U << CRU_GATE_CON59_CLK_VICAP_I3CLK_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON59_CLK_VICAP_I4CLK_EN_SHIFT            (5U)
#define CRU_GATE_CON59_CLK_VICAP_I4CLK_EN_MASK             (0x1U << CRU_GATE_CON59_CLK_VICAP_I4CLK_EN_SHIFT)            /* 0x00000020 */
/* GATE_CON61 */
#define CRU_GATE_CON61_OFFSET                              (0x8F4U)
#define CRU_GATE_CON61_ACLK_VOP_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON61_ACLK_VOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON61_ACLK_VOP_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON61_HCLK_VOP_ROOT_EN_SHIFT              (2U)
#define CRU_GATE_CON61_HCLK_VOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON61_HCLK_VOP_ROOT_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON61_PCLK_VOP_ROOT_EN_SHIFT              (3U)
#define CRU_GATE_CON61_PCLK_VOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON61_PCLK_VOP_ROOT_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON61_ACLK_VOP_BIU_EN_SHIFT               (4U)
#define CRU_GATE_CON61_ACLK_VOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON61_ACLK_VOP_BIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON61_ACLK_VOP2_BIU_EN_SHIFT              (5U)
#define CRU_GATE_CON61_ACLK_VOP2_BIU_EN_MASK               (0x1U << CRU_GATE_CON61_ACLK_VOP2_BIU_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON61_HCLK_VOP_BIU_EN_SHIFT               (6U)
#define CRU_GATE_CON61_HCLK_VOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON61_HCLK_VOP_BIU_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON61_PCLK_VOP_BIU_EN_SHIFT               (7U)
#define CRU_GATE_CON61_PCLK_VOP_BIU_EN_MASK                (0x1U << CRU_GATE_CON61_PCLK_VOP_BIU_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON61_HCLK_VOP_EN_SHIFT                   (8U)
#define CRU_GATE_CON61_HCLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON61_HCLK_VOP_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON61_ACLK_VOP_EN_SHIFT                   (9U)
#define CRU_GATE_CON61_ACLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON61_ACLK_VOP_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON61_DCLK_VP0_SRC_EN_SHIFT               (10U)
#define CRU_GATE_CON61_DCLK_VP0_SRC_EN_MASK                (0x1U << CRU_GATE_CON61_DCLK_VP0_SRC_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON61_DCLK_VP1_SRC_EN_SHIFT               (11U)
#define CRU_GATE_CON61_DCLK_VP1_SRC_EN_MASK                (0x1U << CRU_GATE_CON61_DCLK_VP1_SRC_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON61_DCLK_VP2_SRC_EN_SHIFT               (12U)
#define CRU_GATE_CON61_DCLK_VP2_SRC_EN_MASK                (0x1U << CRU_GATE_CON61_DCLK_VP2_SRC_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON61_DCLK_VP0_EN_SHIFT                   (13U)
#define CRU_GATE_CON61_DCLK_VP0_EN_MASK                    (0x1U << CRU_GATE_CON61_DCLK_VP0_EN_SHIFT)                   /* 0x00002000 */
/* GATE_CON62 */
#define CRU_GATE_CON62_OFFSET                              (0x8F8U)
#define CRU_GATE_CON62_DCLK_VP1_EN_SHIFT                   (0U)
#define CRU_GATE_CON62_DCLK_VP1_EN_MASK                    (0x1U << CRU_GATE_CON62_DCLK_VP1_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON62_DCLK_VP2_EN_SHIFT                   (1U)
#define CRU_GATE_CON62_DCLK_VP2_EN_MASK                    (0x1U << CRU_GATE_CON62_DCLK_VP2_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON62_PCLK_VOP2_BIU_EN_SHIFT              (2U)
#define CRU_GATE_CON62_PCLK_VOP2_BIU_EN_MASK               (0x1U << CRU_GATE_CON62_PCLK_VOP2_BIU_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON62_PCLK_VOPGRF_EN_SHIFT                (3U)
#define CRU_GATE_CON62_PCLK_VOPGRF_EN_MASK                 (0x1U << CRU_GATE_CON62_PCLK_VOPGRF_EN_SHIFT)                /* 0x00000008 */
/* GATE_CON63 */
#define CRU_GATE_CON63_OFFSET                              (0x8FCU)
#define CRU_GATE_CON63_ACLK_VO0_ROOT_EN_SHIFT              (0U)
#define CRU_GATE_CON63_ACLK_VO0_ROOT_EN_MASK               (0x1U << CRU_GATE_CON63_ACLK_VO0_ROOT_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON63_HCLK_VO0_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON63_HCLK_VO0_ROOT_EN_MASK               (0x1U << CRU_GATE_CON63_HCLK_VO0_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON63_PCLK_VO0_ROOT_EN_SHIFT              (3U)
#define CRU_GATE_CON63_PCLK_VO0_ROOT_EN_MASK               (0x1U << CRU_GATE_CON63_PCLK_VO0_ROOT_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON63_HCLK_VO0_BIU_EN_SHIFT               (5U)
#define CRU_GATE_CON63_HCLK_VO0_BIU_EN_MASK                (0x1U << CRU_GATE_CON63_HCLK_VO0_BIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON63_PCLK_VO0_BIU_EN_SHIFT               (7U)
#define CRU_GATE_CON63_PCLK_VO0_BIU_EN_MASK                (0x1U << CRU_GATE_CON63_PCLK_VO0_BIU_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON63_ACLK_HDCP0_BIU_EN_SHIFT             (9U)
#define CRU_GATE_CON63_ACLK_HDCP0_BIU_EN_MASK              (0x1U << CRU_GATE_CON63_ACLK_HDCP0_BIU_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON63_PCLK_VO0_GRF_EN_SHIFT               (10U)
#define CRU_GATE_CON63_PCLK_VO0_GRF_EN_MASK                (0x1U << CRU_GATE_CON63_PCLK_VO0_GRF_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON63_ACLK_HDCP0_EN_SHIFT                 (12U)
#define CRU_GATE_CON63_ACLK_HDCP0_EN_MASK                  (0x1U << CRU_GATE_CON63_ACLK_HDCP0_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON63_HCLK_HDCP0_EN_SHIFT                 (13U)
#define CRU_GATE_CON63_HCLK_HDCP0_EN_MASK                  (0x1U << CRU_GATE_CON63_HCLK_HDCP0_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON63_PCLK_HDCP0_EN_SHIFT                 (14U)
#define CRU_GATE_CON63_PCLK_HDCP0_EN_MASK                  (0x1U << CRU_GATE_CON63_PCLK_HDCP0_EN_SHIFT)                 /* 0x00004000 */
/* GATE_CON64 */
#define CRU_GATE_CON64_OFFSET                              (0x900U)
#define CRU_GATE_CON64_CLK_TRNG0_SKP_EN_SHIFT              (4U)
#define CRU_GATE_CON64_CLK_TRNG0_SKP_EN_MASK               (0x1U << CRU_GATE_CON64_CLK_TRNG0_SKP_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON64_PCLK_DSIHOST0_EN_SHIFT              (5U)
#define CRU_GATE_CON64_PCLK_DSIHOST0_EN_MASK               (0x1U << CRU_GATE_CON64_PCLK_DSIHOST0_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON64_CLK_DSIHOST0_EN_SHIFT               (6U)
#define CRU_GATE_CON64_CLK_DSIHOST0_EN_MASK                (0x1U << CRU_GATE_CON64_CLK_DSIHOST0_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON64_PCLK_HDMITX0_EN_SHIFT               (7U)
#define CRU_GATE_CON64_PCLK_HDMITX0_EN_MASK                (0x1U << CRU_GATE_CON64_PCLK_HDMITX0_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON64_CLK_HDMITX0_EARC_EN_SHIFT           (8U)
#define CRU_GATE_CON64_CLK_HDMITX0_EARC_EN_MASK            (0x1U << CRU_GATE_CON64_CLK_HDMITX0_EARC_EN_SHIFT)           /* 0x00000100 */
#define CRU_GATE_CON64_CLK_HDMITX0_REF_EN_SHIFT            (9U)
#define CRU_GATE_CON64_CLK_HDMITX0_REF_EN_MASK             (0x1U << CRU_GATE_CON64_CLK_HDMITX0_REF_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON64_CLK_EXTREF_TIMEOUT_VO0_EN_SHIFT     (11U)
#define CRU_GATE_CON64_CLK_EXTREF_TIMEOUT_VO0_EN_MASK      (0x1U << CRU_GATE_CON64_CLK_EXTREF_TIMEOUT_VO0_EN_SHIFT)     /* 0x00000800 */
#define CRU_GATE_CON64_PCLK_EDP0_EN_SHIFT                  (13U)
#define CRU_GATE_CON64_PCLK_EDP0_EN_MASK                   (0x1U << CRU_GATE_CON64_PCLK_EDP0_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON64_CLK_EDP0_24M_EN_SHIFT               (14U)
#define CRU_GATE_CON64_CLK_EDP0_24M_EN_MASK                (0x1U << CRU_GATE_CON64_CLK_EDP0_24M_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON64_CLK_EDP0_200M_EN_SHIFT              (15U)
#define CRU_GATE_CON64_CLK_EDP0_200M_EN_MASK               (0x1U << CRU_GATE_CON64_CLK_EDP0_200M_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON65 */
#define CRU_GATE_CON65_OFFSET                              (0x904U)
#define CRU_GATE_CON65_MCLK_SAI5_8CH_SRC_EN_SHIFT          (3U)
#define CRU_GATE_CON65_MCLK_SAI5_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON65_MCLK_SAI5_8CH_SRC_EN_SHIFT)          /* 0x00000008 */
#define CRU_GATE_CON65_MCLK_SAI5_8CH_EN_SHIFT              (4U)
#define CRU_GATE_CON65_MCLK_SAI5_8CH_EN_MASK               (0x1U << CRU_GATE_CON65_MCLK_SAI5_8CH_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON65_HCLK_SAI5_8CH_EN_SHIFT              (5U)
#define CRU_GATE_CON65_HCLK_SAI5_8CH_EN_MASK               (0x1U << CRU_GATE_CON65_HCLK_SAI5_8CH_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON65_MCLK_SAI6_8CH_SRC_EN_SHIFT          (7U)
#define CRU_GATE_CON65_MCLK_SAI6_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON65_MCLK_SAI6_8CH_SRC_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON65_MCLK_SAI6_8CH_EN_SHIFT              (8U)
#define CRU_GATE_CON65_MCLK_SAI6_8CH_EN_MASK               (0x1U << CRU_GATE_CON65_MCLK_SAI6_8CH_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON65_HCLK_SAI6_8CH_EN_SHIFT              (9U)
#define CRU_GATE_CON65_HCLK_SAI6_8CH_EN_MASK               (0x1U << CRU_GATE_CON65_HCLK_SAI6_8CH_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON65_HCLK_SPDIF_TX2_EN_SHIFT             (10U)
#define CRU_GATE_CON65_HCLK_SPDIF_TX2_EN_MASK              (0x1U << CRU_GATE_CON65_HCLK_SPDIF_TX2_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON65_MCLK_SPDIF_TX2_EN_SHIFT             (13U)
#define CRU_GATE_CON65_MCLK_SPDIF_TX2_EN_MASK              (0x1U << CRU_GATE_CON65_MCLK_SPDIF_TX2_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON65_HCLK_SPDIFRX2_EN_SHIFT              (14U)
#define CRU_GATE_CON65_HCLK_SPDIFRX2_EN_MASK               (0x1U << CRU_GATE_CON65_HCLK_SPDIFRX2_EN_SHIFT)              /* 0x00004000 */
#define CRU_GATE_CON65_MCLK_SPDIFRX2_EN_SHIFT              (15U)
#define CRU_GATE_CON65_MCLK_SPDIFRX2_EN_MASK               (0x1U << CRU_GATE_CON65_MCLK_SPDIFRX2_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON66 */
#define CRU_GATE_CON66_OFFSET                              (0x908U)
#define CRU_GATE_CON66_HCLK_SAI8_8CH_EN_SHIFT              (0U)
#define CRU_GATE_CON66_HCLK_SAI8_8CH_EN_MASK               (0x1U << CRU_GATE_CON66_HCLK_SAI8_8CH_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON66_MCLK_SAI8_8CH_SRC_EN_SHIFT          (1U)
#define CRU_GATE_CON66_MCLK_SAI8_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON66_MCLK_SAI8_8CH_SRC_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON66_MCLK_SAI8_8CH_EN_SHIFT              (2U)
#define CRU_GATE_CON66_MCLK_SAI8_8CH_EN_MASK               (0x1U << CRU_GATE_CON66_MCLK_SAI8_8CH_EN_SHIFT)              /* 0x00000004 */
/* GATE_CON67 */
#define CRU_GATE_CON67_OFFSET                              (0x90CU)
#define CRU_GATE_CON67_ACLK_VO1_ROOT_EN_SHIFT              (1U)
#define CRU_GATE_CON67_ACLK_VO1_ROOT_EN_MASK               (0x1U << CRU_GATE_CON67_ACLK_VO1_ROOT_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON67_HCLK_VO1_ROOT_EN_SHIFT              (2U)
#define CRU_GATE_CON67_HCLK_VO1_ROOT_EN_MASK               (0x1U << CRU_GATE_CON67_HCLK_VO1_ROOT_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON67_PCLK_VO1_ROOT_EN_SHIFT              (3U)
#define CRU_GATE_CON67_PCLK_VO1_ROOT_EN_MASK               (0x1U << CRU_GATE_CON67_PCLK_VO1_ROOT_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON67_HCLK_VO1_BIU_EN_SHIFT               (5U)
#define CRU_GATE_CON67_HCLK_VO1_BIU_EN_MASK                (0x1U << CRU_GATE_CON67_HCLK_VO1_BIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON67_PCLK_VO1_BIU_EN_SHIFT               (6U)
#define CRU_GATE_CON67_PCLK_VO1_BIU_EN_MASK                (0x1U << CRU_GATE_CON67_PCLK_VO1_BIU_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON67_MCLK_SAI7_8CH_SRC_EN_SHIFT          (8U)
#define CRU_GATE_CON67_MCLK_SAI7_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON67_MCLK_SAI7_8CH_SRC_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON67_MCLK_SAI7_8CH_EN_SHIFT              (9U)
#define CRU_GATE_CON67_MCLK_SAI7_8CH_EN_MASK               (0x1U << CRU_GATE_CON67_MCLK_SAI7_8CH_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON67_HCLK_SAI7_8CH_EN_SHIFT              (10U)
#define CRU_GATE_CON67_HCLK_SAI7_8CH_EN_MASK               (0x1U << CRU_GATE_CON67_HCLK_SAI7_8CH_EN_SHIFT)              /* 0x00000400 */
#define CRU_GATE_CON67_HCLK_SPDIF_TX3_EN_SHIFT             (11U)
#define CRU_GATE_CON67_HCLK_SPDIF_TX3_EN_MASK              (0x1U << CRU_GATE_CON67_HCLK_SPDIF_TX3_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON67_HCLK_SPDIF_TX4_EN_SHIFT             (12U)
#define CRU_GATE_CON67_HCLK_SPDIF_TX4_EN_MASK              (0x1U << CRU_GATE_CON67_HCLK_SPDIF_TX4_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON67_HCLK_SPDIF_TX5_EN_SHIFT             (13U)
#define CRU_GATE_CON67_HCLK_SPDIF_TX5_EN_MASK              (0x1U << CRU_GATE_CON67_HCLK_SPDIF_TX5_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON67_MCLK_SPDIF_TX3_EN_SHIFT             (14U)
#define CRU_GATE_CON67_MCLK_SPDIF_TX3_EN_MASK              (0x1U << CRU_GATE_CON67_MCLK_SPDIF_TX3_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON67_CLK_AUX16MHZ_0_EN_SHIFT             (15U)
#define CRU_GATE_CON67_CLK_AUX16MHZ_0_EN_MASK              (0x1U << CRU_GATE_CON67_CLK_AUX16MHZ_0_EN_SHIFT)             /* 0x00008000 */
/* GATE_CON68 */
#define CRU_GATE_CON68_OFFSET                              (0x910U)
#define CRU_GATE_CON68_ACLK_DP0_EN_SHIFT                   (0U)
#define CRU_GATE_CON68_ACLK_DP0_EN_MASK                    (0x1U << CRU_GATE_CON68_ACLK_DP0_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON68_PCLK_DP0_EN_SHIFT                   (1U)
#define CRU_GATE_CON68_PCLK_DP0_EN_MASK                    (0x1U << CRU_GATE_CON68_PCLK_DP0_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON68_PCLK_VO1_GRF_EN_SHIFT               (2U)
#define CRU_GATE_CON68_PCLK_VO1_GRF_EN_MASK                (0x1U << CRU_GATE_CON68_PCLK_VO1_GRF_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON68_ACLK_HDCP1_BIU_EN_SHIFT             (3U)
#define CRU_GATE_CON68_ACLK_HDCP1_BIU_EN_MASK              (0x1U << CRU_GATE_CON68_ACLK_HDCP1_BIU_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON68_ACLK_HDCP1_EN_SHIFT                 (4U)
#define CRU_GATE_CON68_ACLK_HDCP1_EN_MASK                  (0x1U << CRU_GATE_CON68_ACLK_HDCP1_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON68_HCLK_HDCP1_EN_SHIFT                 (5U)
#define CRU_GATE_CON68_HCLK_HDCP1_EN_MASK                  (0x1U << CRU_GATE_CON68_HCLK_HDCP1_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON68_PCLK_HDCP1_EN_SHIFT                 (6U)
#define CRU_GATE_CON68_PCLK_HDCP1_EN_MASK                  (0x1U << CRU_GATE_CON68_PCLK_HDCP1_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON68_CLK_TRNG1_SKP_EN_SHIFT              (7U)
#define CRU_GATE_CON68_CLK_TRNG1_SKP_EN_MASK               (0x1U << CRU_GATE_CON68_CLK_TRNG1_SKP_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON68_HCLK_SAI9_8CH_EN_SHIFT              (9U)
#define CRU_GATE_CON68_HCLK_SAI9_8CH_EN_MASK               (0x1U << CRU_GATE_CON68_HCLK_SAI9_8CH_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON68_MCLK_SAI9_8CH_SRC_EN_SHIFT          (10U)
#define CRU_GATE_CON68_MCLK_SAI9_8CH_SRC_EN_MASK           (0x1U << CRU_GATE_CON68_MCLK_SAI9_8CH_SRC_EN_SHIFT)          /* 0x00000400 */
#define CRU_GATE_CON68_MCLK_SAI9_8CH_EN_SHIFT              (11U)
#define CRU_GATE_CON68_MCLK_SAI9_8CH_EN_MASK               (0x1U << CRU_GATE_CON68_MCLK_SAI9_8CH_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON68_MCLK_SPDIF_TX4_EN_SHIFT             (12U)
#define CRU_GATE_CON68_MCLK_SPDIF_TX4_EN_MASK              (0x1U << CRU_GATE_CON68_MCLK_SPDIF_TX4_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON68_MCLK_SPDIF_TX5_EN_SHIFT             (13U)
#define CRU_GATE_CON68_MCLK_SPDIF_TX5_EN_MASK              (0x1U << CRU_GATE_CON68_MCLK_SPDIF_TX5_EN_SHIFT)             /* 0x00002000 */
/* GATE_CON69 */
#define CRU_GATE_CON69_OFFSET                              (0x914U)
#define CRU_GATE_CON69_CLK_GPU_SRC_PRE_EN_SHIFT            (1U)
#define CRU_GATE_CON69_CLK_GPU_SRC_PRE_EN_MASK             (0x1U << CRU_GATE_CON69_CLK_GPU_SRC_PRE_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON69_CLK_GPU_INNER_EN_SHIFT              (2U)
#define CRU_GATE_CON69_CLK_GPU_INNER_EN_MASK               (0x1U << CRU_GATE_CON69_CLK_GPU_INNER_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON69_CLK_GPU_EN_SHIFT                    (3U)
#define CRU_GATE_CON69_CLK_GPU_EN_MASK                     (0x1U << CRU_GATE_CON69_CLK_GPU_EN_SHIFT)                    /* 0x00000008 */
#define CRU_GATE_CON69_CLK_GPU_PVTPLL_SRC_EN_SHIFT         (4U)
#define CRU_GATE_CON69_CLK_GPU_PVTPLL_SRC_EN_MASK          (0x1U << CRU_GATE_CON69_CLK_GPU_PVTPLL_SRC_EN_SHIFT)         /* 0x00000010 */
#define CRU_GATE_CON69_ACLK_S_GPU_BIU_EN_SHIFT             (6U)
#define CRU_GATE_CON69_ACLK_S_GPU_BIU_EN_MASK              (0x1U << CRU_GATE_CON69_ACLK_S_GPU_BIU_EN_SHIFT)             /* 0x00000040 */
#define CRU_GATE_CON69_ACLK_M0_GPU_BIU_EN_SHIFT            (7U)
#define CRU_GATE_CON69_ACLK_M0_GPU_BIU_EN_MASK             (0x1U << CRU_GATE_CON69_ACLK_M0_GPU_BIU_EN_SHIFT)            /* 0x00000080 */
#define CRU_GATE_CON69_PCLK_GPU_ROOT_EN_SHIFT              (8U)
#define CRU_GATE_CON69_PCLK_GPU_ROOT_EN_MASK               (0x1U << CRU_GATE_CON69_PCLK_GPU_ROOT_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON69_PCLK_GPU_BIU_EN_SHIFT               (9U)
#define CRU_GATE_CON69_PCLK_GPU_BIU_EN_MASK                (0x1U << CRU_GATE_CON69_PCLK_GPU_BIU_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON69_PCLK_GPU_GRF_EN_SHIFT               (13U)
#define CRU_GATE_CON69_PCLK_GPU_GRF_EN_MASK                (0x1U << CRU_GATE_CON69_PCLK_GPU_GRF_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON69_CLK_REF_PVTPLL_GPU_EN_SHIFT         (14U)
#define CRU_GATE_CON69_CLK_REF_PVTPLL_GPU_EN_MASK          (0x1U << CRU_GATE_CON69_CLK_REF_PVTPLL_GPU_EN_SHIFT)         /* 0x00004000 */
#define CRU_GATE_CON69_PCLK_PVTPLL_GPU_EN_SHIFT            (15U)
#define CRU_GATE_CON69_PCLK_PVTPLL_GPU_EN_MASK             (0x1U << CRU_GATE_CON69_PCLK_PVTPLL_GPU_EN_SHIFT)            /* 0x00008000 */
/* GATE_CON72 */
#define CRU_GATE_CON72_OFFSET                              (0x920U)
#define CRU_GATE_CON72_ACLK_CENTER_ROOT_EN_SHIFT           (0U)
#define CRU_GATE_CON72_ACLK_CENTER_ROOT_EN_MASK            (0x1U << CRU_GATE_CON72_ACLK_CENTER_ROOT_EN_SHIFT)           /* 0x00000001 */
#define CRU_GATE_CON72_ACLK_CENTER_LOW_ROOT_EN_SHIFT       (1U)
#define CRU_GATE_CON72_ACLK_CENTER_LOW_ROOT_EN_MASK        (0x1U << CRU_GATE_CON72_ACLK_CENTER_LOW_ROOT_EN_SHIFT)       /* 0x00000002 */
#define CRU_GATE_CON72_HCLK_CENTER_ROOT_EN_SHIFT           (2U)
#define CRU_GATE_CON72_HCLK_CENTER_ROOT_EN_MASK            (0x1U << CRU_GATE_CON72_HCLK_CENTER_ROOT_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON72_PCLK_CENTER_ROOT_EN_SHIFT           (3U)
#define CRU_GATE_CON72_PCLK_CENTER_ROOT_EN_MASK            (0x1U << CRU_GATE_CON72_PCLK_CENTER_ROOT_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON72_ACLK_CENTER_BIU_EN_SHIFT            (4U)
#define CRU_GATE_CON72_ACLK_CENTER_BIU_EN_MASK             (0x1U << CRU_GATE_CON72_ACLK_CENTER_BIU_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON72_ACLK_DMA2DDR_EN_SHIFT               (5U)
#define CRU_GATE_CON72_ACLK_DMA2DDR_EN_MASK                (0x1U << CRU_GATE_CON72_ACLK_DMA2DDR_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON72_ACLK_DDR_SHAREMEM_EN_SHIFT          (6U)
#define CRU_GATE_CON72_ACLK_DDR_SHAREMEM_EN_MASK           (0x1U << CRU_GATE_CON72_ACLK_DDR_SHAREMEM_EN_SHIFT)          /* 0x00000040 */
#define CRU_GATE_CON72_ACLK_DDR_SHAREMEM_BIU_EN_SHIFT      (7U)
#define CRU_GATE_CON72_ACLK_DDR_SHAREMEM_BIU_EN_MASK       (0x1U << CRU_GATE_CON72_ACLK_DDR_SHAREMEM_BIU_EN_SHIFT)      /* 0x00000080 */
#define CRU_GATE_CON72_HCLK_CENTER_BIU_EN_SHIFT            (8U)
#define CRU_GATE_CON72_HCLK_CENTER_BIU_EN_MASK             (0x1U << CRU_GATE_CON72_HCLK_CENTER_BIU_EN_SHIFT)            /* 0x00000100 */
#define CRU_GATE_CON72_PCLK_CENTER_GRF_EN_SHIFT            (9U)
#define CRU_GATE_CON72_PCLK_CENTER_GRF_EN_MASK             (0x1U << CRU_GATE_CON72_PCLK_CENTER_GRF_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON72_PCLK_DMA2DDR_EN_SHIFT               (10U)
#define CRU_GATE_CON72_PCLK_DMA2DDR_EN_MASK                (0x1U << CRU_GATE_CON72_PCLK_DMA2DDR_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON72_PCLK_SHAREMEM_EN_SHIFT              (11U)
#define CRU_GATE_CON72_PCLK_SHAREMEM_EN_MASK               (0x1U << CRU_GATE_CON72_PCLK_SHAREMEM_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON72_PCLK_CENTER_BIU_EN_SHIFT            (12U)
#define CRU_GATE_CON72_PCLK_CENTER_BIU_EN_MASK             (0x1U << CRU_GATE_CON72_PCLK_CENTER_BIU_EN_SHIFT)            /* 0x00001000 */
/* GATE_CON78 */
#define CRU_GATE_CON78_OFFSET                              (0x938U)
#define CRU_GATE_CON78_HCLK_VEPU1_ROOT_EN_SHIFT            (0U)
#define CRU_GATE_CON78_HCLK_VEPU1_ROOT_EN_MASK             (0x1U << CRU_GATE_CON78_HCLK_VEPU1_ROOT_EN_SHIFT)            /* 0x00000001 */
/* GATE_CON79 */
#define CRU_GATE_CON79_OFFSET                              (0x93CU)
#define CRU_GATE_CON79_ACLK_VEPU1_ROOT_EN_SHIFT            (0U)
#define CRU_GATE_CON79_ACLK_VEPU1_ROOT_EN_MASK             (0x1U << CRU_GATE_CON79_ACLK_VEPU1_ROOT_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON79_HCLK_VEPU1_BIU_EN_SHIFT             (1U)
#define CRU_GATE_CON79_HCLK_VEPU1_BIU_EN_MASK              (0x1U << CRU_GATE_CON79_HCLK_VEPU1_BIU_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON79_ACLK_VEPU1_BIU_EN_SHIFT             (2U)
#define CRU_GATE_CON79_ACLK_VEPU1_BIU_EN_MASK              (0x1U << CRU_GATE_CON79_ACLK_VEPU1_BIU_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON79_HCLK_VEPU1_EN_SHIFT                 (3U)
#define CRU_GATE_CON79_HCLK_VEPU1_EN_MASK                  (0x1U << CRU_GATE_CON79_HCLK_VEPU1_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON79_ACLK_VEPU1_EN_SHIFT                 (4U)
#define CRU_GATE_CON79_ACLK_VEPU1_EN_MASK                  (0x1U << CRU_GATE_CON79_ACLK_VEPU1_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON79_CLK_VEPU1_CORE_EN_SHIFT             (5U)
#define CRU_GATE_CON79_CLK_VEPU1_CORE_EN_MASK              (0x1U << CRU_GATE_CON79_CLK_VEPU1_CORE_EN_SHIFT)             /* 0x00000020 */
/* SOFTRST_CON01 */
#define CRU_SOFTRST_CON01_OFFSET                           (0xA04U)
#define CRU_SOFTRST_CON01_ARESETN_TOP_BIU_SHIFT            (3U)
#define CRU_SOFTRST_CON01_ARESETN_TOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON01_ARESETN_TOP_BIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON01_PRESETN_TOP_BIU_SHIFT            (5U)
#define CRU_SOFTRST_CON01_PRESETN_TOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON01_PRESETN_TOP_BIU_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON01_ARESETN_TOP_MID_BIU_SHIFT        (6U)
#define CRU_SOFTRST_CON01_ARESETN_TOP_MID_BIU_MASK         (0x1U << CRU_SOFTRST_CON01_ARESETN_TOP_MID_BIU_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON01_ARESETN_SECURE_HIGH_BIU_SHIFT    (7U)
#define CRU_SOFTRST_CON01_ARESETN_SECURE_HIGH_BIU_MASK     (0x1U << CRU_SOFTRST_CON01_ARESETN_SECURE_HIGH_BIU_SHIFT)    /* 0x00000080 */
#define CRU_SOFTRST_CON01_HRESETN_TOP_BIU_SHIFT            (14U)
#define CRU_SOFTRST_CON01_HRESETN_TOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON01_HRESETN_TOP_BIU_SHIFT)            /* 0x00004000 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_OFFSET                           (0xA08U)
#define CRU_SOFTRST_CON02_HRESETN_VO0VOP_CHANNEL_BIU_SHIFT (0U)
#define CRU_SOFTRST_CON02_HRESETN_VO0VOP_CHANNEL_BIU_MASK  (0x1U << CRU_SOFTRST_CON02_HRESETN_VO0VOP_CHANNEL_BIU_SHIFT) /* 0x00000001 */
#define CRU_SOFTRST_CON02_ARESETN_VO0VOP_CHANNEL_BIU_SHIFT (1U)
#define CRU_SOFTRST_CON02_ARESETN_VO0VOP_CHANNEL_BIU_MASK  (0x1U << CRU_SOFTRST_CON02_ARESETN_VO0VOP_CHANNEL_BIU_SHIFT) /* 0x00000002 */
/* SOFTRST_CON06 */
#define CRU_SOFTRST_CON06_OFFSET                           (0xA18U)
#define CRU_SOFTRST_CON06_RESETN_BISRINTF_SHIFT            (2U)
#define CRU_SOFTRST_CON06_RESETN_BISRINTF_MASK             (0x1U << CRU_SOFTRST_CON06_RESETN_BISRINTF_SHIFT)            /* 0x00000004 */
/* SOFTRST_CON07 */
#define CRU_SOFTRST_CON07_OFFSET                           (0xA1CU)
#define CRU_SOFTRST_CON07_HRESETN_AUDIO_BIU_SHIFT          (2U)
#define CRU_SOFTRST_CON07_HRESETN_AUDIO_BIU_MASK           (0x1U << CRU_SOFTRST_CON07_HRESETN_AUDIO_BIU_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_0_SHIFT         (3U)
#define CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_0_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_0_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_1_SHIFT         (4U)
#define CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_1_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_ASRC_2CH_1_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_0_SHIFT         (5U)
#define CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_0_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_0_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_1_SHIFT         (6U)
#define CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_1_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_ASRC_4CH_1_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON07_RESETN_ASRC_2CH_0_SHIFT          (7U)
#define CRU_SOFTRST_CON07_RESETN_ASRC_2CH_0_MASK           (0x1U << CRU_SOFTRST_CON07_RESETN_ASRC_2CH_0_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON07_RESETN_ASRC_2CH_1_SHIFT          (8U)
#define CRU_SOFTRST_CON07_RESETN_ASRC_2CH_1_MASK           (0x1U << CRU_SOFTRST_CON07_RESETN_ASRC_2CH_1_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON07_RESETN_ASRC_4CH_0_SHIFT          (9U)
#define CRU_SOFTRST_CON07_RESETN_ASRC_4CH_0_MASK           (0x1U << CRU_SOFTRST_CON07_RESETN_ASRC_4CH_0_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON07_RESETN_ASRC_4CH_1_SHIFT          (10U)
#define CRU_SOFTRST_CON07_RESETN_ASRC_4CH_1_MASK           (0x1U << CRU_SOFTRST_CON07_RESETN_ASRC_4CH_1_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON07_MRESETN_SAI0_8CH_SHIFT           (12U)
#define CRU_SOFTRST_CON07_MRESETN_SAI0_8CH_MASK            (0x1U << CRU_SOFTRST_CON07_MRESETN_SAI0_8CH_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON07_HRESETN_SAI0_8CH_SHIFT           (13U)
#define CRU_SOFTRST_CON07_HRESETN_SAI0_8CH_MASK            (0x1U << CRU_SOFTRST_CON07_HRESETN_SAI0_8CH_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON07_HRESETN_SPDIFRX0_SHIFT           (14U)
#define CRU_SOFTRST_CON07_HRESETN_SPDIFRX0_MASK            (0x1U << CRU_SOFTRST_CON07_HRESETN_SPDIFRX0_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON07_MRESETN_SPDIFRX0_SHIFT           (15U)
#define CRU_SOFTRST_CON07_MRESETN_SPDIFRX0_MASK            (0x1U << CRU_SOFTRST_CON07_MRESETN_SPDIFRX0_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON08 */
#define CRU_SOFTRST_CON08_OFFSET                           (0xA20U)
#define CRU_SOFTRST_CON08_HRESETN_SPDIFRX1_SHIFT           (0U)
#define CRU_SOFTRST_CON08_HRESETN_SPDIFRX1_MASK            (0x1U << CRU_SOFTRST_CON08_HRESETN_SPDIFRX1_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON08_MRESETN_SPDIFRX1_SHIFT           (1U)
#define CRU_SOFTRST_CON08_MRESETN_SPDIFRX1_MASK            (0x1U << CRU_SOFTRST_CON08_MRESETN_SPDIFRX1_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON08_MRESETN_SAI1_8CH_SHIFT           (5U)
#define CRU_SOFTRST_CON08_MRESETN_SAI1_8CH_MASK            (0x1U << CRU_SOFTRST_CON08_MRESETN_SAI1_8CH_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON08_HRESETN_SAI1_8CH_SHIFT           (6U)
#define CRU_SOFTRST_CON08_HRESETN_SAI1_8CH_MASK            (0x1U << CRU_SOFTRST_CON08_HRESETN_SAI1_8CH_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON08_MRESETN_SAI2_2CH_SHIFT           (8U)
#define CRU_SOFTRST_CON08_MRESETN_SAI2_2CH_MASK            (0x1U << CRU_SOFTRST_CON08_MRESETN_SAI2_2CH_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON08_HRESETN_SAI2_2CH_SHIFT           (10U)
#define CRU_SOFTRST_CON08_HRESETN_SAI2_2CH_MASK            (0x1U << CRU_SOFTRST_CON08_HRESETN_SAI2_2CH_SHIFT)           /* 0x00000400 */
#define CRU_SOFTRST_CON08_MRESETN_SAI3_2CH_SHIFT           (12U)
#define CRU_SOFTRST_CON08_MRESETN_SAI3_2CH_MASK            (0x1U << CRU_SOFTRST_CON08_MRESETN_SAI3_2CH_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON08_HRESETN_SAI3_2CH_SHIFT           (14U)
#define CRU_SOFTRST_CON08_HRESETN_SAI3_2CH_MASK            (0x1U << CRU_SOFTRST_CON08_HRESETN_SAI3_2CH_SHIFT)           /* 0x00004000 */
/* SOFTRST_CON09 */
#define CRU_SOFTRST_CON09_OFFSET                           (0xA24U)
#define CRU_SOFTRST_CON09_MRESETN_SAI4_2CH_SHIFT           (0U)
#define CRU_SOFTRST_CON09_MRESETN_SAI4_2CH_MASK            (0x1U << CRU_SOFTRST_CON09_MRESETN_SAI4_2CH_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON09_HRESETN_SAI4_2CH_SHIFT           (2U)
#define CRU_SOFTRST_CON09_HRESETN_SAI4_2CH_MASK            (0x1U << CRU_SOFTRST_CON09_HRESETN_SAI4_2CH_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON09_HRESETN_ACDCDIG_DSM_SHIFT        (3U)
#define CRU_SOFTRST_CON09_HRESETN_ACDCDIG_DSM_MASK         (0x1U << CRU_SOFTRST_CON09_HRESETN_ACDCDIG_DSM_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON09_MRESETN_ACDCDIG_DSM_SHIFT        (4U)
#define CRU_SOFTRST_CON09_MRESETN_ACDCDIG_DSM_MASK         (0x1U << CRU_SOFTRST_CON09_MRESETN_ACDCDIG_DSM_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON09_RESETN_PDM1_SHIFT                (5U)
#define CRU_SOFTRST_CON09_RESETN_PDM1_MASK                 (0x1U << CRU_SOFTRST_CON09_RESETN_PDM1_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON09_HRESETN_PDM1_SHIFT               (7U)
#define CRU_SOFTRST_CON09_HRESETN_PDM1_MASK                (0x1U << CRU_SOFTRST_CON09_HRESETN_PDM1_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON09_MRESETN_PDM1_SHIFT               (8U)
#define CRU_SOFTRST_CON09_MRESETN_PDM1_MASK                (0x1U << CRU_SOFTRST_CON09_MRESETN_PDM1_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON09_HRESETN_SPDIF_TX0_SHIFT          (9U)
#define CRU_SOFTRST_CON09_HRESETN_SPDIF_TX0_MASK           (0x1U << CRU_SOFTRST_CON09_HRESETN_SPDIF_TX0_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON09_MRESETN_SPDIF_TX0_SHIFT          (10U)
#define CRU_SOFTRST_CON09_MRESETN_SPDIF_TX0_MASK           (0x1U << CRU_SOFTRST_CON09_MRESETN_SPDIF_TX0_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON09_HRESETN_SPDIF_TX1_SHIFT          (11U)
#define CRU_SOFTRST_CON09_HRESETN_SPDIF_TX1_MASK           (0x1U << CRU_SOFTRST_CON09_HRESETN_SPDIF_TX1_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON09_MRESETN_SPDIF_TX1_SHIFT          (12U)
#define CRU_SOFTRST_CON09_MRESETN_SPDIF_TX1_MASK           (0x1U << CRU_SOFTRST_CON09_MRESETN_SPDIF_TX1_SHIFT)          /* 0x00001000 */
/* SOFTRST_CON11 */
#define CRU_SOFTRST_CON11_OFFSET                           (0xA2CU)
#define CRU_SOFTRST_CON11_ARESETN_BUS_BIU_SHIFT            (3U)
#define CRU_SOFTRST_CON11_ARESETN_BUS_BIU_MASK             (0x1U << CRU_SOFTRST_CON11_ARESETN_BUS_BIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON11_PRESETN_BUS_BIU_SHIFT            (4U)
#define CRU_SOFTRST_CON11_PRESETN_BUS_BIU_MASK             (0x1U << CRU_SOFTRST_CON11_PRESETN_BUS_BIU_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON11_PRESETN_CRU_SHIFT                (5U)
#define CRU_SOFTRST_CON11_PRESETN_CRU_MASK                 (0x1U << CRU_SOFTRST_CON11_PRESETN_CRU_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON11_HRESETN_CAN0_SHIFT               (6U)
#define CRU_SOFTRST_CON11_HRESETN_CAN0_MASK                (0x1U << CRU_SOFTRST_CON11_HRESETN_CAN0_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON11_RESETN_CAN0_SHIFT                (7U)
#define CRU_SOFTRST_CON11_RESETN_CAN0_MASK                 (0x1U << CRU_SOFTRST_CON11_RESETN_CAN0_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON11_HRESETN_CAN1_SHIFT               (8U)
#define CRU_SOFTRST_CON11_HRESETN_CAN1_MASK                (0x1U << CRU_SOFTRST_CON11_HRESETN_CAN1_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON11_RESETN_CAN1_SHIFT                (9U)
#define CRU_SOFTRST_CON11_RESETN_CAN1_MASK                 (0x1U << CRU_SOFTRST_CON11_RESETN_CAN1_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON11_PRESETN_INTMUX2BUS_SHIFT         (12U)
#define CRU_SOFTRST_CON11_PRESETN_INTMUX2BUS_MASK          (0x1U << CRU_SOFTRST_CON11_PRESETN_INTMUX2BUS_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON11_PRESETN_VCCIO_IOC_SHIFT          (13U)
#define CRU_SOFTRST_CON11_PRESETN_VCCIO_IOC_MASK           (0x1U << CRU_SOFTRST_CON11_PRESETN_VCCIO_IOC_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON11_HRESETN_BUS_BIU_SHIFT            (14U)
#define CRU_SOFTRST_CON11_HRESETN_BUS_BIU_MASK             (0x1U << CRU_SOFTRST_CON11_HRESETN_BUS_BIU_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON11_RESETN_KEY_SHIFT_SHIFT           (15U)
#define CRU_SOFTRST_CON11_RESETN_KEY_SHIFT_MASK            (0x1U << CRU_SOFTRST_CON11_RESETN_KEY_SHIFT_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON12 */
#define CRU_SOFTRST_CON12_OFFSET                           (0xA30U)
#define CRU_SOFTRST_CON12_PRESETN_I2C1_SHIFT               (0U)
#define CRU_SOFTRST_CON12_PRESETN_I2C1_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C1_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON12_PRESETN_I2C2_SHIFT               (1U)
#define CRU_SOFTRST_CON12_PRESETN_I2C2_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C2_SHIFT)               /* 0x00000002 */
#define CRU_SOFTRST_CON12_PRESETN_I2C3_SHIFT               (2U)
#define CRU_SOFTRST_CON12_PRESETN_I2C3_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C3_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON12_PRESETN_I2C4_SHIFT               (3U)
#define CRU_SOFTRST_CON12_PRESETN_I2C4_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C4_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON12_PRESETN_I2C5_SHIFT               (4U)
#define CRU_SOFTRST_CON12_PRESETN_I2C5_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C5_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON12_PRESETN_I2C6_SHIFT               (5U)
#define CRU_SOFTRST_CON12_PRESETN_I2C6_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C6_SHIFT)               /* 0x00000020 */
#define CRU_SOFTRST_CON12_PRESETN_I2C7_SHIFT               (6U)
#define CRU_SOFTRST_CON12_PRESETN_I2C7_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C7_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON12_PRESETN_I2C8_SHIFT               (7U)
#define CRU_SOFTRST_CON12_PRESETN_I2C8_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C8_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON12_PRESETN_I2C9_SHIFT               (8U)
#define CRU_SOFTRST_CON12_PRESETN_I2C9_MASK                (0x1U << CRU_SOFTRST_CON12_PRESETN_I2C9_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON12_PRESETN_WDT_BUSMCU_SHIFT         (9U)
#define CRU_SOFTRST_CON12_PRESETN_WDT_BUSMCU_MASK          (0x1U << CRU_SOFTRST_CON12_PRESETN_WDT_BUSMCU_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON12_TRESETN_WDT_BUSMCU_SHIFT         (10U)
#define CRU_SOFTRST_CON12_TRESETN_WDT_BUSMCU_MASK          (0x1U << CRU_SOFTRST_CON12_TRESETN_WDT_BUSMCU_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON12_ARESETN_GIC_SHIFT                (11U)
#define CRU_SOFTRST_CON12_ARESETN_GIC_MASK                 (0x1U << CRU_SOFTRST_CON12_ARESETN_GIC_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON12_RESETN_I2C1_SHIFT                (12U)
#define CRU_SOFTRST_CON12_RESETN_I2C1_MASK                 (0x1U << CRU_SOFTRST_CON12_RESETN_I2C1_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON12_RESETN_I2C2_SHIFT                (13U)
#define CRU_SOFTRST_CON12_RESETN_I2C2_MASK                 (0x1U << CRU_SOFTRST_CON12_RESETN_I2C2_SHIFT)                /* 0x00002000 */
#define CRU_SOFTRST_CON12_RESETN_I2C3_SHIFT                (14U)
#define CRU_SOFTRST_CON12_RESETN_I2C3_MASK                 (0x1U << CRU_SOFTRST_CON12_RESETN_I2C3_SHIFT)                /* 0x00004000 */
#define CRU_SOFTRST_CON12_RESETN_I2C4_SHIFT                (15U)
#define CRU_SOFTRST_CON12_RESETN_I2C4_MASK                 (0x1U << CRU_SOFTRST_CON12_RESETN_I2C4_SHIFT)                /* 0x00008000 */
/* SOFTRST_CON13 */
#define CRU_SOFTRST_CON13_OFFSET                           (0xA34U)
#define CRU_SOFTRST_CON13_RESETN_I2C5_SHIFT                (0U)
#define CRU_SOFTRST_CON13_RESETN_I2C5_MASK                 (0x1U << CRU_SOFTRST_CON13_RESETN_I2C5_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON13_RESETN_I2C6_SHIFT                (1U)
#define CRU_SOFTRST_CON13_RESETN_I2C6_MASK                 (0x1U << CRU_SOFTRST_CON13_RESETN_I2C6_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON13_RESETN_I2C7_SHIFT                (2U)
#define CRU_SOFTRST_CON13_RESETN_I2C7_MASK                 (0x1U << CRU_SOFTRST_CON13_RESETN_I2C7_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON13_RESETN_I2C8_SHIFT                (3U)
#define CRU_SOFTRST_CON13_RESETN_I2C8_MASK                 (0x1U << CRU_SOFTRST_CON13_RESETN_I2C8_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON13_RESETN_I2C9_SHIFT                (4U)
#define CRU_SOFTRST_CON13_RESETN_I2C9_MASK                 (0x1U << CRU_SOFTRST_CON13_RESETN_I2C9_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON13_PRESETN_SARADC_SHIFT             (6U)
#define CRU_SOFTRST_CON13_PRESETN_SARADC_MASK              (0x1U << CRU_SOFTRST_CON13_PRESETN_SARADC_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON13_RESETN_SARADC_SHIFT              (7U)
#define CRU_SOFTRST_CON13_RESETN_SARADC_MASK               (0x1U << CRU_SOFTRST_CON13_RESETN_SARADC_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON13_PRESETN_TSADC_SHIFT              (8U)
#define CRU_SOFTRST_CON13_PRESETN_TSADC_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_TSADC_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON13_RESETN_TSADC_SHIFT               (9U)
#define CRU_SOFTRST_CON13_RESETN_TSADC_MASK                (0x1U << CRU_SOFTRST_CON13_RESETN_TSADC_SHIFT)               /* 0x00000200 */
#define CRU_SOFTRST_CON13_PRESETN_UART0_SHIFT              (10U)
#define CRU_SOFTRST_CON13_PRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART0_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON13_PRESETN_UART2_SHIFT              (11U)
#define CRU_SOFTRST_CON13_PRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART2_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON13_PRESETN_UART3_SHIFT              (12U)
#define CRU_SOFTRST_CON13_PRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART3_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON13_PRESETN_UART4_SHIFT              (13U)
#define CRU_SOFTRST_CON13_PRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART4_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON13_PRESETN_UART5_SHIFT              (14U)
#define CRU_SOFTRST_CON13_PRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART5_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON13_PRESETN_UART6_SHIFT              (15U)
#define CRU_SOFTRST_CON13_PRESETN_UART6_MASK               (0x1U << CRU_SOFTRST_CON13_PRESETN_UART6_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON14 */
#define CRU_SOFTRST_CON14_OFFSET                           (0xA38U)
#define CRU_SOFTRST_CON14_PRESETN_UART7_SHIFT              (0U)
#define CRU_SOFTRST_CON14_PRESETN_UART7_MASK               (0x1U << CRU_SOFTRST_CON14_PRESETN_UART7_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON14_PRESETN_UART8_SHIFT              (1U)
#define CRU_SOFTRST_CON14_PRESETN_UART8_MASK               (0x1U << CRU_SOFTRST_CON14_PRESETN_UART8_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON14_PRESETN_UART9_SHIFT              (2U)
#define CRU_SOFTRST_CON14_PRESETN_UART9_MASK               (0x1U << CRU_SOFTRST_CON14_PRESETN_UART9_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON14_PRESETN_UART10_SHIFT             (3U)
#define CRU_SOFTRST_CON14_PRESETN_UART10_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_UART10_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON14_PRESETN_UART11_SHIFT             (4U)
#define CRU_SOFTRST_CON14_PRESETN_UART11_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_UART11_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON14_SRESETN_UART0_SHIFT              (5U)
#define CRU_SOFTRST_CON14_SRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON14_SRESETN_UART0_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON14_SRESETN_UART2_SHIFT              (6U)
#define CRU_SOFTRST_CON14_SRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON14_SRESETN_UART2_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON14_SRESETN_UART3_SHIFT              (9U)
#define CRU_SOFTRST_CON14_SRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON14_SRESETN_UART3_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON14_SRESETN_UART4_SHIFT              (12U)
#define CRU_SOFTRST_CON14_SRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON14_SRESETN_UART4_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON14_SRESETN_UART5_SHIFT              (15U)
#define CRU_SOFTRST_CON14_SRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON14_SRESETN_UART5_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON15 */
#define CRU_SOFTRST_CON15_OFFSET                           (0xA3CU)
#define CRU_SOFTRST_CON15_SRESETN_UART6_SHIFT              (2U)
#define CRU_SOFTRST_CON15_SRESETN_UART6_MASK               (0x1U << CRU_SOFTRST_CON15_SRESETN_UART6_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON15_SRESETN_UART7_SHIFT              (5U)
#define CRU_SOFTRST_CON15_SRESETN_UART7_MASK               (0x1U << CRU_SOFTRST_CON15_SRESETN_UART7_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON15_SRESETN_UART8_SHIFT              (8U)
#define CRU_SOFTRST_CON15_SRESETN_UART8_MASK               (0x1U << CRU_SOFTRST_CON15_SRESETN_UART8_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON15_SRESETN_UART9_SHIFT              (9U)
#define CRU_SOFTRST_CON15_SRESETN_UART9_MASK               (0x1U << CRU_SOFTRST_CON15_SRESETN_UART9_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON15_SRESETN_UART10_SHIFT             (10U)
#define CRU_SOFTRST_CON15_SRESETN_UART10_MASK              (0x1U << CRU_SOFTRST_CON15_SRESETN_UART10_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON15_SRESETN_UART11_SHIFT             (11U)
#define CRU_SOFTRST_CON15_SRESETN_UART11_MASK              (0x1U << CRU_SOFTRST_CON15_SRESETN_UART11_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON15_PRESETN_SPI0_SHIFT               (13U)
#define CRU_SOFTRST_CON15_PRESETN_SPI0_MASK                (0x1U << CRU_SOFTRST_CON15_PRESETN_SPI0_SHIFT)               /* 0x00002000 */
#define CRU_SOFTRST_CON15_PRESETN_SPI1_SHIFT               (14U)
#define CRU_SOFTRST_CON15_PRESETN_SPI1_MASK                (0x1U << CRU_SOFTRST_CON15_PRESETN_SPI1_SHIFT)               /* 0x00004000 */
#define CRU_SOFTRST_CON15_PRESETN_SPI2_SHIFT               (15U)
#define CRU_SOFTRST_CON15_PRESETN_SPI2_MASK                (0x1U << CRU_SOFTRST_CON15_PRESETN_SPI2_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON16 */
#define CRU_SOFTRST_CON16_OFFSET                           (0xA40U)
#define CRU_SOFTRST_CON16_PRESETN_SPI3_SHIFT               (0U)
#define CRU_SOFTRST_CON16_PRESETN_SPI3_MASK                (0x1U << CRU_SOFTRST_CON16_PRESETN_SPI3_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON16_PRESETN_SPI4_SHIFT               (1U)
#define CRU_SOFTRST_CON16_PRESETN_SPI4_MASK                (0x1U << CRU_SOFTRST_CON16_PRESETN_SPI4_SHIFT)               /* 0x00000002 */
#define CRU_SOFTRST_CON16_RESETN_SPI0_SHIFT                (2U)
#define CRU_SOFTRST_CON16_RESETN_SPI0_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_SPI0_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON16_RESETN_SPI1_SHIFT                (3U)
#define CRU_SOFTRST_CON16_RESETN_SPI1_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_SPI1_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON16_RESETN_SPI2_SHIFT                (4U)
#define CRU_SOFTRST_CON16_RESETN_SPI2_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_SPI2_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON16_RESETN_SPI3_SHIFT                (5U)
#define CRU_SOFTRST_CON16_RESETN_SPI3_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_SPI3_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON16_RESETN_SPI4_SHIFT                (6U)
#define CRU_SOFTRST_CON16_RESETN_SPI4_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_SPI4_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON16_PRESETN_WDT0_SHIFT               (7U)
#define CRU_SOFTRST_CON16_PRESETN_WDT0_MASK                (0x1U << CRU_SOFTRST_CON16_PRESETN_WDT0_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON16_TRESETN_WDT0_SHIFT               (8U)
#define CRU_SOFTRST_CON16_TRESETN_WDT0_MASK                (0x1U << CRU_SOFTRST_CON16_TRESETN_WDT0_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON16_PRESETN_SYS_GRF_SHIFT            (9U)
#define CRU_SOFTRST_CON16_PRESETN_SYS_GRF_MASK             (0x1U << CRU_SOFTRST_CON16_PRESETN_SYS_GRF_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON16_PRESETN_PWM1_SHIFT               (10U)
#define CRU_SOFTRST_CON16_PRESETN_PWM1_MASK                (0x1U << CRU_SOFTRST_CON16_PRESETN_PWM1_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON16_RESETN_PWM1_SHIFT                (11U)
#define CRU_SOFTRST_CON16_RESETN_PWM1_MASK                 (0x1U << CRU_SOFTRST_CON16_RESETN_PWM1_SHIFT)                /* 0x00000800 */
/* SOFTRST_CON17 */
#define CRU_SOFTRST_CON17_OFFSET                           (0xA44U)
#define CRU_SOFTRST_CON17_PRESETN_BUSTIMER0_SHIFT          (3U)
#define CRU_SOFTRST_CON17_PRESETN_BUSTIMER0_MASK           (0x1U << CRU_SOFTRST_CON17_PRESETN_BUSTIMER0_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON17_PRESETN_BUSTIMER1_SHIFT          (4U)
#define CRU_SOFTRST_CON17_PRESETN_BUSTIMER1_MASK           (0x1U << CRU_SOFTRST_CON17_PRESETN_BUSTIMER1_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON17_RESETN_TIMER0_SHIFT              (6U)
#define CRU_SOFTRST_CON17_RESETN_TIMER0_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER0_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON17_RESETN_TIMER1_SHIFT              (7U)
#define CRU_SOFTRST_CON17_RESETN_TIMER1_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER1_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON17_RESETN_TIMER2_SHIFT              (8U)
#define CRU_SOFTRST_CON17_RESETN_TIMER2_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER2_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON17_RESETN_TIMER3_SHIFT              (9U)
#define CRU_SOFTRST_CON17_RESETN_TIMER3_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER3_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON17_RESETN_TIMER4_SHIFT              (10U)
#define CRU_SOFTRST_CON17_RESETN_TIMER4_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER4_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON17_RESETN_TIMER5_SHIFT              (11U)
#define CRU_SOFTRST_CON17_RESETN_TIMER5_MASK               (0x1U << CRU_SOFTRST_CON17_RESETN_TIMER5_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON17_PRESETN_BUSIOC_SHIFT             (12U)
#define CRU_SOFTRST_CON17_PRESETN_BUSIOC_MASK              (0x1U << CRU_SOFTRST_CON17_PRESETN_BUSIOC_SHIFT)             /* 0x00001000 */
#define CRU_SOFTRST_CON17_PRESETN_MAILBOX0_SHIFT           (13U)
#define CRU_SOFTRST_CON17_PRESETN_MAILBOX0_MASK            (0x1U << CRU_SOFTRST_CON17_PRESETN_MAILBOX0_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON17_PRESETN_GPIO1_SHIFT              (15U)
#define CRU_SOFTRST_CON17_PRESETN_GPIO1_MASK               (0x1U << CRU_SOFTRST_CON17_PRESETN_GPIO1_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON18 */
#define CRU_SOFTRST_CON18_OFFSET                           (0xA48U)
#define CRU_SOFTRST_CON18_DBRESETN_GPIO1_SHIFT             (0U)
#define CRU_SOFTRST_CON18_DBRESETN_GPIO1_MASK              (0x1U << CRU_SOFTRST_CON18_DBRESETN_GPIO1_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON18_PRESETN_GPIO2_SHIFT              (1U)
#define CRU_SOFTRST_CON18_PRESETN_GPIO2_MASK               (0x1U << CRU_SOFTRST_CON18_PRESETN_GPIO2_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON18_DBRESETN_GPIO2_SHIFT             (2U)
#define CRU_SOFTRST_CON18_DBRESETN_GPIO2_MASK              (0x1U << CRU_SOFTRST_CON18_DBRESETN_GPIO2_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON18_PRESETN_GPIO3_SHIFT              (3U)
#define CRU_SOFTRST_CON18_PRESETN_GPIO3_MASK               (0x1U << CRU_SOFTRST_CON18_PRESETN_GPIO3_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON18_DBRESETN_GPIO3_SHIFT             (4U)
#define CRU_SOFTRST_CON18_DBRESETN_GPIO3_MASK              (0x1U << CRU_SOFTRST_CON18_DBRESETN_GPIO3_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON18_PRESETN_GPIO4_SHIFT              (5U)
#define CRU_SOFTRST_CON18_PRESETN_GPIO4_MASK               (0x1U << CRU_SOFTRST_CON18_PRESETN_GPIO4_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON18_DBRESETN_GPIO4_SHIFT             (6U)
#define CRU_SOFTRST_CON18_DBRESETN_GPIO4_MASK              (0x1U << CRU_SOFTRST_CON18_DBRESETN_GPIO4_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON18_ARESETN_DECOM_SHIFT              (7U)
#define CRU_SOFTRST_CON18_ARESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON18_ARESETN_DECOM_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON18_PRESETN_DECOM_SHIFT              (8U)
#define CRU_SOFTRST_CON18_PRESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON18_PRESETN_DECOM_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON18_DRESETN_DECOM_SHIFT              (9U)
#define CRU_SOFTRST_CON18_DRESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON18_DRESETN_DECOM_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON18_RESETN_TIMER6_SHIFT              (11U)
#define CRU_SOFTRST_CON18_RESETN_TIMER6_MASK               (0x1U << CRU_SOFTRST_CON18_RESETN_TIMER6_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON18_RESETN_TIMER7_SHIFT              (12U)
#define CRU_SOFTRST_CON18_RESETN_TIMER7_MASK               (0x1U << CRU_SOFTRST_CON18_RESETN_TIMER7_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON18_RESETN_TIMER8_SHIFT              (13U)
#define CRU_SOFTRST_CON18_RESETN_TIMER8_MASK               (0x1U << CRU_SOFTRST_CON18_RESETN_TIMER8_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON18_RESETN_TIMER9_SHIFT              (14U)
#define CRU_SOFTRST_CON18_RESETN_TIMER9_MASK               (0x1U << CRU_SOFTRST_CON18_RESETN_TIMER9_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON18_RESETN_TIMER10_SHIFT             (15U)
#define CRU_SOFTRST_CON18_RESETN_TIMER10_MASK              (0x1U << CRU_SOFTRST_CON18_RESETN_TIMER10_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON19 */
#define CRU_SOFTRST_CON19_OFFSET                           (0xA4CU)
#define CRU_SOFTRST_CON19_RESETN_TIMER11_SHIFT             (0U)
#define CRU_SOFTRST_CON19_RESETN_TIMER11_MASK              (0x1U << CRU_SOFTRST_CON19_RESETN_TIMER11_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON19_ARESETN_DMAC0_SHIFT              (1U)
#define CRU_SOFTRST_CON19_ARESETN_DMAC0_MASK               (0x1U << CRU_SOFTRST_CON19_ARESETN_DMAC0_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON19_ARESETN_DMAC1_SHIFT              (2U)
#define CRU_SOFTRST_CON19_ARESETN_DMAC1_MASK               (0x1U << CRU_SOFTRST_CON19_ARESETN_DMAC1_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON19_ARESETN_DMAC2_SHIFT              (3U)
#define CRU_SOFTRST_CON19_ARESETN_DMAC2_MASK               (0x1U << CRU_SOFTRST_CON19_ARESETN_DMAC2_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON19_ARESETN_SPINLOCK_SHIFT           (4U)
#define CRU_SOFTRST_CON19_ARESETN_SPINLOCK_MASK            (0x1U << CRU_SOFTRST_CON19_ARESETN_SPINLOCK_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON19_RESETN_REF_PVTPLL_BUS_SHIFT      (5U)
#define CRU_SOFTRST_CON19_RESETN_REF_PVTPLL_BUS_MASK       (0x1U << CRU_SOFTRST_CON19_RESETN_REF_PVTPLL_BUS_SHIFT)      /* 0x00000020 */
#define CRU_SOFTRST_CON19_HRESETN_I3C0_SHIFT               (7U)
#define CRU_SOFTRST_CON19_HRESETN_I3C0_MASK                (0x1U << CRU_SOFTRST_CON19_HRESETN_I3C0_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON19_HRESETN_I3C1_SHIFT               (9U)
#define CRU_SOFTRST_CON19_HRESETN_I3C1_MASK                (0x1U << CRU_SOFTRST_CON19_HRESETN_I3C1_SHIFT)               /* 0x00000200 */
#define CRU_SOFTRST_CON19_HRESETN_BUS_CM0_BIU_SHIFT        (11U)
#define CRU_SOFTRST_CON19_HRESETN_BUS_CM0_BIU_MASK         (0x1U << CRU_SOFTRST_CON19_HRESETN_BUS_CM0_BIU_SHIFT)        /* 0x00000800 */
#define CRU_SOFTRST_CON19_FRESETN_BUS_CM0_CORE_SHIFT       (12U)
#define CRU_SOFTRST_CON19_FRESETN_BUS_CM0_CORE_MASK        (0x1U << CRU_SOFTRST_CON19_FRESETN_BUS_CM0_CORE_SHIFT)       /* 0x00001000 */
#define CRU_SOFTRST_CON19_TRESETN_BUS_CM0_JTAG_SHIFT       (13U)
#define CRU_SOFTRST_CON19_TRESETN_BUS_CM0_JTAG_MASK        (0x1U << CRU_SOFTRST_CON19_TRESETN_BUS_CM0_JTAG_SHIFT)       /* 0x00002000 */
/* SOFTRST_CON20 */
#define CRU_SOFTRST_CON20_OFFSET                           (0xA50U)
#define CRU_SOFTRST_CON20_PRESETN_INTMUX2PMU_SHIFT         (0U)
#define CRU_SOFTRST_CON20_PRESETN_INTMUX2PMU_MASK          (0x1U << CRU_SOFTRST_CON20_PRESETN_INTMUX2PMU_SHIFT)         /* 0x00000001 */
#define CRU_SOFTRST_CON20_PRESETN_INTMUX2DDR_SHIFT         (1U)
#define CRU_SOFTRST_CON20_PRESETN_INTMUX2DDR_MASK          (0x1U << CRU_SOFTRST_CON20_PRESETN_INTMUX2DDR_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON20_PRESETN_PVTPLL_BUS_SHIFT         (3U)
#define CRU_SOFTRST_CON20_PRESETN_PVTPLL_BUS_MASK          (0x1U << CRU_SOFTRST_CON20_PRESETN_PVTPLL_BUS_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON20_PRESETN_PWM2_SHIFT               (4U)
#define CRU_SOFTRST_CON20_PRESETN_PWM2_MASK                (0x1U << CRU_SOFTRST_CON20_PRESETN_PWM2_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON20_RESETN_PWM2_SHIFT                (5U)
#define CRU_SOFTRST_CON20_RESETN_PWM2_MASK                 (0x1U << CRU_SOFTRST_CON20_RESETN_PWM2_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON20_RESETN_FREQ_PWM1_SHIFT           (8U)
#define CRU_SOFTRST_CON20_RESETN_FREQ_PWM1_MASK            (0x1U << CRU_SOFTRST_CON20_RESETN_FREQ_PWM1_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON20_RESETN_COUNTER_PWM1_SHIFT        (9U)
#define CRU_SOFTRST_CON20_RESETN_COUNTER_PWM1_MASK         (0x1U << CRU_SOFTRST_CON20_RESETN_COUNTER_PWM1_SHIFT)        /* 0x00000200 */
#define CRU_SOFTRST_CON20_RESETN_I3C0_SHIFT                (12U)
#define CRU_SOFTRST_CON20_RESETN_I3C0_MASK                 (0x1U << CRU_SOFTRST_CON20_RESETN_I3C0_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON20_RESETN_I3C1_SHIFT                (13U)
#define CRU_SOFTRST_CON20_RESETN_I3C1_MASK                 (0x1U << CRU_SOFTRST_CON20_RESETN_I3C1_SHIFT)                /* 0x00002000 */
/* SOFTRST_CON21 */
#define CRU_SOFTRST_CON21_OFFSET                           (0xA54U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH0_SHIFT        (1U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH0_MASK         (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH0_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON21_PRESETN_DDR_BIU_SHIFT            (2U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_BIU_MASK             (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_BIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON21_PRESETN_DDR_UPCTL_CH0_SHIFT      (3U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_UPCTL_CH0_MASK       (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_UPCTL_CH0_SHIFT)      /* 0x00000008 */
#define CRU_SOFTRST_CON21_TMRESETN_DDR_MON_CH0_SHIFT       (4U)
#define CRU_SOFTRST_CON21_TMRESETN_DDR_MON_CH0_MASK        (0x1U << CRU_SOFTRST_CON21_TMRESETN_DDR_MON_CH0_SHIFT)       /* 0x00000010 */
#define CRU_SOFTRST_CON21_ARESETN_DDR_BIU_SHIFT            (5U)
#define CRU_SOFTRST_CON21_ARESETN_DDR_BIU_MASK             (0x1U << CRU_SOFTRST_CON21_ARESETN_DDR_BIU_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON21_RESETN_DFI_CH0_SHIFT             (6U)
#define CRU_SOFTRST_CON21_RESETN_DFI_CH0_MASK              (0x1U << CRU_SOFTRST_CON21_RESETN_DFI_CH0_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON21_RESETN_DDR_MON_CH0_SHIFT         (10U)
#define CRU_SOFTRST_CON21_RESETN_DDR_MON_CH0_MASK          (0x1U << CRU_SOFTRST_CON21_RESETN_DDR_MON_CH0_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH0_SHIFT       (13U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH0_MASK        (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH0_SHIFT)       /* 0x00002000 */
#define CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH1_SHIFT        (14U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH1_MASK         (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_MON_CH1_SHIFT)        /* 0x00004000 */
#define CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH1_SHIFT       (15U)
#define CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH1_MASK        (0x1U << CRU_SOFTRST_CON21_PRESETN_DDR_HWLP_CH1_SHIFT)       /* 0x00008000 */
/* SOFTRST_CON22 */
#define CRU_SOFTRST_CON22_OFFSET                           (0xA58U)
#define CRU_SOFTRST_CON22_PRESETN_DDR_UPCTL_CH1_SHIFT      (0U)
#define CRU_SOFTRST_CON22_PRESETN_DDR_UPCTL_CH1_MASK       (0x1U << CRU_SOFTRST_CON22_PRESETN_DDR_UPCTL_CH1_SHIFT)      /* 0x00000001 */
#define CRU_SOFTRST_CON22_TMRESETN_DDR_MON_CH1_SHIFT       (1U)
#define CRU_SOFTRST_CON22_TMRESETN_DDR_MON_CH1_MASK        (0x1U << CRU_SOFTRST_CON22_TMRESETN_DDR_MON_CH1_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON22_RESETN_DFI_CH1_SHIFT             (2U)
#define CRU_SOFTRST_CON22_RESETN_DFI_CH1_MASK              (0x1U << CRU_SOFTRST_CON22_RESETN_DFI_CH1_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH0_SHIFT        (3U)
#define CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH0_MASK         (0x1U << CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH0_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH1_SHIFT        (4U)
#define CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH1_MASK         (0x1U << CRU_SOFTRST_CON22_ARESETN_DDR01_MSCH1_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON22_RESETN_DDR_MON_CH1_SHIFT         (6U)
#define CRU_SOFTRST_CON22_RESETN_DDR_MON_CH1_MASK          (0x1U << CRU_SOFTRST_CON22_RESETN_DDR_MON_CH1_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH0_SHIFT    (9U)
#define CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH0_MASK     (0x1U << CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH0_SHIFT)    /* 0x00000200 */
#define CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH1_SHIFT    (10U)
#define CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH1_MASK     (0x1U << CRU_SOFTRST_CON22_RESETN_DDR_SCRAMBLE_CH1_SHIFT)    /* 0x00000400 */
#define CRU_SOFTRST_CON22_PRESETN_AHB2APB_SHIFT            (12U)
#define CRU_SOFTRST_CON22_PRESETN_AHB2APB_MASK             (0x1U << CRU_SOFTRST_CON22_PRESETN_AHB2APB_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON22_HRESETN_AHB2APB_SHIFT            (13U)
#define CRU_SOFTRST_CON22_HRESETN_AHB2APB_MASK             (0x1U << CRU_SOFTRST_CON22_HRESETN_AHB2APB_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON22_HRESETN_DDR_BIU_SHIFT            (14U)
#define CRU_SOFTRST_CON22_HRESETN_DDR_BIU_MASK             (0x1U << CRU_SOFTRST_CON22_HRESETN_DDR_BIU_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON22_FRESETN_DDR_CM0_CORE_SHIFT       (15U)
#define CRU_SOFTRST_CON22_FRESETN_DDR_CM0_CORE_MASK        (0x1U << CRU_SOFTRST_CON22_FRESETN_DDR_CM0_CORE_SHIFT)       /* 0x00008000 */
/* SOFTRST_CON23 */
#define CRU_SOFTRST_CON23_OFFSET                           (0xA5CU)
#define CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH0_SHIFT        (1U)
#define CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH0_MASK         (0x1U << CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH0_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH1_SHIFT        (2U)
#define CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH1_MASK         (0x1U << CRU_SOFTRST_CON23_PRESETN_DDR01_MSCH1_SHIFT)        /* 0x00000004 */
#define CRU_SOFTRST_CON23_RESETN_DDR_TIMER0_SHIFT          (4U)
#define CRU_SOFTRST_CON23_RESETN_DDR_TIMER0_MASK           (0x1U << CRU_SOFTRST_CON23_RESETN_DDR_TIMER0_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON23_RESETN_DDR_TIMER1_SHIFT          (5U)
#define CRU_SOFTRST_CON23_RESETN_DDR_TIMER1_MASK           (0x1U << CRU_SOFTRST_CON23_RESETN_DDR_TIMER1_SHIFT)          /* 0x00000020 */
#define CRU_SOFTRST_CON23_TRESETN_WDT_DDR_SHIFT            (6U)
#define CRU_SOFTRST_CON23_TRESETN_WDT_DDR_MASK             (0x1U << CRU_SOFTRST_CON23_TRESETN_WDT_DDR_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON23_PRESETN_WDT_SHIFT                (7U)
#define CRU_SOFTRST_CON23_PRESETN_WDT_MASK                 (0x1U << CRU_SOFTRST_CON23_PRESETN_WDT_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON23_PRESETN_TIMER_SHIFT              (8U)
#define CRU_SOFTRST_CON23_PRESETN_TIMER_MASK               (0x1U << CRU_SOFTRST_CON23_PRESETN_TIMER_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON23_TRESETN_DDR_CM0_JTAG_SHIFT       (9U)
#define CRU_SOFTRST_CON23_TRESETN_DDR_CM0_JTAG_MASK        (0x1U << CRU_SOFTRST_CON23_TRESETN_DDR_CM0_JTAG_SHIFT)       /* 0x00000200 */
#define CRU_SOFTRST_CON23_PRESETN_DDR_GRF_SHIFT            (11U)
#define CRU_SOFTRST_CON23_PRESETN_DDR_GRF_MASK             (0x1U << CRU_SOFTRST_CON23_PRESETN_DDR_GRF_SHIFT)            /* 0x00000800 */
/* SOFTRST_CON25 */
#define CRU_SOFTRST_CON25_OFFSET                           (0xA64U)
#define CRU_SOFTRST_CON25_RESETN_DDR_UPCTL_CH0_SHIFT       (1U)
#define CRU_SOFTRST_CON25_RESETN_DDR_UPCTL_CH0_MASK        (0x1U << CRU_SOFTRST_CON25_RESETN_DDR_UPCTL_CH0_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_0_CH0_SHIFT    (2U)
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_0_CH0_MASK     (0x1U << CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_0_CH0_SHIFT)    /* 0x00000004 */
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_1_CH0_SHIFT    (3U)
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_1_CH0_MASK     (0x1U << CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_1_CH0_SHIFT)    /* 0x00000008 */
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_2_CH0_SHIFT    (4U)
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_2_CH0_MASK     (0x1U << CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_2_CH0_SHIFT)    /* 0x00000010 */
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_3_CH0_SHIFT    (5U)
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_3_CH0_MASK     (0x1U << CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_3_CH0_SHIFT)    /* 0x00000020 */
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_4_CH0_SHIFT    (6U)
#define CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_4_CH0_MASK     (0x1U << CRU_SOFTRST_CON25_ARESETN_DDR_UPCTL_4_CH0_SHIFT)    /* 0x00000040 */
/* SOFTRST_CON26 */
#define CRU_SOFTRST_CON26_OFFSET                           (0xA68U)
#define CRU_SOFTRST_CON26_RESETN_DDR_UPCTL_CH1_SHIFT       (1U)
#define CRU_SOFTRST_CON26_RESETN_DDR_UPCTL_CH1_MASK        (0x1U << CRU_SOFTRST_CON26_RESETN_DDR_UPCTL_CH1_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_0_CH1_SHIFT    (2U)
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_0_CH1_MASK     (0x1U << CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_0_CH1_SHIFT)    /* 0x00000004 */
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_1_CH1_SHIFT    (3U)
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_1_CH1_MASK     (0x1U << CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_1_CH1_SHIFT)    /* 0x00000008 */
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_2_CH1_SHIFT    (4U)
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_2_CH1_MASK     (0x1U << CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_2_CH1_SHIFT)    /* 0x00000010 */
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_3_CH1_SHIFT    (5U)
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_3_CH1_MASK     (0x1U << CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_3_CH1_SHIFT)    /* 0x00000020 */
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_4_CH1_SHIFT    (6U)
#define CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_4_CH1_MASK     (0x1U << CRU_SOFTRST_CON26_ARESETN_DDR_UPCTL_4_CH1_SHIFT)    /* 0x00000040 */
/* SOFTRST_CON27 */
#define CRU_SOFTRST_CON27_OFFSET                           (0xA6CU)
#define CRU_SOFTRST_CON27_RESETN_REF_PVTPLL_DDR_SHIFT      (0U)
#define CRU_SOFTRST_CON27_RESETN_REF_PVTPLL_DDR_MASK       (0x1U << CRU_SOFTRST_CON27_RESETN_REF_PVTPLL_DDR_SHIFT)      /* 0x00000001 */
#define CRU_SOFTRST_CON27_PRESETN_PVTPLL_DDR_SHIFT         (1U)
#define CRU_SOFTRST_CON27_PRESETN_PVTPLL_DDR_MASK          (0x1U << CRU_SOFTRST_CON27_PRESETN_PVTPLL_DDR_SHIFT)         /* 0x00000002 */
/* SOFTRST_CON28 */
#define CRU_SOFTRST_CON28_OFFSET                           (0xA70U)
#define CRU_SOFTRST_CON28_ARESETN_RKNN0_SHIFT              (9U)
#define CRU_SOFTRST_CON28_ARESETN_RKNN0_MASK               (0x1U << CRU_SOFTRST_CON28_ARESETN_RKNN0_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON28_ARESETN_RKNN0_BIU_SHIFT          (11U)
#define CRU_SOFTRST_CON28_ARESETN_RKNN0_BIU_MASK           (0x1U << CRU_SOFTRST_CON28_ARESETN_RKNN0_BIU_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON28_LRESETN_RKNN0_BIU_SHIFT          (12U)
#define CRU_SOFTRST_CON28_LRESETN_RKNN0_BIU_MASK           (0x1U << CRU_SOFTRST_CON28_LRESETN_RKNN0_BIU_SHIFT)          /* 0x00001000 */
/* SOFTRST_CON29 */
#define CRU_SOFTRST_CON29_OFFSET                           (0xA74U)
#define CRU_SOFTRST_CON29_ARESETN_RKNN1_SHIFT              (0U)
#define CRU_SOFTRST_CON29_ARESETN_RKNN1_MASK               (0x1U << CRU_SOFTRST_CON29_ARESETN_RKNN1_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON29_ARESETN_RKNN1_BIU_SHIFT          (2U)
#define CRU_SOFTRST_CON29_ARESETN_RKNN1_BIU_MASK           (0x1U << CRU_SOFTRST_CON29_ARESETN_RKNN1_BIU_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON29_LRESETN_RKNN1_BIU_SHIFT          (3U)
#define CRU_SOFTRST_CON29_LRESETN_RKNN1_BIU_MASK           (0x1U << CRU_SOFTRST_CON29_LRESETN_RKNN1_BIU_SHIFT)          /* 0x00000008 */
/* SOFTRST_CON31 */
#define CRU_SOFTRST_CON31_OFFSET                           (0xA7CU)
#define CRU_SOFTRST_CON31_RESETN_NPU_DAP_SHIFT             (0U)
#define CRU_SOFTRST_CON31_RESETN_NPU_DAP_MASK              (0x1U << CRU_SOFTRST_CON31_RESETN_NPU_DAP_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON31_LRESETN_NPUSUBSYS_BIU_SHIFT      (1U)
#define CRU_SOFTRST_CON31_LRESETN_NPUSUBSYS_BIU_MASK       (0x1U << CRU_SOFTRST_CON31_LRESETN_NPUSUBSYS_BIU_SHIFT)      /* 0x00000002 */
#define CRU_SOFTRST_CON31_PRESETN_NPUTOP_BIU_SHIFT         (9U)
#define CRU_SOFTRST_CON31_PRESETN_NPUTOP_BIU_MASK          (0x1U << CRU_SOFTRST_CON31_PRESETN_NPUTOP_BIU_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON31_PRESETN_NPU_TIMER_SHIFT          (10U)
#define CRU_SOFTRST_CON31_PRESETN_NPU_TIMER_MASK           (0x1U << CRU_SOFTRST_CON31_PRESETN_NPU_TIMER_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON31_RESETN_NPUTIMER0_SHIFT           (12U)
#define CRU_SOFTRST_CON31_RESETN_NPUTIMER0_MASK            (0x1U << CRU_SOFTRST_CON31_RESETN_NPUTIMER0_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON31_RESETN_NPUTIMER1_SHIFT           (13U)
#define CRU_SOFTRST_CON31_RESETN_NPUTIMER1_MASK            (0x1U << CRU_SOFTRST_CON31_RESETN_NPUTIMER1_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON31_PRESETN_NPU_WDT_SHIFT            (14U)
#define CRU_SOFTRST_CON31_PRESETN_NPU_WDT_MASK             (0x1U << CRU_SOFTRST_CON31_PRESETN_NPU_WDT_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON31_TRESETN_NPU_WDT_SHIFT            (15U)
#define CRU_SOFTRST_CON31_TRESETN_NPU_WDT_MASK             (0x1U << CRU_SOFTRST_CON31_TRESETN_NPU_WDT_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON32 */
#define CRU_SOFTRST_CON32_OFFSET                           (0xA80U)
#define CRU_SOFTRST_CON32_ARESETN_RKNN_CBUF_SHIFT          (0U)
#define CRU_SOFTRST_CON32_ARESETN_RKNN_CBUF_MASK           (0x1U << CRU_SOFTRST_CON32_ARESETN_RKNN_CBUF_SHIFT)          /* 0x00000001 */
#define CRU_SOFTRST_CON32_ARESETN_RVCORE0_SHIFT            (1U)
#define CRU_SOFTRST_CON32_ARESETN_RVCORE0_MASK             (0x1U << CRU_SOFTRST_CON32_ARESETN_RVCORE0_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON32_PRESETN_NPU_GRF_SHIFT            (2U)
#define CRU_SOFTRST_CON32_PRESETN_NPU_GRF_MASK             (0x1U << CRU_SOFTRST_CON32_PRESETN_NPU_GRF_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON32_PRESETN_PVTPLL_NPU_SHIFT         (3U)
#define CRU_SOFTRST_CON32_PRESETN_PVTPLL_NPU_MASK          (0x1U << CRU_SOFTRST_CON32_PRESETN_PVTPLL_NPU_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON32_RESETN_NPU_PVTPLL_SHIFT          (4U)
#define CRU_SOFTRST_CON32_RESETN_NPU_PVTPLL_MASK           (0x1U << CRU_SOFTRST_CON32_RESETN_NPU_PVTPLL_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON32_HRESETN_NPU_CM0_BIU_SHIFT        (6U)
#define CRU_SOFTRST_CON32_HRESETN_NPU_CM0_BIU_MASK         (0x1U << CRU_SOFTRST_CON32_HRESETN_NPU_CM0_BIU_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON32_FRESETN_NPU_CM0_CORE_SHIFT       (7U)
#define CRU_SOFTRST_CON32_FRESETN_NPU_CM0_CORE_MASK        (0x1U << CRU_SOFTRST_CON32_FRESETN_NPU_CM0_CORE_SHIFT)       /* 0x00000080 */
#define CRU_SOFTRST_CON32_TRESETN_NPU_CM0_JTAG_SHIFT       (8U)
#define CRU_SOFTRST_CON32_TRESETN_NPU_CM0_JTAG_MASK        (0x1U << CRU_SOFTRST_CON32_TRESETN_NPU_CM0_JTAG_SHIFT)       /* 0x00000100 */
#define CRU_SOFTRST_CON32_ARESETN_RKNNTOP_BIU_SHIFT        (11U)
#define CRU_SOFTRST_CON32_ARESETN_RKNNTOP_BIU_MASK         (0x1U << CRU_SOFTRST_CON32_ARESETN_RKNNTOP_BIU_SHIFT)        /* 0x00000800 */
#define CRU_SOFTRST_CON32_HRESETN_RKNN_CBUF_SHIFT          (12U)
#define CRU_SOFTRST_CON32_HRESETN_RKNN_CBUF_MASK           (0x1U << CRU_SOFTRST_CON32_HRESETN_RKNN_CBUF_SHIFT)          /* 0x00001000 */
#define CRU_SOFTRST_CON32_HRESETN_RKNNTOP_BIU_SHIFT        (13U)
#define CRU_SOFTRST_CON32_HRESETN_RKNNTOP_BIU_MASK         (0x1U << CRU_SOFTRST_CON32_HRESETN_RKNNTOP_BIU_SHIFT)        /* 0x00002000 */
/* SOFTRST_CON33 */
#define CRU_SOFTRST_CON33_OFFSET                           (0xA84U)
#define CRU_SOFTRST_CON33_HRESETN_NVM_BIU_SHIFT            (2U)
#define CRU_SOFTRST_CON33_HRESETN_NVM_BIU_MASK             (0x1U << CRU_SOFTRST_CON33_HRESETN_NVM_BIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON33_ARESETN_NVM_BIU_SHIFT            (3U)
#define CRU_SOFTRST_CON33_ARESETN_NVM_BIU_MASK             (0x1U << CRU_SOFTRST_CON33_ARESETN_NVM_BIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON33_SRESETN_FSPI_SHIFT               (6U)
#define CRU_SOFTRST_CON33_SRESETN_FSPI_MASK                (0x1U << CRU_SOFTRST_CON33_SRESETN_FSPI_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON33_HRESETN_FSPI_SHIFT               (7U)
#define CRU_SOFTRST_CON33_HRESETN_FSPI_MASK                (0x1U << CRU_SOFTRST_CON33_HRESETN_FSPI_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON33_CRESETN_EMMC_SHIFT               (8U)
#define CRU_SOFTRST_CON33_CRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON33_CRESETN_EMMC_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON33_HRESETN_EMMC_SHIFT               (9U)
#define CRU_SOFTRST_CON33_HRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON33_HRESETN_EMMC_SHIFT)               /* 0x00000200 */
#define CRU_SOFTRST_CON33_ARESETN_EMMC_SHIFT               (10U)
#define CRU_SOFTRST_CON33_ARESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON33_ARESETN_EMMC_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON33_BRESETN_EMMC_SHIFT               (11U)
#define CRU_SOFTRST_CON33_BRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON33_BRESETN_EMMC_SHIFT)               /* 0x00000800 */
#define CRU_SOFTRST_CON33_TRESETN_EMMC_SHIFT               (12U)
#define CRU_SOFTRST_CON33_TRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON33_TRESETN_EMMC_SHIFT)               /* 0x00001000 */
/* SOFTRST_CON34 */
#define CRU_SOFTRST_CON34_OFFSET                           (0xA88U)
#define CRU_SOFTRST_CON34_PRESETN_GRF_SHIFT                (1U)
#define CRU_SOFTRST_CON34_PRESETN_GRF_MASK                 (0x1U << CRU_SOFTRST_CON34_PRESETN_GRF_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON34_PRESETN_PHP_BIU_SHIFT            (5U)
#define CRU_SOFTRST_CON34_PRESETN_PHP_BIU_MASK             (0x1U << CRU_SOFTRST_CON34_PRESETN_PHP_BIU_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON34_ARESETN_PHP_BIU_SHIFT            (9U)
#define CRU_SOFTRST_CON34_ARESETN_PHP_BIU_MASK             (0x1U << CRU_SOFTRST_CON34_ARESETN_PHP_BIU_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON34_PRESETN_PCIE0_SHIFT              (13U)
#define CRU_SOFTRST_CON34_PRESETN_PCIE0_MASK               (0x1U << CRU_SOFTRST_CON34_PRESETN_PCIE0_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON34_RESETN_PCIE0_POWER_UP_SHIFT      (15U)
#define CRU_SOFTRST_CON34_RESETN_PCIE0_POWER_UP_MASK       (0x1U << CRU_SOFTRST_CON34_RESETN_PCIE0_POWER_UP_SHIFT)      /* 0x00008000 */
/* SOFTRST_CON35 */
#define CRU_SOFTRST_CON35_OFFSET                           (0xA8CU)
#define CRU_SOFTRST_CON35_ARESETN_USB3OTG1_SHIFT           (3U)
#define CRU_SOFTRST_CON35_ARESETN_USB3OTG1_MASK            (0x1U << CRU_SOFTRST_CON35_ARESETN_USB3OTG1_SHIFT)           /* 0x00000008 */
#define CRU_SOFTRST_CON35_ARESETN_MMU0_SHIFT               (11U)
#define CRU_SOFTRST_CON35_ARESETN_MMU0_MASK                (0x1U << CRU_SOFTRST_CON35_ARESETN_MMU0_SHIFT)               /* 0x00000800 */
#define CRU_SOFTRST_CON35_ARESETN_SLV_MMU0_SHIFT           (13U)
#define CRU_SOFTRST_CON35_ARESETN_SLV_MMU0_MASK            (0x1U << CRU_SOFTRST_CON35_ARESETN_SLV_MMU0_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON35_ARESETN_MMU1_SHIFT               (14U)
#define CRU_SOFTRST_CON35_ARESETN_MMU1_MASK                (0x1U << CRU_SOFTRST_CON35_ARESETN_MMU1_SHIFT)               /* 0x00004000 */
/* SOFTRST_CON36 */
#define CRU_SOFTRST_CON36_OFFSET                           (0xA90U)
#define CRU_SOFTRST_CON36_ARESETN_SLV_MMU1_SHIFT           (0U)
#define CRU_SOFTRST_CON36_ARESETN_SLV_MMU1_MASK            (0x1U << CRU_SOFTRST_CON36_ARESETN_SLV_MMU1_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON36_PRESETN_PCIE1_SHIFT              (7U)
#define CRU_SOFTRST_CON36_PRESETN_PCIE1_MASK               (0x1U << CRU_SOFTRST_CON36_PRESETN_PCIE1_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON36_RESETN_PCIE1_POWER_UP_SHIFT      (9U)
#define CRU_SOFTRST_CON36_RESETN_PCIE1_POWER_UP_MASK       (0x1U << CRU_SOFTRST_CON36_RESETN_PCIE1_POWER_UP_SHIFT)      /* 0x00000200 */
/* SOFTRST_CON37 */
#define CRU_SOFTRST_CON37_OFFSET                           (0xA94U)
#define CRU_SOFTRST_CON37_RESETN_RXOOB0_SHIFT              (0U)
#define CRU_SOFTRST_CON37_RESETN_RXOOB0_MASK               (0x1U << CRU_SOFTRST_CON37_RESETN_RXOOB0_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON37_RESETN_RXOOB1_SHIFT              (1U)
#define CRU_SOFTRST_CON37_RESETN_RXOOB1_MASK               (0x1U << CRU_SOFTRST_CON37_RESETN_RXOOB1_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON37_RESETN_PMALIVE0_SHIFT            (2U)
#define CRU_SOFTRST_CON37_RESETN_PMALIVE0_MASK             (0x1U << CRU_SOFTRST_CON37_RESETN_PMALIVE0_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON37_RESETN_PMALIVE1_SHIFT            (3U)
#define CRU_SOFTRST_CON37_RESETN_PMALIVE1_MASK             (0x1U << CRU_SOFTRST_CON37_RESETN_PMALIVE1_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON37_ARESETN_SATA0_SHIFT              (4U)
#define CRU_SOFTRST_CON37_ARESETN_SATA0_MASK               (0x1U << CRU_SOFTRST_CON37_ARESETN_SATA0_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON37_ARESETN_SATA1_SHIFT              (5U)
#define CRU_SOFTRST_CON37_ARESETN_SATA1_MASK               (0x1U << CRU_SOFTRST_CON37_ARESETN_SATA1_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON37_RESETN_ASIC1_SHIFT               (6U)
#define CRU_SOFTRST_CON37_RESETN_ASIC1_MASK                (0x1U << CRU_SOFTRST_CON37_RESETN_ASIC1_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON37_RESETN_ASIC0_SHIFT               (7U)
#define CRU_SOFTRST_CON37_RESETN_ASIC0_MASK                (0x1U << CRU_SOFTRST_CON37_RESETN_ASIC0_SHIFT)               /* 0x00000080 */
/* SOFTRST_CON40 */
#define CRU_SOFTRST_CON40_OFFSET                           (0xAA0U)
#define CRU_SOFTRST_CON40_PRESETN_CSIDPHY1_SHIFT           (2U)
#define CRU_SOFTRST_CON40_PRESETN_CSIDPHY1_MASK            (0x1U << CRU_SOFTRST_CON40_PRESETN_CSIDPHY1_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON40_SCANRESETN_CSIDPHY1_SHIFT        (3U)
#define CRU_SOFTRST_CON40_SCANRESETN_CSIDPHY1_MASK         (0x1U << CRU_SOFTRST_CON40_SCANRESETN_CSIDPHY1_SHIFT)        /* 0x00000008 */
/* SOFTRST_CON42 */
#define CRU_SOFTRST_CON42_OFFSET                           (0xAA8U)
#define CRU_SOFTRST_CON42_PRESETN_SDGMAC_GRF_SHIFT         (3U)
#define CRU_SOFTRST_CON42_PRESETN_SDGMAC_GRF_MASK          (0x1U << CRU_SOFTRST_CON42_PRESETN_SDGMAC_GRF_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON42_PRESETN_SDGMAC_BIU_SHIFT         (4U)
#define CRU_SOFTRST_CON42_PRESETN_SDGMAC_BIU_MASK          (0x1U << CRU_SOFTRST_CON42_PRESETN_SDGMAC_BIU_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON42_ARESETN_SDGMAC_BIU_SHIFT         (5U)
#define CRU_SOFTRST_CON42_ARESETN_SDGMAC_BIU_MASK          (0x1U << CRU_SOFTRST_CON42_ARESETN_SDGMAC_BIU_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON42_HRESETN_SDGMAC_BIU_SHIFT         (6U)
#define CRU_SOFTRST_CON42_HRESETN_SDGMAC_BIU_MASK          (0x1U << CRU_SOFTRST_CON42_HRESETN_SDGMAC_BIU_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON42_ARESETN_GMAC0_SHIFT              (7U)
#define CRU_SOFTRST_CON42_ARESETN_GMAC0_MASK               (0x1U << CRU_SOFTRST_CON42_ARESETN_GMAC0_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON42_ARESETN_GMAC1_SHIFT              (8U)
#define CRU_SOFTRST_CON42_ARESETN_GMAC1_MASK               (0x1U << CRU_SOFTRST_CON42_ARESETN_GMAC1_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON42_PRESETN_GMAC0_SHIFT              (9U)
#define CRU_SOFTRST_CON42_PRESETN_GMAC0_MASK               (0x1U << CRU_SOFTRST_CON42_PRESETN_GMAC0_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON42_PRESETN_GMAC1_SHIFT              (10U)
#define CRU_SOFTRST_CON42_PRESETN_GMAC1_MASK               (0x1U << CRU_SOFTRST_CON42_PRESETN_GMAC1_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON42_HRESETN_SDIO_SHIFT               (12U)
#define CRU_SOFTRST_CON42_HRESETN_SDIO_MASK                (0x1U << CRU_SOFTRST_CON42_HRESETN_SDIO_SHIFT)               /* 0x00001000 */
/* SOFTRST_CON43 */
#define CRU_SOFTRST_CON43_OFFSET                           (0xAACU)
#define CRU_SOFTRST_CON43_HRESETN_SDMMC0_SHIFT             (2U)
#define CRU_SOFTRST_CON43_HRESETN_SDMMC0_MASK              (0x1U << CRU_SOFTRST_CON43_HRESETN_SDMMC0_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON43_SRESETN_FSPI1_SHIFT              (3U)
#define CRU_SOFTRST_CON43_SRESETN_FSPI1_MASK               (0x1U << CRU_SOFTRST_CON43_SRESETN_FSPI1_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON43_HRESETN_FSPI1_SHIFT              (4U)
#define CRU_SOFTRST_CON43_HRESETN_FSPI1_MASK               (0x1U << CRU_SOFTRST_CON43_HRESETN_FSPI1_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON43_ARESETN_DSMC_BIU_SHIFT           (6U)
#define CRU_SOFTRST_CON43_ARESETN_DSMC_BIU_MASK            (0x1U << CRU_SOFTRST_CON43_ARESETN_DSMC_BIU_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON43_ARESETN_DSMC_SHIFT               (7U)
#define CRU_SOFTRST_CON43_ARESETN_DSMC_MASK                (0x1U << CRU_SOFTRST_CON43_ARESETN_DSMC_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON43_PRESETN_DSMC_SHIFT               (8U)
#define CRU_SOFTRST_CON43_PRESETN_DSMC_MASK                (0x1U << CRU_SOFTRST_CON43_PRESETN_DSMC_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON43_HRESETN_FLEXBUS_SHIFT            (10U)
#define CRU_SOFTRST_CON43_HRESETN_FLEXBUS_MASK             (0x1U << CRU_SOFTRST_CON43_HRESETN_FLEXBUS_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON43_RESETN_FLEXBUS_SHIFT             (11U)
#define CRU_SOFTRST_CON43_RESETN_FLEXBUS_MASK              (0x1U << CRU_SOFTRST_CON43_RESETN_FLEXBUS_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON43_ARESETN_FLEXBUS_SHIFT            (13U)
#define CRU_SOFTRST_CON43_ARESETN_FLEXBUS_MASK             (0x1U << CRU_SOFTRST_CON43_ARESETN_FLEXBUS_SHIFT)            /* 0x00002000 */
/* SOFTRST_CON45 */
#define CRU_SOFTRST_CON45_OFFSET                           (0xAB4U)
#define CRU_SOFTRST_CON45_HRESETN_RKVDEC_SHIFT             (3U)
#define CRU_SOFTRST_CON45_HRESETN_RKVDEC_MASK              (0x1U << CRU_SOFTRST_CON45_HRESETN_RKVDEC_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON45_HRESETN_RKVDEC_BIU_SHIFT         (5U)
#define CRU_SOFTRST_CON45_HRESETN_RKVDEC_BIU_MASK          (0x1U << CRU_SOFTRST_CON45_HRESETN_RKVDEC_BIU_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON45_ARESETN_RKVDEC_BIU_SHIFT         (6U)
#define CRU_SOFTRST_CON45_ARESETN_RKVDEC_BIU_MASK          (0x1U << CRU_SOFTRST_CON45_ARESETN_RKVDEC_BIU_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON45_RESETN_RKVDEC_HEVC_CA_SHIFT      (8U)
#define CRU_SOFTRST_CON45_RESETN_RKVDEC_HEVC_CA_MASK       (0x1U << CRU_SOFTRST_CON45_RESETN_RKVDEC_HEVC_CA_SHIFT)      /* 0x00000100 */
#define CRU_SOFTRST_CON45_RESETN_RKVDEC_CORE_SHIFT         (9U)
#define CRU_SOFTRST_CON45_RESETN_RKVDEC_CORE_MASK          (0x1U << CRU_SOFTRST_CON45_RESETN_RKVDEC_CORE_SHIFT)         /* 0x00000200 */
/* SOFTRST_CON47 */
#define CRU_SOFTRST_CON47_OFFSET                           (0xABCU)
#define CRU_SOFTRST_CON47_ARESETN_USB_BIU_SHIFT            (3U)
#define CRU_SOFTRST_CON47_ARESETN_USB_BIU_MASK             (0x1U << CRU_SOFTRST_CON47_ARESETN_USB_BIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON47_PRESETN_USBUFS_BIU_SHIFT         (4U)
#define CRU_SOFTRST_CON47_PRESETN_USBUFS_BIU_MASK          (0x1U << CRU_SOFTRST_CON47_PRESETN_USBUFS_BIU_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON47_ARESETN_USB3OTG0_SHIFT           (5U)
#define CRU_SOFTRST_CON47_ARESETN_USB3OTG0_MASK            (0x1U << CRU_SOFTRST_CON47_ARESETN_USB3OTG0_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON47_ARESETN_UFS_BIU_SHIFT            (10U)
#define CRU_SOFTRST_CON47_ARESETN_UFS_BIU_MASK             (0x1U << CRU_SOFTRST_CON47_ARESETN_UFS_BIU_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON47_ARESETN_MMU2_SHIFT               (12U)
#define CRU_SOFTRST_CON47_ARESETN_MMU2_MASK                (0x1U << CRU_SOFTRST_CON47_ARESETN_MMU2_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON47_ARESETN_SLV_MMU2_SHIFT           (13U)
#define CRU_SOFTRST_CON47_ARESETN_SLV_MMU2_MASK            (0x1U << CRU_SOFTRST_CON47_ARESETN_SLV_MMU2_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON47_ARESETN_UFS_SYS_SHIFT            (15U)
#define CRU_SOFTRST_CON47_ARESETN_UFS_SYS_MASK             (0x1U << CRU_SOFTRST_CON47_ARESETN_UFS_SYS_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON48 */
#define CRU_SOFTRST_CON48_OFFSET                           (0xAC0U)
#define CRU_SOFTRST_CON48_ARESETN_UFS_SHIFT                (0U)
#define CRU_SOFTRST_CON48_ARESETN_UFS_MASK                 (0x1U << CRU_SOFTRST_CON48_ARESETN_UFS_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON48_PRESETN_USBUFS_GRF_SHIFT         (1U)
#define CRU_SOFTRST_CON48_PRESETN_USBUFS_GRF_MASK          (0x1U << CRU_SOFTRST_CON48_PRESETN_USBUFS_GRF_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON48_PRESETN_UFS_GRF_SHIFT            (2U)
#define CRU_SOFTRST_CON48_PRESETN_UFS_GRF_MASK             (0x1U << CRU_SOFTRST_CON48_PRESETN_UFS_GRF_SHIFT)            /* 0x00000004 */
/* SOFTRST_CON49 */
#define CRU_SOFTRST_CON49_OFFSET                           (0xAC4U)
#define CRU_SOFTRST_CON49_HRESETN_VPU_BIU_SHIFT            (6U)
#define CRU_SOFTRST_CON49_HRESETN_VPU_BIU_MASK             (0x1U << CRU_SOFTRST_CON49_HRESETN_VPU_BIU_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON49_ARESETN_JPEG_BIU_SHIFT           (7U)
#define CRU_SOFTRST_CON49_ARESETN_JPEG_BIU_MASK            (0x1U << CRU_SOFTRST_CON49_ARESETN_JPEG_BIU_SHIFT)           /* 0x00000080 */
#define CRU_SOFTRST_CON49_ARESETN_RGA_BIU_SHIFT            (10U)
#define CRU_SOFTRST_CON49_ARESETN_RGA_BIU_MASK             (0x1U << CRU_SOFTRST_CON49_ARESETN_RGA_BIU_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON49_ARESETN_VDPP_BIU_SHIFT           (11U)
#define CRU_SOFTRST_CON49_ARESETN_VDPP_BIU_MASK            (0x1U << CRU_SOFTRST_CON49_ARESETN_VDPP_BIU_SHIFT)           /* 0x00000800 */
#define CRU_SOFTRST_CON49_ARESETN_EBC_BIU_SHIFT            (12U)
#define CRU_SOFTRST_CON49_ARESETN_EBC_BIU_MASK             (0x1U << CRU_SOFTRST_CON49_ARESETN_EBC_BIU_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON49_HRESETN_RGA2E_0_SHIFT            (13U)
#define CRU_SOFTRST_CON49_HRESETN_RGA2E_0_MASK             (0x1U << CRU_SOFTRST_CON49_HRESETN_RGA2E_0_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON49_ARESETN_RGA2E_0_SHIFT            (14U)
#define CRU_SOFTRST_CON49_ARESETN_RGA2E_0_MASK             (0x1U << CRU_SOFTRST_CON49_ARESETN_RGA2E_0_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON49_RESETN_CORE_RGA2E_0_SHIFT        (15U)
#define CRU_SOFTRST_CON49_RESETN_CORE_RGA2E_0_MASK         (0x1U << CRU_SOFTRST_CON49_RESETN_CORE_RGA2E_0_SHIFT)        /* 0x00008000 */
/* SOFTRST_CON50 */
#define CRU_SOFTRST_CON50_OFFSET                           (0xAC8U)
#define CRU_SOFTRST_CON50_ARESETN_JPEG_SHIFT               (0U)
#define CRU_SOFTRST_CON50_ARESETN_JPEG_MASK                (0x1U << CRU_SOFTRST_CON50_ARESETN_JPEG_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON50_HRESETN_JPEG_SHIFT               (1U)
#define CRU_SOFTRST_CON50_HRESETN_JPEG_MASK                (0x1U << CRU_SOFTRST_CON50_HRESETN_JPEG_SHIFT)               /* 0x00000002 */
#define CRU_SOFTRST_CON50_HRESETN_VDPP_SHIFT               (2U)
#define CRU_SOFTRST_CON50_HRESETN_VDPP_MASK                (0x1U << CRU_SOFTRST_CON50_HRESETN_VDPP_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON50_ARESETN_VDPP_SHIFT               (3U)
#define CRU_SOFTRST_CON50_ARESETN_VDPP_MASK                (0x1U << CRU_SOFTRST_CON50_ARESETN_VDPP_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON50_RESETN_CORE_VDPP_SHIFT           (4U)
#define CRU_SOFTRST_CON50_RESETN_CORE_VDPP_MASK            (0x1U << CRU_SOFTRST_CON50_RESETN_CORE_VDPP_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON50_HRESETN_RGA2E_1_SHIFT            (5U)
#define CRU_SOFTRST_CON50_HRESETN_RGA2E_1_MASK             (0x1U << CRU_SOFTRST_CON50_HRESETN_RGA2E_1_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON50_ARESETN_RGA2E_1_SHIFT            (6U)
#define CRU_SOFTRST_CON50_ARESETN_RGA2E_1_MASK             (0x1U << CRU_SOFTRST_CON50_ARESETN_RGA2E_1_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON50_RESETN_CORE_RGA2E_1_SHIFT        (7U)
#define CRU_SOFTRST_CON50_RESETN_CORE_RGA2E_1_MASK         (0x1U << CRU_SOFTRST_CON50_RESETN_CORE_RGA2E_1_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON50_HRESETN_EBC_SHIFT                (10U)
#define CRU_SOFTRST_CON50_HRESETN_EBC_MASK                 (0x1U << CRU_SOFTRST_CON50_HRESETN_EBC_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON50_ARESETN_EBC_SHIFT                (11U)
#define CRU_SOFTRST_CON50_ARESETN_EBC_MASK                 (0x1U << CRU_SOFTRST_CON50_ARESETN_EBC_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON50_DRESETN_EBC_SHIFT                (12U)
#define CRU_SOFTRST_CON50_DRESETN_EBC_MASK                 (0x1U << CRU_SOFTRST_CON50_DRESETN_EBC_SHIFT)                /* 0x00001000 */
/* SOFTRST_CON51 */
#define CRU_SOFTRST_CON51_OFFSET                           (0xACCU)
#define CRU_SOFTRST_CON51_HRESETN_VEPU0_BIU_SHIFT          (2U)
#define CRU_SOFTRST_CON51_HRESETN_VEPU0_BIU_MASK           (0x1U << CRU_SOFTRST_CON51_HRESETN_VEPU0_BIU_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON51_ARESETN_VEPU0_BIU_SHIFT          (3U)
#define CRU_SOFTRST_CON51_ARESETN_VEPU0_BIU_MASK           (0x1U << CRU_SOFTRST_CON51_ARESETN_VEPU0_BIU_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON51_HRESETN_VEPU0_SHIFT              (4U)
#define CRU_SOFTRST_CON51_HRESETN_VEPU0_MASK               (0x1U << CRU_SOFTRST_CON51_HRESETN_VEPU0_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON51_ARESETN_VEPU0_SHIFT              (5U)
#define CRU_SOFTRST_CON51_ARESETN_VEPU0_MASK               (0x1U << CRU_SOFTRST_CON51_ARESETN_VEPU0_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON51_RESETN_VEPU0_CORE_SHIFT          (6U)
#define CRU_SOFTRST_CON51_RESETN_VEPU0_CORE_MASK           (0x1U << CRU_SOFTRST_CON51_RESETN_VEPU0_CORE_SHIFT)          /* 0x00000040 */
/* SOFTRST_CON53 */
#define CRU_SOFTRST_CON53_OFFSET                           (0xAD4U)
#define CRU_SOFTRST_CON53_ARESETN_VI_BIU_SHIFT             (3U)
#define CRU_SOFTRST_CON53_ARESETN_VI_BIU_MASK              (0x1U << CRU_SOFTRST_CON53_ARESETN_VI_BIU_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON53_HRESETN_VI_BIU_SHIFT             (4U)
#define CRU_SOFTRST_CON53_HRESETN_VI_BIU_MASK              (0x1U << CRU_SOFTRST_CON53_HRESETN_VI_BIU_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON53_PRESETN_VI_BIU_SHIFT             (5U)
#define CRU_SOFTRST_CON53_PRESETN_VI_BIU_MASK              (0x1U << CRU_SOFTRST_CON53_PRESETN_VI_BIU_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON53_DRESETN_VICAP_SHIFT              (6U)
#define CRU_SOFTRST_CON53_DRESETN_VICAP_MASK               (0x1U << CRU_SOFTRST_CON53_DRESETN_VICAP_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON53_ARESETN_VICAP_SHIFT              (7U)
#define CRU_SOFTRST_CON53_ARESETN_VICAP_MASK               (0x1U << CRU_SOFTRST_CON53_ARESETN_VICAP_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON53_HRESETN_VICAP_SHIFT              (8U)
#define CRU_SOFTRST_CON53_HRESETN_VICAP_MASK               (0x1U << CRU_SOFTRST_CON53_HRESETN_VICAP_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON53_RESETN_ISP0_SHIFT                (10U)
#define CRU_SOFTRST_CON53_RESETN_ISP0_MASK                 (0x1U << CRU_SOFTRST_CON53_RESETN_ISP0_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON53_RESETN_ISP0_VICAP_SHIFT          (11U)
#define CRU_SOFTRST_CON53_RESETN_ISP0_VICAP_MASK           (0x1U << CRU_SOFTRST_CON53_RESETN_ISP0_VICAP_SHIFT)          /* 0x00000800 */
/* SOFTRST_CON54 */
#define CRU_SOFTRST_CON54_OFFSET                           (0xAD8U)
#define CRU_SOFTRST_CON54_RESETN_CORE_VPSS_SHIFT           (1U)
#define CRU_SOFTRST_CON54_RESETN_CORE_VPSS_MASK            (0x1U << CRU_SOFTRST_CON54_RESETN_CORE_VPSS_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_0_SHIFT         (4U)
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_0_MASK          (0x1U << CRU_SOFTRST_CON54_PRESETN_CSI_HOST_0_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_1_SHIFT         (5U)
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_1_MASK          (0x1U << CRU_SOFTRST_CON54_PRESETN_CSI_HOST_1_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_2_SHIFT         (6U)
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_2_MASK          (0x1U << CRU_SOFTRST_CON54_PRESETN_CSI_HOST_2_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_3_SHIFT         (7U)
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_3_MASK          (0x1U << CRU_SOFTRST_CON54_PRESETN_CSI_HOST_3_SHIFT)         /* 0x00000080 */
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_4_SHIFT         (8U)
#define CRU_SOFTRST_CON54_PRESETN_CSI_HOST_4_MASK          (0x1U << CRU_SOFTRST_CON54_PRESETN_CSI_HOST_4_SHIFT)         /* 0x00000100 */
/* SOFTRST_CON59 */
#define CRU_SOFTRST_CON59_OFFSET                           (0xAECU)
#define CRU_SOFTRST_CON59_RESETN_CIFIN_SHIFT               (0U)
#define CRU_SOFTRST_CON59_RESETN_CIFIN_MASK                (0x1U << CRU_SOFTRST_CON59_RESETN_CIFIN_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON59_RESETN_VICAP_I0CLK_SHIFT         (1U)
#define CRU_SOFTRST_CON59_RESETN_VICAP_I0CLK_MASK          (0x1U << CRU_SOFTRST_CON59_RESETN_VICAP_I0CLK_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON59_RESETN_VICAP_I1CLK_SHIFT         (2U)
#define CRU_SOFTRST_CON59_RESETN_VICAP_I1CLK_MASK          (0x1U << CRU_SOFTRST_CON59_RESETN_VICAP_I1CLK_SHIFT)         /* 0x00000004 */
#define CRU_SOFTRST_CON59_RESETN_VICAP_I2CLK_SHIFT         (3U)
#define CRU_SOFTRST_CON59_RESETN_VICAP_I2CLK_MASK          (0x1U << CRU_SOFTRST_CON59_RESETN_VICAP_I2CLK_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON59_RESETN_VICAP_I3CLK_SHIFT         (4U)
#define CRU_SOFTRST_CON59_RESETN_VICAP_I3CLK_MASK          (0x1U << CRU_SOFTRST_CON59_RESETN_VICAP_I3CLK_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON59_RESETN_VICAP_I4CLK_SHIFT         (5U)
#define CRU_SOFTRST_CON59_RESETN_VICAP_I4CLK_MASK          (0x1U << CRU_SOFTRST_CON59_RESETN_VICAP_I4CLK_SHIFT)         /* 0x00000020 */
/* SOFTRST_CON61 */
#define CRU_SOFTRST_CON61_OFFSET                           (0xAF4U)
#define CRU_SOFTRST_CON61_ARESETN_VOP_BIU_SHIFT            (4U)
#define CRU_SOFTRST_CON61_ARESETN_VOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON61_ARESETN_VOP_BIU_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON61_ARESETN_VOP2_BIU_SHIFT           (5U)
#define CRU_SOFTRST_CON61_ARESETN_VOP2_BIU_MASK            (0x1U << CRU_SOFTRST_CON61_ARESETN_VOP2_BIU_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON61_HRESETN_VOP_BIU_SHIFT            (6U)
#define CRU_SOFTRST_CON61_HRESETN_VOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON61_HRESETN_VOP_BIU_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON61_PRESETN_VOP_BIU_SHIFT            (7U)
#define CRU_SOFTRST_CON61_PRESETN_VOP_BIU_MASK             (0x1U << CRU_SOFTRST_CON61_PRESETN_VOP_BIU_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON61_HRESETN_VOP_SHIFT                (8U)
#define CRU_SOFTRST_CON61_HRESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON61_HRESETN_VOP_SHIFT)                /* 0x00000100 */
#define CRU_SOFTRST_CON61_ARESETN_VOP_SHIFT                (9U)
#define CRU_SOFTRST_CON61_ARESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON61_ARESETN_VOP_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON61_DRESETN_VP0_SHIFT                (13U)
#define CRU_SOFTRST_CON61_DRESETN_VP0_MASK                 (0x1U << CRU_SOFTRST_CON61_DRESETN_VP0_SHIFT)                /* 0x00002000 */
/* SOFTRST_CON62 */
#define CRU_SOFTRST_CON62_OFFSET                           (0xAF8U)
#define CRU_SOFTRST_CON62_DRESETN_VP1_SHIFT                (0U)
#define CRU_SOFTRST_CON62_DRESETN_VP1_MASK                 (0x1U << CRU_SOFTRST_CON62_DRESETN_VP1_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON62_DRESETN_VP2_SHIFT                (1U)
#define CRU_SOFTRST_CON62_DRESETN_VP2_MASK                 (0x1U << CRU_SOFTRST_CON62_DRESETN_VP2_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON62_PRESETN_VOP2_BIU_SHIFT           (2U)
#define CRU_SOFTRST_CON62_PRESETN_VOP2_BIU_MASK            (0x1U << CRU_SOFTRST_CON62_PRESETN_VOP2_BIU_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON62_PRESETN_VOPGRF_SHIFT             (3U)
#define CRU_SOFTRST_CON62_PRESETN_VOPGRF_MASK              (0x1U << CRU_SOFTRST_CON62_PRESETN_VOPGRF_SHIFT)             /* 0x00000008 */
/* SOFTRST_CON63 */
#define CRU_SOFTRST_CON63_OFFSET                           (0xAFCU)
#define CRU_SOFTRST_CON63_HRESETN_VO0_BIU_SHIFT            (5U)
#define CRU_SOFTRST_CON63_HRESETN_VO0_BIU_MASK             (0x1U << CRU_SOFTRST_CON63_HRESETN_VO0_BIU_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON63_PRESETN_VO0_BIU_SHIFT            (7U)
#define CRU_SOFTRST_CON63_PRESETN_VO0_BIU_MASK             (0x1U << CRU_SOFTRST_CON63_PRESETN_VO0_BIU_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON63_ARESETN_HDCP0_BIU_SHIFT          (9U)
#define CRU_SOFTRST_CON63_ARESETN_HDCP0_BIU_MASK           (0x1U << CRU_SOFTRST_CON63_ARESETN_HDCP0_BIU_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON63_PRESETN_VO0_GRF_SHIFT            (10U)
#define CRU_SOFTRST_CON63_PRESETN_VO0_GRF_MASK             (0x1U << CRU_SOFTRST_CON63_PRESETN_VO0_GRF_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON63_ARESETN_HDCP0_SHIFT              (12U)
#define CRU_SOFTRST_CON63_ARESETN_HDCP0_MASK               (0x1U << CRU_SOFTRST_CON63_ARESETN_HDCP0_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON63_HRESETN_HDCP0_SHIFT              (13U)
#define CRU_SOFTRST_CON63_HRESETN_HDCP0_MASK               (0x1U << CRU_SOFTRST_CON63_HRESETN_HDCP0_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON63_RESETN_HDCP0_SHIFT               (14U)
#define CRU_SOFTRST_CON63_RESETN_HDCP0_MASK                (0x1U << CRU_SOFTRST_CON63_RESETN_HDCP0_SHIFT)               /* 0x00004000 */
/* SOFTRST_CON64 */
#define CRU_SOFTRST_CON64_OFFSET                           (0xB00U)
#define CRU_SOFTRST_CON64_PRESETN_DSIHOST0_SHIFT           (5U)
#define CRU_SOFTRST_CON64_PRESETN_DSIHOST0_MASK            (0x1U << CRU_SOFTRST_CON64_PRESETN_DSIHOST0_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON64_RESETN_DSIHOST0_SHIFT            (6U)
#define CRU_SOFTRST_CON64_RESETN_DSIHOST0_MASK             (0x1U << CRU_SOFTRST_CON64_RESETN_DSIHOST0_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON64_PRESETN_HDMITX0_SHIFT            (7U)
#define CRU_SOFTRST_CON64_PRESETN_HDMITX0_MASK             (0x1U << CRU_SOFTRST_CON64_PRESETN_HDMITX0_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON64_RESETN_HDMITX0_REF_SHIFT         (9U)
#define CRU_SOFTRST_CON64_RESETN_HDMITX0_REF_MASK          (0x1U << CRU_SOFTRST_CON64_RESETN_HDMITX0_REF_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON64_PRESETN_EDP0_SHIFT               (13U)
#define CRU_SOFTRST_CON64_PRESETN_EDP0_MASK                (0x1U << CRU_SOFTRST_CON64_PRESETN_EDP0_SHIFT)               /* 0x00002000 */
#define CRU_SOFTRST_CON64_RESETN_EDP0_24M_SHIFT            (14U)
#define CRU_SOFTRST_CON64_RESETN_EDP0_24M_MASK             (0x1U << CRU_SOFTRST_CON64_RESETN_EDP0_24M_SHIFT)            /* 0x00004000 */
/* SOFTRST_CON65 */
#define CRU_SOFTRST_CON65_OFFSET                           (0xB04U)
#define CRU_SOFTRST_CON65_MRESETN_SAI5_8CH_SHIFT           (4U)
#define CRU_SOFTRST_CON65_MRESETN_SAI5_8CH_MASK            (0x1U << CRU_SOFTRST_CON65_MRESETN_SAI5_8CH_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON65_HRESETN_SAI5_8CH_SHIFT           (5U)
#define CRU_SOFTRST_CON65_HRESETN_SAI5_8CH_MASK            (0x1U << CRU_SOFTRST_CON65_HRESETN_SAI5_8CH_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON65_MRESETN_SAI6_8CH_SHIFT           (8U)
#define CRU_SOFTRST_CON65_MRESETN_SAI6_8CH_MASK            (0x1U << CRU_SOFTRST_CON65_MRESETN_SAI6_8CH_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON65_HRESETN_SAI6_8CH_SHIFT           (9U)
#define CRU_SOFTRST_CON65_HRESETN_SAI6_8CH_MASK            (0x1U << CRU_SOFTRST_CON65_HRESETN_SAI6_8CH_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON65_HRESETN_SPDIF_TX2_SHIFT          (10U)
#define CRU_SOFTRST_CON65_HRESETN_SPDIF_TX2_MASK           (0x1U << CRU_SOFTRST_CON65_HRESETN_SPDIF_TX2_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON65_MRESETN_SPDIF_TX2_SHIFT          (13U)
#define CRU_SOFTRST_CON65_MRESETN_SPDIF_TX2_MASK           (0x1U << CRU_SOFTRST_CON65_MRESETN_SPDIF_TX2_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON65_HRESETN_SPDIFRX2_SHIFT           (14U)
#define CRU_SOFTRST_CON65_HRESETN_SPDIFRX2_MASK            (0x1U << CRU_SOFTRST_CON65_HRESETN_SPDIFRX2_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON65_MRESETN_SPDIFRX2_SHIFT           (15U)
#define CRU_SOFTRST_CON65_MRESETN_SPDIFRX2_MASK            (0x1U << CRU_SOFTRST_CON65_MRESETN_SPDIFRX2_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON66 */
#define CRU_SOFTRST_CON66_OFFSET                           (0xB08U)
#define CRU_SOFTRST_CON66_HRESETN_SAI8_8CH_SHIFT           (0U)
#define CRU_SOFTRST_CON66_HRESETN_SAI8_8CH_MASK            (0x1U << CRU_SOFTRST_CON66_HRESETN_SAI8_8CH_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON66_MRESETN_SAI8_8CH_SHIFT           (2U)
#define CRU_SOFTRST_CON66_MRESETN_SAI8_8CH_MASK            (0x1U << CRU_SOFTRST_CON66_MRESETN_SAI8_8CH_SHIFT)           /* 0x00000004 */
/* SOFTRST_CON67 */
#define CRU_SOFTRST_CON67_OFFSET                           (0xB0CU)
#define CRU_SOFTRST_CON67_HRESETN_VO1_BIU_SHIFT            (5U)
#define CRU_SOFTRST_CON67_HRESETN_VO1_BIU_MASK             (0x1U << CRU_SOFTRST_CON67_HRESETN_VO1_BIU_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON67_PRESETN_VO1_BIU_SHIFT            (6U)
#define CRU_SOFTRST_CON67_PRESETN_VO1_BIU_MASK             (0x1U << CRU_SOFTRST_CON67_PRESETN_VO1_BIU_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON67_MRESETN_SAI7_8CH_SHIFT           (9U)
#define CRU_SOFTRST_CON67_MRESETN_SAI7_8CH_MASK            (0x1U << CRU_SOFTRST_CON67_MRESETN_SAI7_8CH_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON67_HRESETN_SAI7_8CH_SHIFT           (10U)
#define CRU_SOFTRST_CON67_HRESETN_SAI7_8CH_MASK            (0x1U << CRU_SOFTRST_CON67_HRESETN_SAI7_8CH_SHIFT)           /* 0x00000400 */
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX3_SHIFT          (11U)
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX3_MASK           (0x1U << CRU_SOFTRST_CON67_HRESETN_SPDIF_TX3_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX4_SHIFT          (12U)
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX4_MASK           (0x1U << CRU_SOFTRST_CON67_HRESETN_SPDIF_TX4_SHIFT)          /* 0x00001000 */
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX5_SHIFT          (13U)
#define CRU_SOFTRST_CON67_HRESETN_SPDIF_TX5_MASK           (0x1U << CRU_SOFTRST_CON67_HRESETN_SPDIF_TX5_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON67_MRESETN_SPDIF_TX3_SHIFT          (14U)
#define CRU_SOFTRST_CON67_MRESETN_SPDIF_TX3_MASK           (0x1U << CRU_SOFTRST_CON67_MRESETN_SPDIF_TX3_SHIFT)          /* 0x00004000 */
/* SOFTRST_CON68 */
#define CRU_SOFTRST_CON68_OFFSET                           (0xB10U)
#define CRU_SOFTRST_CON68_RESETN_DP0_SHIFT                 (0U)
#define CRU_SOFTRST_CON68_RESETN_DP0_MASK                  (0x1U << CRU_SOFTRST_CON68_RESETN_DP0_SHIFT)                 /* 0x00000001 */
#define CRU_SOFTRST_CON68_PRESETN_VO1_GRF_SHIFT            (2U)
#define CRU_SOFTRST_CON68_PRESETN_VO1_GRF_MASK             (0x1U << CRU_SOFTRST_CON68_PRESETN_VO1_GRF_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON68_ARESETN_HDCP1_BIU_SHIFT          (3U)
#define CRU_SOFTRST_CON68_ARESETN_HDCP1_BIU_MASK           (0x1U << CRU_SOFTRST_CON68_ARESETN_HDCP1_BIU_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON68_ARESETN_HDCP1_SHIFT              (4U)
#define CRU_SOFTRST_CON68_ARESETN_HDCP1_MASK               (0x1U << CRU_SOFTRST_CON68_ARESETN_HDCP1_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON68_HRESETN_HDCP1_SHIFT              (5U)
#define CRU_SOFTRST_CON68_HRESETN_HDCP1_MASK               (0x1U << CRU_SOFTRST_CON68_HRESETN_HDCP1_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON68_RESETN_HDCP1_SHIFT               (6U)
#define CRU_SOFTRST_CON68_RESETN_HDCP1_MASK                (0x1U << CRU_SOFTRST_CON68_RESETN_HDCP1_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON68_HRESETN_SAI9_8CH_SHIFT           (9U)
#define CRU_SOFTRST_CON68_HRESETN_SAI9_8CH_MASK            (0x1U << CRU_SOFTRST_CON68_HRESETN_SAI9_8CH_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON68_MRESETN_SAI9_8CH_SHIFT           (11U)
#define CRU_SOFTRST_CON68_MRESETN_SAI9_8CH_MASK            (0x1U << CRU_SOFTRST_CON68_MRESETN_SAI9_8CH_SHIFT)           /* 0x00000800 */
#define CRU_SOFTRST_CON68_MRESETN_SPDIF_TX4_SHIFT          (12U)
#define CRU_SOFTRST_CON68_MRESETN_SPDIF_TX4_MASK           (0x1U << CRU_SOFTRST_CON68_MRESETN_SPDIF_TX4_SHIFT)          /* 0x00001000 */
#define CRU_SOFTRST_CON68_MRESETN_SPDIF_TX5_SHIFT          (13U)
#define CRU_SOFTRST_CON68_MRESETN_SPDIF_TX5_MASK           (0x1U << CRU_SOFTRST_CON68_MRESETN_SPDIF_TX5_SHIFT)          /* 0x00002000 */
/* SOFTRST_CON69 */
#define CRU_SOFTRST_CON69_OFFSET                           (0xB14U)
#define CRU_SOFTRST_CON69_RESETN_GPU_SHIFT                 (3U)
#define CRU_SOFTRST_CON69_RESETN_GPU_MASK                  (0x1U << CRU_SOFTRST_CON69_RESETN_GPU_SHIFT)                 /* 0x00000008 */
#define CRU_SOFTRST_CON69_ARESETN_S_GPU_BIU_SHIFT          (6U)
#define CRU_SOFTRST_CON69_ARESETN_S_GPU_BIU_MASK           (0x1U << CRU_SOFTRST_CON69_ARESETN_S_GPU_BIU_SHIFT)          /* 0x00000040 */
#define CRU_SOFTRST_CON69_ARESETN_M0_GPU_BIU_SHIFT         (7U)
#define CRU_SOFTRST_CON69_ARESETN_M0_GPU_BIU_MASK          (0x1U << CRU_SOFTRST_CON69_ARESETN_M0_GPU_BIU_SHIFT)         /* 0x00000080 */
#define CRU_SOFTRST_CON69_PRESETN_GPU_BIU_SHIFT            (9U)
#define CRU_SOFTRST_CON69_PRESETN_GPU_BIU_MASK             (0x1U << CRU_SOFTRST_CON69_PRESETN_GPU_BIU_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON69_PRESETN_GPU_GRF_SHIFT            (13U)
#define CRU_SOFTRST_CON69_PRESETN_GPU_GRF_MASK             (0x1U << CRU_SOFTRST_CON69_PRESETN_GPU_GRF_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON69_RESETN_GPU_PVTPLL_SHIFT          (14U)
#define CRU_SOFTRST_CON69_RESETN_GPU_PVTPLL_MASK           (0x1U << CRU_SOFTRST_CON69_RESETN_GPU_PVTPLL_SHIFT)          /* 0x00004000 */
#define CRU_SOFTRST_CON69_PRESETN_PVTPLL_GPU_SHIFT         (15U)
#define CRU_SOFTRST_CON69_PRESETN_PVTPLL_GPU_MASK          (0x1U << CRU_SOFTRST_CON69_PRESETN_PVTPLL_GPU_SHIFT)         /* 0x00008000 */
/* SOFTRST_CON72 */
#define CRU_SOFTRST_CON72_OFFSET                           (0xB20U)
#define CRU_SOFTRST_CON72_ARESETN_CENTER_BIU_SHIFT         (4U)
#define CRU_SOFTRST_CON72_ARESETN_CENTER_BIU_MASK          (0x1U << CRU_SOFTRST_CON72_ARESETN_CENTER_BIU_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON72_ARESETN_DMA2DDR_SHIFT            (5U)
#define CRU_SOFTRST_CON72_ARESETN_DMA2DDR_MASK             (0x1U << CRU_SOFTRST_CON72_ARESETN_DMA2DDR_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_SHIFT       (6U)
#define CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_MASK        (0x1U << CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_SHIFT)       /* 0x00000040 */
#define CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_BIU_SHIFT   (7U)
#define CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_BIU_MASK    (0x1U << CRU_SOFTRST_CON72_ARESETN_DDR_SHAREMEM_BIU_SHIFT)   /* 0x00000080 */
#define CRU_SOFTRST_CON72_HRESETN_CENTER_BIU_SHIFT         (8U)
#define CRU_SOFTRST_CON72_HRESETN_CENTER_BIU_MASK          (0x1U << CRU_SOFTRST_CON72_HRESETN_CENTER_BIU_SHIFT)         /* 0x00000100 */
#define CRU_SOFTRST_CON72_PRESETN_CENTER_GRF_SHIFT         (9U)
#define CRU_SOFTRST_CON72_PRESETN_CENTER_GRF_MASK          (0x1U << CRU_SOFTRST_CON72_PRESETN_CENTER_GRF_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON72_PRESETN_DMA2DDR_SHIFT            (10U)
#define CRU_SOFTRST_CON72_PRESETN_DMA2DDR_MASK             (0x1U << CRU_SOFTRST_CON72_PRESETN_DMA2DDR_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON72_PRESETN_SHAREMEM_SHIFT           (11U)
#define CRU_SOFTRST_CON72_PRESETN_SHAREMEM_MASK            (0x1U << CRU_SOFTRST_CON72_PRESETN_SHAREMEM_SHIFT)           /* 0x00000800 */
#define CRU_SOFTRST_CON72_PRESETN_CENTER_BIU_SHIFT         (12U)
#define CRU_SOFTRST_CON72_PRESETN_CENTER_BIU_MASK          (0x1U << CRU_SOFTRST_CON72_PRESETN_CENTER_BIU_SHIFT)         /* 0x00001000 */
/* SOFTRST_CON75 */
#define CRU_SOFTRST_CON75_OFFSET                           (0xB2CU)
#define CRU_SOFTRST_CON75_RESETN_LINKSYM_HDMITXPHY0_SHIFT  (1U)
#define CRU_SOFTRST_CON75_RESETN_LINKSYM_HDMITXPHY0_MASK   (0x1U << CRU_SOFTRST_CON75_RESETN_LINKSYM_HDMITXPHY0_SHIFT)  /* 0x00000002 */
/* SOFTRST_CON78 */
#define CRU_SOFTRST_CON78_OFFSET                           (0xB38U)
#define CRU_SOFTRST_CON78_RESETN_DP0_PIXELCLK_SHIFT        (1U)
#define CRU_SOFTRST_CON78_RESETN_DP0_PIXELCLK_MASK         (0x1U << CRU_SOFTRST_CON78_RESETN_DP0_PIXELCLK_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON78_RESETN_PHY_DP0_TX_SHIFT          (2U)
#define CRU_SOFTRST_CON78_RESETN_PHY_DP0_TX_MASK           (0x1U << CRU_SOFTRST_CON78_RESETN_PHY_DP0_TX_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON78_RESETN_DP1_PIXELCLK_SHIFT        (3U)
#define CRU_SOFTRST_CON78_RESETN_DP1_PIXELCLK_MASK         (0x1U << CRU_SOFTRST_CON78_RESETN_DP1_PIXELCLK_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON78_RESETN_DP2_PIXELCLK_SHIFT        (4U)
#define CRU_SOFTRST_CON78_RESETN_DP2_PIXELCLK_MASK         (0x1U << CRU_SOFTRST_CON78_RESETN_DP2_PIXELCLK_SHIFT)        /* 0x00000010 */
/* SOFTRST_CON79 */
#define CRU_SOFTRST_CON79_OFFSET                           (0xB3CU)
#define CRU_SOFTRST_CON79_HRESETN_VEPU1_BIU_SHIFT          (1U)
#define CRU_SOFTRST_CON79_HRESETN_VEPU1_BIU_MASK           (0x1U << CRU_SOFTRST_CON79_HRESETN_VEPU1_BIU_SHIFT)          /* 0x00000002 */
#define CRU_SOFTRST_CON79_ARESETN_VEPU1_BIU_SHIFT          (2U)
#define CRU_SOFTRST_CON79_ARESETN_VEPU1_BIU_MASK           (0x1U << CRU_SOFTRST_CON79_ARESETN_VEPU1_BIU_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON79_HRESETN_VEPU1_SHIFT              (3U)
#define CRU_SOFTRST_CON79_HRESETN_VEPU1_MASK               (0x1U << CRU_SOFTRST_CON79_HRESETN_VEPU1_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON79_ARESETN_VEPU1_SHIFT              (4U)
#define CRU_SOFTRST_CON79_ARESETN_VEPU1_MASK               (0x1U << CRU_SOFTRST_CON79_ARESETN_VEPU1_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON79_RESETN_VEPU1_CORE_SHIFT          (5U)
#define CRU_SOFTRST_CON79_RESETN_VEPU1_CORE_MASK           (0x1U << CRU_SOFTRST_CON79_RESETN_VEPU1_CORE_SHIFT)          /* 0x00000020 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0xC00U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0x3FFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x000003FF */
/* GLBRST_ST */
#define CRU_GLBRST_ST_OFFSET                               (0xC04U)
#define CRU_GLBRST_ST_FIRST_GLBRST_REGISTER_RST_SHIFT      (0U)
#define CRU_GLBRST_ST_FIRST_GLBRST_REGISTER_RST_MASK       (0x1U << CRU_GLBRST_ST_FIRST_GLBRST_REGISTER_RST_SHIFT)      /* 0x00000001 */
#define CRU_GLBRST_ST_SECOND_GLBRST_REGISTER_RST_SHIFT     (1U)
#define CRU_GLBRST_ST_SECOND_GLBRST_REGISTER_RST_MASK      (0x1U << CRU_GLBRST_ST_SECOND_GLBRST_REGISTER_RST_SHIFT)     /* 0x00000002 */
#define CRU_GLBRST_ST_FIRST_GLBRST_TSADC_RST_SHIFT         (2U)
#define CRU_GLBRST_ST_FIRST_GLBRST_TSADC_RST_MASK          (0x1U << CRU_GLBRST_ST_FIRST_GLBRST_TSADC_RST_SHIFT)         /* 0x00000004 */
#define CRU_GLBRST_ST_SECOND_GLBRST_TSADC_RST_SHIFT        (3U)
#define CRU_GLBRST_ST_SECOND_GLBRST_TSADC_RST_MASK         (0x1U << CRU_GLBRST_ST_SECOND_GLBRST_TSADC_RST_SHIFT)        /* 0x00000008 */
#define CRU_GLBRST_ST_FIRST_GLBRST_WDT_RST_SHIFT           (4U)
#define CRU_GLBRST_ST_FIRST_GLBRST_WDT_RST_MASK            (0x1U << CRU_GLBRST_ST_FIRST_GLBRST_WDT_RST_SHIFT)           /* 0x00000010 */
#define CRU_GLBRST_ST_SECOND_GLBRST_WDT_RST_SHIFT          (5U)
#define CRU_GLBRST_ST_SECOND_GLBRST_WDT_RST_MASK           (0x1U << CRU_GLBRST_ST_SECOND_GLBRST_WDT_RST_SHIFT)          /* 0x00000020 */
#define CRU_GLBRST_ST_GLBRST_WDT_RST_SHIFT                 (6U)
#define CRU_GLBRST_ST_GLBRST_WDT_RST_MASK                  (0x1U << CRU_GLBRST_ST_GLBRST_WDT_RST_SHIFT)                 /* 0x00000040 */
#define CRU_GLBRST_ST_GLBRST_OSC_CHK_RST_SHIFT             (7U)
#define CRU_GLBRST_ST_GLBRST_OSC_CHK_RST_MASK              (0x1U << CRU_GLBRST_ST_GLBRST_OSC_CHK_RST_SHIFT)             /* 0x00000080 */
#define CRU_GLBRST_ST_GLBRST_SGRF_CRC_CHK_RST_SHIFT        (8U)
#define CRU_GLBRST_ST_GLBRST_SGRF_CRC_CHK_RST_MASK         (0x1U << CRU_GLBRST_ST_GLBRST_SGRF_CRC_CHK_RST_SHIFT)        /* 0x00000100 */
#define CRU_GLBRST_ST_GLBRST_WDT0_RST_SHIFT                (10U)
#define CRU_GLBRST_ST_GLBRST_WDT0_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT0_RST_SHIFT)                /* 0x00000400 */
#define CRU_GLBRST_ST_GLBRST_WDT1_RST_SHIFT                (11U)
#define CRU_GLBRST_ST_GLBRST_WDT1_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT1_RST_SHIFT)                /* 0x00000800 */
#define CRU_GLBRST_ST_GLBRST_WDT2_RST_SHIFT                (12U)
#define CRU_GLBRST_ST_GLBRST_WDT2_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT2_RST_SHIFT)                /* 0x00001000 */
#define CRU_GLBRST_ST_GLBRST_WDT3_RST_SHIFT                (13U)
#define CRU_GLBRST_ST_GLBRST_WDT3_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT3_RST_SHIFT)                /* 0x00002000 */
#define CRU_GLBRST_ST_GLBRST_WDT4_RST_SHIFT                (14U)
#define CRU_GLBRST_ST_GLBRST_WDT4_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT4_RST_SHIFT)                /* 0x00004000 */
#define CRU_GLBRST_ST_GLBRST_WDT5_RST_SHIFT                (15U)
#define CRU_GLBRST_ST_GLBRST_WDT5_RST_MASK                 (0x1U << CRU_GLBRST_ST_GLBRST_WDT5_RST_SHIFT)                /* 0x00008000 */
/* GLB_SRST_FST_VALUE */
#define CRU_GLB_SRST_FST_VALUE_OFFSET                      (0xC08U)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRSC_FIRST_VALUE_SHIFT  (0U)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRSC_FIRST_VALUE_MASK   (0xFFFFU << CRU_GLB_SRST_FST_VALUE_GLB_SRSC_FIRST_VALUE_SHIFT) /* 0x0000FFFF */
/* GLB_SRST_SND_VALUE */
#define CRU_GLB_SRST_SND_VALUE_OFFSET                      (0xC0CU)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRSC_SECOND_VALUE_SHIFT (0U)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRSC_SECOND_VALUE_MASK  (0xFFFFU << CRU_GLB_SRST_SND_VALUE_GLB_SRSC_SECOND_VALUE_SHIFT) /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0xC10U)
#define CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_SEL_SHIFT        (0U)
#define CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_SEL_MASK         (0x1U << CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_SEL_SHIFT)        /* 0x00000001 */
#define CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_EN_SHIFT         (1U)
#define CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_EN_MASK          (0x1U << CRU_GLB_RST_CON_TSADC_TRIG_GLBRST_EN_SHIFT)         /* 0x00000002 */
#define CRU_GLB_RST_CON_GLBRST_TRIG_PMU_SEL_SHIFT          (2U)
#define CRU_GLB_RST_CON_GLBRST_TRIG_PMU_SEL_MASK           (0x1U << CRU_GLB_RST_CON_GLBRST_TRIG_PMU_SEL_SHIFT)          /* 0x00000004 */
#define CRU_GLB_RST_CON_GLBRST_TRIG_PMU_EN_SHIFT           (3U)
#define CRU_GLB_RST_CON_GLBRST_TRIG_PMU_EN_MASK            (0x1U << CRU_GLB_RST_CON_GLBRST_TRIG_PMU_EN_SHIFT)           /* 0x00000008 */
#define CRU_GLB_RST_CON_WDT_TRIG_PMU_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_WDT_TRIG_PMU_EN_MASK               (0x1U << CRU_GLB_RST_CON_WDT_TRIG_PMU_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_WDT_TRIG_GLBRST_EN_SHIFT           (6U)
#define CRU_GLB_RST_CON_WDT_TRIG_GLBRST_EN_MASK            (0x1U << CRU_GLB_RST_CON_WDT_TRIG_GLBRST_EN_SHIFT)           /* 0x00000040 */
#define CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_EN_SHIFT       (7U)
#define CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_EN_MASK        (0x1U << CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_EN_SHIFT)       /* 0x00000080 */
#define CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_EN_SHIFT  (8U)
#define CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_EN_MASK   (0x1U << CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_EN_SHIFT)  /* 0x00000100 */
#define CRU_GLB_RST_CON_WDT_TRIG_GLBRST_SEL_SHIFT          (11U)
#define CRU_GLB_RST_CON_WDT_TRIG_GLBRST_SEL_MASK           (0x1U << CRU_GLB_RST_CON_WDT_TRIG_GLBRST_SEL_SHIFT)          /* 0x00000800 */
#define CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_SEL_SHIFT      (12U)
#define CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_SEL_MASK       (0x1U << CRU_GLB_RST_CON_OSC_CHK_TRIG_GLBRST_SEL_SHIFT)      /* 0x00001000 */
#define CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_SEL_SHIFT (13U)
#define CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_SEL_MASK  (0x1U << CRU_GLB_RST_CON_CRC_CHK_SGRF_TRIG_GLBRST_SEL_SHIFT) /* 0x00002000 */
/* GLBRST_ST_NCLR */
#define CRU_GLBRST_ST_NCLR_OFFSET                          (0xC14U)
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_REGISTER_RST_SHIFT (0U)
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_REGISTER_RST_MASK  (0x1U << CRU_GLBRST_ST_NCLR_FIRST_GLBRST_REGISTER_RST_SHIFT) /* 0x00000001 */
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_REGISTER_RST_SHIFT (1U)
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_REGISTER_RST_MASK (0x1U << CRU_GLBRST_ST_NCLR_SECOND_GLBRST_REGISTER_RST_SHIFT) /* 0x00000002 */
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_TSADC_RST_SHIFT    (2U)
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_TSADC_RST_MASK     (0x1U << CRU_GLBRST_ST_NCLR_FIRST_GLBRST_TSADC_RST_SHIFT)    /* 0x00000004 */
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_TSADC_RST_SHIFT   (3U)
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_TSADC_RST_MASK    (0x1U << CRU_GLBRST_ST_NCLR_SECOND_GLBRST_TSADC_RST_SHIFT)   /* 0x00000008 */
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_WDT_RST_SHIFT      (4U)
#define CRU_GLBRST_ST_NCLR_FIRST_GLBRST_WDT_RST_MASK       (0x1U << CRU_GLBRST_ST_NCLR_FIRST_GLBRST_WDT_RST_SHIFT)      /* 0x00000010 */
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_WDT_RST_SHIFT     (5U)
#define CRU_GLBRST_ST_NCLR_SECOND_GLBRST_WDT_RST_MASK      (0x1U << CRU_GLBRST_ST_NCLR_SECOND_GLBRST_WDT_RST_SHIFT)     /* 0x00000020 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT_RST_SHIFT            (6U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT_RST_MASK             (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT_RST_SHIFT)            /* 0x00000040 */
#define CRU_GLBRST_ST_NCLR_GLBRST_OSC_CHK_RST_SHIFT        (7U)
#define CRU_GLBRST_ST_NCLR_GLBRST_OSC_CHK_RST_MASK         (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_OSC_CHK_RST_SHIFT)        /* 0x00000080 */
#define CRU_GLBRST_ST_NCLR_GLBRST_SGRF_CRC_CHK_RST_SHIFT   (8U)
#define CRU_GLBRST_ST_NCLR_GLBRST_SGRF_CRC_CHK_RST_MASK    (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_SGRF_CRC_CHK_RST_SHIFT)   /* 0x00000100 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT0_RST_SHIFT           (10U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT0_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT0_RST_SHIFT)           /* 0x00000400 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT1_RST_SHIFT           (11U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT1_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT1_RST_SHIFT)           /* 0x00000800 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT2_RST_SHIFT           (12U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT2_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT2_RST_SHIFT)           /* 0x00001000 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT3_RST_SHIFT           (13U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT3_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT3_RST_SHIFT)           /* 0x00002000 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT4_RST_SHIFT           (14U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT4_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT4_RST_SHIFT)           /* 0x00004000 */
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT5_RST_SHIFT           (15U)
#define CRU_GLBRST_ST_NCLR_GLBRST_WDT5_RST_MASK            (0x1U << CRU_GLBRST_ST_NCLR_GLBRST_WDT5_RST_SHIFT)           /* 0x00008000 */
/* CRU_NON_SECURE_GATING_CON00 */
#define CRU_CRU_NON_SECURE_GATING_CON00_OFFSET             (0xC48U)
#define CRU_CRU_NON_SECURE_GATING_CON00_HCLK_TRNG_S_EN_NSCTRL_SHIFT (13U)
#define CRU_CRU_NON_SECURE_GATING_CON00_HCLK_TRNG_S_EN_NSCTRL_MASK (0x1U << CRU_CRU_NON_SECURE_GATING_CON00_HCLK_TRNG_S_EN_NSCTRL_SHIFT) /* 0x00002000 */
#define CRU_CRU_NON_SECURE_GATING_CON00_ACLK_CRYPTO_S_EN_NSCTRL_SHIFT (14U)
#define CRU_CRU_NON_SECURE_GATING_CON00_ACLK_CRYPTO_S_EN_NSCTRL_MASK (0x1U << CRU_CRU_NON_SECURE_GATING_CON00_ACLK_CRYPTO_S_EN_NSCTRL_SHIFT) /* 0x00004000 */
#define CRU_CRU_NON_SECURE_GATING_CON00_CLK_PKA_CRYPTO_S_EN_NSCTRL_SHIFT (1U)
#define CRU_CRU_NON_SECURE_GATING_CON00_CLK_PKA_CRYPTO_S_EN_NSCTRL_MASK (0x1U << CRU_CRU_NON_SECURE_GATING_CON00_CLK_PKA_CRYPTO_S_EN_NSCTRL_SHIFT) /* 0x00000002 */
/* QCHANNEL_CON01 */
#define CRU_QCHANNEL_CON01_OFFSET                          (0xCA4U)
#define CRU_QCHANNEL_CON01_CLK_GPU_QC_EN_SHIFT             (6U)
#define CRU_QCHANNEL_CON01_CLK_GPU_QC_EN_MASK              (0x1U << CRU_QCHANNEL_CON01_CLK_GPU_QC_EN_SHIFT)             /* 0x00000040 */
#define CRU_QCHANNEL_CON01_CLK_GPU_QC_GATE_EN_SHIFT        (7U)
#define CRU_QCHANNEL_CON01_CLK_GPU_QC_GATE_EN_MASK         (0x1U << CRU_QCHANNEL_CON01_CLK_GPU_QC_GATE_EN_SHIFT)        /* 0x00000080 */
/* SMOTH_DIVFREE_CON00 */
#define CRU_SMOTH_DIVFREE_CON00_OFFSET                     (0xCC0U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_STEP_SHIFT   (0U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_STEP_MASK    (0x1FU << CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_STEP_SHIFT)  /* 0x0000001F */
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_SMDIV_CLK_OFF_SHIFT (13U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_SMDIV_CLK_OFF_MASK (0x1U << CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_SMDIV_CLK_OFF_SHIFT) /* 0x00002000 */
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_GATE_SMTH_EN_SHIFT (14U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_GATE_SMTH_EN_MASK (0x1U << CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_GATE_SMTH_EN_SHIFT) /* 0x00004000 */
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_BYPASS_SHIFT (15U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_BYPASS_MASK  (0x1U << CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_BYPASS_SHIFT) /* 0x00008000 */
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_FREQ_KEEP_SHIFT (16U)
#define CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_FREQ_KEEP_MASK (0xFFFFU << CRU_SMOTH_DIVFREE_CON00_CLK_RKNN_DSU0_FREQ_KEEP_SHIFT) /* 0xFFFF0000 */
/* SMOTH_DIVFREE_CON01 */
#define CRU_SMOTH_DIVFREE_CON01_OFFSET                     (0xCC4U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_STEP_SHIFT  (0U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_STEP_MASK   (0x1FU << CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_STEP_SHIFT) /* 0x0000001F */
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_SMDIV_CLK_OFF_SHIFT (13U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_SMDIV_CLK_OFF_MASK (0x1U << CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_SMDIV_CLK_OFF_SHIFT) /* 0x00002000 */
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_GATE_SMTH_EN_SHIFT (14U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_GATE_SMTH_EN_MASK (0x1U << CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_GATE_SMTH_EN_SHIFT) /* 0x00004000 */
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_BYPASS_SHIFT (15U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_BYPASS_MASK (0x1U << CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_BYPASS_SHIFT) /* 0x00008000 */
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_FREQ_KEEP_SHIFT (16U)
#define CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_FREQ_KEEP_MASK (0xFFFFU << CRU_SMOTH_DIVFREE_CON01_ACLK_S_GPU_BIU_FREQ_KEEP_SHIFT) /* 0xFFFF0000 */
/* SMOTH_DIVFREE_CON02 */
#define CRU_SMOTH_DIVFREE_CON02_OFFSET                     (0xCC8U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_STEP_SHIFT     (0U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_STEP_MASK      (0x1FU << CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_STEP_SHIFT)    /* 0x0000001F */
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT (13U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_MASK (0x1U << CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT) /* 0x00002000 */
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT (14U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_GATE_SMTH_EN_MASK (0x1U << CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT) /* 0x00004000 */
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_BYPASS_SHIFT   (15U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_BYPASS_MASK    (0x1U << CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_BYPASS_SHIFT)   /* 0x00008000 */
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_FREQ_KEEP_SHIFT (16U)
#define CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_FREQ_KEEP_MASK (0xFFFFU << CRU_SMOTH_DIVFREE_CON02_ACLK_M0_GPU_FREQ_KEEP_SHIFT) /* 0xFFFF0000 */
/* FRACDIV_HIGH16BIT_CON00 */
#define CRU_FRACDIV_HIGH16BIT_CON00_OFFSET                 (0xCD4U)
#define CRU_FRACDIV_HIGH16BIT_CON00_DENOMINATOR_HIGH8BIT_SHIFT (0U)
#define CRU_FRACDIV_HIGH16BIT_CON00_DENOMINATOR_HIGH8BIT_MASK (0xFFU << CRU_FRACDIV_HIGH16BIT_CON00_DENOMINATOR_HIGH8BIT_SHIFT) /* 0x000000FF */
#define CRU_FRACDIV_HIGH16BIT_CON00_NUMERATOR_HIGH8BIT_SHIFT (8U)
#define CRU_FRACDIV_HIGH16BIT_CON00_NUMERATOR_HIGH8BIT_MASK (0xFFU << CRU_FRACDIV_HIGH16BIT_CON00_NUMERATOR_HIGH8BIT_SHIFT) /* 0x0000FF00 */
#define CRU_FRACDIV_HIGH16BIT_CON00_FRACDIV_24BIT_EN_SHIFT (16U)
#define CRU_FRACDIV_HIGH16BIT_CON00_FRACDIV_24BIT_EN_MASK  (0x1U << CRU_FRACDIV_HIGH16BIT_CON00_FRACDIV_24BIT_EN_SHIFT) /* 0x00010000 */
/* FRACDIV_HIGH16BIT_CON01 */
#define CRU_FRACDIV_HIGH16BIT_CON01_OFFSET                 (0xCD8U)
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_STEP_SHIFT (0U)
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_STEP_MASK  (0xFFU << CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_STEP_SHIFT) /* 0x000000FF */
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT (8U)
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_SMDIV_CLK_OFF_MASK (0xFFU << CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT) /* 0x0000FF00 */
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT (16U)
#define CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_GATE_SMTH_EN_MASK (0x1U << CRU_FRACDIV_HIGH16BIT_CON01_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT) /* 0x00010000 */
/* FRACDIV_HIGH16BIT_CON02 */
#define CRU_FRACDIV_HIGH16BIT_CON02_OFFSET                 (0xCDCU)
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_STEP_SHIFT (0U)
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_STEP_MASK  (0xFFU << CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_STEP_SHIFT) /* 0x000000FF */
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT (8U)
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_MASK (0xFFU << CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT) /* 0x0000FF00 */
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT (16U)
#define CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_GATE_SMTH_EN_MASK (0x1U << CRU_FRACDIV_HIGH16BIT_CON02_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT) /* 0x00010000 */
/* FRACDIV_HIGH16BIT_CON03 */
#define CRU_FRACDIV_HIGH16BIT_CON03_OFFSET                 (0xCE0U)
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_STEP_SHIFT (0U)
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_STEP_MASK  (0xFFU << CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_STEP_SHIFT) /* 0x000000FF */
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT (8U)
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_SMDIV_CLK_OFF_MASK (0xFFU << CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_SMDIV_CLK_OFF_SHIFT) /* 0x0000FF00 */
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT (16U)
#define CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_GATE_SMTH_EN_MASK (0x1U << CRU_FRACDIV_HIGH16BIT_CON03_ACLK_M0_GPU_GATE_SMTH_EN_SHIFT) /* 0x00010000 */
/* AUTOCS_HCLK_TOP_BIU_CON0 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_OFFSET                (0xD10U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_DIV_SHIFT      (0U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_DIV_MASK       (0x7U << CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_DIV_SHIFT)      /* 0x00000007 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_GATE_SHIFT     (3U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_GATE_MASK      (0x1U << CRU_AUTOCS_HCLK_TOP_BIU_CON0_AUTOCS_GATE_SHIFT)     /* 0x00000008 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_IDLE_TH_SHIFT         (4U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_IDLE_TH_MASK          (0xFFFU << CRU_AUTOCS_HCLK_TOP_BIU_CON0_IDLE_TH_SHIFT)       /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_HCLK_TOP_BIU_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_HCLK_TOP_BIU_CON1 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_OFFSET                (0xD14U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_ACTIVE_SHIFT   (0U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_ACTIVE_MASK    (0x7FFU << CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_HCLK_TOP_BIU_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_HCLK_TOP_BIU_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_HCLK_TOP_BIU_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_HCLK_TOP_BIU_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_ACLK_BUS_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_OFFSET               (0xD20U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_BUS_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_BUS_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_BUS_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_BUS_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_OFFSET               (0xD24U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_BUS_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_BUS_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_BUS_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_BUS_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_PCLK_BUS_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_OFFSET               (0xD28U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_BUS_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_BUS_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_BUS_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_BUS_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_OFFSET               (0xD2CU)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_BUS_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_BUS_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_BUS_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_BUS_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_RKNN_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_OFFSET              (0xD38U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_DIV_SHIFT    (0U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_DIV_MASK     (0x7U << CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_DIV_SHIFT)    /* 0x00000007 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_GATE_SHIFT   (3U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_GATE_MASK    (0x1U << CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_AUTOCS_GATE_SHIFT)   /* 0x00000008 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_IDLE_TH_SHIFT       (4U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_IDLE_TH_MASK        (0xFFFU << CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_IDLE_TH_SHIFT)     /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_WAIT_TH_SHIFT       (16U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_WAIT_TH_MASK        (0xFFFFU << CRU_AUTOCS_HCLK_RKNN_ROOT_CON0_WAIT_TH_SHIFT)    /* 0xFFFF0000 */
/* AUTOCS_HCLK_RKNN_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_OFFSET              (0xD3CU)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_ACTIVE_MASK  (0x7FFU << CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_EN_SHIFT     (12U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_EN_MASK      (0x1U << CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_AUTOCS_EN_SHIFT)     /* 0x00001000 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_SWITCH_EN_SHIFT     (13U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_SWITCH_EN_MASK      (0x1U << CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_SWITCH_EN_SHIFT)     /* 0x00002000 */
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_CLKSEL_CFG_SHIFT    (14U)
#define CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_CLKSEL_CFG_MASK     (0x3U << CRU_AUTOCS_HCLK_RKNN_ROOT_CON1_CLKSEL_CFG_SHIFT)    /* 0x0000C000 */
/* AUTOCS_ACLK_NVM_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_OFFSET               (0xD40U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_NVM_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_NVM_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_NVM_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_NVM_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_OFFSET               (0xD44U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_NVM_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_NVM_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_NVM_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_NVM_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_PHP_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_OFFSET               (0xD48U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_PHP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_PHP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_PHP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_PHP_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_OFFSET               (0xD4CU)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_PHP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_PHP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_PHP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_PHP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_RKVDEC_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_OFFSET            (0xD50U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_ACLK_RKVDEC_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_OFFSET            (0xD54U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_ACLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_ACLK_USB_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_OFFSET               (0xD68U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_USB_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_USB_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_USB_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_USB_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_OFFSET               (0xD6CU)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_USB_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_USB_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_USB_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_USB_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_VPU_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_OFFSET               (0xD70U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_VPU_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_VPU_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_VPU_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_VPU_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_OFFSET               (0xD74U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VPU_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VPU_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_VPU_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_VPU_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_VPU_LOW_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_OFFSET           (0xD78U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_DIV_MASK  (0x7U << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_IDLE_TH_SHIFT    (4U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_IDLE_TH_MASK     (0xFFFU << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_IDLE_TH_SHIFT)  /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_WAIT_TH_SHIFT    (16U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_WAIT_TH_MASK     (0xFFFFU << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_ACLK_VPU_LOW_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_OFFSET           (0xD7CU)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_EN_SHIFT  (12U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_EN_MASK   (0x1U << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_AUTOCS_EN_SHIFT)  /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_SWITCH_EN_SHIFT  (13U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_SWITCH_EN_MASK   (0x1U << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_SWITCH_EN_SHIFT)  /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_CLKSEL_CFG_MASK  (0x3U << CRU_AUTOCS_ACLK_VPU_LOW_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_ACLK_JPEG_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_OFFSET              (0xD80U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_DIV_SHIFT    (0U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_DIV_MASK     (0x7U << CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_DIV_SHIFT)    /* 0x00000007 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_GATE_SHIFT   (3U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_GATE_MASK    (0x1U << CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_AUTOCS_GATE_SHIFT)   /* 0x00000008 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_IDLE_TH_SHIFT       (4U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_IDLE_TH_MASK        (0xFFFU << CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_IDLE_TH_SHIFT)     /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_WAIT_TH_SHIFT       (16U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_WAIT_TH_MASK        (0xFFFFU << CRU_AUTOCS_ACLK_JPEG_ROOT_CON0_WAIT_TH_SHIFT)    /* 0xFFFF0000 */
/* AUTOCS_ACLK_JPEG_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_OFFSET              (0xD84U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_ACTIVE_MASK  (0x7FFU << CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_EN_SHIFT     (12U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_EN_MASK      (0x1U << CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_AUTOCS_EN_SHIFT)     /* 0x00001000 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_SWITCH_EN_SHIFT     (13U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_SWITCH_EN_MASK      (0x1U << CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_SWITCH_EN_SHIFT)     /* 0x00002000 */
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_CLKSEL_CFG_SHIFT    (14U)
#define CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_CLKSEL_CFG_MASK     (0x3U << CRU_AUTOCS_ACLK_JPEG_ROOT_CON1_CLKSEL_CFG_SHIFT)    /* 0x0000C000 */
/* AUTOCS_ACLK_VEPU0_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_OFFSET             (0xD88U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_DIV_SHIFT   (0U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_DIV_MASK    (0x7U << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_DIV_SHIFT)   /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_GATE_SHIFT  (3U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_GATE_MASK   (0x1U << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_AUTOCS_GATE_SHIFT)  /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_IDLE_TH_SHIFT      (4U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_IDLE_TH_MASK       (0xFFFU << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_IDLE_TH_SHIFT)    /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_WAIT_TH_SHIFT      (16U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_WAIT_TH_MASK       (0xFFFFU << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON0_WAIT_TH_SHIFT)   /* 0xFFFF0000 */
/* AUTOCS_ACLK_VEPU0_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_OFFSET             (0xD8CU)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_EN_SHIFT    (12U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_EN_MASK     (0x1U << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_AUTOCS_EN_SHIFT)    /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_SWITCH_EN_SHIFT    (13U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_SWITCH_EN_MASK     (0x1U << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_SWITCH_EN_SHIFT)    /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_CLKSEL_CFG_SHIFT   (14U)
#define CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_CLKSEL_CFG_MASK    (0x3U << CRU_AUTOCS_ACLK_VEPU0_ROOT_CON1_CLKSEL_CFG_SHIFT)   /* 0x0000C000 */
/* AUTOCS_ACLK_VI_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_OFFSET                (0xD98U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT      (0U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_DIV_MASK       (0x7U << CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT)      /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT     (3U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_GATE_MASK      (0x1U << CRU_AUTOCS_ACLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT)     /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_IDLE_TH_SHIFT         (4U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_IDLE_TH_MASK          (0xFFFU << CRU_AUTOCS_ACLK_VI_ROOT_CON0_IDLE_TH_SHIFT)       /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_ACLK_VI_ROOT_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_ACLK_VI_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_OFFSET                (0xD9CU)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT   (0U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_ACTIVE_MASK    (0x7FFU << CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_ACLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_ACLK_VI_ROOT_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_ACLK_VI_ROOT_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_ACLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_ACLK_VOP_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_OFFSET               (0xDA0U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_VOP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_VOP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_VOP_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_OFFSET               (0xDA4U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_VOP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_VPU_MID_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_OFFSET           (0xDB0U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_DIV_MASK  (0x7U << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_IDLE_TH_SHIFT    (4U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_IDLE_TH_MASK     (0xFFFU << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_IDLE_TH_SHIFT)  /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_WAIT_TH_SHIFT    (16U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_WAIT_TH_MASK     (0xFFFFU << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_ACLK_VPU_MID_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_OFFSET           (0xDB4U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_EN_SHIFT  (12U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_EN_MASK   (0x1U << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_AUTOCS_EN_SHIFT)  /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_SWITCH_EN_SHIFT  (13U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_SWITCH_EN_MASK   (0x1U << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_SWITCH_EN_SHIFT)  /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_CLKSEL_CFG_MASK  (0x3U << CRU_AUTOCS_ACLK_VPU_MID_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_ACLK_TOP_BIU_CON0 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_OFFSET                (0xDB8U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_DIV_SHIFT      (0U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_DIV_MASK       (0x7U << CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_DIV_SHIFT)      /* 0x00000007 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_GATE_SHIFT     (3U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_GATE_MASK      (0x1U << CRU_AUTOCS_ACLK_TOP_BIU_CON0_AUTOCS_GATE_SHIFT)     /* 0x00000008 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_IDLE_TH_SHIFT         (4U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_IDLE_TH_MASK          (0xFFFU << CRU_AUTOCS_ACLK_TOP_BIU_CON0_IDLE_TH_SHIFT)       /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_ACLK_TOP_BIU_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_ACLK_TOP_BIU_CON1 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_OFFSET                (0xDBCU)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_ACTIVE_SHIFT   (0U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_ACTIVE_MASK    (0x7FFU << CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_ACLK_TOP_BIU_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_ACLK_TOP_BIU_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_ACLK_TOP_BIU_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_ACLK_TOP_BIU_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_ACLK_CENTER_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_OFFSET            (0xDE8U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_ACLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_ACLK_CENTER_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_OFFSET            (0xDECU)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_ACLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_ACLK_CENTER_LOW_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_OFFSET        (0xDF0U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_IDLE_TH_MASK  (0xFFFU << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_WAIT_TH_MASK  (0xFFFFU << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_ACLK_CENTER_LOW_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_OFFSET        (0xDF4U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_EN_MASK (0x1U << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_SWITCH_EN_MASK (0x1U << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << CRU_AUTOCS_ACLK_CENTER_LOW_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_HCLK_BUS_CM0_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_OFFSET           (0xE18U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_DIV_MASK  (0x7U << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_IDLE_TH_SHIFT    (4U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_IDLE_TH_MASK     (0xFFFU << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_IDLE_TH_SHIFT)  /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_WAIT_TH_SHIFT    (16U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_WAIT_TH_MASK     (0xFFFFU << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_BUS_CM0_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_OFFSET           (0xE1CU)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_EN_SHIFT  (12U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_EN_MASK   (0x1U << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_AUTOCS_EN_SHIFT)  /* 0x00001000 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_SWITCH_EN_SHIFT  (13U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_SWITCH_EN_MASK   (0x1U << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_SWITCH_EN_SHIFT)  /* 0x00002000 */
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_CLKSEL_CFG_MASK  (0x3U << CRU_AUTOCS_HCLK_BUS_CM0_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_PCLK_NPUTOP_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_OFFSET            (0xE20U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_PCLK_NPUTOP_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_OFFSET            (0xE24U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_PCLK_NPUTOP_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_HCLK_NPU_CM0_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_OFFSET           (0xE28U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_DIV_MASK  (0x7U << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_IDLE_TH_SHIFT    (4U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_IDLE_TH_MASK     (0xFFFU << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_IDLE_TH_SHIFT)  /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_WAIT_TH_SHIFT    (16U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_WAIT_TH_MASK     (0xFFFFU << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_NPU_CM0_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_OFFSET           (0xE2CU)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_EN_SHIFT  (12U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_EN_MASK   (0x1U << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_AUTOCS_EN_SHIFT)  /* 0x00001000 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_SWITCH_EN_SHIFT  (13U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_SWITCH_EN_MASK   (0x1U << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_SWITCH_EN_SHIFT)  /* 0x00002000 */
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_CLKSEL_CFG_MASK  (0x3U << CRU_AUTOCS_HCLK_NPU_CM0_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_HCLK_NVM_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_OFFSET               (0xE30U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_NVM_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_NVM_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_NVM_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_NVM_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_OFFSET               (0xE34U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_NVM_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_NVM_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_NVM_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_NVM_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_PCLK_PHP_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_OFFSET               (0xE38U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_PHP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_PHP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_PHP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_PHP_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_OFFSET               (0xE3CU)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_PHP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_PHP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_PHP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_PHP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_RKVDEC_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_OFFSET            (0xE48U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_HCLK_RKVDEC_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_OFFSET            (0xE4CU)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_HCLK_RKVDEC_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_PCLK_TOP_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_OFFSET               (0xE58U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_TOP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_TOP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_TOP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_TOP_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_OFFSET               (0xE5CU)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_TOP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_TOP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_TOP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_TOP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_PCLK_USB_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_OFFSET               (0xE70U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_USB_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_USB_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_USB_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_USB_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_OFFSET               (0xE74U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_USB_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_USB_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_USB_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_USB_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_VPU_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_OFFSET               (0xE78U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_VPU_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_VPU_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_VPU_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_VPU_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_OFFSET               (0xE7CU)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VPU_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VPU_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_VPU_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_VPU_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_VEPU0_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_OFFSET             (0xE80U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_DIV_SHIFT   (0U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_DIV_MASK    (0x7U << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_DIV_SHIFT)   /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_GATE_SHIFT  (3U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_GATE_MASK   (0x1U << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_AUTOCS_GATE_SHIFT)  /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_IDLE_TH_SHIFT      (4U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_IDLE_TH_MASK       (0xFFFU << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_IDLE_TH_SHIFT)    /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_WAIT_TH_SHIFT      (16U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_WAIT_TH_MASK       (0xFFFFU << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON0_WAIT_TH_SHIFT)   /* 0xFFFF0000 */
/* AUTOCS_HCLK_VEPU0_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_OFFSET             (0xE84U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_EN_SHIFT    (12U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_AUTOCS_EN_SHIFT)    /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_SWITCH_EN_SHIFT    (13U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_SWITCH_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_SWITCH_EN_SHIFT)    /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_CLKSEL_CFG_SHIFT   (14U)
#define CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_CLKSEL_CFG_MASK    (0x3U << CRU_AUTOCS_HCLK_VEPU0_ROOT_CON1_CLKSEL_CFG_SHIFT)   /* 0x0000C000 */
/* AUTOCS_HCLK_VI_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_OFFSET                (0xE90U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT      (0U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_DIV_MASK       (0x7U << CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT)      /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT     (3U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_GATE_MASK      (0x1U << CRU_AUTOCS_HCLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT)     /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_IDLE_TH_SHIFT         (4U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_IDLE_TH_MASK          (0xFFFU << CRU_AUTOCS_HCLK_VI_ROOT_CON0_IDLE_TH_SHIFT)       /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_HCLK_VI_ROOT_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_HCLK_VI_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_OFFSET                (0xE94U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT   (0U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_MASK    (0x7FFU << CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_HCLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_HCLK_VI_ROOT_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_HCLK_VI_ROOT_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_HCLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_PCLK_VI_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_OFFSET                (0xE98U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT      (0U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_DIV_MASK       (0x7U << CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_DIV_SHIFT)      /* 0x00000007 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT     (3U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_GATE_MASK      (0x1U << CRU_AUTOCS_PCLK_VI_ROOT_CON0_AUTOCS_GATE_SHIFT)     /* 0x00000008 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_IDLE_TH_SHIFT         (4U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_IDLE_TH_MASK          (0xFFFU << CRU_AUTOCS_PCLK_VI_ROOT_CON0_IDLE_TH_SHIFT)       /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_PCLK_VI_ROOT_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_PCLK_VI_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_OFFSET                (0xE9CU)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT   (0U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_MASK    (0x7FFU << CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_PCLK_VI_ROOT_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_PCLK_VI_ROOT_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_PCLK_VI_ROOT_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_PCLK_VI_ROOT_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_HCLK_VOP_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_OFFSET               (0xEA8U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_VOP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_VOP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_VOP_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_OFFSET               (0xEACU)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_VOP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_PCLK_VOP_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_OFFSET               (0xEB0U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_VOP_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_VOP_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_VOP_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_VOP_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_OFFSET               (0xEB4U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_VOP_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_VOP_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_VOP_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_VOP_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_VO0_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_OFFSET               (0xEB8U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_VO0_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_VO0_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_VO0_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_VO0_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_OFFSET               (0xEBCU)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VO0_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VO0_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_VO0_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_VO0_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_TOP_MID_BIU_CON0 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_OFFSET            (0xEE0U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_ACLK_TOP_MID_BIU_CON1 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_OFFSET            (0xEE4U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_ACLK_TOP_MID_BIU_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_PCLK_VO1_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_OFFSET               (0xEE8U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_VO1_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_VO1_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_VO1_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_OFFSET               (0xEECU)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_VO1_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_VO1_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_OFFSET               (0xEF0U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_VO1_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_VO1_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_VO1_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_OFFSET               (0xEF4U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_VO1_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_DDR_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_OFFSET               (0xF00U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_HCLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_HCLK_DDR_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_HCLK_DDR_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_HCLK_DDR_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_OFFSET               (0xF04U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_HCLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_HCLK_DDR_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_HCLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_PCLK_CENTER_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_OFFSET            (0xF08U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_PCLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_PCLK_CENTER_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_OFFSET            (0xF0CU)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_PCLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_ACLK_DDR_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_OFFSET               (0xF10U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_DDR_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_DDR_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_DDR_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_OFFSET               (0xF14U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_DDR_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_ACLK_VO1_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_OFFSET               (0xF18U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_ACLK_VO1_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_ACLK_VO1_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_ACLK_VO1_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_ACLK_VO1_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_OFFSET               (0xF1CU)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VO1_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_ACLK_VO1_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_ACLK_VO1_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_ACLK_VO1_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_CENTER_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_OFFSET            (0xF20U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CRU_AUTOCS_HCLK_CENTER_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_HCLK_CENTER_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_OFFSET            (0xF24U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CRU_AUTOCS_HCLK_CENTER_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
/* AUTOCS_CLK_GPU_INNER_CON0 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_OFFSET               (0xF30U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_CLK_GPU_INNER_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_CLK_GPU_INNER_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_CLK_GPU_INNER_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_CLK_GPU_INNER_CON1 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_OFFSET               (0xF34U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_CLK_GPU_INNER_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_CLK_GPU_INNER_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_CLK_GPU_INNER_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_CLK_GPU_INNER_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_HCLK_AUDIO_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_OFFSET             (0xF40U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_DIV_SHIFT   (0U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_DIV_MASK    (0x7U << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_DIV_SHIFT)   /* 0x00000007 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_GATE_SHIFT  (3U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_GATE_MASK   (0x1U << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_AUTOCS_GATE_SHIFT)  /* 0x00000008 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_IDLE_TH_SHIFT      (4U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_IDLE_TH_MASK       (0xFFFU << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_IDLE_TH_SHIFT)    /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_WAIT_TH_SHIFT      (16U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_WAIT_TH_MASK       (0xFFFFU << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON0_WAIT_TH_SHIFT)   /* 0xFFFF0000 */
/* AUTOCS_HCLK_AUDIO_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_OFFSET             (0xF44U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_EN_SHIFT    (12U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_AUTOCS_EN_SHIFT)    /* 0x00001000 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_SWITCH_EN_SHIFT    (13U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_SWITCH_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_SWITCH_EN_SHIFT)    /* 0x00002000 */
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_CLKSEL_CFG_SHIFT   (14U)
#define CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_CLKSEL_CFG_MASK    (0x3U << CRU_AUTOCS_HCLK_AUDIO_ROOT_CON1_CLKSEL_CFG_SHIFT)   /* 0x0000C000 */
/* AUTOCS_PCLK_DDR_ROOT_CON0 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_OFFSET               (0xF50U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT     (0U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_DIV_MASK      (0x7U << CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_DIV_SHIFT)     /* 0x00000007 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT    (3U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_GATE_MASK     (0x1U << CRU_AUTOCS_PCLK_DDR_ROOT_CON0_AUTOCS_GATE_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_IDLE_TH_SHIFT        (4U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_IDLE_TH_MASK         (0xFFFU << CRU_AUTOCS_PCLK_DDR_ROOT_CON0_IDLE_TH_SHIFT)      /* 0x0000FFF0 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_WAIT_TH_SHIFT        (16U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON0_WAIT_TH_MASK         (0xFFFFU << CRU_AUTOCS_PCLK_DDR_ROOT_CON0_WAIT_TH_SHIFT)     /* 0xFFFF0000 */
/* AUTOCS_PCLK_DDR_ROOT_CON1 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_OFFSET               (0xF54U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT  (0U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_MASK   (0x7FFU << CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT      (12U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_DDR_ROOT_CON1_AUTOCS_EN_SHIFT)      /* 0x00001000 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT      (13U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_SWITCH_EN_MASK       (0x1U << CRU_AUTOCS_PCLK_DDR_ROOT_CON1_SWITCH_EN_SHIFT)      /* 0x00002000 */
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT     (14U)
#define CRU_AUTOCS_PCLK_DDR_ROOT_CON1_CLKSEL_CFG_MASK      (0x3U << CRU_AUTOCS_PCLK_DDR_ROOT_CON1_CLKSEL_CFG_SHIFT)     /* 0x0000C000 */
/* AUTOCS_CLK_ISP0_CORE_ROOT_CON0 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_OFFSET          (0xF58U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_IDLE_TH_SHIFT   (4U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_IDLE_TH_MASK    (0xFFFU << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_WAIT_TH_SHIFT   (16U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_WAIT_TH_MASK    (0xFFFFU << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_ISP0_CORE_ROOT_CON1 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_OFFSET          (0xF5CU)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_EN_MASK  (0x1U << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_SWITCH_EN_MASK  (0x1U << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << CRU_AUTOCS_CLK_ISP0_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_CLK_VEPU0_CORE_ROOT_CON0 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_OFFSET         (0xF60U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_IDLE_TH_SHIFT  (4U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_IDLE_TH_MASK   (0xFFFU << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_WAIT_TH_SHIFT  (16U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_WAIT_TH_MASK   (0xFFFFU << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_VEPU0_CORE_ROOT_CON1 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_OFFSET         (0xF64U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_EN_MASK (0x1U << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_SWITCH_EN_MASK (0x1U << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << CRU_AUTOCS_CLK_VEPU0_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_ACLK_VEPU1_ROOT_CON0 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_OFFSET             (0xF68U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_DIV_SHIFT   (0U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_DIV_MASK    (0x7U << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_DIV_SHIFT)   /* 0x00000007 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_GATE_SHIFT  (3U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_GATE_MASK   (0x1U << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_AUTOCS_GATE_SHIFT)  /* 0x00000008 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_IDLE_TH_SHIFT      (4U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_IDLE_TH_MASK       (0xFFFU << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_IDLE_TH_SHIFT)    /* 0x0000FFF0 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_WAIT_TH_SHIFT      (16U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_WAIT_TH_MASK       (0xFFFFU << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON0_WAIT_TH_SHIFT)   /* 0xFFFF0000 */
/* AUTOCS_ACLK_VEPU1_ROOT_CON1 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_OFFSET             (0xF6CU)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_EN_SHIFT    (12U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_EN_MASK     (0x1U << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_AUTOCS_EN_SHIFT)    /* 0x00001000 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_SWITCH_EN_SHIFT    (13U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_SWITCH_EN_MASK     (0x1U << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_SWITCH_EN_SHIFT)    /* 0x00002000 */
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_CLKSEL_CFG_SHIFT   (14U)
#define CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_CLKSEL_CFG_MASK    (0x3U << CRU_AUTOCS_ACLK_VEPU1_ROOT_CON1_CLKSEL_CFG_SHIFT)   /* 0x0000C000 */
/* AUTOCS_HCLK_VEPU1_ROOT_CON0 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_OFFSET             (0xF70U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_DIV_SHIFT   (0U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_DIV_MASK    (0x7U << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_DIV_SHIFT)   /* 0x00000007 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_GATE_SHIFT  (3U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_GATE_MASK   (0x1U << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_AUTOCS_GATE_SHIFT)  /* 0x00000008 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_IDLE_TH_SHIFT      (4U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_IDLE_TH_MASK       (0xFFFU << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_IDLE_TH_SHIFT)    /* 0x0000FFF0 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_WAIT_TH_SHIFT      (16U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_WAIT_TH_MASK       (0xFFFFU << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON0_WAIT_TH_SHIFT)   /* 0xFFFF0000 */
/* AUTOCS_HCLK_VEPU1_ROOT_CON1 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_OFFSET             (0xF74U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_EN_SHIFT    (12U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_AUTOCS_EN_SHIFT)    /* 0x00001000 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_SWITCH_EN_SHIFT    (13U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_SWITCH_EN_MASK     (0x1U << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_SWITCH_EN_SHIFT)    /* 0x00002000 */
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_CLKSEL_CFG_SHIFT   (14U)
#define CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_CLKSEL_CFG_MASK    (0x3U << CRU_AUTOCS_HCLK_VEPU1_ROOT_CON1_CLKSEL_CFG_SHIFT)   /* 0x0000C000 */
/* AUTOCS_CLK_VEPU1_CORE_ROOT_CON0 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_OFFSET         (0xF78U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_IDLE_TH_SHIFT  (4U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_IDLE_TH_MASK   (0xFFFU << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_WAIT_TH_SHIFT  (16U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_WAIT_TH_MASK   (0xFFFFU << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_VEPU1_CORE_ROOT_CON1 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_OFFSET         (0xF7CU)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_EN_MASK (0x1U << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_SWITCH_EN_MASK (0x1U << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << CRU_AUTOCS_CLK_VEPU1_CORE_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/***************************************PHPTOPCRU****************************************/
/* PPLL_CON0 */
#define PHPTOPCRU_PPLL_CON0_OFFSET                         (0x200U)
#define PHPTOPCRU_PPLL_CON0_PPLL_M_SHIFT                   (0U)
#define PHPTOPCRU_PPLL_CON0_PPLL_M_MASK                    (0x3FFU << PHPTOPCRU_PPLL_CON0_PPLL_M_SHIFT)                 /* 0x000003FF */
#define PHPTOPCRU_PPLL_CON0_PPLL_BP_SHIFT                  (15U)
#define PHPTOPCRU_PPLL_CON0_PPLL_BP_MASK                   (0x1U << PHPTOPCRU_PPLL_CON0_PPLL_BP_SHIFT)                  /* 0x00008000 */
/* PPLL_CON1 */
#define PHPTOPCRU_PPLL_CON1_OFFSET                         (0x204U)
#define PHPTOPCRU_PPLL_CON1_PPLL_P_SHIFT                   (0U)
#define PHPTOPCRU_PPLL_CON1_PPLL_P_MASK                    (0x3FU << PHPTOPCRU_PPLL_CON1_PPLL_P_SHIFT)                  /* 0x0000003F */
#define PHPTOPCRU_PPLL_CON1_PPLL_S_SHIFT                   (6U)
#define PHPTOPCRU_PPLL_CON1_PPLL_S_MASK                    (0x7U << PHPTOPCRU_PPLL_CON1_PPLL_S_SHIFT)                   /* 0x000001C0 */
#define PHPTOPCRU_PPLL_CON1_PPLL_RESETB_SHIFT              (13U)
#define PHPTOPCRU_PPLL_CON1_PPLL_RESETB_MASK               (0x1U << PHPTOPCRU_PPLL_CON1_PPLL_RESETB_SHIFT)              /* 0x00002000 */
/* PPLL_CON2 */
#define PHPTOPCRU_PPLL_CON2_OFFSET                         (0x208U)
#define PHPTOPCRU_PPLL_CON2_PPLL_K_SHIFT                   (0U)
#define PHPTOPCRU_PPLL_CON2_PPLL_K_MASK                    (0xFFFFU << PHPTOPCRU_PPLL_CON2_PPLL_K_SHIFT)                /* 0x0000FFFF */
/* PPLL_CON3 */
#define PHPTOPCRU_PPLL_CON3_OFFSET                         (0x20CU)
#define PHPTOPCRU_PPLL_CON3_PPLL_MFR_SHIFT                 (0U)
#define PHPTOPCRU_PPLL_CON3_PPLL_MFR_MASK                  (0xFFU << PHPTOPCRU_PPLL_CON3_PPLL_MFR_SHIFT)                /* 0x000000FF */
#define PHPTOPCRU_PPLL_CON3_PPLL_MRR_SHIFT                 (8U)
#define PHPTOPCRU_PPLL_CON3_PPLL_MRR_MASK                  (0x3FU << PHPTOPCRU_PPLL_CON3_PPLL_MRR_SHIFT)                /* 0x00003F00 */
#define PHPTOPCRU_PPLL_CON3_PPLL_SEL_PF_SHIFT              (14U)
#define PHPTOPCRU_PPLL_CON3_PPLL_SEL_PF_MASK               (0x3U << PHPTOPCRU_PPLL_CON3_PPLL_SEL_PF_SHIFT)              /* 0x0000C000 */
/* PPLL_CON4 */
#define PHPTOPCRU_PPLL_CON4_OFFSET                         (0x210U)
#define PHPTOPCRU_PPLL_CON4_PPLL_SSCG_EN_SHIFT             (0U)
#define PHPTOPCRU_PPLL_CON4_PPLL_SSCG_EN_MASK              (0x1U << PHPTOPCRU_PPLL_CON4_PPLL_SSCG_EN_SHIFT)             /* 0x00000001 */
#define PHPTOPCRU_PPLL_CON4_PPLL_AFC_ENB_SHIFT             (3U)
#define PHPTOPCRU_PPLL_CON4_PPLL_AFC_ENB_MASK              (0x1U << PHPTOPCRU_PPLL_CON4_PPLL_AFC_ENB_SHIFT)             /* 0x00000008 */
#define PHPTOPCRU_PPLL_CON4_PPLL_EXTAFC_SHIFT              (4U)
#define PHPTOPCRU_PPLL_CON4_PPLL_EXTAFC_MASK               (0x1FU << PHPTOPCRU_PPLL_CON4_PPLL_EXTAFC_SHIFT)             /* 0x000001F0 */
#define PHPTOPCRU_PPLL_CON4_PPLL_FEED_EN_SHIFT             (14U)
#define PHPTOPCRU_PPLL_CON4_PPLL_FEED_EN_MASK              (0x1U << PHPTOPCRU_PPLL_CON4_PPLL_FEED_EN_SHIFT)             /* 0x00004000 */
#define PHPTOPCRU_PPLL_CON4_PPLL_FSEL_SHIFT                (15U)
#define PHPTOPCRU_PPLL_CON4_PPLL_FSEL_MASK                 (0x1U << PHPTOPCRU_PPLL_CON4_PPLL_FSEL_SHIFT)                /* 0x00008000 */
/* PPLL_CON5 */
#define PHPTOPCRU_PPLL_CON5_OFFSET                         (0x214U)
#define PHPTOPCRU_PPLL_CON5_PPLL_FOUT_MASK_SHIFT           (0U)
#define PHPTOPCRU_PPLL_CON5_PPLL_FOUT_MASK_MASK            (0x1U << PHPTOPCRU_PPLL_CON5_PPLL_FOUT_MASK_SHIFT)           /* 0x00000001 */
/* PPLL_CON6 */
#define PHPTOPCRU_PPLL_CON6_OFFSET                         (0x218U)
#define PHPTOPCRU_PPLL_CON6_PPLL_AFC_CODE_SHIFT            (10U)
#define PHPTOPCRU_PPLL_CON6_PPLL_AFC_CODE_MASK             (0x1FU << PHPTOPCRU_PPLL_CON6_PPLL_AFC_CODE_SHIFT)           /* 0x00007C00 */
#define PHPTOPCRU_PPLL_CON6_PPLL_LOCK_SHIFT                (15U)
#define PHPTOPCRU_PPLL_CON6_PPLL_LOCK_MASK                 (0x1U << PHPTOPCRU_PPLL_CON6_PPLL_LOCK_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON00 */
#define PHPTOPCRU_CLKSEL_CON00_OFFSET                      (0x300U)
#define PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_SRC_DIV_SHIFT (2U)
#define PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_SRC_DIV_MASK (0x1FU << PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_SRC_DIV_SHIFT) /* 0x0000007C */
#define PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_NDUTY_SRC_DIV_SHIFT (7U)
#define PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_NDUTY_SRC_DIV_MASK (0x1FU << PHPTOPCRU_CLKSEL_CON00_CLK_MATRIX_PCIE_100M_NDUTY_SRC_DIV_SHIFT) /* 0x00000F80 */
#define PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE0_INNER_PHY_SEL_SHIFT (12U)
#define PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE0_INNER_PHY_SEL_MASK (0x3U << PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE0_INNER_PHY_SEL_SHIFT) /* 0x00003000 */
#define PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE1_INNER_PHY_SEL_SHIFT (14U)
#define PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE1_INNER_PHY_SEL_MASK (0x3U << PHPTOPCRU_CLKSEL_CON00_CLK_REF_PCIE1_INNER_PHY_SEL_SHIFT) /* 0x0000C000 */
/* CLKSEL_CON01 */
#define PHPTOPCRU_CLKSEL_CON01_OFFSET                      (0x304U)
#define PHPTOPCRU_CLKSEL_CON01_CLK_REF_MPHY_26M_DIV_SHIFT  (0U)
#define PHPTOPCRU_CLKSEL_CON01_CLK_REF_MPHY_26M_DIV_MASK   (0xFFU << PHPTOPCRU_CLKSEL_CON01_CLK_REF_MPHY_26M_DIV_SHIFT) /* 0x000000FF */
/* GATE_CON00 */
#define PHPTOPCRU_GATE_CON00_OFFSET                        (0x800U)
#define PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_CRU_EN_SHIFT      (1U)
#define PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_CRU_EN_MASK       (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_CRU_EN_SHIFT)      /* 0x00000002 */
#define PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_ROOT_EN_SHIFT     (2U)
#define PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_ROOT_EN_MASK      (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PHPPHY_ROOT_EN_SHIFT)     /* 0x00000004 */
#define PHPTOPCRU_GATE_CON00_PCLK_APB2ASB_SLV_CHIP_TOP_EN_SHIFT (3U)
#define PHPTOPCRU_GATE_CON00_PCLK_APB2ASB_SLV_CHIP_TOP_EN_MASK (0x1U << PHPTOPCRU_GATE_CON00_PCLK_APB2ASB_SLV_CHIP_TOP_EN_SHIFT) /* 0x00000008 */
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_EN_SHIFT (5U)
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_EN_MASK  (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_EN_SHIFT) /* 0x00000020 */
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_GRF_EN_SHIFT (6U)
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_GRF_EN_MASK (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY0_GRF_EN_SHIFT) /* 0x00000040 */
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_EN_SHIFT (7U)
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_EN_MASK  (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_EN_SHIFT) /* 0x00000080 */
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_GRF_EN_SHIFT (8U)
#define PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_GRF_EN_MASK (0x1U << PHPTOPCRU_GATE_CON00_PCLK_PCIE2_COMBOPHY1_GRF_EN_SHIFT) /* 0x00000100 */
/* GATE_CON01 */
#define PHPTOPCRU_GATE_CON01_OFFSET                        (0x804U)
#define PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_SRC_EN_SHIFT (1U)
#define PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_SRC_EN_MASK (0x1U << PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_SRC_EN_SHIFT) /* 0x00000002 */
#define PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_NDUTY_SRC_EN_SHIFT (2U)
#define PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_NDUTY_SRC_EN_MASK (0x1U << PHPTOPCRU_GATE_CON01_CLK_MATRIX_PCIE_100M_NDUTY_SRC_EN_SHIFT) /* 0x00000004 */
#define PHPTOPCRU_GATE_CON01_CLK_REF_PCIE0_INNER_EN_SHIFT  (5U)
#define PHPTOPCRU_GATE_CON01_CLK_REF_PCIE0_INNER_EN_MASK   (0x1U << PHPTOPCRU_GATE_CON01_CLK_REF_PCIE0_INNER_EN_SHIFT)  /* 0x00000020 */
#define PHPTOPCRU_GATE_CON01_CLK_REF_PCIE1_INNER_EN_SHIFT  (8U)
#define PHPTOPCRU_GATE_CON01_CLK_REF_PCIE1_INNER_EN_MASK   (0x1U << PHPTOPCRU_GATE_CON01_CLK_REF_PCIE1_INNER_EN_SHIFT)  /* 0x00000100 */
#define PHPTOPCRU_GATE_CON01_CLK_REF_MPHY_26M_EN_SHIFT     (9U)
#define PHPTOPCRU_GATE_CON01_CLK_REF_MPHY_26M_EN_MASK      (0x1U << PHPTOPCRU_GATE_CON01_CLK_REF_MPHY_26M_EN_SHIFT)     /* 0x00000200 */
/* SOFTRST_CON00 */
#define PHPTOPCRU_SOFTRST_CON00_OFFSET                     (0xA00U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PHPPHY_CRU_SHIFT   (1U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PHPPHY_CRU_MASK    (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_PHPPHY_CRU_SHIFT)   /* 0x00000002 */
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_APB2ASB_SLV_CHIP_TOP_SHIFT (3U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_APB2ASB_SLV_CHIP_TOP_MASK (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_APB2ASB_SLV_CHIP_TOP_SHIFT) /* 0x00000008 */
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_SHIFT (5U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_MASK (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_SHIFT) /* 0x00000020 */
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_GRF_SHIFT (6U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_GRF_MASK (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY0_GRF_SHIFT) /* 0x00000040 */
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_SHIFT (7U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_MASK (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_SHIFT) /* 0x00000080 */
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_GRF_SHIFT (8U)
#define PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_GRF_MASK (0x1U << PHPTOPCRU_SOFTRST_CON00_PRESETN_PCIE2_COMBOPHY1_GRF_SHIFT) /* 0x00000100 */
/* SOFTRST_CON01 */
#define PHPTOPCRU_SOFTRST_CON01_OFFSET                     (0xA04U)
#define PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE0_PIPE_PHY_SHIFT (5U)
#define PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE0_PIPE_PHY_MASK (0x1U << PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE0_PIPE_PHY_SHIFT) /* 0x00000020 */
#define PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE1_PIPE_PHY_SHIFT (8U)
#define PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE1_PIPE_PHY_MASK (0x1U << PHPTOPCRU_SOFTRST_CON01_RESETN_PCIE1_PIPE_PHY_SHIFT) /* 0x00000100 */
/***************************************SECURECRU****************************************/
/* CLKSEL_CON00 */
#define SECURECRU_CLKSEL_CON00_OFFSET                      (0x300U)
#define SECURECRU_CLKSEL_CON00_ACLK_SECURE_NS_ROOT_SEL_SHIFT (0U)
#define SECURECRU_CLKSEL_CON00_ACLK_SECURE_NS_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON00_ACLK_SECURE_NS_ROOT_SEL_SHIFT) /* 0x00000003 */
#define SECURECRU_CLKSEL_CON00_HCLK_SECURE_NS_ROOT_SEL_SHIFT (2U)
#define SECURECRU_CLKSEL_CON00_HCLK_SECURE_NS_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON00_HCLK_SECURE_NS_ROOT_SEL_SHIFT) /* 0x0000000C */
#define SECURECRU_CLKSEL_CON00_PCLK_SECURE_NS_ROOT_SEL_SHIFT (4U)
#define SECURECRU_CLKSEL_CON00_PCLK_SECURE_NS_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON00_PCLK_SECURE_NS_ROOT_SEL_SHIFT) /* 0x00000030 */
/* GATE_CON00 */
#define SECURECRU_GATE_CON00_OFFSET                        (0x800U)
#define SECURECRU_GATE_CON00_ACLK_SECURE_NS_ROOT_EN_SHIFT  (0U)
#define SECURECRU_GATE_CON00_ACLK_SECURE_NS_ROOT_EN_MASK   (0x1U << SECURECRU_GATE_CON00_ACLK_SECURE_NS_ROOT_EN_SHIFT)  /* 0x00000001 */
#define SECURECRU_GATE_CON00_HCLK_SECURE_NS_ROOT_EN_SHIFT  (1U)
#define SECURECRU_GATE_CON00_HCLK_SECURE_NS_ROOT_EN_MASK   (0x1U << SECURECRU_GATE_CON00_HCLK_SECURE_NS_ROOT_EN_SHIFT)  /* 0x00000002 */
#define SECURECRU_GATE_CON00_PCLK_SECURE_NS_ROOT_EN_SHIFT  (2U)
#define SECURECRU_GATE_CON00_PCLK_SECURE_NS_ROOT_EN_MASK   (0x1U << SECURECRU_GATE_CON00_PCLK_SECURE_NS_ROOT_EN_SHIFT)  /* 0x00000004 */
#define SECURECRU_GATE_CON00_HCLK_CRYPTO_NS_EN_SHIFT       (3U)
#define SECURECRU_GATE_CON00_HCLK_CRYPTO_NS_EN_MASK        (0x1U << SECURECRU_GATE_CON00_HCLK_CRYPTO_NS_EN_SHIFT)       /* 0x00000008 */
#define SECURECRU_GATE_CON00_HCLK_TRNG_NS_EN_SHIFT         (4U)
#define SECURECRU_GATE_CON00_HCLK_TRNG_NS_EN_MASK          (0x1U << SECURECRU_GATE_CON00_HCLK_TRNG_NS_EN_SHIFT)         /* 0x00000010 */
#define SECURECRU_GATE_CON00_PCLK_SECURE_NS_BIU_EN_SHIFT   (5U)
#define SECURECRU_GATE_CON00_PCLK_SECURE_NS_BIU_EN_MASK    (0x1U << SECURECRU_GATE_CON00_PCLK_SECURE_NS_BIU_EN_SHIFT)   /* 0x00000020 */
#define SECURECRU_GATE_CON00_ACLK_SECURE_NS_BIU_EN_SHIFT   (6U)
#define SECURECRU_GATE_CON00_ACLK_SECURE_NS_BIU_EN_MASK    (0x1U << SECURECRU_GATE_CON00_ACLK_SECURE_NS_BIU_EN_SHIFT)   /* 0x00000040 */
#define SECURECRU_GATE_CON00_HCLK_SECURE_NS_BIU_EN_SHIFT   (7U)
#define SECURECRU_GATE_CON00_HCLK_SECURE_NS_BIU_EN_MASK    (0x1U << SECURECRU_GATE_CON00_HCLK_SECURE_NS_BIU_EN_SHIFT)   /* 0x00000080 */
#define SECURECRU_GATE_CON00_PCLK_OTPC_NS_EN_SHIFT         (8U)
#define SECURECRU_GATE_CON00_PCLK_OTPC_NS_EN_MASK          (0x1U << SECURECRU_GATE_CON00_PCLK_OTPC_NS_EN_SHIFT)         /* 0x00000100 */
#define SECURECRU_GATE_CON00_CLK_OTPC_NS_EN_SHIFT          (9U)
#define SECURECRU_GATE_CON00_CLK_OTPC_NS_EN_MASK           (0x1U << SECURECRU_GATE_CON00_CLK_OTPC_NS_EN_SHIFT)          /* 0x00000200 */
/* SOFTRST_CON00 */
#define SECURECRU_SOFTRST_CON00_OFFSET                     (0xA00U)
#define SECURECRU_SOFTRST_CON00_HRESETN_CRYPTO_NS_SHIFT    (3U)
#define SECURECRU_SOFTRST_CON00_HRESETN_CRYPTO_NS_MASK     (0x1U << SECURECRU_SOFTRST_CON00_HRESETN_CRYPTO_NS_SHIFT)    /* 0x00000008 */
#define SECURECRU_SOFTRST_CON00_HRESETN_TRNG_NS_SHIFT      (4U)
#define SECURECRU_SOFTRST_CON00_HRESETN_TRNG_NS_MASK       (0x1U << SECURECRU_SOFTRST_CON00_HRESETN_TRNG_NS_SHIFT)      /* 0x00000010 */
#define SECURECRU_SOFTRST_CON00_PRESETN_SECURE_NS_BIU_SHIFT (5U)
#define SECURECRU_SOFTRST_CON00_PRESETN_SECURE_NS_BIU_MASK (0x1U << SECURECRU_SOFTRST_CON00_PRESETN_SECURE_NS_BIU_SHIFT) /* 0x00000020 */
#define SECURECRU_SOFTRST_CON00_ARESETN_SECURE_NS_BIU_SHIFT (6U)
#define SECURECRU_SOFTRST_CON00_ARESETN_SECURE_NS_BIU_MASK (0x1U << SECURECRU_SOFTRST_CON00_ARESETN_SECURE_NS_BIU_SHIFT) /* 0x00000040 */
#define SECURECRU_SOFTRST_CON00_HRESETN_SECURE_NS_BIU_SHIFT (7U)
#define SECURECRU_SOFTRST_CON00_HRESETN_SECURE_NS_BIU_MASK (0x1U << SECURECRU_SOFTRST_CON00_HRESETN_SECURE_NS_BIU_SHIFT) /* 0x00000080 */
#define SECURECRU_SOFTRST_CON00_PRESETN_OTPC_NS_SHIFT      (8U)
#define SECURECRU_SOFTRST_CON00_PRESETN_OTPC_NS_MASK       (0x1U << SECURECRU_SOFTRST_CON00_PRESETN_OTPC_NS_SHIFT)      /* 0x00000100 */
#define SECURECRU_SOFTRST_CON00_RESETN_OTPC_NS_SHIFT       (9U)
#define SECURECRU_SOFTRST_CON00_RESETN_OTPC_NS_MASK        (0x1U << SECURECRU_SOFTRST_CON00_RESETN_OTPC_NS_SHIFT)       /* 0x00000200 */
/* AUTOCS_HCLK_SECURE_NS_ROOT_CON0 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_OFFSET   (0xD08U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_IDLE_TH_MASK (0xFFFU << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_WAIT_TH_MASK (0xFFFFU << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_SECURE_NS_ROOT_CON1 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_OFFSET   (0xD0CU)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << SECURECRU_AUTOCS_HCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_PCLK_SECURE_NS_ROOT_CON0 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_OFFSET   (0xDE0U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_IDLE_TH_MASK (0xFFFU << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_WAIT_TH_MASK (0xFFFFU << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_PCLK_SECURE_NS_ROOT_CON1 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_OFFSET   (0xDE4U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << SECURECRU_AUTOCS_PCLK_SECURE_NS_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* CLKSEL_CON10 */
#define SECURECRU_CLKSEL_CON10_OFFSET                      (0x4000U)
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_350M_SRC_DIV_SHIFT (0U)
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_350M_SRC_DIV_MASK (0x7U << SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_350M_SRC_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_58M_SRC_DIV_SHIFT (3U)
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_58M_SRC_DIV_MASK (0x7U << SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_58M_SRC_DIV_SHIFT) /* 0x00000038 */
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_116M_SRC_DIV_SHIFT (6U)
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_116M_SRC_DIV_MASK (0x7U << SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_116M_SRC_DIV_SHIFT) /* 0x000001C0 */
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_175M_SRC_DIV_SHIFT (9U)
#define SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_175M_SRC_DIV_MASK (0x7U << SECURECRU_CLKSEL_CON10_CLK_MATRIX_SEC_175M_SRC_DIV_SHIFT) /* 0x00000E00 */
/* CLKSEL_CON11 */
#define SECURECRU_CLKSEL_CON11_OFFSET                      (0x4004U)
#define SECURECRU_CLKSEL_CON11_ACLK_SECURE_S_ROOT_SEL_SHIFT (0U)
#define SECURECRU_CLKSEL_CON11_ACLK_SECURE_S_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON11_ACLK_SECURE_S_ROOT_SEL_SHIFT) /* 0x00000003 */
#define SECURECRU_CLKSEL_CON11_HCLK_SECURE_S_ROOT_SEL_SHIFT (2U)
#define SECURECRU_CLKSEL_CON11_HCLK_SECURE_S_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON11_HCLK_SECURE_S_ROOT_SEL_SHIFT) /* 0x0000000C */
#define SECURECRU_CLKSEL_CON11_PCLK_SECURE_S_ROOT_SEL_SHIFT (4U)
#define SECURECRU_CLKSEL_CON11_PCLK_SECURE_S_ROOT_SEL_MASK (0x3U << SECURECRU_CLKSEL_CON11_PCLK_SECURE_S_ROOT_SEL_SHIFT) /* 0x00000030 */
#define SECURECRU_CLKSEL_CON11_CLK_STIMER0_ROOT_SEL_SHIFT  (6U)
#define SECURECRU_CLKSEL_CON11_CLK_STIMER0_ROOT_SEL_MASK   (0x1U << SECURECRU_CLKSEL_CON11_CLK_STIMER0_ROOT_SEL_SHIFT)  /* 0x00000040 */
#define SECURECRU_CLKSEL_CON11_CLK_STIMER1_ROOT_SEL_SHIFT  (7U)
#define SECURECRU_CLKSEL_CON11_CLK_STIMER1_ROOT_SEL_MASK   (0x1U << SECURECRU_CLKSEL_CON11_CLK_STIMER1_ROOT_SEL_SHIFT)  /* 0x00000080 */
#define SECURECRU_CLKSEL_CON11_CLK_MATRIX_SEC_100M_SRC_DIV_SHIFT (8U)
#define SECURECRU_CLKSEL_CON11_CLK_MATRIX_SEC_100M_SRC_DIV_MASK (0x7U << SECURECRU_CLKSEL_CON11_CLK_MATRIX_SEC_100M_SRC_DIV_SHIFT) /* 0x00000700 */
#define SECURECRU_CLKSEL_CON11_CLK_PKA_CRYPTO_S_SEL_SHIFT  (11U)
#define SECURECRU_CLKSEL_CON11_CLK_PKA_CRYPTO_S_SEL_MASK   (0x3U << SECURECRU_CLKSEL_CON11_CLK_PKA_CRYPTO_S_SEL_SHIFT)  /* 0x00001800 */
/* CLKSEL_CON14 */
#define SECURECRU_CLKSEL_CON14_OFFSET                      (0x4010U)
#define SECURECRU_CLKSEL_CON14_HCLK_VO1_S_ROOT_SEL_SHIFT   (0U)
#define SECURECRU_CLKSEL_CON14_HCLK_VO1_S_ROOT_SEL_MASK    (0x3U << SECURECRU_CLKSEL_CON14_HCLK_VO1_S_ROOT_SEL_SHIFT)   /* 0x00000003 */
/* CLKSEL_CON16 */
#define SECURECRU_CLKSEL_CON16_OFFSET                      (0x4018U)
#define SECURECRU_CLKSEL_CON16_HCLK_VO0_S_ROOT_SEL_SHIFT   (0U)
#define SECURECRU_CLKSEL_CON16_HCLK_VO0_S_ROOT_SEL_MASK    (0x3U << SECURECRU_CLKSEL_CON16_HCLK_VO0_S_ROOT_SEL_SHIFT)   /* 0x00000003 */
#define SECURECRU_CLKSEL_CON16_PCLK_VO0_S_ROOT_SEL_SHIFT   (2U)
#define SECURECRU_CLKSEL_CON16_PCLK_VO0_S_ROOT_SEL_MASK    (0x3U << SECURECRU_CLKSEL_CON16_PCLK_VO0_S_ROOT_SEL_SHIFT)   /* 0x0000000C */
/* GATE_CON10 */
#define SECURECRU_GATE_CON10_OFFSET                        (0x4028U)
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_350M_SRC_EN_SHIFT (0U)
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_350M_SRC_EN_MASK (0x1U << SECURECRU_GATE_CON10_CLK_MATRIX_SEC_350M_SRC_EN_SHIFT) /* 0x00000001 */
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_58M_SRC_EN_SHIFT (1U)
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_58M_SRC_EN_MASK (0x1U << SECURECRU_GATE_CON10_CLK_MATRIX_SEC_58M_SRC_EN_SHIFT) /* 0x00000002 */
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_116M_SRC_EN_SHIFT (2U)
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_116M_SRC_EN_MASK (0x1U << SECURECRU_GATE_CON10_CLK_MATRIX_SEC_116M_SRC_EN_SHIFT) /* 0x00000004 */
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_175M_SRC_EN_SHIFT (3U)
#define SECURECRU_GATE_CON10_CLK_MATRIX_SEC_175M_SRC_EN_MASK (0x1U << SECURECRU_GATE_CON10_CLK_MATRIX_SEC_175M_SRC_EN_SHIFT) /* 0x00000008 */
#define SECURECRU_GATE_CON10_ACLK_SECURE_S_ROOT_EN_SHIFT   (6U)
#define SECURECRU_GATE_CON10_ACLK_SECURE_S_ROOT_EN_MASK    (0x1U << SECURECRU_GATE_CON10_ACLK_SECURE_S_ROOT_EN_SHIFT)   /* 0x00000040 */
#define SECURECRU_GATE_CON10_HCLK_SECURE_S_ROOT_EN_SHIFT   (7U)
#define SECURECRU_GATE_CON10_HCLK_SECURE_S_ROOT_EN_MASK    (0x1U << SECURECRU_GATE_CON10_HCLK_SECURE_S_ROOT_EN_SHIFT)   /* 0x00000080 */
#define SECURECRU_GATE_CON10_PCLK_SECURE_S_ROOT_EN_SHIFT   (8U)
#define SECURECRU_GATE_CON10_PCLK_SECURE_S_ROOT_EN_MASK    (0x1U << SECURECRU_GATE_CON10_PCLK_SECURE_S_ROOT_EN_SHIFT)   /* 0x00000100 */
#define SECURECRU_GATE_CON10_CLK_BUS_STIMER0_ROOT_EN_SHIFT (9U)
#define SECURECRU_GATE_CON10_CLK_BUS_STIMER0_ROOT_EN_MASK  (0x1U << SECURECRU_GATE_CON10_CLK_BUS_STIMER0_ROOT_EN_SHIFT) /* 0x00000200 */
#define SECURECRU_GATE_CON10_PCLK_STIMER0_EN_SHIFT         (10U)
#define SECURECRU_GATE_CON10_PCLK_STIMER0_EN_MASK          (0x1U << SECURECRU_GATE_CON10_PCLK_STIMER0_EN_SHIFT)         /* 0x00000400 */
#define SECURECRU_GATE_CON10_CLK_STIMER0_EN_SHIFT          (11U)
#define SECURECRU_GATE_CON10_CLK_STIMER0_EN_MASK           (0x1U << SECURECRU_GATE_CON10_CLK_STIMER0_EN_SHIFT)          /* 0x00000800 */
#define SECURECRU_GATE_CON10_CLK_STIMER1_EN_SHIFT          (12U)
#define SECURECRU_GATE_CON10_CLK_STIMER1_EN_MASK           (0x1U << SECURECRU_GATE_CON10_CLK_STIMER1_EN_SHIFT)          /* 0x00001000 */
#define SECURECRU_GATE_CON10_CLK_STIMER2_EN_SHIFT          (13U)
#define SECURECRU_GATE_CON10_CLK_STIMER2_EN_MASK           (0x1U << SECURECRU_GATE_CON10_CLK_STIMER2_EN_SHIFT)          /* 0x00002000 */
#define SECURECRU_GATE_CON10_CLK_STIMER3_EN_SHIFT          (14U)
#define SECURECRU_GATE_CON10_CLK_STIMER3_EN_MASK           (0x1U << SECURECRU_GATE_CON10_CLK_STIMER3_EN_SHIFT)          /* 0x00004000 */
#define SECURECRU_GATE_CON10_CLK_STIMER4_EN_SHIFT          (15U)
#define SECURECRU_GATE_CON10_CLK_STIMER4_EN_MASK           (0x1U << SECURECRU_GATE_CON10_CLK_STIMER4_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON11 */
#define SECURECRU_GATE_CON11_OFFSET                        (0x402CU)
#define SECURECRU_GATE_CON11_CLK_STIMER5_EN_SHIFT          (0U)
#define SECURECRU_GATE_CON11_CLK_STIMER5_EN_MASK           (0x1U << SECURECRU_GATE_CON11_CLK_STIMER5_EN_SHIFT)          /* 0x00000001 */
#define SECURECRU_GATE_CON11_CLK_STIMER1_ROOT_EN_SHIFT     (1U)
#define SECURECRU_GATE_CON11_CLK_STIMER1_ROOT_EN_MASK      (0x1U << SECURECRU_GATE_CON11_CLK_STIMER1_ROOT_EN_SHIFT)     /* 0x00000002 */
#define SECURECRU_GATE_CON11_PCLK_STIMER1_EN_SHIFT         (2U)
#define SECURECRU_GATE_CON11_PCLK_STIMER1_EN_MASK          (0x1U << SECURECRU_GATE_CON11_PCLK_STIMER1_EN_SHIFT)         /* 0x00000004 */
#define SECURECRU_GATE_CON11_CLK_MATRIX_SEC_100M_SRC_EN_SHIFT (3U)
#define SECURECRU_GATE_CON11_CLK_MATRIX_SEC_100M_SRC_EN_MASK (0x1U << SECURECRU_GATE_CON11_CLK_MATRIX_SEC_100M_SRC_EN_SHIFT) /* 0x00000008 */
#define SECURECRU_GATE_CON11_PCLK_OTPMASK_EN_SHIFT         (4U)
#define SECURECRU_GATE_CON11_PCLK_OTPMASK_EN_MASK          (0x1U << SECURECRU_GATE_CON11_PCLK_OTPMASK_EN_SHIFT)         /* 0x00000010 */
#define SECURECRU_GATE_CON11_CLK_STIMER6_EN_SHIFT          (7U)
#define SECURECRU_GATE_CON11_CLK_STIMER6_EN_MASK           (0x1U << SECURECRU_GATE_CON11_CLK_STIMER6_EN_SHIFT)          /* 0x00000080 */
#define SECURECRU_GATE_CON11_CLK_STIMER7_EN_SHIFT          (8U)
#define SECURECRU_GATE_CON11_CLK_STIMER7_EN_MASK           (0x1U << SECURECRU_GATE_CON11_CLK_STIMER7_EN_SHIFT)          /* 0x00000100 */
#define SECURECRU_GATE_CON11_CLK_STIMER8_EN_SHIFT          (9U)
#define SECURECRU_GATE_CON11_CLK_STIMER8_EN_MASK           (0x1U << SECURECRU_GATE_CON11_CLK_STIMER8_EN_SHIFT)          /* 0x00000200 */
#define SECURECRU_GATE_CON11_CLK_STIMER9_EN_SHIFT          (10U)
#define SECURECRU_GATE_CON11_CLK_STIMER9_EN_MASK           (0x1U << SECURECRU_GATE_CON11_CLK_STIMER9_EN_SHIFT)          /* 0x00000400 */
#define SECURECRU_GATE_CON11_CLK_STIMER10_EN_SHIFT         (11U)
#define SECURECRU_GATE_CON11_CLK_STIMER10_EN_MASK          (0x1U << SECURECRU_GATE_CON11_CLK_STIMER10_EN_SHIFT)         /* 0x00000800 */
#define SECURECRU_GATE_CON11_CLK_STIMER11_EN_SHIFT         (12U)
#define SECURECRU_GATE_CON11_CLK_STIMER11_EN_MASK          (0x1U << SECURECRU_GATE_CON11_CLK_STIMER11_EN_SHIFT)         /* 0x00001000 */
#define SECURECRU_GATE_CON11_PCLK_SYS_SGRF_EN_SHIFT        (13U)
#define SECURECRU_GATE_CON11_PCLK_SYS_SGRF_EN_MASK         (0x1U << SECURECRU_GATE_CON11_PCLK_SYS_SGRF_EN_SHIFT)        /* 0x00002000 */
#define SECURECRU_GATE_CON11_PCLK_DFT2APB_EN_SHIFT         (14U)
#define SECURECRU_GATE_CON11_PCLK_DFT2APB_EN_MASK          (0x1U << SECURECRU_GATE_CON11_PCLK_DFT2APB_EN_SHIFT)         /* 0x00004000 */
/* GATE_CON12 */
#define SECURECRU_GATE_CON12_OFFSET                        (0x4030U)
#define SECURECRU_GATE_CON12_ACLK_SECURE_S_BIU_EN_SHIFT    (4U)
#define SECURECRU_GATE_CON12_ACLK_SECURE_S_BIU_EN_MASK     (0x1U << SECURECRU_GATE_CON12_ACLK_SECURE_S_BIU_EN_SHIFT)    /* 0x00000010 */
#define SECURECRU_GATE_CON12_HCLK_SECURE_S_BIU_EN_SHIFT    (5U)
#define SECURECRU_GATE_CON12_HCLK_SECURE_S_BIU_EN_MASK     (0x1U << SECURECRU_GATE_CON12_HCLK_SECURE_S_BIU_EN_SHIFT)    /* 0x00000020 */
#define SECURECRU_GATE_CON12_PCLK_SECURE_S_BIU_EN_SHIFT    (6U)
#define SECURECRU_GATE_CON12_PCLK_SECURE_S_BIU_EN_MASK     (0x1U << SECURECRU_GATE_CON12_PCLK_SECURE_S_BIU_EN_SHIFT)    /* 0x00000040 */
#define SECURECRU_GATE_CON12_PCLK_KLAD_EN_SHIFT            (7U)
#define SECURECRU_GATE_CON12_PCLK_KLAD_EN_MASK             (0x1U << SECURECRU_GATE_CON12_PCLK_KLAD_EN_SHIFT)            /* 0x00000080 */
#define SECURECRU_GATE_CON12_HCLK_CRYPTO_S_EN_SHIFT        (8U)
#define SECURECRU_GATE_CON12_HCLK_CRYPTO_S_EN_MASK         (0x1U << SECURECRU_GATE_CON12_HCLK_CRYPTO_S_EN_SHIFT)        /* 0x00000100 */
#define SECURECRU_GATE_CON12_HCLK_KLAD_EN_SHIFT            (9U)
#define SECURECRU_GATE_CON12_HCLK_KLAD_EN_MASK             (0x1U << SECURECRU_GATE_CON12_HCLK_KLAD_EN_SHIFT)            /* 0x00000200 */
#define SECURECRU_GATE_CON12_CLK_PKA_CRYPTO_S_EN_SHIFT     (11U)
#define SECURECRU_GATE_CON12_CLK_PKA_CRYPTO_S_EN_MASK      (0x1U << SECURECRU_GATE_CON12_CLK_PKA_CRYPTO_S_EN_SHIFT)     /* 0x00000800 */
#define SECURECRU_GATE_CON12_ACLK_CRYPTO_S_EN_SHIFT        (12U)
#define SECURECRU_GATE_CON12_ACLK_CRYPTO_S_EN_MASK         (0x1U << SECURECRU_GATE_CON12_ACLK_CRYPTO_S_EN_SHIFT)        /* 0x00001000 */
/* GATE_CON13 */
#define SECURECRU_GATE_CON13_OFFSET                        (0x4034U)
#define SECURECRU_GATE_CON13_HCLK_TRNG_S_EN_SHIFT          (0U)
#define SECURECRU_GATE_CON13_HCLK_TRNG_S_EN_MASK           (0x1U << SECURECRU_GATE_CON13_HCLK_TRNG_S_EN_SHIFT)          /* 0x00000001 */
#define SECURECRU_GATE_CON13_PCLK_OTPC_S_EN_SHIFT          (3U)
#define SECURECRU_GATE_CON13_PCLK_OTPC_S_EN_MASK           (0x1U << SECURECRU_GATE_CON13_PCLK_OTPC_S_EN_SHIFT)          /* 0x00000008 */
#define SECURECRU_GATE_CON13_CLK_OTPC_S_EN_SHIFT           (4U)
#define SECURECRU_GATE_CON13_CLK_OTPC_S_EN_MASK            (0x1U << SECURECRU_GATE_CON13_CLK_OTPC_S_EN_SHIFT)           /* 0x00000010 */
#define SECURECRU_GATE_CON13_HCLK_BOOTROM_EN_SHIFT         (5U)
#define SECURECRU_GATE_CON13_HCLK_BOOTROM_EN_MASK          (0x1U << SECURECRU_GATE_CON13_HCLK_BOOTROM_EN_SHIFT)         /* 0x00000020 */
#define SECURECRU_GATE_CON13_PCLK_JDBCK_DAP_EN_SHIFT       (6U)
#define SECURECRU_GATE_CON13_PCLK_JDBCK_DAP_EN_MASK        (0x1U << SECURECRU_GATE_CON13_PCLK_JDBCK_DAP_EN_SHIFT)       /* 0x00000040 */
#define SECURECRU_GATE_CON13_CLK_JDBCK_DAP_EN_SHIFT        (7U)
#define SECURECRU_GATE_CON13_CLK_JDBCK_DAP_EN_MASK         (0x1U << SECURECRU_GATE_CON13_CLK_JDBCK_DAP_EN_SHIFT)        /* 0x00000080 */
#define SECURECRU_GATE_CON13_PCLK_SECURE_CRU_EN_SHIFT      (8U)
#define SECURECRU_GATE_CON13_PCLK_SECURE_CRU_EN_MASK       (0x1U << SECURECRU_GATE_CON13_PCLK_SECURE_CRU_EN_SHIFT)      /* 0x00000100 */
#define SECURECRU_GATE_CON13_PCLK_WDT_S_EN_SHIFT           (9U)
#define SECURECRU_GATE_CON13_PCLK_WDT_S_EN_MASK            (0x1U << SECURECRU_GATE_CON13_PCLK_WDT_S_EN_SHIFT)           /* 0x00000200 */
#define SECURECRU_GATE_CON13_TCLK_WDT_S_EN_SHIFT           (10U)
#define SECURECRU_GATE_CON13_TCLK_WDT_S_EN_MASK            (0x1U << SECURECRU_GATE_CON13_TCLK_WDT_S_EN_SHIFT)           /* 0x00000400 */
/* GATE_CON14 */
#define SECURECRU_GATE_CON14_OFFSET                        (0x4038U)
#define SECURECRU_GATE_CON14_PCLK_HDCP1_TRNG_EN_SHIFT      (0U)
#define SECURECRU_GATE_CON14_PCLK_HDCP1_TRNG_EN_MASK       (0x1U << SECURECRU_GATE_CON14_PCLK_HDCP1_TRNG_EN_SHIFT)      /* 0x00000001 */
#define SECURECRU_GATE_CON14_HCLK_VO1_S_ROOT_EN_SHIFT      (1U)
#define SECURECRU_GATE_CON14_HCLK_VO1_S_ROOT_EN_MASK       (0x1U << SECURECRU_GATE_CON14_HCLK_VO1_S_ROOT_EN_SHIFT)      /* 0x00000002 */
#define SECURECRU_GATE_CON14_HCLK_VO1_S_BIU_EN_SHIFT       (2U)
#define SECURECRU_GATE_CON14_HCLK_VO1_S_BIU_EN_MASK        (0x1U << SECURECRU_GATE_CON14_HCLK_VO1_S_BIU_EN_SHIFT)       /* 0x00000004 */
#define SECURECRU_GATE_CON14_HCLK_HDCP_KEY1_EN_SHIFT       (3U)
#define SECURECRU_GATE_CON14_HCLK_HDCP_KEY1_EN_MASK        (0x1U << SECURECRU_GATE_CON14_HCLK_HDCP_KEY1_EN_SHIFT)       /* 0x00000008 */
/* GATE_CON15 */
#define SECURECRU_GATE_CON15_OFFSET                        (0x403CU)
#define SECURECRU_GATE_CON15_PCLK_HDCP0_TRNG_EN_SHIFT      (0U)
#define SECURECRU_GATE_CON15_PCLK_HDCP0_TRNG_EN_MASK       (0x1U << SECURECRU_GATE_CON15_PCLK_HDCP0_TRNG_EN_SHIFT)      /* 0x00000001 */
#define SECURECRU_GATE_CON15_HCLK_VO0_S_ROOT_EN_SHIFT      (1U)
#define SECURECRU_GATE_CON15_HCLK_VO0_S_ROOT_EN_MASK       (0x1U << SECURECRU_GATE_CON15_HCLK_VO0_S_ROOT_EN_SHIFT)      /* 0x00000002 */
#define SECURECRU_GATE_CON15_HCLK_VO0_S_BIU_EN_SHIFT       (2U)
#define SECURECRU_GATE_CON15_HCLK_VO0_S_BIU_EN_MASK        (0x1U << SECURECRU_GATE_CON15_HCLK_VO0_S_BIU_EN_SHIFT)       /* 0x00000004 */
#define SECURECRU_GATE_CON15_HCLK_HDCP_KEY0_EN_SHIFT       (3U)
#define SECURECRU_GATE_CON15_HCLK_HDCP_KEY0_EN_MASK        (0x1U << SECURECRU_GATE_CON15_HCLK_HDCP_KEY0_EN_SHIFT)       /* 0x00000008 */
#define SECURECRU_GATE_CON15_PCLK_VO0_S_ROOT_EN_SHIFT      (4U)
#define SECURECRU_GATE_CON15_PCLK_VO0_S_ROOT_EN_MASK       (0x1U << SECURECRU_GATE_CON15_PCLK_VO0_S_ROOT_EN_SHIFT)      /* 0x00000010 */
#define SECURECRU_GATE_CON15_PCLK_EDP_S_EN_SHIFT           (5U)
#define SECURECRU_GATE_CON15_PCLK_EDP_S_EN_MASK            (0x1U << SECURECRU_GATE_CON15_PCLK_EDP_S_EN_SHIFT)           /* 0x00000020 */
#define SECURECRU_GATE_CON15_PCLK_EDP_BIU_EN_SHIFT         (6U)
#define SECURECRU_GATE_CON15_PCLK_EDP_BIU_EN_MASK          (0x1U << SECURECRU_GATE_CON15_PCLK_EDP_BIU_EN_SHIFT)         /* 0x00000040 */
/* SOFTRST_CON10 */
#define SECURECRU_SOFTRST_CON10_OFFSET                     (0x4050U)
#define SECURECRU_SOFTRST_CON10_PRESETN_STIMER0_SHIFT      (10U)
#define SECURECRU_SOFTRST_CON10_PRESETN_STIMER0_MASK       (0x1U << SECURECRU_SOFTRST_CON10_PRESETN_STIMER0_SHIFT)      /* 0x00000400 */
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER0_SHIFT       (11U)
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER0_MASK        (0x1U << SECURECRU_SOFTRST_CON10_RESETN_STIMER0_SHIFT)       /* 0x00000800 */
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER1_SHIFT       (12U)
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER1_MASK        (0x1U << SECURECRU_SOFTRST_CON10_RESETN_STIMER1_SHIFT)       /* 0x00001000 */
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER2_SHIFT       (13U)
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER2_MASK        (0x1U << SECURECRU_SOFTRST_CON10_RESETN_STIMER2_SHIFT)       /* 0x00002000 */
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER3_SHIFT       (14U)
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER3_MASK        (0x1U << SECURECRU_SOFTRST_CON10_RESETN_STIMER3_SHIFT)       /* 0x00004000 */
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER4_SHIFT       (15U)
#define SECURECRU_SOFTRST_CON10_RESETN_STIMER4_MASK        (0x1U << SECURECRU_SOFTRST_CON10_RESETN_STIMER4_SHIFT)       /* 0x00008000 */
/* SOFTRST_CON11 */
#define SECURECRU_SOFTRST_CON11_OFFSET                     (0x4054U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER5_SHIFT       (0U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER5_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER5_SHIFT)       /* 0x00000001 */
#define SECURECRU_SOFTRST_CON11_PRESETN_STIMER1_SHIFT      (2U)
#define SECURECRU_SOFTRST_CON11_PRESETN_STIMER1_MASK       (0x1U << SECURECRU_SOFTRST_CON11_PRESETN_STIMER1_SHIFT)      /* 0x00000004 */
#define SECURECRU_SOFTRST_CON11_PRESETN_OTPMASK_SHIFT      (4U)
#define SECURECRU_SOFTRST_CON11_PRESETN_OTPMASK_MASK       (0x1U << SECURECRU_SOFTRST_CON11_PRESETN_OTPMASK_SHIFT)      /* 0x00000010 */
#define SECURECRU_SOFTRST_CON11_RESETN_OTPMASK_SHIFT       (5U)
#define SECURECRU_SOFTRST_CON11_RESETN_OTPMASK_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_OTPMASK_SHIFT)       /* 0x00000020 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER6_SHIFT       (7U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER6_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER6_SHIFT)       /* 0x00000080 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER7_SHIFT       (8U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER7_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER7_SHIFT)       /* 0x00000100 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER8_SHIFT       (9U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER8_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER8_SHIFT)       /* 0x00000200 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER9_SHIFT       (10U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER9_MASK        (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER9_SHIFT)       /* 0x00000400 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER10_SHIFT      (11U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER10_MASK       (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER10_SHIFT)      /* 0x00000800 */
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER11_SHIFT      (12U)
#define SECURECRU_SOFTRST_CON11_RESETN_STIMER11_MASK       (0x1U << SECURECRU_SOFTRST_CON11_RESETN_STIMER11_SHIFT)      /* 0x00001000 */
#define SECURECRU_SOFTRST_CON11_PRESETN_SYS_SGRF_SHIFT     (13U)
#define SECURECRU_SOFTRST_CON11_PRESETN_SYS_SGRF_MASK      (0x1U << SECURECRU_SOFTRST_CON11_PRESETN_SYS_SGRF_SHIFT)     /* 0x00002000 */
#define SECURECRU_SOFTRST_CON11_PRESETN_DFT2APB_SHIFT      (14U)
#define SECURECRU_SOFTRST_CON11_PRESETN_DFT2APB_MASK       (0x1U << SECURECRU_SOFTRST_CON11_PRESETN_DFT2APB_SHIFT)      /* 0x00004000 */
/* SOFTRST_CON12 */
#define SECURECRU_SOFTRST_CON12_OFFSET                     (0x4058U)
#define SECURECRU_SOFTRST_CON12_RESETN_OTPC_ARB_SHIFT      (1U)
#define SECURECRU_SOFTRST_CON12_RESETN_OTPC_ARB_MASK       (0x1U << SECURECRU_SOFTRST_CON12_RESETN_OTPC_ARB_SHIFT)      /* 0x00000002 */
#define SECURECRU_SOFTRST_CON12_ARESETN_SECURE_S_BIU_SHIFT (4U)
#define SECURECRU_SOFTRST_CON12_ARESETN_SECURE_S_BIU_MASK  (0x1U << SECURECRU_SOFTRST_CON12_ARESETN_SECURE_S_BIU_SHIFT) /* 0x00000010 */
#define SECURECRU_SOFTRST_CON12_HRESETN_SECURE_S_BIU_SHIFT (5U)
#define SECURECRU_SOFTRST_CON12_HRESETN_SECURE_S_BIU_MASK  (0x1U << SECURECRU_SOFTRST_CON12_HRESETN_SECURE_S_BIU_SHIFT) /* 0x00000020 */
#define SECURECRU_SOFTRST_CON12_PRESETN_SECURE_S_BIU_SHIFT (6U)
#define SECURECRU_SOFTRST_CON12_PRESETN_SECURE_S_BIU_MASK  (0x1U << SECURECRU_SOFTRST_CON12_PRESETN_SECURE_S_BIU_SHIFT) /* 0x00000040 */
#define SECURECRU_SOFTRST_CON12_PRESETN_KLAD_SHIFT         (7U)
#define SECURECRU_SOFTRST_CON12_PRESETN_KLAD_MASK          (0x1U << SECURECRU_SOFTRST_CON12_PRESETN_KLAD_SHIFT)         /* 0x00000080 */
#define SECURECRU_SOFTRST_CON12_HRESETN_CRYPTO_S_SHIFT     (8U)
#define SECURECRU_SOFTRST_CON12_HRESETN_CRYPTO_S_MASK      (0x1U << SECURECRU_SOFTRST_CON12_HRESETN_CRYPTO_S_SHIFT)     /* 0x00000100 */
#define SECURECRU_SOFTRST_CON12_HRESETN_KLAD_SHIFT         (9U)
#define SECURECRU_SOFTRST_CON12_HRESETN_KLAD_MASK          (0x1U << SECURECRU_SOFTRST_CON12_HRESETN_KLAD_SHIFT)         /* 0x00000200 */
#define SECURECRU_SOFTRST_CON12_RESETN_PKA_CRYPTO_S_SHIFT  (11U)
#define SECURECRU_SOFTRST_CON12_RESETN_PKA_CRYPTO_S_MASK   (0x1U << SECURECRU_SOFTRST_CON12_RESETN_PKA_CRYPTO_S_SHIFT)  /* 0x00000800 */
#define SECURECRU_SOFTRST_CON12_ARESETN_CRYPTO_S_SHIFT     (12U)
#define SECURECRU_SOFTRST_CON12_ARESETN_CRYPTO_S_MASK      (0x1U << SECURECRU_SOFTRST_CON12_ARESETN_CRYPTO_S_SHIFT)     /* 0x00001000 */
/* SOFTRST_CON13 */
#define SECURECRU_SOFTRST_CON13_OFFSET                     (0x405CU)
#define SECURECRU_SOFTRST_CON13_HRESETN_TRNG_S_SHIFT       (0U)
#define SECURECRU_SOFTRST_CON13_HRESETN_TRNG_S_MASK        (0x1U << SECURECRU_SOFTRST_CON13_HRESETN_TRNG_S_SHIFT)       /* 0x00000001 */
#define SECURECRU_SOFTRST_CON13_PRESETN_OTPC_S_SHIFT       (3U)
#define SECURECRU_SOFTRST_CON13_PRESETN_OTPC_S_MASK        (0x1U << SECURECRU_SOFTRST_CON13_PRESETN_OTPC_S_SHIFT)       /* 0x00000008 */
#define SECURECRU_SOFTRST_CON13_RESETN_OTPC_S_SHIFT        (4U)
#define SECURECRU_SOFTRST_CON13_RESETN_OTPC_S_MASK         (0x1U << SECURECRU_SOFTRST_CON13_RESETN_OTPC_S_SHIFT)        /* 0x00000010 */
#define SECURECRU_SOFTRST_CON13_HRESETN_BOOTROM_SHIFT      (5U)
#define SECURECRU_SOFTRST_CON13_HRESETN_BOOTROM_MASK       (0x1U << SECURECRU_SOFTRST_CON13_HRESETN_BOOTROM_SHIFT)      /* 0x00000020 */
#define SECURECRU_SOFTRST_CON13_PRESETN_JDBCK_DAP_SHIFT    (6U)
#define SECURECRU_SOFTRST_CON13_PRESETN_JDBCK_DAP_MASK     (0x1U << SECURECRU_SOFTRST_CON13_PRESETN_JDBCK_DAP_SHIFT)    /* 0x00000040 */
#define SECURECRU_SOFTRST_CON13_RESETN_JDBCK_DAP_SHIFT     (7U)
#define SECURECRU_SOFTRST_CON13_RESETN_JDBCK_DAP_MASK      (0x1U << SECURECRU_SOFTRST_CON13_RESETN_JDBCK_DAP_SHIFT)     /* 0x00000080 */
#define SECURECRU_SOFTRST_CON13_PRESETN_SECURE_CRU_SHIFT   (8U)
#define SECURECRU_SOFTRST_CON13_PRESETN_SECURE_CRU_MASK    (0x1U << SECURECRU_SOFTRST_CON13_PRESETN_SECURE_CRU_SHIFT)   /* 0x00000100 */
#define SECURECRU_SOFTRST_CON13_PRESETN_WDT_S_SHIFT        (9U)
#define SECURECRU_SOFTRST_CON13_PRESETN_WDT_S_MASK         (0x1U << SECURECRU_SOFTRST_CON13_PRESETN_WDT_S_SHIFT)        /* 0x00000200 */
#define SECURECRU_SOFTRST_CON13_TRESETN_WDT_S_SHIFT        (10U)
#define SECURECRU_SOFTRST_CON13_TRESETN_WDT_S_MASK         (0x1U << SECURECRU_SOFTRST_CON13_TRESETN_WDT_S_SHIFT)        /* 0x00000400 */
/* SOFTRST_CON14 */
#define SECURECRU_SOFTRST_CON14_OFFSET                     (0x4060U)
#define SECURECRU_SOFTRST_CON14_PRESETN_HDCP1_TRNG_SHIFT   (0U)
#define SECURECRU_SOFTRST_CON14_PRESETN_HDCP1_TRNG_MASK    (0x1U << SECURECRU_SOFTRST_CON14_PRESETN_HDCP1_TRNG_SHIFT)   /* 0x00000001 */
#define SECURECRU_SOFTRST_CON14_HRESETN_VO1_S_BIU_SHIFT    (2U)
#define SECURECRU_SOFTRST_CON14_HRESETN_VO1_S_BIU_MASK     (0x1U << SECURECRU_SOFTRST_CON14_HRESETN_VO1_S_BIU_SHIFT)    /* 0x00000004 */
#define SECURECRU_SOFTRST_CON14_HRESETN_HDCP_KEY1_SHIFT    (3U)
#define SECURECRU_SOFTRST_CON14_HRESETN_HDCP_KEY1_MASK     (0x1U << SECURECRU_SOFTRST_CON14_HRESETN_HDCP_KEY1_SHIFT)    /* 0x00000008 */
/* SOFTRST_CON15 */
#define SECURECRU_SOFTRST_CON15_OFFSET                     (0x4064U)
#define SECURECRU_SOFTRST_CON15_PRESETN_HDCP0_TRNG_SHIFT   (0U)
#define SECURECRU_SOFTRST_CON15_PRESETN_HDCP0_TRNG_MASK    (0x1U << SECURECRU_SOFTRST_CON15_PRESETN_HDCP0_TRNG_SHIFT)   /* 0x00000001 */
#define SECURECRU_SOFTRST_CON15_HRESETN_VO0_S_BIU_SHIFT    (2U)
#define SECURECRU_SOFTRST_CON15_HRESETN_VO0_S_BIU_MASK     (0x1U << SECURECRU_SOFTRST_CON15_HRESETN_VO0_S_BIU_SHIFT)    /* 0x00000004 */
#define SECURECRU_SOFTRST_CON15_HRESETN_HDCP_KEY0_SHIFT    (3U)
#define SECURECRU_SOFTRST_CON15_HRESETN_HDCP_KEY0_MASK     (0x1U << SECURECRU_SOFTRST_CON15_HRESETN_HDCP_KEY0_SHIFT)    /* 0x00000008 */
#define SECURECRU_SOFTRST_CON15_PRESETN_EDP_S_SHIFT        (5U)
#define SECURECRU_SOFTRST_CON15_PRESETN_EDP_S_MASK         (0x1U << SECURECRU_SOFTRST_CON15_PRESETN_EDP_S_SHIFT)        /* 0x00000020 */
#define SECURECRU_SOFTRST_CON15_PRESETN_EDP_BIU_SHIFT      (6U)
#define SECURECRU_SOFTRST_CON15_PRESETN_EDP_BIU_MASK       (0x1U << SECURECRU_SOFTRST_CON15_PRESETN_EDP_BIU_SHIFT)      /* 0x00000040 */
/* SPLL_CON0 */
#define SECURECRU_SPLL_CON0_OFFSET                         (0x4220U)
#define SECURECRU_SPLL_CON0_SPLL_M_SHIFT                   (0U)
#define SECURECRU_SPLL_CON0_SPLL_M_MASK                    (0x3FFU << SECURECRU_SPLL_CON0_SPLL_M_SHIFT)                 /* 0x000003FF */
#define SECURECRU_SPLL_CON0_SPLL_BP_SHIFT                  (15U)
#define SECURECRU_SPLL_CON0_SPLL_BP_MASK                   (0x1U << SECURECRU_SPLL_CON0_SPLL_BP_SHIFT)                  /* 0x00008000 */
/* SPLL_CON1 */
#define SECURECRU_SPLL_CON1_OFFSET                         (0x4224U)
#define SECURECRU_SPLL_CON1_SPLL_P_SHIFT                   (0U)
#define SECURECRU_SPLL_CON1_SPLL_P_MASK                    (0x3FU << SECURECRU_SPLL_CON1_SPLL_P_SHIFT)                  /* 0x0000003F */
#define SECURECRU_SPLL_CON1_SPLL_S_SHIFT                   (6U)
#define SECURECRU_SPLL_CON1_SPLL_S_MASK                    (0x7U << SECURECRU_SPLL_CON1_SPLL_S_SHIFT)                   /* 0x000001C0 */
#define SECURECRU_SPLL_CON1_SPLL_RESETB_SHIFT              (13U)
#define SECURECRU_SPLL_CON1_SPLL_RESETB_MASK               (0x1U << SECURECRU_SPLL_CON1_SPLL_RESETB_SHIFT)              /* 0x00002000 */
/* SPLL_CON4 */
#define SECURECRU_SPLL_CON4_OFFSET                         (0x4230U)
#define SECURECRU_SPLL_CON4_SPLL_ICP_SHIFT                 (1U)
#define SECURECRU_SPLL_CON4_SPLL_ICP_MASK                  (0x3U << SECURECRU_SPLL_CON4_SPLL_ICP_SHIFT)                 /* 0x00000006 */
#define SECURECRU_SPLL_CON4_SPLL_AFC_ENB_SHIFT             (3U)
#define SECURECRU_SPLL_CON4_SPLL_AFC_ENB_MASK              (0x1U << SECURECRU_SPLL_CON4_SPLL_AFC_ENB_SHIFT)             /* 0x00000008 */
#define SECURECRU_SPLL_CON4_SPLL_EXTAFC_SHIFT              (4U)
#define SECURECRU_SPLL_CON4_SPLL_EXTAFC_MASK               (0x1FU << SECURECRU_SPLL_CON4_SPLL_EXTAFC_SHIFT)             /* 0x000001F0 */
#define SECURECRU_SPLL_CON4_SPLL_FEED_EN_SHIFT             (14U)
#define SECURECRU_SPLL_CON4_SPLL_FEED_EN_MASK              (0x1U << SECURECRU_SPLL_CON4_SPLL_FEED_EN_SHIFT)             /* 0x00004000 */
#define SECURECRU_SPLL_CON4_SPLL_FSEL_SHIFT                (15U)
#define SECURECRU_SPLL_CON4_SPLL_FSEL_MASK                 (0x1U << SECURECRU_SPLL_CON4_SPLL_FSEL_SHIFT)                /* 0x00008000 */
/* SPLL_CON5 */
#define SECURECRU_SPLL_CON5_OFFSET                         (0x4234U)
#define SECURECRU_SPLL_CON5_SPLL_FOUT_MASK_SHIFT           (0U)
#define SECURECRU_SPLL_CON5_SPLL_FOUT_MASK_MASK            (0x1U << SECURECRU_SPLL_CON5_SPLL_FOUT_MASK_SHIFT)           /* 0x00000001 */
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_IN_SHIFT         (5U)
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_IN_MASK          (0x3U << SECURECRU_SPLL_CON5_SPLL_LOCK_CON_IN_SHIFT)         /* 0x00000060 */
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_OUT_SHIFT        (7U)
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_OUT_MASK         (0x3U << SECURECRU_SPLL_CON5_SPLL_LOCK_CON_OUT_SHIFT)        /* 0x00000180 */
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_DLY_SHIFT        (9U)
#define SECURECRU_SPLL_CON5_SPLL_LOCK_CON_DLY_MASK         (0x3U << SECURECRU_SPLL_CON5_SPLL_LOCK_CON_DLY_SHIFT)        /* 0x00000600 */
/* SPLL_CON6 */
#define SECURECRU_SPLL_CON6_OFFSET                         (0x4238U)
#define SECURECRU_SPLL_CON6_SPLL_AFC_CODE_SHIFT            (10U)
#define SECURECRU_SPLL_CON6_SPLL_AFC_CODE_MASK             (0x1FU << SECURECRU_SPLL_CON6_SPLL_AFC_CODE_SHIFT)           /* 0x00007C00 */
#define SECURECRU_SPLL_CON6_SPLL_LOCK_SHIFT                (15U)
#define SECURECRU_SPLL_CON6_SPLL_LOCK_MASK                 (0x1U << SECURECRU_SPLL_CON6_SPLL_LOCK_SHIFT)                /* 0x00008000 */
/* MODE_CON00 */
#define SECURECRU_MODE_CON00_OFFSET                        (0x4280U)
#define SECURECRU_MODE_CON00_CLK_SPLL_MODE_SHIFT           (0U)
#define SECURECRU_MODE_CON00_CLK_SPLL_MODE_MASK            (0x3U << SECURECRU_MODE_CON00_CLK_SPLL_MODE_SHIFT)           /* 0x00000003 */
/* AUTOCS_ACLK_SECURE_S_ROOT_CON0 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_OFFSET    (0x4D10U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_IDLE_TH_MASK (0xFFFU << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_WAIT_TH_MASK (0xFFFFU << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_ACLK_SECURE_S_ROOT_CON1 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_OFFSET    (0x4D14U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_EN_MASK (0x1U << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_SWITCH_EN_MASK (0x1U << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << SECURECRU_AUTOCS_ACLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_HCLK_SECURE_S_ROOT_CON0 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_OFFSET    (0x4D18U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_IDLE_TH_MASK (0xFFFU << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_WAIT_TH_MASK (0xFFFFU << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_SECURE_S_ROOT_CON1 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_OFFSET    (0x4D1CU)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_SWITCH_EN_MASK (0x1U << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << SECURECRU_AUTOCS_HCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_PCLK_SECURE_S_ROOT_CON0 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_OFFSET    (0x4D20U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT (0U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_MASK (0x7U << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT (4U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_IDLE_TH_MASK (0xFFFU << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT (16U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_WAIT_TH_MASK (0xFFFFU << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_PCLK_SECURE_S_ROOT_CON1 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_OFFSET    (0x4D24U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT (12U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT (13U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_SWITCH_EN_MASK (0x1U << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT (14U)
#define SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_MASK (0x3U << SECURECRU_AUTOCS_PCLK_SECURE_S_ROOT_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/****************************************PMU1CRU*****************************************/
/* CLKSEL_CON00 */
#define PMU1CRU_CLKSEL_CON00_OFFSET                        (0x300U)
#define PMU1CRU_CLKSEL_CON00_CLK_PMUPHY_REF_SRC_DIV_SHIFT  (0U)
#define PMU1CRU_CLKSEL_CON00_CLK_PMUPHY_REF_SRC_DIV_MASK   (0x1FU << PMU1CRU_CLKSEL_CON00_CLK_PMUPHY_REF_SRC_DIV_SHIFT) /* 0x0000001F */
/* CLKSEL_CON03 */
#define PMU1CRU_CLKSEL_CON03_OFFSET                        (0x30CU)
#define PMU1CRU_CLKSEL_CON03_CLK_REF_OSC_MPHY_SEL_SHIFT    (0U)
#define PMU1CRU_CLKSEL_CON03_CLK_REF_OSC_MPHY_SEL_MASK     (0x3U << PMU1CRU_CLKSEL_CON03_CLK_REF_OSC_MPHY_SEL_SHIFT)    /* 0x00000003 */
/* CLKSEL_CON04 */
#define PMU1CRU_CLKSEL_CON04_OFFSET                        (0x310U)
#define PMU1CRU_CLKSEL_CON04_HCLK_PMU1_ROOT_SRC_SEL_SHIFT  (0U)
#define PMU1CRU_CLKSEL_CON04_HCLK_PMU1_ROOT_SRC_SEL_MASK   (0x3U << PMU1CRU_CLKSEL_CON04_HCLK_PMU1_ROOT_SRC_SEL_SHIFT)  /* 0x00000003 */
#define PMU1CRU_CLKSEL_CON04_HCLK_PMU_CM0_ROOT_SRC_SEL_SHIFT (2U)
#define PMU1CRU_CLKSEL_CON04_HCLK_PMU_CM0_ROOT_SRC_SEL_MASK (0x3U << PMU1CRU_CLKSEL_CON04_HCLK_PMU_CM0_ROOT_SRC_SEL_SHIFT) /* 0x0000000C */
#define PMU1CRU_CLKSEL_CON04_CLK_MATRIX_100M_PMU_SRC_DIV_SHIFT (4U)
#define PMU1CRU_CLKSEL_CON04_CLK_MATRIX_100M_PMU_SRC_DIV_MASK (0x1FU << PMU1CRU_CLKSEL_CON04_CLK_MATRIX_100M_PMU_SRC_DIV_SHIFT) /* 0x000001F0 */
#define PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_DIV_SHIFT     (9U)
#define PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_DIV_MASK      (0x1FU << PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_DIV_SHIFT)    /* 0x00003E00 */
#define PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_SEL_SHIFT     (14U)
#define PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_SEL_MASK      (0x1U << PMU1CRU_CLKSEL_CON04_CLK_PMU_CM0_RTC_SEL_SHIFT)     /* 0x00004000 */
#define PMU1CRU_CLKSEL_CON04_TCLK_PMU1WDT_SEL_SHIFT        (15U)
#define PMU1CRU_CLKSEL_CON04_TCLK_PMU1WDT_SEL_MASK         (0x1U << PMU1CRU_CLKSEL_CON04_TCLK_PMU1WDT_SEL_SHIFT)        /* 0x00008000 */
/* CLKSEL_CON05 */
#define PMU1CRU_CLKSEL_CON05_OFFSET                        (0x314U)
#define PMU1CRU_CLKSEL_CON05_CLK_PMUTIMER_ROOT_SEL_SHIFT   (0U)
#define PMU1CRU_CLKSEL_CON05_CLK_PMUTIMER_ROOT_SEL_MASK    (0x3U << PMU1CRU_CLKSEL_CON05_CLK_PMUTIMER_ROOT_SEL_SHIFT)   /* 0x00000003 */
#define PMU1CRU_CLKSEL_CON05_CLK_PMU1PWM_SEL_SHIFT         (2U)
#define PMU1CRU_CLKSEL_CON05_CLK_PMU1PWM_SEL_MASK          (0x3U << PMU1CRU_CLKSEL_CON05_CLK_PMU1PWM_SEL_SHIFT)         /* 0x0000000C */
/* CLKSEL_CON06 */
#define PMU1CRU_CLKSEL_CON06_OFFSET                        (0x318U)
#define PMU1CRU_CLKSEL_CON06_CLK_I2C0_SEL_SHIFT            (7U)
#define PMU1CRU_CLKSEL_CON06_CLK_I2C0_SEL_MASK             (0x3U << PMU1CRU_CLKSEL_CON06_CLK_I2C0_SEL_SHIFT)            /* 0x00000180 */
/* CLKSEL_CON08 */
#define PMU1CRU_CLKSEL_CON08_OFFSET                        (0x320U)
#define PMU1CRU_CLKSEL_CON08_SCLK_UART1_SEL_SHIFT          (0U)
#define PMU1CRU_CLKSEL_CON08_SCLK_UART1_SEL_MASK           (0x1U << PMU1CRU_CLKSEL_CON08_SCLK_UART1_SEL_SHIFT)          /* 0x00000001 */
/* CLKSEL_CON11 */
#define PMU1CRU_CLKSEL_CON11_OFFSET                        (0x32CU)
#define PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_DIV_SHIFT     (1U)
#define PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_DIV_MASK      (0x1FU << PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_DIV_SHIFT)    /* 0x0000003E */
#define PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_SEL_SHIFT     (6U)
#define PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_SEL_MASK      (0x1U << PMU1CRU_CLKSEL_CON11_CLK_HPTIMER_SRC_SEL_SHIFT)     /* 0x00000040 */
/* CLKSEL_CON20 */
#define PMU1CRU_CLKSEL_CON20_OFFSET                        (0x350U)
#define PMU1CRU_CLKSEL_CON20_PCLK_PMU0_ROOT_SRC_SEL_SHIFT  (0U)
#define PMU1CRU_CLKSEL_CON20_PCLK_PMU0_ROOT_SRC_SEL_MASK   (0x3U << PMU1CRU_CLKSEL_CON20_PCLK_PMU0_ROOT_SRC_SEL_SHIFT)  /* 0x00000003 */
#define PMU1CRU_CLKSEL_CON20_DBCLK_GPIO0_SEL_SHIFT         (2U)
#define PMU1CRU_CLKSEL_CON20_DBCLK_GPIO0_SEL_MASK          (0x1U << PMU1CRU_CLKSEL_CON20_DBCLK_GPIO0_SEL_SHIFT)         /* 0x00000004 */
/* CLKSEL_CON21 */
#define PMU1CRU_CLKSEL_CON21_OFFSET                        (0x354U)
#define PMU1CRU_CLKSEL_CON21_XIN_OSC0_DIV_DIV_SHIFT        (0U)
#define PMU1CRU_CLKSEL_CON21_XIN_OSC0_DIV_DIV_MASK         (0xFFFFFFFFU << PMU1CRU_CLKSEL_CON21_XIN_OSC0_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* GATE_CON00 */
#define PMU1CRU_GATE_CON00_OFFSET                          (0x800U)
#define PMU1CRU_GATE_CON00_PCLK_HDPTX_GRF_EN_SHIFT         (0U)
#define PMU1CRU_GATE_CON00_PCLK_HDPTX_GRF_EN_MASK          (0x1U << PMU1CRU_GATE_CON00_PCLK_HDPTX_GRF_EN_SHIFT)         /* 0x00000001 */
#define PMU1CRU_GATE_CON00_PCLK_HDPTX_APB_EN_SHIFT         (1U)
#define PMU1CRU_GATE_CON00_PCLK_HDPTX_APB_EN_MASK          (0x1U << PMU1CRU_GATE_CON00_PCLK_HDPTX_APB_EN_SHIFT)         /* 0x00000002 */
#define PMU1CRU_GATE_CON00_PCLK_MIPI_DCPHY_EN_SHIFT        (2U)
#define PMU1CRU_GATE_CON00_PCLK_MIPI_DCPHY_EN_MASK         (0x1U << PMU1CRU_GATE_CON00_PCLK_MIPI_DCPHY_EN_SHIFT)        /* 0x00000004 */
#define PMU1CRU_GATE_CON00_PCLK_DCPHY_GRF_EN_SHIFT         (3U)
#define PMU1CRU_GATE_CON00_PCLK_DCPHY_GRF_EN_MASK          (0x1U << PMU1CRU_GATE_CON00_PCLK_DCPHY_GRF_EN_SHIFT)         /* 0x00000008 */
#define PMU1CRU_GATE_CON00_PCLK_BOT0_APB2ASB_EN_SHIFT      (4U)
#define PMU1CRU_GATE_CON00_PCLK_BOT0_APB2ASB_EN_MASK       (0x1U << PMU1CRU_GATE_CON00_PCLK_BOT0_APB2ASB_EN_SHIFT)      /* 0x00000010 */
#define PMU1CRU_GATE_CON00_PCLK_BOT1_APB2ASB_EN_SHIFT      (5U)
#define PMU1CRU_GATE_CON00_PCLK_BOT1_APB2ASB_EN_MASK       (0x1U << PMU1CRU_GATE_CON00_PCLK_BOT1_APB2ASB_EN_SHIFT)      /* 0x00000020 */
#define PMU1CRU_GATE_CON00_CLK_32K_USB2DEBUG_EN_SHIFT      (6U)
#define PMU1CRU_GATE_CON00_CLK_32K_USB2DEBUG_EN_MASK       (0x1U << PMU1CRU_GATE_CON00_CLK_32K_USB2DEBUG_EN_SHIFT)      /* 0x00000040 */
#define PMU1CRU_GATE_CON00_PCLK_CSIDPHY_GRF_EN_SHIFT       (7U)
#define PMU1CRU_GATE_CON00_PCLK_CSIDPHY_GRF_EN_MASK        (0x1U << PMU1CRU_GATE_CON00_PCLK_CSIDPHY_GRF_EN_SHIFT)       /* 0x00000080 */
#define PMU1CRU_GATE_CON00_PCLK_CSIDPHY_EN_SHIFT           (8U)
#define PMU1CRU_GATE_CON00_PCLK_CSIDPHY_EN_MASK            (0x1U << PMU1CRU_GATE_CON00_PCLK_CSIDPHY_EN_SHIFT)           /* 0x00000100 */
#define PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_0_EN_SHIFT      (9U)
#define PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_0_EN_MASK       (0x1U << PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_0_EN_SHIFT)      /* 0x00000200 */
#define PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_1_EN_SHIFT      (10U)
#define PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_1_EN_MASK       (0x1U << PMU1CRU_GATE_CON00_PCLK_USBPHY_GRF_1_EN_SHIFT)      /* 0x00000400 */
#define PMU1CRU_GATE_CON00_PCLK_USBDP_GRF_EN_SHIFT         (11U)
#define PMU1CRU_GATE_CON00_PCLK_USBDP_GRF_EN_MASK          (0x1U << PMU1CRU_GATE_CON00_PCLK_USBDP_GRF_EN_SHIFT)         /* 0x00000800 */
#define PMU1CRU_GATE_CON00_PCLK_USBDPPHY_EN_SHIFT          (12U)
#define PMU1CRU_GATE_CON00_PCLK_USBDPPHY_EN_MASK           (0x1U << PMU1CRU_GATE_CON00_PCLK_USBDPPHY_EN_SHIFT)          /* 0x00001000 */
#define PMU1CRU_GATE_CON00_CLK_PMUPHY_REF_SRC_EN_SHIFT     (13U)
#define PMU1CRU_GATE_CON00_CLK_PMUPHY_REF_SRC_EN_MASK      (0x1U << PMU1CRU_GATE_CON00_CLK_PMUPHY_REF_SRC_EN_SHIFT)     /* 0x00002000 */
#define PMU1CRU_GATE_CON00_CLK_USBDP_COMBO_PHY_IMMORTAL_EN_SHIFT (15U)
#define PMU1CRU_GATE_CON00_CLK_USBDP_COMBO_PHY_IMMORTAL_EN_MASK (0x1U << PMU1CRU_GATE_CON00_CLK_USBDP_COMBO_PHY_IMMORTAL_EN_SHIFT) /* 0x00008000 */
/* GATE_CON01 */
#define PMU1CRU_GATE_CON01_OFFSET                          (0x804U)
#define PMU1CRU_GATE_CON01_PCLK_VCCIO6_IOC_EN_SHIFT        (6U)
#define PMU1CRU_GATE_CON01_PCLK_VCCIO6_IOC_EN_MASK         (0x1U << PMU1CRU_GATE_CON01_PCLK_VCCIO6_IOC_EN_SHIFT)        /* 0x00000040 */
#define PMU1CRU_GATE_CON01_CLK_HDMITXHPD_EN_SHIFT          (13U)
#define PMU1CRU_GATE_CON01_CLK_HDMITXHPD_EN_MASK           (0x1U << PMU1CRU_GATE_CON01_CLK_HDMITXHPD_EN_SHIFT)          /* 0x00002000 */
/* GATE_CON02 */
#define PMU1CRU_GATE_CON02_OFFSET                          (0x808U)
#define PMU1CRU_GATE_CON02_PCLK_MPHY_EN_SHIFT              (0U)
#define PMU1CRU_GATE_CON02_PCLK_MPHY_EN_MASK               (0x1U << PMU1CRU_GATE_CON02_PCLK_MPHY_EN_SHIFT)              /* 0x00000001 */
#define PMU1CRU_GATE_CON02_PCLK_MPHY_GRF_EN_SHIFT          (1U)
#define PMU1CRU_GATE_CON02_PCLK_MPHY_GRF_EN_MASK           (0x1U << PMU1CRU_GATE_CON02_PCLK_MPHY_GRF_EN_SHIFT)          /* 0x00000002 */
#define PMU1CRU_GATE_CON02_PCLK_VCCIO7_IOC_EN_SHIFT        (3U)
#define PMU1CRU_GATE_CON02_PCLK_VCCIO7_IOC_EN_MASK         (0x1U << PMU1CRU_GATE_CON02_PCLK_VCCIO7_IOC_EN_SHIFT)        /* 0x00000008 */
#define PMU1CRU_GATE_CON02_CLK_REF_UFS_CLKOUT_EN_SHIFT     (5U)
#define PMU1CRU_GATE_CON02_CLK_REF_UFS_CLKOUT_EN_MASK      (0x1U << PMU1CRU_GATE_CON02_CLK_REF_UFS_CLKOUT_EN_SHIFT)     /* 0x00000020 */
/* GATE_CON03 */
#define PMU1CRU_GATE_CON03_OFFSET                          (0x80CU)
#define PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_SRC_EN_SHIFT     (0U)
#define PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_SRC_EN_MASK      (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_SRC_EN_SHIFT)     /* 0x00000001 */
#define PMU1CRU_GATE_CON03_HCLK_PMU1_CM0_ROOT_SRC_EN_SHIFT (1U)
#define PMU1CRU_GATE_CON03_HCLK_PMU1_CM0_ROOT_SRC_EN_MASK  (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU1_CM0_ROOT_SRC_EN_SHIFT) /* 0x00000002 */
#define PMU1CRU_GATE_CON03_CLK_MATRIX_200M_PMU_SRC_EN_SHIFT (2U)
#define PMU1CRU_GATE_CON03_CLK_MATRIX_200M_PMU_SRC_EN_MASK (0x1U << PMU1CRU_GATE_CON03_CLK_MATRIX_200M_PMU_SRC_EN_SHIFT) /* 0x00000004 */
#define PMU1CRU_GATE_CON03_CLK_MATRIX_100M_PMU_SRC_EN_SHIFT (3U)
#define PMU1CRU_GATE_CON03_CLK_MATRIX_100M_PMU_SRC_EN_MASK (0x1U << PMU1CRU_GATE_CON03_CLK_MATRIX_100M_PMU_SRC_EN_SHIFT) /* 0x00000008 */
#define PMU1CRU_GATE_CON03_CLK_MATRIX_50M_PMU_SRC_EN_SHIFT (4U)
#define PMU1CRU_GATE_CON03_CLK_MATRIX_50M_PMU_SRC_EN_MASK  (0x1U << PMU1CRU_GATE_CON03_CLK_MATRIX_50M_PMU_SRC_EN_SHIFT) /* 0x00000010 */
#define PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_EN_SHIFT         (5U)
#define PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_EN_MASK          (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU1_ROOT_EN_SHIFT)         /* 0x00000020 */
#define PMU1CRU_GATE_CON03_HCLK_PMU_CM0_ROOT_EN_SHIFT      (8U)
#define PMU1CRU_GATE_CON03_HCLK_PMU_CM0_ROOT_EN_MASK       (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU_CM0_ROOT_EN_SHIFT)      /* 0x00000100 */
#define PMU1CRU_GATE_CON03_HCLK_PMU1_BIU_EN_SHIFT          (9U)
#define PMU1CRU_GATE_CON03_HCLK_PMU1_BIU_EN_MASK           (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU1_BIU_EN_SHIFT)          /* 0x00000200 */
#define PMU1CRU_GATE_CON03_PCLK_PMU1_BIU_EN_SHIFT          (10U)
#define PMU1CRU_GATE_CON03_PCLK_PMU1_BIU_EN_MASK           (0x1U << PMU1CRU_GATE_CON03_PCLK_PMU1_BIU_EN_SHIFT)          /* 0x00000400 */
#define PMU1CRU_GATE_CON03_HCLK_PMU_CM0_BIU_EN_SHIFT       (11U)
#define PMU1CRU_GATE_CON03_HCLK_PMU_CM0_BIU_EN_MASK        (0x1U << PMU1CRU_GATE_CON03_HCLK_PMU_CM0_BIU_EN_SHIFT)       /* 0x00000800 */
#define PMU1CRU_GATE_CON03_FCLK_PMU_CM0_CORE_EN_SHIFT      (12U)
#define PMU1CRU_GATE_CON03_FCLK_PMU_CM0_CORE_EN_MASK       (0x1U << PMU1CRU_GATE_CON03_FCLK_PMU_CM0_CORE_EN_SHIFT)      /* 0x00001000 */
#define PMU1CRU_GATE_CON03_CLK_PMU_CM0_RTC_EN_SHIFT        (14U)
#define PMU1CRU_GATE_CON03_CLK_PMU_CM0_RTC_EN_MASK         (0x1U << PMU1CRU_GATE_CON03_CLK_PMU_CM0_RTC_EN_SHIFT)        /* 0x00004000 */
#define PMU1CRU_GATE_CON03_PCLK_PMU1_EN_SHIFT              (15U)
#define PMU1CRU_GATE_CON03_PCLK_PMU1_EN_MASK               (0x1U << PMU1CRU_GATE_CON03_PCLK_PMU1_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON04 */
#define PMU1CRU_GATE_CON04_OFFSET                          (0x810U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1_CRU_EN_SHIFT          (1U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1_CRU_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_PCLK_PMU1_CRU_EN_SHIFT)          /* 0x00000002 */
#define PMU1CRU_GATE_CON04_CLK_PMU1_EN_SHIFT               (2U)
#define PMU1CRU_GATE_CON04_CLK_PMU1_EN_MASK                (0x1U << PMU1CRU_GATE_CON04_CLK_PMU1_EN_SHIFT)               /* 0x00000004 */
#define PMU1CRU_GATE_CON04_PCLK_PMU1_GRF_EN_SHIFT          (3U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1_GRF_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_PCLK_PMU1_GRF_EN_SHIFT)          /* 0x00000008 */
#define PMU1CRU_GATE_CON04_PCLK_PMU1_IOC_EN_SHIFT          (4U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1_IOC_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_PCLK_PMU1_IOC_EN_SHIFT)          /* 0x00000010 */
#define PMU1CRU_GATE_CON04_PCLK_PMU1WDT_EN_SHIFT           (5U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1WDT_EN_MASK            (0x1U << PMU1CRU_GATE_CON04_PCLK_PMU1WDT_EN_SHIFT)           /* 0x00000020 */
#define PMU1CRU_GATE_CON04_TCLK_PMU1WDT_EN_SHIFT           (6U)
#define PMU1CRU_GATE_CON04_TCLK_PMU1WDT_EN_MASK            (0x1U << PMU1CRU_GATE_CON04_TCLK_PMU1WDT_EN_SHIFT)           /* 0x00000040 */
#define PMU1CRU_GATE_CON04_PCLK_PMUTIMER_EN_SHIFT          (7U)
#define PMU1CRU_GATE_CON04_PCLK_PMUTIMER_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_PCLK_PMUTIMER_EN_SHIFT)          /* 0x00000080 */
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER_ROOT_EN_SHIFT      (8U)
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER_ROOT_EN_MASK       (0x1U << PMU1CRU_GATE_CON04_CLK_PMUTIMER_ROOT_EN_SHIFT)      /* 0x00000100 */
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER0_EN_SHIFT          (9U)
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER0_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_CLK_PMUTIMER0_EN_SHIFT)          /* 0x00000200 */
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER1_EN_SHIFT          (10U)
#define PMU1CRU_GATE_CON04_CLK_PMUTIMER1_EN_MASK           (0x1U << PMU1CRU_GATE_CON04_CLK_PMUTIMER1_EN_SHIFT)          /* 0x00000400 */
#define PMU1CRU_GATE_CON04_PCLK_PMU1PWM_EN_SHIFT           (11U)
#define PMU1CRU_GATE_CON04_PCLK_PMU1PWM_EN_MASK            (0x1U << PMU1CRU_GATE_CON04_PCLK_PMU1PWM_EN_SHIFT)           /* 0x00000800 */
#define PMU1CRU_GATE_CON04_CLK_PMU1PWM_EN_SHIFT            (12U)
#define PMU1CRU_GATE_CON04_CLK_PMU1PWM_EN_MASK             (0x1U << PMU1CRU_GATE_CON04_CLK_PMU1PWM_EN_SHIFT)            /* 0x00001000 */
#define PMU1CRU_GATE_CON04_CLK_PMU1PWM_OSC_EN_SHIFT        (13U)
#define PMU1CRU_GATE_CON04_CLK_PMU1PWM_OSC_EN_MASK         (0x1U << PMU1CRU_GATE_CON04_CLK_PMU1PWM_OSC_EN_SHIFT)        /* 0x00002000 */
/* GATE_CON05 */
#define PMU1CRU_GATE_CON05_OFFSET                          (0x814U)
#define PMU1CRU_GATE_CON05_PCLK_PMUPHY_ROOT_EN_SHIFT       (0U)
#define PMU1CRU_GATE_CON05_PCLK_PMUPHY_ROOT_EN_MASK        (0x1U << PMU1CRU_GATE_CON05_PCLK_PMUPHY_ROOT_EN_SHIFT)       /* 0x00000001 */
#define PMU1CRU_GATE_CON05_PCLK_I2C0_EN_SHIFT              (1U)
#define PMU1CRU_GATE_CON05_PCLK_I2C0_EN_MASK               (0x1U << PMU1CRU_GATE_CON05_PCLK_I2C0_EN_SHIFT)              /* 0x00000002 */
#define PMU1CRU_GATE_CON05_CLK_I2C0_EN_SHIFT               (2U)
#define PMU1CRU_GATE_CON05_CLK_I2C0_EN_MASK                (0x1U << PMU1CRU_GATE_CON05_CLK_I2C0_EN_SHIFT)               /* 0x00000004 */
#define PMU1CRU_GATE_CON05_SCLK_UART1_EN_SHIFT             (5U)
#define PMU1CRU_GATE_CON05_SCLK_UART1_EN_MASK              (0x1U << PMU1CRU_GATE_CON05_SCLK_UART1_EN_SHIFT)             /* 0x00000020 */
#define PMU1CRU_GATE_CON05_PCLK_UART1_EN_SHIFT             (6U)
#define PMU1CRU_GATE_CON05_PCLK_UART1_EN_MASK              (0x1U << PMU1CRU_GATE_CON05_PCLK_UART1_EN_SHIFT)             /* 0x00000040 */
#define PMU1CRU_GATE_CON05_CLK_PMU1PWM_RC_EN_SHIFT         (7U)
#define PMU1CRU_GATE_CON05_CLK_PMU1PWM_RC_EN_MASK          (0x1U << PMU1CRU_GATE_CON05_CLK_PMU1PWM_RC_EN_SHIFT)         /* 0x00000080 */
#define PMU1CRU_GATE_CON05_CLK_PDM0_EN_SHIFT               (13U)
#define PMU1CRU_GATE_CON05_CLK_PDM0_EN_MASK                (0x1U << PMU1CRU_GATE_CON05_CLK_PDM0_EN_SHIFT)               /* 0x00002000 */
#define PMU1CRU_GATE_CON05_HCLK_PDM0_EN_SHIFT              (15U)
#define PMU1CRU_GATE_CON05_HCLK_PDM0_EN_MASK               (0x1U << PMU1CRU_GATE_CON05_HCLK_PDM0_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON06 */
#define PMU1CRU_GATE_CON06_OFFSET                          (0x818U)
#define PMU1CRU_GATE_CON06_MCLK_PDM0_EN_SHIFT              (0U)
#define PMU1CRU_GATE_CON06_MCLK_PDM0_EN_MASK               (0x1U << PMU1CRU_GATE_CON06_MCLK_PDM0_EN_SHIFT)              /* 0x00000001 */
#define PMU1CRU_GATE_CON06_HCLK_VAD_EN_SHIFT               (1U)
#define PMU1CRU_GATE_CON06_HCLK_VAD_EN_MASK                (0x1U << PMU1CRU_GATE_CON06_HCLK_VAD_EN_SHIFT)               /* 0x00000002 */
#define PMU1CRU_GATE_CON06_CLK_OSCCHK_PVTM_EN_SHIFT        (4U)
#define PMU1CRU_GATE_CON06_CLK_OSCCHK_PVTM_EN_MASK         (0x1U << PMU1CRU_GATE_CON06_CLK_OSCCHK_PVTM_EN_SHIFT)        /* 0x00000010 */
#define PMU1CRU_GATE_CON06_CLK_PDM0_OUT_EN_SHIFT           (8U)
#define PMU1CRU_GATE_CON06_CLK_PDM0_OUT_EN_MASK            (0x1U << PMU1CRU_GATE_CON06_CLK_PDM0_OUT_EN_SHIFT)           /* 0x00000100 */
#define PMU1CRU_GATE_CON06_CLK_HPTIMER_SRC_EN_SHIFT        (10U)
#define PMU1CRU_GATE_CON06_CLK_HPTIMER_SRC_EN_MASK         (0x1U << PMU1CRU_GATE_CON06_CLK_HPTIMER_SRC_EN_SHIFT)        /* 0x00000400 */
/* GATE_CON07 */
#define PMU1CRU_GATE_CON07_OFFSET                          (0x81CU)
#define PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_SRC_EN_SHIFT     (0U)
#define PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_SRC_EN_MASK      (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_SRC_EN_SHIFT)     /* 0x00000001 */
#define PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_EN_SHIFT         (1U)
#define PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_EN_MASK          (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU0_ROOT_EN_SHIFT)         /* 0x00000002 */
#define PMU1CRU_GATE_CON07_CLK_PMU0_EN_SHIFT               (2U)
#define PMU1CRU_GATE_CON07_CLK_PMU0_EN_MASK                (0x1U << PMU1CRU_GATE_CON07_CLK_PMU0_EN_SHIFT)               /* 0x00000004 */
#define PMU1CRU_GATE_CON07_PCLK_PMU0_EN_SHIFT              (3U)
#define PMU1CRU_GATE_CON07_PCLK_PMU0_EN_MASK               (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU0_EN_SHIFT)              /* 0x00000008 */
#define PMU1CRU_GATE_CON07_PCLK_PMU0GRF_EN_SHIFT           (4U)
#define PMU1CRU_GATE_CON07_PCLK_PMU0GRF_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU0GRF_EN_SHIFT)           /* 0x00000010 */
#define PMU1CRU_GATE_CON07_PCLK_PMU0IOC_EN_SHIFT           (5U)
#define PMU1CRU_GATE_CON07_PCLK_PMU0IOC_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU0IOC_EN_SHIFT)           /* 0x00000020 */
#define PMU1CRU_GATE_CON07_PCLK_GPIO0_EN_SHIFT             (6U)
#define PMU1CRU_GATE_CON07_PCLK_GPIO0_EN_MASK              (0x1U << PMU1CRU_GATE_CON07_PCLK_GPIO0_EN_SHIFT)             /* 0x00000040 */
#define PMU1CRU_GATE_CON07_DBCLK_GPIO0_EN_SHIFT            (7U)
#define PMU1CRU_GATE_CON07_DBCLK_GPIO0_EN_MASK             (0x1U << PMU1CRU_GATE_CON07_DBCLK_GPIO0_EN_SHIFT)            /* 0x00000080 */
#define PMU1CRU_GATE_CON07_CLK_OSC0_PMU1_EN_SHIFT          (8U)
#define PMU1CRU_GATE_CON07_CLK_OSC0_PMU1_EN_MASK           (0x1U << PMU1CRU_GATE_CON07_CLK_OSC0_PMU1_EN_SHIFT)          /* 0x00000100 */
#define PMU1CRU_GATE_CON07_PCLK_PMU1_ROOT_EN_SHIFT         (9U)
#define PMU1CRU_GATE_CON07_PCLK_PMU1_ROOT_EN_MASK          (0x1U << PMU1CRU_GATE_CON07_PCLK_PMU1_ROOT_EN_SHIFT)         /* 0x00000200 */
#define PMU1CRU_GATE_CON07_REF_CLK0_OUT_EN_SHIFT           (10U)
#define PMU1CRU_GATE_CON07_REF_CLK0_OUT_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_REF_CLK0_OUT_EN_SHIFT)           /* 0x00000400 */
#define PMU1CRU_GATE_CON07_REF_CLK1_OUT_EN_SHIFT           (11U)
#define PMU1CRU_GATE_CON07_REF_CLK1_OUT_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_REF_CLK1_OUT_EN_SHIFT)           /* 0x00000800 */
#define PMU1CRU_GATE_CON07_REF_CLK2_OUT_EN_SHIFT           (12U)
#define PMU1CRU_GATE_CON07_REF_CLK2_OUT_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_REF_CLK2_OUT_EN_SHIFT)           /* 0x00001000 */
#define PMU1CRU_GATE_CON07_XIN_OSC0_DIV_EN_SHIFT           (13U)
#define PMU1CRU_GATE_CON07_XIN_OSC0_DIV_EN_MASK            (0x1U << PMU1CRU_GATE_CON07_XIN_OSC0_DIV_EN_SHIFT)           /* 0x00002000 */
/* SOFTRST_CON00 */
#define PMU1CRU_SOFTRST_CON00_OFFSET                       (0xA00U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_GRF_SHIFT      (0U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_GRF_MASK       (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_GRF_SHIFT)      /* 0x00000001 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_APB_SHIFT      (1U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_APB_MASK       (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_HDPTX_APB_SHIFT)      /* 0x00000002 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_MIPI_DCPHY_SHIFT     (2U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_MIPI_DCPHY_MASK      (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_MIPI_DCPHY_SHIFT)     /* 0x00000004 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_DCPHY_GRF_SHIFT      (3U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_DCPHY_GRF_MASK       (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_DCPHY_GRF_SHIFT)      /* 0x00000008 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_BOT0_APB2ASB_SHIFT   (4U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_BOT0_APB2ASB_MASK    (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_BOT0_APB2ASB_SHIFT)   /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_BOT1_APB2ASB_SHIFT   (5U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_BOT1_APB2ASB_MASK    (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_BOT1_APB2ASB_SHIFT)   /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON00_RESETN_USB2DEBUG_SHIFT       (6U)
#define PMU1CRU_SOFTRST_CON00_RESETN_USB2DEBUG_MASK        (0x1U << PMU1CRU_SOFTRST_CON00_RESETN_USB2DEBUG_SHIFT)       /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_GRF_SHIFT    (7U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_GRF_MASK     (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_GRF_SHIFT)    /* 0x00000080 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_SHIFT        (8U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_MASK         (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_CSIDPHY_SHIFT)        /* 0x00000100 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_0_SHIFT   (9U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_0_MASK    (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_0_SHIFT)   /* 0x00000200 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_1_SHIFT   (10U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_1_MASK    (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_USBPHY_GRF_1_SHIFT)   /* 0x00000400 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBDP_GRF_SHIFT      (11U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBDP_GRF_MASK       (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_USBDP_GRF_SHIFT)      /* 0x00000800 */
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBDPPHY_SHIFT       (12U)
#define PMU1CRU_SOFTRST_CON00_PRESETN_USBDPPHY_MASK        (0x1U << PMU1CRU_SOFTRST_CON00_PRESETN_USBDPPHY_SHIFT)       /* 0x00001000 */
#define PMU1CRU_SOFTRST_CON00_RESETN_USBDP_COMBO_PHY_INIT_SHIFT (15U)
#define PMU1CRU_SOFTRST_CON00_RESETN_USBDP_COMBO_PHY_INIT_MASK (0x1U << PMU1CRU_SOFTRST_CON00_RESETN_USBDP_COMBO_PHY_INIT_SHIFT) /* 0x00008000 */
/* SOFTRST_CON01 */
#define PMU1CRU_SOFTRST_CON01_OFFSET                       (0xA04U)
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_CMN_SHIFT (0U)
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_CMN_MASK (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_CMN_SHIFT) /* 0x00000001 */
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_LANE_SHIFT (1U)
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_LANE_MASK (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_LANE_SHIFT) /* 0x00000002 */
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_PCS_SHIFT (2U)
#define PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_PCS_MASK (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_USBDP_COMBO_PHY_PCS_SHIFT) /* 0x00000004 */
#define PMU1CRU_SOFTRST_CON01_MRESETN_MIPI_DCPHY_SHIFT     (3U)
#define PMU1CRU_SOFTRST_CON01_MRESETN_MIPI_DCPHY_MASK      (0x1U << PMU1CRU_SOFTRST_CON01_MRESETN_MIPI_DCPHY_SHIFT)     /* 0x00000008 */
#define PMU1CRU_SOFTRST_CON01_SRESETN_MIPI_DCPHY_SHIFT     (4U)
#define PMU1CRU_SOFTRST_CON01_SRESETN_MIPI_DCPHY_MASK      (0x1U << PMU1CRU_SOFTRST_CON01_SRESETN_MIPI_DCPHY_SHIFT)     /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON01_SCANRESETN_CSIDPHY_SHIFT     (5U)
#define PMU1CRU_SOFTRST_CON01_SCANRESETN_CSIDPHY_MASK      (0x1U << PMU1CRU_SOFTRST_CON01_SCANRESETN_CSIDPHY_SHIFT)     /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON01_PRESETN_VCCIO6_IOC_SHIFT     (6U)
#define PMU1CRU_SOFTRST_CON01_PRESETN_VCCIO6_IOC_MASK      (0x1U << PMU1CRU_SOFTRST_CON01_PRESETN_VCCIO6_IOC_SHIFT)     /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_0_SHIFT        (7U)
#define PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_0_MASK         (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_0_SHIFT)        /* 0x00000080 */
#define PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_1_SHIFT        (8U)
#define PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_1_MASK         (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_OTGPHY_1_SHIFT)        /* 0x00000100 */
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_INIT_SHIFT      (9U)
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_INIT_MASK       (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_INIT_SHIFT)      /* 0x00000200 */
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_CMN_SHIFT       (10U)
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_CMN_MASK        (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_CMN_SHIFT)       /* 0x00000400 */
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_LANE_SHIFT      (11U)
#define PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_LANE_MASK       (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_HDPTX_LANE_SHIFT)      /* 0x00000800 */
#define PMU1CRU_SOFTRST_CON01_RESETN_HDMITXHPD_SHIFT       (13U)
#define PMU1CRU_SOFTRST_CON01_RESETN_HDMITXHPD_MASK        (0x1U << PMU1CRU_SOFTRST_CON01_RESETN_HDMITXHPD_SHIFT)       /* 0x00002000 */
/* SOFTRST_CON02 */
#define PMU1CRU_SOFTRST_CON02_OFFSET                       (0xA08U)
#define PMU1CRU_SOFTRST_CON02_RESETN_MPHY_INIT_SHIFT       (0U)
#define PMU1CRU_SOFTRST_CON02_RESETN_MPHY_INIT_MASK        (0x1U << PMU1CRU_SOFTRST_CON02_RESETN_MPHY_INIT_SHIFT)       /* 0x00000001 */
#define PMU1CRU_SOFTRST_CON02_PRESETN_MPHY_GRF_SHIFT       (1U)
#define PMU1CRU_SOFTRST_CON02_PRESETN_MPHY_GRF_MASK        (0x1U << PMU1CRU_SOFTRST_CON02_PRESETN_MPHY_GRF_SHIFT)       /* 0x00000002 */
#define PMU1CRU_SOFTRST_CON02_PRESETN_VCCIO7_IOC_SHIFT     (3U)
#define PMU1CRU_SOFTRST_CON02_PRESETN_VCCIO7_IOC_MASK      (0x1U << PMU1CRU_SOFTRST_CON02_PRESETN_VCCIO7_IOC_SHIFT)     /* 0x00000008 */
/* SOFTRST_CON03 */
#define PMU1CRU_SOFTRST_CON03_OFFSET                       (0xA0CU)
#define PMU1CRU_SOFTRST_CON03_HRESETN_PMU1_BIU_SHIFT       (9U)
#define PMU1CRU_SOFTRST_CON03_HRESETN_PMU1_BIU_MASK        (0x1U << PMU1CRU_SOFTRST_CON03_HRESETN_PMU1_BIU_SHIFT)       /* 0x00000200 */
#define PMU1CRU_SOFTRST_CON03_PRESETN_PMU1_BIU_SHIFT       (10U)
#define PMU1CRU_SOFTRST_CON03_PRESETN_PMU1_BIU_MASK        (0x1U << PMU1CRU_SOFTRST_CON03_PRESETN_PMU1_BIU_SHIFT)       /* 0x00000400 */
#define PMU1CRU_SOFTRST_CON03_HRESETN_PMU_CM0_BIU_SHIFT    (11U)
#define PMU1CRU_SOFTRST_CON03_HRESETN_PMU_CM0_BIU_MASK     (0x1U << PMU1CRU_SOFTRST_CON03_HRESETN_PMU_CM0_BIU_SHIFT)    /* 0x00000800 */
#define PMU1CRU_SOFTRST_CON03_FRESETN_PMU_CM0_CORE_SHIFT   (12U)
#define PMU1CRU_SOFTRST_CON03_FRESETN_PMU_CM0_CORE_MASK    (0x1U << PMU1CRU_SOFTRST_CON03_FRESETN_PMU_CM0_CORE_SHIFT)   /* 0x00001000 */
#define PMU1CRU_SOFTRST_CON03_TRESETN_PMU1_CM0_JTAG_SHIFT  (13U)
#define PMU1CRU_SOFTRST_CON03_TRESETN_PMU1_CM0_JTAG_MASK   (0x1U << PMU1CRU_SOFTRST_CON03_TRESETN_PMU1_CM0_JTAG_SHIFT)  /* 0x00002000 */
/* SOFTRST_CON04 */
#define PMU1CRU_SOFTRST_CON04_OFFSET                       (0xA10U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_CRU_PMU1_SHIFT       (1U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_CRU_PMU1_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_CRU_PMU1_SHIFT)       /* 0x00000002 */
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_GRF_SHIFT       (3U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_GRF_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_GRF_SHIFT)       /* 0x00000008 */
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_IOC_SHIFT       (4U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_IOC_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_PMU1_IOC_SHIFT)       /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1WDT_SHIFT        (5U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1WDT_MASK         (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_PMU1WDT_SHIFT)        /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON04_TRESETN_PMU1WDT_SHIFT        (6U)
#define PMU1CRU_SOFTRST_CON04_TRESETN_PMU1WDT_MASK         (0x1U << PMU1CRU_SOFTRST_CON04_TRESETN_PMU1WDT_SHIFT)        /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMUTIMER_SHIFT       (7U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMUTIMER_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_PMUTIMER_SHIFT)       /* 0x00000080 */
#define PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER0_SHIFT       (9U)
#define PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER0_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER0_SHIFT)       /* 0x00000200 */
#define PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER1_SHIFT       (10U)
#define PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER1_MASK        (0x1U << PMU1CRU_SOFTRST_CON04_RESETN_PMUTIMER1_SHIFT)       /* 0x00000400 */
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1PWM_SHIFT        (11U)
#define PMU1CRU_SOFTRST_CON04_PRESETN_PMU1PWM_MASK         (0x1U << PMU1CRU_SOFTRST_CON04_PRESETN_PMU1PWM_SHIFT)        /* 0x00000800 */
#define PMU1CRU_SOFTRST_CON04_RESETN_PMU1PWM_SHIFT         (12U)
#define PMU1CRU_SOFTRST_CON04_RESETN_PMU1PWM_MASK          (0x1U << PMU1CRU_SOFTRST_CON04_RESETN_PMU1PWM_SHIFT)         /* 0x00001000 */
/* SOFTRST_CON05 */
#define PMU1CRU_SOFTRST_CON05_OFFSET                       (0xA14U)
#define PMU1CRU_SOFTRST_CON05_PRESETN_I2C0_SHIFT           (1U)
#define PMU1CRU_SOFTRST_CON05_PRESETN_I2C0_MASK            (0x1U << PMU1CRU_SOFTRST_CON05_PRESETN_I2C0_SHIFT)           /* 0x00000002 */
#define PMU1CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT            (2U)
#define PMU1CRU_SOFTRST_CON05_RESETN_I2C0_MASK             (0x1U << PMU1CRU_SOFTRST_CON05_RESETN_I2C0_SHIFT)            /* 0x00000004 */
#define PMU1CRU_SOFTRST_CON05_SRESETN_UART1_SHIFT          (5U)
#define PMU1CRU_SOFTRST_CON05_SRESETN_UART1_MASK           (0x1U << PMU1CRU_SOFTRST_CON05_SRESETN_UART1_SHIFT)          /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON05_PRESETN_UART1_SHIFT          (6U)
#define PMU1CRU_SOFTRST_CON05_PRESETN_UART1_MASK           (0x1U << PMU1CRU_SOFTRST_CON05_PRESETN_UART1_SHIFT)          /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON05_RESETN_PDM0_SHIFT            (13U)
#define PMU1CRU_SOFTRST_CON05_RESETN_PDM0_MASK             (0x1U << PMU1CRU_SOFTRST_CON05_RESETN_PDM0_SHIFT)            /* 0x00002000 */
#define PMU1CRU_SOFTRST_CON05_HRESETN_PDM0_SHIFT           (15U)
#define PMU1CRU_SOFTRST_CON05_HRESETN_PDM0_MASK            (0x1U << PMU1CRU_SOFTRST_CON05_HRESETN_PDM0_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON06 */
#define PMU1CRU_SOFTRST_CON06_OFFSET                       (0xA18U)
#define PMU1CRU_SOFTRST_CON06_MRESETN_PDM0_SHIFT           (0U)
#define PMU1CRU_SOFTRST_CON06_MRESETN_PDM0_MASK            (0x1U << PMU1CRU_SOFTRST_CON06_MRESETN_PDM0_SHIFT)           /* 0x00000001 */
#define PMU1CRU_SOFTRST_CON06_HRESETN_VAD_SHIFT            (1U)
#define PMU1CRU_SOFTRST_CON06_HRESETN_VAD_MASK             (0x1U << PMU1CRU_SOFTRST_CON06_HRESETN_VAD_SHIFT)            /* 0x00000002 */
/* SOFTRST_CON07 */
#define PMU1CRU_SOFTRST_CON07_OFFSET                       (0xA1CU)
#define PMU1CRU_SOFTRST_CON07_PRESETN_PMU0GRF_SHIFT        (4U)
#define PMU1CRU_SOFTRST_CON07_PRESETN_PMU0GRF_MASK         (0x1U << PMU1CRU_SOFTRST_CON07_PRESETN_PMU0GRF_SHIFT)        /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON07_PRESETN_PMU0IOC_SHIFT        (5U)
#define PMU1CRU_SOFTRST_CON07_PRESETN_PMU0IOC_MASK         (0x1U << PMU1CRU_SOFTRST_CON07_PRESETN_PMU0IOC_SHIFT)        /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON07_PRESETN_GPIO0_SHIFT          (6U)
#define PMU1CRU_SOFTRST_CON07_PRESETN_GPIO0_MASK           (0x1U << PMU1CRU_SOFTRST_CON07_PRESETN_GPIO0_SHIFT)          /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON07_DBRESETN_GPIO0_SHIFT         (7U)
#define PMU1CRU_SOFTRST_CON07_DBRESETN_GPIO0_MASK          (0x1U << PMU1CRU_SOFTRST_CON07_DBRESETN_GPIO0_SHIFT)         /* 0x00000080 */
/* AUTOCS_PCLK_PMU0_ROOT_SRC_CON0 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_OFFSET      (0xB00U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT (0U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_DIV_MASK (0x7U << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT (3U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_GATE_MASK (0x1U << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_IDLE_TH_SHIFT (4U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_IDLE_TH_MASK (0xFFFU << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_WAIT_TH_SHIFT (16U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_WAIT_TH_MASK (0xFFFFU << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_PCLK_PMU0_ROOT_SRC_CON1 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_OFFSET      (0xB04U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_EN_SHIFT (12U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_EN_MASK (0x1U << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_SWITCH_EN_SHIFT (13U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_SWITCH_EN_MASK (0x1U << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT (14U)
#define PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_CLKSEL_CFG_MASK (0x3U << PMU1CRU_AUTOCS_PCLK_PMU0_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_HCLK_PMU1_ROOT_SRC_CON0 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_OFFSET      (0xB08U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT (0U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_DIV_MASK (0x7U << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT (3U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_GATE_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_IDLE_TH_SHIFT (4U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_IDLE_TH_MASK (0xFFFU << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_WAIT_TH_SHIFT (16U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_WAIT_TH_MASK (0xFFFFU << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_PMU1_ROOT_SRC_CON1 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_OFFSET      (0xB0CU)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_EN_SHIFT (12U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_EN_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_SWITCH_EN_SHIFT (13U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_SWITCH_EN_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT (14U)
#define PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_CLKSEL_CFG_MASK (0x3U << PMU1CRU_AUTOCS_HCLK_PMU1_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_OFFSET   (0xB10U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT (0U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_DIV_MASK (0x7U << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT (3U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_GATE_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_IDLE_TH_SHIFT (4U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_IDLE_TH_MASK (0xFFFU << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_WAIT_TH_SHIFT (16U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_WAIT_TH_MASK (0xFFFFU << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_OFFSET   (0xB14U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_EN_SHIFT (12U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_EN_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_SWITCH_EN_SHIFT (13U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_SWITCH_EN_MASK (0x1U << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT (14U)
#define PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_CLKSEL_CFG_MASK (0x3U << PMU1CRU_AUTOCS_HCLK_PMU_CM0_ROOT_SRC_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/* DEEPSLOW_DETECT_CON */
#define PMU1CRU_DEEPSLOW_DETECT_CON_OFFSET                 (0xB40U)
#define PMU1CRU_DEEPSLOW_DETECT_CON_CNT_CLK_SHIFT          (0U)
#define PMU1CRU_DEEPSLOW_DETECT_CON_CNT_CLK_MASK           (0x7FU << PMU1CRU_DEEPSLOW_DETECT_CON_CNT_CLK_SHIFT)         /* 0x0000007F */
#define PMU1CRU_DEEPSLOW_DETECT_CON_DETECT_32K_EN_SHIFT    (7U)
#define PMU1CRU_DEEPSLOW_DETECT_CON_DETECT_32K_EN_MASK     (0x1U << PMU1CRU_DEEPSLOW_DETECT_CON_DETECT_32K_EN_SHIFT)    /* 0x00000080 */
/* DEEPSLOW_DETECT_ST */
#define PMU1CRU_DEEPSLOW_DETECT_ST_OFFSET                  (0xB44U)
#define PMU1CRU_DEEPSLOW_DETECT_ST_32K_IO_EXIST_ST_SHIFT   (31U)
#define PMU1CRU_DEEPSLOW_DETECT_ST_32K_IO_EXIST_ST_MASK    (0x1U << PMU1CRU_DEEPSLOW_DETECT_ST_32K_IO_EXIST_ST_SHIFT)   /* 0x80000000 */
/* CLKSEL_CON30 */
#define PMU1CRU_CLKSEL_CON30_OFFSET                        (0x4000U)
#define PMU1CRU_CLKSEL_CON30_HCLK_PMU_S_ROOT_SRC_SEL_SHIFT (0U)
#define PMU1CRU_CLKSEL_CON30_HCLK_PMU_S_ROOT_SRC_SEL_MASK  (0x3U << PMU1CRU_CLKSEL_CON30_HCLK_PMU_S_ROOT_SRC_SEL_SHIFT) /* 0x00000003 */
/* CLKSEL_CON32 */
#define PMU1CRU_CLKSEL_CON32_OFFSET                        (0x4008U)
#define PMU1CRU_CLKSEL_CON32_PCLK_PMU_S_ROOT_SRC_SEL_SHIFT (0U)
#define PMU1CRU_CLKSEL_CON32_PCLK_PMU_S_ROOT_SRC_SEL_MASK  (0x1U << PMU1CRU_CLKSEL_CON32_PCLK_PMU_S_ROOT_SRC_SEL_SHIFT) /* 0x00000001 */
#define PMU1CRU_CLKSEL_CON32_CLK_PVTM_32K_DIV_SHIFT        (1U)
#define PMU1CRU_CLKSEL_CON32_CLK_PVTM_32K_DIV_MASK         (0xFFFU << PMU1CRU_CLKSEL_CON32_CLK_PVTM_32K_DIV_SHIFT)      /* 0x00001FFE */
/* GATE_CON10 */
#define PMU1CRU_GATE_CON10_OFFSET                          (0x4028U)
#define PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_SRC_EN_SHIFT    (0U)
#define PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_SRC_EN_MASK     (0x1U << PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_SRC_EN_SHIFT)    /* 0x00000001 */
#define PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_EN_SHIFT        (1U)
#define PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_EN_MASK         (0x1U << PMU1CRU_GATE_CON10_HCLK_PMU_S_ROOT_EN_SHIFT)        /* 0x00000002 */
#define PMU1CRU_GATE_CON10_HCLK_PMU1_S_BIU_EN_SHIFT        (2U)
#define PMU1CRU_GATE_CON10_HCLK_PMU1_S_BIU_EN_MASK         (0x1U << PMU1CRU_GATE_CON10_HCLK_PMU1_S_BIU_EN_SHIFT)        /* 0x00000004 */
#define PMU1CRU_GATE_CON10_PCLK_PMU1_OSC_CHK_EN_SHIFT      (3U)
#define PMU1CRU_GATE_CON10_PCLK_PMU1_OSC_CHK_EN_MASK       (0x1U << PMU1CRU_GATE_CON10_PCLK_PMU1_OSC_CHK_EN_SHIFT)      /* 0x00000008 */
#define PMU1CRU_GATE_CON10_HCLK_PMU1_MEM_EN_SHIFT          (4U)
#define PMU1CRU_GATE_CON10_HCLK_PMU1_MEM_EN_MASK           (0x1U << PMU1CRU_GATE_CON10_HCLK_PMU1_MEM_EN_SHIFT)          /* 0x00000010 */
#define PMU1CRU_GATE_CON10_PCLK_PMU1_SGRF_EN_SHIFT         (5U)
#define PMU1CRU_GATE_CON10_PCLK_PMU1_SGRF_EN_MASK          (0x1U << PMU1CRU_GATE_CON10_PCLK_PMU1_SGRF_EN_SHIFT)         /* 0x00000020 */
#define PMU1CRU_GATE_CON10_PCLK_PMU1_S_BIU_EN_SHIFT        (6U)
#define PMU1CRU_GATE_CON10_PCLK_PMU1_S_BIU_EN_MASK         (0x1U << PMU1CRU_GATE_CON10_PCLK_PMU1_S_BIU_EN_SHIFT)        /* 0x00000040 */
/* GATE_CON12 */
#define PMU1CRU_GATE_CON12_OFFSET                          (0x4030U)
#define PMU1CRU_GATE_CON12_PCLK_PMU0_SCRKEYGEN_EN_SHIFT    (0U)
#define PMU1CRU_GATE_CON12_PCLK_PMU0_SCRKEYGEN_EN_MASK     (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU0_SCRKEYGEN_EN_SHIFT)    /* 0x00000001 */
#define PMU1CRU_GATE_CON12_CLK_SCRKEYGEN_EN_SHIFT          (1U)
#define PMU1CRU_GATE_CON12_CLK_SCRKEYGEN_EN_MASK           (0x1U << PMU1CRU_GATE_CON12_CLK_SCRKEYGEN_EN_SHIFT)          /* 0x00000002 */
#define PMU1CRU_GATE_CON12_CLK_PMU0PVTM_EN_SHIFT           (2U)
#define PMU1CRU_GATE_CON12_CLK_PMU0PVTM_EN_MASK            (0x1U << PMU1CRU_GATE_CON12_CLK_PMU0PVTM_EN_SHIFT)           /* 0x00000004 */
#define PMU1CRU_GATE_CON12_PCLK_PMU0PVTM_EN_SHIFT          (3U)
#define PMU1CRU_GATE_CON12_PCLK_PMU0PVTM_EN_MASK           (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU0PVTM_EN_SHIFT)          /* 0x00000008 */
#define PMU1CRU_GATE_CON12_PCLK_PMU_SGRF_EN_SHIFT          (4U)
#define PMU1CRU_GATE_CON12_PCLK_PMU_SGRF_EN_MASK           (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU_SGRF_EN_SHIFT)          /* 0x00000010 */
#define PMU1CRU_GATE_CON12_PCLK_PMU0_HP_TIMER_EN_SHIFT     (6U)
#define PMU1CRU_GATE_CON12_PCLK_PMU0_HP_TIMER_EN_MASK      (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU0_HP_TIMER_EN_SHIFT)     /* 0x00000040 */
#define PMU1CRU_GATE_CON12_CLK_PMU0_HP_TIMER_EN_SHIFT      (7U)
#define PMU1CRU_GATE_CON12_CLK_PMU0_HP_TIMER_EN_MASK       (0x1U << PMU1CRU_GATE_CON12_CLK_PMU0_HP_TIMER_EN_SHIFT)      /* 0x00000080 */
#define PMU1CRU_GATE_CON12_CLK_PMU0_32K_HP_TIMER_EN_SHIFT  (8U)
#define PMU1CRU_GATE_CON12_CLK_PMU0_32K_HP_TIMER_EN_MASK   (0x1U << PMU1CRU_GATE_CON12_CLK_PMU0_32K_HP_TIMER_EN_SHIFT)  /* 0x00000100 */
#define PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_SRC_EN_SHIFT    (9U)
#define PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_SRC_EN_MASK     (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_SRC_EN_SHIFT)    /* 0x00000200 */
#define PMU1CRU_GATE_CON12_PCLK_PMU1_S_ROOT_EN_SHIFT       (10U)
#define PMU1CRU_GATE_CON12_PCLK_PMU1_S_ROOT_EN_MASK        (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU1_S_ROOT_EN_SHIFT)       /* 0x00000400 */
#define PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_EN_SHIFT        (11U)
#define PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_EN_MASK         (0x1U << PMU1CRU_GATE_CON12_PCLK_PMU_S_ROOT_EN_SHIFT)        /* 0x00000800 */
/* SOFTRST_CON10 */
#define PMU1CRU_SOFTRST_CON10_OFFSET                       (0x4050U)
#define PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_S_BIU_SHIFT     (2U)
#define PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_S_BIU_MASK      (0x1U << PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_S_BIU_SHIFT)     /* 0x00000004 */
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_OSC_CHK_SHIFT   (3U)
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_OSC_CHK_MASK    (0x1U << PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_OSC_CHK_SHIFT)   /* 0x00000008 */
#define PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_MEM_SHIFT       (4U)
#define PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_MEM_MASK        (0x1U << PMU1CRU_SOFTRST_CON10_HRESETN_PMU1_MEM_SHIFT)       /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_SGRF_SHIFT      (5U)
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_SGRF_MASK       (0x1U << PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_SGRF_SHIFT)      /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_S_BIU_SHIFT     (6U)
#define PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_S_BIU_MASK      (0x1U << PMU1CRU_SOFTRST_CON10_PRESETN_PMU1_S_BIU_SHIFT)     /* 0x00000040 */
/* SOFTRST_CON12 */
#define PMU1CRU_SOFTRST_CON12_OFFSET                       (0x4058U)
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0PVTM_SHIFT        (2U)
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0PVTM_MASK         (0x1U << PMU1CRU_SOFTRST_CON12_RESETN_PMU0PVTM_SHIFT)        /* 0x00000004 */
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU0PVTM_SHIFT       (3U)
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU0PVTM_MASK        (0x1U << PMU1CRU_SOFTRST_CON12_PRESETN_PMU0PVTM_SHIFT)       /* 0x00000008 */
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_SHIFT       (4U)
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_MASK        (0x1U << PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_SHIFT)       /* 0x00000010 */
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_REMAP_SHIFT (5U)
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_REMAP_MASK  (0x1U << PMU1CRU_SOFTRST_CON12_PRESETN_PMU_SGRF_REMAP_SHIFT) /* 0x00000020 */
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU0_HP_TIMER_SHIFT  (6U)
#define PMU1CRU_SOFTRST_CON12_PRESETN_PMU0_HP_TIMER_MASK   (0x1U << PMU1CRU_SOFTRST_CON12_PRESETN_PMU0_HP_TIMER_SHIFT)  /* 0x00000040 */
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0_HP_TIMER_SHIFT   (7U)
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0_HP_TIMER_MASK    (0x1U << PMU1CRU_SOFTRST_CON12_RESETN_PMU0_HP_TIMER_SHIFT)   /* 0x00000080 */
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0_32K_HP_TIMER_SHIFT (8U)
#define PMU1CRU_SOFTRST_CON12_RESETN_PMU0_32K_HP_TIMER_MASK (0x1U << PMU1CRU_SOFTRST_CON12_RESETN_PMU0_32K_HP_TIMER_SHIFT) /* 0x00000100 */
/****************************************DDR0CRU*****************************************/
/* D0APLL_CON0 */
#define DDR0CRU_D0APLL_CON0_OFFSET                         (0x0U)
#define DDR0CRU_D0APLL_CON0_D0APLL_M_SHIFT                 (0U)
#define DDR0CRU_D0APLL_CON0_D0APLL_M_MASK                  (0x3FFU << DDR0CRU_D0APLL_CON0_D0APLL_M_SHIFT)               /* 0x000003FF */
#define DDR0CRU_D0APLL_CON0_D0APLL_BP_SHIFT                (15U)
#define DDR0CRU_D0APLL_CON0_D0APLL_BP_MASK                 (0x1U << DDR0CRU_D0APLL_CON0_D0APLL_BP_SHIFT)                /* 0x00008000 */
/* D0APLL_CON1 */
#define DDR0CRU_D0APLL_CON1_OFFSET                         (0x4U)
#define DDR0CRU_D0APLL_CON1_D0APLL_P_SHIFT                 (0U)
#define DDR0CRU_D0APLL_CON1_D0APLL_P_MASK                  (0x3FU << DDR0CRU_D0APLL_CON1_D0APLL_P_SHIFT)                /* 0x0000003F */
#define DDR0CRU_D0APLL_CON1_D0APLL_S_SHIFT                 (6U)
#define DDR0CRU_D0APLL_CON1_D0APLL_S_MASK                  (0x7U << DDR0CRU_D0APLL_CON1_D0APLL_S_SHIFT)                 /* 0x000001C0 */
#define DDR0CRU_D0APLL_CON1_D0APLL_RESETB_SHIFT            (13U)
#define DDR0CRU_D0APLL_CON1_D0APLL_RESETB_MASK             (0x1U << DDR0CRU_D0APLL_CON1_D0APLL_RESETB_SHIFT)            /* 0x00002000 */
/* D0APLL_CON2 */
#define DDR0CRU_D0APLL_CON2_OFFSET                         (0x8U)
#define DDR0CRU_D0APLL_CON2_D0APLL_K_SHIFT                 (0U)
#define DDR0CRU_D0APLL_CON2_D0APLL_K_MASK                  (0xFFFFU << DDR0CRU_D0APLL_CON2_D0APLL_K_SHIFT)              /* 0x0000FFFF */
/* D0APLL_CON3 */
#define DDR0CRU_D0APLL_CON3_OFFSET                         (0xCU)
#define DDR0CRU_D0APLL_CON3_D0APLL_MFR_SHIFT               (0U)
#define DDR0CRU_D0APLL_CON3_D0APLL_MFR_MASK                (0xFFU << DDR0CRU_D0APLL_CON3_D0APLL_MFR_SHIFT)              /* 0x000000FF */
#define DDR0CRU_D0APLL_CON3_D0APLL_MRR_SHIFT               (8U)
#define DDR0CRU_D0APLL_CON3_D0APLL_MRR_MASK                (0x3FU << DDR0CRU_D0APLL_CON3_D0APLL_MRR_SHIFT)              /* 0x00003F00 */
#define DDR0CRU_D0APLL_CON3_D0APLL_SEL_PF_SHIFT            (14U)
#define DDR0CRU_D0APLL_CON3_D0APLL_SEL_PF_MASK             (0x3U << DDR0CRU_D0APLL_CON3_D0APLL_SEL_PF_SHIFT)            /* 0x0000C000 */
/* D0APLL_CON4 */
#define DDR0CRU_D0APLL_CON4_OFFSET                         (0x10U)
#define DDR0CRU_D0APLL_CON4_D0APLL_SSCG_EN_SHIFT           (0U)
#define DDR0CRU_D0APLL_CON4_D0APLL_SSCG_EN_MASK            (0x1U << DDR0CRU_D0APLL_CON4_D0APLL_SSCG_EN_SHIFT)           /* 0x00000001 */
#define DDR0CRU_D0APLL_CON4_D0APLL_AFC_ENB_SHIFT           (3U)
#define DDR0CRU_D0APLL_CON4_D0APLL_AFC_ENB_MASK            (0x1U << DDR0CRU_D0APLL_CON4_D0APLL_AFC_ENB_SHIFT)           /* 0x00000008 */
#define DDR0CRU_D0APLL_CON4_D0APLL_EXTAFC_SHIFT            (4U)
#define DDR0CRU_D0APLL_CON4_D0APLL_EXTAFC_MASK             (0x1FU << DDR0CRU_D0APLL_CON4_D0APLL_EXTAFC_SHIFT)           /* 0x000001F0 */
#define DDR0CRU_D0APLL_CON4_D0APLL_FEED_EN_SHIFT           (14U)
#define DDR0CRU_D0APLL_CON4_D0APLL_FEED_EN_MASK            (0x1U << DDR0CRU_D0APLL_CON4_D0APLL_FEED_EN_SHIFT)           /* 0x00004000 */
#define DDR0CRU_D0APLL_CON4_D0APLL_FSEL_SHIFT              (15U)
#define DDR0CRU_D0APLL_CON4_D0APLL_FSEL_MASK               (0x1U << DDR0CRU_D0APLL_CON4_D0APLL_FSEL_SHIFT)              /* 0x00008000 */
/* D0APLL_CON5 */
#define DDR0CRU_D0APLL_CON5_OFFSET                         (0x14U)
#define DDR0CRU_D0APLL_CON5_D0APLL_FOUT_MASK_SHIFT         (0U)
#define DDR0CRU_D0APLL_CON5_D0APLL_FOUT_MASK_MASK          (0x1U << DDR0CRU_D0APLL_CON5_D0APLL_FOUT_MASK_SHIFT)         /* 0x00000001 */
/* D0APLL_CON6 */
#define DDR0CRU_D0APLL_CON6_OFFSET                         (0x18U)
#define DDR0CRU_D0APLL_CON6_D0APLL_AFC_CODE_SHIFT          (10U)
#define DDR0CRU_D0APLL_CON6_D0APLL_AFC_CODE_MASK           (0x1FU << DDR0CRU_D0APLL_CON6_D0APLL_AFC_CODE_SHIFT)         /* 0x00007C00 */
#define DDR0CRU_D0APLL_CON6_D0APLL_LOCK_SHIFT              (15U)
#define DDR0CRU_D0APLL_CON6_D0APLL_LOCK_MASK               (0x1U << DDR0CRU_D0APLL_CON6_D0APLL_LOCK_SHIFT)              /* 0x00008000 */
/* D0BPLL_CON0 */
#define DDR0CRU_D0BPLL_CON0_OFFSET                         (0x20U)
#define DDR0CRU_D0BPLL_CON0_D0BPLL_M_SHIFT                 (0U)
#define DDR0CRU_D0BPLL_CON0_D0BPLL_M_MASK                  (0x3FFU << DDR0CRU_D0BPLL_CON0_D0BPLL_M_SHIFT)               /* 0x000003FF */
#define DDR0CRU_D0BPLL_CON0_D0BPLL_BP_SHIFT                (15U)
#define DDR0CRU_D0BPLL_CON0_D0BPLL_BP_MASK                 (0x1U << DDR0CRU_D0BPLL_CON0_D0BPLL_BP_SHIFT)                /* 0x00008000 */
/* D0BPLL_CON1 */
#define DDR0CRU_D0BPLL_CON1_OFFSET                         (0x24U)
#define DDR0CRU_D0BPLL_CON1_D0BPLL_P_SHIFT                 (0U)
#define DDR0CRU_D0BPLL_CON1_D0BPLL_P_MASK                  (0x3FU << DDR0CRU_D0BPLL_CON1_D0BPLL_P_SHIFT)                /* 0x0000003F */
#define DDR0CRU_D0BPLL_CON1_D0BPLL_S_SHIFT                 (6U)
#define DDR0CRU_D0BPLL_CON1_D0BPLL_S_MASK                  (0x7U << DDR0CRU_D0BPLL_CON1_D0BPLL_S_SHIFT)                 /* 0x000001C0 */
#define DDR0CRU_D0BPLL_CON1_D0BPLL_RESETB_SHIFT            (13U)
#define DDR0CRU_D0BPLL_CON1_D0BPLL_RESETB_MASK             (0x1U << DDR0CRU_D0BPLL_CON1_D0BPLL_RESETB_SHIFT)            /* 0x00002000 */
/* D0BPLL_CON2 */
#define DDR0CRU_D0BPLL_CON2_OFFSET                         (0x28U)
#define DDR0CRU_D0BPLL_CON2_D0BPLL_K_SHIFT                 (0U)
#define DDR0CRU_D0BPLL_CON2_D0BPLL_K_MASK                  (0xFFFFU << DDR0CRU_D0BPLL_CON2_D0BPLL_K_SHIFT)              /* 0x0000FFFF */
/* D0BPLL_CON3 */
#define DDR0CRU_D0BPLL_CON3_OFFSET                         (0x2CU)
#define DDR0CRU_D0BPLL_CON3_D0BPLL_MFR_SHIFT               (0U)
#define DDR0CRU_D0BPLL_CON3_D0BPLL_MFR_MASK                (0xFFU << DDR0CRU_D0BPLL_CON3_D0BPLL_MFR_SHIFT)              /* 0x000000FF */
#define DDR0CRU_D0BPLL_CON3_D0BPLL_MRR_SHIFT               (8U)
#define DDR0CRU_D0BPLL_CON3_D0BPLL_MRR_MASK                (0x3FU << DDR0CRU_D0BPLL_CON3_D0BPLL_MRR_SHIFT)              /* 0x00003F00 */
#define DDR0CRU_D0BPLL_CON3_D0BPLL_SEL_PF_SHIFT            (14U)
#define DDR0CRU_D0BPLL_CON3_D0BPLL_SEL_PF_MASK             (0x3U << DDR0CRU_D0BPLL_CON3_D0BPLL_SEL_PF_SHIFT)            /* 0x0000C000 */
/* D0BPLL_CON4 */
#define DDR0CRU_D0BPLL_CON4_OFFSET                         (0x30U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_SSCG_EN_SHIFT           (0U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_SSCG_EN_MASK            (0x1U << DDR0CRU_D0BPLL_CON4_D0BPLL_SSCG_EN_SHIFT)           /* 0x00000001 */
#define DDR0CRU_D0BPLL_CON4_D0BPLL_AFC_ENB_SHIFT           (3U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_AFC_ENB_MASK            (0x1U << DDR0CRU_D0BPLL_CON4_D0BPLL_AFC_ENB_SHIFT)           /* 0x00000008 */
#define DDR0CRU_D0BPLL_CON4_D0BPLL_EXTAFC_SHIFT            (4U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_EXTAFC_MASK             (0x1FU << DDR0CRU_D0BPLL_CON4_D0BPLL_EXTAFC_SHIFT)           /* 0x000001F0 */
#define DDR0CRU_D0BPLL_CON4_D0BPLL_FEED_EN_SHIFT           (14U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_FEED_EN_MASK            (0x1U << DDR0CRU_D0BPLL_CON4_D0BPLL_FEED_EN_SHIFT)           /* 0x00004000 */
#define DDR0CRU_D0BPLL_CON4_D0BPLL_FSEL_SHIFT              (15U)
#define DDR0CRU_D0BPLL_CON4_D0BPLL_FSEL_MASK               (0x1U << DDR0CRU_D0BPLL_CON4_D0BPLL_FSEL_SHIFT)              /* 0x00008000 */
/* D0BPLL_CON5 */
#define DDR0CRU_D0BPLL_CON5_OFFSET                         (0x34U)
#define DDR0CRU_D0BPLL_CON5_D0BPLL_FOUT_MASK_SHIFT         (0U)
#define DDR0CRU_D0BPLL_CON5_D0BPLL_FOUT_MASK_MASK          (0x1U << DDR0CRU_D0BPLL_CON5_D0BPLL_FOUT_MASK_SHIFT)         /* 0x00000001 */
/* D0BPLL_CON6 */
#define DDR0CRU_D0BPLL_CON6_OFFSET                         (0x38U)
#define DDR0CRU_D0BPLL_CON6_D0BPLL_AFC_CODE_SHIFT          (10U)
#define DDR0CRU_D0BPLL_CON6_D0BPLL_AFC_CODE_MASK           (0x1FU << DDR0CRU_D0BPLL_CON6_D0BPLL_AFC_CODE_SHIFT)         /* 0x00007C00 */
#define DDR0CRU_D0BPLL_CON6_D0BPLL_LOCK_SHIFT              (15U)
#define DDR0CRU_D0BPLL_CON6_D0BPLL_LOCK_MASK               (0x1U << DDR0CRU_D0BPLL_CON6_D0BPLL_LOCK_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON00 */
#define DDR0CRU_CLKSEL_CON00_OFFSET                        (0x300U)
#define DDR0CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH0_SEL_SHIFT    (0U)
#define DDR0CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH0_SEL_MASK     (0x1U << DDR0CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH0_SEL_SHIFT)    /* 0x00000001 */
/* GATE_CON00 */
#define DDR0CRU_GATE_CON00_OFFSET                          (0x800U)
#define DDR0CRU_GATE_CON00_PCLK_DDR_CRU_CH0_EN_SHIFT       (3U)
#define DDR0CRU_GATE_CON00_PCLK_DDR_CRU_CH0_EN_MASK        (0x1U << DDR0CRU_GATE_CON00_PCLK_DDR_CRU_CH0_EN_SHIFT)       /* 0x00000008 */
#define DDR0CRU_GATE_CON00_PCLK_DDRPHY_CH0_EN_SHIFT        (4U)
#define DDR0CRU_GATE_CON00_PCLK_DDRPHY_CH0_EN_MASK         (0x1U << DDR0CRU_GATE_CON00_PCLK_DDRPHY_CH0_EN_SHIFT)        /* 0x00000010 */
#define DDR0CRU_GATE_CON00_CLK_OSC_DDRPHY_CH0_EN_SHIFT     (5U)
#define DDR0CRU_GATE_CON00_CLK_OSC_DDRPHY_CH0_EN_MASK      (0x1U << DDR0CRU_GATE_CON00_CLK_OSC_DDRPHY_CH0_EN_SHIFT)     /* 0x00000020 */
/* SOFTRST_CON00 */
#define DDR0CRU_SOFTRST_CON00_OFFSET                       (0xA00U)
#define DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH0_SHIFT (1U)
#define DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH0_MASK  (0x1U << DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH0_SHIFT) /* 0x00000002 */
#define DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH0_SHIFT    (2U)
#define DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH0_MASK     (0x1U << DDR0CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH0_SHIFT)    /* 0x00000004 */
#define DDR0CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH0_SHIFT    (3U)
#define DDR0CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH0_MASK     (0x1U << DDR0CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH0_SHIFT)    /* 0x00000008 */
#define DDR0CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH0_SHIFT     (4U)
#define DDR0CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH0_MASK      (0x1U << DDR0CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH0_SHIFT)     /* 0x00000010 */
/****************************************DDR1CRU*****************************************/
/* D1APLL_CON0 */
#define DDR1CRU_D1APLL_CON0_OFFSET                         (0x0U)
#define DDR1CRU_D1APLL_CON0_D1APLL_M_SHIFT                 (0U)
#define DDR1CRU_D1APLL_CON0_D1APLL_M_MASK                  (0x3FFU << DDR1CRU_D1APLL_CON0_D1APLL_M_SHIFT)               /* 0x000003FF */
#define DDR1CRU_D1APLL_CON0_D1APLL_BP_SHIFT                (15U)
#define DDR1CRU_D1APLL_CON0_D1APLL_BP_MASK                 (0x1U << DDR1CRU_D1APLL_CON0_D1APLL_BP_SHIFT)                /* 0x00008000 */
/* D1APLL_CON1 */
#define DDR1CRU_D1APLL_CON1_OFFSET                         (0x4U)
#define DDR1CRU_D1APLL_CON1_D1APLL_P_SHIFT                 (0U)
#define DDR1CRU_D1APLL_CON1_D1APLL_P_MASK                  (0x3FU << DDR1CRU_D1APLL_CON1_D1APLL_P_SHIFT)                /* 0x0000003F */
#define DDR1CRU_D1APLL_CON1_D1APLL_S_SHIFT                 (6U)
#define DDR1CRU_D1APLL_CON1_D1APLL_S_MASK                  (0x7U << DDR1CRU_D1APLL_CON1_D1APLL_S_SHIFT)                 /* 0x000001C0 */
#define DDR1CRU_D1APLL_CON1_D1APLL_RESETB_SHIFT            (13U)
#define DDR1CRU_D1APLL_CON1_D1APLL_RESETB_MASK             (0x1U << DDR1CRU_D1APLL_CON1_D1APLL_RESETB_SHIFT)            /* 0x00002000 */
/* D1APLL_CON2 */
#define DDR1CRU_D1APLL_CON2_OFFSET                         (0x8U)
#define DDR1CRU_D1APLL_CON2_D1APLL_K_SHIFT                 (0U)
#define DDR1CRU_D1APLL_CON2_D1APLL_K_MASK                  (0xFFFFU << DDR1CRU_D1APLL_CON2_D1APLL_K_SHIFT)              /* 0x0000FFFF */
/* D1APLL_CON3 */
#define DDR1CRU_D1APLL_CON3_OFFSET                         (0xCU)
#define DDR1CRU_D1APLL_CON3_D1APLL_MFR_SHIFT               (0U)
#define DDR1CRU_D1APLL_CON3_D1APLL_MFR_MASK                (0xFFU << DDR1CRU_D1APLL_CON3_D1APLL_MFR_SHIFT)              /* 0x000000FF */
#define DDR1CRU_D1APLL_CON3_D1APLL_MRR_SHIFT               (8U)
#define DDR1CRU_D1APLL_CON3_D1APLL_MRR_MASK                (0x3FU << DDR1CRU_D1APLL_CON3_D1APLL_MRR_SHIFT)              /* 0x00003F00 */
#define DDR1CRU_D1APLL_CON3_D1APLL_SEL_PF_SHIFT            (14U)
#define DDR1CRU_D1APLL_CON3_D1APLL_SEL_PF_MASK             (0x3U << DDR1CRU_D1APLL_CON3_D1APLL_SEL_PF_SHIFT)            /* 0x0000C000 */
/* D1APLL_CON4 */
#define DDR1CRU_D1APLL_CON4_OFFSET                         (0x10U)
#define DDR1CRU_D1APLL_CON4_D1APLL_SSCG_EN_SHIFT           (0U)
#define DDR1CRU_D1APLL_CON4_D1APLL_SSCG_EN_MASK            (0x1U << DDR1CRU_D1APLL_CON4_D1APLL_SSCG_EN_SHIFT)           /* 0x00000001 */
#define DDR1CRU_D1APLL_CON4_D1APLL_AFC_ENB_SHIFT           (3U)
#define DDR1CRU_D1APLL_CON4_D1APLL_AFC_ENB_MASK            (0x1U << DDR1CRU_D1APLL_CON4_D1APLL_AFC_ENB_SHIFT)           /* 0x00000008 */
#define DDR1CRU_D1APLL_CON4_D1APLL_EXTAFC_SHIFT            (4U)
#define DDR1CRU_D1APLL_CON4_D1APLL_EXTAFC_MASK             (0x1FU << DDR1CRU_D1APLL_CON4_D1APLL_EXTAFC_SHIFT)           /* 0x000001F0 */
#define DDR1CRU_D1APLL_CON4_D1APLL_FEED_EN_SHIFT           (14U)
#define DDR1CRU_D1APLL_CON4_D1APLL_FEED_EN_MASK            (0x1U << DDR1CRU_D1APLL_CON4_D1APLL_FEED_EN_SHIFT)           /* 0x00004000 */
#define DDR1CRU_D1APLL_CON4_D1APLL_FSEL_SHIFT              (15U)
#define DDR1CRU_D1APLL_CON4_D1APLL_FSEL_MASK               (0x1U << DDR1CRU_D1APLL_CON4_D1APLL_FSEL_SHIFT)              /* 0x00008000 */
/* D1APLL_CON5 */
#define DDR1CRU_D1APLL_CON5_OFFSET                         (0x14U)
#define DDR1CRU_D1APLL_CON5_D1APLL_FOUT_MASK_SHIFT         (0U)
#define DDR1CRU_D1APLL_CON5_D1APLL_FOUT_MASK_MASK          (0x1U << DDR1CRU_D1APLL_CON5_D1APLL_FOUT_MASK_SHIFT)         /* 0x00000001 */
/* D1APLL_CON6 */
#define DDR1CRU_D1APLL_CON6_OFFSET                         (0x18U)
#define DDR1CRU_D1APLL_CON6_D1APLL_AFC_CODE_SHIFT          (10U)
#define DDR1CRU_D1APLL_CON6_D1APLL_AFC_CODE_MASK           (0x1FU << DDR1CRU_D1APLL_CON6_D1APLL_AFC_CODE_SHIFT)         /* 0x00007C00 */
#define DDR1CRU_D1APLL_CON6_D1APLL_LOCK_SHIFT              (15U)
#define DDR1CRU_D1APLL_CON6_D1APLL_LOCK_MASK               (0x1U << DDR1CRU_D1APLL_CON6_D1APLL_LOCK_SHIFT)              /* 0x00008000 */
/* D1BPLL_CON0 */
#define DDR1CRU_D1BPLL_CON0_OFFSET                         (0x20U)
#define DDR1CRU_D1BPLL_CON0_D1BPLL_M_SHIFT                 (0U)
#define DDR1CRU_D1BPLL_CON0_D1BPLL_M_MASK                  (0x3FFU << DDR1CRU_D1BPLL_CON0_D1BPLL_M_SHIFT)               /* 0x000003FF */
#define DDR1CRU_D1BPLL_CON0_D1BPLL_BP_SHIFT                (15U)
#define DDR1CRU_D1BPLL_CON0_D1BPLL_BP_MASK                 (0x1U << DDR1CRU_D1BPLL_CON0_D1BPLL_BP_SHIFT)                /* 0x00008000 */
/* D1BPLL_CON1 */
#define DDR1CRU_D1BPLL_CON1_OFFSET                         (0x24U)
#define DDR1CRU_D1BPLL_CON1_D1BPLL_P_SHIFT                 (0U)
#define DDR1CRU_D1BPLL_CON1_D1BPLL_P_MASK                  (0x3FU << DDR1CRU_D1BPLL_CON1_D1BPLL_P_SHIFT)                /* 0x0000003F */
#define DDR1CRU_D1BPLL_CON1_D1BPLL_S_SHIFT                 (6U)
#define DDR1CRU_D1BPLL_CON1_D1BPLL_S_MASK                  (0x7U << DDR1CRU_D1BPLL_CON1_D1BPLL_S_SHIFT)                 /* 0x000001C0 */
#define DDR1CRU_D1BPLL_CON1_D1BPLL_RESETB_SHIFT            (13U)
#define DDR1CRU_D1BPLL_CON1_D1BPLL_RESETB_MASK             (0x1U << DDR1CRU_D1BPLL_CON1_D1BPLL_RESETB_SHIFT)            /* 0x00002000 */
/* D1BPLL_CON2 */
#define DDR1CRU_D1BPLL_CON2_OFFSET                         (0x28U)
#define DDR1CRU_D1BPLL_CON2_D1BPLL_K_SHIFT                 (0U)
#define DDR1CRU_D1BPLL_CON2_D1BPLL_K_MASK                  (0xFFFFU << DDR1CRU_D1BPLL_CON2_D1BPLL_K_SHIFT)              /* 0x0000FFFF */
/* D1BPLL_CON3 */
#define DDR1CRU_D1BPLL_CON3_OFFSET                         (0x2CU)
#define DDR1CRU_D1BPLL_CON3_D1BPLL_MFR_SHIFT               (0U)
#define DDR1CRU_D1BPLL_CON3_D1BPLL_MFR_MASK                (0xFFU << DDR1CRU_D1BPLL_CON3_D1BPLL_MFR_SHIFT)              /* 0x000000FF */
#define DDR1CRU_D1BPLL_CON3_D1BPLL_MRR_SHIFT               (8U)
#define DDR1CRU_D1BPLL_CON3_D1BPLL_MRR_MASK                (0x3FU << DDR1CRU_D1BPLL_CON3_D1BPLL_MRR_SHIFT)              /* 0x00003F00 */
#define DDR1CRU_D1BPLL_CON3_D1BPLL_SEL_PF_SHIFT            (14U)
#define DDR1CRU_D1BPLL_CON3_D1BPLL_SEL_PF_MASK             (0x3U << DDR1CRU_D1BPLL_CON3_D1BPLL_SEL_PF_SHIFT)            /* 0x0000C000 */
/* D1BPLL_CON4 */
#define DDR1CRU_D1BPLL_CON4_OFFSET                         (0x30U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_SSCG_EN_SHIFT           (0U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_SSCG_EN_MASK            (0x1U << DDR1CRU_D1BPLL_CON4_D1BPLL_SSCG_EN_SHIFT)           /* 0x00000001 */
#define DDR1CRU_D1BPLL_CON4_D1BPLL_AFC_ENB_SHIFT           (3U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_AFC_ENB_MASK            (0x1U << DDR1CRU_D1BPLL_CON4_D1BPLL_AFC_ENB_SHIFT)           /* 0x00000008 */
#define DDR1CRU_D1BPLL_CON4_D1BPLL_EXTAFC_SHIFT            (4U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_EXTAFC_MASK             (0x1FU << DDR1CRU_D1BPLL_CON4_D1BPLL_EXTAFC_SHIFT)           /* 0x000001F0 */
#define DDR1CRU_D1BPLL_CON4_D1BPLL_FEED_EN_SHIFT           (14U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_FEED_EN_MASK            (0x1U << DDR1CRU_D1BPLL_CON4_D1BPLL_FEED_EN_SHIFT)           /* 0x00004000 */
#define DDR1CRU_D1BPLL_CON4_D1BPLL_FSEL_SHIFT              (15U)
#define DDR1CRU_D1BPLL_CON4_D1BPLL_FSEL_MASK               (0x1U << DDR1CRU_D1BPLL_CON4_D1BPLL_FSEL_SHIFT)              /* 0x00008000 */
/* D1BPLL_CON5 */
#define DDR1CRU_D1BPLL_CON5_OFFSET                         (0x34U)
#define DDR1CRU_D1BPLL_CON5_D1BPLL_FOUT_MASK_SHIFT         (0U)
#define DDR1CRU_D1BPLL_CON5_D1BPLL_FOUT_MASK_MASK          (0x1U << DDR1CRU_D1BPLL_CON5_D1BPLL_FOUT_MASK_SHIFT)         /* 0x00000001 */
/* D1BPLL_CON6 */
#define DDR1CRU_D1BPLL_CON6_OFFSET                         (0x38U)
#define DDR1CRU_D1BPLL_CON6_D1BPLL_AFC_CODE_SHIFT          (10U)
#define DDR1CRU_D1BPLL_CON6_D1BPLL_AFC_CODE_MASK           (0x1FU << DDR1CRU_D1BPLL_CON6_D1BPLL_AFC_CODE_SHIFT)         /* 0x00007C00 */
#define DDR1CRU_D1BPLL_CON6_D1BPLL_LOCK_SHIFT              (15U)
#define DDR1CRU_D1BPLL_CON6_D1BPLL_LOCK_MASK               (0x1U << DDR1CRU_D1BPLL_CON6_D1BPLL_LOCK_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON00 */
#define DDR1CRU_CLKSEL_CON00_OFFSET                        (0x300U)
#define DDR1CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH1_SEL_SHIFT    (0U)
#define DDR1CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH1_SEL_MASK     (0x1U << DDR1CRU_CLKSEL_CON00_CLK_DDRPHY2X_CH1_SEL_SHIFT)    /* 0x00000001 */
/* GATE_CON00 */
#define DDR1CRU_GATE_CON00_OFFSET                          (0x800U)
#define DDR1CRU_GATE_CON00_PCLK_DDR_CRU_CH1_EN_SHIFT       (3U)
#define DDR1CRU_GATE_CON00_PCLK_DDR_CRU_CH1_EN_MASK        (0x1U << DDR1CRU_GATE_CON00_PCLK_DDR_CRU_CH1_EN_SHIFT)       /* 0x00000008 */
#define DDR1CRU_GATE_CON00_PCLK_DDRPHY_CH1_EN_SHIFT        (4U)
#define DDR1CRU_GATE_CON00_PCLK_DDRPHY_CH1_EN_MASK         (0x1U << DDR1CRU_GATE_CON00_PCLK_DDRPHY_CH1_EN_SHIFT)        /* 0x00000010 */
#define DDR1CRU_GATE_CON00_CLK_OSC_DDRPHY_CH1_EN_SHIFT     (5U)
#define DDR1CRU_GATE_CON00_CLK_OSC_DDRPHY_CH1_EN_MASK      (0x1U << DDR1CRU_GATE_CON00_CLK_OSC_DDRPHY_CH1_EN_SHIFT)     /* 0x00000020 */
/* SOFTRST_CON00 */
#define DDR1CRU_SOFTRST_CON00_OFFSET                       (0xA00U)
#define DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH1_SHIFT (1U)
#define DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH1_MASK  (0x1U << DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2XDIV_CH1_SHIFT) /* 0x00000002 */
#define DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH1_SHIFT    (2U)
#define DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH1_MASK     (0x1U << DDR1CRU_SOFTRST_CON00_RESETN_DDRPHY2X_CH1_SHIFT)    /* 0x00000004 */
#define DDR1CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH1_SHIFT    (3U)
#define DDR1CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH1_MASK     (0x1U << DDR1CRU_SOFTRST_CON00_PRESETN_DDR_CRU_CH1_SHIFT)    /* 0x00000008 */
#define DDR1CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH1_SHIFT     (4U)
#define DDR1CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH1_MASK      (0x1U << DDR1CRU_SOFTRST_CON00_PRESETN_DDRPHY_CH1_SHIFT)     /* 0x00000010 */
/***************************************BIGCORECRU***************************************/
/* MODE_CON00 */
#define BIGCORECRU_MODE_CON00_OFFSET                       (0x280U)
#define BIGCORECRU_MODE_CON00_CLK_BPLL_MODE_SHIFT          (0U)
#define BIGCORECRU_MODE_CON00_CLK_BPLL_MODE_MASK           (0x3U << BIGCORECRU_MODE_CON00_CLK_BPLL_MODE_SHIFT)          /* 0x00000003 */
/* CLKSEL_CON00 */
#define BIGCORECRU_CLKSEL_CON00_OFFSET                     (0x300U)
#define BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_DIV_SHIFT (7U)
#define BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_DIV_MASK (0x1FU << BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_DIV_SHIFT) /* 0x00000F80 */
#define BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_SEL_SHIFT (12U)
#define BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_SEL_MASK (0x1U << BIGCORECRU_CLKSEL_CON00_PCLK_BIGCORE_ROOT_SEL_SHIFT) /* 0x00001000 */
/* CLKSEL_CON01 */
#define BIGCORECRU_CLKSEL_CON01_OFFSET                     (0x304U)
#define BIGCORECRU_CLKSEL_CON01_MBIST_CLK_CLK_BIGCORE_SRC_DIV_SHIFT (0U)
#define BIGCORECRU_CLKSEL_CON01_MBIST_CLK_CLK_BIGCORE_SRC_DIV_MASK (0x7U << BIGCORECRU_CLKSEL_CON01_MBIST_CLK_CLK_BIGCORE_SRC_DIV_SHIFT) /* 0x00000007 */
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_DIV_SHIFT  (7U)
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_DIV_MASK   (0x1FU << BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_DIV_SHIFT) /* 0x00000F80 */
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_SEL_SHIFT  (12U)
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_SEL_MASK   (0x3U << BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SRC_SEL_SHIFT)  /* 0x00003000 */
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SEL_SHIFT      (14U)
#define BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SEL_MASK       (0x3U << BIGCORECRU_CLKSEL_CON01_CLK_BIGCORE_SEL_SHIFT)      /* 0x0000C000 */
/* CLKSEL_CON02 */
#define BIGCORECRU_CLKSEL_CON02_OFFSET                     (0x308U)
#define BIGCORECRU_CLKSEL_CON02_ACLK_M_BIGCORE_DIV_SHIFT   (0U)
#define BIGCORECRU_CLKSEL_CON02_ACLK_M_BIGCORE_DIV_MASK    (0x1FU << BIGCORECRU_CLKSEL_CON02_ACLK_M_BIGCORE_DIV_SHIFT)  /* 0x0000001F */
#define BIGCORECRU_CLKSEL_CON02_CLK_BIGCORE_PVTPLL_SRC_SEL_SHIFT (5U)
#define BIGCORECRU_CLKSEL_CON02_CLK_BIGCORE_PVTPLL_SRC_SEL_MASK (0x1U << BIGCORECRU_CLKSEL_CON02_CLK_BIGCORE_PVTPLL_SRC_SEL_SHIFT) /* 0x00000020 */
/* CLKSEL_CON03 */
#define BIGCORECRU_CLKSEL_CON03_OFFSET                     (0x30CU)
#define BIGCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_BIGCORE_DIV_SHIFT (0U)
#define BIGCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_BIGCORE_DIV_MASK (0x1FU << BIGCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_BIGCORE_DIV_SHIFT) /* 0x0000001F */
/* GATE_CON00 */
#define BIGCORECRU_GATE_CON00_OFFSET                       (0x800U)
#define BIGCORECRU_GATE_CON00_CLK_REF_PVTPLL_BIGCORE_EN_SHIFT (1U)
#define BIGCORECRU_GATE_CON00_CLK_REF_PVTPLL_BIGCORE_EN_MASK (0x1U << BIGCORECRU_GATE_CON00_CLK_REF_PVTPLL_BIGCORE_EN_SHIFT) /* 0x00000002 */
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_ROOT_EN_SHIFT   (4U)
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_ROOT_EN_MASK    (0x1U << BIGCORECRU_GATE_CON00_PCLK_BIGCORE_ROOT_EN_SHIFT)   /* 0x00000010 */
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_BIU_EN_SHIFT    (5U)
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_BIU_EN_MASK     (0x1U << BIGCORECRU_GATE_CON00_PCLK_BIGCORE_BIU_EN_SHIFT)    /* 0x00000020 */
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_GRF_EN_SHIFT    (7U)
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_GRF_EN_MASK     (0x1U << BIGCORECRU_GATE_CON00_PCLK_BIGCORE_GRF_EN_SHIFT)    /* 0x00000080 */
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_CRU_EN_SHIFT    (8U)
#define BIGCORECRU_GATE_CON00_PCLK_BIGCORE_CRU_EN_MASK     (0x1U << BIGCORECRU_GATE_CON00_PCLK_BIGCORE_CRU_EN_SHIFT)    /* 0x00000100 */
#define BIGCORECRU_GATE_CON00_PCLK_PVTPLL_BIGCORE_EN_SHIFT (9U)
#define BIGCORECRU_GATE_CON00_PCLK_PVTPLL_BIGCORE_EN_MASK  (0x1U << BIGCORECRU_GATE_CON00_PCLK_PVTPLL_BIGCORE_EN_SHIFT) /* 0x00000200 */
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_CLEAN_EN_SHIFT   (11U)
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_CLEAN_EN_MASK    (0x1U << BIGCORECRU_GATE_CON00_CLK_BIGCORE_CLEAN_EN_SHIFT)   /* 0x00000800 */
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_SRC_EN_SHIFT     (13U)
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_SRC_EN_MASK      (0x1U << BIGCORECRU_GATE_CON00_CLK_BIGCORE_SRC_EN_SHIFT)     /* 0x00002000 */
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_EN_SHIFT         (14U)
#define BIGCORECRU_GATE_CON00_CLK_BIGCORE_EN_MASK          (0x1U << BIGCORECRU_GATE_CON00_CLK_BIGCORE_EN_SHIFT)         /* 0x00004000 */
/* GATE_CON01 */
#define BIGCORECRU_GATE_CON01_OFFSET                       (0x804U)
#define BIGCORECRU_GATE_CON01_ACLK_M_BIGCORE_EN_SHIFT      (7U)
#define BIGCORECRU_GATE_CON01_ACLK_M_BIGCORE_EN_MASK       (0x1U << BIGCORECRU_GATE_CON01_ACLK_M_BIGCORE_EN_SHIFT)      /* 0x00000080 */
#define BIGCORECRU_GATE_CON01_PCLK_DBG_BIGCORE_EN_SHIFT    (8U)
#define BIGCORECRU_GATE_CON01_PCLK_DBG_BIGCORE_EN_MASK     (0x1U << BIGCORECRU_GATE_CON01_PCLK_DBG_BIGCORE_EN_SHIFT)    /* 0x00000100 */
#define BIGCORECRU_GATE_CON01_CLK_SCANHS_BIGCORE_EN_SHIFT  (10U)
#define BIGCORECRU_GATE_CON01_CLK_SCANHS_BIGCORE_EN_MASK   (0x1U << BIGCORECRU_GATE_CON01_CLK_SCANHS_BIGCORE_EN_SHIFT)  /* 0x00000400 */
#define BIGCORECRU_GATE_CON01_ACLK_ADB400_A72_CCI_EN_SHIFT (11U)
#define BIGCORECRU_GATE_CON01_ACLK_ADB400_A72_CCI_EN_MASK  (0x1U << BIGCORECRU_GATE_CON01_ACLK_ADB400_A72_CCI_EN_SHIFT) /* 0x00000800 */
/* SOFTRST_CON00 */
#define BIGCORECRU_SOFTRST_CON00_OFFSET                    (0xA00U)
#define BIGCORECRU_SOFTRST_CON00_RESETN_REF_PVTPLL_BIGCORE_SHIFT (1U)
#define BIGCORECRU_SOFTRST_CON00_RESETN_REF_PVTPLL_BIGCORE_MASK (0x1U << BIGCORECRU_SOFTRST_CON00_RESETN_REF_PVTPLL_BIGCORE_SHIFT) /* 0x00000002 */
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_BIU_SHIFT (5U)
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_BIU_MASK  (0x1U << BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_BIU_SHIFT) /* 0x00000020 */
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_GRF_SHIFT (7U)
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_GRF_MASK  (0x1U << BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_GRF_SHIFT) /* 0x00000080 */
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_CRU_SHIFT (8U)
#define BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_CRU_MASK  (0x1U << BIGCORECRU_SOFTRST_CON00_PRESETN_BIGCORE_CRU_SHIFT) /* 0x00000100 */
#define BIGCORECRU_SOFTRST_CON00_PRESETN_PVTPLL_BIGCORE_SHIFT (9U)
#define BIGCORECRU_SOFTRST_CON00_PRESETN_PVTPLL_BIGCORE_MASK (0x1U << BIGCORECRU_SOFTRST_CON00_PRESETN_PVTPLL_BIGCORE_SHIFT) /* 0x00000200 */
#define BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET0_SHIFT    (14U)
#define BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET0_MASK     (0x1U << BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET0_SHIFT)    /* 0x00004000 */
#define BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET1_SHIFT    (15U)
#define BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET1_MASK     (0x1U << BIGCORECRU_SOFTRST_CON00_NBIGCOREPORESET1_SHIFT)    /* 0x00008000 */
/* SOFTRST_CON01 */
#define BIGCORECRU_SOFTRST_CON01_OFFSET                    (0xA04U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET2_SHIFT    (0U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET2_MASK     (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET2_SHIFT)    /* 0x00000001 */
#define BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET3_SHIFT    (1U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET3_MASK     (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCOREPORESET3_SHIFT)    /* 0x00000002 */
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET0_SHIFT        (2U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET0_MASK         (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCORESET0_SHIFT)        /* 0x00000004 */
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET1_SHIFT        (3U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET1_MASK         (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCORESET1_SHIFT)        /* 0x00000008 */
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET2_SHIFT        (4U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET2_MASK         (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCORESET2_SHIFT)        /* 0x00000010 */
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET3_SHIFT        (5U)
#define BIGCORECRU_SOFTRST_CON01_NBIGCORESET3_MASK         (0x1U << BIGCORECRU_SOFTRST_CON01_NBIGCORESET3_SHIFT)        /* 0x00000020 */
#define BIGCORECRU_SOFTRST_CON01_NL2RESET_BIGCORE_SHIFT    (6U)
#define BIGCORECRU_SOFTRST_CON01_NL2RESET_BIGCORE_MASK     (0x1U << BIGCORECRU_SOFTRST_CON01_NL2RESET_BIGCORE_SHIFT)    /* 0x00000040 */
#define BIGCORECRU_SOFTRST_CON01_PRESETN_DBG_BIGCORE_SHIFT (8U)
#define BIGCORECRU_SOFTRST_CON01_PRESETN_DBG_BIGCORE_MASK  (0x1U << BIGCORECRU_SOFTRST_CON01_PRESETN_DBG_BIGCORE_SHIFT) /* 0x00000100 */
#define BIGCORECRU_SOFTRST_CON01_ARESETN_ADB400_A72_CCI_SHIFT (11U)
#define BIGCORECRU_SOFTRST_CON01_ARESETN_ADB400_A72_CCI_MASK (0x1U << BIGCORECRU_SOFTRST_CON01_ARESETN_ADB400_A72_CCI_SHIFT) /* 0x00000800 */
/* SOFTRST_CON03 */
#define BIGCORECRU_SOFTRST_CON03_OFFSET                    (0xA0CU)
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET0_AC_SHIFT (0U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET0_AC_MASK  (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET0_AC_SHIFT) /* 0x00000001 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET1_AC_SHIFT (1U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET1_AC_MASK  (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET1_AC_SHIFT) /* 0x00000002 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET2_AC_SHIFT (2U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET2_AC_MASK  (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET2_AC_SHIFT) /* 0x00000004 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET3_AC_SHIFT (3U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET3_AC_MASK  (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCOREPORESET3_AC_SHIFT) /* 0x00000008 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET0_AC_SHIFT     (4U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET0_AC_MASK      (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCORESET0_AC_SHIFT)     /* 0x00000010 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET1_AC_SHIFT     (5U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET1_AC_MASK      (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCORESET1_AC_SHIFT)     /* 0x00000020 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET2_AC_SHIFT     (6U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET2_AC_MASK      (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCORESET2_AC_SHIFT)     /* 0x00000040 */
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET3_AC_SHIFT     (7U)
#define BIGCORECRU_SOFTRST_CON03_NBIGCORESET3_AC_MASK      (0x1U << BIGCORECRU_SOFTRST_CON03_NBIGCORESET3_AC_SHIFT)     /* 0x00000080 */
#define BIGCORECRU_SOFTRST_CON03_NL2RESET_BIGCORE_AC_SHIFT (8U)
#define BIGCORECRU_SOFTRST_CON03_NL2RESET_BIGCORE_AC_MASK  (0x1U << BIGCORECRU_SOFTRST_CON03_NL2RESET_BIGCORE_AC_SHIFT) /* 0x00000100 */
/* SMOTH_DIVFREE_CON00 */
#define BIGCORECRU_SMOTH_DIVFREE_CON00_OFFSET              (0xCC0U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_STEP_SHIFT (0U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_STEP_MASK (0x1FU << BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_STEP_SHIFT) /* 0x0000001F */
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_SMDIV_CLK_OFF_SHIFT (13U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_SMDIV_CLK_OFF_MASK (0x1U << BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_SMDIV_CLK_OFF_SHIFT) /* 0x00002000 */
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_GATE_SMTH_EN_SHIFT (14U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_GATE_SMTH_EN_MASK (0x1U << BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_GATE_SMTH_EN_SHIFT) /* 0x00004000 */
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_BYPASS_SHIFT (15U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_BYPASS_MASK (0x1U << BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_BYPASS_SHIFT) /* 0x00008000 */
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_FREQ_KEEP_SHIFT (16U)
#define BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_FREQ_KEEP_MASK (0xFFFFU << BIGCORECRU_SMOTH_DIVFREE_CON00_CLK_BIGCORE_SRC_FREQ_KEEP_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_BIGCORE_SRC_CON0 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_OFFSET      (0xF28U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_DIV_SHIFT (0U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_DIV_MASK (0x7U << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_GATE_SHIFT (3U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_GATE_MASK (0x1U << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_IDLE_TH_SHIFT (4U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_IDLE_TH_MASK (0xFFFU << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_WAIT_TH_SHIFT (16U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_WAIT_TH_MASK (0xFFFFU << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_BIGCORE_SRC_CON1 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_OFFSET      (0xF2CU)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_AUTOCS_EN_SHIFT (12U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_AUTOCS_EN_MASK (0x1U << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_SWITCH_EN_SHIFT (13U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_SWITCH_EN_MASK (0x1U << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_CLKSEL_CFG_SHIFT (14U)
#define BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_CLKSEL_CFG_MASK (0x3U << BIGCORECRU_AUTOCS_CLK_BIGCORE_SRC_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/***************************************LITCORECRU***************************************/
/* MODE_CON00 */
#define LITCORECRU_MODE_CON00_OFFSET                       (0x280U)
#define LITCORECRU_MODE_CON00_CLK_LPLL_MODE_SHIFT          (0U)
#define LITCORECRU_MODE_CON00_CLK_LPLL_MODE_MASK           (0x3U << LITCORECRU_MODE_CON00_CLK_LPLL_MODE_SHIFT)          /* 0x00000003 */
/* CLKSEL_CON00 */
#define LITCORECRU_CLKSEL_CON00_OFFSET                     (0x300U)
#define LITCORECRU_CLKSEL_CON00_MBIST_CLK_CLK_LITCORE_SRC_DIV_SHIFT (4U)
#define LITCORECRU_CLKSEL_CON00_MBIST_CLK_CLK_LITCORE_SRC_DIV_MASK (0x7U << LITCORECRU_CLKSEL_CON00_MBIST_CLK_CLK_LITCORE_SRC_DIV_SHIFT) /* 0x00000070 */
#define LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_DIV_SHIFT  (7U)
#define LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_DIV_MASK   (0x1FU << LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_DIV_SHIFT) /* 0x00000F80 */
#define LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_SEL_SHIFT  (12U)
#define LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_SEL_MASK   (0x3U << LITCORECRU_CLKSEL_CON00_CLK_LITCORE_SRC_SEL_SHIFT)  /* 0x00003000 */
/* CLKSEL_CON01 */
#define LITCORECRU_CLKSEL_CON01_OFFSET                     (0x304U)
#define LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_DIV_SHIFT (0U)
#define LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_DIV_MASK (0x1FU << LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_DIV_SHIFT) /* 0x0000001F */
#define LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_SEL_SHIFT (5U)
#define LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_SEL_MASK (0x1U << LITCORECRU_CLKSEL_CON01_PCLK_LITCORE_ROOT_SEL_SHIFT) /* 0x00000020 */
#define LITCORECRU_CLKSEL_CON01_CLK_LITCORE_SEL_SHIFT      (6U)
#define LITCORECRU_CLKSEL_CON01_CLK_LITCORE_SEL_MASK       (0x3U << LITCORECRU_CLKSEL_CON01_CLK_LITCORE_SEL_SHIFT)      /* 0x000000C0 */
#define LITCORECRU_CLKSEL_CON01_ACLK_M_LITCORE_DIV_SHIFT   (8U)
#define LITCORECRU_CLKSEL_CON01_ACLK_M_LITCORE_DIV_MASK    (0x1FU << LITCORECRU_CLKSEL_CON01_ACLK_M_LITCORE_DIV_SHIFT)  /* 0x00001F00 */
#define LITCORECRU_CLKSEL_CON01_CLK_LITCORE_PVTPLL_SRC_SEL_SHIFT (13U)
#define LITCORECRU_CLKSEL_CON01_CLK_LITCORE_PVTPLL_SRC_SEL_MASK (0x1U << LITCORECRU_CLKSEL_CON01_CLK_LITCORE_PVTPLL_SRC_SEL_SHIFT) /* 0x00002000 */
/* CLKSEL_CON02 */
#define LITCORECRU_CLKSEL_CON02_OFFSET                     (0x308U)
#define LITCORECRU_CLKSEL_CON02_PCLK_DBG_LITCORE_DIV_SHIFT (0U)
#define LITCORECRU_CLKSEL_CON02_PCLK_DBG_LITCORE_DIV_MASK  (0x1FU << LITCORECRU_CLKSEL_CON02_PCLK_DBG_LITCORE_DIV_SHIFT) /* 0x0000001F */
/* CLKSEL_CON03 */
#define LITCORECRU_CLKSEL_CON03_OFFSET                     (0x30CU)
#define LITCORECRU_CLKSEL_CON03_CLK_SCANHS_PCLK_DBG_LITCORE_DIV_SHIFT (0U)
#define LITCORECRU_CLKSEL_CON03_CLK_SCANHS_PCLK_DBG_LITCORE_DIV_MASK (0x1FU << LITCORECRU_CLKSEL_CON03_CLK_SCANHS_PCLK_DBG_LITCORE_DIV_SHIFT) /* 0x0000001F */
#define LITCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_LITCORE_DIV_SHIFT (5U)
#define LITCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_LITCORE_DIV_MASK (0x1FU << LITCORECRU_CLKSEL_CON03_CLK_SCANHS_ACLK_M_LITCORE_DIV_SHIFT) /* 0x000003E0 */
/* GATE_CON00 */
#define LITCORECRU_GATE_CON00_OFFSET                       (0x800U)
#define LITCORECRU_GATE_CON00_CLK_REF_PVTPLL_LITCORE_EN_SHIFT (0U)
#define LITCORECRU_GATE_CON00_CLK_REF_PVTPLL_LITCORE_EN_MASK (0x1U << LITCORECRU_GATE_CON00_CLK_REF_PVTPLL_LITCORE_EN_SHIFT) /* 0x00000001 */
#define LITCORECRU_GATE_CON00_CLK_LITCORE_CLEAN_EN_SHIFT   (1U)
#define LITCORECRU_GATE_CON00_CLK_LITCORE_CLEAN_EN_MASK    (0x1U << LITCORECRU_GATE_CON00_CLK_LITCORE_CLEAN_EN_SHIFT)   /* 0x00000002 */
#define LITCORECRU_GATE_CON00_CLK_LITCORE_SRC_EN_SHIFT     (2U)
#define LITCORECRU_GATE_CON00_CLK_LITCORE_SRC_EN_MASK      (0x1U << LITCORECRU_GATE_CON00_CLK_LITCORE_SRC_EN_SHIFT)     /* 0x00000004 */
#define LITCORECRU_GATE_CON00_PCLK_LITCORE_ROOT_EN_SHIFT   (4U)
#define LITCORECRU_GATE_CON00_PCLK_LITCORE_ROOT_EN_MASK    (0x1U << LITCORECRU_GATE_CON00_PCLK_LITCORE_ROOT_EN_SHIFT)   /* 0x00000010 */
#define LITCORECRU_GATE_CON00_CLK_LITCORE_EN_SHIFT         (5U)
#define LITCORECRU_GATE_CON00_CLK_LITCORE_EN_MASK          (0x1U << LITCORECRU_GATE_CON00_CLK_LITCORE_EN_SHIFT)         /* 0x00000020 */
#define LITCORECRU_GATE_CON00_ACLK_M_LITCORE_EN_SHIFT      (14U)
#define LITCORECRU_GATE_CON00_ACLK_M_LITCORE_EN_MASK       (0x1U << LITCORECRU_GATE_CON00_ACLK_M_LITCORE_EN_SHIFT)      /* 0x00004000 */
#define LITCORECRU_GATE_CON00_PCLK_DBG_LITCORE_EN_SHIFT    (15U)
#define LITCORECRU_GATE_CON00_PCLK_DBG_LITCORE_EN_MASK     (0x1U << LITCORECRU_GATE_CON00_PCLK_DBG_LITCORE_EN_SHIFT)    /* 0x00008000 */
/* GATE_CON01 */
#define LITCORECRU_GATE_CON01_OFFSET                       (0x804U)
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_GRF_EN_SHIFT    (0U)
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_GRF_EN_MASK     (0x1U << LITCORECRU_GATE_CON01_PCLK_LITCORE_GRF_EN_SHIFT)    /* 0x00000001 */
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_BIU_EN_SHIFT    (1U)
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_BIU_EN_MASK     (0x1U << LITCORECRU_GATE_CON01_PCLK_LITCORE_BIU_EN_SHIFT)    /* 0x00000002 */
#define LITCORECRU_GATE_CON01_ACLK_ADB400_A53_CCI_EN_SHIFT (2U)
#define LITCORECRU_GATE_CON01_ACLK_ADB400_A53_CCI_EN_MASK  (0x1U << LITCORECRU_GATE_CON01_ACLK_ADB400_A53_CCI_EN_SHIFT) /* 0x00000004 */
#define LITCORECRU_GATE_CON01_PCLK_PVTPLL_LITCORE_EN_SHIFT (3U)
#define LITCORECRU_GATE_CON01_PCLK_PVTPLL_LITCORE_EN_MASK  (0x1U << LITCORECRU_GATE_CON01_PCLK_PVTPLL_LITCORE_EN_SHIFT) /* 0x00000008 */
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_CRU_EN_SHIFT    (4U)
#define LITCORECRU_GATE_CON01_PCLK_LITCORE_CRU_EN_MASK     (0x1U << LITCORECRU_GATE_CON01_PCLK_LITCORE_CRU_EN_SHIFT)    /* 0x00000010 */
#define LITCORECRU_GATE_CON01_CLK_SCANHS_LITCORE_EN_SHIFT  (5U)
#define LITCORECRU_GATE_CON01_CLK_SCANHS_LITCORE_EN_MASK   (0x1U << LITCORECRU_GATE_CON01_CLK_SCANHS_LITCORE_EN_SHIFT)  /* 0x00000020 */
/* SOFTRST_CON00 */
#define LITCORECRU_SOFTRST_CON00_OFFSET                    (0xA00U)
#define LITCORECRU_SOFTRST_CON00_RESETN_REF_LITCORE_PVTPLL_SHIFT (0U)
#define LITCORECRU_SOFTRST_CON00_RESETN_REF_LITCORE_PVTPLL_MASK (0x1U << LITCORECRU_SOFTRST_CON00_RESETN_REF_LITCORE_PVTPLL_SHIFT) /* 0x00000001 */
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET0_SHIFT    (5U)
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET0_MASK     (0x1U << LITCORECRU_SOFTRST_CON00_NLITCOREPORESET0_SHIFT)    /* 0x00000020 */
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET1_SHIFT    (6U)
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET1_MASK     (0x1U << LITCORECRU_SOFTRST_CON00_NLITCOREPORESET1_SHIFT)    /* 0x00000040 */
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET2_SHIFT    (7U)
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET2_MASK     (0x1U << LITCORECRU_SOFTRST_CON00_NLITCOREPORESET2_SHIFT)    /* 0x00000080 */
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET3_SHIFT    (8U)
#define LITCORECRU_SOFTRST_CON00_NLITCOREPORESET3_MASK     (0x1U << LITCORECRU_SOFTRST_CON00_NLITCOREPORESET3_SHIFT)    /* 0x00000100 */
#define LITCORECRU_SOFTRST_CON00_NLITCORESET0_SHIFT        (9U)
#define LITCORECRU_SOFTRST_CON00_NLITCORESET0_MASK         (0x1U << LITCORECRU_SOFTRST_CON00_NLITCORESET0_SHIFT)        /* 0x00000200 */
#define LITCORECRU_SOFTRST_CON00_NLITCORESET1_SHIFT        (10U)
#define LITCORECRU_SOFTRST_CON00_NLITCORESET1_MASK         (0x1U << LITCORECRU_SOFTRST_CON00_NLITCORESET1_SHIFT)        /* 0x00000400 */
#define LITCORECRU_SOFTRST_CON00_NLITCORESET2_SHIFT        (11U)
#define LITCORECRU_SOFTRST_CON00_NLITCORESET2_MASK         (0x1U << LITCORECRU_SOFTRST_CON00_NLITCORESET2_SHIFT)        /* 0x00000800 */
#define LITCORECRU_SOFTRST_CON00_NLITCORESET3_SHIFT        (12U)
#define LITCORECRU_SOFTRST_CON00_NLITCORESET3_MASK         (0x1U << LITCORECRU_SOFTRST_CON00_NLITCORESET3_SHIFT)        /* 0x00001000 */
#define LITCORECRU_SOFTRST_CON00_NL2RESET_LITCORE_SHIFT    (13U)
#define LITCORECRU_SOFTRST_CON00_NL2RESET_LITCORE_MASK     (0x1U << LITCORECRU_SOFTRST_CON00_NL2RESET_LITCORE_SHIFT)    /* 0x00002000 */
#define LITCORECRU_SOFTRST_CON00_PRESETN_DBG_LITCORE_SHIFT (15U)
#define LITCORECRU_SOFTRST_CON00_PRESETN_DBG_LITCORE_MASK  (0x1U << LITCORECRU_SOFTRST_CON00_PRESETN_DBG_LITCORE_SHIFT) /* 0x00008000 */
/* SOFTRST_CON01 */
#define LITCORECRU_SOFTRST_CON01_OFFSET                    (0xA04U)
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_GRF_SHIFT (0U)
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_GRF_MASK  (0x1U << LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_GRF_SHIFT) /* 0x00000001 */
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_BIU_SHIFT (1U)
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_BIU_MASK  (0x1U << LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_BIU_SHIFT) /* 0x00000002 */
#define LITCORECRU_SOFTRST_CON01_ARESETN_ADB400_A53_CCI_SHIFT (2U)
#define LITCORECRU_SOFTRST_CON01_ARESETN_ADB400_A53_CCI_MASK (0x1U << LITCORECRU_SOFTRST_CON01_ARESETN_ADB400_A53_CCI_SHIFT) /* 0x00000004 */
#define LITCORECRU_SOFTRST_CON01_PRESETN_PVTPLL_LITCORE_SHIFT (3U)
#define LITCORECRU_SOFTRST_CON01_PRESETN_PVTPLL_LITCORE_MASK (0x1U << LITCORECRU_SOFTRST_CON01_PRESETN_PVTPLL_LITCORE_SHIFT) /* 0x00000008 */
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_CRU_SHIFT (4U)
#define LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_CRU_MASK  (0x1U << LITCORECRU_SOFTRST_CON01_PRESETN_LITCORE_CRU_SHIFT) /* 0x00000010 */
/* SOFTRST_CON03 */
#define LITCORECRU_SOFTRST_CON03_OFFSET                    (0xA0CU)
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET0_AC_SHIFT (0U)
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET0_AC_MASK  (0x1U << LITCORECRU_SOFTRST_CON03_NLITCOREPORESET0_AC_SHIFT) /* 0x00000001 */
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET1_AC_SHIFT (1U)
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET1_AC_MASK  (0x1U << LITCORECRU_SOFTRST_CON03_NLITCOREPORESET1_AC_SHIFT) /* 0x00000002 */
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET2_AC_SHIFT (2U)
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET2_AC_MASK  (0x1U << LITCORECRU_SOFTRST_CON03_NLITCOREPORESET2_AC_SHIFT) /* 0x00000004 */
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET3_AC_SHIFT (3U)
#define LITCORECRU_SOFTRST_CON03_NLITCOREPORESET3_AC_MASK  (0x1U << LITCORECRU_SOFTRST_CON03_NLITCOREPORESET3_AC_SHIFT) /* 0x00000008 */
#define LITCORECRU_SOFTRST_CON03_NLITCORESET0_AC_SHIFT     (4U)
#define LITCORECRU_SOFTRST_CON03_NLITCORESET0_AC_MASK      (0x1U << LITCORECRU_SOFTRST_CON03_NLITCORESET0_AC_SHIFT)     /* 0x00000010 */
#define LITCORECRU_SOFTRST_CON03_NLITCORESET1_AC_SHIFT     (5U)
#define LITCORECRU_SOFTRST_CON03_NLITCORESET1_AC_MASK      (0x1U << LITCORECRU_SOFTRST_CON03_NLITCORESET1_AC_SHIFT)     /* 0x00000020 */
#define LITCORECRU_SOFTRST_CON03_NLITCORESET2_AC_SHIFT     (6U)
#define LITCORECRU_SOFTRST_CON03_NLITCORESET2_AC_MASK      (0x1U << LITCORECRU_SOFTRST_CON03_NLITCORESET2_AC_SHIFT)     /* 0x00000040 */
#define LITCORECRU_SOFTRST_CON03_NLITCORESET3_AC_SHIFT     (7U)
#define LITCORECRU_SOFTRST_CON03_NLITCORESET3_AC_MASK      (0x1U << LITCORECRU_SOFTRST_CON03_NLITCORESET3_AC_SHIFT)     /* 0x00000080 */
#define LITCORECRU_SOFTRST_CON03_NL2RESET_LITCORE_AC_SHIFT (8U)
#define LITCORECRU_SOFTRST_CON03_NL2RESET_LITCORE_AC_MASK  (0x1U << LITCORECRU_SOFTRST_CON03_NL2RESET_LITCORE_AC_SHIFT) /* 0x00000100 */
/* SMOTH_DIVFREE_CON00 */
#define LITCORECRU_SMOTH_DIVFREE_CON00_OFFSET              (0xCC0U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_STEP_SHIFT (0U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_STEP_MASK (0x1FU << LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_STEP_SHIFT) /* 0x0000001F */
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_SMDIV_CLK_OFF_SHIFT (13U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_SMDIV_CLK_OFF_MASK (0x1U << LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_SMDIV_CLK_OFF_SHIFT) /* 0x00002000 */
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_GATE_SMTH_EN_SHIFT (14U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_GATE_SMTH_EN_MASK (0x1U << LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_GATE_SMTH_EN_SHIFT) /* 0x00004000 */
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_BYPASS_SHIFT (15U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_BYPASS_MASK (0x1U << LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_BYPASS_SHIFT) /* 0x00008000 */
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_FREQ_KEEP_SHIFT (16U)
#define LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_FREQ_KEEP_MASK (0xFFFFU << LITCORECRU_SMOTH_DIVFREE_CON00_CLK_LITCORE_SRC_FREQ_KEEP_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_LITCORE_SRC_CON0 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_OFFSET      (0xF38U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_DIV_SHIFT (0U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_DIV_MASK (0x7U << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_DIV_SHIFT) /* 0x00000007 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_GATE_SHIFT (3U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_GATE_MASK (0x1U << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_IDLE_TH_SHIFT (4U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_IDLE_TH_MASK (0xFFFU << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_IDLE_TH_SHIFT) /* 0x0000FFF0 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_WAIT_TH_SHIFT (16U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_WAIT_TH_MASK (0xFFFFU << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON0_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CLK_LITCORE_SRC_CON1 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_OFFSET      (0xF3CU)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_EN_SHIFT (12U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_EN_MASK (0x1U << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_SWITCH_EN_SHIFT (13U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_SWITCH_EN_MASK (0x1U << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_SWITCH_EN_SHIFT) /* 0x00002000 */
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_CLKSEL_CFG_SHIFT (14U)
#define LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_CLKSEL_CFG_MASK (0x3U << LITCORECRU_AUTOCS_CLK_LITCORE_SRC_CON1_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/*****************************************CCICRU*****************************************/
/* LPLL_CON0 */
#define CCICRU_LPLL_CON0_OFFSET                            (0x40U)
#define CCICRU_LPLL_CON0_LPLL_M_SHIFT                      (0U)
#define CCICRU_LPLL_CON0_LPLL_M_MASK                       (0x3FFU << CCICRU_LPLL_CON0_LPLL_M_SHIFT)                    /* 0x000003FF */
#define CCICRU_LPLL_CON0_LPLL_BP_SHIFT                     (15U)
#define CCICRU_LPLL_CON0_LPLL_BP_MASK                      (0x1U << CCICRU_LPLL_CON0_LPLL_BP_SHIFT)                     /* 0x00008000 */
/* LPLL_CON1 */
#define CCICRU_LPLL_CON1_OFFSET                            (0x44U)
#define CCICRU_LPLL_CON1_LPLL_P_SHIFT                      (0U)
#define CCICRU_LPLL_CON1_LPLL_P_MASK                       (0x3FU << CCICRU_LPLL_CON1_LPLL_P_SHIFT)                     /* 0x0000003F */
#define CCICRU_LPLL_CON1_LPLL_S_SHIFT                      (6U)
#define CCICRU_LPLL_CON1_LPLL_S_MASK                       (0x7U << CCICRU_LPLL_CON1_LPLL_S_SHIFT)                      /* 0x000001C0 */
#define CCICRU_LPLL_CON1_LPLL_RESETB_SHIFT                 (13U)
#define CCICRU_LPLL_CON1_LPLL_RESETB_MASK                  (0x1U << CCICRU_LPLL_CON1_LPLL_RESETB_SHIFT)                 /* 0x00002000 */
/* LPLL_CON4 */
#define CCICRU_LPLL_CON4_OFFSET                            (0x50U)
#define CCICRU_LPLL_CON4_LPLL_ICP_SHIFT                    (1U)
#define CCICRU_LPLL_CON4_LPLL_ICP_MASK                     (0x3U << CCICRU_LPLL_CON4_LPLL_ICP_SHIFT)                    /* 0x00000006 */
#define CCICRU_LPLL_CON4_LPLL_AFC_ENB_SHIFT                (3U)
#define CCICRU_LPLL_CON4_LPLL_AFC_ENB_MASK                 (0x1U << CCICRU_LPLL_CON4_LPLL_AFC_ENB_SHIFT)                /* 0x00000008 */
#define CCICRU_LPLL_CON4_LPLL_EXTAFC_SHIFT                 (4U)
#define CCICRU_LPLL_CON4_LPLL_EXTAFC_MASK                  (0x1FU << CCICRU_LPLL_CON4_LPLL_EXTAFC_SHIFT)                /* 0x000001F0 */
#define CCICRU_LPLL_CON4_LPLL_FEED_EN_SHIFT                (14U)
#define CCICRU_LPLL_CON4_LPLL_FEED_EN_MASK                 (0x1U << CCICRU_LPLL_CON4_LPLL_FEED_EN_SHIFT)                /* 0x00004000 */
#define CCICRU_LPLL_CON4_LPLL_FSEL_SHIFT                   (15U)
#define CCICRU_LPLL_CON4_LPLL_FSEL_MASK                    (0x1U << CCICRU_LPLL_CON4_LPLL_FSEL_SHIFT)                   /* 0x00008000 */
/* LPLL_CON5 */
#define CCICRU_LPLL_CON5_OFFSET                            (0x54U)
#define CCICRU_LPLL_CON5_LPLL_FOUT_MASK_SHIFT              (0U)
#define CCICRU_LPLL_CON5_LPLL_FOUT_MASK_MASK               (0x1U << CCICRU_LPLL_CON5_LPLL_FOUT_MASK_SHIFT)              /* 0x00000001 */
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_IN_SHIFT            (5U)
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_IN_MASK             (0x3U << CCICRU_LPLL_CON5_LPLL_LOCK_CON_IN_SHIFT)            /* 0x00000060 */
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_OUT_SHIFT           (7U)
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_OUT_MASK            (0x3U << CCICRU_LPLL_CON5_LPLL_LOCK_CON_OUT_SHIFT)           /* 0x00000180 */
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_DLY_SHIFT           (9U)
#define CCICRU_LPLL_CON5_LPLL_LOCK_CON_DLY_MASK            (0x3U << CCICRU_LPLL_CON5_LPLL_LOCK_CON_DLY_SHIFT)           /* 0x00000600 */
/* LPLL_CON6 */
#define CCICRU_LPLL_CON6_OFFSET                            (0x58U)
#define CCICRU_LPLL_CON6_LPLL_AFC_CODE_SHIFT               (10U)
#define CCICRU_LPLL_CON6_LPLL_AFC_CODE_MASK                (0x1FU << CCICRU_LPLL_CON6_LPLL_AFC_CODE_SHIFT)              /* 0x00007C00 */
#define CCICRU_LPLL_CON6_LPLL_LOCK_SHIFT                   (15U)
#define CCICRU_LPLL_CON6_LPLL_LOCK_MASK                    (0x1U << CCICRU_LPLL_CON6_LPLL_LOCK_SHIFT)                   /* 0x00008000 */
/* CLKSEL_CON04 */
#define CCICRU_CLKSEL_CON04_OFFSET                         (0x310U)
#define CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_DIV_SHIFT        (0U)
#define CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_DIV_MASK         (0x1FU << CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_DIV_SHIFT)       /* 0x0000001F */
#define CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_SEL_SHIFT        (5U)
#define CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_SEL_MASK         (0x3U << CCICRU_CLKSEL_CON04_PCLK_CCI_ROOT_SEL_SHIFT)        /* 0x00000060 */
#define CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_DIV_SHIFT        (7U)
#define CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_DIV_MASK         (0x1FU << CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_DIV_SHIFT)       /* 0x00000F80 */
#define CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_SEL_SHIFT        (12U)
#define CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_SEL_MASK         (0x3U << CCICRU_CLKSEL_CON04_ACLK_CCI_ROOT_SEL_SHIFT)        /* 0x00003000 */
#define CCICRU_CLKSEL_CON04_CLK_CCI_PVTPLL_SRC_SEL_SHIFT   (14U)
#define CCICRU_CLKSEL_CON04_CLK_CCI_PVTPLL_SRC_SEL_MASK    (0x1U << CCICRU_CLKSEL_CON04_CLK_CCI_PVTPLL_SRC_SEL_SHIFT)   /* 0x00004000 */
/* GATE_CON01 */
#define CCICRU_GATE_CON01_OFFSET                           (0x804U)
#define CCICRU_GATE_CON01_PCLK_CCI_ROOT_EN_SHIFT           (10U)
#define CCICRU_GATE_CON01_PCLK_CCI_ROOT_EN_MASK            (0x1U << CCICRU_GATE_CON01_PCLK_CCI_ROOT_EN_SHIFT)           /* 0x00000400 */
#define CCICRU_GATE_CON01_ACLK_CCI_ROOT_EN_SHIFT           (11U)
#define CCICRU_GATE_CON01_ACLK_CCI_ROOT_EN_MASK            (0x1U << CCICRU_GATE_CON01_ACLK_CCI_ROOT_EN_SHIFT)           /* 0x00000800 */
#define CCICRU_GATE_CON01_ACLK_CPE_EN_SHIFT                (12U)
#define CCICRU_GATE_CON01_ACLK_CPE_EN_MASK                 (0x1U << CCICRU_GATE_CON01_ACLK_CPE_EN_SHIFT)                /* 0x00001000 */
#define CCICRU_GATE_CON01_PCLK_CCI_BIU_EN_SHIFT            (13U)
#define CCICRU_GATE_CON01_PCLK_CCI_BIU_EN_MASK             (0x1U << CCICRU_GATE_CON01_PCLK_CCI_BIU_EN_SHIFT)            /* 0x00002000 */
#define CCICRU_GATE_CON01_ACLK_CCI_BIU_EN_SHIFT            (14U)
#define CCICRU_GATE_CON01_ACLK_CCI_BIU_EN_MASK             (0x1U << CCICRU_GATE_CON01_ACLK_CCI_BIU_EN_SHIFT)            /* 0x00004000 */
#define CCICRU_GATE_CON01_PCLK_DBG_M_EN_SHIFT              (15U)
#define CCICRU_GATE_CON01_PCLK_DBG_M_EN_MASK               (0x1U << CCICRU_GATE_CON01_PCLK_DBG_M_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON02 */
#define CCICRU_GATE_CON02_OFFSET                           (0x808U)
#define CCICRU_GATE_CON02_PCLK_DBG_SYS_EN_SHIFT            (0U)
#define CCICRU_GATE_CON02_PCLK_DBG_SYS_EN_MASK             (0x1U << CCICRU_GATE_CON02_PCLK_DBG_SYS_EN_SHIFT)            /* 0x00000001 */
#define CCICRU_GATE_CON02_PCLK_CCI_GRF_EN_SHIFT            (1U)
#define CCICRU_GATE_CON02_PCLK_CCI_GRF_EN_MASK             (0x1U << CCICRU_GATE_CON02_PCLK_CCI_GRF_EN_SHIFT)            /* 0x00000002 */
#define CCICRU_GATE_CON02_PCLK_CCI_CRU_EN_SHIFT            (2U)
#define CCICRU_GATE_CON02_PCLK_CCI_CRU_EN_MASK             (0x1U << CCICRU_GATE_CON02_PCLK_CCI_CRU_EN_SHIFT)            /* 0x00000004 */
#define CCICRU_GATE_CON02_ACLK_CCI_EN_SHIFT                (3U)
#define CCICRU_GATE_CON02_ACLK_CCI_EN_MASK                 (0x1U << CCICRU_GATE_CON02_ACLK_CCI_EN_SHIFT)                /* 0x00000008 */
#define CCICRU_GATE_CON02_ACLK_CCI_DDRSCH_BIU_EN_SHIFT     (5U)
#define CCICRU_GATE_CON02_ACLK_CCI_DDRSCH_BIU_EN_MASK      (0x1U << CCICRU_GATE_CON02_ACLK_CCI_DDRSCH_BIU_EN_SHIFT)     /* 0x00000020 */
#define CCICRU_GATE_CON02_ACLK_ADB400_CCI_A72_EN_SHIFT     (6U)
#define CCICRU_GATE_CON02_ACLK_ADB400_CCI_A72_EN_MASK      (0x1U << CCICRU_GATE_CON02_ACLK_ADB400_CCI_A72_EN_SHIFT)     /* 0x00000040 */
#define CCICRU_GATE_CON02_ACLK_ADB400_CCI_A53_EN_SHIFT     (7U)
#define CCICRU_GATE_CON02_ACLK_ADB400_CCI_A53_EN_MASK      (0x1U << CCICRU_GATE_CON02_ACLK_ADB400_CCI_A53_EN_SHIFT)     /* 0x00000080 */
#define CCICRU_GATE_CON02_PCLK_PVTPLL_CCI_EN_SHIFT         (8U)
#define CCICRU_GATE_CON02_PCLK_PVTPLL_CCI_EN_MASK          (0x1U << CCICRU_GATE_CON02_PCLK_PVTPLL_CCI_EN_SHIFT)         /* 0x00000100 */
#define CCICRU_GATE_CON02_PCLK_CCI_DDRSCH_BIU_EN_SHIFT     (10U)
#define CCICRU_GATE_CON02_PCLK_CCI_DDRSCH_BIU_EN_MASK      (0x1U << CCICRU_GATE_CON02_PCLK_CCI_DDRSCH_BIU_EN_SHIFT)     /* 0x00000400 */
#define CCICRU_GATE_CON02_PCLK_DBG_M_BIU_EN_SHIFT          (11U)
#define CCICRU_GATE_CON02_PCLK_DBG_M_BIU_EN_MASK           (0x1U << CCICRU_GATE_CON02_PCLK_DBG_M_BIU_EN_SHIFT)          /* 0x00000800 */
#define CCICRU_GATE_CON02_CLK_REF_PVTPLL_CCI_EN_SHIFT      (12U)
#define CCICRU_GATE_CON02_CLK_REF_PVTPLL_CCI_EN_MASK       (0x1U << CCICRU_GATE_CON02_CLK_REF_PVTPLL_CCI_EN_SHIFT)      /* 0x00001000 */
/* SOFTRST_CON01 */
#define CCICRU_SOFTRST_CON01_OFFSET                        (0xA04U)
#define CCICRU_SOFTRST_CON01_ARESETN_CPE_SHIFT             (12U)
#define CCICRU_SOFTRST_CON01_ARESETN_CPE_MASK              (0x1U << CCICRU_SOFTRST_CON01_ARESETN_CPE_SHIFT)             /* 0x00001000 */
#define CCICRU_SOFTRST_CON01_PRESETN_CCI_BIU_SHIFT         (13U)
#define CCICRU_SOFTRST_CON01_PRESETN_CCI_BIU_MASK          (0x1U << CCICRU_SOFTRST_CON01_PRESETN_CCI_BIU_SHIFT)         /* 0x00002000 */
#define CCICRU_SOFTRST_CON01_ARESETN_CCI_BIU_SHIFT         (14U)
#define CCICRU_SOFTRST_CON01_ARESETN_CCI_BIU_MASK          (0x1U << CCICRU_SOFTRST_CON01_ARESETN_CCI_BIU_SHIFT)         /* 0x00004000 */
#define CCICRU_SOFTRST_CON01_PRESETN_DBG_M_SHIFT           (15U)
#define CCICRU_SOFTRST_CON01_PRESETN_DBG_M_MASK            (0x1U << CCICRU_SOFTRST_CON01_PRESETN_DBG_M_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON02 */
#define CCICRU_SOFTRST_CON02_OFFSET                        (0xA08U)
#define CCICRU_SOFTRST_CON02_PRESETN_DBG_SYS_SHIFT         (0U)
#define CCICRU_SOFTRST_CON02_PRESETN_DBG_SYS_MASK          (0x1U << CCICRU_SOFTRST_CON02_PRESETN_DBG_SYS_SHIFT)         /* 0x00000001 */
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_GRF_SHIFT         (1U)
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_GRF_MASK          (0x1U << CCICRU_SOFTRST_CON02_PRESETN_CCI_GRF_SHIFT)         /* 0x00000002 */
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_CRU_SHIFT         (2U)
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_CRU_MASK          (0x1U << CCICRU_SOFTRST_CON02_PRESETN_CCI_CRU_SHIFT)         /* 0x00000004 */
#define CCICRU_SOFTRST_CON02_ARESETN_CCI_SHIFT             (3U)
#define CCICRU_SOFTRST_CON02_ARESETN_CCI_MASK              (0x1U << CCICRU_SOFTRST_CON02_ARESETN_CCI_SHIFT)             /* 0x00000008 */
#define CCICRU_SOFTRST_CON02_PORESETN_JTAG_SHIFT           (4U)
#define CCICRU_SOFTRST_CON02_PORESETN_JTAG_MASK            (0x1U << CCICRU_SOFTRST_CON02_PORESETN_JTAG_SHIFT)           /* 0x00000010 */
#define CCICRU_SOFTRST_CON02_ARESETN_CCI_DDRSCH_BIU_SHIFT  (5U)
#define CCICRU_SOFTRST_CON02_ARESETN_CCI_DDRSCH_BIU_MASK   (0x1U << CCICRU_SOFTRST_CON02_ARESETN_CCI_DDRSCH_BIU_SHIFT)  /* 0x00000020 */
#define CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A72_SHIFT  (6U)
#define CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A72_MASK   (0x1U << CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A72_SHIFT)  /* 0x00000040 */
#define CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A53_SHIFT  (7U)
#define CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A53_MASK   (0x1U << CCICRU_SOFTRST_CON02_ARESETN_ADB400_CCI_A53_SHIFT)  /* 0x00000080 */
#define CCICRU_SOFTRST_CON02_PRESETN_PVTPLL_CCI_SHIFT      (8U)
#define CCICRU_SOFTRST_CON02_PRESETN_PVTPLL_CCI_MASK       (0x1U << CCICRU_SOFTRST_CON02_PRESETN_PVTPLL_CCI_SHIFT)      /* 0x00000100 */
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_DDRSCH_BIU_SHIFT  (10U)
#define CCICRU_SOFTRST_CON02_PRESETN_CCI_DDRSCH_BIU_MASK   (0x1U << CCICRU_SOFTRST_CON02_PRESETN_CCI_DDRSCH_BIU_SHIFT)  /* 0x00000400 */
#define CCICRU_SOFTRST_CON02_PRESETN_DBG_M_BIU_SHIFT       (11U)
#define CCICRU_SOFTRST_CON02_PRESETN_DBG_M_BIU_MASK        (0x1U << CCICRU_SOFTRST_CON02_PRESETN_DBG_M_BIU_SHIFT)       /* 0x00000800 */
#define CCICRU_SOFTRST_CON02_RESETN_REF_CCI_PVTPLL_SHIFT   (12U)
#define CCICRU_SOFTRST_CON02_RESETN_REF_CCI_PVTPLL_MASK    (0x1U << CCICRU_SOFTRST_CON02_RESETN_REF_CCI_PVTPLL_SHIFT)   /* 0x00001000 */
/* AUTOCS_CTRL_BIGCORE_EXTRA_CCI */
#define CCICRU_AUTOCS_CTRL_BIGCORE_EXTRA_CCI_OFFSET        (0xC50U)
#define CCICRU_AUTOCS_CTRL_BIGCORE_EXTRA_CCI_AUTOCS_CCI2BIGCORE_CTRL_SHIFT (0U)
#define CCICRU_AUTOCS_CTRL_BIGCORE_EXTRA_CCI_AUTOCS_CCI2BIGCORE_CTRL_MASK (0xFFFFU << CCICRU_AUTOCS_CTRL_BIGCORE_EXTRA_CCI_AUTOCS_CCI2BIGCORE_CTRL_SHIFT) /* 0x0000FFFF */
/* AUTOCS_CTRL_LITCORE_EXTRA_CCI */
#define CCICRU_AUTOCS_CTRL_LITCORE_EXTRA_CCI_OFFSET        (0xC54U)
#define CCICRU_AUTOCS_CTRL_LITCORE_EXTRA_CCI_AUTOCS_CCI2LITCORE_CTRL_SHIFT (0U)
#define CCICRU_AUTOCS_CTRL_LITCORE_EXTRA_CCI_AUTOCS_CCI2LITCORE_CTRL_MASK (0xFFFFU << CCICRU_AUTOCS_CTRL_LITCORE_EXTRA_CCI_AUTOCS_CCI2LITCORE_CTRL_SHIFT) /* 0x0000FFFF */
/* AUTOCS_CTRL_CCI2CORE */
#define CCICRU_AUTOCS_CTRL_CCI2CORE_OFFSET                 (0xC58U)
#define CCICRU_AUTOCS_CTRL_CCI2CORE_AUTOCS_CCI2LITCORE_CTRL_SHIFT (0U)
#define CCICRU_AUTOCS_CTRL_CCI2CORE_AUTOCS_CCI2LITCORE_CTRL_MASK (0xFFFFU << CCICRU_AUTOCS_CTRL_CCI2CORE_AUTOCS_CCI2LITCORE_CTRL_SHIFT) /* 0x0000FFFF */
/* AUTOCS_ACLK_CCI_ROOT_CON0 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_OFFSET            (0xD00U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_DIV_SHIFT  (0U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_DIV_MASK   (0x7U << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_DIV_SHIFT)  /* 0x00000007 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_GATE_SHIFT (3U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_GATE_MASK  (0x1U << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_AUTOCS_GATE_SHIFT) /* 0x00000008 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_IDLE_TH_SHIFT     (4U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_IDLE_TH_MASK      (0xFFFU << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_IDLE_TH_SHIFT)   /* 0x0000FFF0 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_WAIT_TH_SHIFT     (16U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_WAIT_TH_MASK      (0xFFFFU << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON0_WAIT_TH_SHIFT)  /* 0xFFFF0000 */
/* AUTOCS_ACLK_CCI_ROOT_CON1 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_OFFSET            (0xD04U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT (0U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_ACTIVE_MASK (0x7FFU << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_ACTIVE_SHIFT) /* 0x000007FF */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_EN_SHIFT   (12U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_EN_MASK    (0x1U << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_AUTOCS_EN_SHIFT)   /* 0x00001000 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_SWITCH_EN_SHIFT   (13U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_SWITCH_EN_MASK    (0x1U << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_SWITCH_EN_SHIFT)   /* 0x00002000 */
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_CLKSEL_CFG_SHIFT  (14U)
#define CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_CLKSEL_CFG_MASK   (0x3U << CCICRU_AUTOCS_ACLK_CCI_ROOT_CON1_CLKSEL_CFG_SHIFT)  /* 0x0000C000 */
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
