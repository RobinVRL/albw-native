/* Native aux-bus effects with the meaning of nn::snd FxDelay / FxReverb (the 3DS ran these on
 * the CPU or the DSP; here they are plain host code). Input/output: 4 channel buffers of int32
 * samples at 32728 Hz (16-bit magnitude), processed in place. The output is the wet signal only:
 * the bus is returned into the main mix with the aux return volume, as on the 3DS.
 *
 * Delay: one feedback delay line per channel with a one-pole damping filter in the loop
 *        (feedback and damping as in nn::snd::FxDelay::Parameter).
 * Reverb: pre-delay, four early-reflection taps over the early-reflection time, then three
 *        damped comb filters (lengths = the SDK FilterSize, default 3040/3680/2080 samples)
 *        with feedback from the fused (decay) time, and two all-pass diffusers. A simple
 *        approximation of nn::snd::FxReverb, not a bit-exact port. */
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "audio.h"

typedef struct {
    float *buf;
    uint32_t len, idx;
    float store;
} Line;

struct AudFx {
    AudFxConfig cfg;
    int nch;
    /* delay */
    Line dl[4];
    float fb, damp;
    /* reverb, per front channel */
    Line pre[2], early[2], comb[2][3], ap[2][2];
    float comb_g[3], early_g, fused_g, rv_damp, ap_g;
    float hp_x[2], hp_y[2], hp_a;
};

static int line_init(Line *l, uint32_t len) {
    if (len < 1) len = 1;
    l->buf = calloc(len, sizeof(float));
    l->len = len;
    l->idx = 0;
    l->store = 0;
    return l->buf ? 0 : -1;
}

static uint32_t ms_to_samples(uint32_t ms) {
    double n = (double)ms * (double)AUD_RATE_EXACT / 1000.0;
    if (n < 1) n = 1;
    if (n > AUD_RATE_EXACT * 10.0) n = AUD_RATE_EXACT * 10.0;   /* 10 s cap */
    return (uint32_t)n;
}

static float clamp01(float x) { return x < 0 ? 0 : (x > 1 ? 1 : x); }

AudFx *aud_fx_create(const AudFxConfig *cfg) {
    AudFx *fx = calloc(1, sizeof *fx);
    if (!fx) return NULL;
    fx->cfg = *cfg;
    if (cfg->type == AUD_FX_DELAY) {
        fx->nch = cfg->surround ? 4 : 2;
        uint32_t n = ms_to_samples(cfg->delay_ms);
        for (int c = 0; c < fx->nch; c++) line_init(&fx->dl[c], n);
        fx->fb = clamp01(cfg->feedback);
        fx->damp = clamp01(cfg->damping) > 0.95f ? 0.95f : clamp01(cfg->damping);
    } else if (cfg->type == AUD_FX_REVERB) {
        fx->nch = 2;
        double t60 = (double)(cfg->fused_ms ? cfg->fused_ms : 1) * AUD_RATE_EXACT / 1000.0;
        for (int c = 0; c < 2; c++) {
            line_init(&fx->pre[c], ms_to_samples(cfg->predelay_ms));
            line_init(&fx->early[c], ms_to_samples(cfg->early_ms) + 1);
            for (int k = 0; k < 3; k++) {
                uint32_t n = cfg->filter_size[k] ? cfg->filter_size[k] : (uint32_t[]){3040, 3680, 2080}[k];
                if (n > 65536) n = 65536;
                line_init(&fx->comb[c][k], n + (c ? 23u : 0u));   /* decorrelate L/R */
            }
            line_init(&fx->ap[c][0], 225 + (c ? 7u : 0u));
            line_init(&fx->ap[c][1], 341 + (c ? 11u : 0u));
        }
        for (int k = 0; k < 3; k++) {
            double n = (double)fx->comb[0][k].len;
            fx->comb_g[k] = (float)pow(10.0, -3.0 * n / t60);
            if (fx->comb_g[k] > 0.98f) fx->comb_g[k] = 0.98f;
        }
        fx->early_g = clamp01(cfg->early_gain);
        fx->fused_g = clamp01(cfg->fused_gain);
        fx->rv_damp = clamp01(cfg->rv_damping) * 0.9f;
        fx->ap_g = 0.35f + 0.3f * clamp01(cfg->coloration);
        fx->hp_a = cfg->high_pass ? 0.96f : 0.0f;
    }
    return fx;
}

