/* USA 005D0EB0 (EU 005D0E88): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007152A0;
extern uint32_t data_007152A4;
extern uint32_t data_007152A8;
extern uint32_t data_007152AC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0EB0(void) {
    data_007152A0 = 0xFFFFFFFFu;
    data_007152A4 = 0xFFFFFFFFu;
    data_007152A8 = 0x00000000u;
    data_007152AC = 0x00000000u;
}
