/* USA 00366694 (EU 00366670): message/event handler of the player's Tornado Rod effect object
 * (virtual; strings SE_PL_TornadeRod_BLOWUP[_Lv2]): clears *(+0x2C)+0xC7, latches
 * *(+0x30)+4 into +0x154, then switches on the s16 message id at msg+2 (0x3A..0x3E, jump table
 * 003666B0): 0x3A stop (+0x13C = 0, +0x58 = 0054C998(+0x48, **(+0x3C))); 0x3B start (save
 * positions +0x130/+0x140, sound by level *(+0x28)+0x45C == 3); 0x3D reset (001DC3C4 with a zero
 * Vec3, 0028C8EC(+0x4C, 1)); 0x3E flags (+0x13F = bits(*(+0x34)+4) > 0xBE800000 unsigned,
 * clamp *(*(+0x28)+0x618)+0x30 up to 1).
 * Route: player item/effect objects created with Link (actor-player phase, depth 3); stub today.
 * Bug: the converted source did not compile (Ghidra's switch over an `int *`).
 * Verified instruction by instruction against EU 00366670..00366864 incl. the 5-entry jump
 * table (0x3C = no-op).  Return value: r0 as left by the ARM code.  Confidence: high. */
#include "../route.h"

extern uint32_t data_00711F50[];
int func_0054C998(int a, int b);
int func_003A5CC4(int obj);
int func_001DC3C4(int obj, uint32_t *v, int a);
int func_0028C8EC(int obj, uint32_t n, uint32_t c, int *d);
int func_004EA104(int mgr, int *name, int a);

int func_00366694(char *self, char *msg)
{
    RF(RP(self, 0x2C), 0xC7, uint8_t) = 0;
    char *p30 = RP(self, 0x30);
    RF(self, 0x154, uint32_t) = RF(p30, 4, uint32_t);
    uint32_t k = (uint32_t)(RF(msg, 2, int16_t) - 0x3A);
    switch (k) {
    case 0: {
        RF(self, 0x13C, uint8_t) = 0;
        int r = func_0054C998((int)RF(self, 0x48, uint32_t), (int)RF(RP(self, 0x3C), 0, uint32_t));
        RF(self, 0x58, int) = r;
        return r;
    }
    case 1: {
        RF(self, 0x13C, uint8_t) = 1;
        RF(self, 0x130, uint32_t) = RF(p30, 0, uint32_t);
        RF(self, 0x134, uint32_t) = RF(p30, 4, uint32_t);
        RF(self, 0x138, uint32_t) = RF(p30, 8, uint32_t);
        p30 = RP(self, 0x30);
        RF(self, 0x140, uint32_t) = RF(p30, 0, uint32_t);
        RF(self, 0x144, uint32_t) = RF(p30, 4, uint32_t);
        RF(self, 0x148, uint32_t) = RF(p30, 8, uint32_t);
        RF(RP(self, 0x3C), 0, uint32_t) = RF(self, 0x58, uint32_t);
        RF(self, 0x14C, uint32_t) = RF(RP(self, 0x30), 4, uint32_t);
        func_003A5CC4((int)RF(self, 0x158, uint32_t));
        RF(RP(self, 0x34), 0, float) = 0.0f;
        RF(RP(self, 0x34), 8, float) = 0.0f;
        char *m = RP(self, 0x2C);
        RF(m, 0x170, uint32_t) = RF(self, 0x140, uint32_t);
        RF(m, 0x174, uint32_t) = RF(self, 0x144, uint32_t);
        RF(m, 0x178, uint32_t) = RF(self, 0x148, uint32_t);
        route_safestr name = route_safestr_make(RF(RP(self, 0x28), 0x45C, uint32_t) == 3
                                                    ? "SE_PL_TornadeRod_BLOWUP_Lv2"
                                                    : "SE_PL_TornadeRod_BLOWUP");
        return func_004EA104((int)data_00711F50[0], (int *)&name, 0);
    }
    case 3: {
        RF(self, 0x13C, uint8_t) = 0;
        RF(self, 0x58, uint32_t) = RF(RP(self, 0x3C), 0, uint32_t);
        RF(self, 0x150, uint32_t) = 0;
        RF(self, 0x13D, uint8_t) = RF(msg, 8, uint8_t);
        float v[3] = { 0.0f, 0.0f, 0.0f };
        func_001DC3C4((int)RF(self, 0x28, uint32_t), (uint32_t *)v, 0);
        return func_0028C8EC((int)RF(self, 0x4C, uint32_t), 1, 0, 0);
    }
    case 4: {
        RF(self, 0x13E, uint8_t) = 0;
        RF(self, 0x13F, uint8_t) = RF(RP(self, 0x34), 4, uint32_t) > 0xBE800000u; /* bits of -0.25f */
        char *c = RP(RP(self, 0x28), 0x618);
        uint32_t n = RF(c, 0x30, uint32_t);
        if (n <= 1)
            n = 1;
        RF(c, 0x30, uint32_t) = n;
        return (int)n;
    }
    default:
        return (int)GPTR_OF(p30);
    }
}
