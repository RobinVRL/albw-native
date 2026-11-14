/* USA 005EE8B4 (EU 005EE88C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 28 sead::SafeString name tables (28 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710E00;
extern uint32_t data_00710E04;
extern uint32_t data_00710E08;
extern uint32_t data_00710E0C;
extern uint32_t data_00710E10;
extern uint32_t data_00710E1C;
extern uint32_t data_00710E28;
extern uint32_t data_00710E34;
extern uint32_t data_00710E40;
extern uint32_t data_00710E4C;
extern uint32_t data_00710E58;
extern uint32_t data_00710E64;
extern uint32_t data_00710E70;
extern uint32_t data_00710E7C;
extern uint32_t data_00710E88;
extern uint32_t data_00710E94;
extern uint32_t data_00710EA0;
extern uint32_t data_00710EAC;
extern uint32_t data_00710EB8;
extern uint32_t data_00710EC4;
extern uint32_t data_00710ED0;
extern uint32_t data_00710EDC;
extern uint32_t data_00710EE8;
extern uint32_t data_00710EF4;
extern uint32_t data_00710F00;
extern uint32_t data_00710F0C;
extern uint32_t data_00710F18;
extern uint32_t data_00710F24;
extern uint32_t data_00710F30;
extern uint32_t data_00710F3C;
extern uint32_t data_00710F48;
extern uint32_t data_00710F54;
void func_005902C0(void);

static const char *const names_00710E10[1] = {
    "",
};
static const char *const names_00710E1C[1] = {
    "cmn_action_open",
};
static const char *const names_00710E28[1] = {
    "cmn_action_open",
};
static const char *const names_00710E34[1] = {
    "cmn_action_open",
};
static const char *const names_00710E40[1] = {
    "cmn_action_hold",
};
static const char *const names_00710E4C[1] = {
    "cmn_action_hold",
};
static const char *const names_00710E58[1] = {
    "cmn_action_hold",
};
static const char *const names_00710E64[1] = {
    "cmn_action_throw",
};
static const char *const names_00710E70[1] = {
    "cmn_action_enter",
};
static const char *const names_00710E7C[1] = {
    "cmn_action_leave",
};
static const char *const names_00710E88[1] = {
    "cmn_action_swim",
};
static const char *const names_00710E94[1] = {
    "cmn_action_talk",
};
static const char *const names_00710EA0[1] = {
    "cmn_action_read",
};
static const char *const names_00710EAC[1] = {
    "cmn_action_look",
};
static const char *const names_00710EB8[1] = {
    "cmn_action_check",
};
static const char *const names_00710EC4[1] = {
    "cmn_action_grasp",
};
static const char *const names_00710ED0[1] = {
    "cmn_action_touch",
};
static const char *const names_00710EDC[1] = {
    "cmn_action_touch",
};
static const char *const names_00710EE8[1] = {
    "cmn_action_pullup",
};
static const char *const names_00710EF4[1] = {
    "cmn_action_pullgrasp",
};
static const char *const names_00710F00[1] = {
    "cmn_action_hold",
};
static const char *const names_00710F0C[1] = {
    "cmn_action_takealong",
};
static const char *const names_00710F18[1] = {
    "cmn_action_takealong",
};
static const char *const names_00710F24[1] = {
    "cmn_action_keepwait",
};
static const char *const names_00710F30[1] = {
    "cmn_action_get",
};
static const char *const names_00710F3C[1] = {
    "cmn_action_swing",
};
static const char *const names_00710F48[1] = {
    "cmn_action_getpouch",
};
static const char *const names_00710F54[1] = {
    "cmn_action_check",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EE8B4(void) {
    fill_names((sead_SafeString *)&data_00710E10, names_00710E10, 1);
    fill_names((sead_SafeString *)&data_00710E1C, names_00710E1C, 1);
    fill_names((sead_SafeString *)&data_00710E28, names_00710E28, 1);
    fill_names((sead_SafeString *)&data_00710E34, names_00710E34, 1);
    fill_names((sead_SafeString *)&data_00710E40, names_00710E40, 1);
    fill_names((sead_SafeString *)&data_00710E4C, names_00710E4C, 1);
    fill_names((sead_SafeString *)&data_00710E58, names_00710E58, 1);
    fill_names((sead_SafeString *)&data_00710E64, names_00710E64, 1);
    fill_names((sead_SafeString *)&data_00710E70, names_00710E70, 1);
    fill_names((sead_SafeString *)&data_00710E7C, names_00710E7C, 1);
    fill_names((sead_SafeString *)&data_00710E88, names_00710E88, 1);
    fill_names((sead_SafeString *)&data_00710E94, names_00710E94, 1);
    fill_names((sead_SafeString *)&data_00710EA0, names_00710EA0, 1);
    fill_names((sead_SafeString *)&data_00710EAC, names_00710EAC, 1);
    fill_names((sead_SafeString *)&data_00710EB8, names_00710EB8, 1);
    fill_names((sead_SafeString *)&data_00710EC4, names_00710EC4, 1);
    fill_names((sead_SafeString *)&data_00710ED0, names_00710ED0, 1);
    fill_names((sead_SafeString *)&data_00710EDC, names_00710EDC, 1);
    fill_names((sead_SafeString *)&data_00710EE8, names_00710EE8, 1);
    fill_names((sead_SafeString *)&data_00710EF4, names_00710EF4, 1);
    fill_names((sead_SafeString *)&data_00710F00, names_00710F00, 1);
    fill_names((sead_SafeString *)&data_00710F0C, names_00710F0C, 1);
    fill_names((sead_SafeString *)&data_00710F18, names_00710F18, 1);
    fill_names((sead_SafeString *)&data_00710F24, names_00710F24, 1);
    fill_names((sead_SafeString *)&data_00710F30, names_00710F30, 1);
    fill_names((sead_SafeString *)&data_00710F3C, names_00710F3C, 1);
    fill_names((sead_SafeString *)&data_00710F48, names_00710F48, 1);
    fill_names((sead_SafeString *)&data_00710F54, names_00710F54, 1);
    data_00710E00 = 0xFFFFFFFFu;
    data_00710E04 = 0xFFFFFFFFu;
    data_00710E08 = 0x00000000u;
    data_00710E0C = 0x00000000u;
    func_005902C0();
}
