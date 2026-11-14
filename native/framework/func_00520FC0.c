/* USA 00520FC0 (EU 00520F98): getPlayerPos()-style accessor: returns (*data_0070FB60)->+0x1C
 *   (434 converted caller files)
 *   u32 f(void);   EU: ldr r0,=data_0070FB60; ldr r0,[r0]; ldr r0,[r0,#0x1c]; bx lr
 * Round-2 Ghidra C: correct. Native for a typed, 64-bit clean definition (the result is a game
 * pointer word, returned as a 32-bit int as the callers' `extern int func_00520FC0(void)` read
 * it). Confidence: high. */
#include "framework.h"

extern uint32_t data_0070FB60;

int func_00520FC0(void) {
    return (int)FLD(gp_ptr(data_0070FB60), 0x1C, uint32_t);
}
