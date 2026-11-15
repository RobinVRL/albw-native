/* USA 005229AC (EU 00522984): d = a->m0->m10; b->vtbl[2](b); return d->vtbl[11](d, b->m4, 1)
 * (a tail call: EU 005229B4..005229BC `bx r3` with r0..r2 set, so r0 is the callee's result).
 * The matched source (src/work7/ds6/func_005229AC.cpp) is typed void (CLASS 2: matched void
 * with an r0 result); its callers use the result as a pointer (118 Ghidra callers declare int).
 * Boot stop 92: 00428B0C stored the result as the object at +0x54 and crashed on the attract
 * demo load. Confidence: high. */
#include <stdint.h>

typedef void (*V2)(void *self);
typedef uint32_t (*V11)(void *self, uint32_t a, uint32_t b);
#define W(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define P(v) ((void *)(uintptr_t)(v))

uint32_t func_005229AC(void *a, void *b)
{
    void *d = P(W(P(W(a, 0)), 0x10));
    ((V2)P(W(P(W(b, 0)), 0x8)))(b);
    return ((V11)P(W(P(W(d, 0)), 0x2C)))(d, W(b, 4), 1);
}
