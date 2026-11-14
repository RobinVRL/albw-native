/* sead::SafeString / BufferedSafeString / FixedSafeString / HeapSafeString and the small
 * SafeString value helpers, hand-written from the EU disassembly (layouts: core_str.h).
 *
 * Every string loop has sead's 0x40000 cap (ss_len). Virtual assureTerminationImpl_ calls are
 * made through the object's 4-byte vtable word, in the ARM order (they write the terminating
 * NUL of a Buffered string, so their position relative to the reads matters). Copies use
 * memcpy where the ARM calls 0010E3C4 (memcpy; native/sdk/memory.c maps it to memcpy too).
 * Vtable words the constructors store come from the same literal-pool words the ARM loads
 * (DAT_<EU pool address>, defined in gamedata.s). */
#include "core_str.h"

/* literal-pool words holding vtable addresses (gamedata.s) */
extern uint32_t DAT_00689a38;   /* 006F7088 BufferedSafeStringBase<char> */
extern uint32_t DAT_0010be34;   /* 006F5BBC FixedSafeString<24> */
extern uint32_t DAT_00688f2c;   /* 006F5BF8 FixedSafeString<32> */
extern uint32_t DAT_00689040;   /* 006F5C98 FixedSafeString<64> */
extern uint32_t DAT_00688ff0;   /* 006F7088 BufferedSafeStringBase<char> */
extern uint32_t DAT_00688ff4;   /* 006F6C44 (FixedSafeString<64> base part) */
extern uint32_t DAT_00688ff8;   /* 006F5C98 FixedSafeString<64> */
extern uint32_t DAT_00689210;   /* 006F7088 BufferedSafeStringBase<char> */
extern uint32_t DAT_00689214;   /* 006F6AD8 HeapSafeString */

/* game functions called (native/sdk: memory.c 0010CEE0 operator new[](size, heap, align),
 * boot_extra.c 0010013C vsnprintf(buf, size, fmt, word-array args)) */
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
int32_t func_0010013C(char *buf, uint32_t size, const char *fmt, void *args);

/* ------------------------------------------------------------------ SafeString values */

/* USA 0010BB00 SafeString copy (operator=, 8 bytes: vtbl + mStringTop): dst[0..1] = src[0..1],
 * returns dst (r0 untouched). Callers `int f(undefined4 *, undefined4 *)`. Matched
 * (src/work8/opus_tiny/f10BB00.cpp). Confidence: high. */
uint32_t func_0010BB00(void *dst, const void *src) {
    uint32_t a = SS_W(src, 0), b = SS_W(src, 4);
    SS_W(dst, 0) = a;
    SS_W(dst, 4) = b;
    return gp_u32(dst);
}

/* USA 003D231C (EU 003D22F8): clear an 8-byte SafeString-like pair through 0058FB28
 * (`mov r1, #0; str r1, [r0]; str r1, [r0, #4]`), returns this. Callers `int f(undefined4 *)`.
 * Matched. Confidence: high. */
uint32_t func_003D231C(void *self) {
    SS_W(self, 0) = 0;
    SS_W(self, 4) = 0;
    return gp_u32(self);
}

/* USA 003D22CC (EU 003D22A8): src ? copy 8 bytes (0010BB00) : clear (0058FB28); returns this.
 * Callers `int f(undefined4 *, undefined4 *)`. Matched. Confidence: high. */
uint32_t func_003D22CC(void *self, const void *src) {
    if (src) func_0010BB00(self, src);
    else func_003D231C(self);
    return gp_u32(self);
}

/* USA 003D22F4 (EU 003D22D0): identical code to 003D22CC (separate copy). Matched.
 * Confidence: high. */
uint32_t func_003D22F4(void *self, const void *src) {
    return func_003D22CC(self, src);
}

/* USA 003D2288 (EU 003D2264) (out, obj, dst): if (dst) { tmp = copy-or-clear(obj + 0x20);
 * *dst = tmp (8 bytes) } then tail-falls into 003D22CC(out, obj + 0x20) and returns out.
 * Callers `int f(undefined4 *, int obj, undefined4 *)`: obj arrives as a 32-bit integer.
 * Ghidra (non-matching before). Confidence: high. */
uint32_t func_003D2288(void *out, uint32_t obj, void *dst) {
    uint32_t src = obj + 0x20;
    if (dst) {
        uint32_t tmp[2];
        func_003D22CC(tmp, src ? SS_P(src) : 0);
        func_0010BB00(dst, tmp);
    }
    return func_003D22CC(out, src ? SS_P(src) : 0);
}

