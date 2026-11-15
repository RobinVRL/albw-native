/* USA 0049D4A0 (EU 0049D478): `ldr r0, [r0, #0x5c]` then falls into sead::TaskMgr::createTaskSync
 * (0049D4A8): createTaskSync(this->+0x5C (the TaskMgr), arg). Ghidra decompiled the fall-through
 * as a second copy of createTaskSync, i.e. the unfixed round-2 version (native/framework has the
 * corrected 0049D4A8); this was spinning in TaskRender's prepare (0014B0D0). Confidence: high. */
#include <stdint.h>

extern int func_0049D4A8(uint32_t self_w, uint32_t *arg_p);

uint32_t func_0049D4A0(uint8_t *self, void *arg)
{
    return (uint32_t)func_0049D4A8(*(uint32_t *)(self + 0x5c), (uint32_t *)arg);
}
