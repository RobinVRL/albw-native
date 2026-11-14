/* USA 005F01A4 (EU 005F017C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (36 names), 7 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007086D0;
extern uint32_t data_007086D4;
extern uint32_t data_007086D8;
extern uint32_t data_007086DC;
extern uint32_t data_0072AA68;
extern uint32_t data_0072AB88;
extern uint32_t data_0072AB8C;
extern uint32_t data_0072AB90;

static const char *const names_0072AA68[36] = {
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
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F01A4(void) {
    fill_names((sead_SafeString *)&data_0072AA68, names_0072AA68, 36);
    data_007086D0 = 0xFFFFFFFFu;
    data_007086D4 = 0xFFFFFFFFu;
    data_007086D8 = 0x00000000u;
    data_007086DC = 0x00000000u;
    data_0072AB88 = 0x00000000u /* 0.0 f */;
    data_0072AB8C = 0xBA83126Fu /* -0.0010000000474974513 f */;
    data_0072AB90 = 0x00000000u /* 0.0 f */;
}
