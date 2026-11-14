/* Standalone test of the native nw::h3d model path (native/sdk/h3d.c + native/render/h3d.c, the
 * hand-written DefaultShader GLSL) with real game data from the user's ROM, without the game.
 *
 * The BCH files are placed in game-visible memory and set up the way the game does it
 * (00233F4C: section table, then the REPLACED ResFile setup func_003FCCF8, which runs a test
 * stand-in of the game's relocation 003FCE5C (same rules: pointers absolute, vertex / index
 * offsets from the attribute base, texture addresses >> 3) and then converts every command blob
 * once). Draw elements, model instances, skeleton instances (bind pose), uniform-location objects
 * and the visibility block are filled like the game's, and the REPLACED producers record the
 * command list:
 *   00131244 camera, 00170378 NormMtx + hemisphere, material blobs CALLed like 001708A0 does
 *   (fragment blob, texture blob, the textures' unit blobs), 00565204 material uniforms,
 *   00170558 per mesh -> 005683D0 (skinned: bone palette, sub-mesh blob CALLs), 00568798 (room
 *   meshes drawn from visibility index lists) or 005681C0;
 * then the list runs through render_exec_cmds into a 400x240 colour + depth surface -> PNG.
 *
 *   h3d_test <out dir> [model spec [room spec [room model [room texture file]]]]
 *   ALBW_ROM = the ROM (native/assets/romfs.c); H3D_TEST_ONLY=<material name>: draw only meshes
 *   of that material (debugging)
 * Writes h3d_link.png (Link, bind pose, skinned), h3d_room.png (dungeon room dgn_East1F02 with its
 * shared texture file), h3d_room2.png (another view). Also compiles all 60 DefaultShader variants.
 * Static buffers + -no-pie keep every game-visible address below 2 GiB (32-bit fields). */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../../assets/bch.h"
#include "../../assets/png.h"
#include "../../assets/romfs.h"
#include "../../assets/sarc.h"
#include "../../assets/yaz0.h"
#include "../../include/gptr.h"
#include "../../platform/platform.h"
#include "../h3d.h"
#include "../render.h"

/* replaced producers under test (native/sdk/h3d.c) */
uint32_t func_003FCCF8(uint32_t *out, uint32_t *hdr, uint32_t *sec);
uint32_t *func_00131244(uint32_t rnd, uint32_t *p, const float *view, const float *proj);
void func_00170558(uint32_t elem, uint32_t *ctx, uint32_t x, uint32_t y);
void func_00170378(uint32_t elem, uint32_t *ctx, uint32_t *cache, const float *normal);
void func_00565204(uint32_t *mat, uint32_t *ctx, uint16_t *state, uint32_t *lut);
uint32_t *func_003CC230(uint32_t *p, uint32_t *size_slot, uint32_t target, uint32_t size); /* sdk/gr.c */

static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; fprintf(stderr, "FAIL: " __VA_ARGS__); fputc('\n', stderr); } } while (0)

/* ---------------------------------------------------------------- game-visible memory */
static uint8_t heap[160u << 20] __attribute__((aligned(128)));
static size_t heap_used;
static uint32_t cmd[4u << 20] __attribute__((aligned(16)));
static uint32_t vram_base;

static void *halloc(size_t n, size_t align) {
    heap_used = (heap_used + align - 1) & ~(align - 1);
    if (heap_used + n > sizeof heap) { fprintf(stderr, "test heap full\n"); exit(1); }
    void *p = heap + heap_used;
    memset(p, 0, n);
    heap_used += n;
    return p;
}
#define A32(p) ((uint32_t)(uintptr_t)(p))
static uint32_t R32(uint32_t a, uint32_t o) { uint32_t v; memcpy(&v, (const void *)(uintptr_t)(a + o), 4); return v; }
static uint16_t R16(uint32_t a, uint32_t o) { uint16_t v; memcpy(&v, (const void *)(uintptr_t)(a + o), 2); return v; }
static void W32(void *p, uint32_t o, uint32_t v) { memcpy((uint8_t *)p + o, &v, 4); }

/* ---------------------------------------------------------------- stand-ins for the decompiled game code */
/* game data the producers read */
uint32_t data_0070B960, data_00725BCC = 1, data_00725BD0, data_007270F4 = 1, data_0070B928, data_00712F70;
float data_007AF2A4[12] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};

