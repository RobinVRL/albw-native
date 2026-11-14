/* USA 0065B158 <- EU 0065B130: state machine changeState(sm, newState) (the state-machine
 * object built by 0010A794; ~375 instantiations of this pattern exist in the game).
 *
 * Layout used (32-bit game layout):
 *   +0x00 u32 frame counter (reset to 0)     +0x04 s8 current state   +0x05 u8 previous state
 *   +0x08 u32 number of state-name entries   +0x0C entry array, 0x24 bytes each (polymorphic,
 *                                                   +4 = state name string)
 *   +0x10 model/animation object (optional)  +0x14 owner object
 *   +0x18 albw_pmf[] enter handlers          +0x20 albw_pmf[] exit handlers
 *
 *   if (cur != -1 && exit[cur] valid) exit[cur](owner adj, newState);
 *   prev = cur; cur = newState; counter = 0;
 *   if (model) { e = &entries[cur < n ? cur : 0]; e->vfunc[2](e);
 *                0010BEB4(model, SafeString(e->name)); }      (play the state's animation)
 *   if (enter[cur] valid) enter[cur](owner adj);              (tail call)
 *
 * What was wrong in Ghidra: both handler calls are indirect jumps through the PMF (blx r2 /
 * tail `bx r1`) and were emitted as `(*UNRECOVERED_JUMPTABLE)()` with NO arguments, so the
 * handlers natively received a garbage `this`.
 *
 * Verified against EU 0065B130-0065B26C:
 *  - exit call (0065B19C blx r2): r0 = owner(+0x14) + (adj >> 1), r1 = newState (r1 is never
 *    written before the blx); for a virtual PMF fn = *(vtable + ptr) (ldr r3,[r0]; ldr r2,[r2,r3]).
 *  - the validity test is the ARM ABI one: ptr != 0 || (adj & 1).
 *  - entry index: `cmp n, cur; ldrls` -> entries[0] when n <= (unsigned)cur, else entries[cur].
 *  - virtual call at 0065B1F0: slot +8 of the entry's vtable, r0 = entry only.
 *  - SafeString on the stack: {data_006F5988 (sead::SafeString vtable), entry+4 string}.
 *  - enter tail call (0065B264 bx r1): r0 = owner adj; r1..r3 hold scratch (fn, index/vtable,
 *    owner), so only `this` is an argument.
 * Confidence: high. */
#include "robust_sm.h"

void func_0065B158(char *sm, uint32_t newState) {
    albw_sm_change_state(sm, newState);
}
