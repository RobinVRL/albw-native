/* USA 005CB510 (EU 005CB4E8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 6 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714938;
extern uint32_t data_0071493C;
extern uint32_t data_00714940;
extern uint32_t data_00714944;
extern uint32_t data_0079CC80;
extern uint32_t data_0079CC8C;
void func_0010DEB0(uintptr_t);
void func_005902C0(void);


void func_005CB510(void) {
    data_00714938 = 0xFFFFFFFFu;
    data_0071493C = 0xFFFFFFFFu;
    data_00714940 = 0x00000000u;
    data_00714944 = 0x00000000u;
    data_0079CC80 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CC80);
    data_0079CC8C = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CC8C);
    func_005902C0();
}
