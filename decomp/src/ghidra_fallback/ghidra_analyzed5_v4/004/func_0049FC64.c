#include "ghidra_types.h"

extern int func_0049FB60(int *param_1);

// USA 0049FC64 <- EU 0049FC3C (Ghidra, non-matching)

void func_0049FC64(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  func_0049FB60(param_2);
  piVar2 = (int *)param_1[2];
  while (piVar1 = piVar2, piVar1 != (int *)0x0) {
    param_1 = piVar1;
    piVar2 = (int *)piVar1[2];
  }
  param_1[2] = (int)param_2;
  param_2[3] = (int)param_1;
  *param_2 = *param_1;
  return;
}

