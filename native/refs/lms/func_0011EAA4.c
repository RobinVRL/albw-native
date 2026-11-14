/* USA/EU 0011EAA4: flow node(i): FLW3 (+0x10) == -1 ? 0 : FLW3 body + 0x10 + i * 16 (no bound
 * check). Callers 0030A0A4, 0030BCD4, 0030BE08. Confidence: high. */
#include "lms.h"

uint32_t func_0011EAA4(uint32_t flw, int32_t i) {
    char *m = lms_p(flw);
    int32_t idx = LMS_FLD(m, 0x10, int32_t);
    if (idx == -1)
        return 0;
    return lms_w(lms_block(m, idx)) + 0x10u + (uint32_t)i * 16u;
}
