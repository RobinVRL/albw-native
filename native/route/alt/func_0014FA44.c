/* USA 0014FA44 (EU 0014FA44): variant of 0014E2A0 (attention/collision request submitted to
 * *data_00709D28 via 004A8F40) with the request word +0 given by the caller.
 * Request (0x24 bytes): words 1..6 from the 004331A0 default record, then +0 = a2, +4 = a4,
 * +8 = a6 (float bits), +0xC = *(this+0x2CC), +0x10 (u16) = *(u16 *)(this+0x54),
 * +0x18 = a7 or *(this+0x3A0), +0x1C = a3, +0x20 (u8) = 0; 004A8F40's 3rd argument = a5.
 * Route: actor/collision setup (depth 4 of the Prepare/TaskRender graph); a tripwire stub today.
 * Bug: the converted source did not compile (`_local_58`, CONCAT22 halfword merge).
 * Signature as the converted callers declare it (7 words).
 * Verified instruction by instruction against EU 0014FA44..0014FAD8.  Confidence: high. */
#include "../route.h"

extern uint32_t data_00709D28[];
uint32_t *func_004331A0(uint32_t *buf);
uint32_t func_004A8F40(int mgr, int *req, uint32_t a);

uint32_t func_0014FA44(char *self, int a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int a7)
{
    uint32_t tmp[8];
    uint32_t req[9];
    uint32_t *d = func_004331A0(tmp);
    memcpy(&req[1], d + 1, 6 * sizeof(uint32_t));
    req[7] = 0;
    RF(req, 0x20, uint8_t) = 0;
    req[3] = RF(self, 0x2CC, uint32_t);
    req[1] = a4;
    req[2] = a6;
    req[0] = (uint32_t)a2;
    req[7] = a3;
    RF(req, 0x10, uint16_t) = RF(self, 0x54, uint16_t);
    if (a7 == 0)
        a7 = RF(self, 0x3A0, int);
    req[6] = (uint32_t)a7;
    return func_004A8F40((int)data_00709D28[0], (int *)req, a5);
}
