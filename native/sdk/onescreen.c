/* One screen: the game draws the bottom screen's UI on the top screen, and nothing on the bottom
 * screen (which the platform no longer shows). Not an overlay of the bottom screen's pixels: the
 * bottom layouts are drawn by the game's own layout code, in the top screen's pass, with a
 * projection for the top screen; pane positions can then be changed by name (sdk/pane.c).
 *
 * The 2D manager (singleton at albw_data+0xC800, read through DAT_0014a5a0) keeps the layouts in a
 * list (+0xE18 array, +0xE10 count); each layout's flags (+0x68) choose its screen and draw group:
 *   0x01 top, world-space (camera projection)   0012E048, drawn to a texture, composited by 0012EC04
 *   0x02 top HUD                               0012E048 (texture) -> 0012EC04, stereo +0x171C/+0x175C
 *   0x08 top HUD, in front (before the faders)  0012DCF4, called from 0014A40C (screen 0 / 1)
 *   0x04 bottom                                0012EA48, ortho +0x179C, bottom pass 0014B788
 *   0x10 bottom, in front (before the faders)   0012D9A8, called from 0014A40C (screen 2)
 * plus one extra bottom layout at +0x1844, drawn at the end of the bottom pass (0012E00C ->
 * 0012E484). Every bottom group uses the bottom projection +0x179C (a 320x240 ortho); 0014A40C
 * (screen id at its argument's first byte: 0 top left eye, 1 right eye, 2 bottom) also draws the
 * 15 screen faders.
 *
 * In one-screen mode (plat_one_screen): the three bottom layout draws and the bottom faders do
 * nothing in the bottom pass; in the top pass (0014A40C, screen 0: after the 3D, the effects and
 * the top HUD, before the top's front layouts and faders) they run with +0x179C narrowed from 320
 * to 400 units wide and the top's GPU state block (+0x1834: the 240x400 viewport) in place of the
 * bottom's (+0x183C: 240x320), so a bottom layout appears 1:1, centred on the top screen.
 *
 *   ALBW_ONESCREEN_DUMP=1   log each layout of the list once (address, flags, child pane names)
 *                           and the two projections to ~/.local/share/albw-port/layouts.txt
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func_0012EA48__decomp(uint32_t m);
int func_0012D9A8__decomp(uint32_t m);
int func_0012E00C__decomp(uint32_t m);
int func_0014A40C__decomp(uint32_t faders, char *scr);
extern uint32_t *DAT_0014a5a0;   /* -> the 2D manager pointer (albw_data + 0xC800) */

int plat_one_screen(void);       /* platform.c */
const char *albw_pane_name(uint32_t p, char out[24]);   /* sdk/pane.c */
int albw_mem_ss_region(int i, uint8_t **base, uint32_t *committed);   /* sdk/memory.c */

#define U8(p, o) (*(uint8_t *)((uint8_t *)(uintptr_t)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((uint8_t *)(uintptr_t)(p) + (o)))

#define BOTTOM_PROJ 0x179C
#define TOP_STATE 0x1834      /* GPU state commands (pointer, word count) of the top HUD groups */
#define BOTTOM_STATE 0x183C   /* ... of the bottom groups */

/* ---- debug dump of the layout list ---- */
static int readable(uint32_t p, uint32_t n) {
    for (int i = 0; i < 2; i++) {
        uint8_t *b;
        uint32_t c;
        if (albw_mem_ss_region(i, &b, &c) || !b) continue;
        uint32_t lo = (uint32_t)(uintptr_t)b;
        if (p >= lo && p - lo + n <= c) return 1;
    }
    return 0;
}

static int is_root(uint32_t p) {
    char nm[24];
    return p && !(p & 3) && readable(p, 0xB0) && !strcmp(albw_pane_name(p, nm), "RootPane");
}

/* the layout's root pane: a pointer in the entry, or one level further */
static uint32_t find_root(uint32_t e) {
    if (!readable(e, 0x200)) return 0;
    for (uint32_t o = 0; o < 0x200; o += 4)
        if (is_root(U32(e, o))) return U32(e, o);
    for (uint32_t o = 0; o < 0x100; o += 4) {
        uint32_t q = U32(e, o);
        if (!q || (q & 3) || !readable(q, 0x100)) continue;
        for (uint32_t o2 = 0; o2 < 0x100; o2 += 4)
            if (is_root(U32(q, o2))) return U32(q, o2);
    }
    return 0;
}

static FILE *dump_file(void) {
    static FILE *f;
    if (!f) {
        const char *h = getenv("HOME");
        char path[512];
        snprintf(path, sizeof path, "%s/.local/share/albw-port/layouts.txt", h ? h : ".");
        f = fopen(path, "w");
    }
    return f;
}

