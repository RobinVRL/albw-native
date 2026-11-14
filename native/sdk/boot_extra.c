/* Small SDK replacements found while driving the boot (see native/BOOT_LOG.md).
 * Each function: USA address, API meaning, evidence, confidence. */
#include <stdint.h>
#include "../runtime/runtime.h"

/* USA 0010AC24 (EU 0010AC24) nn::err ThrowFatalErr(Result, pc): fills the diagnostic record at
 * 0079CCA8 and sends it to the err:f service (00104560 -> svc ConnectToPort / IPC), which shows
 * the fatal-error screen and never returns.  Native meaning: report and abort.  The pc is the
 * ARM address of the call site in the EU binary (literal in Ghidra-derived code).
 * Confidence: high (matched source src/work7/gpt15/variants/0010AC24). */
void func_0010AC24(uint32_t result, uint32_t pc) {
    runtime_fatal("nn::err::ThrowFatalErr result=0x%08X at EU pc 0x%08X (description %u, module %u, "
                  "summary %u, level %u)", result, pc, result & 0x3FF, (result >> 10) & 0xFF,
                  (result >> 21) & 0x3F, (result >> 27) & 0x1F);
}

/* armcc intrinsic __memory_changed(): a compiler memory barrier (no code), used by some matched
 * sources (e.g. 0010A574) to reproduce instruction order. Natively a compiler barrier too. */
void __memory_changed(void) { __asm__ volatile("" ::: "memory"); }

/* USA 003D4F20 (EU 003D4F00) nn::hid::AccelerometerReader::Read(reader, AccelerometerStatus *buf,
 * s32 *out_count, s32 max): copies up to `max` ring entries (003E63E8 walks the HID
 * shared-memory ring), filters them (play/sensitivity, 003D55B4), subtracts the offset when
 * enabled (+0x48) and rotates the axes. Called by the reader ctor 003D52C4 (max 1) and the
 * game. Native: there is no shared-memory ring; same meaning as the ReadLatest replacement in
 * services.c (003D4D38): one sample of a console lying still, 1 G on -y (512 units).
 * Confidence: medium (as 003D4D38). */
uint32_t func_003D4F20(uint8_t *reader, int16_t *buf, int32_t *out_count, int32_t max) {
    if (max <= 0) {
        *out_count = 0;
        return 0;
    }
    buf[0] = 0;
    buf[1] = -512;
    buf[2] = 0;
    int16_t *last = (int16_t *)(reader + 8);
    last[0] = buf[0];
    last[1] = buf[1];
    last[2] = buf[2];
    *out_count = 1;
    return 1;
}

/* ---------------------------------------------------------------- sound (temporary: no audio)
 * There is no native audio layer yet (SDK_AREAS.md: snd/dsp voice layer 0x003DB-0x003E1 should
 * be replaced by a host mixer). Until then the SDK reports "no DSP": dsp::Initialize and
 * the DSP component is never loaded (003D2A48 returns its error when the session is 0).
 * nn::snd::Initialize itself still reaches the dsp::DSP IPC (tripwire): the snd layer needs a
 * native replacement (failing it instead leaves the snd CriticalSections uninitialised and the
 * first snd call from the game spins forever). */
#define DSP_RESULT_NOT_AVAILABLE 0xC8A0A7FCu   /* the "no session" result 003D2A48 returns */

/* USA 003D2810 (EU 003D27F0) dsp::Initialize: srv GetServiceHandle("dsp::DSP"), clear the
 * pipe/interrupt tables, create the DSP event. Native: no DSP; the session stays 0.
 * Confidence: high (meaning), temporary. */
uint32_t func_003D2810(void) { return DSP_RESULT_NOT_AVAILABLE; }
