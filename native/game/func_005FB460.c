/* USA 005FB460 (EU 005FB438): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B268;
extern uint32_t data_0070B26C;
extern uint32_t data_0070B270;
extern uint32_t data_0070B274;
extern uint32_t data_00749294;
extern uint32_t data_00749394;
extern uint32_t data_00749398;
extern uint32_t data_0074939C;
extern uint32_t data_007493A0;
extern uint32_t data_007493A4;
extern uint32_t data_007493A8;

static const char *const names_00749294[32] = {
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

void func_005FB460(void) {
    fill_names((sead_SafeString *)&data_00749294, names_00749294, 32);
    data_0070B268 = 0xFFFFFFFFu;
    data_0070B26C = 0xFFFFFFFFu;
    data_0070B270 = 0x00000000u;
    data_0070B274 = 0x00000000u;
    data_00749394 = 0x00000000u /* 0.0 f */;
    data_00749398 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_0074939C = 0x3F000000u /* 0.5 f */;
    data_007493A0 = 0x00000000u /* 0.0 f */;
    data_007493A4 = 0x00000000u /* 0.0 f */;
    data_007493A8 = 0xBE99999Au /* -0.30000001192092896 f */;
}
