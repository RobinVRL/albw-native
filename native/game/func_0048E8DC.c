/* USA 0048E8DC (EU 0048E8B4): NullFaderTask constructor: base ctor 0048E140(this, arg,
 * name "NullFaderTask"), vtable 006F5654, +0x1D8/+0x1DC/+0x1E0 = 0. Returns this.
 * Native fix of the Ghidra decompilation: the name is a string in the code section
 * (EU `add r2, pc, #0x20` = 0048E8DC), which Ghidra printed as the integer 0x48e8dc.
 * Confidence: high. */
#include <stdint.h>

extern uint32_t data_006F5654[];
void *func_0048E140(void *self, void *arg, const char *name);

void *func_0048E8DC(void *self_, void *arg)
{
    uint32_t *self = func_0048E140(self_, arg, "NullFaderTask");
    self[0x1D8 / 4] = 0;
    self[0] = (uint32_t)(uintptr_t)data_006F5654;
    self[0x1DC / 4] = 0;
    self[0x1E0 / 4] = 0;
    return self;
}
