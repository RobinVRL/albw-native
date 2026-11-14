/* BCSTM reader (see bcstm.h). Little-endian CTR container: header with sized block references
 * (0x4000 INFO, 0x4001 SEEK, 0x4002 DATA); INFO holds references to the stream info, the track
 * table and the channel table; each channel entry references its DSP-ADPCM info (coefficients,
 * start context, loop context). Sample data is stored block-interleaved per channel. */
#include <stdbool.h>
#include <string.h>

#include "bcstm.h"

static uint32_t rd32(const uint8_t *p) { return (uint32_t)p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24; }
static uint16_t rd16(const uint8_t *p) { return (uint16_t)(p[0] | p[1] << 8); }

int bcstm_parse(const uint8_t *f, size_t size, Bcstm *s) {
    memset(s, 0, sizeof *s);
    if (size < 0x40 || memcmp(f, "CSTM", 4) != 0 || rd16(f + 4) != 0xFEFF) return -1;
    uint16_t nblocks = rd16(f + 0x10);
    uint32_t info = 0, data = 0;
    for (int i = 0; i < nblocks && 0x14 + 12 * (i + 1) <= (int)size; i++) {
        const uint8_t *r = f + 0x14 + 12 * i;
        uint16_t type = rd16(r);
        if (type == 0x4000) info = rd32(r + 4);
        if (type == 0x4002) data = rd32(r + 4);
    }
    if (!info || !data || info + 0x20 > size || data + 0x20 > size) return -2;
    if (memcmp(f + info, "INFO", 4) != 0 || memcmp(f + data, "DATA", 4) != 0) return -3;
    const uint8_t *ib = f + info + 8;   /* references inside INFO are relative to here */
    uint32_t si = rd32(ib + 4), ci = rd32(ib + 0x14);
    const uint8_t *st = ib + si;
    if ((size_t)(st - f) + 0x38 > size) return -4;
    s->encoding = st[0];
    s->loop = st[1];
    s->channels = st[2];
    s->sample_rate = rd32(st + 4);
    s->loop_start = rd32(st + 8);
    s->loop_end = rd32(st + 0xC);
    s->block_count = rd32(st + 0x10);
    s->block_size = rd32(st + 0x14);
    s->block_samples = rd32(st + 0x18);
    s->last_block_size = rd32(st + 0x1C);
    s->last_block_samples = rd32(st + 0x20);
    s->last_block_padded = rd32(st + 0x24);
    uint32_t sample_ref = rd32(st + 0x34);   /* reference 0x1F00 at +0x30, offset at +0x34 */
    s->data = f + data + 8 + sample_ref;
    if (s->channels == 0 || s->channels > BCSTM_MAX_CH || !s->block_count) return -5;
    const uint8_t *ct = ib + ci;
    uint32_t n = rd32(ct);
    for (uint32_t c = 0; c < n && c < s->channels; c++) {
        const uint8_t *ce = ct + rd32(ct + 4 + 8 * c + 4);   /* channel info entry */
        if (rd16(ce) != 0x0300 && s->encoding == 2) continue;  /* DSP-ADPCM info reference */
        const uint8_t *a = ce + rd32(ce + 4);
        if ((size_t)(a - f) + 0x2E > size) return -6;
        BcstmAdpcm *d = &s->adpcm[c];
        for (int k = 0; k < 16; k++) d->coefs[k] = (int16_t)rd16(a + 2 * k);
        d->pred_scale = rd16(a + 0x20);
        d->yn1 = (int16_t)rd16(a + 0x22);
        d->yn2 = (int16_t)rd16(a + 0x24);
        d->loop_pred_scale = rd16(a + 0x26);
        d->loop_yn1 = (int16_t)rd16(a + 0x28);
        d->loop_yn2 = (int16_t)rd16(a + 0x2A);
    }
    size_t need = (size_t)(s->block_count - 1) * s->block_size * s->channels +
                  (size_t)s->last_block_padded * s->channels;
    if ((size_t)(s->data - f) + need > size) return -7;
    return 0;
}

const uint8_t *bcstm_block(const Bcstm *s, uint32_t b, int c, uint32_t *samples) {
    if (b >= s->block_count || c < 0 || c >= s->channels) return NULL;
    const uint8_t *base = s->data + (size_t)b * s->block_size * s->channels;
    bool last = b == s->block_count - 1;
    if (samples) *samples = last ? s->last_block_samples : s->block_samples;
    return base + (size_t)c * (last ? s->last_block_padded : s->block_size);
}
