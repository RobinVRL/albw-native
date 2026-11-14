/* Exact native versions of the game's hot math library (native/gameplay/func_*.c), callable by
 * other native rewrites. The func_<ADDR> definitions keep the prototypes the converted callers
 * use (all of them declare these as returning int, see gameplay.h); the albw_* entry points
 * expose the real ARM results (e.g. the length a normalize returns in s0). */
#ifndef ALBW_GP_MATH_H
#define ALBW_GP_MATH_H
#include <stdint.h>

float albw_vec3_normalize(float *v);          /* 00115DC8: returns the length (s0) */
float albw_vec2_normalize(float *v);          /* 00115C14: returns the length (s0) */
void albw_sincos_idx(float *s, float *c, uint32_t idx);   /* 00115154 */
int32_t albw_atan_idx(float t);               /* 004905E0: atan(t), t in [0,1] -> angle idx */
int32_t albw_atan2_idx(float y, float x);     /* 004904CC */
float albw_exp_approx(float x);               /* 00490628: exp(x) (table), s0 result */
float albw_sincos_fidx(float *s, float *c, float fidx);   /* 003E183C: returns sin (s0) */

#endif