void aud_fx_destroy(AudFx *fx) {
    if (!fx) return;
    for (int c = 0; c < 4; c++) free(fx->dl[c].buf);
    for (int c = 0; c < 2; c++) {
        free(fx->pre[c].buf);
        free(fx->early[c].buf);
        for (int k = 0; k < 3; k++) free(fx->comb[c][k].buf);
        for (int k = 0; k < 2; k++) free(fx->ap[c][k].buf);
    }
    free(fx);
}

static inline float line_read(const Line *l, uint32_t back) {   /* back in [1, len] */
    uint32_t i = (l->idx + l->len - (back % l->len)) % l->len;
    return l->buf[i];
}

static int32_t sat(float x) {
    if (x > 2.0e9f) return 2000000000;
    if (x < -2.0e9f) return -2000000000;
    return (int32_t)lrintf(x);
}

static void process_delay(AudFx *fx, int32_t *ch[4], int n) {
    for (int c = 0; c < 4; c++) {
        if (c >= fx->nch || !fx->dl[c].buf) {
            memset(ch[c], 0, (size_t)n * sizeof(int32_t));
            continue;
        }
        Line *l = &fx->dl[c];
        for (int i = 0; i < n; i++) {
            float d = l->buf[l->idx];
            l->store = (1.0f - fx->damp) * d + fx->damp * l->store;
            l->buf[l->idx] = (float)ch[c][i] + fx->fb * l->store;
            l->idx = (l->idx + 1) % l->len;
            ch[c][i] = sat(d);
        }
    }
}

static void process_reverb(AudFx *fx, int32_t *ch[4], int n) {
    for (int c = 0; c < 2; c++) {
        if (!fx->pre[c].buf) continue;
        for (int i = 0; i < n; i++) {
            float x = (float)ch[c][i];
            if (fx->hp_a > 0) {   /* one-pole high-pass */
                float y = fx->hp_a * (fx->hp_y[c] + x - fx->hp_x[c]);
                fx->hp_x[c] = x;
                fx->hp_y[c] = y;
                x = y;
            }
            Line *p = &fx->pre[c];
            float pd = p->buf[p->idx];
            p->buf[p->idx] = x;
            p->idx = (p->idx + 1) % p->len;

            Line *e = &fx->early[c];
            e->buf[e->idx] = pd;
            float er = 0.0f;
            static const float tap[4] = {0.21f, 0.43f, 0.67f, 1.0f};
            for (int t = 0; t < 4; t++) {
                uint32_t back = (uint32_t)(tap[t] * (float)(e->len - 1));
                er += line_read(e, back < 1 ? 1 : back) * (0.8f - 0.15f * (float)t);
            }
            e->idx = (e->idx + 1) % e->len;

            float late = 0.0f;
            for (int k = 0; k < 3; k++) {
                Line *l = &fx->comb[c][k];
                float y = l->buf[l->idx];
                l->store = y * (1.0f - fx->rv_damp) + l->store * fx->rv_damp;
                l->buf[l->idx] = pd + fx->comb_g[k] * l->store;
                l->idx = (l->idx + 1) % l->len;
                late += y;
            }
            late *= (1.0f / 3.0f);
            for (int k = 0; k < 2; k++) {
                Line *a = &fx->ap[c][k];
                float b = a->buf[a->idx];
                float y = -fx->ap_g * late + b;
                a->buf[a->idx] = late + fx->ap_g * y;
                a->idx = (a->idx + 1) % a->len;
                late = y;
            }
            ch[c][i] = sat(er * 0.25f * fx->early_g + late * fx->fused_g);
        }
    }
    memset(ch[2], 0, (size_t)n * sizeof(int32_t));
    memset(ch[3], 0, (size_t)n * sizeof(int32_t));
}

void aud_fx_process(AudFx *fx, int32_t *ch[4], int n) {
    if (!fx) return;
    if (fx->cfg.type == AUD_FX_DELAY) process_delay(fx, ch, n);
    else if (fx->cfg.type == AUD_FX_REVERB) process_reverb(fx, ch, n);
}
