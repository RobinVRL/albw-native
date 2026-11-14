/* USA 005E4A88 (EU 005E4A60): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 9 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F54EC;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F28;
extern uint32_t data_00714F2C;
extern uint32_t data_00714F30;
extern uint32_t data_00714F34;
extern uint32_t data_0079DB90;
extern uint32_t data_0079DB94;
extern uint32_t data_0079DB98;
extern uint32_t data_0079DB9C;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688990(void);


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E4A88(void) {
    data_00714F28 = 0xFFFFFFFFu;
    data_00714F2C = 0xFFFFFFFFu;
    data_00714F30 = 0x00000000u;
    data_00714F34 = 0x00000000u;
    data_0079DB90 = (uint32_t)(uintptr_t)&data_006F54EC;
    data_0079DB94 = (uint32_t)(uintptr_t)&data_0079DB94;
    data_0079DB98 = (uint32_t)(uintptr_t)&data_0079DB94;
    data_0079DB9C = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_0079DB90, (uint32_t)(uintptr_t)&func_00688990, (uint32_t)(uintptr_t)&func_00100000, (uint32_t)(uintptr_t)&data_0079DB98);
}