int32_t func_00100174(uint32_t *guard) { *guard |= 1; return 0; }
uint32_t func_003FA8AC(uint32_t a, uint16_t *state, uint32_t lut) { return 0; }
void func_003FC8DC(uint32_t resfile, uint32_t *b0, uint32_t *b1, uint32_t a, uint32_t b) {}
void func_005FFDC0(void) {}
void func_006003D8(uint32_t pname, uint32_t *out) { *out = 0; }
void func_00601378(int32_t bytes) {}
void func_005FFF7C(uint32_t size) {}
uint32_t *func_003CC124(uint32_t *c, uint32_t p) { c[0] = c[1] = c[2] = p; c[3] = c[4] = 0; return c; }
void func_003CC054(uint32_t *c, uint32_t x) {}
/* 003CC1E4: pad with zero words so that (written words + n) is 16-byte aligned (Ghidra body) */
uint32_t *func_003CC1E4(uint32_t *p, uint32_t n) {
    if ((n & 0xF) != 0) {
        int k = 4 - (int)((n << 28) >> 30);
        for (int i = 0; i < k; i++) *p++ = 0;
    }
    return p;
}
/* 003CC090: CALL a block from a command context (Ghidra body) */
void func_003CC090(uint32_t *c, uint32_t addr, uint32_t size, uint32_t x) {
    if (!addr) return;
    uint32_t slot = x;
    uint32_t *p = func_003CC1E4(GPTR_TO(uint32_t, c[0]), ((c[0] - c[2]) & ~3u) + 0x18);
    p = func_003CC230(p, &slot, addr, size);
    c[0] = A32(p);
    if (c[3]) *GPTR_TO(uint32_t, c[3]) = (c[0] - c[2]) >> 3;
    c[2] = c[0];
    c[3] = slot;
    if (!c[4]) c[4] = (c[0] - c[1]) & ~3u;
}
/* 005681C0: CALL enable blob, sub-mesh 0 blob, disable blob (Ghidra body) */
void func_005681C0(uint32_t mesh, uint32_t *c, uint32_t x, uint32_t y) {
    func_003CC090(c, R32(mesh, 8), R32(mesh, 0xC) << 2, y);
    if (R32(mesh, 0x14)) func_003CC090(c, R32(R32(mesh, 0x10), 0x2C), R32(R32(mesh, 0x10), 0x30) << 2, y);
    func_003CC090(c, R32(mesh, 0x18), R32(mesh, 0x1C) << 2, y);
}
/* 003FCE5C: the game's relocation (Ghidra body; VRAM base = vram_base) */
void func_003FCE5C(uint32_t *out, uint32_t resfile, uint32_t table, uint32_t count, uint32_t sections, uint32_t hdr,
                   uint32_t *bounds) {
    const uint32_t *sec = GPTR_TO(uint32_t, sections);
    int listing = !((*(const uint8_t *)(uintptr_t)(hdr + 0x40) >> 2) & 1);
    uint32_t err = 0, listed = 0, first = *bounds;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t v = R32(table, 4 * i), type = (v << 3) >> 28, loc = v & 0x1FFFFFF;
        if (type != 1) loc <<= 2;
        uint32_t src = v >> 29, base = (src == 2 && sec[8]) ? sec[8] : sec[src];
        uint32_t *p = GPTR_TO(uint32_t, base + loc);
        int ts = type == 0 ? 0 : type == 1 ? 1 : type <= 3 ? 2 : type <= 8 ? 3 : type <= 13 ? 4 : 0;
        uint32_t val = sec[ts] + *p;
        int list = 0;
        switch (type) {
        case 3: if (sec[8]) val = sec[8] + *p; /* fall through */
        case 0: case 1: case 2: case 4: case 9: *p = val; break;
        case 5: case 10: *p = val >> 3; list = 1; break;
        case 6: case 11: *p = val - vram_base; list = 1; break;
        case 7: case 12: *p = (val - vram_base) | 0x80000000u; list = 1; break;
        case 8: case 13: *p = val - vram_base; list = 1; break;
        case 14: *p = vram_base >> 3; break;
        default: err = 0x80000080u; break;
        }
        if (list && listing) {
            uint32_t *q = GPTR_TO(uint32_t, (*bounds + 3) & ~3u);
            *bounds = A32(q + 1);
            *q = val;
            listed++;
        }
    }
    if (listing && R16(hdr, 0x42) != listed) err = 0x80000080u;
    out[0] = first;
    out[1] = err;
}

