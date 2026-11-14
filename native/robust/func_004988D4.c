/* USA 004988D4 <- EU 004988AC: sead PrimitiveRenderer helper (called from 004970E8 with
 * divisions 0x10 / 0x20): builds a circle (triangle fan) of `n` rim vertices plus a centre:
 *   vtx (stride 9 floats = 0x24 bytes), for i in [0,n):
 *       a = (float)i * 2pi / (float)n
 *       x = 005909A0(a) * 0.5;  y = 0059163C(a) * 0.5;      (the game's sin/cos, float in/out s0)
 *       v[i] = { x, y, 0, x, 1 - y, 1, ... }                  (pos xyz, then 3 more floats)
 *   v[n] = { 0, 0, 0, 0.5, 0.5, 0 };
 *   idx (3 x u16 per triangle), for i in [0,n): { i, (i + 1) % n, n }.
 * Both outputs are optional (NULL skips them).
 *
 * What was wrong: Ghidra modelled 005909A0 / 0059163C as void functions and used their float
 * argument as if it were the result (sin/cos values lost); it also read the unset `in_d8` (s17,
 * loaded only when n > 0 and only used inside the loop) and treated the uidivmod helper's r1
 * (remainder) as part of a 64-bit return. Return value: none (r0 is junk on exit; the caller
 * ignores it).
 *
 * Verified against EU 004988AC-004989B0: constants 2pi (0x40C90FDB), 0.5, 0, 1; v[3] is a raw
 * word copy of v[0]; v[4] = 1.0 - y (s17 - s0); index loop guarded by `cmp idx,#0; cmpne n,#0;
 * ble` (idx != NULL && n > 0), remainder from 001104E4 (__aeabi_uidivmod, r1) -> (i+1) % n
 * computed in C; [2] = (u16)n.
 * Dependency: 005909A0 / 0059163C must return their float result (Ghidra typed them
 * `void f(float)`); both now have float(float) rewrites in native/robust/.
 * Confidence: high for this function. */
#include "robust.h"

float func_005909A0(float a); /* sin-like, s0 -> s0 */
float func_0059163C(float a); /* cos-like, s0 -> s0 */

void func_004988D4(float *vtx, uint16_t *idx, int32_t n) {
    if (vtx) {
        int32_t i;
        for (i = 0; i < n; i++) {
            float a = (float)i * 6.28318548f / (float)n;
            float *v = vtx + i * 9;
            v[0] = func_005909A0(a) * 0.5f;
            float y = func_0059163C(a) * 0.5f;
            v[2] = 0.0f;
            v[1] = y;
            memcpy(&v[3], &v[0], 4);
            v[5] = 1.0f;
            v[4] = 1.0f - y;
        }
        float *c = vtx + n * 9;
        c[0] = 0.0f;
        c[1] = 0.0f;
        c[2] = 0.0f;
        c[3] = 0.5f;
        c[4] = 0.5f;
        c[5] = 0.0f;
    }
    if (idx && n > 0) {
        uint32_t i;
        for (i = 0; i < (uint32_t)n; i++) {
            idx[0] = (uint16_t)i;
            idx[2] = (uint16_t)n;
            idx[1] = (uint16_t)((i + 1) % (uint32_t)n);
            idx += 3;
        }
    }
}
