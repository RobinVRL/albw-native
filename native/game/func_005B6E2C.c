/* USA 005B6E2C (EU 005B6E04): static initialiser, decompiled by tools/decomp_initializer.py.
 * 4 sead::SafeString name tables (7 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DFC0;
extern uint32_t data_0070DFC4;
extern uint32_t data_0070DFC8;
extern uint32_t data_0070DFCC;
extern uint32_t data_0070DFD0;
extern uint32_t data_0070DFDC;
extern uint32_t data_0070DFE8;
extern uint32_t data_00773F94;
extern uint32_t data_00773F98;
extern uint32_t data_00773F9C;
extern uint32_t data_00773FA0;
extern uint32_t data_00773FB4;
extern uint32_t data_007741FC;
extern uint32_t data_0077421C;
extern uint32_t data_00774220;
extern uint32_t data_00774224;
extern uint32_t data_00774228;
extern uint32_t data_0077422C;
extern uint32_t data_00774230;
extern uint32_t data_00774234;
extern uint32_t data_00774238;
extern uint32_t data_0077423A;
extern uint32_t data_0077423C;
extern uint32_t data_0077423D;
extern uint32_t data_0077423E;
extern uint32_t data_0077423F;
extern uint32_t data_00774240;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006040FC(void);

static const char *const names_0070DFD0[1] = {
    "wait",
};
static const char *const names_0070DFDC[1] = {
    "talk",
};
static const char *const names_0070DFE8[1] = {
    "step",
};
static const char *const names_007741FC[4] = {
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

void func_005B6E2C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00773F94;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameTower";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"GÌ®";
    fill_names((sead_SafeString *)&data_0070DFD0, names_0070DFD0, 1);
    fill_names((sead_SafeString *)&data_0070DFDC, names_0070DFDC, 1);
    fill_names((sead_SafeString *)&data_0070DFE8, names_0070DFE8, 1);
    fill_names((sead_SafeString *)&data_007741FC, names_007741FC, 4);
    data_0070DFC0 = 0xFFFFFFFFu;
    data_0070DFC4 = 0xFFFFFFFFu;
    data_0070DFC8 = 0x00000000u;
    data_0070DFCC = 0x00000000u;
    data_00773F94 = 0x00000000u;
    data_00773F98 = 0x00000005u;
    data_00773F9C = (uintptr_t)&data_00773FA0;
    data_0077421C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00774220 = 0x3F666666u /* 0.8999999761581421 f */;
    data_00774224 = 0x3FC00000u /* 1.5 f */;
    data_00774228 = 0x40A00000u /* 5.0 f */;
    data_0077422C = 0x40400000u /* 3.0 f */;
    data_00774230 = 0x3FA00000u /* 1.25 f */;
    data_00774234 = 0x0000000Fu;
    *(uint16_t *)&data_00774238 = 0x5Fu;
    *(uint16_t *)&data_0077423A = 0xB4u;
    *(uint8_t *)&data_0077423C = 0xEEu;
    *(uint8_t *)&data_0077423D = 0xECu;
    *(uint8_t *)&data_0077423E = 0xFu;
    *(uint8_t *)&data_0077423F = 0x1Eu;
    *(uint8_t *)&data_00774240 = 0xFu;
    func_0019B51C((uintptr_t)&data_00773FB4, (uintptr_t)&func_006040FC, 0x000001E2u, (uintptr_t)((char *)stk + 16));
}
