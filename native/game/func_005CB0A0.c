/* USA 005CB0A0 (EU 005CB078): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 28 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713528;
extern uint32_t data_0071352C;
extern uint32_t data_00713530;
extern uint32_t data_00713534;
extern uint32_t data_00713538;
extern uint32_t data_0079BBC0;
extern uint32_t data_0079BBE0;
extern uint32_t data_0079BBE4;
extern uint32_t data_0079BBE8;
extern uint32_t data_0079BBEC;
extern uint32_t data_0079BBF0;
extern uint32_t data_0079BBF4;
extern uint32_t data_0079BBF8;
extern uint32_t data_0079BBFC;
extern uint32_t data_0079BC00;
extern uint32_t data_0079BC04;
extern uint32_t data_0079BC08;
extern uint32_t data_0079BC0C;
extern uint32_t data_0079BC10;
extern uint32_t data_0079BC14;
extern uint32_t data_0079BC18;
extern uint32_t data_0079BC1C;
extern uint32_t data_0079BC20;
extern uint32_t data_0079BC24;
extern uint32_t data_0079BC28;
extern uint32_t data_0079BC2C;
extern uint32_t data_0079BC30;
extern uint32_t data_0079BC34;
extern uint32_t data_0079BC38;
extern uint32_t data_0079BC3C;

static const char *const names_00713538[1] = {
    "Gm_FieldMap",
};
static const char *const names_0079BBC0[4] = {
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

void func_005CB0A0(void) {
    fill_names((sead_SafeString *)&data_00713538, names_00713538, 1);
    fill_names((sead_SafeString *)&data_0079BBC0, names_0079BBC0, 4);
    data_00713528 = 0xFFFFFFFFu;
    data_0071352C = 0xFFFFFFFFu;
    data_00713530 = 0x00000000u;
    data_00713534 = 0x00000000u;
    data_0079BBE0 = 0x41400000u /* 12.0 f */;
    data_0079BBE4 = 0x40400000u /* 3.0 f */;
    data_0079BBE8 = 0x42480000u /* 50.0 f */;
    data_0079BBEC = 0xC1200000u /* -10.0 f */;
    data_0079BBF0 = 0x00000000u /* 0.0 f */;
    data_0079BBF4 = 0xC26A0000u /* -58.5 f */;
    data_0079BBF8 = 0x41840000u /* 16.5 f */;
    data_0079BBFC = 0x00000000u /* 0.0 f */;
    data_0079BC00 = 0xC23E0000u /* -47.5 f */;
    data_0079BC04 = 0x41D00000u /* 26.0 f */;
    data_0079BC08 = 0x00000000u /* 0.0 f */;
    data_0079BC0C = 0xC2493333u /* -50.29999923706055 f */;
    data_0079BC10 = 0xC2E80000u /* -116.0 f */;
    data_0079BC14 = 0x00000000u /* 0.0 f */;
    data_0079BC18 = 0xC2E50000u /* -114.5 f */;
    data_0079BC1C = 0xC2480000u /* -50.0 f */;
    data_0079BC20 = 0x00000000u /* 0.0 f */;
    data_0079BC24 = 0x41180000u /* 9.5 f */;
    data_0079BC28 = 0xC2D20000u /* -105.0 f */;
    data_0079BC2C = 0x00000000u /* 0.0 f */;
    data_0079BC30 = 0x42760000u /* 61.5 f */;
    data_0079BC34 = 0xC2D20000u /* -105.0 f */;
    data_0079BC38 = 0x00000000u /* 0.0 f */;
    data_0079BC3C = 0x41200000u /* 10.0 f */;
}
