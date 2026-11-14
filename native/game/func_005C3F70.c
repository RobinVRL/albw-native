/* USA 005C3F70 (EU 005C3F48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 16 sead::SafeString name tables (16 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BA48;
extern uint32_t data_0070BA4C;
extern uint32_t data_0070BA50;
extern uint32_t data_0070BA54;
extern uint32_t data_0070BA5C;
extern uint32_t data_0070BA68;
extern uint32_t data_0070BA74;
extern uint32_t data_0070BA80;
extern uint32_t data_0070BA8C;
extern uint32_t data_0070BA98;
extern uint32_t data_0070BAA4;
extern uint32_t data_0070BAB0;
extern uint32_t data_0070BABC;
extern uint32_t data_0070BAC8;
extern uint32_t data_0070BAD4;
extern uint32_t data_0070BAE0;
extern uint32_t data_0070BAEC;
extern uint32_t data_0070BAF8;
extern uint32_t data_0070BB04;
extern uint32_t data_0070BB10;
void func_00100000(void);
void func_0011DDEC(void);
void func_005902C0(uint32_t, uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_0070BA5C[1] = {
    "hit_swordA",
};
static const char *const names_0070BA68[1] = {
    "hit_swordB",
};
static const char *const names_0070BA74[1] = {
    "rebound_swordA",
};
static const char *const names_0070BA80[1] = {
    "rebound_swordB",
};
static const char *const names_0070BA8C[1] = {
    "rebound_shield",
};
static const char *const names_0070BA98[1] = {
    "hit_stamp",
};
static const char *const names_0070BAA4[1] = {
    "getevent_normal",
};
static const char *const names_0070BAB0[1] = {
    "rodfire",
};
static const char *const names_0070BABC[1] = {
    "rodfire_snow",
};
static const char *const names_0070BAC8[1] = {
    "kandelaar",
};
static const char *const names_0070BAD4[1] = {
    "rodfire",
};
static const char *const names_0070BAE0[1] = {
    "treasurebox",
};
static const char *const names_0070BAEC[1] = {
    "treasurebox",
};
static const char *const names_0070BAF8[1] = {
    "rodfireball",
};
static const char *const names_0070BB04[1] = {
    "rodfireball_snow",
};
static const char *const names_0070BB10[1] = {
    "flash",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C3F70(void) {
    fill_names((sead_SafeString *)&data_0070BA5C, names_0070BA5C, 1);
    fill_names((sead_SafeString *)&data_0070BA68, names_0070BA68, 1);
    fill_names((sead_SafeString *)&data_0070BA74, names_0070BA74, 1);
    fill_names((sead_SafeString *)&data_0070BA80, names_0070BA80, 1);
    fill_names((sead_SafeString *)&data_0070BA8C, names_0070BA8C, 1);
    fill_names((sead_SafeString *)&data_0070BA98, names_0070BA98, 1);
    fill_names((sead_SafeString *)&data_0070BAA4, names_0070BAA4, 1);
    fill_names((sead_SafeString *)&data_0070BAB0, names_0070BAB0, 1);
    fill_names((sead_SafeString *)&data_0070BABC, names_0070BABC, 1);
    fill_names((sead_SafeString *)&data_0070BAC8, names_0070BAC8, 1);
    fill_names((sead_SafeString *)&data_0070BAD4, names_0070BAD4, 1);
    fill_names((sead_SafeString *)&data_0070BAE0, names_0070BAE0, 1);
    fill_names((sead_SafeString *)&data_0070BAEC, names_0070BAEC, 1);
    fill_names((sead_SafeString *)&data_0070BAF8, names_0070BAF8, 1);
    fill_names((sead_SafeString *)&data_0070BB04, names_0070BB04, 1);
    fill_names((sead_SafeString *)&data_0070BB10, names_0070BB10, 1);
    data_0070BA48 = 0xFFFFFFFFu;
    data_0070BA4C = 0xFFFFFFFFu;
    data_0070BA50 = 0x00000000u;
    data_0070BA54 = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011DDEC, (uint32_t)(uintptr_t)&func_00100000, (uint32_t)(uintptr_t)"rodfireball_snow");
}
