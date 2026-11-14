/* USA 0036EB28 <- EU 0036EB04: turn-controller state handler (state table data_00737FB0, see
 * func_0036DF60.c), called as handler(self, actor). Follows the actor and moves three points
 * on a circle around it towards their target positions:
 *     0068C794(&self->f5c, 0036EAF8(self, actor), 0.3, 0.01, FLT_MAX);
 *     self->x = actor->[0x3D0]; self->z = actor->[0x3D8];
 *     done = 1;
 *     for i in 0..2:
 *         v = 004D80A4(angle = self->[0x44] + i * self->[0x48], radius = self->f5c);  (Vec3)
 *         v += self->pos [0x04];                                                      (00115C54)
 *         done &= chase(&self->p[i].x [0x1C + 12i], v.x) & chase(&self->p[i].z [0x24 + 12i], v.z);
 *     self->[0x6C] = done;
 * where chase() is 0068C794 inlined with rate 0.1, minStep 0.01, maxStep FLT_MAX.
 *
 * What was wrong: the speed passed to the first 0068C794 was an uninitialised `in_s0`
 * (0036EAF8 returns it in s0; it was decompiled as void(void)). Ghidra also turned the inlined
 * max-clamp, which compares the float's BIT PATTERN with 0x7F7FFFFF as a signed integer
 * (`vmov r2, s0; cmp r2, r7; vmovgt s0, s18`), into an int CONVERSION `(int)f > 0x7F7FFFFF`,
 * and dropped the "step down" half of the inlined chase (see func_00688C34.c).
 *
 * Verified against EU 0036EB04-0036ED00 instruction by instruction: loop counter r5 = 0..2,
 * r6 = running AND, r8 = 1, sb = 0; out vector at sp+0 (x) / sp+8 (z); per component the
 * |d * 0.1| -> lo-clamp to 0.01 -> bit-compare clamp to FLT_MAX -> up/down chase with the same
 * branch structure as 00688C34 (including the `movle r2, r8; ble` equal case that stores nothing).
 * Confidence: high. */
#include <float.h>
#include <math.h>
#include <string.h>
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
int func_0068C794(float *value, float target, float rate, float minStep, float maxStep);
void func_004D80A4(float *out, uint32_t angle, float radius);
void func_00115C54(float *out, float *a, float *b);

/* the inlined copy of 0068C794(value, target, 0.1, 0.01, FLT_MAX) */
static int chase(float *value, float target) {
    float cur = *value;
    float d = (target - cur) * 0.1f;
    if (d <= 0.0f || isunordered(d, 0.0f))
        d = -d;
    if (d < 0.01f) {
        d = 0.01f;
    } else {
        int32_t bits, maxbits;
        float fmax = FLT_MAX;
        memcpy(&bits, &d, 4);
        memcpy(&maxbits, &fmax, 4);
        if (bits > maxbits)   /* signed compare of the bit patterns */
            d = FLT_MAX;
    }
    if (cur < target) {
        float n = cur + d;
        if (target <= n || cur > n) {
            *value = target;
            return 1;
        }
        *value = n;
        return 0;
    }
    if (cur == target || isunordered(cur, target))
        return 1;
    float n = cur - d;
    if (n <= target) {
        *value = target;
        return 1;
    }
    if (n <= cur || isunordered(n, cur)) {
        *value = n;
        return 0;
    }
    *value = target;
    return 1;
}

void func_0036EB28(char *self, char *actor) {
    float speed = func_0036EAF8(self, actor);
    func_0068C794((float *)AT(self, 0x5C), speed, 0.3f, 0.01f, FLT_MAX);
    FLD(self, 0x04, uint32_t) = FLD(actor, 0x3D0, uint32_t);
    FLD(self, 0x0C, uint32_t) = FLD(actor, 0x3D8, uint32_t);
    int done = 1;
    for (uint32_t i = 0; i < 3; i++) {
        float v[3];
        func_004D80A4(v, FLD(self, 0x48, uint32_t) * i + FLD(self, 0x44, uint32_t), FLD(self, 0x5C, float));
        func_00115C54(v, v, (float *)AT(self, 0x04));
        int a = chase((float *)AT(self, 0x1C + i * 12), v[0]);
        int b = chase((float *)AT(self, 0x24 + i * 12), v[2]);
        done = done & a & b;
    }
    FLD(self, 0x6C, uint8_t) = (uint8_t)done;
}
