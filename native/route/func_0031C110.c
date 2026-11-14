/* USA 0031C110 (EU 0031C0EC): calc of a HUD layout part that fades with a value read from the
 * global game object (*data_0070FB60, float getter 00546258): keeps the previous value (+0xE4),
 * runs StateMgr::exec (StateMgr at +0x50), writes alpha (1 - clamp01(v)) * +0xF0 into the pane
 * colour of entry s16 +0x82 of *(this+0x1C), then steps the +0x8C/+0x80 counters over 60 frames
 * (+0xEC: -1 idle, 0..0x28 delay, ..0x3C interpolate, then snap) through 0023194C.
 * Route: HUD (route phase 7).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar8)()`).
 * Verified instruction by instruction against EU 0031C0EC..0031C2C0: vcmpe `lo`/`gt` clamp
 * (NaN kept), unsigned `cmp count, idx` entry select (stride 56), vsub/vmul order, saturating
 * vcvt.s32.f32, signed bge on the counters, reloads of +0xEC.  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_0070FB60[];
float func_00546258(int obj);
int func_00532C2C(void *counter);
void func_0023194C(void *counter, int32_t value);

void func_0031C110(char *self)
{
    if (RF(self, 0xE8, uint8_t) == 0)
        return;
    RF(self, 0xE4, uint32_t) = RF(self, 0xE0, uint32_t);
    RF(self, 0xE0, float) = func_00546258((int)data_0070FB60[0]);
    route_statemgr_exec(RAT(self, 0x50));

    float v = RF(self, 0xE0, float);
    if (v < 0.0f)
        v = 0.0f;
    else if (v > 1.0f)
        v = 1.0f;
    char *tbl = RP(self, 0x1C);
    int32_t idx = RF(self, 0x82, int16_t);
    char *e = RF(tbl, 8, uint32_t) > (uint32_t)idx ? RP(tbl, 0xC) + idx * 56 : RP(tbl, 0xC);
    float a = (1.0f - v) * RF(self, 0xF0, float);
    RF(e, 0x14, float) = a;
    RF(RP(e, 0x10), 0x10, float) = a;

    int32_t n = RF(self, 0xEC, int32_t);
    if (n == -1) {
        int32_t cur = func_00532C2C(RAT(self, 0x8C));
        if (cur >= func_00532C2C(RAT(self, 0x80)))
            return;
        func_0023194C(RAT(self, 0x8C), route_vcvt_s32(1.0f * RF(self, 0xF0, float)));
        return;
    }
    if (n > 0x28) {
        if (n >= 0x3C) {
            func_0023194C(RAT(self, 0x8C), route_vcvt_s32(1.0f * RF(self, 0xF0, float)));
            RF(self, 0xEC, int32_t) = -1;
            return;
        }
        float to = (float)func_00532C2C(RAT(self, 0x80));
        float from = (float)func_00532C2C(RAT(self, 0x8C));
        float steps = (float)(0x3C - RF(self, 0xEC, int32_t));
        float x = (to - from) / steps + from;
        func_0023194C(RAT(self, 0x8C), route_vcvt_s32(x));
    }
    RF(self, 0xEC, int32_t) = RF(self, 0xEC, int32_t) + 1;
}
