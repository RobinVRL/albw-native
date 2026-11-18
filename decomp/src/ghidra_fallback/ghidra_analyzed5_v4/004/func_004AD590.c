#include "ghidra_types.h"


// USA 004AD590 <- EU 004AD568 (Ghidra, non-matching)

void func_004AD590(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)(param_1 + 0x76ac);
  piVar4 = *(int **)(param_1 + 0x76b4);
  iVar3 = *piVar2;
  piVar1 = piVar4;
  while( true ) {
    if (piVar1 == piVar4 + iVar3) {
      if (iVar3 < *(int *)(param_1 + 0x76b0)) {
        piVar4[iVar3] = param_2;
        *piVar2 = *piVar2 + 1;
      }
      return;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return;
}

