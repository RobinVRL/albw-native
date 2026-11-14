/* USA 005EA9D0 (EU 005EA9A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 6 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711CC8;
extern uint32_t data_00711CCC;
extern uint32_t data_00711CD0;
extern uint32_t data_00711CD4;
extern uint32_t data_00711CD8;
extern uint32_t data_00711CDC;
extern uint32_t data_0079656C;

static const char *const names_0079656C[4] = {
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

void func_005EA9D0(void) {
    fill_names((sead_SafeString *)&data_0079656C, names_0079656C, 4);
    data_00711CC8 = 0xFFFFFFFFu;
    data_00711CCC = 0xFFFFFFFFu;
    data_00711CD0 = 0x00000000u;
    data_00711CD4 = 0x00000000u;
    data_00711CD8 = 0x42700000u /* 60.0 f */;
    data_00711CDC = 0x42700000u /* 60.0 f */;
}
