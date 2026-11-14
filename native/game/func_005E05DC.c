/* USA 005E05DC (EU 005E05B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (13 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069A85C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B420;
extern uint32_t data_0070B428;
extern uint32_t data_0070B42C;
extern uint32_t data_0070B430;
extern uint32_t data_0070B434;
extern uint32_t data_0070B438;
extern uint32_t data_0074B714;
extern uint32_t data_0074B718;
extern uint32_t data_0074B71C;
extern uint32_t data_0074B720;
extern uint32_t data_0074B734;
extern uint32_t data_0074B97C;
extern uint32_t data_0074B9DC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607594(void);

static const char *const names_0070B438[1] = {
    "Lhand",
};
static const char *const names_0074B97C[12] = {
    "bomb_walk00",
    "bomb_walk01",
    "bomb_wait00",
    "bomb_wait01",
    "bomb_find00",
    "bomb_kamae00",
    "bomb_throw00",
    "bomb_fall00",
    "bomb_damage00",
    "bomb_dead_st00",
    "bomb_dead_ed00",
    "bomb_piyopiyo00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E05DC(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemySoldierBomb";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203o\203N\203_\203\223\225\272\216m";
    data_0070B428 = 0xFFFFFFFFu;
    data_0070B42C = 0xFFFFFFFFu;
    data_0070B430 = 0x00000000u;
    data_0070B434 = 0x00000000u;
    data_0074B714 = 0x00000000u;
    data_0074B718 = 0x00000005u;
    data_0074B71C = (uintptr_t)&data_0074B720;
    uintptr_t v0 = data_0070B420;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069A85C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074B714;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074B734, (uintptr_t)&func_00607594, 0x00000261u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074B714, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070B438, names_0070B438, 1);
    fill_names((sead_SafeString *)&data_0074B97C, names_0074B97C, 12);
    func_004FC6FC((uintptr_t)&data_0074B9DC, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
