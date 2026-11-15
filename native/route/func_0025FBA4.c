/* USA 0025FBA4 (EU 0025FBCC): title-screen object calc (*(TaskFileSelect+0xEC), vtable +0x60,
 * called every frame by 0029B698): inlined StateMgr::exec (sm = this+0x48), then from state 1 on a
 * frame counter (+0x80; +0x194 = 1 at frame 0x19F, from 0x1A0 the value +0x7C ramps down to
 * DAT_0025FCC8 while above it), tail call 0025F794 (logo / model placement).
 * Bug: the state handler PMF was printed as `(*pcVar5)()` without its `this` (r0 = *(this+0x5C)
 * adjusted by adj >> 1, ARM 0025FBD4-0025FC0C); state 1's handler 0025F374 then read a garbage
 * object and crashed (SIGSEGV) the first time the title reached it (BOOT_LOG stop 77).
 * CLASS: lost `this` in no-argument pmf calls (route class B). Verified against EU
 * 0025FBCC..0025FCC4. The tail call's r1-r3 are dead values on ARM (0025F794 forwards them to
 * 00169A80, which ignores them here as on the 3DS). Confidence: high. */
#include "route.h"

extern float DAT_0025fcc8, DAT_0025fccc, DAT_0025fcd0, DAT_0025fcd4;
int func_0025F794(char *self, int a, int b, int *c);

int func_0025FBA4(char *self)
{
    route_statemgr_exec(RAT(self, 0x48));
    if (RF(self, 0x4C, int8_t) >= 1) {
        RF(self, 0x194, uint8_t) = 0;
        uint32_t n = RF(self, 0x80, uint32_t) + 1;
        RF(self, 0x80, uint32_t) = n;
        if (n == 0x19F) {
            RF(self, 0x194, uint8_t) = 1;
        } else if (n >= 0x1A0 && RF(self, 0x7C, float) > DAT_0025fcc8) {
            float v = DAT_0025fcd4 - ((float)n - DAT_0025fccc) * DAT_0025fcd0;
            if (v < DAT_0025fcc8)
                v = DAT_0025fcc8;
            RF(self, 0x7C, float) = v;
        }
    }
    return func_0025F794(self, 0, 0, 0);
}
