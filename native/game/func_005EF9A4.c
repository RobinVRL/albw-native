/* USA 005EF9A4 (EU 005EF97C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007141F8;
extern uint32_t data_007141FC;
extern uint32_t data_00714200;
extern uint32_t data_00714204;
extern uint32_t data_00714208;
void func_005902C0(void);

static const char *const names_00714208[1] = {
    "Cm_Wipe",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EF9A4(void) {
    fill_names((sead_SafeString *)&data_00714208, names_00714208, 1);
    data_007141F8 = 0xFFFFFFFFu;
    data_007141FC = 0xFFFFFFFFu;
    data_00714200 = 0x00000000u;
    data_00714204 = 0x00000000u;
    func_005902C0();
}
