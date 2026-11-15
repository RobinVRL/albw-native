/* USA 004994B0 (EU 00499488): sead::BufferedSafeString::format(this, fmt, ...) ->
 * length: vsnprintf(this->buf (+4), this->size (+8), fmt, args); on overflow / error the last
 * byte is cleared and size - 1 returned. On ARM the function stores r2 / r3 just below the
 * caller's stack arguments so the va_list is one contiguous word array; the Ghidra text copied
 * them into a local array, so a third and later argument was read from the wrong place (the
 * "%s_%s_%s" sound-effect name of the file menu crashed when name entry opened, boot stop 99).
 * Native: on i386 cdecl the variadic words follow param_3 contiguously, the ARM va_list shape
 * that 0010013C expects (as 00689650). Confidence: high. 32-bit only (args are 32-bit words). */
#include <stdint.h>

extern int32_t func_0010013C(char *buf, uint32_t size, const char *fmt, void *args);

int32_t func_004994B0(uint8_t *self, const char *fmt, uint32_t p3, ...)
{
    char *buf = (char *)(uintptr_t)*(uint32_t *)(self + 4);
    int32_t size = (int32_t)*(uint32_t *)(self + 8);
    int32_t n = func_0010013C(buf, (uint32_t)size, fmt, &p3);
    if (n < 0 || size <= n) {
        n = size - 1;
        buf[size - 1] = 0;
    }
    return n;
}
