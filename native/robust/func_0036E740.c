/* USA 0036E740 <- EU 0036E71C: turn-controller state handler (state table data_00737FB0, see
 * func_0036DF60.c), called as handler(self, actor). Eases f5c, x, z and the angle in over the
 * remaining frames of the timer [0x64]:
 *     if (timer) { --timer; if (timer > 16) return; }
 *     k = max(timer, 1);
 *     f5c += (0036EAF8(self, actor) - f5c) / k;   x [0x04] += (actor->x [0x3D0] - x) / k;
 *     z [0x0C] += (actor->z [0x3D8] - z) / k;      0051D39C(&angle [0x44], target [0x50], timer);
 *     if (timer == 0) 0036E490(self, 8, actor);
 *
 * What was wrong: phantom `float fparam_0` parameter that is really the s0 result of 0036EAF8
 * (decompiled as void(void)); and the third argument of 0051D39C (r2 = the timer, still live from
 * `mov r2, r0` at 0036E758) was not what Ghidra passed.
 *
 * Verified against EU 0036E71C-0036E7F8: timer compare is unsigned (bhi #0x10) after the store;
 * k = timer <= 1 ? 1 : timer (signed movle), converted with vcvt.f32.s32, s3 = 1.0 / k;
 * each component: s2 = cur; s2 += (target - cur) * s3 (vmla: separate multiply and add, kept
 * as two statements so no FMA contraction happens); the timer is re-read for the final test.
 * Confidence: high. */
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
void func_0051D39C(int32_t *value, int32_t target, int32_t frames);
void func_0036E490(void *self, uint32_t state, void *arg);

static void ease(float *v, float target, float inv) {
    float step = (target - *v) * inv;
    *v = *v + step;
}

void func_0036E740(char *self, char *actor) {
    uint32_t timer = FLD(self, 0x64, uint32_t);
    if (timer != 0) {
        timer -= 1;
        FLD(self, 0x64, uint32_t) = timer;
        if (timer > 0x10)
            return;
    }
    float speed = func_0036EAF8(self, actor);
    int32_t n = FLD(self, 0x64, int32_t);
    int32_t k = n <= 1 ? 1 : n;
    float inv = 1.0f / (float)k;
    ease((float *)AT(self, 0x5C), speed, inv);
    ease((float *)AT(self, 0x04), FLD(actor, 0x3D0, float), inv);
    ease((float *)AT(self, 0x0C), FLD(actor, 0x3D8, float), inv);
    func_0051D39C((int32_t *)AT(self, 0x44), FLD(self, 0x50, int32_t), n);
    if (FLD(self, 0x64, int32_t) == 0)
        func_0036E490(self, 8, actor);
}
