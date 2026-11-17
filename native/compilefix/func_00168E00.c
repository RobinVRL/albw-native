/* USA 00168E00 (= EU 00168E00): per-frame update of an animated model holder (reached through a vtable).
 *
 * The ARM ends with `mov r0, r0` and FALLS THROUGH into 00168E9C (AnimSlots_Update, r0 = *(this+0x438),
 * r1 = *(this+0x434), r2 = 0), so the Ghidra text of 00168E00 contained an inlined copy of 00168E9C, and in that
 * copy the material-animation call 00567588 had lost its frame argument (s0 = [slot + 8], EU 001692AC: the
 * lost-float class of BOOT_LOG 115, found by tools/proto_mismatch_scan.py). Rewritten from the machine code
 * (EU 00168E00..00168E98) so that the tail runs the native 00168E9C (native/robust), which passes the frame.
 *
 *   ptmf = ((PtmfEntry *)*(this+0x428))[*(s8 *)(this+0x410)]; (this->*ptmf)() on *(this+0x420)
 *   ++*(this+0x40C); if (*(this+0x41C)) 00352210(*(this+0x41C), 1, (float)counter)
 *   00169A80(*(this+0x438))                      SkelAnim_Calc
 *   00168E9C(*(this+0x438), *(this+0x434), 0)    AnimSlots_Update */
#include <stdint.h>
#include <string.h>

#define GA(a) ((uintptr_t)(uint32_t)(a))
static inline uint32_t R32(uint32_t a) { uint32_t v; memcpy(&v, (const void *)GA(a), 4); return v; }
static inline void W32(uint32_t a, uint32_t v) { memcpy((void *)GA(a), &v, 4); }

int func_00352210(uint32_t self_w, uint32_t arg, float value);
int func_00169A80(int *anim, uint32_t a1, uint32_t a2, int *a3);
void func_00168E9C(char *self, char *model, int force);

void func_00168E00(int param_1) {
    uint32_t self = (uint32_t)param_1;
    /* ARM pointer to member function: {fn, adj}; adj bit 0 = virtual (fn = vtable offset), this += adj >> 1 */
    uint32_t obj = R32(self + 0x420);
    int8_t idx = *(const int8_t *)GA(self + 0x410);
    uint32_t tbl = R32(self + 0x428);
    uint32_t fn = R32(tbl + (uint32_t)idx * 8), adj = R32(tbl + (uint32_t)idx * 8 + 4);
    uint32_t that = obj + (uint32_t)((int32_t)adj >> 1);
    if (adj & 1) fn = R32(R32(that) + fn);
    ((void (*)(uint32_t))GA(fn))(that);

    uint32_t counter = R32(self + 0x40C) + 1;
    W32(self + 0x40C, counter);
    uint32_t p = R32(self + 0x41C);
    if (p) func_00352210(p, 1, (float)counter);   /* vcvt.f32.u32 */

    func_00169A80((int *)GA(R32(self + 0x438)), 0, p, (int *)GA(obj));
    func_00168E9C((char *)GA(R32(self + 0x438)), (char *)GA(R32(self + 0x434)), 0);
}
