/* USA 00567588 (EU 00567560): material-animation apply forwarder (kind-1 animation objects:
 * texture pattern / material colour curves, e.g. Link_FaceChange and Link_Blink on Link's face).
 * EU: push {r0-r3, lr}; vpush {d0}; sub sp, #20; s0' = *param_5; pair = {s0 (incoming frame),
 * *param_5}; 0068FDFC(r0, r1, r2, r3, &pair) with s0 = *param_5, s1 untouched.
 * 0068FDFC reads the frame to evaluate from pair[0] (and pair[1] as the second value).
 * What was wrong: Ghidra's text had no float parameter (the frame arrives in s0, which it did not
 * model), so pair[0] was never written and the material curves were evaluated at a stale stack
 * word: Link's face stayed on eye_alb.0 (eyes open) in bed although the bed animation 0x9E calls
 * setFace(7) (0028C8EC: Link_FaceChange frame 7 = eyes closed) (BOOT_LOG 115).
 * Callers: 00168E9C (native/robust, passes the slot frame) and 001699A0 (native/game, the
 * clamped frame). Confidence: high (instruction-level). */
#include <stdint.h>

extern void func_0068FDFC(int param_1, int *param_2, int *param_3, int *param_4, float *param_5,
                          float fparam_0, float fparam_1);

void func_00567588(int anim, int *ctx20, int *entry, int *p4, uint32_t *p5, float frame) {
    float pair[2];
    union { uint32_t u; float f; } v = {*p5};
    pair[0] = frame;
    pair[1] = v.f;
    func_0068FDFC(anim, ctx20, entry, p4, pair, v.f, 0.0f);
}
