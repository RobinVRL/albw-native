/* Native nn::snd layer (area "snd/dsp" of native/SDK_AREAS.md): the nn::snd API the game's
 * sound engine (nw::snd, USA 0x00408000-0x0041F000) calls, reimplemented on the host voice
 * mixer of native/audio/ (SDL3 output). Design, API table and evidence: native/sdk/snd.md.
 *
 * No emulation: the DSP, its firmware, pipes, interrupts and shared memory do not exist here.
 * Every function below is a STRONG func_<USA ADDR> that replaces the weak decompiled one by what
 * the API means on a PC:
 *   - nn::snd::Voice objects are native (24 of them, the 3DS voice count). AllocVoice returns a
 *     pointer to one; the game only passes it back. Voice parameters drive native/audio/mixer.c.
 *   - nn::snd::WaveBuffer objects stay in game memory with their 32-bit layout (0x18 bytes);
 *     the mixer reads the sample data they point to and this layer writes the status byte
 *     (+0x11: 1 wait, 2 play, 3 done) that nw::snd polls.
 *   - The DSP frame (WaitForDspSync -> user frame callback -> SendParameterToDsp) is a native
 *     sound thread: wait until the host audio queue needs a frame, run the game's callbacks,
 *     mix 160 samples at 32728 Hz, push them to SDL3.
 *   - Aux buses: game aux callbacks get the bus samples (AuxBusData, 4 x int32 buffers of 160
 *     samples); FxDelay/FxReverb (CPU and "DSP" variants) become native effects.
 *
 * Game-memory objects keep their 32-bit layout (64-bit rule): pointer fields read from game
 * structures are 32-bit values turned into pointers with GPTR(); nothing native is stored in a
 * 4-byte game field except values that were game pointers to begin with (aux callback get).
 *
 * Supersedes the silent stopgap native/sdk/snd_silent.c (its nn::snd part): see snd.md. */
#define ALBW_REAL_SND 1
#define _GNU_SOURCE
#include <math.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../audio/audio.h"

#define GPTR(x) ((void *)(uintptr_t)(x))
#define GADDR(p) ((uint32_t)(uintptr_t)(p))

#define SND_RESULT_ALREADY_INITIALIZED 0x0820ABF9u   /* 003DBB7C's "already initialised" */
#define SND_PRIORITY_MAX 0x7FFF

/* ALBW_SND_TRACE=1: voice allocation, play / stop and wave buffers on stderr (debug) */
extern long g_plat_frames;
static int snd_trace(void) {
    static int t = -1;
    if (t < 0) { const char *e = getenv("ALBW_SND_TRACE"); t = e && *e && *e != '0'; }
    return t;
}

/* ------------------------------------------------------------------ game-memory structures */

/* nn::snd::WaveBuffer (game memory, 0x18 bytes; layout from AppendWaveBuffer 003E14A8 and
 * InitializeWaveBuffer 003DE244) */
typedef struct {
    uint32_t bufferAddress;   /* +0x00 const void *: sample data */
    int32_t sampleLength;     /* +0x04 samples */
    uint32_t pAdpcmContext;   /* +0x08 const AdpcmContext * (NULL: continue the decoder state) */
    uint32_t userParam;       /* +0x0C */
    uint8_t loopFlag;         /* +0x10 */
    uint8_t status;           /* +0x11 0 free, 1 wait, 2 play, 3 done */
    uint16_t bufferId;        /* +0x12 */
    uint32_t next;            /* +0x14 library-internal link (written 0) */
} SndWaveBuffer;
_Static_assert(sizeof(SndWaveBuffer) == 0x18, "WaveBuffer layout");

/* nn::snd "DSP" effect object (FxDelay / FxReverb run by the DSP; 003DB6FC, 003DB804..) */
typedef struct {
    uint32_t buffer;     /* +0x00 work buffer (virtual) */
    uint32_t phys;       /* +0x04 work buffer (physical on the 3DS; = buffer natively) */
    uint32_t size;       /* +0x08 */
    uint8_t assigned;    /* +0x0C */
    int8_t bus;          /* +0x0D aux bus, -1 = none */
    uint8_t enabled;     /* +0x0E */
    uint8_t frame;       /* +0x0F frame counter when disabled */
} SndDspFx;

/* ------------------------------------------------------------------ native voice object */
typedef void (*SndDropFn)(void *voice, uintptr_t arg);
typedef void (*SndAuxFn)(void *aux_bus_data, int32_t sample_length, uintptr_t arg);
typedef void (*SndThreadFn)(void *arg);

typedef struct SndVoice {
    /* the first bytes mirror nn::snd::Voice's public fields, in case game code reads them */
    uint32_t index;      /* +0x00 voice number */
    uint8_t state;       /* +0x04 0 play, 1 stop, 2 pause */
    uint8_t interp;      /* +0x05 interpolation type */
    uint8_t flags6;      /* +0x06 bit4 (003E15B0), bit6 (003E1600) recorded */
    uint8_t filter;      /* +0x07 bit0 mono filter, bit1 biquad filter */
    /* native */
    bool allocated;
    int32_t priority;
    uint64_t seq;
    SndDropFn drop;
    uintptr_t drop_arg;
    uint16_t next_id;
    uint32_t mono_cutoff;
    int16_t biquad[5];
} SndVoice;

static SndVoice g_voice[AUD_VOICES];
static uint64_t g_seq;
static bool g_initialized;
static pthread_once_t g_once = PTHREAD_ONCE_INIT;
static int g_output_mode = 1;          /* stereo */
static float g_surround_depth = 1.0f;  /* 003DDB5C, recorded */
static int32_t g_mode_27;              /* 003DE2D0, recorded */


/* effects per bus: slot 0 = CPU effect (SetEffect), slot 1 = "DSP" effect */
typedef struct {
    int type;          /* AUD_FX_DELAY / AUD_FX_REVERB */
    uint8_t *obj;      /* game object */
} CpuFx;
static CpuFx g_cpufx[AUD_AUX_BUSES];
typedef struct {
    SndDspFx *obj;
    int type;
    bool have_cfg;
    AudFxConfig cfg;
} DspFxSlot;
static DspFxSlot g_dspfx[AUD_AUX_BUSES];

static void wb_status(void *user, int status) {
    SndWaveBuffer *wb = user;
    if (wb) __atomic_store_n(&wb->status, (uint8_t)status, __ATOMIC_RELEASE);
}

extern void albw_ss_add_range(const char *name, void *p, size_t n) __attribute__((weak));
extern void albw_ss_host_enter(void) __attribute__((weak));
extern void albw_ss_host_leave(void) __attribute__((weak));

