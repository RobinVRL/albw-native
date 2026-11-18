#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam0022e7d4;
extern float fRam0022e7d8;
extern undefined4 uRam0022e7dc;

// USA 0022E728 <- EU 0022E728 (Ghidra, non-matching)
// GLOBAL UNK_0022e7d4 float
// GLOBAL UNK_0022e7d8 float
// GLOBAL UNK_0022e7dc undefined4

void func_0022E728(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  func_004FABDC(param_1,1,0xffffffff,0);
  fVar4 = fRam0022e7d4;
  func_004FB0A4(param_1,fRam0022e7d4);
  func_004FB4E0(param_1,fVar4);
  *(undefined4 *)(param_1 + 1000) = 0;
  uVar2 = uRam0022e7dc;
  fVar1 = fRam0022e7d8;
  if (*(char *)(param_1 + 0xa58) == '\0') {
    *(undefined4 *)(param_1 + 0xa60) = 0x32;
    *(undefined4 *)(param_1 + 0xa64) = uVar2;
    *(undefined4 *)(param_1 + 0xa5c) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0xa54);
  *(int *)(param_1 + 0xa60) = iVar3;
  if (iVar3 == 0) {
    *(float *)(param_1 + 0xa64) = fVar4;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xa64) = fVar1 / fVar4;
  }
  *(undefined4 *)(param_1 + 0xa5c) = 0;
  return;
}

