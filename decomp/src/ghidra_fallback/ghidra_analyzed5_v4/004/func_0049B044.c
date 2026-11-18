#include "ghidra_types.h"


// USA 0049B044 <- EU 0049B01C (Ghidra, non-matching)

void func_0049B044(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
  iVar2 = *(int *)(param_1 + 0x4c);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x44) - iVar2);
  while (puVar1 != (undefined4 *)((param_1 + 0x40) - *(int *)(param_1 + 0x4c))) {
    if ((puVar1[1] == 0) ||
       ((param_2 != (undefined4 *)0x0 || param_3 != (undefined4 *)0x0 &&
        ((puVar1 < param_2 || (param_3 <= puVar1)))))) {
      puVar1 = (undefined4 *)(*(int *)((int)puVar1 + iVar2 + 4) - iVar2);
    }
    else {
      (**(code **)*puVar1)(puVar1);
      iVar2 = *(int *)(param_1 + 0x4c);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x44) - iVar2);
    }
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffd;
  return;
}

