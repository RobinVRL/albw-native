/* USA 00408E40 (EU 00408E20..408E80): sound-parameter callback adapter (BOOT_LOG 160i).
 *   (cb, self, a, b, [sp] c) -> cb->vt[+0x10](cb, self, a, b, flags, c)
 * flags: bits 0..4 = a->+0x18 bits 0..4, bit 5 = a->+0x29 != 0. c (the caller's output block,
 * 0040DB4C's 10-word volume / pan / pitch block, forwarded by 00408FD0) is passed on as the
 * second stack word: the callee (002569FC) reads [sp] as a flags word and [sp+4] as the output
 * block. Ghidra's text kept only `vt[+0x10](cb)`: the callee read stack garbage as its flags and
 * output pointer, sound effect volumes came out as code addresses (3e-34: silent sword / bush /
 * throw sounds) and its writes went to random memory.
 * Confidence: high (instruction-level). */
#include <stdint.h>

typedef void (*ParamFn)(void *cb, void *self, void *a, uint32_t b, uint32_t flags, uint32_t out);

void func_00408E40(char *cb, char *self, char *a, uint32_t b, uint32_t out)
{
    uint32_t bits = *(uint32_t *)(a + 0x18);
    uint32_t flags = bits & 0x1F;
    if (*(uint8_t *)(a + 0x29))
        flags |= 0x20;
    ParamFn fn = (ParamFn)(uintptr_t)*(uint32_t *)((uintptr_t)*(uint32_t *)cb + 0x10);
    fn(cb, self, a, b, flags, out);
}
