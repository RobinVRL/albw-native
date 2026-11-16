/* Asset pipeline test: walks the whole RomFS of the user's ROM, decompresses every archive,
 * loads every BCH, decodes every texture, and prints a report (formats, BCH coverage, material
 * state statistics and the shader catalogue).  With an output directory it also writes one PNG
 * per texture format (and the first textures of a named BCH) for visual checks.
 *
 *   asset_test [outdir]            outdir: where PNGs go (never inside the repository)
 *   env ALBW_ROM                   the decrypted ROM (default: see romfs.c)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "romfs.h"
#include "yaz0.h"
#include "sarc.h"
#include "texture.h"
#include "bch.h"
#include "dvlb.h"
#include "png.h"

/* ---------------------------------------------------------------- small string counter */
typedef struct { char key[160]; int n, models, files; const char *last_file; } Count;
typedef struct { Count *v; int n, cap; } Counter;
static Count *cnt_get(Counter *c, const char *key) {
    for (int i = 0; i < c->n; i++) if (!strcmp(c->v[i].key, key)) return &c->v[i];
    if (c->n == c->cap) {
        c->cap = c->cap ? c->cap * 2 : 64;
        c->v = realloc(c->v, (size_t)c->cap * sizeof *c->v);
        if (!c->v) abort();
    }
    Count *e = &c->v[c->n++];
    memset(e, 0, sizeof *e);
    snprintf(e->key, sizeof e->key, "%s", key);
    return e;
}
static void cnt_add(Counter *c, const char *key, int n) { cnt_get(c, key)->n += n; }
static int cmp_count(const void *a, const void *b) {
    const Count *x = a, *y = b;
    return y->n != x->n ? y->n - x->n : strcmp(x->key, y->key);
}
static void cnt_print(Counter *c, const char *title, int max) {
    qsort(c->v, (size_t)c->n, sizeof *c->v, cmp_count);
    printf("\n== %s (%d distinct)\n", title, c->n);
    for (int i = 0; i < c->n && (max <= 0 || i < max); i++) printf("  %7d  %s\n", c->v[i].n, c->v[i].key);
}

static Counter romfs_ext, inner_magic, versions, errors, tex_formats, attr_layouts, skinning,
    prims, idxfmt, blend, cull, alphatest, depth, combiners, shader_refs, shader_models, lut,
    bufcount, mapping, regs;
static Counter lim_formats;
static int lim_png[PICA_TEX_FORMAT_COUNT];
static void survey_lim(const char *name, const uint8_t *b, size_t n) {
    LimImage li;
    if (lim_parse(b, n, &li)) {
        Count *e = cnt_get(&lim_formats, "(parse error)");
        e->n++;
        if (!e->last_file) e->last_file = strdup(name);
        return;
    }
    uint8_t *img = malloc((size_t)li.stored_w * li.stored_h * 4);
    int ok = img && !pica_tex_decode(li.data, li.size, li.format, li.stored_w, li.stored_h, img, 0);
    char key[64];
    snprintf(key, sizeof key, "%s%s", pica_tex_format_name(li.format), ok ? "" : " (decode FAILED)");
    cnt_add(&lim_formats, key, 1);
    extern const char *outdir_lim;
    if (ok && outdir_lim && lim_png[li.format] < 2 && li.width >= 16) {
        lim_png[li.format]++;
        /* crop to the visible part */
        uint8_t *crop = malloc((size_t)li.width * li.height * 4);
        for (int y = 0; y < li.height; y++)
            memcpy(crop + (size_t)y * li.width * 4, img + (size_t)y * li.stored_w * 4, (size_t)li.width * 4);
        char path[1024], nm[300];
        snprintf(nm, sizeof nm, "%s", name);
        for (char *p = nm; *p; p++) if (*p == '/' || *p == '#') *p = '_';
        snprintf(path, sizeof path, "%s/lim_%s_%s.png", outdir_lim, pica_tex_format_name(li.format), nm);
        png_write_rgba(path, crop, li.width, li.height);
        free(crop);
    }
    free(img);
}
const char *outdir_lim;

static int n_bch, n_bch_ok, n_models, n_meshes, n_sub, n_mats, n_tex, n_tex_ok, n_bones,
    n_bone_bad, n_shaders;
static const char *outdir;
static int png_written[PICA_TEX_FORMAT_COUNT];

