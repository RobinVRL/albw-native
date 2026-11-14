/* USA 005A26D0 (EU 005A26A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 14 sead::SafeString name tables (18 names), 24 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E420;
extern uint32_t data_0070E424;
extern uint32_t data_0070E428;
extern uint32_t data_0070E42C;
extern uint32_t data_0070E430;
extern uint32_t data_0070E444;
extern uint32_t data_0070E450;
extern uint32_t data_0070E45C;
extern uint32_t data_0070E468;
extern uint32_t data_0070E474;
extern uint32_t data_0070E480;
extern uint32_t data_0070E48C;
extern uint32_t data_0070E498;
extern uint32_t data_0070E4A4;
extern uint32_t data_0070E4B0;
extern uint32_t data_0070E4BC;
extern uint32_t data_0070E4C8;
extern uint32_t data_00775FE0;
extern uint32_t data_00775FE4;
extern uint32_t data_00775FE8;
extern uint32_t data_00775FEC;
extern uint32_t data_00776000;
extern uint32_t data_00776248;
extern uint32_t data_00776268;
extern uint32_t data_0077626C;
extern uint32_t data_00776270;
extern uint32_t data_00776274;
extern uint32_t data_00776278;
extern uint32_t data_0077627C;
extern uint32_t data_00776280;
extern uint32_t data_00776284;
extern uint32_t data_00776286;
extern uint32_t data_00776288;
extern uint32_t data_00776289;
extern uint32_t data_0077628A;
extern uint32_t data_0077628B;
extern uint32_t data_0077628C;
extern uint32_t data_00776290;
extern uint32_t data_00776294;
extern uint32_t data_00776298;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B3B8(void);

static const char *const names_0070E430[2] = {
    "wrist_r",
    "wait",
};
static const char *const names_0070E444[1] = {
    "talk",
};
static const char *const names_0070E450[1] = {
    "step",
};
static const char *const names_0070E45C[1] = {
    "walk",
};
static const char *const names_0070E468[1] = {
    "wait_angry",
};
static const char *const names_0070E474[1] = {
    "attack",
};
static const char *const names_0070E480[1] = {
    "attack_wait",
};
static const char *const names_0070E48C[1] = {
    "carry",
};
static const char *const names_0070E498[1] = {
    "carry_wait",
};
static const char *const names_0070E4A4[1] = {
    "catch",
};
static const char *const names_0070E4B0[1] = {
    "down",
};
static const char *const names_0070E4BC[1] = {
    "stand_up",
};
static const char *const names_0070E4C8[1] = {
    "talk_angry",
};
static const char *const names_00776248[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A26D0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00775FE0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMedium";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPCfBE";
    fill_names((sead_SafeString *)&data_0070E430, names_0070E430, 2);
    fill_names((sead_SafeString *)&data_0070E444, names_0070E444, 1);
    fill_names((sead_SafeString *)&data_0070E450, names_0070E450, 1);
    fill_names((sead_SafeString *)&data_0070E45C, names_0070E45C, 1);
    fill_names((sead_SafeString *)&data_0070E468, names_0070E468, 1);
    fill_names((sead_SafeString *)&data_0070E474, names_0070E474, 1);
    fill_names((sead_SafeString *)&data_0070E480, names_0070E480, 1);
    fill_names((sead_SafeString *)&data_0070E48C, names_0070E48C, 1);
    fill_names((sead_SafeString *)&data_0070E498, names_0070E498, 1);
    fill_names((sead_SafeString *)&data_0070E4A4, names_0070E4A4, 1);
    fill_names((sead_SafeString *)&data_0070E4B0, names_0070E4B0, 1);
    fill_names((sead_SafeString *)&data_0070E4BC, names_0070E4BC, 1);
    fill_names((sead_SafeString *)&data_0070E4C8, names_0070E4C8, 1);
    fill_names((sead_SafeString *)&data_00776248, names_00776248, 4);
    data_0070E420 = 0xFFFFFFFFu;
    data_0070E424 = 0xFFFFFFFFu;
    data_0070E428 = 0x00000000u;
    data_0070E42C = 0x00000000u;
    data_00775FE0 = 0x00000000u;
    data_00775FE4 = 0x00000005u;
    data_00775FE8 = (uintptr_t)&data_00775FEC;
    data_00776268 = 0x3E19999Au /* 0.15000000596046448 f */;
    data_0077626C = 0x3F800000u /* 1.0 f */;
    data_00776270 = 0x3FC00000u /* 1.5 f */;
    data_00776274 = 0x40A00000u /* 5.0 f */;
    data_00776278 = 0x40400000u /* 3.0 f */;
    data_0077627C = 0x3FC00000u /* 1.5 f */;
    data_00776280 = 0x00000012u;
    *(uint16_t *)&data_00776284 = 0x5Fu;
    *(uint16_t *)&data_00776286 = 0xB4u;
    *(uint8_t *)&data_00776288 = 0xEAu;
    *(uint8_t *)&data_00776289 = 0xD3u;
    *(uint8_t *)&data_0077628A = 0xFu;
    *(uint8_t *)&data_0077628B = 0x1Eu;
    *(uint8_t *)&data_0077628C = 0x14u;
    data_00776290 = 0x00000000u /* 0.0 f */;
    data_00776294 = 0x00000000u /* 0.0 f */;
    data_00776298 = 0xC1E80000u /* -29.0 f */;
    func_0019B51C((uintptr_t)&data_00776000, (uintptr_t)&func_0060B3B8, 0x00000198u, (uintptr_t)((char *)stk + 16));
}
