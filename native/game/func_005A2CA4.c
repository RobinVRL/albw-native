/* USA 005A2CA4 (EU 005A2C7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 23 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F588;
extern uint32_t data_0070F58C;
extern uint32_t data_0070F590;
extern uint32_t data_0070F594;
extern uint32_t data_0070F598;
extern uint32_t data_0070F59C;
extern uint32_t data_0070F5A4;
extern uint32_t data_0070F5A8;
extern uint32_t data_0070F5B0;
extern uint32_t data_0070F5B4;
extern uint32_t data_0070F5BC;
extern uint32_t data_0070F5C0;
extern uint32_t data_0070F5C8;
extern uint32_t data_0070F5CC;
extern uint32_t data_0070F5D4;
extern uint32_t data_0070F5D8;
extern uint32_t data_0070F5E0;
extern uint32_t data_0070F5E4;
extern uint32_t data_0070F5EC;
extern uint32_t data_0070F5F0;
extern uint32_t data_007889BC;
extern uint32_t data_00788ABC;
extern uint32_t data_00788AC0;
extern uint32_t data_00788AC4;
extern uint32_t data_00788AC8;
extern uint32_t data_00788ADC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B4F0(void);

static const char *const names_007889BC[32] = {
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

void func_005A2CA4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00788ABC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ACXbh";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjIceRod";
    fill_names((sead_SafeString *)&data_007889BC, names_007889BC, 32);
    data_0070F588 = 0xFFFFFFFFu;
    data_0070F58C = 0xFFFFFFFFu;
    data_0070F590 = 0x00000000u;
    data_0070F594 = 0x00000000u;
    data_0070F598 = 0xBF800000u /* -1.0 f */;
    data_0070F59C = 0x00000000u /* 0.0 f */;
    data_0070F5A4 = 0x3F800000u /* 1.0 f */;
    data_0070F5A8 = 0x00000000u /* 0.0 f */;
    data_0070F5B0 = 0xBF800000u /* -1.0 f */;
    data_0070F5B4 = 0x40000000u /* 2.0 f */;
    data_0070F5BC = 0x3F800000u /* 1.0 f */;
    data_0070F5C0 = 0x40000000u /* 2.0 f */;
    data_0070F5C8 = 0x00000000u /* 0.0 f */;
    data_0070F5CC = 0x00000000u /* 0.0 f */;
    data_0070F5D4 = 0x00000000u /* 0.0 f */;
    data_0070F5D8 = 0x40000000u /* 2.0 f */;
    data_0070F5E0 = 0x40000000u /* 2.0 f */;
    data_0070F5E4 = 0x00000000u /* 0.0 f */;
    data_0070F5EC = 0x40000000u /* 2.0 f */;
    data_0070F5F0 = 0x40000000u /* 2.0 f */;
    data_00788ABC = 0x00000000u;
    data_00788AC0 = 0x00000005u;
    data_00788AC4 = (uintptr_t)&data_00788AC8;
    func_0019B51C((uintptr_t)&data_00788ADC, (uintptr_t)&func_0060B4F0, 0x00000033u, (uintptr_t)((char *)stk + 24));
}
