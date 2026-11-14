/* USA 005826A4 <- EU 0058267C: MessageMgr::getText(MsgText *out, const SafeString &file,
 *     const SafeString &label) -> bool   (81 caller files: every UI text lookup)
 * out: +0 text (u16 string), +4 msbt, +8 byte length / attribute, +0xC label index.
 *   if (!*label.str || !*file.str || !out) return 0;
 *   e = 0; if (self[0x54]) e = 0069149C(self + 0x4C, self[0x4C], file) (scene table);
 *   if (!e || !(e + 0x18)) e = 0069149C(self + 0x38, self[0x38], file) (common table);
 *   msbt = e ? *(e + 0x18) : 0   (the `adds` null test of e + 0x18 is kept)
 *   if (msbt) { i = 0011EB7C(msbt, label) (label -> index);
 *       if (i >= 0) { out[0xC] = i; out[0] = 00582858(msbt, i) (text); out[4] = msbt;
 *                     out[8] = 00582888(msbt, i) (attribute); return 1; }
 *       s = data_0070D7D0[8];  (label missing) } else s = data_0070D7D0[0xC]; (file missing)
 *   out[0] = s; SafeString{data_006F599C, s}.vt[8](&ss) (assure termination);
 *   n = index of the first u16 0 in ss.str within 0x40001 units, else 0; out[8] = n * 2;
 *   return 0
 * r3 of the 0069149C calls: the label on the first lookup path (unchanged since entry), a
 * leftover on the fallback path; 0069149C reads r1/r2 only (livein2) - here the label always.
 *
 * Ghidra vs ARM: correct (EU 0058267C-00582824 insn by insn). Confidence: high (flow),
 * medium (names: msbt label lookup + "missing text" strings). */
#include "hot.h"

extern char data_0070D7D0[], data_006F599C[];

int func_0069149C(uint32_t tbl, int first, int *file, uint32_t x);
int func_0011EB7C(int msbt, int *label);
int func_00582888(int msbt, uint32_t i);
int func_00582858(uint32_t *msbt, uint32_t i);

typedef void (*vss_t)(void *ss);

int func_005826A4(uint32_t self_w, uint32_t out_w, uint32_t file_w, uint32_t label_w)
{
    char *self = P(self_w);
    char *out = P(out_w);
    int *file = (int *)P(file_w), *label = (int *)P(label_w);
    if (FLD(P(W((char *)label, 4)), 0, uint8_t) == 0)
        return 0;
    if (FLD(P(W((char *)file, 4)), 0, uint8_t) == 0 || out == 0)
        return 0;

    uint32_t e = 0, msbt = 0;
    int found = 0;
    if (W(self, 0x54) != 0) {
        e = (uint32_t)func_0069149C(self_w + 0x4C, (int)W(self, 0x4C), file, gp_u32(label));
        if (e != 0 && e + 0x18 != 0) {
            msbt = W(P(e + 0x18), 0);
            found = 1;
        }
    }
    if (!found) {
        e = (uint32_t)func_0069149C(self_w + 0x38, (int)W(self, 0x38), file, gp_u32(label));
        if (e != 0 && e + 0x18 != 0)
            msbt = W(P(e + 0x18), 0);
    }

    uint32_t s;
    if (msbt != 0) {
        int32_t i = func_0011EB7C((int)msbt, label);
        if (i >= 0) {
            uint32_t attr = (uint32_t)func_00582888((int)msbt, (uint32_t)i);
            uint32_t text = (uint32_t)func_00582858((uint32_t *)P(msbt), (uint32_t)i);
            W(out, 0xC) = (uint32_t)i;
            W(out, 0) = text;
            W(out, 4) = msbt;
            W(out, 8) = attr;
            return 1;
        }
        s = W(data_0070D7D0, 8);
    } else {
        s = W(data_0070D7D0, 0xC);
    }
    uint32_t ss[2] = { DATA_W(data_006F599C), s };
    W(out, 0) = s;
    GFN(vss_t, W(P(ss[0]), 8))(ss);
    char *str = P(ss[1]);
    int32_t n = 0;
    while (FLD(str, 2 * n, uint16_t) != 0) {
        n++;
        if (n > 0x40000) {
            n = 0;
            break;
        }
    }
    W(out, 8) = (uint32_t)n << 1;
    return 0;
}
