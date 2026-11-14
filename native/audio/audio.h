/* Native audio engine of the ALBW port: a host voice mixer that replaces what the 3DS DSP did for
 * nn::snd (see native/sdk/snd.c, native/sdk/snd.md). Nothing here emulates the DSP: this is a
 * plain software mixer with the same *meaning* as the nn::snd voice model.
 *
 *  - 24 voices (the 3DS voice count). A voice plays a queue of wave buffers (PCM8, PCM16 or
 *    DSP-ADPCM sample data in game memory), with sample-rate conversion (rate * pitch), optional
 *    one-pole and biquad filters, a volume, and a 12-gain mix (main / aux A / aux B x 4 channels).
 *  - The mixer renders one "sound frame" at a time: 160 samples at 32728 Hz (the 3DS DSP rate,
 *    exactly 268111856 / 8192 = 32728.498 Hz; 4.8887 ms per frame), stereo float output.
 *  - Aux buses A/B: voices send to them; each enabled bus runs a native effect (delay / reverb)
 *    and/or a user callback on 4 x int32 channel buffers, then returns into the main mix.
 *  - Wave buffer status changes are reported through a callback (the nn::snd layer writes the
 *    game-visible status byte the game polls).
 *
 * Thread safety: every function takes the engine's recursive mutex. aud_mix_frame() releases it
 * while user aux callbacks run; those hold a separate aux mutex instead (never both at once in
 * the mixer, aux before engine elsewhere), so a callback can call the API.
 * 64-bit clean: pointers are native pointers; the engine never stores them in 32-bit fields. */
#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define AUD_RATE        32728       /* integer DSP rate used for the host stream */
#define AUD_RATE_EXACT  32728.498f  /* 268111856 / 8192 */
#define AUD_FRAME       160         /* samples per sound frame */
#define AUD_VOICES      24
#define AUD_AUX_BUSES   2
#define AUD_QUEUE_MAX   64          /* wave buffers queued per voice */

enum { AUD_FMT_PCM8 = 0, AUD_FMT_PCM16 = 1, AUD_FMT_ADPCM = 2 };
enum { AUD_WB_FREE = 0, AUD_WB_WAIT = 1, AUD_WB_PLAY = 2, AUD_WB_DONE = 3 };
enum { AUD_STATE_PLAY = 0, AUD_STATE_STOP = 1, AUD_STATE_PAUSE = 2 };
enum { AUD_INTERP_POLYPHASE = 0, AUD_INTERP_LINEAR = 1, AUD_INTERP_NONE = 2 };
/* mix gain index: [bus * 4 + channel], bus 0 main, 1 aux A, 2 aux B; channel FL, FR, RL, RR */
enum { AUD_CH_FL = 0, AUD_CH_FR = 1, AUD_CH_RL = 2, AUD_CH_RR = 3 };

typedef struct {
    uint16_t pred_scale;   /* header byte of the current frame (predictor << 4 | scale) */
    int16_t yn1, yn2;      /* last two decoded samples */
} AudAdpcmContext;

/* one queued wave buffer (copied into the engine) */
typedef struct {
    const void *data;      /* sample data (frame-aligned for ADPCM) */
    uint32_t length;       /* in samples */
    bool loop;
    bool has_ctx;          /* ADPCM: reset the decoder state from ctx when the buffer starts/loops */
    AudAdpcmContext ctx;
    void *user;            /* reported back in the status callback (the game's WaveBuffer) */
} AudWaveBuf;

typedef void (*AudStatusFn)(void *user, int status);
/* aux user callback: 4 channel buffers of n int32 samples (16-bit magnitude), processed in place;
 * user/user2 as registered */
typedef void (*AudAuxFn)(int bus, int32_t *ch[4], int n, void *user, uintptr_t user2);

/* ------------------------------------------------------------------ native effects (fx.c) */
enum { AUD_FX_NONE = 0, AUD_FX_DELAY = 1, AUD_FX_REVERB = 2 };
typedef struct {
    int type;
    /* delay */
    uint32_t delay_ms;
    float feedback, damping;
    bool surround;
    /* reverb (nn::snd FxReverb parameter meaning) */
    uint32_t early_ms, fused_ms, predelay_ms;
    float coloration, rv_damping, early_gain, fused_gain;
    uint32_t filter_size[3];   /* comb lengths in samples (FilterSize) */
    bool high_pass;
} AudFxConfig;

typedef struct AudFx AudFx;
AudFx *aud_fx_create(const AudFxConfig *cfg);
void aud_fx_destroy(AudFx *fx);
void aud_fx_process(AudFx *fx, int32_t *ch[4], int n);

/* ------------------------------------------------------------------ engine (mixer.c) */
void aud_init(void);
void aud_lock(void);
void aud_unlock(void);
void aud_set_status_callback(AudStatusFn fn);

void aud_voice_reset(int v);                         /* defaults, queue cleared (no status) */
void aud_voice_set_state(int v, int state);          /* STOP: queue -> DONE, position reset */
int aud_voice_get_state(int v);
void aud_voice_set_format(int v, int fmt);
void aud_voice_set_channels(int v, int n);
void aud_voice_set_rate(int v, int32_t hz);
void aud_voice_set_pitch(int v, float pitch);
void aud_voice_set_volume(int v, float vol);
void aud_voice_set_mix(int v, const float mix[12]);
void aud_voice_set_interp(int v, int type);
void aud_voice_set_adpcm_coefs(int v, const int16_t coefs[16]);
void aud_voice_set_mono_filter(int v, bool enable, uint32_t cutoff_hz);
void aud_voice_set_biquad(int v, bool enable, const int16_t coef[5]); /* b0 b1 b2 a1 a2, Q14 */
int aud_voice_append(int v, const AudWaveBuf *wb);   /* 0 ok, -1 queue full */
uint32_t aud_voice_play_position(int v);             /* sample index in the current buffer */
bool aud_voice_busy(int v);                          /* has a buffer queued/playing */

void aud_set_master_volume(float vol);
float aud_get_master_volume(void);
void aud_set_aux_return(int bus, float vol);
float aud_get_aux_return(int bus);
void aud_set_aux_callback(int bus, AudAuxFn fn, void *user, uintptr_t user2);
void aud_get_aux_callback(int bus, void **user, uintptr_t *user2);
/* slot 0 = the bus's CPU effect (SetEffect), slot 1 = the bus's "DSP" effect; cfg NULL = remove */
void aud_set_aux_fx(int bus, int slot, const AudFxConfig *cfg);

/* render one sound frame: out = AUD_FRAME interleaved stereo floats in [-1, 1] */
void aud_mix_frame(float *out);
uint64_t aud_frame_count(void);

/* ------------------------------------------------------------------ host output (output.c) */
/* Opens the SDL3 playback stream (32728 Hz stereo float, resampled by SDL). env ALBW_AUDIO=0
 * disables the device (frames are then paced by the wall clock). Returns true if a device is open. */
bool aud_out_open(void);
void aud_out_close(void);
/* blocks until the host needs another sound frame (keeps ~latency queued) */
void aud_out_wait(void);
void aud_out_push(const float *frame, int samples);
/* env ALBW_AUDIO_WAV=path: every pushed frame is also written to that WAV (32728 Hz) */

/* ------------------------------------------------------------------ helpers */
/* write a 16-bit PCM WAV from interleaved stereo floats */
int aud_write_wav(const char *path, const float *stereo, size_t frames, int rate);