/* ---------------------------------------------------------------- ROM data */
static uint8_t *load_spec(const char *spec, size_t *out_n) {
    char path[512];
    snprintf(path, sizeof path, "%s", spec);
    char *hash = strchr(path, '#');
    if (hash) *hash++ = 0;
    size_t n;
    uint8_t *b = romfs_read(path, &n);
    if (!b) return NULL;
    size_t dn = 0;
    uint8_t *d = yaz0_decompress_alloc(b, n, &dn);
    if (d) { free(b); b = d; n = dn; }
    if (!hash) { *out_n = n; return b; }
    Sarc s;
    if (sarc_open(&s, b, n)) { free(b); return NULL; }
    uint32_t h = (uint32_t)strtoul(hash, NULL, 16);
    uint8_t *r = NULL;
    for (size_t i = 0; i < s.count; i++)
        if (s.files[i].hash == h) {
            r = malloc(s.files[i].size);
            memcpy(r, s.files[i].data, s.files[i].size);
            *out_n = s.files[i].size;
        }
    sarc_close(&s);
    free(b);
    return r;
}

typedef struct {
    uint8_t *file;       /* game copy (relocated by the setup) */
    uint32_t res[16];    /* ResFile (0x34 bytes used) */
    BchFile pristine;    /* bch.c parse of the original bytes (test bookkeeping only) */
    uint32_t cont;
} GameFile;

/* 00233F4C-style setup of one BCH in game memory, then the replaced 003FCCF8 */
static int game_load(GameFile *g, const char *spec) {
    size_t n;
    uint8_t *b = load_spec(spec, &n);
    if (!b) { fprintf(stderr, "cannot load %s\n", spec); return -1; }
    if (bch_load(&g->pristine, b, n)) { fprintf(stderr, "%s: %s\n", spec, g->pristine.error); return -1; }
    g->file = halloc(n, 128);
    memcpy(g->file, b, n);
    free(b);
    uint32_t *hdr = (uint32_t *)g->file;
    uint32_t *sec = halloc(10 * 4, 4);
    for (int i = 0; i < 6; i++) sec[i] = hdr[8 + i] ? A32(g->file) + hdr[2 + i] : 0;
    sec[6] = A32(halloc(hdr[0xE] + 16, 4));
    sec[7] = A32(halloc(hdr[0xF] + 16, 16));
    uint32_t r = func_003FCCF8(g->res, hdr, sec);
    CHECK(r == 0, "%s: ResFile setup returned %#x", spec, r);
    g->cont = g->res[12];
    return r ? -1 : 0;
}

static uint32_t find_texture(GameFile *const *files, int nfiles, const char *name) {
    for (int f = 0; f < nfiles; f++) {
        uint32_t t3 = files[f]->cont + 3 * 12, tbl = R32(t3, 0), cnt = R32(t3, 4);
        for (uint32_t i = 0; i < cnt; i++) {
            uint32_t t = R32(tbl, 4 * i);
            uint32_t nm = R32(t, 0x1C);
            if (nm && !strcmp((const char *)(uintptr_t)nm, name)) return t;
        }
    }
    return 0;
}

