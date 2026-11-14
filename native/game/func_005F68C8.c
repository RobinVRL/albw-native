/* USA 005F68C8 (EU 005F68A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007159A8;
extern uint32_t data_007159AC;
extern uint32_t data_007159B0;
extern uint32_t data_007159B4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F68C8(void) {
    data_007159A8 = 0xFFFFFFFFu;
    data_007159AC = 0xFFFFFFFFu;
    data_007159B0 = 0x00000000u;
    data_007159B4 = 0x00000000u;
}
