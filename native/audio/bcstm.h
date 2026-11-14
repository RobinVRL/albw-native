/* BCSTM (CTR stream, "CSTM") reader: stream info, per-channel DSP-ADPCM info, block layout.
 * Asset-side helper (tests/tools); the game parses its streams itself through nw::snd. */
#pragma once
#include <stddef.h>
#include <stdint.h>

#define BCSTM_MAX_CH 8

typedef struct {
    int16_t coefs[16];
    uint16_t pred_scale;
    int16_t yn1, yn2;
    uint16_t loop_pred_scale;
    int16_t loop_yn1, loop_yn2;
} BcstmAdpcm;

typedef struct {
    uint8_t encoding;        /* 0 PCM8, 1 PCM16, 2 DSP-ADPCM, 3 IMA-ADPCM */
    uint8_t loop;
    uint8_t channels;
    uint32_t sample_rate;
    uint32_t loop_start, loop_end;   /* samples (loop_end = total sample count) */
    uint32_t block_count, block_size, block_samples;
    uint32_t last_block_size, last_block_samples, last_block_padded;
    const uint8_t *data;     /* first sample block (inside the file buffer) */
    BcstmAdpcm adpcm[BCSTM_MAX_CH];
} Bcstm;

/* 0 = ok; file must stay alive while Bcstm is used */
int bcstm_parse(const uint8_t *file, size_t size, Bcstm *out);
/* block b of channel c: pointer and sample count */
const uint8_t *bcstm_block(const Bcstm *s, uint32_t b, int c, uint32_t *samples);
