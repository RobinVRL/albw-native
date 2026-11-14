/* USA 00115960 <- EU 00115960: Matrix44 multiply  out = a * b  (row-major 4x4):
 *     out[i][j] = ((a[i][0]*b[0][j] + a[i][1]*b[1][j]) + a[i][2]*b[2][j]) + a[i][3]*b[3][j]
 *   (vmul then three non-fused vmla, single precision). b (r2) is loaded completely first
 *   (vldmia r2, {s8-s23}), then a's rows 0-1, rows 0-1 of out are computed, a's rows 2-3 are
 *   loaded BEFORE out rows 0-1 are stored: out may alias a or b.
 *   1 static caller (004979CC, projection/camera matrices).
 * Round-2 defect: half of b's elements are read as `(float)*(undefined8 *)(param_3 + 8)` (the
 * vldm pair pattern): a 64-bit integer VALUE conversion instead of the low word's bits, so
 * rows 2-3 of b were garbage natively (the high words were already ALBW_AS_F32).
 * Returns r0 as left by the vstmia writebacks (out + 0x30), as an int (callers declare
 * `int func_00115960(float *, float *, float *)`; nobody reads it).
 * Verified against EU 00115960-00115A8C instruction by instruction. Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

int func_00115960(float *out, float *a, float *b) {
    float B[16], A[16];
    memcpy(B, b, sizeof B);
    memcpy(A, a, 8 * sizeof(float));
    float r[8];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++) {
            float v = B[j] * A[4 * i + 0];
            v = v + B[4 + j] * A[4 * i + 1];
            v = v + B[8 + j] * A[4 * i + 2];
            v = v + B[12 + j] * A[4 * i + 3];
            r[4 * i + j] = v;
        }
    memcpy(A + 8, a + 8, 8 * sizeof(float));   /* second vldmia r1! before the stores */
    memcpy(out, r, sizeof r);
    for (int i = 2; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float v = B[j] * A[4 * i + 0];
            v = v + B[4 + j] * A[4 * i + 1];
            v = v + B[8 + j] * A[4 * i + 2];
            v = v + B[12 + j] * A[4 * i + 3];
            r[4 * (i - 2) + j] = v;
        }
    memcpy(out + 8, r, sizeof r);
    return (int)gp_u32(out + 12);
}
