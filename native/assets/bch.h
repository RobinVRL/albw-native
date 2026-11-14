/* Native loader for nw::h3d BCH files (models, materials, textures, skeletons, shaders).
 *
 * Versions handled: header backward-compatibility 0x21 (3148 of the 3176 BCH files in the EU
 * RomFS, converter 41697) and 0x20 (21 files).  Versions 0x06 and 0x08 (7 files) are rejected.
 *
 * Asset conversion only ("option A"): the PICA200 command blobs that BCH stores for meshes,
 * sub-meshes, materials and textures are decoded ONCE here into the plain structs below.  No
 * GPU command is ever kept for, or interpreted at, runtime.  Shader bytecode (DVLB) is not
 * translated; it is only catalogued (program names, attribute layouts, uniform names).
 *
 * The file buffer is copied and relocated in place (every pointer field becomes an absolute
 * offset into that buffer, never a host pointer stored in 32 bits); the structs below then hold
 * real host pointers into the buffer, so they are valid for 32- and 64-bit builds alike. */
#pragma once
#include <stddef.h>
#include <stdint.h>
#include "texture.h"

/* Vertex shader input registers used by the nw::h3d default shader (= attribute semantics) */
enum {
    BCH_ATTR_POSITION = 0, BCH_ATTR_NORMAL = 1, BCH_ATTR_TANGENT = 2, BCH_ATTR_COLOR = 3,
    BCH_ATTR_TEXCOORD0 = 4, BCH_ATTR_TEXCOORD1 = 5, BCH_ATTR_TEXCOORD2 = 6,
    BCH_ATTR_BONE_INDEX = 7, BCH_ATTR_BONE_WEIGHT = 8, BCH_ATTR_USER0 = 9, BCH_ATTR_MAX = 16
};
const char *bch_attr_name(int semantic);

/* PICA attribute component types */
enum { BCH_TYPE_S8 = 0, BCH_TYPE_U8 = 1, BCH_TYPE_S16 = 2, BCH_TYPE_F32 = 3 };

typedef struct {
    uint8_t semantic;      /* BCH_ATTR_* (vertex shader input register) */
    uint8_t type;          /* BCH_TYPE_* */
    uint8_t components;    /* 1..4 */
    uint8_t fixed;         /* 1: constant attribute, value in fixed_value, not in the buffer */
    uint16_t offset;       /* byte offset in the interleaved vertex */
    float scale;           /* multiply the raw value by this (from the shader uniforms c7/c8) */
    float fixed_value[4];
} BchAttrib;

typedef struct {
    uint8_t skinning;      /* 0 none, 1 smooth (model-space vertices, per-vertex bone index/weight),
                              2 rigid (vertices in the space of bone bones[index]) */
    uint8_t primitive;     /* 0 triangles, 1 strip, 2 fan */
    uint8_t index_16bit;
    uint16_t bone_count;
    uint16_t bones[20];    /* palette: vertex bone index -> skeleton bone */
    uint32_t index_count;
    const uint8_t *indices;
} BchSubMesh;

typedef struct {
    uint16_t material;
    uint16_t node;         /* mesh node (visibility) index */
    uint8_t flags, priority, layer;  /* layer 0 opaque, 1 translucent, 2 subtractive, 3 additive */
    float center[3];
    float position_offset[4];  /* shader uniform c6 */
    int attr_count;
    BchAttrib attrs[BCH_ATTR_MAX];
    uint32_t stride;           /* bytes per vertex of the single interleaved buffer */
    uint32_t vertex_count;     /* max index + 1 over all sub-meshes */
    const uint8_t *vertices;
    int buffer_count;          /* vertex buffers seen (the loader supports 1) */
    int submesh_count;
    BchSubMesh *submeshes;
} BchMesh;

/* One texture-combiner stage (PICA regs 0xC0.. / 0xC8 / 0xD0 / 0xD8 / 0xF0 / 0xF8) */
typedef struct {
    uint8_t src_rgb[3], src_a[3];     /* 0 vtx colour, 1 frag primary, 2 frag secondary,
                                         3..6 texture 0..3, 0xD previous buffer, 0xE constant,
                                         0xF previous */
    uint8_t op_rgb[3], op_a[3];
    uint8_t func_rgb, func_a;         /* 0 replace 1 modulate 2 add 3 add-signed 4 lerp
                                         5 subtract 6 dot3 rgb 7 dot3 rgba 8 mult-add 9 add-mult */
    uint8_t scale_rgb, scale_a;       /* 1, 2 or 4 */
    uint32_t constant;                /* RGBA8, R in the low byte */
} BchCombiner;

