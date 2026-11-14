/* USA/EU 0011E9EC: LMS_GetLabelByIndex(msg, index, out): linear walk of the LBL1 (+0x10) entry
 * area (from 4 + numSlots * 8 while off < block size) for the entry whose value == index;
 * copies the name (0011F278) + NUL into out, returns 1; 0 if none. No LBL1 == -1 check on ARM
 * (index -1 would read blocks[-1]). Caller 0057EA10. Converted v4 C right on i386.
 * Confidence: high. */
#include "lms.h"

int32_t func_0011E9EC(uint32_t msg, int32_t index, uint32_t out) {
    char *m = lms_p(msg);
    int32_t idx = LMS_FLD(m, 0x10, int32_t);
    char *b = lms_block(m, idx);
    uint32_t size = lms_block_size(m, idx);
    for (uint32_t off = LMS_FLD(b, 0, uint32_t) * 8 + 4; size > off;) {
        uint32_t n = LMS_FLD(b, off, uint8_t);
        if (LMS_FLD(b + off, n + 1, int32_t) == index) {
            func_0011F278(out, lms_w(b + off + 1), (int32_t)n);
            LMS_FLD(lms_p(out), n, uint8_t) = 0;
            return 1;
        }
        off += n + 5;
    }
    return 0;
}
