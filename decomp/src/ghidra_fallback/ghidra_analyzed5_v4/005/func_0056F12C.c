#include "ghidra_types.h"


// USA 0056F12C <- EU 0056F104 (Ghidra, non-matching)

int func_0056F12C(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

