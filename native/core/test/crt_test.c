// SOURCES: crt_aeabi.c
/* Tests for the ARM run-time helpers (native/core/crt_aeabi.c). Expected values follow the ARM
 * code paths derived in the source comments (divide-by-zero handlers, saturating f2lz, register
 * shift semantics), not the x86 behaviour (which traps or gives INT64_MIN). */
#include "core.h"
#include "core_test.h"
#include <math.h>

uint64_t func_00110710(uint32_t n, uint32_t d);
uint64_t func_001104E4(uint32_t n, uint32_t d);
uint64_t func_00115F34(uint32_t nlo, uint32_t nhi, uint32_t dlo, uint32_t dhi);
uint64_t func_0011624C(uint32_t nlo, uint32_t nhi, uint32_t dlo, uint32_t dhi);
uint64_t func_00116224(uint32_t lo, uint32_t hi, uint32_t n);
uint64_t func_00114608(uint32_t bits, uint32_t unused_r1);

static uint32_t rng = 12345;
static uint32_t rnd(void) { rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5; return rng; }

/* a caller declared the way the converted callers do: `int f(uint, uint)` */
typedef int (*as_int2)(uint32_t, uint32_t);

int main(void) {
    /* ---- uidivmod */
    CHECK_EQ(func_00110710(100, 7), core_pair(14, 2));
    CHECK_EQ(func_00110710(0xFFFFFFFFu, 1), core_pair(0xFFFFFFFFu, 0));
    CHECK_EQ(func_00110710(5, 0), core_pair(0, 5));            /* idiv0: q 0, r n */
    CHECK_EQ(func_00110710(3, 0xFFFFFFFFu), core_pair(0, 3));
    /* ---- idivmod */
    CHECK_EQ(func_001104E4((uint32_t)-7, 2), core_pair((uint32_t)-3, (uint32_t)-1));
    CHECK_EQ(func_001104E4(7, (uint32_t)-2), core_pair((uint32_t)-3, 1));
    CHECK_EQ(func_001104E4((uint32_t)-7, (uint32_t)-2), core_pair(3, (uint32_t)-1));
    CHECK_EQ(func_001104E4(0x80000000u, 0xFFFFFFFFu), core_pair(0x80000000u, 0)); /* no trap */
    CHECK_EQ(func_001104E4((uint32_t)-9, 0), core_pair(0, (uint32_t)-9));
    CHECK_EQ(func_001104E4(0x80000000u, 0), core_pair(0, 0x80000000u));
    for (int i = 0; i < 200000; i++) {
        uint32_t a = rnd(), b = rnd() >> (rnd() & 31);
        if (!b) continue;
        CHECK_EQ(func_00110710(a, b), core_pair(a / b, a % b));
        int32_t sa = (int32_t)a, sb = (int32_t)b;
        if (sa == INT32_MIN && sb == -1) continue;
        CHECK_EQ(func_001104E4(a, b), core_pair((uint32_t)(sa / sb), (uint32_t)(sa % sb)));
    }
    /* r0 through an `int`-declared call (low half only, as the converted callers see it) */
    CHECK_EQ((uint32_t)((as_int2)(void *)func_00110710)(100, 7), 14);
    CHECK_EQ((uint32_t)((as_int2)(void *)func_001104E4)((uint32_t)-100, 7), (uint32_t)-14);

    /* ---- 64-bit division */
    uint64_t r;
    CHECK_EQ(albw_uldivmod(1000000000000ull, 1000, &r), 1000000000ull); CHECK_EQ(r, 0);
    CHECK_EQ(albw_uldivmod(77, 0, &r), 0); CHECK_EQ(r, 77);
    CHECK_EQ(func_00115F34(0x89ABCDEFu, 0x01234567u, 1000, 0), 0x0123456789ABCDEFull / 1000);
    int64_t sr;
    CHECK_EQ(albw_ldivmod(-1000000000007ll, 1000, &sr), (uint64_t)-1000000000ll); CHECK_EQ(sr, (uint64_t)-7);
    CHECK_EQ(albw_ldivmod(INT64_MIN, -1, &sr), (uint64_t)INT64_MIN); CHECK_EQ(sr, 0);
    CHECK_EQ(albw_ldivmod(-5, 0, &sr), 0); CHECK_EQ(sr, (uint64_t)-5);
    CHECK_EQ(func_0011624C(0xFFFFFC18u, 0xFFFFFFFFu, 10, 0), (uint64_t)-100);
    for (int i = 0; i < 100000; i++) {
        uint64_t a = core_pair(rnd(), rnd()), b = core_pair(rnd(), rnd()) >> (rnd() & 63);
        if (!b) continue;
        CHECK_EQ(albw_uldivmod(a, b, &r), a / b); CHECK_EQ(r, a % b);
        int64_t x = (int64_t)a, y = (int64_t)b * ((rnd() & 1) ? -1 : 1);
        if (y == -1 && x == INT64_MIN) continue;
        CHECK_EQ(albw_ldivmod(x, y, &sr), (uint64_t)(x / y)); CHECK_EQ(sr, (uint64_t)(x % y));
    }

    /* ---- lasr */
    uint64_t v = 0x8123456789ABCDEFull;
    for (uint32_t n = 0; n < 64; n++)
        CHECK_EQ(func_00116224((uint32_t)v, (uint32_t)(v >> 32), n), (uint64_t)((int64_t)v >> n));
    CHECK_EQ(func_00116224(1, 0x80000000u, 64), ~0ull);
    CHECK_EQ(func_00116224(1, 0x40000000u, 200), 0);
    CHECK_EQ(func_00116224(1, 0x80000000u, 0x120), core_pair(0x80000000u, 0xFFFFFFFFu)); /* low byte 0x20 */

    /* ---- f2lz */
    float fs[] = {0.0f, -0.0f, 0.5f, -0.99f, 1.0f, -1.0f, 123456.78f, -123456.78f, 1e18f, -1e18f,
                  9.2e18f, -9.2e18f, 1e-40f, -1e-40f, 4294967296.0f, 8388607.5f};
    for (unsigned i = 0; i < sizeof fs / sizeof fs[0]; i++)
        CHECK_EQ(albw_f2lz(fs[i]), (uint64_t)(int64_t)fs[i]);
    CHECK_EQ(albw_f2lz(9223372036854775808.0f), (uint64_t)INT64_MAX);          /* 2^63 saturates */
    CHECK_EQ(albw_f2lz(-9223372036854775808.0f), (uint64_t)INT64_MIN);         /* -2^63 exact */
    CHECK_EQ(albw_f2lz(-1e19f), (uint64_t)INT64_MIN);
    CHECK_EQ(albw_f2lz(1e30f), (uint64_t)INT64_MAX);
    CHECK_EQ(albw_f2lz(INFINITY), (uint64_t)INT64_MAX);
    CHECK_EQ(albw_f2lz(-INFINITY), (uint64_t)INT64_MIN);
    CHECK_EQ(func_00114608(0x7FC00000u, 0), 0);                                  /* NaN -> 0 */
    CHECK_EQ(func_00114608(0xFFC00001u, 0), 0);
    CHECK_EQ(func_00114608(0x7F800001u, 0xFFFFFFFFu), 0);
    for (int i = 0; i < 200000; i++) {
        uint32_t b = rnd();
        float f = gp_u2f(b);
        if (f != f || fabsf(f) >= 9.2233715e18f) continue;
        CHECK_EQ(func_00114608(b, rnd()), (uint64_t)(int64_t)f);
    }
    return CORE_DONE();
}
