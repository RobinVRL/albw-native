/* USA 005AA044 (EU 005AA01C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006978A0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AC70;
extern uint32_t data_0070AC74;
extern uint32_t data_0070AC78;
extern uint32_t data_0070AC7C;
extern uint32_t data_0070AC80;
extern uint32_t data_0070AC84;
extern uint32_t data_007414F8;
extern uint32_t data_007414FC;
extern uint32_t data_00741500;
extern uint32_t data_00741504;
extern uint32_t data_00741518;
extern uint32_t data_00741760;
extern uint32_t data_00741790;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DC2C(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006030FC(void);

static const char *const names_00741760[6] = {
    "up",
    "wait",
    "piyopiyo",
    "jitabata",
    "down",
    "damage",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AA044(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00741760, names_00741760, 6);
    data_0070AC78 = 0xFFFFFFFFu;
    data_0070AC7C = 0xFFFFFFFFu;
    data_0070AC80 = 0x00000000u;
    data_0070AC84 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B888889u, (uintptr_t)&func_0011DC2C);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AC74 = ret0;
    func_004FC6FC((uintptr_t)&data_00741790, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyLeever";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\212\201[\203o";
    data_007414F8 = 0x00000000u;
    data_007414FC = 0x00000005u;
    data_00741500 = (uintptr_t)&data_00741504;
    uintptr_t v0 = data_0070AC70;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006978A0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007414F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00741518, (uintptr_t)&func_006030FC, 0x000001FBu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007414F8, (uintptr_t)((char *)stk + 32), v1);
}
