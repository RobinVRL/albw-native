/* USA 0051E5F8 <- EU 0051E5D0: rotation (Matrix33) of a model/actor at the current animation time:
 *   if (self[0x2B80] (s32 n) != 0 && bits(t = 0051E8AC(self, a, f0, f1)) != bits(1.0f)) {
 *     x = (float)n * t;  k = vcvt.s32(x);  if ((float)k != x && !(0 <= x)) k--;   (floor)
 *     Quat q; 0048B5D4(&q, self + 0x2B68, k);  00491404(out, &q);   (keyframe -> Mtx33)
 *   } else 001151CC(out, self + 0x2B84);                           (Mtx33 copy, tail call)
 * 11 static callers. The 1.0 test is an integer compare of the bits (vmov r0,s0; cmp).
 *
 * What was wrong: (1) Ghidra's signature (int, float *, float) dropped r2 and s1, which are
 * passed through to 0051E8AC (in_r2 / in_s1 uninitialised); (2) the frame index was converted
 * with `(uint)fVar3`: a negative time is UB on x86 instead of vcvt.s32's signed truncation
 * (here gp_vcvt_s32, saturating like the ARM); (3) the floor test on NaN (`hi` is true when
 * unordered) differed.
 * SIGNATURE: ARM argument order is (r0 self, r1 out, r2 a, s0 f0, s1 f1). Round 2 (systemic2
 * params.json: final r0 r1 r2 s0 s1) regenerated the 12 converted caller files with
 * `extern int func_0051E5F8(int, float *, undefined4, float, float)`: this definition takes the
 * same classes (self and `a` as 32-bit words, converted with gp_ptr, so -m64 never reads the
 * undefined upper half of a 32-bit argument register) and can be linked. Round 2 still has bugs
 * (2) and (3) (`uVar4 = (uint)fVar3`).
 * Verified against EU 0051E5D0-0051E67C instruction by instruction. Confidence: high. */
#include "gameplay.h"

float func_0051E8AC(int self, float *a, float f0, float f1);
int func_0048B5D4(float *q, float *keys, uint32_t frame);
int func_00491404(float *m, float *q);
int func_001151CC(uint32_t *dst, uint32_t *src);

/* exact body with native pointers (also used by func_004CEAF0.c: its `a` is a stack Vec3, whose
 * address need not fit the 32-bit word of the func_ prototype on -m64) */
int albw_anim_rotation(char *self, float *out, float *a, float f0, float f1) {
    int32_t n = FLD(self, 0x2B80, int32_t);
    if (n != 0) {
        float t = func_0051E8AC((int)gp_u32(self), a, f0, f1);
        if (gp_f2u(t) != 0x3F800000u) {
            float x = (float)n * t;
            int32_t k = gp_vcvt_s32(x);
            float kf = (float)k;
            if (VCMP_NE(kf, x) && VCMP_HI(0.0f, x))
                k = k - 1;
            float q[5];
            func_0048B5D4(q, (float *)AT(self, 0x2B68), (uint32_t)k);
            return func_00491404(out, q);
        }
    }
    return func_001151CC((uint32_t *)out, (uint32_t *)AT(self, 0x2B84));
}

int func_0051E5F8(int self_w, float *out, uint32_t a, float f0, float f1) {
    return albw_anim_rotation((char *)gp_ptr((uint32_t)self_w), out, (float *)gp_ptr(a), f0, f1);
}
