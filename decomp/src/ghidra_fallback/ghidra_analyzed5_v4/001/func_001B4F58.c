#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam001b5014;
extern undefined4 DAT_001b500c;
extern float DAT_001b5010;

// USA 001B4F58 <- EU 001B4F58 (Ghidra, non-matching)
// GLOBAL DAT_001b500c undefined4
// GLOBAL DAT_001b5010 float
// GLOBAL UNK_001b5014 float

void func_001B4F58(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fparam_0;
  
  uVar1 = DAT_001b500c;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x33;
  *(undefined4 *)(param_1 + 0x934) = 0x1e;
  *(undefined4 *)(param_1 + 0x938) = uVar1;
  fparam_0 = DAT_001b5010;
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(float *)(param_1 + 0x3dc) = fparam_0;
  *(float *)(param_1 + 0x3e0) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  func_004FABDC(param_1,10,0xffffffff,0);
  func_004FB4E0(param_1,fparam_0);
  fVar2 = *(float *)(param_1 + 0x3d4) + fRam001b5014;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x36c) = fVar2;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0x3d4) = fVar2;
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x97c) = fVar2;
  *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x3d8);
  *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fparam_0;
  return;
}

