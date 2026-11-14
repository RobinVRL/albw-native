/* CRC-32 (reflected, polynomial 0xEDB88320) as the game's code computes it, hand-written from
 * the EU disassembly. Table entry i: 8 shift/xor steps (4 loop iterations of 2 steps). */
#include "core_str.h"

extern uint8_t data_00714E80[];     /* "table built" flag byte */
extern uint32_t data_0079D790[];    /* 256-entry CRC table (.bss) */

static uint32_t crc_entry(uint32_t v) {
    for (int k = 0; k < 8; k++) v = (v & 1) ? 0xEDB88320u ^ (v >> 1) : v >> 1;
    return v;
}

/* the per-byte step, in the ARM order (odd first byte, then pairs: same result) */
static uint32_t crc_run(const uint32_t *t, const uint8_t *p, uint32_t n, uint32_t c) {
    for (uint32_t i = 0; i < n; i++) c = t[(p[i] ^ c) & 0xFF] ^ (c >> 8);
    return c;
}

/* USA 003E300C (EU 003E2FEC) u32 crc32(const u8 *data, u32 len, u32 state): builds the table
 * in a 0x400-byte stack array on every call, runs the bytes from `state` (no initial
 * inversion: callers pass 0xFFFFFFFF or a running value) and returns ~state. Native: the
 * table is computed once (identical values). Callers `int f(byte *, uint, uint)` (4). Ghidra.
 * Confidence: high. */
uint32_t func_003E300C(const uint8_t *data, uint32_t len, uint32_t state) {
    static uint32_t table[256];
    static int ready;
    if (!__atomic_load_n(&ready, __ATOMIC_ACQUIRE)) {
        for (uint32_t i = 0; i < 256; i++) table[i] = crc_entry(i);
        __atomic_store_n(&ready, 1, __ATOMIC_RELEASE);
    }
    return ~crc_run(table, data, len, state);
}

/* USA 004A13D4 (EU 004A13AC) build the global CRC table data_0079D790 and set the flag byte
 * data_00714E80 = 1. r0 at return = table[255] (0x2D02EF8D; Ghidra: void). One caller.
 * Matched (src/work8/lead/matched_1020/004A13D4.c). Confidence: high. */
uint32_t func_004A13D4(void) {
    uint32_t v = 0;
    for (uint32_t i = 0; i < 256; i++) data_0079D790[i] = v = crc_entry(i);
    data_00714E80[0] = 1;
    return v;
}

/* USA 004A143C (EU 004A1414) u32 crc32(const u8 *data, u32 len): if the flag byte
 * data_00714E80 is 0 build the global table (inlined 004A13D4) and set it; then the standard
 * CRC-32: state 0xFFFFFFFF, result ~state (save data checksums). Callers `int f(byte *, uint)`
 * (12). Ghidra. Confidence: high. */
uint32_t func_004A143C(const uint8_t *data, uint32_t len) {
    if (data_00714E80[0] == 0) {
        for (uint32_t i = 0; i < 256; i++) data_0079D790[i] = crc_entry(i);
        data_00714E80[0] = 1;
    }
    return ~crc_run(data_0079D790, data, len, 0xFFFFFFFFu);
}
