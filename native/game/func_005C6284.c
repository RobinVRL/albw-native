/* USA 005C6284 (EU 005C625C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (10 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EBC0;
extern uint32_t data_0070EBC4;
extern uint32_t data_0070EBC8;
extern uint32_t data_0070EBCC;
extern uint32_t data_0070EBD0;
extern uint32_t data_0070EBEC;
extern uint32_t data_0070EBF8;
extern uint32_t data_0070EC04;
extern uint32_t data_0077E200;
extern uint32_t data_0077E204;
extern uint32_t data_0077E208;
extern uint32_t data_0077E20C;
extern uint32_t data_0077E220;
extern uint32_t data_0077E468;
extern uint32_t data_0077E488;
extern uint32_t data_0077E48C;
extern uint32_t data_0077E490;
extern uint32_t data_0077E494;
extern uint32_t data_0077E498;
extern uint32_t data_0077E49C;
extern uint32_t data_0077E4A0;
extern uint32_t data_0077E4A4;
extern uint32_t data_0077E4A6;
extern uint32_t data_0077E4A8;
extern uint32_t data_0077E4A9;
extern uint32_t data_0077E4AA;
extern uint32_t data_0077E4AB;
extern uint32_t data_0077E4AC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606250(void);

static const char *const names_0070EBD0[3] = {
    "Entry_DaibakudanDome",
    "Entry_Dark1B_DaibakudanDome",
    "wait",
};
static const char *const names_0070EBEC[1] = {
    "talk",
};
static const char *const names_0070EBF8[1] = {
    "step",
};
static const char *const names_0070EC04[1] = {
    "walk",
};
static const char *const names_0077E468[4] = {
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

void func_005C6284(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077E200;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcShopManBomb";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"oN_®";
    fill_names((sead_SafeString *)&data_0070EBD0, names_0070EBD0, 3);
    fill_names((sead_SafeString *)&data_0070EBEC, names_0070EBEC, 1);
    fill_names((sead_SafeString *)&data_0070EBF8, names_0070EBF8, 1);
    fill_names((sead_SafeString *)&data_0070EC04, names_0070EC04, 1);
    fill_names((sead_SafeString *)&data_0077E468, names_0077E468, 4);
    data_0070EBC0 = 0xFFFFFFFFu;
    data_0070EBC4 = 0xFFFFFFFFu;
    data_0070EBC8 = 0x00000000u;
    data_0070EBCC = 0x00000000u;
    data_0077E200 = 0x00000000u;
    data_0077E204 = 0x00000005u;
    data_0077E208 = (uintptr_t)&data_0077E20C;
    data_0077E488 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077E48C = 0x3F800000u /* 1.0 f */;
    data_0077E490 = 0x3FC00000u /* 1.5 f */;
    data_0077E494 = 0x40A00000u /* 5.0 f */;
    data_0077E498 = 0x40400000u /* 3.0 f */;
    data_0077E49C = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0077E4A0 = 0x0000000Fu;
    *(uint16_t *)&data_0077E4A4 = 0x5Fu;
    *(uint16_t *)&data_0077E4A6 = 0xB4u;
    *(uint8_t *)&data_0077E4A8 = 0xEEu;
    *(uint8_t *)&data_0077E4A9 = 0xECu;
    *(uint8_t *)&data_0077E4AA = 0xFu;
    *(uint8_t *)&data_0077E4AB = 0x32u;
    *(uint8_t *)&data_0077E4AC = 0x1Eu;
    func_0019B51C((uintptr_t)&data_0077E220, (uintptr_t)&func_00606250, 0x000001CAu, (uintptr_t)((char *)stk + 16));
}
