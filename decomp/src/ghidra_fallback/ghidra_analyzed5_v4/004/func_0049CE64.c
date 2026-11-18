#include "ghidra_types.h"

extern int func_0049B0E4(int param_1);
extern int func_0049B194(int *param_1);
extern int DAT_0049ce68;

// USA 0049CE64 <- EU 0049CE3C (Ghidra, non-matching)
// GLOBAL DAT_0049ce68 int

int * func_0049CE64(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0049ce68 + 0x6c;
  *param_1 = DAT_0049ce68;
  param_1[6] = iVar2;
  func_0049B0E4((int)param_1);
  piVar1 = func_0049B194(param_1);
  return piVar1;
}

