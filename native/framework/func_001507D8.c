/* USA 001507D8 (EU 001507D8): ActorBase::playSE2(const sead::SafeString &name, s32 arg)
 *   (94 converted caller files, 117 call sites)
 *   int f(ActorBase *this, const SafeString *name, s32 arg);   returns 0/1
 *   id = 00587FCC(*data_00711F50, name);    (sound id lookup)
 *   created = 0; h = this->+0x3F4;
 *   if (!h) { h = this->+0x3F4 = 00297674(*data_00711F50, this); if (!h) return 0;
 *             0019A4C4(h, this + 0x3D0); h = this->+0x3F4; created = 1; if (!h) return 0; }
 *   s = 0019AA88(h, id, arg);
 *   if (s) { if (created) { 0010F1DC(this + 0x3F8, this->+0x3F4 + this->+0x404); this->+0x400++; }
 *            if (arg) 0025B6A8(arg, s);  return 1; }
 *   if (created) { 00297574(*data_00711F50, this->+0x3F4); this->+0x3F4 = 0; }  return 0;
 * Round-2 Ghidra C: correct. Native version for exactness / 64-bit cleanliness. Prototype =
 * callers' `extern int func_001507D8(int, int *, int)` (`this` as a 32-bit int). Verified
 * against EU 001507D8-001508B8. Confidence: high. */
#include "framework.h"

extern uint32_t data_00711F50; /* sound manager instance */

uint32_t func_00587FCC(void *mgr, void *name);
uint32_t func_00297674(void *mgr, void *self);
int func_0019A4C4(void *h, void *p);
uint32_t func_0019AA88(void *h, uint32_t id, int arg);
int func_0010F1DC(void *list, void *node);
int func_0025B6A8(void *arg, void *s);
int func_00297574(void *mgr, void *h);

int func_001507D8(uint32_t self_w, int *name, int arg) {
    char *self = gp_ptr(self_w);
    uint32_t id = func_00587FCC(gp_ptr(data_00711F50), name);
    int created = 0;
    if (FLD(self, 0x3F4, uint32_t) == 0) {
        uint32_t h = func_00297674(gp_ptr(data_00711F50), self);
        FLD(self, 0x3F4, uint32_t) = h;
        if (h == 0)
            return 0;
        func_0019A4C4(gp_ptr(h), self + 0x3D0);
        created = 1;
        if (FLD(self, 0x3F4, uint32_t) == 0)
            return 0;
    }
    uint32_t s = func_0019AA88(GPTR(self, 0x3F4, void), id, arg);
    if (s != 0) {
        if (created) {
            uint32_t h = FLD(self, 0x3F4, uint32_t);
            func_0010F1DC(self + 0x3F8, gp_ptr(FLD(self, 0x404, uint32_t) + h));
            FLD(self, 0x400, int32_t) += 1;
        }
        if (arg != 0)
            func_0025B6A8(gp_ptr((uint32_t)arg), gp_ptr(s));
        return 1;
    }
    if (created) {
        func_00297574(gp_ptr(data_00711F50), GPTR(self, 0x3F4, void));
        FLD(self, 0x3F4, uint32_t) = 0;
    }
    return 0;
}
