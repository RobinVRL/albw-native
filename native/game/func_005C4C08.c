/* USA 005C4C08 (EU 005C4BE0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C2F8;
extern uint32_t data_0070C2FC;
extern uint32_t data_0070C300;
extern uint32_t data_0070C304;
extern uint32_t data_0070C308;
extern uint32_t data_0076034C;
extern uint32_t data_00760350;
extern uint32_t data_00760354;
extern uint32_t data_00760358;
extern uint32_t data_0076036C;
extern uint32_t data_007605B4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605C94(void);

static const char *const names_0070C308[3] = {
    "Left",
    "Right",
    "SwitchWater",
};
static const char *const names_007605B4[6] = {
    "TurnLeft",
    "TurnRight",
    "AttemptedLeft",
    "AttemptedRight",
    "SetLeft",
    "SetRight",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C4C08(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076034C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\220\205\226\312\217\343\211\272\203X\203C\203b\203`";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSwitchWater";
    fill_names((sead_SafeString *)&data_0070C308, names_0070C308, 3);
    fill_names((sead_SafeString *)&data_007605B4, names_007605B4, 6);
    data_0070C2F8 = 0xFFFFFFFFu;
    data_0070C2FC = 0xFFFFFFFFu;
    data_0070C300 = 0x00000000u;
    data_0070C304 = 0x00000000u;
    data_0076034C = 0x00000000u;
    data_00760350 = 0x00000005u;
    data_00760354 = (uintptr_t)&data_00760358;
    func_0019B51C((uintptr_t)&data_0076036C, (uintptr_t)&func_00605C94, 0x00000026u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0076034C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
