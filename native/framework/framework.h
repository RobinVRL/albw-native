/* Shared helpers for the hand-written game-framework functions in native/framework/
 * (state machines, task framework, actor base). See README.md.
 *
 * Conventions (same as native/gameplay, whose helpers are reused):
 *  - one strong func_<USA> per file, exact behaviour of the ARM code (EU addresses noted);
 *  - game objects are read at their ROM byte offsets with FLD/GPTR; a pointer stored inside game
 *    memory is a 32-bit word (gp_ptr/gp_u32/GPTR_OF), never a native pointer field;
 *  - signatures keep the classes the round-2 converted callers declare: an `int` parameter that
 *    is really a pointer is taken as uint32_t and converted with gp_ptr (on x86-64 the upper half
 *    of a 32-bit argument register is undefined); returns are int/uint32_t (callers read eax);
 *  - callees are declared with POINTER parameters (safe whether the definition reads a 32-bit or
 *    a 64-bit register: every game address is below 2 GiB) and INTEGER returns (safe whether the
 *    definition returns in eax or rax);
 *  - virtual calls go through the 4-byte vtable words (GFN). */
#ifndef ALBW_FRAMEWORK_H
#define ALBW_FRAMEWORK_H

#include <stdint.h>
#include <string.h>
#include "gptr.h"
#include "../gameplay/gameplay.h"

/* vtable word at byte offset `slot` of game object `obj` */
static inline uint32_t fw_vslot(const void *obj, uint32_t slot) {
    return FLD(GPTR(obj, 0, char), slot, uint32_t);
}
/* obj->vt[slot](obj) */
typedef uint32_t (*fw_vfn0)(void *self);
static inline uint32_t fw_vcall0(void *obj, uint32_t slot) {
    return GFN(fw_vfn0, fw_vslot(obj, slot))(obj);
}

/* sead::SafeStringBase<char> in game memory: { vtable word, string-top word }.
 * vt+8 = assureTerminationImpl_(this). */
typedef struct fw_SafeString {
    gptr_t vtbl;
    gptr_t top;
} fw_SafeString;
_Static_assert(sizeof(fw_SafeString) == 8, "SafeString is two game words");

/* sead::FixedSafeString<64> as the game builds it on the stack:
 * { vtable, top -> buf, buffer size 0x40, char buf[0x40] } (0x4C bytes) */
typedef struct fw_FixedSafeString64 {
    gptr_t vtbl;
    gptr_t top;
    int32_t size;
    char buf[0x40];
} fw_FixedSafeString64;
_Static_assert(sizeof(fw_FixedSafeString64) == 0x4C, "FixedSafeString<64> layout");

static inline void fw_ss_assure(fw_SafeString *s) { fw_vcall0(s, 8); }

/* sead::SafeStringBase<char>::calcLength inline expansion: length of the string, 0 when no
 * terminator is found within 0x40000 characters (cMaximumLength) */
static inline int32_t fw_ss_calc_len(const char *p) {
    int32_t n = 0;
    while (n <= 0x40000) {
        if (p[n] == 0)
            return n;
        n++;
    }
    return 0;
}

uint32_t func_0010E3C4(void *dst, const void *src, uint32_t n); /* memcpy (native/sdk/memory.c) */

/* sead::BufferedSafeString::copy(src) inline expansion as the game compiles it:
 *   src->assure(); len = calcLength; if (bufsize <= len) len = bufsize - 1;   (bufsize read
 *   after the first virtual call) src->assure(); memcpy(dst, src->top, len); dst[len] = 0;
 * returns memcpy's r0. */
static inline uint32_t fw_ss_copy(char *dst, const int32_t *bufsize, fw_SafeString *src) {
    fw_ss_assure(src);
    int32_t len = fw_ss_calc_len(GPTR_TO(const char, src->top));
    if (*bufsize <= len)
        len = *bufsize - 1;
    fw_ss_assure(src);
    uint32_t r = func_0010E3C4(dst, GPTR_TO(const void, src->top), (uint32_t)len);
    dst[len] = 0;
    return r;
}

#endif
