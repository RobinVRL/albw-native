#include "ghidra_types.h"


// USA 0040C584 <- EU 0040C564 (Ghidra, non-matching)

void func_0040C584(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x114);
  iVar2 = *piVar1;
  if ((iVar2 != 0) &&
     ((*(int **)(iVar2 + 0x114) != piVar1 || (*(undefined4 *)(iVar2 + 0x114) = 0, *piVar1 != 0)))) {
    *piVar1 = 0;
  }
  return;
}

