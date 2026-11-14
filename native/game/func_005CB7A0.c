/* USA 005CB7A0 (EU 005CB778): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 6 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A8B52;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F599C;
extern uint32_t data_00715368;
extern uint32_t data_0071536C;
extern uint32_t data_00715370;
extern uint32_t data_00715374;
extern uint32_t data_00725974;
extern uint32_t data_0072597C;
extern uint32_t data_00725980;
void func_005902C0(void);

static const char *const names_00725974[1] = {
    "",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CB7A0(void) {
    fill_names((sead_SafeString *)&data_00725974, names_00725974, 1);
    data_00715368 = 0xFFFFFFFFu;
    data_0071536C = 0xFFFFFFFFu;
    data_00715370 = 0x00000000u;
    data_00715374 = 0x00000000u;
    data_0072597C = (uintptr_t)&data_006F599C;
    data_00725980 = (uintptr_t)&data_006A8B52;
    func_005902C0();
}