/* ------------------------------------------------------------------ constructors */

/* USA 00689A2C (EU 00689A04) BufferedSafeStringBase<char>(char *buf, s32 size):
 * vtbl = 006F7088, top = buf, size = size; size <= 0 -> top = size = 0, else buf[size-1] = 0.
 * Returns this. Callers `int f(undefined4 *, undefined4 buf, int size)`: buf is a 32-bit word.
 * Matched (src/work7/gpt30/variants/689A2C). Confidence: high. */
uint32_t func_00689A2C(void *self, uint32_t buf, int32_t size) {
    SS_W(self, 4) = buf;
    FLD(self, 8, int32_t) = size;
    SS_W(self, 0) = DAT_00689a38;
    if (size <= 0) {
        SS_W(self, 4) = 0;
        SS_W(self, 8) = 0;
    } else {
        SS_P(SS_W(self, 4))[size - 1] = 0;
    }
    return gp_u32(self);
}

/* FixedSafeString<N>(): top = this + 0xC, size = N, top[N-1] = 0, top[0] = 0, vtbl = final
 * class vtable (the intermediate vtable loads in the ARM code are dead) */
static uint32_t fixed_ctor(void *self, int32_t n, uint32_t vtbl) {
    SS_W(self, 4) = gp_u32((char *)self + 0xC);
    FLD(self, 8, int32_t) = n;
    SS_P(SS_W(self, 4))[n - 1] = 0;
    SS_P(SS_W(self, 4))[0] = 0;
    SS_W(self, 0) = vtbl;
    return gp_u32(self);
}

/* USA 0010BDF0 FixedSafeString<24>::FixedSafeString() (passed to __aeabi_vec_ctor 00100118;
 * no direct caller). Ghidra. Confidence: high. */
uint32_t func_0010BDF0(void *self) { return fixed_ctor(self, 0x18, DAT_0010be34); }

/* USA 00688F10 (EU 00688EE8) FixedSafeString<32>::FixedSafeString(). Callers
 * `int f(undefined4 *)` (2). Ghidra. Confidence: high. */
uint32_t func_00688F10(void *self) { return fixed_ctor(self, 0x20, DAT_00688f2c); }

/* USA 00689024 (EU 00688FFC) FixedSafeString<64>::FixedSafeString(). Callers
 * `int f(undefined4 *)` (13). Ghidra. Confidence: high. */
uint32_t func_00689024(void *self) { return fixed_ctor(self, 0x40, DAT_00689040); }

/* inlined BufferedSafeStringBase::copy(src) of the copy constructors: dst = top read before
 * the first virtual call, len capped to size - 1, two assureTermination calls on src */
static int32_t buffered_copy_all(void *self, void *src) {
    char *dst = SS_P(SS_W(self, 4));
    ss_assure(src);
    int32_t len = ss_len(SS_P(SS_W(src, 4)));
    if (FLD(self, 8, int32_t) <= len) len = FLD(self, 8, int32_t) - 1;
    ss_assure(src);
    memcpy(dst, SS_P(SS_W(src, 4)), (uint32_t)len);
    dst[len] = 0;
    return len;
}

/* USA 00688F58 (EU 00688F30) FixedSafeString<64>::FixedSafeString(const SafeString &src):
 * top = this + 0xC, size = 0x40, vtbl = 006F7088, top[63] = 0, vtbl = 006F6C44, copy(src)
 * (no top[0] = 0 first), vtbl = 006F5C98. Returns this. Callers `int f(undefined4 *, int *)`.
 * Ghidra. Confidence: high. */
uint32_t func_00688F58(void *self, void *src) {
    SS_W(self, 4) = gp_u32((char *)self + 0xC);
    FLD(self, 8, int32_t) = 0x40;
    SS_W(self, 0) = DAT_00688ff0;
    SS_P(SS_W(self, 4))[0x3F] = 0;
    SS_W(self, 0) = DAT_00688ff4;
    buffered_copy_all(self, src);
    SS_W(self, 0) = DAT_00688ff8;
    return gp_u32(self);
}

/* USA 006890C8 (EU 006890A0) HeapSafeString(Heap *heap, const SafeString &src):
 * n = len(src) + 1; buf = new[](n, heap, 4) (0010CEE0); buf ? memset(buf, 0, n) : n = 0 (the
 * buffer word is then 0); size = len(src) + 1 (recomputed, not n), vtbl = 006F7088, top = buf;
 * size > 0 ? buf[size-1] = 0 : top = size = 0; vtbl = 006F6AD8; copy(src). Returns this.
 * (A failed allocation writes buf[size-1] at address size-1, as on the 3DS.)
 * Callers `int f(undefined4 *, int *heap, int *src)`. Ghidra. Confidence: high. */
