/* ARM run-time ABI helpers of the game's armcc C library (USA = EU addresses, ARM state),
 * hand-written from the EU disassembly. Replace the Ghidra decompilations, which (a) are typed
 * `undefined8` but declared `int` by every converted caller (the remainder / high word is lost
 * at the call: see README.md "link notes") and (b) for f2lz, model the out-of-range path as a
 * call into the FP exception dispatcher 00114D80, which Ghidra cannot follow (it returns through
 * a descriptor word placed after the bl).
 *
 * Division by zero: the integer helpers call __aeabi_idiv0 (00110384: `mov r0, r0; bx lr`) or
 * __aeabi_ldiv0 (00116534 -> 00110388: `bx lr`) with r0 (and r1) = 0 and return quotient 0 and
 * remainder = the dividend. x86 would trap (SIGFPE) on /0 and on INT_MIN / -1: never used here. */
#include "core.h"

/* ------------------------------------------------------------------ 32-bit division */

/* USA 00110710 __aeabi_uidivmod(u32 n, u32 d) -> r0 = n / d, r1 = n % d.
 * d == 0: falls to 00110700 (`push {r0, lr}; mov r0, #0; bl __aeabi_idiv0; pop {r1, pc}`):
 * r0 = 0, r1 = n. Converted callers: `int f(uint, uint)` (49 files). Confidence: high. */
uint64_t func_00110710(uint32_t n, uint32_t d) {
    if (d == 0) return core_pair(0, n);
    return core_pair(n / d, n % d);
}

/* USA 001104E4 __aeabi_idivmod(s32 n, s32 d) -> r0 = n / d (truncated), r1 = n % d (sign of n).
 * Signed path 00110624: magnitudes divided unsigned, ip bit 31 = sign(n) ^ sign(d) negates the
 * quotient, ip bit 30 (= sign(n), carry of `asrs ip, ip, #31`) negates the remainder; so
 * INT_MIN / -1 = INT_MIN rem 0 (wraps, no trap). d == 0: r0 = 0, r1 = n (n's sign restored by
 * the `rsbmi r0` at 001106FC before 00110700). Converted callers: `int f(uint, uint)` (44 files).
 * Confidence: high. */
uint64_t func_001104E4(uint32_t n, uint32_t d) {
    if (d == 0) return core_pair(0, n);
    uint32_t un = (int32_t)n < 0 ? 0u - n : n;
    uint32_t ud = (int32_t)d < 0 ? 0u - d : d;
    uint32_t q = un / ud, r = un % ud;
    if (((n ^ d) & 0x80000000u) != 0) q = 0u - q;
    if ((int32_t)n < 0) r = 0u - r;
    return core_pair(q, r);
}

/* ------------------------------------------------------------------ 64-bit division */

/* USA 00115F34 __aeabi_uldivmod(u64 n = r0:r1, u64 d = r2:r3) -> quotient r0:r1, remainder r2:r3.
 * (Reciprocal-table / umull algorithm with exact correction steps: the result is the exact
 * quotient and remainder.) d == 0: 00116184 `push {r2, r3}; mov r1, #0; mov r0, #0;
 * bl __aeabi_ldiv0 (bx lr); pop {r2, r3, ...}`: quotient 0, remainder n. */
uint64_t albw_uldivmod(uint64_t n, uint64_t d, uint64_t *rem) {
    if (d == 0) { if (rem) *rem = n; return 0; }
    if (rem) *rem = n % d;
    return n / d;
}

/* func_ form: the remainder (r2:r3) cannot be returned to a C caller; the converted callers
 * (`int f(uint, uint, uint, uint)`, 4 files: 0041A2D4, 0041A2DC, 00419D34, 0011624C's own
 * Ghidra body) only use the quotient. Confidence: high. */
uint64_t func_00115F34(uint32_t nlo, uint32_t nhi, uint32_t dlo, uint32_t dhi) {
    return albw_uldivmod(core_pair(nlo, nhi), core_pair(dlo, dhi), 0);
}

/* USA 0011624C __aeabi_ldivmod(s64 n = r0:r1, s64 d = r2:r3) -> quotient r0:r1, remainder r2:r3.
 * r4 = (r1 asr 1) ^ (r3 lsr 1): bit 31 = sign(n) (negates the remainder), bit 30 = sign(n) ^
 * sign(d) (negates the quotient); magnitudes through 00115F34. INT64_MIN / -1 = INT64_MIN rem 0.
 * d == 0: quotient 0, remainder n. */
