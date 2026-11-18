#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_004A1520();
extern int DAT_0049b190;

// USA 0049B194 <- EU 0049B16C (Ghidra, non-matching)
// GLOBAL DAT_0049b190 int

int * func_0049B194(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = DAT_0049b190;
  *param_1 = DAT_0049b190;
  param_1[6] = iVar1 + 100;
  puVar2 = func_0049116C(param_1 + 0x15);
  piVar3 = func_004A1520(puVar2 + -0x15);
  return piVar3;
}

