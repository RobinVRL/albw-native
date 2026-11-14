/* USA/EU 0011E674: LMS_CloseMessage(bin): if (bin->+0xC blocks) LMSi_Free(blocks);
 * LMSi_Free(bin). Same as redpepper LMS_CloseMessage. (Caller 00490988 = message.)
 * Confidence: high. */
#include "lms.h"

void func_0011E674(uint32_t bin) {
    uint32_t blocks = LMS_FLD(lms_p(bin), 0xC, uint32_t);
    if (blocks != 0)
        func_0011F188(blocks);
    func_0011F188(bin);
}
