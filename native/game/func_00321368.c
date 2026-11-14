/* USA 00321368 (EU 00321344): sound/render setup step: 0048EF78(this) (r0 passed through),
 * snd master volume 1.0 (003DDB5C, float in s0), 003DE2D0(0), then by the output mode
 * (003DE120: 0/1/2) 004102BC(0, mode).
 * Native fix of the matched source (src/work7/ds3/func_00321368.cpp): it called 0048EF78 with
 * no argument, relying on r0 = this on ARM; natively 0048EF78 read a garbage object (heap
 * pointer 0x5FFE00 -> crash in operator new). Confidence: high. */
#include <stdint.h>

void func_0048EF78(void *self);
void func_003DDB5C(float volume);
void func_003DE2D0(int32_t v);
int32_t func_003DE120(void);
void func_004102BC(int32_t a, int32_t b);

void func_00321368(void *self)
{
    func_0048EF78(self);
    func_003DDB5C(1.0f);
    func_003DE2D0(0);
    int32_t m = func_003DE120();
    if (m >= 0 && m <= 2)
        func_004102BC(0, m);
}
