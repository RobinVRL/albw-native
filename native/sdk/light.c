/* 3DS fragment lighting producers on the native renderer (render/fraglight.h).
 *
 * The game keeps one light environment per light set (51 sets, 0x278 bytes each, array at
 * *(envarr +0)): +0 dirty flag, +4 an nn::gr LightEnv-like object E (E+0 global ambient RGB,
 * E+4 + 0x2C * i light object i, E+0x164 + i enabled, E+0x16C + i spot on, E+0x174 + i distance
 * attenuation on, E+0x17C + i shadowed, E+0x184 LUT config, +0x185 Fresnel selector, +0x186
 * shadow selector, +0x187 bump mode, +0x188 bump texture, +0x189 / +0x18A / +0x18B / +0x18C shadow
 * primary / secondary / alpha / invert, +0x18D bump renormalise, +0x18E clamp highlights,
 * +0x18F / +0x190 D0 / D1 on, +0x191 RR/RG/RB on, +0x19C / +0x19D / +0x19E spot LUT input /
 * absolute / scale); +0x1B4 + 16 i the light colours (ambient, diffuse, specular 0, specular 1),
 * +0x234 the set's ambient, +0x238 + 4 i spot LUT sampler, +0x258 + 4 i distance LUT sampler.
 * A light object (0x2C): +0 id, +1 two-sided diffuse, +2 / +3 geometric factor 0 / 1,
 * +4 diffuse, +7 ambient, +0xA specular 0, +0xD specular 1 (RGB bytes, material x light,
 * 00564DA0 / 00565D80), then hardware-format position / spot / attenuation words.
 *
 * Replaced here (USA addresses), each recording ROP_FL ops with structured values instead of
 * PICA words:
 *   005626C0  LightEnv MakeCommand (0x8F, 0x1C0, 0x1C2-0x1C4, 0x1C6, 0x1D9) -> FL_ENV
 *   00562930  all enabled lights (00562978 each)
 *   00562978  one light, all registers (0x140-0x14B) -> FL_LIGHT + FL_POS
 *   00562A88  one light's colours (0x140-0x143) -> FL_LIGHT (colours)
 *   003CBC1C  lighting off (0x8F = 0, 0x1C6 = 1) -> FL_ENV disabled
 *   0056497C  material depth offset (0x4E) -> FL_POLYOFFSET
 *   00565A10  material LUT inputs (0x1D0-0x1D2 words from the material) + LUT uploads
 *             (0x1C5 select + CALL of the sampler blob) -> FL_LUTCFG + FL_LUT
 *   00565904  spot / distance LUTs of the light set -> FL_LUT
 *   005655D0, 00564C14, 00565B8C  material bind with fragment lighting (raw 0x144-0x147 position
 *             words, cached environment block) -> the ops above, then the material's blobs
 *   003FC2F8  per-eye light position block of the light set -> nothing (the positions are
 *             recorded with the environment; the port renders one eye)
 *   00567734, 00567AFC  light -> view-space position / spot direction (packed into the light
 *             object as before) + the float values kept in a native side table
 *   00567904  light -> enable / spot / attenuation flags, colours (as before) + distance
 *             attenuation scale / bias floats in the side table
 * The side table (by light object address) holds the float values the game packs into hardware
 * formats; the recorded ops take them from there, so no packed hardware word is ever read back.
 *
 * Confidence: register roles high (literal pools: 0x8F, 0x1C0, 0x1C2, 0x1C3, 0x1C6, 0x1C5 table
 * at EU 006A851C = {0x000, 0x100, 0x300, 0x600, 0x500, 0x400} -> samplers D0 D1 FR RR RG RB,
 * 0x4E); environment field names medium (from the bits they feed). */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/gptr.h"
#include "../render/fraglight.h"
#include "../render/render.h"

#define GA(a) ((uintptr_t)(uint32_t)(a))
static inline uint8_t G8(uint32_t a, uint32_t o) { return *(const uint8_t *)GA(a + o); }
static inline uint32_t G32(uint32_t a, uint32_t o) { uint32_t v; memcpy(&v, (const void *)GA(a + o), 4); return v; }
static inline float GF(uint32_t a, uint32_t o) { float v; memcpy(&v, (const void *)GA(a + o), 4); return v; }
static inline void W8(uint32_t a, uint32_t o, uint8_t v) { *(uint8_t *)GA(a + o) = v; }
static inline void W32(uint32_t a, uint32_t o, uint32_t v) { memcpy((void *)GA(a + o), &v, 4); }

