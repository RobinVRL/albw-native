/* USA 0036DF60 <- EU 0036DF3C: turn-controller state update (a state-table handler of the
 * 0x36Dxxx-0x36Fxxx controller; its state table data_00737FB0 is filled by the static
 * initialiser 005E54B8 and dispatched by 0036E490). Called as handler(self, actor).
 *
 *   speed = 0036EAF8(self, actor);                  (float, s0)
 *   0068C794(&self->f5c, speed, 0.3, 0.01, FLT_MAX);  (smooth f5c towards speed)
 *   self->x = actor->[0x3D0]; self->z = actor->[0x3D8];
 *   if (!self->turning [0x68]) { self->angle [0x44] += self->rate [0x54]; return; }
 *   step angle [0x44] towards target [0x4C] by clamp(dist/4, 0x5B05B0, maxStep [0x54]);
 *   self->arrived [0x6C] = reached; if reached: 0036E490(self, 1, actor) (state change, tail call).
 *
 * What was wrong: 0036EAF8 was decompiled as void(void), so the speed passed to 0068C794 was an
 * uninitialised `in_s0`. Fixed together with native/robust/func_0036EAF8.c (returns the float).
 *
 * Verified against the EU disassembly 0036DF3C-0036E0B0 instruction by instruction:
 *  - r1 (actor) is still live at the bl to 0036EAD4 (only copied to sb before it).
 *  - 0068C794 args: s1=0.3 (pool 0036E0BC), s2=0.01 (0036E0B8), s3=FLT_MAX (0036E0B4).
 *  - target < angle branch: the distance is (u32)(target - angle) widened to u64 (subs/sbc/adds/
 *    adc pair) and converted by 00691F30 (__aeabi_ul2f); here (float)(uint64_t). Clamp order:
 *    `step >= max ? max : (min >= step ? min : step)`.
 *  - target >= angle branch: (float)(u32)(target - angle) * 0.25 -> u32 (vcvt.u32.f32, truncating),
 *    clamp `step < min ? min : (max < step ? max : step)`; the add/overflow checks at 0036E030-
 *    0036E070 (the 0036E054 `nop` keeps the flags of `cmp r5, r6`, so angle == target ends as
 *    reached with the angle unchanged).
 * Confidence: high. */
#include <float.h>
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
int func_0068C794(float *value, float target, float rate, float minStep, float maxStep);
void func_0036E490(void *self, uint32_t state, void *arg);

static uint32_t to_u32(float f) {
    /* vcvt.u32.f32: round toward zero, saturating (negative -> 0) */
    if (!(f > 0.0f)) return 0;
    if (f >= 4294967296.0f) return 0xFFFFFFFFu;
    return (uint32_t)f;
}

void func_0036DF60(char *self, char *actor) {
    float speed = func_0036EAF8(self, actor);
    func_0068C794((float *)AT(self, 0x5C), speed, 0.3f, 0.01f, FLT_MAX);
    FLD(self, 0x04, uint32_t) = FLD(actor, 0x3D0, uint32_t);
    FLD(self, 0x0C, uint32_t) = FLD(actor, 0x3D8, uint32_t);
    if (FLD(self, 0x68, uint8_t) == 0) {
        FLD(self, 0x44, uint32_t) += FLD(self, 0x54, uint32_t);
        return;
    }
    uint32_t cur = FLD(self, 0x44, uint32_t);
    uint32_t target = FLD(self, 0x4C, uint32_t);
    uint32_t maxStep = FLD(self, 0x54, uint32_t);
    const uint32_t minStep = 0x5B05B0;
    uint32_t next;
    int reached;
    if (target < cur) {
        uint32_t step = to_u32((float)(uint64_t)(uint32_t)(target - cur) * 0.25f);
        if (step >= maxStep) step = maxStep;
        else if (minStep >= step) step = minStep;
        next = cur + step;
        reached = next == target;
    } else {
        uint32_t step = to_u32((float)(uint32_t)(target - cur) * 0.25f);
        if (step < minStep) step = minStep;
        else if (maxStep < step) step = maxStep;
        if (cur >= target) {          /* cur == target */
            next = cur;
            reached = 1;
        } else {
            next = cur + step;
            if (target <= next || cur > next) {  /* overshoot or wrap: snap to the target */
                next = target;
                reached = 1;
            } else {
                reached = 0;
            }
        }
    }
    FLD(self, 0x6C, uint8_t) = (uint8_t)reached;
    FLD(self, 0x44, uint32_t) = next;
    if (reached)
        func_0036E490(self, 1, actor);
}
