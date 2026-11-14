/* USA 003DCBD4 (EU 003DCBB4): sound output setting i (0/1): p+0x14[i] = a, p+0x1C[i] = b, then
 * tail call 003DDFC8(0x007A8798, i, a, b) (the same setting on the channel mixer object).
 * Native fix of the matched source (src/work7/gpt18/func_003DCBD4.cpp): the tail call was
 * written with one argument because r1-r3 still hold i, a, b on ARM. Confidence: high. */
#include <stdint.h>

extern uint8_t data_007A8798[];
uint32_t func_003DDFC8(void *obj, uint32_t i, uint32_t a, uint32_t b);

uint32_t func_003DCBD4(uint8_t *p, uint32_t i, uint32_t a, uint32_t b)
{
    ((uint32_t *)(p + 0x14))[i] = a;
    ((uint32_t *)(p + 0x1C))[i] = b;
    return func_003DDFC8(data_007A8798, i, a, b);
}
