/* USA 005E394C (EU 005E3924): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007134E8;
extern uint32_t data_007134EC;
extern uint32_t data_007134F0;
extern uint32_t data_007134F4;
extern uint32_t data_007134F8;
extern uint32_t data_00713520;
void func_005902C0(uintptr_t);

static const char *const names_007134F8[6] = {
    "Gm_MainSystemDungeonMapB",
    "Gm_FloorButtonBright",
    "T_DungeonName_00",
    "P_SampleMap_00",
    "P_DungeonMapMask_00",
    "T_FloorNumber_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E394C(void) {
    fill_names((sead_SafeString *)&data_007134F8, names_007134F8, 6);
    data_007134E8 = 0xFFFFFFFFu;
    data_007134EC = 0xFFFFFFFFu;
    data_007134F0 = 0x00000000u;
    data_007134F4 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713520);
}
