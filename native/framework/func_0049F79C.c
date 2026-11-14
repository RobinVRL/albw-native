/* USA 0049F79C (EU 0049F774): sead::TaskBase::CreateArg ctor variant with two parameter words
 *   int f(CreateArg *this, u32 b, const TaskClassID *cls, u32 a);   returns this
 *   001031B4(this, cls); strd: this->+0x64 = a (r3), this->+0x68 = b (r1).
 * Caller 0014AA1C (round-2 prototype `(undefined4 *, undefined4, undefined4 *, undefined4)`).
 * Round-2 Ghidra C: correct but `void` (ARM r0 = this). Verified against EU 0049F774-0049F78C.
 * Confidence: high. */
#include "framework.h"

uint32_t func_001031B4(void *self, void *cls);

int func_0049F79C(void *self, uint32_t b, void *cls, uint32_t a) {
    char *p = self;
    func_001031B4(p, cls);
    FLD(p, 0x64, uint32_t) = a;
    FLD(p, 0x68, uint32_t) = b;
    return (int)gp_u32(p);
}