uint32_t func_006890C8(void *self, void *heap, void *src) {
    ss_assure(src);
    int32_t n = ss_len(SS_P(SS_W(src, 4))) + 1;
    char *buf = func_0010CEE0((uint32_t)n, heap, 4);
    if (buf) memset(buf, 0, (uint32_t)n);
    ss_assure(src);
    int32_t size = ss_len(SS_P(SS_W(src, 4))) + 1;
    FLD(self, 8, int32_t) = size;
    SS_W(self, 0) = DAT_00689210;
    SS_W(self, 4) = gp_u32(buf);
    if (size > 0) {
        SS_P(gp_u32(buf) + (uint32_t)size - 1)[0] = 0;
    } else {
        SS_W(self, 4) = 0;
        SS_W(self, 8) = 0;
    }
    SS_W(self, 0) = DAT_00689214;
    buffered_copy_all(self, src);
    return gp_u32(self);
}

/* ------------------------------------------------------------------ Buffered members */

/* USA 00691BD0 (EU 00691BA8) BufferedSafeStringBase<char>::assureTerminationImpl_():
 * top[size - 1] = 0. Vtable slot +8 of 006F7088 (no direct caller). Matched.
 * Confidence: high. */
void func_00691BD0(void *self) {
    SS_P(SS_W(self, 4) + SS_W(self, 8) - 1)[0] = 0;
}

/* USA 00689894 (EU 0068986C) s32 BufferedSafeStringBase<char>::copy(const SafeString &src,
 * s32 len): dst = top (read first); len < 0 -> src.assure(), len = ss_len(src);
 * len >= size -> len = size - 1; src.assure(); memcpy(dst, src.top, len); dst[len] = 0;
 * returns len. Callers `int f(int self, int *src, uint len)` (32): self as a 32-bit integer.
 * Matched (src/work8/nm1/func_00689800.cpp); this version is 64-bit clean (the matched C++
 * falls back to Ghidra in the 64-bit build: vtable call). Confidence: high. */
int32_t func_00689894(uint32_t self_w, void *src, int32_t len) {
    char *self = SS_P(self_w);
    char *dst = SS_P(SS_W(self, 4));
    if (len < 0) {
        ss_assure(src);
        len = ss_len(SS_P(SS_W(src, 4)));
    }
    if (FLD(self, 8, int32_t) <= len) len = FLD(self, 8, int32_t) - 1;
    ss_assure(src);
    memcpy(dst, SS_P(SS_W(src, 4)), (uint32_t)len);
    dst[len] = 0;
    return len;
}

/* USA 00689A64 (EU 00689A3C) s32 BufferedSafeStringBase<char16>::copy(const WSafeString &src,
 * s32 len): as 00689894 with 16-bit units (the length loop reads halfwords, copies len * 2
 * bytes, terminates with a 0 halfword). Callers `int f(int self, int *src, int len)`. Matched.
 * Confidence: high. */
int32_t func_00689A64(uint32_t self_w, void *src, int32_t len) {
    char *self = SS_P(self_w);
    char *dst = SS_P(SS_W(self, 4));
    if (len < 0) {
        ss_assure(src);
        const uint16_t *s = (const uint16_t *)SS_P(SS_W(src, 4));
        len = 0;
        for (;;) {
            if (s[len] == 0) break;
            if (++len > 0x40000) { len = 0; break; }
        }
    }
    if (FLD(self, 8, int32_t) <= len) len = FLD(self, 8, int32_t) - 1;
    ss_assure(src);
    memcpy(dst, SS_P(SS_W(src, 4)), (uint32_t)len << 1);
    FLD(dst, (uint32_t)len << 1, uint16_t) = 0;
    return len;
}

/* USA 00689928 (EU 00689900) s32 BufferedSafeStringBase<char>::append(const SafeString &src,
 * s32 len) (= insertAt(-1, ...) inlined):
 *   buf = top (read before the call); this.assure(); cur = ss_len(top); at = max(cur, 0);
 *   len < 0 -> src.assure(), len = ss_len(src);
 *   len >= size - at -> len = size - at - 1; len <= 0 -> return 0;
 *   src.assure(); memcpy(buf + at, src.top, len); if (at + len > cur) buf[at + len] = 0;
 *   return len.
 * Ghidra typed it undefined8 (callers `int f(int *, int *, uint)`, 18 files). Ghidra.
 * Confidence: high. */
