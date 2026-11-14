/* USA 005A3FAC (EU 005A3F84): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A1F0;
extern uint32_t data_0070A1F4;
extern uint32_t data_0070A1F8;
extern uint32_t data_0070A1FC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A3FAC(void) {
    data_0070A1F0 = 0xFFFFFFFFu;
    data_0070A1F4 = 0xFFFFFFFFu;
    data_0070A1F8 = 0x00000000u;
    data_0070A1FC = 0x00000000u;
}
