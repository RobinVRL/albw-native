// SOURCES: sead_list.c sead_container.c
/* Tests for the intrusive lists and PtrArray helpers (sead_list.c, sead_container.c). All
 * objects in low memory (link words are 32-bit game pointers). */
#include "core.h"
#include "core_test.h"

void func_0010F1F8(void *node);
uint32_t func_0010F1DC(void *self, void *n);
uint32_t func_0049F5FC(void *list);
uint32_t func_0049F688(uint32_t list);
uint32_t func_0049F634(void *list);
uint32_t func_00112364(void *list, uint32_t it, void *p);
uint32_t func_00111EF0(void *list, void *p);
uint32_t func_00111EE4(uint32_t obj, uint32_t item);
uint32_t func_003E696C(void *list, void *it);
uint32_t func_003E69B8(void *list, void *first, void *last);
uint32_t func_0049F6DC(uint32_t self, void *n);
void func_0049F434(void *list, int32_t offset, void *cmp_fn);
uint32_t func_0010B3EC(void *arr, int32_t max, uint32_t buf);
uint32_t func_0010B380(void *arr, int32_t max, void *heap, int32_t align);
uint32_t func_0010B3C0(void *arr, int32_t idx, int32_t num);

static void *last_heap; static int32_t last_align; static uint32_t last_size; static void *new_ret;
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment) {
    last_size = size; last_heap = heap; last_align = alignment; return new_ret;
}

#define U(p) gp_u32(p)
#define WD(p, o) FLD(p, o, uint32_t)

/* objects: {s32 key @0, ListNode @8}: offset 8 */
static int32_t cmp_calls;
static int32_t cmp_key(void *a, void *b) { cmp_calls++; return FLD(a, 0, int32_t) - FLD(b, 0, int32_t); }

/* walk a sead list forward, check back links, write keys */
static int walk(char *l, int32_t *keys, int max) {
    int n = 0; uint32_t prev = U(l);
    for (uint32_t c = WD(l, 4); c != U(l) && n < max; c = WD(gp_ptr(c), 4)) {
        if (WD(gp_ptr(c), 0) != prev) return -1;
        keys[n++] = FLD((char *)gp_ptr(c) - 8, 0, int32_t);
        prev = c;
    }
    if (WD(l, 0) != prev) return -2;
    return n;
}
static void push_back(char *l, char *node) {        /* ListImpl::pushBack via insertFront_ on mStartEnd */
    func_0010F1DC(l, node);
    WD(l, 8) += 1;
}

