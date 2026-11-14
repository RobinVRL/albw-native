/* USA 005A0014 (EU 0059FFEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (6 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698634;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE58;
extern uint32_t data_0070AE60;
extern uint32_t data_0070AE64;
extern uint32_t data_0070AE68;
extern uint32_t data_0070AE6C;
extern uint32_t data_0070AE70;
extern uint32_t data_00743BF0;
extern uint32_t data_00743BF4;
extern uint32_t data_00743BF8;
extern uint32_t data_00743BFC;
extern uint32_t data_00743C10;
extern uint32_t data_00743E58;
extern uint32_t data_00743E80;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B038(void);

static const char *const names_0070AE70[1] = {
    "Pawn",
};
static const char *const names_00743E58[5] = {
    "walk",
    "hit",
    "fall",
    "dead",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A0014(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070AE70, names_0070AE70, 1);
    fill_names((sead_SafeString *)&data_00743E58, names_00743E58, 5);
    data_0070AE60 = 0xFFFFFFFFu;
    data_0070AE64 = 0xFFFFFFFFu;
    data_0070AE68 = 0x00000000u;
    data_0070AE6C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00743E80, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyPawn";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203|\201[\203\223";
    data_00743BF0 = 0x00000000u;
    data_00743BF4 = 0x00000005u;
    data_00743BF8 = (uintptr_t)&data_00743BFC;
    uintptr_t v0 = data_0070AE58;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698634 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00743BF0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00743C10, (uintptr_t)&func_0060B038, 0x00000204u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00743BF0, (uintptr_t)((char *)stk + 32), v1);
}
