/* USA 005BFBBC (EU 005BFB94): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E9F8;
extern uint32_t data_0070E9FC;
extern uint32_t data_0070EA00;
extern uint32_t data_0070EA04;
extern uint32_t data_0070EA08;
extern uint32_t data_0070EA14;
extern uint32_t data_0070EA20;
extern uint32_t data_0070EA2C;
extern uint32_t data_0077D6F8;
extern uint32_t data_0077D6FC;
extern uint32_t data_0077D700;
extern uint32_t data_0077D704;
extern uint32_t data_0077D718;
extern uint32_t data_0077D960;
extern uint32_t data_0077D980;
extern uint32_t data_0077D984;
extern uint32_t data_0077D988;
extern uint32_t data_0077D98C;
extern uint32_t data_0077D990;
extern uint32_t data_0077D994;
extern uint32_t data_0077D998;
extern uint32_t data_0077D99C;
extern uint32_t data_0077D99E;
extern uint32_t data_0077D9A0;
extern uint32_t data_0077D9A1;
extern uint32_t data_0077D9A2;
extern uint32_t data_0077D9A3;
extern uint32_t data_0077D9A4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605324(void);

static const char *const names_0070EA08[1] = {
    "wait",
};
static const char *const names_0070EA14[1] = {
    "talk",
};
static const char *const names_0070EA20[1] = {
    "step",
};
static const char *const names_0070EA2C[1] = {
    "walk",
};
static const char *const names_0077D960[4] = {
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

void func_005BFBBC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077D6F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcPriestGirl";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203V\203X\203^\201[";
    fill_names((sead_SafeString *)&data_0070EA08, names_0070EA08, 1);
    fill_names((sead_SafeString *)&data_0070EA14, names_0070EA14, 1);
    fill_names((sead_SafeString *)&data_0070EA20, names_0070EA20, 1);
    fill_names((sead_SafeString *)&data_0070EA2C, names_0070EA2C, 1);
    fill_names((sead_SafeString *)&data_0077D960, names_0077D960, 4);
    data_0070E9F8 = 0xFFFFFFFFu;
    data_0070E9FC = 0xFFFFFFFFu;
    data_0070EA00 = 0x00000000u;
    data_0070EA04 = 0x00000000u;
    data_0077D6F8 = 0x00000000u;
    data_0077D6FC = 0x00000005u;
    data_0077D700 = (uintptr_t)&data_0077D704;
    data_0077D980 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077D984 = 0x3F800000u /* 1.0 f */;
    data_0077D988 = 0x3FC00000u /* 1.5 f */;
    data_0077D98C = 0x40A00000u /* 5.0 f */;
    data_0077D990 = 0x40400000u /* 3.0 f */;
    data_0077D994 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0077D998 = 0x0000000Fu;
    *(uint16_t *)&data_0077D99C = 0x5Fu;
    *(uint16_t *)&data_0077D99E = 0xB4u;
    *(uint8_t *)&data_0077D9A0 = 0xECu;
    *(uint8_t *)&data_0077D9A1 = 0xECu;
    *(uint8_t *)&data_0077D9A2 = 0xFu;
    *(uint8_t *)&data_0077D9A3 = 0x1Eu;
    *(uint8_t *)&data_0077D9A4 = 0x19u;
    func_0019B51C((uintptr_t)&data_0077D718, (uintptr_t)&func_00605324, 0x00000199u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077D6F8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
