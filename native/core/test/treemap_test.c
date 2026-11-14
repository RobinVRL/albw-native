// SOURCES: sead_treemap.c
/* Tests for SafeString::compare and the LLRB TreeMap insert (native/core/sead_treemap.c):
 * in-order = sorted, no red right links, no two reds in a row, equal black height, equal-key
 * replacement calls the old node's vtable slot +8. */
#include "core.h"
#include "core_test.h"

int32_t func_0069190C(void *self, void *other, int32_t n);
uint32_t func_00687F18(uint32_t self, void *node_p, void *n_p);

static int assures, replaced;
static void assure(void *s) { (void)s; assures++; }
static void on_replace(void *s) { (void)s; replaced++; }

#define WD(p, o) FLD(p, o, uint32_t)
static char *mem, *vt;
static char *mknode(int i, const char *key) {
    char *n = mem + 0x100 + 0x40 * i;
    char *k = mem + 0x2000 + 0x20 * i;
    strcpy(k, key);
    WD(n, 0) = gp_u32(vt); WD(n, 0x10) = gp_u32(vt); WD(n, 0x14) = gp_u32(k);
    return n;
}
static int bad;
static int check(uint32_t w, const char **prev) {   /* returns black height */
    if (!w) return 1;
    char *n = gp_ptr(w);
    if (WD(n, 8) && FLD(gp_ptr(WD(n, 8)), 0xC, uint8_t) == 1) bad |= 1;           /* red right link */
    if (FLD(n, 0xC, uint8_t) == 1 && WD(n, 4) && FLD(gp_ptr(WD(n, 4)), 0xC, uint8_t) == 1) bad |= 2;
    int hl = check(WD(n, 4), prev);
    const char *k = gp_ptr(WD(n, 0x14));
    if (*prev && strcmp(*prev, k) >= 0) bad |= 4;
    *prev = k;
    int hr = check(WD(n, 8), prev);
    if (hl != hr) bad |= 8;
    return hl + (FLD(n, 0xC, uint8_t) != 1);
}

int main(void) {
    mem = lowalloc(0x4000);
    vt = mem;
    WD(vt, 8) = (uint32_t)(uintptr_t)assure;
    char *vt2 = mem + 0x40; WD(vt2, 8) = (uint32_t)(uintptr_t)on_replace;

    /* compare */
    char *a = mknode(0, "abc"), *b = mknode(1, "abd"), *c = mknode(2, "ab"), *d = mknode(3, "\xC0");
    CHECK_EQ((uint32_t)func_0069190C(a + 0x10, b + 0x10, 0x40000), (uint32_t)-1);
    CHECK_EQ(func_0069190C(b + 0x10, a + 0x10, 0x40000), 1);
    CHECK_EQ(func_0069190C(a + 0x10, c + 0x10, 0x40000), 1);
    CHECK_EQ((uint32_t)func_0069190C(c + 0x10, a + 0x10, 0x40000), (uint32_t)-1);
    CHECK_EQ(func_0069190C(a + 0x10, b + 0x10, 2), 0);
    CHECK_EQ(func_0069190C(a + 0x10, b + 0x10, 0), 0);
    CHECK_EQ(func_0069190C(a + 0x10, a + 0x10, 9), 0);
    CHECK_EQ((uint32_t)func_0069190C(d + 0x10, a + 0x10, 9), (uint32_t)-1);   /* signed chars: 0xC0 < 'a' */
    CHECK_EQ(assures, 3 * 8);

    /* insert 40 keys in a scrambled order */
    uint32_t root = 0;
    char key[8];
    for (int i = 0; i < 40; i++) {
        int k = (i * 17) % 40;
        snprintf(key, sizeof key, "k%02d", k);
        root = func_00687F18(0, gp_ptr(root), mknode(4 + i, key));
        FLD(gp_ptr(root), 0xC, uint8_t) = 0;          /* TreeMapImpl::insert blackens the root */
    }
    const char *prev = 0;
    check(root, &prev);
    CHECK_EQ(bad, 0);
    CHECK(prev && !strcmp(prev, "k39"));

    /* equal key: the new node replaces the old one, old vtable slot +8 called */
    char *dup = mknode(60, "k07");
    char *old = 0;
    for (int i = 0; i < 40; i++) if (!strcmp(gp_ptr(WD(mem + 0x100 + 0x40 * (4 + i), 0x14)), "k07")) old = mem + 0x100 + 0x40 * (4 + i);
    WD(old, 0) = gp_u32(vt2);
    root = func_00687F18(0, gp_ptr(root), dup);
    FLD(gp_ptr(root), 0xC, uint8_t) = 0;
    CHECK_EQ(replaced, 1);
    prev = 0; bad = 0; check(root, &prev);
    CHECK_EQ(bad, 0);
    /* empty subtree */
    char *e = mknode(61, "z");
    CHECK_EQ(func_00687F18(0, 0, e), gp_u32(e));
    CHECK_EQ(FLD(e, 0xC, uint8_t), 1); CHECK_EQ(WD(e, 4), 0);
    return CORE_DONE();
}
