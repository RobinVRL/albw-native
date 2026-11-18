#include "ghidra_types.h"


// USA 00407A1C <- EU 004079FC (Ghidra, non-matching)

void func_00407A1C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 8) == piVar1) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    if (*(int **)(*piVar1 + 0xc) == piVar1) {
      *(undefined4 *)(*piVar1 + 0xc) = 0;
    }
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return;
}

