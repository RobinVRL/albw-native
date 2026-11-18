#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b4d60;
extern undefined4 DAT_001b4d64;
extern float DAT_001b4d68;
extern int *DAT_001b4d6c;

// USA 001B4CBC <- EU 001B4CBC (Ghidra, non-matching)
// GLOBAL DAT_001b4d60 undefined4
// GLOBAL DAT_001b4d64 undefined4
// GLOBAL DAT_001b4d68 float
// GLOBAL DAT_001b4d6c int *

undefined4 func_001B4CBC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = DAT_001b4d64;
  uVar5 = DAT_001b4d60;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b4d60;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  *(undefined4 *)(param_1 + 0x900) = 0x78;
  *(undefined4 *)(param_1 + 0x904) = uVar1;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  fVar6 = DAT_001b4d68;
  *(undefined4 *)(param_1 + 0x90c) = 1;
  uVar2 = func_00111A64((uint *)(*DAT_001b4d6c + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0xf0 >> 0x20) + 0x3c;
  *(int *)(param_1 + 0x934) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x938) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x938) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x930) = 0;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

