/* USA 002E01F0: tail jump to the object's virtual +0x4C (ldr r2,[r0]; ldr r2,[r2,#0x4C]; bx r2) - r1
 * reaches the target unchanged. Ghidra's text passed only the object (160bf stub review, same
 * class as 001E8C44). Confidence: high (EU code bytes). */
typedef unsigned int u32;
typedef u32 (*VFn)(int *self, u32 a);

u32 func_002E01F0(int *param_1, u32 param_2)
{
    return ((VFn)(*(u32 **)param_1)[0x4c / 4])(param_1, param_2);
}
