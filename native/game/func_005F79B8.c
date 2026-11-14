/* USA 005F79B8 (EU 005F7990): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713840;
extern uint32_t data_00713844;
extern uint32_t data_00713848;
extern uint32_t data_0071384C;
extern uint32_t data_00713850;
extern uint32_t data_00713858;
void func_005902C0(uintptr_t);

static const char *const names_00713850[2] = {
    "Gm_FloorNumberT",
    "T_DungeonName_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F79B8(void) {
    fill_names((sead_SafeString *)&data_00713850, names_00713850, 2);
    data_00713840 = 0xFFFFFFFFu;
    data_00713844 = 0xFFFFFFFFu;
    data_00713848 = 0x00000000u;
    data_0071384C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713858);
}
