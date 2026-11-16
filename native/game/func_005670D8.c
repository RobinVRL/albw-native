/* USA 005670D8 (EU 005670B0)  animation curve value through a segment cache (curve, cache base,
 * float t) -> float. Cache entry = base + curve +0x0A (u16 index) * 0x20: +0x00 key pointer
 * (0 = empty), +0x08 segment start frame, +0x0C segment end frame, +0x10..+0x1C cubic
 * coefficients c0..c3 of (t - start). The entry is reused while start <= t < end, or when the
 * check handler (table DAT_00567168[curve +0x0D], USA 0067A334 .. 006794E0) accepts it;
 * otherwise the fill handler (table DAT_0056716C[mode], USA 0067EF3C .. 0067C5FC) recomputes it.
 * Result c0 + c1 d + (c2 + c3 d) d d, d = t - start (vmla, unfused). Callers: 0068FDFC
 * (material / skeletal animation channels of h3d models, e.g. the title Triforce).
 * Bug fixed: the Ghidra text called both handlers with (curve, entry) only. On the ARM the check
 * handler gets s0 = t and the fill handler s0 = t - curve +0x00 (curve base frame, EU 00567124
 * vsub); both are typed (curve, entry, float) natively, so on i386 they read a stale stack word
 * as the frame. With the title Triforce's TriForceFlash alpha curve (base -470, Hermite) the fill
 * cached the segment [-470, -469) for t = 0 and the cubic returned 834340.875: the Triforce
 * stayed opaque gold over the title instead of flashing out (BOOT_LOG 92 [3d]).
 * CLASS lost float argument in an indirect call (function-pointer table). From the EU machine
 * code. High. */
#include "../route/route.h"

extern int DAT_00567168;   /* table of check handlers: int (*)(float *curve, int *entry, float t) */
extern int DAT_0056716c;   /* table of fill handlers: void (*)(float *curve, float *entry, float t) */

typedef int (*seg_check_fn)(float *, int *, float);
typedef void (*seg_fill_fn)(float *, float *, float);

float func_005670D8(int param_1, int param_2, float t)
{
    char *c = GPTR_TO(char, (uint32_t)param_1);
    char *e = GPTR_TO(char, (uint32_t)param_2) + (uint32_t)RF(c, 0x0A, uint16_t) * 0x20;
    const uint32_t mode = RF(c, 0x0D, uint8_t);
    int use = 0;
    /* bhi: end > t (or unordered) -> start check; else an empty entry or a refused one refills */
    if (!(RF(e, 0x0C, float) <= t)) {
        use = 1;
    } else if (RF(e, 0x00, uint32_t) != 0) {
        seg_check_fn chk = (seg_check_fn)GPTR_TO(void, GPTR_TO(uint32_t, (uint32_t)DAT_00567168)[mode]);
        use = chk((float *)c, (int *)e, t) != 0;
    }
    /* ble: start <= t (or unordered) keeps the entry */
    if (!use || RF(e, 0x08, float) > t) {
        seg_fill_fn fill = (seg_fill_fn)GPTR_TO(void, GPTR_TO(uint32_t, (uint32_t)DAT_0056716c)[mode]);
        fill((float *)c, (float *)e, t - RF(c, 0x00, float));
    }
    const float d = t - RF(e, 0x08, float);
    float s2 = RF(e, 0x18, float) + RF(e, 0x1C, float) * d;
    float s0 = RF(e, 0x10, float) + RF(e, 0x14, float) * d;
    s2 = s2 * d;
    return s0 + s2 * d;
}
