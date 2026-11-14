/* USA 0042E7F4 <- EU 0042E7D4: KCL collision object, run a query (one or several query
 * records) against the mesh. Called (tail) by the actor-collider prefilter 004ED9F4 for every
 * collider that overlaps the mesh's AABB.
 *     int f(KclObj *obj, Query *q, int count);
 *   ctx = data_007307DC (global KCL query context); ctx+0x6E = 1 (busy);
 *   obj+0x488 = &obj->hits (obj+0x88, u16 hit count first);
 *   count == 1: obj+0x4A0 = 0; obj+0x490 = *q->pos (q+0x1C) + q->offset (q+0x30) (Vec3 add
 *               00115C54), obj+0x49C = q+0x2C (radius bits); obj->vt[5](obj, 0, q);
 *   else:       obj+0x4A0 = 1; for i < count: obj->vt[5](obj, 0, q + i*0x3C);
 *   ctx+0x6E = 0; *(u16 *)obj->[0x488] = 0; return obj->hits(u16) != 0.
 *
 * What was wrong in the Ghidra C: the sphere centre is stored with `ldm/stm` of the Vec3 result;
 * Ghidra typed the x word as float and printed the store `param_1[0x124] = (int)local_28`, a
 * float->int VALUE conversion natively (x truncated to an integer, then read back as float bits
 * by the KCL traversal = a denormal ~0). Every single-sphere KCL query was centred at x ~ 0.
 *
 * Verified against EU 0042E7D4-0042E8A0 (strb/str order kept: the count is cleared through the
 * obj+0x488 pointer, then the u16 at obj+0x88 is the result). The add is component-wise
 * q->pos + offset exactly like 00115C54(out, *(q+0x1C), q+0x30).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];

typedef void (*kcl_query_fn)(void *self, int zero, void *query);

static void call_vt5(char *obj, char *q) {
    char *vt = GPTR(obj, 0, char);
    kcl_query_fn fn = (kcl_query_fn)gp_ptr(FLD(vt, 0x14, uint32_t));
    fn(obj, 0, q);
}

int func_0042E7F4(char *obj, char *q, int count) {
    char *ctx = data_007307DC;
    FLD(ctx, 0x6E, uint8_t) = 1;
    FLD(obj, 0x488, uint32_t) = gp_u32(obj + 0x88);
    if (count == 1) {
        FLD(obj, 0x4A0, uint8_t) = 0;
        float *pos = GPTR(q, 0x1C, float);
        float *off = (float *)AT(q, 0x30);
        FLD(obj, 0x490, float) = pos[0] + off[0];
        FLD(obj, 0x494, float) = pos[1] + off[1];
        FLD(obj, 0x498, float) = pos[2] + off[2];
        FLD(obj, 0x49C, uint32_t) = FLD(q, 0x2C, uint32_t);
        call_vt5(obj, q);
    } else {
        FLD(obj, 0x4A0, uint8_t) = 1;
        for (int i = 0; i < count; i++)
            call_vt5(obj, q + i * 0x3C);
    }
    FLD(ctx, 0x6E, uint8_t) = 0;
    FLD(GPTR(obj, 0x488, char), 0, uint16_t) = 0;
    return FLD(obj, 0x88, uint16_t) != 0;
}
