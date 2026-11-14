/* USA 005AD274 (EU 005AD24C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F548;
extern uint32_t data_0070F54C;
extern uint32_t data_0070F550;
extern uint32_t data_0070F554;
extern uint32_t data_00787F1C;
extern uint32_t data_0078801C;
extern uint32_t data_00788020;
extern uint32_t data_00788024;
extern uint32_t data_00788028;
extern uint32_t data_0078803C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603694(void);

static const char *const names_00787F1C[32] = {
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

void func_005AD274(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078801C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"tbNVbg";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjHookShot";
    fill_names((sead_SafeString *)&data_00787F1C, names_00787F1C, 32);
    data_0070F548 = 0xFFFFFFFFu;
    data_0070F54C = 0xFFFFFFFFu;
    data_0070F550 = 0x00000000u;
    data_0070F554 = 0x00000000u;
    data_0078801C = 0x00000000u;
    data_00788020 = 0x00000005u;
    data_00788024 = (uintptr_t)&data_00788028;
    func_0019B51C((uintptr_t)&data_0078803C, (uintptr_t)&func_00603694, 0x00000027u, (uintptr_t)((char *)stk + 24));
}
