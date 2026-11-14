/* USA 005C0EE4 (EU 005C0EBC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F9C8;
extern uint32_t data_0070F9CC;
extern uint32_t data_0070F9D0;
extern uint32_t data_0070F9D4;
extern uint32_t data_007913DC;
extern uint32_t data_007914DC;
extern uint32_t data_007914E0;
extern uint32_t data_007914E4;
extern uint32_t data_007914E8;
extern uint32_t data_007914FC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006055F0(void);

static const char *const names_007913DC[32] = {
    "\202\310\202\265",
    "\214\225",
    "\217\202",
    "\213|",
    "\203u\201[\203\201\203\211\203\223",
    "\203o\203N\203_\203\223",
    "\203t\203@\203C\203\204\201[\203\215\203b\203h",
    "\203A\203C\203X\203\215\203b\203h",
    "\203T\203\223\203h\203\215\203b\203h",
    "\203g\203\213\203l\201[\203h\203\215\203b\203h",
    "\203n\203\223\203}\201[",
    "\203t\203b\203N\203V\203\207\203b\203g",
    "\203y\203K\203T\203X\203u\201[\203c",
    "\222\216\202\240\202\335",
    "\203J\203\223\203e\203\211",
    "\203q\203\223\203g\203\201\203K\203l",
    "\213\363\202\253\203r\203\223",
    "\220\324\202\255\202\267\202\350",
    "\211\251\203N\203X\203\212",
    "\216\207\203N\203X\203\212",
    "\220\302\203N\203X\203\212",
    "\227d\220\270",
    "\203n\203`",
    "\211\251\213\340\203n\203`",
    "\203_\203\212\203A\203\223",
    "\203h\203\215\203\223",
    "\203n\201[\203g",
    "\220\324\202\350\202\361\202\262",
    "\220\302\202\350\202\361\202\262",
    "\203\201\203b\203Z\201[\203W\203{\203g\203\213",
    "\213\215\223\373",
    "\217n\220\254\213\215\223\373",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C0EE4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007914DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\215\273\222\214";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjSandPillar";
    fill_names((sead_SafeString *)&data_007913DC, names_007913DC, 32);
    data_0070F9C8 = 0xFFFFFFFFu;
    data_0070F9CC = 0xFFFFFFFFu;
    data_0070F9D0 = 0x00000000u;
    data_0070F9D4 = 0x00000000u;
    data_007914DC = 0x00000000u;
    data_007914E0 = 0x00000005u;
    data_007914E4 = (uintptr_t)&data_007914E8;
    func_0019B51C((uintptr_t)&data_007914FC, (uintptr_t)&func_006055F0, 0x00000019u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007914DC, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
