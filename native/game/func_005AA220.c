/* USA 005AA220 (EU 005AA1F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (40 names), 12 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697AE4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ACFC;
extern uint32_t data_0070AD08;
extern uint32_t data_0070AD0C;
extern uint32_t data_0070AD10;
extern uint32_t data_0070AD14;
extern uint32_t data_0070AD18;
extern uint32_t data_0070AD1C;
extern uint32_t data_00741E14;
extern uint32_t data_00741E18;
extern uint32_t data_00741E1C;
extern uint32_t data_00741E20;
extern uint32_t data_00741E34;
extern uint32_t data_0074207C;
extern uint32_t data_0074209C;
extern uint32_t data_007420A0;
extern uint32_t data_007420A4;
extern uint32_t data_007420A8;
extern uint32_t data_007421C8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603128(void);

static const char *const names_0074207C[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_007420A8[36] = {
    "npc_wait",
    "wait",
    "magic",
    "towall_st",
    "towall_ed",
    "escape_ed",
    "wait",
    "emerge_st",
    "emerge_ed",
    "flinch",
    "damage",
    "hit",
    "revival",
    "guard",
    "angry_st",
    "angry",
    "angry_ed",
    "npc_wait_stick",
    "wait_stick",
    "magic_stick",
    "towall_st_stick",
    "towall_ed_stick",
    "escape_ed_stick",
    "wait_stick",
    "emerge_st_stick",
    "emerge_ed_stick",
    "flinch_stick",
    "damage_stick",
    "hit_stick",
    "revival_stick",
    "guard_stick",
    "angry_st_stick",
    "angry_stick",
    "angry_ed_stick",
    "FlatMediumSide_walkL",
    "FlatMediumSide_walkR",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AA220(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0x0u;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Medium_Enemy";
    fill_names((sead_SafeString *)&data_0074207C, names_0074207C, 4);
    fill_names((sead_SafeString *)&data_007420A8, names_007420A8, 36);
    data_0070AD08 = 0xFFFFFFFFu;
    data_0070AD0C = 0xFFFFFFFFu;
    data_0070AD10 = 0x00000000u;
    data_0070AD14 = 0x00000000u;
    data_0070AD18 = 0x00000080u;
    data_0070AD1C = 0x00000080u;
    data_0074209C = 0x00000000u /* 0.0 f */;
    data_007420A0 = 0xC0000000u /* -2.0 f */;
    data_007420A4 = 0xBE99999Au /* -0.30000001192092896 f */;
    func_004FC5F8((uintptr_t)&data_007421C8, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\201\203f\203B\203E\203\200";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyMedium";
    data_00741E14 = 0x00000000u;
    data_00741E18 = 0x00000005u;
    data_00741E1C = (uintptr_t)&data_00741E20;
    uintptr_t v0 = data_0070ACFC;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697AE4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00741E14;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00741E34, (uintptr_t)&func_00603128, 0x0000022Cu, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00741E14, (uintptr_t)((char *)stk + 32), v1);
}
