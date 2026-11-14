/* USA 0042DA98 <- EU 0042DA78: collision narrow phase, closest points of two segments
 * [p1,q1] and [p2,q2] (the classic clamped s/t solve). Returns the squared distance in s0 and,
 * when non-NULL, the segment parameters s (out_s) and t (out_t).
 *     float f(const float p1[3], const float q1[3], const float p2[3], const float q2[3],
 *             float *out_s, float *out_t);           (out_s/out_t are the 5th/6th args, on the stack)
 * Callers: capsule pair tests 0042BB2C, 0042C7B8, 0042D464 (reached via the shape dispatcher 0042DD38).
 *
 * What was wrong in the Ghidra C: the three "near zero" tests compare the float BIT PATTERN as a
 * signed integer (`vmov r0, sN; cmp r0, #0x34000000; bge/blt`, i.e. x >= 2^-23 for positives,
 * every negative/-0 counted as small); Ghidra printed them as value conversions
 * `0x33ffffff < (int)fVar5`, which natively truncates the float (always "small" for |x| < 1),
 * so the parallel-segment branch was taken for nearly every pair and s/t came out 0.
 * The clamping branch structure also uses the unordered-true conditions (bhs/ble) of the VFP
 * compares; kept with VCMP_*.
 *
 * Verified against EU 0042DA78-0042DD0C instruction by instruction: d1 = q1-p1 (sp+0x70),
 * d2 = q2-p2 (sp+0x2C), r = p1-p2 (sp+0x38); a,e,b,c,f as vmul/vmla chains in that operand
 * order; denom = a*e - b*b (vmls); register roles s2=sN s3=sD s1=tN s4=tD through the branch
 * graph 42DB74/42DBB8/42DBEC/42DC0C/42DC14/42DC20/42DC28/42DC2C; sc/tc with `vnegle` +
 * bit compare; final vector (r + d1*sc) - d2*tc and its squared length.
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

float func_0042DA98(const float *p1, const float *q1, const float *p2, const float *q2,
                    float *out_s, float *out_t) {
    float d1x = q1[0] - p1[0], d1y = q1[1] - p1[1], d1z = q1[2] - p1[2];
    float d2x = q2[0] - p2[0], d2y = q2[1] - p2[1], d2z = q2[2] - p2[2];
    float rx = p1[0] - p2[0], ry = p1[1] - p2[1], rz = p1[2] - p2[2];

    float a = d1x * d1x + d1y * d1y + d1z * d1z;
    float e = d2x * d2x + d2y * d2y + d2z * d2z;
    float b = d1x * d2x + d1y * d2y + d1z * d2z;
    float c = d1x * rx + d1y * ry + d1z * rz;
    float f = d2x * rx + d2y * ry + d2z * rz;
    float denom = a * e - b * b;

    float sN, sD, tN, tD;
    if (gp_f2i_bits(denom) >= 0x34000000) {
        sN = b * f - e * c;
        tN = a * f - b * c;
        sD = denom;
        tD = denom;
        if (VCMP_HS(sN, 0.0f)) {
            if (!VCMP_LE(sN, sD)) {     /* sN > sD */
                tN = f + b;
                sN = sD;
                tD = e;
            }
        } else {
            tN = f;
            tD = e;
            sN = 0.0f;
        }
    } else {                            /* (nearly) parallel or degenerate */
        tN = f;
        tD = e;
        sN = 0.0f;
        sD = 1.0f;
    }

    if (VCMP_HS(tN, 0.0f)) {
        if (!VCMP_LE(tN, tD)) {         /* tN > tD */
            float n = b - c;
            tN = tD;
            if (VCMP_HS(n, 0.0f)) {
                if (VCMP_LE(n, a)) {
                    sN = n;
                    sD = a;
                } else {
                    sN = sD;
                }
            } else {
                sN = 0.0f;
            }
        }
    } else {
        float n = -c;
        tN = 0.0f;
        if (VCMP_LO(n, 0.0f)) {
            sN = 0.0f;
        } else if (VCMP_GT(n, a)) {
            sN = sD;
        } else {
            sN = n;
            sD = a;
        }
    }

    float m = sN;
    if (VCMP_LE(m, 0.0f)) m = -m;
    float sc = gp_f2i_bits(m) < 0x34000000 ? 0.0f : sN / sD;
    m = tN;
    if (VCMP_LE(m, 0.0f)) m = -m;
    float tc = gp_f2i_bits(m) < 0x34000000 ? 0.0f : tN / tD;

    if (out_s) *out_s = sc;
    if (out_t) *out_t = tc;

    float vx = (rx + d1x * sc) - d2x * tc;
    float vy = (ry + d1y * sc) - d2y * tc;
    float vz = (rz + d1z * sc) - d2z * tc;
    return vx * vx + vy * vy + vz * vz;
}
