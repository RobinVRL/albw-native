#include "ghidra_types.h"

extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int DAT_001e5f90;
extern int *DAT_001e5f94;
extern int DAT_001e5f98;

// USA 001E5F14 <- EU 001E5F14 (Ghidra, non-matching)
// GLOBAL DAT_001e5f90 int
// GLOBAL DAT_001e5f94 int *
// GLOBAL DAT_001e5f98 int

int * func_001E5F14(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)func_00324A30(param_1,param_2);
  iVar1 = DAT_001e5f90;
  piVar3[200] = DAT_001e5f90 + 0x70;
  piVar2 = DAT_001e5f94;
  *piVar3 = iVar1;
  *(undefined1 *)((int)piVar3 + 0x475) = 0;
  iVar1 = DAT_001e5f98;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  piVar3[0x11e] = *piVar2;
  piVar3[0x11f] = iVar4;
  piVar3[0x120] = iVar5;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  piVar3[0x121] = *piVar2;
  piVar3[0x122] = iVar4;
  piVar3[0x123] = iVar5;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  piVar3[0x124] = *piVar2;
  piVar3[0x125] = iVar4;
  piVar3[0x126] = iVar5;
  iVar4 = piVar2[1];
  iVar5 = *piVar2;
  piVar3[0x129] = piVar2[2];
  piVar3[0x128] = iVar4;
  piVar3[0x127] = iVar5;
  piVar3[0x12a] = iVar1;
  *(undefined1 *)(piVar3 + 299) = 0;
  return piVar3;
}

