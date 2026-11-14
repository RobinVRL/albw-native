/* USA 005CECB8 (EU 005CEC90): static initialiser, decompiled by tools/decomp_initializer.py.
 * 4 sead::SafeString name tables (9 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DFF8;
extern uint32_t data_0070DFFC;
extern uint32_t data_0070E000;
extern uint32_t data_0070E004;
extern uint32_t data_0070E008;
extern uint32_t data_0070E024;
extern uint32_t data_0070E030;
extern uint32_t data_00774244;
extern uint32_t data_00774248;
extern uint32_t data_0077424C;
extern uint32_t data_00774250;
extern uint32_t data_00774264;
extern uint32_t data_007744AC;
extern uint32_t data_007744B0;
extern uint32_t data_007744B4;
extern uint32_t data_007744B8;
extern uint32_t data_007744CC;
extern uint32_t data_00774714;
extern uint32_t data_00774734;
extern uint32_t data_00774738;
extern uint32_t data_0077473C;
extern uint32_t data_00774740;
extern uint32_t data_00774744;
extern uint32_t data_00774748;
extern uint32_t data_0077474C;
extern uint32_t data_00774750;
extern uint32_t data_00774752;
extern uint32_t data_00774754;
extern uint32_t data_00774755;
extern uint32_t data_00774756;
extern uint32_t data_00774757;
extern uint32_t data_00774758;
extern uint32_t data_0077475C;
extern uint32_t data_00774760;
extern uint32_t data_00774764;
extern uint32_t data_00774768;
extern uint32_t data_0077476C;
extern uint32_t data_00774770;
extern uint32_t data_00774774;
extern uint32_t data_00774778;
extern uint32_t data_0077477A;
extern uint32_t data_0077477C;
extern uint32_t data_0077477D;
extern uint32_t data_0077477E;
extern uint32_t data_0077477F;
extern uint32_t data_00774780;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006070D0(void);
void func_00608DE4(void);

static const char *const names_0070E008[3] = {
    "FieldLight_18_BoxMan_Ending",
    "FieldDark_18_BoxManDark_Ending",
    "wait",
};
static const char *const names_0070E024[1] = {
    "talk",
};
static const char *const names_0070E030[1] = {
    "step",
};
static const char *const names_00774714[4] = {
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

void func_005CECB8(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00774244;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameTreasure";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ó ®iõj";
    fill_names((sead_SafeString *)&data_0070E008, names_0070E008, 3);
    fill_names((sead_SafeString *)&data_0070E024, names_0070E024, 1);
    fill_names((sead_SafeString *)&data_0070E030, names_0070E030, 1);
    fill_names((sead_SafeString *)&data_00774714, names_00774714, 4);
    data_0070DFF8 = 0xFFFFFFFFu;
    data_0070DFFC = 0xFFFFFFFFu;
    data_0070E000 = 0x00000000u;
    data_0070E004 = 0x00000000u;
    data_00774244 = 0x00000000u;
    data_00774248 = 0x00000005u;
    data_0077424C = (uintptr_t)&data_00774250;
    data_00774734 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00774738 = 0x3F800000u /* 1.0 f */;
    data_0077473C = 0x3FC00000u /* 1.5 f */;
    data_00774740 = 0x40A00000u /* 5.0 f */;
    data_00774744 = 0x4019999Au /* 2.4000000953674316 f */;
    data_00774748 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_0077474C = 0x0000000Cu;
    *(uint16_t *)&data_00774750 = 0x5Au;
    *(uint16_t *)&data_00774752 = 0xB4u;
    *(uint8_t *)&data_00774754 = 0xF6u;
    *(uint8_t *)&data_00774755 = 0xF1u;
    *(uint8_t *)&data_00774756 = 0x14u;
    *(uint8_t *)&data_00774757 = 0xFu;
    *(uint8_t *)&data_00774758 = 0xAu;
    data_0077475C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00774760 = 0x3F800000u /* 1.0 f */;
    data_00774764 = 0x3FC00000u /* 1.5 f */;
    data_00774768 = 0x40A00000u /* 5.0 f */;
    data_0077476C = 0x4019999Au /* 2.4000000953674316 f */;
    data_00774770 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_00774774 = 0x0000000Du;
    *(uint16_t *)&data_00774778 = 0x5Au;
    *(uint16_t *)&data_0077477A = 0xB4u;
    *(uint8_t *)&data_0077477C = 0xF6u;
    *(uint8_t *)&data_0077477D = 0xF1u;
    *(uint8_t *)&data_0077477E = 0x14u;
    *(uint8_t *)&data_0077477F = 0xFu;
    *(uint8_t *)&data_00774780 = 0xAu;
    func_0019B51C((uintptr_t)&data_00774264, (uintptr_t)&func_006070D0, 0x000001E0u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007744AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcGameTreasureUra";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"ó ®iÅj";
    data_007744AC = 0x00000000u;
    data_007744B0 = 0x00000005u;
    data_007744B4 = (uintptr_t)&data_007744B8;
    func_0019B51C((uintptr_t)&data_007744CC, (uintptr_t)&func_00608DE4, 0x000001E1u, (uintptr_t)((char *)stk + 32));
}
