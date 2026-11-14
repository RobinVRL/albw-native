/* USA 005C2900 (EU 005C28D8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706D40;
extern uint32_t data_00706D88;
extern uint32_t data_00706D90;
extern uint32_t data_00706D94;
extern uint32_t data_00706D98;
extern uint32_t data_00706D9C;
void func_005902C0(uintptr_t);

static const char *const names_00706D40[10] = {
    "ac_Break",
    "ac_Valley",
    "ac_WaterFall",
    "ac_LavaFall",
    "ac_IceBreak",
    "ac_HammerBreak",
    "ac_OnSw0",
    "ac_OnSw1",
    "ac_OffSw0",
    "ac_OffSw1",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C2900(void) {
    fill_names((sead_SafeString *)&data_00706D40, names_00706D40, 10);
    data_00706D90 = 0xFFFFFFFFu;
    data_00706D94 = 0xFFFFFFFFu;
    data_00706D98 = 0x00000000u;
    data_00706D9C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00706D88);
}