static void init_once(void) {
    aud_init();
    if (albw_ss_add_range) {   /* save states: the nn::snd voices (savestate.c) */
        albw_ss_add_range("snd voices", g_voice, sizeof g_voice);
        albw_ss_add_range("snd seq", &g_seq, sizeof g_seq);
    }
    aud_set_status_callback(wb_status);
    for (int i = 0; i < AUD_VOICES; i++) {
        memset(&g_voice[i], 0, sizeof g_voice[i]);
        g_voice[i].index = (uint32_t)i;
        g_voice[i].state = AUD_STATE_STOP;
    }
}
static void snd_init(void) { pthread_once(&g_once, init_once); }

static int vidx(const void *v) {
    const SndVoice *p = v;
    if (!p || p < g_voice || p >= g_voice + AUD_VOICES) return -1;
    return (int)(p - g_voice);
}
static bool valid_bus(int32_t bus) { return bus >= 0 && bus < AUD_AUX_BUSES; }

static uint64_t now_ticks(void) {   /* 3DS system tick units (268111856 Hz) */
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 268111856ull + (uint64_t)ts.tv_nsec * 268111856ull / 1000000000ull;
}

/* ================================================================== initialisation */

/* USA 003DE268 (EU 003DE248) nn::snd::Initialize() as the game calls it: dsp::Initialize
 * (003D2810), dsp LoadDefaultComponent (003D2A48), the library init 003DBB7C(session), then
 * 003DCBEC(3) (an output-buffer count, clamped 2..3). Native: no DSP; the native library is
 * initialised. Returns 0. Confidence: high (meaning), the original returns the tail call's r0. */
uint32_t func_003DE268(void) {
    snd_init();
    g_initialized = true;
    return 0;
}

/* USA 003DBB7C (EU 003DBB5C) nn::snd library init (after the DSP component load): already
 * initialised -> 0x0820ABF9; registers the DSP interrupts/semaphore (003DE544), reads the
 * headphone byte (0x1FF810C0), initialises the parameter block 0x007A06A0, the voice manager
 * 0x007A1CF0 and the voice table, registers the DSP callbacks (003D2C00). Native: initialise
 * the native library. Confidence: high. */
uint32_t func_003DBB7C(void) {
    snd_init();
    if (g_initialized) return SND_RESULT_ALREADY_INITIALIZED;
    g_initialized = true;
    return 0;
}

/* ================================================================== global parameters */

/* USA 003DD770 (EU 003DD750) nn::snd::SetMasterVolume(f32) (0x007A06A0+4, times +8, sent to
 * the DSP). Called by nw::snd HardwareManager::Initialize 00418020. Confidence: high. */
void func_003DD770(float volume) {
    snd_init();
    aud_set_master_volume(volume);
}

/* USA 003DDB5C (EU 003DDB3C) global float parameter in [0,1] stored as u16 x 32767 at
 * 0x007A06A0+0x28 and sent to the DSP (003DEC28); the game sets 1.0 at boot (00321368).
 * Surround depth by its placement next to the output-mode API. Native: stereo output, recorded
 * only. Confidence: medium (meaning), high (no audible effect in stereo). */
void func_003DDB5C(float value) {
    if (value < 0.0f) value = 0.0f;
    if (value > 1.0f) value = 1.0f;
    g_surround_depth = value;
}

/* USA 003DE2D0 (EU 003DE2B0) global mode accepting only 0/1 (0x007A06A0+0x27 -> 003DF844);
 * the game sets 0 at boot (00321368). Surround speaker position / clipping mode. Native:
 * recorded only. Confidence: medium. */
void func_003DE2D0(int32_t mode) {
    if (mode == 0 || mode == 1) g_mode_27 = mode;
}

/* USA 003DE120 (EU 003DE100) nn::snd::GetSoundOutputMode(): 0 mono, 1 stereo, 2 surround
 * (0x007A06A0+3). The game passes it to nw::snd (00321368, 00418020). Native: stereo.
 * Confidence: high. */
int32_t func_003DE120(void) { return g_output_mode; }

/* native query of the recorded global parameters (debug tools; not a game function) */
void albw_snd_query(float *surround_depth, int32_t *mode_27) {
    if (surround_depth) *surround_depth = g_surround_depth;
    if (mode_27) *mode_27 = g_mode_27;
}

/* USA 003DE188 (EU 003DE168) nn::snd::SetAuxReturnVolume(AuxBusId bus, f32 volume).
 * Confidence: high (0x007A06A0+0xC[bus] -> DSP 003DEDCC; nw::snd 00418648 fades it). */
void func_003DE188(int32_t bus, float volume) {
    snd_init();
    if (valid_bus(bus)) aud_set_aux_return(bus, volume);
}

/* ------------------------------------------------------------------ aux callbacks */
typedef struct {
    int32_t *front_left, *front_right, *rear_left, *rear_right;
} SndAuxBusData;

static void aux_trampoline(int bus, int32_t *ch[4], int n, void *user, uintptr_t arg) {
    (void)bus;
    SndAuxFn fn = (SndAuxFn)user;   /* the game's callback, registered with its argument */
    SndAuxBusData d = {ch[0], ch[1], ch[2], ch[3]};
    if (fn) fn(&d, n, arg);
}

/* USA 003DE198 (EU 003DE178) nn::snd::RegisterAuxCallback(AuxBusId bus, AuxCallback cb,
 * uptr arg) (0x007A06A0+0x14/+0x1C[bus]; the aux thread 003DE1B0 -> 003DDBD0 calls
 * cb(&AuxBusData{fl, fl+0x280, +0x500, +0x780}, 160, arg) every frame). cb NULL = none.
 * Confidence: high. */
void func_003DE198(int32_t bus, SndAuxFn cb, uintptr_t arg) {
    snd_init();
    if (!valid_bus(bus)) return;
    aud_set_aux_callback(bus, cb ? aux_trampoline : NULL, (void *)cb, arg);
}

/* USA 003DD48C (EU 003DD46C) nn::snd::GetAuxCallback(bus, AuxCallback *cb, uptr *arg). The game
 * stores both in 4-byte fields (HardwareManager +0x6C/+0x274) and re-registers them later.
 * Confidence: high. */
void func_003DD48C(int32_t bus, uint32_t *cb, uint32_t *arg) {
    snd_init();
    if (!valid_bus(bus)) return;
    void *fn = NULL;
    uintptr_t a = 0;
    aud_get_aux_callback(bus, &fn, &a);
    if (cb) *cb = GADDR(fn);
    if (arg) *arg = (uint32_t)a;
}

/* USA 003DD77C (EU 003DD75C) nn::snd::ClearAuxCallback(bus). Confidence: high. */
void func_003DD77C(int32_t bus) { func_003DE198(bus, NULL, 0); }

