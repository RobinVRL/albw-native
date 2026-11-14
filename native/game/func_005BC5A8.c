/* USA 005BC5A8 (EU 005BC580): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (29 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698ED0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF78;
extern uint32_t data_0070AF7C;
extern uint32_t data_0070AF80;
extern uint32_t data_0070AF84;
extern uint32_t data_0070AF88;
extern uint32_t data_0070AF8C;
extern uint32_t data_0070AF90;
extern uint32_t data_007464A8;
extern uint32_t data_007464AC;
extern uint32_t data_007464B0;
extern uint32_t data_007464B4;
extern uint32_t data_007464C8;
extern uint32_t data_00746710;
extern uint32_t data_007467F0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011849C(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604A5C(void);

static const char *const names_0070AF90[1] = {
    "end_st",
};
static const char *const names_00746710[28] = {
    "up",
    "up_ed",
    "down_st",
    "down",
    "wait",
    "charge_st",
    "charge",
    "beam_st",
    "beam",
    "beam_ed",
    "bear_st",
    "bear",
    "bear_ed",
    "damage",
    "up_ed_bf",
    "down_st_bf",
    "wait_bf",
    "damage_bf",
    "bear_st_bf",
    "bear_bf",
    "bear_ed_bf",
    "up_ed_demo",
    "end_st",
    "end_ed",
    "opening",
    "down_st_bf_1",
    "down_st_1",
    "down_1",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BC5A8(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070AF90, names_0070AF90, 1);
    fill_names((sead_SafeString *)&data_00746710, names_00746710, 28);
    data_0070AF80 = 0xFFFFFFFFu;
    data_0070AF84 = 0xFFFFFFFFu;
    data_0070AF88 = 0x00000000u;
    data_0070AF8C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4AA3D70Au, (uintptr_t)&func_0011849C);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AF7C = ret0;
    func_004FC6FC((uintptr_t)&data_007467F0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemySandBoss";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\215\273\224\231\202\314\220_\223a\203{\203X";
    data_007464A8 = 0x00000000u;
    data_007464AC = 0x00000005u;
    data_007464B0 = (uintptr_t)&data_007464B4;
    uintptr_t v0 = data_0070AF78;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698ED0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007464A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007464C8, (uintptr_t)&func_00604A5C, 0x0000022Au, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007464A8, (uintptr_t)((char *)stk + 32), v1);
}
