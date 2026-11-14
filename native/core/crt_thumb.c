/* The Thumb part of the game's armcc C library (USA = EU addresses 0x00100070..0x00100B84) that
 * the game calls directly. None of these has a source today (no Ghidra dump: Ghidra analysed
 * the region as ARM), so every one is an UNDEFINED symbol at link (build/undefined.txt) and
 * ends up as a tripwire stub; vec_dtor alone has 17 converted caller files. Hand-written from
 * the EU disassembly in Thumb mode (armdis.py ADDR N t).
 *
 * Not here (dead in the native build): the printf engine internals 00100186..00100AC4 that
 * only the formatter 0010013C (native/sdk/boot_extra.c) reaches, and the exception-allocation
 * helpers 00100070/00100078/001000C0 (reached only from 001041E4, C++ exception runtime). */
#include <stdarg.h>
#include "core.h"

/* ------------------------------------------------------------------ C++ ABI arrays */

typedef void (*core_xtor_fn)(void *obj);
typedef void (*core_cctor_fn)(void *dst, void *src);

/* USA 00100950 __aeabi_vec_dtor(void *arr, dtor, u32 size, u32 count) -> arr - 8 (the cookie):
 *   if (count) { p = arr + size * count; do { p -= size; dtor(p); } while (p != arr); }
 * The destructor is called unconditionally (no null test); elements in reverse order; the
 * product size * count wraps as `muls`. Callers `int f(int, undefined *, int, int)` (17 files):
 * array as a 32-bit integer. Confidence: high. */
uint32_t func_00100950(uint32_t arr, void *dtor, uint32_t size, uint32_t count) {
    if (count) {
        uint32_t p = arr + size * count;
        do {
            p -= size;
            ((core_xtor_fn)dtor)(gp_ptr(p));
        } while (arr != p);
    }
    return arr - 8;
}

/* USA 00100A86 __aeabi_vec_cctor_nocookie_nodtor(void *dst, void *src, u32 size, u32 count,
 * cctor) -> dst: if (cctor) for (count times) { cctor(d, s); d += size; s += size; } (the
 * fifth argument is the first stack word; loop `subs r4, #1; bhs`). Callers `int f(int, int,
 * int, int, undefined *)` (4 files). Confidence: high. */
uint32_t func_00100A86(uint32_t dst, uint32_t src, uint32_t size, uint32_t count, void *cctor) {
    if (cctor) {
        uint32_t d = dst, s = src;
        while (count--) {
            ((core_cctor_fn)cctor)(gp_ptr(d), gp_ptr(s));
            d += size;
            s += size;
        }
    }
    return dst;
}

/* ------------------------------------------------------------------ errno */

/* errno word (__aeabi_errno_addr 003010C4: `ldr r0, =data_007A9140; bx lr`) */
extern uint32_t data_007A9140;

/* USA 00100986 __set_errno(int v): *__aeabi_errno_addr() = v; r0 = the errno address at return.
 * Callers `int f(undefined4)` (9 files). Confidence: high. */
uint32_t func_00100986(uint32_t v) {
    data_007A9140 = v;
    return gp_u32(&data_007A9140);
}

/* USA 00100974 ARM->Thumb veneer (`add ip, pc, #0xB; bx ip` -> Thumb 00100986): the same
 * setter (one caller: sqrtf 00601AA0 sets EDOM = 1 on a NaN result). The getter at Thumb
 * 0010097C has no direct caller. Confidence: high. */
uint32_t func_00100974(uint32_t v) { return func_00100986(v); }

/* ------------------------------------------------------------------ ctype */

/* USA 001006E0 tolower(int c): table = *(__rt_ctype_table() = locale block 007A912C + 4);
 * returns c + 0x20 when table[c] has bit 4 (upper case), else c. The table pointer is set by
 * the C library's start-up (data in .bss), which the native entry does not run, so the "C"
 * locale table is used: bit 4 is set exactly for 'A'..'Z'. c outside 0..255 reads outside the
 * table on ARM (EOF = -1 reads the table's leading zero entry): returned unchanged here.
 * Callers `int f(int)` (4 files: 006875AC, 006875B0, 00687850, 00687854). Confidence: high
 * for 0..255 / EOF in the C locale. */
int32_t func_001006E0(int32_t c) {
    return (c >= 'A' && c <= 'Z') ? c + 0x20 : c;
}

/* ------------------------------------------------------------------ narrow strings */

/* USA 00100858 memcmp(a, b, n): word loop while both are 4-aligned and n >= 4; on a differing
 * word the difference of the first differing byte (little-endian = lowest address first);
 * then a byte loop: difference of the first differing byte (unsigned), 0 if equal. Callers
 * `int f(uint *, uint *, uint)` (5 files). Confidence: high. */
int32_t func_00100858(const void *a, const void *b, uint32_t n) {
    const uint8_t *x = a, *y = b;
    for (; n; n--, x++, y++)
        if (*x != *y) return (int32_t)*x - (int32_t)*y;
    return 0;
}

