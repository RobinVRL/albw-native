/* USA 0060191C (EU 006018F4): one-instruction thunk `b 003E3C88` (GPU register read wrapper,
 * native in sdk/gfx.c), reached from the render/GPU path (route phase 1).
 * Bug: compile failure in the round-2 conversion (Ghidra inlined the target's body into the thunk
 * source -> "conflicting types for func_003E3C88") = tripwire stub at link time.
 * Verified: EU 006018F4 is the single instruction `b 0x3E3C68` (r0-r3 passed through, the
 * callee's r0 returned).  Confidence: high. */
#include <stdint.h>

uint32_t func_003E3C88(uint32_t reg, void *out, uint32_t size);

uint32_t func_0060191C(uint32_t reg, void *out, uint32_t size)
{
    return func_003E3C88(reg, out, size);
}
