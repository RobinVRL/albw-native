/* Host audio output: SDL3 playback stream fed from a ring of mixed sound frames.
 *
 * Timing model. The game's sound thread produces one 160-sample frame (4.8887 ms at 32728 Hz)
 * per loop iteration. aud_out_wait() blocks it until the ring holds less than the target
 * latency, so the sound thread runs exactly at the rate the audio device consumes samples
 * (no drift between the game's sound clock and the host clock). The SDL stream callback pulls
 * from the ring (SDL resamples 32728 Hz to the device rate) and wakes the sound thread.
 * Without a device (ALBW_AUDIO=0, no audio driver, open failure) frames are paced by
 * CLOCK_MONOTONIC at the 3DS frame period instead.
 *
 * env: ALBW_AUDIO=0            no device
 *      ALBW_AUDIO_LATENCY_MS   ring target (default 40 ms)
 *      ALBW_AUDIO_WAV=path      also write everything pushed to a 32728 Hz WAV (debugging) */
#define _GNU_SOURCE
#include <errno.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <SDL3/SDL.h>

#include "audio.h"

#define RING_FRAMES 16384   /* stereo sample frames (~0.5 s) */

static pthread_mutex_t g_mu = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_cv;
static bool g_cv_init;
static float g_ring[RING_FRAMES * 2];
static size_t g_rd, g_count;     /* in stereo frames */
static size_t g_target = 1309;   /* 40 ms */
static SDL_AudioStream *g_stream;
static bool g_open;
static uint64_t g_underruns;
static struct timespec g_next;    /* wall-clock pacing */
static FILE *g_wav;
static uint32_t g_wav_frames;

static void cv_init(void) {
    if (g_cv_init) return;
    pthread_condattr_t a;
    pthread_condattr_init(&a);
    pthread_condattr_setclock(&a, CLOCK_MONOTONIC);
    pthread_cond_init(&g_cv, &a);
    pthread_condattr_destroy(&a);
    g_cv_init = true;
}

static void SDLCALL stream_cb(void *user, SDL_AudioStream *s, int additional, int total) {
    (void)user;
    (void)total;
    int need = additional / (int)(2 * sizeof(float));
    float tmp[512 * 2];
    pthread_mutex_lock(&g_mu);
    while (need > 0) {
        int n = need > 512 ? 512 : need;
        int have = (int)(g_count < (size_t)n ? g_count : (size_t)n);
        for (int i = 0; i < have; i++) {
            tmp[2 * i] = g_ring[2 * g_rd];
            tmp[2 * i + 1] = g_ring[2 * g_rd + 1];
            g_rd = (g_rd + 1) % RING_FRAMES;
        }
        g_count -= (size_t)have;
        if (have < n) {
            memset(tmp + 2 * have, 0, (size_t)(n - have) * 2 * sizeof(float));
            g_underruns++;
        }
        SDL_PutAudioStreamData(s, tmp, n * (int)(2 * sizeof(float)));
        need -= n;
    }
    pthread_cond_broadcast(&g_cv);
    pthread_mutex_unlock(&g_mu);
}

static void wav_header(FILE *f, uint32_t frames) {
    uint32_t data = frames * 4, rate = AUD_RATE, br = AUD_RATE * 4;
    uint8_t h[44];
    memcpy(h, "RIFF", 4);
    uint32_t riff = 36 + data;
    memcpy(h + 4, &riff, 4);
    memcpy(h + 8, "WAVEfmt ", 8);
    uint32_t fmt_size = 16;
    uint16_t pcm = 1, ch = 2, ba = 4, bits = 16;
    memcpy(h + 16, &fmt_size, 4);
    memcpy(h + 20, &pcm, 2);
    memcpy(h + 22, &ch, 2);
    memcpy(h + 24, &rate, 4);
    memcpy(h + 28, &br, 4);
    memcpy(h + 32, &ba, 2);
    memcpy(h + 34, &bits, 2);
    memcpy(h + 36, "data", 4);
    memcpy(h + 40, &data, 4);
    fseek(f, 0, SEEK_SET);
    fwrite(h, 1, 44, f);
    fseek(f, 0, SEEK_END);
}

