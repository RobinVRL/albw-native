#include "ghidra_types.h"


// USA 0048D210 <- EU 0048D1E8 (Ghidra, non-matching)

void func_0048D210(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xcc);
  iVar1 = *(int *)(param_1 + 0xc4);
  while (piVar2 = (int *)(iVar1 - iVar4),
        piVar2 != (int *)((param_1 + 0xc0) - *(int *)(param_1 + 0xcc))) {
    (**(code **)(*piVar2 + 0x10))(piVar2);
    iVar1 = *(int *)((int)piVar2 + iVar4 + 4);
  }
  for (puVar3 = *(undefined4 **)(param_1 + 0xd8);
      puVar3 != (undefined4 *)(*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xd0) * 4);
      puVar3 = puVar3 + 1) {
    (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3);
  }
  return;
}

