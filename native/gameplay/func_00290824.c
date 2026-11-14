/* USA 00290824 <- EU 0029084C: player placement on a special floor (action 0x3F request):
 *   g = *data_00709DF8;
 *   if (g[0x18] == 0x16 && *(u32 *)(g + 0x1C) == 1) {
 *     pl = act->player [0x10];
 *     if (*(u32 *)(pl + 0x5B0) == 0x3F800000 && act->id [0x42, u16] != 0x3F) {
 *       Vec3 p = { pl[0x3D0], h, pl[0x3D8] };       (player x/z, height = the float argument)
 *       001DE378(pl, &p, pl[0x3E8]);
 *       002D55D0(act->machine [0x48], 0x3F);
 *     }
 *   }
 *   return 0;
 * The +0x5B0 test is an INTEGER compare of the float's bits with 1.0f (cmp r1, #0x3f800000).
 * Reached by fall-through from 0029081C.
 * What was wrong: Ghidra signature (int) dropped s0, the height written into the position.
 * Verified against EU 0029084C-002908D8 (the 16-byte stack Vec3 at sp; sp+4 is overwritten
 * by s0 after the stm). Confidence: high. */
#include "gameplay.h"

extern uint32_t data_00709DF8;
int func_001DE378(int player, uint32_t *pos, uint32_t arg);
int func_002D55D0(int machine, uint32_t action);

int func_00290824(void *act, float h) {
    char *g = (char *)gp_ptr(data_00709DF8);
    if (FLD(g, 0x18, uint8_t) != 0x16 || FLD(g, 0x1C, uint32_t) != 1)
        return 0;
    char *pl = GPTR(act, 0x10, char);
    if (FLD(pl, 0x5B0, uint32_t) != 0x3F800000u)
        return 0;
    if (FLD(act, 0x42, uint16_t) == 0x3F)
        return 0;
    uint32_t p[4];
    p[0] = FLD(pl, 0x3D0, uint32_t);
    p[1] = gp_f2u(h);
    p[2] = FLD(pl, 0x3D8, uint32_t);
    p[3] = 0;   /* unused stack word (uninitialised on ARM) */
    func_001DE378((int)gp_u32(pl), p, FLD(pl, 0x3E8, uint32_t));
    func_002D55D0((int)FLD(act, 0x48, uint32_t), 0x3F);
    return 0;
}
