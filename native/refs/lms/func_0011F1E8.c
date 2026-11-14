/* USA/EU 0011F1E8: LMSi_MemCmp(a, b, n) -> 1 if the first n bytes are equal (signed byte
 * compare, n <= 0 -> 1), else 0. Confidence: high. */
#include "lms.h"

int32_t func_0011F1E8(uint32_t a, uint32_t b, int32_t n) {
    const int8_t *pa = (const int8_t *)lms_p(a), *pb = (const int8_t *)lms_p(b);
    for (int32_t i = 0; i < n; i++)
        if (pa[i] != pb[i])
            return 0;
    return 1;
}
