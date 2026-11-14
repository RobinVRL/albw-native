/* USA 0040E860 (EU 0040E840): the game's sound-thread body (nw::snd SoundThread::ThreadProc
 * shape): until this+0x14 (quit) is set:
 *   a = 0040F2E4() (singleton: sound frame manager); 0040F484(a)   (process queued commands)
 *   if quit: return
 *   lock this+8; a = 0040F2E4(); 0040F21C(a); unlock          (frame update)
 *   b = 00412F58() (singleton: driver command manager); 00412E2C(b)
 * Native fix of the auto-converted "matched" source (src/work8/ds_srv/ds3/func_0040E860.c):
 * the singleton getters' results were not passed on (on ARM they stay in r0 for the next call),
 * so 0040F484 got NULL. Confidence: high. */
#include <stdint.h>

void *func_0040F2E4(void);
void func_0040F484(void *mgr);
void func_0040F21C(void *mgr);
void *func_00412F58(void);
void func_00412E2C(void *mgr);
void func_0010C0C0(void *cs);
void func_0010C160(void *cs);

void func_0040E860(uint8_t *self)
{
    while (!self[0x14]) {
        func_0040F484(func_0040F2E4());
        if (self[0x14])
            return;
        func_0010C0C0(self + 8);
        func_0040F21C(func_0040F2E4());
        func_0010C160(self + 8);
        func_00412E2C(func_00412F58());
    }
}
