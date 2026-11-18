#include "ghidra_types.h"

extern int func_0010B6D4(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010B6E0(int *param_1);
extern int DAT_00107d34;

// USA 00107CFC <- EU 00107CFC (Ghidra, non-matching)
// GLOBAL DAT_00107d34 int

int * func_00107CFC(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_0010B6E0(param_1);
  iVar2 = DAT_00107d34 + 0x4c;
  *piVar1 = DAT_00107d34;
  piVar1[1] = iVar2;
  func_0010B6D4((int)piVar1,4,3);
  *(undefined1 *)(piVar1 + 9) = 1;
  return piVar1;
}

