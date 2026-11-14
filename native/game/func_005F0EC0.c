/* USA 005F0EC0 (EU 005F0E98): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (42 names), 22 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B0C0;
extern uint32_t data_0070B0C1;
extern uint32_t data_0070B0C2;
extern uint32_t data_0070B0C3;
extern uint32_t data_0070B0C4;
extern uint32_t data_0070B0C5;
extern uint32_t data_0070B0C6;
extern uint32_t data_0070B0C7;
extern uint32_t data_0070B0C8;
extern uint32_t data_0070B0C9;
extern uint32_t data_0070B0CA;
extern uint32_t data_0070B0CB;
extern uint32_t data_0070B0CC;
extern uint32_t data_0070B0CD;
extern uint32_t data_0070B0CE;
extern uint32_t data_0070B0CF;
extern uint32_t data_0070B0D0;
extern uint32_t data_0070B0D4;
extern uint32_t data_0070B0D8;
extern uint32_t data_0070B0DC;
extern uint32_t data_0070B0E0;
extern uint32_t data_0070B0E4;
extern uint32_t data_0070B0E8;
extern uint32_t data_00747D6C;
uintptr_t func_00114608(uintptr_t, uintptr_t);

static const char *const names_0070B0E8[8] = {
    "skl_root",
    "center",
    "cl_LhandA",
    "cl_RhandA",
    "head_jnt",
    "Lshoulder_jnt",
    "stomach_jnt",
    "waist_jnt",
};
static const char *const names_00747D6C[34] = {
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
    "skl_root",
    "center",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F0EC0(void) {
    fill_names((sead_SafeString *)&data_0070B0E8, names_0070B0E8, 8);
    fill_names((sead_SafeString *)&data_00747D6C, names_00747D6C, 34);
    *(uint8_t *)&data_0070B0C0 = 0xFFu;
    *(uint8_t *)&data_0070B0C1 = 0x0u;
    *(uint8_t *)&data_0070B0C2 = 0x0u;
    *(uint8_t *)&data_0070B0C3 = 0x0u;
    *(uint8_t *)&data_0070B0C4 = 0xFFu;
    *(uint8_t *)&data_0070B0C5 = 0x0u;
    *(uint8_t *)&data_0070B0C6 = 0x1Au;
    *(uint8_t *)&data_0070B0C7 = 0xFFu;
    *(uint8_t *)&data_0070B0C8 = 0xFFu;
    *(uint8_t *)&data_0070B0C9 = 0xC4u;
    *(uint8_t *)&data_0070B0CA = 0x88u;
    *(uint8_t *)&data_0070B0CB = 0xBFu;
    *(uint8_t *)&data_0070B0CC = 0xFFu;
    *(uint8_t *)&data_0070B0CD = 0x0u;
    *(uint8_t *)&data_0070B0CE = 0x8Au;
    *(uint8_t *)&data_0070B0CF = 0x6Au;
    data_0070B0D8 = 0xFFFFFFFFu;
    data_0070B0DC = 0xFFFFFFFFu;
    data_0070B0E0 = 0x00000000u;
    data_0070B0E4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D800000u, 0x0000008Au);
    data_0070B0D0 = ret0;
    data_0070B0D4 = ret0;
}
