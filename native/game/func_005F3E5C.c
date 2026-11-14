/* USA 005F3E5C (EU 005F3E34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (32 names), 10 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B060;
extern uint32_t data_0070B064;
extern uint32_t data_0070B068;
extern uint32_t data_0070B06C;
extern uint32_t data_0074783C;
extern uint32_t data_0074793C;
extern uint32_t data_00747940;
extern uint32_t data_00747944;
extern uint32_t data_00747948;
extern uint32_t data_0074794C;
extern uint32_t data_00747950;

static const char *const names_0074783C[32] = {
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

void func_005F3E5C(void) {
    fill_names((sead_SafeString *)&data_0074783C, names_0074783C, 32);
    data_0070B060 = 0xFFFFFFFFu;
    data_0070B064 = 0xFFFFFFFFu;
    data_0070B068 = 0x00000000u;
    data_0070B06C = 0x00000000u;
    data_0074793C = 0x00000000u /* 0.0 f */;
    data_00747940 = 0x3F19999Au /* 0.6000000238418579 f */;
    data_00747944 = 0x3F000000u /* 0.5 f */;
    data_00747948 = 0x00000000u /* 0.0 f */;
    data_0074794C = 0x00000000u /* 0.0 f */;
    data_00747950 = 0xBE99999Au /* -0.30000001192092896 f */;
}
