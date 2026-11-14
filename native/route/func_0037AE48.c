/* USA 0037AE48 (EU 0037AE24): TaskFileFormatCheck::calc (vtable 006E5B40 +0x64).
 * Route: first task the root runs after the Prepare task (save-data format check, 0014ADB4 ->
 * 00688458 -> ctor 0037B310); its state machine decides between "format/create save" and
 * handing over to the title (TaskFileSelect).
 * Bug: the inlined StateMgr::exec (StateMgr at this+0xC0) calls the state handler through an ARM
 * pointer-to-member; Ghidra printed it as `(*(code *)*piVar3)()` with no argument, so the
 * handler ran with a garbage `this` (r0 is the adjusted owner on ARM).
 * Verified instruction by instruction against EU 0037AE24..0037AEA4: 002DF5C4(*data_00712588),
 * exec table +0xDC indexed by s8 +0xC4, owner +0xD4, ++counter +0xC0, anim +0xD0 ->
 * tail call 00352210(anim, 1, (float)(u32)counter).  Confidence: high. */
#include "route.h"

extern uint32_t data_00712588[];
int func_002DF5C4(int obj);

void func_0037AE48(char *self)
{
    func_002DF5C4((int)RF(data_00712588, 0, uint32_t));
    route_statemgr_exec(RAT(self, 0xC0));
}
