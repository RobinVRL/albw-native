/* USA 005C2118 (EU 005C20F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 23 sead::SafeString name tables (23 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714050;
extern uint32_t data_00714054;
extern uint32_t data_00714058;
extern uint32_t data_0071405C;
extern uint32_t data_00714060;
extern uint32_t data_0071406C;
extern uint32_t data_00714078;
extern uint32_t data_00714084;
extern uint32_t data_00714090;
extern uint32_t data_0071409C;
extern uint32_t data_007140A8;
extern uint32_t data_007140B4;
extern uint32_t data_007140C0;
extern uint32_t data_007140CC;
extern uint32_t data_007140D8;
extern uint32_t data_007140E4;
extern uint32_t data_007140F0;
extern uint32_t data_007140FC;
extern uint32_t data_00714108;
extern uint32_t data_00714114;
extern uint32_t data_00714120;
extern uint32_t data_0071412C;
extern uint32_t data_00714138;
extern uint32_t data_00714144;
extern uint32_t data_00714150;
extern uint32_t data_0071415C;
extern uint32_t data_00714168;
void func_005902C0(uintptr_t);

static const char *const names_00714060[1] = {
    "",
};
static const char *const names_0071406C[1] = {
    "",
};
static const char *const names_00714078[1] = {
    "",
};
static const char *const names_00714084[1] = {
    "",
};
static const char *const names_00714090[1] = {
    "",
};
static const char *const names_0071409C[1] = {
    "",
};
static const char *const names_007140A8[1] = {
    "",
};
static const char *const names_007140B4[1] = {
    "",
};
static const char *const names_007140C0[1] = {
    "",
};
static const char *const names_007140CC[1] = {
    "itt_tutorial_shield",
};
static const char *const names_007140D8[1] = {
    "itt_tutorial_bottle",
};
static const char *const names_007140E4[1] = {
    "itt_tutorial_potshop_red",
};
static const char *const names_007140F0[1] = {
    "itt_tutorial_potshop_blue",
};
static const char *const names_007140FC[1] = {
    "itt_tutorial_potshop_purple",
};
static const char *const names_00714108[1] = {
    "itt_tutorial_potshop_yellow",
};
static const char *const names_00714114[1] = {
    "itt_tutorial_potshop_heart",
};
static const char *const names_00714120[1] = {
    "itt_tutorial_escape_fruit",
};
static const char *const names_0071412C[1] = {
    "itt_tutorial_stop_fruit",
};
static const char *const names_00714138[1] = {
    "itt_tutorial_stone_beauty",
};
static const char *const names_00714144[1] = {
    "itt_tutorial_fairy",
};
static const char *const names_00714150[1] = {
    "itt_tutorial_bee",
};
static const char *const names_0071415C[1] = {
    "itt_tutorial_golden_bee",
};
static const char *const names_00714168[1] = {
    "itt_tutorial_milk",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C2118(void) {
    fill_names((sead_SafeString *)&data_00714060, names_00714060, 1);
    fill_names((sead_SafeString *)&data_0071406C, names_0071406C, 1);
    fill_names((sead_SafeString *)&data_00714078, names_00714078, 1);
    fill_names((sead_SafeString *)&data_00714084, names_00714084, 1);
    fill_names((sead_SafeString *)&data_00714090, names_00714090, 1);
    fill_names((sead_SafeString *)&data_0071409C, names_0071409C, 1);
    fill_names((sead_SafeString *)&data_007140A8, names_007140A8, 1);
    fill_names((sead_SafeString *)&data_007140B4, names_007140B4, 1);
    fill_names((sead_SafeString *)&data_007140C0, names_007140C0, 1);
    fill_names((sead_SafeString *)&data_007140CC, names_007140CC, 1);
    fill_names((sead_SafeString *)&data_007140D8, names_007140D8, 1);
    fill_names((sead_SafeString *)&data_007140E4, names_007140E4, 1);
    fill_names((sead_SafeString *)&data_007140F0, names_007140F0, 1);
    fill_names((sead_SafeString *)&data_007140FC, names_007140FC, 1);
    fill_names((sead_SafeString *)&data_00714108, names_00714108, 1);
    fill_names((sead_SafeString *)&data_00714114, names_00714114, 1);
    fill_names((sead_SafeString *)&data_00714120, names_00714120, 1);
    fill_names((sead_SafeString *)&data_0071412C, names_0071412C, 1);
    fill_names((sead_SafeString *)&data_00714138, names_00714138, 1);
    fill_names((sead_SafeString *)&data_00714144, names_00714144, 1);
    fill_names((sead_SafeString *)&data_00714150, names_00714150, 1);
    fill_names((sead_SafeString *)&data_0071415C, names_0071415C, 1);
    fill_names((sead_SafeString *)&data_00714168, names_00714168, 1);
    data_00714050 = 0xFFFFFFFFu;
    data_00714054 = 0xFFFFFFFFu;
    data_00714058 = 0x00000000u;
    data_0071405C = 0x00000000u;
    func_005902C0(0x00000000u);
}
