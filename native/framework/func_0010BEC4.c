/* USA 0010BEC4 (EU 0010BEC4): StateMgrBase::setStateName(s32 idx, const sead::SafeString &name)
 *   (2,072 call sites in 231 caller files: every state machine names its states at construction)
 *   int f(StateMgrBase *this, u32 idx, const SafeString *name);
 *   e = this->names (+0x0C) + (idx < this->count (+0x08) ? idx : 0) * 0x24   (unsigned compare,
 *       out of range -> entry 0: sead Buffer::operator() fallback);
 *   entry = FixedSafeString<24> { vtbl, top +4, bufsize +8, chars };
 *   inline BufferedSafeString::copy: dst = e->top (read first); name->assure(); len = strlen
 *   capped at 0x40000 (0 if no terminator); if (e->bufsize <= len) len = bufsize - 1 (signed);
 *   name->assure(); memcpy(dst, name->top, len); dst[len] = 0.  r0 = memcpy's r0.
 * Round-2 Ghidra C: logic right, but returns `undefined8` (64-bit) where the 232 converted callers
 * declare `int`, and reads every pointer field as a native `int *`/`uint *` (64-bit unclean).
 * Prototype = callers' `extern int func_0010BEC4(int, uint, int *)`: `this` arrives as a 32-bit
 * int (taken as uint32_t, M64PTR-safe). Verified against EU 0010BEC4-0010BF58 instruction by
 * instruction. Confidence: high. */
#include "framework.h"

int func_0010BEC4(uint32_t self_w, uint32_t idx, void *name) {
    char *sm = gp_ptr(self_w);
    char *e = GPTR(sm, 0x0C, char);
    if (FLD(sm, 0x08, uint32_t) > idx)
        e += idx * 0x24;
    char *dst = GPTR(e, 0x04, char);
    return (int)fw_ss_copy(dst, &FLD(e, 0x08, int32_t), name);
}
