/* nw::lyt Pane::CalculateMtx wrapper (USA 003FF964, native/wraps.txt): the groundwork for
 * rebuilding the bottom-screen UI on the top screen (single-screen mode). Each pane of a layout
 * passes through here once a frame before its matrix is built, so its translate / scale / visible
 * flag can be changed by name and the game then draws it there itself.
 *
 * Pane fields (from 003FF964 / 003FF898): +0xC parent, +0x1C translate xyz, +0x28 rotate xyz,
 * +0x34 scale xy, +0x3C size wh, +0x44 flags (bit 0 visible), +0x45 alpha, +0x48 global mtx,
 * name: the first printable run at +0x7C..+0xB0 (nw::lyt keeps a 16+1 byte name there).
 *
 *   ALBW_PANE_DUMP=1   log every pane met (name, parent, translate, scale, size, visible) once to
 *                      ~/.local/share/albw-port/panes.txt, to find the names of the bottom UI.
 *   ~/.config/albw-port/panes.cfg   one override per line:
 *                      name tx ty sx sy visible    ("-" keeps the game's value)
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func_003FF964__decomp(uint32_t pane, uint32_t a1, uint32_t a2, float f0, float f1);

#define F32(p, o) (*(float *)((uint8_t *)(uintptr_t)(p) + (o)))
#define U8(p, o) (*(uint8_t *)((uint8_t *)(uintptr_t)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((uint8_t *)(uintptr_t)(p) + (o)))

typedef struct { char name[24]; float v[4]; int set[4]; int vis; } PaneOv;
static PaneOv g_ov[256];
static int g_nov = -1;
static FILE *g_dump;
static int g_dump_on = -1;

static const char *pane_name(uint32_t p, char out[24]) {
    out[0] = 0;
    if (!p) return out;
    const uint8_t *b = (const uint8_t *)(uintptr_t)p;
    for (int o = 0x7C; o < 0xB0; o++) {
        int n = 0;
        while (o + n < 0xB0 && n < 23 && b[o + n] >= 0x21 && b[o + n] < 0x7F) n++;
        if (n >= 2 && b[o + n] == 0) { memcpy(out, b + o, n); out[n] = 0; return out; }
    }
    return out;
}

static void pane_cfg_load(void) {
    g_nov = 0;
    const char *h = getenv("HOME");
    char path[512];
    snprintf(path, sizeof path, "%s/.config/albw-port/panes.cfg", h ? h : ".");
    FILE *f = fopen(path, "r");
    if (!f) return;
    char line[256];
    while (g_nov < 256 && fgets(line, sizeof line, f)) {
        if (line[0] == '#') continue;
        char n[24], t[5][32];
        if (sscanf(line, "%23s %31s %31s %31s %31s %31s", n, t[0], t[1], t[2], t[3], t[4]) < 2) continue;
        PaneOv *o = &g_ov[g_nov++];
        memset(o, 0, sizeof *o);
        strcpy(o->name, n);
        for (int i = 0; i < 4; i++)
            if (t[i][0] && strcmp(t[i], "-")) { o->set[i] = 1; o->v[i] = (float)atof(t[i]); }
        o->vis = (t[4][0] && strcmp(t[4], "-")) ? atoi(t[4]) : -1;
    }
    fclose(f);
}

static void pane_dump(uint32_t p, const char *name) {
    static uint32_t seen[8192];
    static int nseen;
    for (int i = 0; i < nseen; i++) if (seen[i] == p) return;
    if (nseen < 8192) seen[nseen++] = p;
    if (!g_dump) {
        const char *h = getenv("HOME");
        char path[512];
        snprintf(path, sizeof path, "%s/.local/share/albw-port/panes.txt", h ? h : ".");
        g_dump = fopen(path, "w");
        if (!g_dump) { g_dump_on = 0; return; }
    }
    char par[24];
    pane_name(U32(p, 0xC), par);
    fprintf(g_dump, "%-20s parent %-20s t %8.1f %8.1f  s %5.2f %5.2f  size %6.1f %6.1f  vis %d\n",
            name, par, F32(p, 0x1C), F32(p, 0x20), F32(p, 0x34), F32(p, 0x38),
            F32(p, 0x3C), F32(p, 0x40), U8(p, 0x44) & 1);
    fflush(g_dump);
}

void func_003FF964(uint32_t pane, uint32_t a1, uint32_t a2, float f0, float f1) {
    if (g_nov < 0) pane_cfg_load();
    if (g_dump_on < 0) { const char *e = getenv("ALBW_PANE_DUMP"); g_dump_on = e && *e == '1'; }
    if (pane && (g_nov || g_dump_on)) {
        char name[24];
        pane_name(pane, name);
        if (g_dump_on && name[0]) pane_dump(pane, name);
        for (int i = 0; i < g_nov; i++) {
            if (strcmp(g_ov[i].name, name)) continue;
            static const int off[4] = {0x1C, 0x20, 0x34, 0x38};
            for (int k = 0; k < 4; k++) if (g_ov[i].set[k]) F32(pane, off[k]) = g_ov[i].v[k];
            if (g_ov[i].vis >= 0) U8(pane, 0x44) = (U8(pane, 0x44) & ~1) | (g_ov[i].vis & 1);
            U8(pane, 0x44) |= 0x10;   /* matrix dirty: rebuild it with the new values */
            break;
        }
    }
    func_003FF964__decomp(pane, a1, a2, f0, f1);
}
