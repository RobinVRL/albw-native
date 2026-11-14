/* USA 004F8998 <- EU 004F8970: EnemyBase::checkReaction(bool query, u8 *reacted) -> bool
 * (80 caller files). Decides whether the enemy reacts this frame (stun / knock-back / special
 * states) via the ride/reaction object self[0x510] (002AD0E4(obj, 1, vec, a, b) = start a
 * reaction) and the damage reaction table 004F8DF4(self, kind). query != 0: only test.
 * cfg = self[0x59C], st = self[0x5A0], data_00712468 / data_00709DF8: global event state.
 *
 *   flag = st & 0x20000000; if (!query) st &= ~0x20000000;
 *   if (cfg & 0x4000) return 0;
 *   if (query) { if (!00542B24(ride)) return 0; } else if (ride[4]) return 1;
 *   if (!reacted) reacted = &local; local = 0;
 *   if (!query && flag && 002AD0E4(ride, 1, self + 0x78C, 0, 0)) goto yes;
 *   if (!ride[4]) {
 *     if (self[0x848]) goto special;
 *     if (self[0x7FC] == 0 || == 5) {
 *       if (st & 0x20)            r = 002AD0E4(ride, 1, 0, 0, 0);
 *       else if (st & 0x40)       r = 002AD0E4(ride, 1, 0, 1, 0);
 *       else if (self[0x5A4] & 0x400 && !(st & 0x400)) r = 002AD0E4(ride, 1, 0, 0, 0);
 *       else if (self[0x89D]) { if (!(cfg & 0x10) || st & 0x400000) goto special;
 *                               r = 002AD0E4(ride, 1, 0, 0, 1); }
 *       else { if ((!(cfg & 0x80000000) && !self[0x8B5]) || !(cfg & 0x10) || st & 0x400000
 *                  || (self[0x8B5] && (*data_00712468)[0x10] & 3)) goto special;
 *              r = 002AD0E4(ride, 1, 0, 0, 0); }
 *       if (r) goto yes;
 *     }
 *     goto table;
 *   special: if (self[0x7FC] == 5 && (*data_00712468)[0x10] & 1 && (g = *data_00709DF8)
 *              && g[0x18] == 7 && (g[0x1C] == 3 || g[0x1C] == 2)
 *              && 002AD0E4(ride, 1, 0, 0, 0)) goto yes;
 *   }
 *   table: if (*reacted) goto tail;
 *   n = self[0x76C];
 *   if (!(u16)dmg[0x30] && *self[0x438] && self[0x420] && (u16)self[0x420][0x30]
 *       && !005569C8(*data_0070FB60) && *self[0x438] == 005568E8(*data_0070FB60)) {
 *       if (!query && 004F8DF4(self, 3)) *reacted = 1;
 *   } else if ((k = 004FB4FC(self, dmg, 1)) && 004F8DF4(self, k)) { *reacted = 1;
 *       if (query) return 1; }
 *   if (*reacted) goto tail;
 *   if (n - 4 <= 2 (unsigned) && (self[0x7FC] == 0 || == 5) && st & 0x200) {
 *       if (query) return 0; if (004F8DF4(self, 1)) *reacted = 1; goto clear;
 *   }
 *   if (st & 2 && 004F8EA8(self, 4, self + 0x82C)) { st &= ~2; *reacted = 1;
 *       if (query) return 1; goto clear; }
 *   tail: if (query) return 0;
 *   clear: if (st & 2) st &= ~2; if (!ride[4]) return 0;
 *   yes: *reacted = 1; return 1
 * (every st/cfg/byte read is a fresh load where the ARM does one.)
 *
 * Ghidra vs ARM: correct (EU 004F8970-004F8DBC insn by insn; the r2 = 1 passed to 004FB4FC is
 * not read by it). Rewritten typed for the hot path. Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_00712468[], data_00709DF8[], data_0070FB60[];

int func_00542B24(int ride);
int func_002AD0E4(uint32_t *obj, int a, float *v, uint32_t b, int c);
int func_005569C8(int p);
int func_005568E8(int p);
int func_004FB4FC(int *self, int *dmg);
int func_004F8DF4(int *self, uint32_t kind);
int func_004F8EA8(int *self, uint32_t kind, float *v);

#define ST(self) W(self, 0x5A0)

/* *self[0x438] == 005568E8(*data_0070FB60), with self[0x438] loaded BEFORE the call (ARM order) */
static int match_438(char *self)
{
    char *o = P(W(self, 0x438));
    uint32_t r = (uint32_t)func_005568E8((int)W(data_0070FB60, 0));
    return W(o, 0) == r;
}

static int react(char *self, uint32_t b, int c)
{
    return func_002AD0E4((uint32_t *)P(W(self, 0x510)), 1, 0, b, c);
}

