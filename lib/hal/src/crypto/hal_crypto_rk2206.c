/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup CRYPTO
 *  @{
 */

/** @defgroup CRYPTO_How_To_Use How To Use
 *  @{

 The CRYPTO driver can be used as follows:

 @} */

#include "hal_base.h"

#if defined(RKMCU_RK2206) && defined(HAL_CRYPTO_MODULE_ENABLED)

/********************* Private MACRO Definition ******************************/
#define _SBF(s, v) ((v) << (s))

#ifndef ROUNDUP
#define ROUNDUP(x, y)   ((((x) + (y) - 1) / (y)) * (y))
#define ROUNDDOWN(x, y) (((x) / (y)) * (y))
#endif

#define CRYPTO_CLEAR_REGS(regs) do {           \
    uint32_t i;                                \
    for (i = 0; i < HAL_ARRAY_SIZE(regs); i++) \
        CLEAR_REG(regs[i]);                    \
} while(0)

#define CRYPTO_WRITE_MASK_ALL (0xffffu)

/* CLK_CTL */
#define CRYPTO_AUTO_CLKGATE_EN HAL_BIT(CRYPTO_CLK_CTL_AUTO_CLKGATE_EN_SHIFT)

/* RST_CTL */
#define CRYPTO_SW_PKA_RESET HAL_BIT(CRYPTO_RST_CTL_SW_PKA_RESET_SHIFT)
#define CRYPTO_SW_RNG_RESET HAL_BIT(CRYPTO_RST_CTL_SW_RNG_RESET_SHIFT)
#define CRYPTO_SW_CC_RESET  HAL_BIT(CRYPTO_RST_CTL_SW_CC_RESET_SHIFT)

/* DMA_INT_EN */
#define CRYPTO_ZERO_ERR_INT_EN  HAL_BIT(CRYPTO_DMA_INT_EN_ZERO_LEN_INT_EN_SHIFT)
#define CRYPTO_LIST_ERR_INT_EN  HAL_BIT(CRYPTO_DMA_INT_EN_LIST_ERR_INT_EN_SHIFT)
#define CRYPTO_SRC_ERR_INT_EN   HAL_BIT(CRYPTO_DMA_INT_EN_SRC_ERR_INT_EN_SHIFT)
#define CRYPTO_DST_ERR_INT_EN   HAL_BIT(CRYPTO_DMA_INT_EN_DST_ERR_INT_EN_SHIFT)
#define CRYPTO_SRC_ITEM_INT_EN  HAL_BIT(CRYPTO_DMA_INT_EN_SRC_ITEM_DONE_INT_EN_SHIFT)
#define CRYPTO_DST_ITEM_INT_EN  HAL_BIT(CRYPTO_DMA_INT_EN_DST_ITEM_DONE_INT_EN_SHIFT)
#define CRYPTO_LIST_DONE_INT_EN HAL_BIT(CRYPTO_DMA_INT_EN_LIST_DONE_INT_EN_SHIFT)

/* DMA_INT_ST */
#define CRYPTO_ZERO_LEN_INT_ST      HAL_BIT(CRYPTO_DMA_INT_ST_ZERO_LEN_SHIFT)
#define CRYPTO_LIST_ERR_INT_ST      HAL_BIT(CRYPTO_DMA_INT_ST_LIST_ERR_SHIFT)
#define CRYPTO_SRC_ERR_INT_ST       HAL_BIT(CRYPTO_DMA_INT_ST_SRC_ERR_SHIFT)
#define CRYPTO_DST_ERR_INT_ST       HAL_BIT(CRYPTO_DMA_INT_ST_DST_ERR_SHIFT)
#define CRYPTO_SRC_ITEM_DONE_INT_ST HAL_BIT(CRYPTO_DMA_INT_ST_SRC_ITEM_DONE_SHIFT)
#define CRYPTO_DST_ITEM_DONE_INT_ST HAL_BIT(CRYPTO_DMA_INT_ST_DST_ITEM_DONE_SHIFT)
#define CRYPTO_LIST_DONE_INT_ST     HAL_BIT(CRYPTO_DMA_INT_ST_LIST_DONE_SHIFT)

/* DMA_CTL */
#define CRYPTO_DMA_RESTART HAL_BIT(CRYPTO_DMA_CTL_DMA_RESTART_SHIFT)
#define CRYPTO_DMA_START   HAL_BIT(CRYPTO_DMA_CTL_DMA_START_SHIFT)

/* DMA_ST */
#define CRYPTO_DMA_BUSY HAL_BIT(CRYPTO_DMA_ST_DMA_BUSY_SHIFT)

