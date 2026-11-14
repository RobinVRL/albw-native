/* native/core string / random / hash helpers shared by sead_string.c, sead_random.c,
 * sead_hash.c (see README.md). Layouts (game memory, 4-byte words):
 *   sead::SafeStringBase<char>          {vtbl @0, mStringTop @4}
 *   sead::BufferedSafeStringBase<char>  {vtbl @0, mStringTop @4, s32 mBufferSize @8}
 *   sead::FixedSafeString<N>            Buffered + char mBuffer[N] @0xC
 * vtable slot +8 = assureTerminationImpl_ (SafeString: 006916EC `bx lr`; Buffered: 00691BD0). */
#ifndef ALBW_CORE_STR_H
#define ALBW_CORE_STR_H

#include "core.h"

#define SS_W(p, off) FLD(p, off, uint32_t)
#define SS_P(w) ((char *)gp_ptr(w))

/* sead's cMaximumLength loops: strlen that gives 0 when no NUL is found in [0, 0x40000]
 * (`add i, #1; cmp i, #0x40000; ble loop; ... mov i, #0`) */
static inline int32_t ss_len(const char *s) {
    int32_t i = 0;
    for (;;) {
        if (s[i] == 0) return i;
        if (++i > 0x40000) return 0;
    }
}

/* virtual assureTerminationImpl_ (vtable slot +8), called through the 4-byte vtable word */
typedef void (*ss_vfn)(void *self);
static inline void ss_assure(void *s) {
    uint32_t vt = SS_W(s, 0);
    GFN(ss_vfn, SS_W(SS_P(vt), 8))(s);
}

#endif
