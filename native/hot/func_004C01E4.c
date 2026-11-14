/* USA 004C01E4 <- EU 004C01BC: Actor::updateLookTarget() -> r0   (58 caller files)
 *   (if self + 0x75C == 0: return 0 - the compiler's null test of an embedded member)
 *   o = self[0x774]; o = (!o || o == self + 0x75C) ? 0 : 00556068(o)   (linked actor)
 *   t = self[0x810] (current target id), me = self[0x2CC] (own id), pl = 005568E8(*data_0070FB60)
 *   if (t) {
 *       if (t == me) { if (!o) return 0; self[0x810] = 0; return o; }
 *       if (!o) { self[0x810] = 0; return 0; }
 *       if (o[0x2CC] != t) { self[0x810] = 0; return o[0x2CC]; }
 *       if (t != pl()) return 004C15EC(self, &self[0x810]);     (tail)
 *       goto look_at_player;
 *   }
 *   if (!o) { if (!me) return self; goto look_at_player; }
 *   tmp = o[0x2CC]; if (!me) return 0;
 *   if (tmp != me && tmp != pl()) return 004C15EC(self, &tmp);
 * look_at_player:
 *   p = 00520FC0() (player pos); self[0x7EC..0x7F4] = p[0..2]; self[0x7F0] += 1.0f;
 *   return p[2] (raw word)
 *
 * Ghidra vs ARM (round-2 conversion): the look-at height `self[0x7F0] += 1.0f` is written as
 * `param_1[0x1fc] = ALBW_AS_F32(param_1[0x1fc]) + fVar4` into an `undefined4` slot, i.e. a
 * float -> integer VALUE conversion (y = 5.3 -> stored 6 = a denormal), so every actor looks
 * at a point near the origin height. Fixed (float store). Verified EU 004C01BC-004C031C.
 * Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_0070FB60[];

int func_00556068(int obj);
int func_005568E8(int p);
int func_004C15EC(int self, uint32_t *id);
int func_00520FC0(void);

static uint32_t look_at_player(char *self)
{
    char *p = P((uint32_t)func_00520FC0());
    W(self, 0x7EC) = W(p, 0);
    W(self, 0x7F0) = W(p, 4);
    uint32_t z = W(p, 8);
    W(self, 0x7F4) = z;
    F(self, 0x7F0) = F(self, 0x7F0) + 1.0f;
    return z;
}

int func_004C01E4(uint32_t self_w)
{
    char *self = P(self_w);
    if (self_w + 0x75C == 0)
        return 0;
    uint32_t o = W(self, 0x774);
    if (o == 0 || o == self_w + 0x75C)
        o = 0;
    else
        o = (uint32_t)func_00556068((int)o);
    uint32_t t = W(self, 0x810);
    if (t != 0) {
        if (t == W(self, 0x2CC)) {
            if (o == 0)
                return 0;
            W(self, 0x810) = 0;
            return (int)o;
        }
        if (o == 0) {
            W(self, 0x810) = 0;
            return 0;
        }
        uint32_t ot = W(P(o), 0x2CC);
        if (ot != t) {
            W(self, 0x810) = 0;
            return (int)ot;
        }
        uint32_t pl = (uint32_t)func_005568E8((int)W(data_0070FB60, 0));
        if (W(self, 0x810) != pl)
            return func_004C15EC((int)self_w, (uint32_t *)(self + 0x810));
        return (int)look_at_player(self);
    }
    if (o == 0) {
        if (W(self, 0x2CC) == 0)
            return (int)self_w;
        return (int)look_at_player(self);
    }
    uint32_t tmp = W(P(o), 0x2CC);
    uint32_t me = W(self, 0x2CC);
    if (me == 0)
        return 0;
    if (tmp != me) {
        uint32_t pl = (uint32_t)func_005568E8((int)W(data_0070FB60, 0));
        if (tmp != pl)
            return func_004C15EC((int)self_w, &tmp);
    }
    return (int)look_at_player(self);
}
