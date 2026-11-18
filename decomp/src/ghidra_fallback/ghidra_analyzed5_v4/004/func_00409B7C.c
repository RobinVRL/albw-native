#include "ghidra_types.h"


// USA 00409B7C <- EU 00409B5C (Ghidra, non-matching)

void func_00409B7C(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x29e0);
  if ((*piVar1 != 0) &&
     ((puVar2 = (undefined4 *)(*piVar1 + 0x29e0), (int *)*puVar2 != piVar1 ||
      (*puVar2 = 0, *piVar1 != 0)))) {
    *piVar1 = 0;
  }
  return;
}

