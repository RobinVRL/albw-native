/* USA/EU 0011F198: LMSi_GetHashTableIndex(label, numSlots): h = h * 0x492 + (signed char)c over
 * the NUL-terminated label (u32 wrap), returns h % numSlots (__aeabi_uidivmod remainder).
 * numSlots == 0: the ARM run-time returns remainder = h (uidivmod x/0 -> {0, x}); the matched
 * source divides on x86 and traps. Confidence: high. */
#include "lms.h"

uint32_t func_0011F198(uint32_t label, uint32_t num_slots) {
    const int8_t *s = (const int8_t *)lms_p(label);
    uint32_t h = 0;
    for (; *s; s++)
        h = h * 0x492u + (uint32_t)(int32_t)*s;
    return num_slots ? h % num_slots : h;
}
