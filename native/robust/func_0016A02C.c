/* USA 0016A02C <- EU 0016A02C: allocate the per-bind-entry work buffers of an animation-slot set
 * (the object 00168E9C updates). Called by ~147 actor setup functions as
 * func_0016A02C(slots, minA, minB, model).
 *
 *   A = max over models in self->[4]/[8] (pointer array) of (*model)->[0x10] (s32), B = max of
 *   (*model)->[6] (u16); a positive argument overrides (minA -> A, minB -> B).
 *   One block of (align4(2*A) + align4(32*B)) * self->[0x90] bytes is taken from the current heap
 *   (heap = 0010DB90(*data_00715210); heap->vtbl[0x18](heap, size, 4)) and carved up per bind
 *   entry e (20-byte entries at self->[0x94]): 003FA3F4(e, u16[A], A); 003FAF74(e+8, 32B[B], B);
 *   e->[0x10] = 0. Then a u16[A+1] array from 0010CEE0 goes to self->[0xA0] (count [0x9C], used
 *   [0x98] = 0); if `model` != 0, 0013388C(entry, model) for every non-null pointer of [4]/[8];
 *   finally self->[0x85] = 1.
 *
 * What was wrong in the Ghidra version: `func_0010DB90()` was called with no argument (EU 0016A108
 * loads r0 = *data_00715210 first), and the native 0010DB90 (native/sdk/memory.c) takes the heap
 * manager, so the heap lookup read garbage. in_r12 was the conditional `addhi/movls ip` address
 * and in_s0 a phantom float for 003FAF74 (its s0 is only read after it sets it to 0.0 when
 * count != 0; we pass 0.0f to match the linked Ghidra signature).
 *
 * Verified against EU 0016A02C-0016A29C: the four arguments are saved by push {r0-r3,...} and r3
 * (`model`) is reloaded from [sp, #0xc]; max tests are signed (movlt / movgt), index tests
 * unsigned (hi/ls), loop bounds signed (bgt); the carve pointer is aligned (add 3, bic 3) before
 * each use and only when that part's size is non-zero (else the part pointer is 0).
 * Confidence: high. */
#include "robust.h"

extern void *data_00715210;
void *func_0010DB90(void *heap_mgr);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void func_003FA3F4(void *array, uint16_t *data, uint32_t count);
void func_003FAF74(void *array, void *data, uint32_t count, float unused_s0);
int func_0013388C(void *obj, void *model);

typedef void *(*heap_alloc_fn)(void *heap, uint32_t size, int32_t align);

#define PTR_AT(self, i) \
    ((uint32_t)FLD(self, 4, int32_t) > (uint32_t)(i) ? FLD(self, 8, char **) + (i) : FLD(self, 8, char **))
#define ENTRY(self, i) \
    ((uint32_t)FLD(self, 0x90, int32_t) > (uint32_t)(i) ? FLD(self, 0x94, char *) + (i) * 20 \
                                                        : FLD(self, 0x94, char *))

void func_0016A02C(char *self, int32_t minA, int32_t minB, void *model) {
    int32_t a = 0, b = 0;
    for (int32_t i = 0; FLD(self, 4, int32_t) > i; i++) {
        if (*PTR_AT(self, i) == 0)
            continue;
        char *res = *(char **)*PTR_AT(self, i);
        int32_t na = FLD(res, 0x10, int32_t);
        int32_t nb = FLD(res, 6, uint16_t);
        if (a < na) a = na;
        if (b < nb) b = nb;
    }
    if (minA > 0) a = minA;
    if (minB > 0) b = minB;
    uint32_t partA = (uint32_t)a << 1, partB = (uint32_t)b << 5;
    if (partA) partA = (partA + 3) & ~3u;
    if (partB) partB = (partB + 3) & ~3u;
    uint32_t size = (partA + partB) * (uint32_t)FLD(self, 0x90, int32_t);
    char *heap = func_0010DB90(data_00715210);
    heap_alloc_fn alloc = FLD(*(char **)heap, 0x18, heap_alloc_fn);
    char *cur = alloc(heap, size, 4);
    for (int32_t i = 0; FLD(self, 0x90, int32_t) > i; i++) {
        char *pa = 0, *pb = 0;
        if (partA) {
            pa = (char *)(((uintptr_t)cur + 3) & ~(uintptr_t)3);
            cur = pa + partA;
        }
        func_003FA3F4(ENTRY(self, i), (uint16_t *)pa, (uint32_t)a);
        if (partB) {
            pb = (char *)(((uintptr_t)cur + 3) & ~(uintptr_t)3);
            cur = pb + partB;
        }
        func_003FAF74(ENTRY(self, i) + 8, pb, (uint32_t)b, 0.0f);
        FLD(ENTRY(self, i), 0x10, uint8_t) = 0;
    }
    int32_t n = a + 1;
    if (n > 0) {
        void *p = func_0010CEE0((uint32_t)n << 1, 0, 4);
        if (p) {
            FLD(self, 0xA0, void *) = p;
            FLD(self, 0x9C, int32_t) = n;
            FLD(self, 0x98, int32_t) = 0;
        }
    }
    if (model) {
        for (int32_t i = 0; FLD(self, 4, int32_t) > i; i++)
            if (*PTR_AT(self, i))
                func_0013388C(*PTR_AT(self, i), model);
    }
    FLD(self, 0x85, uint8_t) = 1;
}
