/* USA 005ECEEC (EU 005ECEC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (19 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713688;
extern uint32_t data_0071368C;
extern uint32_t data_00713690;
extern uint32_t data_00713694;
extern uint32_t data_00713698;
extern uint32_t data_0079BD94;
void func_005902C0(void);

static const char *const names_00713698[1] = {
    "Gm_TimeUpT",
};
static const char *const names_0079BD94[18] = {
    "InOutNum",
    "InOutNum",
    "InOutNum",
    "InOutNum",
    "InOutNum",
    "InOutText",
    "G_Num5_00",
    "G_Num4_00",
    "G_Num3_00",
    "G_Num2_00",
    "G_Num1_00",
    "G_Text_00",
    "P_Num5_00",
    "P_Num4_00",
    "P_Num3_00",
    "P_Num2_00",
    "P_Num1_00",
    "T_Text_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ECEEC(void) {
    fill_names((sead_SafeString *)&data_00713698, names_00713698, 1);
    fill_names((sead_SafeString *)&data_0079BD94, names_0079BD94, 18);
    data_00713688 = 0xFFFFFFFFu;
    data_0071368C = 0xFFFFFFFFu;
    data_00713690 = 0x00000000u;
    data_00713694 = 0x00000000u;
    func_005902C0();
}
