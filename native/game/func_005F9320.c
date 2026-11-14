/* USA 005F9320 (EU 005F92F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 5 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B0A8;
extern uint32_t data_0070B0B0;
extern uint32_t data_0070B0B4;
extern uint32_t data_0070B0B8;
extern uint32_t data_0070B0BC;
extern uint32_t data_00747C6C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116BAC(void);

static const char *const names_00747C6C[32] = {
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
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F9320(void) {
    fill_names((sead_SafeString *)&data_00747C6C, names_00747C6C, 32);
    data_0070B0B0 = 0xFFFFFFFFu;
    data_0070B0B4 = 0xFFFFFFFFu;
    data_0070B0B8 = 0x00000000u;
    data_0070B0BC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x00000000u, (uintptr_t)&func_00116BAC);
    data_0070B0A8 = ret0;
}
