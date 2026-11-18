#include "ghidra_types.h"


// USA 0057E050 <- EU 0057E028 (Ghidra, non-matching)

undefined4 func_0057E050(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x30);
    for (piVar2 = (int *)(*(int *)(iVar1 + 0x28) - iVar3);
        piVar2 != (int *)((*(int *)(param_1 + 4) + 0x24) - *(int *)(*(int *)(param_1 + 4) + 0x30));
        piVar2 = (int *)(*(int *)((int)piVar2 + iVar3 + 4) - iVar3)) {
      iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