int main(void) {
    char *mem = lowalloc(0x4000);
    char *l = mem;                                   /* ListImpl at +0 */
    char *obj = mem + 0x100;                          /* 16 objects of 0x20 bytes */
    int32_t keys[32];

    /* empty list, clear */
    WD(l, 0) = 0x1234; WD(l, 4) = U(l); WD(l, 8) = 77;
    CHECK_EQ(func_0049F5FC(l), U(l));
    CHECK_EQ(WD(l, 0), U(l)); CHECK_EQ(WD(l, 4), U(l)); CHECK_EQ(WD(l, 8), 0);

    int32_t init[] = {5, 3, 9, 3, 1, 7, 5, 0};
    for (int i = 0; i < 8; i++) { FLD(obj + i * 0x20, 0, int32_t) = init[i]; FLD(obj + i * 0x20, 4, int32_t) = i; push_back(l, obj + i * 0x20 + 8); }
    CHECK_EQ(walk(l, keys, 32), 8);
    CHECK_EQ(keys[0], 5); CHECK_EQ(keys[7], 0);
    CHECK_EQ(WD(l, 8), 8);

    /* sort (stable insertion sort) */
    func_0049F434(l, 8, (void *)cmp_key);
    CHECK_EQ(walk(l, keys, 32), 8);
    int32_t sorted[] = {0, 1, 3, 3, 5, 5, 7, 9};
    for (int i = 0; i < 8; i++) CHECK_EQ(keys[i], sorted[i]);
    /* stability: the two 3s keep insertion order (objects 1 then 3) */
    char *first3 = (char *)gp_ptr(WD(gp_ptr(WD(gp_ptr(WD(l, 4)), 4)), 4)) - 8;
    CHECK_EQ(FLD(first3, 4, int32_t), 1);
    /* count <= 1: no compare call */
    cmp_calls = 0; WD(l, 8) = 1; func_0049F434(l, 8, (void *)cmp_key); CHECK_EQ(cmp_calls, 0); WD(l, 8) = 8;

    /* popFront / popBack */
    uint32_t f = func_0049F688(U(l));
    CHECK_EQ(FLD((char *)gp_ptr(f) - 8, 0, int32_t), 0);
    CHECK_EQ(WD(gp_ptr(f), 0), 0); CHECK_EQ(WD(gp_ptr(f), 4), 0);
    uint32_t b = func_0049F634(l);
    CHECK_EQ(FLD((char *)gp_ptr(b) - 8, 0, int32_t), 9);
    CHECK_EQ(WD(l, 8), 6);
    CHECK_EQ(walk(l, keys, 32), 6);
    char *mid = (char *)gp_ptr(WD(gp_ptr(WD(l, 4)), 4));
    func_0010F1F8(mid);
    WD(l, 8) -= 1;
    CHECK_EQ(walk(l, keys, 32), 5);
    CHECK_EQ(keys[0], 1); CHECK_EQ(keys[1], 3);
    /* erase_ of an unlinked node (prev = next = 0) is a no-op */
    func_0010F1F8(mid); CHECK_EQ(WD(mid, 0), 0);
    /* insertBack_ after the front */
    CHECK_EQ(func_0049F6DC(WD(l, 4), mid), WD(l, 4));
    WD(l, 8) += 1;
    CHECK_EQ(walk(l, keys, 32), 6);
    CHECK_EQ(keys[1], 3);
    /* clear zeroes every node */
    func_0049F5FC(l);
    CHECK_EQ(WD(mid, 0), 0); CHECK_EQ(WD(mid, 4), 0); CHECK_EQ(WD(l, 8), 0);
    /* pop on an empty / negative-count list returns 0 */
    CHECK_EQ(func_0049F688(U(l)), 0);
    WD(l, 8) = (uint32_t)-3; CHECK_EQ(func_0049F634(l), 0); WD(l, 8) = 0;

    /* ---- nw::ut::LinkList: {size @0, terminator {next @4, prev @8}}, node {next, prev} */
    char *ll = mem + 0x800, *term = ll + 4;
    WD(ll, 0) = 0; WD(term, 0) = U(term); WD(term, 4) = U(term);
    char *n[6];
    for (int i = 0; i < 6; i++) { n[i] = mem + 0x900 + i * 0x10; CHECK_EQ(func_00112364(ll, U(term), n[i]), U(n[i])); }
    CHECK_EQ(WD(ll, 0), 6);
    CHECK_EQ(WD(term, 0), U(n[0])); CHECK_EQ(WD(term, 4), U(n[5]));
    CHECK_EQ(WD(n[2], 0), U(n[3])); CHECK_EQ(WD(n[2], 4), U(n[1]));
    /* Erase(p) returns next and zeroes p */
    CHECK_EQ(func_00111EF0(ll, n[2]), U(n[3]));
    CHECK_EQ(WD(n[1], 0), U(n[3])); CHECK_EQ(WD(n[3], 4), U(n[1]));
    CHECK_EQ(WD(n[2], 0), 0); CHECK_EQ(WD(ll, 0), 5);
    /* Erase(it) (003E696C) erases exactly one node, returns its old next */
    CHECK_EQ(func_003E696C(ll, n[3]), U(n[4]));
    CHECK_EQ(WD(ll, 0), 4); CHECK_EQ(WD(n[1], 0), U(n[4]));
    /* Erase(first, last) */
    CHECK_EQ(func_003E69B8(ll, n[0], n[5]), U(n[5]));
    CHECK_EQ(WD(ll, 0), 1); CHECK_EQ(WD(term, 0), U(n[5])); CHECK_EQ(WD(n[5], 4), U(term));
    CHECK_EQ(func_003E69B8(ll, n[5], n[5]), U(n[5]));   /* empty range */
    CHECK_EQ(WD(ll, 0), 1);
    /* thunk 00111EE4: list at obj+0x1DC, node at item+4 */
    char *o = mem + 0x1000, *item = mem + 0x1400;
    char *t2 = o + 0x1DC + 4;
    WD(o, 0x1DC) = 0; WD(t2, 0) = U(t2); WD(t2, 4) = U(t2);
    func_00112364(o + 0x1DC, U(t2), item + 4);
    CHECK_EQ(func_00111EE4(U(o), U(item)), U(t2));
    CHECK_EQ(WD(o, 0x1DC), 0); CHECK_EQ(WD(t2, 0), U(t2));

    /* ---- PtrArray */
    char *arr = mem + 0x2000;
    WD(arr, 0) = 9; WD(arr, 4) = 9; WD(arr, 8) = 9;
    func_0010B3EC(arr, 0, 0x1000); CHECK_EQ(WD(arr, 0), 9);
    func_0010B3EC(arr, 4, 0); CHECK_EQ(WD(arr, 8), 9);
    func_0010B3EC(arr, 4, 0x1000); CHECK_EQ(WD(arr, 0), 0); CHECK_EQ(WD(arr, 4), 4); CHECK_EQ(WD(arr, 8), 0x1000);
    new_ret = mem + 0x3000;
    func_0010B380(arr, 3, (void *)0x55, 8);
    CHECK_EQ(last_size, 12); CHECK(last_heap == (void *)0x55); CHECK_EQ(last_align, 8);
    CHECK_EQ(WD(arr, 8), U(mem + 0x3000)); CHECK_EQ(WD(arr, 4), 3);
    new_ret = 0; WD(arr, 4) = 99; func_0010B380(arr, 2, 0, 4); CHECK_EQ(WD(arr, 4), 99);
    last_size = 0; func_0010B380(arr, -1, 0, 4); CHECK_EQ(last_size, 0);
    WD(arr, 0) = 2; WD(arr, 4) = 4;
    CHECK_EQ(func_0010B3C0(arr, 0, 2), 1);
    CHECK_EQ(func_0010B3C0(arr, 2, 1), 1);
    CHECK_EQ(func_0010B3C0(arr, 3, 1), 0);
    CHECK_EQ(func_0010B3C0(arr, 0, 3), 0);
    CHECK_EQ(func_0010B3C0(arr, -1, 0), 0);
    return CORE_DONE();
}
