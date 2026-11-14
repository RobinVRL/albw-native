/* USA 005B3ED4 (EU 005B3EAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE10;
extern uint32_t data_0070BE14;
extern uint32_t data_0070BE18;
extern uint32_t data_0070BE1C;
extern uint32_t data_0070BE20;
extern uint32_t data_0070BE24;
extern uint32_t data_0070BE28;
extern uint32_t data_00750988;
extern uint32_t data_0075098C;
extern uint32_t data_00750990;
extern uint32_t data_00750994;
extern uint32_t data_007509A8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116944(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603CB8(void);

static const char *const names_0070BE28[1] = {
    "BoardFall",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B3ED4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070BE28, names_0070BE28, 1);
    data_0070BE18 = 0xFFFFFFFFu;
    data_0070BE1C = 0xFFFFFFFFu;
    data_0070BE20 = 0x00000000u;
    data_0070BE24 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x48CBE3C9u, (uintptr_t)&func_00116944);
    data_0070BE10 = ret0;
    uintptr_t ret1 = func_00114608(0x4C088889u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00750988;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"§ÄÂ";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojBoardFall";
    data_0070BE14 = ret1;
    data_00750988 = 0x00000000u;
    data_0075098C = 0x00000005u;
    data_00750990 = (uintptr_t)&data_00750994;
    func_0019B51C((uintptr_t)&data_007509A8, (uintptr_t)&func_00603CB8, 0x000000DAu, (uintptr_t)((char *)stk + 24));
}
