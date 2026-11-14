/* USA 003FEE98 (EU 003FEE78): nw::lyt::AnimTransformBasic::Animate(): when enabled (u8 +0x14),
 * for each of the u16 +0x20 bindings {target, AnimationContent *} at +0x1C:
 *   content->+0x1D == 0 ? this->vt[0x48](this, target, content) (pane)
 *                       : this->vt[0x4C](this, target, content) (material)
 * Native fix of the generated Ghidra text: both virtual calls lost r2 = the animation content
 * (EU 003FEEA4 `ldr r2, [r0, #4]`), so 003FE3A8 parsed garbage. Confidence: high. */
#include <stdint.h>

typedef void (*AnimFn)(int *self, uint32_t target, uint32_t content);

void func_003FEE98(int *param_1)
{
    if (*(char *)(param_1 + 5) == '\0')
        return;
    uint16_t n = *(uint16_t *)(param_1 + 8);
    for (int i = 0; i < (int)n; i++) {
        uint32_t *b = (uint32_t *)(uintptr_t)(uint32_t)(param_1[7] + i * 8);
        uint32_t content = b[1];
        void **vt = (void **)(uintptr_t)(uint32_t)*param_1;
        AnimFn fn = (AnimFn)(*(char *)(uintptr_t)(content + 0x1d) == 0 ? vt[0x48 / 4] : vt[0x4c / 4]);
        fn(param_1, b[0], content);
    }
}