/* decompiled game functions used here */
void func_003CC090(uint32_t *ctx, uint32_t addr, uint32_t bytes, uint32_t x);
void func_00564DA0(int32_t *mat, int32_t *envarr, int32_t state);
uint32_t func_003CBDDC(float f);   /* float -> float16 word */
uint32_t func_003CC140(float f);   /* float -> signed 1.11 fixed word */

/* ------------------------------------------------------------------ side table */

typedef struct {
    uintptr_t key;           /* light object address */
    float pos[3], spot[3];
    float da_scale, da_bias;
    uint8_t directional;
} Side;

static Side *g_side;
static size_t g_cap, g_count;

/* the side-table entry of a light object (created zeroed); game thread only */
static Side *side(uintptr_t key) {
    if ((g_count + 1) * 2 > g_cap) {
        Side *old = g_side;
        size_t oc = g_cap;
        g_cap = g_cap ? g_cap * 2 : 1024;
        g_side = calloc(g_cap, sizeof *g_side);
        if (!g_side) abort();
        g_count = 0;
        for (size_t i = 0; i < oc; i++)
            if (old[i].key) *side(old[i].key) = old[i];
        free(old);
    }
    size_t h = (size_t)((key >> 2) * 2654435761u) & (g_cap - 1);
    while (g_side[h].key && g_side[h].key != key) h = (h + 1) & (g_cap - 1);
    if (!g_side[h].key) { g_side[h].key = key; g_count++; }
    return &g_side[h];
}

/* ------------------------------------------------------------------ recording */

static uint32_t *rec(uint32_t *p, int kind, const void *payload, size_t n) {
    ROp op = fraglight_op(kind, payload, n);
    return render_rec(p, &op);
}
static void ctx_rec(int32_t *cur, int kind, const void *payload, size_t n) {
    uint32_t *p = GPTR_TO(uint32_t, cur[0]);
    cur[0] = (int32_t)GPTR_OF(rec(p, kind, payload, n));
}

/* the light object of light `i` of environment object E (= light set + 4) */
static uint32_t light_obj(uint32_t E, int i) { return E + 4 + 0x2C * (uint32_t)i; }

/* USA 005626C0  LightEnv MakeCommand (E, u32 *p, int dummy) -> p'. Writes lighting enable,
 * global ambient, light count, config 0/1 (LUT config, Fresnel, shadow, bump, clamp, per-light
 * spot / attenuation / shadow enables, LUT disables), the light permutation. High. */
uint32_t *func_005626C0(uint8_t *e, uint32_t *p, int32_t dummy) {
    FLEnv env;
    memset(&env, 0, sizeof env);
    int n = 0;
    for (int i = 0; i < 8; i++) {
        if (!e[0x164 + i]) continue;
        env.perm[n++] = (uint8_t)i;
        if (e[0x16C + i]) env.spot_mask |= (uint8_t)(1 << i);
        if (e[0x174 + i]) env.da_mask |= (uint8_t)(1 << i);
        if (e[0x17C + i]) env.shadow_mask |= (uint8_t)(1 << i);
    }
    env.enable = n != 0;
    env.nlights = (uint8_t)n;
    memcpy(env.ambient, e, 3);
    env.config = e[0x184];
    env.fresnel_sel = e[0x185];
    env.bump_mode = e[0x187];
    env.bump_sel = e[0x188];
    env.bump_renorm = !(e[0x187] && !e[0x18D]);
    env.clamp_highlights = e[0x18E] != 0;
    env.shadow = (uint8_t)((e[0x189] || e[0x18A] || e[0x18B]) | (e[0x189] != 0) << 1 | (e[0x18A] != 0) << 2 |
                           (e[0x18C] != 0) << 3 | (e[0x18B] != 0) << 4);
    /* environment LUT disables: D0, D1, FR (no Fresnel selector), RR/RG/RB */
    env.lut_off = (uint8_t)((!e[0x18F]) | (!e[0x190]) << 1 | (!e[0x185]) << 2 | (!e[0x191] ? 7 : 0) << 3);
    (void)dummy;
    return rec(p, FL_ENV, &env, sizeof env);
}

