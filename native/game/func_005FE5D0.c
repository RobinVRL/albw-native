/* USA 005FE5D0 (EU 005FE5A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715998;
extern uint32_t data_0071599C;
extern uint32_t data_007159A0;
extern uint32_t data_007159A4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005FE5D0(void) {
    data_00715998 = 0xFFFFFFFFu;
    data_0071599C = 0xFFFFFFFFu;
    data_007159A0 = 0x00000000u;
    data_007159A4 = 0x00000000u;
}
