/* USA/EU 0011EB40: LMS_GetText(msg, i): TXT2 (+0x14) absent or i >= count (signed) -> 0, else
 * TXT2 body + offset[i] (u32 table after the count). Caller 00582858. Confidence: high. */
#include "lms.h"

uint32_t func_0011EB40(uint32_t msg, int32_t i) {
    char *m = lms_p(msg);
    int32_t idx = LMS_FLD(m, 0x14, int32_t);
    if (idx == -1)
        return 0;
    char *t = lms_block(m, idx);
    if (LMS_FLD(t, 0, int32_t) <= i)
        return 0;
    return lms_w(t) + LMS_FLD(t, 4 + (uint32_t)i * 4, uint32_t);
}
