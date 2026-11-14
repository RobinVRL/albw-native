/* USA/EU 0011F278: LMSi_MemCopy(dst, src, n): byte copy, forward, n <= 0 copies nothing.
 * Confidence: high. */
#include "lms.h"

void func_0011F278(uint32_t dst, uint32_t src, int32_t n) {
    char *d = lms_p(dst);
    const char *s = lms_p(src);
    for (int32_t i = 0; i < n; i++)
        d[i] = s[i];
}
