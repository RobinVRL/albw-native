/* USA 004C1300 <- EU 004C12D8: Actor::emitNearPlayer()   (55 caller files)
 *   p = 00520FC0() (player pos); dx = p.x - pos.x; dz = p.z - pos.z;
 *   if (bits(dx*dx + dz*dz) < bits(12.25f) (signed compare of the bit pattern: 3.5 units))
 *       001DDDE8(*data_0070FB60, &{pos.x, pos.y + self[0x838], pos.z}, 1, 0.07f)
 * Ghidra vs ARM: correct (EU 004C12D8-004C1350). Confidence: high (flow), low (name). */
#include "hot.h"
#pragma STDC FP_CONTRACT OFF

extern char data_0070FB60[];

int func_00520FC0(void);
int func_001DDDE8(int mgr, float *pos, int a, float f);

int func_004C1300(uint32_t self_w)
{
    char *self = P(self_w);
    char *p = P((uint32_t)func_00520FC0());
    float x = F(self, 0x3D0), z = F(self, 0x3D8);
    float dx = F(p, 0) - x, dz = F(p, 8) - z;
    float s = dx * dx;
    float t = dz * dz;
    s = s + t;
    if (gp_f2i_bits(s) >= 0x41440000)
        return gp_f2i_bits(s);   /* r0 = the compared bit pattern */
    float v[3] = { x, F(self, 0x3D4) + F(self, 0x838), z };
    return func_001DDDE8((int)W(data_0070FB60, 0), v, 1, gp_u2f(0x3D8F5C29u));
}
