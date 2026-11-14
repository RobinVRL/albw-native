/* USA 005F07E4 (EU 005F07BC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 11 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AFD8;
extern uint32_t data_0070AFE0;
extern uint32_t data_0070AFE4;
extern uint32_t data_0070AFE8;
extern uint32_t data_0070AFEC;
extern uint32_t data_00746FC4;
extern uint32_t data_007470C4;
extern uint32_t data_007470C8;
extern uint32_t data_007470CC;
extern uint32_t data_007470D0;
extern uint32_t data_007470D4;
extern uint32_t data_007470D8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011C294(void);

static const char *const names_00746FC4[32] = {
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

void func_005F07E4(void) {
    fill_names((sead_SafeString *)&data_00746FC4, names_00746FC4, 32);
    data_0070AFE0 = 0xFFFFFFFFu;
    data_0070AFE4 = 0xFFFFFFFFu;
    data_0070AFE8 = 0x00000000u;
    data_0070AFEC = 0x00000000u;
    data_007470C4 = 0x00000000u /* 0.0 f */;
    data_007470C8 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_007470CC = 0x3F000000u /* 0.5 f */;
    data_007470D0 = 0x00000000u /* 0.0 f */;
    data_007470D4 = 0x00000000u /* 0.0 f */;
    data_007470D8 = 0xBE99999Au /* -0.30000001192092896 f */;
    uintptr_t ret0 = func_00114608(0x4CE38E39u, (uintptr_t)&func_0011C294);
    data_0070AFD8 = ret0;
}
