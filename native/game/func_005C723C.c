/* USA 005C723C (EU 005C7214): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 2 sead::SafeString name tables (4 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FBF8;
extern uint32_t data_0070FBFC;
extern uint32_t data_0070FC00;
extern uint32_t data_0070FC04;
extern uint32_t data_0070FC08;
extern uint32_t data_00796068;
void func_00100000(void);
void func_0011BAEC(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_0070FC08[2] = {
    "stomach_jnt",
    "waist_jnt",
};
static const char *const names_00796068[2] = {
    "skl_root",
    "center",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C723C(void) {
    fill_names((sead_SafeString *)&data_0070FC08, names_0070FC08, 2);
    fill_names((sead_SafeString *)&data_00796068, names_00796068, 2);
    data_0070FBF8 = 0xFFFFFFFFu;
    data_0070FBFC = 0xFFFFFFFFu;
    data_0070FC00 = 0x00000000u;
    data_0070FC04 = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011BAEC, (uint32_t)(uintptr_t)&func_00100000);
}
