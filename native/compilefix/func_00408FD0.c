/* USA 00408FD0 (EU 00408FB0): sound callback forwarder: if (cb = this->+0x18)
 *   cb->vt[+8](cb, this, a, b, c, <6th>).
 * ARM: push {r3, r4, r5, lr}; str r3, [sp]; blx: the callee (the game's 002569FC) reads TWO stack
 * words, [sp] = c and [sp+4] = this function's saved r4 - which still holds the caller's r4 =
 * 0040DB4C's `this` (the sound object; EU 40DB30 `mov r4, r0`, unchanged to the call at 40DDE8).
 * The original relies on that pass-through. The port passes it explicitly: 0040DB4C
 * (native/compilefix/func_0040DB4C.c) adds its `this` as a trailing argument (ignored by other
 * implementations on i386). Without it 002569FC wrote through a garbage pointer (sound effects
 * crash, BOOT_LOG 160). Confidence: high for the ARM data flow. */
#include <stdint.h>

typedef void (*CbFn)(void *cb, void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t r4);

void func_00408FD0(char *self, uint32_t a, uint32_t b, uint32_t c, uint32_t caller_r4)
{
    char *cb = (char *)(uintptr_t)*(uint32_t *)(self + 0x18);
    if (!cb)
        return;
    CbFn fn = (CbFn)(uintptr_t)*(uint32_t *)((uintptr_t)*(uint32_t *)cb + 8);
    fn(cb, self, a, b, c, caller_r4);
}
