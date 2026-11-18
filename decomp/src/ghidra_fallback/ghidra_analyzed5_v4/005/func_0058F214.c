#include "ghidra_types.h"


// USA 0058F214 <- EU 0058F1EC (Ghidra, non-matching)

void func_0058F214(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x2f0);
  uVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      if (uVar3 < uVar1) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x2f8) + uVar3 * 4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      (**(code **)(*piVar2 + 0x58))(piVar2,param_2);
      uVar1 = *(uint *)(param_1 + 0x2f0);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}

