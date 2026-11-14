/* USA 005CFE6C (EU 005CFE44): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 20 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007110C8;
extern uint32_t data_007110C9;
extern uint32_t data_007110CA;
extern uint32_t data_007110CB;
extern uint32_t data_007110CC;
extern uint32_t data_007110CD;
extern uint32_t data_007110CE;
extern uint32_t data_007110CF;
extern uint32_t data_007110D0;
extern uint32_t data_007110D1;
extern uint32_t data_007110D2;
extern uint32_t data_007110D3;
extern uint32_t data_007110D4;
extern uint32_t data_007110D5;
extern uint32_t data_007110D6;
extern uint32_t data_007110D7;
extern uint32_t data_007110D8;
extern uint32_t data_007110DC;
extern uint32_t data_007110E0;
extern uint32_t data_007110E4;
extern uint32_t data_0079646C;

static const char *const names_0079646C[4] = {
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

void func_005CFE6C(void) {
    fill_names((sead_SafeString *)&data_0079646C, names_0079646C, 4);
    *(uint8_t *)&data_007110C8 = 0x8Cu;
    *(uint8_t *)&data_007110C9 = 0xD8u;
    *(uint8_t *)&data_007110CA = 0x7Fu;
    *(uint8_t *)&data_007110CB = 0xFFu;
    *(uint8_t *)&data_007110CC = 0xD8u;
    *(uint8_t *)&data_007110CD = 0xFFu;
    *(uint8_t *)&data_007110CE = 0xCCu;
    *(uint8_t *)&data_007110CF = 0xFFu;
    *(uint8_t *)&data_007110D0 = 0xD8u;
    *(uint8_t *)&data_007110D1 = 0xFFu;
    *(uint8_t *)&data_007110D2 = 0xCCu;
    *(uint8_t *)&data_007110D3 = 0xFFu;
    *(uint8_t *)&data_007110D4 = 0xE5u;
    *(uint8_t *)&data_007110D5 = 0x99u;
    *(uint8_t *)&data_007110D6 = 0xB2u;
    *(uint8_t *)&data_007110D7 = 0xFFu;
    data_007110D8 = 0xFFFFFFFFu;
    data_007110DC = 0xFFFFFFFFu;
    data_007110E0 = 0x00000000u;
    data_007110E4 = 0x00000000u;
}