static void light_pos(uint32_t obj, FLPos *ps) {
    const Side *s = side(GA(obj));
    int k = ps->n++;
    ps->l[k].id = G8(obj, 0) & 7;
    ps->l[k].directional = s->directional;
    memcpy(ps->l[k].pos, s->pos, sizeof s->pos);
    memcpy(ps->l[k].spot, s->spot, sizeof s->spot);
}

static void light_colors(const uint8_t *l, FLLight *o) {
    memcpy(o->diffuse, l + 4, 3);
    memcpy(o->ambient, l + 7, 3);
    memcpy(o->spec0, l + 0xA, 3);
    memcpy(o->spec1, l + 0xD, 3);
}

/* USA 00562978  one light, all registers (light object, u32 *p) -> p': colours, position, spot
 * direction, config (directional, two-sided, geometric factors), distance attenuation bias /
 * scale. High. */
uint32_t *func_00562978(uint8_t *l, uint32_t *p) {
    FLLight o;
    memset(&o, 0, sizeof o);
    o.id = l[0] & 7;
    o.parts = FLL_COLOR | FLL_CONFIG | FLL_DIST;
    light_colors(l, &o);
    const Side *s = side((uintptr_t)l);
    o.directional = l[0x18] != 0;
    o.two_sided = l[1] != 0;
    o.geo0 = l[2] != 0;
    o.geo1 = l[3] != 0;
    o.da_bias = s->da_bias;
    o.da_scale = s->da_scale;
    p = rec(p, FL_LIGHT, &o, sizeof o);
    FLPos ps;
    memset(&ps, 0, sizeof ps);
    light_pos(GPTR_OF(l), &ps);
    return rec(p, FL_POS, &ps, sizeof ps);
}

/* USA 00562930  all enabled lights of E (E, u32 *p) -> p'. High. */
uint32_t *func_00562930(int32_t e, uint32_t *p) {
    for (int i = 0; i < 8; i++)
        if (G8((uint32_t)e, 0x164 + (uint32_t)i)) p = func_00562978(GPTR_TO(uint8_t, light_obj((uint32_t)e, i)), p);
    return p;
}

/* USA 00562A88  one light's colours (light object, u32 *p) -> p'. High. */
uint32_t *func_00562A88(uint8_t *l, uint32_t *p) {
    FLLight o;
    memset(&o, 0, sizeof o);
    o.id = l[0] & 7;
    o.parts = FLL_COLOR;
    light_colors(l, &o);
    return rec(p, FL_LIGHT, &o, sizeof o);
}

/* USA 003CBC1C  fragment lighting off (u32 *p, int dummy) -> p'. High. */
uint32_t *func_003CBC1C(uint32_t *p, int32_t dummy) {
    FLEnv env;
    memset(&env, 0, sizeof env);
    (void)dummy;
    return rec(p, FL_ENV, &env, sizeof env);
}

/* USA 0056497C  material depth offset (depth info {u32 format: bit 31 w-buffer, bits 24-30 depth
 * bits; f32 +8 offset, +0xC scale end}, u32 *p, f32 units) -> p'. The game writes the depth-map
 * offset register 0x4E = offset - (offset - end) * units * 128 / (2^bits - 1) (w-buffer: units
 * scaled to the depth range alone): a constant depth bias of units * 128 depth steps over the
 * range -> GL polygon offset units. Medium (sign/scale by reading the arithmetic). */
uint32_t *func_0056497C(uint32_t *info, uint32_t *p, float units) {
    FLPoly o;
    memset(&o, 0, sizeof o);
    if (units != 0.0f) {
        float a, b;
        memcpy(&a, &info[2], 4);
        memcpy(&b, &info[3], 4);
        o.enable = 1;
        o.units = (info[0] & 0x80000000u) ? units * 128.0f : units * 128.0f * (b - a);
    }
    return rec(p, FL_POLYOFFSET, &o, sizeof o);
}

static const uint8_t SAMPLER_ID[6] = {0, 1, 3, 6, 5, 4};          /* D0 D1 FR RR RG RB */
static const uint8_t SAMPLER_FLI[6] = {FLI_D0, FLI_D1, FLI_FR, FLI_RR, FLI_RG, FLI_RB};