/* DMA_STATE */
#define CRYPTO_LLI_IDLE_STATE  _SBF(CRYPTO_DMA_STATE_DMA_LLI_STATE_SHIFT, 0x00)
#define CRYPTO_LLI_FETCH_STATE _SBF(CRYPTO_DMA_STATE_DMA_LLI_STATE_SHIFT, 0x01)
#define CRYPTO_LLI_WORK_STATE  _SBF(CRYPTO_DMA_STATE_DMA_LLI_STATE_SHIFT, 0x02)
#define CRYPTO_SRC_IDLE_STATE  _SBF(CRYPTO_DMA_STATE_DMA_SRC_STATE_SHIFT, 0x00)
#define CRYPTO_SRC_LOAD_STATE  _SBF(CRYPTO_DMA_STATE_DMA_SRC_STATE_SHIFT, 0x01)
#define CRYPTO_SRC_WORK_STATE  _SBF(CRYPTO_DMA_STATE_DMA_SRC_STATE_SHIFT, 0x02)
#define CRYPTO_DST_IDLE_STATE  _SBF(CRYPTO_DMA_STATE_DMA_DST_STATE_SHIFT, 0x00)
#define CRYPTO_DST_LOAD_STATE  _SBF(CRYPTO_DMA_STATE_DMA_DST_STATE_SHIFT, 0x01)
#define CRYPTO_DST_WORK_STATE  _SBF(CRYPTO_DMA_STATE_DMA_DST_STATE_SHIFT, 0x02)

/* FIFO_CTL */
#define CRYPTO_DOUT_BYTESWAP HAL_BIT(CRYPTO_FIFO_CTL_DOUT_BYTESWAP_SHIFT)
#define CRYPTO_DOIN_BYTESWAP HAL_BIT(CRYPTO_FIFO_CTL_DIN_BYTESWAP_SHIFT)

/* BC_CTL */
#define CRYPTO_BC_AES         _SBF(CRYPTO_BC_CTL_BC_CIPHER_SEL_SHIFT, 0x00)
#define CRYPTO_BC_DES         _SBF(CRYPTO_BC_CTL_BC_CIPHER_SEL_SHIFT, 0x02)
#define CRYPTO_BC_TDES        _SBF(CRYPTO_BC_CTL_BC_CIPHER_SEL_SHIFT, 0x03)
#define CRYPTO_BC_ECB         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x00)
#define CRYPTO_BC_CBC         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x01)
#define CRYPTO_BC_CTS         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x02)
#define CRYPTO_BC_CTR         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x03)
#define CRYPTO_BC_CFB         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x04)
#define CRYPTO_BC_OFB         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x05)
#define CRYPTO_BC_XTS         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x06)
#define CRYPTO_BC_CCM         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x07)
#define CRYPTO_BC_GCM         _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x08)
#define CRYPTO_BC_CMAC        _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x09)
#define CRYPTO_BC_CBC_MAC     _SBF(CRYPTO_BC_CTL_MODE_SHIFT, 0x0A)
#define CRYPTO_BC_128_bit_key _SBF(CRYPTO_BC_CTL_KEY_SIZE_SHIFT, 0x00)
#define CRYPTO_BC_192_bit_key _SBF(CRYPTO_BC_CTL_KEY_SIZE_SHIFT, 0x01)
#define CRYPTO_BC_256_bit_key _SBF(CRYPTO_BC_CTL_KEY_SIZE_SHIFT, 0x02)
#define CRYPTO_BC_DECRYPT     HAL_BIT(CRYPTO_BC_CTL_DECRYPT_SHIFT)
#define CRYPTO_BC_ENABLE      HAL_BIT(CRYPTO_BC_CTL_BC_ENABLE_SHIFT)

/* HASH_CTL */
#define CRYPTO_SHA1          _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x00)
#define CRYPTO_MD5           _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x01)
#define CRYPTO_SHA256        _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x02)
#define CRYPTO_SHA224        _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x03)
#define CRYPTO_SHA512        _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x08)
#define CRYPTO_SHA384        _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x09)
#define CRYPTO_SHA512_224    _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x0A)
#define CRYPTO_SHA512_256    _SBF(CRYPTO_HASH_CTL_HASH_CIPHER_SEL_SHIFT, 0x0B)
#define CRYPTO_HMAC_ENABLE   HAL_BIT(CRYPTO_HASH_CTL_HMAC_ENABLE_SHIFT)
#define CRYPTO_HW_PAD_ENABLE HAL_BIT(CRYPTO_HASH_CTL_HW_PAD_ENABLE_SHIFT)
#define CRYPTO_HASH_SRC_SEL  HAL_BIT(CRYPTO_HASH_CTL_HASH_SRC_SEL_SHIFT)
#define CRYPTO_HASH_ENABLE   HAL_BIT(CRYPTO_HASH_CTL_HASH_ENABLE_SHIFT)

