/* USA 005E3AC8 (EU 005E3AA0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713578;
extern uint32_t data_0071357C;
extern uint32_t data_00713580;
extern uint32_t data_00713584;
extern uint32_t data_0079BC60;
extern uint32_t data_0079BC80;
extern uint32_t data_0079BC84;
extern uint32_t data_0079BC88;

static const char *const names_0079BC60[4] = {
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

void func_005E3AC8(void) {
    fill_names((sead_SafeString *)&data_0079BC60, names_0079BC60, 4);
    data_00713578 = 0xFFFFFFFFu;
    data_0071357C = 0xFFFFFFFFu;
    data_00713580 = 0x00000000u;
    data_00713584 = 0x00000000u;
    data_0079BC80 = 0x00000000u /* 0.0 f */;
    data_0079BC84 = 0x43700000u /* 240.0 f */;
    data_0079BC88 = 0x00000000u /* 0.0 f */;
}
