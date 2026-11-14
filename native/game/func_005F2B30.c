/* USA 005F2B30 (EU 005F2B08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (10 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713B78;
extern uint32_t data_00713B7C;
extern uint32_t data_00713B80;
extern uint32_t data_00713B84;
extern uint32_t data_00713B88;
extern uint32_t data_0079C574;
void func_005902C0(void);

static const char *const names_00713B88[1] = {
    "Gm_StadiumT",
};
static const char *const names_0079C574[9] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "OutCount",
    "InCount",
    "CountEnd",
    "LinkColor",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F2B30(void) {
    fill_names((sead_SafeString *)&data_00713B88, names_00713B88, 1);
    fill_names((sead_SafeString *)&data_0079C574, names_0079C574, 9);
    data_00713B78 = 0xFFFFFFFFu;
    data_00713B7C = 0xFFFFFFFFu;
    data_00713B80 = 0x00000000u;
    data_00713B84 = 0x00000000u;
    func_005902C0();
}
