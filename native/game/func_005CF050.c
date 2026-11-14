/* USA 005CF050 (EU 005CF028): static initialiser, decompiled by tools/decomp_initializer.py.
 * 6 sead::SafeString name tables (11 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EC90;
extern uint32_t data_0070EC94;
extern uint32_t data_0070EC98;
extern uint32_t data_0070EC9C;
extern uint32_t data_0070ECA0;
extern uint32_t data_0070ECBC;
extern uint32_t data_0070ECC8;
extern uint32_t data_0070ECD4;
extern uint32_t data_0070ECE0;
extern uint32_t data_0077E760;
extern uint32_t data_0077E764;
extern uint32_t data_0077E768;
extern uint32_t data_0077E76C;
extern uint32_t data_0077E780;
extern uint32_t data_0077E9C8;
extern uint32_t data_0077E9CC;
extern uint32_t data_0077E9D0;
extern uint32_t data_0077E9D4;
extern uint32_t data_0077E9E8;
extern uint32_t data_0077EC30;
extern uint32_t data_0077EC50;
extern uint32_t data_0077EC54;
extern uint32_t data_0077EC58;
extern uint32_t data_0077EC5C;
extern uint32_t data_0077EC60;
extern uint32_t data_0077EC64;
extern uint32_t data_0077EC68;
extern uint32_t data_0077EC6C;
extern uint32_t data_0077EC6E;
extern uint32_t data_0077EC70;
extern uint32_t data_0077EC71;
extern uint32_t data_0077EC72;
extern uint32_t data_0077EC73;
extern uint32_t data_0077EC74;
extern uint32_t data_0077EC78;
extern uint32_t data_0077EC7C;
extern uint32_t data_0077EC80;
extern uint32_t data_0077EC84;
extern uint32_t data_0077EC88;
extern uint32_t data_0077EC8C;
extern uint32_t data_0077EC90;
extern uint32_t data_0077EC94;
extern uint32_t data_0077EC96;
extern uint32_t data_0077EC98;
extern uint32_t data_0077EC99;
extern uint32_t data_0077EC9A;
extern uint32_t data_0077EC9B;
extern uint32_t data_0077EC9C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006071EC(void);
void func_00608EE4(void);

static const char *const names_0070ECA0[3] = {
    "HandR",
    "PotShop",
    "wait",
};
static const char *const names_0070ECBC[1] = {
    "talk",
};
static const char *const names_0070ECC8[1] = {
    "wait",
};
static const char *const names_0070ECD4[1] = {
    "talk",
};
static const char *const names_0070ECE0[1] = {
    "step",
};
static const char *const names_0077EC30[4] = {
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

void func_005CF050(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077E760;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcShopManMagic";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"@¨ÎÎiõj";
    fill_names((sead_SafeString *)&data_0070ECA0, names_0070ECA0, 3);
    fill_names((sead_SafeString *)&data_0070ECBC, names_0070ECBC, 1);
    fill_names((sead_SafeString *)&data_0070ECC8, names_0070ECC8, 1);
    fill_names((sead_SafeString *)&data_0070ECD4, names_0070ECD4, 1);
    fill_names((sead_SafeString *)&data_0070ECE0, names_0070ECE0, 1);
    fill_names((sead_SafeString *)&data_0077EC30, names_0077EC30, 4);
    data_0070EC90 = 0xFFFFFFFFu;
    data_0070EC94 = 0xFFFFFFFFu;
    data_0070EC98 = 0x00000000u;
    data_0070EC9C = 0x00000000u;
    data_0077E760 = 0x00000000u;
    data_0077E764 = 0x00000005u;
    data_0077E768 = (uintptr_t)&data_0077E76C;
    data_0077EC50 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077EC54 = 0x3F800000u /* 1.0 f */;
    data_0077EC58 = 0x3FC00000u /* 1.5 f */;
    data_0077EC5C = 0x3FC00000u /* 1.5 f */;
    data_0077EC60 = 0x40400000u /* 3.0 f */;
    data_0077EC64 = 0x3FC00000u /* 1.5 f */;
    data_0077EC68 = 0x0000000Fu;
    *(uint16_t *)&data_0077EC6C = 0x5Fu;
    *(uint16_t *)&data_0077EC6E = 0xB4u;
    *(uint8_t *)&data_0077EC70 = 0xEEu;
    *(uint8_t *)&data_0077EC71 = 0xECu;
    *(uint8_t *)&data_0077EC72 = 0xFu;
    *(uint8_t *)&data_0077EC73 = 0x28u;
    *(uint8_t *)&data_0077EC74 = 0x1u;
    data_0077EC78 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077EC7C = 0x3F800000u /* 1.0 f */;
    data_0077EC80 = 0x3F800000u /* 1.0 f */;
    data_0077EC84 = 0x3FC00000u /* 1.5 f */;
    data_0077EC88 = 0x40400000u /* 3.0 f */;
    data_0077EC8C = 0x3F666666u /* 0.8999999761581421 f */;
    data_0077EC90 = 0x0000000Au;
    *(uint16_t *)&data_0077EC94 = 0x5Fu;
    *(uint16_t *)&data_0077EC96 = 0xB4u;
    *(uint8_t *)&data_0077EC98 = 0xECu;
    *(uint8_t *)&data_0077EC99 = 0xECu;
    *(uint8_t *)&data_0077EC9A = 0xFu;
    *(uint8_t *)&data_0077EC9B = 0x1Eu;
    *(uint8_t *)&data_0077EC9C = 0x1u;
    func_0019B51C((uintptr_t)&data_0077E780, (uintptr_t)&func_006071EC, 0x000001A5u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077E9C8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcShopManMagicUra";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"@¨ÎÎiÅj";
    data_0077E9C8 = 0x00000000u;
    data_0077E9CC = 0x00000005u;
    data_0077E9D0 = (uintptr_t)&data_0077E9D4;
    func_0019B51C((uintptr_t)&data_0077E9E8, (uintptr_t)&func_00608EE4, 0x000001A6u, (uintptr_t)((char *)stk + 32));
}
