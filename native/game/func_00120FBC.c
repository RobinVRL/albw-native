/* USA 00120FBC (EU 00120FBC)  title / field camera controller: retarget (self, u32 *out_id,
 * const Vec3 *center, const CamParam *p4, float blend_frames (stack 0), int mode (stack 1),
 * const float limits[3] (stack 2)) -> 1 if a camera path entry was added (001E804C), else 0.
 * Written from the EU machine code (00120FBC..001212CC), replacing the Ghidra source, which had
 * two converter defects in the title's field camera retarget (BOOT_LOG 89f [3d]; the camera's NaN
 * itself comes from the caller 00122C78, see there):
 *  - the clamp query 00581DF8(map, &clamped, &point, &point) lost its fourth argument (r3 =
 *    sp+0x10, the same point as r2): the map's virtual +0xC then got a garbage r3
 *    (CLASS lost register argument);
 *  - the distance query 0053084C (virtual +0x24 of *(cam + 0xE34), 00554E74: returns a float in
 *    s0) was typed void and replaced by 0.0f (CLASS float return typed void).
 * Flow (registers of the original in brackets):
 *  [s16] blend = 0.0, [r7] flags = 0; when the scene's event camera (*(*0070B728 + 0x44)) is of
 *  type 006F650C and its byte +0x7C is 1: flags = *(*00708998 + 0x8C), blend = *(float *)(+0x80).
 *  [s17] dist = self+0xE4; unless *(*00708998 + 0xE1): d = 0053084C(*(self+0x1C8)), d >= 0 ->
 *  dist = d. Unless limits[0] < 0 and limits[2] < 0: point = center + 004D8240(p4[1], p4[2],
 *  p4[3]); clamped = point; if 00581DF8(*0070C8E0, &clamped, &point, &point): x / z moved by more
 *  than limits[0] / limits[2] -> shift the target by that difference. 001E804C(*(self+0x1C8),
 *  out_id, self+0xC8, target, p4, self+0x1CC, &self[0x198], flags, dist, blend); on success the
 *  blend state at +0x108.. is set up (as the Ghidra text). High. */
#include "../route/route.h"

extern int func_00100174(uint32_t *guard);
extern int func_00115C54(float *out, const float *a, const float *b);
extern int func_001E804C(int cam, uint32_t *out_id, uint32_t *at, uint32_t *target, uint32_t *p4, uint32_t *at_1cc,
                         float *p7, int flags, float dist, float blend);
extern int func_004D8240(float *out, uint32_t a, uint32_t b, float r);
extern unsigned char func_00581DF8(int map, uint32_t clamped, uint32_t point, uint32_t point2);
extern uint32_t DAT_001212d0;   /* 0.0f */
extern uint32_t *DAT_001212d4;  /* -> data_00708998 */
extern uint32_t *DAT_001212d8;  /* -> data_0070B728 */
extern uint32_t *DAT_001212dc;  /* guard */
extern uint32_t *DAT_001212e0;  /* type id slot */
extern uint32_t DAT_001212e4;   /* type id value */
extern uint32_t *DAT_001212e8;  /* -> data_0070C8E0 */

typedef int (*IsA)(char *self, uint32_t *type);
typedef float (*GetF)(char *self);

static float f32of(uint32_t u) { float f; __builtin_memcpy(&f, &u, 4); return f; }

int func_00120FBC(int param_1, uint32_t *param_2, float *param_3, uint32_t *param_4, uint32_t param_5, int param_6,
                  float *param_7)
{
    char *self = GPTR_TO(char, (uint32_t)param_1);
    const float zero = f32of(DAT_001212d0);
    float blend = zero, dist, frames = f32of(param_5);
    int flags = 0;
    char *ev = RP(GPTR_TO(char, *DAT_001212d8), 0x44);
    if (ev) {
        if (!(*DAT_001212dc & 1) && func_00100174(DAT_001212dc)) *DAT_001212e0 = DAT_001212e4;
        if (!RVFN(IsA, ev, 8)(ev, DAT_001212e0)) ev = 0;
        if (ev && RF(ev, 0x7C, uint8_t) == 1) {
            char *g = GPTR_TO(char, *DAT_001212d4);
            flags = RF(g, 0x8C, int);
            blend = RF(g, 0x80, float);
        }
    }
    dist = RF(self, 0xE4, float);
    if (RF(GPTR_TO(char, *DAT_001212d4), 0xE1, uint8_t) == 0) {
        char *cam = RP(self, 0x1C8);
        char *o = RP(cam, 0xE34);
        float d = RVFN(GetF, o, 0x24)(o);   /* 0053084C: virtual +0x24 of *(cam + 0xE34) */
        if (d >= zero) dist = d;
    }
    int moved_x = 0, moved_z = 0;
    float point[3], clamped[3];
    if (!(param_7[0] < zero && param_7[2] < zero)) {
        func_004D8240(point, param_4[1], param_4[2], f32of(param_4[3]));
        func_00115C54(point, point, param_3);
        __builtin_memcpy(clamped, point, sizeof point);
        if (func_00581DF8((int)*DAT_001212e8, GPTR_OF(clamped), GPTR_OF(point), GPTR_OF(point))) {
            float d = clamped[0] - point[0];
            if (d <= zero) d = -d;
            if (d > param_7[0]) moved_x = 1;
            d = clamped[2] - point[2];
            if (d <= zero) d = -d;
            if (d > param_7[2]) moved_z = 1;
        }
    }
    float p7tmp = RF(self, 0x198, float);
    float target[3];
    uint32_t *tgt = (uint32_t *)param_3;
    if (moved_x || moved_z) {
        __builtin_memcpy(target, param_3, sizeof target);
        if (moved_x) target[0] = (clamped[0] - point[0]) + param_3[0];
        if (moved_z) target[2] = (clamped[2] - point[2]) + param_3[2];
        tgt = (uint32_t *)target;
    }
    int r = func_001E804C((int)RF(self, 0x1C8, uint32_t), param_2, (uint32_t *)(self + 0xC8), tgt, param_4,
                          (uint32_t *)(self + 0x1CC), &p7tmp, flags, dist, blend);
    if (!r) return 0;
    RF(self, 0x10C, float) = frames;
    RF(self, 0x110, float) = frames;
    RF(self, 0x108, int) = param_6;
    __builtin_memcpy(self + 0x18C, self + 0x1CC, 12);
    __builtin_memcpy(self + 0x1CC, (char *)param_4 + 0x10, 12);
    if (RF(self, 0x1D4, uint32_t) != 0) {
        RF(self, 0x1D4, uint32_t) = 0;
        RF(self, 0x1CC, float) = p7tmp;
    }
    if (param_6 == 1) {
        __builtin_memcpy(self + 0xF8, self + 0x1BC, 12);
        __builtin_memcpy(self + 0xEC, self + 0x1B0, 12);
        RF(self, 0x104, uint32_t) = RF(self, 0xE8, uint32_t);
    }
    return 1;
}
