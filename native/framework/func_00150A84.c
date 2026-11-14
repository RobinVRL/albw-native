/* USA 00150A84 (EU 00150A84): ActorBase::playSE(const sead::SafeString &name, s32 arg)
 *   (354 converted caller files, 515 call sites)
 *   int f(ActorBase *this, const SafeString *name, s32 arg);   returns 0/1 or 0014E670's result
 *   FixedSafeString<64> se = name (inline BufferedSafeString::copy; vtbl data_006F6C44 while
 *     copying, then data_006F5C98);  u8 flag = 0;
 *   if (!0014F0F8(this, &se, &flag)) return 0;
 *   if (005881C8(*data_00711F50, &se, 0x10000000))            (sound manager query)
 *       return 0014E670(this, &se, name, (s8)flag, arg);
 *   created = 0; h = this->+0x3F0;
 *   if (!h) { h = this->+0x3F0 = 00297674(*data_00711F50, this); if (!h) return 0;
 *             0019A4C4(h, this + 0x3D0); h = this->+0x3F0; created = 1; if (!h) return 0; }
 *   s = 0019A014(h, &se);
 *   if (s) { if (created) { 0010F1DC(this + 0x3F8, this->+0x3F0 + this->+0x404); this->+0x400++; }
 *            if (flag) 001DF8F8(s, name);  if (arg) 0025B6A8(arg, s);  return 1; }
 *   if (created) { 00297574(*data_00711F50, this->+0x3F0); this->+0x3F0 = 0; }  return 0;
 * (*data_00711F50 is re-read at every use, as the ARM does.)
 * Round-2 Ghidra C: logic right (stack frame offsets checked); native version for exactness
 * and 64-bit cleanliness (the local string's `top` is a 32-bit word pointing at the native stack
 * buffer: the game threads run on low stacks, native/64BIT.md). Callee prototypes: round-2
 * declarations, parameters as pointers. Verified against EU 00150A84-00150C70.
 * Note: HOT_TOP150 lists this function as "native" but no native definition exists in
 * native/{game,robust,sdk,gameplay,route}; the build uses the Ghidra version. Confidence: high. */
#include "framework.h"

extern uint32_t data_006F6C44[]; /* sead::BufferedSafeString vtable */
extern uint32_t data_006F5C98[]; /* sead::FixedSafeString<64> vtable */
extern uint32_t data_00711F50;   /* sound manager instance */

int func_0014F0F8(void *self, void *se, uint8_t *flag);
int func_005881C8(void *mgr, void *se, uint32_t mask);
int func_0014E670(void *self, void *se, void *name, int flag, int arg);
uint32_t func_00297674(void *mgr, void *self);
int func_0019A4C4(void *h, void *p);
uint32_t func_0019A014(void *h, void *se);
int func_0010F1DC(void *list, void *node);
int func_001DF8F8(void *s, void *name);
int func_0025B6A8(void *arg, void *s);
int func_00297574(void *mgr, void *h);

int func_00150A84(int *self_p, int *name_p, int arg) {
    char *self = (char *)self_p;
    fw_SafeString *name = (fw_SafeString *)name_p;
    fw_FixedSafeString64 se;
    uint8_t flag;
    se.top = GPTR_OF(se.buf);
    se.size = 0x40;
    se.buf[0x3F] = 0;
    se.vtbl = GPTR_OF(ALBW_LAUNDER(data_006F6C44));
    fw_ss_copy(GPTR_TO(char, se.top), &se.size, name);
    se.vtbl = GPTR_OF(ALBW_LAUNDER(data_006F5C98));
    flag = 0;
    if (func_0014F0F8(self, &se, &flag) == 0)
        return 0;
    if (func_005881C8(gp_ptr(data_00711F50), &se, 0x10000000) != 0)
        return func_0014E670(self, &se, name, (int8_t)flag, arg);

    int created = 0;
    if (FLD(self, 0x3F0, uint32_t) == 0) {
        uint32_t h = func_00297674(gp_ptr(data_00711F50), self);
        FLD(self, 0x3F0, uint32_t) = h;
        if (h == 0)
            return 0;
        func_0019A4C4(gp_ptr(h), self + 0x3D0);
        created = 1;
        if (FLD(self, 0x3F0, uint32_t) == 0)
            return 0;
    }
    uint32_t s = func_0019A014(GPTR(self, 0x3F0, void), &se);
    if (s != 0) {
        if (created) {
            uint32_t h = FLD(self, 0x3F0, uint32_t);
            func_0010F1DC(self + 0x3F8, gp_ptr(FLD(self, 0x404, uint32_t) + h));
            FLD(self, 0x400, int32_t) += 1;
        }
        if (flag != 0)
            func_001DF8F8(gp_ptr(s), name);
        if (arg != 0)
            func_0025B6A8(gp_ptr((uint32_t)arg), gp_ptr(s));
        return 1;
    }
    if (created) {
        func_00297574(gp_ptr(data_00711F50), GPTR(self, 0x3F0, void));
        FLD(self, 0x3F0, uint32_t) = 0;
    }
    return 0;
}
