/* USA 005FA8CC (EU 005FA8A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 30 sead::SafeString name tables (30 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709FB0;
extern uint32_t data_00709FB4;
extern uint32_t data_00709FB8;
extern uint32_t data_00709FBC;
extern uint32_t data_00709FC0;
extern uint32_t data_00709FCC;
extern uint32_t data_00709FDC;
extern uint32_t data_00709FEC;
extern uint32_t data_00709FFC;
extern uint32_t data_0070A00C;
extern uint32_t data_0070A01C;
extern uint32_t data_0070A02C;
extern uint32_t data_0070A03C;
extern uint32_t data_0070A04C;
extern uint32_t data_0070A05C;
extern uint32_t data_0070A06C;
extern uint32_t data_0070A07C;
extern uint32_t data_0070A08C;
extern uint32_t data_0070A09C;
extern uint32_t data_0070A0AC;
extern uint32_t data_0070A0BC;
extern uint32_t data_0070A0CC;
extern uint32_t data_0070A0DC;
extern uint32_t data_0070A0EC;
extern uint32_t data_0070A0FC;
extern uint32_t data_0070A10C;
extern uint32_t data_0070A11C;
extern uint32_t data_0070A12C;
extern uint32_t data_0070A13C;
extern uint32_t data_0070A14C;
extern uint32_t data_0070A15C;
extern uint32_t data_0070A16C;
extern uint32_t data_0070A17C;
extern uint32_t data_0070A18C;
void func_00100000(void);
void func_0011ADE8(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_00709FC0[1] = {
    "CrossBoard",
};
static const char *const names_00709FCC[1] = {
    "cross_board_hint_light_13",
};
static const char *const names_00709FDC[1] = {
    "cross_board_hint_light_2C",
};
static const char *const names_00709FEC[1] = {
    "cross_board_hint_light_2B",
};
static const char *const names_00709FFC[1] = {
    "cross_board_hint_light_23",
};
static const char *const names_0070A00C[1] = {
    "cross_board_hint_light_14",
};
static const char *const names_0070A01C[1] = {
    "cross_board_hint_light_03",
};
static const char *const names_0070A02C[1] = {
    "cross_board_hint_light_08",
};
static const char *const names_0070A03C[1] = {
    "cross_board_hint_light_0A",
};
static const char *const names_0070A04C[1] = {
    "cross_board_hint_light_11",
};
static const char *const names_0070A05C[1] = {
    "cross_board_hint_light_12",
};
static const char *const names_0070A06C[1] = {
    "cross_board_hint_light_16",
};
static const char *const names_0070A07C[1] = {
    "cross_board_hint_light_22",
};
static const char *const names_0070A08C[1] = {
    "cross_board_hint_light_27",
};
static const char *const names_0070A09C[1] = {
    "cross_board_hint_light_2A",
};
static const char *const names_0070A0AC[1] = {
    "cross_board_hint_light_2D",
};
static const char *const names_0070A0BC[1] = {
    "cross_board_hint_light_36",
};
static const char *const names_0070A0CC[1] = {
    "cross_board_hint_light_37",
};
static const char *const names_0070A0DC[1] = {
    "cross_board_hint_light_39",
};
static const char *const names_0070A0EC[1] = {
    "cross_board_hint_dark_01",
};
static const char *const names_0070A0FC[1] = {
    "cross_board_hint_dark_07",
};
static const char *const names_0070A10C[1] = {
    "cross_board_hint_dark_18",
};
static const char *const names_0070A11C[1] = {
    "cross_board_hint_dark_23",
};
static const char *const names_0070A12C[1] = {
    "cross_board_hint_dark_26",
};
static const char *const names_0070A13C[1] = {
    "cross_board_hint_dark_36",
};
static const char *const names_0070A14C[1] = {
    "cross_board_hint_dark_38",
};
static const char *const names_0070A15C[1] = {
    "cross_board_hint_dark_3B",
};
static const char *const names_0070A16C[1] = {
    "cross_board_hint_dark_2C",
};
static const char *const names_0070A17C[1] = {
    "cross_board_hint_dark_03",
};
static const char *const names_0070A18C[1] = {
    "cross_board_hint_dark_14",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005FA8CC(void) {
    fill_names((SafeString *)&data_00709FC0, names_00709FC0, 1);
    fill_names((SafeString *)&data_00709FCC, names_00709FCC, 1);
    fill_names((SafeString *)&data_00709FDC, names_00709FDC, 1);
    fill_names((SafeString *)&data_00709FEC, names_00709FEC, 1);
    fill_names((SafeString *)&data_00709FFC, names_00709FFC, 1);
    fill_names((SafeString *)&data_0070A00C, names_0070A00C, 1);
    fill_names((SafeString *)&data_0070A01C, names_0070A01C, 1);
    fill_names((SafeString *)&data_0070A02C, names_0070A02C, 1);
    fill_names((SafeString *)&data_0070A03C, names_0070A03C, 1);
    fill_names((SafeString *)&data_0070A04C, names_0070A04C, 1);
    fill_names((SafeString *)&data_0070A05C, names_0070A05C, 1);
    fill_names((SafeString *)&data_0070A06C, names_0070A06C, 1);
    fill_names((SafeString *)&data_0070A07C, names_0070A07C, 1);
    fill_names((SafeString *)&data_0070A08C, names_0070A08C, 1);
    fill_names((SafeString *)&data_0070A09C, names_0070A09C, 1);
    fill_names((SafeString *)&data_0070A0AC, names_0070A0AC, 1);
    fill_names((SafeString *)&data_0070A0BC, names_0070A0BC, 1);
    fill_names((SafeString *)&data_0070A0CC, names_0070A0CC, 1);
    fill_names((SafeString *)&data_0070A0DC, names_0070A0DC, 1);
    fill_names((SafeString *)&data_0070A0EC, names_0070A0EC, 1);
    fill_names((SafeString *)&data_0070A0FC, names_0070A0FC, 1);
    fill_names((SafeString *)&data_0070A10C, names_0070A10C, 1);
    fill_names((SafeString *)&data_0070A11C, names_0070A11C, 1);
    fill_names((SafeString *)&data_0070A12C, names_0070A12C, 1);
    fill_names((SafeString *)&data_0070A13C, names_0070A13C, 1);
    fill_names((SafeString *)&data_0070A14C, names_0070A14C, 1);
    fill_names((SafeString *)&data_0070A15C, names_0070A15C, 1);
    fill_names((SafeString *)&data_0070A16C, names_0070A16C, 1);
    fill_names((SafeString *)&data_0070A17C, names_0070A17C, 1);
    fill_names((SafeString *)&data_0070A18C, names_0070A18C, 1);
    data_00709FB0 = 0xFFFFFFFFu;
    data_00709FB4 = 0xFFFFFFFFu;
    data_00709FB8 = 0x00000000u;
    data_00709FBC = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011ADE8, (uint32_t)(uintptr_t)&func_00100000);
}
