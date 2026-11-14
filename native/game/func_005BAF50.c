/* USA 005BAF50 (EU 005BAF28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (42 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006962BC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A7E0;
extern uint32_t data_0070A7E4;
extern uint32_t data_0070A7E8;
extern uint32_t data_0070A7EC;
extern uint32_t data_0070A7F0;
extern uint32_t data_0070A7F4;
extern uint32_t data_0073A880;
extern uint32_t data_0073A980;
extern uint32_t data_0073A984;
extern uint32_t data_0073A988;
extern uint32_t data_0073A98C;
extern uint32_t data_0073A9A0;
extern uint32_t data_0073ABE8;
extern uint32_t data_0073AC38;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_001175D8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604810(void);

static const char *const names_0073A880[32] = {
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
static const char *const names_0073ABE8[10] = {
    "up",
    "wait",
    "wait_down",
    "fire",
    "damage",
    "struggle",
    "struggle_down",
    "panic",
    "jitabata",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BAF50(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073A880, names_0073A880, 32);
    fill_names((sead_SafeString *)&data_0073ABE8, names_0073ABE8, 10);
    data_0070A7E8 = 0xFFFFFFFFu;
    data_0070A7EC = 0xFFFFFFFFu;
    data_0070A7F0 = 0x00000000u;
    data_0070A7F4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4BE38E39u, (uintptr_t)&func_001175D8);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 28);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 28) = 0x0u;
    *(uint8_t *)((char *)stk + 29) = 0x0u;
    *(uint8_t *)((char *)stk + 30) = 0x0u;
    *(uint8_t *)((char *)stk + 31) = 0xFFu;
    *(uint8_t *)((char *)stk + 32) = 0xFFu;
    data_0070A7E4 = ret0;
    func_004FC6FC((uintptr_t)&data_0073AC38, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 28), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"EnemyDeviland";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203f\203r\203\211\203\223\203h";
    data_0073A980 = 0x00000000u;
    data_0073A984 = 0x00000005u;
    data_0073A988 = (uintptr_t)&data_0073A98C;
    uintptr_t v0 = data_0070A7E0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006962BC : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073A980;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073A9A0, (uintptr_t)&func_00604810, 0x00000238u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0073A980, (uintptr_t)((char *)stk + 40), v1);
}
