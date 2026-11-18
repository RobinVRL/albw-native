#include "ghidra_types.h"

extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00143e78;
extern float DAT_00143e7c;

// USA 00143DB0 <- EU 00143DB0 (Ghidra, non-matching)
// GLOBAL DAT_00143e78 undefined4
// GLOBAL DAT_00143e7c float

undefined4 func_00143DB0(int param_1,int param_2,int param_3,float fparam_0)

{
  undefined4 uVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  
  fVar2 = DAT_00143e7c;
  uVar1 = DAT_00143e78;
  if (*(char *)(param_1 + 0x428) == '\a') {
    *(int *)(param_1 + 0x494) = param_2;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x498) = uVar1;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x498) = fVar2 / fVar3;
    }
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(int *)(param_1 + 0x4ac) = param_3;
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x4b0) = uVar1;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x4b0) = fVar2 / fVar3;
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x458) = *(float *)(param_1 + 0x458) + fparam_0;
    return func_006576C4((undefined4 *)(param_1 + 0x424),8);
  }
  return 0;
}

