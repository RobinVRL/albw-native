/* USA 004EA104 <- EU 004EA0DC: Obj::playSE(const SafeString &name, s32 arg)   (55 caller files)
 *   return self[0x58] ? 00150A84(self[0x58], name, arg) (ActorBase::playSE, tail) : 0
 * Ghidra vs ARM: correct. Confidence: high. */
#include "hot.h"

uint32_t func_00150A84(int *actor, int *name, int p3);   /* native/framework */

int func_004EA104(uint32_t self_w, uint32_t name_w, int arg)
{
    uint32_t a = W(P(self_w), 0x58);
    if (a == 0)
        return 0;
    return (int)func_00150A84((int *)P(a), (int *)P(name_w), arg);
}
