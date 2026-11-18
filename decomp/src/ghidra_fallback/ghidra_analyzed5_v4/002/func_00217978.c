#include "ghidra_types.h"

extern int func_004F499C(int param_1,int param_2);
extern float DAT_00217a04;
extern float DAT_00217a08;

// USA 00217978 <- EU 00217978 (Ghidra, non-matching)
// GLOBAL DAT_00217a04 float
// GLOBAL DAT_00217a08 float

undefined4 func_00217978(int param_1,undefined4 param_2,uint param_3,float fparam_0)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  
  uVar1 = *(uint *)(param_1 + 0x8e8);
  if (uVar1 != 0) {
    param_3 = *(uint *)(param_1 + 0x8e4);
  }
  fVar2 = DAT_00217a08;
  if ((uVar1 != 0 && param_3 != 0) && (fVar2 = DAT_00217a04, param_3 < uVar1)) {
    fVar2 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar2 * *(float *)(param_1 + 0x8ec);
  }
  fVar2 = (DAT_00217a04 - fVar2) * *(float *)(param_1 + 0x8f0);
  *(float *)(param_1 + 0x4e4) = fVar2;
  *(float *)(param_1 + 0x4e8) = fVar2;
  *(float *)(param_1 + 0x4ec) = fVar2;
  if (*(uint *)(param_1 + 0x8e8) <= *(uint *)(param_1 + 0x8e4)) {
    return func_004F499C(param_1,0);
  }
  *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  return 0;
}

