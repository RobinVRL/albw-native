#include "ghidra_types.h"

extern int *DAT_0023274c;

// USA 002326C0 <- EU 002326C0 (Ghidra, non-matching)
// GLOBAL DAT_0023274c int *

void func_002326C0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_0023274c;
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_2 + 8))(param_2);
    do {
      if (piVar2 == piVar1) goto LAB_00232700;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  param_2 = (int *)0x0;
LAB_00232700:
  if (((char)param_2[0x30] == '\0') || (param_2[0x2c] != param_1)) {
    param_2[0x2c] = param_1;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined1 *)((int)param_2 + 0xc1) = 0;
    if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
      *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4) * 4) = param_2;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
  }
  return;
}

