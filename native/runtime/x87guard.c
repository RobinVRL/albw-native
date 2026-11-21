/* x87 stack guard (BOOT_LOG 160h). On i386 a float result comes back in x87 st(0); a caller that
 * declares the callee int / void never pops it. Direct calls get pop adapters at link time
 * (tools/x87check.py); indirect (virtual / delegate) calls cannot. After 8 leaked values every
 * x87 load is NaN (glibc cos/sqrt -> NaN sound filter -> NaN mix -> loud pops).
 * The SysV i386 ABI requires an empty x87 stack at every function entry, so clearing it at the
 * entry of a native function is always safe. albw_x87_guard does that and, with
 * ALBW_X87_TRACE=1, logs the return address of the code that reached it with values left. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern long g_plat_frames;

int albw_x87_depth(void)
{
#if defined(__i386__)
    uint32_t env[7];
    __asm__ volatile("fnstenv %0\n\tfldenv %0" : "=m"(env));
    uint32_t tw = env[2] & 0xFFFF;
    int n = 0;
    for (int r = 0; r < 8; r++)
        if (((tw >> (2 * r)) & 3) != 3) n++;
    return n;
#else
    return 0;
#endif
}

void albw_x87_clear(void)
{
#if defined(__i386__)
    uint16_t cw;
    __asm__ volatile("fnstcw %0\n\tfninit\n\tfldcw %0" : "=m"(cw));
#endif
}

void albw_x87_guard(const char *where, void *ra)
{
#if defined(__i386__)
    uint16_t sw;
    __asm__ volatile("fnstsw %0" : "=am"(sw));
    if (!(sw & 0x3800)) {
        /* stack top 0: empty - or completely full (8 leaked values wrap TOP back to 0; the old
           fast path let a full stack through, and every float returned on this thread was NaN
           from then on: user crash 160ba). fxam tells them apart: C3 = 1, C2 = 0, C0 = 1 = empty */
        uint16_t ex;
        __asm__ volatile("fxam\n\tfnstsw %0" : "=a"(ex));
        if ((ex & 0x4500) == 0x4100) return;
    }
    int n = albw_x87_depth();
    if (!n) return;
    static int trace = -1, logged;
    if (trace < 0) { const char *e = getenv("ALBW_X87_TRACE"); trace = e && *e && *e != '0'; }
    if (trace && logged < 200) {
        logged++;
        fprintf(stderr, "x87guard: f=%ld %s: %d value(s) left on the x87 stack (reached from %p)\n",
                g_plat_frames, where, n, ra);
    }
    albw_x87_clear();
#else
    (void)where; (void)ra;
#endif
}
