/* USA 005CA274 (EU 005CA24C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712420;
extern uint32_t data_00712424;
extern uint32_t data_00712428;
extern uint32_t data_0071242C;


void func_005CA274(void) {
    data_00712420 = 0xFFFFFFFFu;
    data_00712424 = 0xFFFFFFFFu;
    data_00712428 = 0x00000000u;
    data_0071242C = 0x00000000u;
}
