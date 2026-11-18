#include "ghidra_types.h"

extern float DAT_005248a4;

// USA 00524898 <- EU 00524870 (Ghidra, non-matching)
// GLOBAL DAT_005248a4 float

void func_00524898(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_005248a4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x3d0);
    fVar2 = *(float *)(param_1 + 0x3d4);
    param_2[1] = ALBW_AS_U32(fVar2);
    param_2[2] = *(undefined4 *)(param_1 + 0x3d8);
    param_2[1] = ALBW_AS_U32(fVar2 + fVar1);
  }
  return;
}

