/* compilefix: asm-verified rewrite taken from native/route/alt/func_0026171C.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 0026171C (EU 00261744): model-attachment update (helper object: +0x10 owner actor,
 * +0x18 model, +0x1C/+0x20 slot sets, +0x24/+0x25 flags, +0x30 joint index): sets the model's
 * world matrix either from the given transform (a2 != 0: 004D7EB0(model+0x80, a3 ? *a4 : 0,
 * a3 ? *a3 : 0, a2)) or from the owner's skeleton joint +0x30 (Matrix34 copy 001151EC), then
 * (when +0x25) refreshes the slot sets (00169A80 + 00168E9C), copies the owner's +0x74..+0x7C
 * into the model when +0x24, and tail-calls the model world-matrix update 004CEAF0.
 * Route: actor/player model update (depth 3 of the TaskRender graph; 71 caller files); stub today.
 * Bug: the converted source did not compile (float-typed parameters used as pointers).
 * Verified instruction by instruction against EU 00261744..00261890 (signed `blt` on +0x30,
 * the 0x40000000 dirty bit at model+0x164, 00169A80 takes only r0).  Return value: r0 of the
 * 004CEAF0 tail call, else 0 (as on ARM: r0 is the zero byte/pointer just tested).
 * Confidence: high. */
#include "../route/route.h"

void func_004D7EB0(float *mtx, uint32_t a, uint32_t b, float *c);
int func_001151EC(uint32_t *dst, uint32_t *src);
int func_00169A80(int *slots, uint32_t a, uint32_t b, int *c);
void func_00168E9C(char *self, char *model, int force);
int func_004CEAF0(int obj);

int func_0026171C(char *self, float *a2, uint32_t *a3, float *a4)
{
    char *m = RP(self, 0x18);
    if (m != 0) {
        if (a2 != 0) {
            uint32_t r1 = 0, r2 = 0;
            if (a3 != 0) {
                r1 = *(uint32_t *)a4;
                r2 = *a3;
            }
            RF(m, 0x164, uint32_t) |= 0x40000000;
            func_004D7EB0((float *)RAT(m, 0x80), r1, r2, a2);
        } else if (RF(self, 0x30, int32_t) >= 0) {
            char *skel = RP(RP(self, 0x10), 0x40C);
            if (skel != 0) {
                RF(m, 0x164, uint32_t) |= 0x40000000;
                char *joints = RP(RP(skel, 0x24), 0x14);
                func_001151EC((uint32_t *)RAT(m, 0x80),
                              (uint32_t *)(joints + RF(self, 0x30, int32_t) * 0x30));
            }
        }
    }
    if (RF(self, 0x25, uint8_t) == 0)
        return 0;
    if ((RF(RP(RP(self, 0x10), 0x510), 0x38, uint16_t) & 1) == 0) {
        if (RF(self, 0x1C, uint32_t) != 0) {
            func_00169A80((int *)RP(self, 0x1C), 0, 0, 0);
            func_00168E9C(RP(self, 0x1C), RP(self, 0x18), 0);
        }
        if (RF(self, 0x20, uint32_t) != 0) {
            func_00169A80((int *)RP(self, 0x20), 0, 0, 0);
            func_00168E9C(RP(self, 0x20), RP(self, 0x18), 0);
        }
    }
    m = RP(self, 0x18);
    if (m == 0)
        return 0;
    if (RF(self, 0x24, uint8_t) != 0) {
        char *o = RP(RP(self, 0x10), 0x40C);
        if (o != 0) {
            RF(m, 0x164, uint32_t) |= 0x40000000;
            RF(m, 0x74, uint32_t) = RF(o, 0x74, uint32_t);
            RF(m, 0x78, uint32_t) = RF(o, 0x78, uint32_t);
            RF(m, 0x7C, uint32_t) = RF(o, 0x7C, uint32_t);
        }
    }
    return func_004CEAF0((int)RF(self, 0x18, uint32_t));
}
