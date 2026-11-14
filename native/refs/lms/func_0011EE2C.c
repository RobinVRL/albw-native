/* USA/EU 0011EE2C: LMS_InitMessage(data) -> LMS_MessageBinary* (0x20 bytes, LMSi_Malloc):
 * +0 = data; AnalyzeMessageBinary("MsgStdBn"); +0x10 LBL1, +0x14 TXT2, +0x18 ATR1, +0x1C TSY1.
 * Same as redpepper LMS_InitMessage. The matched source (src/work7/ds1) is right on i386
 * (u8* return, `(u32)a0` store); this version takes/returns game words. Confidence: high. */
#include "lms.h"

uint32_t func_0011EE2C(uint32_t data) {
    uint32_t m = func_0011F1D8(0x20);
    char *p = lms_p(m);
    LMS_FLD(p, 0, uint32_t) = data;
    func_0011F064(m, lms_w("MsgStdBn"));
    LMS_FLD(p, 0x10, int32_t) = func_0011F2BC(m, lms_w("LBL1"));
    LMS_FLD(p, 0x14, int32_t) = func_0011F2BC(m, lms_w("TXT2"));
    LMS_FLD(p, 0x18, int32_t) = func_0011F2BC(m, lms_w("ATR1"));
    LMS_FLD(p, 0x1C, int32_t) = func_0011F2BC(m, lms_w("TSY1"));
    return m;
}
