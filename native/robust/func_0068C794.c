/* USA 0068C794 <- EU 0068C76C: proportional chase:
 *     step = |(target - *value) * rate| clamped to [minStep, maxStep];
 *     return 00688C34(value, target, step);   (1 = arrived)
 * ~80 callers; several use the result (0036E560, 0019DDxx, 00422Bxx, ...).
 *
 * What was wrong: Ghidra typed it `void`, but it tail-returns the r0 of 00688C34 (bl then
 * pop {r4,pc} with r0 untouched), so natively every caller that tests the result read garbage.
 * The callee 00688C34 was itself wrong (see native/robust/func_00688C34.c).
 *
 * Disassembly (EU 0068C76C-0068C7B0): s5 = s0 - [r0]; s1 = s5 * s1; vcmpe s1, #0; vnegle s1
 * (negate when <= 0 or unordered); vcmpe s1, s2; vmovlo s1, s2 (and skip the max test);
 * else vcmpe s1, s3; vmovgt s1, s3; bl 00688C0C (r0, s0 unchanged); pop {r4, pc}.
 * Convention: r0 = value, s0 = target, s1 = rate, s2 = minStep, s3 = maxStep; int result in r0.
 * Confidence: high. */
#include <math.h>

int func_00688C34(float *value, float target, float step);

int func_0068C794(float *value, float target, float rate, float minStep, float maxStep) {
    float d = (target - *value) * rate;
    if (d <= 0.0f || isunordered(d, 0.0f))
        d = -d;
    if (d < minStep)
        d = minStep;
    else if (d > maxStep)
        d = maxStep;
    return func_00688C34(value, target, d);
}
