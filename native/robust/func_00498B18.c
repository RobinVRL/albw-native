/* USA 00498B18 <- EU 00498AF0: sead PrimitiveRenderer helper (called from 004970E8 with
 * (slices, stacks) = (8, 4) and (16, 8)): builds a UV sphere of radius 0.5.
 *   vtx: stride 9 floats (0x24 bytes); ring r in [0,stacks), slice s in [0,slices):
 *       lat  = ((float)(r+1) / ((float)stacks + 1) - 0.5) * pi
 *       y    = 0059163C(lat) * 0.5;   rad = 005909A0(lat) * 0.5
 *       lon  = (float)s * 2pi / slices;  if r is even: lon -= (2pi / slices) * 0.5
 *       v[r*slices+s] = { 005909A0(lon)*rad, y, 0059163C(lon)*rad, y + 0.5, s / slices, 0.5 - y }
 *     then two poles at N = slices*stacks: v[N] = {0,-0.5,0, 0,0.5,1}, v[N+1] = {0,0.5,0, 1,0.5,0}.
 *   idx (u16 triangles): a fan to pole N over ring 0, 2 triangles per quad between rings
 *     (odd rings shifted by one slice), a fan to pole N+1 over the last ring.
 * Both outputs optional (NULL skips).
 *
 * What was wrong: Ghidra modelled the game's sin/cos (005909A0 / 0059163C, s0 -> s0) as void
 * and kept their float argument as the "result", and it read the uninitialised d9-d12 (`in_dN`:
 * s17-s25 constants loaded with conditional vldrgt, used only inside the loops); the
 * __aeabi_uidivmod remainder (001104E4, r1) was folded into a 64-bit value. Returns nothing.
 *
 * Verified against EU 00498AF0-00498E18 instruction by instruction: args r0=vtx, r1=idx (spilled,
 * reloaded from [sp+0x40]), r2=slices, r3=stacks; N = slices*stacks kept at [sp]; index offsets
 * 3*slices + 6*slices*band (u16 units); parity = band - (band rounded to even) = band & 1;
 * pole indices are stored as (u16)N / (u16)(N+1). Remainders computed in C (unsigned %).
 * Dependency: 005909A0 / 0059163C must return their float result (Ghidra typed them
 * `void f(float)`); both now have float(float) rewrites in native/robust/.
 * Confidence: high. */
#include "robust.h"

float func_005909A0(float a); /* sin-like, s0 -> s0 */
float func_0059163C(float a); /* cos-like, s0 -> s0 */

void func_00498B18(float *vtx, uint16_t *idx, int32_t slices, int32_t stacks) {
    const float PI = 3.14159274f, TWO_PI = 6.28318548f;
    int32_t N = slices * stacks;
    if (vtx) {
        int32_t r, s;
        for (r = 0; r < stacks; r++) {
            float lat = ((float)(r + 1) / ((float)stacks + 1.0f) - 0.5f) * PI;
            float y = func_0059163C(lat) * 0.5f;
            float rad = func_005909A0(lat) * 0.5f;
            float u0 = y + 0.5f, u2 = 0.5f - y;
            for (s = 0; s < slices; s++) {
                float lon = (float)s * TWO_PI / (float)slices;
                if ((r & 1) == 0) {
                    float half = TWO_PI / (float)slices * 0.5f;
                    lon = lon - half;
                }
                float x = func_005909A0(lon) * rad;
                float z = func_0059163C(lon) * rad;
                float *v = vtx + (r * slices + s) * 9;
                v[0] = x;
                v[1] = y;
                v[2] = z;
                v[3] = u0;
                v[4] = (float)s / (float)slices;
                v[5] = u2;
            }
        }
        float *p = vtx + N * 9;
        p[0] = 0.0f; p[1] = -0.5f; p[2] = 0.0f; p[3] = 0.0f; p[4] = 0.5f; p[5] = 1.0f;
        p += 9;
        p[0] = 0.0f; p[1] = 0.5f; p[2] = 0.0f; p[3] = 1.0f; p[4] = 0.5f; p[5] = 0.0f;
    }
    if (!idx)
        return;
    uint32_t n = (uint32_t)slices;
    int32_t i;
    if (slices > 0) {
        uint16_t *e = idx;
        for (i = 0; i < slices; i++, e += 3) {
            e[0] = (uint16_t)N;
            e[1] = (uint16_t)i;
            e[2] = (uint16_t)((uint32_t)(i + 1) % n);
        }
    }
    int32_t bands = stacks - 1;
    int32_t b;
    for (b = 0; b < bands; b++) {
        int32_t parity = b & 1;
        if (slices <= 0)
            continue;
        uint16_t *e = idx + (3 + b * 6) * slices;
        for (i = 0; i < slices; i++, e += 6) {
            int32_t a = (b + 1) * slices + (int32_t)((uint32_t)(i + parity) % n);
            int32_t c = b * slices + (int32_t)((uint32_t)(i + 1) % n);
            e[0] = (uint16_t)(b * slices + i);
            e[1] = (uint16_t)a;
            e[2] = (uint16_t)c;
            e[3] = (uint16_t)a;
            e[4] = (uint16_t)((b + 1) * slices + (int32_t)((uint32_t)(i + 1 + parity) % n));
            e[5] = (uint16_t)c;
        }
    }
    if (slices > 0) {
        uint16_t *e = idx + 3 * slices + 6 * slices * bands;
        for (i = 0; i < slices; i++, e += 3) {
            e[0] = (uint16_t)(N + 1);
            e[1] = (uint16_t)(slices * bands + (int32_t)((uint32_t)(i + 1) % n));
            e[2] = (uint16_t)(slices * bands + i);
        }
    }
}
