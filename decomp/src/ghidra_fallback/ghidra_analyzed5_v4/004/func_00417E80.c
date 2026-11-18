#include "ghidra_types.h"

extern int func_0041CE60(undefined4 *param_1,int param_2);

// USA 00417E80 <- EU 00417E60 (Ghidra, non-matching)

void func_00417E80(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      func_0041CE60(piVar1 + -0x6a,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}

