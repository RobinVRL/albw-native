#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float DAT_001281b8;
extern undefined4 DAT_001281bc;

// USA 0012813C <- EU 0012813C (Ghidra, non-matching)
// GLOBAL DAT_001281b8 float
// GLOBAL DAT_001281bc undefined4

void func_0012813C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = DAT_001281b8;
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x10);
  *(float *)(param_1 + 0x8fc) = *(float *)(param_1 + 0x8fc) + fVar1;
  uVar2 = DAT_001281bc;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001281bc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffdf;
  func_004FABDC(param_1,0,0xffffffff,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffef;
  *(undefined1 *)(param_1 + 0x928) = 1;
  return;
}

