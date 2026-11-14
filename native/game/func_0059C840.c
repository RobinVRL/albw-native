/* USA 0059C840 (EU 0059C818): static initialiser, decompiled by tools/decomp_initializer.py.
 * 15 sead::SafeString name tables (18 names), 29 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E368;
extern uint32_t data_0070E36C;
extern uint32_t data_0070E370;
extern uint32_t data_0070E374;
extern uint32_t data_0070E378;
extern uint32_t data_0070E384;
extern uint32_t data_0070E390;
extern uint32_t data_0070E39C;
extern uint32_t data_0070E3A8;
extern uint32_t data_0070E3B4;
extern uint32_t data_0070E3C0;
extern uint32_t data_0070E3CC;
extern uint32_t data_0070E3D8;
extern uint32_t data_0070E3E4;
extern uint32_t data_0070E3F0;
extern uint32_t data_0070E3FC;
extern uint32_t data_0070E408;
extern uint32_t data_0070E414;
extern uint32_t data_00775D14;
extern uint32_t data_00775D18;
extern uint32_t data_00775D1C;
extern uint32_t data_00775D20;
extern uint32_t data_00775D34;
extern uint32_t data_00775F7C;
extern uint32_t data_00775F9C;
extern uint32_t data_00775FA0;
extern uint32_t data_00775FA4;
extern uint32_t data_00775FA8;
extern uint32_t data_00775FAC;
extern uint32_t data_00775FB0;
extern uint32_t data_00775FB4;
extern uint32_t data_00775FB8;
extern uint32_t data_00775FBA;
extern uint32_t data_00775FBC;
extern uint32_t data_00775FBD;
extern uint32_t data_00775FBE;
extern uint32_t data_00775FBF;
extern uint32_t data_00775FC0;
extern uint32_t data_00775FC4;
extern uint32_t data_00775FC8;
extern uint32_t data_00775FCC;
extern uint32_t data_00775FD0;
extern uint32_t data_00775FD1;
extern uint32_t data_00775FD4;
extern uint32_t data_00775FD8;
extern uint32_t data_00775FDC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060ACFC(void);

static const char *const names_0070E378[1] = {
    "wait",
};
static const char *const names_0070E384[1] = {
    "talk",
};
static const char *const names_0070E390[1] = {
    "step",
};
static const char *const names_0070E39C[1] = {
    "walk",
};
static const char *const names_0070E3A8[1] = {
    "fly",
};
static const char *const names_0070E3B4[1] = {
    "fly_wait",
};
static const char *const names_0070E3C0[1] = {
    "fly_talk",
};
static const char *const names_0070E3CC[1] = {
    "fly_search",
};
static const char *const names_0070E3D8[1] = {
    "fly_call",
};
static const char *const names_0070E3E4[1] = {
    "wait",
};
static const char *const names_0070E3F0[1] = {
    "talk",
};
static const char *const names_0070E3FC[1] = {
    "step",
};
static const char *const names_0070E408[1] = {
    "walk",
};
static const char *const names_0070E414[1] = {
    "shake_pot",
};
static const char *const names_00775F7C[4] = {
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

void func_0059C840(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00775D14;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMaple";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\201\203C\203v\203\213";
    fill_names((sead_SafeString *)&data_0070E378, names_0070E378, 1);
    fill_names((sead_SafeString *)&data_0070E384, names_0070E384, 1);
    fill_names((sead_SafeString *)&data_0070E390, names_0070E390, 1);
    fill_names((sead_SafeString *)&data_0070E39C, names_0070E39C, 1);
    fill_names((sead_SafeString *)&data_0070E3A8, names_0070E3A8, 1);
    fill_names((sead_SafeString *)&data_0070E3B4, names_0070E3B4, 1);
    fill_names((sead_SafeString *)&data_0070E3C0, names_0070E3C0, 1);
    fill_names((sead_SafeString *)&data_0070E3CC, names_0070E3CC, 1);
    fill_names((sead_SafeString *)&data_0070E3D8, names_0070E3D8, 1);
    fill_names((sead_SafeString *)&data_0070E3E4, names_0070E3E4, 1);
    fill_names((sead_SafeString *)&data_0070E3F0, names_0070E3F0, 1);
    fill_names((sead_SafeString *)&data_0070E3FC, names_0070E3FC, 1);
    fill_names((sead_SafeString *)&data_0070E408, names_0070E408, 1);
    fill_names((sead_SafeString *)&data_0070E414, names_0070E414, 1);
    fill_names((sead_SafeString *)&data_00775F7C, names_00775F7C, 4);
    data_0070E368 = 0xFFFFFFFFu;
    data_0070E36C = 0xFFFFFFFFu;
    data_0070E370 = 0x00000000u;
    data_0070E374 = 0x00000000u;
    data_00775D14 = 0x00000000u;
    data_00775D18 = 0x00000005u;
    data_00775D1C = (uintptr_t)&data_00775D20;
    data_00775F9C = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_00775FA0 = 0x3F800000u /* 1.0 f */;
    data_00775FA4 = 0x3FC00000u /* 1.5 f */;
    data_00775FA8 = 0x40A00000u /* 5.0 f */;
    data_00775FAC = 0x40400000u /* 3.0 f */;
    data_00775FB0 = 0x3FA00000u /* 1.25 f */;
    data_00775FB4 = 0x0000000Eu;
    *(uint16_t *)&data_00775FB8 = 0x5Au;
    *(uint16_t *)&data_00775FBA = 0xB4u;
    *(uint8_t *)&data_00775FBC = 0xECu;
    *(uint8_t *)&data_00775FBD = 0xECu;
    *(uint8_t *)&data_00775FBE = 0xFu;
    *(uint8_t *)&data_00775FBF = 0x1Eu;
    *(uint8_t *)&data_00775FC0 = 0x1u;
    data_00775FC4 = 0x00000001u;
    data_00775FC8 = 0x00000000u;
    data_00775FCC = 0x00000000u;
    *(uint8_t *)&data_00775FD0 = 0x0u;
    *(uint8_t *)&data_00775FD1 = 0x1u;
    data_00775FD4 = 0xC0800000u /* -4.0 f */;
    data_00775FD8 = 0x40C00000u /* 6.0 f */;
    data_00775FDC = 0x42340000u /* 45.0 f */;
    func_0019B51C((uintptr_t)&data_00775D34, (uintptr_t)&func_0060ACFC, 0x000001ADu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00775D14, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
