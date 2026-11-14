/* SILENT native nn::snd / dsp layer (TEMPORARY stopgap).
 *
 * The nn::snd part is replaced by native/sdk/snd.c (real layer, SDL3 audio): tools/link.sh
 * compiles this file with -DALBW_REAL_SND by default, which removes the nn::snd functions
 * below; ALBW_REAL_SND=0 tools/link.sh links the silent layer instead (snd.c and
 * native/audio/ left out). The dsp:: part (no DSP: dsp::Initialize and the dsp::DSP IPC
 * wrappers) is not nn::snd and is always linked from here.
 *
 * Model: there is no DSP. Nothing here emulates the DSP or its IPC: the dsp::DSP session is
 * never opened, so the SDK's dsp:: helpers (003D2AC0, 003D2AEC, 003D2B18, 003D2A48...) take
 * their own "no session" path and return their error without IPC; the IPC wrappers themselves
 * are replaced too, for any path that still reaches them. nn::snd::Initialize succeeds and
 * initialises the sound library's own objects (CriticalSections, manager, voice tables) exactly
 * as the original does, minus the DSP parts (interrupt/semaphore registration 003DE544, the
 * DSP callback table 003D2C00, the 0x1FF81000 headphone byte). Voices are then allocated and
 * updated by the decompiled library as usual; they are simply never rendered.
 *
 * Replaced functions (USA address, meaning, what the game expects):
 *   003D2810  dsp::Initialize          -> "not available"; the dsp session (0x007158E8+8) stays 0
 *   003DBB7C  nn::snd::Initialize      -> 0 (success), library objects initialised, init flag
 *                                         (0x00714A40) set; 0x0820ABF9 if already initialised
 *   003D2D08..003D2F54, 0010AAAC  dsp::DSP IPC wrappers -> "not available", outputs neutral
 *   003DDB68  sound thread start (voice manager 003DCE04 + thread create 003DCFD0/003DCEAC: a
 *             thread that renders voices on every DSP frame) -> 0, no thread
 *   (more are added below as the boot reaches them; each entry documents itself)
 */
#include <stdint.h>
#include <string.h>

#define DSP_RESULT_NOT_AVAILABLE 0xC8A0A7FCu   /* the "no session" result of the SDK dsp helpers */

/* ------------------------------------------------------------------------------------ dsp */

/* USA 003D2810 (EU 003D27F0) dsp::Initialize: srv GetServiceHandle("dsp::DSP"), clear the pipe
 * and interrupt tables, create the DSP event. Native: no DSP, the session stays 0, so every SDK
 * dsp:: helper returns its error without IPC (e.g. 003D2A48 LoadDefaultComponent called by the
 * game's audio start 003DE268, which ignores the result). Confidence: high. */
uint32_t func_003D2810(void) { return DSP_RESULT_NOT_AVAILABLE; }

/* dsp::DSP IPC wrappers (one command each; (Handle *session, args...) -> Result). Unreachable
 * while the session is 0; replaced so that no path can issue the IPC. Outputs are cleared.
 * Commands from the literal pools: 0x0001 RecvData, 0x0002 RecvDataIsReady, 0x0007 ?, 0x000C
 * ConvertProcessAddressFromDspDram, 0x000D WriteProcessPipe, 0x0010 ReadPipeIfPossible, 0x0011
 * LoadComponent, 0x0013 FlushDataCache, 0x0015 RegisterInterruptEvents, 0x0016
 * GetSemaphoreEventHandle, 0x0017 SetSemaphoreMask. Confidence: high. */
uint32_t func_0010AAAC(const uint32_t *s, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *loaded)
{ if (loaded) *loaded = 0; return DSP_RESULT_NOT_AVAILABLE; }                 /* 0x11 LoadComponent */
uint32_t func_003D2D08(const uint32_t *s, uint32_t a) { return DSP_RESULT_NOT_AVAILABLE; }          /* 0x07 */
uint32_t func_003D2D40(const uint32_t *s, uint32_t a, uint32_t b, uint32_t c) { return DSP_RESULT_NOT_AVAILABLE; } /* 0x13 */
uint32_t func_003D2D7C(const uint32_t *s, uint32_t a, uint8_t *ready)
{ if (ready) *ready = 0; return DSP_RESULT_NOT_AVAILABLE; }                   /* 0x02 RecvDataIsReady */
uint32_t func_003D2DC0(const uint32_t *s, uint32_t a) { return DSP_RESULT_NOT_AVAILABLE; }          /* 0x17 */
uint32_t func_003D2DF8(const uint32_t *s, uint32_t a, const void *b, uint32_t c) { return DSP_RESULT_NOT_AVAILABLE; } /* 0x0D */
uint32_t func_003D2E40(const uint32_t *s, uint32_t a, uint32_t b, void *c, uint32_t d, uint16_t *got)
{ if (got) *got = 0; return DSP_RESULT_NOT_AVAILABLE; }                       /* 0x10 ReadPipeIfPossible */
uint32_t func_003D2EA8(const uint32_t *s, uint32_t *ev)
{ if (ev) *ev = 0; return DSP_RESULT_NOT_AVAILABLE; }                         /* 0x16 */
uint32_t func_003D2EDC(const uint32_t *s, uint32_t a, uint32_t b, uint32_t c) { return DSP_RESULT_NOT_AVAILABLE; } /* 0x15 */
uint32_t func_003D2F18(const uint32_t *s, uint32_t a, uint32_t *out)
{ if (out) *out = 0; return DSP_RESULT_NOT_AVAILABLE; }                       /* 0x0C */
uint32_t func_003D2F54(const uint32_t *s, uint32_t a, uint16_t *out)
{ if (out) *out = 0; return DSP_RESULT_NOT_AVAILABLE; }                       /* 0x01 RecvData */

