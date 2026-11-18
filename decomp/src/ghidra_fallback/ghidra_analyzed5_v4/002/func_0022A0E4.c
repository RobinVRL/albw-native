#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam0022a148;

// USA 0022A0E4 <- EU 0022A0E4 (Ghidra, non-matching)
// GLOBAL UNK_0022a148 float

void func_0022A0E4(int param_1)

{
  float fVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff70;
  func_004FABDC(param_1,9,0,0);
  fVar1 = fRam0022a148;
  func_004FB4E0(param_1,fRam0022a148);
  *(float *)(param_1 + 0x3dc) = fVar1;
  *(float *)(param_1 + 0x3e0) = fVar1;
  *(float *)(param_1 + 0x3e4) = fVar1;
  *(undefined1 *)(param_1 + 0xd08) = 0;
  return;
}

