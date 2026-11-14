/* USA 00599968 (EU 00599940): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 11 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D998;
extern uint32_t data_0070D99C;
extern uint32_t data_0070D9A0;
extern uint32_t data_0070D9A4;
extern uint32_t data_0070D9A8;
extern uint32_t data_0070D9B4;
extern uint32_t data_0070D9C0;
extern uint32_t data_0070D9CC;
extern uint32_t data_00770BD8;
extern uint32_t data_00770BF8;
extern uint32_t data_00770BFC;
extern uint32_t data_00770C00;
extern uint32_t data_00770C04;
extern uint32_t data_00770C08;
extern uint32_t data_00770C0C;
extern uint32_t data_00770C10;
void func_005902C0(void);

static const char *const names_0070D9A8[1] = {
    "wait",
};
static const char *const names_0070D9B4[1] = {
    "talk",
};
static const char *const names_0070D9C0[1] = {
    "step",
};
static const char *const names_0070D9CC[1] = {
    "walk",
};
static const char *const names_00770BD8[4] = {
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

void func_00599968(void) {
    fill_names((sead_SafeString *)&data_0070D9A8, names_0070D9A8, 1);
    fill_names((sead_SafeString *)&data_0070D9B4, names_0070D9B4, 1);
    fill_names((sead_SafeString *)&data_0070D9C0, names_0070D9C0, 1);
    fill_names((sead_SafeString *)&data_0070D9CC, names_0070D9CC, 1);
    fill_names((sead_SafeString *)&data_00770BD8, names_00770BD8, 4);
    data_0070D998 = 0xFFFFFFFFu;
    data_0070D99C = 0xFFFFFFFFu;
    data_0070D9A0 = 0x00000000u;
    data_0070D9A4 = 0x00000000u;
    data_00770BF8 = 0x000001A4u;
    data_00770BFC = 0x00000199u;
    data_00770C00 = 0x000001A2u;
    data_00770C04 = 0x000001ADu;
    data_00770C08 = 0x000001ACu;
    data_00770C0C = 0x000001C2u;
    data_00770C10 = 0x000001A9u;
    func_005902C0();
}
