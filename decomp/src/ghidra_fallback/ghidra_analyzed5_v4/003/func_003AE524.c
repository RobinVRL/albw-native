#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);

// USA 003AE524 <- EU 003AE500 (Ghidra, non-matching)

void func_003AE524(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x2cc);
  if (param_1[5] <= param_1[2]) {
    return;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    param_1[3] = *piVar1;
    *piVar1 = iVar2;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  func_0010F1DC(param_1,piVar1 + 1);
  param_1[2] = param_1[2] + 1;
  return;
}

