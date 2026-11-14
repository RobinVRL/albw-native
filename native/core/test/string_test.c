// SOURCES: sead_string.c sead_random.c sead_hash.c
/* Tests for the sead string / random / CRC rewrites (expected values derived by hand from the
 * ARM code; game objects in low memory; external callees stubbed). */
#include <stdarg.h>
#include "core_test.h"
#include "core_str.h"

/* ---- stubs for the game symbols the sources reference ---- */
static int assure_calls;
static void vt_noop(void *s) { (void)s; assure_calls++; }
static void vt_buffered(void *s) {   /* 00691BD0 behaviour */
    assure_calls++;
    SS_P(SS_W(s, 4) + SS_W(s, 8) - 1)[0] = 0;
}
uint32_t DAT_00689a38, DAT_0010be34, DAT_00688f2c, DAT_00689040, DAT_00688ff0, DAT_00688ff4,
    DAT_00688ff8, DAT_00689210, DAT_00689214;
uint32_t data_007124F0[1];
uint8_t data_00714E80[1];
uint32_t data_0079D790[256];

static uint32_t *vt_plain, *vt_buf;
static uint32_t make_vt(void (*f)(void *)) {
    uint32_t *v = lowalloc(16);
    v[2] = (uint32_t)(uintptr_t)f;
    return gp_u32(v);
}

void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment) { (void)heap; (void)alignment; return lowalloc(size); }
/* minimal vsnprintf over an ARM word array: %d and %s only */
int32_t func_0010013C(char *buf, uint32_t size, const char *fmt, void *args) {
    const uint32_t *ap = args;
    char tmp[256];
    uint32_t o = 0;
    for (const char *p = fmt; *p; p++) {
        if (*p == '%' && p[1] == 'd') { o += snprintf(tmp + o, sizeof tmp - o, "%d", (int32_t)*ap++); p++; }
        else if (*p == '%' && p[1] == 's') { o += snprintf(tmp + o, sizeof tmp - o, "%s", SS_P(*ap++)); p++; }
        else tmp[o++] = *p;
    }
    tmp[o] = 0;
    if (size) { uint32_t n = o < size - 1 ? o : size - 1; memcpy(buf, tmp, n); buf[n] = 0; }
    return (int32_t)o;
}
static uint32_t rnd_value;
uint32_t func_00111A64(void *r) { (void)r; return rnd_value; }
void *func_0010DA24(void *tick) { FLD(tick, 0, uint32_t) = 1; FLD(tick, 4, uint32_t) = 0; return tick; }

/* prototypes of the functions under test */
uint32_t func_0010BB00(void *, const void *);
uint32_t func_003D22CC(void *, const void *);
uint32_t func_003D2288(void *, uint32_t, void *);
uint32_t func_00689A2C(void *, uint32_t, int32_t);
uint32_t func_0010BDF0(void *);
uint32_t func_00689024(void *);
uint32_t func_00688F58(void *, void *);
uint32_t func_006890C8(void *, void *, void *);
int32_t func_00689894(uint32_t, void *, int32_t);
int32_t func_00689A64(uint32_t, void *, int32_t);
int32_t func_00689928(void *, void *, int32_t);
int32_t func_00111A20(uint32_t, uint32_t, void *);
int32_t func_003E6AA8(uint32_t, uint32_t, int32_t, uint32_t, ...);
uint32_t func_00691884(void *, void *);
int32_t func_006919D8(void *, void *);
int32_t func_00691568(void *, void *);
uint32_t func_006916F0(void *, void *);
int32_t func_00688CA0(uint32_t, void *);
uint32_t func_0049BB30(void *, uint32_t);
uint32_t func_0010FD28(void *, uint32_t);
uint32_t func_0058A7D4(void);
uint32_t func_0058A474(uint32_t, uint32_t);
uint32_t func_003E300C(const uint8_t *, uint32_t, uint32_t);
uint32_t func_004A13D4(void);
uint32_t func_004A143C(const uint8_t *, uint32_t);

static char *lowstr(const char *s) { char *p = lowalloc(strlen(s) + 1); strcpy(p, s); return p; }
static void *safestr(const char *s) {          /* SafeString {vt, top} */
    uint32_t *o = lowalloc(8);
    o[0] = gp_u32(vt_plain); o[1] = gp_u32(lowstr(s));
    return o;
}
static void *bufstr(int32_t size) {             /* BufferedSafeString over its own buffer */
    uint32_t *o = lowalloc(12);
    char *b = lowalloc((size_t)size + 4);
    func_00689A2C(o, gp_u32(b), size);
    o[0] = gp_u32(vt_buf);
    return o;
}
#define TOP(o) SS_P(SS_W(o, 4))

