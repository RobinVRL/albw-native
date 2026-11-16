/* USA 004A6710 <- EU 004A66E8: EmitterSet::forEach(arg)   (1 caller file; per-frame effect path)
 *   if (self[0x38]) { o = self[0x10]->vt[0](self[0x10]); return o->vt[0x14](o, arg); } (tail)
 *   for each node of the OffsetList at +0x3C (next +0x40, offset +0x48 read once, end
 *       re-read each step): 004A7020(obj, arg)
 *   return r0 = the list end address (last compare operand)
 * Ghidra vs ARM: the getter vt[0] is called with NO `this`; its result is then used as an
 * object -> garbage. Fixed. Verified EU 004A66E8-004A6754. Confidence: high (flow), low (names). */
#include "hot.h"

int func_004A7020(int obj, int arg);

typedef uint32_t (*vget_t)(void *self);
typedef int (*vcall_t)(void *self, uint32_t arg);

int func_004A6710(uint32_t self_w, uint32_t arg)
{
    char *self = P(self_w);
    if (FLD(self, 0x38, uint8_t) != 0) {
        char *g = P(W(self, 0x10));
        char *o = P(GFN(vget_t, W(P(W(g, 0)), 0))(g));
        return GFN(vcall_t, W(P(W(o, 0)), 0x14))(o, arg);
    }
    uint32_t off = W(self, 0x48);
    uint32_t n = W(self, 0x40);
    uint32_t end;
    for (;;) {
        uint32_t obj = n - off;
        end = self_w + 0x3C - W(self, 0x48);
        if (obj == end)
            break;
        func_004A7020((int)obj, (int)arg);
        n = W(P(obj + off), 4);
    }
    return (int)end;
}
