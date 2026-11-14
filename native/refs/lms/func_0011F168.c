/* USA/EU 0011F168: LMS_CloseFlow(bin): if (bin->+0xC blocks) LMSi_Free(blocks);
 * LMSi_Free(bin). Same as redpepper LMS_CloseMessage. (The ARM body falls through into
 * LMSi_Free 0011F188: Ghidra/matched split it at a nop; callers 00494104, 00494194 = flow.)
 * Confidence: high. */
#include "lms.h"

void func_0011F168(uint32_t bin) {
    uint32_t blocks = LMS_FLD(lms_p(bin), 0xC, uint32_t);
    if (blocks != 0)
        func_0011F188(blocks);
    func_0011F188(bin);
}
