/* USA 00109DE4 (EU 00109DE4): reset of an object holding a StateMgr at +0x14: clears
 * +0x38..+0x6C (+0x40 = -1, +0x60 = 1, +0x62 = 0x8000) and changeState(+0x14, 0).
 * Native fix of the matched source (src/work8/sol2/variants/00109DE4_0.cpp): it calls
 * 0010CF7C with one argument because on ARM r1 already holds 0 (EU 00109DE4 `mov r1, #0`,
 * reused as the new state). Natively the state was stack garbage. Confidence: high. */
#include <stdint.h>

void func_0010CF7C(uint8_t *mgr, int32_t new_state);

void func_00109DE4(uint8_t *a0)
{
    *(uint32_t *)(a0 + 0x38) = 0;
    *(uint32_t *)(a0 + 0x3c) = 0;
    *(uint32_t *)(a0 + 0x40) = 0xffffffffu;
    for (int o = 0x44; o <= 0x5c; o += 4)
        *(uint32_t *)(a0 + o) = 0;
    *(uint16_t *)(a0 + 0x60) = 1;
    *(uint16_t *)(a0 + 0x62) = 0x8000;
    for (int o = 0x64; o <= 0x6c; o++)
        a0[o] = 0;
    func_0010CF7C(a0 + 0x14, 0);
}
