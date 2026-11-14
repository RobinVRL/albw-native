/* USA 00149D90 (EU 00149D90): entry `ldr r0, [r0, #0x34]` that falls through into 00149D98
 * (camera look-at update, see func_00149D98.c); called by 004ED740 (main-game frame).
 * Route: the gameplay camera, every frame.
 * Bug: its Ghidra body is the merged copy of 00149D98 with the lost s1/s2 of 004997A0.
 * Verified: EU 00149D90 = `ldr r0, [r0, #0x34]`, 00149D94 = `mov r0, r0`, then 00149D98.
 * Confidence: high. */
#include "route.h"

void func_00149D98(char *self, char *target);

void func_00149D90(char *owner, char *target)
{
    func_00149D98(RP(owner, 0x34), target);
}