/* CIPHER_ST */
#define CRYPTO_OTP_KEY_VALID     HAL_BIT(CRYPTO_CIPHER_ST_OTP_KEY_VALID_SHIFT)
#define CRYPTO_HASH_BUSY         HAL_BIT(CRYPTO_CIPHER_ST_HASH_BUSY_SHIFT)
#define CRYPTO_BLOCK_CIPHER_BUSY HAL_BIT(CRYPTO_CIPHER_ST_BLOCK_CIPHER_BUSY_SHIFT)

/* CIPHER_STATE */
#define CRYPTO_HASH_IDLE_STATE     _SBF(CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT, 0x01)
#define CRYPTO_HASH_IPAD_STATE     _SBF(CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT, 0x02)
#define CRYPTO_HASH_TEXT_STATE     _SBF(CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT, 0x04)
#define CRYPTO_HASH_OPAD_STATE     _SBF(CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT, 0x08)
#define CRYPTO_HASH_OPAD_EXT_STATE _SBF(CRYPTO_CIPHER_STATE_HASH_STATE_SHIFT, 0x10)
#define CRYPTO_GCM_IDLE_STATE      _SBF(CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT, 0x00)
#define CRYPTO_GCM_PRE_STATE       _SBF(CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT, 0x01)
#define CRYPTO_GCM_NA_STATE        _SBF(CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT, 0x02)
#define CRYPTO_GCM_PC_STATE        _SBF(CRYPTO_CIPHER_STATE_GCM_STATE_SHIFT, 0x03)
#define CRYPTO_CCM_IDLE_STATE      _SBF(CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT, 0x00)
#define CRYPTO_CCM_PRE_STATE       _SBF(CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT, 0x01)
#define CRYPTO_CCM_NA_STATE        _SBF(CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT, 0x02)
#define CRYPTO_CCM_PC_STATE        _SBF(CRYPTO_CIPHER_STATE_CCM_STATE_SHIFT, 0x03)
#define CRYPTO_PARALLEL_IDLE_STATE _SBF(CRYPTO_CIPHER_STATE_PARALLEL_STATE_SHIFT, 0x00)
#define CRYPTO_PARALLEL_PRE_STATE  _SBF(CRYPTO_CIPHER_STATE_PARALLEL_STATE_SHIFT, 0x01)
#define CRYPTO_PARALLEL_BULK_STATE _SBF(CRYPTO_CIPHER_STATE_PARALLEL_STATE_SHIFT, 0x02)
#define CRYPTO_MAC_IDLE_STATE      _SBF(CRYPTO_CIPHER_STATE_MAC_STATE_SHIFT, 0x00)
#define CRYPTO_MAC_PRE_STATE       _SBF(CRYPTO_CIPHER_STATE_MAC_STATE_SHIFT, 0x01)
#define CRYPTO_MAC_BULK_STATE      _SBF(CRYPTO_CIPHER_STATE_MAC_STATE_SHIFT, 0x02)
#define CRYPTO_SERIAL_IDLE_STATE   _SBF(CRYPTO_CIPHER_STATE_SERIAL_STATE_SHIFT, 0x00)
#define CRYPTO_SERIAL_PRE_STATE    _SBF(CRYPTO_CIPHER_STATE_SERIAL_STATE_SHIFT, 0x01)
#define CRYPTO_SERIAL_BULK_STATE   _SBF(CRYPTO_CIPHER_STATE_SERIAL_STATE_SHIFT, 0x02)

/* TAG_VALID */
#define CRYPTO_CH7_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH7_TAG_VALID_SHIFT)
#define CRYPTO_CH6_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH6_TAG_VALID_SHIFT)
#define CRYPTO_CH5_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH5_TAG_VALID_SHIFT)
#define CRYPTO_CH4_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH4_TAG_VALID_SHIFT)
#define CRYPTO_CH3_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH3_TAG_VALID_SHIFT)
#define CRYPTO_CH2_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH2_TAG_VALID_SHIFT)
#define CRYPTO_CH1_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH1_TAG_VALID_SHIFT)
#define CRYPTO_CH0_TAG_VALID HAL_BIT(CRYPTO_TAG_VALID_CH0_TAG_VALID_SHIFT)

/* HASH_VALID */
#define CRYPTO_HASH_IS_VALID HAL_BIT(CRYPTO_HASH_VALID_HASH_VALID_SHIFT)

