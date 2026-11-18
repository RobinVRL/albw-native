#include "ghidra_types.h"

extern float DAT_004f0b04;

// USA 004F0AD4 <- EU 004F0AAC (Ghidra, non-matching)
// GLOBAL DAT_004f0b04 float

undefined4 func_004F0AD4(int param_1,int param_2,float fparam_0,float fparam_1)

{
  if (param_2 != 0) {
    if (fparam_0 < DAT_004f0b04) {
      fparam_0 = *(float *)(param_1 + 0x128);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(float *)(param_1 + 0x120) = fparam_0;
    *(float *)(param_1 + 0x124) = fparam_1;
    *(int *)(param_1 + 300) = param_2;
    *(undefined1 *)(param_1 + 0x134) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(float *)(param_1 + 0x128) = fparam_1;
                    /* WARNING: Could not recover jumptable at 0x004f0b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),0);
}

