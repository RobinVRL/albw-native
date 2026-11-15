/* Matched sources that store a vtable through an integer-literal address (right on the ARM, a raw
 * 3DS address natively), rewritten in C with the data symbols. Logic unchanged from:
 *   USA 003947D0  src/work8/H3/func_003947D0.cpp   (vtable 006EF828)
 *   USA 0014A834  src/work7/ds1/func_0014A834.cpp  (vtable 006EF5D8)
 *   USA 0014D78C  src/work7/ds1/func_0014D78C.cpp  (vtable 006C7D60)
 * 003947D0's object is an IDisposer (0010DA7C) on the title's heap: when the title timed out to
 * the attract demo, sead::Heap::dispose_ (0049B044) called its destructor through the raw
 * vtable 0x006EF828 and crashed (boot stop 89). Same class as stop 68, which the earlier scan
 * missed (the `(void*)0x006ef828` form). Confidence: high. */
#include <stdint.h>

extern uint32_t data_006EF828[], data_006EF5D8[], data_006C7D60[];
extern void *func_0010CEE0(uint32_t size, void *heap, int32_t align);
extern void *func_0010DA7C(void *a, void *heap, uint32_t b);
extern void *func_00394D28(void *p);
extern void *func_0014AE80(void *p);

typedef struct { void *m0, *m4, *m8; } Holder3;
typedef struct { void *m0, *m4; } Holder2;
extern Holder3 data_00708970;
extern Holder2 data_00712468;

void func_003947D0(void *heap)
{
    if (data_00708970.m4) return;
    void *p = func_0010CEE0(0x228, heap, 4);
    void *r = 0;
    if (!p) {
        data_00708970.m8 = p;
    } else {
        void *q = func_0010DA7C(p, heap, 3);
        *(void **)q = data_006EF828;
        data_00708970.m8 = q;
        r = func_00394D28(p);
    }
    data_00708970.m4 = r;
}

void func_0014A834(void *heap)
{
    if (data_00712468.m0) return;
    void *p = func_0010CEE0(0x1144, heap, 4);
    void *r = 0;
    if (!p) {
        data_00712468.m4 = p;
    } else {
        void *q = func_0010DA7C(p, heap, 3);
        *(void **)q = data_006EF5D8;
        data_00712468.m4 = q;
        r = func_0014AE80(p);
    }
    data_00712468.m0 = r;
}

void *func_0014D78C(uint32_t size)
{
    uint8_t *p = (uint8_t *)func_0010DA7C((void *)(uintptr_t)size, 0, 3);
    *(void **)p = data_006C7D60;
    p[0x10] = p[0x11] = p[0x12] = p[0x13] = 0;
    for (int o = 0x14; o <= 0x44; o += 4) *(uint32_t *)(p + o) = 0;
    return p;
}
