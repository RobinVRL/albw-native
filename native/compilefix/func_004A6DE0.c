/* USA 004A6DE0 (EU 004A6DB8..4A6E14): release (this, int stop) (BOOT_LOG 160j).
 *   if (stop && 001118B8(this + 8)) 00110DDC(this + 0x44, 0);
 *   if (this[0x20]) { obj = this[0x1C]->[0x10]; obj->vt[1](obj, this[0x20]); this[0x20] = 0; }
 *   this[0x1C] = 0; this[0x24] = 0;
 * The virtual call keeps r1 = this[0x20] (loaded for the test at EU 4A6DE4); the target
 * (002978EC: clears arg->+0x4D) uses it. Ghidra dropped r1: the callee wrote through a stale
 * stack word (SIGSEGV at 0x52 running across Hyrule field). Confidence: high (instruction-level). */
#include <stdint.h>

uint32_t func_001118B8(uint32_t p);
uint32_t func_00110DDC(uint32_t p, uint32_t x);

typedef void (*rel_fn)(void *obj, uint32_t arg);

void func_004A6DE0(char *self, uint32_t stop)
{
    if (stop && func_001118B8((uint32_t)(uintptr_t)(self + 8)))
        func_00110DDC((uint32_t)(uintptr_t)(self + 0x44), 0);
    uint32_t arg = *(uint32_t *)(self + 0x20);
    if (arg) {
        char *obj = (char *)(uintptr_t)*(uint32_t *)((uintptr_t)*(uint32_t *)(self + 0x1C) + 0x10);
        rel_fn f = (rel_fn)(uintptr_t)*(uint32_t *)((uintptr_t)*(uint32_t *)obj + 4);
        f(obj, arg);
        *(uint32_t *)(self + 0x20) = 0;
    }
    *(uint32_t *)(self + 0x1C) = 0;
    *(uint8_t *)(self + 0x24) = 0;
}
