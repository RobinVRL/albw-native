/* USA 005AC7D8 (EU 005AC7B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (10 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E088;
extern uint32_t data_0070E08C;
extern uint32_t data_0070E090;
extern uint32_t data_0070E094;
extern uint32_t data_0070E098;
extern uint32_t data_0070E0A4;
extern uint32_t data_0070E0B0;
extern uint32_t data_0070E0BC;
extern uint32_t data_0070E0C8;
extern uint32_t data_0070E0D4;
extern uint32_t data_00774A34;
extern uint32_t data_00774A38;
extern uint32_t data_00774A3C;
extern uint32_t data_00774A40;
extern uint32_t data_00774A54;
extern uint32_t data_00774C9C;
extern uint32_t data_00774CBC;
extern uint32_t data_00774CC0;
extern uint32_t data_00774CC4;
extern uint32_t data_00774CC8;
extern uint32_t data_00774CCC;
extern uint32_t data_00774CD0;
extern uint32_t data_00774CD4;
extern uint32_t data_00774CD8;
extern uint32_t data_00774CDA;
extern uint32_t data_00774CDC;
extern uint32_t data_00774CDD;
extern uint32_t data_00774CDE;
extern uint32_t data_00774CDF;
extern uint32_t data_00774CE0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006035BC(void);

static const char *const names_0070E098[1] = {
    "wait",
};
static const char *const names_0070E0A4[1] = {
    "talk",
};
static const char *const names_0070E0B0[1] = {
    "step",
};
static const char *const names_0070E0BC[1] = {
    "walk",
};
static const char *const names_0070E0C8[1] = {
    "surprise",
};
static const char *const names_0070E0D4[1] = {
    "run",
};
static const char *const names_00774C9C[4] = {
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

void func_005AC7D8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00774A34;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGuardMan";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"öüN";
    fill_names((sead_SafeString *)&data_0070E098, names_0070E098, 1);
    fill_names((sead_SafeString *)&data_0070E0A4, names_0070E0A4, 1);
    fill_names((sead_SafeString *)&data_0070E0B0, names_0070E0B0, 1);
    fill_names((sead_SafeString *)&data_0070E0BC, names_0070E0BC, 1);
    fill_names((sead_SafeString *)&data_0070E0C8, names_0070E0C8, 1);
    fill_names((sead_SafeString *)&data_0070E0D4, names_0070E0D4, 1);
    fill_names((sead_SafeString *)&data_00774C9C, names_00774C9C, 4);
    data_0070E088 = 0xFFFFFFFFu;
    data_0070E08C = 0xFFFFFFFFu;
    data_0070E090 = 0x00000000u;
    data_0070E094 = 0x00000000u;
    data_00774A34 = 0x00000000u;
    data_00774A38 = 0x00000005u;
    data_00774A3C = (uintptr_t)&data_00774A40;
    data_00774CBC = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00774CC0 = 0x3F800000u /* 1.0 f */;
    data_00774CC4 = 0x3FC00000u /* 1.5 f */;
    data_00774CC8 = 0x40A00000u /* 5.0 f */;
    data_00774CCC = 0x40400000u /* 3.0 f */;
    data_00774CD0 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00774CD4 = 0x0000000Au;
    *(uint16_t *)&data_00774CD8 = 0x5Fu;
    *(uint16_t *)&data_00774CDA = 0xB4u;
    *(uint8_t *)&data_00774CDC = 0xEEu;
    *(uint8_t *)&data_00774CDD = 0xECu;
    *(uint8_t *)&data_00774CDE = 0xFu;
    *(uint8_t *)&data_00774CDF = 0x32u;
    *(uint8_t *)&data_00774CE0 = 0x1Eu;
    func_0019B51C((uintptr_t)&data_00774A54, (uintptr_t)&func_006035BC, 0x000001B7u, (uintptr_t)((char *)stk + 16));
}
