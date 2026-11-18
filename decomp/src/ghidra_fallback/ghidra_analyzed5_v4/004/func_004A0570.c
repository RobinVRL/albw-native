#include "ghidra_types.h"

extern int func_0049B0E4(int param_1);
extern int func_0049B194(int *param_1);
extern int DAT_004a0574;

// USA 004A0570 <- EU 004A0548 (Ghidra, non-matching)
// GLOBAL DAT_004a0574 int

int * func_004A0570(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_004a0574 + 100;
  *param_1 = DAT_004a0574;
  param_1[6] = iVar2;
  func_0049B0E4((int)param_1);
  piVar1 = func_0049B194(param_1);
  return piVar1;
}

