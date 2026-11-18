#include "ghidra_types.h"

extern int func_003E161C(int param_1,undefined4 *param_2);
extern float func_003E2230(float fparam_0);
extern float DAT_003de4b4;
extern float DAT_003de4b8;
extern float DAT_003de4bc;
extern float DAT_003de4c0;

// USA 003DE458 <- EU 003DE438 (Ghidra, non-matching)
// GLOBAL DAT_003de4b4 float
// GLOBAL DAT_003de4b8 float
// GLOBAL DAT_003de4bc float
// GLOBAL DAT_003de4c0 float

undefined4 func_003DE458(int param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  if (16000 < param_2) {
    param_2 = 16000;
  }
  fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = func_003E2230(fVar1 * DAT_003de4b4);
  fVar1 = DAT_003de4b8 - fVar1;
  fVar1 = SQRT(fVar1 * fVar1 - DAT_003de4bc) - fVar1;
  fVar2 = fVar1 * DAT_003de4c0;
  *(short *)(param_1 + 8) = (short)(int)((fVar1 + DAT_003de4bc) * DAT_003de4c0);
  *(short *)(param_1 + 10) = -(short)(int)fVar2;
  return func_003E161C(*(int *)(param_1 + 0x68),(undefined4 *)(param_1 + 8));
}

