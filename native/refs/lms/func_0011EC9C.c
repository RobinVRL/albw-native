/* USA/EU 0011EC9C: LMS_GetTextSize(msg, i): byte length of text i up to (not incl.) its NUL,
 * skipping tags per encoding (msg->+8): UTF-8: 0x0E -> +7 + u16 at +5, 0x0F -> +6, else +1;
 * UTF-16: 0x0E -> +8 + u16 at +6, 0x0F -> +6, else +2; UTF-32: 0x0E -> +10 + u16 at +8,
 * 0x0F -> +6, else +4. -1 when TXT2 absent, i out of range, NULL text or other encoding.
 * Caller 0057E9F4. Converted v4 C right on i386. Confidence: high (semantics), medium (name). */
#include "lms.h"

int32_t func_0011EC9C(uint32_t msg, int32_t i) {
    char *m = lms_p(msg);
    int32_t idx = LMS_FLD(m, 0x14, int32_t);
    if (idx == -1)
        return -1;
    char *t = lms_block(m, idx);
    if (LMS_FLD(t, 0, int32_t) <= i)
        return -1;
    uint32_t start = LMS_FLD(t, 4 + (uint32_t)i * 4, uint32_t) + lms_w(t);
    if (start == 0)
        return -1;
    uint32_t p = start;
    switch (LMS_FLD(m, 8, uint8_t)) {
    case 0:
        for (uint8_t c; (c = LMS_FLD(lms_p(p), 0, uint8_t)) != 0;)
            p += c == 0xE ? 7u + LMS_FLD(lms_p(p), 5, uint16_t) : c == 0xF ? 6u : 1u;
        break;
    case 1:
        for (uint16_t c; (c = LMS_FLD(lms_p(p), 0, uint16_t)) != 0;)
            p += c == 0xE ? 8u + LMS_FLD(lms_p(p), 6, uint16_t) : c == 0xF ? 6u : 2u;
        break;
    case 2:
        for (uint32_t c; (c = LMS_FLD(lms_p(p), 0, uint32_t)) != 0;)
            p += c == 0xE ? 10u + LMS_FLD(lms_p(p), 8, uint16_t) : c == 0xF ? 6u : 4u;
        break;
    default:
        return -1;
    }
    return (int32_t)(p - start);
}
