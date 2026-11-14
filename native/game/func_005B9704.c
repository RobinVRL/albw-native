/* USA 005B9704 (EU 005B96DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CC8;
extern uint32_t data_00714CCC;
extern uint32_t data_00714CD0;
extern uint32_t data_00714CD4;
extern uint32_t data_0079D770;
void func_0010FD28(uintptr_t, uintptr_t);


void func_005B9704(void) {
    data_00714CC8 = 0xFFFFFFFFu;
    data_00714CCC = 0xFFFFFFFFu;
    data_00714CD0 = 0x00000000u;
    data_00714CD4 = 0x00000000u;
    func_0010FD28((uintptr_t)&data_0079D770, 0x00000000u);
}
