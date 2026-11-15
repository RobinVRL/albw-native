/* func_getInfo51C: placeholder callee name in the matched source of USA 0046420C (EU 004641E4).
 * The ARM has no call there: it is the inlined field read `mgr->+0x51C` (EU 00464268..00464274:
 * ldr r0, =00709F30; ldr r0, [r0]; ldr r0, [r0, #0x51C]; movs r5, r0). Defined with that body so
 * the link tripwire goes (PLAN symbol list). Confidence: high. */
#include <stdint.h>

void *func_getInfo51C(void *mgr)
{
    return (void *)(uintptr_t)*(uint32_t *)((uint8_t *)mgr + 0x51C);
}
