/* USA 0016A2FC <- EU 0016A2FC: SkelAnim::SkelAnim(int nBones, ?, int nLayers) -> this
 * Constructor of the skeletal-animation player of 0016898C / 00169A80 (120 caller files):
 *   +0 = -1; +4..+0x24 = 0; +0x28 = 3; +0x2C = (this+0x30 != 0) ? this+0x30 : 0 (`adds/strne`,
 *   so +0x2C keeps the 0 written by the +0x24.. stores only if the address wraps to 0);
 *   +0x78 = 10; byte +0x7C = 0; +0x80 = 0; bytes +0x84/+0x85 = 0; +0x88 = 0.0; +0x8C = 1.0;
 *   +0x90..+0xA4 = 0
 *   layers:  m = new[](nLayers*0x28) (0010BA78; r1 = nBones, ignored);
 *            a = m ? vec_ctor(m, 00270A2C, 0x28, nLayers) : 0;
 *            if (nLayers > 0 && a) { +0x14 = a; +0x10 = nLayers; +0xC = 0; }
 *   previous layers: the same into +0x20/+0x1C/+0x18
 *   groups:  n = 2*nLayers; if (n > 0) { m = new[](n*0x14, heap 0, align 4) (0010CEE0);
 *            a = m ? vec_ctor(m, 00169A28, 0x14, n) : 0; if (a) { +0x94 = a; +0x90 = n; } }
 *   bones:   if (nBones > 0 && (m = new[](nBones*4, 0, 4))) { +8 = m; +4 = nBones; }
 *            zero +8[0 .. +4) (word loop unrolled by 2, as on ARM)
 *   return this
 * r2 is not used.
 *
 * Ghidra vs ARM: correct (EU 0016A2FC-0016A4E4 insn by insn). Confidence: high (flow),
 * medium (names: the layout is the one 0016898C / 00169A80 use). */
#include "hot.h"

int func_00270A2C(int *);
int func_00169A28(int *);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t align);
void *func_00100118(void *array, void *ctor, uint32_t size, uint32_t count);

int func_0016A2FC(uint32_t self_w, int32_t n_bones, uint32_t unused, int32_t n_layers)
{
    char *self = P(self_w);
    uint32_t sw = gp_u32(self);

    W(self, 0) = 0xFFFFFFFFu;
    for (int o = 4; o <= 0x24; o += 4)
        W(self, o) = 0;
    W(self, 0x28) = 3;
    W(self, 0x2C) = 0;
    if (sw + 0x30 != 0)
        W(self, 0x2C) = sw + 0x30;
    W(self, 0x78) = 10;
    FLD(self, 0x7C, uint8_t) = 0;
    W(self, 0x80) = 0;
    FLD(self, 0x84, uint8_t) = 0;
    FLD(self, 0x85, uint8_t) = 0;
    F(self, 0x88) = 0.0f;
    F(self, 0x8C) = 1.0f;
    for (int o = 0x90; o <= 0xA4; o += 4)
        W(self, o) = 0;

    uint32_t sz = (uint32_t)n_layers * 0x28;
    for (int k = 0; k < 2; k++) {
        void *m = func_0010BA78(sz);
        void *a = 0;
        if (m)
            a = func_00100118(m, (void *)func_00270A2C, 0x28, (uint32_t)n_layers);
        if (n_layers > 0 && a) {
            int base = k ? 0x18 : 0x0C;
            W(self, base + 8) = gp_u32(a);
            W(self, base + 4) = (uint32_t)n_layers;
            W(self, base) = 0;
        }
    }
    int32_t n = (int32_t)((uint32_t)n_layers << 1);
    if (n > 0) {
        void *m = func_0010CEE0((uint32_t)n * 0x14, 0, 4);
        void *a = 0;
        if (m)
            a = func_00100118(m, (void *)func_00169A28, 0x14, (uint32_t)n);
        if (a) {
            W(self, 0x94) = gp_u32(a);
            W(self, 0x90) = (uint32_t)n;
        }
    }
    if (n_bones > 0) {
        void *m = func_0010CEE0((uint32_t)n_bones << 2, 0, 4);
        if (m) {
            W(self, 8) = gp_u32(m);
            W(self, 4) = (uint32_t)n_bones;
        }
    }
    int32_t cnt = (int32_t)W(self, 4);
    for (int32_t i = 0; i < cnt; i++)
        W(P(W(self, 8)), 4 * i) = 0;
    return (int)sw;
}