int32_t func_00689928(void *self, void *src, int32_t len) {
    char *buf = SS_P(SS_W(self, 4));
    ss_assure(self);
    int32_t cur = ss_len(SS_P(SS_W(self, 4)));
    int32_t at = cur;            /* cur + (-1) + 1 */
    if (at < 0) at = 0;
    if (len < 0) {
        ss_assure(src);
        len = ss_len(SS_P(SS_W(src, 4)));
    }
    int32_t room = FLD(self, 8, int32_t) - at;
    if (room <= len) len = room - 1;
    if (len <= 0) return 0;
    ss_assure(src);
    memcpy(buf + at, SS_P(SS_W(src, 4)), (uint32_t)len);
    if (at + len > cur) buf[at + len] = 0;
    return len;
}

/* USA 00111A20 s32 BufferedSafeStringBase<char>::formatV(const char *fmt, va_list args):
 * r = vsnprintf(top, size, fmt, args) (0010013C); r < 0 || r >= size -> top[size-1] = 0,
 * return size - 1; else return r. `args` is the ARM-style va_list (pointer to the argument
 * words). Callers `int f(int self, undefined4 fmt, uint *args)` (21): self and fmt as 32-bit
 * words. Matched (src/work7/gpt15/variants/00111A20). Confidence: high. */
int32_t func_00111A20(uint32_t self_w, uint32_t fmt, void *args) {
    char *self = SS_P(self_w);
    char *top = SS_P(SS_W(self, 4));
    int32_t size = FLD(self, 8, int32_t);
    int32_t r = func_0010013C(top, (uint32_t)size, SS_P(fmt), args);
    if (r < 0 || r >= size) {
        top[size - 1] = 0;
        return size - 1;
    }
    return r;
}

/* USA 003E6AA8 (EU 003E6A88) s32 snprintf-like (char *buf, u32 size, s32 maxLen,
 * const char *fmt, ...): size = min(size, maxLen + 1) (unsigned `movhi`), returns
 * vsnprintf(buf, size, fmt, &varargs) (0010013C).
 * LINK NOTE: all 4 call sites (003FF0D8 x2, 003FDC34, 00404360) push 1-3 variadic words on
 * the stack (`stm sp, {...}` / `str r0, [sp]` before the bl); the converted callers declare
 * `int f(int, uint, int, undefined4)` and pass none of them, so the formats read garbage
 * until those callers are fixed. The definition is variadic so fixed callers work: on i386
 * the va_list is the pointer to the argument words; on x86-64 the first 16 variadic words
 * are gathered as 32-bit integers (no double conversions: none in these formats).
 * Ghidra. Confidence: high (function), see note (callers). */
#include <stdarg.h>
#ifndef ALBW_LINK_GAME_003E6AA8   /* native/game/func_003E6AA8.c is the linked one */
int32_t func_003E6AA8(uint32_t buf, uint32_t size, int32_t maxlen, uint32_t fmt, ...) {
    uint32_t lim = (uint32_t)maxlen + 1;
    if (size > lim) size = lim;
    va_list ap;
    va_start(ap, fmt);
#if defined(__i386__)
    int32_t r = func_0010013C(SS_P(buf), size, SS_P(fmt), (void *)ap);
#else
    uint32_t words[16];
    for (int i = 0; i < 16; i++) words[i] = va_arg(ap, uint32_t);
    int32_t r = func_0010013C(SS_P(buf), size, SS_P(fmt), words);
#endif
    va_end(ap);
    return r;
}
#endif


/* ------------------------------------------------------------------ SafeString queries */

/* USA 00691884 (EU 0069185C) bool SafeStringBase<char>::isEqual(const SafeString &rhs):
 * this.assure() twice, rhs.assure(); same mStringTop -> 1; else compare signed chars up to
 * index 0x40000: mismatch -> 0, both NUL -> 1, cap reached -> 0. Callers `int f(int *, int *)`
 * (25). Matched; 64-bit clean version. Confidence: high. */
uint32_t func_00691884(void *self, void *rhs) {
    ss_assure(self);
    ss_assure(self);
    uint32_t a = SS_W(self, 4);
    ss_assure(rhs);
    uint32_t b = SS_W(rhs, 4);
    if (a == b) return 1;
    const int8_t *s = (const int8_t *)SS_P(SS_W(self, 4)), *t = (const int8_t *)SS_P(b);
    for (int32_t i = 0;;) {
        if (s[i] != t[i]) return 0;
        if (s[i] == 0) return 1;
        if (++i > 0x40000) return 0;
    }
}

