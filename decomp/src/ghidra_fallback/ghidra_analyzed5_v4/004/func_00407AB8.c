#include "ghidra_types.h"

extern int func_001110BC(int *param_1,int param_2);

// USA 00407AB8 <- EU 00407A98 (Ghidra, non-matching)

void func_00407AB8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      func_001110BC(piVar1 + -0x3f,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}

