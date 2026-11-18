#include "ghidra_types.h"

extern int func_0030D010(int *param_1);
extern int func_0030DF20(int param_1);
extern int DAT_0030e0f8;

// USA 0030E0F0 <- EU 0030E0CC (Ghidra, non-matching)
// GLOBAL DAT_0030e0f8 int

int * func_0030E0F0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0030e0f8 + 0x58;
  *param_1 = DAT_0030e0f8;
  param_1[3] = iVar2;
  func_0030DF20((int)param_1);
  piVar1 = func_0030D010(param_1);
  return piVar1;
}

