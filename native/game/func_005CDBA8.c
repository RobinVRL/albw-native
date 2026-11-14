/* USA 005CDBA8 (EU 005CDB80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 8 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BCE0;
extern uint32_t data_0070BCE4;
extern uint32_t data_0070BCE8;
extern uint32_t data_0070BCEC;
extern uint32_t data_0074F7E8;
extern uint32_t data_0074F828;
extern uint32_t data_0074F82C;
extern uint32_t data_0074F830;
extern uint32_t data_0074F834;

static const char *const names_0074F7E8[8] = {
    "cone",
    "pyramid",
    "cube",
    "cylinder",
    "ShadowBoomerang",
    "KnucleMaster",
    "Togegoma",
    "DeguRock",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CDBA8(void) {
    fill_names((sead_SafeString *)&data_0074F7E8, names_0074F7E8, 8);
    data_0070BCE0 = 0xFFFFFFFFu;
    data_0070BCE4 = 0xFFFFFFFFu;
    data_0070BCE8 = 0x00000000u;
    data_0070BCEC = 0x00000000u;
    data_0074F828 = 0x00000000u /* 0.0 f */;
    data_0074F82C = 0x00000000u /* 0.0 f */;
    data_0074F830 = 0x00000000u /* 0.0 f */;
    data_0074F834 = 0x3F800000u /* 1.0 f */;
}
