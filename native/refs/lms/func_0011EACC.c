/* USA/EU 0011EACC: flow node count: FLW3 (+0x10) == -1 ? -4 : u16 at the FLW3 body (numFlows).
 * (00494104 stores it; < 0 -> close.) Confidence: high (semantics), medium (name
 * LMS_GetFlowNodeNum). */
#include "lms.h"

int32_t func_0011EACC(uint32_t flw) {
    char *m = lms_p(flw);
    int32_t idx = LMS_FLD(m, 0x10, int32_t);
    if (idx == -1)
        return -4;
    return LMS_FLD(lms_block(m, idx), 0, uint16_t);
}
