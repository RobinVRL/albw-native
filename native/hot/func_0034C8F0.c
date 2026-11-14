/* USA 0034C8F0 <- EU 0034C8CC: DamageInfo::merge(model, const Hit *hit) -> 1   (53 caller files)
 * self: the damage info read by 004F70A8 (+0 type mask, +0x20.. attack record: +0x21 s8 type,
 * +0x30 u16 amount). hit+0x2C -> attack record a (0x18 bytes); model = resistance table.
 *   if (!a) return 1;
 *   immune = 0;
 *   if (model) { t = (s8)a[1]; if ((u32)t >= 0x13) immune = 1;          (unsigned: negatives too)
 *                else { k = (u8)*(u16 *)(model + 0xE + (t < 0x12 ? 2t : 0)); if (!k) return 0;
 *                       immune = k; } }
 *   self[0] |= 1 << (u8)a[1]   (ARM register shift: amounts >= 32 give 0)
 *   if ((s8)a[1] <= (s8)self[0x21]) {                                  (keep the strongest)
 *     self[4] = hit[0x28]; self[8..0x1C] = hit[4..0x18]; bytes self[0x20..0x23] = a[0..3];
 *     self[0x24..0x2C] = a[4..0xC]; (u16)self[0x30] = a[0x10]; (u16)self[0x32] = a[0x12];
 *     self[0x34] = a[0x14]; self[0x38] = hit[0x30]; self[0x3C..0x44] = hit[0x3C..0x44];
 *     if (immune == 1) (u16)self[0x30] = 0; }
 *   return 1
 *
 * Ghidra vs ARM: `1 << puVar2[1]` with the unsigned type byte: C shifts >= 32 are undefined
 * (x86 masks the count to 5 bits: type 0xFF sets bit 31), ARM `lsl` by register gives 0 for
 * counts 32..255. Fixed. Otherwise correct (EU 0034C8CC-0034C9F8). Confidence: high (flow),
 * medium (names). */
#include "hot.h"

int func_0034C8F0(uint32_t self_w, uint32_t model, uint32_t hit_w)
{
    char *self = P(self_w), *hit = P(hit_w);
    uint32_t a_w = W(hit, 0x2C);
    if (a_w == 0)
        return 1;
    char *a = P(a_w);
    uint32_t immune = 0;
    if (model != 0) {
        int32_t t = FLD(a, 1, int8_t);
        if ((uint32_t)t >= 0x13) {
            immune = 1;
        } else {
            char *p = P(model) + 0xE;
            if ((uint32_t)t < 0x12)
                p += t * 2;
            immune = FLD(p, 0, uint16_t) & 0xFF;
            if (immune == 0)
                return 0;
        }
    }
    uint32_t sh = FLD(a, 1, uint8_t);
    W(self, 0) |= sh < 32 ? 1u << sh : 0u;
    if (FLD(a, 1, int8_t) > FLD(self, 0x21, int8_t))
        return 1;
    W(self, 4) = W(hit, 0x28);
    for (int o = 0; o < 0x18; o += 4)
        W(self, 8 + o) = W(hit, 4 + o);
    for (int o = 0; o < 4; o++)
        FLD(self, 0x20 + o, uint8_t) = FLD(a, o, uint8_t);
    W(self, 0x24) = W(a, 4);
    W(self, 0x28) = W(a, 8);
    W(self, 0x2C) = W(a, 0xC);
    FLD(self, 0x30, uint16_t) = FLD(a, 0x10, uint16_t);
    FLD(self, 0x32, uint16_t) = FLD(a, 0x12, uint16_t);
    W(self, 0x34) = W(a, 0x14);
    W(self, 0x38) = W(hit, 0x30);
    W(self, 0x3C) = W(hit, 0x3C);
    W(self, 0x40) = W(hit, 0x40);
    W(self, 0x44) = W(hit, 0x44);
    if (immune == 1)
        FLD(self, 0x30, uint16_t) = 0;
    return 1;
}
