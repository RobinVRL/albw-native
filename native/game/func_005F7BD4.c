/* USA 005F7BD4 (EU 005F7BAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708758;
extern uint32_t data_0070875C;
extern uint32_t data_00708760;
extern uint32_t data_00708764;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F7BD4(void) {
    data_00708758 = 0xFFFFFFFFu;
    data_0070875C = 0xFFFFFFFFu;
    data_00708760 = 0x00000000u;
    data_00708764 = 0x00000000u;
}
