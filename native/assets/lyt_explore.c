/* Layout archive explorer (debug aid, not part of the game build):
 *   lyt_explore list [substring]            RomFS files whose path contains substring
 *   lyt_explore ls ARCHIVE                  members of an archive (.arc / .szs / .lz?)
 *   lyt_explore png ARCHIVE OUTDIR [sub]    every layout image (bclim / bflim) as PNG
 *   lyt_explore raw ARCHIVE MEMBER OUT      one member, raw
 *   lyt_explore dump ARCHIVE OUTDIR         every member, raw (NNN_name.bin)
 *   env ALBW_ROM                            the decrypted ROM (default: see romfs.c)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "romfs.h"
#include "yaz0.h"
#include "sarc.h"
#include "texture.h"
#include "png.h"

static uint8_t *load_archive(const char *path, size_t *n) {
    uint8_t *b = romfs_read(path, n);
    if (!b) { fprintf(stderr, "no file %s\n", path); return NULL; }
    if (yaz0_is(b, *n)) {
        size_t m;
        uint8_t *d = yaz0_decompress_alloc(b, *n, &m);
        free(b);
        if (!d) { fprintf(stderr, "yaz0 failed %s\n", path); return NULL; }
        b = d, *n = m;
    }
    return b;
}

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: see the source\n"); return 1; }
    if (romfs_open(NULL)) { fprintf(stderr, "romfs_open failed\n"); return 1; }
    if (!strcmp(argv[1], "list")) {
        for (size_t i = 0; i < romfs_count(); i++) {
            const RomfsFile *f = romfs_file(i);
            if (argc < 3 || strstr(f->path, argv[2])) printf("%9llu %s\n", (unsigned long long)f->size, f->path);
        }
        return 0;
    }
    if (argc < 3) return 1;
    size_t n;
    uint8_t *b = load_archive(argv[2], &n);
    if (!b) return 1;
    Sarc s;
    if (sarc_open(&s, b, n)) { fprintf(stderr, "not a SARC: %s (%.4s)\n", argv[2], (char *)b); return 1; }
    if (!strcmp(argv[1], "ls")) {
        for (size_t i = 0; i < s.count; i++) {
            const SarcFile *f = &s.files[i];
            LimImage li;
            if (f->name && !lim_parse(f->data, f->size, &li))
                printf("%8zu %s  %dx%d %s\n", f->size, f->name, li.width, li.height, pica_tex_format_name(li.format));
            else
                printf("%8zu %s\n", f->size, f->name ? f->name : "?");
        }
        return 0;
    }
    if (!strcmp(argv[1], "png") && argc >= 4) {
        int k = 0;
        for (size_t i = 0; i < s.count; i++) {
            const SarcFile *f = &s.files[i];
            if (!f->name || (argc > 4 && !strstr(f->name, argv[4]))) continue;
            LimImage li;
            if (lim_parse(f->data, f->size, &li)) continue;
            uint8_t *img = malloc((size_t)li.stored_w * li.stored_h * 4);
            if (pica_tex_decode(li.data, li.size, li.format, li.stored_w, li.stored_h, img, 0)) { free(img); continue; }
            /* the visible part: top-left of the stored image */
            uint8_t *vis = malloc((size_t)li.width * li.height * 4);
            for (int y = 0; y < li.height; y++)
                memcpy(vis + (size_t)y * li.width * 4, img + (size_t)y * li.stored_w * 4, (size_t)li.width * 4);
            const char *base = strrchr(f->name, '/');
            base = base ? base + 1 : f->name;
            char out[1024];
            snprintf(out, sizeof out, "%s/%s.png", argv[3], base);
            if (!png_write_rgba(out, vis, li.width, li.height)) k++;
            free(vis);
            free(img);
        }
        printf("%d images\n", k);
        return 0;
    }
    if (!strcmp(argv[1], "dump") && argc >= 4) {   /* every member, named by its index (+ name) */
        for (size_t i = 0; i < s.count; i++) {
            const SarcFile *f = &s.files[i];
            const char *base = f->name ? strrchr(f->name, '/') : NULL;
            base = base ? base + 1 : f->name ? f->name : "";
            char out[1024];
            snprintf(out, sizeof out, "%s/%03zu_%s.bin", argv[3], i, base);
            FILE *o = fopen(out, "wb");
            if (!o) continue;
            fwrite(f->data, 1, f->size, o);
            fclose(o);
        }
        printf("%zu members\n", s.count);
        return 0;
    }
    if (!strcmp(argv[1], "raw") && argc >= 5) {
        const SarcFile *f = sarc_find(&s, argv[3]);
        if (!f) { fprintf(stderr, "no member %s\n", argv[3]); return 1; }
        FILE *o = fopen(argv[4], "wb");
        fwrite(f->data, 1, f->size, o);
        fclose(o);
        return 0;
    }
    return 1;
}
