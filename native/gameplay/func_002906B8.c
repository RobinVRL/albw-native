/* USA 002906B8 <- EU 002906E0: player "start action 0x1F/0x20" request with a value and a float:
 *   if (act[0xB0] || 0052E8A0(act->player [0x10]) ||
 *       (*(u32 *)(data_007111A8 + 16 * act->id [0x42, s16] + 4) & 0x100)) return 0;
 *   act->machine [0x48]->vtbl[0x20](machine);              (cancel the current action)
 *   001DD48C(player, 0052E7D8(player, b), 1);
 *   p = 002D55D0(machine, flag ? 0x20 : 0x1F);
 *   if (p) { *(u32 *)p = c; *(float *)(p + 4) = f; }
 *   return 1;
 * Reached by fall-through from 002906A4 (which swaps r2/r3).
 * What was wrong: s0 lost (in_s0 stored into the request); also 001DD48C is called with
 * r2 = 1 that its Ghidra signature (int, int) drops (passed here as on ARM).
 * Verified against EU 002906E0-00290794 (r4 act, r5 flag, r7 b, r6 c, s16 f).
 * Confidence: high. */
#include "gameplay.h"

extern const uint8_t data_007111A8[];
int func_0052E8A0(int player);
int func_0052E7D8(int player, int b);
int func_001DD48C(int player, int v, int one);
int func_002D55D0(int machine, uint32_t action);

int func_002906B8(void *act, int flag, int b, uint32_t c, float f) {
    if (FLD(act, 0xB0, uint8_t) != 0)
        return 0;
    if (func_0052E8A0((int)FLD(act, 0x10, uint32_t)) != 0)
        return 0;
    int16_t id = FLD(act, 0x42, int16_t);
    if (FLD(data_007111A8, id * 16 + 4, uint32_t) & 0x100)
        return 0;
    void *machine = GPTR(act, 0x48, void);
    void *vt = GPTR(machine, 0, void);
    ((void (*)(void *))gp_ptr(FLD(vt, 0x20, uint32_t)))(machine);
    int v = func_0052E7D8((int)FLD(act, 0x10, uint32_t), b);
    func_001DD48C((int)FLD(act, 0x10, uint32_t), v, 1);
    int p = func_002D55D0((int)FLD(act, 0x48, uint32_t), flag != 0 ? 0x20 : 0x1F);
    if (p != 0) {
        void *blk = gp_ptr((uint32_t)p);
        FLD(blk, 0, uint32_t) = c;
        FLD(blk, 4, float) = f;
    }
    return 1;
}
