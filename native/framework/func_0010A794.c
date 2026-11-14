/* USA 0010A794 (EU 0010A794): StateMgrBase::StateMgrBase()   (384 caller files)
 *   int f(StateMgrBase *this);   returns this (armcc constructor)
 * Layout written (0x14 bytes; byte 7 is not touched):
 *   +0x00 u32 frame counter = 0     +0x04 s8 current = -1    +0x05 s8 previous = -1
 *   +0x06 u8  = 0                   +0x08 u32 name count = 0 +0x0C name table (0x24-byte
 *   FixedSafeString<24> entries) = 0                         +0x10 model (state anim) = 0
 * EU 0010A794: mov r1,#0; mvn r2,#0; str r1,[r0]; strb r2,[r0,#4]; strb r2,[r0,#5];
 *   strb r1,[r0,#6]; str r1,[r0,#8]; str r1,[r0,#0xc]; str r1,[r0,#0x10]; bx lr.
 * Round-2 Ghidra C: correct. Matched source (work7/gpt23, StateMgrSmall) is not used by the build
 * (falls back to Ghidra). Written natively for a typed, 64-bit clean definition.
 * Prototype = the 384 callers' `extern int func_0010A794(undefined4 *)`. Confidence: high. */
#include "framework.h"

int func_0010A794(void *self) {
    char *p = self;
    FLD(p, 0x00, uint32_t) = 0;
    FLD(p, 0x04, int8_t) = -1;
    FLD(p, 0x05, int8_t) = -1;
    FLD(p, 0x06, uint8_t) = 0;
    FLD(p, 0x08, uint32_t) = 0;
    FLD(p, 0x0C, uint32_t) = 0;
    FLD(p, 0x10, uint32_t) = 0;
    return (int)gp_u32(self);
}
