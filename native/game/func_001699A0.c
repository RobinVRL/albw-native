/* USA 001699A0 (EU 001699A0): apply a kind-1 (material) animation at a clamped frame.
 *   frame (s0) clamped: frame < 0 (or NaN: `vmovlo`) -> 0; else frame > end - 1 -> end - 1
 *   (end = anim +8); only kind-1 animation objects (anim +5 == 1):
 *     param_3 != 0: 00567588(anim, param_1, param_2 + 2, param_2 + 4, param_3) with s0 = frame
 *     param_3 == 0: tail call 0069021C(anim, param_1, param_2 + 2, param_2 + 4) s0 = frame, s1 = 0
 * What was wrong: the Ghidra text called 00567588 without the frame (s0), see func_00567588.c
 * (BOOT_LOG 115). Confidence: high (instruction-level, EU 001699A0-00169A24). */
#include <stdint.h>

extern void func_00567588(int anim, int *ctx20, int *entry, int *p4, uint32_t *p5, float frame);
extern void func_0069021C(int param_1, int *param_2, int *param_3, int *param_4, float fparam_0,
                          float fparam_1);

void func_001699A0(int *param_1, int *param_2, uint32_t *param_3, float frame) {
    int anim = *param_2;
    float last = *(float *)(uintptr_t)(uint32_t)(anim + 8) - 1.0f;
    if (!(frame >= 0.0f))           /* vcmpe s0, #0; vmovlo: less or unordered */
        frame = 0.0f;
    else if (frame > last)
        frame = last;
    if (*(uint8_t *)(uintptr_t)(uint32_t)(anim + 5) != 1)
        return;
    if (param_3 == 0) {
        func_0069021C(anim, param_1, param_2 + 2, param_2 + 4, frame, 0.0f);
        return;
    }
    func_00567588(anim, param_1, param_2 + 2, param_2 + 4, param_3, frame);
}
