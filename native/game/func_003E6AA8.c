/* USA 003E6AA8 (EU 003E6AA8): snprintf-style helper of nw::lyt (and others):
 *   int f(char *buf, u32 size, int max_len, const char *fmt, ...)
 *   size = min(size, max_len + 1); return vsnprintf(buf, size, fmt, <the variadic args>)
 * The ARM passes the variadic arguments on the stack (caller stores them at its sp); Ghidra saw
 * them as the caller's locals and `&stack0x00000000` here, so natively the format read garbage
 * (crash in snprintf from 003FF0D8). Native: a real C variadic function formatting with the host
 * vsnprintf (the game's 0010013C has C99 semantics, same result). Callers must pass the variadic
 * arguments (see 003FF0D8). Confidence: high. */
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

int32_t func_003E6AA8(char *buf, uint32_t size, int32_t max_len, const char *fmt, ...)
{
    if ((uint32_t)max_len + 1u < size)
        size = (uint32_t)max_len + 1u;
    va_list ap;
    va_start(ap, fmt);
    int32_t r = vsnprintf(buf, size, fmt, ap);
    va_end(ap);
    return r;
}
