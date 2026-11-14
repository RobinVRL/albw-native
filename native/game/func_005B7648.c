/* USA 005B7648 (EU 005B7620): static initialiser, decompiled by tools/decomp_initializer.py.
 * 11 sead::SafeString name tables (14 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F268;
extern uint32_t data_0070F26C;
extern uint32_t data_0070F270;
extern uint32_t data_0070F274;
extern uint32_t data_0070F278;
extern uint32_t data_0070F284;
extern uint32_t data_0070F290;
extern uint32_t data_0070F29C;
extern uint32_t data_0070F2A8;
extern uint32_t data_0070F2B4;
extern uint32_t data_0070F2C0;
extern uint32_t data_0070F2CC;
extern uint32_t data_0070F2D8;
extern uint32_t data_0070F2E4;
extern uint32_t data_00781810;
extern uint32_t data_00781814;
extern uint32_t data_00781818;
extern uint32_t data_0078181C;
extern uint32_t data_00781830;
extern uint32_t data_00781A78;
extern uint32_t data_00781A7C;
extern uint32_t data_00781A80;
extern uint32_t data_00781A84;
extern uint32_t data_00781A98;
extern uint32_t data_00781CE0;
extern uint32_t data_00781D00;
extern uint32_t data_00781D04;
extern uint32_t data_00781D08;
extern uint32_t data_00781D0C;
extern uint32_t data_00781D10;
extern uint32_t data_00781D14;
extern uint32_t data_00781D18;
extern uint32_t data_00781D1C;
extern uint32_t data_00781D1E;
extern uint32_t data_00781D20;
extern uint32_t data_00781D21;
extern uint32_t data_00781D22;
extern uint32_t data_00781D23;
extern uint32_t data_00781D24;
extern uint32_t data_00781D28;
extern uint32_t data_00781D2C;
extern uint32_t data_00781D30;
extern uint32_t data_00781D34;
extern uint32_t data_00781D38;
extern uint32_t data_00781D3C;
extern uint32_t data_00781D40;
extern uint32_t data_00781D44;
extern uint32_t data_00781D46;
extern uint32_t data_00781D48;
extern uint32_t data_00781D49;
extern uint32_t data_00781D4A;
extern uint32_t data_00781D4B;
extern uint32_t data_00781D4C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607244(void);
void func_0060887C(void);

static const char *const names_0070F278[1] = {
    "wait",
};
static const char *const names_0070F284[1] = {
    "talk",
};
static const char *const names_0070F290[1] = {
    "eat",
};
static const char *const names_0070F29C[1] = {
    "dive",
};
static const char *const names_0070F2A8[1] = {
    "struggle_before",
};
static const char *const names_0070F2B4[1] = {
    "struggle_after",
};
static const char *const names_0070F2C0[1] = {
    "wait",
};
static const char *const names_0070F2CC[1] = {
    "talk",
};
static const char *const names_0070F2D8[1] = {
    "step",
};
static const char *const names_0070F2E4[1] = {
    "jump",
};
static const char *const names_00781CE0[4] = {
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

void func_005B7648(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00781810;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcZoraQueenBig";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203]\201[\203\211\217\227\211\244(\221\345)";
    fill_names((sead_SafeString *)&data_0070F278, names_0070F278, 1);
    fill_names((sead_SafeString *)&data_0070F284, names_0070F284, 1);
    fill_names((sead_SafeString *)&data_0070F290, names_0070F290, 1);
    fill_names((sead_SafeString *)&data_0070F29C, names_0070F29C, 1);
    fill_names((sead_SafeString *)&data_0070F2A8, names_0070F2A8, 1);
    fill_names((sead_SafeString *)&data_0070F2B4, names_0070F2B4, 1);
    fill_names((sead_SafeString *)&data_0070F2C0, names_0070F2C0, 1);
    fill_names((sead_SafeString *)&data_0070F2CC, names_0070F2CC, 1);
    fill_names((sead_SafeString *)&data_0070F2D8, names_0070F2D8, 1);
    fill_names((sead_SafeString *)&data_0070F2E4, names_0070F2E4, 1);
    fill_names((sead_SafeString *)&data_00781CE0, names_00781CE0, 4);
    data_0070F268 = 0xFFFFFFFFu;
    data_0070F26C = 0xFFFFFFFFu;
    data_0070F270 = 0x00000000u;
    data_0070F274 = 0x00000000u;
    data_00781810 = 0x00000000u;
    data_00781814 = 0x00000005u;
    data_00781818 = (uintptr_t)&data_0078181C;
    data_00781D00 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00781D04 = 0x3F800000u /* 1.0 f */;
    data_00781D08 = 0x3FC00000u /* 1.5 f */;
    data_00781D0C = 0x40A00000u /* 5.0 f */;
    data_00781D10 = 0x40400000u /* 3.0 f */;
    data_00781D14 = 0x40000000u /* 2.0 f */;
    data_00781D18 = 0x0000000Au;
    *(uint16_t *)&data_00781D1C = 0x5Fu;
    *(uint16_t *)&data_00781D1E = 0xB4u;
    *(uint8_t *)&data_00781D20 = 0x0u;
    *(uint8_t *)&data_00781D21 = 0xECu;
    *(uint8_t *)&data_00781D22 = 0xFu;
    *(uint8_t *)&data_00781D23 = 0x1Eu;
    *(uint8_t *)&data_00781D24 = 0xAu;
    data_00781D28 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00781D2C = 0x3F800000u /* 1.0 f */;
    data_00781D30 = 0x3FC00000u /* 1.5 f */;
    data_00781D34 = 0x40A00000u /* 5.0 f */;
    data_00781D38 = 0x40400000u /* 3.0 f */;
    data_00781D3C = 0x40600000u /* 3.5 f */;
    data_00781D40 = 0x0000000Fu;
    *(uint16_t *)&data_00781D44 = 0x5Fu;
    *(uint16_t *)&data_00781D46 = 0xB4u;
    *(uint8_t *)&data_00781D48 = 0xECu;
    *(uint8_t *)&data_00781D49 = 0xD8u;
    *(uint8_t *)&data_00781D4A = 0x14u;
    *(uint8_t *)&data_00781D4B = 0x14u;
    *(uint8_t *)&data_00781D4C = 0xAu;
    func_0019B51C((uintptr_t)&data_00781830, (uintptr_t)&func_00607244, 0x000001A8u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00781810, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00781A78;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcZoraQueenSmall";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203]\201[\203\211\217\227\211\244(\217\254)";
    data_00781A78 = 0x00000000u;
    data_00781A7C = 0x00000005u;
    data_00781A80 = (uintptr_t)&data_00781A84;
    func_0019B51C((uintptr_t)&data_00781A98, (uintptr_t)&func_0060887C, 0x000001A9u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00781A78, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