/* USA 00565A10  material LUT inputs + LUTs (ResMaterial *mat (+0 params), CmdCtx *ctx, E): the
 * material's input words (params +0xA8, decoded at load: sdk/h3d.c) with the spot LUT input /
 * scale of the environment (E+0x19C / +0x19E) and the absolute-input flags of the six samplers
 * (params +0x8C.., byte 0 bit 0) and of the spot sampler (E+0x19D); then each sampler's table.
 * High. */
void func_00565A10(int32_t *mat, int32_t *cur, int32_t e) {
    uint32_t params = (uint32_t)mat[0], E = (uint32_t)e;
    FLLutCfg c;
    if (!fraglight_material_get(GA(params), &c)) memset(&c, 0, sizeof c);
    c.sel[FLI_SP] = G8(E, 0x19C) & 7;
    c.scale[FLI_SP] = G8(E, 0x19E) & 7;
    c.set |= 1 << FLI_SP;
    c.abs = (uint8_t)(G8(E, 0x19D) ? 1 << FLI_SP : 0);
    uint32_t smp[6];
    for (int i = 0; i < 6; i++) {
        smp[i] = G32(params, 0x8C + 4 * (uint32_t)i);
        if (smp[i] && (G8(smp[i], 0) & 1)) c.abs |= (uint8_t)(1 << SAMPLER_FLI[i]);
    }
    ctx_rec(cur, FL_LUTCFG, &c, sizeof c);
    for (int i = 0; i < 6; i++) {
        if (!smp[i]) continue;
        FLLutBind b = {SAMPLER_ID[i], {0}, fraglight_lut_find(GA(G32(smp[i], 4)))};
        ctx_rec(cur, FL_LUT, &b, sizeof b);
    }
}

/* USA 00565904  spot / distance-attenuation LUTs of the material's light set (mat, CmdCtx *ctx,
 * material state (+0x20 light set), env array): light i: sampler at set +0x238 + 4 i -> LUT
 * SP i (id 8 + i), +0x258 + 4 i -> DA i (id 16 + i). High. */
int32_t func_00565904(uint32_t mat, int32_t *cur, int32_t state, int32_t *envarr) {
    uint32_t set = (uint32_t)envarr[0] + (uint32_t)(*(const uint16_t *)GA((uint32_t)state + 0x20)) * 0x278;
    for (uint32_t i = 0; i < 8; i++) {
        uint32_t sp = G32(set, 0x238 + 4 * i), da = G32(set, 0x258 + 4 * i);
        if (sp) {
            FLLutBind b = {(uint8_t)(8 + i), {0}, fraglight_lut_find(GA(G32(sp, 4)))};
            ctx_rec(cur, FL_LUT, &b, sizeof b);
        }
        if (da) {
            FLLutBind b = {(uint8_t)(16 + i), {0}, fraglight_lut_find(GA(G32(da, 4)))};
            ctx_rec(cur, FL_LUT, &b, sizeof b);
        }
    }
    return 0;
}

/* ------------------------------------------------------------------ material binds */

/* material flags (params +6) -> environment bytes (005655D0 / 00565B8C) */
static void env_from_material(uint32_t set, uint32_t params) {
    uint8_t f = G8(params, 6);
    W8(set, 0x191, f & 1);
    W8(set, 0x192, (f >> 1) & 1);
    W8(set, 0x193, (f >> 2) & 1);
    W8(set, 0x194, (f >> 3) & 1);
    W8(set, 0x195, (f >> 4) & 1);
    W8(set, 0x188, G8(params, 0xA4) & 0xF);
    W8(set, 0x189, G8(params, 0xA5));
    W8(set, 0x18B, G8(params, 0xA6));
    W8(set, 0x18C, G8(params, 0xA7));
}

static void depth_offset(int32_t *cur, const uint16_t *state, int32_t *envarr, uint32_t params) {
    uint32_t *p = GPTR_TO(uint32_t, cur[0]);
    if (state[0] & 0x20) {
        p = func_0056497C((uint32_t *)(envarr + 0x14), p, GF(params, 0xC4));
    } else {
        FLPoly o;
        memset(&o, 0, sizeof o);
        p = rec(p, FL_POLYOFFSET, &o, sizeof o);
    }
    cur[0] = (int32_t)GPTR_OF(p);
}

