/* USA/EU 0011EB7C: game wrapper (MsgStdBn holder, const sead::SafeString &label) ->
 *   label.vt[+8](label) (assureTerminationImpl_), then tail into LMS_GetTextIndexByLabel
 *   (0011EBA8)(holder->+8, label.cstr (+4)) and RETURN its result (the ARM body falls through
 *   into 0011EBA8). The matched source (src/work7/gpt23) is `void`: on i386 the caller still
 *   gets eax by luck (nothing clobbers it after the call); the 64-bit build uses Ghidra text.
 * Caller 005826A4 (declares int). Confidence: high. */
#include "lms.h"

int32_t func_0011EBA8(uint32_t msg, uint32_t label);
typedef void (*lms_vfn)(void *self);

int32_t func_0011EB7C(uint32_t holder, uint32_t str) {
    char *s = lms_p(str);
    char *vt = lms_p(LMS_FLD(s, 0, uint32_t));
    GFN(lms_vfn, LMS_FLD(vt, 8, uint32_t))(s);
    return func_0011EBA8(LMS_FLD(lms_p(holder), 8, uint32_t), LMS_FLD(s, 4, uint32_t));
}
