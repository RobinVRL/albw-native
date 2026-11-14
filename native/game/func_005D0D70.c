/* USA 005D0D70 (EU 005D0D48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715150;
extern uint32_t data_00715154;
extern uint32_t data_00715158;
extern uint32_t data_0071515C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0D70(void) {
    data_00715150 = 0xFFFFFFFFu;
    data_00715154 = 0xFFFFFFFFu;
    data_00715158 = 0x00000000u;
    data_0071515C = 0x00000000u;
}
