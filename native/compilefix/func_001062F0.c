/* USA 001062F0: call r0 with r0 = *r1 and r1 unchanged (mov r2,r0; ldr r0,[r1]; bx r2). Ghidra's text
 * dropped r1 (160bf stub review). Confidence: high (EU code bytes). */
typedef unsigned int u32;
typedef u32 (*Fn)(u32 a, u32 *b);

u32 func_001062F0(void *fn, u32 *param_2)
{
    return ((Fn)fn)(*param_2, param_2);
}
