/* USA 00172228 <- EU 00172228: `mov r0, r0` then falls into 0017222C (same function, second
 * entry). Ghidra duplicated the body with the same dropped-`this` tail call. Confidence: high. */
#include "hot.h"

int func_0017222C(uint32_t self_w, uint32_t state, uint32_t a, uint32_t b);

int func_00172228(uint32_t self_w, uint32_t state, uint32_t a, uint32_t b)
{
    return func_0017222C(self_w, state, a, b);
}
