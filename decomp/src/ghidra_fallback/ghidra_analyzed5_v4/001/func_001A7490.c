#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float fRam001a756c;
extern int *piRam001a7570;
extern undefined4 DAT_001a7564;
extern int DAT_001a7568;

// USA 001A7490 <- EU 001A7490 (Ghidra, non-matching)
// GLOBAL DAT_001a7564 undefined4
// GLOBAL DAT_001a7568 int
// GLOBAL UNK_001a756c float
// GLOBAL UNK_001a7570 int *

void func_001A7490(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar3 = DAT_001a7568;
  uVar5 = DAT_001a7564;
  *(undefined4 *)(param_1 + 0x3e4) = DAT_001a7564;
  *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  cVar1 = *(char *)(param_1 + iVar3);
  func_004FABDC(param_1,0,0xffffffff,0);
  fVar6 = fRam001a756c;
  if (cVar1 == '\x06') {
    if (*(short *)(param_1 + 0x30) == 0) {
      iVar3 = 0xf;
    }
    else {
      iVar3 = 0x3c;
    }
    *(int *)(param_1 + 0x8ec) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x8f0) = uVar5;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x8f0) = fVar6 / fVar4;
    }
    *(undefined4 *)(param_1 + 0x8e8) = 0;
    *(undefined1 *)(param_1 + 0x936) = 1;
    return;
  }
  uVar2 = func_00111A64((uint *)(*piRam001a7570 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0x3c >> 0x20) + 0x3c;
  *(int *)(param_1 + 0x8ec) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8f0) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8f0) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  return;
}

