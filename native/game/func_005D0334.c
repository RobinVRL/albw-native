/* USA 005D0334 (EU 005D030C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (2 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713D08;
extern uint32_t data_00713D0C;
extern uint32_t data_00713D10;
extern uint32_t data_00713D14;
extern uint32_t data_00713D18;
extern uint32_t data_00713D20;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00713D18[2] = {
    "Gm_KMapLight",
    "Gm_KMapDark",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0334(void) {
    fill_names((sead_SafeString *)&data_00713D18, names_00713D18, 2);
    data_00713D08 = 0xFFFFFFFFu;
    data_00713D0C = 0xFFFFFFFFu;
    data_00713D10 = 0x00000000u;
    data_00713D14 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00713D20, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
