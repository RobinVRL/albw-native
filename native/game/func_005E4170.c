/* USA 005E4170 (EU 005E4148): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (7 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713730;
extern uint32_t data_00713734;
extern uint32_t data_00713738;
extern uint32_t data_0071373C;
extern uint32_t data_00713740;
extern uint32_t data_0079C114;
void func_005902C0(uintptr_t);

static const char *const names_00713740[1] = {
    "Gm_SRCJudgeT",
};
static const char *const names_0079C114[6] = {
    "N_Win_00",
    "N_Lose_00",
    "N_Draw_00",
    "InOutWin",
    "InLose",
    "InDraw",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4170(void) {
    fill_names((sead_SafeString *)&data_00713740, names_00713740, 1);
    fill_names((sead_SafeString *)&data_0079C114, names_0079C114, 6);
    data_00713730 = 0xFFFFFFFFu;
    data_00713734 = 0xFFFFFFFFu;
    data_00713738 = 0x00000000u;
    data_0071373C = 0x00000000u;
    func_005902C0(0x00000000u);
}
