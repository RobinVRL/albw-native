/* USA 004FB468 <- EU 004FB440: EnemyBase::resetAnim()   (77 caller files)
 *   0016A02C(self[0x410], -1, -1, 0)                     (SkelAnim: reset bindings)
 *   req = Req5C(&stack, 0, 0, 0) (002C11E8, 0x5C AnimReq); 0016898C(self[0x410], req)
 *   self[0x59C] |= 0x100
 * The ARM passes 002C11E8's r0 (its this = the stack buffer) to 0016898C; here the buffer
 * address itself: native/robust/func_002C11E8.c is `void`, and link.sh makes no returns-this
 * thunk for native definitions, so a caller using its r0 (the converted Ghidra 004FB468 does)
 * reads garbage.
 * Matched source rejected by the matched-ABI check -> Ghidra C. Verified EU 004FB440-004FB498.
 * Confidence: high (flow), medium (names). */
#include "hot.h"

void func_0016A02C(void *self, int32_t a, int32_t b, void *c);   /* native/robust prototype */
void func_002C11E8(char *self, uint32_t first, uint32_t v54, uint8_t v58);
int func_0016898C(uint32_t self, uint32_t req);

int func_004FB468(uint32_t self_w)
{
    char *self = P(self_w);
    uint32_t req[0x5C / 4];
    func_0016A02C(P(W(self, 0x410)), -1, -1, 0);
    func_002C11E8((char *)req, 0, 0, 0);
    func_0016898C(W(self, 0x410), gp_u32(req));
    W(self, 0x59C) |= 0x100;
    return 0;
}
