#include "ghidra_types.h"

extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0065E630(undefined4 *param_1,undefined1 param_2);
extern float DAT_002239e8;
extern float DAT_002239ec;
extern float DAT_002239f0;
extern float DAT_002239f4;

// USA 00223970 <- EU 00223970 (Ghidra, non-matching)
// GLOBAL DAT_002239e8 float
// GLOBAL DAT_002239ec float
// GLOBAL DAT_002239f0 float
// GLOBAL DAT_002239f4 float

void func_00223970(int param_1)

{
  float fVar1;
  float fparam_0;
  
  fVar1 = *(float *)(param_1 + 0x924) + (DAT_002239e8 - *(float *)(param_1 + 0x924)) * DAT_002239ec;
  *(float *)(param_1 + 0x924) = fVar1;
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x928) * fVar1;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x930) * fVar1;
  fparam_0 = fVar1 * DAT_002239f0;
  if (DAT_002239f4 < fVar1 * DAT_002239f0) {
    fparam_0 = DAT_002239f4;
  }
  func_004FB4E0(param_1,fparam_0);
  if (0x3b < *(uint *)(param_1 + 0x8bc)) {
    func_0065E630((undefined4 *)(param_1 + 0x8bc),0);
  }
  return;
}

