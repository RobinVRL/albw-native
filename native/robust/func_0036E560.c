/* USA 0036E560 <- EU 0036E53C: turn-controller state handler (state table data_00737FB0, see
 * func_0036DF60.c), called as handler(self, actor). Turns the angle [0x44] to face opposite the
 * actor's angle [actor+0x93C] (angle + 0x80000000), with a start delay [0x64]:
 *   - nothing while actor->[0x8F8] is 2 or 3;
 *   - delay: at 0x3C calls 00328E30(actor, (s8)self->[0x6A], 0) and sets the "turning" flag
 *     [0x6E] = (angle - actorAngle != 0x80000000); then --delay;
 *   - then: angle += rate [0x40]; while turning, an extra correction step (fixed 0x04444444 when
 *     the remaining arc is outside [0x55555555, 0x80000000), else 10% of the remaining arc,
 *     at least 0xB60B60, snapping when within it);
 *     f5c chases 0036EAF8(self, actor) via 0068C794(rate 0.1, min 0.01, max 0.24);
 *     y [0x08] moves towards actor->y [0x0C] by at most 0.075;
 *     when rate == max [0x54], the turn snapped (or was not needed), f5c arrived and y arrived:
 *     0036E490(self, 0, actor).
 *
 * What was wrong: the speed passed to 0068C794 was an uninitialised `in_s0` (the s0 result of
 * 0036EAF8, decompiled as void(void)); the result of 0068C794 (also decompiled as void) was used.
 *
 * Verified against EU 0036E53C-0036E6F8 instruction by instruction, notably:
 *  - r5 = (rate == max) is computed before the turning block and ANDed with r3 (0 unless the snap
 *    branch ran) only when the turning block runs (0036E678); skipping the block keeps r5.
 *  - the arc test is unsigned: (diff - 0x55555555) >= 0x2AAAAAAB (bls).
 *  - 10% step: vcvt.f32.u32 of (0x80000000 - diff), * 0.1, vcvt.s32.f32 (truncate); compared
 *    signed against 0xB60B60 (bgt), then the unsigned remaining arc (bhi).
 *  - y chase: gt / lo / otherwise (hs incl. NaN: snap and r8 = 1).
 *  - final test `tst r0, r8` with r0 = 0068C794 result & r5.
 * Confidence: high. */
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
int func_0068C794(float *value, float target, float rate, float minStep, float maxStep);
void func_00328E30(void *actor, int value, uint32_t flag);
void func_0036E490(void *self, uint32_t state, void *arg);

void func_0036E560(char *self, char *actor) {
    uint8_t mode = FLD(actor, 0x8F8, uint8_t);
    if (mode == 2 || mode == 3)
        return;
    uint32_t *actorAngle = (uint32_t *)AT(actor, 0x93C);
    if (FLD(self, 0x64, int32_t) != 0) {
        if (FLD(self, 0x64, int32_t) == 0x3C) {
            func_00328E30(actor, FLD(self, 0x6A, int8_t), 0);
            FLD(self, 0x6E, uint8_t) = (uint32_t)(FLD(self, 0x44, uint32_t) - *actorAngle) != 0x80000000u;
        }
        FLD(self, 0x64, int32_t) -= 1;
        return;
    }
    uint32_t angle = FLD(self, 0x40, uint32_t) + FLD(self, 0x44, uint32_t);
    FLD(self, 0x44, uint32_t) = angle;
    int ok = FLD(self, 0x40, int32_t) == FLD(self, 0x54, int32_t);
    if (FLD(self, 0x6E, uint8_t) != 0) {
        uint32_t base = *actorAngle;
        uint32_t diff = angle - base;
        if (diff != 0x80000000u) {
            int snapped = 0;
            if (diff - 0x55555555u >= 0x2AAAAAABu) {
                FLD(self, 0x44, uint32_t) = angle + 0x04444444u;
            } else {
                uint32_t rest = 0x80000000u - diff;
                int32_t step = (int32_t)((float)rest * 0.1f);
                if (step > 0xB60B60) {
                    FLD(self, 0x44, uint32_t) = (uint32_t)step + angle;
                } else if (rest > 0xB60B60u) {
                    FLD(self, 0x44, uint32_t) = angle + 0xB60B60u;
                } else {
                    FLD(self, 0x6E, uint8_t) = 0;
                    snapped = 1;
                    FLD(self, 0x44, uint32_t) = base + 0x80000000u;
                }
            }
            ok = ok & snapped;
        }
    }
    float speed = func_0036EAF8(self, actor);
    int arrived = func_0068C794((float *)AT(self, 0x5C), speed, 0.1f, 0.01f, 0.24f) & ok;
    float target = FLD(actor, 0x0C, float);
    float y = FLD(self, 0x08, float);
    float dy = target - y;
    int yDone = 0;
    if (dy > 0.075f) {
        FLD(self, 0x08, float) = y + 0.075f;
    } else if (dy < -0.075f) {
        FLD(self, 0x08, float) = y - 0.075f;
    } else {
        yDone = 1;
        FLD(self, 0x08, float) = target;
    }
    if (arrived & yDone)
        func_0036E490(self, 0, actor);
}
