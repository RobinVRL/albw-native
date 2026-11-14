/* USA 00431F44 <- EU 00431F24: KCL collision object, segment (swept sphere) query p0 -> p1
 * against the mesh: sets up the global KCL query context and walks the octree.
 *     int f(KclObj *obj, u32 user, const Query *q);   returns (s8)ctx->hitFlag (+0x6D)
 *   local = copy of the first 0x2A bytes of q (00110D44), local+0x2C = 0.0f,
 *   local+0x30 = data_007A9260 (Vec3); local+0x28 (multi flag, from q+0x28) is cleared unless
 *   both q->p0 (q+0x1C) and q->p1 (q+0x20) lie within obj+0x49C of the last single-sphere centre
 *   obj+0x490 (only checked when q+0x28 != 0 and obj+0x4A0 == 0);
 *   ctx = data_007307DC: +0x18 = p1 - obj->pos (+4), +0x24 = p0 - obj->pos, +0x6D/+0x6C/+0x6F = 0,
 *   +0x60 = FLT_MAX, +0 = &local, +0x30 = user, +0x34 = 0, +0x48 = (p0 - pos) - (p1 - pos),
 *   +0x38 = data_00709CC8[1]; callback object cb = {vtable data_006F7BD8, obj,
 *   data_00694750+0x10, +0x14} on the stack;
 *   multi flag set: ctx+0x68 = local+0x14 (attribute mask) and cb->vt[0](cb, obj) for every prism
 *     already in the hit list (from *(obj+0x48C)+2, 0-terminated) that passes the attribute mask
 *     and the class filter (data_00709C38 ? class 9 : class 8 excluded);
 *   else: |ctx18 - ctx24|^2 <= (obj+0x58)->[0xE8] (`ble`, NaN -> short path) ->
 *     0042E990(obj, ctx+0x18, mask, &cb); otherwise the AABB of the two points (0068B200 from
 *     {+FLT_MAX x3, -FLT_MAX x3}) -> 0042EFB0(obj, min, max, mask, &cb).
 * Caller: 00434558 (KCL object virtual).
 *
 * What was wrong in the Ghidra C: the relative endpoints are word copies (ldr/str); Ghidra typed
 * the x words as float and printed `DAT[6] = (int)local_a8` / `DAT[9] = (int)local_9c`, value
 * conversions natively (x truncated to an integer, then reinterpreted as bits = ~0), and the
 * length test re-read the context words through `(float)piVar2[6]` value conversions. Natively
 * every segment query had x ~ 0 and chose the short/long path at random.
 * 64-bit note: ctx+0 receives the address of a stack object (as on the 3DS); with the 64-bit
 * build that word needs the native stack below 4 GiB or a context field widened by the owner of
 * the KCL query structures.
 *
 * Prototype = round 2's `int (int, int, byte *)` (r3 is not live-in: the old 4th parameter was
 * dropped; obj as a 32-bit word + gp_ptr for -m64).
 * Verified against EU 00431F24-00432234 instruction by instruction (incl. the `bgt` / `bhs`
 * radius tests, the C70 operand order, the ldrsb return). Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];
extern uint32_t data_007A9260[3];
extern uint32_t data_00709CC8[2];
extern char data_00694750[];
extern char data_006F7BD8[];
extern uint8_t data_00709C38;
void func_0068B200(float *box, const float *p);   /* AABB {min, max} extend by p */
void func_0042E990(uint32_t obj_w, const float *p, uint32_t attrMask, char *cb);
int func_0042EFB0(uint32_t obj_w, const float *mn, const float *mx, uint32_t mask, void *cb);

typedef void (*kcl_cb_fn)(void *cb, void *obj);

