/* USA/EU 0011EDA4: LMS_InitFlow(data) -> LMS_FlowBinary* (0x1C bytes): "MsgFlwBn";
 * +0x10 FLW3, +0x14 FEN1, +0x18 REF1. (Not in the redpepper LMS; name by analogy.)
 * Matched source (src/work7/ds1) right on i386. Confidence: high (layout), medium (name). */
#include "lms.h"

uint32_t func_0011EDA4(uint32_t data) {
    uint32_t m = func_0011F1D8(0x1C);
    char *p = lms_p(m);
    LMS_FLD(p, 0, uint32_t) = data;
    func_0011F064(m, lms_w("MsgFlwBn"));
    LMS_FLD(p, 0x10, int32_t) = func_0011F2BC(m, lms_w("FLW3"));
    LMS_FLD(p, 0x14, int32_t) = func_0011F2BC(m, lms_w("FEN1"));
    LMS_FLD(p, 0x18, int32_t) = func_0011F2BC(m, lms_w("REF1"));
    return m;
}
