/* USA 0057D87C (EU 0057D854): sead task factory invoke: factory = {u8 kind, u32 value}.
 *   kind 2: value is a create function, call value(arg)
 *   kind 1 / 3: call the global hook (0x00716650 [0] / [1]) as hook(value, arg) if set
 *   else 0. Returns the created task.
 * Native fix of the Ghidra decompilation: in kinds 1/3 the hook gets `arg` in r1 (left
 * unchanged at EU 0057D8B0), Ghidra dropped it. Confidence: high. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern uint32_t data_00716650[];

void *func_0057D87C(const uint8_t *factory, void *arg)
{
    uint32_t value = *(const uint32_t *)(factory + 4);
    uint32_t hook;
    switch (factory[0]) {
    case 2: {
        void *r = ((void *(*)(void *))(uintptr_t)value)(arg);
        if (getenv("ALBW_TRACE_TASKS")) {
            fprintf(stderr, "task factory %#x(%p) -> %p\n", value, arg, r);
        }
        return r;
    }
    case 1:
        hook = data_00716650[0];
        break;
    case 3:
        hook = data_00716650[1];
        break;
    default:
        return 0;
    }
    if (!hook)
        return 0;
    return ((void *(*)(uint32_t, void *))(uintptr_t)hook)(value, arg);
}
