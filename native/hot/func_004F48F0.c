/* USA 004F48F0 <- EU 004F48C8: EnemyBase::applyVelocity()   (82 caller files)
 *   if (self[0x510][4]) { t = self[0x7A8] + self[0x510][0x3C]; pos += t; }   (riding a platform:
 *                                                                           its velocity)
 *   else { t = self[0x7A8] + self[0x3DC]; pos += t;            (own velocity + external push)
 *          self[0x3E8] += self[0x4FC]; self[0x500] += self[0x504]; }   (angle speeds, int adds)
 * pos = self[0x3D0]; Vec3 adds through 00115C54 with the sum copied to a second stack temp
 * first (as on ARM). Return: the converted prototype is float (s0 never read): 0.
 *
 * Ghidra vs ARM: correct (EU 004F48C8-004F4970). Confidence: high (flow), medium (names). */
#include "hot.h"

int func_00115C54(float *out, float *a, float *b);

float func_004F48F0(uint32_t self_w)
{
    char *self = P(self_w);
    char *ride = P(W(self, 0x510));
    uint32_t t[3], u[3];
    if (FLD(ride, 4, uint8_t) != 0) {
        func_00115C54((float *)t, (float *)(self + 0x7A8), (float *)(ride + 0x3C));
        memcpy(u, t, 12);
        func_00115C54((float *)(self + 0x3D0), (float *)(self + 0x3D0), (float *)u);
        return 0.0f;
    }
    func_00115C54((float *)t, (float *)(self + 0x7A8), (float *)(self + 0x3DC));
    memcpy(u, t, 12);
    func_00115C54((float *)(self + 0x3D0), (float *)(self + 0x3D0), (float *)u);
    W(self, 0x3E8) = W(self, 0x4FC) + W(self, 0x3E8);
    W(self, 0x500) = W(self, 0x504) + W(self, 0x500);
    return 0.0f;
}
