/* USA 0049F7B8 (EU 0049F790): sead::TaskBase::CreateArg ctor variant with a parameter word
 *   int f(CreateArg *this, const TaskClassID *cls, u32 param);   returns this
 *   001031B4(this, cls); this->+0x68 = 0; this->+0x64 = param.
 * Callers 00518B3C, 0014B00C (round-2 prototype `(undefined4 *, undefined4 *, undefined4)`).
 * Round-2 Ghidra C: correct but `void` (ARM r0 = this). Verified against EU 0049F790-0049F7A8.
 * Confidence: high. */
#include "framework.h"

uint32_t func_001031B4(void *self, void *cls);

int func_0049F7B8(void *self, void *cls, uint32_t param) {
    char *p = self;
    func_001031B4(p, cls);
    FLD(p, 0x68, uint32_t) = 0;
    FLD(p, 0x64, uint32_t) = param;
    return (int)gp_u32(p);
}
