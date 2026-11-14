/* USA 005ACCD4 (EU 005ACCAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (10 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E578;
extern uint32_t data_0070E57C;
extern uint32_t data_0070E580;
extern uint32_t data_0070E584;
extern uint32_t data_0070E588;
extern uint32_t data_0070E594;
extern uint32_t data_0070E5A0;
extern uint32_t data_0070E5AC;
extern uint32_t data_0070E5B8;
extern uint32_t data_0070E5C4;
extern uint32_t data_00776A8C;
extern uint32_t data_00776A90;
extern uint32_t data_00776A94;
extern uint32_t data_00776A98;
extern uint32_t data_00776AAC;
extern uint32_t data_00776CF4;
extern uint32_t data_00776D14;
extern uint32_t data_00776D18;
extern uint32_t data_00776D1C;
extern uint32_t data_00776D20;
extern uint32_t data_00776D24;
extern uint32_t data_00776D28;
extern uint32_t data_00776D2C;
extern uint32_t data_00776D30;
extern uint32_t data_00776D32;
extern uint32_t data_00776D34;
extern uint32_t data_00776D35;
extern uint32_t data_00776D36;
extern uint32_t data_00776D37;
extern uint32_t data_00776D38;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603614(void);

static const char *const names_0070E588[1] = {
    "wait",
};
static const char *const names_0070E594[1] = {
    "talk",
};
static const char *const names_0070E5A0[1] = {
    "step",
};
static const char *const names_0070E5AC[1] = {
    "walk",
};
static const char *const names_0070E5B8[1] = {
    "run",
};
static const char *const names_0070E5C4[1] = {
    "random",
};
static const char *const names_00776CF4[4] = {
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

void func_005ACCD4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00776A8C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMobwoman";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\224\304\227p\217\227\220\253";
    fill_names((sead_SafeString *)&data_0070E588, names_0070E588, 1);
    fill_names((sead_SafeString *)&data_0070E594, names_0070E594, 1);
    fill_names((sead_SafeString *)&data_0070E5A0, names_0070E5A0, 1);
    fill_names((sead_SafeString *)&data_0070E5AC, names_0070E5AC, 1);
    fill_names((sead_SafeString *)&data_0070E5B8, names_0070E5B8, 1);
    fill_names((sead_SafeString *)&data_0070E5C4, names_0070E5C4, 1);
    fill_names((sead_SafeString *)&data_00776CF4, names_00776CF4, 4);
    data_0070E578 = 0xFFFFFFFFu;
    data_0070E57C = 0xFFFFFFFFu;
    data_0070E580 = 0x00000000u;
    data_0070E584 = 0x00000000u;
    data_00776A8C = 0x00000000u;
    data_00776A90 = 0x00000005u;
    data_00776A94 = (uintptr_t)&data_00776A98;
    data_00776D14 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00776D18 = 0x3F800000u /* 1.0 f */;
    data_00776D1C = 0x3F000000u /* 0.5 f */;
    data_00776D20 = 0x40800000u /* 4.0 f */;
    data_00776D24 = 0x40400000u /* 3.0 f */;
    data_00776D28 = 0x3FA00000u /* 1.25 f */;
    data_00776D2C = 0x0000000Au;
    *(uint16_t *)&data_00776D30 = 0x5Fu;
    *(uint16_t *)&data_00776D32 = 0xB4u;
    *(uint8_t *)&data_00776D34 = 0xECu;
    *(uint8_t *)&data_00776D35 = 0xECu;
    *(uint8_t *)&data_00776D36 = 0xFu;
    *(uint8_t *)&data_00776D37 = 0x1Eu;
    *(uint8_t *)&data_00776D38 = 0x14u;
    func_0019B51C((uintptr_t)&data_00776AAC, (uintptr_t)&func_00603614, 0x00000189u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00776A8C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
