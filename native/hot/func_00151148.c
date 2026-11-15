/* USA 00151148 <- EU 00151148: Obj410::setListed(s8 on)   (195 caller files)
 *   return 002C34A4(self[0x1C], on)   (tail call: link / unlink the object's node in one of
 *   two manager lists, *data_0070BCD0 + 0x118 + 0x10 * (s8)obj[0xA2], when (s8)obj[0xA1] != on)
 * 002C34A4 returns nothing and leaves s0 untouched, so on ARM s0 at return is the CALLER's own
 * s0 (1 of 209 sites reads s0: it reads back its own value on ARM). Returns an int (0), not a
 * float: on i386 a float return is pushed on the x87 stack, and every caller that ignores the
 * result through an int/void view - directly, through a tail position (004BFD14 returns this
 * call's result and is reached through a vtable, 26 calls per file-select frame) or a virtual
 * call - left it pushed until the x87 stack overflowed and all float returns read NaN (boot
 * stop 95). Callers that declare `float` (Ghidra's in_s0) now pop an empty register: masked,
 * the value is garbage as on ARM. On x86-64 the float went to xmm0 and was simply dropped.
 *
 * Why it is here: matched source rejected by the matched-ABI check -> Ghidra C. Ghidra vs ARM:
 * correct apart from the undefined float return. Verified EU 00151148-0015114C.
 * Confidence: high (flow), low (name). */
#include "hot.h"

int func_002C34A4(int obj, int on);

int func_00151148(uint32_t self_w, int on)
{
    func_002C34A4((int)W(P(self_w), 0x1C), on);
    return 0;
}
