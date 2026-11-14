/* USA 005F0EC0 (EU 005F0E98): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (42 names), 22 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B0C0;
extern uint32_t data_0070B0C1;
extern uint32_t data_0070B0C2;
extern uint32_t data_0070B0C3;
extern uint32_t data_0070B0C4;
extern uint32_t data_0070B0C5;
extern uint32_t data_0070B0C6;
extern uint32_t data_0070B0C7;
extern uint32_t data_0070B0C8;
extern uint32_t data_0070B0C9;
extern uint32_t data_0070B0CA;
extern uint32_t data_0070B0CB;
extern uint32_t data_0070B0CC;
extern uint32_t data_0070B0CD;
extern uint32_t data_0070B0CE;
extern uint32_t data_0070B0CF;
extern uint32_t data_0070B0D0;
extern uint32_t data_0070B0D4;
extern uint32_t data_0070B0D8;
extern uint32_t data_0070B0DC;
extern uint32_t data_0070B0E0;
extern uint32_t data_0070B0E4;
extern uint32_t data_0070B0E8;
extern uint32_t data_00747D6C;
uintptr_t func_00114608(uintptr_t, uintptr_t);

static const char *const names_0070B0E8[8] = {
    "skl_root",
    "center",
    "cl_LhandA",
    "cl_RhandA",
    "head_jnt",
    "Lshoulder_jnt",
    "stomach_jnt",
    "waist_jnt",
};
static const char *const names_00747D6C[34] = {
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
    "skl_root",
    "center",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F0EC0(void) {
    fill_names((sead_SafeString *)&data_0070B0E8, names_0070B0E8, 8);
    fill_names((sead_SafeString *)&data_00747D6C, names_00747D6C, 34);
    *(uint8_t *)&data_0070B0C0 = 0xFFu;
    *(uint8_t *)&data_0070B0C1 = 0x0u;
    *(uint8_t *)&data_0070B0C2 = 0x0u;
    *(uint8_t *)&data_0070B0C3 = 0x0u;
    *(uint8_t *)&data_0070B0C4 = 0xFFu;
    *(uint8_t *)&data_0070B0C5 = 0x0u;
    *(uint8_t *)&data_0070B0C6 = 0x1Au;
    *(uint8_t *)&data_0070B0C7 = 0xFFu;
    *(uint8_t *)&data_0070B0C8 = 0xFFu;
    *(uint8_t *)&data_0070B0C9 = 0xC4u;
    *(uint8_t *)&data_0070B0CA = 0x88u;
    *(uint8_t *)&data_0070B0CB = 0xBFu;
    *(uint8_t *)&data_0070B0CC = 0xFFu;
    *(uint8_t *)&data_0070B0CD = 0x0u;
    *(uint8_t *)&data_0070B0CE = 0x8Au;
    *(uint8_t *)&data_0070B0CF = 0x6Au;
    data_0070B0D8 = 0xFFFFFFFFu;
    data_0070B0DC = 0xFFFFFFFFu;
    data_0070B0E0 = 0x00000000u;
    data_0070B0E4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D800000u, 0x0000008Au);
    data_0070B0D0 = ret0;
    data_0070B0D4 = ret0;
}
