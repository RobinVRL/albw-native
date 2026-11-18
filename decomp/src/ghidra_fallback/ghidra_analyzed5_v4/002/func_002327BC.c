#include "ghidra_types.h"

extern int *DAT_00232814;

// USA 002327BC <- EU 002327BC (Ghidra, non-matching)
// GLOBAL DAT_00232814 int *

void func_002327BC(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00232814;
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_2 + 8))(param_2);
    do {
      if (piVar2 == piVar1) goto LAB_002327fc;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  param_2 = (int *)0x0;
LAB_002327fc:
  *param_1 = param_2;
  param_2[0x2c] = (int)param_1;
  *(undefined1 *)((int)param_2 + 0xc1) = 1;
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}