int main(void) {
    vt_plain = gp_ptr(make_vt(vt_noop));
    vt_buf = gp_ptr(make_vt(vt_buffered));
    DAT_00689a38 = DAT_00688ff0 = DAT_00689210 = gp_u32(vt_buf);
    DAT_0010be34 = 0x6F5BBC; DAT_00688f2c = 0x6F5BF8; DAT_00689040 = 0x6F5C98;
    DAT_00688ff4 = 0x6F6C44; DAT_00688ff8 = 0x6F5C98; DAT_00689214 = 0x6F6AD8;

    /* value helpers */
    uint32_t *a = lowalloc(8), *b = lowalloc(8), *c = lowalloc(0x40);
    b[0] = 11; b[1] = 22;
    CHECK_EQ(func_0010BB00(a, b), gp_u32(a)); CHECK_EQ(a[0], 11); CHECK_EQ(a[1], 22);
    func_003D22CC(a, 0); CHECK_EQ(a[0], 0); CHECK_EQ(a[1], 0);
    c[8] = 5; c[9] = 6;
    CHECK_EQ(func_003D2288(a, gp_u32(c), b), gp_u32(a));
    CHECK_EQ(a[0], 5); CHECK_EQ(a[1], 6); CHECK_EQ(b[0], 5); CHECK_EQ(b[1], 6);

    /* constructors */
    uint32_t *bs = lowalloc(12);
    char *raw = lowalloc(8); memset(raw, 'x', 8);
    func_00689A2C(bs, gp_u32(raw), 8);
    CHECK_EQ(bs[0], DAT_00689a38); CHECK_EQ(bs[1], gp_u32(raw)); CHECK_EQ(bs[2], 8); CHECK_EQ(raw[7], 0); CHECK_EQ(raw[0], 'x');
    func_00689A2C(bs, gp_u32(raw), 0); CHECK_EQ(bs[1], 0); CHECK_EQ(bs[2], 0);
    uint8_t *fx = lowalloc(0x60); memset(fx, 0x55, 0x60);
    CHECK_EQ(func_0010BDF0(fx), gp_u32(fx));
    CHECK_EQ(FLD(fx, 0, uint32_t), 0x6F5BBC); CHECK_EQ(FLD(fx, 4, uint32_t), gp_u32(fx + 0xC));
    CHECK_EQ(FLD(fx, 8, uint32_t), 0x18); CHECK_EQ(fx[0xC], 0); CHECK_EQ(fx[0xC + 23], 0); CHECK_EQ(fx[0xD], 0x55);
    func_00689024(fx); CHECK_EQ(FLD(fx, 8, uint32_t), 0x40); CHECK_EQ(fx[0xC + 63], 0);
    uint8_t *f64 = lowalloc(0x4C);
    func_00688F58(f64, safestr("hello"));
    CHECK_EQ(FLD(f64, 0, uint32_t), 0x6F5C98); CHECK(strcmp((char *)f64 + 0xC, "hello") == 0);
    uint32_t *hs = lowalloc(12);
    func_006890C8(hs, 0, safestr("heap!"));
    CHECK_EQ(hs[0], 0x6F6AD8); CHECK_EQ(hs[2], 6); CHECK(strcmp(TOP(hs), "heap!") == 0);

    /* copy / append / formatV */
    void *d = bufstr(4);
    assure_calls = 0;
    CHECK_EQ(func_00689894(gp_u32(d), safestr("abcdef"), -1), 3);
    CHECK(strcmp(TOP(d), "abc") == 0); CHECK_EQ(assure_calls, 2);
    assure_calls = 0;
    CHECK_EQ(func_00689894(gp_u32(d), safestr("abcdef"), 1), 1);
    CHECK(strcmp(TOP(d), "a") == 0); CHECK_EQ(assure_calls, 1);
    void *ap = bufstr(4);
    func_00689894(gp_u32(ap), safestr("ab"), -1);
    CHECK_EQ(func_00689928(ap, safestr("cde"), -1), 1); CHECK(strcmp(TOP(ap), "abc") == 0);
    CHECK_EQ(func_00689928(ap, safestr("z"), -1), 0); CHECK(strcmp(TOP(ap), "abc") == 0);
    void *ap2 = bufstr(16);
    func_00689894(gp_u32(ap2), safestr("12"), -1);
    CHECK_EQ(func_00689928(ap2, safestr("3456"), 2), 2); CHECK(strcmp(TOP(ap2), "1234") == 0);
    /* wide copy */
    uint32_t *wd = lowalloc(12); uint16_t *wb = lowalloc(16);
    wd[0] = gp_u32(vt_plain); wd[1] = gp_u32(wb); wd[2] = 3;
    uint16_t *ws = lowalloc(16); ws[0] = 'A'; ws[1] = 'B'; ws[2] = 'C'; ws[3] = 0;
    uint32_t *wsrc = lowalloc(8); wsrc[0] = gp_u32(vt_plain); wsrc[1] = gp_u32(ws);
    CHECK_EQ(func_00689A64(gp_u32(wd), wsrc, -1), 2); CHECK_EQ(wb[0], 'A'); CHECK_EQ(wb[1], 'B'); CHECK_EQ(wb[2], 0);
    /* formatV: ARM va_list = word array */
    void *fs = bufstr(6);
    uint32_t *words = lowalloc(8); words[0] = 12345;
    CHECK_EQ(func_00111A20(gp_u32(fs), gp_u32(lowstr("n=%d")), words), 5);
    CHECK(strcmp(TOP(fs), "n=123") == 0);
    words[0] = 7;
    CHECK_EQ(func_00111A20(gp_u32(fs), gp_u32(lowstr("%d")), words), 1);
    char *ob = lowalloc(32);
    CHECK_EQ(func_003E6AA8(gp_u32(ob), 32, 3, gp_u32(lowstr("v%dw")), 42), 4);
    CHECK(strcmp(ob, "v42") == 0);

    /* queries */
    void *hw = safestr("hello world");
    CHECK_EQ(func_00691884(hw, safestr("hello world")), 1);
    CHECK_EQ(func_00691884(hw, safestr("hello")), 0);
    CHECK_EQ(func_00691884(hw, hw), 1);
    CHECK_EQ(func_006919D8(hw, safestr("o")), 4);
    CHECK_EQ(func_00691568(hw, safestr("o")), 7);
    CHECK_EQ(func_006919D8(hw, safestr("world")), 6);
    CHECK_EQ(func_006919D8(hw, safestr("xyz")), -1);
    CHECK_EQ(func_006919D8(safestr("ab"), safestr("abc")), -1);
    CHECK_EQ(func_00691568(safestr("ab"), safestr("abc")), -1);
    CHECK_EQ(func_006919D8(hw, safestr("")), 0);
    CHECK_EQ(func_006916F0(hw, safestr("lo w")), 1);
    CHECK_EQ(func_006916F0(hw, safestr("low")), 0);

    /* tokenizer */
    uint32_t *tk = lowalloc(0x14);
    tk[1] = gp_u32(safestr("a,b,,c"));
    tk[2] = 0;
    uint32_t *dl = safestr(",");
    tk[3] = dl[0]; tk[4] = dl[1];
    void *tok = bufstr(16);
    CHECK_EQ(func_00688CA0(gp_u32(tk), tok), 1); CHECK(strcmp(TOP(tok), "a") == 0); CHECK_EQ(tk[2], 2);
    CHECK_EQ(func_00688CA0(gp_u32(tk), tok), 1); CHECK(strcmp(TOP(tok), "b") == 0); CHECK_EQ(tk[2], 4);
    CHECK_EQ(func_00688CA0(gp_u32(tk), tok), 0); CHECK(strcmp(TOP(tok), "") == 0); CHECK_EQ(tk[2], 5);
    CHECK_EQ(func_00688CA0(gp_u32(tk), tok), 1); CHECK(strcmp(TOP(tok), "c") == 0); CHECK_EQ(tk[2], 7);
    CHECK_EQ(func_00688CA0(gp_u32(tk), tok), 0); CHECK_EQ(tk[2], 7);

    /* random */
    uint32_t *r = lowalloc(16);
    uint32_t x = 0x6C078966u, y = (x ^ (x >> 30)) * 0x6C078965u + 2;
    CHECK_EQ(func_0049BB30(r, 1), gp_u32(r + 2));
    CHECK_EQ(r[0], x); CHECK_EQ(r[1], y);
    uint32_t z = (y ^ (y >> 30)) * 0x6C078965u + 3, w = (z ^ (z >> 30)) * 0x6C078965u + 4;
    CHECK_EQ(r[2], z); CHECK_EQ(r[3], w);
    memset(r, 0, 16);
    CHECK_EQ(func_0010FD28(r, 0), w); CHECK_EQ(r[0], x);
    data_007124F0[0] = 0x1000;
    CHECK_EQ(func_0058A7D4(), 0x1660);
    rnd_value = 0x80000000u;
    CHECK_EQ(func_0058A474(0, 50), 0); CHECK_EQ(func_0058A474(0, 51), 1);
    rnd_value = 0xFFFFFFFFu;
    CHECK_EQ(func_0058A474(0, 99), 0); CHECK_EQ(func_0058A474(0, 100), 1);

    /* CRC-32 */
    const uint8_t *nine = (const uint8_t *)"123456789";
    CHECK_EQ(func_004A143C(nine, 9), 0xCBF43926u);
    CHECK_EQ(data_00714E80[0], 1); CHECK_EQ(data_0079D790[1], 0x77073096u);
    CHECK_EQ(func_003E300C(nine, 9, 0xFFFFFFFFu), 0xCBF43926u);
    CHECK_EQ(func_003E300C(nine, 0, 0x12345678u), ~0x12345678u);
    CHECK_EQ(func_003E300C(nine + 4, 5, ~func_003E300C(nine, 4, 0xFFFFFFFFu)), 0xCBF43926u);
    CHECK_EQ(func_004A13D4(), 0x2D02EF8Du);
    return CORE_DONE();
}