/* RNG_CTL */
#define CRYPTO_RNG_64_bit_len        _SBF(CRYPTO_RNG_CTL_RNG_LEN_SHIFT, 0x00)
#define CRYPTO_RNG_128_bit_len       _SBF(CRYPTO_RNG_CTL_RNG_LEN_SHIFT, 0x01)
#define CRYPTO_RNG_192_bit_len       _SBF(CRYPTO_RNG_CTL_RNG_LEN_SHIFT, 0x02)
#define CRYPTO_RNG_256_bit_len       _SBF(CRYPTO_RNG_CTL_RNG_LEN_SHIFT, 0x03)
#define CRYPTO_RNG_FATESY_SOC_RING   _SBF(CRYPTO_RNG_CTL_RING_SEL_SHIFT, 0x00)
#define CRYPTO_RNG_SLOWER_SOC_RING_0 _SBF(CRYPTO_RNG_CTL_RING_SEL_SHIFT, 0x01)
#define CRYPTO_RNG_SLOWER_SOC_RING_1 _SBF(CRYPTO_RNG_CTL_RING_SEL_SHIFT, 0x02)
#define CRYPTO_RNG_SLOWEST_SOC_RING  _SBF(CRYPTO_RNG_CTL_RING_SEL_SHIFT, 0x03)
#define CRYPTO_RNG_ENABLE            HAL_BIT(CRYPTO_RNG_CTL_RNG_ENABLE_SHIFT)
#define CRYPTO_RNG_START             HAL_BIT(CRYPTO_RNG_CTL_RNG_START_SHIFT)

/* RAM_CTL */
#define CRYPTO_RAM_PKA_RDY HAL_BIT(CRYPTO_RAM_CTL_RAM_PKA_RDY_SHIFT)

/* RAM_ST */
#define CRYPTO_CLK_RAM_RDY HAL_BIT(CRYPTO_RAM_ST_CLK_RAM_RDY_SHIFT)

/* DEBUG_CTL */
#define CRYPTO_DEBUG_MODE HAL_BIT(CRYPTO_DEBUG_CTL_PKA_DEBUG_MODE_SHIFT)

/* DEBUG_ST */
#define CRYPTO_PKA_DEBUG_CLK_EN HAL_BIT(CRYPTO_DEBUG_ST_PKA_DEBUG_CLK_EN_SHIFT)

/* PKA_STATUS */
#define CRYPTO_PKA_PIPE_IS_RDY    HAL_BIT(CRYPTO_PKA_STATUS_PIPE_IS_BUSY_SHIFT)
#define CRYPTO_PKA_BUSY           HAL_BIT(CRYPTO_PKA_STATUS_PKA_BUSY_SHIFT)
#define CRYPTO_PKA_ALU_OUT_ZERO   HAL_BIT(CRYPTO_PKA_STATUS_ALU_OUT_ZERO_SHIFT)
#define CRYPTO_PKA_ALU_MODOVRFLW  HAL_BIT(CRYPTO_PKA_STATUS_ALU_MOD_OVFLW_SHIFT)
#define CRYPTO_PKA_DIV_BY_ZERO    HAL_BIT(CRYPTO_PKA_STATUS_DIV_BY_ZERO_SHIFT)
#define CRYPTO_PKA_ALU_CARRY      HAL_BIT(CRYPTO_PKA_STATUS_ALU_CARRY_SHIFT)
#define CRYPTO_PKA_ALU_SIGN_OUT   HAL_BIT(CRYPTO_PKA_STATUS_ALU_SIGN_OUT_SHIFT)
#define CRYPTO_PKA_MODINV_OF_ZERO HAL_BIT(CRYPTO_PKA_STATUS_MODINV_OF_ZERO_SHIFT)
#define CRYPTO_PKA_CPU_BUSY       HAL_BIT(CRYPTO_PKA_STATUS_PKA_CPU_BUSY_SHIFT)

#define LLI_DMA_CTRL_LAST      HAL_BIT(0)
#define LLI_DMA_CTRL_PAUSE     HAL_BIT(1)
#define LLI_DMA_CTRL_LIST_DONE HAL_BIT(8)
#define LLI_DMA_CTRL_DST_DONE  HAL_BIT(9)
#define LLI_DMA_CTRL_SRC_DONE  HAL_BIT(10)

#define LLI_USER_DEFINE_CIPHER_START HAL_BIT(0)
#define LLI_USER_DEFINE_STRING_START HAL_BIT(1)
#define LLI_USER_DEFINE_STRING_LAST  HAL_BIT(2)
#define LLI_USER_DEFINE_STRING_ATTR  HAL_BIT(3)
#define LLI_USER_DEFINE_PRIVACY_SEL  HAL_BIT(7)
#define LLI_USER_DEFINE_ROOTKEY_SEL  HAL_BIT(8)

