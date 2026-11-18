#include "ghidra_types.h"

extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float DAT_0015c4fc;
extern float DAT_0015c500;

// USA 0015C4B0 <- EU 0015C4B4 (Ghidra, non-matching)
// GLOBAL DAT_0015c4fc float
// GLOBAL DAT_0015c500 float

void func_0015C4B0(int param_1)

{
  float fVar1;
  
  func_0015AD54(param_1,0xd,0xffffffff,DAT_0015c4fc);
  fVar1 = DAT_0015c500;
  func_004FB4E0(param_1,DAT_0015c500);
  *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x960) + 0x1c) + 0x14) + 0x10) = fVar1;
  return;
}

