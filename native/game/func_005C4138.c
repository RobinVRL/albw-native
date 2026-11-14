/* USA 005C4138 (EU 005C4110): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (25 names), 7 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BC68;
extern uint32_t data_0070BC6C;
extern uint32_t data_0070BC70;
extern uint32_t data_0070BC74;
extern uint32_t data_0070BC78;
extern uint32_t data_0074F73C;
extern uint32_t data_0074F7AC;
extern uint32_t data_0074F7B0;
extern uint32_t data_0074F7B4;

static const char *const names_0070BC78[11] = {
    "follow",
    "isdark",
    "darkbgsp",
    "dlgt",
    "clr",
    "amb",
    "sw",
    "pe",
    "no_pe",
    "peclr",
    "eft",
};
static const char *const names_0074F73C[14] = {
    "ch0",
    "ch1",
    "ch2",
    "bg0",
    "bg1",
    "bg2",
    "isfixed_ch",
    "isfixed",
    "fog0",
    "fog1",
    "cmn",
    "crs",
    "stg",
    "obj",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C4138(void) {
    fill_names((sead_SafeString *)&data_0070BC78, names_0070BC78, 11);
    fill_names((sead_SafeString *)&data_0074F73C, names_0074F73C, 14);
    data_0070BC68 = 0xFFFFFFFFu;
    data_0070BC6C = 0xFFFFFFFFu;
    data_0070BC70 = 0x00000000u;
    data_0070BC74 = 0x00000000u;
    data_0074F7AC = 0x40000000u /* 2.0 f */;
    data_0074F7B0 = 0x3F666666u /* 0.8999999761581421 f */;
    data_0074F7B4 = 0x3F800000u /* 1.0 f */;
}
