/* USA/EU 0011F064: LMSi_AnalyzeMessageBinary(LMS_Binary *bin, const char *magic).
 *   The magic compare loop (8 iterations) has no effect: its result is discarded (as in the
 *   reference, where the check is debug-only). bin->+8 = u8 file[0xC] (encoding);
 *   bin->+0xA = u16 file[0xE] (numBlocks); bin->+0xC = numBlocks ? LMSi_Malloc(numBlocks * 16)
 *   : 0; bin->+4 = u32 file[0x12] (unaligned); blocks from file offset 0x20: data = file + off
 *   + 0x10, type = 4 bytes at off, size = u32 off+4, u16 off+8; off = (off + 0x10 + size + 0xF)
 *   & ~0xF.
 * native/game/func_0011F064.c (boot agent, stop 40) has the same semantics on i386 (it fixed the
 * lost allocation size); this version is 64-bit clean (no int->pointer casts). Confidence: high. */
#include "lms.h"

void func_0011F064(uint32_t bin_w, uint32_t magic) {
    char *bin = lms_p(bin_w);
    char *file = lms_p(LMS_FLD(bin, 0, uint32_t));
    (void)magic;
    LMS_FLD(bin, 8, uint8_t) = LMS_FLD(file, 0xC, uint8_t);
    uint16_t n = LMS_FLD(file, 0xE, uint16_t);
    LMS_FLD(bin, 0xA, uint16_t) = n;
    LMS_FLD(bin, 0xC, uint32_t) = n ? func_0011F1D8((uint32_t)n << 4) : 0;
    uint32_t fsize;
    memcpy(&fsize, file + 0x12, 4);
    LMS_FLD(bin, 4, uint32_t) = fsize;
    uint32_t off = 0x20;
    for (int32_t i = 0; i < (int32_t)LMS_FLD(bin, 0xA, uint16_t); i++) {
        file = lms_p(LMS_FLD(bin, 0, uint32_t));
        char *e = lms_p(LMS_FLD(bin, 0xC, uint32_t)) + (uint32_t)i * 16u;
        LMS_FLD(e, 0, uint32_t) = lms_w(file + off + 0x10);
        memcpy(e + 4, file + off, 4);
        uint32_t size = LMS_FLD(file, off + 4, uint32_t);
        LMS_FLD(e, 8, uint32_t) = size;
        LMS_FLD(e, 0xC, uint16_t) = LMS_FLD(file, off + 8, uint16_t);
        off = (off + 0x10 + size + 0xF) & ~0xFu;
    }
}
