/* USA/EU 0011F2BC: LMSi_SearchBlockByName(bin, type) -> u16 index of the first block whose
 * type[4] equals `type` (LMSi_MemCmp 0011F1E8, 4 bytes), else -1. Same as the redpepper LMS
 * (incl. the u16 counter). Confidence: high. */
#include "lms.h"

int32_t func_0011F2BC(uint32_t bin_w, uint32_t type) {
    char *bin = lms_p(bin_w);
    for (uint16_t i = 0; i < LMS_FLD(bin, 0xA, uint16_t); i++) {
        uint32_t e = LMS_FLD(bin, 0xC, uint32_t) + 4u + (uint32_t)i * 16u;
        if (func_0011F1E8(e, type, 4))
            return i;
    }
    return -1;
}
