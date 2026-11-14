/* USA 005F3E5C (EU 005F3E34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B060;
extern uint32_t data_0070B064;
extern uint32_t data_0070B068;
extern uint32_t data_0070B06C;
extern uint32_t data_0074783C;
extern uint32_t data_0074793C;
extern uint32_t data_00747940;
extern uint32_t data_00747944;
extern uint32_t data_00747948;
extern uint32_t data_0074794C;
extern uint32_t data_00747950;

static const char *const names_0074783C[32] = {
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

void func_005F3E5C(void) {
    fill_names((sead_SafeString *)&data_0074783C, names_0074783C, 32);
    data_0070B060 = 0xFFFFFFFFu;
    data_0070B064 = 0xFFFFFFFFu;
    data_0070B068 = 0x00000000u;
    data_0070B06C = 0x00000000u;
    data_0074793C = 0x00000000u /* 0.0 f */;
    data_00747940 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_00747944 = 0x3F000000u /* 0.5 f */;
    data_00747948 = 0x00000000u /* 0.0 f */;
    data_0074794C = 0x00000000u /* 0.0 f */;
    data_00747950 = 0xBE99999Au /* -0.30000001192092896 f */;
}
