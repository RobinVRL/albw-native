/* USA/EU 0011E898: flow entry lookup by label: FEN1 (+0x14) absent -> -10, else the hash-label
 * lookup (as 0011EBA8), -1 if not found. Caller 0030A0A4. Converted v4 C right on i386.
 * Confidence: high (semantics), medium (name LMS_GetFlowEntryIndexByLabel / FEN1). */
#include "lms.h"

int32_t func_0011E898(uint32_t flw, uint32_t label) {
    return lms_label_lookup(lms_p(flw), 0x14, label, -10);
}