/* environment + lights of light set E, then the depth offset */
static void env_record(int32_t *cur, uint32_t E, const uint16_t *state, int32_t *envarr, uint32_t params) {
    uint32_t *p = GPTR_TO(uint32_t, cur[0]);
    p = func_005626C0(GPTR_TO(uint8_t, E), p, 1);
    p = func_00562930((int32_t)E, p);
    cur[0] = (int32_t)GPTR_OF(p);
    depth_offset(cur, state, envarr, params);
}

static void unlit(int32_t *cur, const uint16_t *state, int32_t *envarr, uint32_t params) {
    cur[0] = (int32_t)GPTR_OF(func_003CBC1C(GPTR_TO(uint32_t, cur[0]), 1));
    depth_offset(cur, state, envarr, params);
}

/* the material's command blobs: fragment (params +0xC8), textures (mat +0x10), texture units
 * (state +0x13C / +0x144 / +0x14C) */
static void material_blobs(int32_t *mat, int32_t *cur, const uint16_t *state) {
    uint32_t params = (uint32_t)mat[0], st = GPTR_OF(state);
    uint32_t *ctx = (uint32_t *)cur;
    func_003CC090(ctx, G32(params, 0xC8), G32(params, 0xCC) << 2, 0);
    func_003CC090(ctx, (uint32_t)mat[4], (uint32_t)mat[5] << 2, 0);
    for (uint32_t k = 0; k < 3; k++) func_003CC090(ctx, G32(st, 0x13C + 8 * k), G32(st, 0x140 + 8 * k) << 2, 0);
}

/* USA 005655D0  material bind, light environment rebuilt when needed (ResMaterial *mat, CmdCtx
 * *ctx, material state, env array): unlit (state bit 0 clear): lighting off + depth offset;
 * lit: LUTs (00565A10), and when the cached environment is stale (bit 0x80 clear) the light
 * colours (00564DA0) and environment flags from the material, then environment + lights + depth
 * offset; else the cached environment and the light positions. Then the material's blobs.
 * Native: the environment is recorded from the same objects each time (the original's cached
 * block in the material state is not filled: state +0xC/+0x10 = block, 0 words). High. */
void func_005655D0(int32_t *mat, int32_t *cur, uint16_t *state, int32_t *envarr) {
    uint32_t params = (uint32_t)mat[0], st = GPTR_OF(state);
    if (!(state[0] & 1)) {
        unlit(cur, state, envarr, params);
    } else {
        uint32_t set = (uint32_t)envarr[0] + (uint32_t)state[0x10] * 0x278, E = set + 4;
        func_00565A10(mat, cur, (int32_t)E);
        if (!(state[0] & 0x80)) {
            func_00564DA0(mat, envarr, (int32_t)st);
            env_from_material(set, params);
            env_record(cur, E, state, envarr, params);
            uint32_t blk = G32(st, 0x14 + 4 * G32(st, 0x1C));
            W32(st, 0x0C, blk);
            W32(st, 0x10, 0);
            state[0] = (uint16_t)((state[0] & 0xFEFF) | 0x80);
        } else {
            env_record(cur, E, state, envarr, params);
        }
    }
    material_blobs(mat, cur, state);
}

/* USA 00564C14  material bind with the cached light environment (mat, ctx, state, env array):
 * unlit as 005655D0; lit: LUTs, the cached environment block, the light positions. Native: the
 * environment from the same objects (see 005655D0). High. */
void func_00564C14(int32_t *mat, int32_t *cur, uint16_t *state, int32_t *envarr) {
    uint32_t params = (uint32_t)mat[0];
    if (!(state[0] & 1)) {
        unlit(cur, state, envarr, params);
    } else {
        uint32_t E = (uint32_t)envarr[0] + (uint32_t)state[0x10] * 0x278 + 4;
        func_00565A10(mat, cur, (int32_t)E);
        env_record(cur, E, state, envarr, params);
    }
    material_blobs(mat, cur, state);
}

/* USA 00565B8C  material bind, light environment always rebuilt (models with flag 0x2000):
 * like the stale path of 005655D0 written straight into the command list. High. */
