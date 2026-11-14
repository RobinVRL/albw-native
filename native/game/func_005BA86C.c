/* USA 005BA86C (EU 005BA844): static initialiser, decompiled by tools/decomp_initializer.py.
 * 3 sead::SafeString name tables (40 names), 31 other stores, 7 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695DB0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A788;
extern uint32_t data_0070A798;
extern uint32_t data_0070A79C;
extern uint32_t data_0070A7A0;
extern uint32_t data_0070A7A4;
extern uint32_t data_0070A7A8;
extern uint32_t data_0070A7AC;
extern uint32_t data_0070A7C8;
extern uint32_t data_0070A7CC;
extern uint32_t data_0070A7D0;
extern uint32_t data_0070A7D4;
extern uint32_t data_0070A7D8;
extern uint32_t data_0073A450;
extern uint32_t data_0073A454;
extern uint32_t data_0073A458;
extern uint32_t data_0073A45C;
extern uint32_t data_0073A470;
extern uint32_t data_0073A6B8;
extern uint32_t data_0073A6D8;
extern uint32_t data_0073A6DC;
extern uint32_t data_0073A6E0;
extern uint32_t data_0073A6E4;
extern uint32_t data_0073A6E8;
extern uint32_t data_0073A6EC;
extern uint32_t data_0073A6F0;
extern uint32_t data_0073A6F4;
extern uint32_t data_0073A6F8;
extern uint32_t data_0073A6FC;
extern uint32_t data_0073A700;
extern uint32_t data_0073A704;
extern uint32_t data_0073A708;
extern uint32_t data_0073A70C;
extern uint32_t data_0073A710;
extern uint32_t data_0073A714;
extern uint32_t data_0073A718;
extern uint32_t data_0073A71C;
extern uint32_t data_0073A720;
extern uint32_t data_0073A838;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011C6D8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006047E4(void);

static const char *const names_0073A6B8[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_0070A7D8[1] = {
    "DeguRock",
};
static const char *const names_0073A720[35] = {
    "swim_wait",
    "swim",
    "swim_eruption",
    "opening_swim_up",
    "opening_swim_explosion_st",
    "opening_swim_explosion_md",
    "opening_swim_explosion_ed",
    "transform_swim_down",
    "transform_fly",
    "transform_touchdown",
    "wait",
    "walk",
    "swim_damage",
    "jump_st",
    "jump_md",
    "jump_ed",
    "attack_shell_st",
    "attack_shell_md",
    "attack_shell_ed",
    "attack_st",
    "attack_md",
    "attack_ed",
    "explosion_st",
    "explosion_loop",
    "explosion_md",
    "explosion_ed",
    "piyopiyo_st",
    "piyopiyo_md",
    "piyopiyo_ed",
    "turn45_l",
    "turn45_r",
    "end_st",
    "end_ed",
    "lava_off",
    "lava_on",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BA86C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073A6B8, names_0073A6B8, 4);
    data_0070A7C8 = 0xFFFFFFFFu;
    data_0070A7CC = 0xFFFFFFFFu;
    data_0070A7D0 = 0x00000000u;
    data_0070A7D4 = 0x00000000u;
    data_0073A6D8 = 0x3F8CCCCDu /* 1.100000023841858 f */;
    data_0073A6DC = 0x40400000u /* 3.0 f */;
    data_0073A6E0 = 0x3F8CCCCDu /* 1.100000023841858 f */;
    data_0073A6E4 = 0x400CCCCDu /* 2.200000047683716 f */;
    data_0073A6E8 = 0x40A00000u /* 5.0 f */;
    data_0073A6EC = 0x400CCCCDu /* 2.200000047683716 f */;
    data_0073A6F0 = 0x40000000u /* 2.0 f */;
    data_0073A6F4 = 0x40A00000u /* 5.0 f */;
    data_0073A6F8 = 0x40000000u /* 2.0 f */;
    uintptr_t ret0 = func_00114608(0xCD2AAAABu, (uintptr_t)&func_0011C6D8);
    data_0070A798 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    data_0070A79C = ret1;
    data_0073A6FC = 0x00000000u /* 0.0 f */;
    data_0073A700 = 0xC0400000u /* -3.0 f */;
    data_0073A704 = 0x80000000u /* -0.0 f */;
    data_0073A708 = 0x00000000u /* 0.0 f */;
    data_0073A70C = 0xBF000000u /* -0.5 f */;
    data_0073A710 = 0xBF000000u /* -0.5 f */;
    data_0073A714 = 0x00000000u /* 0.0 f */;
    data_0073A718 = 0x40A00000u /* 5.0 f */;
    data_0073A71C = 0x3F99999Au /* 1.2000000476837158 f */;
    uintptr_t ret2 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070A7A0 = ret2;
    uintptr_t ret3 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070A7A4 = ret3;
    data_0070A7A8 = ret3;
    uintptr_t ret4 = func_00114608(0x4C638E39u, (uintptr_t)&data_0070A7A8);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 28);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"DeguRock";
    *(uint8_t *)((char *)stk + 28) = 0x0u;
    *(uint8_t *)((char *)stk + 29) = 0x0u;
    *(uint8_t *)((char *)stk + 30) = 0x0u;
    *(uint8_t *)((char *)stk + 31) = 0x3u;
    *(uint8_t *)((char *)stk + 32) = 0x3u;
    fill_names((sead_SafeString *)&data_0070A7D8, names_0070A7D8, 1);
    fill_names((sead_SafeString *)&data_0073A720, names_0073A720, 35);
    data_0070A7AC = ret4;
    func_004FC5F8((uintptr_t)&data_0073A838, (uintptr_t)((char *)stk + 16), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 28), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyDeguRock";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203f\203O\203\215\203b\203N";
    data_0073A450 = 0x00000000u;
    data_0073A454 = 0x00000005u;
    data_0073A458 = (uintptr_t)&data_0073A45C;
    uintptr_t v0 = data_0070A788;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695DB0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073A450;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073A470, (uintptr_t)&func_006047E4, 0x00000248u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073A450, (uintptr_t)((char *)stk + 48), v1);
}
