/* USA 005A6500 (EU 005A64D8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 16 sead::SafeString name tables (20 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DA38;
extern uint32_t data_0070DA3C;
extern uint32_t data_0070DA40;
extern uint32_t data_0070DA44;
extern uint32_t data_0070DA48;
extern uint32_t data_0070DA5C;
extern uint32_t data_0070DA68;
extern uint32_t data_0070DA74;
extern uint32_t data_0070DA80;
extern uint32_t data_0070DA8C;
extern uint32_t data_0070DA98;
extern uint32_t data_0070DAA4;
extern uint32_t data_0070DAB0;
extern uint32_t data_0070DABC;
extern uint32_t data_0070DAC8;
extern uint32_t data_0070DAD4;
extern uint32_t data_0070DAE0;
extern uint32_t data_0070DAEC;
extern uint32_t data_0070DAF8;
extern uint32_t data_00771204;
extern uint32_t data_00771208;
extern uint32_t data_0077120C;
extern uint32_t data_00771210;
extern uint32_t data_00771224;
extern uint32_t data_0077146C;
extern uint32_t data_0077148C;
extern uint32_t data_00771490;
extern uint32_t data_00771494;
extern uint32_t data_00771498;
extern uint32_t data_0077149C;
extern uint32_t data_007714A0;
extern uint32_t data_007714A4;
extern uint32_t data_007714A8;
extern uint32_t data_007714AA;
extern uint32_t data_007714AC;
extern uint32_t data_007714AD;
extern uint32_t data_007714AE;
extern uint32_t data_007714AF;
extern uint32_t data_007714B0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602C00(void);

static const char *const names_0070DA48[2] = {
    "HandR",
    "wait",
};
static const char *const names_0070DA5C[1] = {
    "talk",
};
static const char *const names_0070DA68[1] = {
    "step",
};
static const char *const names_0070DA74[1] = {
    "walk",
};
static const char *const names_0070DA80[1] = {
    "wait_down",
};
static const char *const names_0070DA8C[1] = {
    "talk_down",
};
static const char *const names_0070DA98[1] = {
    "wait_bottle",
};
static const char *const names_0070DAA4[1] = {
    "talk_bottle",
};
static const char *const names_0070DAB0[1] = {
    "happy_down",
};
static const char *const names_0070DABC[1] = {
    "drink_down",
};
static const char *const names_0070DAC8[1] = {
    "drink_ed",
};
static const char *const names_0070DAD4[1] = {
    "pass",
};
static const char *const names_0070DAE0[1] = {
    "wait_bar",
};
static const char *const names_0070DAEC[1] = {
    "talk_bar",
};
static const char *const names_0070DAF8[1] = {
    "step_bar",
};
static const char *const names_0077146C[4] = {
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

void func_005A6500(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00771204;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcClimber";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223o\216R\216\322";
    fill_names((sead_SafeString *)&data_0070DA48, names_0070DA48, 2);
    fill_names((sead_SafeString *)&data_0070DA5C, names_0070DA5C, 1);
    fill_names((sead_SafeString *)&data_0070DA68, names_0070DA68, 1);
    fill_names((sead_SafeString *)&data_0070DA74, names_0070DA74, 1);
    fill_names((sead_SafeString *)&data_0070DA80, names_0070DA80, 1);
    fill_names((sead_SafeString *)&data_0070DA8C, names_0070DA8C, 1);
    fill_names((sead_SafeString *)&data_0070DA98, names_0070DA98, 1);
    fill_names((sead_SafeString *)&data_0070DAA4, names_0070DAA4, 1);
    fill_names((sead_SafeString *)&data_0070DAB0, names_0070DAB0, 1);
    fill_names((sead_SafeString *)&data_0070DABC, names_0070DABC, 1);
    fill_names((sead_SafeString *)&data_0070DAC8, names_0070DAC8, 1);
    fill_names((sead_SafeString *)&data_0070DAD4, names_0070DAD4, 1);
    fill_names((sead_SafeString *)&data_0070DAE0, names_0070DAE0, 1);
    fill_names((sead_SafeString *)&data_0070DAEC, names_0070DAEC, 1);
    fill_names((sead_SafeString *)&data_0070DAF8, names_0070DAF8, 1);
    fill_names((sead_SafeString *)&data_0077146C, names_0077146C, 4);
    data_0070DA38 = 0xFFFFFFFFu;
    data_0070DA3C = 0xFFFFFFFFu;
    data_0070DA40 = 0x00000000u;
    data_0070DA44 = 0x00000000u;
    data_00771204 = 0x00000000u;
    data_00771208 = 0x00000005u;
    data_0077120C = (uintptr_t)&data_00771210;
    data_0077148C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00771490 = 0x3F800000u /* 1.0 f */;
    data_00771494 = 0x3FC00000u /* 1.5 f */;
    data_00771498 = 0x40A00000u /* 5.0 f */;
    data_0077149C = 0x40400000u /* 3.0 f */;
    data_007714A0 = 0x3FA00000u /* 1.25 f */;
    data_007714A4 = 0x0000000Bu;
    *(uint16_t *)&data_007714A8 = 0x5Fu;
    *(uint16_t *)&data_007714AA = 0xB4u;
    *(uint8_t *)&data_007714AC = 0xEEu;
    *(uint8_t *)&data_007714AD = 0xECu;
    *(uint8_t *)&data_007714AE = 0xFu;
    *(uint8_t *)&data_007714AF = 0x28u;
    *(uint8_t *)&data_007714B0 = 0x14u;
    func_0019B51C((uintptr_t)&data_00771224, (uintptr_t)&func_00602C00, 0x000001C5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00771204, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
