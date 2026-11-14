/* USA 005F7F84 (EU 005F7F5C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 8 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B080;
extern uint32_t data_0070B081;
extern uint32_t data_0070B082;
extern uint32_t data_0070B083;
extern uint32_t data_0070B088;
extern uint32_t data_0070B08C;
extern uint32_t data_0070B090;
extern uint32_t data_0070B094;
extern uint32_t data_00747A6C;

static const char *const names_00747A6C[32] = {
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

void func_005F7F84(void) {
    fill_names((sead_SafeString *)&data_00747A6C, names_00747A6C, 32);
    *(uint8_t *)&data_0070B080 = 0x8Cu;
    *(uint8_t *)&data_0070B081 = 0x28u;
    *(uint8_t *)&data_0070B082 = 0x0u;
    *(uint8_t *)&data_0070B083 = 0x32u;
    data_0070B088 = 0xFFFFFFFFu;
    data_0070B08C = 0xFFFFFFFFu;
    data_0070B090 = 0x00000000u;
    data_0070B094 = 0x00000000u;
}