static void dump_list(uint32_t m) {
    static uint32_t seen[512];
    static int nseen, proj_done;
    FILE *f = dump_file();
    if (!f) return;
    if (!proj_done) {
        proj_done = 1;
        static const int offs[2] = {BOTTOM_PROJ, 0x171C};
        for (int k = 0; k < 2; k++) {
            const float *P = (const float *)(uintptr_t)(m + offs[k]);
            fprintf(f, "proj +%#x:", offs[k]);
            for (int i = 0; i < 16; i++) fprintf(f, "%s%9.5f", i % 4 ? " " : "  |", P[i]);
            fprintf(f, "\n");
        }
    }
    uint32_t n = U32(m, 0xE10), arr = U32(m, 0xE18);
    if (n > 256 || !readable(arr, n * 4)) return;
    for (uint32_t i = 0; i < n; i++) {
        uint32_t e = U32(arr, i * 4);
        if (!readable(e, 0x70)) continue;
        uint32_t flags = U32(e, 0x68), key = e ^ (flags << 24);
        int k;
        for (k = 0; k < nseen && seen[k] != key; k++) {}
        if (k < nseen) continue;
        if (nseen < 512) seen[nseen++] = key;
        uint32_t root = find_root(e);
        fprintf(f, "layout %08x vt %08x flags %02x +18 %08x +0f %02x root %08x:", e, U32(e, 0), flags,
                U32(e, 0x18), U8(e, 0xF), root);
        if (root) {
            fprintf(f, " [");
            for (int o = 0; o < 0x20; o += 4) fprintf(f, " %08x", U32(root, o));
            fprintf(f, " ]");
            /* children: an nw::ut::LinkList in the root (head node: next, prev; size before or
             * after it), each child linked by its node at +4 (parent at +0xC): try each layout */
            for (uint32_t ho = 0x10; ho <= 0x18; ho += 4) {
                uint32_t head = root + ho, node = U32(root, ho);
                int c = 0;
                char line[1024];
                int n = 0;
                line[0] = 0;
                for (; c < 32 && node && node != head && !(node & 3) && readable(node - 4, 0xB0); c++) {
                    char nm[24];
                    if (U32(node - 4, 0xC) != root) { c = -1; break; }
                    n += snprintf(line + n, sizeof line - n > 0 ? sizeof line - n : 0, " %s",
                                  albw_pane_name(node - 4, nm));
                    if (n >= (int)sizeof line) n = sizeof line - 1;
                    node = U32(node, 0);
                }
                if (c > 0) { fprintf(f, " children@+%x:%s", ho, line); break; }
            }
        }
        fprintf(f, "\n");
        fflush(f);
    }
}

/* ---- the bottom groups ---- */
int func_0012EA48(uint32_t m) {   /* bottom layouts (bottom pass) */
    if (plat_one_screen()) return 0;
    return func_0012EA48__decomp(m);
}
int func_0012D9A8(uint32_t m) {   /* bottom front layouts (0014A40C, screen 2) */
    if (plat_one_screen()) return 0;
    return func_0012D9A8__decomp(m);
}
int func_0012E00C(uint32_t m) {   /* the extra bottom layout +0x1844 (end of the bottom pass) */
    if (plat_one_screen()) return 0;
    return func_0012E00C__decomp(m);
}

/* the bottom groups, in the top pass: +0x179C maps 320 layout units onto the screen's width;
 * scaling the matrix's x input (column 0 of the row-major nn::math MTX44, clip = M * v) by
 * 320 / 400 makes it map 400 units, the top screen's width (widescreen: the layout shader keeps
 * panes 1:1 in the wider surface, render/font.c) */
static void bottom_ui_on_top(void) {
    uint32_t m = DAT_0014a5a0 ? *DAT_0014a5a0 : 0;
    if (!m) return;
    if (getenv("ALBW_ONESCREEN_DUMP")) dump_list(m);
    float *P = (float *)(uintptr_t)(m + BOTTOM_PROJ), save[16];
    memcpy(save, P, sizeof save);
    for (int r = 0; r < 4; r++) P[r * 4] *= 320.0f / 400.0f;
    /* the screen's GPU state block (viewport / scissor: 240x320 for the bottom, 240x400 for the
     * top), copied into the command list by each group: the top's for the bottom groups too */
    uint32_t blk = U32(m, BOTTOM_STATE), len = U32(m, BOTTOM_STATE + 4);
    U32(m, BOTTOM_STATE) = U32(m, TOP_STATE);
    U32(m, BOTTOM_STATE + 4) = U32(m, TOP_STATE + 4);
    func_0012EA48__decomp(m);
    func_0012E00C__decomp(m);
    func_0012D9A8__decomp(m);
    U32(m, BOTTOM_STATE) = blk;
    U32(m, BOTTOM_STATE + 4) = len;
    memcpy(P, save, sizeof save);
}

/* 2D layer end of a screen pass: front layouts + screen faders (scr[0] = screen id) */
int func_0014A40C(uint32_t faders, char *scr) {
    if (scr && plat_one_screen()) {
        if (scr[0] == 2) return 0;    /* the bottom screen is not shown: nothing to draw there */
        if (scr[0] == 0) bottom_ui_on_top();
    }
    return func_0014A40C__decomp(faders, scr);
}
