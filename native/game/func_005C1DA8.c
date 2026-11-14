/* USA 005C1DA8 (EU 005C1D80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (24 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712FB0;
extern uint32_t data_00712FB4;
extern uint32_t data_00712FB8;
extern uint32_t data_00712FBC;
extern uint32_t data_00712FD4;
extern uint32_t data_00712FF8;
extern uint32_t data_0071301C;
extern uint32_t data_00713040;
extern uint32_t data_00713064;
extern uint32_t data_00713088;
extern uint32_t data_007130AC;
extern uint32_t data_007130D0;
extern uint32_t data_007130F4;
extern uint32_t data_00713118;
extern uint32_t data_0071313C;
extern uint32_t data_00713160;
void func_005902C0(void);

static const char *const names_00712FD4[2] = {
    "Gully",
    "\203O\203\212          ",
};
static const char *const names_00712FF8[2] = {
    "Seres",
    "\203Z\203\214\203X        ",
};
static const char *const names_0071301C[2] = {
    "Osfala",
    "\203A\203X\203t\203@\203\213    ",
};
static const char *const names_00713040[2] = {
    "Irene",
    "\203A\203C\203\212\203\223      ",
};
static const char *const names_00713064[2] = {
    "Oren",
    "\203I\201[\203\214\203\223      ",
};
static const char *const names_00713088[2] = {
    "Rosso",
    "\203\215\203b\203\\        ",
};
static const char *const names_007130AC[2] = {
    "Impa",
    "\203C\203\223\203p        ",
};
static const char *const names_007130D0[2] = {
    "Omote02",
    "\203~\203\213\203N\203o\201[   ",
};
static const char *const names_007130F4[2] = {
    "Omote03",
    "\203R\203b\203R\211\256     ",
};
static const char *const names_00713118[2] = {
    "Omote04",
    "\203J\203J\203\212\203R\221\272   ",
};
static const char *const names_0071313C[2] = {
    "Omote01",
    "\203}\203U\201[\203}\203C\203}\203C",
};
static const char *const names_00713160[2] = {
    "Zelda",
    "\203[\203\213\203_        ",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C1DA8(void) {
    fill_names((sead_SafeString *)&data_00712FD4, names_00712FD4, 2);
    fill_names((sead_SafeString *)&data_00712FF8, names_00712FF8, 2);
    fill_names((sead_SafeString *)&data_0071301C, names_0071301C, 2);
    fill_names((sead_SafeString *)&data_00713040, names_00713040, 2);
    fill_names((sead_SafeString *)&data_00713064, names_00713064, 2);
    fill_names((sead_SafeString *)&data_00713088, names_00713088, 2);
    fill_names((sead_SafeString *)&data_007130AC, names_007130AC, 2);
    fill_names((sead_SafeString *)&data_007130D0, names_007130D0, 2);
    fill_names((sead_SafeString *)&data_007130F4, names_007130F4, 2);
    fill_names((sead_SafeString *)&data_00713118, names_00713118, 2);
    fill_names((sead_SafeString *)&data_0071313C, names_0071313C, 2);
    fill_names((sead_SafeString *)&data_00713160, names_00713160, 2);
    data_00712FB0 = 0xFFFFFFFFu;
    data_00712FB4 = 0xFFFFFFFFu;
    data_00712FB8 = 0x00000000u;
    data_00712FBC = 0x00000000u;
    func_005902C0();
}
