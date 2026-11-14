/* Standalone test of the native audio layer: native/sdk/snd.c (the nn::snd replacements, called
 * exactly as nw::snd calls them) + native/audio (mixer, effects, SDL3 output).
 *
 *   audio_test [romfs path of a .bcstm] [seconds] [out.wav]
 *   env ALBW_ROM            the ROM (default: see native/assets/romfs.c)
 *   env ALBW_AUDIO_PLAY=N   afterwards play the stream N seconds through the real sound thread
 *                           and SDL3 (ALBW_AUDIO=0: thread paced by the wall clock, no device)
 *
 * Streams a BCSTM like nw::snd's stream player does: one voice per channel (DSP-ADPCM, the
 * stream's sample rate and coefficients), four wave buffers per channel cycling through the
 * blocks (the first with the start context, refilled when their status turns "done", the loop
 * block with the loop context), renders it frame by frame through the sound-frame path, and
 * writes a 48 kHz WAV (32728 Hz -> 48000 Hz by SDL3, as the live output does). Also checks:
 * a PCM16 looping sine (frequency after resampling), voice priorities / drop callback, the aux
 * bus callback, and the wave-buffer status sequence. Exit code 0 = all checks passed. */
#define _GNU_SOURCE
#include <math.h>
#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <SDL3/SDL.h>

#include "../assets/romfs.h"
#include "audio.h"
#include "bcstm.h"

/* ---- the nn::snd API (native/sdk/snd.c), with the game's calling conventions ---- */
typedef struct {
    uint32_t bufferAddress;
    int32_t sampleLength;
    uint32_t pAdpcmContext;
    uint32_t userParam;
    uint8_t loopFlag, status;
    uint16_t bufferId;
    uint32_t next;
} WaveBuffer;
typedef void (*DropFn)(void *, uintptr_t);
typedef void (*AuxFn)(void *, int32_t, uintptr_t);
uint32_t func_003DE268(void);
void *func_003DB6DC(int32_t prio, DropFn cb, uintptr_t arg);
void func_003E0AF0(void *v);
void func_003E16D4(void *v, int32_t state);
void func_003E14A0(void *v, WaveBuffer *wb);
void func_003E11D0(void *v, const int16_t *coefs);
void func_003E1224(void *v, int32_t rate);
void func_003E145C(void *v, int32_t ch);
void func_003E147C(void *v, int32_t fmt);
void func_003E15CC(void *v, int32_t interp);
void func_003E176C(void *v, float vol);
void func_003DE4E4(void *v, float pitch);
void func_003E0C30(void *v, const float *mix);
void func_003DD770(float master);
void func_003DE188(int32_t bus, float vol);
void func_003DE198(int32_t bus, AuxFn cb, uintptr_t arg);
void func_003DD48C(int32_t bus, uint32_t *cb, uint32_t *arg);
int32_t func_003DE120(void);
uint32_t func_003DDB68(const uint32_t *cfg, void (*cb)(void *), void *arg, const uint32_t *aux,
                       void (*cb2)(void *), void *arg2, int32_t mode);
void func_003DD088(void);
void albw_snd_frame(float *out);
uint32_t func_003DB6FC(void *fx, void *buf, uint32_t size);
uint32_t func_003DBC50(void *fx, void *buf, uint32_t size);
uint32_t func_003DB7C4(const void *p);
uint32_t func_003DB804(void *fx, uint32_t bus);
uint32_t func_003DBD8C(void *fx, uint32_t bus);
uint32_t func_003DB894(void *fx, uint32_t en);
uint32_t func_003DBDE4(void *fx, uint32_t en);
uint32_t func_003DB9EC(void *fx, const void *p);
uint32_t func_003DBF3C(void *fx, const void *p);
uint32_t func_003DB770(const void *fx);
void func_003DB920(void *fx);
void func_003DBE70(void *fx);
uint32_t func_003E0B00(int32_t bus, void *fx);
uint32_t func_003DFF78(void *fx, const void *p);
void func_003DBC38(int32_t bus);

/* Game objects keep 32-bit pointer fields (WaveBuffer.bufferAddress...): on x86-64 the memory
 * they point to must be below 4 GB, as the 64-bit game's memory will have to be. */
