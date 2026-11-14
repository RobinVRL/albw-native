/* USA 0014E2A0 (EU 0014E2A0): actor helper that builds a 0x24-byte collision/attention request
 * on the stack and submits it to the manager *data_00709D28 through 004A8F40 (95 caller files).
 * Request: +0 = 0, +4..+0x18 = words 1..6 of the default record made by 004331A0, then
 * +4 = a3, +8 = a5 (float bits, vstr s16), +0xC = *(this+0x2CC), +0x10 (u16) = *(u16 *)(this+0x54),
 * +0x18 = a6 or *(this+0x3A0) when a6 == 0, +0x1C = a2, +0x20 (u8) = 0.
 * Route: actor/collision setup (depth 3 from the Prepare/TaskRender graph); a tripwire stub today.
 * Bug: the converted source did not compile (`_local_50`, Ghidra's CONCAT22 halfword merge).
 * Signature kept as the 95 converted callers declare it (a5 passed as a 4-byte word: its float
 * bits are stored unchanged, as the ARM vldr/vstr pair does).
 * Verified instruction by instruction against EU 0014E2A0..0014E330.  Confidence: high. */
#include "../route.h"

extern uint32_t data_00709D28[];
uint32_t *func_004331A0(uint32_t *buf);
uint32_t func_004A8F40(int mgr, int *req, uint32_t a);

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6)
{
    uint32_t tmp[7];
    uint32_t req[9];
    uint32_t *d = func_004331A0(tmp);
    memcpy(&req[1], d + 1, 6 * sizeof(uint32_t)); /* vldmia/vstmia: bit copy */
    req[7] = 0;
    RF(req, 0x20, uint8_t) = 0;
    req[3] = RF(self, 0x2CC, uint32_t);
    req[1] = a3;
    req[2] = a5;
    req[0] = 0;
    req[7] = a2;
    RF(req, 0x10, uint16_t) = RF(self, 0x54, uint16_t);
    if (a6 == 0)
        a6 = RF(self, 0x3A0, int);
    req[6] = (uint32_t)a6;
    return func_004A8F40((int)data_00709D28[0], (int *)req, a4);
}