/* ================================================================== effects */

static const uint32_t k_default_filter_size[3] = {0xBE0, 0xE60, 0x820};  /* data 0x00716150 */

static float f32_at(const uint8_t *p, int off) {
    float f;
    memcpy(&f, p + off, 4);
    return f;
}
static uint32_t u32_at(const uint8_t *p, int off) {
    uint32_t v;
    memcpy(&v, p + off, 4);
    return v;
}
static void put_u32(uint8_t *p, int off, uint32_t v) { memcpy(p + off, &v, 4); }
static bool unit_range(float f) { return f >= 0.0f && f <= 1.0f; }

/* delay frames from milliseconds, exactly as the SDK: (ms * 1000 * 0xD6853CC1) >> 44, min 1 */
static uint32_t delay_frames(uint32_t ms) {
    uint32_t f = (uint32_t)(((uint64_t)(uint32_t)(ms * 1000u) * 0xD6853CC1ull) >> 44);
    return f ? f : 1;
}

/* CPU FxDelay object (nn::snd::FxDelay, ctor 003E00A8): +4 delayTime ms, +8 feedback, +0xC
 * damping, +0x10 enableSurround, +0x3C frames, +0x44/48/4C fixed-point gains, +0x50 max delay,
 * +0x54 surround allocated, +0x55 channels, +0x56 initialised (attached) */
static AudFxConfig cfg_from_cpu_delay(const uint8_t *o) {
    AudFxConfig c = {0};
    c.type = AUD_FX_DELAY;
    c.delay_ms = u32_at(o, 4);
    c.feedback = f32_at(o, 8);
    c.damping = f32_at(o, 0xC);
    c.surround = o[0x10] != 0;
    return c;
}

/* CPU FxReverb object (ctor 003E099C): +4 early ms, +8 fused ms, +0xC pre-delay ms, +0x10
 * coloration, +0x14 damping, +0x18 FilterSize *, +0x1C early gain, +0x20 fused gain, +0x24
 * high-pass flag, +0x30..0x38 FilterSize copy, +0x104 initialised (attached) */
static AudFxConfig cfg_from_cpu_reverb(const uint8_t *o) {
    AudFxConfig c = {0};
    c.type = AUD_FX_REVERB;
    c.early_ms = u32_at(o, 4);
    c.fused_ms = u32_at(o, 8);
    c.predelay_ms = u32_at(o, 0xC);
    c.coloration = f32_at(o, 0x10);
    c.rv_damping = f32_at(o, 0x14);
    for (int i = 0; i < 3; i++) {
        uint32_t s = u32_at(o, 0x30 + 4 * i);
        c.filter_size[i] = s ? s : k_default_filter_size[i];
    }
    c.early_gain = f32_at(o, 0x1C);
    c.fused_gain = f32_at(o, 0x20);
    c.high_pass = o[0x24] != 0;
    return c;
}

static void cpu_fx_finalize(int bus) {
    CpuFx *s = &g_cpufx[bus];
    if (s->obj) {
        uint8_t *o = s->obj;
        if (s->type == AUD_FX_DELAY) {   /* 003DFF20 */
            if (o[0x56]) {
                o[0x56] = 0;
                put_u32(o, 4, 0);
                put_u32(o, 8, 0);
                put_u32(o, 0xC, 0);
                put_u32(o, 0x10, 0);
                for (int i = 0; i < o[0x55] && i < 4; i++) put_u32(o, 0x1C + 4 * i, 0);
            }
        } else if (o[0x104]) {           /* 003E07DC */
            o[0x104] = 0;
            static const int offs[] = {0x3C, 0x4C, 0x5C, 0x60, 0x7C, 0x40, 0x50, 0x64, 0x68, 0x80};
            for (size_t i = 0; i < sizeof offs / sizeof offs[0]; i++) put_u32(o, offs[i], 0);
        }
    }
    s->obj = NULL;
    s->type = 0;
    aud_set_aux_fx(bus, 0, NULL);
}

/* USA 003DBC38 (EU 003DBC18) nn::snd::ClearEffect(bus): finalises the bus's CPU effect
 * (003DC9D0: 003DFF20 / 003E07DC) and disables the bus for it. Confidence: high. */
void func_003DBC38(int32_t bus) {
    snd_init();
    if (!valid_bus(bus)) return;
    aud_lock();
    cpu_fx_finalize(bus);
    aud_unlock();
}

/* USA 003E0B00 (EU 003E0AE0) nn::snd::SetEffect(bus, FxDelay *) (003DCC78: clears the bus,
 * initialises the effect 003DFD30, enables the bus). Returns false for NULL. Native: the delay
 * runs in the mixer with the object's parameters. Confidence: high. */
uint32_t func_003E0B00(int32_t bus, uint8_t *fx) {
    snd_init();
    if (!fx || !valid_bus(bus)) return 0;
    aud_lock();
    cpu_fx_finalize(bus);
    if (!fx[0x56]) {             /* 003DFD30: remember the limits SetParameters checks */
        memcpy(fx + 0x50, fx + 4, 4);
        fx[0x54] = fx[0x10];
        put_u32(fx, 0x40, 0);
        fx[0x56] = 1;
    }
    g_cpufx[bus].obj = fx;
    g_cpufx[bus].type = AUD_FX_DELAY;
    AudFxConfig c = cfg_from_cpu_delay(fx);
    aud_set_aux_fx(bus, 0, &c);
    aud_unlock();
    return 1;
}

/* USA 003E0B14 (EU 003E0AF4) nn::snd::SetEffect(bus, FxReverb *) (003DCD1C, init 003E01C4).
 * Confidence: high. */
uint32_t func_003E0B14(int32_t bus, uint8_t *fx) {
    snd_init();
    if (!fx || !valid_bus(bus)) return 0;
    aud_lock();
    cpu_fx_finalize(bus);
    /* 003E01C4: the limits SetParameters checks */
    memcpy(fx + 0xF0, fx + 4, 4);
    memcpy(fx + 0xF4, fx + 0xC, 4);
    memcpy(fx + 0xF8, fx + 0x30, 12);
    fx[0x104] = 1;
    g_cpufx[bus].obj = fx;
    g_cpufx[bus].type = AUD_FX_REVERB;
    AudFxConfig c = cfg_from_cpu_reverb(fx);
    aud_set_aux_fx(bus, 0, &c);
    aud_unlock();
    return 1;
}

static void cpu_fx_reconfigure(const uint8_t *fx) {
    for (int b = 0; b < AUD_AUX_BUSES; b++) {
        if (g_cpufx[b].obj != fx) continue;
        AudFxConfig c = g_cpufx[b].type == AUD_FX_DELAY ? cfg_from_cpu_delay(fx) : cfg_from_cpu_reverb(fx);
        aud_set_aux_fx(b, 0, &c);
    }
}

