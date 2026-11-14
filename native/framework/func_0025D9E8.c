/* USA 0025D9E8 (EU 0025DA10): TaskBase::TaskBase(void *arg, const char *name) of the game's
 * task classes (TaskMainGame 001E31E8/001E3228 and 2 more callers)
 *   int f(TaskBase *this, void *arg, u32 name);   returns this
 *   0048D088(this, arg, name) (sead task base ctor, returns this); vtbl = data_006D6B1C.
 * Round-2 Ghidra C: correct; the callers declare `int func_0025D9E8(int, int *, int)` (`this` as
 * a 32-bit int: taken as uint32_t here, M64PTR-safe). Verified against EU 0025DA10-0025DA20.
 * Confidence: high. */
#include "framework.h"

extern uint32_t data_006D6B1C[];
uint32_t func_0048D088(void *self, void *arg, uint32_t name);

int func_0025D9E8(uint32_t self_w, int *arg, int name) {
    char *p = gp_ptr(self_w);
    func_0048D088(p, arg, (uint32_t)name);
    FLD(p, 0, uint32_t) = GPTR_OF(ALBW_LAUNDER(data_006D6B1C));
    return (int)self_w;
}
