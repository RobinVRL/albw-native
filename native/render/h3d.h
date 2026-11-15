/* nw::h3d model draw backend (GL side of the BCH model path; producers in native/sdk/h3d.c).
 *
 * Model files keep their material / mesh / sub-mesh / texture state in prebuilt PICA command
 * blobs that the game CALLs as GPU subroutines. Those blobs are decoded ONCE, when the game sets
 * a file up (sdk/h3d.c, func_003FCCF8), into native ops (ROp: combiner, blend, depth, texture
 * units, uniforms, vertex layouts, indexed draws) registered here by blob address. At execution a
 * ROP_CALL whose target is a registered blob runs those ops (render_set_ext call hook); the
 * command words themselves are never looked at again.
 *
 * Vertex and index data stay in game memory (the game's relocated file / its VRAM copy); this file
 * turns them into GL buffers on first use (cached by game address, re-uploaded when the game
 * writes that memory again: render_mem_written).
 *
 * The vertex program is a hand-written GLSL 330 translation of nwh3d_DefaultShader (all 15
 * DVLB variants x 4 programs, selected by #defines; see RENDER_VS_H3D in h3d.c). */
#pragma once
#include <stddef.h>
#include <stdint.h>

#include "render.h"

/* ROP_EXT kinds (op.u.ext.kind) */
enum {
    H3D_VTX = 1,     /* ptr: H3dVtx * (vertex layout + buffer of a mesh), NULL = none */
    H3D_DRAW,        /* a: index word (offset from the vertex base, bit 31 = 16-bit indices),
                        b: index count, c: primitive (RPRIM_*); flags 1: a is the absolute index
                        buffer address (from the file's relocation table), unit = 16-bit indices */
    H3D_TEXADDR,     /* unit; a: texture address, b: width | height << 16, c: format | max level << 8 */
    H3D_TEXPARAM,    /* unit; a: wrap_s | wrap_t << 4 | mag << 8 | min << 12 | type << 16 (RTexUnit
                        codes), b: border RGBA (R low byte), f[0]: LOD bias */
    H3D_TEXCFG,      /* a: unit enable mask, b: texture 2 uses texcoord 1 */
    H3D_PROGRAM,     /* a: DefaultShader variant (H3D_VARIANT) */
    H3D_FRAGLIGHT_UNUSED, /* (was the fragment-lighting stand-in; see render/fraglight.h) */
    H3D_BLENDCOLOR,  /* a: blend constant colour RGBA (R low byte), rest of the blend state kept */
    H3D_TEXBORDER,   /* unit; a: border colour RGBA (R low byte) */
};

/* DefaultShader variant number = skin | light << 3 | program << 5 */
enum { H3D_SKIN_ANY = 0, H3D_SKIN_RS = 1, H3D_SKIN_SS = 2, H3D_SKIN_S2 = 3, H3D_SKIN_U2 = 4 };
enum { H3D_LIGHT_ANY = 0, H3D_LIGHT_NL = 1, H3D_LIGHT_HS = 2 };
#define H3D_VARIANT(skin, light, prog) ((skin) | (light) << 3 | (prog) << 5)
/* "N@DefaultShader[-rs|-ss|-s2|-u2][-nl|-hs]" -> variant, -1 if not a DefaultShader name */
int h3d_variant_of_name(const char *name);

typedef struct {
    uint8_t reg;          /* vertex shader input register v0..v11 */
    uint8_t type;         /* RATTR_* (PICA attribute type) */
    uint8_t comps;        /* 1..4 */
    uint8_t fixed;        /* constant attribute: value */
    uint16_t offset;      /* byte offset in the interleaved vertex */
    float value[4];
} H3dAttr;

typedef struct H3dVtx {
    uint32_t base;        /* attribute / index base address (register 0x200 << 3) */
    uint32_t addr;        /* vertex buffer address */
    uint16_t stride;
    uint8_t nattr;
    uint8_t nbuffers;     /* vertex buffers declared (only the first one is supported) */
    H3dAttr attr[12];
    /* GL side (execution thread) */
    unsigned vbo, vao;
    uint32_t verts;       /* vertices uploaded */
    int dirty;
} H3dVtx;

/* install the hooks in the renderer (idempotent, any thread) */
void h3d_init(void);

/* load-time registration (any thread): the native ops of the blob at [addr, addr + bytes) (copied).
 * Re-registering an address replaces its ops. */
void h3d_blob_set(uintptr_t addr, uint32_t bytes, const ROp *ops, int n);
/* forget every blob, vertex layout and buffer inside [lo, hi) (a file unloaded / reloaded) */
void h3d_forget_range(uintptr_t lo, uintptr_t hi);
H3dVtx *h3d_vtx_new(void);

/* counters for tests / traces */
typedef struct { uint32_t blobs, blob_calls, draws, dropped, vbo_uploads, ibo_uploads; } H3dStats;
H3dStats h3d_stats(void);

/* the hand-written GLSL body of nwh3d_DefaultShader (no #version line) and its variant defines */
extern const char RENDER_VS_H3D[];
void h3d_variant_defines(int variant, char *buf, size_t n);
