/* USA 00352F0C (EU 00352EE8): per-frame update of a player-attached prop with a bone-chain model
 * (+0xBA0 model, +0xA88 carrier, +0xBA4/+0xBA8 s16 joint-index array): eases a camera/attention
 * blend weight (+0xB8C, up by 0.03 towards 1 while 0058A44C(this), down by 0.05 otherwise) and
 * feeds the blended point to *(*data_00708998+0x18) (001E8440(.., .., 1)); then places the model
 * at the carrier's matrix (001151F8 + translation copy, 004CEAF0) and orients every joint of the
 * model's skeleton towards the corresponding source joint (shortest-arc quaternion 00115B68 ->
 * Mtx33 00491404, identity when degenerate; 00491F5C), finally tail-calls 004F68AC(this, a2).
 * Route: player/actor update reached from the TaskRender call graph (depth 3-5); stub today.
 * Bug: the converted source did not compile (float bit-casts of the stack Vec3 became pointer
 * casts); Ghidra also passed phantom in_r2/in_r3 to the tail call.
 * Verified instruction by instruction against EU 00352EE8..0035322C: unfused vmla easing,
 * `vstrlo` (ordered less-than) clamp of y to *(this+0xC) + 0.1, 0.85 scale of the source
 * y (+0x98), unsigned `ldrhi` index-array bound, signed `ble`/`blt` joint loop, the early return
 * WITHOUT the 004F68AC tail call when *data_00708998 == 0.  001E8440's 3rd argument is the
 * ARM r2 = 1 (its converted definition types it float: the word's bits are passed unchanged).
 * Confidence: high (flow), medium (names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"

extern uint32_t data_0070FB60[], data_00708998[];
int func_0058A44C(int self);
int func_00556E64(int obj);
void func_001E8440(int obj, float *v, float bits_r2);
int func_001151F8(uint32_t *dst, uint32_t *rot, uint32_t *trans);
int func_004CEAF0(int obj);
int func_004D7F70(float *v, uint32_t ang);
int func_00115C54(float *out, float *a, float *b);
float func_00115DC8(float *v);
int func_00115B68(float *out, float *a, float *b);
void func_00491404(float *m33, float *q);
void func_00491F5C(float *out, float *m33, float *in);
void func_004F68AC(int self, int a2, uint32_t a3, float *a4);

void func_00352F0C(char *self, int a2)
{
    int moving = func_0058A44C((int)GPTR_OF(self));
    char *pl = GPTR_TO(char, data_0070FB60[0]);
    if (pl != 0 && func_00556E64((int)GPTR_OF(pl)) == 0) {
        char *m = GPTR_TO(char, data_00708998[0]);
        if (m == 0)
            return; /* EU 00353220: no tail call */
        uint32_t tgt = RF(m, 0x18, uint32_t);
        if (tgt != 0) {
            float *w = &RF(self, 0xB8C, float);
            if (moving) {
                RF(self, 0xB80, uint32_t) = RF(self, 0x3D0, uint32_t);
                RF(self, 0xB84, uint32_t) = RF(self, 0xC, uint32_t);
                RF(self, 0xB88, uint32_t) = RF(self, 0x3D8, uint32_t);
                float s0 = *w;
                *w = s0 + (1.0f - s0) * 0.03f;
            } else {
                float s0 = *w;
                *w = s0 + (-s0) * 0.05f;
            }
            float *v = GPTR_TO(float, RF(pl, 0x1C, uint32_t));
            float s2 = v[0], s1 = v[2], s3 = RF(self, 0xC, float), t = *w;
            float out[3];
            out[0] = s2 + (RF(self, 0xB80, float) - s2) * t;
            out[1] = s3 + (RF(self, 0xB84, float) - s3) * t;
            out[2] = s1 + (RF(self, 0xB88, float) - s1) * t;
            uint32_t one = 1;
            float one_bits;
            memcpy(&one_bits, &one, 4);
            func_001E8440((int)tgt, out, one_bits);
        }
    }
    if (RF(self, 0xBA0, uint32_t) != 0) {
        char *obj = RP(self, 0xBA0);
        char *src = RP(RP(self, 0xA88), 0x1C);
        RF(obj, 0x164, uint32_t) |= 0x40000000;
        func_001151F8((uint32_t *)RAT(obj, 0x80), (uint32_t *)RAT(src, 0x64), (uint32_t *)RAT(src, 0x88));
        obj = RP(self, 0xBA0);
        RF(obj, 0x164, uint32_t) |= 0x40000000;
        RF(obj, 0x74, uint32_t) = RF(src, 0x94, uint32_t);
        RF(obj, 0x78, uint32_t) = RF(src, 0x98, uint32_t);
        RF(obj, 0x7C, uint32_t) = RF(src, 0x9C, uint32_t);
        func_004CEAF0((int)RF(self, 0xBA0, uint32_t));

        float p[3];
        memcpy(p, RAT(src, 0x88), sizeof p);
        char *skel = RP(RP(self, 0xBA0), 0x24);
        char *srcskel = RP(RP(self, 0x40C), 0x24);
        float s16 = RF(src, 0x98, float);
        float ymin = RF(self, 0xC, float) + 0.1f;
        if (p[1] < ymin)
            p[1] = ymin;
        int32_t n = RF(skel, 0x10, int32_t);
        float s19 = p[1];
        float off[3] = { 0.0f, 0.0f, 0.0f };
        func_004D7F70(off, RF(self, 0x3E8, uint32_t));
        func_00115C54(p, p, off);
        float up[3] = { 0.0f, 1.0f, 0.0f };
        if (n > 0) {
            s16 = s16 * 0.85f;
            for (int32_t i = 0; i < n; i++) {
                const int16_t *ix = RF(self, 0xBA4, uint32_t) > (uint32_t)i
                                        ? GPTR_TO(int16_t, RF(self, 0xBA8, uint32_t)) + i
                                        : GPTR_TO(int16_t, RF(self, 0xBA8, uint32_t));
                char *sj = RP(srcskel, 0x14) + *ix * 0x30;
                float d[3];
                d[0] = RF(sj, 0xC, float) - p[0];
                d[1] = s16;
                d[2] = RF(sj, 0x2C, float) - p[2];
                func_00115DC8(d);
                float q[4];
                float m33[9];
                if (func_00115B68(q, up, d) != 0) {
                    func_00491404(m33, q);
                } else {
                    static const float id[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
                    memcpy(m33, id, sizeof m33);
                }
                float *e = (float *)(RP(skel, 0x14) + i * 0x30);
                func_00491F5C(e, m33, e);
                e = (float *)(RP(skel, 0x14) + i * 0x30);
                RF(e, 0xC, uint32_t) = RF(sj, 0xC, uint32_t);
                RF(RP(skel, 0x14) + i * 0x30, 0x1C, float) = s19;
                RF(RP(skel, 0x14) + i * 0x30, 0x2C, uint32_t) = RF(sj, 0x2C, uint32_t);
            }
        }
    }
    func_004F68AC((int)GPTR_OF(self), a2, 0, 0);
}
