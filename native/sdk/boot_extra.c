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

/* armcc C library multibyte conversion (Thumb code at the start of the image), used e.g. by
 * 0040E588 to turn a char path into the UTF-16 path for nn::fs. The game never calls setlocale,
 * so the C locale applies: one byte per character, wchar_t is 16 bits. The decompiled Thumb
 * versions call through misresolved helpers (crash in "00301084"). Confidence: high (C locale).
 *   USA 00100790  mbstate init (zero the 8-byte state)
 *   USA 001007A2  size_t mbrlen(const char *s, size_t n, mbstate_t *ps)
 *   USA 001007C0  size_t mbrtowc(wchar16 *pwc, const char *s, size_t n, mbstate_t *ps) */
void func_00100790(uint32_t *state) { state[0] = 0; state[1] = 0; }
uint32_t func_001007A2(const char *s, uint32_t n, uint32_t *state) {
    if (!s) return 0;
    if (n == 0) return (uint32_t)-2;
    return *s ? 1 : 0;
}
uint32_t func_001007C0(uint16_t *pwc, const char *s, uint32_t n, uint32_t *state) {
    if (!s) return 0;
    if (n == 0) return (uint32_t)-2;
    if (pwc) *pwc = (uint8_t)*s;
    return *s ? 1 : 0;
}

/* USA 0010013C (EU 0010013C) the game's vsnprintf(char *buf, u32 size, const char *fmt,
 * void *args) -> length that the full output needs (C99 vsnprintf semantics; callers such as
 * 00111A20 clamp). `args` is an ARM-style va_list: a plain pointer to consecutive argument
 * words. Natively every caller hands it a pointer to its own variadic arguments on the i386
 * stack (e.g. 00689650 passes &param_3), which has the same shape: 32-bit words, doubles in 8
 * consecutive bytes (no 8-byte alignment on i386). The Thumb decompilation of the armcc
 * formatter jumps to raw Thumb addresses. Native: each conversion is formatted by the host
 * snprintf with the value fetched from the word array. Confidence: high (format semantics),
 * medium (double alignment if a caller ever builds an ARM-aligned array). */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int32_t func_0010013C(char *buf, uint32_t size, const char *fmt, void *args) {
    const uint32_t *ap = (const uint32_t *)args;
    uint32_t out = 0;
    char tmp[512];
#define EMIT(s, n) do { for (uint32_t _i = 0; _i < (uint32_t)(n); _i++, out++) \
        if (size && out < size - 1) buf[out] = (s)[_i]; } while (0)
    for (const char *p = fmt; *p; p++) {
        if (*p != '%') { EMIT(p, 1); continue; }
        char spec[32];
        int k = 0;
        spec[k++] = '%';
        p++;
        while (*p && strchr("-+ #0", *p) && k < 20) spec[k++] = *p++;
        if (*p == '*') { k += snprintf(spec + k, sizeof spec - k, "%d", (int32_t)*ap++); p++; }
        else while (*p >= '0' && *p <= '9' && k < 24) spec[k++] = *p++;
        if (*p == '.') {
            spec[k++] = *p++;
            if (*p == '*') { k += snprintf(spec + k, sizeof spec - k, "%d", (int32_t)*ap++); p++; }
            else while (*p >= '0' && *p <= '9' && k < 28) spec[k++] = *p++;
        }
        int lng = 0;   /* 0 int, 1 long long */
        while (*p && strchr("hlLqjzt", *p)) {
            if ((*p == 'l' && p[1] == 'l') || *p == 'q' || *p == 'j' || *p == 'L') { lng = 1; if (*p == 'l') p++; }
            p++;
        }
        char c = *p;
        if (!c) break;
        int n = 0;
        switch (c) {
        case '%': EMIT("%", 1); continue;
        case 'd': case 'i':
            if (lng) { uint64_t v = ap[0] | (uint64_t)ap[1] << 32; ap += 2; spec[k++] = 'l'; spec[k++] = 'l'; spec[k++] = c; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (long long)v); }
            else { spec[k++] = c; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (int32_t)*ap++); }
            break;
        case 'u': case 'x': case 'X': case 'o':
            if (lng) { uint64_t v = ap[0] | (uint64_t)ap[1] << 32; ap += 2; spec[k++] = 'l'; spec[k++] = 'l'; spec[k++] = c; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (unsigned long long)v); }
            else { spec[k++] = c; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (uint32_t)*ap++); }
            break;
        case 'c': spec[k++] = 'c'; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (int)(uint8_t)*ap++); break;
        case 'p': spec[k++] = 'x'; spec[k] = 0; n = snprintf(tmp, sizeof tmp, spec, (uint32_t)*ap++); break;
        case 's': {
            const char *s = (const char *)(uintptr_t)*ap++;
            spec[k++] = 's'; spec[k] = 0;
            n = snprintf(tmp, sizeof tmp, spec, s ? s : "(null)");
            if (n >= (int)sizeof tmp) {   /* long string: emit directly */
                n = snprintf(NULL, 0, spec, s ? s : "(null)");
                char *big = __builtin_alloca((size_t)n + 1);
                snprintf(big, (size_t)n + 1, spec, s ? s : "(null)");
                EMIT(big, n);
                continue;
            }
            break;
        }
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double d;
            memcpy(&d, ap, 8);
            ap += 2;
            spec[k++] = c; spec[k] = 0;
            n = snprintf(tmp, sizeof tmp, spec, d);
            break;
        }
        case 'n': { int32_t *dst = (int32_t *)(uintptr_t)*ap++; if (dst) *dst = (int32_t)out; continue; }
        default: EMIT(p - 0, 1); continue;
        }
        if (n > (int)sizeof tmp - 1) n = sizeof tmp - 1;
        if (n > 0) EMIT(tmp, n);
    }
    if (size) buf[out < size ? out : size - 1] = 0;
#undef EMIT
    return (int32_t)out;
}
