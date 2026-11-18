#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AC38(int param_1);
extern float fRam002f30f4;
extern undefined4 uRam002f30ec;
extern undefined4 uRam002f30f0;
extern undefined4 uRam002f30f8;

// USA 002F3034 <- EU 002F3010 (Ghidra, non-matching)
// GLOBAL UNK_002f30ec undefined4
// GLOBAL UNK_002f30f0 undefined4
// GLOBAL UNK_002f30f4 float
// GLOBAL UNK_002f30f8 undefined4

void func_002F3034(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  if (*(char *)(param_1 + 0x8cd) == '!') {
    return;
  }
  func_004FABDC(param_1,3,0xffffffff,0);
  uVar4 = uRam002f30ec;
  *(undefined4 *)(param_1 + 0x3dc) = uRam002f30ec;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  uVar1 = uRam002f30f0;
  *(undefined4 *)(param_1 + 0xb10) = 0x34;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(undefined4 *)(param_1 + 0x920) = 1;
  fVar5 = fRam002f30f4;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  fVar3 = func_0058AC38(param_1);
  iVar2 = (int)fVar3 + 0x1e;
  *(int *)(param_1 + 0xb28) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xb2c) = uVar4;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xb2c) = fVar5 / fVar3;
  }
  *(undefined4 *)(param_1 + 0xb24) = 0;
  if (*(int *)(param_1 + 0x410) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = uRam002f30f8;
  }
  return;
}