/* ---------------------------------------------------------------- math (row-major 3x4 / 4x4, game convention) */
static void look_at(float v[12], const float e[3], const float c[3]) {
    float f[3] = {c[0] - e[0], c[1] - e[1], c[2] - e[2]}, up[3] = {0, 1, 0};
    float l = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]);
    for (int i = 0; i < 3; i++) f[i] /= l;
    float s[3] = {f[1] * up[2] - f[2] * up[1], f[2] * up[0] - f[0] * up[2], f[0] * up[1] - f[1] * up[0]};
    l = sqrtf(s[0] * s[0] + s[1] * s[1] + s[2] * s[2]);
    for (int i = 0; i < 3; i++) s[i] /= l;
    float u[3] = {s[1] * f[2] - s[2] * f[1], s[2] * f[0] - s[0] * f[2], s[0] * f[1] - s[1] * f[0]};
    const float *rows[3] = {s, u, f};
    for (int r = 0; r < 3; r++) {
        float sg = r == 2 ? -1.0f : 1.0f;
        v[r * 4 + 0] = sg * rows[r][0];
        v[r * 4 + 1] = sg * rows[r][1];
        v[r * 4 + 2] = sg * rows[r][2];
        v[r * 4 + 3] = -sg * (rows[r][0] * e[0] + rows[r][1] * e[1] + rows[r][2] * e[2]);
    }
}
/* PICA clip space: z in [-w, 0], 0 = near (render.c conventions) */
static void perspective(float p[16], float fovy, float aspect, float zn, float zf) {
    float f = 1.0f / tanf(fovy / 2);
    memset(p, 0, 64);
    p[0] = f / aspect;
    p[5] = f;
    /* GL row 2 = (0, 0, (f+n)/(n-f), 2fn/(n-f)), row 3 = (0, 0, -1, 0); PICA z = -(z_gl + w) / 2 */
    float a = (zf + zn) / (zn - zf), b = 2 * zf * zn / (zn - zf);
    p[10] = -(a - 1) / 2;
    p[11] = -b / 2;
    p[14] = -1;
}

/* ---------------------------------------------------------------- scene drawing through the producers */
static uint32_t ctx[5];
static uint8_t renderer[0x2C10] __attribute__((aligned(16)));
static uint8_t env[0x200] __attribute__((aligned(16)));
static uint8_t elem[0xB0], inst[0x180], locs[0x48], skelinst[0x20], fake_mat[0x10], fake_params[0x10], light_env[0x40];
static uint8_t state[0x154] __attribute__((aligned(4)));
static uint8_t lists[512 * 12] __attribute__((aligned(4)));
static uint8_t vis[0xB850 + 0x1707 * 8] __attribute__((aligned(16)));
static uint8_t visent[0x70] __attribute__((aligned(4)));
static uint32_t norm_cache[2];

static void scene_begin(const float view[12], const float proj[16]) {
    ctx[0] = ctx[1] = ctx[2] = A32(cmd);
    ctx[3] = ctx[4] = 0;
    renderer[0x2B5A] = 90;  /* ViewMtx */
    renderer[0x2B62] = 86;  /* ProjMtx */
    uint32_t *p = func_00131244(A32(renderer), GPTR_TO(uint32_t, ctx[0]), view, proj);
    ctx[0] = A32(p);
    data_0070B960 = A32(env); /* +0x1C previous element: none */
    /* uniform locations (0050525C layout, DefaultShader registers) */
    locs[0x0A] = 0; locs[0x12] = 3; locs[0x1A] = 25; locs[0x22] = 22; locs[0x2A] = 23; locs[0x32] = 24;
    locs[0x3A] = 20; locs[0x42] = 21;
    /* NormMtx = rotation part of the view (00170378 with a light environment the cache has not seen) */
    W32(fake_mat, 0, A32(fake_params));
    W32(fake_params, 8, A32(light_env));
    W32(elem, 0x94, A32(fake_mat));
    W32(elem, 0x98, A32(locs));
    norm_cache[0] = 0xFFFFFFFF;
    float nrm[12];
    memcpy(nrm, view, sizeof nrm);
    nrm[3] = nrm[7] = nrm[11] = 0;
    func_00170378(A32(elem), ctx, norm_cache, nrm);
}

static int g_draws_recorded;

