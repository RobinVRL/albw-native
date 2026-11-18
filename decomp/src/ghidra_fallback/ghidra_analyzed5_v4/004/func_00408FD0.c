#include "ghidra_types.h"


// USA 00408FD0 <- EU 00408FB0 (Ghidra, non-matching)

void func_00408FD0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