void func_00565B8C(int32_t *mat, int32_t *cur, uint16_t *state, int32_t *envarr) {
    uint32_t params = (uint32_t)mat[0];
    if (!(state[0] & 1)) {
        unlit(cur, state, envarr, params);
    } else {
        uint32_t set = (uint32_t)envarr[0] + (uint32_t)state[0x10] * 0x278, E = set + 4;
        func_00565A10(mat, cur, (int32_t)E);
        func_00564DA0(mat, envarr, (int32_t)GPTR_OF(state));
        env_from_material(set, params);
        env_record(cur, E, state, envarr, params);
    }
    material_blobs(mat, cur, state);
}

/* USA 003FC2F8  CALL the per-eye light position block of the material's light set (ctx, state,
 * position table). Native: nothing - the positions of the (single, left) eye are recorded with
 * the environment by the material bind just before. High (role), the right eye is not rendered. */
void func_003FC2F8(int32_t *cur, uint16_t *state, int32_t table) { (void)cur; (void)state; (void)table; }

/* ------------------------------------------------------------------ light updates */

/* view (3x4 row-major) x direction */
static void rot(const float *m, const float *d, float o[3]) {
    for (int r = 0; r < 3; r++) o[r] = m[r * 4] * d[0] + m[r * 4 + 1] * d[1] + m[r * 4 + 2] * d[2];
}

/* light resource (h3d light, as in the BCH light section): +0x1C position, +0x28 type (9
 * directional, 11 spot, else point), +0x29 enabled, +0x2A flags (bit 0 two-sided, bit 1 distance
 * attenuation), +0x2B spot LUT input | scale << 4, +0x30..+0x3C ambient / diffuse / specular 0 / 1,
 * +0x40 direction, +0x4C distance LUT sampler, +0x50 spot LUT sampler, +0x54 / +0x58 distance
 * attenuation start / end */
static void view_light(uint32_t light, uint32_t obj, const float *view, uint32_t *pos_words, uint32_t *spot_words) {
    Side *s = side(GA(obj));
    float dir[3] = {GF(light, 0x40), GF(light, 0x44), GF(light, 0x48)}, r[3];
    uint8_t type = G8(light, 0x28);
    if (type == 11) {
        rot(view, dir, r);
        for (int k = 0; k < 3; k++) s->spot[k] = -r[k];
        spot_words[0] = func_003CC140(-r[0]) | func_003CC140(-r[1]) << 16;
        spot_words[1] = func_003CC140(-r[2]);
    }
    if (type == 9) {
        rot(view, dir, r);
        for (int k = 0; k < 3; k++) s->pos[k] = -r[k];
        s->directional = 1;
    } else {
        float p[3] = {GF(light, 0x1C), GF(light, 0x20), GF(light, 0x24)};
        for (int k = 0; k < 3; k++)
            s->pos[k] = view[k * 4 + 3] + view[k * 4] * p[0] + view[k * 4 + 1] * p[1] + view[k * 4 + 2] * p[2];
        s->directional = 0;
    }
    pos_words[0] = func_003CBDDC(s->pos[0]) | func_003CBDDC(s->pos[1]) << 16;
    pos_words[1] = func_003CBDDC(s->pos[2]);
}

/* USA 00567734  light `idx` of light set `set` from a light resource and the view matrix (light,
 * env array, set, idx, const Mtx34 *view): spot direction (spot lights), position or direction
 * -> the light object (float16 / 1.11 words) and the side table. High. */
void func_00567734(int32_t light, int32_t *envarr, uint32_t set, int32_t idx, float *view) {
    uint32_t L = (uint32_t)light;
    if (!G8(L, 0x29)) return;
    uint32_t obj = light_obj((uint32_t)envarr[0] + (set & 0xFFFF) * 0x278 + 4, idx);
    uint32_t pw[2], sw[2];
    view_light(L, obj, view, pw, sw);
    if (G8(L, 0x28) == 11) { W32(obj, 0x24, sw[0]); W32(obj, 0x28, sw[1]); }
    W32(obj, 0x10, pw[0]);
    W32(obj, 0x14, pw[1]);
    W8(obj, 0x18, G8(L, 0x28) == 9);
}

/* USA 00567AFC  as 00567734 for both eyes (view0, view1): also the light set's per-eye position
 * table (env array [0x19] -> +set * 0x100 + idx * 0x20: eye 0 / eye 1 position, spot words, +0x1C
 * enabled, +0x1D spot). The side table keeps eye 0. High. */
