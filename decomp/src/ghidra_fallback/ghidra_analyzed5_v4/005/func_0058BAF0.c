#include "ghidra_types.h"


// USA 0058BAF0 <- EU 0058BAC8 (Ghidra, non-matching)

int func_0058BAF0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar1 = *(int **)(param_1 + 0x14);
    uVar3 = *(uint *)(param_1 + 0x10);
    do {
      piVar4 = piVar1;
      if (uVar2 < uVar3) {
        piVar4 = piVar1 + uVar2;
      }
      if (*(int *)(*piVar4 + 4) == param_2) {
        if (uVar2 < uVar3) {
          piVar1 = piVar1 + uVar2;
        }
        return *piVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar3);
  }
  return 0;
}

