/* USA 004FD348 (EU 004FD320): set a colour on every model of a model-group object: the RGBA
 * bytes at a are stored byte-reversed in a stack word, and for each of the u8 +0xA8 entries
 * (12 bytes: model ptr, flags byte +4) that is selected (flag 2 when b == 0, or flag 8) the
 * model gets bit 0x10000 in +0x164 and 004D00E4(model, i, 1, &colour) for each of its
 * *(model+0x20)+4 materials.
 * Route: model/render path (route phase 1).
 * Bug: compile failure in the round-2 conversion (`_local_20`, Ghidra's CONCAT of the four byte
 * stores) = tripwire stub at link time.
 * Verified instruction by instruction against EU 004FD320..004FD3E8 (strb order: [sp] = a[3],
 * [sp+1] = a[2], [sp+2] = a[1], [sp+3] = a[0]; unsigned `bls`/`bhi` on the count, signed
 * `ble`/`bgt` on the material count re-read each iteration).  Confidence: high. */
#include "../route.h"

int func_004D00E4(char *model, int idx, int a, uint8_t *colour);

void func_004FD348(char *self, const uint8_t *rgba, int all)
{
    uint8_t c[4] = { rgba[3], rgba[2], rgba[1], rgba[0] };
    for (uint32_t i = 0; i < RF(self, 0xA8, uint8_t); i++) {
        char *e = self + i * 12;
        uint8_t fl = RF(e, 4, uint8_t);
        if (!((all == 0 && (fl & 2)) || (fl & 8)))
            continue;
        char *m = RP(e, 0);
        if (!m)
            continue;
        RF(m, 0x164, uint32_t) |= 0x10000;
        for (int32_t k = 0; k < RF(RP(m, 0x20), 4, int32_t); k++)
            func_004D00E4(m, k, 1, c);
    }
}
