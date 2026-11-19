/* Older glibc symbol versions for the few calls that newer glibc headers redirect to newer symbols,
 * so a binary built on a current distribution (glibc 2.43 here) also runs on Ubuntu 22.04 / 24.04
 * (glibc 2.35 / 2.39): the AppImage (tools/make_appimage.sh). Everything else the game uses needs
 * at most GLIBC_2.34.
 *
 *   __isoc23_sscanf / fscanf / strtol / strtoul (GLIBC_2.38): glibc >= 2.38 headers map the C library
 *   calls to their C23 variants (which also accept 0b binary prefixes). The game and the port never
 *   parse 0b numbers; the classic functions are bound instead.
 *   fmodf / sqrtf (GLIBC_2.43): glibc 2.43 added new symbol versions; the GLIBC_2.0 ones compute the
 *   same results.
 * The wrappers are defined under the C23 names, so the compiler's redirected references resolve
 * here (strong definitions in the executable win over the shared library). */
#ifdef __i386__
#include <stdarg.h>
/* hidden: the executable exports its symbols (-rdynamic); an exported fmodf made the versioned
 * fmodf@GLIBC_2.0 lookup bind back to this wrapper on glibc 2.39 (endless recursion) */
#define HIDDEN __attribute__((visibility("hidden")))
#include <stdio.h>

__asm__(".symver vsscanf_old, vsscanf@GLIBC_2.0");
__asm__(".symver vfscanf_old, vfscanf@GLIBC_2.0");
__asm__(".symver strtol_old, strtol@GLIBC_2.0");
__asm__(".symver strtoul_old, strtoul@GLIBC_2.0");
__asm__(".symver fmodf_old, fmodf@GLIBC_2.0");
__asm__(".symver sqrtf_old, sqrtf@GLIBC_2.0");
int vsscanf_old(const char *s, const char *fmt, va_list ap);
int vfscanf_old(FILE *f, const char *fmt, va_list ap);
long strtol_old(const char *s, char **end, int base);
unsigned long strtoul_old(const char *s, char **end, int base);
float fmodf_old(float x, float y);
float sqrtf_old(float x);

HIDDEN int __isoc23_sscanf(const char *s, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vsscanf_old(s, fmt, ap);
    va_end(ap);
    return r;
}
HIDDEN int __isoc23_fscanf(FILE *f, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vfscanf_old(f, fmt, ap);
    va_end(ap);
    return r;
}
HIDDEN long __isoc23_strtol(const char *s, char **end, int base) { return strtol_old(s, end, base); }
HIDDEN unsigned long __isoc23_strtoul(const char *s, char **end, int base) { return strtoul_old(s, end, base); }
/* fmodf: the redirect is the versioned reference itself, so the definition takes the plain name
 * (linked into the executable, it wins over libm's default version) */
HIDDEN float fmodf(float x, float y) { return fmodf_old(x, y); }
HIDDEN float sqrtf(float x) { return sqrtf_old(x); }   /* same story (GLIBC_2.43); most calls are inlined */
#endif
