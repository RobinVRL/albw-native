// SOURCES: crt_thumb.c
/* Tests for the Thumb C-library functions (native/core/crt_thumb.c). */
#include "core.h"
#include "core_test.h"

uint32_t func_00100950(uint32_t arr, void *dtor, uint32_t size, uint32_t count);
uint32_t func_00100A86(uint32_t dst, uint32_t src, uint32_t size, uint32_t count, void *cctor);
uint32_t func_00100986(uint32_t v);
uint32_t func_00100974(uint32_t v);
int32_t func_001006E0(int32_t c);
int32_t func_00100858(const void *a, const void *b, uint32_t n);
uint32_t func_00100834(uint32_t dst, const char *src, uint32_t n);
uint32_t func_00100910(const uint16_t *s);
int32_t func_001008E8(const uint16_t *a, const uint16_t *b, uint32_t n);
uint32_t func_001008CC(uint16_t *dst, const uint16_t *src, uint32_t n);
int32_t func_00100744(uint32_t buf, uint32_t n, uint32_t fmt, ...);

uint32_t data_007A9140;
/* stub of native/sdk/boot_extra.c 001006FC: records its arguments, formats %d only */
static uint32_t seen_words[4];
int32_t func_001006FC(uint16_t *buf, uint32_t n, const uint16_t *fmt, void *args) {
    memcpy(seen_words, args, sizeof seen_words);
    (void)fmt;
    if (n) buf[0] = 0;
    return 3;
}

static uint32_t order[16]; static int norder;
static void dtor(void *p) { order[norder++] = FLD(p, 0, uint32_t); }
static void cctor(void *d, void *s) { FLD(d, 0, uint32_t) = FLD(s, 0, uint32_t) * 10; }

int main(void) {
    char *m = lowalloc(0x1000);
    uint32_t base = gp_u32(m + 0x100);
    for (int i = 0; i < 4; i++) FLD(m, 0x100 + 0xC * i, uint32_t) = i + 1;
    CHECK_EQ(func_00100950(base, (void *)dtor, 0xC, 4), base - 8);
    CHECK_EQ(norder, 4); CHECK_EQ(order[0], 4); CHECK_EQ(order[3], 1);   /* reverse order */
    norder = 0; func_00100950(base, (void *)dtor, 0xC, 0); CHECK_EQ(norder, 0);

    CHECK_EQ(func_00100A86(gp_u32(m + 0x200), base, 0xC, 3, (void *)cctor), gp_u32(m + 0x200));
    CHECK_EQ(FLD(m, 0x200, uint32_t), 10); CHECK_EQ(FLD(m, 0x218, uint32_t), 30); CHECK_EQ(FLD(m, 0x224, uint32_t), 0);
    CHECK_EQ(func_00100A86(gp_u32(m + 0x300), base, 0xC, 3, 0), gp_u32(m + 0x300));
    CHECK_EQ(FLD(m, 0x300, uint32_t), 0);

    CHECK_EQ(func_00100974(33), gp_u32(&data_007A9140)); CHECK_EQ(data_007A9140, 33);
    func_00100986(1); CHECK_EQ(data_007A9140, 1);

    CHECK_EQ(func_001006E0('A'), 'a'); CHECK_EQ(func_001006E0('Z'), 'z'); CHECK_EQ(func_001006E0('['), '[');
    CHECK_EQ(func_001006E0('a'), 'a'); CHECK_EQ(func_001006E0(0xC0), 0xC0); CHECK_EQ((uint32_t)func_001006E0(-1), (uint32_t)-1);

    CHECK_EQ(func_00100858("abcdefgh", "abcdefgh", 8), 0);
    CHECK_EQ((uint32_t)func_00100858("abcdXfgh", "abcdefgh", 8), (uint32_t)('X' - 'e'));
    CHECK_EQ((uint32_t)func_00100858("\xff", "\x01", 1), 0xFE);
    CHECK_EQ(func_00100858("ab", "ac", 1), 0);

    char *s = m + 0x400; strcpy(s, "ab");
    CHECK_EQ(func_00100834(gp_u32(s), "cdef", 2), gp_u32(s)); CHECK(!strcmp(s, "abcd"));
    CHECK_EQ(func_00100834(gp_u32(s), "xy", 10), gp_u32(s)); CHECK(!strcmp(s, "abcdxy"));
    CHECK_EQ(func_00100834(gp_u32(s), "q", 0), gp_u32(s)); CHECK(!strcmp(s, "abcdxy"));

    uint16_t *w1 = (uint16_t *)(m + 0x500), *w2 = (uint16_t *)(m + 0x510), *w3 = (uint16_t *)(m + 0x520);
    w1[0] = 'h'; w1[1] = 'i'; w1[2] = 0; w2[0] = 'h'; w2[1] = 'o'; w2[2] = 0;
    CHECK_EQ(func_00100910(w1), 2);
    CHECK_EQ((uint32_t)func_001008E8(w1, w2, 5), (uint32_t)('i' - 'o'));
    CHECK_EQ(func_001008E8(w1, w2, 1), 0);
    CHECK_EQ(func_001008E8(w1, w1, 9), 0);
    for (int i = 0; i < 8; i++) w3[i] = 0x7777;
    CHECK(func_001008CC(w3, w1, 5) == gp_u32(w3));
    CHECK_EQ(w3[1], 'i'); CHECK_EQ(w3[2], 0); CHECK_EQ(w3[4], 0); CHECK_EQ(w3[5], 0x7777);

    static const uint16_t fmt0[] = {'n', '_', '%', 'd', '%', 'l', 'l', 'x', '%', 's', 0};
    uint16_t *fmt = (uint16_t *)(m + 0x600), *out = (uint16_t *)(m + 0x640);
    memcpy(fmt, fmt0, sizeof fmt0);
    CHECK_EQ(func_00100744(gp_u32(out), 8, gp_u32(fmt), -5, 0x1122334455667788ull, gp_u32(w1)), 3);
    CHECK_EQ(seen_words[0], (uint32_t)-5); CHECK_EQ(seen_words[1], 0x55667788); CHECK_EQ(seen_words[2], 0x11223344);
    CHECK_EQ(seen_words[3], gp_u32(w1));
    return CORE_DONE();
}
