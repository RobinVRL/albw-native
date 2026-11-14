/* compilefix: asm-verified rewrite taken from native/route/alt/func_003F4E98.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 003F4E98 (EU 003F4E78): nw::eft (particle effect) stripe/ribbon emitter history update:
 * when the emitter res type is 5 (res+0x328) and the particle has a history buffer
 * (particle+0x148), writes the current position (particle+0x2C or +8 for world-space-off),
 * the emitter matrix (emitter+0x54..+0x80, or identity) and the scale into the ring record at
 * the write index, smooths the previous two points (factor res-ext+0x20, 0.7), computes the
 * normalised direction / side vectors, advances the ring indices (+4/+8) and counters
 * (+0x580C, +0x5818), keeps the last matrix at +0x581C; then the stripe-emission time test on
 * particle+0x154 against res+0x56C (tail call 003F58E8 when due).
 * Route: effect calculation (nw::eft system data_0070A518, created by TaskRender prepare
 * 0014BDE0 -> 002E2F78; every effect emitted from the title screen on).
 * Bug: the converted Ghidra source did not compile (float assigned to `undefined4 *local_38`):
 * tripwire stub in the link.
 * Verified instruction by instruction against EU 003F4E78..003F5468: the signed `cmpgt/ble`
 * guard (index>2 && count>3), the bit compare `vmov r1,s0; cmp #0x3F800000; bge` on the
 * smoothing factor, ring wrap `sub/ldrlt/sublt`, vmul-then-vadd (unfused, no vmla) smoothing,
 * vmls cross product order, vldm/vstm bit copies, the static identity Matrix34 guard
 * (007270F4/007AF2A4; the ARM has no guard release), `smull 0x51EB851F` /100 division, the
 * vcmpe/bge (NaN -> not ge) time test, 2^31 reset on the first frame.  The return value is the
 * tail call's (else dead r0; the 3 callers do not read it).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "../route/route.h"

extern uint32_t data_007270F4[], data_007AF2A4[];
int32_t func_00100174(uint32_t *guard);
int func_001119F4(uint32_t *dst, uint32_t *src);
void *func_003E1980(float *out, const float *a, const float *b);
void func_003F58E8(int param_1, int param_2);

static void cpy3(void *d, const void *s) { memcpy(d, s, 12); }

int func_003F4E98(char *em, char *pt)
{
    int32_t sb = RF(pt, 0, int32_t) - 1;
    char *res = RP(em, 0xD8);
    if (RF(res, 0x328, int32_t) == 5 && RF(pt, 0x148, uint32_t) != 0) {
        char *h = RP(pt, 0x148);
        char *ext = res + RF(res, 0x55A, uint16_t);
        int32_t idx = RF(h, 8, int32_t);
        char *rec = h + idx * 0x58 + 0xC;
        int32_t cnt = RF(ext, 0x10, int32_t);
        float *A = (float *)(h + 0x5858), *B = (float *)(h + 0x5864), *D = (float *)(h + 0x584C);
        if (RF(res, 0x550, uint16_t) & 1) {
            cpy3(rec, pt + 8);
            char *mtx = rec + 0x10;
            if ((data_007270F4[0] & 1) == 0 && func_00100174(data_007270F4) != 0) {
                float *I = (float *)data_007AF2A4;
                I[0] = 1.0f; I[1] = 0.0f; I[2] = 0.0f; I[3] = 0.0f;
                I[4] = 0.0f; I[5] = 1.0f; I[6] = 0.0f; I[7] = 0.0f;
                I[8] = 0.0f; I[9] = 0.0f; I[10] = 1.0f; I[11] = 0.0f;
            }
            func_001119F4((uint32_t *)mtx, data_007AF2A4);
        } else {
            float k = RF(ext, 0x20, float);
            uint32_t kbits;
            memcpy(&kbits, &k, 4);
            if (sb > 2 && cnt > 3 && (int32_t)kbits < 0x3F800000 && idx != RF(h, 4, int32_t)) {
                const float *P = (const float *)(pt + 0x2C);
                int32_t i1 = idx - 1;
                if (i1 < 0)
                    i1 = RF(ext, 0x10, int32_t) - 1;
                int32_t i0 = i1 - 1;
                if (i0 < 0)
                    i0 = RF(ext, 0x10, int32_t) - 1;
                float dx = (P[0] - A[0]) * k, dy = (P[1] - A[1]) * k, dz = (P[2] - A[2]) * k;
                A[0] = A[0] + dx;
                A[1] = A[1] + dy;
                A[2] = A[2] + dz;
                float ex = (A[0] - B[0]) * k, ey = (A[1] - B[1]) * k, ez = (A[2] - B[2]) * k;
                B[0] = B[0] + ex;
                B[1] = B[1] + ey;
                B[2] = B[2] + ez;
                cpy3(h + i0 * 0x58 + 0xC, B);
                float *r1 = (float *)(h + i1 * 0x58 + 0xC);
                const float c = 0.7f; /* 0x3F333333 */
                float fx = (P[0] - B[0]) * c, fy = (P[1] - B[1]) * c, fz = (P[2] - B[2]) * c;
                r1[0] = B[0] + fx;
                r1[1] = B[1] + fy;
                r1[2] = B[2] + fz;
                cpy3(rec, P);
            } else {
                cpy3(rec, pt + 0x2C);
                cpy3(B, pt + 0x2C);
                cpy3(A, pt + 0x2C);
            }
            memcpy(rec + 0x10, em + 0x54, 0x20);
            memcpy(rec + 0x30, em + 0x74, 0x10);
        }
        RF(rec, 0xC, float) = RF(pt, 0x64, float) * RF(RP(em, 0x18), 0x218, float);
        if (RF(h, 8, int32_t) != RF(h, 4, int32_t)) {
            int32_t ip = RF(h, 8, int32_t) - 1;
            if (ip < 0)
                ip = RF(ext, 0x10, int32_t) - 1;
            const float *prev = (const float *)(h + ip * 0x58 + 0xC);
            const float *cur = (const float *)rec;
            if (sb < 2) {
                D[0] = cur[0] - prev[0];
                D[1] = cur[1] - prev[1];
                D[2] = cur[2] - prev[2];
            } else {
                float t[3] = { cur[0] - prev[0], cur[1] - prev[1], cur[2] - prev[2] };
                func_003E1980(t, t, t);
                float kk = RF(ext, 0x24, float);
                float gx = (t[0] - D[0]) * kk, gy = (t[1] - D[1]) * kk, gz = (t[2] - D[2]) * kk;
                D[0] = D[0] + gx;
                D[1] = D[1] + gy;
                D[2] = D[2] + gz;
            }
            func_003E1980(D, D, D);
            cpy3(rec + 0x4C, D);
            if (RF(ext, 0, int32_t) == 2) {
                uint32_t v[3] = { RF(rec, 0x14, uint32_t), RF(rec, 0x24, uint32_t), RF(rec, 0x34, uint32_t) };
                cpy3(rec + 0x40, v);
            } else {
                float m0 = RF(rec, 0x14, float), m1 = RF(rec, 0x24, float), m2 = RF(rec, 0x34, float);
                float t[3];
                float z = m0 * D[1]; z = z - m1 * D[0];
                float x = m1 * D[2]; x = x - m2 * D[1];
                float y = m2 * D[0]; y = y - m0 * D[2];
                t[0] = x; t[1] = y; t[2] = z;
                func_003E1980(t, t, t);
                cpy3(rec + 0x40, t);
            }
        }
        int32_t w = RF(h, 8, int32_t) + 1;
        RF(h, 8, int32_t) = w;
        if (w >= RF(ext, 0x10, int32_t))
            RF(h, 8, int32_t) = 0;
        int32_t r = RF(h, 4, int32_t);
        if (RF(h, 8, int32_t) == r) {
            r++;
            RF(h, 4, int32_t) = r;
            if (r >= RF(ext, 0x10, int32_t))
                RF(h, 4, int32_t) = 0;
        }
        int32_t n = RF(h, 0x580C, int32_t) + 1;
        RF(h, 0x580C, int32_t) = n;
        if (n > RF(ext, 0x10, int32_t))
            n = RF(ext, 0x10, int32_t);
        RF(h, 0x580C, int32_t) = n;
        memcpy(h + 0x581C, em + 0x54, 0x20);
        memcpy(h + 0x583C, em + 0x74, 0x10);
        RF(h, 0x5818, int32_t) += 1;
    }
    if (RF(res, 0x548, uint32_t) & 1) {
        if (sb == 0)
            RF(pt, 0x154, float) = 2147483648.0f; /* 0x4F000000 */
        int32_t prod = (RF(pt, 4, int32_t) - 1) * RF(res, 0x564, int32_t);
        int32_t hi = (int32_t)(((int64_t)0x51EB851F * prod) >> 32);
        if (sb < (hi >> 5) - (hi >> 31))
            return 0;
        int32_t lim = RF(res, 0x56C, int32_t);
        float t = RF(pt, 0x154, float);
        if (!(t >= (float)lim)) {
            if (lim != 0 || RF(res, 0x568, int32_t) != 1) {
                RF(pt, 0x154, float) = t + 1.0f;
                return 0;
            }
        }
        RF(pt, 0x154, float) = 0.0f;
        func_003F58E8((int)GPTR_OF(em), (int)GPTR_OF(pt));
    }
    return 0;
}
