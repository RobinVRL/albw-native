/* USA 00150E40 <- EU 00150E40: Actor::Actor(ActorBase::CreateArg *arg) -> this
 * The constructor of the common actor class above ActorBase (004ED00C): 174 caller files, one
 * per actor class constructor. 0x40C bytes; vtables data_006C7D70 (+0) and data_006C7D70+0x54
 * (secondary base at +0x320); embedded EffectSlot at +0x324 (ctor 003529C0, dtor 00352A28).
 *
 *   004ED00C(this, arg); this[0x320] = data_006DBB6C; 003529C0(this + 0x324) -> r0 (= this+0x324)
 *   [r0 + 0x40] = this; this = r0 - 0x324 (as on ARM: from the member ctor's return value)
 *   this[0] = data_006C7D70; this[0x320] = data_006C7D70 + 0x54
 *   0x368..0x370 = arg[1..3] (position); 0x374..0x37C = data_007A9248[0..2];
 *   0x380..0x388 = data_007A9230[0..2]; bytes 0x38C-0x38E, 0x390-0x397 = 0; 0x398..0x3A8 = 0;
 *   0x3AC..0x3B4 = {-1.0, -0.1, 2.4}; 0x3C0 = 0; 0x3B8 = 0xFF; 0x3C4/0x3C8 = data_00693008[2..3];
 *   0x3BC = data_006F44C4; bytes 0x3CC-0x3CE = 0; 0x3D0..0x3D8 = arg[1..3]; 0x3DC..0x3E4 = 0.0;
 *   0x3E8 = arg[8]; 0x3EC = &this[0x3BC]; 0x3F0 = 0x3F4 = 0x400 = 0x408 = 0;
 *   0x3F8 = 0x3FC = &this[0x3F8] (empty list); 0x404 = -1;
 *   0x3AC = this[0x2D0][0x34]; 0x3C0 = this; 0x3C4/0x3C8 = data_00693008[0..1];
 *   p = this[0x2D0] + 0x18; this[0x3A4] = 0054DE18(p, 0) ? (this[0x3A0] = 0054DE00(p, 0))
 *                                                        : this[0x3A0];
 *   0x404 = 0x20;
 *   if (!this[0x408]) { tbl = (*data_0070A500)[0x30][0x20]; o = this->vt[0x48](this);
 *       o->vt[8](o); if (00581850(tbl, o[1])) { m = new(0x1C) (0010BAB4, nothrow);
 *       this[0x408] = m ? 002978FC(m, this + 0x320, this) : 0; } }
 *   return this
 *
 * Ghidra vs ARM: correct (EU 00150E40-00151070 insn by insn; operator new's ignored r1 is the
 * uninitialised r7 on ARM). Rewritten with typed 32-bit game words (the Ghidra C stores native
 * pointers through `undefined4` slots). Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_006DBB6C[], data_006C7D70[], data_007A9248[], data_007A9230[],
    data_00693008[], data_006F44C4[], data_0070A500[];

int func_004ED00C(uint32_t *self, uint32_t *arg);
int func_003529C0(uint32_t *self);
int func_0054DE18(int p, uint32_t i);
int func_0054DE00(int p, uint32_t i);
int func_00581850(int tbl, uint32_t *key);
void *func_0010BAB4(uint32_t size);
int func_002978FC(int mem, int owner, int actor);

typedef uint32_t (*vfn1_t)(void *self);   /* virtual call: native pointer arg (full register) */

int func_00150E40(uint32_t self_w, uint32_t arg_w)
{
    char *a = P(arg_w);
    char *base = P((uint32_t)func_004ED00C((uint32_t *)P(self_w), (uint32_t *)a));
    W(base, 0x320) = DATA_W(data_006DBB6C);
    char *slot = P((uint32_t)func_003529C0((uint32_t *)(base + 0x324)));
    W(slot, 0x40) = gp_u32(base);
    char *t = slot - 0x324;
    uint32_t tw = gp_u32(t);

    W(t, 0x000) = DATA_W(data_006C7D70);
    W(t, 0x320) = DATA_W(data_006C7D70) + 0x54;
    W(t, 0x368) = W(a, 4); W(t, 0x36C) = W(a, 8); W(t, 0x370) = W(a, 0xC);
    W(t, 0x374) = W(data_007A9248, 0); W(t, 0x378) = W(data_007A9248, 4);
    W(t, 0x37C) = W(data_007A9248, 8);
    W(t, 0x388) = W(data_007A9230, 8);
    W(t, 0x380) = W(data_007A9230, 0); W(t, 0x384) = W(data_007A9230, 4);
    for (int o = 0x38C; o <= 0x38E; o++) FLD(t, o, uint8_t) = 0;
    for (int o = 0x390; o <= 0x397; o++) FLD(t, o, uint8_t) = 0;
    for (int o = 0x398; o <= 0x3A8; o += 4) W(t, o) = 0;
    F(t, 0x3AC) = -1.0f; F(t, 0x3B0) = gp_u2f(0xBDCCCCCDu); F(t, 0x3B4) = gp_u2f(0x4019999Au);
    W(t, 0x3C0) = 0;
    W(t, 0x3B8) = 0xFF;
    W(t, 0x3C4) = W(data_00693008, 8); W(t, 0x3C8) = W(data_00693008, 0xC);
    W(t, 0x3BC) = DATA_W(data_006F44C4);
    FLD(t, 0x3CC, uint8_t) = 0; FLD(t, 0x3CD, uint8_t) = 0; FLD(t, 0x3CE, uint8_t) = 0;
    W(t, 0x3D0) = W(a, 4); W(t, 0x3D4) = W(a, 8); W(t, 0x3D8) = W(a, 0xC);
    F(t, 0x3DC) = 0.0f; F(t, 0x3E0) = 0.0f; F(t, 0x3E4) = 0.0f;
    W(t, 0x3F0) = 0; W(t, 0x3F4) = 0;
    W(t, 0x3E8) = W(a, 0x20); W(t, 0x3EC) = tw + 0x3BC;
    W(t, 0x400) = 0; W(t, 0x3FC) = tw + 0x3F8; W(t, 0x408) = 0; W(t, 0x3F8) = tw + 0x3F8;
    W(t, 0x404) = 0xFFFFFFFFu;

    char *r0 = P(W(t, 0x2D0));
    uint32_t p = gp_u32(r0) + 0x18;
    W(t, 0x3AC) = W(r0, 0x34);
    W(t, 0x3C0) = tw;
    W(t, 0x3C8) = W(data_00693008, 4);
    W(t, 0x3C4) = W(data_00693008, 0);
    uint32_t v;
    if (func_0054DE18((int)p, 0) == 0) {
        v = W(t, 0x3A0);
    } else {
        v = (uint32_t)func_0054DE00((int)p, 0);
        W(t, 0x3A0) = v;
    }
    W(t, 0x3A4) = v;
    W(t, 0x404) = 0x20;
    if (W(t, 0x408) == 0) {
        uint32_t tbl = W(P(W(P(W(data_0070A500, 0)), 0x30)), 0x20);
        uint32_t o = GFN(vfn1_t, W(P(W(t, 0)), 0x48))(t);
        GFN(vfn1_t, W(P(W(P(o), 0)), 8))(P(o));
        if (func_00581850((int)tbl, (uint32_t *)P(W(P(o), 4))) != 0) {
            uint32_t m = gp_u32(func_0010BAB4(0x1C));
            uint32_t r = 0;
            if (m != 0)
                r = (uint32_t)func_002978FC((int)m, (int)(tw + 0x320), (int)tw);
            W(t, 0x408) = r;
        }
    }
    return (int)tw;
}
