/* USA 0059C528 (EU 0059C500): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (16 names), 22 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E188;
extern uint32_t data_0070E190;
extern uint32_t data_0070E194;
extern uint32_t data_0070E198;
extern uint32_t data_0070E19C;
extern uint32_t data_0070E1A0;
extern uint32_t data_0070E1B4;
extern uint32_t data_0070E1C0;
extern uint32_t data_0070E1CC;
extern uint32_t data_0070E1D8;
extern uint32_t data_0070E1E4;
extern uint32_t data_0070E1F0;
extern uint32_t data_0070E1FC;
extern uint32_t data_0070E208;
extern uint32_t data_0070E214;
extern uint32_t data_0070E220;
extern uint32_t data_00774F94;
extern uint32_t data_00774F98;
extern uint32_t data_00774F9C;
extern uint32_t data_00774FA0;
extern uint32_t data_00774FB4;
extern uint32_t data_007751FC;
extern uint32_t data_0077521C;
extern uint32_t data_00775220;
extern uint32_t data_00775224;
extern uint32_t data_00775228;
extern uint32_t data_0077522C;
extern uint32_t data_00775230;
extern uint32_t data_00775234;
extern uint32_t data_00775238;
extern uint32_t data_0077523A;
extern uint32_t data_0077523C;
extern uint32_t data_0077523D;
extern uint32_t data_0077523E;
extern uint32_t data_0077523F;
extern uint32_t data_00775240;
uintptr_t func_003C5604(uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060ACD0(void);

static const char *const names_0070E1A0[2] = {
    "color_change",
    "wait",
};
static const char *const names_0070E1B4[1] = {
    "talk",
};
static const char *const names_0070E1C0[1] = {
    "step",
};
static const char *const names_0070E1CC[1] = {
    "walk",
};
static const char *const names_0070E1D8[1] = {
    "wait_fear",
};
static const char *const names_0070E1E4[1] = {
    "talk_fear",
};
static const char *const names_0070E1F0[1] = {
    "angry_st",
};
static const char *const names_0070E1FC[1] = {
    "angry_loop",
};
static const char *const names_0070E208[1] = {
    "jump_st",
};
static const char *const names_0070E214[1] = {
    "jump_loop",
};
static const char *const names_0070E220[1] = {
    "jump_ed",
};
static const char *const names_007751FC[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059C528(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070E1A0, names_0070E1A0, 2);
    fill_names((sead_SafeString *)&data_0070E1B4, names_0070E1B4, 1);
    fill_names((sead_SafeString *)&data_0070E1C0, names_0070E1C0, 1);
    fill_names((sead_SafeString *)&data_0070E1CC, names_0070E1CC, 1);
    fill_names((sead_SafeString *)&data_0070E1D8, names_0070E1D8, 1);
    fill_names((sead_SafeString *)&data_0070E1E4, names_0070E1E4, 1);
    fill_names((sead_SafeString *)&data_0070E1F0, names_0070E1F0, 1);
    fill_names((sead_SafeString *)&data_0070E1FC, names_0070E1FC, 1);
    fill_names((sead_SafeString *)&data_0070E208, names_0070E208, 1);
    fill_names((sead_SafeString *)&data_0070E214, names_0070E214, 1);
    fill_names((sead_SafeString *)&data_0070E220, names_0070E220, 1);
    fill_names((sead_SafeString *)&data_007751FC, names_007751FC, 4);
    data_0070E190 = 0xFFFFFFFFu;
    data_0070E194 = 0xFFFFFFFFu;
    data_0070E198 = 0x00000000u;
    data_0070E19C = 0x00000000u;
    data_0077521C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00775220 = 0x3F800000u /* 1.0 f */;
    data_00775224 = 0x3FC00000u /* 1.5 f */;
    data_00775228 = 0x40A00000u /* 5.0 f */;
    data_0077522C = 0x40400000u /* 3.0 f */;
    data_00775230 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00775234 = 0x0000000Fu;
    *(uint16_t *)&data_00775238 = 0x5Fu;
    *(uint16_t *)&data_0077523A = 0xB4u;
    *(uint8_t *)&data_0077523C = 0xEEu;
    *(uint8_t *)&data_0077523D = 0xECu;
    *(uint8_t *)&data_0077523E = 0xFu;
    *(uint8_t *)&data_0077523F = 0x28u;
    *(uint8_t *)&data_00775240 = 0x5u;
    uintptr_t ret0 = func_003C5604(0x0000011Du);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00774F94;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcHinox";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\203q\203m\203b\203N\203X";
    data_0070E188 = ret0;
    data_00774F94 = 0x00000000u;
    data_00774F98 = 0x00000005u;
    data_00774F9C = (uintptr_t)&data_00774FA0;
    func_0019B51C((uintptr_t)&data_00774FB4, (uintptr_t)&func_0060ACD0, 0x000001EBu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00774F94, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