/* draw every mesh of model `mi` of g (textures looked up in files[]), layers 0..3 like the game */
static void draw_model(GameFile *g, int mi, GameFile *const *files, int nfiles, float (*bone_world)[12], int skip_silhouette) {
    uint32_t mtbl = R32(g->cont, 0), model = R32(mtbl, 4 * (uint32_t)mi);
    uint32_t mats = R32(model, 0x34), meshes = R32(model, 0x40), nmesh = R32(model, 0x44);
    int nbones = (int)R32(model, 0x74);
    /* model instance + skeleton instance (bind pose world matrices) */
    float *world = halloc((size_t)(nbones ? nbones : 1) * 48, 16);
    if (bone_world) memcpy(world, bone_world, (size_t)nbones * 48);
    W32(skelinst, 0x14, A32(world));
    memset(inst, 0, sizeof inst);
    static const float id[12] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};
    memcpy(inst + 0x104, id, sizeof id);
    W32(inst, 0x24, A32(skelinst));
    inst[0x16B] = nbones > 0 && bone_world;
    W32(inst, 0x13C, 0);
    /* visibility block: one model, every index list of every mesh visible */
    data_0070B928 = A32(vis);
    vis[0xB848] = 0;
    uint8_t *buf = vis + 0x10;
    buf[0x7C] = 1;
    W32(buf, 0x80, 1);
    W32(buf, 0x88, A32(visent));
    W32(visent, 0, A32(lists));
    visent[0x6C] = 1;
    uint32_t culls = R32(model, 0x68);
    for (uint32_t k = 0; culls && k < nmesh && k < 512; k++) {
        uint32_t cu = culls + k * 0x1C;
        W32(lists, k * 12, R32(cu, 0x10));
        lists[k * 12 + 8] = (uint8_t)R32(cu, 0x14);
    }
    for (int layer = 0; layer < 4; layer++) {
        uint32_t lb = R32(model, 0x48 + 8 * (uint32_t)layer), le = R32(model, 0x4C + 8 * (uint32_t)layer);
        for (uint32_t k = 0; k < nmesh; k++) {
            uint32_t mesh = meshes + k * 0x38;
            if (mesh < lb || mesh >= le) continue;
            uint32_t mat = mats + R16(mesh, 0) * 0x2C, params = R32(mat, 0);
            const char *mname = (const char *)(uintptr_t)R32(mat, 0x28);
            if (skip_silhouette && mname && strstr(mname, "silhouette")) continue;
            if (getenv("H3D_TEST_ONLY") && strcmp(getenv("H3D_TEST_ONLY"), mname ? mname : "")) continue;
            /* material state like 001708A0's cached path: fragment blob, texture blob, texture unit blobs */
            func_003CC090(ctx, R32(params, 0xC8), R32(params, 0xCC) << 2, 0);
            func_003CC090(ctx, R32(mat, 0x10), R32(mat, 0x14) << 2, 0);
            for (uint32_t u = 0; u < 3; u++) {
                uint32_t nm = R32(mat, 0x1C + 4 * u);
                if (!nm) continue;
                uint32_t t = find_texture(files, nfiles, (const char *)(uintptr_t)nm);
                CHECK(t != 0, "texture %s not found", (const char *)(uintptr_t)nm);
                if (t) func_003CC090(ctx, R32(t, 8 * u), R32(t, 8 * u + 4) << 2, 0);
            }
            memset(state, 0, sizeof state); /* runtime material state: no animation flags */
            func_00565204(GPTR_TO(uint32_t, mat), ctx, (uint16_t *)state, NULL);
            /* the draw element */
            W32(inst, 0x164, R32(mesh, 0x14) ? 0 : 0x2000000u);
            W32(elem, 0x8C, A32(inst));
            W32(elem, 0x90, mesh);
            W32(elem, 0xA0, k);
            func_00170558(A32(elem), ctx, 0, 0);
            g_draws_recorded++;
        }
    }
}

