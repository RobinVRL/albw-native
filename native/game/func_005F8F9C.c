/* USA 005F8F9C (EU 005F8F74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AFF0;
extern uint32_t data_0070AFF4;
extern uint32_t data_0070AFF8;
extern uint32_t data_0070AFFC;
extern uint32_t data_007470DC;
extern uint32_t data_007471DC;
extern uint32_t data_007471E0;
extern uint32_t data_007471E4;
extern uint32_t data_007471E8;
extern uint32_t data_007471EC;
extern uint32_t data_007471F0;

static const char *const names_007470DC[32] = {
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

void func_005F8F9C(void) {
    fill_names((sead_SafeString *)&data_007470DC, names_007470DC, 32);
    data_0070AFF0 = 0xFFFFFFFFu;
    data_0070AFF4 = 0xFFFFFFFFu;
    data_0070AFF8 = 0x00000000u;
    data_0070AFFC = 0x00000000u;
    data_007471DC = 0x00000000u /* 0.0 f */;
    data_007471E0 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_007471E4 = 0x3F000000u /* 0.5 f */;
    data_007471E8 = 0x00000000u /* 0.0 f */;
    data_007471EC = 0x00000000u /* 0.0 f */;
    data_007471F0 = 0xBE99999Au /* -0.30000001192092896 f */;
}