#define RK_CRYPTO_KEY_ROOT    0x00010000
#define RK_CRYPTO_KEY_PRIVATE 0x00020000
#define RK_CRYPTO_MODE_MASK   0x0000ffff
#define RK_AES_HASH_RX        0
#define RK_AES_HASH_TX        1

#define LLI_ADDR_ALIGN_SIZE  8
#define DATA_ADDR_ALIGN_SIZE 8

#define RK_GET_CRYPTO_MODE(mode)           (mode&RK_CRYPTO_MODE_MASK)
#define RK_IS_CRYPTO_USE_ROOT_KEY(mode)    (!!(mode&RK_CRYPTO_KEY_ROOT))
#define RK_IS_CRYPTO_USE_PRIVATE_KEY(mode) (!!(mode&RK_CRYPTO_KEY_PRIVATE))

#define IS_NEED_TAG(crypto_mode) (crypto_mode == CRYPTO_MODE_CCM ||  \
                                  crypto_mode == CRYPTO_MODE_GCM ||  \
                                  crypto_mode == CRYPTO_MODE_CMAC || \
                                  crypto_mode == RK_CIPHER_CBC_MAC)

#define IS_DES_SUPPORTED_MODE(crypto_mode)                                 \
                                 (crypto_mode == CRYPTO_MODE_CIPHER_ECB || \
                                  crypto_mode == CRYPTO_MODE_CIPHER_CBC || \
                                  crypto_mode == CRYPTO_MODE_CIPHER_CFB || \
                                  crypto_mode == CRYPTO_MODE_CIPHER_OFB)

/********************* Private Structure Definition **************************/
enum endian_mode {
    BIG_ENDIAN = 0,
    LITTLE_ENDIAN
};

struct CRYPTO_LLI_DESC {
    uint32_t srcAddr;
    uint32_t srcLen;
    uint32_t dstAddr;
    uint32_t dstLen;
    uint32_t userDefine;
    uint32_t reserve;
    uint32_t dmaCtrl;
    uint32_t nextAddr;
};

struct CRYPTO_V2_PRIV_DATA {
    struct CRYPTO_LLI_DESC lliDesc;
    uint32_t cipherStart;
    uint32_t chn;
    uint32_t algo;
    uint32_t mode;
    uint32_t exp_IntStatus;
    uint32_t reg_IntStatus;
    uint32_t reserve[2];
};

typedef HAL_Status (*P_INIT_FUNC)(uint32_t, uint32_t, void *);
typedef HAL_Status (*P_DEINIT_FUNC)(void);

/********************* Private Variable Definition ***************************/
static HAL_Status CRYPTO_DesInit(uint32_t chn, uint32_t mode, void *pInfo);
static HAL_Status CRYPTO_AesInit(uint32_t chn, uint32_t mode, void *pInfo);
static HAL_Status CRYPTO_HashInit(uint32_t chn, uint32_t mode, void *pInfo);
static HAL_Status CRYPTO_HmacInit(uint32_t chn, uint32_t mode, void *pInfo);
static HAL_Status CRYPTO_AesHashInit(uint32_t chn, uint32_t mode, void *pInfo);

static HAL_Status CRYPTO_CipherDeinit(void);
static HAL_Status CRYPTO_HashDeinit(void);
static HAL_Status CRYPTO_AesHashDeinit(void);

static const uint32_t gs_HashMode2BcMode[CRYPTO_MODE_HASH_MAX] = {
    CRYPTO_MD5, CRYPTO_SHA1, CRYPTO_SHA224, CRYPTO_SHA256,
    CRYPTO_SHA384, CRYPTO_SHA512, CRYPTO_SHA512_224, CRYPTO_SHA512_256
};

static const uint32_t gs_HmacMode2BcMode[CRYPTO_MODE_HMAC_MAX] = {
    CRYPTO_MD5, CRYPTO_SHA1, CRYPTO_SHA256, CRYPTO_SHA512
};

static const uint32_t gs_HashLenTab[CRYPTO_MODE_HASH_MAX] = {
    RK_HASH_MD5_SIZE,
    RK_HASH_SHA1_SIZE,
    RK_HASH_SHA224_SIZE,
    RK_HASH_SHA256_SIZE,
    RK_HASH_SHA384_SIZE,
    RK_HASH_SHA512_SIZE,
    RK_HASH_SHA512_224_SIZE,
    RK_HASH_SHA512_256_SIZE
};

static const P_INIT_FUNC gs_CryptoInitFuncs[CRYPTO_ALGO_MAX] = {
    CRYPTO_AesInit, CRYPTO_DesInit, CRYPTO_DesInit,
    CRYPTO_HashInit, CRYPTO_HmacInit, CRYPTO_AesHashInit
};

