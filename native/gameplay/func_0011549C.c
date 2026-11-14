/* USA 0011549C <- EU 0011549C: Matrix33 multiply, out = a * b (3x3 row-major), 23 callers.
 *   out[i][j] = (b[0][j]*a[i][0] + b[1][j]*a[i][1]) + b[2][j]*a[i][2]
 * (vmul then two vmla, products rounded). b and a are fully read before the single vstmia to
 * out, so out may alias a or b.
 * Verified against EU 0011549C-00115540. Confidence: high. */
#include "gameplay.h"

int func_0011549C(float *out, float *a, float *b) {
    float r[9];
    for (int i = 0; i < 3; i++) {
        float ai0 = a[3 * i + 0], ai1 = a[3 * i + 1], ai2 = a[3 * i + 2];
        for (int j = 0; j < 3; j++) {
            float s = b[j] * ai0;
            s = s + b[3 + j] * ai1;
            s = s + b[6 + j] * ai2;
            r[3 * i + j] = s;
        }
    }
    memcpy(out, r, sizeof r);
    return (int)gp_u32(out);
}
