/* USA 0041B66C (EU 0041B64C): nw::snd sequence player, advance the tracks by the time of one sound
 * frame (the sequence "tick" loop). Written from the ARM (EU 41B64C..41B804); the Ghidra text
 * garbled the 64-bit arithmetic (`uVar4 == 0 && (uVar8 <= (uint)uVar16) <= uVar4`), so the loop
 * never ran: sequence sounds (sword swing, most effects) started but never played a note
 * (BOOT_LOG 160f).
 *   step = (float)(timebase u8 +0x75 * tempo u16 +0x76) * speed f32 +0x64 * K1      (1/60000)
 *   if step == 0: return
 *   t = f2ulz(acc f32 +0x68 * K2 / step);  rest = R (64-bit, R = 0x4E200000 as an integer)
 *   while t < rest:
 *       rest -= t;  +0x7C (s16) counts up to +0x7A
 *       each of the 16 tracks (+0x90 + 4i): 00417614(tr); if 00416FB4(tr, 1) < 0: 004176AC(tr),
 *           allocator (+0x84)->vt[3](allocator, tr), slot = 0;  any track with +5 set = active
 *       no active track: 0041B8B4(this); +0xF = 1; return
 *       +0xF0 += 1;  step = (float)(timebase * tempo) * K1 * speed;  if step == 0: return
 *       t = f2ulz(K2 / step)
 *   acc = ul2f(t - rest) * step * K3
 * f2ulz / ul2f are the ARM runtime conversions (EU 692088 / 691F00): float -> u64 truncating
 * (negative / NaN -> 0), u64 -> float. Confidence: high (instruction-level). */
#include <stdint.h>

void func_00417614(void *track);
int func_00416FB4(void *track, int ticks);
void func_004176AC(void *track);
void func_0041B8B4(void *player);

#define U8(p, o)  (*(uint8_t *)((char *)(p) + (o)))
#define U16(p, o) (*(uint16_t *)((char *)(p) + (o)))
#define S16(p, o) (*(int16_t *)((char *)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((char *)(p) + (o)))
#define F32(p, o) (*(float *)((char *)(p) + (o)))

static const float K1 = 1.6666666851961054e-05f;   /* EU pool 41B810 */
static const float K2 = 268111856.0f;              /* 41B81C */
static const float K3 = 3.729786701711646e-09f;    /* 41B820 */
static const uint64_t R = 0x4E200000u;             /* 41B818, loaded as an integer */

static uint64_t f2ulz(float f)
{
    if (!(f > 0.0f)) return 0;                       /* negative / NaN -> 0 */
    if (f >= 18446744073709551616.0f) return UINT64_MAX;
    return (uint64_t)f;
}

void func_0041B66C(char *p)
{
    float step = (float)((uint32_t)U8(p, 0x75) * U16(p, 0x76)) * F32(p, 0x64) * K1;
    if (step == 0.0f)
        return;
    uint64_t t = f2ulz(F32(p, 0x68) * K2 / step);
    uint64_t rest = R;
    while (t < rest) {
        rest -= t;
        if (S16(p, 0x7C) < S16(p, 0x7A))
            S16(p, 0x7C) = (int16_t)(S16(p, 0x7C) + 1);
        int active = 0;
        for (int i = 0; i < 16; i++) {
            char *tr = (char *)(uintptr_t)U32(p, 0x90 + 4 * i);
            if (!tr)
                continue;
            func_00417614(tr);
            if (func_00416FB4(tr, 1) < 0 && U32(p, 0x90 + 4 * i) != 0) {
                func_004176AC((void *)(uintptr_t)U32(p, 0x90 + 4 * i));
                char *alloc = (char *)(uintptr_t)U32(p, 0x84);
                void (*rel)(char *, uint32_t) =
                    (void (*)(char *, uint32_t))(uintptr_t)U32((uintptr_t)U32(alloc, 0), 0xC);
                rel(alloc, U32(p, 0x90 + 4 * i));
                U32(p, 0x90 + 4 * i) = 0;
            }
            if (U8(tr, 5))
                active = 1;
        }
        if (!active) {
            func_0041B8B4(p);
            U8(p, 0xF) = 1;
            return;
        }
        U32(p, 0xF0) += 1;
        step = (float)((uint32_t)U8(p, 0x75) * U16(p, 0x76)) * K1 * F32(p, 0x64);
        if (step == 0.0f)
            return;
        t = f2ulz(K2 / step);
    }
    F32(p, 0x68) = (float)(t - rest) * step * K3;
}
