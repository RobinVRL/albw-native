/* USA 005E189C (EU 005E1874): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (10 names), 27 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DCB8;
extern uint32_t data_0070DCC0;
extern uint32_t data_0070DCC4;
extern uint32_t data_0070DCC8;
extern uint32_t data_0070DCCC;
extern uint32_t data_0070DCD0;
extern uint32_t data_0070DCDC;
extern uint32_t data_0070DCE8;
extern uint32_t data_0070DCF4;
extern uint32_t data_00771FA4;
extern uint32_t data_00771FA8;
extern uint32_t data_00771FAC;
extern uint32_t data_00771FB0;
extern uint32_t data_00771FC4;
extern uint32_t data_0077220C;
extern uint32_t data_0077223C;
extern uint32_t data_00772240;
extern uint32_t data_00772244;
extern uint32_t data_00772248;
extern uint32_t data_0077224C;
extern uint32_t data_00772250;
extern uint32_t data_00772254;
extern uint32_t data_00772258;
extern uint32_t data_0077225A;
extern uint32_t data_0077225C;
extern uint32_t data_0077225D;
extern uint32_t data_0077225E;
extern uint32_t data_0077225F;
extern uint32_t data_00772260;
extern uint32_t data_00772264;
extern uint32_t data_00772268;
extern uint32_t data_0077226C;
extern uint32_t data_00772270;
extern uint32_t data_00772271;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_001165E0(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607C70(void);

static const char *const names_0070DCD0[1] = {
    "wait",
};
static const char *const names_0070DCDC[1] = {
    "talk",
};
static const char *const names_0070DCE8[1] = {
    "life",
};
static const char *const names_0070DCF4[1] = {
    "fade",
};
static const char *const names_0077220C[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "appear",
    "fade",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E189C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070DCD0, names_0070DCD0, 1);
    fill_names((sead_SafeString *)&data_0070DCDC, names_0070DCDC, 1);
    fill_names((sead_SafeString *)&data_0070DCE8, names_0070DCE8, 1);
    fill_names((sead_SafeString *)&data_0070DCF4, names_0070DCF4, 1);
    fill_names((sead_SafeString *)&data_0077220C, names_0077220C, 6);
    data_0070DCC0 = 0xFFFFFFFFu;
    data_0070DCC4 = 0xFFFFFFFFu;
    data_0070DCC8 = 0x00000000u;
    data_0070DCCC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4DAAAAABu, (uintptr_t)&func_001165E0);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00771FA4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcFairyBigRupee";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"s[åd¸";
    data_0070DCB8 = ret0;
    data_00771FA4 = 0x00000000u;
    data_00771FA8 = 0x00000005u;
    data_00771FAC = (uintptr_t)&data_00771FB0;
    data_0077223C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772240 = 0x3F800000u /* 1.0 f */;
    data_00772244 = 0x3FC00000u /* 1.5 f */;
    data_00772248 = 0x40A00000u /* 5.0 f */;
    data_0077224C = 0x40A00000u /* 5.0 f */;
    data_00772250 = 0x3FC00000u /* 1.5 f */;
    data_00772254 = 0x0000000Au;
    *(uint16_t *)&data_00772258 = 0x5Fu;
    *(uint16_t *)&data_0077225A = 0xB4u;
    *(uint8_t *)&data_0077225C = 0xEEu;
    *(uint8_t *)&data_0077225D = 0xECu;
    *(uint8_t *)&data_0077225E = 0xFu;
    *(uint8_t *)&data_0077225F = 0x32u;
    *(uint8_t *)&data_00772260 = 0x1Eu;
    data_00772264 = 0x00000001u;
    data_00772268 = 0x00000000u;
    data_0077226C = 0x00000000u;
    *(uint8_t *)&data_00772270 = 0x0u;
    *(uint8_t *)&data_00772271 = 0x1u;
    func_0019B51C((uintptr_t)&data_00771FC4, (uintptr_t)&func_00607C70, 0x000001B2u, (uintptr_t)((char *)stk + 16));
}
