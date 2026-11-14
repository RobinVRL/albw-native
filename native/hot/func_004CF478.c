/* USA 004CF478 <- EU 004CF450: ModelInst::setDrawState(s8 state)   (345 caller files)
 * (aliases: _ZN7Model2813func_004CF478Eai, Obj40C7f4CF478Eii)
 *
 *   if ((s8)self[0x30] == state) return state;          (r0 = the ldrsb value)
 *   mgr = *data_0070B960; lock(mgr + 0x2BC8)             (0010C0B8 = CriticalSection enter)
 *   node = self[0x4C]
 *   if (state) { if (!node) self[0x4C] = 001300D4(mgr, self);   (create the render node)
 *                else node[4] = 0; }
 *   else if (node && (self[0x164] & 0x3E) == 0x3E) node[4] = 1;
 *   self[0x30] = (u8)state;
 *   return unlock(mgr + 0x2BC8)                          (0010EEE0, tail call)
 * Note the manager word is read twice (before the lock and again for 001300D4), as on ARM.
 *
 * Ghidra vs ARM: the early exit returns the state byte (r0 = ldrsb result), Ghidra returns 0
 * (1 caller site reads r0). Otherwise correct (EU 004CF450-004CF4E4 insn by insn).
 * Confidence: high (flow), low (names). */
#include "hot.h"

extern char data_0070B960[];

void func_0010C0B8(void *cs);
int func_0010EEE0(void *cs);
int func_001300D4(int mgr, uint32_t obj);

int func_004CF478(uint32_t self_w, int32_t state)
{
    char *self = P(self_w);
    int32_t cur = FLD(self, 0x30, int8_t);
    if (cur == state)
        return cur;
    char *cs = P(W(data_0070B960, 0)) + 0x2BC8;
    func_0010C0B8(cs);
    uint32_t node = W(self, 0x4C);
    if (state != 0) {
        if (node == 0)
            W(self, 0x4C) = (uint32_t)func_001300D4((int)W(data_0070B960, 0), self_w);
        else
            FLD(P(node), 4, uint8_t) = 0;
    } else if (node != 0 && (0x3Eu & ~W(self, 0x164)) == 0) {
        FLD(P(node), 4, uint8_t) = 1;
    }
    FLD(self, 0x30, uint8_t) = (uint8_t)state;
    return func_0010EEE0(cs);
}
