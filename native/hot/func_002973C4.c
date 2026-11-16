/* USA 002973C4 <- EU 002973EC: Obj::changeSubState(u32 i)   (2 caller files)
 *   o = self[0x4C]; (`mov r0, r0`, falls into EU 002973F4 = USA 002973CC:)
 *   if (i >= 4) return o;  s = o + 0xE8 + i * 0x10; return s->vt[0](s)   (tail call)
 * Ghidra vs ARM: the delegate is called with no `this` (s dropped) and the i >= 4 exit
 * returns 0 instead of o. Fixed. Confidence: high (flow), low (name). */
#include "hot.h"

typedef int (*vfn_t)(void *self);

int func_002973C4(uint32_t self_w, uint32_t i)
{
    uint32_t o = W(P(self_w), 0x4C);
    if (i >= 4)
        return (int)o;
    char *s = P(o) + 0xE8 + i * 0x10;
    return GFN(vfn_t, W(P(W(s, 0)), 0))(s);
}
