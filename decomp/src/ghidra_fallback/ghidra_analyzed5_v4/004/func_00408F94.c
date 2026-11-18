#include "ghidra_types.h"


// USA 00408F94 <- EU 00408F74 (Ghidra, non-matching)

undefined4 func_00408F94(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

