/* compilefix: asm-verified rewrite taken from native/route/alt/func_001B7D64.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 001B7D64 (EU 001B7D64): per-slot update of a slot array (element 0x70 bytes at *(this+0x88),
 * count at +0x80): 001B8048(this, a1, idx), then for an active slot (+0x6C set, model +0x4C,
 * +0x6D clear) under the slot's lock (+0x50: 0010C0B8 / tail 0010EEE0) runs 004CFA28(model,
 * slot+8, slot, slot+0x1C, this) and refreshes the per-entry visibility bytes
 * (dst[i] = entries[i].byte8 == 0, i < count at +0x10, dst array +0x18).
 * Route: reached from the TaskRender prepare graph (depth 3, via matched f2331F0); stub today.
 * Bug: the converted source did not compile (Ghidra typed `this`/index as floats; the bit-casts
 * became pointer casts).
 * Verified instruction by instruction against EU 001B7D64..001B7E3C (`cmp count, idx` ldrls ->
 * element 0 when idx >= count; signed loop `ble`/`bgt`; unsigned `cmp count, i` ldrhi/ldrls
 * for the destination byte).  Confidence: high. */
#include "../route/route.h"

int func_001B8048(int self, int a1, uint32_t idx);
int func_0010C0B8(int lock);
int func_0010EEE0(int lock);
void func_004CFA28(int model, int *a, int *b, float *c, float *d);

void func_001B7D64(char *self, int a1, uint32_t idx)
{
    func_001B8048((int)GPTR_OF(self), a1, idx);
    char *e = RF(self, 0x80, uint32_t) <= idx ? RP(self, 0x88)
                                             : RP(self, 0x88) + idx * 0x70;
    if (RF(e, 0x6C, uint8_t) == 0 || RF(e, 0x4C, uint32_t) == 0)
        return;
    if (RF(e, 0x6D, uint8_t) != 0)
        return;
    func_0010C0B8((int)GPTR_OF(RAT(e, 0x50)));
    func_004CFA28((int)RF(e, 0x4C, uint32_t), (int *)RAT(e, 8), (int *)e, (float *)RAT(e, 0x1C),
                  (float *)self);
    for (int32_t i = 0; i < RF(e, 0x10, int32_t); i++) {
        uint8_t b = RF(RP(e, 0) + i * 12, 8, uint8_t);
        char *dst = RF(e, 0x10, uint32_t) > (uint32_t)i ? RP(e, 0x18) + i : RP(e, 0x18);
        *dst = b == 0;
    }
    func_0010EEE0((int)GPTR_OF(RAT(e, 0x50)));
}
