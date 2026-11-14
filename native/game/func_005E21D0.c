/* USA 005E21D0 (EU 005E21A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 14 sead::SafeString name tables (20 names), 33 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ECF8;
extern uint32_t data_0070ECFC;
extern uint32_t data_0070ED00;
extern uint32_t data_0070ED04;
extern uint32_t data_0070ED08;
extern uint32_t data_0070ED24;
extern uint32_t data_0070ED30;
extern uint32_t data_0070ED3C;
extern uint32_t data_0070ED48;
extern uint32_t data_0070ED54;
extern uint32_t data_0070ED60;
extern uint32_t data_0070ED6C;
extern uint32_t data_0070ED78;
extern uint32_t data_0070ED84;
extern uint32_t data_0070ED90;
extern uint32_t data_0070ED9C;
extern uint32_t data_0077ECA0;
extern uint32_t data_0077ECA4;
extern uint32_t data_0077ECA8;
extern uint32_t data_0077ECAC;
extern uint32_t data_0077ECC0;
extern uint32_t data_0077EF08;
extern uint32_t data_0077EF28;
extern uint32_t data_0077EF2C;
extern uint32_t data_0077EF30;
extern uint32_t data_0077EF34;
extern uint32_t data_0077EF38;
extern uint32_t data_0077EF3C;
extern uint32_t data_0077EF40;
extern uint32_t data_0077EF44;
extern uint32_t data_0077EF46;
extern uint32_t data_0077EF48;
extern uint32_t data_0077EF49;
extern uint32_t data_0077EF4A;
extern uint32_t data_0077EF4B;
extern uint32_t data_0077EF4C;
extern uint32_t data_0077EF50;
extern uint32_t data_0077EF60;
extern uint32_t data_0077EF64;
extern uint32_t data_0077EF68;
extern uint32_t data_0077EF6C;
extern uint32_t data_0077EF70;
extern uint32_t data_0077EF74;
extern uint32_t data_0077EF78;
extern uint32_t data_0077EF7C;
extern uint32_t data_0077EF80;
extern uint32_t data_0077EF84;
extern uint32_t data_0077EF88;
extern uint32_t data_0077EF8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607DF8(void);

static const char *const names_0070ED08[3] = {
    "RentalItem",
    "NpcRentalShop_AfterGameOver",
    "wait",
};
static const char *const names_0070ED24[1] = {
    "talk",
};
static const char *const names_0070ED30[1] = {
    "step",
};
static const char *const names_0070ED3C[1] = {
    "walk",
};
static const char *const names_0070ED48[1] = {
    "get",
};
static const char *const names_0070ED54[1] = {
    "get_loop",
};
static const char *const names_0070ED60[1] = {
    "surprise",
};
static const char *const names_0070ED6C[1] = {
    "surprise_loop",
};
static const char *const names_0070ED78[1] = {
    "talk_calm",
};
static const char *const names_0070ED84[1] = {
    "talk_panic",
};
static const char *const names_0070ED90[1] = {
    "watch",
};
static const char *const names_0070ED9C[1] = {
    "sleep",
};
static const char *const names_0077EF08[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_0077EF50[2] = {
    "wait",
    "surprise_st:surprise_loop",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E21D0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077ECA0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcShopManRental";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\214\203\223\203^\203\213\211\256";
    fill_names((sead_SafeString *)&data_0070ED08, names_0070ED08, 3);
    fill_names((sead_SafeString *)&data_0070ED24, names_0070ED24, 1);
    fill_names((sead_SafeString *)&data_0070ED30, names_0070ED30, 1);
    fill_names((sead_SafeString *)&data_0070ED3C, names_0070ED3C, 1);
    fill_names((sead_SafeString *)&data_0070ED48, names_0070ED48, 1);
    fill_names((sead_SafeString *)&data_0070ED54, names_0070ED54, 1);
    fill_names((sead_SafeString *)&data_0070ED60, names_0070ED60, 1);
    fill_names((sead_SafeString *)&data_0070ED6C, names_0070ED6C, 1);
    fill_names((sead_SafeString *)&data_0070ED78, names_0070ED78, 1);
    fill_names((sead_SafeString *)&data_0070ED84, names_0070ED84, 1);
    fill_names((sead_SafeString *)&data_0070ED90, names_0070ED90, 1);
    fill_names((sead_SafeString *)&data_0070ED9C, names_0070ED9C, 1);
    fill_names((sead_SafeString *)&data_0077EF08, names_0077EF08, 4);
    fill_names((sead_SafeString *)&data_0077EF50, names_0077EF50, 2);
    data_0070ECF8 = 0xFFFFFFFFu;
    data_0070ECFC = 0xFFFFFFFFu;
    data_0070ED00 = 0x00000000u;
    data_0070ED04 = 0x00000000u;
    data_0077ECA0 = 0x00000000u;
    data_0077ECA4 = 0x00000005u;
    data_0077ECA8 = (uintptr_t)&data_0077ECAC;
    data_0077EF28 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077EF2C = 0x3F800000u /* 1.0 f */;
    data_0077EF30 = 0x3FC00000u /* 1.5 f */;
    data_0077EF34 = 0x40A00000u /* 5.0 f */;
    data_0077EF38 = 0x40400000u /* 3.0 f */;
    data_0077EF3C = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0077EF40 = 0x0000000Fu;
    *(uint16_t *)&data_0077EF44 = 0x5Fu;
    *(uint16_t *)&data_0077EF46 = 0xB4u;
    *(uint8_t *)&data_0077EF48 = 0xEFu;
    *(uint8_t *)&data_0077EF49 = 0xECu;
    *(uint8_t *)&data_0077EF4A = 0xFu;
    *(uint8_t *)&data_0077EF4B = 0x23u;
    *(uint8_t *)&data_0077EF4C = 0x1Eu;
    data_0077EF60 = 0xBFC00000u /* -1.5 f */;
    data_0077EF64 = 0xC00CCCCDu /* -2.200000047683716 f */;
    data_0077EF68 = 0x3E8A3D71u /* 0.27000001072883606 f */;
    data_0077EF6C = 0x40400000u /* 3.0 f */;
    data_0077EF70 = 0x3F800000u /* 1.0 f */;
    data_0077EF74 = 0xC0C00000u /* -6.0 f */;
    data_0077EF78 = 0xBF800000u /* -1.0 f */;
    data_0077EF7C = 0x00000000u /* 0.0 f */;
    data_0077EF80 = 0x00000000u /* 0.0 f */;
    data_0077EF84 = 0x3FCCCCCDu /* 1.600000023841858 f */;
    data_0077EF88 = 0x40C00000u /* 6.0 f */;
    data_0077EF8C = 0x3F99999Au /* 1.2000000476837158 f */;
    func_0019B51C((uintptr_t)&data_0077ECC0, (uintptr_t)&func_00607DF8, 0x00000190u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077ECA0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
