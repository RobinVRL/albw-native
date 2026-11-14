// SOURCES: sead_heap.c sead_list.c
/* Tests for the sead heap-tree / disposer-list helpers (sead_heap.c) with synthetic heaps in
 * low memory: isInclude by address range, lock/unlock call balance, dispose_ range filter and
 * restart, removeDisposer_, destruct_. */
#include "core.h"
#include "core_test.h"

void *func_0010EF18(void *self, uint32_t ptr);
uint32_t func_0010E2A4(uint32_t heap_mgr, uint32_t ptr);
void func_0049AFE4(uint32_t heap, uint32_t disposer);
void func_0049B044(uint32_t heap, uint32_t begin, uint32_t end);
void func_0049B0E4(uint32_t heap);

/* stubs */
static int locks, unlocks;
void func_0010C0B8(void *cs) { (void)cs; locks++; }
int func_0010EEE0(void *cs) { (void)cs; unlocks++; return 0; }
static void *tls_thread;
void *func_0010E294(const void *tls) { (void)tls; return tls_thread; }
uint32_t data_00715430;
uint8_t data_0079E048[12], data_0079E064[0x20], data_0079E080[12];

#define WD(p, o) FLD(p, o, uint32_t)
#define U(p) gp_u32(p)

static uint8_t *mem;
/* heap i: range [base, base + size) in words +0x78/+0x7C (test-only fields) */
static uint32_t is_include(void *self, const void *p) {
    uint32_t a = U(p);
    return a >= WD(self, 0x78) && a < WD(self, 0x78) + WD(self, 0x7C);
}
static int dtor_calls;
static void disposer_dtor(void *self);   /* unlinks itself via removeDisposer_ */

static char *vt_heap, *vt_disp;
static char *mkheap(int i, uint32_t base, uint32_t size, int threadsafe) {
    char *h = (char *)mem + 0x100 * i;
    WD(h, 0) = U(vt_heap);
    WD(h, 0x28) = U(h + 0x28); WD(h, 0x2C) = U(h + 0x28); WD(h, 0x30) = 0; WD(h, 0x34) = 0x10; /* children: node at heap+0x10 */
    WD(h, 0x40) = U(h + 0x40); WD(h, 0x44) = U(h + 0x40); WD(h, 0x48) = 0; WD(h, 0x4C) = 8;     /* disposers: node at d+8 */
    WD(h, 0x70) = threadsafe ? 1 : 0;
    WD(h, 0x78) = base; WD(h, 0x7C) = size;
    return h;
}
static void link_back(char *list_se, char *node, uint32_t count_off_from_se) {
    /* sead ListImpl push_back: node before mStartEnd */
    uint32_t old = WD(list_se, 0);
    WD(list_se, 0) = U(node); WD(node, 4) = U(list_se); WD(node, 0) = old; WD(gp_ptr(old), 4) = U(node);
    WD(list_se, count_off_from_se) += 1;
}
static void add_child(char *parent, char *child) { WD(child, 0x24) = U(parent); link_back(parent + 0x28, child + 0x10, 8); }
static char *dheap[16];
static char *mkdisp(int i, char *heap, int has_heap) {
    char *d = (char *)mem + 0x2000 + 0x20 * i;
    WD(d, 0) = U(vt_disp); WD(d, 4) = has_heap ? U(heap) : 0;
    dheap[i] = heap;
    link_back(heap + 0x40, d + 8, 8);
    return d;
}
static void disposer_dtor(void *self) {
    dtor_calls++;
    func_0049AFE4(WD(self, 4), U(self));
}

int main(void) {
    mem = lowalloc(0x4000);
    vt_heap = (char *)mem + 0x3000; vt_disp = (char *)mem + 0x3100;
    WD(vt_heap, 0x40) = (uint32_t)(uintptr_t)is_include;
    WD(vt_disp, 0) = (uint32_t)(uintptr_t)disposer_dtor;

    char *root = mkheap(1, 0x10000, 0x10000, 1);
    char *c1 = mkheap(2, 0x10000, 0x4000, 0);
    char *c2 = mkheap(3, 0x14000, 0x4000, 1);
    char *g = mkheap(4, 0x15000, 0x100, 1);
    char *indep = mkheap(5, 0x40000, 0x1000, 0);
    add_child(root, c1); add_child(root, c2); add_child(c2, g);
    CHECK_EQ(WD(root, 0x30), 2);

    /* findContainHeap_ */
    CHECK(func_0010EF18(root, 0x15010) == g);
    CHECK(func_0010EF18(root, 0x10010) == c1);
    CHECK(func_0010EF18(root, 0x1F000) == root);
    CHECK(func_0010EF18(root, 0x30000) == 0);
    CHECK_EQ(locks, unlocks);

    /* HeapMgr::findContainHeap: root array then independent array */
    uint32_t *roots = (uint32_t *)((char *)mem + 0x3200), *ind = (uint32_t *)((char *)mem + 0x3210);
    roots[0] = U(root); ind[0] = U(indep);
    WD(data_0079E048, 0) = 1; WD(data_0079E048, 4) = 4; WD(data_0079E048, 8) = U(roots);
    WD(data_0079E080, 0) = 1; WD(data_0079E080, 4) = 4; WD(data_0079E080, 8) = U(ind);
    CHECK_EQ(func_0010E2A4(0, 0x14100), U(c2));
    CHECK_EQ(func_0010E2A4(0, 0x40010), U(indep));
    CHECK_EQ(func_0010E2A4(0, 0x90000), 0);
    /* current heap of the current thread first */
    char *thread = (char *)mem + 0x3300; WD(thread, 0x68) = U(indep);
    data_00715430 = U((char *)mem + 0x3400); tls_thread = thread;
    CHECK_EQ(func_0010E2A4(0, 0x40010), U(indep));
    CHECK_EQ(func_0010E2A4(0, 0x15004), U(g));      /* not in the current heap: falls back */
    CHECK_EQ(locks, unlocks);

    /* disposers: dispose_ with a range only destroys the ones inside it and with a heap */
    char *d[6];
    for (int i = 0; i < 6; i++) d[i] = mkdisp(i, c2, i != 2);
    CHECK_EQ(WD(c2, 0x48), 6);
    func_0049B044(U(c2), U(d[1]), U(d[4]));          /* [d1, d4): d1, d3 (d2 has no heap) */
    CHECK_EQ(dtor_calls, 2);
    CHECK_EQ(WD(c2, 0x48), 4);
    CHECK_EQ(WD(d[1], 8), 0); CHECK_EQ(WD(d[3], 0xC), 0);
    CHECK_EQ(WD(c2, 0x70) & 2, 0);
    func_0049B044(U(c2), 0, 0);                        /* all with a heap: d0, d4, d5 */
    CHECK_EQ(dtor_calls, 5);
    CHECK_EQ(WD(c2, 0x48), 1);                         /* d2 stays */
    CHECK_EQ(WD(c2, 0x44), U(d[2] + 8));

    /* destruct_: disposes, unlinks from the parent */
    mkdisp(7, g, 1);
    func_0049B0E4(U(g));
    CHECK_EQ(dtor_calls, 6);
    CHECK_EQ(WD(c2, 0x30), 0);
    CHECK_EQ(WD(c2, 0x2C), U(c2 + 0x28));
    CHECK_EQ(WD(g, 0x10), 0);
    CHECK_EQ(locks, unlocks);
    return CORE_DONE();
}
