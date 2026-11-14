/* USA/EU 0011EC80: LMS_GetTextNum(msg): TXT2 (+0x14) == -1 ? -1 : u32 count at the TXT2 body.
 * Same as redpepper. (00490988 stores it as the message count; < 0 = no TXT2 -> close.)
 * Confidence: high. */
#include "lms.h"

int32_t func_0011EC80(uint32_t msg) {
    char *m = lms_p(msg);
    int32_t idx = LMS_FLD(m, 0x14, int32_t);
    if (idx == -1)
        return -1;
    return LMS_FLD(lms_block(m, idx), 0, int32_t);
}
