/* USA/EU 0011EBA8: LMS_GetTextIndexByLabel(msg, label): LBL1 (+0x10) absent -> -2; hash slot
 * (0011F198), linear scan of the slot's entries (u8 len, name, u32 index), -1 if not found.
 * Matched source src/work8/sol1/0011EBA8.c is right on i386. Confidence: high. */
#include "lms.h"

int32_t func_0011EBA8(uint32_t msg, uint32_t label) {
    return lms_label_lookup(lms_p(msg), 0x10, label, -2);
}
