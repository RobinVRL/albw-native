/* USA 005CB71C (EU 005CB6F4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715338;
extern uint32_t data_0071533C;
extern uint32_t data_00715340;
extern uint32_t data_00715344;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005CB71C(void) {
    data_00715338 = 0xFFFFFFFFu;
    data_0071533C = 0xFFFFFFFFu;
    data_00715340 = 0x00000000u;
    data_00715344 = 0x00000000u;
}