void func_00567AFC(int32_t light, int32_t *envarr, uint32_t set, int32_t idx, float *view0, float *view1) {
    uint32_t L = (uint32_t)light;
    uint32_t tbl = G32((uint32_t)envarr[0x19], 0) + (set & 0xFFFF) * 0x100 + (uint32_t)idx * 0x20;
    if (!G8(L, 0x29)) { W8(tbl, 0x1C, 0); return; }
    W8(tbl, 0x1C, 1);
    uint32_t obj = light_obj((uint32_t)envarr[0] + (set & 0xFFFF) * 0x278 + 4, idx);
    uint32_t pw[2], sw[2], pw1[2], sw1[2];
    Side keep = *side(GA(obj));
    view_light(L, obj, view1, pw1, sw1);     /* eye 1: words only */
    *side(GA(obj)) = keep;
    view_light(L, obj, view0, pw, sw);
    uint8_t type = G8(L, 0x28);
    W8(tbl, 0x1D, type == 11);
    if (type == 11) {
        W32(tbl, 0x0C, sw[0]);
        W32(tbl, 0x10, sw1[0]);
        W32(tbl, 0x14, sw[1]);
        W32(tbl, 0x18, sw1[1]);
        W32(obj, 0x24, sw[0]);
        W32(obj, 0x28, sw[1]);
    }
    W32(tbl, 0x00, pw[0]);
    W32(tbl, 0x04, pw1[0]);
    *(uint16_t *)GA(tbl + 8) = (uint16_t)pw[1];
    *(uint16_t *)GA(tbl + 10) = (uint16_t)pw1[1];
    W32(obj, 0x10, pw[0]);
    W32(obj, 0x14, pw[1]);
    W8(obj, 0x18, type == 9);
}

/* float -> PICA float20 (1.7.12) word, as the game packs the distance attenuation */
static uint32_t f20(float f) {
    uint32_t u;
    memcpy(&u, &f, 4);
    int e = 0;
    if (fabsf(f) == 0.0f || (e = (int)((u << 1) >> 24) - 0x40) >= 0)
        return (u << 9) >> 20 | (uint32_t)e << 12 | (u >> 31) << 19;
    return (u >> 31) << 19;
}

/* USA 00567904  light `idx` of set `set`: enabled, spot (sampler, LUT input / scale / absolute
 * into the set), distance attenuation (sampler; scale = 1 / (end - start), bias = -start scale
 * into the light object (float20) and the side table), two-sided flag, the light colours.
 * High. */
void func_00567904(int32_t light, int32_t *envarr, uint32_t set, int32_t idx) {
    uint32_t L = (uint32_t)light, s = set & 0xFFFF;
    uint32_t S = (uint32_t)envarr[0] + s * 0x278, E = S + 4, i = (uint32_t)idx;
    if (!G8(L, 0x29)) { W8(E, 0x164 + i, 0); return; }
    W8(E, 0x164 + i, 1);
    if (G8(L, 0x28) == 11) {
        W8(E, 0x16C + i, 1);
        W32(S, 0x238 + 4 * i, G32(L, 0x50));
        W8(S, 0x1A0, G8(L, 0x2B) & 0xF);
        W8(S, 0x1A2, G8(L, 0x2B) >> 4);
        W8(S, 0x1A1, G8(G32(L, 0x50), 0) & 1);
    } else {
        W8(E, 0x16C + i, 0);
        W32(S, 0x238 + 4 * i, 0);
    }
    uint32_t obj = light_obj(E, idx);
    if (!(G8(L, 0x2A) & 2)) {
        W8(E, 0x174 + i, 0);
        W32(S, 0x258 + 4 * i, 0);
    } else {
        W8(E, 0x174 + i, 1);
        float sc = 1.0f / (GF(L, 0x58) - GF(L, 0x54)), bias = -(GF(L, 0x54) * sc);
        W32(obj, 0x20, f20(sc));
        W32(obj, 0x1C, f20(bias));
        W32(S, 0x258 + 4 * i, G32(L, 0x4C));
        Side *sd = side(GA(obj));
        sd->da_scale = sc;
        sd->da_bias = bias;
    }
    W8(obj, 1, G8(L, 0x2A) & 1);
    for (uint32_t k = 0; k < 4; k++) W32(S, 0x1B4 + 0x10 * i + 4 * k, G32(L, 0x30 + 4 * k));
}