/* USA 003DFF78 (EU 003DFF58) nn::snd::FxDelay::SetParameters(const Parameter &p): p = {u32
 * delayTime ms, f32 feedback [0,1], f32 damping [0,1], bool enableSurround}. Exact port of the
 * EU code (checks, fixed-point copies at +0x3C..+0x4C, parameter copy at +4..+0x10); a live
 * effect is reconfigured. Pure CPU in the original; replaced so the native effect follows.
 * Confidence: high. */
uint32_t func_003DFF78(uint8_t *fx, const uint8_t *p) {
    float fb = f32_at(p, 4), damp = f32_at(p, 8);
    if (!unit_range(damp) || !unit_range(fb)) return 0;
    uint32_t ms = u32_at(p, 0);
    if (fx[0x56] == 1) {
        if (ms > u32_at(fx, 0x50)) return 0;
        if (fx[0x54] == 0 && p[0xC] == 1) return 0;
    }
    aud_lock();
    put_u32(fx, 0x3C, delay_frames(ms));
    fx[0x55] = p[0xC] ? 4 : 2;
    put_u32(fx, 0x44, (uint32_t)(int32_t)(fb * 128.0f));
    if (damp > 0.95f) damp = 0.95f;
    put_u32(fx, 0x48, (uint32_t)(int32_t)((1.0f - damp) * 128.0f));
    put_u32(fx, 0x4C, (uint32_t)(int32_t)(damp * 128.0f));
    memcpy(fx + 4, p, 12);
    put_u32(fx, 0x10, u32_at(p, 0xC));
    cpu_fx_reconfigure(fx);
    aud_unlock();
    return 1;
}

/* USA 003E0828 (EU 003E0808) nn::snd::FxReverb::SetParameters(const Parameter &p): p = {u32
 * earlyReflectionTime, u32 fusedTime, u32 preDelayTime, f32 coloration, f32 damping,
 * FilterSize *filterSize, f32 earlyGain, f32 fusedGain, bool useHighPassFilter}. Port of the
 * checks and copies (the original then re-lays its CPU work buffer, 003E0500, which has no
 * native use). Confidence: high. */
uint32_t func_003E0828(uint8_t *fx, const uint8_t *p) {
    static const int unit[] = {0xC, 0x10, 0x18, 0x1C};
    for (int i = 0; i < 4; i++)
        if (!unit_range(f32_at(p, unit[i]))) return 0;
    const uint8_t *fs = GPTR(u32_at(p, 0x14));
    if (fs && (!u32_at(fs, 0) || !u32_at(fs, 4) || !u32_at(fs, 8))) return 0;
    if (fx[0x104] == 1) {
        if (u32_at(p, 0) > u32_at(fx, 0xF0) || u32_at(p, 8) > u32_at(fx, 0xF4)) return 0;
        if (fs && (u32_at(fs, 0) > u32_at(fx, 0xF8) || u32_at(fs, 4) > u32_at(fx, 0xFC) ||
                   u32_at(fs, 8) > u32_at(fx, 0x100)))
            return 0;
    }
    aud_lock();
    memcpy(fx + 4, p, 20);                      /* early, fused, pre, coloration, damping */
    put_u32(fx, 0x18, GADDR(fs));
    memcpy(fx + 0x1C, p + 0x18, 8);             /* early gain, fused gain */
    put_u32(fx, 0x24, u32_at(p, 0x20));
    if (fs) {
        memcpy(fx + 0x30, fs, 12);
        put_u32(fx, 0x18, GADDR(fx + 0x30));
    }
    cpu_fx_reconfigure(fx);
    aud_unlock();
    return 1;
}

/* ------------------------------------------------------------------ "DSP" effects
 * nn::snd effects the 3DS ran on the DSP (type 0 delay at 003DB6xx-003DBB, type 1 reverb at
 * 003DBC-003DC2). Object: SndDspFx; the nw::snd wrappers hold it at +4. Native: same object
 * bookkeeping, the effect itself runs in the mixer (bus slot 1). */

static uint32_t dsp_assign(SndDspFx *fx, void *buf, uint32_t size) {
    if (fx->assigned || !buf || !size || fx->buffer) return 0;
    fx->buffer = GADDR(buf);   /* the 3DS also checked the FCRAM range and stored the PA */
    fx->phys = GADDR(buf);
    fx->size = size;
    fx->assigned = 1;
    return 1;
}

/* USA 003DB6FC (EU 003DB6DC) DSP FxDelay AssignWorkBuffer(buf, size) and its vtable thunk
 * USA 003DB6F4 (wrapper -> object at +4). Confidence: high. */
uint32_t func_003DB6FC(SndDspFx *fx, void *buf, uint32_t size) { return dsp_assign(fx, buf, size); }
uint32_t func_003DB6F4(uint8_t *wrapper, void *buf, uint32_t size) {
    return dsp_assign(GPTR(u32_at(wrapper, 4)), buf, size);
}
/* USA 003DBC50 / 003DBC48 (EU 003DBC30 / 003DBC28): the same for the DSP FxReverb. */
uint32_t func_003DBC50(SndDspFx *fx, void *buf, uint32_t size) { return dsp_assign(fx, buf, size); }
uint32_t func_003DBC48(uint8_t *wrapper, void *buf, uint32_t size) {
    return dsp_assign(GPTR(u32_at(wrapper, 4)), buf, size);
}

/* USA 003DB7C4 (EU 003DB7A4) DSP FxDelay GetRequiredMemorySize(const Parameter &p) =
 * (surround ? 4 : 2) * frames(p.delayTime) * 640, and its thunk USA 003DB7B8 (wrapper: [[w+4]
 * +0x10] is the parameter). Pure; replaced because the decompiled thunks drop arguments.
 * Confidence: high (exact port). */
uint32_t func_003DB7C4(const uint8_t *p) {
    return (p[0xC] ? 4u : 2u) * delay_frames(u32_at(p, 0)) * 640u;
}
uint32_t func_003DB7B8(const uint8_t *wrapper) {
    const uint8_t *inner = GPTR(u32_at(wrapper, 4));
    return func_003DB7C4(GPTR(u32_at(inner, 0x10)));
}
/* USA 003DBD18 / 003DBD0C (EU 003DBCF8 / 003DBCEC) DSP FxReverb GetRequiredMemorySize:
 * (fs0 + fs1 + fs2 + (frames(early) + frames(preDelay)) * 160) * 8, FilterSize default
 * {0xBE0, 0xE60, 0x820}. Confidence: high (exact port). */
