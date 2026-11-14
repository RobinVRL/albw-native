/* USA 005F7C00 (EU 005F7BD8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B050;
extern uint32_t data_0070B054;
extern uint32_t data_0070B058;
extern uint32_t data_0070B05C;
extern uint32_t data_00747724;
extern uint32_t data_00747824;
extern uint32_t data_00747828;
extern uint32_t data_0074782C;
extern uint32_t data_00747830;
extern uint32_t data_00747834;
extern uint32_t data_00747838;

static const char *const names_00747724[32] = {
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

void func_005F7C00(void) {
    fill_names((sead_SafeString *)&data_00747724, names_00747724, 32);
    data_0070B050 = 0xFFFFFFFFu;
    data_0070B054 = 0xFFFFFFFFu;
    data_0070B058 = 0x00000000u;
    data_0070B05C = 0x00000000u;
    data_00747824 = 0x00000000u /* 0.0 f */;
    data_00747828 = 0x3F333333u /* 0.699999988079071 f */;
    data_0074782C = 0x3F000000u /* 0.5 f */;
    data_00747830 = 0x00000000u /* 0.0 f */;
    data_00747834 = 0x00000000u /* 0.0 f */;
    data_00747838 = 0xBE99999Au /* -0.30000001192092896 f */;
}
