/* USA 005E9E04 (EU 005E9DDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (15 names), 55 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EF40;
extern uint32_t data_0070EF44;
extern uint32_t data_0070EF48;
extern uint32_t data_0070EF4C;
extern uint32_t data_0070EF50;
extern uint32_t data_0070EF5C;
extern uint32_t data_0070EF68;
extern uint32_t data_0070EF74;
extern uint32_t data_0070EF80;
extern uint32_t data_0070EF8C;
extern uint32_t data_0070EF98;
extern uint32_t data_0070EFA4;
extern uint32_t data_0070EFB0;
extern uint32_t data_0070EFBC;
extern uint32_t data_0070EFC8;
extern uint32_t data_00780280;
extern uint32_t data_00780284;
extern uint32_t data_00780288;
extern uint32_t data_0078028C;
extern uint32_t data_007802A0;
extern uint32_t data_007804E8;
extern uint32_t data_007804EC;
extern uint32_t data_007804F0;
extern uint32_t data_007804F4;
extern uint32_t data_00780508;
extern uint32_t data_00780750;
extern uint32_t data_00780754;
extern uint32_t data_00780758;
extern uint32_t data_0078075C;
extern uint32_t data_00780770;
extern uint32_t data_007809B8;
extern uint32_t data_007809D8;
extern uint32_t data_007809DC;
extern uint32_t data_007809E0;
extern uint32_t data_007809E4;
extern uint32_t data_007809E8;
extern uint32_t data_007809EC;
extern uint32_t data_007809F0;
extern uint32_t data_007809F4;
extern uint32_t data_007809F6;
extern uint32_t data_007809F8;
extern uint32_t data_007809F9;
extern uint32_t data_007809FA;
extern uint32_t data_007809FB;
extern uint32_t data_007809FC;
extern uint32_t data_00780A00;
extern uint32_t data_00780A04;
extern uint32_t data_00780A08;
extern uint32_t data_00780A0C;
extern uint32_t data_00780A10;
extern uint32_t data_00780A14;
extern uint32_t data_00780A18;
extern uint32_t data_00780A1C;
extern uint32_t data_00780A1E;
extern uint32_t data_00780A20;
extern uint32_t data_00780A21;
extern uint32_t data_00780A22;
extern uint32_t data_00780A23;
extern uint32_t data_00780A24;
extern uint32_t data_00780A28;
extern uint32_t data_00780A2C;
extern uint32_t data_00780A30;
extern uint32_t data_00780A34;
extern uint32_t data_00780A38;
extern uint32_t data_00780A3C;
extern uint32_t data_00780A40;
extern uint32_t data_00780A44;
extern uint32_t data_00780A46;
extern uint32_t data_00780A48;
extern uint32_t data_00780A49;
extern uint32_t data_00780A4A;
extern uint32_t data_00780A4B;
extern uint32_t data_00780A4C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609E38(void);
void func_0060A010(void);
void func_0060A04C(void);

static const char *const names_0070EF50[1] = {
    "wait",
};
static const char *const names_0070EF5C[1] = {
    "talk",
};
static const char *const names_0070EF68[1] = {
    "step",
};
static const char *const names_0070EF74[1] = {
    "search",
};
static const char *const names_0070EF80[1] = {
    "wait",
};
static const char *const names_0070EF8C[1] = {
    "talk",
};
static const char *const names_0070EF98[1] = {
    "step",
};
static const char *const names_0070EFA4[1] = {
    "search",
};
static const char *const names_0070EFB0[1] = {
    "wait",
};
static const char *const names_0070EFBC[1] = {
    "talk",
};
static const char *const names_0070EFC8[1] = {
    "step",
};
static const char *const names_007809B8[4] = {
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

void func_005E9E04(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00780280;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcTreasureHunterLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPCgW[n^[(õ)";
    fill_names((sead_SafeString *)&data_0070EF50, names_0070EF50, 1);
    fill_names((sead_SafeString *)&data_0070EF5C, names_0070EF5C, 1);
    fill_names((sead_SafeString *)&data_0070EF68, names_0070EF68, 1);
    fill_names((sead_SafeString *)&data_0070EF74, names_0070EF74, 1);
    fill_names((sead_SafeString *)&data_0070EF80, names_0070EF80, 1);
    fill_names((sead_SafeString *)&data_0070EF8C, names_0070EF8C, 1);
    fill_names((sead_SafeString *)&data_0070EF98, names_0070EF98, 1);
    fill_names((sead_SafeString *)&data_0070EFA4, names_0070EFA4, 1);
    fill_names((sead_SafeString *)&data_0070EFB0, names_0070EFB0, 1);
    fill_names((sead_SafeString *)&data_0070EFBC, names_0070EFBC, 1);
    fill_names((sead_SafeString *)&data_0070EFC8, names_0070EFC8, 1);
    fill_names((sead_SafeString *)&data_007809B8, names_007809B8, 4);
    data_0070EF40 = 0xFFFFFFFFu;
    data_0070EF44 = 0xFFFFFFFFu;
    data_0070EF48 = 0x00000000u;
    data_0070EF4C = 0x00000000u;
    data_00780280 = 0x00000000u;
    data_00780284 = 0x00000005u;
    data_00780288 = (uintptr_t)&data_0078028C;
    data_007809D8 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_007809DC = 0x3F800000u /* 1.0 f */;
    data_007809E0 = 0x3FC00000u /* 1.5 f */;
    data_007809E4 = 0x40A00000u /* 5.0 f */;
    data_007809E8 = 0x40400000u /* 3.0 f */;
    data_007809EC = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_007809F0 = 0x0000000Fu;
    *(uint16_t *)&data_007809F4 = 0x5Fu;
    *(uint16_t *)&data_007809F6 = 0xB4u;
    *(uint8_t *)&data_007809F8 = 0xEEu;
    *(uint8_t *)&data_007809F9 = 0xECu;
    *(uint8_t *)&data_007809FA = 0xFu;
    *(uint8_t *)&data_007809FB = 0x28u;
    *(uint8_t *)&data_007809FC = 0x5u;
    data_00780A00 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00780A04 = 0x3F800000u /* 1.0 f */;
    data_00780A08 = 0x3FC00000u /* 1.5 f */;
    data_00780A0C = 0x40A00000u /* 5.0 f */;
    data_00780A10 = 0x40400000u /* 3.0 f */;
    data_00780A14 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00780A18 = 0x0000000Fu;
    *(uint16_t *)&data_00780A1C = 0x5Fu;
    *(uint16_t *)&data_00780A1E = 0xB4u;
    *(uint8_t *)&data_00780A20 = 0xEEu;
    *(uint8_t *)&data_00780A21 = 0xECu;
    *(uint8_t *)&data_00780A22 = 0xFu;
    *(uint8_t *)&data_00780A23 = 0x28u;
    *(uint8_t *)&data_00780A24 = 0x5u;
    data_00780A28 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00780A2C = 0x3F800000u /* 1.0 f */;
    data_00780A30 = 0x3FC00000u /* 1.5 f */;
    data_00780A34 = 0x40A00000u /* 5.0 f */;
    data_00780A38 = 0x40400000u /* 3.0 f */;
    data_00780A3C = 0x3F000000u /* 0.5 f */;
    data_00780A40 = 0x0000000Au;
    *(uint16_t *)&data_00780A44 = 0x5Fu;
    *(uint16_t *)&data_00780A46 = 0xB4u;
    *(uint8_t *)&data_00780A48 = 0xEEu;
    *(uint8_t *)&data_00780A49 = 0xECu;
    *(uint8_t *)&data_00780A4A = 0xFu;
    *(uint8_t *)&data_00780A4B = 0x28u;
    *(uint8_t *)&data_00780A4C = 0x5u;
    func_0019B51C((uintptr_t)&data_007802A0, (uintptr_t)&func_0060A04C, 0x000001EEu, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007804E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcTreasureHunterDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"NPCgW[n^[(Å)";
    data_007804E8 = 0x00000000u;
    data_007804EC = 0x00000005u;
    data_007804F0 = (uintptr_t)&data_007804F4;
    func_0019B51C((uintptr_t)&data_00780508, (uintptr_t)&func_00609E38, 0x000001EFu, (uintptr_t)((char *)stk + 32));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00780750;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"NpcTreasureHunterGrave";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"NPCgW[n^[(¨æ)";
    data_00780750 = 0x00000000u;
    data_00780754 = 0x00000005u;
    data_00780758 = (uintptr_t)&data_0078075C;
    func_0019B51C((uintptr_t)&data_00780770, (uintptr_t)&func_0060A010, 0x000001F0u, (uintptr_t)((char *)stk + 48));
}
