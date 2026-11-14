/* USA 0054D978 <- EU 0054D950: create/place an actor's attached shape object for entry `idx`
 * (base = actor->[0x2D0] + 0x18 parameter block, obj = actor + 4; see 0054D964).
 *
 *   e = idx < 4 ? base + 0x20 + idx * 0x10 : &data_0072AA58;
 *   o = 00435714(&(s32)e->type);  if (!o) return NULL;
 *   if (obj[0x48] == 5 || obj[0x48] == 6) o->u16[0x28] = 0x224;
 *   pos = obj->pos (+4..+0xC);
 *   switch (o->u16[0x54]) {                         (real jump table, 10 entries)
 *   1: o->pos = obj->pos
 *   5: 004D8240(dir, obj[0x1C], obj[0x20], 1.0); o->f[0x58..0x60] = dir; o->f[0x64] = |obj->pos|
 *   6: h = 0054DE54(base, obj, idx, 1); pos.y += h; o->pos = pos; o->f[0x58] = h
 *   7: 004D7E0C(m, obj[0x1C], obj[0x20]) (3x3 rotation on the stack);
 *      v = ey * h (00115D70, ey = data_007A923C); o->pos = m * v (00115CE4); o->pos += pos;
 *      o->f[0x58..0x60] = obj->scale (+0x10..+0x18) * e->f[4..0xC]
 *   8: like 7 with the rotation stored in o+0x64
 *   9: h = e->f[8] * obj->f[0x14]; r = e->f[4] * obj->f[0x10];
 *      top = pos + ey*h; o->f[0x58..] = top - ey*h; o->f[0x64..] = top + ey*h; o->f[0x70] = r
 *   }
 *   o->f[0x1C..0x24] = o->pos; o->f[0x10..0x18] = o->pos; return o;
 *
 * What was wrong: Ghidra used a phantom float parameter `fparam_0` in cases 6/7/8 for the s0
 * result of 0054DE54 (decompiled as void(void)), so natively the height was uninitialised.
 * Fixed with native/robust/func_0054DE54.c returning its float.
 *
 * Verified against EU 0054D950-0054DD04 (jump table at 0054D9D8: 0,2,3,4 -> common tail;
 * 1 -> 0054DB74; 5 -> 0054DB90; 6 -> 0054DA00; 7 -> 0054DA40; 8 -> 0054DAD8; 9 -> 0054DBE0;
 * >= 10 -> common tail). Each vector result is copied through the stack exactly as here; the
 * case-5 length is s = x*x; s += y*y; s += z*z (vmla, not fused); sqrt via vsqrt.f32.
 * The 0x224 halfword stores to the stack at 0054D9A4/0054D9A8 are dead and omitted.
 * Confidence: high. */
#include <math.h>
#include "robust.h"

extern char data_0072AA58[];
extern float data_007A923C[3]; /* unit Y vector */

void *func_00435714(int32_t *key);
float func_0054DE54(char *base, char *obj, uint32_t idx, int32_t axis);
void func_004D7E0C(float *out_mtx, uint32_t a, uint32_t b);
void func_004D8240(float *out, uint32_t a, uint32_t b, float scale);
void func_00115D70(float *out, float *v, float s);              /* out = v * s */
void func_00115CE4(float *out, float *m, float *v);             /* out = m(3x3) * v */
void func_00115C54(float *out, float *a, float *b);             /* out = a + b */
void func_00115C70(float *out, float *a, float *b);             /* out = a - b */

static void cp3(float *d, const float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }

void *func_0054D978(char *base, char *obj, uint32_t idx) {
    char *e = idx < 4 ? base + idx * 0x10 + 0x20 : data_0072AA58;
    int32_t key = FLD(e, 0, int16_t);
    char *o = func_00435714(&key);
    if (o == NULL)
        return NULL;
    int32_t kind = FLD(obj, 0x48, int32_t);
    if (kind == 5 || kind == 6)
        FLD(o, 0x28, uint16_t) = 0x224;
    float pos[3];
    cp3(pos, (float *)AT(obj, 4));
    float *opos = (float *)AT(o, 4);
    switch (FLD(o, 0x54, uint16_t)) {
    case 1:
        cp3(opos, (float *)AT(obj, 4));
        break;
    case 5: {
        float dir[3];
        func_004D8240(dir, FLD(obj, 0x1C, uint32_t), FLD(obj, 0x20, uint32_t), 1.0f);
        float x = FLD(obj, 0x04, float), y = FLD(obj, 0x08, float), z = FLD(obj, 0x0C, float);
        float s = x * x;
        float t = y * y;
        s = s + t;
        t = z * z;
        s = s + t;
        cp3((float *)AT(o, 0x58), dir);
        FLD(o, 0x64, float) = sqrtf(s);
        break;
    }
    case 6: {
        float h = func_0054DE54(base, obj, idx, 1);
        pos[1] = pos[1] + h;
        cp3(opos, pos);
        FLD(o, 0x58, float) = h;
        break;
    }
    case 7:
    case 8: {
        float mstack[9];
        float *m = FLD(o, 0x54, uint16_t) == 7 ? mstack : (float *)AT(o, 0x64);
        func_004D7E0C(m, FLD(obj, 0x1C, uint32_t), FLD(obj, 0x20, uint32_t));
        float h = func_0054DE54(base, obj, idx, 1);
        float v[3], vc[3];
        func_00115D70(v, data_007A923C, h);
        cp3(vc, v);
        func_00115CE4(opos, m, vc);
        func_00115C54(opos, opos, pos);
        FLD(o, 0x58, float) = FLD(obj, 0x10, float) * FLD(e, 0x04, float);
        FLD(o, 0x5C, float) = FLD(obj, 0x14, float) * FLD(e, 0x08, float);
        FLD(o, 0x60, float) = FLD(obj, 0x18, float) * FLD(e, 0x0C, float);
        break;
    }
    case 9: {
        float ey[3], t[3], tc[3], top[3];
        cp3(ey, data_007A923C);
        float h = FLD(e, 0x08, float) * FLD(obj, 0x14, float);
        float r = FLD(e, 0x04, float) * FLD(obj, 0x10, float);
        func_00115D70(t, ey, h);
        cp3(tc, t);
        func_00115C54(t, (float *)AT(obj, 4), tc);
        cp3(top, t);
        func_00115D70(t, ey, h);
        cp3(tc, t);
        func_00115C70(t, top, tc);
        cp3((float *)AT(o, 0x58), t);
        func_00115D70(t, ey, h);
        cp3(tc, t);
        func_00115C54(t, top, tc);
        cp3((float *)AT(o, 0x64), t);
        FLD(o, 0x70, float) = r;
        break;
    }
    default:
        break;
    }
    cp3((float *)AT(o, 0x1C), opos);
    cp3((float *)AT(o, 0x10), opos);
    return o;
}
