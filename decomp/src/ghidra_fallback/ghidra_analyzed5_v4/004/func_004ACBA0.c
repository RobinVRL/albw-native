#include "ghidra_types.h"


// USA 004ACBA0 <- EU 004ACB78 (Ghidra, non-matching)

void func_004ACBA0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x76b4);
  piVar4 = piVar1 + *(int *)(param_1 + 0x76ac);
  while (piVar1 != piVar4) {
    iVar2 = *piVar1;
    piVar1 = piVar1 + 1;
    puVar3 = *(undefined4 **)(iVar2 + 8);
    if (param_2 < *(uint *)(iVar2 + 4)) {
      puVar3 = puVar3 + param_2 * 3;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  return;
}

