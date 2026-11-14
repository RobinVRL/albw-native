/* USA 005B6688 (EU 005B6660): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D900;
extern uint32_t data_0070D904;
extern uint32_t data_0070D908;
extern uint32_t data_0070D90C;
extern uint32_t data_0076FF40;
extern uint32_t data_0076FF44;
extern uint32_t data_0076FF48;
extern uint32_t data_0076FF4C;
extern uint32_t data_0076FF60;
extern uint32_t data_007701A8;
extern uint32_t data_007701AC;
extern uint32_t data_007701B0;
extern uint32_t data_007701B4;
extern uint32_t data_007701C8;
extern uint32_t data_00770410;
extern uint32_t data_00770414;
extern uint32_t data_00770418;
extern uint32_t data_0077041C;
extern uint32_t data_00770430;
extern uint32_t data_00770678;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603F7C(void);

static const char *const names_00770678[4] = {
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

void func_005B6688(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076FF40;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcAttention1";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222\215\226\332\203N\203\2231";
    fill_names((sead_SafeString *)&data_00770678, names_00770678, 4);
    data_0070D900 = 0xFFFFFFFFu;
    data_0070D904 = 0xFFFFFFFFu;
    data_0070D908 = 0x00000000u;
    data_0070D90C = 0x00000000u;
    data_0076FF40 = 0x00000000u;
    data_0076FF44 = 0x00000005u;
    data_0076FF48 = (uintptr_t)&data_0076FF4C;
    func_0019B51C((uintptr_t)&data_0076FF60, (uintptr_t)&func_00603F7C, 0x000001E8u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076FF40, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007701A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcAttention2";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\222\215\226\332\203N\203\2232";
    data_007701A8 = 0x00000000u;
    data_007701AC = 0x00000005u;
    data_007701B0 = (uintptr_t)&data_007701B4;
    func_0019B51C((uintptr_t)&data_007701C8, (uintptr_t)&func_00603F7C, 0x000001E9u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007701A8, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00770410;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"NpcAttention3";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\222\215\226\332\203N\203\2233";
    data_00770410 = 0x00000000u;
    data_00770414 = 0x00000005u;
    data_00770418 = (uintptr_t)&data_0077041C;
    func_0019B51C((uintptr_t)&data_00770430, (uintptr_t)&func_00603F7C, 0x000001EAu, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00770410, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
