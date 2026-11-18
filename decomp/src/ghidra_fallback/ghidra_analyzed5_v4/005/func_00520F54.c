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
    return (**(code **)*puVar1)(puVar1);
  }
  func_00115C70(&local_18,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
  *param_2 = local_18;
  param_2[1] = fStack_14;
  param_2[2] = fStack_10;
  return 0;
}