static void write_tex_png(const BchTexture *t, const char *tag) {
    uint8_t *img = malloc((size_t)t->width * t->height * 4);
    if (!img) return;
    if (!pica_tex_decode(t->data, t->size, t->format, t->width, t->height, img, 0)) {
        char path[1024], nm[200];
        snprintf(nm, sizeof nm, "%s", t->name ? t->name : "noname");
        for (char *p = nm; *p; p++) if (*p == '/' || *p == ' ') *p = '_';
        snprintf(path, sizeof path, "%s/%s_%s_%s_%dx%d.png", outdir, tag,
                 pica_tex_format_name(t->format), nm, t->width, t->height);
        png_write_rgba(path, img, t->width, t->height);
    }
    free(img);
}

/* world (from SRT) * inverse bind should be identity in the bind pose */
static int bone_check(const BchModel *m) {
    if (!m->bone_count) return 0;
    float (*w)[12] = malloc(sizeof(float[12]) * (size_t)m->bone_count);
    if (!w) return 0;
    bch_bone_world(m, w);
    int bad = 0;
    for (int i = 0; i < m->bone_count; i++) {
        const float *a = w[i], *b = m->bones[i].inverse_bind;
        float err = 0;
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 4; c++) {
                float v = a[r * 4] * b[c] + a[r * 4 + 1] * b[4 + c] + a[r * 4 + 2] * b[8 + c] + (c == 3 ? a[r * 4 + 3] : 0);
                float want = (r == c) ? 1.0f : 0.0f;
                err = fmaxf(err, fabsf(v - want));
            }
        if (err > 1e-2f) bad++;
    }
    free(w);
    return bad;
}

