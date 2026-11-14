/* USA 005D047C (EU 005D0454): static initialiser, decompiled by tools/decomp_initializer.py.
 * 23 sead::SafeString name tables (24 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713E88;
extern uint32_t data_00713E8C;
extern uint32_t data_00713E90;
extern uint32_t data_00713E94;
extern uint32_t data_00713E98;
extern uint32_t data_00713EAC;
extern uint32_t data_00713EB8;
extern uint32_t data_00713EC4;
extern uint32_t data_00713ED0;
extern uint32_t data_00713EDC;
extern uint32_t data_00713EE8;
extern uint32_t data_00713EF4;
extern uint32_t data_00713F00;
extern uint32_t data_00713F0C;
extern uint32_t data_00713F18;
extern uint32_t data_00713F24;
extern uint32_t data_00713F30;
extern uint32_t data_00713F3C;
extern uint32_t data_00713F48;
extern uint32_t data_00713F54;
extern uint32_t data_00713F60;
extern uint32_t data_00713F6C;
extern uint32_t data_00713F78;
extern uint32_t data_00713F84;
extern uint32_t data_00713F90;
extern uint32_t data_00713F9C;
extern uint32_t data_00713FA8;
void func_005902C0(uintptr_t);

static const char *const names_00713E98[2] = {
    "T_Txt_00",
    "itt_tutorial_icerod",
};
static const char *const names_00713EAC[1] = {
    "itt_tutorial_sandrod",
};
static const char *const names_00713EB8[1] = {
    "itt_tutorial_tornaderod",
};
static const char *const names_00713EC4[1] = {
    "itt_tutorial_bomb",
};
static const char *const names_00713ED0[1] = {
    "itt_tutorial_firerod",
};
static const char *const names_00713EDC[1] = {
    "itt_tutorial_hookshot",
};
static const char *const names_00713EE8[1] = {
    "itt_tutorial_boomerang",
};
static const char *const names_00713EF4[1] = {
    "itt_tutorial_hammer",
};
static const char *const names_00713F00[1] = {
    "itt_tutorial_bow",
};
static const char *const names_00713F0C[1] = {
    "",
};
static const char *const names_00713F18[1] = {
    "",
};
static const char *const names_00713F24[1] = {
    "",
};
static const char *const names_00713F30[1] = {
    "",
};
static const char *const names_00713F3C[1] = {
    "",
};
static const char *const names_00713F48[1] = {
    "",
};
static const char *const names_00713F54[1] = {
    "",
};
static const char *const names_00713F60[1] = {
    "",
};
static const char *const names_00713F6C[1] = {
    "",
};
static const char *const names_00713F78[1] = {
    "",
};
static const char *const names_00713F84[1] = {
    "",
};
static const char *const names_00713F90[1] = {
    "",
};
static const char *const names_00713F9C[1] = {
    "",
};
static const char *const names_00713FA8[1] = {
    "",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D047C(void) {
    fill_names((sead_SafeString *)&data_00713E98, names_00713E98, 2);
    fill_names((sead_SafeString *)&data_00713EAC, names_00713EAC, 1);
    fill_names((sead_SafeString *)&data_00713EB8, names_00713EB8, 1);
    fill_names((sead_SafeString *)&data_00713EC4, names_00713EC4, 1);
    fill_names((sead_SafeString *)&data_00713ED0, names_00713ED0, 1);
    fill_names((sead_SafeString *)&data_00713EDC, names_00713EDC, 1);
    fill_names((sead_SafeString *)&data_00713EE8, names_00713EE8, 1);
    fill_names((sead_SafeString *)&data_00713EF4, names_00713EF4, 1);
    fill_names((sead_SafeString *)&data_00713F00, names_00713F00, 1);
    fill_names((sead_SafeString *)&data_00713F0C, names_00713F0C, 1);
    fill_names((sead_SafeString *)&data_00713F18, names_00713F18, 1);
    fill_names((sead_SafeString *)&data_00713F24, names_00713F24, 1);
    fill_names((sead_SafeString *)&data_00713F30, names_00713F30, 1);
    fill_names((sead_SafeString *)&data_00713F3C, names_00713F3C, 1);
    fill_names((sead_SafeString *)&data_00713F48, names_00713F48, 1);
    fill_names((sead_SafeString *)&data_00713F54, names_00713F54, 1);
    fill_names((sead_SafeString *)&data_00713F60, names_00713F60, 1);
    fill_names((sead_SafeString *)&data_00713F6C, names_00713F6C, 1);
    fill_names((sead_SafeString *)&data_00713F78, names_00713F78, 1);
    fill_names((sead_SafeString *)&data_00713F84, names_00713F84, 1);
    fill_names((sead_SafeString *)&data_00713F90, names_00713F90, 1);
    fill_names((sead_SafeString *)&data_00713F9C, names_00713F9C, 1);
    fill_names((sead_SafeString *)&data_00713FA8, names_00713FA8, 1);
    data_00713E88 = 0xFFFFFFFFu;
    data_00713E8C = 0xFFFFFFFFu;
    data_00713E90 = 0x00000000u;
    data_00713E94 = 0x00000000u;
    func_005902C0(0x00000000u);
}
