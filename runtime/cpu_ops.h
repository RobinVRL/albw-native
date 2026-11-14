/* Inline instruction semantics used by the generated code. */
#pragma once
#include <math.h>
#include "cpu.h"

static inline uint32_t ror32(uint32_t v, unsigned n) { n &= 31; return n ? (v >> n) | (v << (32 - n)) : v; }
static inline uint32_t clz32(uint32_t v) { return v ? (uint32_t)__builtin_clz(v) : 32u; }

/* register-specified shifts (amount = low byte of Rs, may be >= 32) */
static inline uint32_t sh_lsl(uint32_t v, uint32_t n) { return n >= 32 ? 0 : v << n; }
static inline uint32_t sh_lsr(uint32_t v, uint32_t n) { return n >= 32 ? 0 : v >> n; }
static inline uint32_t sh_asr(uint32_t v, uint32_t n) { return (uint32_t)((int32_t)v >> (n >= 32 ? 31 : n)); }
static inline uint32_t sh_ror(uint32_t v, uint32_t n) { return ror32(v, n & 31); }
static inline uint32_t sh_lslc(uint32_t v, uint32_t n, uint32_t c) {
    return n == 0 ? c : n < 32 ? (v >> (32 - n)) & 1 : n == 32 ? v & 1 : 0;
}
static inline uint32_t sh_lsrc(uint32_t v, uint32_t n, uint32_t c) {
    return n == 0 ? c : n < 32 ? (v >> (n - 1)) & 1 : n == 32 ? v >> 31 : 0;
}
static inline uint32_t sh_asrc(uint32_t v, uint32_t n, uint32_t c) {
    return n == 0 ? c : n < 32 ? ((uint32_t)((int32_t)v >> (n - 1))) & 1 : v >> 31;
}
static inline uint32_t sh_rorc(uint32_t v, uint32_t n, uint32_t c) {
    return n == 0 ? c : (ror32(v, n & 31) >> 31);
}

/* a + b + cin, optionally setting NZCV */
static inline uint32_t op_add(CPU *c, uint32_t a, uint32_t b, uint32_t cin, int s) {
    uint64_t u = (uint64_t)a + b + cin;
    uint32_t r = (uint32_t)u;
    if (s) {
        c->n = r >> 31; c->z = r == 0; c->c = (uint32_t)(u >> 32);
        c->v = ((~(a ^ b) & (a ^ r)) >> 31) & 1;
    }
    return r;
}
static inline uint32_t op_sub(CPU *c, uint32_t a, uint32_t b, int s) { return op_add(c, a, ~b, 1, s); }

static inline uint32_t cpsr_get(CPU *c) {
    return (c->n << 31) | (c->z << 30) | (c->c << 29) | (c->v << 28) | 0x10u;
}
static inline void cpsr_set_flags(CPU *c, uint32_t v) {
    c->n = v >> 31; c->z = (v >> 30) & 1; c->c = (v >> 29) & 1; c->v = (v >> 28) & 1;
}

/* VFP compare: sets FPSCR NZCV (read into CPSR by vmrs APSR_nzcv, fpscr) */
static inline void vfp_cmp(CPU *c, double a, double b) {
    uint32_t f;
    if (a != a || b != b) f = 0x3;        /* unordered: C V */
    else if (a == b) f = 0x6;             /* Z C */
    else if (a < b) f = 0x8;              /* N */
    else f = 0x2;                         /* C */
    c->fpscr = (c->fpscr & 0x0FFFFFFFu) | (f << 28);
}

static inline uint32_t vfp_tosiz(double x) {
    if (x != x) return 0;
    if (x >= 2147483647.0) return 0x7FFFFFFFu;
    if (x <= -2147483648.0) return 0x80000000u;
    return (uint32_t)(int32_t)x;
}
static inline uint32_t vfp_touiz(double x) {
    if (x != x || x <= 0.0) return 0;
    if (x >= 4294967295.0) return 0xFFFFFFFFu;
    return (uint32_t)x;
}
static inline uint32_t vfp_tosi(double x) { return vfp_tosiz(nearbyint(x)); }
static inline uint32_t vfp_toui(double x) { return vfp_touiz(nearbyint(x)); }

static inline uint32_t ssat32(int32_t v, int bits) {
    int32_t hi = (int32_t)((1u << (bits - 1)) - 1), lo = -hi - 1;
    return (uint32_t)(v > hi ? hi : v < lo ? lo : v);
}
static inline uint32_t usat32(int32_t v, int bits) {
    int32_t hi = (int32_t)((1u << bits) - 1);
    return (uint32_t)(v < 0 ? 0 : v > hi ? hi : v);
}
static inline uint32_t add16x2(uint32_t a, uint32_t b) {
    return (uint32_t)(uint16_t)(a + b) | ((uint32_t)(uint16_t)((a >> 16) + (b >> 16)) << 16);
}

/* ARMv6 parallel add/subtract. kind: 1 S, 2 Q, 3 SH, 5 U, 6 UQ, 7 UH.
 * op: 0 ADD16, 1 ASX, 2 SAX, 3 SUB16, 4 ADD8, 7 SUB8. Sets GE for S and U kinds. */
static inline uint32_t par_op(CPU *c, int kind, int op, uint32_t a, uint32_t b) {
    int sgn = kind <= 3, lanes = op >= 4 ? 4 : 2, bits = op >= 4 ? 8 : 16;
    uint32_t mask = (1u << bits) - 1, res = 0, ge = 0;
    for (int i = 0; i < lanes; i++) {
        int sh = i * bits;
        int32_t x, y;
        int bi = i;
        if (op == 1 || op == 2) bi = i ^ 1;  /* exchange halves */
        if (sgn) {
            x = (int32_t)((a >> sh) & mask) << (32 - bits) >> (32 - bits);
            y = (int32_t)((b >> (bi * bits)) & mask) << (32 - bits) >> (32 - bits);
        } else {
            x = (int32_t)((a >> sh) & mask);
            y = (int32_t)((b >> (bi * bits)) & mask);
        }
        int sub = op == 3 || op == 7 || (op == 1 && i == 0) || (op == 2 && i == 1);
        int64_t r = sub ? (int64_t)x - y : (int64_t)x + y;
        int lane_ge = sgn ? r >= 0 : (sub ? r >= 0 : r >= (int64_t)1 << bits);
        if (kind == 2 || kind == 6) {          /* saturating */
            int64_t lo = sgn ? -((int64_t)1 << (bits - 1)) : 0;
            int64_t hi = sgn ? ((int64_t)1 << (bits - 1)) - 1 : ((int64_t)1 << bits) - 1;
            r = r < lo ? lo : r > hi ? hi : r;
        } else if (kind == 3 || kind == 7) {   /* halving */
            r >>= 1;
        }
        res |= ((uint32_t)r & mask) << sh;
        if (kind == 1 || kind == 5)
            ge |= (lane_ge ? (bits == 8 ? 1u : 3u) : 0u) << (bits == 8 ? i : 2 * i);
    }
    if (kind == 1 || kind == 5) c->ge = ge;
    return res;
}

static inline uint32_t sel32(CPU *c, uint32_t a, uint32_t b) {
    uint32_t r = 0;
    for (int i = 0; i < 4; i++) r |= (((c->ge >> i) & 1) ? a : b) & (0xFFu << (8 * i));
    return r;
}
