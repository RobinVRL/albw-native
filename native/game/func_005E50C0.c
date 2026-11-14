/* USA 005E50C0 (EU 005E5098): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (36 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709F80;
extern uint32_t data_00709F84;
extern uint32_t data_00709F88;
extern uint32_t data_00709F8C;
extern uint32_t data_00735384;
void func_00100000(void);
void func_0011CEB8(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_00735384[36] = {
    "Èµ",
    "",
    "",
    "|",
    "u[",
    "oN_",
    "t@C[bh",
    "ACXbh",
    "Thbh",
    "gl[hbh",
    "n}[",
    "tbNVbg",
    "yKTXu[c",
    " Ý",
    "Je",
    "qgKl",
    "ó«r",
    "Ô­·è",
    "©NX",
    "NX",
    "ÂNX",
    "d¸",
    "n`",
    "©àn`",
    "_A",
    "h",
    "n[g",
    "Ôèñ²",
    "Âèñ²",
    "bZ[W{g",
    "û",
    "n¬û",
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E50C0(void) {
    fill_names((sead_SafeString *)&data_00735384, names_00735384, 36);
    data_00709F80 = 0xFFFFFFFFu;
    data_00709F84 = 0xFFFFFFFFu;
    data_00709F88 = 0x00000000u;
    data_00709F8C = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011CEB8, (uint32_t)(uintptr_t)&func_00100000);
}
