/* USA 00581A18 <- EU 005819F0: broad-phase grid cell index of a point (26 x 26 cells):
 *     int f(u32 unused, const float *p, int layer);
 *   g = (*data_0070C8E0)->[0x38] + 0x183C + layer * 0x143 * 4   (grid record per layer)
 *   cx = vcvt.s32(((p.x - (g[1] + g[4]) * 0.5) + 26) * 0.5)   (g[1],g[4] = floats at +4, +0x10)
 *   cz = vcvt.s32(((p.z - (g[3] + g[6]) * 0.5) + 26) * 0.5)   (+0xC, +0x18)
 *   each: <= 0 -> 0, >= 26 -> 25;  return cx + cz * 26
 * 3 static callers (broad-phase register/query paths).
 * Round-2 defect: the two conversions are C `(int)` casts (x86 cvttss2si): a coordinate whose
 * product overflows int gives 0x80000000 -> cell 0, where vcvt.s32 saturates to 0x7FFFFFFF ->
 * cell 25 (far +x/+z positions landed in the opposite corner cell); NaN gives 0 on both.
 * Operation order exactly as the ARM ((a + b) * 0.5, then p - that, then + 26, then * 0.5).
 * Prototype = round 2's `int (undefined4, float *, int)`.
 * Verified against EU 005819F0-00581A9C instruction by instruction. Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern uint32_t data_0070C8E0;

static int32_t clamp_cell(int32_t v) {
    if (v <= 0) return 0;
    if (v >= 0x1A) return 0x19;
    return v;
}

int func_00581A18(uint32_t unused, float *p, int layer) {
    char *mgr = (char *)gp_ptr(data_0070C8E0);
    char *g = GPTR(mgr, 0x38, char) + 0x183C + (uint32_t)layer * 0x143u * 4u;
    float x = p[0] - (FLD(g, 0x4, float) + FLD(g, 0x10, float)) * 0.5f;
    float z = p[2] - (FLD(g, 0xC, float) + FLD(g, 0x18, float)) * 0.5f;
    int32_t cx = clamp_cell(gp_vcvt_s32((x + 26.0f) * 0.5f));
    int32_t cz = clamp_cell(gp_vcvt_s32((z + 26.0f) * 0.5f));
    return cx + cz * 26;
}
