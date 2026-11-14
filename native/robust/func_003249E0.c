/* USA 003249E0 <- EU 003249BC: lazily create the actor's effect/emitter object (slot r1):
 *   if (self->[0x40C] == NULL) {
 *       self->[0x40C] = 0054D964(self, index);
 *       004356B4(self->[0x40C]);
 *       self->[0x420] = self->[0x40C];
 *   }
 * Callers pass index in r1 (all seen pass 0: 001374E0, 0014509C, 00173A44, 0017D7EC).
 *
 * What was wrong: Ghidra read an `in_s0` and forwarded it to 0054D964 as a float parameter. The
 * ARM code never touches s0; s0 merely reaches 0054D964 because it is a pass-through. 0054D964
 * does not take a float either: its Ghidra `fparam_0` is really the s0 RETURN of 0054DE54
 * (which Ghidra typed `void func_0054DE54(void)`), read in its switch cases 6/7/8. So s0 is
 * not an input of this function. 0054D964 and 0054DE54 have their own rewrites in
 * native/robust (2-argument 0054D964; 0054DE54 returns its float).
 *
 * Verified against EU 003249BC-003249F0 (r5 = self+0x40C re-read after the call; r0 of
 * 0054D93C is passed straight to 004356B4). Confidence: high (for this function). */
#include "robust.h"

void *func_0054D964(void *self, uint32_t index);       /* native/robust */
void func_004356B4(void *obj);

void func_003249E0(char *self, uint32_t index) {
    if (FLD(self, 0x40C, void *) == NULL) {
        void *o = func_0054D964(self, index);
        FLD(self, 0x40C, void *) = o;
        func_004356B4(o);
        FLD(self, 0x420, void *) = FLD(self, 0x40C, void *);
    }
}
