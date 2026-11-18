#include "ghidra_types.h"

extern int func_0040DA3C(int param_1,int param_2,undefined4 param_3);

// USA 00407AF4 <- EU 00407AD4 (Ghidra, non-matching)

void func_00407AF4(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      func_0040DA3C((int)(piVar1 + -0x3f),param_2,param_3);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}