static void survey_bch(const char *name, const uint8_t *buf, size_t n) {
    char key[200];
    n_bch++;
    snprintf(key, sizeof key, "v0x%02x", n >= 5 ? buf[4] : 0);
    cnt_add(&versions, key, 1);
    BchFile f;
    if (bch_load(&f, buf, n)) {
        Count *e = cnt_get(&errors, f.error);
        e->n++;
        if (!e->last_file) e->last_file = strdup(name);
        bch_free(&f);
        return;
    }
    n_bch_ok++;
    n_shaders += f.shader_count;
    { /* ALBW_BCH_COUNTS=<substring of the file name>: entries per content section */
        const char *cw = getenv("ALBW_BCH_COUNTS");
        if (cw && strstr(name, cw)) {
            static const char *sec[15] = {"models", "materials", "shaders", "textures", "luts", "lights", "cameras", "fogs",
                                          "skel_anims", "mat_anims", "vis_anims", "light_anims", "cam_anims", "fog_anims", "scenes"};
            printf("bch %s:", name);
            for (int k = 0; k < 15; k++) if (f.counts[k]) printf(" %s=%d", sec[k], f.counts[k]);
            printf("\n");
        }
    }
    for (int i = 0; i < f.texture_count; i++) {
        const BchTexture *t = &f.textures[i];
        { /* ALBW_TEX_LIST=<substring>: textures whose name contains it */
            const char *tw = getenv("ALBW_TEX_LIST");
            if (tw && t->name && strstr(t->name, tw))
                printf("tex %s | %s %dx%d %s\n", name, t->name, t->width, t->height, pica_tex_format_name(t->format));
        }
        n_tex++;
        cnt_add(&tex_formats, pica_tex_format_name(t->format), 1);
        uint8_t *img = malloc((size_t)t->width * t->height * 4 + 4);
        if (img && !pica_tex_decode(t->data, t->size, t->format, t->width, t->height, img, 0)) n_tex_ok++;
        free(img);
        if (outdir && t->format < PICA_TEX_FORMAT_COUNT && png_written[t->format] < 2 && t->width >= 32) {
            png_written[t->format]++;
            write_tex_png(t, "fmt");
        }
    }
    for (int mi = 0; mi < f.model_count; mi++) {
        const BchModel *m = &f.models[mi];
        n_models++;
        n_bones += m->bone_count;
        n_bone_bad += bone_check(m);
        /* shader programs referenced by this model (count each model once per ref) */
        for (int k = 0; k < m->material_count; k++) {
            const BchMaterial *mt = &m->materials[k];
            const char *ref = mt->shader_ref ? mt->shader_ref : "(none)";
            { /* ALBW_MAT_LIST=<substring of the file, material or texture 0 name>: sampler per unit */
                const char *want = getenv("ALBW_MAT_LIST");
                const char *t0 = mt->texture_names[0] ? mt->texture_names[0] : "-";
                if (want && (strstr(name, want) || (mt->name && strstr(mt->name, want)) || strstr(t0, want) || (m->name && strstr(m->name, want)))) {
                    printf("mat %s | %s | model %s | %s |", name, mt->name ? mt->name : "?", m->name ? m->name : "?", ref);
                    for (int u = 0; u < 3; u++)
                        printf(" t%d %s wrap %u/%u mag %u min %u", u, mt->texture_names[u] ? mt->texture_names[u] : "-",
                               mt->sampler[u].wrap_s, mt->sampler[u].wrap_t, mt->sampler[u].mag_linear, mt->sampler[u].min_filter);
                    printf("\n");
                    if (getenv("ALBW_MAT_FULL")) {
                        for (int u = 0; u < 3; u++)
                            printf("    texcoord%d map %u xform %u cam %d flags %#x scale %g %g rot %g trans %g %g\n", u,
                                   mt->texcoord[u].mapping, mt->texcoord[u].transform_type, (int8_t)mt->texcoord[u].ref_camera,
                                   mt->texcoord[u].flags, mt->texcoord[u].scale[0], mt->texcoord[u].scale[1], mt->texcoord[u].rotation,
                                   mt->texcoord[u].translation[0], mt->texcoord[u].translation[1]);
                        printf("    colours (emi amb dif sp0 sp1 k0-5 blend):");
                        for (int q = 0; q < 12; q++) printf(" %08x", mt->colors[q]);
                        printf(" scale %g lightset %u fog %u fraglight %u tex_en %#x\n", mt->color_scale, mt->light_set, mt->fog,
                               mt->fragment_lighting, mt->texture_enable);
                        printf("    luts:");
                        for (int q = 0; q < 8; q++) printf(" %s", mt->lut_names[q] ? mt->lut_names[q] : "-");
                        printf("\n    stencil %u func %u ref %u mask %#x wmask %#x ops %u %u %u cmask %#x", mt->stencil_test, mt->stencil_func, mt->stencil_ref, mt->stencil_mask, mt->stencil_write_mask, mt->stencil_fail, mt->stencil_zfail, mt->stencil_zpass, mt->color_write_mask);
                        printf("\n    blend %u eq %u/%u f %u %u %u %u colour %08x atest %u/%u/%u depth %u/%u/%u cull %u buf %#x/%08x\n",
                               mt->blend_enable, mt->blend_eq_rgb, mt->blend_eq_a, mt->blend_src_rgb, mt->blend_dst_rgb,
                               mt->blend_src_a, mt->blend_dst_a, mt->blend_color, mt->alpha_test, mt->alpha_func, mt->alpha_ref,
                               mt->depth_test, mt->depth_func, mt->depth_write, mt->cull, mt->combiner_buffer_cfg,
                               mt->combiner_buffer_color);
                        for (int q = 0; q < 6; q++) {
                            const BchCombiner *cb = &mt->combiner[q];
                            printf("    tev%d rgb %x %x %x op %u %u %u f %u x%u | a %x %x %x op %u %u %u f %u x%u | k %08x\n", q,
                                   cb->src_rgb[0], cb->src_rgb[1], cb->src_rgb[2], cb->op_rgb[0], cb->op_rgb[1], cb->op_rgb[2],
                                   cb->func_rgb, cb->scale_rgb, cb->src_a[0], cb->src_a[1], cb->src_a[2], cb->op_a[0], cb->op_a[1],
                                   cb->op_a[2], cb->func_a, cb->scale_a, cb->constant);
                        }
                        for (int q = 0; q < mt->uniform_count; q++)
                            printf("    c%u = %g %g %g %g\n", mt->uniforms[q].index, mt->uniforms[q].v[0], mt->uniforms[q].v[1],
                                   mt->uniforms[q].v[2], mt->uniforms[q].v[3]);
                    }
                }
            }
            int seen = 0;
            for (int j = 0; j < k; j++)
                if (m->materials[j].shader_ref && mt->shader_ref && !strcmp(m->materials[j].shader_ref, ref)) seen = 1;
            Count *c = cnt_get(&shader_refs, ref);
            c->n++;
            if (!seen) c->models++;
            /* program part "N@Name" */
            char prog[160];
            snprintf(prog, sizeof prog, "%s", ref);
            char *dash = strchr(prog, '-');
            if (dash) *dash = 0;
            if (!seen) cnt_add(&shader_models, prog, 1);
        }
        for (int k = 0; k < m->material_count; k++) {
            const BchMaterial *mt = &m->materials[k];
            n_mats++;
            snprintf(key, sizeof key, "blend=%d src=%d dst=%d eq=%d", mt->blend_enable, mt->blend_src_rgb,
                     mt->blend_dst_rgb, mt->blend_eq_rgb);
            cnt_add(&blend, key, 1);
            snprintf(key, sizeof key, "cull=%d", mt->cull);
            cnt_add(&cull, key, 1);
            snprintf(key, sizeof key, "alpha_test=%d func=%d ref=%d", mt->alpha_test, mt->alpha_func, mt->alpha_ref);
            cnt_add(&alphatest, key, 1);
            snprintf(key, sizeof key, "depth_test=%d func=%d write=%d", mt->depth_test, mt->depth_func, mt->depth_write);
            cnt_add(&depth, key, 1);
            int stages = 0;
            for (int s = 0; s < 6; s++) {
                const BchCombiner *cb = &mt->combiner[s];
                int passthru = cb->func_rgb == 0 && cb->func_a == 0 && cb->src_rgb[0] == 0xF && cb->src_a[0] == 0xF;
                if (!passthru) stages++;
            }
            snprintf(key, sizeof key, "%d active combiner stages", stages);
            cnt_add(&combiners, key, 1);
            for (int t = 0; t < 3; t++) {
                if (!mt->texture_names[t]) continue;
                snprintf(key, sizeof key, "unit%d mapping=%d", t, mt->texcoord[t].mapping);
                cnt_add(&mapping, key, 1);
            }
            for (int l = 0; l < 8; l++) if (mt->lut_names[l]) { cnt_add(&lut, "materials with LUT names", 1); break; }
            for (int r = 0; r < 0x200; r++)
                if (mt->regs_seen[r >> 5] >> (r & 31) & 1) {
                    snprintf(key, sizeof key, "0x%03x", r);
                    cnt_add(&regs, key, 1);
                }
        }
        for (int k = 0; k < m->mesh_count; k++) {
            const BchMesh *me = &m->meshes[k];
            n_meshes++;
            char lay[160] = "";
            for (int a = 0; a < me->attr_count; a++) {
                const BchAttrib *at = &me->attrs[a];
                static const char *tn[] = {"s8", "u8", "s16", "f32"};
                char one[48];
                if (at->fixed) snprintf(one, sizeof one, "%s%s=const", a ? " " : "", bch_attr_name(at->semantic));
                else snprintf(one, sizeof one, "%s%s:%s%d", a ? " " : "", bch_attr_name(at->semantic), tn[at->type], at->components);
                strncat(lay, one, sizeof lay - strlen(lay) - 1);
            }
            const char *ref = me->material < m->material_count && m->materials[me->material].shader_ref
                                  ? m->materials[me->material].shader_ref : "(none)";
            char k2[200];
            snprintf(k2, sizeof k2, "%-26s %s", ref, lay);
            cnt_add(&attr_layouts, k2, 1);
            snprintf(key, sizeof key, "%d vertex buffer(s), %s sub-meshes, layer %d", me->buffer_count,
                     me->submesh_count ? ">0" : "0", me->layer);
            cnt_add(&bufcount, key, 1);
            for (int s = 0; s < me->submesh_count; s++) {
                const BchSubMesh *sm = &me->submeshes[s];
                n_sub++;
                static const char *sk[] = {"none", "smooth", "rigid"};
                cnt_add(&skinning, sm->skinning < 3 ? sk[sm->skinning] : "?", 1);
                static const char *pr[] = {"triangles", "strip", "fan", "geometry"};
                cnt_add(&prims, pr[sm->primitive & 3], 1);
                cnt_add(&idxfmt, sm->index_16bit ? "u16" : "u8", 1);
            }
        }
    }
    bch_free(&f);
}

