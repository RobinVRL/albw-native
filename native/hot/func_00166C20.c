/* USA 00166C20 <- EU 00166C24: LytAnimSet::bind(u32 idx, const SafeString &name, Pane *target)
 * (116 caller files / 533 call sites: every UI layout loads its "<layout>_<name>.bflan"
 * animations through this)
 *   arc = *data_0070B898 + 0x54 (archive / resource accessor)
 *   name.vt[8](&name); self[0x24].vt[8](&self[0x24])          (SafeString::assureTermination)
 *   fn = 00689578(&buf, "%s_%s.bflan", self.layoutName (+0x28), name.str); fn.vt[8](fn)
 *   res = arc->vt[0xC](arc, 'mina' (0x616E696D), fn.str, 0)
 *   e = idx < self[8] (unsigned) ? self[0xC] + idx * 0x38 : self[0xC];   003FD888(e, res)
 *   link = 0; n = 005689D8(e) (animated pane count)
 *   if (n) { f = 005807BC(self + 0x14, e, self[0x20], 001B6F0C) (find an existing link set);
 *     if (f) link = f - self[0x20] (node offset);
 *     if (!link) for (i = 0; i < n; i++) {                       (signed loop)
 *       pe = 005689E8(e) + i * 0x34; ss = {data_006F5988, pe + 0x19}; ss.vt[8](&ss);
 *       g = 003FDF90(self[0][0x14], ss.str) (group of the pane); if (!g) continue;
 *       for (j = 0; j < 005689B4(e); j++) {                     (re-read every iteration)
 *         te = 005689C4(e) + j * 0x1C; ss2 = {data_006F5988, te}; ss2.vt[8](&ss2);
 *         if (003FDF90(self[0][0x14], te) != g) continue;
 *         ss = {data_006F5988, pe}; pl = self[0][0x10]; ss.vt[8](&ss);
 *         p = pl->vt[0x2C](pl, pe, 1) (find pane); if (!p) break;
 *         if (!link) { m = new(0x24) (0010BAB4); if (m) { m[0] = m[4] = 0;
 *             m[8..0x14] = e[0..0xC] (16-byte copy); m[0x18..0x20] = 0;
 *             0010B380(m + 0x18, n, 0, 4) (PtrArray buffer) }
 *           link = m; 0010F1DC(self + 0x14, m + self[0x20]); ++self[0x1C]; }
 *         if (no element k of link's PtrArray (+0x18 count, +0x20 buffer) has [0x44] == p) {
 *           a = new(0x48); if (a) { 00407788(a) (ctor); a[0x3C] = 0; a[0x44] = p; a[0x40] = 0; }
 *           00407538(a, p, link + 8); if (count < cap) buffer[count++] = a; }
 *         break; } } }
 *   e[0x2C] = 0
 *   if (link && target) { e[0x2C] = link; r = 001B6E54(link, self[0], target, arc);
 *        e[0x10] = r; r->vt[0x10](r, 0); }
 *   else { r = 00404550(self[0]); e[0x10] = r; r->vt[0x20](r, e[4], arc);
 *        if (target) 003FDD84(target, r, 0);
 *        else for (j = 0; j < 005689B4(e); j++)
 *            003FDD84(003FDF90(self[0][0x14], 005689C4(e) + j * 0x1C), r, 0); }
 *   e[0x20] = (float)(u16)e[4][8] (frame count); e[0x28] = (e[4][0xA] == 1) (loop);
 *   e[0x18] = e[0x14] = 0.0f; e[0x1C] = 1.0f; e[0x24] = 0
 *
 * Ghidra vs ARM (round-2 conversion), real bugs:
 *  1. the SafeString::assureTermination virtual before the pane lookup is called with NO
 *     arguments (`(**(code **)(iVar13 + 8))()`): `this` dropped -> it runs on a garbage pointer;
 *  2. the new 0x48-byte element is taken from 00407788's return value, but the converted
 *     00407788 is `void` (ARM returns this): its [0x3C]/[0x44]/[0x40] stores and the PtrArray
 *     slot get a garbage pointer. Here the allocation itself is used (the ctor returns it);
 *  3. the u16 -> float frame count takes its rounding mode from an undefined in_fpscr
 *     (harmless).
 * Verified insn by insn, EU 00166C24-001670D8. Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_0070B898[], data_006F5988[];

int func_00689578(uint32_t *buf, const char *fmt, uint32_t a, uint32_t b);
int *func_003FD888(uint32_t *e, int *res);
int func_005689D8(int e);
int func_005689E8(int e);
int func_005689B4(int e);
int func_005689C4(int e);
int func_005807BC(int list, uint32_t e, int off, void *fn);
int func_003FDF90(int tbl, int name);
void *func_0010BAB4(uint32_t size);
uint32_t func_0010B380(void *arr, int32_t max, void *heap, int32_t align);
uint32_t func_0010F1DC(void *list, void *node);
void func_00407788(uint32_t *self);
void func_00407538(uint32_t *self, int *pane, uint32_t *x);
int *func_001B6E54(int link, int layout, int target, uint32_t arc);
int func_00404550(int layout);
int func_003FDD84(uint32_t pane, int *anim, uint32_t x);
int func_001B6F0C(void);

typedef void (*vss_t)(void *ss);
typedef uint32_t (*vres_t)(void *self, uint32_t tag, uint32_t name, uint32_t x);
typedef uint32_t (*vfind_t)(void *self, uint32_t name, uint32_t x);
typedef void (*vset_t)(void *self, uint32_t x);
typedef void (*vbind_t)(void *self, uint32_t a, uint32_t b);

static void assure(uint32_t *ss)
{
    GFN(vss_t, W(P(ss[0]), 8))(ss);
}

int func_00166C20(uint32_t self_w, uint32_t idx, uint32_t name_w, uint32_t target)
{
    char *self = P(self_w);
    uint32_t arc = W(data_0070B898, 0) + 0x54;
    uint32_t vtbl = DATA_W(data_006F5988);
    uint32_t buf[0x9C / 4];   /* sp+0x38 .. sp+0xD4 on ARM */
    uint32_t ss[2];

    GFN(vss_t, W(P(W(P(name_w), 0)), 8))(P(name_w));
    uint32_t nstr = W(P(name_w), 4);
    GFN(vss_t, W(P(W(self, 0x24)), 8))(self + 0x24);
    char *fn = P((uint32_t)func_00689578(buf, "%s_%s.bflan", W(self, 0x28), nstr));
    GFN(vss_t, W(P(W(fn, 0)), 8))(fn);
    uint32_t res = GFN(vres_t, W(P(W(P(arc), 0)), 0xC))(P(arc), 0x616E696Du, W(fn, 4), 0);
    char *e = P(W(self, 0xC));
    if (W(self, 8) > idx)
        e += idx * 0x38;
    uint32_t ew = gp_u32(e);
    func_003FD888((uint32_t *)e, (int *)P(res));

    uint32_t link = 0;
    int32_t n = func_005689D8((int)ew);
    if (n != 0) {
        uint32_t f = (uint32_t)func_005807BC((int)(self_w + 0x14), ew, (int)W(self, 0x20),
                                             (void *)func_001B6F0C);
        if (f != 0)
            link = f - W(self, 0x20);
        if (link == 0) {
            for (int32_t i = 0; i < n; i++) {
                uint32_t pe = (uint32_t)func_005689E8((int)ew) + (uint32_t)i * 0x34;
                ss[0] = vtbl; ss[1] = pe + 0x19;
                assure(ss);
                uint32_t lay = W(self, 0);
                int g = func_003FDF90((int)W(P(lay), 0x14), (int)ss[1]);
                if (g == 0)
                    continue;
                for (int32_t j = 0; j < func_005689B4((int)ew); j++) {
                    uint32_t te = (uint32_t)func_005689C4((int)ew) + (uint32_t)j * 0x1C;
                    ss[0] = vtbl; ss[1] = te;
                    assure(ss);
                    if (func_003FDF90((int)W(P(W(self, 0)), 0x14), (int)ss[1]) != g)
                        continue;
                    ss[0] = vtbl; ss[1] = pe;
                    char *pl = P(W(P(W(self, 0)), 0x10));
                    assure(ss);
                    uint32_t p = GFN(vfind_t, W(P(W(pl, 0)), 0x2C))(pl, ss[1], 1);
                    if (p == 0)
                        break;
                    if (link == 0) {
                        char *m = (char *)func_0010BAB4(0x24);
                        if (m) {
                            W(m, 0) = 0; W(m, 4) = 0;
                            memcpy(m + 8, e, 16);
                            W(m, 0x18) = 0; W(m, 0x1C) = 0; W(m, 0x20) = 0;
                            func_0010B380(m + 0x18, n, 0, 4);
                        }
                        link = gp_u32(m);
                        func_0010F1DC(self + 0x14, P(W(self, 0x20) + link));
                        W(self, 0x1C) = W(self, 0x1C) + 1;
                    }
                    char *L = P(link);
                    int32_t cnt = (int32_t)W(L, 0x18);
                    int found = 0;
                    for (int32_t k = 0; k < cnt; k++) {
                        uint32_t el = (uint32_t)k < W(L, 0x18) ? W(P(W(L, 0x20)), 4 * k) : 0;
                        if (W(P(el), 0x44) == p) { found = 1; break; }
                    }
                    if (!found) {
                        char *a = (char *)func_0010BAB4(0x48);
                        if (a) {
                            func_00407788((uint32_t *)a);
                            W(a, 0x3C) = 0;
                            W(a, 0x44) = p;
                            W(a, 0x40) = 0;
                        }
                        func_00407538((uint32_t *)a, (int *)P(p), (uint32_t *)(L + 8));
                        int32_t c = (int32_t)W(L, 0x18);
                        if (c < (int32_t)W(L, 0x1C)) {
                            W(P(W(L, 0x20)), 4 * c) = gp_u32(a);
                            W(L, 0x18) = (uint32_t)(c + 1);
                        }
                    }
                    break;
                }
            }
        }
    }
    W(e, 0x2C) = 0;
    if (link != 0 && target != 0) {
        W(e, 0x2C) = link;
        char *r = (char *)func_001B6E54((int)link, (int)W(self, 0), (int)target, arc);
        W(e, 0x10) = gp_u32(r);
        GFN(vset_t, W(P(W(r, 0)), 0x10))(r, 0);
    } else {
        uint32_t r = (uint32_t)func_00404550((int)W(self, 0));
        W(e, 0x10) = r;
        GFN(vbind_t, W(P(W(P(r), 0)), 0x20))(P(r), W(e, 4), arc);
        if (target != 0) {
            func_003FDD84(target, (int *)P(W(e, 0x10)), 0);
        } else {
            for (int32_t j = 0; j < func_005689B4((int)ew); j++) {
                uint32_t te = (uint32_t)func_005689C4((int)ew) + (uint32_t)j * 0x1C;
                int g = func_003FDF90((int)W(P(W(self, 0)), 0x14), (int)te);
                func_003FDD84((uint32_t)g, (int *)P(W(e, 0x10)), 0);
            }
        }
    }
    F(e, 0x20) = (float)(uint32_t)FLD(P(W(e, 4)), 8, uint16_t);
    FLD(e, 0x28, uint8_t) = FLD(P(W(e, 4)), 0xA, uint8_t) == 1;
    F(e, 0x18) = 0.0f;
    F(e, 0x14) = 0.0f;
    F(e, 0x1C) = 1.0f;
    W(e, 0x24) = 0;
    return 0;
}
