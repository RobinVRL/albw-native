/* USA 0059A278 (EU 0059A250): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 10 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007158FC;
extern uint32_t data_00715908;
extern uint32_t data_0071590C;
extern uint32_t data_00715910;
extern uint32_t data_00715914;
extern uint32_t data_007A0418;
extern uint32_t data_007A041C;
extern uint32_t data_007A0420;
extern uint32_t data_007A0424;
extern uint32_t data_007A0428;
void func_003D2C98(void);


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059A278(void) {
    data_007158FC = 0x00000000u;
    data_00715908 = 0xFFFFFFFFu;
    data_0071590C = 0xFFFFFFFFu;
    data_00715910 = 0x00000000u;
    data_00715914 = 0x00000000u;
    data_007A0418 = 0x00000000u;
    data_007A041C = 0x00000000u;
    data_007A0420 = (uint32_t)(uintptr_t)&func_003D2C98;
    data_007A0424 = 0x00000000u;
    data_007A0428 = 0x00008000u;
}
