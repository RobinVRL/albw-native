/* USA 00410260 (EU 00410240): sequence sound: queue command 0x11 (set tempo ratio) for the player
 * at this + 0x124 with the ratio (ARM: r0 = this, s0 = ratio; EU 410240..41028C).
 * Replaces the matched source work8/.../00410260.cpp, Cls::f(float): its converted callers
 * (001DFB30 and 2 more) declare (int, r1, r2, r3, float) - Ghidra's placeholders for the unused
 * argument registers - and push the ratio as the 5th word, while the C++ definition read it from
 * the 2nd: every sequence got tempo ratio 0 and never advanced (sword swing and other sequence
 * sounds silent, BOOT_LOG 160g). This definition takes the callers' layout. */
#include <stdint.h>

void *func_00412BB4(void);
void *func_00412A3C(void *queue, int size_words);
void func_00412C68(void *queue, void *cmd);

void func_00410260(char *self, uint32_t r1, uint32_t r2, uint32_t r3, float ratio)
{
    (void)r1; (void)r2; (void)r3;
    char *q = func_00412BB4();
    char *c = func_00412A3C(q, 6);
    *(uint32_t *)(c + 0xC) = *(uint32_t *)(q + 0x184);
    *(uint8_t *)(c + 4) = 0x11;
    *(uint32_t *)(c + 0x10) = (uint32_t)(uintptr_t)(self + 0x124);
    *(float *)(c + 0x14) = ratio;
    func_00412C68(q, c);
}
