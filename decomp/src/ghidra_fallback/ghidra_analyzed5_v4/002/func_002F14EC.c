#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_002f152c;
extern float DAT_002f1530;
extern float DAT_002f1534;

// USA 002F14EC <- EU 002F14C8 (Ghidra, non-matching)
// GLOBAL DAT_002f152c float
// GLOBAL DAT_002f1530 float
// GLOBAL DAT_002f1534 float

void func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1)

{
  uint in_fpscr;
  float fVar1;
  undefined8 uVar2;
  
  *(float *)(param_1 + 0xc70) = fparam_0;
  fVar1 = fparam_1 * DAT_002f152c;
  uVar2 = func_00114608((uint)ALBW_AS_U32(fVar1),param_2);
  *(int *)(param_1 + 0xc68) = (int)uVar2;
  if (param_2 == 0) {
    fVar1 = DAT_002f1530;
  }
  *(uint *)(param_1 + 0xc78) = param_2;
  if (param_2 == 0) {
    *(float *)(param_1 + 0xc7c) = fVar1;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc7c) = DAT_002f1534 / fVar1;
  }
  *(undefined4 *)(param_1 + 0xc74) = 0;
  return;
}

