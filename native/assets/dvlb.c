/* DVLB layout (3dbrew "SHBIN"): "DVLB", u32 N, u32 DVLE offsets[N]; then "DVLP": +8 code
 * offset, +0xC code size (words) relative to DVLP.  DVLE: +6 u8 type, +8 main, +0xC end main,
 * +0x28/+0x2C output table (8-byte entries: u16 type, u16 reg, u16 mask), +0x30/+0x34 uniform
 * table (8-byte entries: u32 symbol offset, u16 first reg, u16 last reg), +0x38 symbol table.
 * All DVLE offsets are relative to the DVLE header. */
#include "dvlb.h"
#include <string.h>

static uint32_t rd32(const uint8_t *p) {
    return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}
static uint16_t rd16(const uint8_t *p) { return (uint16_t)(p[0] | p[1] << 8); }

const char *dvle_output_name(int t) {
    static const char *const n[] = {"position", "normquat", "color", "texcoord0", "texcoord0w",
                                    "texcoord1", "texcoord2", "?7", "view"};
    return t >= 0 && t <= 8 ? n[t] : "?";
}

int dvlb_parse(const uint8_t *b, size_t n, DvlbInfo *o) {
    memset(o, 0, sizeof *o);
    if (n < 8 || memcmp(b, "DVLB", 4)) return -1;
    uint32_t cnt = rd32(b + 4);
    if (cnt > 64 || 8 + 4 * (size_t)cnt + 0x10 > n) return -1;
    const uint8_t *dvlp = b + 8 + 4 * cnt;
    if (!memcmp(dvlp, "DVLP", 4)) o->code_words = rd32(dvlp + 0xC);
    for (uint32_t i = 0; i < cnt; i++) {
        uint32_t off = rd32(b + 8 + 4 * i);
        if ((size_t)off + 0x40 > n || memcmp(b + off, "DVLE", 4)) return -1;
        const uint8_t *e = b + off;
        DvleInfo *d = &o->programs[o->program_count++];
        d->type = e[6];
        d->main_offset = rd32(e + 8);
        d->end_offset = rd32(e + 0xC);
        uint32_t oo = rd32(e + 0x28), on = rd32(e + 0x2C);
        uint32_t uo = rd32(e + 0x30), un = rd32(e + 0x34), so = rd32(e + 0x38), ss = rd32(e + 0x3C);
        for (uint32_t k = 0; k < on && k < 16; k++) {
            if ((size_t)off + oo + 8 * k + 8 > n) break;
            const uint8_t *q = e + oo + 8 * k;
            d->outputs[d->output_count].type = rd16(q);
            d->outputs[d->output_count].reg = rd16(q + 2);
            d->outputs[d->output_count].mask = rd16(q + 4);
            d->output_count++;
        }
        for (uint32_t k = 0; k < un && k < 64; k++) {
            if ((size_t)off + uo + 8 * k + 8 > n) break;
            const uint8_t *q = e + uo + 8 * k;
            uint32_t sym = rd32(q);
            DvleSymbol *s = &d->symbols[d->symbol_count++];
            s->first = rd16(q + 4);
            s->last = rd16(q + 6);
            s->name = NULL;
            if (sym < ss && (size_t)off + so + ss <= n && memchr(e + so + sym, 0, ss - sym))
                s->name = (const char *)e + so + sym;
        }
    }
    return 0;
}
