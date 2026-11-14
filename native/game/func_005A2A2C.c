/* USA 005A2A2C (EU 005A2A04): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (11 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E510;
extern uint32_t data_0070E514;
extern uint32_t data_0070E518;
extern uint32_t data_0070E51C;
extern uint32_t data_0070E520;
extern uint32_t data_0070E52C;
extern uint32_t data_0070E538;
extern uint32_t data_0070E544;
extern uint32_t data_0070E550;
extern uint32_t data_0070E55C;
extern uint32_t data_0070E568;
extern uint32_t data_007767DC;
extern uint32_t data_007767E0;
extern uint32_t data_007767E4;
extern uint32_t data_007767E8;
extern uint32_t data_007767FC;
extern uint32_t data_00776A44;
extern uint32_t data_00776A64;
extern uint32_t data_00776A68;
extern uint32_t data_00776A6C;
extern uint32_t data_00776A70;
extern uint32_t data_00776A74;
extern uint32_t data_00776A78;
extern uint32_t data_00776A7C;
extern uint32_t data_00776A80;
extern uint32_t data_00776A82;
extern uint32_t data_00776A84;
extern uint32_t data_00776A85;
extern uint32_t data_00776A86;
extern uint32_t data_00776A87;
extern uint32_t data_00776A88;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B3E4(void);

static const char *const names_0070E520[1] = {
    "wait",
};
static const char *const names_0070E52C[1] = {
    "talk",
};
static const char *const names_0070E538[1] = {
    "step",
};
static const char *const names_0070E544[1] = {
    "walk",
};
static const char *const names_0070E550[1] = {
    "surpriseA",
};
static const char *const names_0070E55C[1] = {
    "wind",
};
static const char *const names_0070E568[1] = {
    "run",
};
static const char *const names_00776A44[4] = {
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

void func_005A2A2C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007767DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMobman";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\224\304\227p\222j\220\253";
    fill_names((sead_SafeString *)&data_0070E520, names_0070E520, 1);
    fill_names((sead_SafeString *)&data_0070E52C, names_0070E52C, 1);
    fill_names((sead_SafeString *)&data_0070E538, names_0070E538, 1);
    fill_names((sead_SafeString *)&data_0070E544, names_0070E544, 1);
    fill_names((sead_SafeString *)&data_0070E550, names_0070E550, 1);
    fill_names((sead_SafeString *)&data_0070E55C, names_0070E55C, 1);
    fill_names((sead_SafeString *)&data_0070E568, names_0070E568, 1);
    fill_names((sead_SafeString *)&data_00776A44, names_00776A44, 4);
    data_0070E510 = 0xFFFFFFFFu;
    data_0070E514 = 0xFFFFFFFFu;
    data_0070E518 = 0x00000000u;
    data_0070E51C = 0x00000000u;
    data_007767DC = 0x00000000u;
    data_007767E0 = 0x00000005u;
    data_007767E4 = (uintptr_t)&data_007767E8;
    data_00776A64 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00776A68 = 0x3F800000u /* 1.0 f */;
    data_00776A6C = 0x3FC00000u /* 1.5 f */;
    data_00776A70 = 0x40A00000u /* 5.0 f */;
    data_00776A74 = 0x40400000u /* 3.0 f */;
    data_00776A78 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00776A7C = 0x0000000Au;
    *(uint16_t *)&data_00776A80 = 0x5Fu;
    *(uint16_t *)&data_00776A82 = 0xB4u;
    *(uint8_t *)&data_00776A84 = 0xEEu;
    *(uint8_t *)&data_00776A85 = 0xECu;
    *(uint8_t *)&data_00776A86 = 0xFu;
    *(uint8_t *)&data_00776A87 = 0x32u;
    *(uint8_t *)&data_00776A88 = 0x1Eu;
    func_0019B51C((uintptr_t)&data_007767FC, (uintptr_t)&func_0060B3E4, 0x00000188u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007767DC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
