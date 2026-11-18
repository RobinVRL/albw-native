#include "ghidra_types.h"

extern int func_0049B0E4(int param_1);
extern int func_0049B194(int *param_1);
extern int DAT_004a1244;

// USA 004A1240 <- EU 004A1218 (Ghidra, non-matching)
// GLOBAL DAT_004a1244 int

int * func_004A1240(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_004a1244 + 100;
  *param_1 = DAT_004a1244;
  param_1[6] = iVar2;
  func_0049B0E4((int)param_1);
  piVar1 = func_0049B194(param_1);
  return piVar1;
}