uint32_t func_003DBD18(const uint8_t *p) {
    const uint8_t *fs = GPTR(u32_at(p, 0x14));
    uint32_t s0 = fs ? u32_at(fs, 0) : k_default_filter_size[0];
    uint32_t s1 = fs ? u32_at(fs, 4) : k_default_filter_size[1];
    uint32_t s2 = fs ? u32_at(fs, 8) : k_default_filter_size[2];
    return (s0 + s1 + s2 + (delay_frames(u32_at(p, 0)) + delay_frames(u32_at(p, 8))) * 160u) * 8u;
}
uint32_t func_003DBD0C(const uint8_t *wrapper) {
    const uint8_t *inner = GPTR(u32_at(wrapper, 4));
    return func_003DBD18(GPTR(u32_at(inner, 0x10)));
}

static uint32_t dsp_attach(SndDspFx *fx, uint32_t bus, int type) {
    if (!fx || !fx->assigned || fx->bus != -1 || bus >= AUD_AUX_BUSES) return 0;
    aud_lock();
    uint8_t ok = 0;
    if (!g_dspfx[bus].obj) {   /* 003DC364: one DSP effect per bus */
        g_dspfx[bus].obj = fx;
        g_dspfx[bus].type = type;
        g_dspfx[bus].have_cfg = false;
        fx->bus = (int8_t)bus;
        ok = 1;
    }
    aud_unlock();
    return ok;
}

static void dsp_apply(int bus) {
    DspFxSlot *s = &g_dspfx[bus];
    bool on = s->obj && s->obj->enabled && s->have_cfg;
    aud_set_aux_fx(bus, 1, on ? &s->cfg : NULL);
}

static uint32_t dsp_enable(SndDspFx *fx, uint32_t enable) {
    if (!fx || (uint8_t)fx->bus >= AUD_AUX_BUSES || !fx->buffer || !fx->size) return 0;
    aud_lock();
    fx->enabled = enable ? 1 : 0;
    if (!fx->enabled) fx->frame = (uint8_t)aud_frame_count();
    if (g_dspfx[(int)fx->bus].obj == fx) dsp_apply(fx->bus);
    aud_unlock();
    return 1;
}

static void dsp_finalize(SndDspFx *fx) {
    if (!fx || !fx->assigned) return;
    aud_lock();
    if ((uint8_t)fx->bus < AUD_AUX_BUSES) {
        int bus = fx->bus;
        fx->enabled = 0;
        fx->frame = (uint8_t)aud_frame_count();
        if (g_dspfx[bus].obj == fx) {
            g_dspfx[bus].obj = NULL;
            g_dspfx[bus].have_cfg = false;
            aud_set_aux_fx(bus, 1, NULL);
        }
        fx->bus = -1;
    }
    fx->buffer = fx->phys = fx->size = 0;
    fx->assigned = 0;
    aud_unlock();
}

/* USA 003DB804 / 003DBD8C (EU 003DB7E4 / 003DBD6C) DSP FxDelay / FxReverb: attach to an aux bus
 * (needs an assigned work buffer, bus 0/1, one DSP effect per bus). Confidence: high. */
uint32_t func_003DB804(SndDspFx *fx, uint32_t bus) { return dsp_attach(fx, bus, AUD_FX_DELAY); }
uint32_t func_003DBD8C(SndDspFx *fx, uint32_t bus) { return dsp_attach(fx, bus, AUD_FX_REVERB); }

/* USA 003DB894 / 003DBDE4 (EU 003DB874 / 003DBDC4) enable / disable the attached DSP effect
 * (DSP command 1). Returns non-zero on success. Confidence: high. */
uint32_t func_003DB894(SndDspFx *fx, uint32_t enable) { return dsp_enable(fx, enable); }
uint32_t func_003DBDE4(SndDspFx *fx, uint32_t enable) { return dsp_enable(fx, enable); }

/* USA 003DB920 / 003DBE70 (EU 003DB900 / 003DBE50) finalise: disable, detach from the bus,
 * release the work buffer. Confidence: high. */
void func_003DB920(SndDspFx *fx) { dsp_finalize(fx); }
void func_003DBE70(SndDspFx *fx) { dsp_finalize(fx); }

/* USA 003DB770 / 003DBCC4 (EU 003DB750 / 003DBCA4) "still in use by the DSP": enabled, or
 * disabled less than 3 DSP frames ago. Natively the mixer drops the effect under its lock, so
 * a disabled effect is never in use. Confidence: high. */
uint32_t func_003DB770(const SndDspFx *fx) { return fx && fx->enabled; }
uint32_t func_003DBCC4(const SndDspFx *fx) { return fx && fx->enabled; }

/* USA 003DB9EC (EU 003DB9CC) DSP FxDelay SetParameters(p = {delayTime ms, feedback, damping,
 * enableSurround}): attached, buffer assigned, gains in [0,1], buffer large enough. */
uint32_t func_003DB9EC(SndDspFx *fx, const uint8_t *p) {
    if (!fx || (uint8_t)fx->bus >= AUD_AUX_BUSES || !fx->buffer || !fx->size || !p) return 0;
    float fb = f32_at(p, 4), damp = f32_at(p, 8);
    if (!unit_range(fb) || !unit_range(damp)) return 0;
    if (func_003DB7C4(p) > fx->size) return 0;
    AudFxConfig c = {0};
    c.type = AUD_FX_DELAY;
    c.delay_ms = u32_at(p, 0);
    c.feedback = fb;
    c.damping = damp;
    c.surround = p[0xC] != 0;
    aud_lock();
    if (g_dspfx[(int)fx->bus].obj == fx) {
        g_dspfx[(int)fx->bus].cfg = c;
        g_dspfx[(int)fx->bus].have_cfg = true;
        dsp_apply(fx->bus);
    }
    aud_unlock();
    return 1;
}

/* USA 003DBF3C (EU 003DBF1C) DSP FxReverb SetParameters(p = {early ms, fused ms, pre-delay ms,
 * coloration, damping, FilterSize *, early gain, fused gain, high-pass}). Confidence: high
 * (parameter layout), the DSP algorithm itself is approximated in native/audio/fx.c. */
