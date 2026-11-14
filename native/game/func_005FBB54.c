/* USA 005FBB54 (EU 005FBB2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713AB8;
extern uint32_t data_00713ABC;
extern uint32_t data_00713AC0;
extern uint32_t data_00713AC4;
extern uint32_t data_00713AC8;
extern uint32_t data_0079C484;
void func_005902C0(void);

static const char *const names_00713AC8[1] = {
    "Gm_DigitalTimerT",
};
static const char *const names_0079C484[3] = {
    "InOut",
    "InOut",
    "Count",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FBB54(void) {
    fill_names((sead_SafeString *)&data_00713AC8, names_00713AC8, 1);
    fill_names((sead_SafeString *)&data_0079C484, names_0079C484, 3);
    data_00713AB8 = 0xFFFFFFFFu;
    data_00713ABC = 0xFFFFFFFFu;
    data_00713AC0 = 0x00000000u;
    data_00713AC4 = 0x00000000u;
    func_005902C0();
}
