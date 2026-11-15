/* USA 00377354: constructor {a = n; b = n; c = 0}; returns this (matched src/work7/gpt18/
 * func_00377354.cpp). Native because the build exported its __impl at address 0: the primary
 * symbol is the C1 constructor, an alias living in the C2 constructor's section, and
 * build_decomp named the section after the alias (fixed in tools/build_decomp.py for the next
 * rebuild). Confidence: high. */
#include <stdint.h>

uint32_t *func_00377354(uint32_t *self, uint32_t n)
{
    self[0] = n;
    self[1] = n;
    self[2] = 0;
    return self;
}
