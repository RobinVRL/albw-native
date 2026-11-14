/* USA 005D0C88 (EU 005D0C60): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715958;
extern uint32_t data_0071595C;
extern uint32_t data_00715960;
extern uint32_t data_00715964;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0C88(void) {
    data_00715958 = 0xFFFFFFFFu;
    data_0071595C = 0xFFFFFFFFu;
    data_00715960 = 0x00000000u;
    data_00715964 = 0x00000000u;
}