int func_004F8998(uint32_t self_w, int query, uint32_t reacted_w)
{
    char *self = P(self_w);
    uint8_t local;
    uint32_t st = ST(self);
    uint32_t flag = st & 0x20000000;
    if (query == 0)
        ST(self) = st & ~0x20000000u;
    if (W(self, 0x59C) & 0x4000)
        return 0;
    if (query != 0) {
        if (func_00542B24((int)W(self, 0x510)) == 0)
            return 0;
    } else if (FLD(P(W(self, 0x510)), 4, uint8_t) != 0) {
        return 1;
    }
    uint8_t *reacted = reacted_w ? (uint8_t *)P(reacted_w) : &local;
    local = 0;
    if (query == 0 && flag != 0 &&
        func_002AD0E4((uint32_t *)P(W(self, 0x510)), 1, (float *)(self + 0x78C), 0, 0) != 0)
        goto yes;

    if (FLD(P(W(self, 0x510)), 4, uint8_t) == 0) {
        int special = 0;
        if (FLD(self, 0x848, uint8_t) != 0) {
            special = 1;
        } else {
            uint8_t s = FLD(self, 0x7FC, uint8_t);
            if (s == 0 || s == 5) {
                uint32_t a = ST(self);
                int r;
                if (a & 0x20) {
                    r = react(self, 0, 0);
                } else if (a & 0x40) {
                    r = react(self, 1, 0);
                } else if ((W(self, 0x5A4) & 0x400) && !(a & 0x400)) {
                    r = react(self, 0, 0);
                } else if (FLD(self, 0x89D, uint8_t) != 0) {
                    if (!(W(self, 0x59C) & 0x10) || (a & 0x400000)) { special = 1; goto sp; }
                    r = react(self, 0, 1);
                } else {
                    uint32_t cfg = W(self, 0x59C);
                    if ((!(cfg & 0x80000000u) && FLD(self, 0x8B5, uint8_t) == 0) ||
                        !(cfg & 0x10) || (a & 0x400000) ||
                        (FLD(self, 0x8B5, uint8_t) != 0 &&
                         (W(P(W(data_00712468, 0)), 0x10) & 3) != 0)) {
                        special = 1;
                        goto sp;
                    }
                    r = react(self, 0, 0);
                }
                if (r != 0)
                    goto yes;
            }
        }
    sp:
        if (special && FLD(self, 0x7FC, uint8_t) == 5 &&
            (W(P(W(data_00712468, 0)), 0x10) & 1) != 0) {
            uint32_t g = W(data_00709DF8, 0);
            if (g != 0 && FLD(P(g), 0x18, uint8_t) == 7) {
                uint32_t t = W(P(g), 0x1C);
                if ((t == 3 || t == 2) && react(self, 0, 0) != 0)
                    goto yes;
            }
        }
    }

    if (*reacted != 0)
        goto tail;
    {
        uint8_t n = FLD(self, 0x76C, uint8_t);
        uint32_t d = W(self, 0x43C);
        uint32_t o420;
        if (FLD(P(d), 0x30, uint16_t) == 0 && W(P(W(self, 0x438)), 0) != 0 &&
            (o420 = W(self, 0x420)) != 0 && FLD(P(o420), 0x30, uint16_t) != 0 &&
            func_005569C8((int)W(data_0070FB60, 0)) == 0 &&
            match_438(self)) {
            if (query == 0 && func_004F8DF4((int *)self, 3) != 0)
                *reacted = 1;
        } else {
            uint32_t k = (uint32_t)func_004FB4FC((int *)self, (int *)P(W(self, 0x43C)));
            if (k != 0 && func_004F8DF4((int *)self, k) != 0) {
                *reacted = 1;
                if (query != 0)
                    return 1;
            }
        }
        if (*reacted != 0)
            goto tail;
        uint8_t s = FLD(self, 0x7FC, uint8_t);
        if ((uint32_t)(n - 4) <= 2 && (s == 0 || s == 5) && (ST(self) & 0x200)) {
            if (query != 0)
                return 0;
            if (func_004F8DF4((int *)self, 1) != 0)
                *reacted = 1;
            goto clear;
        }
        if ((ST(self) & 2) && func_004F8EA8((int *)self, 4, (float *)(self + 0x82C)) != 0) {
            ST(self) &= ~2u;
            *reacted = 1;
            if (query != 0)
                return 1;
            goto clear;
        }
    }
tail:
    if (query != 0)
        return 0;
clear:
    if (ST(self) & 2)
        ST(self) &= ~2u;
    if (FLD(P(W(self, 0x510)), 4, uint8_t) == 0)
        return 0;
yes:
    *reacted = 1;
    return 1;
}
