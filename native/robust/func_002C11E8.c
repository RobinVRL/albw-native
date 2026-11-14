/* USA 002C11E8 <- EU 002C11C4: initialise a small fixed-capacity list (capacity 3, inline
 * storage of 24-byte entries at +0x0C) and push one default entry:
 *   self->count [0x00] = 0; self->cap [0x04] = 3; self->data [0x08] = self + 0x0C;
 *   self->[0x54] = r2; self->[0x58] (byte) = r3;
 *   entry = {r1, 0.0f, 1.0f, -1.0f, 1.0f, byte 0xFF at +0x14}; count = 1.
 * (201 callers; used on stack objects together with 0016A02C.)
 *
 * What was wrong: the entry's last word is built as `orr r3, ip, #0xff`, i.e. the original
 * source sets only the low byte of a 4-byte member (a u8 followed by 3 padding/unset bytes) and
 * the compiler merged it with whatever was in ip. Ghidra exposed that as an uninitialised
 * `in_r12`; natively the converted code read a garbage local. None of the callers sets ip
 * (checked 0013675C, 001367F4, 00136AA8, 0015E798: ip is never written before the bl), so the
 * upper 3 bytes are undefined in the original too. Here the byte is 0xFF and the 3 bytes after it
 * are written as 0 (deterministic; nothing reads them as part of a word in the callers seen).
 *
 * Verified against EU 002C11C4-002C1238: the `adds r4, r0, #0xc / strne` null check on the inline
 * buffer (never null), the count < cap test (always true right after init), entry layout
 * str r1,[e]; vstr 0.0,[e+4]; vstr 1.0,[e+8]; vstr -1.0,[e+0xC]; vstr 1.0,[e+0x10]; str word,[e+0x14].
 * Confidence: high. */
#include "robust.h"

/* returns this in r0 (194 converted callers use it as the request pointer) */
uint32_t func_002C11E8(char *self, uint32_t first, uint32_t v54, uint8_t v58) {
    FLD(self, 0x04, int32_t) = 3;
    FLD(self, 0x00, int32_t) = 0;
    FLD(self, 0x08, char *) = AT(self, 0x0C);   /* inline storage (non-null) */
    FLD(self, 0x54, uint32_t) = v54;
    FLD(self, 0x58, uint8_t) = v58;
    int32_t n = FLD(self, 0x00, int32_t);
    if (n < FLD(self, 0x04, int32_t)) {
        char *e = FLD(self, 0x08, char *) + n * 0x18;
        FLD(self, 0x00, int32_t) = n + 1;
        FLD(e, 0x00, uint32_t) = first;
        FLD(e, 0x04, float) = 0.0f;
        FLD(e, 0x08, float) = 1.0f;
        FLD(e, 0x0C, float) = -1.0f;
        FLD(e, 0x10, float) = 1.0f;
        FLD(e, 0x14, uint32_t) = 0x000000FFu;  /* low byte 0xFF; upper bytes were unset (ip) */
    }
    return (uint32_t)(uintptr_t)self;
}
