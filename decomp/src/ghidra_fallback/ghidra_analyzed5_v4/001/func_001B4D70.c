#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b4e20;
extern int *DAT_001b4e24;
extern float DAT_001b4e28;

// USA 001B4D70 <- EU 001B4D70 (Ghidra, non-matching)
// GLOBAL DAT_001b4e20 undefined4
// GLOBAL DAT_001b4e24 int *
// GLOBAL DAT_001b4e28 float

void func_001B4D70(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_001b4e20;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b4e20;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  uVar2 = func_00111A64((uint *)(*DAT_001b4e24 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0x78 >> 0x20) + 0x78;
  *(int *)(param_1 + 0x934) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x938) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x938) = DAT_001b4e28 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x930) = 0;
  func_004FC07C(param_1,2,0xffffffff,0);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x93c) = 0;
  do {
    iVar1 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(param_1 + 0x958 + iVar1) = 0;
  } while (iVar3 != 4);
  *(undefined1 *)(param_1 + 0x984) = 0;
  return;
}

