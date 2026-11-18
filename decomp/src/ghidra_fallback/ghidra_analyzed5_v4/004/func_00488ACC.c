#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_00488ab8;

// USA 00488ACC <- EU 00488AA4 (Ghidra, non-matching)
// GLOBAL DAT_00488ab8 int

int * func_00488ACC(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00488ab8 + 0xac;
  *param_1 = DAT_00488ab8;
  param_1[0xe] = iVar2;
  piVar1 = func_0044191C(param_1);
  return piVar1;
}