uint32_t func_003DBF3C(SndDspFx *fx, const uint8_t *p) {
    if (!fx || (uint8_t)fx->bus >= AUD_AUX_BUSES || !fx->buffer || !fx->size || !p) return 0;
    static const int unit[] = {0xC, 0x10, 0x18, 0x1C};
    for (int i = 0; i < 4; i++)
        if (!unit_range(f32_at(p, unit[i]))) return 0;
    const uint8_t *fs = GPTR(u32_at(p, 0x14));
    AudFxConfig c = {0};
    c.type = AUD_FX_REVERB;
    c.early_ms = u32_at(p, 0);
    c.fused_ms = u32_at(p, 4);
    c.predelay_ms = u32_at(p, 8);
    c.coloration = f32_at(p, 0xC);
    c.rv_damping = f32_at(p, 0x10);
    for (int i = 0; i < 3; i++) c.filter_size[i] = fs ? u32_at(fs, 4 * i) : k_default_filter_size[i];
    c.early_gain = f32_at(p, 0x18);
    c.fused_gain = f32_at(p, 0x1C);
    c.high_pass = p[0x20] != 0;
    aud_lock();
    if (g_dspfx[(int)fx->bus].obj == fx) {
        g_dspfx[(int)fx->bus].cfg = c;
        g_dspfx[(int)fx->bus].have_cfg = true;
        dsp_apply(fx->bus);
    }
    aud_unlock();
    return 1;
}

/* ================================================================== voices */

static void voice_free_locked(SndVoice *v) {
    int i = (int)v->index;
    if (!v->allocated) return;
    if (v->state != AUD_STATE_STOP) {
        v->state = AUD_STATE_STOP;
        aud_voice_set_state(i, AUD_STATE_STOP);   /* queued buffers -> done */
    }
    v->allocated = false;
    v->drop = NULL;
    v->drop_arg = 0;
}

/* USA 003DB6DC (EU 003DB6BC) nn::snd::AllocVoice(s32 priority, VoiceDropCallbackFunc cb, uptr
 * arg) -> Voice * (voice manager 0x007A1CF0, 003DC3A8). priority 0..0x7FFF, else NULL. When all
 * 24 voices are in use, the lowest-priority one (oldest among equals) is dropped if the new
 * priority is >= its priority and it is not 0x7FFF: it is freed, then its drop callback is
 * called with (voice, its arg). A new voice is paused, with default parameters (32728 Hz
 * PCM16 mono, pitch 1, volume 1, mix FL/FR 1.0, polyphase, no filter, no buffers).
 * Confidence: high. */
void *func_003DB6DC(int32_t priority, SndDropFn cb, uintptr_t arg) {
    snd_init();
    if ((uint32_t)priority > SND_PRIORITY_MAX) return NULL;
    aud_lock();
    SndVoice *v = NULL;
    for (int i = 0; i < AUD_VOICES && !v; i++)
        if (!g_voice[i].allocated) v = &g_voice[i];
    if (!v) {
        SndVoice *victim = NULL;
        for (int i = 0; i < AUD_VOICES; i++) {
            SndVoice *c = &g_voice[i];
            if (!victim || c->priority < victim->priority ||
                (c->priority == victim->priority && c->seq < victim->seq))
                victim = c;
        }
        if (!victim || victim->priority == SND_PRIORITY_MAX || priority < victim->priority) {
            aud_unlock();
            return NULL;
        }
        SndDropFn dcb = victim->drop;
        uintptr_t darg = victim->drop_arg;
        voice_free_locked(victim);
        if (dcb) dcb(victim, darg);
        v = victim->allocated ? NULL : victim;
        if (!v) {   /* the drop callback re-allocated it: give up like a full manager */
            aud_unlock();
            return NULL;
        }
    }
    int i = (int)v->index;
    aud_voice_reset(i);                 /* parameters + empty queue, paused */
    aud_voice_set_state(i, AUD_STATE_PAUSE);
    v->allocated = true;
    v->priority = priority;
    v->seq = ++g_seq;
    v->drop = cb;
    v->drop_arg = arg;
    v->state = AUD_STATE_PAUSE;
    v->interp = AUD_INTERP_POLYPHASE;
    v->filter = 0;
    v->flags6 = 0;
    v->next_id = 0;
    v->mono_cutoff = 0;
    memset(v->biquad, 0, sizeof v->biquad);
    aud_unlock();
    if (snd_trace()) fprintf(stderr, "snd: f=%ld alloc voice %d prio %d\n", g_plat_frames, i, (int)priority);
    return v;
}

/* USA 003E0AF0 (EU 003E0AD0) nn::snd::FreeVoice(Voice *): stops it if needed (queued buffers
 * become done) and returns it to the manager. Confidence: high. */
void func_003E0AF0(void *voice) {
    int i = vidx(voice);
    if (i < 0) return;
    aud_lock();
    voice_free_locked(&g_voice[i]);
    aud_unlock();
}

/* USA 00564678 (EU 00564650) nn::snd::Voice::GetPlayPosition(): the sample position in the
 * wave buffer being played (the SDK reads it from the voice's DSP status block, voice+0x68 ->
 * +8). Outside the 003DB000.. nn::snd range, so it was left decompiled and read that SDK layout
 * on the native voice (boot stop 84: the title stream crashed in 0041A2D4 -> 0056D488 ->
 * 00564678; nw::snd adds it to the block start for the stream play position). Confidence: high
 * for the layout use; medium for the name (only reader: the stream player 0041A2D4). */
uint32_t func_00564678(void *voice) {
    int i = vidx(voice);
    return i < 0 ? 0 : aud_voice_play_position(i);
}

/* USA 003E16D4 (EU 003E16B4) nn::snd::Voice::SetState(State): 0 play, 1 stop (all wave buffers
 * done, position reset), 2 pause (keeps the position). Confidence: high. */
void func_003E16D4(void *voice, int32_t state) {
    int i = vidx(voice);
    if (i < 0 || state < 0 || state > 2) return;
    aud_lock();
    g_voice[i].state = (uint8_t)state;
    aud_voice_set_state(i, state);
    aud_unlock();
    if (snd_trace()) fprintf(stderr, "snd: f=%ld voice %d state %d\n", g_plat_frames, i, (int)state);
}

/* USA 003E14A0 (EU 003E1480, impl 003E14A8) nn::snd::Voice::AppendWaveBuffer(WaveBuffer *):
 * length 0 -> status done at once; else next = 0, status wait, bufferId = the voice's running
 * id (never 0), queued. The ADPCM context (if any) is read now. Confidence: high. */
