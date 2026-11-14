/* USA 005A1C44 (EU 005A1C1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 19 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C0B0;
extern uint32_t data_0070C0B4;
extern uint32_t data_0070C0B8;
extern uint32_t data_0070C0BC;
extern uint32_t data_007599D0;
extern uint32_t data_007599D4;
extern uint32_t data_007599D8;
extern uint32_t data_007599DC;
extern uint32_t data_007599F0;
extern uint32_t data_00759C38;
extern uint32_t data_00759C60;
extern uint32_t data_00759C64;
extern uint32_t data_00759C68;
extern uint32_t data_00759C6C;
extern uint32_t data_00759C70;
extern uint32_t data_00759C74;
extern uint32_t data_00759C78;
extern uint32_t data_00759C7C;
extern uint32_t data_00759C80;
extern uint32_t data_00759C84;
extern uint32_t data_00759C88;
extern uint32_t data_00759C8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B274(void);

static const char *const names_00759C38[5] = {
    "up",
    "down",
    "lava",
    "solid_on",
    "solid_off",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A1C44(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007599D0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\225\254\202\253\217\343\202\252\202\351\203}\203O\203}";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojLavaUp";
    fill_names((sead_SafeString *)&data_00759C38, names_00759C38, 5);
    data_0070C0B0 = 0xFFFFFFFFu;
    data_0070C0B4 = 0xFFFFFFFFu;
    data_0070C0B8 = 0x00000000u;
    data_0070C0BC = 0x00000000u;
    data_007599D0 = 0x00000000u;
    data_007599D4 = 0x00000005u;
    data_007599D8 = (uintptr_t)&data_007599DC;
    data_00759C60 = 0x40000000u /* 2.0 f */;
    data_00759C64 = 0x40B00000u /* 5.5 f */;
    data_00759C68 = 0x40000000u /* 2.0 f */;
    data_00759C6C = 0x3FF33333u /* 1.899999976158142 f */;
    data_00759C70 = 0x40B00000u /* 5.5 f */;
    data_00759C74 = 0x3FF33333u /* 1.899999976158142 f */;
    data_00759C78 = 0x40000000u /* 2.0 f */;
    data_00759C7C = 0x4109999Au /* 8.600000381469727 f */;
    data_00759C80 = 0x40000000u /* 2.0 f */;
    data_00759C84 = 0x00000000u /* 0.0 f */;
    data_00759C88 = 0xBF000000u /* -0.5 f */;
    data_00759C8C = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_007599F0, (uintptr_t)&func_0060B274, 0x000000DCu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007599D0, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
