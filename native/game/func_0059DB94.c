/* USA 0059DB94 (EU 0059DB6C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F340;
extern uint32_t data_0070F344;
extern uint32_t data_0070F348;
extern uint32_t data_0070F34C;
extern uint32_t data_00782AA0;
extern uint32_t data_00782BA0;
extern uint32_t data_00782BA4;
extern uint32_t data_00782BA8;
extern uint32_t data_00782BAC;
extern uint32_t data_00782BC0;
extern uint32_t data_00782E08;
extern uint32_t data_00782E0C;
extern uint32_t data_00782E10;
extern uint32_t data_00782E14;
extern uint32_t data_00782E28;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602E34(void);
void func_0060ADF8(void);

static const char *const names_00782AA0[32] = {
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

void func_0059DB94(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00782BA0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjBombS";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203o\203N\203_\203\223";
    fill_names((sead_SafeString *)&data_00782AA0, names_00782AA0, 32);
    data_0070F340 = 0xFFFFFFFFu;
    data_0070F344 = 0xFFFFFFFFu;
    data_0070F348 = 0x00000000u;
    data_0070F34C = 0x00000000u;
    data_00782BA0 = 0x00000000u;
    data_00782BA4 = 0x00000005u;
    data_00782BA8 = (uintptr_t)&data_00782BAC;
    func_0019B51C((uintptr_t)&data_00782BC0, (uintptr_t)&func_0060ADF8, 0x0000006Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00782BA0, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00782E08;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjBombIce";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203o\203N\203_\203\223\220\341\213\312";
    data_00782E08 = 0x00000000u;
    data_00782E0C = 0x00000005u;
    data_00782E10 = (uintptr_t)&data_00782E14;
    func_0019B51C((uintptr_t)&data_00782E28, (uintptr_t)&func_00602E34, 0x0000006Fu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00782E08, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
