/* USA 005A4CF4 (EU 005A4CCC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696F88;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AA88;
extern uint32_t data_0070AA90;
extern uint32_t data_0070AA94;
extern uint32_t data_0070AA98;
extern uint32_t data_0070AA9C;
extern uint32_t data_0073E7A8;
extern uint32_t data_0073E7AC;
extern uint32_t data_0073E7B0;
extern uint32_t data_0073E7B4;
extern uint32_t data_0073E7C8;
extern uint32_t data_0073EA10;
extern uint32_t data_0073EA38;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006028E4(void);

static const char *const names_0073EA10[5] = {
    "wait00",
    "walk00",
    "damage00",
    "turn00",
    "piyopiyo00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A4CF4(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0073EA10, names_0073EA10, 5);
    data_0070AA90 = 0xFFFFFFFFu;
    data_0070AA94 = 0xFFFFFFFFu;
    data_0070AA98 = 0x00000000u;
    data_0070AA9C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0073EA38, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyHover";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203z\201[\203o\201[";
    data_0073E7A8 = 0x00000000u;
    data_0073E7AC = 0x00000005u;
    data_0073E7B0 = (uintptr_t)&data_0073E7B4;
    uintptr_t v0 = data_0070AA88;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696F88 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073E7A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073E7C8, (uintptr_t)&func_006028E4, 0x00000250u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073E7A8, (uintptr_t)((char *)stk + 32), v1);
}