/* ---------------------------------------------------------------------------------- nn::snd */
#ifndef ALBW_REAL_SND   /* the real layer native/sdk/snd.c provides these */

extern uint8_t data_00714A40[];  /* snd init state: [0] initialised, [1..3], [4] output mode, [5] */
extern uint8_t data_007A06A0[];  /* sound manager object (003DC8F0 initialises it) */
extern uint8_t data_007A1CF0[];  /* sound CriticalSection (0010DE90 initialises it) */

int32_t func_00104800(void);                      /* srv::Initialize (refcounted) */
void func_003DCBF8(void *mgr, uint8_t mode);       /* set output mode */
void func_0010DE90(void *cs);                      /* CriticalSection init */
void func_003DC8F0(void *mgr, uint32_t a, uint32_t b, uint32_t c);  /* manager init */
void *func_003DC2E4(void);                         /* -> voice table 0x007A0688 */
void func_003DD78C(void *voices);                  /* voice table init */

/* USA 003DBB7C (EU 003DBB5C) nn::snd::Initialize() -> Result. Original order (EU disassembly):
 * already initialised -> 0x0820ABF9; srv::Initialize (00104800); dsp interrupt/semaphore
 * registration (003DE544, needs the DSP) ; output mode = s8 at 0x1FF81000+0xC0 (headphones);
 * 003DCBF8(mgr, mode); CS init 0x007A1CF0; manager init 003DC8F0(0x007A06A0); voice table init
 * (003DD78C(003DC2E4())); DSP callback registration 003D2C00; state bytes [1..3]=0, [5]=1,
 * [0]=1. Native: the same minus the DSP registration and callbacks; mode 0 (speakers).
 * The game then uses the snd API normally (CriticalSections initialised: without this the first
 * snd call, e.g. 003DE198 -> 003DDFC8, spins on an uninitialised lock). Confidence: medium-high
 * (manager init 003DC8F0 is decompiled and reads cfg through the native services layer). */
uint32_t func_003DBB7C(void)
{
    uint8_t *st = data_00714A40;
    if (st[0])
        return 0x0820ABF9u;
    int32_t r = func_00104800();
    if (r < 0)
        return (uint32_t)r;
    st[4] = 0;                                   /* 0x1FF810C0: no headphones */
    func_003DCBF8(data_007A06A0, 0);
    func_0010DE90(data_007A1CF0);
    func_003DC8F0(data_007A06A0, 0, 0, 0);
    func_003DD78C(func_003DC2E4());
    st[1] = 0;
    st[2] = 0;
    st[3] = 0;
    st[5] = 1;
    st[0] = 1;
    return 0;
}

/* USA 003DDB68 (EU 003DDB48) start the sound thread: 003DCFD0(003DCE04(), a0, a1, a2, a3, s0,
 * s1, s2) -> 003DCEAC creates an nn::os::Thread (entry = the per-DSP-frame voice update loop,
 * stack a3/s0.., priority, core) and stores the frame callbacks (a1, a2) and an optional
 * user-thread config (a3). Called once by the game's sound system init 004154B4.
 * Native (silent): no DSP frames, so no sound thread; returns success. The game's sound
 * objects stay idle. (The Ghidra version had no parameters at all: in_r0.. registers.)
 * Confidence: medium (later code that waits for the sound thread is not known yet). */
uint32_t func_003DDB68(void *a0, uint32_t a1, uint32_t a2, void *a3, uint32_t s0, uint32_t s1,
                       uint32_t s2)
{
    return 0;
}

#endif /* ALBW_REAL_SND */
