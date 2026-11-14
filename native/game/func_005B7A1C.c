/* USA 005B7A1C (EU 005B79F4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 18 other stores, 8 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F350;
extern uint32_t data_0070F354;
extern uint32_t data_0070F358;
extern uint32_t data_0070F35C;
extern uint32_t data_0070F360;
extern uint32_t data_0070F368;
extern uint32_t data_0070F36C;
extern uint32_t data_0070F370;
extern uint32_t data_0070F374;
extern uint32_t data_00783070;
extern uint32_t data_00783170;
extern uint32_t data_00783174;
extern uint32_t data_00783178;
extern uint32_t data_0078317C;
extern uint32_t data_00783190;
extern uint32_t data_007833D8;
extern uint32_t data_007833DC;
extern uint32_t data_007833E0;
extern uint32_t data_007833E4;
extern uint32_t data_007833F8;
extern uint32_t data_00783640;
extern uint32_t data_00783644;
extern uint32_t data_00783648;
extern uint32_t data_0078364C;
extern uint32_t data_00783660;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116DC0(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006043A0(void);
void func_006088A8(void);
void func_00608F10(void);

static const char *const names_00783070[32] = {
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

void func_005B7A1C(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00783070, names_00783070, 32);
    data_0070F368 = 0xFFFFFFFFu;
    data_0070F36C = 0xFFFFFFFFu;
    data_0070F370 = 0x00000000u;
    data_0070F374 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E71C71Du, (uintptr_t)&func_00116DC0);
    data_0070F350 = ret0;
    uintptr_t ret1 = func_00114608(0x4DAAAAABu, 0x00000000u);
    data_0070F354 = ret1;
    uintptr_t ret2 = func_00114608(0x4E0E38E4u, 0x00000000u);
    data_0070F358 = ret2;
    uintptr_t ret3 = func_00114608(0x4E8E38E4u, 0x00000000u);
    data_0070F35C = ret3;
    uintptr_t ret4 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00783170;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjBoomerang";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203u\201[\203\201\203\211\203\223";
    data_0070F360 = ret4;
    data_00783170 = 0x00000000u;
    data_00783174 = 0x00000005u;
    data_00783178 = (uintptr_t)&data_0078317C;
    func_0019B51C((uintptr_t)&data_00783190, (uintptr_t)&func_006043A0, 0x00000035u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00783170, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007833D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjBoomerangRental";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203u\201[\203\201\203\211\203\223(\203\214\203\223\203^\203\213)";
    data_007833D8 = 0x00000000u;
    data_007833DC = 0x00000005u;
    data_007833E0 = (uintptr_t)&data_007833E4;
    func_0019B51C((uintptr_t)&data_007833F8, (uintptr_t)&func_00608F10, 0x00000036u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007833D8, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00783640;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"ObjBoomerangHypha";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203u\201[\203\201\203\211\203\223(\213\255\211\273\224\305)";
    data_00783640 = 0x00000000u;
    data_00783644 = 0x00000005u;
    data_00783648 = (uintptr_t)&data_0078364C;
    func_0019B51C((uintptr_t)&data_00783660, (uintptr_t)&func_006088A8, 0x00000037u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00783640, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
