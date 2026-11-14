/* USA 0059CB8C (EU 0059CB64): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (15 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EEA8;
extern uint32_t data_0070EEAC;
extern uint32_t data_0070EEB0;
extern uint32_t data_0070EEB4;
extern uint32_t data_0070EEB8;
extern uint32_t data_0070EEC4;
extern uint32_t data_0070EED0;
extern uint32_t data_0070EEDC;
extern uint32_t data_0070EEE8;
extern uint32_t data_0070EEF4;
extern uint32_t data_0070EF00;
extern uint32_t data_0070EF0C;
extern uint32_t data_0070EF18;
extern uint32_t data_0070EF24;
extern uint32_t data_0070EF30;
extern uint32_t data_0077FFD0;
extern uint32_t data_0077FFD4;
extern uint32_t data_0077FFD8;
extern uint32_t data_0077FFDC;
extern uint32_t data_0077FFF0;
extern uint32_t data_00780238;
extern uint32_t data_00780258;
extern uint32_t data_0078025C;
extern uint32_t data_00780260;
extern uint32_t data_00780264;
extern uint32_t data_00780268;
extern uint32_t data_0078026C;
extern uint32_t data_00780270;
extern uint32_t data_00780274;
extern uint32_t data_00780276;
extern uint32_t data_00780278;
extern uint32_t data_00780279;
extern uint32_t data_0078027A;
extern uint32_t data_0078027B;
extern uint32_t data_0078027C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AD24(void);

static const char *const names_0070EEB8[1] = {
    "wait",
};
static const char *const names_0070EEC4[1] = {
    "talk",
};
static const char *const names_0070EED0[1] = {
    "step",
};
static const char *const names_0070EEDC[1] = {
    "walk",
};
static const char *const names_0070EEE8[1] = {
    "surprise",
};
static const char *const names_0070EEF4[1] = {
    "run",
};
static const char *const names_0070EF00[1] = {
    "search",
};
static const char *const names_0070EF0C[1] = {
    "knock_down",
};
static const char *const names_0070EF18[1] = {
    "down_wait",
};
static const char *const names_0070EF24[1] = {
    "standup",
};
static const char *const names_0070EF30[1] = {
    "catch",
};
static const char *const names_00780238[4] = {
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

void func_0059CB8C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077FFD0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcThief";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223\220\221\257";
    fill_names((sead_SafeString *)&data_0070EEB8, names_0070EEB8, 1);
    fill_names((sead_SafeString *)&data_0070EEC4, names_0070EEC4, 1);
    fill_names((sead_SafeString *)&data_0070EED0, names_0070EED0, 1);
    fill_names((sead_SafeString *)&data_0070EEDC, names_0070EEDC, 1);
    fill_names((sead_SafeString *)&data_0070EEE8, names_0070EEE8, 1);
    fill_names((sead_SafeString *)&data_0070EEF4, names_0070EEF4, 1);
    fill_names((sead_SafeString *)&data_0070EF00, names_0070EF00, 1);
    fill_names((sead_SafeString *)&data_0070EF0C, names_0070EF0C, 1);
    fill_names((sead_SafeString *)&data_0070EF18, names_0070EF18, 1);
    fill_names((sead_SafeString *)&data_0070EF24, names_0070EF24, 1);
    fill_names((sead_SafeString *)&data_0070EF30, names_0070EF30, 1);
    fill_names((sead_SafeString *)&data_00780238, names_00780238, 4);
    data_0070EEA8 = 0xFFFFFFFFu;
    data_0070EEAC = 0xFFFFFFFFu;
    data_0070EEB0 = 0x00000000u;
    data_0070EEB4 = 0x00000000u;
    data_0077FFD0 = 0x00000000u;
    data_0077FFD4 = 0x00000005u;
    data_0077FFD8 = (uintptr_t)&data_0077FFDC;
    data_00780258 = 0x3D3851ECu /* 0.04500000178813934 f */;
    data_0078025C = 0x3F800000u /* 1.0 f */;
    data_00780260 = 0x3FC00000u /* 1.5 f */;
    data_00780264 = 0x40800000u /* 4.0 f */;
    data_00780268 = 0x40400000u /* 3.0 f */;
    data_0078026C = 0x3F000000u /* 0.5 f */;
    data_00780270 = 0x0000000Fu;
    *(uint16_t *)&data_00780274 = 0x5Fu;
    *(uint16_t *)&data_00780276 = 0xB4u;
    *(uint8_t *)&data_00780278 = 0xE7u;
    *(uint8_t *)&data_00780279 = 0xECu;
    *(uint8_t *)&data_0078027A = 0xFu;
    *(uint8_t *)&data_0078027B = 0x1Eu;
    *(uint8_t *)&data_0078027C = 0x19u;
    func_0019B51C((uintptr_t)&data_0077FFF0, (uintptr_t)&func_0060AD24, 0x000001ABu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077FFD0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
