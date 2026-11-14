/* USA 00606564 <- EU 0060653C: factory for the "TagCameraTrailEvent" actor:
 *     obj = new(0x3A0); if (!obj) return NULL; return ctor(obj, params);   (tail call)
 * The constructor (EU 002992BC) has no entry in the function map, so Ghidra inlined it into
 * this factory; it is reproduced here as a static helper (tag_ctor):
 *     self = 004ED00C(obj, params);                     (base ctor, returns this)
 *     self->vtbl = data_006DA5F4;
 *     list head at +0x320 ({self+0x320, self+0x320, 0, ...}) with one inline node at +0x338;
 *     clears +0x348..+0x374, self->[0x35C] = (u8)params->h[0x28];
 *     002E1BB4(self + 0x398, 0);                         (sub-object init, leaves r0 = this)
 *     if (00588BF0(self, 0)) { self->[0x2D7] = 1; return self; }
 *     self->[0x358] = new(0x11C) ? 002FCBCC(m, &SafeString("TagCameraTrailEvent"),
 *                                            self->[0x2CC], 0, 1) : NULL;
 *     self->[0x350] = new(0x88) ? 002758CC(n, params) : NULL;
 *     self->[0x358]->[0x118] = 1;  004ECF6C(self);  return self;
 *
 * What was wrong: Ghidra marked 004ECF6C as "does not return" (a tail call to 004CD7C8, which
 * returns), so on the normal (00588BF0 == 0) path the converted function fell off its end:
 * no `return self`, and the factory returned garbage. Also the inlined ctor took `self` from
 * 002E1BB4's return value (r0 - 0x398); natively 002E1BB4 is a void member function
 * (Obj2E1B::f), so the pointer is computed from obj here (002E1BB4 only stores to [r0] and
 * [r0+6], leaving r0 = self + 0x398). Constructors 004ED00C / 002FCBCC / 002758CC return this
 * (ARM C++ ABI); the allocated pointers are used (002FCBCC is typed void natively).
 * `mov r1, r6` before both operator new calls passes the caller's r6: phantom, new takes one
 * argument.
 * Verified against EU 0060653C-00606560 and 002992BC-002993E8 (string at 002993F0, 5th
 * argument 1 on the stack, r3 = 0; 00299380 is a `nop` in this build).
 * Confidence: high. */
#include "robust.h"
#include "sead.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void *func_004ED00C(void *self, void *params);
void func_002E1BB4(void *p, uint16_t n);
int func_00588BF0(void *self, int32_t a1);
void func_002FCBCC(void *self, const sead_SafeString *name, void *a2, uint8_t a3, uint8_t a4);
void *func_002758CC(void *self, void *params);
void func_004ECF6C(void *self);

extern char data_006DA5F4[];  /* vtable */
extern char data_006F5988[];  /* sead::SafeString vtable */

static char *tag_ctor(char *self, char *params) {
    func_004ED00C(self, params);
    FLD(self, 0x000, char *) = data_006DA5F4;
    char *p = AT(self, 0x320);
    FLD(p, 0x04, char *) = p;
    FLD(p, 0x08, uint32_t) = 0;
    FLD(p, 0x0C, uint32_t) = 0;
    FLD(p, 0x00, char *) = p;
    FLD(p, 0x10, uint32_t) = 0;
    FLD(p, 0x14, uint32_t) = 0;
    {
        char *node = AT(p, 0x18);  /* never NULL (adds/beq in the original) */
        FLD(p, 0x0C, char *) = node;
        FLD(node, 0, uint32_t) = 0;
        FLD(p, 0x10, char *) = node;
        FLD(p, 0x14, uint32_t) = 1;
    }
    FLD(self, 0x348, uint8_t) = 0;
    FLD(self, 0x349, uint8_t) = 0;
    FLD(self, 0x34A, uint8_t) = 0;
    FLD(self, 0x34B, uint8_t) = 0;
    FLD(self, 0x34C, uint32_t) = 0;
    FLD(self, 0x350, uint32_t) = 0;
    FLD(self, 0x354, uint8_t) = 0;
    FLD(self, 0x358, uint32_t) = 0;
    FLD(self, 0x35C, uint8_t) = (uint8_t)FLD(params, 0x28, uint16_t);
    FLD(self, 0x35D, uint8_t) = 0;
    FLD(self, 0x35E, uint8_t) = 0;
    FLD(self, 0x35F, uint8_t) = 0;
    FLD(self, 0x370, uint32_t) = 0;
    FLD(self, 0x374, uint32_t) = 0;
    func_002E1BB4(AT(self, 0x398), 0);
    if (func_00588BF0(self, 0)) {
        FLD(self, 0x2D7, uint8_t) = 1;
        return self;
    }
    void *m = func_0010BAB4(0x11C);
    if (m) {
        sead_SafeString name = {data_006F5988, "TagCameraTrailEvent"};
        func_002FCBCC(m, &name, FLD(self, 0x2CC, void *), 0, 1);
    }
    FLD(self, 0x358, void *) = m;
    void *n = func_0010BAB4(0x88);
    if (n)
        func_002758CC(n, params);
    FLD(self, 0x350, void *) = n;
    FLD(FLD(self, 0x358, char *), 0x118, uint8_t) = 1;
    func_004ECF6C(self);
    return self;
}

char *func_00606564(void *params) {
    char *obj = func_0010BAB4(0x3A0);
    if (!obj)
        return NULL;
    return tag_ctor(obj, params);
}
