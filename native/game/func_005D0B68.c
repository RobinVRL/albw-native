/* USA 005D0B68 (EU 005D0B40): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (2 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007145D0;
extern uint32_t data_007145D4;
extern uint32_t data_007145D8;
extern uint32_t data_007145DC;
extern uint32_t data_007145E0;
extern uint32_t data_007145E8;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_007145E0[2] = {
    "cl_LhandA",
    "cl_RhandA",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0B68(void) {
    fill_names((sead_SafeString *)&data_007145E0, names_007145E0, 2);
    data_007145D0 = 0xFFFFFFFFu;
    data_007145D4 = 0xFFFFFFFFu;
    data_007145D8 = 0x00000000u;
    data_007145DC = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_007145E8, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