static const P_DEINIT_FUNC gs_CryptoDeinitFuncs[CRYPTO_ALGO_MAX] = {
    CRYPTO_CipherDeinit, CRYPTO_CipherDeinit, CRYPTO_CipherDeinit,
    CRYPTO_HashDeinit, CRYPTO_HashDeinit, CRYPTO_AesHashDeinit
};

/********************* Private Function Definition ***************************/

static uint32_t Byte2Word(const uint8_t *ch, uint32_t endian)
{
    uint32_t w = 0;

    /* 0: Big-Endian 1: Little-Endian */
    if (endian == BIG_ENDIAN)
        w = (*ch << 24) + (*(ch + 1) << 16) +
            (*(ch + 2) << 8) + *(ch + 3);
    else if (endian == LITTLE_ENDIAN)
        w = (*(ch + 3) << 24) + (*(ch + 2) << 16) +
            (*(ch + 1) << 8) + *ch;

    return w;
}

static void Word2Byte(uint32_t word, uint8_t *ch, uint32_t endian)
{
    /* 0: Big-Endian 1: Little-Endian */
    if (endian == BIG_ENDIAN) {
        ch[0] = (word >> 24) & 0xff;
        ch[1] = (word >> 16) & 0xff;
        ch[2] = (word >> 8) & 0xff;
        ch[3] = (word >> 0) & 0xff;
    } else if (endian == LITTLE_ENDIAN) {
        ch[0] = (word >> 0) & 0xff;
        ch[1] = (word >> 8) & 0xff;
        ch[2] = (word >> 16) & 0xff;
        ch[3] = (word >> 24) & 0xff;
    } else {
        ch[0] = 0;
        ch[1] = 0;
        ch[2] = 0;
        ch[3] = 0;
    }
}

static inline void CRYPTO_WriteKey(uint32_t keyChn, const uint8_t *key,
                                   uint32_t keyLen)
{
    uint8_t tmpBuf[4] = { 0, 0, 0, 0 };
    uint32_t i, j, k;

    for (i = 0; i < keyLen / 4; i++)
        WRITE_REG(CRYPTO->CHN_KEY[i], Byte2Word(key + i * 4, BIG_ENDIAN));

    k = keyLen % 4;
    if (k) {
        for (j = 0; j < k; j++)
            tmpBuf[j] = key[i * 4 + j];

        WRITE_REG(CRYPTO->CHN_KEY[i], Byte2Word(tmpBuf, BIG_ENDIAN));
    }
}

static HAL_Status CRYPTO_DesInit(uint32_t chn, uint32_t mode, void *pInfo)
{
    ///TODO:
    return HAL_NOSYS;
}

static HAL_Status CRYPTO_AesInit(uint32_t chn, uint32_t mode, void *pInfo)
{
    ///TODO:
    return HAL_NOSYS;
}

static HAL_Status CRYPTO_HashInit(uint32_t chn, uint32_t mode, void *pInfo)
{
    uint32_t regCtrl = 0;

    HAL_ASSERT(mode < CRYPTO_MODE_HASH_MAX);

    regCtrl = gs_HashMode2BcMode[mode];
    regCtrl |= (CRYPTO_HASH_ENABLE | CRYPTO_HW_PAD_ENABLE);

    CRYPTO_CLEAR_REGS(CRYPTO->HASH_DOUT);

    /* din_swap set 1, dout_swap set 1, default 1. */
    WRITE_REG_MASK_WE(CRYPTO->FIFO_CTL,
                      CRYPTO_FIFO_CTL_DIN_BYTESWAP_MASK |
                      CRYPTO_FIFO_CTL_DOUT_BYTESWAP_MASK,
                      CRYPTO_DOIN_BYTESWAP | CRYPTO_DOUT_BYTESWAP);

    /* dma int is actually ctrled by lli*/
    WRITE_REG(CRYPTO->DMA_INT_EN, CRYPTO_SRC_ITEM_INT_EN);
    WRITE_REG_MASK_WE(CRYPTO->HASH_CTL, CRYPTO_WRITE_MASK_ALL, regCtrl);

    return HAL_OK;
}

