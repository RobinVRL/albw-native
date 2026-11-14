/* USA 005A4430 (EU 005A4408): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069683C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A8B0;
extern uint32_t data_0070A8B8;
extern uint32_t data_0070A8BC;
extern uint32_t data_0070A8C0;
extern uint32_t data_0070A8C4;
extern uint32_t data_0073C088;
extern uint32_t data_0073C08C;
extern uint32_t data_0073C090;
extern uint32_t data_0073C094;
extern uint32_t data_0073C0A8;
extern uint32_t data_0073C2F0;
extern uint32_t data_0073C338;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602840(void);

static const char *const names_0073C2F0[9] = {
    "wait_nucleus",
    "wait_inside_nucleus",
    "division_nucleus",
    "union_nucleus",
    "rebound_nucleus",
    "damage_nucleus",
    "jitabata_nucleus",
    "piyopiyo_nucleus",
    "dead_nucleus",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A4430(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Giibo_nucleus";
    fill_names((sead_SafeString *)&data_0073C2F0, names_0073C2F0, 9);
    data_0070A8B8 = 0xFFFFFFFFu;
    data_0070A8BC = 0xFFFFFFFFu;
    data_0070A8C0 = 0x00000000u;
    data_0070A8C4 = 0x00000000u;
    func_004FC5F8((uintptr_t)&data_0073C338, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203M\201[\203{(\212j)";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyGiibo";
    data_0073C088 = 0x00000000u;
    data_0073C08C = 0x00000005u;
    data_0073C090 = (uintptr_t)&data_0073C094;
    uintptr_t v0 = data_0070A8B0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069683C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073C088;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073C0A8, (uintptr_t)&func_00602840, 0x0000026Du, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073C088, (uintptr_t)((char *)stk + 32), v1);
}
