/* USA 005F65DC (EU 005F65B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (2 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713800;
extern uint32_t data_00713804;
extern uint32_t data_00713808;
extern uint32_t data_0071380C;
extern uint32_t data_00713810;
extern uint32_t data_00713818;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00713810[2] = {
    "Gm_DemoAButton",
    "T_Action_00",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F65DC(void) {
    fill_names((SafeString *)&data_00713810, names_00713810, 2);
    data_00713800 = 0xFFFFFFFFu;
    data_00713804 = 0xFFFFFFFFu;
    data_00713808 = 0x00000000u;
    data_0071380C = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00713818, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
