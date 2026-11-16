/* USA 004371D8 (EU 004371B8): layout draw visitor, parts-pane slot (+0x14 of the draw visitor
 * vtable; window / picture slots are 00437244 / 0043729C): (visitor, pane) -> visit children?
 *   pane +0xC0 set: 0; +0xC1 set: draw the parts layout (005036A0) when the global alpha +0x46 is
 *   non-zero, return 0; else return !(flags +0x44 & 2) || alpha +0x45 != 0.
 * What was wrong: the converted body (src/work8/sol2/variants/004371D8_0.c, local symbol
 * FUN_004371d8 + weak alias) returns a byte in %al (`mov $1, %al; ...; setne %al`) with the rest of
 * %eax holding garbage; the pane walker 0067F3A8 tests the whole register, so the children of a
 * zero-alpha parts pane were still visited and drawn: the message window's hidden choice buttons
 * (L_Btn_00 / L_Btn_01: alpha 0, flag 0x02) showed as a yellow ">" pill on the top screen in every
 * dialogue (BOOT_LOG 112 [3d]). tools/boolret.py missed it (FUN_ label, shared-epilogue jump).
 * From the EU machine code (EU 004371B8..00437220). Confidence: high. */
#include <stdint.h>

extern uint32_t func_005036A0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

int func_004371D8(uint32_t visitor, uint32_t pane)
{
    const uint8_t *p = (const uint8_t *)(uintptr_t)pane;
    uint32_t *v = (uint32_t *)(uintptr_t)visitor;
    if (p[0xC0]) return 0;
    if (p[0xC1]) {
        if (p[0x46]) v[1] = func_005036A0(v[3], v[1], *(const uint32_t *)(p + 0xB0), v[2]);
        return 0;
    }
    if (!(p[0x44] & 2)) return 1;
    return p[0x45] != 0;
}
