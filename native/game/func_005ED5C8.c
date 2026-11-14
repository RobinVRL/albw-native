/* USA 005ED5C8 (EU 005ED5A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (15 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714000;
extern uint32_t data_00714004;
extern uint32_t data_00714008;
extern uint32_t data_0071400C;
extern uint32_t data_00714010;
extern uint32_t data_00714018;
extern uint32_t data_0079C77C;
void func_005902C0(uintptr_t);

static const char *const names_00714010[2] = {
    "Gm_SellKimoT",
    "T_Message_00",
};
static const char *const names_0079C77C[13] = {
    "In",
    "Out",
    "OutBtn",
    "ChangeMessage",
    "L_KimoB_00",
    "L_KimoY_00",
    "L_KimoP_00",
    "L_BtnL_00",
    "L_BtnR_00",
    "T_Message_00",
    "T_MessageKimoB_00",
    "T_MessageKimoY_00",
    "T_MessageKimoP_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ED5C8(void) {
    fill_names((sead_SafeString *)&data_00714010, names_00714010, 2);
    fill_names((sead_SafeString *)&data_0079C77C, names_0079C77C, 13);
    data_00714000 = 0xFFFFFFFFu;
    data_00714004 = 0xFFFFFFFFu;
    data_00714008 = 0x00000000u;
    data_0071400C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00714018);
}
