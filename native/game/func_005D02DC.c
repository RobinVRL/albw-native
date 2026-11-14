/* USA 005D02DC (EU 005D02B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713390;
extern uint32_t data_00713394;
extern uint32_t data_00713398;
extern uint32_t data_0071339C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D02DC(void) {
    data_00713390 = 0xFFFFFFFFu;
    data_00713394 = 0xFFFFFFFFu;
    data_00713398 = 0x00000000u;
    data_0071339C = 0x00000000u;
}
