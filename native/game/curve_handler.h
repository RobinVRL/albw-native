/* Shared body of the animation curve handlers in the table data_00714BB0[kind][format]
 * (USA 0067A75C..0067B770, EU 0067A734..0067B748), called by 005670A0 as f32 (*)(curve, f32 t).
 * kind 0 = step, 1 = linear, 2 = Hermite (003E1A24 / EU 003E1A04).
 * Curve: +0x0E u16 key count, +0x10 value scale, +0x14 value offset, +0x18 frame scale,
 * +0x1C 1 / duration (key index guess), +0x20 keys.
 * Integer key formats (frame index f; frame time = frame * fscale; value = voff + v * vscale):
 *   CH_H6  6 bytes: u16 frame (1/32 units: f = s32(t / fscale * 32)), u16 value, s16 slope
 *          (x 1/256). Search = EU 0067D620 (USA 0067D648).
 *   CH_B6  6 bytes: u8 frame, u16 value (bytes 1-2), two 12-bit signed slopes in bytes 3-5:
 *          in = b3 | sext(b4 & 15) << 8, out = b4 >> 4 | sext(b5) << 4 (x 1/32).
 *          Search = EU 0067E128 (USA 0067E150).
 *   CH_P8  8 bytes: u32 frame:12 value:20, s16 slope in (+4), s16 slope out (+6) (x 1/256).
 *          Search = EU 0067E820 (USA 0067E848).
 *   CH_B4  4 bytes: u8 frame, 12-bit value (b1 | (b2 & 15) << 8), 12-bit signed slope
 *          (b2 >> 4 | sext(b3) << 4) (x 1/32). Search inline in the handlers.
 * Float key formats: stride 2 {frame, value}, 3 {frame, value, slope}, 4 {frame, value, slope in,
 * slope out}.
 * The Ghidra sources of these handlers were typed int / uint / void / undefined8 and dropped the
 * float they compute; through the float-returning table pointer the i386 caller then read an
 * empty x87 register (NaN 0xFFC00000). See BOOT_LOG 89g / 90 [3d]. Written from the EU machine
 * code; products are rounded before adds (VFPv2 vmla), float -> int conversions saturate like VFP.
 */
#ifndef ALBW_CURVE_HANDLER_H
#define ALBW_CURVE_HANDLER_H
#include "../route/route.h"

enum { CH_H6, CH_B6, CH_P8, CH_B4 };

static inline uint32_t ch_cvt_u32(float x)
{
    if (!(x > 0.0f)) return 0;
    if (x >= 4294967296.0f) return 0xFFFFFFFFu;
    return (uint32_t)x;
}

static inline int32_t ch_cvt_s32(float x)
{
    if (x != x) return 0;
    if (x >= 2147483648.0f) return 0x7FFFFFFF;
    if (x <= -2147483648.0f) return (int32_t)0x80000000u;
    return (int32_t)x;
}

static inline uint32_t ch_stride(int fm) { return fm == CH_P8 ? 8 : fm == CH_B4 ? 4 : 6; }

static inline uint32_t ch_u16(const uint8_t *p) { return (uint32_t)p[0] | (uint32_t)p[1] << 8; }
static inline int32_t ch_s16(const uint8_t *p) { return (int16_t)(uint16_t)ch_u16(p); }
static inline uint32_t ch_u32(const uint8_t *p) { return ch_u16(p) | ch_u16(p + 2) << 16; }

static inline uint32_t ch_frame(int fm, const uint8_t *k)
{
    switch (fm) {
    case CH_H6: return ch_u16(k);
    case CH_P8: return ch_u32(k) & 0xFFF;
    default:    return k[0];
    }
}

static inline uint32_t ch_value(int fm, const uint8_t *k)
{
    switch (fm) {
    case CH_H6: return ch_u16(k + 2);
    case CH_B6: return k[1] + ((uint32_t)k[2] << 8);
    case CH_P8: return ch_u32(k) >> 12;
    default:    return k[1] + ((uint32_t)(k[2] & 0xF) << 8);
    }
}

/* slope leaving key k (out = 1) or entering key k (out = 0), already scaled */
static inline float ch_slope(int fm, const uint8_t *k, int out)
{
    int32_t s;
    float sc;
    switch (fm) {
    case CH_H6: s = ch_s16(k + 4); sc = 0.00390625f; break;
    case CH_P8: s = ch_s16(k + (out ? 6 : 4)); sc = 0.00390625f; break;
    case CH_B6:
        s = out ? ((int32_t)(int8_t)k[5] << 4) + (k[4] >> 4)
                : (int32_t)k[3] + ((int32_t)(int8_t)(uint8_t)(k[4] << 4) << 4);
        sc = 0.03125f;
        break;
    default: s = ((int32_t)(int8_t)k[3] << 4) + (k[2] >> 4); sc = 0.03125f; break;
    }
    volatile float r = (float)s * sc;
    return r;
}

/* frame index searched for at time t */
static inline uint32_t ch_findex(int fm, const char *c, float t)
{
    volatile float q = t / RF(c, 0x18, float);
    if (fm == CH_H6) {
        volatile float q32 = q * 32.0f;
        return (uint32_t)ch_cvt_s32(q32);
    }
    return ch_cvt_u32(q);
}