/* USA 00100834 strncat(dst, src, n): append at most n bytes of src (stopping after its NUL),
 * then a NUL when n ran out first. Returns r0 unchanged = dst. Callers `int f(int, char *, int)`
 * (1 file): dst as a 32-bit integer. Confidence: high. */
uint32_t func_00100834(uint32_t dst, const char *src, uint32_t n) {
    char *d = gp_ptr(dst);
    while (*d) d++;
    while (n--) {                         /* `subs r2, #1; bhs` */
        char c = *src++;
        *d++ = c;
        if (!c) return dst;
    }
    *d = 0;
    return dst;
}

/* ------------------------------------------------------------------ wide (UTF-16) strings */

/* USA 00100910 wcslen(const u16 *s) (16-bit units). Callers `int f(short *)` (6 files).
 * Confidence: high. */
uint32_t func_00100910(const uint16_t *s) {
    uint32_t n = 0;
    while (s[n]) n++;
    return n;
}

/* USA 001008E8 wcsncmp(a, b, n): stops at n, at a mismatch or at a NUL in a; returns
 * (u16)*a - (u16)*b there, 0 when n runs out. Callers `int f(ushort *, ushort *, int)`.
 * Confidence: high. */
int32_t func_001008E8(const uint16_t *a, const uint16_t *b, uint32_t n) {
    for (; n; n--, a++, b++)
        if (!*a || *a != *b) return (int32_t)*a - (int32_t)*b;
    return 0;
}

/* USA 001008CC wcsncpy(dst, src, n): copies up to n units, padding with NULs after src's NUL
 * (src stops advancing at its NUL). Returns dst. Callers `int f(short *, short *, int)`.
 * Confidence: high. */
uint32_t func_001008CC(uint16_t *dst, const uint16_t *src, uint32_t n) {
    uint16_t *d = dst;
    while (n--) {
        uint16_t c = *src;
        *d++ = c;
        if (c) src++;
    }
    return gp_u32(dst);
}

/* ------------------------------------------------------------------ swprintf */

/* native/sdk/boot_extra.c: vswprintf with an ARM-style argument word array */
int32_t func_001006FC(uint16_t *buf, uint32_t n, const uint16_t *fmt, void *args);

/* Collect the variadic arguments of a printf-style (UTF-16) format into ARM argument words,
 * by conversion type: integers / chars / pointers / strings as one 32-bit word (pointers are
 * game words: read as unsigned int, which also covers converted callers that pass addresses as
 * int), ll/j/q/L-integers as two words, floating conversions as a double (two words). */
static uint32_t core_va_words(const uint16_t *fmt, va_list ap, uint32_t *w, uint32_t max) {
    uint32_t k = 0;
    for (const uint16_t *p = fmt; *p && k + 2 <= max; p++) {
        if (*p != '%') continue;
        p++;
        if (*p == '%') continue;
        while (*p == '-' || *p == '+' || *p == ' ' || *p == '#' || *p == '0') p++;
        if (*p == '*') { w[k++] = va_arg(ap, unsigned int); p++; }
        while (*p >= '0' && *p <= '9') p++;
        if (*p == '.') {
            p++;
            if (*p == '*') { w[k++] = va_arg(ap, unsigned int); p++; }
            while (*p >= '0' && *p <= '9') p++;
        }
        int big = 0;
        while (*p == 'h' || *p == 'l' || *p == 'L' || *p == 'q' || *p == 'j' || *p == 'z' || *p == 't') {
            if ((*p == 'l' && p[1] == 'l') || *p == 'q' || *p == 'j' || *p == 'L') { big = 1; if (*p == 'l') p++; }
            p++;
        }
        if (!*p) break;
        switch (*p) {
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double d = va_arg(ap, double);
            uint64_t u; memcpy(&u, &d, 8);
            w[k++] = (uint32_t)u; w[k++] = (uint32_t)(u >> 32);
            break;
        }
        default:
            if (big && *p != 's' && *p != 'c' && *p != 'p' && *p != 'n') {
                unsigned long long v = va_arg(ap, unsigned long long);
                w[k++] = (uint32_t)v; w[k++] = (uint32_t)(v >> 32);
            } else {
                w[k++] = va_arg(ap, unsigned int);
            }
        }
    }
    return k;
}

/* USA 00100744 swprintf(u16 *buf, u32 n, const u16 *fmt, ...): formats through the wide
 * engine with the end pointer buf + n - 1 (n != 0), NUL-terminates, returns the length, or -1
 * when it does not fit (length >= n; also for n == 0). Same contract as 001006FC (native), which
 * does the formatting here. One caller (003DA934: "ngword_%d.txt", one int); its converted
 * declaration is the fixed `int f(int, uint, undefined4, uint)` (4 words, identical to this
 * variadic definition in the i386 cdecl and x86-64 integer-register conventions).
 * Confidence: high (format coverage: the conversions of boot_extra.c). */
int32_t func_00100744(uint32_t buf, uint32_t n, uint32_t fmt, ...) {
    uint32_t words[64];
    va_list ap;
    va_start(ap, fmt);
    core_va_words(gp_ptr(fmt), ap, words, 64);
    va_end(ap);
    return func_001006FC(gp_ptr(buf), n, gp_ptr(fmt), words);
}
