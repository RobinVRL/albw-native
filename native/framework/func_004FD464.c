/* USA 004FD464 (EU 004FD43C): EnemyBase::EnemyBase(EnemyArg *arg, EnemyParam *param)
 *   (80 caller files: the base constructor of every enemy; object >= 0x8BC bytes, two vtables:
 *   data_006EDB00 at +0, data_006EDB00 + 0x84 at +0x320)
 *   int f(EnemyBase *this, void *arg, EnemyParam *param);   returns this
 *
 * Sequence (EU 004FD43C-004FDD74, verified instruction by instruction; A = the 3 words at
 * data_007A9260, Z = the 3 words at data_007A9254 (default vectors), D = data_0069512C):
 *   00150E40(this, arg) (ActorBase ctor); vtables; +0x40C..+0x41C = 0;
 *   +0x420 = new(0x64) ? 004EE484(p) : 0; +0x424..+0x434 = 0; +0x438 = new(0xC) ? 0032493C : 0;
 *   +0x43C = new(0x48) ? 0034CAA0 : 0; +0x440/+0x444/+0x448 = this + 0x524/0x534/0x544;
 *   vectors +0x44C A, +0x458 Z, +0x464 A, +0x470 Z, +0x47C A, +0x488 Z, +0x494 A, +0x4A0 Z;
 *   +0x4AC = +0x4B0 = 0, u8 +0x4B4 = +0x4B5 = 0; +0x4B8 A; +0x4C4..+0x4CC = 1.0f; +0x4D0 A;
 *   u8 +0x4DC = 8; +0x4E0 = 0; +0x4E4 Z; +0x4F0..+0x4F8 = 1.0f; +0x4FC..+0x504 = 0;
 *   s16 +0x508..+0x50E = 4; +0x510 = new(0x2C4) ? 002B2590(p, this) : 0; +0x518 = 0;
 *   +0x51C = D[0x50..0x57]; four sub-objects {vtbl data_006F4C98, 0, D[0x50..0x57]} at +0x524,
 *   +0x534, +0x544, +0x554 (the last one's +4 = 0 first, set to `this` further down);
 *   +0x564..+0x580 = 0.0f; +0x584 = 0x1F08, +0x588 = 0x36, +0x58C = 0xDDF; +0x590 A;
 *   +0x5A0 = 0x3000, +0x59C = 0x1F390003, +0x5A4 = (+0x5A0 read back) = 0x3000;
 *   vec_ctor(+0x5A8, 004FD414, 0xC, 7); vec_ctor(+0x618, 004FC988, 4, 7);
 *   vec_ctor(+0x634, 004FC988, 4, 7); u8 +0x650..+0x653 = 0; u8 +0x654 = +0x655 = 10;
 *   u8 +0x656 = +0x657 = 0; 20 x {0, 0, 1.0f} at +0x658..+0x747;
 *   vec_ctor(+0x748, 004F7DFC, 0x10, 2); u8 +0x768 = +0x76C = 0; +0x770 A; u8 +0x77C = 1,
 *   +0x77D = +0x77E = 0xFF, +0x77F = 0, +0x780 = 0xFF; s16 +0x782 = 0x5A, +0x784 = 0,
 *   +0x786 = +0x788 = -1; +0x798 = 1.2f; +0x79C..+0x7A4 = 0; +0x7A8 A; 0034CAA0(this + 0x7B4);
 *   u8 +0x7FC = 0; +0x800..+0x820 = 0; u8 +0x824..+0x827 = 0xFF, +0x828..+0x82A = 0; +0x82C A;
 *   s16 +0x838 = 0; +0x83C A; u8 +0x848..+0x84A = 0; +0x84C = 0.0f; u8 +0x850 = 2;
 *   u8 +0x851 = *(u8 *)data_0070A5A4; u8 +0x852 = +0x853 = 0; +0x854 = 0.0f; u8 +0x858 = 1,
 *   +0x859..+0x85B = 0; {0, 0, 1.0f} at +0x85C and +0x868; u8 +0x874..+0x877 = 0x80;
 *   +0x878 = *(u32 *)data_0070A5AC; u8 +0x87C.. = {10, 0x14, 0x28, 10, 0xF, 5, 0};
 *   list head +0x884 = +0x888 = this + 0x884, +0x88C = 0; u8 +0x894 = 0, +0x895 = 0, +0x896 = 1,
 *   +0x897 = 0; +0x898 = 0.0f; u8 +0x89C..+0x89F = 0; +0x8A0 = +0x8A4 = 0; +0x8A8 A;
 *   u8 +0x8B4..+0x8B6 = 0, +0x8B7 = 1, +0x8B8 = 0; +0x890 = 0x28;
 *   u8 +0x851 = *(u8 *)004FA000(0); u8 +0x3CC = 1; +0x4CC = 1.0f;
 *   for i < 7: slot +0x5A8 + 12i = {0, u8 0xB, 1.0f}, +0x5FC/+0x618/+0x634 + 4i = 0;
 *   u8 +0x653..+0x650 = 0;
 *   if (!(param->flags & 1)) {                                       param = r2 (EnemyParam)
 *       tbl = this->+0x2D0 + 0x1C8; r = param->+0xC;
 *       if (r < 0) r = 005330BC(tbl[param->+8], param + 0x18);
 *       this->+0x4E0 = (this->+0x2D0 + 0x1C8)[param->+8];   (+0x2D0 re-read)
 *       m = this->+0x40C = 0014E428(this, param->+4 | 1, param->+8, r, 1, 0, 0);
 *       arg12 = { u8 (param->+0x44 & 0xFF) | 4, 0, 0, 0, u32 0, u32 0 } (stack);
 *       004FC798(this + 0x5A8, m, &arg12, -1.0f);  this->+0x59C |= 0x400; }
 *   if (!(param->flags & 2)) 004F9A2C(this, param + 0x10);
 *   +0x558 = this; +0x55C = data_0069513C[0..1]; +0x3EC = this + 0x554;
 *   if (!(param->flags & 4) && this->+0x2D0 && 0054DD54(+0x2D0 + 0x18, 0)
 *       && 0054DD3C(+0x2D0 + 0x18, 0) && (o = this->+0x41C = 0054D89C(this, 0)) != 0) {
 *       n = u8 +0x651; if (n < 7 && o not in +0x5FC[0..n-1]) { +0x5FC[n] = o; u8 +0x651 += 1; } }
 *   if (this->+0x3A4) s16 +0x50A = +0x508 = *(u16 *)(+0x3A4 + 2);
 *   if (*data_00709DF8) { k = (s8)(*data_00709DF8)->+0x18; if (k == 0x14) u8 +0x8B5 = 1;
 *                         else if (k == 0xB) u8 +0x8B8 = 1; }
 *
 * What was wrong in the round-2 converted C (ghidra_analyzed4/004/func_004FD464.c):
 *  - the 12-byte argument block passed to 004FC798 (r2 = sp) is a lost stack object: Ghidra passed
 *    `&stack0xffffffc8` but never wrote it, so the flag byte ((param->+0x44 & 0xFF) | 4) and the
 *    two zero words the ARM leaves there (from the 0014E428 stack arguments) were uninitialised
 *    native stack: every enemy registered its model with garbage flags.
 * Not a bug (checked): operator new 0010BAB4 is called with r1 = param (ignored by the callee).
 * Callee prototypes: round-2 declarations, pointer parameters; 00100118 = native/runtime/cxxabi.c
 * (__aeabi_vec_ctor_nocookie_nodtor); 0014E428 = native/robust (7 args). Float constants are
 * stored as their exact bit patterns (vstr of pool constants). Confidence: high. */