static void shader_catalogue(const char *what, const uint8_t *buf, size_t n) {
    DvlbInfo info;
    if (dvlb_parse(buf, n, &info)) {
        printf("  %s: not a DVLB\n", what);
        return;
    }
    printf("  %s: %d program(s), %u code words\n", what, info.program_count, info.code_words);
    for (int i = 0; i < info.program_count; i++) {
        const DvleInfo *d = &info.programs[i];
        printf("    [%d] %s main=%u..%u  inputs:", i, d->type ? "geometry" : "vertex", d->main_offset, d->end_offset);
        for (int s = 0; s < d->symbol_count; s++)
            if (d->symbols[s].first < 0x10)
                printf(" v%u=%s", d->symbols[s].first, d->symbols[s].name ? d->symbols[s].name : "?");
        printf("\n        uniforms:");
        for (int s = 0; s < d->symbol_count; s++) {
            const DvleSymbol *y = &d->symbols[s];
            if (y->first < 0x10) continue;
            char r[24];
            if (y->first < 0x70) snprintf(r, sizeof r, "c%u", y->first - 0x10);
            else if (y->first < 0x78) snprintf(r, sizeof r, "i%u", y->first - 0x70);
            else snprintf(r, sizeof r, "b%u", y->first - 0x78);
            printf(" %s%s%s", y->name ? y->name : "?", "@", r);
            if (y->last != y->first) printf("+%u", y->last - y->first);
        }
        printf("\n        outputs:");
        for (int o = 0; o < d->output_count; o++)
            printf(" o%u.%x=%s", d->outputs[o].reg, d->outputs[o].mask, dvle_output_name(d->outputs[o].type));
        printf("\n");
    }
}

