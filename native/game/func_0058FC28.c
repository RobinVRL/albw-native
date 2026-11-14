/* USA 0058FC28 (EU 0058FC00): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 2 sead::SafeString name tables (38 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713958;
extern uint32_t data_0071395C;
extern uint32_t data_00713960;
extern uint32_t data_00713964;
extern uint32_t data_00713968;
extern uint32_t data_0079C3E4;

static const char *const names_00713968[26] = {
    "Mn_FileSelectB",
    "Mn_FileSelectBtn",
    "T_UserName_00",
    "NewFile_00",
    "T_HeadLineText_00",
    "HeadLineText_00",
    "HeadLineText_01",
    "HeadLineText_02",
    "HeadLineText_03",
    "HeadLineText_04",
    "HeadLineText_05",
    "HeadLineText_06",
    "HeadLineText_07",
    "HeadLineText_08",
    "HeadLineText_09",
    "HeadLineText_10",
    "T_FileFull_00",
    "T_Delete_00",
    "N_CopyFileOne_00",
    "N_CopyFileTwo_00",
    "N_SelectFrame_00",
    "N_SelectFrame_00",
    "N_SelectFrame_00",
    "N_SelectFrame_00",
    "N_SageIcon_00",
    "N_EmblemIcon_00",
};
static const char *const names_0079C3E4[12] = {
    "N_FileOne_00",
    "N_FileTwo_00",
    "N_FileThree_00",
    "B_FileOne_00",
    "B_FileTwo_00",
    "B_FileThree_00",
    "L_OK_00",
    "L_Copy_00",
    "L_Delete_00",
    "L_NormalMode_00",
    "L_HardMode_00",
    "L_SetName_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0058FC28(void) {
    fill_names((sead_SafeString *)&data_00713968, names_00713968, 26);
    fill_names((sead_SafeString *)&data_0079C3E4, names_0079C3E4, 12);
    data_00713958 = 0xFFFFFFFFu;
    data_0071395C = 0xFFFFFFFFu;
    data_00713960 = 0x00000000u;
    data_00713964 = 0x00000000u;
}
