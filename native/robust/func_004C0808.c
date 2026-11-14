/* USA 004C0808 <- EU 004C07E0: thin wrapper that forwards its four core arguments and its
 * float argument (s0) to 004C1194 with an extra stack argument 0:
 *     004C1194(a0, a1, a2, a3, 0, f);
 *
 * What was wrong: Ghidra did not see the float parameter (it arrives in s0, which the wrapper
 * never touches), so the converted wrapper passed an uninitialised `in_s0`. The two callers
 * (00607020: f = 1.0, 00607C9C: f = 0.0, both `vldr s0` right before the bl) also dropped it in
 * their Ghidra C; they are rewritten in native/robust/func_00607020.c / func_00607C9C.c.
 * Signature: float last, matching the order of 004C1194's converted prototype
 * (int,int,int,int,uint,float) so the i386 stack layout lines up.
 *
 * Verified against EU 004C07E0-004C07F0: push {r3,lr}; ip = 0; [sp] = ip (5th argument);
 * bl 004C116C (= USA 004C1194); pop. r0-r3 and s0 pass through unchanged. Return: none used
 * (004C1194 is void).
 * Confidence: high. */
#include "robust.h"

void func_004C1194(void *a0, int32_t a1, void *a2, int32_t a3, uint32_t a4, float f);

void func_004C0808(void *a0, int32_t a1, void *a2, int32_t a3, float f) {
    func_004C1194(a0, a1, a2, a3, 0, f);
}
