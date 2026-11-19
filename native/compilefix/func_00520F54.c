/* compilefix: USA 00520F54 (EU 00520F2C), actor push vector (child method or position - previous position): tail-call arguments restored (BOOT_LOG 160ac). */
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 00520F54 <- EU 00520F2C (Ghidra, non-matching)

undefined4 func_00520F54(int param_1,float *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  puVar1 = *(undefined4 **)(param_1 + 0x3a8);
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00520f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    /* ARM EU 520F40..520F54: tail call `bx r12` with r1 (the output vector) and r2 left as
     * passed: the child's method 0 fills param_2. The Ghidra call passed only the child: the
     * caller's vector kept stack garbage, e.g. (1, 1, 1) added to Link's displacement every few
     * frames - he bounced off the raised floor edges in the Eastern Palace (BOOT_LOG 160ac) */
    return ((undefined4 (*)(undefined4 *, float *, undefined4))*(code **)*puVar1)(puVar1, param_2, param_3);
  }
  func_00115C70(&local_18,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
  *param_2 = local_18;
  param_2[1] = fStack_14;
  param_2[2] = fStack_10;
  return 0;
}

