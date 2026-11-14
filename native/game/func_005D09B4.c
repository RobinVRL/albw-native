/* USA 005D09B4 (EU 005D098C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714578;
extern uint32_t data_0071457C;
extern uint32_t data_00714580;
extern uint32_t data_00714584;
extern uint32_t data_00714588;
extern uint32_t data_0079C964;
void func_005902C0(uintptr_t);

static const char *const names_00714588[1] = {
    "L_Kimo_00",
};
static const char *const names_0079C964[8] = {
    "OnOff",
    "Loop",
    "Decide",
    "ScrollOn",
    "ScrollOn",
    "ScrollDecide",
    "ScrollDecide",
    "Select",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D09B4(void) {
    fill_names((sead_SafeString *)&data_00714588, names_00714588, 1);
    fill_names((sead_SafeString *)&data_0079C964, names_0079C964, 8);
    data_00714578 = 0xFFFFFFFFu;
    data_0071457C = 0xFFFFFFFFu;
    data_00714580 = 0x00000000u;
    data_00714584 = 0x00000000u;
    func_005902C0(0x00000000u);
}
