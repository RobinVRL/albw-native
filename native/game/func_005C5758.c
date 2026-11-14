/* USA 005C5758 (EU 005C5730): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DE68;
extern uint32_t data_0070DE6C;
extern uint32_t data_0070DE70;
extern uint32_t data_0070DE74;
extern uint32_t data_0070DE78;
extern uint32_t data_0070DE84;
extern uint32_t data_0070DE90;
extern uint32_t data_0070DE9C;
extern uint32_t data_00773264;
extern uint32_t data_00773268;
extern uint32_t data_0077326C;
extern uint32_t data_00773270;
extern uint32_t data_00773284;
extern uint32_t data_007734CC;
extern uint32_t data_007734EC;
extern uint32_t data_007734F0;
extern uint32_t data_007734F4;
extern uint32_t data_007734F8;
extern uint32_t data_007734FC;
extern uint32_t data_00773500;
extern uint32_t data_00773504;
extern uint32_t data_00773508;
extern uint32_t data_0077350A;
extern uint32_t data_0077350C;
extern uint32_t data_0077350D;
extern uint32_t data_0077350E;
extern uint32_t data_0077350F;
extern uint32_t data_00773510;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605FFC(void);

static const char *const names_0070DE78[1] = {
    "wait",
};
static const char *const names_0070DE84[1] = {
    "talk",
};
static const char *const names_0070DE90[1] = {
    "step",
};
static const char *const names_0070DE9C[1] = {
    "walk",
};
static const char *const names_007734CC[4] = {
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

void func_005C5758(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00773264;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameOctorok";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\203I\203N\203^\203\215\203b\203N";
    fill_names((sead_SafeString *)&data_0070DE78, names_0070DE78, 1);
    fill_names((sead_SafeString *)&data_0070DE84, names_0070DE84, 1);
    fill_names((sead_SafeString *)&data_0070DE90, names_0070DE90, 1);
    fill_names((sead_SafeString *)&data_0070DE9C, names_0070DE9C, 1);
    fill_names((sead_SafeString *)&data_007734CC, names_007734CC, 4);
    data_0070DE68 = 0xFFFFFFFFu;
    data_0070DE6C = 0xFFFFFFFFu;
    data_0070DE70 = 0x00000000u;
    data_0070DE74 = 0x00000000u;
    data_00773264 = 0x00000000u;
    data_00773268 = 0x00000005u;
    data_0077326C = (uintptr_t)&data_00773270;
    data_007734EC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_007734F0 = 0x3F800000u /* 1.0 f */;
    data_007734F4 = 0x3FC00000u /* 1.5 f */;
    data_007734F8 = 0x40A00000u /* 5.0 f */;
    data_007734FC = 0x40400000u /* 3.0 f */;
    data_00773500 = 0x3FA00000u /* 1.25 f */;
    data_00773504 = 0x0000000Du;
    *(uint16_t *)&data_00773508 = 0x5Fu;
    *(uint16_t *)&data_0077350A = 0xB4u;
    *(uint8_t *)&data_0077350C = 0xEEu;
    *(uint8_t *)&data_0077350D = 0xECu;
    *(uint8_t *)&data_0077350E = 0xFu;
    *(uint8_t *)&data_0077350F = 0x28u;
    *(uint8_t *)&data_00773510 = 0x14u;
    func_0019B51C((uintptr_t)&data_00773284, (uintptr_t)&func_00605FFC, 0x000001E5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00773264, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
