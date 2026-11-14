/* native/refs/lms test: synthetic MsgStdBn (LBL1 + TXT2 + ATR1, UTF-16) and MsgFlwBn files in
 * low memory, every hand-written LMS function, hash values, close/free accounting. */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "lowmem.h"
#include "../lms.h"

uint32_t data_007166D8[2];
uint32_t func_0011EE2C(uint32_t data);
uint32_t func_0011EDA4(uint32_t data);
uint32_t func_0011EED0(uint32_t data);
void func_0011E674(uint32_t bin);
void func_0011F168(uint32_t bin);
void func_0011F054(uint32_t a, uint32_t f);
int32_t func_0011EC80(uint32_t msg);
int32_t func_0011EACC(uint32_t flw);
uint32_t func_0011EAA4(uint32_t flw, int32_t i);
int32_t func_0011EBA8(uint32_t msg, uint32_t label);
int32_t func_0011E898(uint32_t flw, uint32_t label);
uint32_t func_0011EB40(uint32_t msg, int32_t i);
int32_t func_0011EC9C(uint32_t msg, int32_t i);
int32_t func_0011E9EC(uint32_t msg, int32_t index, uint32_t out);
int32_t func_0011EB7C(uint32_t holder, uint32_t str);

static int fails, checks;
#define CHECK(c) do { checks++; if (!(c)) { fails++; printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); } } while (0)

static char *arena; static uint32_t arena_used; static int nalloc, nfree;
static uint32_t t_alloc(uint32_t size) { char *p = arena + arena_used; arena_used += (size + 15) & ~15u; nalloc++; return lms_w(p); }
static void t_free(uint32_t p) { (void)p; nfree++; }

static uint32_t ref_hash(const char *s, uint32_t n) {
    uint32_t h = 0;
    while (*s) h = h * 1170u + (uint32_t)(int32_t)(signed char)*s++;
    return h % n;
}

/* file builder */
static char *f; static uint32_t fo;
static void put(const void *p, uint32_t n) { memcpy(f + fo, p, n); fo += n; }
static void u8_(uint8_t v) { put(&v, 1); }
static void u16_(uint16_t v) { put(&v, 2); }
static void u32_(uint32_t v) { put(&v, 4); }
static void align16(void) { while (fo & 15) f[fo++] = (char)0xAB; }
static uint32_t block_begin(const char *type) { put(type, 4); u32_(0); u16_(0x1234); u16_(0); u32_(0); return fo; }
static void block_end(uint32_t body) { uint32_t sz = fo - body; memcpy(f + body - 12, &sz, 4); align16(); }

static const char *labels[] = {"Title_00", "Menu_Start", "Z"};
#define NSLOTS 3u

static void build_lbl1(void) {
    uint32_t body = block_begin("LBL1");
    u32_(NSLOTS);
    uint32_t cnt[NSLOTS] = {0}, offs[NSLOTS];
    for (int i = 0; i < 3; i++) cnt[ref_hash(labels[i], NSLOTS)]++;
    uint32_t off = 4 + NSLOTS * 8;
    for (uint32_t s = 0; s < NSLOTS; s++) {
        offs[s] = off;
        for (int i = 0; i < 3; i++) if (ref_hash(labels[i], NSLOTS) == s) off += (uint32_t)strlen(labels[i]) + 5;
    }
    for (uint32_t s = 0; s < NSLOTS; s++) { u32_(cnt[s]); u32_(offs[s]); }
    for (uint32_t s = 0; s < NSLOTS; s++)
        for (int i = 0; i < 3; i++) if (ref_hash(labels[i], NSLOTS) == s) {
            u8_((uint8_t)strlen(labels[i])); put(labels[i], (uint32_t)strlen(labels[i])); u32_((uint32_t)i);
        }
    block_end(body);
}
static void build_txt2(void) {
    uint32_t body = block_begin("TXT2");
    u32_(3); uint32_t tab = fo; u32_(0); u32_(0); u32_(0);
    uint32_t o;
    o = fo - body; memcpy(f + tab, &o, 4); u16_('H'); u16_('i'); u16_(0);
    o = fo - body; memcpy(f + tab + 4, &o, 4); u16_('A'); u16_(0xE); u16_(1); u16_(2); u16_(4); u32_(0x11223344); u16_('B'); u16_(0);
    o = fo - body; memcpy(f + tab + 8, &o, 4); u16_(0xF); u16_(0); u16_(0); u16_('C'); u16_(0);
    block_end(body);
}

