/* USA 0036F2A0 <- EU 0036F27C: turn-controller state handler (state table data_00737FB0, see
 * func_0036DF60.c), called as handler(self, actor). Sets up the circling: flags, the start angle
 * towards the target object, the three points on the circle, the speed, then state 9:
 *     self->[0x68] = 1; self->[0x69] = 0; self->[0x6C] = 0;
 *     self->[0x4C] = 004D80EC(&self->pos [0x04], (*data_0070FB60)->[0x1C] (Vec3 *), 0);
 *     for i in 0..2:  (skipped for controller kinds self->[0] = 9..11)
 *         p = &self->p[i] [0x1C + 12i] = { 0, 0, self->f5c };
 *         004D7F70(p, self->[0x44] + i * self->[0x48]);   (rotate about Y)
 *         00115C54(p, p, &self->pos);                     (p += pos)
 *     self->f60 = 0036EAF8(self, actor) + 0.5;
 *     0036E490(self, 9, actor);
 *
 * What was wrong: Ghidra gave it a phantom third parameter `float fparam_0`, which is really the
 * s0 result of 0036EAF8 (decompiled as void(void)), so f60 was set from garbage.
 *
 * Verified against EU 0036F27C-0036F3A8. The loop body contains a real jump table
 * (ldrlo pc, [pc, r0, lsl #2] on self->[0] - 5, 7 entries): kinds 5..8 -> 0036F33C, kinds
 * 9..11 -> 0036F370 (skip), anything else -> 0036F2FC; 0036F2FC and 0036F33C do the same thing.
 * r2 = 0 at the bl to 004D80C4 (set by `mov r2, #0` at 0036F288). Confidence: high. */
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
int func_004D80EC(float *from, float *to, int fallback);
void func_004D7F70(float *v, uint32_t angle);
void func_00115C54(float *out, float *a, float *b);
void func_0036E490(void *self, uint32_t state, void *arg);
extern char *data_0070FB60;  /* object whose +0x1C points at the position to face */

void func_0036F2A0(char *self, char *actor) {
    FLD(self, 0x68, uint8_t) = 1;
    FLD(self, 0x69, uint8_t) = 0;
    FLD(self, 0x6C, uint8_t) = 0;
    FLD(self, 0x4C, int32_t) = func_004D80EC((float *)AT(self, 0x04), FLD(data_0070FB60, 0x1C, float *), 0);
    for (uint32_t i = 0; i < 3; i++) {
        float *p = (float *)AT(self, 0x1C + i * 12);
        uint32_t kind = (uint32_t)FLD(self, 0x00, uint8_t) - 5u;
        if (kind < 7 && kind >= 4)  /* kinds 9..11 */
            continue;
        p[0] = 0.0f;
        p[1] = 0.0f;
        FLD(p, 8, uint32_t) = FLD(self, 0x5C, uint32_t);
        func_004D7F70(p, FLD(self, 0x48, uint32_t) * i + FLD(self, 0x44, uint32_t));
        func_00115C54(p, p, (float *)AT(self, 0x04));
    }
    FLD(self, 0x60, float) = func_0036EAF8(self, actor) + 0.5f;
    func_0036E490(self, 9, actor);
}