void func_003E14A0(void *voice, SndWaveBuffer *wb) {
    int i = vidx(voice);
    if (i < 0 || !wb) return;
    if (wb->sampleLength == 0) {
        wb_status(wb, AUD_WB_DONE);
        return;
    }
    aud_lock();
    SndVoice *v = &g_voice[i];
    wb->next = 0;
    if (v->next_id == 0) v->next_id = 1;
    wb->bufferId = v->next_id++;
    AudWaveBuf a = {0};
    a.data = GPTR(wb->bufferAddress);
    a.length = (uint32_t)wb->sampleLength;
    a.loop = wb->loopFlag != 0;
    a.user = wb;
    if (wb->pAdpcmContext) {
        const uint8_t *c = GPTR(wb->pAdpcmContext);
        memcpy(&a.ctx.pred_scale, c, 2);
        memcpy(&a.ctx.yn1, c + 2, 2);
        memcpy(&a.ctx.yn2, c + 4, 2);
        a.has_ctx = true;
    }
    wb_status(wb, AUD_WB_WAIT);
    if (snd_trace()) fprintf(stderr, "snd: f=%ld voice %d buffer %#x len %u loop %d ctx %d\n", g_plat_frames, i,
                             wb->bufferAddress, a.length, (int)a.loop, (int)a.has_ctx);
    if (aud_voice_append(i, &a) != 0) {
        fprintf(stderr, "snd: voice %d wave buffer queue full, buffer dropped\n", i);
        wb_status(wb, AUD_WB_DONE);
    }
    aud_unlock();
}

/* USA 003E11D0 (EU 003E11B0 -> 003E11D8 -> DSP 003DF3BC copies 0x20 bytes) nn::snd::Voice::
 * SetAdpcmParam(const AdpcmParam &): the 16 DSP-ADPCM coefficients. Confidence: high. */
void func_003E11D0(void *voice, const int16_t *coefs) {
    int i = vidx(voice);
    if (i >= 0 && coefs) aud_voice_set_adpcm_coefs(i, coefs);
}

/* USA 003E1224 (EU 003E1204) nn::snd::Voice::SetSampleRate(s32 hz) (clamped >= 0).
 * Confidence: high (nw::snd 00413DF8 passes the wave's sample rate). */
void func_003E1224(void *voice, int32_t rate) {
    int i = vidx(voice);
    if (i >= 0) aud_voice_set_rate(i, rate < 0 ? 0 : rate);
}

/* USA 003E145C (EU 003E143C -> 003E1464) nn::snd::Voice::SetChannelCount(s32) (2 bits).
 * Confidence: high (nw::snd sets 1). */
void func_003E145C(void *voice, int32_t count) {
    int i = vidx(voice);
    if (i >= 0) aud_voice_set_channels(i, (count & 3) == 2 ? 2 : 1);
}

/* USA 003E147C (EU 003E145C -> 003E1484) nn::snd::Voice::SetSampleFormat(fmt): 0 PCM8,
 * 1 PCM16, 2 DSP-ADPCM (nw::snd 00413DF8 maps its PCM8/PCM16/DSPADPCM to 0/1/2).
 * Confidence: high. */
void func_003E147C(void *voice, int32_t fmt) {
    int i = vidx(voice);
    if (i >= 0) aud_voice_set_format(i, fmt & 3);
}

/* USA 003E15CC (EU 003E15AC) nn::snd::Voice::SetInterpolationType: 0 polyphase, 1 linear,
 * 2 none (public +5, impl +0xE). Confidence: medium-high (nw::snd passes 0..2). */
void func_003E15CC(void *voice, int32_t type) {
    int i = vidx(voice);
    if (i < 0) return;
    g_voice[i].interp = (uint8_t)type;
    aud_voice_set_interp(i, type);
}

/* USA 003E15B0 / 003E1600 (EU 003E1590 / 003E15E0) Voice flags at impl +0x1E bit 4 / bit 6
 * (front-bypass / start-fade-in style flags; no audible meaning in the native stereo mix).
 * Recorded. Confidence: medium (meaning), high (no DSP state needed). */
void func_003E15B0(void *voice, uint8_t flag) {
    int i = vidx(voice);
    if (i >= 0) g_voice[i].flags6 = (uint8_t)((g_voice[i].flags6 & ~0x10) | (flag ? 0x10 : 0));
}
void func_003E1600(void *voice, uint8_t flag) {
    int i = vidx(voice);
    if (i >= 0) g_voice[i].flags6 = (uint8_t)((g_voice[i].flags6 & ~0x40) | (flag ? 0x40 : 0));
}

/* USA 003DE404 (EU 003DE3E4) nn::snd::Voice::SetPriority(s32): clamped 0..0x7FFF, the manager
 * re-sorts the voice (003DC538). Confidence: high. */
void func_003DE404(void *voice, int32_t priority) {
    int i = vidx(voice);
    if (i < 0) return;
    if (priority > SND_PRIORITY_MAX) priority = SND_PRIORITY_MAX;
    if (priority < 0) priority = 0;
    aud_lock();
    g_voice[i].priority = priority;
    g_voice[i].seq = ++g_seq;
    aud_unlock();
}

/* USA 003E176C (EU 003E174C) nn::snd::Voice::SetVolume(f32). Confidence: high. */
void func_003E176C(void *voice, float volume) {
    int i = vidx(voice);
    if (i >= 0) aud_voice_set_volume(i, volume);
}

/* USA 003DE4E4 (EU 003DE4C4) nn::snd::Voice::SetPitch(f32) (clamped >= 0): playback rate =
 * sample rate * pitch. Confidence: high. */
void func_003DE4E4(void *voice, float pitch) {
    int i = vidx(voice);
    if (i >= 0) aud_voice_set_pitch(i, pitch >= 0.0f ? pitch : 0.0f);
}

/* USA 003E0C30 (EU 003E0C10) nn::snd::Voice::SetMixParam(const MixParam &): 12 floats, main
 * bus then aux A then aux B, each front-left, front-right, rear-left, rear-right.
 * Confidence: high (copy of 12 words; order: SDK MixParam). */
void func_003E0C30(void *voice, const float *mix) {
    int i = vidx(voice);
    if (i >= 0 && mix) aud_voice_set_mix(i, mix);
}

/* USA 003E11F0 (EU 003E11D0) enable the voice's mono (one-pole low-pass) filter (public +7
 * bit 0 -> impl filter type). Confidence: high. */
void func_003E11F0(void *voice, uint8_t enable) {
    int i = vidx(voice);
    if (i < 0) return;
    aud_lock();
    g_voice[i].filter = (uint8_t)((g_voice[i].filter & ~1) | (enable ? 1 : 0));
    aud_voice_set_mono_filter(i, enable != 0, g_voice[i].mono_cutoff);
    aud_unlock();
}

/* USA 003DE458 (EU 003DE438) nn::snd::Voice::SetMonoFilterCoefficients(u16 cutoffHz)
 * (clamped to 16000; the SDK turns it into one-pole b0/a1). Confidence: high. */
void func_003DE458(void *voice, uint32_t cutoff) {
    int i = vidx(voice);
    if (i < 0) return;
    if (cutoff > 16000) cutoff = 16000;
    aud_lock();
    g_voice[i].mono_cutoff = cutoff;
    aud_voice_set_mono_filter(i, (g_voice[i].filter & 1) != 0, cutoff);
    aud_unlock();
}