int main(void) {
    arena = lowalloc(1 << 16);
    f = lowalloc(1 << 14);
    func_0011F054(lms_w((void *)t_alloc), lms_w((void *)t_free));
    CHECK(data_007166D8[0] == lms_w((void *)t_alloc) && data_007166D8[1] == lms_w((void *)t_free));

    /* hash: independent reference + fixed values */
    CHECK(func_0011F198(lms_w("A"), 1000) == 65);
    CHECK(func_0011F198(lms_w("AB"), 0xFFFFFFFFu) == 65u * 1170u + 66u);
    CHECK(func_0011F198(lms_w("\xFF"), 0xFFFFFFFFu) == 0xFFFFFFFFu % 0xFFFFFFFFu);      /* signed char -1 */
    CHECK(func_0011F198(lms_w("\xFF"), 0) == 0xFFFFFFFFu);                              /* /0: remainder = x */
    CHECK(func_0011F198(lms_w("Menu_Start"), 101) == ref_hash("Menu_Start", 101));
    CHECK(func_0011F198(lms_w(""), 7) == 0);
    CHECK(func_0011F1E8(lms_w("abc"), lms_w("abd"), 2) == 1 && func_0011F1E8(lms_w("abc"), lms_w("abd"), 3) == 0);
    CHECK(func_0011F1E8(lms_w("a"), lms_w("b"), 0) == 1 && func_0011F1E8(lms_w("a"), lms_w("b"), -1) == 1);

    /* MsgStdBn: header, LBL1, TXT2, ATR1 */
    memset(f, 0, 0x20); memcpy(f, "MsgStdBn", 8); f[8] = (char)0xFF; f[9] = (char)0xFE;
    f[0xC] = 1; f[0xD] = 3; f[0xE] = 3; fo = 0x20;
    build_lbl1(); build_txt2();
    { uint32_t body = block_begin("ATR1"); u32_(0); block_end(body); }
    uint32_t fsz = fo; memcpy(f + 0x12, &fsz, 4);
    uint32_t m = func_0011EE2C(lms_w(f));
    char *mp = lms_p(m);
    CHECK(LMS_FLD(mp, 0, uint32_t) == lms_w(f));
    CHECK(LMS_FLD(mp, 4, uint32_t) == fsz && LMS_FLD(mp, 8, uint8_t) == 1 && LMS_FLD(mp, 0xA, uint16_t) == 3);
    CHECK(LMS_FLD(mp, 0x10, int32_t) == 0 && LMS_FLD(mp, 0x14, int32_t) == 1 && LMS_FLD(mp, 0x18, int32_t) == 2);
    CHECK(LMS_FLD(mp, 0x1C, int32_t) == -1);
    char *blk = lms_p(LMS_FLD(mp, 0xC, uint32_t));
    CHECK(memcmp(blk + 16 + 4, "TXT2", 4) == 0 && LMS_FLD(blk, 0xC, uint16_t) == 0x1234);
    CHECK(LMS_FLD(blk, 0, uint32_t) == lms_w(f) + 0x30);
    CHECK(func_0011EC80(m) == 3);
    CHECK(func_0011EBA8(m, lms_w("Title_00")) == 0);
    CHECK(func_0011EBA8(m, lms_w("Menu_Start")) == 1);
    CHECK(func_0011EBA8(m, lms_w("Z")) == 2);
    CHECK(func_0011EBA8(m, lms_w("Menu_Stop")) == -1);
    CHECK(func_0011EBA8(m, lms_w("")) == -1);
    char *t0 = lms_p(func_0011EB40(m, 0));
    CHECK(t0 && LMS_FLD(t0, 0, uint16_t) == 'H');
    CHECK(func_0011EB40(m, 3) == 0);
    CHECK(func_0011EC9C(m, 0) == 4);
    CHECK(func_0011EC9C(m, 1) == 2 + 8 + 4 + 2);
    CHECK(func_0011EC9C(m, 2) == 6 + 2);
    CHECK(func_0011EC9C(m, 3) == -1);
    char out[64];
    char *lo = lowalloc(64);
    CHECK(func_0011E9EC(m, 1, lms_w(lo)) == 1 && strcmp(lo, "Menu_Start") == 0);
    CHECK(func_0011E9EC(m, 7, lms_w(lo)) == 0);
    (void)out;
    LMS_FLD(mp, 8, uint8_t) = 0;  /* UTF-8 walk over the same bytes: 'H' 0 -> 1 */
    CHECK(func_0011EC9C(m, 0) == 1);
    LMS_FLD(mp, 8, uint8_t) = 3;
    CHECK(func_0011EC9C(m, 0) == -1);
    LMS_FLD(mp, 8, uint8_t) = 1;
    LMS_FLD(mp, 0x10, int32_t) = -1;
    CHECK(func_0011EBA8(m, lms_w("Z")) == -2);
    LMS_FLD(mp, 0x10, int32_t) = 0;

    /* 0011EB7C: holder->+8 = msg, SafeString {vtable, cstr} */
    static int called;
    struct { uint32_t vt, cstr; } *ss = lowalloc(64);
    uint32_t *vt = lowalloc(64);
    void assure(void *s);
    vt[2] = lms_w((void *)assure);
    ss->vt = lms_w(vt); ss->cstr = lms_w("Z");
    uint32_t *holder = lowalloc(16); holder[2] = m;
    extern int assure_calls;
    CHECK(func_0011EB7C(lms_w(holder), lms_w(ss)) == 2 && assure_calls == 1);
    (void)called;

    int a0 = nalloc, f0 = nfree;
    func_0011E674(m);
    CHECK(nfree - f0 == 2 && nalloc == a0);

    /* MsgFlwBn: FLW3 + FEN1 */
    memset(f, 0, 0x4000); memcpy(f, "MsgFlwBn", 8); f[0xE] = 2; fo = 0x20;
    { uint32_t body = block_begin("FLW3"); u16_(5); u16_(1); for (int i = 0; i < 12; i++) u8_(0); block_end(body); }
    { uint32_t body = block_begin("FEN1"); u32_(1); u32_(1); u32_(12); u8_(3); put("ent", 3); u32_(42); block_end(body); }
    uint32_t fl = func_0011EDA4(lms_w(f));
    CHECK(LMS_FLD(lms_p(fl), 0x10, int32_t) == 0 && LMS_FLD(lms_p(fl), 0x14, int32_t) == 1 && LMS_FLD(lms_p(fl), 0x18, int32_t) == -1);
    CHECK(func_0011EACC(fl) == 5);
    CHECK(func_0011EAA4(fl, 2) == lms_w(f) + 0x30 + 0x10 + 0x20);
    CHECK(func_0011E898(fl, lms_w("ent")) == 42 && func_0011E898(fl, lms_w("en")) == -1);
    LMS_FLD(lms_p(fl), 0x10, int32_t) = -1; LMS_FLD(lms_p(fl), 0x14, int32_t) = -1;
    CHECK(func_0011EACC(fl) == -4 && func_0011EAA4(fl, 0) == 0 && func_0011E898(fl, lms_w("ent")) == -10);
    f0 = nfree; func_0011F168(fl); CHECK(nfree - f0 == 2);

    /* MsgPrjBn with no blocks: blocks pointer 0, all indices -1, close frees only the object */
    memset(f, 0, 0x40); memcpy(f, "MsgPrjBn", 8);
    a0 = nalloc;
    uint32_t pj = func_0011EED0(lms_w(f));
    CHECK(nalloc - a0 == 1 && LMS_FLD(lms_p(pj), 0xC, uint32_t) == 0);
    int allm1 = 1; for (uint32_t o = 0x10; o < 0x40; o += 4) allm1 &= LMS_FLD(lms_p(pj), o, int32_t) == -1;
    CHECK(allm1);
    f0 = nfree; func_0011E674(pj); CHECK(nfree - f0 == 1);

    printf("lms: %d checks, %d failures\n", checks, fails);
    return fails != 0;
}
int assure_calls;
void assure(void *s) { (void)s; assure_calls++; }
