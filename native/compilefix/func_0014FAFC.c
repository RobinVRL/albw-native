/* USA 0014FAFC (EU 0014FAFC): set the horizontal velocity (+0x3DC..+0x3E4) from an angle and a
 * speed: sincos(angle) (00115154(&sin, &cos, angle)); vx = speed * sin, vy = 0, vz = speed * cos.
 * ARM arguments: r0 = this, r1 = angle, s0 = speed (EU 14FB10 `vmov.f32 s17, s0`, 14FB18 `mov r2, r1`).
 * Replaces the matched source work8/perm_server/0014FAFC_match.cpp, declared S::f(float, u32):
 * on ARM the order of a float and an int parameter does not matter (s0 / r1), on i386 both go on
 * the stack in declaration order, and the converted callers pass (this, angle, speed): the speed
 * was read from the angle's bits and the angle from the speed's. Every thrown or carried kokko got
 * a velocity of about 1e8 and left the map ("chickens disappear when picked up", user report).
 * CLASS float / int parameter order (BOOT_LOG 159c). Confidence: high (instruction-level). */
#include <stdint.h>

void func_00115154(float *sin_out, float *cos_out, uint32_t angle);

void func_0014FAFC(char *self, uint32_t angle, float speed)
{
    float s = 0.0f, c = 0.0f;
    func_00115154(&s, &c, angle);
    *(float *)(self + 0x3DC) = speed * s;
    *(float *)(self + 0x3E0) = 0.0f;
    *(float *)(self + 0x3E4) = speed * c;
}
