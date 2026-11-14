/* USA 0036EAF8 <- EU 0036EAD4: speed factor of the turn controller (0x36Dxxx-0x36Fxxx family):
 *     return (actor->[0xA88]->f[0x74] - 0.0f) / 1.3f * 2.8f;
 *
 * What was wrong: Ghidra decompiled it as `void func_0036EAF8(void) { return; }`. The function
 * reads its input from r1 (the actor; r0 = the controller is unused) and returns a float in s0,
 * none of which Ghidra modelled, so every caller (0036DF60, 0036E2F4, 0036E560, 0036E740,
 * 0036E93C, 0036EB28, 0036F2A0) read an uninitialised `in_s0` after the call.
 *
 * Disassembly (EU):
 *   0036EAD4 ldr   r0, [r1, #0xa88]
 *   0036EAD8 vldr  s1, =0.0          ; 0036EADC vldr s2, =1.3
 *   0036EAE0 vldr  s0, [r0, #0x74]
 *   0036EAE4 vsub  s1, s0, s1        ; 0036EAE8 vdiv s0, s1, s2
 *   0036EAEC vldr  s1, =2.8          ; 0036EAF0 vmul s0, s0, s1 ; bx lr
 * Convention: r0 = controller (unused), r1 = actor; float result in s0.
 * Confidence: high (straight-line code, fully read). */
#include "robust.h"

float func_0036EAF8(void *ctrl, void *actor) {
    (void)ctrl;
    char *o = FLD(actor, 0xA88, char *);
    float v = FLD(o, 0x74, float);
    return (v - 0.0f) / 1.3f * 2.8f;
}