/* time of key k */
static inline float ch_ftime(int fm, const char *c, const uint8_t *k)
{
    volatile float a = (float)ch_frame(fm, k);
    if (fm == CH_H6) a = a * 0.03125f;
    volatile float b = a * RF(c, 0x18, float);
    return b;
}

static inline float ch_scaled(const char *c, uint32_t v)
{
    volatile float p = (float)v * RF(c, 0x10, float);
    return RF(c, 0x14, float) + p;
}

static inline const uint8_t *ch_search_int(int fm, const char *c, float t)
{
    const uint8_t *keys = GPTR_TO(uint8_t, RF(c, 0x20, uint32_t));
    const uint32_t n = RF(c, 0x0E, uint16_t), st = ch_stride(fm);
    const uint8_t *last = keys + st * (n - 1);
    const uint32_t f = ch_findex(fm, c, t);
    if (ch_frame(fm, keys) > f) return keys;
    if (f >= ch_frame(fm, last)) return last;
    volatile float g = (float)(int32_t)(n - 1) * t;
    volatile float h = RF(c, 0x1C, float) * g;
    const uint8_t *k = keys + st * ch_cvt_u32(h);
    if (f < ch_frame(fm, k)) {
        do k -= st; while (ch_frame(fm, k) > f);
    } else {
        do k += st; while (ch_frame(fm, k) <= f);
        k -= st;
    }
    return k;
}

static inline const float *ch_search_flt(const char *c, uint32_t st, float t)
{
    const float *keys = GPTR_TO(float, RF(c, 0x20, uint32_t));
    const uint32_t n = RF(c, 0x0E, uint16_t);
    const float *last = keys + st * (n - 1);
    if (keys[0] > t) return keys;
    if (!(last[0] > t)) return last;
    volatile float g = (float)(int32_t)(n - 1) * t;
    volatile float h = RF(c, 0x1C, float) * g;
    const float *k = keys + st * ch_cvt_u32(h);
    if (k[0] > t) {
        do k -= st; while (k[0] > t);
    } else {
        do k += st; while (!(k[0] > t));
        k -= st;
    }
    return k;
}

static inline int ch_is_last(const char *c, const void *k, uint32_t bytes)
{
    const uint8_t *keys = GPTR_TO(uint8_t, RF(c, 0x20, uint32_t));
    return (const uint8_t *)k == keys + bytes * (RF(c, 0x0E, uint16_t) - 1);
}

static inline float ch_lerp(float v0, float v1, float r)
{
    volatile float a = v0 * (1.0f - r);
    volatile float b = v1 * r;
    return a + b;
}

/* 003E1A24 (EU 003E1A04) with its operation order */
static inline float ch_hermite(float v0, float s0, float v1, float s1, float dt, float df)
{
    float u = dt / df;
    volatile float m3 = u * 2.0f;
    float a = m3 - 3.0f;
    float um1 = u - 1.0f;
    volatile float s1u = u * s1;
    volatile float u2 = u * u;
    volatile float d = (v0 - v1) * a;
    volatile float s0m = um1 * s0;
    volatile float dtm = dt * um1;
    volatile float r0p = d * u2;
    float r0 = v0 + r0p;
    float sl = s0m + s1u;
    volatile float r1p = dtm * sl;
    return r0 + r1p;
}

/* kind 0: value of the key at or before t */
static inline float ch_step_int(int fm, int param_1, float t)
{
    const char *c = GPTR_TO(char, (uint32_t)param_1);
    return ch_scaled(c, ch_value(fm, ch_search_int(fm, c, t)));
}

/* kind 1 / 2 on integer keys */
static inline float ch_interp_int(int fm, int hermite, int param_1, float t)
{
    const char *c = GPTR_TO(char, (uint32_t)param_1);
    const uint8_t *k = ch_search_int(fm, c, t);
    const float f0 = ch_ftime(fm, c, k);
    if (f0 == t || ch_is_last(c, k, ch_stride(fm)))
        return ch_scaled(c, ch_value(fm, k));
    const uint8_t *k1 = k + ch_stride(fm);
    const float f1 = ch_ftime(fm, c, k1);
    const float v0 = ch_scaled(c, ch_value(fm, k)), v1 = ch_scaled(c, ch_value(fm, k1));
    if (hermite)
        return ch_hermite(v0, ch_slope(fm, k, 1), v1, ch_slope(fm, k1, 0), t - f0, f1 - f0);
    float r = (t - f0) / (f1 - f0);
    return ch_lerp(v0, v1, r);
}

/* kind 1 / 2 on float keys (stride st floats; Hermite needs st >= 3) */
static inline float ch_interp_flt(uint32_t st, int hermite, int param_1, float t)
{
    const char *c = GPTR_TO(char, (uint32_t)param_1);
    const float *k = ch_search_flt(c, st, t);
    if (k[0] == t || ch_is_last(c, k, st * 4)) return k[1];
    const float *k1 = k + st;
    if (hermite)   /* st 4: slope out = k[3], slope in = k1[2]; st 3: k[2], k1[2] */
        return ch_hermite(k[1], k[st - 1], k1[1], k1[2], t - k[0], k1[0] - k[0]);
    float r = (t - k[0]) / (k1[0] - k[0]);
    return ch_lerp(k[1], k1[1], r);
}

#endif
