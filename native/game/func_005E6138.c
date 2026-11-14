/* USA 005E6138 (EU 005E6110): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 8 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BD48;
extern uint32_t data_0070BD4C;
extern uint32_t data_0070BD50;
extern uint32_t data_0070BD54;
extern uint32_t data_0070BD58;
extern uint32_t data_0070BD5C;
extern uint32_t data_0070BD60;
extern uint32_t data_0070BD64;
extern uint32_t data_0074FAB0;

static const char *const names_0074FAB0[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Continue",
    "Exit",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E6138(void) {
    fill_names((sead_SafeString *)&data_0074FAB0, names_0074FAB0, 6);
    data_0070BD48 = 0xFFFFFFFFu;
    data_0070BD4C = 0xFFFFFFFFu;
    data_0070BD50 = 0x00000000u;
    data_0070BD54 = 0x00000000u;
    data_0070BD58 = 0x42B40000u /* 90.0 f */;
    data_0070BD5C = 0x41E00000u /* 28.0 f */;
    data_0070BD60 = 0x431B0000u /* 155.0 f */;
    data_0070BD64 = 0x430A0000u /* 138.0 f */;
}
