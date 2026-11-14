/* LibMessageStudio (LMS) as linked into ALBW (EU/USA 0011E668-0011F320, same addresses in both).
 * Shared layout helpers for the hand-written native/refs/lms/func_*.c (not linked; see
 * native/refs/lms.md). Reference: 3dsdecomp_redpepper Library/LibMessageStudio (SM3DL's older,
 * smaller LMS: InitMessage/GetTextNum/CloseMessage/SearchBlockByName); everything here was
 * re-derived from the EU ARM code.
 *
 * Game layouts (32-bit words; pointers are game addresses, read with gp_ptr):
 *   LMS_BinaryBlock (16 bytes):  +0 data (block body = file + off + 0x10), +4 char type[4],
 *                                +8 u32 size, +0xC u16 (header word at off+8)
 *   LMS_Binary (common, 0x10):   +0 data (file), +4 u32 fileSize (file+0x12, unaligned),
 *                                +8 u8 encoding (file+0xC: 0 UTF-8, 1 UTF-16, 2 UTF-32; armcc
 *                                packs the enum into one byte), +0xA u16 numBlocks (file+0xE),
 *                                +0xC blocks (LMS_BinaryBlock[numBlocks], LMSi_Malloc'd)
 *   LMS_MessageBinary (0x20, "MsgStdBn"): +0x10 LBL1 idx, +0x14 TXT2, +0x18 ATR1, +0x1C TSY1
 *   LMS_FlowBinary    (0x1C, "MsgFlwBn"): +0x10 FLW3, +0x14 FEN1, +0x18 REF1
 *   LMS_ProjectBinary (0x40, "MsgPrjBn"): +0x10 CLB1, +0x14 CLR1, +0x18 ALB1, +0x1C ATI2,
 *       +0x20 ALI2, +0x24 TGG2, +0x28 TAG2, +0x2C TGP2, +0x30 TGL2, +0x34 SYL3, +0x38 SLB1,
 *       +0x3C CTI1
 *   (block index -1 = block absent)
 *   memory hooks: data_007166D8 = { u32 alloc(size), u32 free(ptr) } (LMS_SetMemFuncs 0011F054)
 *   label (hash) block: u32 numSlots; slots[numSlots] = {u32 count, u32 offset}; entries at
 *       offset: u8 len, char name[len], u32 value  (entry size len + 5; offsets from block body)
 *   hash: h = h * 0x492 + (signed char)c over the label, slot = h % numSlots */
#ifndef ALBW_REFS_LMS_H
#define ALBW_REFS_LMS_H
#include <stdint.h>
#include <string.h>
#include "gptr.h"

#define LMS_FLD(base, off, T) (*(T *)((char *)(base) + (off)))
static inline char *lms_p(uint32_t w) { return (char *)(uintptr_t)w; }
static inline uint32_t lms_w(const void *p) { return (uint32_t)(uintptr_t)p; }

/* body of block `idx` of binary `b` (idx must be valid) */
static inline char *lms_block(char *b, int32_t idx) {
    return lms_p(LMS_FLD(lms_p(LMS_FLD(b, 0xC, uint32_t)), (uint32_t)idx * 16u, uint32_t));
}
static inline uint32_t lms_block_size(char *b, int32_t idx) {
    return LMS_FLD(lms_p(LMS_FLD(b, 0xC, uint32_t)), (uint32_t)idx * 16u + 8u, uint32_t);
}

uint32_t func_0011F1D8(uint32_t size);
void func_0011F188(uint32_t ptr);
void func_0011F064(uint32_t bin, uint32_t magic);
int32_t func_0011F2BC(uint32_t bin, uint32_t type);
int32_t func_0011F1E8(uint32_t a, uint32_t b, int32_t n);
void func_0011F278(uint32_t dst, uint32_t src, int32_t n);
uint32_t func_0011F198(uint32_t label, uint32_t num_slots);
/* hash-label lookup shared by 0011EBA8 (message LBL1, field 0x10, missing -2) and 0011E898
 * (flow FEN1, field 0x14, missing -10): value of the entry named `label`, -1 if none */
static inline int32_t lms_label_lookup(char *bin, uint32_t field, uint32_t label, int32_t missing) {
    int32_t idx = LMS_FLD(bin, field, int32_t);
    if (idx == -1)
        return missing;
    const char *l = lms_p(label);
    uint32_t len = 0;
    while (l[len] != 0)
        len++;
    char *blk = lms_block(bin, idx);
    uint32_t slot = func_0011F198(label, LMS_FLD(blk, 0, uint32_t));
    uint32_t count = LMS_FLD(blk, 4 + slot * 8, uint32_t);
    uint32_t off = LMS_FLD(blk, 8 + slot * 8, uint32_t);
    for (uint32_t i = 0; i < count; i++) {
        blk = lms_block(bin, idx); /* re-read each iteration, as the ARM */
        uint32_t n = LMS_FLD(blk, off, uint8_t);
        if (n == len && func_0011F1E8(label, lms_w(blk + off + 1), (int32_t)n))
            return LMS_FLD(blk + off, n + 1, int32_t);
        off += n + 5;
    }
    return -1;
}

#endif