static int render_scene(const char *path, uint32_t clear) {
    static uint8_t color[400 * 240 * 4] __attribute__((aligned(16))), depth[400 * 240 * 4] __attribute__((aligned(16)));
    render_fill(color, sizeof color, clear, 32);
    render_fill(depth, sizeof depth, 0x00FFFFFF, 32);
    render_set_target(A32(color), RFMT_RGBA8, A32(depth), RDEPTH_D24S8, 400, 240);
    render_set_viewport(0, 0, 400, 240);
    uint32_t bytes = (uint32_t)((uint8_t *)GPTR_TO(uint32_t, ctx[0]) - (uint8_t *)cmd);
    int ops = render_exec_cmds(cmd, bytes);
    H3dStats hs = h3d_stats();
    printf("%s: %u command bytes, %d ops, h3d: %u blob calls, %u draws, %u dropped, %u vbo / %u ibo uploads\n", path,
           bytes, ops, hs.blob_calls, hs.draws, hs.dropped, hs.vbo_uploads, hs.ibo_uploads);
    static uint8_t rgba[400 * 240 * 4], img[400 * 240 * 4];
    int w = 0, h = 0;
    if (!render_read_surface(A32(color), rgba, &w, &h) || w != 400 || h != 240) { fprintf(stderr, "read\n"); return -1; }
    for (int y = 0; y < h; y++) memcpy(img + (size_t)y * w * 4, rgba + (size_t)(h - 1 - y) * w * 4, (size_t)w * 4);
    long drawn = 0; /* pixels that differ from the clear colour (first pixel is background) */
    for (int i = 0; i < w * h; i++) {
        img[i * 4 + 3] = 255;
        if (memcmp(rgba + i * 4, rgba, 3)) drawn++;
    }
    printf("  %ld of %d pixels drawn\n", drawn, w * h);
    CHECK(drawn > w * h / 50, "%s: almost nothing drawn", path);
    if (png_write_rgba(path, img, w, h)) fprintf(stderr, "PNG write failed\n");
    return 0;
}

/* bind-pose bounds of a model (bch.c parse) */
static void model_bounds(const BchModel *m, float (*bw)[12], float ctr[3], float *rad) {
    float mn[3] = {1e30f, 1e30f, 1e30f}, mx[3] = {-1e30f, -1e30f, -1e30f};
    for (int i = 0; i < m->mesh_count; i++) {
        const BchMesh *me = &m->meshes[i];
        const BchAttrib *ap = bch_mesh_attr(me, BCH_ATTR_POSITION), *ab = bch_mesh_attr(me, BCH_ATTR_BONE_INDEX);
        if (!ap) continue;
        for (int s = 0; s < me->submesh_count; s++) {
            const BchSubMesh *sm = &me->submeshes[s];
            for (uint32_t q = 0; q < sm->index_count; q++) {
                uint32_t idx = sm->index_16bit ? (uint32_t)(sm->indices[2 * q] | sm->indices[2 * q + 1] << 8) : sm->indices[q];
                float p[4], b[4] = {0, 0, 0, 0}, o[3];
                bch_vertex_attr(me, ap, idx, p);
                for (int j = 0; j < 3; j++) p[j] += me->position_offset[j];
                if (ab) bch_vertex_attr(me, ab, idx, b);
                if (bw && sm->skinning != 1 && sm->bone_count) {
                    int bone = sm->bones[(int)b[0] < sm->bone_count ? (int)b[0] : 0];
                    for (int r = 0; r < 3; r++) o[r] = bw[bone][r * 4] * p[0] + bw[bone][r * 4 + 1] * p[1] + bw[bone][r * 4 + 2] * p[2] + bw[bone][r * 4 + 3];
                } else {
                    memcpy(o, p, 12);
                }
                for (int j = 0; j < 3; j++) { if (o[j] < mn[j]) mn[j] = o[j]; if (o[j] > mx[j]) mx[j] = o[j]; }
            }
        }
    }
    *rad = 0;
    for (int j = 0; j < 3; j++) {
        ctr[j] = (mn[j] + mx[j]) / 2;
        *rad += (mx[j] - mn[j]) * (mx[j] - mn[j]) / 4;
    }
    *rad = sqrtf(*rad);
    printf("  bounds (%.1f %.1f %.1f) - (%.1f %.1f %.1f)\n", mn[0], mn[1], mn[2], mx[0], mx[1], mx[2]);
}

