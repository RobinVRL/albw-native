/* USA 005FCDF8 (EU 005FCDD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (3 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E98;
extern uint32_t data_00709E9C;
extern uint32_t data_00709EA0;
extern uint32_t data_00709EA4;
extern uint32_t data_00709EA8;
extern uint32_t data_00709EB8;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00709EA8[3] = {
    "DefaultShadowLink",
    "dsl_player_",
    "dsl_user_name",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FCDF8(void) {
    fill_names((sead_SafeString *)&data_00709EA8, names_00709EA8, 3);
    data_00709E98 = 0xFFFFFFFFu;
    data_00709E9C = 0xFFFFFFFFu;
    data_00709EA0 = 0x00000000u;
    data_00709EA4 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00709EB8, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
