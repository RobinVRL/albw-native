/* USA/EU 0011F188: LMSi_Free(ptr) = data_007166D8[1](ptr) (tail jump). Confidence: high. */
#include "lms.h"

extern uint32_t data_007166D8[2];
typedef void (*lms_free_fn)(uint32_t ptr);

void func_0011F188(uint32_t ptr) {
    GFN(lms_free_fn, data_007166D8[1])(ptr);
}
