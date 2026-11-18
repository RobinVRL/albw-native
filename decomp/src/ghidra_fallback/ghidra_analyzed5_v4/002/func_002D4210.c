#include "ghidra_types.h"


// USA 002D4210 <- EU 002D41EC (Ghidra, non-matching)

void func_002D4210(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x20) + 4);
  if (0 < iVar5) {
    do {
      puVar2 = (ushort *)(**(int **)(*(int *)(param_1 + 4) + 0x20) + iVar3 * 0x154);
      if (puVar2 != (ushort *)0x0) {
        if (param_2 == 0) {
          uVar4 = *puVar2 & 0xfbff;
        }
        else {
          uVar4 = *puVar2 | 0x400;
        }
        *puVar2 = uVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (param_2 != 1) {
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x4000;
  }
  if (param_2 == 0) {
    uVar1 = *(uint *)(iVar3 + 0x164) & 0xfffeffff;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x164) | 0x10000;
  }
  *(uint *)(iVar3 + 0x164) = uVar1;
  return;
}

