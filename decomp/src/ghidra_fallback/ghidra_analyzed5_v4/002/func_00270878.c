#include "ghidra_types.h"

extern float func_002707A4(int param_1,int param_2);
extern float fRam00270940;
extern float DAT_00270944;

// USA 00270878 <- EU 002708A0 (Ghidra, non-matching)
// GLOBAL DAT_00270944 float
// GLOBAL UNK_00270940 float

void func_00270878(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (*(char *)(iVar2 + 0x35) != '\0') {
      return;
    }
    if (*(uint *)(iVar2 + 0x18) < *(uint *)(iVar2 + 0x1c)) {
      return;
    }
    iVar2 = 0x1e;
  }
  else {
    iVar2 = 1;
  }
  fVar3 = func_002707A4(param_1,iVar2);
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 == 0) {
    iVar1 = 0x1e;
  }
  else {
    iVar1 = 1;
  }
  *(int *)(iVar2 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    fVar3 = fRam00270940;
  }
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    *(float *)(iVar2 + 0x20) = fVar3;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar2 + 0x20) = DAT_00270944 / fVar3;
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 1;
  return;
}

