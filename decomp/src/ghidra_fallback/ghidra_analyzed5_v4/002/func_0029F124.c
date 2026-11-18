#include "ghidra_types.h"

extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int *DAT_0029f1b8;
extern int DAT_0029f1bc;
extern int DAT_0029f1c0;
extern undefined4 DAT_0029f1c4;

// USA 0029F124 <- EU 0029F100 (Ghidra, non-matching)
// GLOBAL DAT_0029f1b8 int *
// GLOBAL DAT_0029f1bc int
// GLOBAL DAT_0029f1c0 int
// GLOBAL DAT_0029f1c4 undefined4

int * func_0029F124(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = func_00150E40(param_1,param_2);
  piVar1 = DAT_0029f1b8;
  piVar2[0x104] = DAT_0029f1bc;
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  piVar2[0x105] = (int)(piVar2 + 0x103);
  piVar2[0x106] = iVar3;
  piVar2[0x107] = iVar4;
  iVar3 = DAT_0029f1c0;
  piVar2[0x103] = DAT_0029f1c0 + 0xbc;
  piVar2[200] = iVar3 + 0x58;
  *piVar2 = iVar3;
  iVar3 = func_0054D964((int)piVar2,0);
  piVar2[0x108] = iVar3;
  iVar4 = (int)(short)param_2[0xb];
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  piVar2[0x109] = iVar4;
  *(int *)(iVar3 + 4) = piVar2[0xf4];
  *(int *)(iVar3 + 8) = piVar2[0xf5];
  *(int *)(iVar3 + 0xc) = piVar2[0xf6];
  *(short *)(piVar2[0x108] + 0x28) = (short)DAT_0029f1c4;
  func_004356B4((int *)piVar2[0x108]);
  return piVar2;
}