static void *low_alloc(size_t n) {
#if UINTPTR_MAX > 0xFFFFFFFFu
    void *p = mmap(NULL, n, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    return p == MAP_FAILED ? NULL : p;
#else
    return calloc(1, n);
#endif
}
static int g_fail;
#define CHECK(c, ...)                                  \
    do {                                               \
        if (c) printf("  ok   " __VA_ARGS__);          \
        else { printf("  FAIL " __VA_ARGS__); g_fail++; } \
        printf("\n");                                  \
    } while (0)

/* ------------------------------------------------------------------ stream player */
#define NBUF 4
typedef struct {
    Bcstm s;
    void *voice[BCSTM_MAX_CH];
    WaveBuffer wb[BCSTM_MAX_CH][NBUF];
    uint16_t ctx[BCSTM_MAX_CH][2][3];   /* start / loop AdpcmContext */
    uint32_t next_block;
    int played_blocks, loops, status_errors;
    uint8_t last_status[BCSTM_MAX_CH][NBUF];
} Stream;

static void stream_queue(Stream *st, int c, int k) {
    Bcstm *s = &st->s;
    uint32_t b = st->next_block;
    uint32_t loop_block = s->block_samples ? s->loop_start / s->block_samples : 0;
    if (b >= s->block_count) {
        if (!s->loop) return;
        b = loop_block;
    }
    uint32_t n = 0;
    const uint8_t *p = bcstm_block(s, b, c, &n);
    WaveBuffer *w = &st->wb[c][k];
    memset(w, 0, sizeof *w);
    w->bufferAddress = (uint32_t)(uintptr_t)p;
    w->sampleLength = (int32_t)n;
    if (b == 0) w->pAdpcmContext = (uint32_t)(uintptr_t)st->ctx[c][0];
    else if (s->loop && b == loop_block && s->loop_start % s->block_samples == 0 && st->next_block >= s->block_count)
        w->pAdpcmContext = (uint32_t)(uintptr_t)st->ctx[c][1];
    func_003E14A0(st->voice[c], w);
    st->last_status[c][k] = w->status;
}

static void stream_advance(Stream *st) {
    /* nw::snd style: when a channel-0 buffer is done, refill the same slot on every channel */
    for (int k = 0; k < NBUF; k++) {
        if (st->wb[0][k].status != 3 || st->wb[0][k].sampleLength == 0) continue;
        bool all = true;
        for (int c = 1; c < st->s.channels; c++) all &= st->wb[c][k].status == 3;
        if (!all) continue;
        if (st->next_block >= st->s.block_count) {
            if (!st->s.loop) {
                for (int c = 0; c < st->s.channels; c++) st->wb[c][k].sampleLength = 0;
                continue;
            }
            st->loops++;
            st->next_block = st->s.block_count;   /* stream_queue maps it to the loop block */
            for (int c = 0; c < st->s.channels; c++) stream_queue(st, c, k);
            st->next_block = (st->s.loop_start / st->s.block_samples) + 1;
        } else {
            for (int c = 0; c < st->s.channels; c++) stream_queue(st, c, k);
            st->next_block++;
        }
        st->played_blocks++;
    }
}

static void stream_check_status(Stream *st) {
    /* each buffer's status only moves forward 1 -> 2 -> 3 between refills */
    for (int c = 0; c < st->s.channels; c++)
        for (int k = 0; k < NBUF; k++) {
            uint8_t now = st->wb[c][k].status, was = st->last_status[c][k];
            if (now < was || now > 3) st->status_errors++;
            st->last_status[c][k] = now;
        }
}

static int stream_start(Stream *st, const uint8_t *file, size_t size) {
    memset(st, 0, sizeof *st);
    int r = bcstm_parse(file, size, &st->s);
    if (r) return r;
    Bcstm *s = &st->s;
    for (int c = 0; c < s->channels; c++) {
        st->ctx[c][0][0] = s->adpcm[c].pred_scale;
        st->ctx[c][0][1] = (uint16_t)s->adpcm[c].yn1;
        st->ctx[c][0][2] = (uint16_t)s->adpcm[c].yn2;
        st->ctx[c][1][0] = s->adpcm[c].loop_pred_scale;
        st->ctx[c][1][1] = (uint16_t)s->adpcm[c].loop_yn1;
        st->ctx[c][1][2] = (uint16_t)s->adpcm[c].loop_yn2;
        void *v = func_003DB6DC(0x40, NULL, 0);
        if (!v) return -100;
        st->voice[c] = v;
        func_003E145C(v, 1);
        func_003E147C(v, s->encoding == 2 ? 2 : (s->encoding == 1 ? 1 : 0));
        func_003E1224(v, (int32_t)s->sample_rate);
        func_003E11D0(v, s->adpcm[c].coefs);
        func_003E15CC(v, 0);
        float mix[12] = {0};
        if (s->channels == 1) mix[0] = mix[1] = 1.0f;
        else if (c < 2) mix[c & 1] = 1.0f;   /* track 0: L -> front left, R -> front right;
                                                 further tracks stay silent (track volume 0) */
        if (!getenv("ALBW_TEST_NOAUX")) {
            mix[4] = mix[0] * 0.1f;     /* a little aux A send (the aux callback test) */
            mix[5] = mix[1] * 0.1f;
        }
        func_003E0C30(v, mix);
        func_003E176C(v, 1.0f);
        func_003DE4E4(v, 1.0f);
    }
    for (int k = 0; k < NBUF; k++) {
        for (int c = 0; c < s->channels; c++) stream_queue(st, c, k);
        st->next_block++;
    }
    for (int c = 0; c < s->channels; c++) func_003E16D4(st->voice[c], 0);   /* play */
    return 0;
}

static void stream_stop(Stream *st) {
    for (int c = 0; c < st->s.channels; c++) {
        func_003E16D4(st->voice[c], 1);
        func_003E0AF0(st->voice[c]);
    }
}

/* ------------------------------------------------------------------ aux / drop callbacks */
static int g_aux_calls, g_aux_len_ok = 1;
static uintptr_t g_aux_arg;
static double g_aux_energy;
static void aux_cb(void *data, int32_t n, uintptr_t arg) {
    int32_t **ch = data;
    g_aux_calls++;
    g_aux_arg = arg;
    if (n != 160) g_aux_len_ok = 0;
    for (int i = 0; i < n; i++) {
        g_aux_energy += fabs((double)ch[0][i]);
        for (int c = 0; c < 4; c++) ch[c][i] /= 2;   /* processed in place: -6 dB */
    }
}

static int g_drops;
static void *g_dropped;
static uintptr_t g_drop_arg;
static void drop_cb(void *v, uintptr_t arg) {
    g_drops++;
    g_dropped = v;
    g_drop_arg = arg;
}

/* ------------------------------------------------------------------ live playback callback */
static Stream *g_live;
static void live_frame(void *arg) {
    Stream *st = arg;
    stream_advance(st);
}

/* ------------------------------------------------------------------ analysis */
static size_t g_clipped;
static void stats(const float *x, size_t frames, double *rms, double *peak) {
    double s = 0, p = 0;
    g_clipped = 0;
    for (size_t i = 0; i < frames * 2; i++) {
        double v = fabs(x[i]);
        s += v * v;
        if (v > p) p = v;
        if (v >= 0.9999) g_clipped++;
    }
    *rms = sqrt(s / (double)(frames * 2 ? frames * 2 : 1));
    *peak = p;
}

static int test_sine(void) {
    printf("PCM16 looping sine through the resampler:\n");
    enum { N = 32728 / 1000 * 1000 };   /* 1000 Hz at 32728 Hz: exactly 32.728 samples/cycle */
    int16_t *pcm = low_alloc(32728 * 2);
    for (int i = 0; i < 32728; i++) pcm[i] = (int16_t)(12000.0 * sin(2.0 * M_PI * 1000.0 * i / 32728.0));
    void *v = func_003DB6DC(100, NULL, 0);
    func_003E145C(v, 1);
    func_003E147C(v, 1);
    func_003E1224(v, 32728);
    float mix[12] = {1, 1};
    func_003E0C30(v, mix);
    func_003DE4E4(v, 0.5f);   /* -> 500 Hz */
    WaveBuffer *wbp = low_alloc(sizeof *wbp);
#define wb (*wbp)
    wb.bufferAddress = (uint32_t)(uintptr_t)pcm;
    wb.sampleLength = 32728;
    wb.loopFlag = 1;
    func_003E14A0(v, &wb);
    CHECK(wb.status == 1, "append -> status wait (%u)", wb.status);
    func_003E16D4(v, 0);
    float out[160 * 2];
    int crossings = 0;
    float prev = 0;
    int frames = 205 * 2;   /* ~2 s */
    for (int f = 0; f < frames; f++) {
        albw_snd_frame(out);
        for (int i = 0; i < 160; i++) {
            float x = out[2 * i];
            if (prev < 0 && x >= 0) crossings++;
            prev = x;
        }
    }
    double secs = frames * 160 / 32728.498;
    double hz = crossings / secs;
    CHECK(wb.status == 2, "looping buffer stays playing (%u)", wb.status);
    CHECK(fabs(hz - 500.0) < 5.0, "pitch 0.5 of 1000 Hz -> %.1f Hz", hz);
    func_003E16D4(v, 1);
    CHECK(wb.status == 3, "stop -> status done (%u)", wb.status);
    func_003E0AF0(v);
#undef wb
    return 0;
}

static void test_alloc(void) {
    printf("voice allocation / priorities / drop callback:\n");
    void *v[24];
    int n = 0;
    for (int i = 0; i < 24; i++) {
        v[i] = func_003DB6DC(10, drop_cb, 0x100 + (uintptr_t)i);
        if (v[i]) n++;
    }
    CHECK(n == 24, "24 voices allocated (%d)", n);
    int16_t *silent = low_alloc(128);
    WaveBuffer *wbp = low_alloc(sizeof *wbp);
#define wb (*wbp)
    wb.bufferAddress = (uint32_t)(uintptr_t)silent;
    wb.sampleLength = 64;
    func_003E14A0(v[0], &wb);
    CHECK(func_003DB6DC(5, drop_cb, 0) == NULL, "lower priority than all -> NULL");
    CHECK(func_003DB6DC(0x8000, drop_cb, 0) == NULL, "priority > 0x7FFF -> NULL");
    void *x = func_003DB6DC(20, drop_cb, 0x999);
    CHECK(x != NULL && g_drops == 1, "higher priority -> one voice dropped (%d)", g_drops);
    CHECK(g_dropped == v[0] && g_drop_arg == 0x100 && x == v[0],
          "the oldest lowest-priority voice is dropped, callback gets its arg (0x%lx)",
          (unsigned long)g_drop_arg);
    CHECK(wb.status == 3, "dropped voice's buffers are done (%u)", wb.status);
    void *y = func_003DB6DC(10, drop_cb, 0x998);
    CHECK(y != NULL && g_drops == 2 && g_drop_arg == 0x101, "equal priority drops the next oldest");
    for (int i = 0; i < 24; i++) func_003E0AF0(v[i]);
    func_003E0AF0(x);
    func_003E0AF0(y);
    void *z = func_003DB6DC(1, NULL, 0);
    CHECK(z != NULL, "voices are free again");
    func_003E0AF0(z);
#undef wb
}

/* an impulse through aux bus A with the "DSP" delay, aux bus B with the DSP reverb, then the
 * CPU FxDelay through SetEffect: the wet signal must appear after the delay time */
static float run_impulse(int bus, float *tail_energy, int *first_ms) {
    int16_t *pcm = low_alloc(2 * 4096);
    pcm[0] = 30000;
    void *v = func_003DB6DC(100, NULL, 0);
    func_003E145C(v, 1);
    func_003E147C(v, 1);
    func_003E1224(v, 32728);
    float mix[12] = {0};
    mix[4 + 4 * bus] = mix[5 + 4 * bus] = 1.0f;   /* aux only, no dry */
    func_003E0C30(v, mix);
    WaveBuffer *wb = low_alloc(sizeof *wb);
    wb->bufferAddress = (uint32_t)(uintptr_t)pcm;
    wb->sampleLength = 4096;
    func_003E14A0(v, wb);
    func_003E16D4(v, 0);
    float out[320], e = 0, peak = 0;
    *first_ms = -1;
    for (int f = 0; f < 205; f++) {   /* 1 s */
        albw_snd_frame(out);
        for (int i = 0; i < 320; i++) {
            float a = fabsf(out[i]);
            e += a * a;
            if (a > 1e-3f && *first_ms < 0) *first_ms = (int)((f * 160 + i / 2) * 1000.0 / 32728.5);
            if (a > peak) peak = a;
        }
    }
    func_003E16D4(v, 1);
    func_003E0AF0(v);
    *tail_energy = e;
    return peak;
}

static void test_effects(void) {
    printf("aux effects:\n");
    float e;
    int ms;
    uint8_t *dly = low_alloc(0x20), *rev = low_alloc(0x20);
    memset(dly + 0xC, 0, 4);
    dly[0xD] = 0xFF;
    rev[0xD] = 0xFF;
    struct { uint32_t ms; float fb, damp; uint8_t surround, pad[3]; } dp = {200, 0.4f, 0.2f, 0, {0}};
    uint32_t need = func_003DB7C4(&dp);
    CHECK(need == 2 * 40 * 640, "DSP delay work size for 200 ms: %u", need);
    void *work = low_alloc(need);
    CHECK(func_003DB6FC(dly, work, need) && func_003DB804(dly, 0) && func_003DB9EC(dly, &dp) &&
          func_003DB894(dly, 1), "DSP delay assign / attach(bus A) / parameters / enable");
    float pk = run_impulse(0, &e, &ms);
    CHECK(pk > 0.1f && ms >= 190 && ms <= 210, "delay: first echo at %d ms, peak %.3f", ms, pk);
    func_003DB894(dly, 0);
    CHECK(!func_003DB770(dly), "disabled delay is not in use");
    func_003DB920(dly);
    CHECK(dly[0xC] == 0 && (int8_t)dly[0xD] == -1, "finalise releases the buffer and the bus");

    struct { uint32_t early, fused, pre; float color, damp; uint32_t fs; float eg, fg; uint8_t hp, pad[3]; }
        rp = {60, 3000, 20, 0.5f, 0.4f, 0, 0.5f, 0.6f, 0, {0}};
    void *rwork = low_alloc(1 << 20);
    CHECK(func_003DBC50(rev, rwork, 1 << 20) && func_003DBD8C(rev, 1) && func_003DBF3C(rev, &rp) &&
          func_003DBDE4(rev, 1), "DSP reverb assign / attach(bus B) / parameters / enable");
    pk = run_impulse(1, &e, &ms);
    CHECK(pk > 0.001f && pk < 1.0f && e > 0.01f && ms >= 15 && ms < 100,
          "reverb: tail energy %.3f from %d ms, peak %.3f", e, ms, pk);
    func_003DBE70(rev);

    uint8_t *cpu = low_alloc(0x60);   /* nn::snd::FxDelay object */
    struct { uint32_t ms; float fb, damp; uint32_t surround; } cp = {100, 0.0f, 0.0f, 0};
    CHECK(func_003DFF78(cpu, &cp) && cpu[0x55] == 2 && *(uint32_t *)(cpu + 0x3C) == 20,
          "FxDelay::SetParameters: 2 channels, 20 frames");
    CHECK(func_003E0B00(0, cpu) && cpu[0x56] == 1, "SetEffect(bus A, FxDelay)");
    pk = run_impulse(0, &e, &ms);
    CHECK(ms >= 95 && ms <= 105, "CPU delay echo at %d ms", ms);
    func_003DBC38(0);
    CHECK(cpu[0x56] == 0, "ClearEffect finalises it");
    pk = run_impulse(0, &e, &ms);
    CHECK(ms < 0, "aux bus without effect or callback is silent (%d)", ms);
}

int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : "World/Sound/stream/BGM_BARD_L_ZELDA.bcstm";
    double seconds = argc > 2 ? atof(argv[2]) : 12.0;
    const char *wav = argc > 3 ? argv[3] : "audio_test.wav";

    printf("nn::snd init: %u, output mode %d\n", func_003DE268(), func_003DE120());
    func_003DD770(1.0f);
    test_alloc();
    test_sine();
    test_effects();

    if (romfs_open(NULL)) {
        printf("FAIL cannot open the ROM (ALBW_ROM)\n");
        return 2;
    }
    size_t size = 0;
    uint8_t *heap_file = romfs_read(path, &size);
    if (!heap_file) {
        printf("FAIL %s not in the RomFS\n", path);
        return 2;
    }
    uint8_t *file = low_alloc(size);
    memcpy(file, heap_file, size);
    free(heap_file);
    printf("stream %s (%zu bytes):\n", path, size);
    func_003DE198(0, aux_cb, 0xA0A0);
    func_003DE188(0, 1.0f);
    uint32_t got_cb = 0, got_arg = 0;
    func_003DD48C(0, &got_cb, &got_arg);
    CHECK(got_cb == (uint32_t)(uintptr_t)aux_cb && got_arg == 0xA0A0, "GetAuxCallback returns it");

    Stream *st = low_alloc(sizeof *st);
    int r = stream_start(st, file, size);
    if (r) {
        printf("FAIL stream start %d\n", r);
        return 2;
    }
    Bcstm *s = &st->s;
    printf("  encoding %u, %u ch, %u Hz, %u samples (%.2f s), loop %u [%u..], %u blocks x %u samples\n",
           s->encoding, s->channels, s->sample_rate, s->loop_end,
           (double)s->loop_end / s->sample_rate, s->loop, s->loop_start, s->block_count, s->block_samples);
    int frames = (int)(seconds * 32728.498 / 160.0);
    float *out = malloc((size_t)frames * 160 * 2 * sizeof(float));
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int f = 0; f < frames; f++) {
        stream_advance(st);    /* what the game does in its sound-frame callback */
        albw_snd_frame(out + (size_t)f * 320);
        stream_check_status(st);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ms = (t1.tv_sec - t0.tv_sec) * 1e3 + (t1.tv_nsec - t0.tv_nsec) / 1e6;
    printf("  rendered %d frames (%.2f s of audio) in %.1f ms (%.1f us/frame)\n", frames,
           frames * 160 / 32728.498, ms, ms * 1000 / frames);
    const char *raw = getenv("ALBW_TEST_RAW");   /* raw 32728 Hz float output for analysis */
    if (raw) {
        FILE *rf = fopen(raw, "wb");
        if (rf) {
            fwrite(out, 8, (size_t)frames * 160, rf);
            fclose(rf);
        }
    }
    double rms, peak;
    stats(out, (size_t)frames * 160, &rms, &peak);
    /* some masters are themselves at full scale (e.g. BossClearFan: 0.3% of its samples) */
    CHECK(rms > 0.001 && peak > 0.01 && g_clipped * 100 < (size_t)frames * 320,
          "non-silent, not clipping: rms %.4f, peak %.4f, %zu samples at full scale", rms, peak, g_clipped);
    CHECK(st->status_errors == 0, "wave buffer status sequence wait -> play -> done (%d errors)",
          st->status_errors);
    CHECK(st->played_blocks > 0, "blocks refilled through status polling: %d (loops %d)",
          st->played_blocks, st->loops);
    CHECK(g_aux_calls == frames && g_aux_len_ok && g_aux_arg == 0xA0A0 && g_aux_energy > 0,
          "aux callback once per frame with 160 samples and its arg (%d calls)", g_aux_calls);
    stream_stop(st);
    func_003DE198(0, NULL, 0);

    /* 32728 Hz -> 48000 Hz with SDL3 (the same conversion the live stream does) */
    SDL_AudioSpec src = {SDL_AUDIO_F32, 2, 32728}, dst = {SDL_AUDIO_F32, 2, 48000};
    Uint8 *conv = NULL;
    int conv_len = 0;
    if (!SDL_ConvertAudioSamples(&src, (const Uint8 *)out, frames * 160 * 8, &dst, &conv, &conv_len)) {
        printf("FAIL SDL_ConvertAudioSamples: %s\n", SDL_GetError());
        return 2;
    }
    size_t out48 = (size_t)conv_len / 8;
    aud_write_wav(wav, (const float *)conv, out48, 48000);
    double rms48, peak48;
    stats((const float *)conv, out48, &rms48, &peak48);
    printf("  wrote %s: 48000 Hz stereo 16-bit, %zu frames (%.2f s), rms %.4f peak %.4f\n", wav,
           out48, out48 / 48000.0, rms48, peak48);
    SDL_free(conv);

    const char *play = getenv("ALBW_AUDIO_PLAY");
    if (play && atof(play) > 0) {
        printf("live playback %.1f s through the sound thread:\n", atof(play));
        g_live = low_alloc(sizeof *g_live);
        if (stream_start(g_live, file, size) == 0) {
            uint32_t cfg[3] = {0, 0x4000, 2};
            uint32_t rr = func_003DDB68(cfg, live_frame, g_live, NULL, NULL, NULL, 0);
            extern uint64_t aud_frame_count(void);
            uint64_t f0 = aud_frame_count();
            struct timespec a, b;
            clock_gettime(CLOCK_MONOTONIC, &a);
            SDL_Delay((Uint32)(atof(play) * 1000));
            clock_gettime(CLOCK_MONOTONIC, &b);
            uint64_t f1 = aud_frame_count();
            double el = (b.tv_sec - a.tv_sec) + (b.tv_nsec - a.tv_nsec) / 1e9;
            func_003DD088();
            double rate = (double)(f1 - f0) / el;
            CHECK(rr == 0 && fabs(rate - 204.55) < 12.0, "sound thread paced at %.1f frames/s (3DS: 204.55)", rate);
            stream_stop(g_live);
        }
    }
    printf("%s (%d failures)\n", g_fail ? "FAILED" : "ALL CHECKS PASSED", g_fail);
    return g_fail ? 1 : 0;
}