/* the comparison inlined in findIndex / rfindIndex / include: SafeString(top + i) against
 * token for n = len(token) characters (the temporary's assureTermination is SafeString's
 * 006916EC `bx lr`: no effect, not called) */
static int ss_match_at(const char *at, void *token, int32_t n) {
    ss_assure(token);
    const int8_t *t = (const int8_t *)SS_P(SS_W(token, 4));
    const int8_t *s = (const int8_t *)at;
    if ((const void *)s == (const void *)t) return 1;
    if (n > 0x40000) n = 0x40000;
    else if (n <= 0) return 1;
    for (int32_t i = 0; i < n; i++) {
        if (s[i] == 0 && t[i] == 0) return 1;
        if (s[i] == 0 || t[i] == 0 || s[i] != t[i]) return 0;
    }
    return 1;
}

/* USA 006919D8 (EU 006919B0) s32 SafeStringBase<char>::findIndex(const SafeString &token):
 * first i in [0, len - tlen] where the token matches at top + i, else -1.
 * Callers `int f(int *, int *)` (8). Ghidra. Confidence: high. */
int32_t func_006919D8(void *self, void *token) {
    ss_assure(self);
    int32_t len = ss_len(SS_P(SS_W(self, 4)));
    ss_assure(token);
    int32_t tlen = ss_len(SS_P(SS_W(token, 4)));
    int32_t last = len - tlen;
    for (int32_t i = 0; i <= last; i++)
        if (ss_match_at(SS_P(SS_W(self, 4)) + i, token, tlen)) return i;
    return -1;
}

/* USA 00691568 (EU 00691540) s32 SafeStringBase<char>::rfindIndex(const SafeString &token):
 * last i from len - tlen down to 0 where the token matches, else -1 (len < tlen -> -1).
 * Callers `int f(int *, int *)` (4). Ghidra. Confidence: high. */
int32_t func_00691568(void *self, void *token) {
    ss_assure(self);
    int32_t len = ss_len(SS_P(SS_W(self, 4)));
    ss_assure(token);
    int32_t tlen = ss_len(SS_P(SS_W(token, 4)));
    for (int32_t i = len - tlen; i >= 0; i--)
        if (ss_match_at(SS_P(SS_W(self, 4)) + i, token, tlen)) return i;
    return -1;
}

/* USA 006916F0 (EU 006916C8) bool SafeStringBase<char>::include(const SafeString &token):
 * findIndex(token) != -1. Callers `int f(int *, int *)` (6). Ghidra. Confidence: high. */
uint32_t func_006916F0(void *self, void *token) {
    return func_006919D8(self, token) != -1;
}

/* USA 00688CA0 (EU 00688C78) s32 string tokenizer next(BufferedSafeString *out):
 * this = {?, SafeString *src @4, s32 pos @8, SafeString delimiters @0xC}.
 *   src.assure(); n = ss_len(src); pos < 0 || n < pos -> return 0;
 *   out.assure(); dst = out.top; k = 0;
 *   while ((c = src.top[pos]) != 0) { delims.assure(); if c is in delims -> break;
 *     dst[k++] = c; pos++; }            (delimiter scan: signed chars, cap 0x40000)
 *   dst[k] = 0; this.pos = pos + 1; return k.
 * No bound on `out` (as on the 3DS). Callers `int f(int self, int *out)` (48): self as a
 * 32-bit integer. Ghidra. Confidence: high. */
int32_t func_00688CA0(uint32_t self_w, void *out) {
    char *self = SS_P(self_w);
    void *src = SS_P(SS_W(self, 4));
    int32_t pos = FLD(self, 8, int32_t);
    ss_assure(src);
    int32_t n = ss_len(SS_P(SS_W(src, 4)));
    if (pos < 0 || n < pos) return 0;
    ss_assure(out);
    char *dst = SS_P(SS_W(out, 4));
    int32_t k = 0;
    for (;;) {
        const char *p = SS_P(SS_W(SS_P(SS_W(self, 4)), 4)) + pos;
        if (*p == 0) break;
        void *delims = self + 0xC;
        ss_assure(delims);
        int8_t c = (int8_t)*p;
        const int8_t *d = (const int8_t *)SS_P(SS_W(delims, 4));
        int hit = 0;
        for (int32_t i = 0;;) {
            if (d[i] == 0) break;
            if (d[i] == c) { hit = 1; break; }
            if (++i > 0x40000) break;
        }
        if (hit) break;
        dst[k] = (char)c;
        pos++;
        k++;
    }
    dst[k] = 0;
    FLD(self, 8, int32_t) = pos + 1;
    return k;
}
