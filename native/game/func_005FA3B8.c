/* USA 005FA3B8 (EU 005FA390): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007133D0;
extern uint32_t data_007133D4;
extern uint32_t data_007133D8;
extern uint32_t data_007133DC;
extern uint32_t data_0079B9D0;
void func_005902C0(void);

static const char *const names_0079B9D0[7] = {
    "Loop",
    "OnOff",
    "OnOff",
    "Decide",
    "SelectItem",
    "ScrollR",
    "ScrollL",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FA3B8(void) {
    fill_names((sead_SafeString *)&data_0079B9D0, names_0079B9D0, 7);
    data_007133D0 = 0xFFFFFFFFu;
    data_007133D4 = 0xFFFFFFFFu;
    data_007133D8 = 0x00000000u;
    data_007133DC = 0x00000000u;
    func_005902C0();
}
