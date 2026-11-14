/* USA/EU 0011F054: LMS_SetMemFuncs(alloc, free): data_007166D8 = {alloc, free} (strd).
 * Converted/matched source (src/work7/gpt15/func_0011F054.cpp) takes ONE `long long`: right on
 * i386 (two stack words) but on x86-64 it stores rdi only, so the free hook is lost (0 or the
 * alloc pointer's upper half): every LMSi_Free (0011F188) on the 64-bit build jumps to 0.
 * Callers (00490724, 00490988, 00494104, 00494194) pass two words. Confidence: high. */
#include "lms.h"

extern uint32_t data_007166D8[2];

void func_0011F054(uint32_t alloc_fn, uint32_t free_fn) {
    data_007166D8[0] = alloc_fn;
    data_007166D8[1] = free_fn;
}
