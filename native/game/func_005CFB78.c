/* USA 005CFB78 (EU 005CFB50): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 8 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710F70;
extern uint32_t data_00710F74;
extern uint32_t data_00710F78;
extern uint32_t data_00710F7C;
extern uint32_t data_00796078;
extern uint32_t data_00796098;
extern uint32_t data_0079609C;
extern uint32_t data_007960A0;
extern uint32_t data_007960A4;

static const char *const names_00796078[4] = {
    "PlayerItem/FlatLinkLv1.bch",
    "PlayerItem/FlatLinkLv2.bch",
    "PlayerItem/FlatLinkLv3.bch",
    "PlayerItem/FlatLinkLv4.bch",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CFB78(void) {
    fill_names((sead_SafeString *)&data_00796078, names_00796078, 4);
    data_00710F70 = 0xFFFFFFFFu;
    data_00710F74 = 0xFFFFFFFFu;
    data_00710F78 = 0x00000000u;
    data_00710F7C = 0x00000000u;
    data_00796098 = 0x3F5EB852u /* 0.8700000047683716 f */;
    data_0079609C = 0x3F59999Au /* 0.8500000238418579 f */;
    data_007960A0 = 0x3F58D4FEu /* 0.847000002861023 f */;
    data_007960A4 = 0x437F0000u /* 255.0 f */;
}