#include "framework.h"

extern uint32_t data_006EDB00[];
extern uint32_t data_007A9260[];
extern uint32_t data_007A9254[];
extern uint8_t data_0069512C[];
extern uint32_t data_006F4C98[];
extern uint8_t data_0070A5A4[];
extern uint32_t data_0070A5AC[];
extern uint32_t data_0069513C[];
extern uint32_t data_00709DF8;

uint32_t func_00150E40(void *self, void *arg);
uint32_t func_0010BAB4(uint32_t size);
uint32_t func_004EE484(void *p);
uint32_t func_0032493C(void *p);
uint32_t func_0034CAA0(void *p);
uint32_t func_002B2590(void *p, void *owner);
void *func_00100118(void *arr, void *ctor, uint32_t size, uint32_t n);
void func_004FD414(void);
void func_004FC988(void);
void func_004F7DFC(void);
uint32_t func_004FA000(int zero);
uint32_t func_005330BC(void *res, void *name);
uint32_t func_0014E428(void *self, uint32_t a, int32_t b, uint32_t c, int32_t store, uint8_t e, uint8_t f);
int func_004FC798(void *list, uint32_t model, void *arg, float f);
int func_004F9A2C(void *self, void *name);
int func_0054DD54(void *p, uint32_t i);
int func_0054DD3C(void *p, uint32_t i);
uint32_t func_0054D89C(void *self, uint32_t i);

