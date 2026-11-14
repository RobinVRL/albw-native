/* USA 005F3AD8 (EU 005F3AB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B030;
extern uint32_t data_0070B034;
extern uint32_t data_0070B038;
extern uint32_t data_0070B03C;
extern uint32_t data_0074750C;
extern uint32_t data_0074760C;
extern uint32_t data_00747610;
extern uint32_t data_00747614;
extern uint32_t data_00747618;
extern uint32_t data_0074761C;
extern uint32_t data_00747620;

static const char *const names_0074750C[32] = {
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

void func_005F3AD8(void) {
    fill_names((sead_SafeString *)&data_0074750C, names_0074750C, 32);
    data_0070B030 = 0xFFFFFFFFu;
    data_0070B034 = 0xFFFFFFFFu;
    data_0070B038 = 0x00000000u;
    data_0070B03C = 0x00000000u;
    data_0074760C = 0x00000000u /* 0.0 f */;
    data_00747610 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_00747614 = 0x3F000000u /* 0.5 f */;
    data_00747618 = 0x00000000u /* 0.0 f */;
    data_0074761C = 0x00000000u /* 0.0 f */;
    data_00747620 = 0xBE99999Au /* -0.30000001192092896 f */;
}
