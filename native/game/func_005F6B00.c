/* USA 005F6B00 (EU 005F6AD8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B010;
extern uint32_t data_0070B014;
extern uint32_t data_0070B018;
extern uint32_t data_0070B01C;
extern uint32_t data_007472F4;
extern uint32_t data_007473F4;
extern uint32_t data_007473F8;
extern uint32_t data_007473FC;
extern uint32_t data_00747400;
extern uint32_t data_00747404;
extern uint32_t data_00747408;

static const char *const names_007472F4[32] = {
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

void func_005F6B00(void) {
    fill_names((sead_SafeString *)&data_007472F4, names_007472F4, 32);
    data_0070B010 = 0xFFFFFFFFu;
    data_0070B014 = 0xFFFFFFFFu;
    data_0070B018 = 0x00000000u;
    data_0070B01C = 0x00000000u;
    data_007473F4 = 0x00000000u /* 0.0 f */;
    data_007473F8 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_007473FC = 0x3F000000u /* 0.5 f */;
    data_00747400 = 0x00000000u /* 0.0 f */;
    data_00747404 = 0x00000000u /* 0.0 f */;
    data_00747408 = 0xBE99999Au /* -0.30000001192092896 f */;
}
