/* USA 00114E74 <- EU 00114E74: Matrix34 multiply, out = a * b (3x4 row-major, implicit
 * [0 0 0 1] last row), 16 static callers (second copy of 001157FC, identical code).
 *   out[i][j] = (a[i][0]*b[0][j] + b[1][j]*a[i][1]) + b[2][j]*a[i][2]          (j < 3)
 *   out[i][3] = ((a[i][3] + b[0][3]*a[i][0]) + b[1][3]*a[i][1]) + b[2][3]*a[i][2]
 * (vmul then two vmla; the translation column starts from a[i][3]; all products rounded.)
 * All of a and b are read before out is written (vstmia at the end): out may alias a or b.
 *
 * Bug fixed: the Ghidra C reads the rows of b as 8-byte integers and converts them with a
 * VALUE cast `(float)*(undefined8 *)(param_3 + 4)` (a vldmia of two floats): natively a 64-bit
 * integer -> float conversion, i.e. garbage matrices (4 sites, only half carry the albw:bits
 * marker the round-1 converter fix acts on).
 * Verified against EU 00114E74-00114F54 instruction by instruction. Confidence: high. */
#include "gameplay.h"

int func_00114E74(float *out, float *a, float *b) {
    float r[12];
    for (int i = 0; i < 3; i++) {
        float ai0 = a[4 * i + 0], ai1 = a[4 * i + 1], ai2 = a[4 * i + 2], ai3 = a[4 * i + 3];
        for (int j = 0; j < 3; j++) {
            float s = b[j] * ai0;
            s = s + b[4 + j] * ai1;
            s = s + b[8 + j] * ai2;
            r[4 * i + j] = s;
        }
        float t = ai3 + b[3] * ai0;
        t = t + b[7] * ai1;
        t = t + b[11] * ai2;
        r[4 * i + 3] = t;
    }
    memcpy(out, r, sizeof r);
    return (int)gp_u32(out);
}
