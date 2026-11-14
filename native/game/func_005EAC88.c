/* USA 005EAC88 (EU 005EAC60): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007134C8;
extern uint32_t data_007134CC;
extern uint32_t data_007134D0;
extern uint32_t data_007134D4;
extern uint32_t data_007134D8;
void func_005902C0(void);

static const char *const names_007134D8[1] = {
    "Gm_DungeonIconB",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EAC88(void) {
    fill_names((sead_SafeString *)&data_007134D8, names_007134D8, 1);
    data_007134C8 = 0xFFFFFFFFu;
    data_007134CC = 0xFFFFFFFFu;
    data_007134D0 = 0x00000000u;
    data_007134D4 = 0x00000000u;
    func_005902C0();
}
