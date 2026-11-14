/* USA 005CCF44 (EU 005CCF1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (13 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698DF8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF60;
extern uint32_t data_0070AF68;
extern uint32_t data_0070AF6C;
extern uint32_t data_0070AF70;
extern uint32_t data_0070AF74;
extern uint32_t data_00746190;
extern uint32_t data_00746194;
extern uint32_t data_00746198;
extern uint32_t data_0074619C;
extern uint32_t data_007461B0;
extern uint32_t data_007463F8;
extern uint32_t data_00746460;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060692C(void);

static const char *const names_007463F8[13] = {
    "wait00",
    "walk00",
    "wind00",
    "wait01",
    "walk01",
    "pre_burn00",
    "burn00",
    "piyopiyo00",
    "damage00",
    "end00",
    "wind00",
    "burn00",
    "end00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CCF44(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_007463F8, names_007463F8, 13);
    data_0070AF68 = 0xFFFFFFFFu;
    data_0070AF6C = 0xFFFFFFFFu;
    data_0070AF70 = 0x00000000u;
    data_0070AF74 = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00746460, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemySalamander";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203T\203\211\203}\203\223\203_\201[";
    data_00746190 = 0x00000000u;
    data_00746194 = 0x00000005u;
    data_00746198 = (uintptr_t)&data_0074619C;
    uintptr_t v0 = data_0070AF60;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698DF8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00746190;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007461B0, (uintptr_t)&func_0060692C, 0x0000021Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00746190, (uintptr_t)((char *)stk + 32), v1);
}