/* USA 003DE438 (EU 003DE418) enable the voice's biquad filter (public +7 bit 1).
 * Confidence: high. */
void func_003DE438(void *voice, uint8_t enable) {
    int i = vidx(voice);
    if (i < 0) return;
    aud_lock();
    g_voice[i].filter = (uint8_t)((g_voice[i].filter & ~2) | (enable ? 2 : 0));
    aud_voice_set_biquad(i, enable != 0, g_voice[i].biquad);
    aud_unlock();
}

/* USA 003E1634 (EU 003E1614) nn::snd::Voice::SetBiquadFilterCoefficients(const
 * BiquadFilterCoefficients &): b0 b1 b2 a1 a2, s16 Q14 (a1/a2 as the DSP adds them).
 * Confidence: high (5 halfwords copied), medium (sign convention of a1/a2). */
void func_003E1634(void *voice, const int16_t *coef) {
    int i = vidx(voice);
    if (i < 0 || !coef) return;
    aud_lock();
    memcpy(g_voice[i].biquad, coef, sizeof g_voice[i].biquad);
    aud_voice_set_biquad(i, (g_voice[i].filter & 2) != 0, g_voice[i].biquad);
    aud_unlock();
}

/* ================================================================== sound thread */

typedef struct {
    pthread_t thread;
    atomic_bool running;
    bool started;
    SndThreadFn cb, cb2;
    void *arg, *arg2;
    int32_t mode;
    uint8_t profile;
    uint64_t last_ticks;
    pthread_mutex_t cs;   /* the SDK sound-thread CriticalSection (0x007A1CA0+0x34) */
} SndThread;
static SndThread g_thr;
static pthread_once_t g_thr_once = PTHREAD_ONCE_INIT;

static void thr_once(void) {
    pthread_mutexattr_t a;
    pthread_mutexattr_init(&a);
    pthread_mutexattr_settype(&a, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&g_thr.cs, &a);
    pthread_mutexattr_destroy(&a);
}

/* One complete sound frame without pacing: user (aux-thread) callback, the game's frame
 * callback under the sound-thread lock, then "SendParameterToDsp" + the DSP frame = the mixer.
 * Exported for tests and tools (native API, not a game function). */
void albw_snd_frame(float *out) {
    pthread_once(&g_thr_once, thr_once);
    snd_init();
    if (g_thr.cb2) g_thr.cb2(g_thr.arg2);
    pthread_mutex_lock(&g_thr.cs);
    if (g_thr.cb) g_thr.cb(g_thr.arg);
    pthread_mutex_unlock(&g_thr.cs);
    pthread_mutex_lock(&g_thr.cs);
    aud_mix_frame(out);
    pthread_mutex_unlock(&g_thr.cs);
}

static void *sound_thread_main(void *p) {
    (void)p;
    float frame[AUD_FRAME * 2];
    while (atomic_load(&g_thr.running)) {
        aud_out_wait();                    /* = nn::snd::WaitForDspSync */
        if (albw_ss_host_enter) albw_ss_host_enter();   /* runs game code: held back during a save / load */
        uint64_t t0 = now_ticks();
        albw_snd_frame(frame);
        if (albw_ss_host_leave) albw_ss_host_leave();
        aud_out_push(frame, AUD_FRAME);
        g_thr.last_ticks = now_ticks() - t0;
    }
    return NULL;
}

/* USA 003DDB68 (EU 003DDB48) start the nn::snd sound thread:
 *   (const u32 cfg[3] {stack, stackSize, priority}, void (*frameCb)(void *), void *frameArg,
 *    const u32 *auxCfg, void (*userCb)(void *), void *userArg, s32 mode)
 * -> 003DCFD0(0x007A1CA0, ...): a thread that per DSP frame waits for the DSP sync (003DD5A0),
 * runs userCb (in this thread for mode 0, in the aux thread 003DE1B0 for mode 1, which also
 * runs the aux callbacks), runs frameCb under the CriticalSection, then SendParameterToDsp
 * (003DE12C). Called once by nw::snd 004154B4 (frameCb 00415048, userCb 00415624, arg the
 * nw::snd SoundThread 0x007A3DE8). Native: one pthread paced by the audio device (or the wall
 * clock), same callback order; stack/priority/mode have no native meaning. Returns 0 or
 * 0x0820ABF9 if already running. Confidence: high. */
uint32_t func_003DDB68(const uint32_t *cfg, SndThreadFn cb, void *arg, const uint32_t *aux_cfg,
                       SndThreadFn cb2, void *arg2, int32_t mode) {
    (void)cfg;
    (void)aux_cfg;
    pthread_once(&g_thr_once, thr_once);
    snd_init();
    if (g_thr.started) return SND_RESULT_ALREADY_INITIALIZED;
    g_thr.cb = cb;
    g_thr.arg = arg;
    g_thr.cb2 = cb2;
    g_thr.arg2 = arg2;
    g_thr.mode = mode;
    aud_out_open();
    atomic_store(&g_thr.running, true);
    if (pthread_create(&g_thr.thread, NULL, sound_thread_main, NULL) != 0) {
        atomic_store(&g_thr.running, false);
        fprintf(stderr, "snd: cannot create the sound thread\n");
        return 0xC8A0A7FCu;
    }
    pthread_setname_np(g_thr.thread, "albw-snd");
    g_thr.started = true;
    return 0;
}

/* USA 003DD088 (EU 003DD068 -> 003DD098) stop the sound thread(s) and join them (nw::snd
 * 004156BC / 004156E8 at shutdown). Confidence: high. */
void func_003DD088(void) {
    if (!g_thr.started) return;
    atomic_store(&g_thr.running, false);
    pthread_join(g_thr.thread, NULL);
    g_thr.started = false;
    g_thr.cb = g_thr.cb2 = NULL;
    aud_out_close();
}

/* USA 003DD410 (EU 003DD3F0 -> 003DD428) enable the sound thread's processing-time
 * measurement (0x007A1CA0+8, only in mode 0). Confidence: medium-high. */
void func_003DD410(uint8_t enable) { g_thr.profile = enable; }

/* USA 003DD060 (EU 003DD040 -> 003DD07C) *out = processing time of the last sound frame, in
 * system ticks (0x007A1CA0+0, u64). Only called by nw::snd 00415048 when profiling is on.
 * Confidence: high. */
void func_003DD060(uint64_t *out) {
    if (out) *out = g_thr.last_ticks;
}

/* USA 003DC398 (EU 003DC378) a DSP-side counter (0x007A06F0+0x132C) nw::snd accumulates per
 * frame for its load statistics (0041522C, profiling only). Native: 0. Confidence: low
 * (meaning), high (only feeds statistics). */
int32_t func_003DC398(void) { return 0; }
