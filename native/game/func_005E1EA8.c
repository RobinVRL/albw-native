/* USA 005E1EA8 (EU 005E1E80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (14 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EC10;
extern uint32_t data_0070EC14;
extern uint32_t data_0070EC18;
extern uint32_t data_0070EC1C;
extern uint32_t data_0070EC20;
extern uint32_t data_0070EC44;
extern uint32_t data_0070EC50;
extern uint32_t data_0070EC5C;
extern uint32_t data_0070EC68;
extern uint32_t data_0070EC74;
extern uint32_t data_0070EC80;
extern uint32_t data_0077E4B0;
extern uint32_t data_0077E4B4;
extern uint32_t data_0077E4B8;
extern uint32_t data_0077E4BC;
extern uint32_t data_0077E4D0;
extern uint32_t data_0077E718;
extern uint32_t data_0077E738;
extern uint32_t data_0077E73C;
extern uint32_t data_0077E740;
extern uint32_t data_0077E744;
extern uint32_t data_0077E748;
extern uint32_t data_0077E74C;
extern uint32_t data_0077E750;
extern uint32_t data_0077E754;
extern uint32_t data_0077E756;
extern uint32_t data_0077E758;
extern uint32_t data_0077E759;
extern uint32_t data_0077E75A;
extern uint32_t data_0077E75B;
extern uint32_t data_0077E75C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607DD0(void);

static const char *const names_0070EC20[4] = {
    "item",
    "cave_KinstaLight",
    "cave_KinstaLight_Link",
    "wait",
};
static const char *const names_0070EC44[1] = {
    "talk",
};
static const char *const names_0070EC50[1] = {
    "step",
};
static const char *const names_0070EC5C[1] = {
    "walk",
};
static const char *const names_0070EC68[1] = {
    "absorb",
};
static const char *const names_0070EC74[1] = {
    "absorb_player",
};
static const char *const names_0070EC80[1] = {
    "absorb_bomb",
};
static const char *const names_0077E718[4] = {
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

void func_005E1EA8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077E4B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcShopManKinSta";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203L\203\223\203X\203^\203}\203U\201[";
    fill_names((sead_SafeString *)&data_0070EC20, names_0070EC20, 4);
    fill_names((sead_SafeString *)&data_0070EC44, names_0070EC44, 1);
    fill_names((sead_SafeString *)&data_0070EC50, names_0070EC50, 1);
    fill_names((sead_SafeString *)&data_0070EC5C, names_0070EC5C, 1);
    fill_names((sead_SafeString *)&data_0070EC68, names_0070EC68, 1);
    fill_names((sead_SafeString *)&data_0070EC74, names_0070EC74, 1);
    fill_names((sead_SafeString *)&data_0070EC80, names_0070EC80, 1);
    fill_names((sead_SafeString *)&data_0077E718, names_0077E718, 4);
    data_0070EC10 = 0xFFFFFFFFu;
    data_0070EC14 = 0xFFFFFFFFu;
    data_0070EC18 = 0x00000000u;
    data_0070EC1C = 0x00000000u;
    data_0077E4B0 = 0x00000000u;
    data_0077E4B4 = 0x00000005u;
    data_0077E4B8 = (uintptr_t)&data_0077E4BC;
    data_0077E738 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_0077E73C = 0x3F800000u /* 1.0 f */;
    data_0077E740 = 0x3FC00000u /* 1.5 f */;
    data_0077E744 = 0x40A00000u /* 5.0 f */;
    data_0077E748 = 0x40400000u /* 3.0 f */;
    data_0077E74C = 0x40600000u /* 3.5 f */;
    data_0077E750 = 0x0000000Au;
    *(uint16_t *)&data_0077E754 = 0x5Fu;
    *(uint16_t *)&data_0077E756 = 0xB4u;
    *(uint8_t *)&data_0077E758 = 0xEEu;
    *(uint8_t *)&data_0077E759 = 0xECu;
    *(uint8_t *)&data_0077E75A = 0xFu;
    *(uint8_t *)&data_0077E75B = 0x32u;
    *(uint8_t *)&data_0077E75C = 0x1Eu;
    func_0019B51C((uintptr_t)&data_0077E4D0, (uintptr_t)&func_00607DD0, 0x000001B8u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077E4B0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