typedef struct {
    const char *name;
    const char *texture_names[3];     /* texture unit 0..2 */
    PicaSampler sampler[3];
    uint8_t texture_enable;           /* reg 0x80 bits 0-2 */
    uint8_t tex2_uses_coord1;         /* reg 0x80 bit 13 */
    struct {
        uint8_t mapping;              /* 0 uv, 1 camera cube env, 2 camera sphere env, 3 projection */
        uint8_t transform_type, ref_camera, flags;
        float scale[2], rotation, translation[2];
    } texcoord[3];
    const char *shader_ref;           /* e.g. "2@DefaultShader-rs-nl" */
    const char *lut_names[8];         /* fragment lighting LUT table/sampler names (may be NULL) */
    uint32_t colors[12];              /* emission ambient diffuse spec0 spec1 const0..5 blend */
    float color_scale;
    uint16_t light_set, fog;
    /* combiner state */
    BchCombiner combiner[6];
    uint32_t combiner_buffer_cfg;     /* reg 0xE0: buffer update mask bits 8-11 rgb, 12-15 alpha */
    uint32_t combiner_buffer_color;   /* reg 0xFD */
    /* fragment operations */
    uint8_t blend_enable;             /* reg 0x100 bit 8 */
    uint8_t blend_eq_rgb, blend_eq_a; /* 0 add 1 sub 2 rev-sub 3 min 4 max */
    uint8_t blend_src_rgb, blend_dst_rgb, blend_src_a, blend_dst_a; /* PICA factors, see bch.c */
    uint8_t logic_op;
    uint32_t blend_color;
    uint8_t alpha_test, alpha_func, alpha_ref;
    uint8_t stencil_test, stencil_func, stencil_ref, stencil_mask, stencil_write_mask;
    uint8_t stencil_fail, stencil_zfail, stencil_zpass;
    uint8_t depth_test, depth_func, depth_write, color_write_mask;
    uint8_t cull;                     /* reg 0x40: 0 none, 1 cull CCW-front, 2 cull back (default) */
    uint8_t fragment_lighting;        /* reg 0x8F bit 0 seen set */
    /* vertex-shader float uniforms written by the material blob (c-index -> xyzw) */
    int uniform_count;
    struct { uint8_t index; float v[4]; } uniforms[24];
    uint32_t regs_seen[16];           /* bitmap of PICA registers 0x000-0x1FF found in the blobs */
} BchMaterial;

typedef struct {
    const char *name;
    int16_t parent;
    uint32_t flags;
    float scale[3], rotation[3], translation[3];   /* rotation: XYZ euler, radians */
    float inverse_bind[12];                        /* 3x4 row-major */
} BchBone;

typedef struct {
    const char *name;
    float world[12];
    int material_count;
    BchMaterial *materials;
    int mesh_count;
    BchMesh *meshes;
    int bone_count;
    BchBone *bones;
} BchModel;

typedef struct {
    const char *name;
    int format;               /* PicaTexFormat */
    int width, height, levels;
    const uint8_t *data;
    size_t size;              /* bytes of all levels */
} BchTexture;

typedef struct {
    const char *name;               /* "N@DefaultShader" */
    int program_index;
    const uint8_t *dvlb;      /* shader binary, catalogued only (never translated) */
    size_t dvlb_size;
} BchShader;

typedef struct {
    uint8_t version;          /* backward compatibility byte */
    uint8_t *data;            /* relocated copy of the file */
    size_t size;
    int model_count, texture_count, shader_count;
    BchModel *models;
    BchTexture *textures;
    BchShader *shaders;
    int counts[15];           /* entries per content section (models, materials, shaders,
                                 textures, LUTs, lights, cameras, fogs, skeletal/material/
                                 visibility/light/camera/fog animations, scenes) */
    char error[128];
} BchFile;

int bch_is(const uint8_t *buf, size_t n);
/* Parses a BCH.  Returns 0 or -1 (bch->error says why).  Always call bch_free. */
int bch_load(BchFile *bch, const uint8_t *buf, size_t n);
void bch_free(BchFile *bch);
const BchTexture *bch_find_texture(const BchFile *bch, const char *name);
/* Reads attribute a of vertex i as 4 floats (scale applied; missing components 0, w = 1). */
void bch_vertex_attr(const BchMesh *m, const BchAttrib *a, uint32_t i, float out[4]);
const BchAttrib *bch_mesh_attr(const BchMesh *m, int semantic);
/* Bone world (bind-pose) matrices, 3x4 row-major, out[bone_count][12]. */
void bch_bone_world(const BchModel *m, float (*out)[12]);
