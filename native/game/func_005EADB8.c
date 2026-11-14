/* USA 005EADB8 (EU 005EAD90): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713860;
extern uint32_t data_00713864;
extern uint32_t data_00713868;
extern uint32_t data_0071386C;
extern uint32_t data_00713870;
void func_005902C0(void);

static const char *const names_00713870[2] = {
    "Gm_DungeonNameT",
    "T_DungeonName_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EADB8(void) {
    fill_names((sead_SafeString *)&data_00713870, names_00713870, 2);
    data_00713860 = 0xFFFFFFFFu;
    data_00713864 = 0xFFFFFFFFu;
    data_00713868 = 0x00000000u;
    data_0071386C = 0x00000000u;
    func_005902C0();
}
