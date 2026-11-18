/* USA 002B3774: an actor state step (turn towards +0x95C, then move at speed 0.12 along the facing
 * angle +0x3E8). Port fix (BOOT_LOG 160b): the matched source (decomp work8/sol1/002B3774.cpp) called
 * 0014FAFC as (self, speed, angle) - the order of the old matched 0014FAFC_match.cpp
 * (S::f(float, u32)); the native 0014FAFC takes (self, angle, speed) like every other caller. Same
 * logic as that source, in C. */
#include <stdint.h>

int func_0051D27C(void *angle, uint32_t target, int step);
void func_0014FAFC(char *self, uint32_t angle, float speed);
void func_00662638(void *sm, int state);

void func_002B3774(char *self)
{
    uint32_t *cnt = (uint32_t *)(self + 0x934);         /* {current, max} */
    if (func_0051D27C(self + 0x3E8, *(uint32_t *)(self + 0x95C), 0x5B05B00) != 0) {
        *(uint8_t *)(self + 0x984) = 0;
        func_0014FAFC(self, *(uint32_t *)(self + 0x3E8), 0.12f);
        if (cnt[0] < cnt[1]) cnt[0]++;
        else func_00662638(self + 0x8EC, 3);
        return;
    }
    if (cnt[0] < cnt[1]) cnt[0]++;
    if (*(uint8_t *)(self + 0x984) != 0) {
        *(float *)(self + 0x3DC) = 0.0f;
        *(float *)(self + 0x3E0) = 0.0f;
        *(float *)(self + 0x3E4) = 0.0f;
        return;
    }
    func_0014FAFC(self, *(uint32_t *)(self + 0x3E8), 0.12f);
}
