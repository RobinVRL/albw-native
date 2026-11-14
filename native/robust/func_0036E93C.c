/* USA 0036E93C <- EU 0036E918: turn-controller state handler (state table data_00737FB0,
 * see func_0036DF60.c), called as handler(self, actor):
 *     0068C794(&self->f5c, 0036EAF8(self, actor), 0.3, 0.01, FLT_MAX);
 *     0068C794(&self->x [0x04], actor->x [0x3D0], 0.1, 0.01, FLT_MAX);
 *     0068C794(&self->z [0x0C], actor->z [0x3D8], 0.1, 0.01, FLT_MAX);
 *
 * What was wrong: Ghidra declared one parameter (self) and read the actor as `in_r1` and the
 * speed as `in_s0` (the float that 0036EAF8 returns; 0036EAF8 itself was decompiled as void(void)).
 *
 * Disassembly (EU 0036E918-0036E980): r4 = r0, r5 = r1; bl 0036EAD4 with r0/r1 unchanged;
 * s16 = FLT_MAX, s17 = 0.01, s1 = 0.3 -> bl 0068C76C(r0 = self+0x5C, s0 = speed);
 * s18 = 0.1; s0 = [r5+0x3D0] -> bl 0068C76C(self+4); s0 = [r5+0x3D8] -> bl 0068C76C(self+0xC).
 * The results of 0068C794 are ignored. Confidence: high. */
#include <float.h>
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
int func_0068C794(float *value, float target, float rate, float minStep, float maxStep);

void func_0036E93C(char *self, char *actor) {
    float speed = func_0036EAF8(self, actor);
    func_0068C794((float *)AT(self, 0x5C), speed, 0.3f, 0.01f, FLT_MAX);
    func_0068C794((float *)AT(self, 0x04), FLD(actor, 0x3D0, float), 0.1f, 0.01f, FLT_MAX);
    func_0068C794((float *)AT(self, 0x0C), FLD(actor, 0x3D8, float), 0.1f, 0.01f, FLT_MAX);
}
