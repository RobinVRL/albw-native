/* USA 005DEB50 (EU 005DEB28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696C8C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AA18;
extern uint32_t data_0070AA1C;
extern uint32_t data_0070AA20;
extern uint32_t data_0070AA24;
extern uint32_t data_0070AA28;
extern uint32_t data_0070AA2C;
extern uint32_t data_0070AA30;
extern uint32_t data_0073DBD4;
extern uint32_t data_0073DBD8;
extern uint32_t data_0073DBDC;
extern uint32_t data_0073DBE0;
extern uint32_t data_0073DBF4;
extern uint32_t data_0073DE3C;
extern uint32_t data_0073DE7C;
uintptr_t func_003C5604(uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607504(void);

static const char *const names_0070AA30[1] = {
    "color_change",
};
static const char *const names_0073DE3C[8] = {
    "wait",
    "walk",
    "run_st",
    "run",
    "run_ed",
    "turn_l",
    "turn_r",
    "damage",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005DEB50(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyHinoxCharge";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203C\203x\203\223\203g\227p\223\313\220i\203q\203m\203b\203N\203X";
    data_0070AA20 = 0xFFFFFFFFu;
    data_0070AA24 = 0xFFFFFFFFu;
    data_0070AA28 = 0x00000000u;
    data_0070AA2C = 0x00000000u;
    data_0073DBD4 = 0x00000000u;
    data_0073DBD8 = 0x00000005u;
    data_0073DBDC = (uintptr_t)&data_0073DBE0;
    uintptr_t v0 = data_0070AA18;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696C8C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073DBD4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073DBF4, (uintptr_t)&func_00607504, 0x0000026Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073DBD4, (uintptr_t)((char *)stk + 32), v1);
    fill_names((sead_SafeString *)&data_0070AA30, names_0070AA30, 1);
    fill_names((sead_SafeString *)&data_0073DE3C, names_0073DE3C, 8);
    uintptr_t ret1 = func_003C5604(0x000001D1u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AA1C = ret1;
    func_004FC6FC((uintptr_t)&data_0073DE7C, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
