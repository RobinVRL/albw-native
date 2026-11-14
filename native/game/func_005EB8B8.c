/* USA 005EB8B8 (EU 005EB890): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 2 sead::SafeString name tables (3 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E10;
extern uint32_t data_00714E14;
extern uint32_t data_00714E18;
extern uint32_t data_00714E1C;
extern uint32_t data_00714E20;
extern uint32_t data_0079D780;
void func_00100000(void);
void func_0011C4E0(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_00714E20[1] = {
    "AudioFxSocket",
};
static const char *const names_0079D780[2] = {
    "AuxBus_A",
    "AuxBus_B",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB8B8(void) {
    fill_names((sead_SafeString *)&data_00714E20, names_00714E20, 1);
    fill_names((sead_SafeString *)&data_0079D780, names_0079D780, 2);
    data_00714E10 = 0xFFFFFFFFu;
    data_00714E14 = 0xFFFFFFFFu;
    data_00714E18 = 0x00000000u;
    data_00714E1C = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011C4E0, (uint32_t)(uintptr_t)&func_00100000);
}
