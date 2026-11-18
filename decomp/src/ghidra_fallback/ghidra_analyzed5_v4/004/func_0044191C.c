#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_00441910;

// USA 0044191C <- EU 004418FC (Ghidra, non-matching)
// GLOBAL DAT_00441910 int

int * func_0044191C(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00441910 + 0xac;
  *param_1 = DAT_00441910;
  param_1[0xe] = iVar2;
  piVar1 = func_004B9AA0(param_1);
  return piVar1;
}

