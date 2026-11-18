#include "ghidra_types.h"

extern int func_003AAC44(int param_1);
extern int func_003AB048(undefined4 *param_1,uint *param_2);
extern int DAT_00338b48;
extern int DAT_00338b4c;

// USA 00338B24 <- EU 00338B00 (Ghidra, non-matching)
// GLOBAL DAT_00338b48 int
// GLOBAL DAT_00338b4c int

int * func_00338B24(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)func_003AB048(param_1,param_2);
  iVar2 = DAT_00338b4c;
  iVar1 = DAT_00338b48;
  piVar3[200] = DAT_00338b48 + 0x54;
  *piVar3 = iVar1;
  piVar3[0x103] = iVar2;
  piVar3[0x105] = iVar2;
  *(undefined2 *)(piVar3 + 0x106) = 5;
  *(undefined1 *)((int)piVar3 + 0x41a) = 1;
  func_003AAC44((int)piVar3);
  return piVar3;
}