static HAL_Status CRYPTO_HmacInit(uint32_t chn, uint32_t mode, void *pInfo)
{
    struct CRYPTO_INFO_HMAC *pHmac = (struct CRYPTO_INFO_HMAC *)pInfo;
    uint32_t regCtrl = 0;

    HAL_ASSERT(mode < CRYPTO_MODE_HMAC_MAX);

    regCtrl = gs_HmacMode2BcMode[mode];
    regCtrl |= CRYPTO_HMAC_ENABLE;
    regCtrl |= (CRYPTO_HASH_ENABLE | CRYPTO_HW_PAD_ENABLE);

    CRYPTO_CLEAR_REGS(CRYPTO->HASH_DOUT);
    CRYPTO_CLEAR_REGS(CRYPTO->CHN_KEY);

    CRYPTO_WriteKey(chn, pHmac->key, pHmac->keyLen);

    /* din_swap set 1, dout_swap set 1, default 1. */
    WRITE_REG_MASK_WE(CRYPTO->FIFO_CTL,
                      CRYPTO_FIFO_CTL_DIN_BYTESWAP_MASK |
                      CRYPTO_FIFO_CTL_DOUT_BYTESWAP_MASK,
                      CRYPTO_DOIN_BYTESWAP | CRYPTO_DOUT_BYTESWAP);

    /* dma int is actually ctrled by lli*/
    WRITE_REG(CRYPTO->DMA_INT_EN, CRYPTO_SRC_ITEM_INT_EN);
    WRITE_REG_MASK_WE(CRYPTO->HASH_CTL, CRYPTO_WRITE_MASK_ALL, regCtrl);

    return HAL_OK;
}

static HAL_Status CRYPTO_AesHashInit(uint32_t chn, uint32_t mode, void *pInfo)
{
    ///TODO:
    return HAL_NOSYS;
}

static HAL_Status CRYPTO_CipherDeinit(void)
{
    ///TODO:
    return HAL_NOSYS;
}

static HAL_Status CRYPTO_HashDeinit(void)
{
    WRITE_REG_MASK_WE(CRYPTO->HASH_CTL, CRYPTO_WRITE_MASK_ALL, 0);
    CLEAR_REG(CRYPTO->DMA_INT_EN);

    return HAL_OK;
}

static HAL_Status CRYPTO_AesHashDeinit(void)
{
    ///TODO:
    return HAL_NOSYS;
}

/********************* Public Function Definition ***************************/

/** @defgroup CRYPTO_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

HAL_Status HAL_CRYPTO_Init(struct CRYPTO_DEV *pCrypto)
{
    HAL_ASSERT(pCrypto);

    pCrypto->privDataSize = sizeof(struct CRYPTO_V2_PRIV_DATA);
    pCrypto->privAlign = LLI_ADDR_ALIGN_SIZE;
    pCrypto->dataAlign = DATA_ADDR_ALIGN_SIZE;

    return HAL_OK;
}

HAL_Status HAL_CRYPTO_DeInit(struct CRYPTO_DEV *pCrypto)
{
    HAL_ASSERT(pCrypto);

    return HAL_OK;
}
/** @} */

/** @defgroup CRYPTO_Exported_Functions_Group5 Other Functions
 *  @{
 */
HAL_Status HAL_CRYPTO_AlgoInit(struct CRYPTO_DEV *pCrypto,
                               struct CRYPTO_ALGO_CONFIG *pConfig)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;
    int ret = HAL_ERROR;

    HAL_ASSERT(pCrypto);
    HAL_ASSERT(pConfig);
    HAL_ASSERT(pConfig->algo < CRYPTO_ALGO_MAX);

    memset(pCrypto->privData, 0x00, pCrypto->privDataSize);
    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    ret = gs_CryptoInitFuncs[pConfig->algo](pConfig->chn, pConfig->mode,
                                            &pConfig->info);
    pPriv->algo = pConfig->algo;
    pPriv->mode = pConfig->mode;
    pPriv->chn = pConfig->chn;

    return ret;
}

HAL_Status HAL_CRYPTO_AlgoDeInit(struct CRYPTO_DEV *pCrypto)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;

    HAL_ASSERT(pCrypto);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    HAL_ASSERT(pPriv->algo < CRYPTO_ALGO_MAX);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    return gs_CryptoDeinitFuncs[pPriv->algo]();
}

