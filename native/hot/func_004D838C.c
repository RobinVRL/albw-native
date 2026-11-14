/* USA 004D838C <- EU 004D8364: bool chasePos(Vec3 *cur, const Vec3 *target, f32 rate,
 *     f32 minStep, f32 maxStep)   (66 caller files: actors homing on a point)
 *   d0 = |cur - target| (x^2 + y^2 + z^2 by vmul/vmla, vsqrt);  step = d0 * rate;
 *   if (step `lo` minStep) step = minStep; else if (step > maxStep) step = maxStep;
 *       (NaN step: neither test holds -> step stays NaN)
 *   diff = target - cur (00115C70); d = |diff|;
 *   if (!(d `hi` step)) { *cur = *target (word copy); return 1; }   (`hi`: NaN moves)
 *   inv = 1.0f / d; dir = diff * inv; *cur = *cur + dir * step (00115DAC); return 0
 *
 * Ghidra vs ARM: (1) the first distance is `SQRT(...) * rate` with SQRT = double sqrt, so the
 * product is formed in double and rounded once (ARM: float vsqrt, then a float vmul: two
 * roundings) - can differ by 1 ulp; (2) the clamp `if (min <= s && ...)` sends a NaN step to
 * minStep (ARM keeps NaN). Fixed. Verified EU 004D8364-004D8460. Confidence: high. */
#include "hot.h"
#include <math.h>
#pragma STDC FP_CONTRACT OFF

int func_00115C70(float *out, float *a, float *b);
int func_00115DAC(float *out, float *a, float *b, float s);

int func_004D838C(uint32_t cur_w, uint32_t target_w, float rate, float min_step, float max_step)
{
    float *cur = (float *)P(cur_w), *target = (float *)P(target_w);
    float dx = cur[0] - target[0];
    float dy = cur[1] - target[1];
    float dz = cur[2] - target[2];
    float q = dx * dx;
    float t = dy * dy;
    q = q + t;
    t = dz * dz;
    q = q + t;
    float step = sqrtf(q) * rate;
    if (VCMP_LO(step, min_step))
        step = min_step;
    else if (VCMP_GT(step, max_step))
        step = max_step;

    float diff[3];
    func_00115C70(diff, target, cur);
    float x = diff[0], y = diff[1], z = diff[2];
    float s = x * x;
    t = y * y;
    s = s + t;
    t = z * z;
    s = s + t;
    float d = sqrtf(s);
    if (!VCMP_HI(d, step)) {
        uint32_t w[3];
        memcpy(w, target, 12);
        memcpy(cur, w, 12);
        return 1;
    }
    float inv = 1.0f / d;
    diff[0] = x * inv;
    diff[1] = y * inv;
    diff[2] = z * inv;
    func_00115DAC(cur, diff, cur, step);
    return 0;
}
