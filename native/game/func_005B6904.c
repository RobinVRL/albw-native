/* USA 005B6904 (EU 005B68DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (11 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DB08;
extern uint32_t data_0070DB0C;
extern uint32_t data_0070DB10;
extern uint32_t data_0070DB14;
extern uint32_t data_0070DB18;
extern uint32_t data_0070DB2C;
extern uint32_t data_0070DB38;
extern uint32_t data_0070DB44;
extern uint32_t data_0070DB50;
extern uint32_t data_0070DB5C;
extern uint32_t data_007714B4;
extern uint32_t data_007714B8;
extern uint32_t data_007714BC;
extern uint32_t data_007714C0;
extern uint32_t data_007714D4;
extern uint32_t data_0077171C;
extern uint32_t data_0077173C;
extern uint32_t data_00771740;
extern uint32_t data_00771744;
extern uint32_t data_00771748;
extern uint32_t data_0077174C;
extern uint32_t data_00771750;
extern uint32_t data_00771754;
extern uint32_t data_00771758;
extern uint32_t data_0077175A;
extern uint32_t data_0077175C;
extern uint32_t data_0077175D;
extern uint32_t data_0077175E;
extern uint32_t data_0077175F;
extern uint32_t data_00771760;
extern uint32_t data_00771764;
extern uint32_t data_00771768;
extern uint32_t data_0077176C;
extern uint32_t data_00771770;
extern uint32_t data_00771771;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604040(void);

static const char *const names_0070DB18[2] = {
    "shield",
    "wait",
};
static const char *const names_0070DB2C[1] = {
    "talk",
};
static const char *const names_0070DB38[1] = {
    "wait_shield",
};
static const char *const names_0070DB44[1] = {
    "walk_shield",
};
static const char *const names_0070DB50[1] = {
    "step_shield",
};
static const char *const names_0070DB5C[1] = {
    "talk_shield",
};
static const char *const names_0077171C[4] = {
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

void func_005B6904(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007714B4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcCommander";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\272\216m\221\340\222\267";
    fill_names((sead_SafeString *)&data_0070DB18, names_0070DB18, 2);
    fill_names((sead_SafeString *)&data_0070DB2C, names_0070DB2C, 1);
    fill_names((sead_SafeString *)&data_0070DB38, names_0070DB38, 1);
    fill_names((sead_SafeString *)&data_0070DB44, names_0070DB44, 1);
    fill_names((sead_SafeString *)&data_0070DB50, names_0070DB50, 1);
    fill_names((sead_SafeString *)&data_0070DB5C, names_0070DB5C, 1);
    fill_names((sead_SafeString *)&data_0077171C, names_0077171C, 4);
    data_0070DB08 = 0xFFFFFFFFu;
    data_0070DB0C = 0xFFFFFFFFu;
    data_0070DB10 = 0x00000000u;
    data_0070DB14 = 0x00000000u;
    data_007714B4 = 0x00000000u;
    data_007714B8 = 0x00000005u;
    data_007714BC = (uintptr_t)&data_007714C0;
    data_0077173C = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_00771740 = 0x3F800000u /* 1.0 f */;
    data_00771744 = 0x3FC00000u /* 1.5 f */;
    data_00771748 = 0x40A00000u /* 5.0 f */;
    data_0077174C = 0x40A00000u /* 5.0 f */;
    data_00771750 = 0x3FC00000u /* 1.5 f */;
    data_00771754 = 0x0000000Du;
    *(uint16_t *)&data_00771758 = 0x5Au;
    *(uint16_t *)&data_0077175A = 0xB4u;
    *(uint8_t *)&data_0077175C = 0xEEu;
    *(uint8_t *)&data_0077175D = 0xECu;
    *(uint8_t *)&data_0077175E = 0xFu;
    *(uint8_t *)&data_0077175F = 0x1Eu;
    *(uint8_t *)&data_00771760 = 0xAu;
    data_00771764 = 0x00000001u;
    data_00771768 = 0x00000000u;
    data_0077176C = 0x00000000u;
    *(uint8_t *)&data_00771770 = 0x0u;
    *(uint8_t *)&data_00771771 = 0x1u;
    func_0019B51C((uintptr_t)&data_007714D4, (uintptr_t)&func_00604040, 0x000001C1u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007714B4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
