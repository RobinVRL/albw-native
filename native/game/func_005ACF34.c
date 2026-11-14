/* USA 005ACF34 (EU 005ACF0C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (11 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F040;
extern uint32_t data_0070F044;
extern uint32_t data_0070F048;
extern uint32_t data_0070F04C;
extern uint32_t data_0070F050;
extern uint32_t data_0070F05C;
extern uint32_t data_0070F068;
extern uint32_t data_0070F074;
extern uint32_t data_0070F080;
extern uint32_t data_0070F08C;
extern uint32_t data_0070F098;
extern uint32_t data_00780D00;
extern uint32_t data_00780D04;
extern uint32_t data_00780D08;
extern uint32_t data_00780D0C;
extern uint32_t data_00780D20;
extern uint32_t data_00780F68;
extern uint32_t data_00780F88;
extern uint32_t data_00780F8C;
extern uint32_t data_00780F90;
extern uint32_t data_00780F94;
extern uint32_t data_00780F98;
extern uint32_t data_00780F9C;
extern uint32_t data_00780FA0;
extern uint32_t data_00780FA4;
extern uint32_t data_00780FA6;
extern uint32_t data_00780FA8;
extern uint32_t data_00780FA9;
extern uint32_t data_00780FAA;
extern uint32_t data_00780FAB;
extern uint32_t data_00780FAC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603640(void);

static const char *const names_0070F050[1] = {
    "wait",
};
static const char *const names_0070F05C[1] = {
    "talk",
};
static const char *const names_0070F068[1] = {
    "step",
};
static const char *const names_0070F074[1] = {
    "walk",
};
static const char *const names_0070F080[1] = {
    "wait_sit",
};
static const char *const names_0070F08C[1] = {
    "talk_sit",
};
static const char *const names_0070F098[1] = {
    "run",
};
static const char *const names_00780F68[4] = {
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

void func_005ACF34(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00780D00;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcWoodGirl";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"bè®Ì§q";
    fill_names((sead_SafeString *)&data_0070F050, names_0070F050, 1);
    fill_names((sead_SafeString *)&data_0070F05C, names_0070F05C, 1);
    fill_names((sead_SafeString *)&data_0070F068, names_0070F068, 1);
    fill_names((sead_SafeString *)&data_0070F074, names_0070F074, 1);
    fill_names((sead_SafeString *)&data_0070F080, names_0070F080, 1);
    fill_names((sead_SafeString *)&data_0070F08C, names_0070F08C, 1);
    fill_names((sead_SafeString *)&data_0070F098, names_0070F098, 1);
    fill_names((sead_SafeString *)&data_00780F68, names_00780F68, 4);
    data_0070F040 = 0xFFFFFFFFu;
    data_0070F044 = 0xFFFFFFFFu;
    data_0070F048 = 0x00000000u;
    data_0070F04C = 0x00000000u;
    data_00780D00 = 0x00000000u;
    data_00780D04 = 0x00000005u;
    data_00780D08 = (uintptr_t)&data_00780D0C;
    data_00780F88 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00780F8C = 0x3F75C28Fu /* 0.9599999785423279 f */;
    data_00780F90 = 0x3FC00000u /* 1.5 f */;
    data_00780F94 = 0x40A00000u /* 5.0 f */;
    data_00780F98 = 0x40400000u /* 3.0 f */;
    data_00780F9C = 0x3F000000u /* 0.5 f */;
    data_00780FA0 = 0x0000000Fu;
    *(uint16_t *)&data_00780FA4 = 0x5Fu;
    *(uint16_t *)&data_00780FA6 = 0xB4u;
    *(uint8_t *)&data_00780FA8 = 0xECu;
    *(uint8_t *)&data_00780FA9 = 0xECu;
    *(uint8_t *)&data_00780FAA = 0xFu;
    *(uint8_t *)&data_00780FAB = 0x1Eu;
    *(uint8_t *)&data_00780FAC = 0x1Eu;
    func_0019B51C((uintptr_t)&data_00780D20, (uintptr_t)&func_00603640, 0x000001A4u, (uintptr_t)((char *)stk + 16));
}
