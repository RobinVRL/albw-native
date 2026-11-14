/* USA 0025DA04 (EU 0025DA2C): calc of a task (vtable slot at 006D6BF4; same StateMgr-at-+0xC8
 * layout as the other TaskBase-derived scene tasks): 001E30D0(this), 0014AC28(seq, 1),
 * 00122C78(*(this+0xF0)), StateMgr::exec, then tail-calls the virtual +8 of *(this+0xF4).
 * Route: main-game side scene task (reached from TaskMainGame's call graph).
 * Bug: the inlined StateMgr::exec called the state handler with no `this` (Ghidra
 * `(*(code *)*piVar3)()`); 00122C78 got Ghidra's phantom extraout_r1/param_3 (r1/r2 are dead
 * scratch left by 0014AC28 on ARM: passed as 0).
 * Verified against EU 0025DA2C..0025DAC8 instruction by instruction (state s8 +0xCC, exec table
 * +0xE4, owner +0xDC, counter +0xC8, anim +0xD8, `bx r1` tail call with r0 = *(this+0xF4)).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_00712468[];
int func_001E30D0(char *self);
int func_0014AC28(int seq, int a);
void func_00122C78(int *obj, uint32_t a, uint32_t b);

int func_0025DA04(char *self)
{
    func_001E30D0(self);
    func_0014AC28((int)data_00712468[0], 1);
    func_00122C78((int *)RP(self, 0xF0), 0, 0);
    route_statemgr_exec(RAT(self, 0xC8));
    char *o = RP(self, 0xF4);
    return RVFN(int (*)(char *), o, 8)(o);
}
