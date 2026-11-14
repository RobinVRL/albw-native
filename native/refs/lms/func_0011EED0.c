/* USA/EU 0011EED0: LMS_InitProject(data) -> LMS_ProjectBinary* (0x40 bytes): "MsgPrjBn"; block
 * indices in the ARM's search order (CLR1 first, stored at +0x14). (Not in the redpepper LMS.)
 * Matched source (src/work7/ds1) right on i386. Confidence: high (layout), medium (name). */
#include "lms.h"

uint32_t func_0011EED0(uint32_t data) {
    static const struct { const char *t; uint32_t off; } k[] = {
        {"CLR1", 0x14}, {"CLB1", 0x10}, {"ATI2", 0x1C}, {"ALB1", 0x18}, {"ALI2", 0x20},
        {"TGG2", 0x24}, {"TAG2", 0x28}, {"TGP2", 0x2C}, {"TGL2", 0x30}, {"SYL3", 0x34},
        {"SLB1", 0x38}, {"CTI1", 0x3C}};
    uint32_t m = func_0011F1D8(0x40);
    char *p = lms_p(m);
    LMS_FLD(p, 0, uint32_t) = data;
    func_0011F064(m, lms_w("MsgPrjBn"));
    for (unsigned i = 0; i < sizeof k / sizeof k[0]; i++)
        LMS_FLD(p, k[i].off, int32_t) = func_0011F2BC(m, lms_w(k[i].t));
    return m;
}
