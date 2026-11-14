/* USA 005E4D6C (EU 005E4D44): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708778;
extern uint32_t data_0070877C;
extern uint32_t data_00708780;
extern uint32_t data_00708784;
extern uint32_t data_0072AC84;
extern uint32_t data_0072ACA4;
extern uint32_t data_0072ACA8;
extern uint32_t data_0072ACAC;

static const char *const names_0072AC84[4] = {
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

void func_005E4D6C(void) {
    fill_names((sead_SafeString *)&data_0072AC84, names_0072AC84, 4);
    data_00708778 = 0xFFFFFFFFu;
    data_0070877C = 0xFFFFFFFFu;
    data_00708780 = 0x00000000u;
    data_00708784 = 0x00000000u;
    data_0072ACA4 = 0x00000000u /* 0.0 f */;
    data_0072ACA8 = 0x3FC00000u /* 1.5 f */;
    data_0072ACAC = 0x3F19999Au /* 0.6000000238418579 f */;
}
