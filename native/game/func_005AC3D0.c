/* USA 005AC3D0 (EU 005AC3A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 11 sead::SafeString name tables (16 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DEA8;
extern uint32_t data_0070DEAC;
extern uint32_t data_0070DEB0;
extern uint32_t data_0070DEB4;
extern uint32_t data_0070DEB8;
extern uint32_t data_0070DED4;
extern uint32_t data_0070DEE0;
extern uint32_t data_0070DEEC;
extern uint32_t data_0070DEF8;
extern uint32_t data_0070DF04;
extern uint32_t data_0070DF10;
extern uint32_t data_0070DF1C;
extern uint32_t data_0070DF28;
extern uint32_t data_0070DF34;
extern uint32_t data_00773514;
extern uint32_t data_00773518;
extern uint32_t data_0077351C;
extern uint32_t data_00773520;
extern uint32_t data_00773534;
extern uint32_t data_0077377C;
extern uint32_t data_00773780;
extern uint32_t data_00773784;
extern uint32_t data_00773788;
extern uint32_t data_0077379C;
extern uint32_t data_007739E4;
extern uint32_t data_00773A04;
extern uint32_t data_00773A08;
extern uint32_t data_00773A0C;
extern uint32_t data_00773A10;
extern uint32_t data_00773A14;
extern uint32_t data_00773A18;
extern uint32_t data_00773A1C;
extern uint32_t data_00773A20;
extern uint32_t data_00773A22;
extern uint32_t data_00773A24;
extern uint32_t data_00773A25;
extern uint32_t data_00773A26;
extern uint32_t data_00773A27;
extern uint32_t data_00773A28;
extern uint32_t data_00773A2C;
extern uint32_t data_00773A30;
extern uint32_t data_00773A34;
extern uint32_t data_00773A38;
extern uint32_t data_00773A3C;
extern uint32_t data_00773A40;
extern uint32_t data_00773A44;
extern uint32_t data_00773A48;
extern uint32_t data_00773A4A;
extern uint32_t data_00773A4C;
extern uint32_t data_00773A4D;
extern uint32_t data_00773A4E;
extern uint32_t data_00773A4F;
extern uint32_t data_00773A50;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607020(void);
void func_00607C9C(void);

static const char *const names_0070DEB8[3] = {
    "RaceFlag",
    "HandL",
    "wait",
};
static const char *const names_0070DED4[1] = {
    "talk",
};
static const char *const names_0070DEE0[1] = {
    "step",
};
static const char *const names_0070DEEC[1] = {
    "random",
};
static const char *const names_0070DEF8[1] = {
    "shake_flag",
};
static const char *const names_0070DF04[1] = {
    "wait",
};
static const char *const names_0070DF10[1] = {
    "talk",
};
static const char *const names_0070DF1C[1] = {
    "step",
};
static const char *const names_0070DF28[1] = {
    "random",
};
static const char *const names_0070DF34[1] = {
    "shake_flag",
};
static const char *const names_007739E4[4] = {
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

void func_005AC3D0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00773514;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameRaceStart";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"nC[X®X^[g";
    fill_names((sead_SafeString *)&data_0070DEB8, names_0070DEB8, 3);
    fill_names((sead_SafeString *)&data_0070DED4, names_0070DED4, 1);
    fill_names((sead_SafeString *)&data_0070DEE0, names_0070DEE0, 1);
    fill_names((sead_SafeString *)&data_0070DEEC, names_0070DEEC, 1);
    fill_names((sead_SafeString *)&data_0070DEF8, names_0070DEF8, 1);
    fill_names((sead_SafeString *)&data_0070DF04, names_0070DF04, 1);
    fill_names((sead_SafeString *)&data_0070DF10, names_0070DF10, 1);
    fill_names((sead_SafeString *)&data_0070DF1C, names_0070DF1C, 1);
    fill_names((sead_SafeString *)&data_0070DF28, names_0070DF28, 1);
    fill_names((sead_SafeString *)&data_0070DF34, names_0070DF34, 1);
    fill_names((sead_SafeString *)&data_007739E4, names_007739E4, 4);
    data_0070DEA8 = 0xFFFFFFFFu;
    data_0070DEAC = 0xFFFFFFFFu;
    data_0070DEB0 = 0x00000000u;
    data_0070DEB4 = 0x00000000u;
    data_00773514 = 0x00000000u;
    data_00773518 = 0x00000005u;
    data_0077351C = (uintptr_t)&data_00773520;
    data_00773A04 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00773A08 = 0x3F800000u /* 1.0 f */;
    data_00773A0C = 0x3FC00000u /* 1.5 f */;
    data_00773A10 = 0x40A00000u /* 5.0 f */;
    data_00773A14 = 0x4019999Au /* 2.4000000953674316 f */;
    data_00773A18 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_00773A1C = 0x0000000Eu;
    *(uint16_t *)&data_00773A20 = 0x5Au;
    *(uint16_t *)&data_00773A22 = 0xB4u;
    *(uint8_t *)&data_00773A24 = 0xF6u;
    *(uint8_t *)&data_00773A25 = 0xF1u;
    *(uint8_t *)&data_00773A26 = 0x14u;
    *(uint8_t *)&data_00773A27 = 0x14u;
    *(uint8_t *)&data_00773A28 = 0xAu;
    data_00773A2C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00773A30 = 0x3F800000u /* 1.0 f */;
    data_00773A34 = 0x3FC00000u /* 1.5 f */;
    data_00773A38 = 0x40A00000u /* 5.0 f */;
    data_00773A3C = 0x4019999Au /* 2.4000000953674316 f */;
    data_00773A40 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_00773A44 = 0x0000000Eu;
    *(uint16_t *)&data_00773A48 = 0x5Au;
    *(uint16_t *)&data_00773A4A = 0xB4u;
    *(uint8_t *)&data_00773A4C = 0xF6u;
    *(uint8_t *)&data_00773A4D = 0xF1u;
    *(uint8_t *)&data_00773A4E = 0x14u;
    *(uint8_t *)&data_00773A4F = 0xFu;
    *(uint8_t *)&data_00773A50 = 0xAu;
    func_0019B51C((uintptr_t)&data_00773534, (uintptr_t)&func_00607C9C, 0x000001DEu, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077377C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcGameRaceGoal";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"nC[X®S[";
    data_0077377C = 0x00000000u;
    data_00773780 = 0x00000005u;
    data_00773784 = (uintptr_t)&data_00773788;
    func_0019B51C((uintptr_t)&data_0077379C, (uintptr_t)&func_00607020, 0x000001DFu, (uintptr_t)((char *)stk + 32));
}
