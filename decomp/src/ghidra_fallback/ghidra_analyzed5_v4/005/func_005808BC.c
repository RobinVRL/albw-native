#include "ghidra_types.h"


// USA 005808BC <- EU 00580894 (Ghidra, non-matching)

void func_005808BC(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  software_interrupt(0x28);
  piVar1 = (int *)*param_2;
  iVar2 = param_2[1];
  *param_1 = (int)param_1 - (int)piVar1;
  param_1[1] = (int)param_2 - (iVar2 + (uint)(param_1 < piVar1));
  return;
}

