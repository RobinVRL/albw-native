/* Prototypes of the sead/nn math library rewrites in native/core/math_*.c (tier 5, README.md).
 * Every func_ keeps the return class of the round-2 converted callers' declarations: `int`
 * (here uint32_t = the ARM r0 at return) or `float` (s0). None of these lost a float return:
 * where the ARM returns a float, the callers already declare float. */
#ifndef ALBW_CORE_MATH_H
#define ALBW_CORE_MATH_H
#include <stdint.h>

/* math_mtx.c: copies / packing (bit moves, vldm/vstm) */
uint32_t func_001151EC(void *dst, const void *src);                    /* Matrix34 copy */
uint32_t func_001151CC(void *dst, const void *src);                    /* Matrix33 copy */
uint32_t func_00115224(void *dst, const void *src);                    /* Matrix44 copy */
uint32_t func_001150B8(void *dst, const void *src);                    /* Matrix44 copy, self-check */
uint32_t func_001150B0(uint32_t obj, const void *src);                 /* (obj+4) = Matrix44 */
uint32_t func_001151F8(void *dst, const void *rot33, const void *t);   /* Matrix34 from Mtx33 + trans */
uint32_t func_001151D8(void *dst33, const void *src34);                /* Matrix33 = rot part of Mtx34 */
uint32_t func_001150CC(void *dst, const void *src34, uint32_t header); /* Mtx34 -> GPU uniform packet */
uint32_t func_00115108(void *dst, const void *src44, uint32_t header); /* Mtx44 -> GPU uniform packet */
/* math_mtx.c: arithmetic */
uint32_t func_0011529C(float *dst, const float *m);                    /* Matrix33 inverse */
uint32_t func_001153A0(float *dst, const float *m);                    /* Matrix33 inverse-transpose */
uint32_t func_0011558C(float *dst, const float *m);                    /* Matrix34 inverse (identity if singular) */
uint32_t func_00114F58(float *dst, const float *m);                    /* Matrix34 inverse -> ok */
uint32_t func_00491404(float *dst, const float *q);                    /* Matrix33 from quat */
uint32_t func_00491B3C(float *dst, const float *q);                    /* Matrix34 from quat */
uint32_t func_00491C08(float *q, const float *m34);                    /* quat from Matrix34 */
uint32_t func_004914B4(float *q, const float *m33);                    /* quat from Matrix33 */
uint32_t func_00491338(float *dst, uint32_t ax, uint32_t ay, uint32_t az);   /* Mtx33 from Euler idx */
uint32_t func_00491938(float *dst, uint32_t ax, uint32_t ay, uint32_t az);   /* Mtx34 from Euler idx */
uint32_t func_00491A18(float *dst, const uint32_t *ang, const float *t);      /* same + translation */
float func_0049216C(float *dst, const uint32_t *ang, const float *t);         /* XYZ Euler + translation */
uint32_t func_00491D78(float *dst, const float *scale, const float *rad, const float *t); /* SRT */
uint32_t func_004918CC(float *m, float sx, float sy, float sz);        /* scale columns */
uint32_t func_00492078(float *dst, const float *a34, const float *b33);/* Mtx34 = Mtx34 * Mtx33 */
/* math_vec.c */
float func_0049EF80(const float *p, const float *seg, float *t_out);   /* closest point dist^2 */
float func_0049C154(float *dst, const float *a, const float *b, float t);   /* Vec4 lerp, clamped t */
uint32_t func_003E2298(float *dst, const float *a, const float *b);    /* Vec3 cross */
float func_00115194(uint32_t idx);                                     /* tan(angle idx) */
float func_004906A8(float x);                                          /* ln(x) table approx */
uint32_t func_003E2134(void);                                          /* static identity Mtx34 */

#endif
