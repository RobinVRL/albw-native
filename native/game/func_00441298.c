/* USA 00441298 (EU 00441278): reset/teardown step of an object (called from 0012C7F8 when the
 * opening's first event advances):
 *   func_0066F3FC(this + 0xE4, 0);
 *   for (i = 0; i < 4; i++) ((void)this->m13C[i]);   (the loaded word feeds an inlined empty
 *                                                      call: EU 004412A0 `mov r0, r0`)
 *   then falls through into the next function, 004412DC (EU 004412BC), with r0 = this
 *   (EU 004412B0..004412B8: mov r0, r5; pop {r4-r6, lr}; `mov r0, r0` where the tail branch was).
 * The matched source called placeholders func_leaf / func_tail (link tripwires, boot stop 110).
 * Rewritten from the EU disassembly. Confidence: high. */
#include <stdint.h>

extern void func_0066F3FC(void *p, int v);
extern void func_004412DC(void *self);

void func_00441298(void *self)
{
    func_0066F3FC((uint8_t *)self + 0xE4, 0);
    func_004412DC(self);
}