int func_00431F44(uint32_t obj_w, uint32_t user, const char *q) {
    char *obj = (char *)gp_ptr(obj_w);
    uint32_t localw[15];
    char *local = (char *)localw;
    memcpy(local, q, 0x2A);
    FLD(local, 0x2C, float) = 0.0f;
    FLD(local, 0x30, uint32_t) = data_007A9260[0];
    FLD(local, 0x34, uint32_t) = data_007A9260[1];
    FLD(local, 0x38, uint32_t) = data_007A9260[2];

    if (FLD(q, 0x28, uint8_t) != 0 && FLD(obj, 0x4A0, uint8_t) == 0) {
        const float *c = (const float *)AT(obj, 0x490);
        float rr = FLD(obj, 0x49C, float) * FLD(obj, 0x49C, float);
        const float *p = GPTR(q, 0x1C, float);
        float dx = p[0] - c[0], dy = p[1] - c[1], dz = p[2] - c[2];
        if (VCMP_GT(dx * dx + dy * dy + dz * dz, rr)) {
            FLD(local, 0x28, uint8_t) = 0;
        } else {
            p = GPTR(q, 0x20, float);
            dx = p[0] - c[0]; dy = p[1] - c[1]; dz = p[2] - c[2];
            if (!VCMP_HS(rr, dx * dx + dy * dy + dz * dz))
                FLD(local, 0x28, uint8_t) = 0;
        }
    }
    const float *pos = (const float *)AT(obj, 4);
    const float *p1 = GPTR(q, 0x20, float);
    const float *p0 = GPTR(q, 0x1C, float);
    float e[3] = {p1[0] - pos[0], p1[1] - pos[1], p1[2] - pos[2]};   /* sp+8  */
    float s[3] = {p0[0] - pos[0], p0[1] - pos[1], p0[2] - pos[2]};   /* sp+14 */
    char *ctx = data_007307DC;
    memcpy(AT(ctx, 0x18), e, 12);
    memcpy(AT(ctx, 0x24), s, 12);
    FLD(ctx, 0x6D, uint8_t) = 0;
    FLD(ctx, 0x6C, uint8_t) = 0;
    FLD(ctx, 0x6F, uint8_t) = 0;
    FLD(ctx, 0x60, uint32_t) = 0x7F7FFFFFu;                          /* FLT_MAX */
    FLD(ctx, 0, uint32_t) = gp_u32(local);
    FLD(ctx, 0x30, uint32_t) = user;
    FLD(ctx, 0x34, uint32_t) = 0;
    FLD(ctx, 0x48, float) = s[0] - e[0];
    FLD(ctx, 0x4C, float) = s[1] - e[1];
    FLD(ctx, 0x50, float) = s[2] - e[2];
    FLD(ctx, 0x38, uint32_t) = data_00709CC8[1];

    uint32_t cbw[4];
    cbw[0] = gp_u32(data_006F7BD8);
    cbw[1] = gp_u32(obj);
    cbw[2] = FLD(data_00694750, 0x10, uint32_t);
    cbw[3] = FLD(data_00694750, 0x14, uint32_t);
    uint32_t mask = FLD(local, 0x14, uint32_t);

    if (FLD(local, 0x28, uint8_t) != 0) {
        FLD(ctx, 0x68, uint32_t) = mask;
        uint16_t *ent = (uint16_t *)gp_ptr(FLD(obj, 0x48C, uint32_t));
        for (++ent; *ent != 0; ++ent) {
            char *prism = GPTR(GPTR(obj, 0x5C, char), 8, char) + *ent * 16;
            FLD(obj, 0x70, uint32_t) = gp_u32(prism);
            uint32_t attr = FLD(prism, 0xE, uint16_t);
            if ((FLD(ctx, 0x68, uint32_t) & (1u << (attr & 0x1F))) == 0)
                continue;
            uint32_t cls = (attr & 0xB000) >> 12;
            if (data_00709C38 != 0 ? cls == 9 : cls == 8)
                continue;
            kcl_cb_fn fn = (kcl_cb_fn)gp_ptr(FLD(gp_ptr(cbw[0]), 0, uint32_t));
            fn(cbw, obj);
        }
        return FLD(ctx, 0x6D, int8_t);
    }
    float dx = FLD(ctx, 0x18, float) - FLD(ctx, 0x24, float);
    float dy = FLD(ctx, 0x1C, float) - FLD(ctx, 0x28, float);
    float dz = FLD(ctx, 0x20, float) - FLD(ctx, 0x2C, float);
    if (VCMP_LE(dx * dx + dy * dy + dz * dz, FLD(GPTR(obj, 0x58, char), 0xE8, float))) {
        func_0042E990(obj_w, (const float *)AT(ctx, 0x18), mask, (char *)cbw);
    } else {
        float box[6];
        uint32_t fmax = 0x7F7FFFFFu, fmin = 0xFF7FFFFFu;
        memcpy(&box[0], &fmax, 4); memcpy(&box[1], &fmax, 4); memcpy(&box[2], &fmax, 4);
        memcpy(&box[3], &fmin, 4); memcpy(&box[4], &fmin, 4); memcpy(&box[5], &fmin, 4);
        func_0068B200(box, (float *)AT(ctx, 0x18));
        func_0068B200(box, (float *)AT(ctx, 0x24));
        func_0042EFB0(obj_w, &box[0], &box[3], mask, cbw);
    }
    return FLD(ctx, 0x6D, int8_t);
}
