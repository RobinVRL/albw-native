/* USA 005FD578 (EU 005FD550): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (15 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713AD8;
extern uint32_t data_00713ADC;
extern uint32_t data_00713AE0;
extern uint32_t data_00713AE4;
extern uint32_t data_00713AE8;
extern uint32_t data_0079C49C;
void func_005902C0(void);

static const char *const names_00713AE8[5] = {
    "Gm_GiriGiriResultT",
    "T_Result_00",
    "T_Result_01",
    "T_Result_02",
    "T_Result_00",
};
static const char *const names_0079C49C[10] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Out",
    "CountEnd",
    "Pos",
    "Bonus",
    "LinkColor",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FD578(void) {
    fill_names((sead_SafeString *)&data_00713AE8, names_00713AE8, 5);
    fill_names((sead_SafeString *)&data_0079C49C, names_0079C49C, 10);
    data_00713AD8 = 0xFFFFFFFFu;
    data_00713ADC = 0xFFFFFFFFu;
    data_00713AE0 = 0x00000000u;
    data_00713AE4 = 0x00000000u;
    func_005902C0();
}
