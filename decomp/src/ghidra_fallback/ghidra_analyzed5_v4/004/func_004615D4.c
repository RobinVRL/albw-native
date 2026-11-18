#include "ghidra_types.h"

extern int func_00488234(undefined4 *param_1,uint param_2);
extern int DAT_00461610;
extern int DAT_00461614;

// USA 004615D4 <- EU 004615AC (Ghidra, non-matching)
// GLOBAL DAT_00461610 int
// GLOBAL DAT_00461614 int

int * func_004615D4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)func_00488234(param_1,4);
  iVar1 = DAT_00461614;
  iVar3 = DAT_00461610 + 0xac;
  *piVar2 = DAT_00461610;
  piVar2[0xe] = iVar3;
  *(undefined2 *)(piVar2 + 0x55) = 0;
  *(undefined2 *)((int)piVar2 + 0x156) = 0xffff;
  piVar2[0x56] = iVar1;
  piVar2[0x57] = 0;
  piVar2[0x57] = piVar2[7];
  *(undefined2 *)((int)piVar2 + 0x156) = 7;
  *(undefined2 *)(piVar2 + 0x55) = 5;
  return piVar2;
}

