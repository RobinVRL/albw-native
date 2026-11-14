/* USA 005CD1AC (EU 005CD184): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00699174;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AFB0;
extern uint32_t data_0070AFB8;
extern uint32_t data_0070AFBC;
extern uint32_t data_0070AFC0;
extern uint32_t data_0070AFC4;
extern uint32_t data_00746B08;
extern uint32_t data_00746C08;
extern uint32_t data_00746C0C;
extern uint32_t data_00746C10;
extern uint32_t data_00746C14;
extern uint32_t data_00746C28;
extern uint32_t data_00746E70;
extern uint32_t data_00746EB8;
extern uint32_t data_00746EBC;
extern uint32_t data_00746EC0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606958(void);

static const char *const names_00746B08[32] = {
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

void func_005CD1AC(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00746B08, names_00746B08, 32);
    data_0070AFB8 = 0xFFFFFFFFu;
    data_0070AFBC = 0xFFFFFFFFu;
    data_0070AFC0 = 0x00000000u;
    data_0070AFC4 = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00746E70, 0x00000005u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyShadowLink";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\223G\203V\203\203\203h\203E\203\212\203\223\203N";
    data_00746C08 = 0x00000000u;
    data_00746C0C = 0x00000005u;
    data_00746C10 = (uintptr_t)&data_00746C14;
    data_00746EB8 = 0x00000000u /* 0.0 f */;
    data_00746EBC = 0x3F000000u /* 0.5 f */;
    data_00746EC0 = 0xBE99999Au /* -0.30000001192092896 f */;
    uintptr_t v0 = data_0070AFB0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00699174 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00746C08;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00746C28, (uintptr_t)&func_00606958, 0x000001F3u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00746C08, (uintptr_t)((char *)stk + 32), v1);
}