int64_t albw_ldivmod(int64_t n, int64_t d, int64_t *rem) {
    uint64_t un = n < 0 ? 0 - (uint64_t)n : (uint64_t)n;
    uint64_t ud = d < 0 ? 0 - (uint64_t)d : (uint64_t)d;
    uint64_t r, q = albw_uldivmod(un, ud, &r);
    if ((n < 0) != (d < 0)) q = 0 - q;
    if (n < 0) r = 0 - r;
    if (rem) *rem = (int64_t)r;
    return (int64_t)q;
}

/* func_ form: converted callers `int f(uint, uint, uint, uint)` (10 files) use the quotient
 * (time conversions: /1000, /100, /10). Confidence: high. */
uint64_t func_0011624C(uint32_t nlo, uint32_t nhi, uint32_t dlo, uint32_t dhi) {
    return (uint64_t)albw_ldivmod((int64_t)core_pair(nlo, nhi), (int64_t)core_pair(dlo, dhi), 0);
}

/* ------------------------------------------------------------------ 64-bit shift */

/* USA 00116224 __aeabi_lasr(s64 v = r0:r1, u32 n = r2) -> v >> n (arithmetic), r0:r1.
 *   subs r3, r2, #32; bpl big
 *   r0 = (r0 lsr r2) | (r1 lsl (32 - r2)); r1 = r1 asr r2
 *   big: r0 = r1 asr (r2 - 32); r1 = r1 asr 31
 * with ARM register-shift semantics (bottom byte of the amount, >= 32 saturates), so n >= 64
 * gives the sign fill and n = 32 + 256k keeps the high word. One converted caller (00564538:
 * `int f(uint, int, uint)`). Confidence: high. */
uint64_t func_00116224(uint32_t lo, uint32_t hi, uint32_t n) {
    uint32_t r3 = n - 32;
    if ((int32_t)r3 >= 0) return core_pair(core_asr(hi, r3), core_asr(hi, 31));
    r3 = 32 - n;
    return core_pair(core_lsr(lo, n) | core_lsl(hi, r3), core_asr(hi, n));
}

/* ------------------------------------------------------------------ float -> s64 */

/* USA 00114608 __aeabi_f2lz(float in r0, softfp) -> s64 r0:r1, round toward zero.
 * Positive: exponent e = r0 asr 23; e >= 190 (|f| >= 2^63, +inf, +NaN) -> 0011466C. Negative:
 * r0 (unsigned) > 0xDF000000 (f < -2^63, -inf, -NaN) -> 0011466C; -2^63 itself converts.
 * Denormals (e == 0) lose the implicit bit and convert to 0.
 * 0011466C: `bl 00114D80` with the descriptor word 0x806DB6DB after the call; the dispatcher
 * picks action 0 for a NaN operand (`mov r1, #0; mov r0, #0` = 0) and action 3 otherwise
 * (00114684 `mvn r0, r0, asr #31; eor r1, r0, #0x80000000`: INT64_MAX for a positive operand,
 * INT64_MIN for a negative one). So: saturating, NaN -> 0 (x86 cvttss2si-style code would give
 * INT64_MIN for both). The second parameter is Ghidra's (r1 is not an input); converted callers
 * declare `int f(uint bits, uint)` (198 files) and pass the float's bit pattern.
 * Confidence: high. */
uint64_t func_00114608(uint32_t bits, uint32_t unused_r1) {
    (void)unused_r1;
    uint32_t e = (bits >> 23) & 0xFF;
    uint32_t m = bits << 8;
    if (e != 0) m |= 0x80000000u;               /* implicit bit (orrne / biceq) */
    if (!(bits & 0x80000000u)) {
        if (e >= 190) goto special;
    } else if (bits > 0xDF000000u) {
        goto special;
    }
    {
        uint32_t s = 190 - e;                    /* 1..190: value = m * 2^(32 - s) */
        uint32_t hi = core_lsr(m, s);
        uint32_t lo = s >= 32 ? core_lsr(m, s - 32) : core_lsl(m, 32 - s);
        uint64_t v = core_pair(lo, hi);
        if (bits & 0x80000000u) v = 0 - v;       /* rsbs r0 / rsc r1 */
        return v;
    }
special:
    if ((bits << 1) > 0xFF000000u) return 0;    /* NaN: action 0 */
    {
        uint32_t lo = ~core_asr(bits, 31);       /* action 3: saturate by sign */
        return core_pair(lo, lo ^ 0x80000000u);
    }
}

int64_t albw_f2lz(float f) { return (int64_t)func_00114608(gp_f2u(f), 0); }
