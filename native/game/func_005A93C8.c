/* USA 005A93C8 (EU 005A93A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (3 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E70;
extern uint32_t data_00709E74;
extern uint32_t data_00709E78;
extern uint32_t data_00709E7C;
extern uint32_t data_00709E80;
void func_005902C0(void);

static const char *const names_00709E80[3] = {
    "Common",
    "cmn_cross_title",
    "cmn_cross_message",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A93C8(void) {
    fill_names((sead_SafeString *)&data_00709E80, names_00709E80, 3);
    data_00709E70 = 0xFFFFFFFFu;
    data_00709E74 = 0xFFFFFFFFu;
    data_00709E78 = 0x00000000u;
    data_00709E7C = 0x00000000u;
    func_005902C0();
}
