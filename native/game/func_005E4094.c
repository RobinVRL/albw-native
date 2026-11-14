/* USA 005E4094 (EU 005E406C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (3 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713648;
extern uint32_t data_0071364C;
extern uint32_t data_00713650;
extern uint32_t data_00713654;
extern uint32_t data_00713658;
extern uint32_t data_00713668;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00713658[3] = {
    "Gm_MainSystemCollectTutorialT",
    "T_ItemName_00",
    "T_ItemText_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4094(void) {
    fill_names((sead_SafeString *)&data_00713658, names_00713658, 3);
    data_00713648 = 0xFFFFFFFFu;
    data_0071364C = 0xFFFFFFFFu;
    data_00713650 = 0x00000000u;
    data_00713654 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00713668, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