HAL_Status HAL_CRYPTO_DMAConfig(struct CRYPTO_DEV *pCrypto,
                                struct CRYPTO_DMA_CONFIG *pConfig)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;

    HAL_ASSERT(pCrypto);
    HAL_ASSERT(pConfig);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    memset(&pPriv->lliDesc, 0x00, sizeof(pPriv->lliDesc));
    pPriv->lliDesc.srcAddr = pConfig->srcAddr;
    pPriv->lliDesc.srcLen = pConfig->srcLen;
    pPriv->lliDesc.dstAddr = pConfig->dstAddr;
    pPriv->lliDesc.dstLen = pConfig->dstLen;

    if (!pConfig->isLast)
        pPriv->lliDesc.nextAddr = (uint32_t)&pPriv->lliDesc;

    if (!pPriv->cipherStart) {
        pPriv->lliDesc.userDefine |= (LLI_USER_DEFINE_STRING_START |
                                      LLI_USER_DEFINE_CIPHER_START);
        WRITE_REG(CRYPTO->DMA_LLI_ADDR, (uint32_t)&pPriv->lliDesc);
    }

    switch (pPriv->algo) {
    case CRYPTO_ALGO_HASH:
    case CRYPTO_ALGO_HMAC:
        pPriv->exp_IntStatus = CRYPTO_SRC_ITEM_DONE_INT_ST;
        pPriv->lliDesc.dmaCtrl = LLI_DMA_CTRL_SRC_DONE;
        break;
    default:

        return HAL_ERROR;
    }

    if (pConfig->isLast) {
        pPriv->lliDesc.userDefine |= LLI_USER_DEFINE_STRING_LAST;
        pPriv->lliDesc.dmaCtrl |= LLI_DMA_CTRL_LAST;
    } else {
        pPriv->lliDesc.dmaCtrl |= LLI_DMA_CTRL_PAUSE;
    }

    return HAL_OK;
}

HAL_Status HAL_CRYPTO_DMAStart(struct CRYPTO_DEV *pCrypto)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;

    HAL_ASSERT(pCrypto);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    if (!pPriv->cipherStart) {
        pPriv->cipherStart = 1;
        WRITE_REG_MASK_WE(CRYPTO->DMA_CTL, CRYPTO_DMA_CTL_DMA_START_MASK,
                          CRYPTO_DMA_START);
    } else {
        WRITE_REG_MASK_WE(CRYPTO->DMA_CTL, CRYPTO_DMA_CTL_DMA_RESTART_MASK,
                          CRYPTO_DMA_RESTART);
    }

    return HAL_OK;
}

HAL_Check HAL_CRYPTO_CheckIntStatus(struct CRYPTO_DEV *pCrypto)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;

    HAL_ASSERT(pCrypto);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    if (pPriv->exp_IntStatus == pPriv->reg_IntStatus) {
        return HAL_TRUE;
    } else {
        return HAL_FALSE;
    }
}

HAL_Check HAL_CRYPTO_CheckHashValid(struct CRYPTO_DEV *pCrypto)
{
    HAL_ASSERT(pCrypto);

    if (HAL_IS_BIT_SET(CRYPTO->HASH_VALID, CRYPTO_HASH_VALID_HASH_VALID_MASK))
        return HAL_TRUE;
    else
        return HAL_FALSE;
}

HAL_Check HAL_CRYPTO_CheckTagValid(struct CRYPTO_DEV *pCrypto)
{
    HAL_ASSERT(pCrypto);

    if (HAL_IS_BIT_SET(CRYPTO->TAG_VALID, CRYPTO_TAG_VALID_CH0_TAG_VALID_MASK))
        return HAL_TRUE;
    else
        return HAL_FALSE;
}

HAL_Status HAL_CRYPTO_ReadHashReg(struct CRYPTO_DEV *pCrypto,
                                  uint8_t *out, uint32_t *outLen)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;
    uint32_t val;
    uint32_t i;

    HAL_ASSERT(pCrypto);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    if (!HAL_CRYPTO_CheckHashValid(pCrypto))
        return HAL_ERROR;

    for (i = 0; i < gs_HashLenTab[pPriv->mode] / 4; i++)
        Word2Byte(CRYPTO->HASH_DOUT[i], out + i * 4, BIG_ENDIAN);

    *outLen = gs_HashLenTab[pPriv->mode];

    val = READ_REG(CRYPTO->HASH_VALID);
    WRITE_REG(CRYPTO->HASH_VALID, val);

    return HAL_OK;
}

HAL_Status HAL_CRYPTO_ReadTagReg(struct CRYPTO_DEV *pCrypto,
                                 uint8_t *out, uint32_t *outLen)
{
    ///TODO:
    return HAL_NOSYS;
}

HAL_Status HAL_CRYPTO_ClearISR(struct CRYPTO_DEV *pCrypto)
{
    struct CRYPTO_V2_PRIV_DATA *pPriv;
    uint32_t val;

    HAL_ASSERT(pCrypto);

    pPriv = (struct CRYPTO_V2_PRIV_DATA *)pCrypto->privData;

    val = READ_REG(CRYPTO->DMA_INT_ST);

    WRITE_REG(CRYPTO->DMA_INT_ST, val);
    pPriv->reg_IntStatus = val;

    return HAL_OK;
}
/** @} */

#endif

/** @} */

/** @} */