int main(int argc, char **argv) {
    const char *out = argc > 1 ? argv[1] : ".";
    const char *link_spec = argc > 2 ? argv[2] : "Archive/ActorCommon.szs#c2692a4c";
    const char *room_spec = argc > 3 ? argv[3] : "Archive/DungeonEast1.szs#cdce25fc";
    int room_model = argc > 4 ? atoi(argv[4]) : 2;
    const char *room_tex = argc > 5 ? argv[5] : "World/Course/dgn_EastCommon.bch";
    if (romfs_open(NULL)) return 1;
    PlatConfig cfg = {1, 1, 0};
    if (plat_init("ALBW h3d test", &cfg)) return 2;
    if (!render_ready()) { fprintf(stderr, "no GL\n"); return 2; }
    printf("GL: %s | %s\n", (const char *)glGetString(GL_RENDERER), (const char *)glGetString(GL_VERSION));
    vram_base = A32(heap);
    h3d_init();
    char path[1024];

    /* every DefaultShader variant compiles and links (15 DVLBs x 4 programs) */
    {
        static uint8_t c[64 * 64 * 4] __attribute__((aligned(16)));
        render_set_target(A32(c), RFMT_RGBA8, 0, 0, 64, 64);
        int n = 0;
        for (int skin = 0; skin < 5; skin++)
            for (int light = 0; light < 3; light++)
                for (int prog = 0; prog < 4; prog++) {
                    render_set_program_variant(RPROG_H3D_DEFAULT, H3D_VARIANT(skin, light, prog));
                    if (render_draw_bind()) { render_draw_done(); n++; }
                }
        printf("compiled %d DefaultShader variants\n", n);
        CHECK(n == 60, "variants compiled: %d", n);
    }

    /* ---- Link (skinned, bind pose; materials using the fragment-lighting stand-in, alpha) */
    static GameFile link;
    if (game_load(&link, link_spec)) return 1;
    {
        const BchModel *m = &link.pristine.models[0];
        float (*bw)[12] = calloc((size_t)(m->bone_count ? m->bone_count : 1), sizeof *bw);
        bch_bone_world(m, bw);
        float ctr[3], rad;
        printf("Link '%s': %d meshes, %d bones\n", m->name, m->mesh_count, m->bone_count);
        model_bounds(m, bw, ctr, &rad);
        float view[12], proj[16];
        float eye[3] = {ctr[0] + sinf(0.6f) * rad * 2.2f, ctr[1] + rad * 0.35f, ctr[2] + cosf(0.6f) * rad * 2.2f};
        look_at(view, eye, ctr);
        perspective(proj, 0.75f, 400.0f / 240.0f, rad * 0.05f, rad * 10);
        GameFile *files[1] = {&link};
        scene_begin(view, proj);
        draw_model(&link, 0, files, 1, bw, 1);
        snprintf(path, sizeof path, "%s/h3d_link.png", out);
        render_scene(path, 0x2E3D52FF);
        free(bw);
    }

    /* ---- dungeon room (unskinned, culled index lists, shared texture file, alpha-tested wire net) */
    static GameFile room, roomtex;
    if (game_load(&roomtex, room_tex)) return 1;
    if (game_load(&room, room_spec)) return 1;
    {
        const BchModel *m = &room.pristine.models[room_model];
        float ctr[3], rad;
        printf("room '%s': %d meshes, %d materials\n", m->name, m->mesh_count, m->material_count);
        model_bounds(m, NULL, ctr, &rad);
        GameFile *files[2] = {&room, &roomtex};
        float view[12], proj[16];
        for (int v = 0; v < 2; v++) {
            float eye[3];
            if (v == 0) { eye[0] = ctr[0]; eye[1] = ctr[1] + rad * 1.1f; eye[2] = ctr[2] + rad * 0.9f; }
            else { eye[0] = ctr[0] - rad * 0.35f; eye[1] = ctr[1] + rad * 0.35f; eye[2] = ctr[2] + rad * 0.5f; }
            look_at(view, eye, ctr);
            perspective(proj, 0.9f, 400.0f / 240.0f, rad * 0.02f, rad * 8);
            scene_begin(view, proj);
            draw_model(&room, room_model, files, 2, NULL, 0);
            snprintf(path, sizeof path, "%s/h3d_room%s.png", out, v ? "2" : "");
            render_scene(path, 0x101018FF);
        }
    }
    RStats st = render_stats();
    printf("render: %llu draws, %llu texture uploads; %d mesh draws recorded\n", (unsigned long long)st.draws,
           (unsigned long long)st.tex_uploads, g_draws_recorded);
    CHECK(h3d_stats().dropped == 0, "%u h3d draws dropped", h3d_stats().dropped);
    plat_shutdown();
    printf(fails ? "h3d_test: %d FAILED\n" : "h3d_test: OK\n", fails);
    return fails ? 1 : 0;
}
