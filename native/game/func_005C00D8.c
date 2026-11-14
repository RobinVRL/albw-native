/* USA 005C00D8 (EU 005C00B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (10 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EB60;
extern uint32_t data_0070EB64;
extern uint32_t data_0070EB68;
extern uint32_t data_0070EB6C;
extern uint32_t data_0070EB70;
extern uint32_t data_0070EB8C;
extern uint32_t data_0070EB98;
extern uint32_t data_0070EBA4;
extern uint32_t data_0077DF20;
extern uint32_t data_0077DF24;
extern uint32_t data_0077DF28;
extern uint32_t data_0077DF2C;
extern uint32_t data_0077DF40;
extern uint32_t data_0077E188;
extern uint32_t data_0077E1A8;
extern uint32_t data_0077E1AC;
extern uint32_t data_0077E1B0;
extern uint32_t data_0077E1B4;
extern uint32_t data_0077E1B8;
extern uint32_t data_0077E1BC;
extern uint32_t data_0077E1C0;
extern uint32_t data_0077E1C4;
extern uint32_t data_0077E1C6;
extern uint32_t data_0077E1C8;
extern uint32_t data_0077E1C9;
extern uint32_t data_0077E1CA;
extern uint32_t data_0077E1CB;
extern uint32_t data_0077E1CC;
extern uint32_t data_0077E1D0;
extern uint32_t data_0077E1D4;
extern uint32_t data_0077E1D8;
extern uint32_t data_0077E1DC;
extern uint32_t data_0077E1DD;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060537C(void);

static const char *const names_0070EB70[3] = {
    "head_jnt",
    "chest_jnt",
    "wait",
};
static const char *const names_0070EB8C[1] = {
    "talk",
};
static const char *const names_0070EB98[1] = {
    "step",
};
static const char *const names_0070EBA4[1] = {
    "walk",
};
static const char *const names_0077E188[4] = {
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

void func_005C00D8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077DF20;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcShadowLink";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\203V\203\203\203h\203E\203\212\203\223\203N";
    fill_names((sead_SafeString *)&data_0070EB70, names_0070EB70, 3);
    fill_names((sead_SafeString *)&data_0070EB8C, names_0070EB8C, 1);
    fill_names((sead_SafeString *)&data_0070EB98, names_0070EB98, 1);
    fill_names((sead_SafeString *)&data_0070EBA4, names_0070EBA4, 1);
    fill_names((sead_SafeString *)&data_0077E188, names_0077E188, 4);
    data_0070EB60 = 0xFFFFFFFFu;
    data_0070EB64 = 0xFFFFFFFFu;
    data_0070EB68 = 0x00000000u;
    data_0070EB6C = 0x00000000u;
    data_0077DF20 = 0x00000000u;
    data_0077DF24 = 0x00000005u;
    data_0077DF28 = (uintptr_t)&data_0077DF2C;
    data_0077E1A8 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_0077E1AC = 0x3F800000u /* 1.0 f */;
    data_0077E1B0 = 0x3FC00000u /* 1.5 f */;
    data_0077E1B4 = 0x40A00000u /* 5.0 f */;
    data_0077E1B8 = 0x40400000u /* 3.0 f */;
    data_0077E1BC = 0x3F800000u /* 1.0 f */;
    data_0077E1C0 = 0x0000000Au;
    *(uint16_t *)&data_0077E1C4 = 0x5Fu;
    *(uint16_t *)&data_0077E1C6 = 0xB4u;
    *(uint8_t *)&data_0077E1C8 = 0xEEu;
    *(uint8_t *)&data_0077E1C9 = 0xECu;
    *(uint8_t *)&data_0077E1CA = 0xFu;
    *(uint8_t *)&data_0077E1CB = 0x32u;
    *(uint8_t *)&data_0077E1CC = 0x1Eu;
    data_0077E1D0 = 0x00000000u;
    data_0077E1D4 = 0xFFFFFFFFu;
    data_0077E1D8 = 0x00000000u;
    *(uint8_t *)&data_0077E1DC = 0x1u;
    *(uint8_t *)&data_0077E1DD = 0x1u;
    func_0019B51C((uintptr_t)&data_0077DF40, (uintptr_t)&func_0060537C, 0x0000018Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077DF20, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
