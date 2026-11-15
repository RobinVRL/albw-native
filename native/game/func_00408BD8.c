/* USA 00408BD8 (EU 00408BB8): build a default parameter block on the stack and forward the call to
 * obj->vtbl[0x10](obj, a1, a2, a3, flags, &block); return block word +0x20.
 *   block (0x28 bytes, sp+8): floats 1.0, 1.0, 0, 0, 0, 0, 0, then words 0, 0, 0
 *   flags = 0x01000000, | 2 when a2[+0x18] bit 1 (EU 00408BEC..00408C00: r12 | r12 asr 23)
 * Rewritten from the EU disassembly (EU 00408BB8..00408C24, constants 1.0 / 0.0 at 00408C28): the
 * Ghidra text kept only `obj->vtbl[0x10](obj)`, so 002569FC got no block and crashed when an
 * animation-triggered sound effect first played on the title (boot stop 95c). Confidence: high. */
#include <stdint.h>

typedef void (*V10)(void *obj, uint32_t a1, uint32_t *a2, uint32_t a3, uint32_t flags, void *block);
#define W(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define P(v) ((void *)(uintptr_t)(v))

uint32_t func_00408BD8(void *obj, uint32_t a1, uint32_t *a2, uint32_t a3)
{
    struct { float f[7]; uint32_t w[3]; } block = {{1.0f, 1.0f, 0, 0, 0, 0, 0}, {0, 0, 0}};
    uint32_t flags = 0x01000000u;
    if (W(a2, 0x18) & 2) flags |= 2;
    ((V10)P(W(P(W(obj, 0)), 0x10)))(obj, a1, a2, a3, flags, &block);
    return block.w[1];
}