int main(int argc, char **argv) {
    outdir = argc > 1 ? argv[1] : NULL;
    outdir_lim = outdir;
    if (romfs_open(NULL)) return 1;
    printf("RomFS: %zu files\n", romfs_count());
    const uint8_t *default_shader = NULL;
    uint8_t *default_shader_owner = NULL;
    size_t default_shader_size = 0;
    for (size_t i = 0; i < romfs_count(); i++) {
        const RomfsFile *rf = romfs_file(i);
        const char *ext = strrchr(rf->path, '.');
        const char *slash = strrchr(rf->path, '/');
        if (!ext || (slash && ext < slash)) ext = "(none)";
        cnt_add(&romfs_ext, ext, 1);
        int is_bch = !strcmp(ext, ".bch"), is_arc = !strcmp(ext, ".szs") || !strcmp(ext, ".arc");
        int is_sh = !strcmp(ext, ".bsm") || !strcmp(ext, ".shbin");
        int is_lim = !strcmp(ext, ".bflim") || !strcmp(ext, ".bclim");
        if (!is_bch && !is_arc && !is_sh && !is_lim) continue;
        size_t n;
        uint8_t *b = romfs_read(rf->path, &n);
        if (!b) { printf("read failed: %s\n", rf->path); continue; }
        if (is_lim) {
            survey_lim(rf->path, b, n);
        } else if (is_sh) {
            printf("\n== shader file %s\n", rf->path);
            shader_catalogue(rf->path, b, n);
        } else if (is_bch) {
            survey_bch(rf->path, b, n);
        } else {
            size_t dn = 0;
            uint8_t *d = yaz0_decompress_alloc(b, n, &dn);
            const uint8_t *p = d ? d : b;
            size_t pn = d ? dn : n;
            Sarc s;
            if (sarc_open(&s, p, pn)) {
                cnt_add(&inner_magic, "(archive not SARC)", 1);
            } else {
                for (size_t k = 0; k < s.count; k++) {
                    const SarcFile *sf = &s.files[k];
                    char mg[8] = "????";
                    for (int j = 0; j < 4 && (size_t)j < sf->size; j++)
                        mg[j] = sf->data[j] >= 32 && sf->data[j] < 127 ? (char)sf->data[j] : '.';
                    cnt_add(&inner_magic, mg, 1);
                    char nm[600];
                    snprintf(nm, sizeof nm, "%s#%08x", rf->path, sf->hash);
                    if (bch_is(sf->data, sf->size)) {
                        survey_bch(nm, sf->data, sf->size);
                        BchFile tmp;
                        if (!default_shader && !bch_load(&tmp, sf->data, sf->size) && tmp.shader_count) {
                            default_shader_owner = malloc(sf->size);
                            memcpy(default_shader_owner, sf->data, sf->size);
                            default_shader = default_shader_owner;
                            default_shader_size = sf->size;
                            printf("shader BCH: %s (%d shaders)\n", nm, tmp.shader_count);
                        }
                        bch_free(&tmp);
                    } else if (sf->name && (strstr(sf->name, ".bflim") || strstr(sf->name, ".bclim"))) {
                        survey_lim(nm, sf->data, sf->size);
                    } else if (sf->size >= 4 && !memcmp(sf->data, "DVLB", 4)) {
                        printf("\n== DVLB inside %s\n", nm);
                        shader_catalogue(nm, sf->data, sf->size);
                    }
                }
                sarc_close(&s);
            }
            free(d);
        }
        free(b);
    }
    cnt_print(&romfs_ext, "RomFS file extensions", 0);
    cnt_print(&inner_magic, "files inside .szs/.arc archives, by magic", 0);
    printf("\n== BCH: %d files, %d loaded; %d models, %d meshes, %d sub-meshes, %d materials, "
           "%d bones (%d fail the SRT*inverse-bind identity check), %d textures (%d decoded), %d shaders\n",
           n_bch, n_bch_ok, n_models, n_meshes, n_sub, n_mats, n_bones, n_bone_bad, n_tex, n_tex_ok, n_shaders);
    cnt_print(&versions, "BCH versions", 0);
    cnt_print(&errors, "BCH load errors", 0);
    for (int i = 0; i < errors.n; i++) printf("    e.g. %s: %s\n", errors.v[i].key, errors.v[i].last_file);
    cnt_print(&tex_formats, "BCH texture formats", 0);
    cnt_print(&lim_formats, "BFLIM/BCLIM texture formats (RomFS + archives)", 0);
    for (int i = 0; i < lim_formats.n; i++)
        if (lim_formats.v[i].last_file) printf("    e.g. %s: %s\n", lim_formats.v[i].key, lim_formats.v[i].last_file);
    cnt_print(&bufcount, "vertex buffers per mesh", 0);
    cnt_print(&skinning, "sub-mesh skinning", 0);
    cnt_print(&prims, "primitive modes", 0);
    cnt_print(&idxfmt, "index formats", 0);
    cnt_print(&blend, "blend state", 12);
    cnt_print(&cull, "cull", 0);
    cnt_print(&alphatest, "alpha test", 8);
    cnt_print(&depth, "depth", 0);
    cnt_print(&combiners, "combiner stages", 0);
    cnt_print(&mapping, "texture coordinate mapping", 0);
    cnt_print(&lut, "fragment lighting LUTs", 0);
    cnt_print(&regs, "PICA registers found in material blobs (materials)", 0);
    cnt_print(&shader_models, "shader programs: models using each", 0);
    qsort(shader_refs.v, (size_t)shader_refs.n, sizeof *shader_refs.v, cmp_count);
    printf("\n== shader references (materials / models)\n");
    for (int i = 0; i < shader_refs.n; i++)
        printf("  %6d %6d  %s\n", shader_refs.v[i].n, shader_refs.v[i].models, shader_refs.v[i].key);
    cnt_print(&attr_layouts, "mesh attribute layouts by shader reference", 40);
    if (default_shader) {
        BchFile sf;
        if (!bch_load(&sf, default_shader, default_shader_size)) {
            printf("\n== DefaultShader BCH programs:");
            for (int i = 0; i < sf.shader_count; i++) printf(" %s", sf.shaders[i].name ? sf.shaders[i].name : "?");
            printf("\n");
            /* one DVLB per variant suffix; N@ selects DVLE program N inside it */
            for (int i = 0; i < sf.shader_count; i++) {
                const BchShader *sh = &sf.shaders[i];
                int first = 1;
                for (int j = 0; j < i; j++) if (sf.shaders[j].dvlb == sh->dvlb) first = 0;
                if (!first || !sh->dvlb) continue;
                DvlbInfo info;
                if (dvlb_parse(sh->dvlb, sh->dvlb_size, &info)) continue;
                printf("  DVLB %-26s %4u code words, %d programs, used by:", sh->name ? strchr(sh->name, '@') + 1 : "?",
                       info.code_words, info.program_count);
                for (int j = 0; j < sf.shader_count; j++)
                    if (sf.shaders[j].dvlb == sh->dvlb) printf(" %d", sf.shaders[j].program_index);
                printf("\n");
                const char *dd = getenv("ALBW_DUMP_DVLB"); /* write each distinct DVLB (disassembly: tools/pica_disasm.py) */
                if (dd && sh->name) {
                    char path[600];
                    snprintf(path, sizeof path, "%s/%s.dvlb", dd, strchr(sh->name, '@') ? strchr(sh->name, '@') + 1 : sh->name);
                    FILE *f = fopen(path, "wb");
                    if (f) { fwrite(sh->dvlb, 1, sh->dvlb_size, f); fclose(f); printf("    wrote %s\n", path); }
                }
            }
            if (sf.shader_count && sf.shaders[0].dvlb)
                shader_catalogue("DefaultShader DVLB (no suffix)", sf.shaders[0].dvlb, sf.shaders[0].dvlb_size);
        }
        bch_free(&sf);
        free(default_shader_owner);
    }
    romfs_close();
    return 0;
}
