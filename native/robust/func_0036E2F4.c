/* USA 0036E2F4 <- EU 0036E2D0: turn-controller state handler (state table data_00737FB0, see
 * func_0036DF60.c), called as handler(self, actor):
 *     speed = 0036EAF8(self, actor);  f5c moves towards speed by at most 0.24;
 *     if (self->timer [0x64]) { if (--timer == 0x3A) 00328E30(actor, (s8)self->[0x6A], 0); return; }
 *     accelerate rate [0x40] by *data_0070A64C up to max [0x54]; angle [0x44] += rate;
 *     once rate == max: y [0x08] moves towards actor->y [0x0C] by at most 0.075; when it gets
 *     there (|d| <= 0.075) it snaps and changes state: 0036E490(self, 0, actor).
 *
 * What was wrong: Ghidra gave it a phantom third parameter `float fparam_0` that is really the
 * s0 result of 0036EAF8 (decompiled as void(void)), so natively the speed came from whatever
 * the caller left in that argument slot (the state dispatcher passes none).
 *
 * Verified against EU 0036E2D0-0036E3DC:
 *  - vaddgt/vsublo pairs: d > 0.24 -> cur+0.24; else d < -0.24 -> cur-0.24; else (incl. NaN) speed.
 *  - the timer is decremented and stored before the compare with 0x3A; tail call b 00328E0C
 *    with r0 = actor, r1 = ldrsb [self+0x6A], r2 = 0.
 *  - rate update: signed compares (bge / strge).
 *  - y chase: gt -> store cur+0.075; lo -> store cur-0.075; otherwise (hs, incl. NaN) store the
 *    target and tail-call b 0036E46C (0036E490) with r0 = self, r1 = 0, r2 = actor.
 * Note: the ARM code keeps `self` in r3 across the bl to 0036EAD4 (armcc knew that leaf does not
 * touch r3); irrelevant in C. Confidence: high. */
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor);
void func_00328E30(void *actor, int value, uint32_t flag);
void func_0036E490(void *self, uint32_t state, void *arg);
extern int32_t data_0070A64C;  /* rate acceleration per frame */

void func_0036E2F4(char *self, char *actor) {
    float speed = func_0036EAF8(self, actor);
    float cur = FLD(self, 0x5C, float);
    float d = speed - cur;
    float n;
    if (d > 0.24f)
        n = cur + 0.24f;
    else if (d < -0.24f)
        n = cur - 0.24f;
    else
        n = speed;
    FLD(self, 0x5C, float) = n;

    int32_t timer = FLD(self, 0x64, int32_t);
    if (timer != 0) {
        timer -= 1;
        FLD(self, 0x64, int32_t) = timer;
        if (timer == 0x3A)
            func_00328E30(actor, FLD(self, 0x6A, int8_t), 0);
        return;
    }
    int32_t rate = FLD(self, 0x40, int32_t);
    if (rate < FLD(self, 0x54, int32_t)) {
        rate = data_0070A64C + rate;
        FLD(self, 0x40, int32_t) = rate;
        if (rate >= FLD(self, 0x54, int32_t))
            FLD(self, 0x40, int32_t) = FLD(self, 0x54, int32_t);
    }
    FLD(self, 0x44, int32_t) = (int32_t)((uint32_t)FLD(self, 0x40, int32_t) + (uint32_t)FLD(self, 0x44, int32_t));
    if (FLD(self, 0x40, int32_t) != FLD(self, 0x54, int32_t))
        return;
    float target = FLD(actor, 0x0C, float);
    float y = FLD(self, 0x08, float);
    float dy = target - y;
    if (dy > 0.075f) {
        FLD(self, 0x08, float) = y + 0.075f;
        return;
    }
    if (dy < -0.075f) {
        FLD(self, 0x08, float) = y - 0.075f;
        return;
    }
    FLD(self, 0x08, float) = target;
    func_0036E490(self, 0, actor);
}
