/* USA 004994B0 (EU 00499488): sead::BufferedSafeString::format(this, fmt, ...) ->
 * length: vsnprintf(this->buf (+4), this->size (+8), fmt, args); on overflow / error the last
 * byte is cleared and size - 1 returned. On ARM the function stores r2 / r3 just below the
 * caller's stack arguments so the va_list is one contiguous word array; the Ghidra text copied
 * them into a local array, so a third and later argument was read from the wrong place (the
 * "%s_%s_%s" sound-effect name of the file menu crashed when name entry opened, boot stop 99).
 * Native: on i386 cdecl the variadic words follow param_3 contiguously, the ARM va_list shape
 * that 0010013C expects (as 00689650). Confidence: high. */
#include <stdarg.h>
#include <stdint.h>
#include <string.h>

extern int32_t func_0010013C(char *buf, uint32_t size, const char *fmt, void *args);

/* The words after fmt are the ARM r2, r3, stack... arguments. They are taken through a real
 * va_list: the earlier form passed &p3 (address of a named parameter) and relied on the next
 * argument following it in memory, which the C compiler does not guarantee (AddressSanitizer:
 * stack-buffer-overflow reading the "%s%02d" second argument of 003C02E0, robustness pass). */
int32_t func_004994B0(uint8_t *self, const char *fmt, ...)
{
    char *buf = (char *)(uintptr_t)*(uint32_t *)(self + 4);
    int32_t size = (int32_t)*(uint32_t *)(self + 8);
    va_list ap;
    va_start(ap, fmt);
#if defined(__i386__)
    int32_t n = func_0010013C(buf, (uint32_t)size, fmt, (void *)ap);
#else
    /* only as many words as the format consumes (reading past the passed arguments is undefined):
     * one per conversion and per `*` width / precision; 64-bit conversions (ll, f/e/g: doubles)
     * take two ARM words (game code is ILP32, so `l` is one word) */
    uint32_t words[16] = {0};
    int nw = 0;
    for (const char *f = fmt; *f && nw < 16; f++) {
        if (*f != '%') continue;
        if (*++f == '%') continue;
        int ll = 0;
        for (; *f && !strchr("diouxXcspfFeEgGaAn", *f); f++) {
            if (*f == '*' && nw < 16) words[nw++] = va_arg(ap, uint32_t);
            if (*f == 'l' && f[1] == 'l') ll = 1;
        }
        if (!*f) break;
        int two = ll || strchr("fFeEgGaA", *f);
        for (int k = 0; k < 1 + two && nw < 16; k++) words[nw++] = va_arg(ap, uint32_t);
    }
    int32_t n = func_0010013C(buf, (uint32_t)size, fmt, words);
#endif
    va_end(ap);
    if (n < 0 || size <= n) {
        n = size - 1;
        buf[size - 1] = 0;
    }
    return n;
}
