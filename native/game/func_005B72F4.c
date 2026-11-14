/* USA 005B72F4 (EU 005B72CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 15 sead::SafeString name tables (19 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EA38;
extern uint32_t data_0070EA3C;
extern uint32_t data_0070EA40;
extern uint32_t data_0070EA44;
extern uint32_t data_0070EA48;
extern uint32_t data_0070EA5C;
extern uint32_t data_0070EA68;
extern uint32_t data_0070EA74;
extern uint32_t data_0070EA80;
extern uint32_t data_0070EA8C;
extern uint32_t data_0070EA98;
extern uint32_t data_0070EAA4;
extern uint32_t data_0070EAB0;
extern uint32_t data_0070EABC;
extern uint32_t data_0070EAC8;
extern uint32_t data_0070EAD4;
extern uint32_t data_0070EAE0;
extern uint32_t data_0070EAEC;
extern uint32_t data_0077D9A8;
extern uint32_t data_0077D9AC;
extern uint32_t data_0077D9B0;
extern uint32_t data_0077D9B4;
extern uint32_t data_0077D9C8;
extern uint32_t data_0077DC10;
extern uint32_t data_0077DC30;
extern uint32_t data_0077DC34;
extern uint32_t data_0077DC38;
extern uint32_t data_0077DC3C;
extern uint32_t data_0077DC40;
extern uint32_t data_0077DC44;
extern uint32_t data_0077DC48;
extern uint32_t data_0077DC4C;
extern uint32_t data_0077DC4E;
extern uint32_t data_0077DC50;
extern uint32_t data_0077DC51;
extern uint32_t data_0077DC52;
extern uint32_t data_0077DC53;
extern uint32_t data_0077DC54;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604348(void);

static const char *const names_0070EA48[2] = {
    "HandR",
    "wait",
};
static const char *const names_0070EA5C[1] = {
    "talk",
};
static const char *const names_0070EA68[1] = {
    "step",
};
static const char *const names_0070EA74[1] = {
    "walk",
};
static const char *const names_0070EA80[1] = {
    "shock_wait",
};
static const char *const names_0070EA8C[1] = {
    "wait_rod",
};
static const char *const names_0070EA98[1] = {
    "talk_rod",
};
static const char *const names_0070EAA4[1] = {
    "step_rod",
};
static const char *const names_0070EAB0[1] = {
    "walk_rod",
};
static const char *const names_0070EABC[1] = {
    "wait",
};
static const char *const names_0070EAC8[1] = {
    "talk",
};
static const char *const names_0070EAD4[1] = {
    "step",
};
static const char *const names_0070EAE0[1] = {
    "walk",
};
static const char *const names_0070EAEC[1] = {
    "shock_wait",
};
static const char *const names_0077DC10[4] = {
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

void func_005B72F4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077D9A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcSahasGirl";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\203A\203X\203t\203@\203\213(\203\211\203N\203`\203\203)";
    fill_names((sead_SafeString *)&data_0070EA48, names_0070EA48, 2);
    fill_names((sead_SafeString *)&data_0070EA5C, names_0070EA5C, 1);
    fill_names((sead_SafeString *)&data_0070EA68, names_0070EA68, 1);
    fill_names((sead_SafeString *)&data_0070EA74, names_0070EA74, 1);
    fill_names((sead_SafeString *)&data_0070EA80, names_0070EA80, 1);
    fill_names((sead_SafeString *)&data_0070EA8C, names_0070EA8C, 1);
    fill_names((sead_SafeString *)&data_0070EA98, names_0070EA98, 1);
    fill_names((sead_SafeString *)&data_0070EAA4, names_0070EAA4, 1);
    fill_names((sead_SafeString *)&data_0070EAB0, names_0070EAB0, 1);
    fill_names((sead_SafeString *)&data_0070EABC, names_0070EABC, 1);
    fill_names((sead_SafeString *)&data_0070EAC8, names_0070EAC8, 1);
    fill_names((sead_SafeString *)&data_0070EAD4, names_0070EAD4, 1);
    fill_names((sead_SafeString *)&data_0070EAE0, names_0070EAE0, 1);
    fill_names((sead_SafeString *)&data_0070EAEC, names_0070EAEC, 1);
    fill_names((sead_SafeString *)&data_0077DC10, names_0077DC10, 4);
    data_0070EA38 = 0xFFFFFFFFu;
    data_0070EA3C = 0xFFFFFFFFu;
    data_0070EA40 = 0x00000000u;
    data_0070EA44 = 0x00000000u;
    data_0077D9A8 = 0x00000000u;
    data_0077D9AC = 0x00000005u;
    data_0077D9B0 = (uintptr_t)&data_0077D9B4;
    data_0077DC30 = 0x3D0F5C29u /* 0.03500000014901161 f */;
    data_0077DC34 = 0x3F800000u /* 1.0 f */;
    data_0077DC38 = 0x40400000u /* 3.0 f */;
    data_0077DC3C = 0x40A00000u /* 5.0 f */;
    data_0077DC40 = 0x40400000u /* 3.0 f */;
    data_0077DC44 = 0x3FC00000u /* 1.5 f */;
    data_0077DC48 = 0x0000000Eu;
    *(uint16_t *)&data_0077DC4C = 0x5Fu;
    *(uint16_t *)&data_0077DC4E = 0xB4u;
    *(uint8_t *)&data_0077DC50 = 0xEEu;
    *(uint8_t *)&data_0077DC51 = 0xECu;
    *(uint8_t *)&data_0077DC52 = 0xFu;
    *(uint8_t *)&data_0077DC53 = 0x28u;
    *(uint8_t *)&data_0077DC54 = 0xAu;
    func_0019B51C((uintptr_t)&data_0077D9C8, (uintptr_t)&func_00604348, 0x000001A2u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077D9A8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
