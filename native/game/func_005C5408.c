/* USA 005C5408 (EU 005C53E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 3 sead::SafeString name tables (7 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DDB8;
extern uint32_t data_0070DDBC;
extern uint32_t data_0070DDC0;
extern uint32_t data_0070DDC4;
extern uint32_t data_0070DDC8;
extern uint32_t data_0070DDDC;
extern uint32_t data_00772534;
extern uint32_t data_00772538;
extern uint32_t data_0077253C;
extern uint32_t data_00772540;
extern uint32_t data_00772554;
extern uint32_t data_0077279C;
extern uint32_t data_007727A0;
extern uint32_t data_007727A4;
extern uint32_t data_007727A8;
extern uint32_t data_007727BC;
extern uint32_t data_00772A04;
extern uint32_t data_00772A24;
extern uint32_t data_00772A28;
extern uint32_t data_00772A2C;
extern uint32_t data_00772A30;
extern uint32_t data_00772A34;
extern uint32_t data_00772A38;
extern uint32_t data_00772A3C;
extern uint32_t data_00772A40;
extern uint32_t data_00772A42;
extern uint32_t data_00772A44;
extern uint32_t data_00772A45;
extern uint32_t data_00772A46;
extern uint32_t data_00772A47;
extern uint32_t data_00772A48;
extern uint32_t data_00772A4C;
extern uint32_t data_00772A50;
extern uint32_t data_00772A54;
extern uint32_t data_00772A58;
extern uint32_t data_00772A5C;
extern uint32_t data_00772A60;
extern uint32_t data_00772A64;
extern uint32_t data_00772A68;
extern uint32_t data_00772A6A;
extern uint32_t data_00772A6C;
extern uint32_t data_00772A6D;
extern uint32_t data_00772A6E;
extern uint32_t data_00772A6F;
extern uint32_t data_00772A70;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605FA8(void);
void func_00609844(void);

static const char *const names_0070DDC8[2] = {
    "HintGlasses_00",
    "wait",
};
static const char *const names_0070DDDC[1] = {
    "talk",
};
static const char *const names_00772A04[4] = {
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

void func_005C5408(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00772534;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcFortuneGirl";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"è¢®iõj";
    fill_names((sead_SafeString *)&data_0070DDC8, names_0070DDC8, 2);
    fill_names((sead_SafeString *)&data_0070DDDC, names_0070DDDC, 1);
    fill_names((sead_SafeString *)&data_00772A04, names_00772A04, 4);
    data_0070DDB8 = 0xFFFFFFFFu;
    data_0070DDBC = 0xFFFFFFFFu;
    data_0070DDC0 = 0x00000000u;
    data_0070DDC4 = 0x00000000u;
    data_00772534 = 0x00000000u;
    data_00772538 = 0x00000005u;
    data_0077253C = (uintptr_t)&data_00772540;
    data_00772A24 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772A28 = 0x3F800000u /* 1.0 f */;
    data_00772A2C = 0x3FC00000u /* 1.5 f */;
    data_00772A30 = 0x40A00000u /* 5.0 f */;
    data_00772A34 = 0x40400000u /* 3.0 f */;
    data_00772A38 = 0x40200000u /* 2.5 f */;
    data_00772A3C = 0x0000000Eu;
    *(uint16_t *)&data_00772A40 = 0x5Fu;
    *(uint16_t *)&data_00772A42 = 0xB4u;
    *(uint8_t *)&data_00772A44 = 0xEEu;
    *(uint8_t *)&data_00772A45 = 0xECu;
    *(uint8_t *)&data_00772A46 = 0xFu;
    *(uint8_t *)&data_00772A47 = 0x19u;
    *(uint8_t *)&data_00772A48 = 0xFu;
    data_00772A4C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772A50 = 0x3F800000u /* 1.0 f */;
    data_00772A54 = 0x3FC00000u /* 1.5 f */;
    data_00772A58 = 0x40400000u /* 3.0 f */;
    data_00772A5C = 0x40400000u /* 3.0 f */;
    data_00772A60 = 0x40200000u /* 2.5 f */;
    data_00772A64 = 0x0000000Fu;
    *(uint16_t *)&data_00772A68 = 0x5Fu;
    *(uint16_t *)&data_00772A6A = 0xB4u;
    *(uint8_t *)&data_00772A6C = 0xECu;
    *(uint8_t *)&data_00772A6D = 0xECu;
    *(uint8_t *)&data_00772A6E = 0xFu;
    *(uint8_t *)&data_00772A6F = 0x1Eu;
    *(uint8_t *)&data_00772A70 = 0xFu;
    func_0019B51C((uintptr_t)&data_00772554, (uintptr_t)&func_00605FA8, 0x00000194u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077279C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcShopManFortuneUra";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"è¢®iÅj";
    data_0077279C = 0x00000000u;
    data_007727A0 = 0x00000005u;
    data_007727A4 = (uintptr_t)&data_007727A8;
    func_0019B51C((uintptr_t)&data_007727BC, (uintptr_t)&func_00609844, 0x00000195u, (uintptr_t)((char *)stk + 32));
}
