/* USA 00496358 (EU 00496330): display/layer object: for screen kind param_2 (9 / 0xC / 0xF
 * gated by flag bits 4 / 1 / 2 of +0x168, other kinds always) select the render buffer
 * this->vt[0x18](this, kind) as current (0057D740) and tail-call 0049F3C4(*DAT_004963c0, 7,
 * this + 0x74, 0) (the ARM also passes s0 = 1.0f, which the matched 0049F3C4 does not model).
 * Gated-off kinds return with r0 = this untouched (`bx lr`).
 * Native fix of the generated Ghidra text: the virtual call lost r1 = kind, so the buffer getter
 * f_57FEF0 returned NULL. Confidence: high. */
#include "ghidra_types.h"

extern int func_0057D740(int *p);
extern int func_0049F3C4(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
extern int *DAT_004963c0;

int func_00496358(int *param_1, int param_2)
{
    uint32_t flags = (uint32_t)param_1[0x5a];
    if ((param_2 == 9 && !(flags & 4)) || (param_2 == 0xc && !(flags & 1)) ||
        (param_2 == 0xf && !(flags & 2)))
        return (int)(uintptr_t)param_1;
    int *buf = (int *)(uintptr_t)(uint32_t)(**(code **)(*param_1 + 0x18))(param_1, param_2);
    func_0057D740(buf);
    return func_0049F3C4(*DAT_004963c0, 7, (undefined4)(uintptr_t)(param_1 + 0x1d), 0);
}
