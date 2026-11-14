/* USA 005B51D8 (EU 005B51B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C1E8;
extern uint32_t data_0070C1EC;
extern uint32_t data_0070C1F0;
extern uint32_t data_0070C1F4;
extern uint32_t data_0070C1F8;
extern uint32_t data_0075D544;
extern uint32_t data_0075D548;
extern uint32_t data_0075D54C;
extern uint32_t data_0075D550;
extern uint32_t data_0075D564;
extern uint32_t data_0075D7AC;
extern uint32_t data_0075D7B0;
extern uint32_t data_0075D7B4;
extern uint32_t data_0075D7B8;
extern uint32_t data_0075D7CC;
extern uint32_t data_0075DA14;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603E10(void);

static const char *const names_0070C1F8[2] = {
    "MessageBoad_Back",
    "MessageBoad_Dark",
};
static const char *const names_0075DA14[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Signboard_Lower",
    "Signboard_Upper",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B51D8(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075D544;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSignboard";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\212\305\224\302";
    fill_names((sead_SafeString *)&data_0070C1F8, names_0070C1F8, 2);
    fill_names((sead_SafeString *)&data_0075DA14, names_0075DA14, 6);
    data_0070C1E8 = 0xFFFFFFFFu;
    data_0070C1EC = 0xFFFFFFFFu;
    data_0070C1F0 = 0x00000000u;
    data_0070C1F4 = 0x00000000u;
    data_0075D544 = 0x00000000u;
    data_0075D548 = 0x00000005u;
    data_0075D54C = (uintptr_t)&data_0075D550;
    func_0019B51C((uintptr_t)&data_0075D564, (uintptr_t)&func_00603E10, 0x00000115u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075D544, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075D7AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojSignboardRental";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203\211\203\224\203B\203I\212\305\224\302";
    data_0075D7AC = 0x00000000u;
    data_0075D7B0 = 0x00000005u;
    data_0075D7B4 = (uintptr_t)&data_0075D7B8;
    func_0019B51C((uintptr_t)&data_0075D7CC, (uintptr_t)&func_00603E10, 0x00000116u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0075D7AC, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