#define F1_0 0x3F800000u /* 1.0f */
#define F1_2 0x3F99999Au /* 1.2f */

static inline void vec3w(char *p, uint32_t off, const uint32_t *src) {
    FLD(p, off + 0, uint32_t) = src[0];
    FLD(p, off + 4, uint32_t) = src[1];
    FLD(p, off + 8, uint32_t) = src[2];
}

int func_004FD464(void *self_p, uint32_t *arg, uint32_t *param) {
    char *t = self_p;
    const uint32_t *A = data_007A9260, *Z = data_007A9254;
    uint32_t p;

    func_00150E40(t, arg);
    uint32_t vt = GPTR_OF(ALBW_LAUNDER(data_006EDB00));
    FLD(t, 0x320, uint32_t) = vt + 0x84;
    FLD(t, 0x000, uint32_t) = vt;
    for (uint32_t o = 0x40C; o <= 0x41C; o += 4)
        FLD(t, o, uint32_t) = 0;
    p = func_0010BAB4(0x64);
    if (p != 0)
        p = func_004EE484(gp_ptr(p));
    FLD(t, 0x420, uint32_t) = p;
    for (uint32_t o = 0x424; o <= 0x434; o += 4)
        FLD(t, o, uint32_t) = 0;
    p = func_0010BAB4(0xC);
    if (p != 0)
        p = func_0032493C(gp_ptr(p));
    FLD(t, 0x438, uint32_t) = p;
    p = func_0010BAB4(0x48);
    if (p != 0)
        p = func_0034CAA0(gp_ptr(p));
    FLD(t, 0x43C, uint32_t) = p;
    FLD(t, 0x440, uint32_t) = gp_u32(t + 0x524);
    FLD(t, 0x444, uint32_t) = gp_u32(t + 0x534);
    FLD(t, 0x448, uint32_t) = gp_u32(t + 0x544);
    vec3w(t, 0x44C, A);
    vec3w(t, 0x458, Z);
    vec3w(t, 0x464, A);
    vec3w(t, 0x470, Z);
    vec3w(t, 0x47C, A);
    vec3w(t, 0x488, Z);
    vec3w(t, 0x494, A);
    vec3w(t, 0x4A0, Z);
    FLD(t, 0x4AC, uint32_t) = 0;
    FLD(t, 0x4B0, uint32_t) = 0;
    FLD(t, 0x4B4, uint8_t) = 0;
    FLD(t, 0x4B5, uint8_t) = 0;
    vec3w(t, 0x4B8, A);
    FLD(t, 0x4C4, uint32_t) = F1_0;
    FLD(t, 0x4C8, uint32_t) = F1_0;
    FLD(t, 0x4CC, uint32_t) = F1_0;
    vec3w(t, 0x4D0, A);
    FLD(t, 0x4DC, uint8_t) = 8;
    FLD(t, 0x4E0, uint32_t) = 0;
    vec3w(t, 0x4E4, Z);
    FLD(t, 0x4F0, uint32_t) = F1_0;
    FLD(t, 0x4F4, uint32_t) = F1_0;
    FLD(t, 0x4F8, uint32_t) = F1_0;
    FLD(t, 0x4FC, uint32_t) = 0;
    FLD(t, 0x500, uint32_t) = 0;
    FLD(t, 0x504, uint32_t) = 0;
    FLD(t, 0x508, int16_t) = 4;
    FLD(t, 0x50A, int16_t) = 4;
    FLD(t, 0x50C, int16_t) = 4;
    FLD(t, 0x50E, int16_t) = 4;
    p = func_0010BAB4(0x2C4);
    if (p != 0)
        p = func_002B2590(gp_ptr(p), t);
    FLD(t, 0x510, uint32_t) = p;
    FLD(t, 0x518, uint32_t) = 0;
    uint32_t d50 = FLD(data_0069512C, 0x50, uint32_t), d54 = FLD(data_0069512C, 0x54, uint32_t);
    FLD(t, 0x51C, uint32_t) = d50;
    FLD(t, 0x520, uint32_t) = d54;
    uint32_t svt = GPTR_OF(ALBW_LAUNDER(data_006F4C98));
    FLD(t, 0x514, uint32_t) = svt;
    for (uint32_t o = 0x524; o <= 0x554; o += 0x10) {
        FLD(t, o + 4, uint32_t) = 0;
        FLD(t, o + 0, uint32_t) = svt;
        FLD(t, o + 8, uint32_t) = FLD(data_0069512C, 0x50, uint32_t);
        FLD(t, o + 12, uint32_t) = FLD(data_0069512C, 0x54, uint32_t);
    }
    for (uint32_t o = 0x564; o <= 0x580; o += 4)
        FLD(t, o, uint32_t) = 0; /* 0.0f */
    FLD(t, 0x584, uint32_t) = 0x1F08;
    FLD(t, 0x588, uint32_t) = 0x36;
    FLD(t, 0x58C, uint32_t) = 0xDDF;
    vec3w(t, 0x590, A);
    FLD(t, 0x5A0, uint32_t) = 0x3000;
    FLD(t, 0x59C, uint32_t) = 0x1F390003;
    FLD(t, 0x5A4, uint32_t) = FLD(t, 0x5A0, uint32_t);
    func_00100118(t + 0x5A8, (void *)func_004FD414, 0xC, 7);
    func_00100118(t + 0x618, (void *)func_004FC988, 4, 7);
    func_00100118(t + 0x634, (void *)func_004FC988, 4, 7);
    FLD(t, 0x650, uint8_t) = 0;
    FLD(t, 0x651, uint8_t) = 0;
    FLD(t, 0x652, uint8_t) = 0;
    FLD(t, 0x653, uint8_t) = 0;
    FLD(t, 0x654, uint8_t) = 10;
    FLD(t, 0x655, uint8_t) = 10;
    FLD(t, 0x656, uint8_t) = 0;
    FLD(t, 0x657, uint8_t) = 0;
    for (uint32_t o = 0x658; o < 0x748; o += 12) {
        FLD(t, o + 0, uint32_t) = 0;
        FLD(t, o + 4, uint32_t) = 0;
        FLD(t, o + 8, uint32_t) = F1_0;
    }
    func_00100118(t + 0x748, (void *)func_004F7DFC, 0x10, 2);
    FLD(t, 0x768, uint8_t) = 0;
    FLD(t, 0x76C, uint8_t) = 0;
    vec3w(t, 0x770, A);
    FLD(t, 0x77C, uint8_t) = 1;
    FLD(t, 0x77D, uint8_t) = 0xFF;
    FLD(t, 0x77E, uint8_t) = 0xFF;
    FLD(t, 0x77F, uint8_t) = 0;
    FLD(t, 0x780, uint8_t) = 0xFF;
    FLD(t, 0x782, int16_t) = 0x5A;
    FLD(t, 0x784, int16_t) = 0;
    FLD(t, 0x786, int16_t) = -1;
    FLD(t, 0x788, int16_t) = -1;
    FLD(t, 0x798, uint32_t) = F1_2;
    FLD(t, 0x79C, uint32_t) = 0;
    FLD(t, 0x7A0, uint32_t) = 0;
    FLD(t, 0x7A4, uint32_t) = 0;
    vec3w(t, 0x7A8, A);
    func_0034CAA0(t + 0x7B4);
    FLD(t, 0x7FC, uint8_t) = 0;
    for (uint32_t o = 0x800; o <= 0x820; o += 4)
        FLD(t, o, uint32_t) = 0;
    FLD(t, 0x824, uint8_t) = 0xFF;
    FLD(t, 0x825, uint8_t) = 0xFF;
    FLD(t, 0x826, uint8_t) = 0xFF;
    FLD(t, 0x827, uint8_t) = 0xFF;
    FLD(t, 0x828, uint8_t) = 0;
    FLD(t, 0x829, uint8_t) = 0;
    FLD(t, 0x82A, uint8_t) = 0;
    vec3w(t, 0x82C, A);
    FLD(t, 0x838, int16_t) = 0;
    vec3w(t, 0x83C, A);
    FLD(t, 0x848, uint8_t) = 0;
    FLD(t, 0x849, uint8_t) = 0;
    FLD(t, 0x84A, uint8_t) = 0;
    FLD(t, 0x84C, uint32_t) = 0; /* 0.0f */
    FLD(t, 0x850, uint8_t) = 2;
    FLD(t, 0x851, uint8_t) = data_0070A5A4[0];
    FLD(t, 0x852, uint8_t) = 0;
    FLD(t, 0x853, uint8_t) = 0;
    FLD(t, 0x854, uint32_t) = 0; /* 0.0f */
    FLD(t, 0x858, uint8_t) = 1;
    FLD(t, 0x859, uint8_t) = 0;
    FLD(t, 0x85A, uint8_t) = 0;
    FLD(t, 0x85B, uint8_t) = 0;
    FLD(t, 0x85C, uint32_t) = 0;
    FLD(t, 0x860, uint32_t) = 0;
    FLD(t, 0x864, uint32_t) = F1_0;
    FLD(t, 0x868, uint32_t) = 0;
    FLD(t, 0x86C, uint32_t) = 0;
    FLD(t, 0x870, uint32_t) = F1_0;
    FLD(t, 0x874, uint8_t) = 0x80;
    FLD(t, 0x875, uint8_t) = 0x80;
    FLD(t, 0x876, uint8_t) = 0x80;
    FLD(t, 0x877, uint8_t) = 0x80;
    FLD(t, 0x878, uint32_t) = data_0070A5AC[0];
    FLD(t, 0x87C, uint8_t) = 10;
    FLD(t, 0x87D, uint8_t) = 0x14;
    FLD(t, 0x87E, uint8_t) = 0x28;
    FLD(t, 0x87F, uint8_t) = 10;
    FLD(t, 0x880, uint8_t) = 0xF;
    FLD(t, 0x881, uint8_t) = 5;
    FLD(t, 0x882, uint8_t) = 0;
    FLD(t, 0x888, uint32_t) = gp_u32(t + 0x884);
    FLD(t, 0x88C, uint32_t) = 0;
    FLD(t, 0x884, uint32_t) = gp_u32(t + 0x884);
    FLD(t, 0x894, uint8_t) = 0;
    FLD(t, 0x895, uint8_t) = 0;
    FLD(t, 0x896, uint8_t) = 1;
    FLD(t, 0x897, uint8_t) = 0;
    FLD(t, 0x898, uint32_t) = 0; /* 0.0f */
    FLD(t, 0x89C, uint8_t) = 0;
    FLD(t, 0x89D, uint8_t) = 0;
    FLD(t, 0x89E, uint8_t) = 0;
    FLD(t, 0x89F, uint8_t) = 0;
    FLD(t, 0x8A0, uint32_t) = 0;
    FLD(t, 0x8A4, uint32_t) = 0;
    vec3w(t, 0x8A8, A);
    FLD(t, 0x8B4, uint8_t) = 0;
    FLD(t, 0x8B5, uint8_t) = 0;
    FLD(t, 0x8B6, uint8_t) = 0;
    FLD(t, 0x8B7, uint8_t) = 1;
    FLD(t, 0x8B8, uint8_t) = 0;
    FLD(t, 0x890, uint32_t) = 0x28;
    FLD(t, 0x851, uint8_t) = *GPTR_TO(uint8_t, func_004FA000(0));
    FLD(t, 0x3CC, uint8_t) = 1;
    FLD(t, 0x4CC, uint32_t) = F1_0;
    for (uint32_t i = 0; i < 7; i++) {
        char *s = t + 0x5A8 + i * 12;
        FLD(s, 0, uint32_t) = 0;
        FLD(s, 4, uint8_t) = 0xB;
        FLD(s, 8, uint32_t) = F1_0;
        FLD(t, 0x5FC + i * 4, uint32_t) = 0;
        FLD(t, 0x618 + i * 4, uint32_t) = 0;
        FLD(t, 0x634 + i * 4, uint32_t) = 0;
    }
    FLD(t, 0x653, uint8_t) = 0;
    FLD(t, 0x652, uint8_t) = 0;
    FLD(t, 0x651, uint8_t) = 0;
    FLD(t, 0x650, uint8_t) = 0;

    char *pm = (char *)param;
    if ((FLD(pm, 0, uint32_t) & 1) == 0) {
        int32_t idx = FLD(pm, 8, int32_t);
        uint32_t res = FLD(GPTR(t, 0x2D0, char) + 0x1C8, idx * 4, uint32_t);
        uint32_t r = FLD(pm, 0xC, uint32_t);
        if ((int32_t)r < 0)
            r = func_005330BC(gp_ptr(res), pm + 0x18);
        uint32_t a1 = FLD(pm, 4, uint32_t);
        idx = FLD(pm, 8, int32_t);
        uint32_t flags44 = FLD(pm, 0x44, uint32_t);
        FLD(t, 0x4E0, uint32_t) = FLD(GPTR(t, 0x2D0, char) + 0x1C8, idx * 4, uint32_t);
        uint32_t m = func_0014E428(t, a1 | 1, idx, r, 1, 0, 0);
        FLD(t, 0x40C, uint32_t) = m;
        /* the ARM argument block at sp: the stack words of the 0014E428 call ({1, 0, 0}) with
         * the low byte replaced */
        uint32_t blk[3] = { 1, 0, 0 };
        FLD(blk, 0, uint8_t) = (uint8_t)((flags44 & 0xFF) | 4);
        func_004FC798(t + 0x5A8, m, blk, -1.0f);
        FLD(t, 0x59C, uint32_t) |= 0x400;
    }
    if ((FLD(pm, 0, uint32_t) & 2) == 0)
        func_004F9A2C(t, pm + 0x10);
    FLD(t, 0x558, uint32_t) = gp_u32(t);
    FLD(t, 0x55C, uint32_t) = data_0069513C[0];
    FLD(t, 0x560, uint32_t) = data_0069513C[1];
    FLD(t, 0x3EC, uint32_t) = gp_u32(t + 0x554);
    if ((FLD(pm, 0, uint32_t) & 4) == 0 && FLD(t, 0x2D0, uint32_t) != 0
        && func_0054DD54(GPTR(t, 0x2D0, char) + 0x18, 0) != 0
        && func_0054DD3C(GPTR(t, 0x2D0, char) + 0x18, 0) != 0) {
        uint32_t o = func_0054D89C(t, 0);
        FLD(t, 0x41C, uint32_t) = o;
        if (o != 0) {
            uint32_t n = FLD(t, 0x651, uint8_t);
            if (n < 7) {
                uint32_t i;
                for (i = 0; i < n; i++)
                    if (FLD(t, 0x5FC + i * 4, uint32_t) == o)
                        break;
                if (i == n) {
                    FLD(t, 0x5FC + n * 4, uint32_t) = o;
                    FLD(t, 0x651, uint8_t) = (uint8_t)(FLD(t, 0x651, uint8_t) + 1);
                }
            }
        }
    }
    if (FLD(t, 0x3A4, uint32_t) != 0) {
        uint16_t h = FLD(GPTR(t, 0x3A4, char), 2, uint16_t);
        FLD(t, 0x50A, uint16_t) = h;
        FLD(t, 0x508, uint16_t) = h;
    }
    if (data_00709DF8 != 0) {
        int8_t k = FLD(gp_ptr(data_00709DF8), 0x18, int8_t);
        if (k == 0x14)
            FLD(t, 0x8B5, uint8_t) = 1;
        else if (k == 0xB)
            FLD(t, 0x8B8, uint8_t) = 1;
    }
    return (int)gp_u32(t);
}
