/* USA 005A2494 (EU 005A246C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E2D8;
extern uint32_t data_0070E2DC;
extern uint32_t data_0070E2E0;
extern uint32_t data_0070E2E4;
extern uint32_t data_0070E2E8;
extern uint32_t data_0070E2F4;
extern uint32_t data_0070E300;
extern uint32_t data_0070E30C;
extern uint32_t data_007757A4;
extern uint32_t data_007757A8;
extern uint32_t data_007757AC;
extern uint32_t data_007757B0;
extern uint32_t data_007757C4;
extern uint32_t data_00775A0C;
extern uint32_t data_00775A2C;
extern uint32_t data_00775A30;
extern uint32_t data_00775A34;
extern uint32_t data_00775A38;
extern uint32_t data_00775A3C;
extern uint32_t data_00775A40;
extern uint32_t data_00775A44;
extern uint32_t data_00775A48;
extern uint32_t data_00775A4A;
extern uint32_t data_00775A4C;
extern uint32_t data_00775A4D;
extern uint32_t data_00775A4E;
extern uint32_t data_00775A4F;
extern uint32_t data_00775A50;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B38C(void);

static const char *const names_0070E2E8[1] = {
    "wait",
};
static const char *const names_0070E2F4[1] = {
    "talk",
};
static const char *const names_0070E300[1] = {
    "step",
};
static const char *const names_0070E30C[1] = {
    "walk",
};
static const char *const names_00775A0C[4] = {
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

void func_005A2494(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007757A4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcKinSta";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPCLX^";
    fill_names((sead_SafeString *)&data_0070E2E8, names_0070E2E8, 1);
    fill_names((sead_SafeString *)&data_0070E2F4, names_0070E2F4, 1);
    fill_names((sead_SafeString *)&data_0070E300, names_0070E300, 1);
    fill_names((sead_SafeString *)&data_0070E30C, names_0070E30C, 1);
    fill_names((sead_SafeString *)&data_00775A0C, names_00775A0C, 4);
    data_0070E2D8 = 0xFFFFFFFFu;
    data_0070E2DC = 0xFFFFFFFFu;
    data_0070E2E0 = 0x00000000u;
    data_0070E2E4 = 0x00000000u;
    data_007757A4 = 0x00000000u;
    data_007757A8 = 0x00000005u;
    data_007757AC = (uintptr_t)&data_007757B0;
    data_00775A2C = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00775A30 = 0x3F800000u /* 1.0 f */;
    data_00775A34 = 0x3FC00000u /* 1.5 f */;
    data_00775A38 = 0x40A00000u /* 5.0 f */;
    data_00775A3C = 0x40400000u /* 3.0 f */;
    data_00775A40 = 0x40200000u /* 2.5 f */;
    data_00775A44 = 0x0000000Au;
    *(uint16_t *)&data_00775A48 = 0x5Fu;
    *(uint16_t *)&data_00775A4A = 0xB4u;
    *(uint8_t *)&data_00775A4C = 0xEEu;
    *(uint8_t *)&data_00775A4D = 0xECu;
    *(uint8_t *)&data_00775A4E = 0xFu;
    *(uint8_t *)&data_00775A4F = 0x1u;
    *(uint8_t *)&data_00775A50 = 0x1u;
    func_0019B51C((uintptr_t)&data_007757C4, (uintptr_t)&func_0060B38C, 0x000001F1u, (uintptr_t)((char *)stk + 16));
}
