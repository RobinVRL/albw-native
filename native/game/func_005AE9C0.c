/* USA 005AE9C0 (EU 005AE998): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 12 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007158B8;
extern uint32_t data_007158BC;
extern uint32_t data_007158C0;
extern uint32_t data_007158C4;
extern uint32_t data_007158C8;
extern uint32_t data_007158CC;
extern uint32_t data_007158D0;
extern uint32_t data_007158D4;
extern uint32_t data_007158D8;
extern uint32_t data_007158DC;
extern uint32_t data_007158E0;
extern uint32_t data_007158E4;


static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AE9C0(void) {
    data_007158B8 = 0x00008202u;
    data_007158BC = 0x00040030u;
    data_007158C0 = 0x00008F02u;
    data_007158C4 = 0x00040030u;
    data_007158C8 = 0x00009802u;
    data_007158CC = 0x00040030u;
    data_007158D0 = 0x0000A102u;
    data_007158D4 = 0x00040030u;
    data_007158D8 = 0x0000A902u;
    data_007158DC = 0x00040030u;
    data_007158E0 = 0x0000B102u;
    data_007158E4 = 0x00040030u;
}
