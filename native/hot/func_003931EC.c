/* USA 003931EC <- EU 003931C8: NamedStateTable::change(u32 idx)   (101 caller files)
 *   old = self[4]; self[4] = (u8)idx; self[0] = 0; self[5] = old;
 *   if (self[0x10]) { e = idx < self[8] (unsigned) ? self[0xC] + idx * 0x24 : self[0xC];
 *       e->vt[8](e) (SafeString::assureTermination); 0010BEB4(self[0x10],
 *       &SafeString{data_006F5988, e[4]}) (notify the listener with the state name) }
 * Return: r0 of 0010BEB4 / 0 (unused).
 * Matched source rejected by the matched-ABI check -> Ghidra C (correct). Verified EU
 * 003931C8-00393244. Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_006F5988[];

void func_0010BEB4(void *listener, void *name);   /* native/game/func_0010CF7C.c prototype */

typedef void (*vfn_t)(void *self);

int func_003931EC(uint32_t self_w, uint32_t idx)
{
    char *self = P(self_w);
    uint8_t old = FLD(self, 4, uint8_t);
    uint32_t l = W(self, 0x10);
    FLD(self, 4, uint8_t) = (uint8_t)idx;
    W(self, 0) = 0;
    FLD(self, 5, uint8_t) = old;
    if (l == 0)
        return 0;
    char *e = P(W(self, 0xC));
    if (W(self, 8) > idx)
        e += idx * 0x24;
    GFN(vfn_t, W(P(W(e, 0)), 8))(e);
    uint32_t ss[2] = { DATA_W(data_006F5988), W(e, 4) };
    func_0010BEB4(P(W(self, 0x10)), ss);
    return 0;
}