bool aud_out_open(void) {
    pthread_mutex_lock(&g_mu);
    cv_init();
    pthread_mutex_unlock(&g_mu);
    const char *lat = getenv("ALBW_AUDIO_LATENCY_MS");
    if (lat && atoi(lat) > 0) g_target = (size_t)atoi(lat) * AUD_RATE / 1000;
    if (g_target < AUD_FRAME) g_target = AUD_FRAME;
    if (g_target > RING_FRAMES - 2 * AUD_FRAME) g_target = RING_FRAMES - 2 * AUD_FRAME;
    const char *wav = getenv("ALBW_AUDIO_WAV");
    if (wav && *wav && !g_wav) {
        g_wav = fopen(wav, "wb");
        if (g_wav) wav_header(g_wav, 0);
    }
    clock_gettime(CLOCK_MONOTONIC, &g_next);
    const char *en = getenv("ALBW_AUDIO");
    if (en && strcmp(en, "0") == 0) return false;
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) {
        fprintf(stderr, "audio: SDL audio init failed: %s (no sound)\n", SDL_GetError());
        return false;
    }
    SDL_AudioSpec spec = {SDL_AUDIO_F32, 2, AUD_RATE};
    g_stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, stream_cb, NULL);
    if (!g_stream) {
        fprintf(stderr, "audio: no playback device: %s (no sound)\n", SDL_GetError());
        return false;
    }
    SDL_ResumeAudioStreamDevice(g_stream);
    g_open = true;
    fprintf(stderr, "audio: SDL3 '%s', %d Hz stereo source, target latency %zu samples\n",
            SDL_GetCurrentAudioDriver(), AUD_RATE, g_target);
    return true;
}

void aud_out_close(void) {
    if (g_stream) {
        SDL_DestroyAudioStream(g_stream);
        g_stream = NULL;
    }
    if (g_open && g_underruns)
        fprintf(stderr, "audio: %llu device underruns\n", (unsigned long long)g_underruns);
    g_open = false;
    if (g_wav) {
        wav_header(g_wav, g_wav_frames);
        fclose(g_wav);
        g_wav = NULL;
    }
}

static void timespec_add_ns(struct timespec *t, long ns) {
    t->tv_nsec += ns;
    while (t->tv_nsec >= 1000000000L) {
        t->tv_nsec -= 1000000000L;
        t->tv_sec++;
    }
}

void aud_out_wait(void) {
    if (!g_open) {
        /* wall clock: one frame period = 160 / 32728.498 s */
        static double acc;
        acc += (double)AUD_FRAME * 1.0e9 / (double)AUD_RATE_EXACT;
        long ns = (long)acc;
        acc -= (double)ns;
        timespec_add_ns(&g_next, ns);
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC, &now);
        if (now.tv_sec - g_next.tv_sec > 1) g_next = now;   /* stalled: do not catch up */
        while (clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &g_next, NULL) == EINTR) {
        }
        return;
    }
    pthread_mutex_lock(&g_mu);
    while (g_count + AUD_FRAME > g_target) {
        struct timespec t;
        clock_gettime(CLOCK_MONOTONIC, &t);
        timespec_add_ns(&t, 50 * 1000 * 1000);   /* device stalled: still progress at 20 Hz */
        if (pthread_cond_timedwait(&g_cv, &g_mu, &t) == ETIMEDOUT) break;
    }
    pthread_mutex_unlock(&g_mu);
}

void aud_out_push(const float *frame, int samples) {
    if (g_wav) {
        int16_t pcm[AUD_FRAME * 2 * 4];
        int n = samples > AUD_FRAME * 4 ? AUD_FRAME * 4 : samples;
        for (int i = 0; i < n * 2; i++) pcm[i] = (int16_t)lrintf(frame[i] * 32767.0f);
        fwrite(pcm, 4, (size_t)n, g_wav);
        g_wav_frames += (uint32_t)n;
    }
    if (!g_open) return;
    pthread_mutex_lock(&g_mu);
    for (int i = 0; i < samples; i++) {
        if (g_count >= RING_FRAMES) {   /* overflow: drop the oldest */
            g_rd = (g_rd + 1) % RING_FRAMES;
            g_count--;
        }
        size_t w = (g_rd + g_count) % RING_FRAMES;
        g_ring[2 * w] = frame[2 * i];
        g_ring[2 * w + 1] = frame[2 * i + 1];
        g_count++;
    }
    pthread_mutex_unlock(&g_mu);
}

int aud_write_wav(const char *path, const float *stereo, size_t frames, int rate) {
    FILE *f = fopen(path, "wb");
    if (!f) return -1;
    uint32_t data = (uint32_t)(frames * 4), r = (uint32_t)rate, br = (uint32_t)rate * 4,
             riff = 36 + data, fs = 16;
    uint16_t pcm = 1, ch = 2, ba = 4, bits = 16;
    fwrite("RIFF", 1, 4, f);
    fwrite(&riff, 4, 1, f);
    fwrite("WAVEfmt ", 1, 8, f);
    fwrite(&fs, 4, 1, f);
    fwrite(&pcm, 2, 1, f);
    fwrite(&ch, 2, 1, f);
    fwrite(&r, 4, 1, f);
    fwrite(&br, 4, 1, f);
    fwrite(&ba, 2, 1, f);
    fwrite(&bits, 2, 1, f);
    fwrite("data", 1, 4, f);
    fwrite(&data, 4, 1, f);
    for (size_t i = 0; i < frames * 2; i++) {
        float x = stereo[i];
        x = x > 1.0f ? 1.0f : (x < -1.0f ? -1.0f : x);
        int16_t s = (int16_t)lrintf(x * 32767.0f);
        fwrite(&s, 2, 1, f);
    }
    fclose(f);
    return 0;
}
