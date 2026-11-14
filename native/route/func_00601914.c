/* USA 00601914 (EU 006018EC): one-instruction thunk `b 003E35E0` (gsp FlushDataCache(addr, size)
 * wrapper, native in sdk/gfx.c), reached from the render/GPU path (route phase 1).
 * Bug: compile failure in the round-2 conversion (Ghidra inlined the target's body into the thunk
 * source -> "conflicting types for func_003E35E0") = tripwire stub at link time.
 * Verified: EU 006018EC is the single instruction `b 0x3E35C0` (r0/r1 passed through, the
 * callee's r0 returned).  Confidence: high. */
#include <stdint.h>

uint32_t func_003E35E0(const void *addr, uint32_t size);

uint32_t func_00601914(const void *addr, uint32_t size)
{
    return func_003E35E0(addr, size);
}
